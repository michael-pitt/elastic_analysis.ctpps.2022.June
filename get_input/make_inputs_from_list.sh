#!/bin/bash

#----------------------------------------------------------------------------------------------------

files_per_block="10"

function FlushBuffer()
{
	# make work directory
	dir="../output/$tag/block$block_idx"
	mkdir -p "$dir"

	# make input file
	cat "input_files_template.h" | sed "\
			s|\$FILES|$buffer|;\
		" > "$dir/input_files.h"

	# make parameters.h
	(
		echo "#include \"../parameters.h\""
	) > "$dir/parameters.h"

	buffer=""
	let buffer_size=0
	let block_idx+=1
}

function MakeOne()
{
	local path="$1"
	local tag="$2"

    topdir="../output/$tag"
	mkdir -p "$topdir"
	
	# get input files
	buffer=""
	bufferBlocks=""
	buffer_size="0"
	block_idx="0"
	for f in `find $path -type f`
	do
		if [ -n "$buffer" ]
		then
			buffer="$buffer,\n"
		fi

		buffer="${buffer}\t\t\"${f}\""
		let buffer_size+=1

		if [ "$buffer_size" -ge "$files_per_block" ]
		then
			bufferBlocks="${bufferBlocks}\t\tdistilledNtuples.push_back(\"block${block_idx}\");\n"
			FlushBuffer
		fi
	done
	
	if [ "$buffer_size" -gt "0" ]
	then
		bufferBlocks="${bufferBlocks}\t\tdistilledNtuples.push_back(\"block${block_idx}\");\n"
		FlushBuffer
	fi
	
	# make parameters file
	cat "parameters_template.h" | sed "\
			s|\$BLOCKS|$bufferBlocks|;\
		" > "$topdir/parameters.h"	
}


function ProcessInput()
{
    
if [[ -d $1 ]]; then
  echo "INFO: Making folder for $1"
  Dname=`basename $1`
  MakeOne $1 $Dname
  
elif [[ -f $1 ]]; then
  echo "INFO: Extracting a list of folders from $1"
  while read -r line; do
    if [[ -d $line ]]; then
	  echo $line
	  Dname=`basename $line`
	  MakeOne $line $Dname
	fi
  done < $1
  
else
  echo "ERROR: The input is neither a file nor a directory"
fi

}

#----------------------------------------------------------------------------------------------------

if [ $# -eq 0 ]; then
  echo "No arguments supplied (need a file with folders or a folder)"
  exit 1
fi

ProcessInput $1


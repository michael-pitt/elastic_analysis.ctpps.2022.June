//----------------------------------------------------------------------------------------------------

transform swToHours = scale(1/3600, 1);

//----------------------------------------------------------------------------------------------------

string run_datasets[];
int runs[];
real ts_from[], ts_to[];
pen colors[];

void AddRun(string ds, int r, real f, real t, pen p = yellow)
{
	run_datasets.push(ds);
	runs.push(r);
	ts_from.push(f);
	ts_to.push(t);
	colors.push(p);
}

AddRun("160/0.30", 0, 72846, 73835);
AddRun("131/0.30", 0, 74740, 84017);
AddRun("130/0.30", 0, 84384, 97444);
AddRun("130/0.25", 0, 98038, 105295);

// in hours
real time_min = 0;
real time_max = 5;

//----------------------------------------------------------------------------------------------------

void DrawRunBands(string ds_filter="", real y_min=0, real y_max=0, bool details=true)
{
	for (int i : runs.keys)
	{
		if (ds_filter != "")
			if (run_datasets[i] != ds_filter)
				continue;

		//yaxis(XEquals(ts_from[i]/3600, false), dashed);
		//yaxis(XEquals(ts_to[i]/3600, false), dashed);
		real x_min = ts_from[i]/3600, x_max = ts_to[i]/3600;

		pen p = (details) ? colors[i]+opacity(0.3) : yellow+opacity(0.3);
		filldraw((x_min, y_min)--(x_max, y_min)--(x_max, y_max)--(x_min, y_max)--cycle, p, nullpen);

		if (details)
		{
			label("{\SmallerFonts " + run_datasets[i] + "}", ((x_min + x_max)/2, y_max), S);
			//label("{\SmallerFonts " + run_datasets[i] + format("/%u}", runs[i]), ((x_min + x_max)/2, y_max), S);
			//label("{\SmallerFonts " + format("/%u}", runs[i]), ((x_min + x_max)/2, y_max), S);
		}
	}
}

//----------------------------------------------------------------------------------------------------

void DrawRunBoundaries(string ds_filter="")
{
	for (int i : runs.keys)
	{
		if (ds_filter != "")
			if (run_datasets[i] != ds_filter)
				continue;

		yaxis(XEquals(ts_from[i]/3600, false), dashed);
		yaxis(XEquals(ts_to[i]/3600, false), dashed);
	}
}

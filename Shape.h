#ifdef SHAPE_H
#define SHAPE_H

#include "Points.h"

pt * eight (int u) //reads input n from command line and prints n points used to construct the figure of 8
{
	pt * fig = (pt *) new pt [u];
	int k = (u + 1) / 2;
	fig[k-1].x = fig[k-1].y = 0;

	polygon_maker (fig, k);
	if (u % 2)
		for (int i = 0; i < k-1; ++i)
			fig[k+i] = fig[i];
	else
		polygon_maker (&fig[k], k+1);
	reflector (fig, k-1);
	
	return fig;
}

#endif
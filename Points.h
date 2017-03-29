#ifndef POINTS_H
#define POINTS_H

#include <cmath>
#include <new>

#define BOT_SIZE 20 //bot size in pixels
#define SPACING 1.5 //spacing between bots in terms of fraction of bot size
#define SF 1 //Scaling Factor

struct pt //structure to hold coordinates of points
{
	double x, y;
};

pt poltoxy (double r, double th) //function to convert polar coordinates to cartesian
{
	pt point;
	point.x = r * std::cos(th);
	point.y = r * (std::sin(th) - 1);
	return point;
}

void polygon_maker (pt * fig, int k) //makes regular polygon with k sides
{
	double th = (2 * M_PI) / k;
	double r = ((BOT_SIZE * SPACING) / th), st;
	int l = k/2, p = l;

	if (k % 2)
		st = (th / 2) - (M_PI/2);

	else
	{
		st = th - (M_PI/2);	
		p = l-1;
		fig[p].x = 0;
		fig[p].y = -(2*r);
	}

	for (int i = 0; i < p; ++i, st += th)
	{
		fig[i] = poltoxy (r, st);
		fig[l+i].x = -fig[i].x;
		fig[l+i].y = fig[i].y;
	}
}

void reflector (pt * fig, int k) //reflects a shape about the x-axis
{
	for (int i = 0; i < k; ++i)
		fig[i].y = -fig[i].y;
}

#endif

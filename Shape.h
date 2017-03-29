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

pt * A (int n) //reads input n from command line and prints n points used to construct the figure of A
{
  std::vector<pt> vec;
  int k;                  // k is the number of bots present on left and right arms of A
  double v=(n+1.6)/2.6;   // This formula has been derived in the documentation.
  if((v-(int)v)>0.5)
    k=v+1;
  else
    k=v;
  vec.push_back(pt(0, k-1));
  for(int t=1; t<=k-1; t++)
    {
      // The ratio of the height of A versus its base(considering it as a triangle) is 1:1
      vec.push_back(pt((-SF*t), (k-1-(2*SF*t))));
      vec.push_back(pt((SF*t), (k-1-(2*SF*t))));
    }
  int rem=n-(2*k-1);
  double f=(2*(k-1))/3;   //The ratio of the height of the middle arm of A to the total height of A is 1:3
  double sub=(2*SF*f)/(float)(rem+1);
  if(n==4)
    vec.push_back(pt(0,0));
  else
    {
      for(int t=1; t<=rem; t++)
        {
          vec.push_back(pt((SF*f-(sub*t)), (k-1-(2*SF*f))));
        }
    }
  return vec;
}

#endif

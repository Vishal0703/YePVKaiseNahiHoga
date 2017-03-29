#include "SwarmBot.h"
#include "Shape.h"

void npush (nheap * heap, int i)
{
	heap[i].h = p;
	(heap->h)[heap->last] = p;
	++heap->last;
	while (i >= 0)
	{
		if ((heap->h)[i].dist <= (heap->h)[i/2].dist)
		{
			nheap l = (heap->h)[i/2];
			(heap->h)[i/2] = (heap->h)[i];
			(heap->h)[i] = l;
		}
	}
}

void nheapify (nheap * heap, int n)
{
	for (int i = n/2; i >= 0; --i)
		nhpush (heap, i)
}

nheap * nmake (vector<SwarmBot> bots, pt * fig, int n)
{
	nheap * heap = new nheap[n];
	for (int i = 0; i < n; ++i)
	{	
		heap[i].h = new map [n];
		for (int j = 0; j < n; ++j)
		{
			heap[i].h[j].dist = (((bots[i].x - fig[j].x) * (bots[i].x - fig[j].x)) + ((bots[i].y - fig[j].y) * (bots[i].y - fig[j].y)));
			heap[i].h[j].ix = j;
		}
		nheapify (heap[i], n);
	}
	return heap;
}

uheap npop (nheap * heap)
{
	i = 0;
	while (i < heap.last)
	{
		if	
	}
}

nheap * nmake (vector<SwarmBot> bots, pt * fig, int n)
{
	nheap * heap = new nheap[n];
	for (int i = 0; i < n; ++i)
	{	
		heap[i].h = new map [n];
		for (int j = 0; j < n; ++j)
		{
			heap[i].h[j].dist = (((bots[i].x - fig[j].x) * (bots[i].x - fig[j].x)) + ((bots[i].y - fig[j].y) * (bots[i].y - fig[j].y)));
			heap[i].h[j].ix = j;
		}
		nheapify (heap[i], n);
	}
	return heap;
}



int main (int argc, char * argv[])
{
	int BOT_ID = std::stoi(argv[1]);
	vector<SwarmBot> bots = getSwarmBots();
	std::string cmd = "./" + (std::string(argv[2])) + " " + (std::to_string(42));
	int n = bots.size();
	system (cmd);
	pt * fig = getPoints ();
}
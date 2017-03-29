#ifndef FORM_H
#define FORM_H

#include "Shape.h"

struct nmap
{
	double dist;
	int ix;
}

struct umap
{
	double dist;
	int ix, botid;

}

struct nheap
{
	nmap * h;
	int last;
}

struct uheap
{
	umap * h;
	int last;
}

void nheapify (nheap heap, int i)
{
	int l = 2*i + 1, r = l + 1;

	if (l >= heap.last)
		return;
	else if (r >= heap.last)
	{	(heap.h[l].dist < heap.h[i].dist)
			{
				nmap t = heap.h[l];
				heap.h[l] = heap.h[i];
				heap.h[i] = t;
			}
			nheapify (heap, l);
		}

	else if (heap.h[r].dist < heap.h[i].dist)
		{
			nmap t = heap.h[r];
			heap.h[r] = heap.h[i];
			heap.h[i] = t;
		}
		nheapify (heap, r);

	return;
}

int* buildmaxheap(int a[], int n)
{
    int heapsize = n;
    int j;
    for (j = n/2; j >= 0; j--) {
        maxheapify(a, j, heapsize);
    }
    return a;
}
void maxheapify(int a[], int i, int heapsize)
{
    int temp, largest, left, right, k;
    left = (2*i+1);
    right = ((2*i)+2);
    if (left >= heapsize)
        return;
    else {
        if (left < (heapsize) && a[left] > a[i]) 
            largest = left;
        else
            largest = i;
        if (right < (heapsize) && a[right] > a[largest])  
            largest = right;
        if (largest != i) {
            temp = a[i];
            a[i] = a[largest];
            a[largest] = temp;
            maxheapify(a, largest, heapsize);
        }
    }
}

void insert (nheap * heap, int i)
{
	(heap->h)[i] = p;
	++heap->last;
	int l = 2*i, r = l + 1;
	while (r < heap->last)
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

#endif
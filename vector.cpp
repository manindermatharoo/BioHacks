#include "DistanceAlgorithm.cpp"
#include "DoublyLinkedList.hpp"
#include "SequentialList.cpp"
#include "SequentialList.hpp"
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <math.h>
#include <fstream>

using namespace std;

 const char alphabet [17] = {A, B, C, D, E, F, G, H, I , J, K, L, M , N, O, P, Q};
 const double charge [17] = {2.40, 2.20, 2.46, 2.44,
 							 2.45, 2.46, 2.45, 2.45, 
							 2.45, 2.50, 2.44, 2.43, 
							 2.45, 2.43, 2.52, 2.55, 
							 2.44, 2.44, 2.49, 2.44};
ifstream myfile;
myfile.open("output1.txt");
string sequence = fin<<;


DoublyLinkedList polypeptide;

void parse(string sequence)
{
	double* newcharge[sequence.length];
	for (int i=0; i< sequence.length; i++)
	{
		for (int j=0; j<alphabet.length; j++)
		{
			if (sequence.at(i)==alphabet[j])
			{
				newcharge[i] = charge [j];
			}
		}
	}
	
	for (int i=0; i< sequence.length; i++)
	{
		polypeptide.insert(sequence.at(i), 0, 0, newcharge[i], i);
	}
}

SequentialList PotentialSulfide(string sequence)
{
	int sulfidecount = 0;
	for (int i=0; i< sequence.length; i++)
	{
		if (sequence.at(i) == "C")
		{
			sulfidecount++;
		}
	}
	SequentialList sulfideindex(sulfidecount);
	for (int k=0; k<sulfidecount.length; k++)
	{
		for (int j=0; j< sequence.length; j++)
		{
			if (sequence.at(j)== "C")
			{
				sulfideindex[k]= j;
			}
		}
	}
	return sulfideindex;
}

int ElectroDistance (string sequence, int A, int B)
{
	/*
	int firstA =0;
	int firstB =0;
	int lastA =0;
	int lastB =0;
	for (int i=0; i< sequence.length; i++)
	{
		if (sequence.at(i) == A)
		{
			for (int j=sequence.length; j>0; j++)
			{
				
			}
			break;
		}
		first++;
	}
	return;
	*/
	
}

void SulfideChange ()
{
	parse(sequence);
	SequentialList sulfideindex = new PotentialSulfide(sequence);
	int* distance= new ;
	
	if (sulfideindex.length%2!=0)
	{
		sulfideindex.remove(ciel(sulfideindex->size()/2));
	}
	
	for (int k=floor(sulfideindex.size()/2); k>0; k--)
	{
		for (int i=sulfideindex[k-1]; i>0; i--)
		{
			polypeptide.replacey(i) += 10*(sulfideindex[k]-sulfideindex[k-1]);
		}
		for (int i=sulfideindex[k]; i<sulfide.size(); i++)
		{
			polypeptide.replacey(i) += 10*(sulfideindex[k]-sulfideindex[k-1]);
		}
	}
	
	for (int i=-polypeptide.size()/2; i<polypeptide.size()/2; i++)
	{
			polypeptide.GetNode(i+polypeptide.size()).xvalue = i;
	}
	
	for (int k=floor(sulfideindex.size()/2); k>0; k--)
	{
		for (int i=sulfideindex[k-1]; i>0; i--)
		{
			polypeptide.Getnode(i).xvalue += 10*((sulfideindex[k]-sulfideindex[k-1])/2);
		}
		for (int i=sulfideindex[k]; i<sulfide.size(); i++)
		{
			polypeptide.GetNode(i).xvalue -= 10*((sulfideindex[k]-sulfideindex[k-1])/2);
		}
	}
	
}

/*
Bool[] ElectoBonds ()

void ElectroChange (double newcharge, int sulfidecount)
{
	int* electroindex = new PotentialElectro(sequence);
	int distance=0;
	
	if (electroindex.length%2==0)
	{
		for (int i=0; i<electroindex.length; i+2)
		{
			if (sulfideindex.length == i)
			{
				int* aminodistance [i];
				for (int j=0; j<aminodistance.)
				distance= ElectroDistance(sequence, sulfideindex[i], sulfideindex[sulfideindex.length - (i+1)]);
			}
		}

	}
	else
	{
		
	}
}
*/

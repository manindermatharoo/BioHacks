#include <sstream>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>
#include <cstdlib>
#include <fstream>
using namespace std;

bool findprotein (string *all)
{
	int start=-1;
	int end=-1;
	int x = 7;
	string sub;
	for (int i = 0; i<(*all).length()-2; i++)
	{
		if (i==0)
			sub = (*all).substr(i,3);
		else
			sub = (*all).substr(i,3);
		if (sub == "AUG")
		{
			start = i;
			break;
		}
	}
	if (start < 0)
	{
		return 0;
	}
	for (int i = start; i<(*all).length()-2; i++)
	{
		if (i==0)
			sub = (*all).substr(i,3);
		else
			sub = (*all).substr(i+1,3);
		if (sub == "UAA" || sub == "UAG" || sub == "UGA")
		{
			end = i-1;
			break;
		}
	}
	if (end<0)
	{
		return 0;
	}
	(*all) = (*all).substr(start, end-1);
	return 1;
}


	
string transcribe(string dna)
{
	string transcribed = dna;
	for (int i = 0; i<transcribed.length(); i++)
	{
	 if (transcribed.at(i) == 'T')
		{
			transcribed.replace(i,i,"U");
		}
	}
	cout << transcribed;
	return transcribed;
}

int isAlpha(string transcribed)
{
	double sum = 0;
	for (int i = 0; i<transcribed.length(); i++)
	{
	 if (transcribed.at(i) == 'E')
		{
			sum += 1.59 - 0.52;
		}
	 if (transcribed.at(i) == 'A')
		{
			sum += 1.41 - 0.72;
		}
	if (transcribed.at(i) == 'L')
		{
			sum += 1.34 - 1.22;
		}
	if (transcribed.at(i) == 'M')
		{
			sum += 1.30 - 1.14;
		}
	if (transcribed.at(i) == 'Q')
		{
			sum += 1.27 - 0.98;
		}
	if (transcribed.at(i) == 'K')
		{
			sum += 1.23 - 0.69;
		}
	 if (transcribed.at(i) == 'R')
		{
			sum += 1.21- 0.84;
		}
	if (transcribed.at(i) == 'H')
		{
			sum += 1.05 - 0.80;
		}
	if (transcribed.at(i) == 'V')
		{
			sum += 0.90 - 1.87;
		}
	if (transcribed.at(i) == 'I')
		{
			sum += 1.09 - 1.67;
		}
	if (transcribed.at(i) == 'Y')
		{
			sum += 0.74 - 1.45;
		}
	 if (transcribed.at(i) == 'C')
		{
			sum += 0.66 - 1.40;
		}
	if (transcribed.at(i) == 'W')
		{
			sum += 1.02 - 1.35;
		}
	if (transcribed.at(i) == 'F')
		{
			sum += 1.16 - 1.33;
		}
	if (transcribed.at(i) == 'T')
		{
			sum += 0.76 - 1.17;
		}
	if (transcribed.at(i) == 'G')
		{
			sum += 0.43 - 0.58;
		}
	 if (transcribed.at(i) == 'N')
		{
			sum += 0.76 - 1.17;
		}
	if (transcribed.at(i) == 'P')
		{
			sum += 0.34 - 0.31;
		}
	if (transcribed.at(i) == 'S')
		{
			sum += 0.57 - 0.96;
		}
	if (transcribed.at(i) == 'D')
		{
			sum += 0.99 - 1.39;
		}
	
	}
	
	if (sum >= 0)
		return 1;
	return 0;
}

string translate(string original)
{
	string translated = original;
	cout << translated << endl;
	string sub;
	for (int i = 0; i<translated.length()-2; i++)
	{
		if (i==0)
			sub = translated.substr(i,3);
		else
			sub = translated.substr(i+1,3);
			 if (sub == "UUU") { 
				translated.replace(i,i+2,"F");
				}
			else if (sub == "UUC") { 
				translated.replace(i,i+2,"F");
				}
			else if (sub == "UUA") { 
				translated.replace(i,i+2,"L");
				}
			else if (sub == "UUG") { 
				translated.replace(i,i+2,"L");
				}	
			else if (sub == "UCU") { 
				translated.replace(i,i+2,"S");
				}	
			else if (sub == "UCC") { 
				translated.replace(i,i+2,"S");
				}
			else if (sub == "UCA") { 
				translated.replace(i,i+2,"S");
				}
			else if (sub == "UCG") { 
				translated.replace(i,i+2,"S");
				}	
			else if (sub == "UAU") { 
				translated.replace(i,i+2,"Y");
				}
			else if (sub == "UAC") { 
				translated.replace(i,i+2,"Y");
				}
			else if (sub == "UAA") { 
				translated.replace(i,i+2,"Z");
				}
			else if (sub == "UAG") { 
				translated.replace(i,i+2,"Z");
				}	
			else if (sub == "UGU") { 
				translated.replace(i,i+2,"C");
				}	
			else if (sub == "UGC") { 
				translated.replace(i,i+2,"C");
				}
			else if (sub == "UGA") { 
				translated.replace(i,i+2,"Z");
				}
			else if (sub == "UGG") { 
				translated.replace(i,i+2,"W");
				}		
			else if (sub == "CUU") { 
				translated.replace(i,i+2,"L");
				}
			else if (sub == "CUC") { 
				translated.replace(i,i+2,"L");
				}
			else if (sub == "CUA") { 
				translated.replace(i,i+2,"L");
				}
			else if (sub == "CUG") { 
				translated.replace(i,i+2,"L");
				}	
			else if (sub == "CCU") { 
				translated.replace(i,i+2,"P");
				}	
			else if (sub == "CCC") { 
				translated.replace(i,i+2,"P");
				}
			else if (sub == "CCA") { 
				translated.replace(i,i+2,"P");
				}
			else if (sub == "CCG") { 
				translated.replace(i,i+2,"P");
				}		
			else if (sub == "CAU") { 
				translated.replace(i,i+2,"H");
				}
			else if (sub == "CAC") { 
				translated.replace(i,i+2,"H");
				}
			else if (sub == "CAA") { 
				translated.replace(i,i+2,"Q");
				}
			else if (sub == "CAG") { 
				translated.replace(i,i+2,"Q");
				}	
			else if (sub == "CGU") { 
				translated.replace(i,i+2,"R");
				}	
			else if (sub == "CGC") { 
				translated.replace(i,i+2,"R");
				}
			else if (sub == "CGA") { 
				translated.replace(i,i+2,"R");
				}
			else if (sub == "CGG") { 
				translated.replace(i,i+2,"R");
				}		
			else if (sub == "AUU") { 
				translated.replace(i,i+2,"I");
				}
			else if (sub == "AUC") { 
				translated.replace(i,i+2,"I");
				}
			else if (sub == "AUA") { 
				translated.replace(i,i+2,"I");
				}
			else if (sub == "AUG") { 
				translated.replace(i,i+2,"M");
				}	
			else if (sub == "ACU") { 
				translated.replace(i,i+2,"T");
				}	
			else if (sub == "ACC") { 
				translated.replace(i,i+2,"T");
				}
			else if (sub == "ACA") { 
				translated.replace(i,i+2,"T");
				}
			else if (sub == "ACG") { 
				translated.replace(i,i+2,"T");
				}	
			else if (sub == "AAU") { 
				translated.replace(i,i+2,"N");
				}
			else if (sub == "AAC") { 
				translated.replace(i,i+2,"N");
				}
			else if (sub == "AAA") { 
				translated.replace(i,i+2,"K");
				}
			else if (sub == "AAG") { 
				translated.replace(i,i+2,"K");
				}	
			else if (sub == "AGU") { 
				translated.replace(i,i+2,"S");
				}	
			else if (sub == "AGC") { 
				translated.replace(i,i+2,"S");
				}
			else if (sub == "AGA") { 
				translated.replace(i,i+2,"R");
				}
			else if (sub == "AGG") { 
				translated.replace(i,i+2,"R");
				}		
			else if (sub == "GUU") { 
				translated.replace(i,i+2,"V");
				}
			else if (sub == "GUC") { 
				translated.replace(i,i+2,"V");
				}
			else if (sub == "GUA") { 
				translated.replace(i,i+2,"V");
				}
			else if (sub == "GUG") { 
				translated.replace(i,i+2,"V");
				}	
			else if (sub == "GCU") { 
				translated.replace(i,i+2,"A");
				}	
			else if (sub == "GCC") { 
				translated.replace(i,i+2,"A");
				}
			else if (sub == "GCA") { 
				translated.replace(i,i+2,"A");
				}
			else if (sub == "GCG") { 
				translated.replace(i,i+2,"A");
				}		
			else if (sub == "GAU") { 
				translated.replace(i,i+2,"D");
				}
			else if (sub == "GAC") { 
				translated.replace(i,i+2,"D");
				}
			else if (sub == "GAA") { 
				translated.replace(i,i+2,"E");
				}
			else if (sub == "GAG") { 
				translated.replace(i,i+2,"E");
				}	
			else if (sub == "GGU") { 
				translated.replace(i,i+2,"G");
				}	
			else if (sub == "GGC") { 
				translated.replace(i,i+2,"G");
				}
			else if (sub == "GGA") { 
				translated.replace(i,i+2,"G");
				}
			else if (sub == "GAG") { 
				translated.replace(i,i+2,"G");
				}	
				cout <<sub<<" ";								
		
	}
	cout << endl;
	cout << translated;
	return translated;
}

string deleteMutation(string original)
{
	
	string deleted = original;
	int index;
	cout << "Enter index to delete:";
	cin >> index;
	deleted = deleted.erase(index,1);
	cout << deleted<<endl;
	return deleted;
}

string insertMutation(string sequence)
{
	cout <<"What index would you like to insert the nitorgenous base at?";
	int insertIndex;
	cin >> insertIndex;

	string insertBase;
	while (insertBase != "A" && insertBase !="T" && insertBase !="C" && insertBase !="G")
	{
		cout <<"What nitorgenous base would you like to insert (capital)?" << endl;
	
		cout << "Please enter either A, T, C, G: ";
			cin >> insertBase;
	}

	string inserted = sequence;
	inserted = inserted.insert(insertIndex, insertBase);
	cout << inserted<< endl;
	return inserted;
}

string swapMutation(string sequence)
{
	stringstream ss;
	cout <<"What index would you like to swap the nitorgenous base";
	int firstIndex;
	cin >> firstIndex;

	cout <<"Which index would you like to swap the nitorgenous base at?";
	int secondIndex;
	cin >> secondIndex;

	char fBase = sequence.at(firstIndex);
	ss << fBase;
	string firstBase;
	ss >> firstBase;

	char sBase = sequence.at(secondIndex);
	ss << sBase;
	string secondBase;
	ss >> secondBase;

	string swapped = sequence;
	string temp1 = swapped.substr(firstIndex,1);
	string temp2 = swapped.substr(secondIndex,1);
	swapped.replace(firstIndex,1, temp2);
	swapped.replace(secondIndex,1, temp1);
	cout << swapped << endl;
	return swapped;
}

void output1(string str)
{
	ofstream myfile;
	myfile.open("output1.txt");
	myfile <<  isAlpha(str);
	myfile << str.length() << endl;
	for (int i = 0; i <str.length();i++)
		myfile << str.at(i)<<endl;
	myfile.close();
}
void output2(string str)
{
	ofstream myfile;
	myfile.open("output2.txt");
	myfile <<  isAlpha(str);
	myfile << str.length() << endl;
	for (int i = 0; i <str.length();i++)
		myfile << str.at(i)<<endl;
	myfile.close();
}

int main()
{
	string storedDNA;
	cout << "Please input your DNA sequence:";
	do
	{
	cin >> storedDNA;
	} while(storedDNA.length() > 600);
	
	string protein = storedDNA;
	protein = transcribe(protein);
	if (findprotein(&protein) == 0)
	{
		cout << "No Protein.";
	}
	else
	{
		cout << "Protein Found.";
		findprotein(&protein);
	
		protein = translate(protein);
		int alpha = isAlpha(protein);
		output1(protein);
	}
	
	cout << "What type of genetic mutation would you like to carry out? You can choose from insert, delete or swap.";
	string mutationType;
	string newDNA;
	do{
	cin >> mutationType; 
	if(mutationType == "insert")
		newDNA = insertMutation(storedDNA);
	if(mutationType == "delete")
		newDNA = deleteMutation(storedDNA);
	else if(mutationType == "swap")
		newDNA = swapMutation(storedDNA);
	} while(mutationType != "swap" && mutationType !="insert" && mutationType !="delete");

	
	protein = newDNA;
	protein = transcribe(protein);
	if (findprotein(&protein) == 0)
	{
		cout << "No Protein.";
	}
	else
	{
		cout << "Protein Found.";
		findprotein(&protein);
		
		protein = translate(protein);
		int alpha = isAlpha(protein);
		output2(protein);
	}
			
}


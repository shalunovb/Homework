#include <fstream> 
#include <iostream>
 
using namespace std;
 
int main()
{
	int N;
	
	//Load data
	ifstream fin("INPUT.txt");
 	fin >> N;
 	int mass[N];
 	for(int i=0;i<N;++i)
 	{
 		fin >> mass[i];	
	}
 	fin.close();
 	
 	int Max = 0;
 	
 	for(int i = 1;i < N-1; i++)
 	{
 	    int curr = mass[i-1] + mass[i] + mass[i+1];
 	    if(curr > Max) Max = curr;
 	}
 	ofstream fin1("OUTPUT.txt");
 	fin1 << Max; 
 	fin1.close();
 	
	return 0;
}
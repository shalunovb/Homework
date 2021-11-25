#include<iostream>
#include<fstream>
using namespace std;
int main(int argc, char* argv[]) {
 ifstream file;
 ofstream fil;
 file.open("INPUT.txt");
 fil.open("OUTPUT.txt");
 int a[1000];
 int x = 0; 
 int y = 0;
 file >> x;
 int i = 0;
 for (i = 0; i < x; i++)
 {
  file >> a[i];
 }

 s = a[0] + a[x - 1] + ((a[1] > a[x - 2]) ? a[1] : a[x - 2]);
 for (i = 1; i < x - 1; i++)
 {
  if (a[i - 1] + a[i] + a[i + 1] > y)
  {
   y = a[i - 1] + a[i] + a[i + 1];
  }

 }
 fil << y;
 file.close();
 fil.close();
 return EXIT_SUCCESS;
}
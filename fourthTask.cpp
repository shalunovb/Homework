#include<iostream>
using namespace std;
int main(int argc, char* argv[]) {
    int x = 0;
    int l = 0; 
    int r = 0; 
    l = 1;
    r = 1000000001;
    char a;
    do {
        x = (l + r)/2;
        cout << x << endl; 
 cout.flush();
        cin >> a;
        if (a == '>') {
            l = x; 
        }
        else {
            r = x;
        }
    } while (a != '=');

    return EXIT_SUCCESS;
}
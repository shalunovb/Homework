#include <iostream>
using namespace std;
int main(int argc, char* argv[]) {
    int x = 0;
    cin >> x;
    int minutes = 9*60;
    
    for(int i = 1;i < x; i++)
    {
        minutes+=45;
        if(i%2 == 0)
        {
            minutes+=15;
        }
        else
        {
            minutes+=5;
        }
    }
    minutes+=45;
    cout << minutes/60 << " " << minutes%60;
    return EXIT_SUCCESS;
}
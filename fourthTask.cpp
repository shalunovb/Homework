#include<iostream>
using namespace std;
int main(int argc, char* argv[]) {
    int l = 1;
    int r = 1000000000;
    r++;
    int pos = (l+r)/2;
    cout << pos;
    while(true)
    {
        char sym;
        cin >> sym;
        if(sym == '=') return EXIT_SUCCESS;
        if(sym == '>')
        {
            l = pos;
        }
        if(sym == '<')
        {
            r = pos;
        }
        pos = (l+r)/2;
        cout << pos;
    }
}
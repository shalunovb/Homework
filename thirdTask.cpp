#include<iostream>
using namespace std;
int main(int argc, char* argv[]) {
    int x = 0;
    int y = 0;
    int z = 0;
    cin >> x;
    int i = 0;
    int j = 0;
    for (i = 1; i <= x; i++)
    {
        for (j = 1; j <= x; j++)
        {
            cin >> y;
            z = z + y;
        }
    }
    cout << z/2;
    return EXIT_SUCCESS;
}
#include <iostream>
using namespace std;
int main() {
    int d=12;
    char n='a';
    cout<<(void *)&n;
    cout<<(char *)&d<<"\n";
    cout<<(int *) &n;
    return 0;
}

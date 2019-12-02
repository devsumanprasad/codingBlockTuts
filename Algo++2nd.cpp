#include <iostream>
using namespace std;
int main() {
    int x=10;

    cout<<&x<<endl;
    float y = 10.5;
    cout<<&y<<endl;
    //it doesnt work for character variables
    char ch = 'A';
    //Explicitly Typecasting from char* to void*

    cout<<(void *) &ch;
    return 0;

}

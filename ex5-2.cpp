
#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    int i,j;
    for(i=1;i < 10 ;i++){
        for(j=1;j < 10;j++){
            printf("%dX%d = %2d       ",i,j,i*j);
        }
    }
    cout<<"Hello World";
    return 0;
}

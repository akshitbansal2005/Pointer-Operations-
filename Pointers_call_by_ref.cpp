#include<iostream>
using namespace std;
void swap(int *x, int *y)
{
    int swap;
    swap=*x;
    *x=*y;
    *y=swap;
}
int main(){
    int x=10;
    int y=20;
    swap(x,y);
    cout<<"value of x is:"<<x<<endl;
    cout<<"value of y is:"<<y<<endl;
    return 0;
}
//output
/*value of x is:20
value of y is:10*/

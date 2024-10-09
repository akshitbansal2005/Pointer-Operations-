#include<iostream>
using namespace std;
void swap(int x, int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
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
/*
value of x is:10
value of y is:20
*/

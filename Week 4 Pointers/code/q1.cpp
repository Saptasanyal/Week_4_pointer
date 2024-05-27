//Q1 : Write a program to find the product of two numbers using pointers.
#include<iostream>
using namespace std;
int main()
{
    int n,p;
    cout<<"Enter the numbers: ";
    cin>>n>>p;
    int *a,*b;
    a=&n;
    b=&p;
    cout<<"The product is: "<<(*a)*(*b);
    return 0;
}

#include<iostream>
#include<vector>
using namespace std;

void change(int *ptr){
    *ptr = 20;
    
}

int main(){

    int a=10;
    int *ptr=&a;
    int **ptr2=&ptr;

    cout<<ptr<<endl;
    cout<<&a<<endl;
    cout<<&ptr<<endl;
    cout<<ptr2<<endl;
    cout<<&ptr2<<endl;
    cout<<endl;

    cout<<*&a<<endl;
    cout<<*ptr<<endl;
    cout<<*ptr2<<endl;

    float price=100.25f;
    float *ptr1=&price;

    cout<<price<<endl;
    cout<<ptr1<<endl;
    cout<<&price<<endl;
    cout<<&ptr1<<endl;
    cout<<endl;
    

    int b=10;

    change(&b);
    cout<<"inside main, b = "<<b<<endl;
    cout<<endl;

    int arr[]={1,2,3,4,5};
    cout<<arr<<endl;
    cout<<*arr<<endl;
    cout<<*(arr+1)<<endl;
    cout<<*(arr+2)<<endl;
    cout<<endl;


    int c=10;
    int *p=&c;

    cout<<p<<endl;
    p++;
    cout<<p<<endl;
    p--;
    cout<<p<<endl; 
    p += 2 ;
    cout<<p<<endl;
    cout<<endl;


    int *poit;
    int *poit2=poit;

    cout<<poit<<endl;
    cout<<poit2<<endl;
    cout<<(poit!=poit2)<<endl;
    return 0;
}
#include<iostream>
using namespace std;

int printHello(){
    cout<<"hello\n";
    return 3 ;
}

//Sum of two no
int sum(int a, int b){
    int s=a+b;
    return s;
}

//Sum of two no
double sums(double r, double u){
    double y=r+u;
    return y;
}

//min of two nums
int minOfTwo(int a, int b){
    if(a<b){
        return a;
    }else{
        return b;
    }
}

// Sum of N nos;
float sumN(float a){
    int sum=0;
    for(int i=0; i<a+1; i++){
        sum+=i;
    }
    return sum;
}

//Factorial of N no
int Fact(int a){
    int fac=1;
    for(int i=1; i<a+1; i++){
        fac*=i;
    }
    return fac;
}

int fun(){
    int x=45;
    cout<<"x ="<<x<<endl;
    return 8;
    cout<<"hello";
}

int sumy(int a, int b){
    a+=10;
    b+=10;
    return (a+b);
}

int main(){
    
    int val=printHello();
    cout<<"val : "<<val<<endl;
    cout<<endl;

    cout<<"val : "<<printHello()<<endl;
    cout<<endl;

    printHello();
    printHello();

    
    cout<<sum(9,8)<<endl;
    cout<<sums(34.45644646346,35.3444466377)<<"\n";
    cout<<minOfTwo(15,11)<<"\n";
    cout<<sumN(2)<<"\n";
    cout<<sumN(5)<<"\n";
    cout<<sumN(10)<<"\n";
    cout<<sumN(20)<<"\n";
    cout<<sumN(578)<<"\n";
    cout<<Fact(5)<<"\n";
    cout<<Fact(6)<<endl;
    cout<<"\n";

    cout<<fun()<<endl;

    int a=5,b=4;
    cout<<sumy(a,b)<<endl;
    
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;


  
    return 0;
}
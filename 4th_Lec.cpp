#include<iostream>
using namespace std;

int main(){

    int n=7;
    for(int i=0; i<n; i++){ //Outer-Loop
        for(int j=0; j<n; j++){ //Inner-Loop
            cout<<"* "; //prints numbers
        }
        cout<<endl; //ends the line after inner-loop finishes 
    }
    




    int m=10;
    for(int i=0; i<m; i++){
        char ch='A';
        for(int j=0; j<m; j++){ //inner-loop start => line start
            cout<<ch;
            ch++;
        }
        cout<<endl;
    }

    
    
    int num=1;
    int x=4;
    for(int i=0; i<x; i++){
        for(int j=0; j<x; j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }

    char ch='A';
    int y=6;
    for(int i=0; i<y; i++){
        for(int j=0; j<y; j++){
            cout<<ch;
            ch=ch+1;
        }
        cout<<endl;
    }

    int c=10;                      //Triangle pattern 
    for(int i=0; i<c; i++){
        for(int j=0; j<i+1; j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    int z=4;
    for(int i=0; i<z; i++){
        for(int j=0; j<i+1; j++){
            cout<<i+1;
        }
        cout<<endl;
    }
    cout<<endl;

    char chh='A';
    int v=5;
    for(int i=0; i<v; i++){
        for(int j=0; j<i+1; j++){
            cout<<chh;
            chh+=1;
        }
        cout<<endl;
    }
    cout<<endl;

    int b=5;
    for(int i=0; i<b; i++){
        for(int j=1; j<=i+1; j++){
            cout<<j;
        }
        cout<<endl;
    }
    cout<<endl;

    int a=4;                    //Reverse Triangle;
    for(int i=0; i<a; i++){
        for(int j=i+1; j>0; j--){
            cout<<j;
        }
        cout<<endl;
    }

    int s=4;                    //Floyd's Triangle Pattern
    int nums=1;
    for(int i=0; i<s; i++){
        for(int j=i+1; j>0; j--){
            cout<<nums;
            nums++;
        }
        cout<<endl;
    }
    cout<<endl;

    int d=4;
    int numy=1;
    for(int i=0; i<d; i++){
        for(int j=0; j<i; j++){
                cout<<" ";
        }

        for(int j=0; j<d-i; j++){
            cout<<(i+1);
        }
        cout<<endl;
    }
   
    int f=4;
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }

        for(int j=1; j<=i+1; j++){
            cout<<j;
        }

        for(int j=i; j>=1; j--){
            cout<<j;
        }
        cout<<endl;
    }


    int g=4;
    for(int i=0; i<g; i++){
            for(int j=0; j<g-i-1; j++){
                cout<<" ";
            }
        cout<<"*";
        if(i!=0){
            for(int j=0; j<2*i-1; j++){
                cout<<" ";
        }

        cout<<"*";
    }
    cout<<endl;
}

for(int i=0; i<g-1; i++){
    for(int j=0; j<i+1; j++){
        cout<<" ";
    }
    cout<<"*";
    if(i!=g-2){
        for(int j=0; j<2*(g-i)-5; j++){
            cout<<" ";
        }
        cout<<"*";
    }
    cout<<endl;
}
}
#include<bits/stdc++.h> 
float e=0.01;
using namespace std;
double func(double x) 
{ 
    return x*x*x - x*x + 2; 
} 
double derivFunc(double x) 
{ 
    return 3*x*x - 2*x; 
} 
void newtonraphson(double x) 
{ 
    double h = func(x) / derivFunc(x); 
    while (abs(h) >= e) 
    { 
        h = func(x)/derivFunc(x); 
        x = x - h; 
    } 
  
    cout << "The value of the root is : " << x; 
} 
int main() 
{ 
    double x0;
    cout<<"enter the initial guess";
    cin>>x0;
    newtonraphson(x0); 
    return 0; 
} 

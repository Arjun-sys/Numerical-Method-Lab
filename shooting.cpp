#include<iostream>
#include<conio.h>
using namespace std;
float f1(float x,float y,float z)
{
return z;
}
float f2(float x,float y,float z)
{
return 6*x;
}
int main()
{
    int i;    
	float x1,x2,y1,y2,h,z,sy1,sy2,sz1,sz2,temp1,temp2,c[2],d[2];
    cout<<"Enter x1,y1,x2,y2:";
	cin>>x1>>y1>>x2>>y2;
    cout<<"Enter h";
	cin>>h;
    temp1=x1;
    temp2=y1;

    for(i=0;i<2;i++)
    {
        cout<<"enter z ? ";
		cin>>z;
        d[i]=z;
        while(x1<=x2-h)
        {
            sy1=f1(x1,y1,z);
            sz1=f2(x1,y1,z);
            sy2=f1(x1+h,y1+h*sy1,z+h*sz1);
            sz2=f2(x1+h,y1+h*sy1,z+h*sz1);
            y1+=h*(sy1+sy2)/2;
            z+=h*(sz1+sz2)/2;
            x1+=h;
            cout<<endl<<"x1 : "<<x1<<"   "<<"y1 : "<<y1<<"   "<<"z : "<<z<<"  ";
        }
        c[i]=y1;
        x1=temp1;
        y1=temp2;
    }
    z=(y2-c[0])*(d[1]-d[0])/(c[1]-c[0])+d[0];
    cout<<endl<<"z"<<z<<endl;

    while(x1<=x2-h)
    {

        cout<<"x1 :"<<x1<<endl<<"y1 :"<<y1<<endl<<"z :"<<z<<endl;
        sy1=f1(x1,y1,z);
        sz1=f2(x1,y1,z);
        sy2=f1(x1+h,y1+h*sy1,z+h*sz1);
        sz2=f2(x1+h,y1+h*sy1,z+h*sz1);
        y1+=h*(sy1+sy2)/2;
        z+=h*(sz1+sz2)/2;
        x1+=h;
    }
    getch();
    return 0;
}




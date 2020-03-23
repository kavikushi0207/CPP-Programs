#include<iostream>
//including math library files
#include<math.h>
//defining constant PI
#define PI 3.14
#include<iomanip>

using namespace std;

int main()

{
    cout<<"The relevant sin,cos,tan values for degree angles between 0 to 360";
    for(double i=0;i<361;i++)
    {
        //converting degree value into rad value as it requires rad values to function sin(),cos(),tan()
        double radValue = (i * PI) / 180;
        cout<<"sin " <<i<<" = "<<setprecision(4)<<sin(radValue)<<"\t"<<"cos " <<i<<" = "<<cos(radValue)<<"\t"<<"tan " <<i<<" = "<<tan(radValue)<<endl;


    }
}
































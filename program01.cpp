#include <iostream>
//Include vector library and string library.
#include<vector>
#include<string>


using namespace std;

int main()
{
    //creating a vector object to store stings.
    vector <string> myVector;
    string myString;
    //getting strings from console until press q or Q.
    for(int i=1;;i++)
    {

        cout<<"Enter your "<<i<<  " string:"<<endl;
        cin>>myString;

        if(myString=="q"||myString=="Q")
        {

            break;

        }
        //input strings into the vector
        else
           myVector.push_back(myString);


    }
    cout<<"\n\nEntered all strings are : \n\n";
    //print all strings in vector
    for(int i=0;i<myVector.size();i++)
    {
        cout<<myVector[i]<<" ";



    }
    cout<<"\n\n";



}

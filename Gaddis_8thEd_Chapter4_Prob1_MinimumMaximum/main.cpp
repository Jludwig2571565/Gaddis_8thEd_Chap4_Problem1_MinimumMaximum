

/* 
 * File:   minimum/maximum.
 * Author: Joshua Ludwig
 * Created on March 18, 2017, 2:12 PM
 * Purpose: Determine the minimum and maximum of two numbers from a user
 */

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    float first, //Input stored value #1 for comparison
          second;//Input stored value #2 for comparison
    int minimum, //Minimum value
        maximum; //Maximum value
    cout<<"Enter your first value"<<endl;
    cin>>first;
    cout<<"Enter your second value"<<endl;
    cin>>second;
    
    
    if(first>second)
    {
        
        cout<<" Your first value "<<first<<" is the maximum and your second"
                " value "<<second<<" is the minimum"<<endl;
    }
    else
    {
        cout<<" Your first value "<<first<<" is the minimum and your second"
                " value "<<second<<" is the maximum"<<endl;
    }

    return 0;
}


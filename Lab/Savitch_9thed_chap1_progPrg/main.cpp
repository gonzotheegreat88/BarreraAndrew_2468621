/* 
   File:   main
   Author: Andrew Barrera
   Created on September 12, 2016, 9:41 AM
   Purpose:  
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <cmath>      //Math Library
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants
const float GRAVITY=32.17;//Acceleration in ft/sec^2

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float time;   //Time as input in seconds
    float disFell;//Distance in free fall    
    int   places; //Places to round the answer
    
    //Input values
    cout<<"This problem determines distance dropped in free-fall"<<endl;
    cout<<"Input the time in free fall, units of seconds"<<endl;
    cin>>time;
    cout<<"How many decimals places to round the result"<<endl;
    cin>>places;
            
    //Process values -> Map inputs to Outputs
    disFell+GRAVITY*time*time/2;
    float shift=exp (pow 10,places);//Number of places to shift answer
    int round1=disFell*shift*+0.5;//Round to the nearest 10 places
    disFell=round1/shift;
    
    //Display Output
    cout<<"Gravity = "<<GRAVITY<<" ft/sec^2"<<endl;
    cout<<"Time fallen ="<<time<<" seconds"<<endl;
    cout<<"Distance traveled = "<<disfell<<" ft"<<endl;
    
    //Exit Program
    return 0;
}

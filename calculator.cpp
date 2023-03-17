#include "calculator.h"
#include <iostream>
using namespace std;
calculator::calculator()
{
    //ctor
}
void calculator::addition(float a,float b){
    num1=a;
    num2=b;

    float ans=num1+num2;
    cout<<"the answer is :"<<ans<<endl;
}
void calculator::subtraction(float a,float b){
     num1=a;
     num2=b;

    float ans=num1-num2;
    cout<<"the answer is :"<<ans<<endl;
}

#include "newcalculator.h"
#include <iostream>
using namespace std;

newcalculator::newcalculator()
{
    //ctor
}
void newcalculator::product(float a,float b){
 num1=a;
    num2=b;

    float ans=num1*num2;
    cout<<"the answer is :"<<ans<<endl;
}
void newcalculator::division(float a,float b){
num1=a;
    num2=b;

    float ans=num1/num2;
    cout<<"the answer is :"<<ans<<endl;

}


#include <iostream>
#include "calculator.h"
#include "newcalculator.h"

using namespace std;
float num1, num2;
void enterMenu(){
  cout<<"enter num1:";
  cin>>num1;
  cout<<"enter num2:";
  cin>>num2;
}
    void display(){
      newcalculator nc;
      calculator c;
      int options=0;
      int choice=0;
         do{
            cout<<"calculator application"<<endl;
            cout<<"please choose the operations"<<endl;
            cout<<"1.Addition"<<endl;
            cout<<"2.Subtraction"<<endl;
            cout<<"3.Product"<<endl;
            cout<<"4.Division"<<endl;
            cin>>choice;

            if (choice==1){

                    enterMenu();
                    c.addition(num1,num2);

                    } else if(choice==2){
                    enterMenu();
                    c.subtraction(num1,num2);

                    }else if(choice==3){

                     enterMenu();
                     nc.product(num1,num2);

                    }else if(choice==4){

                     enterMenu();
                     nc.division(num1,num2);
                    }else{
                    cout<<"invalid choice"<<endl;
                    }
                     cout<<"please do you want to quit. ";
                     cout<<"Press 1 to continue OR 0 TO exist"<<endl;
                     cin>>options;
         }while(options !=0);
    }

int main()
{
    display();
    return 0;
}

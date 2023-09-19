#include<iostream>
using namespace std;

double sum(double ,double );
double sub(double ,double );
double mul(double ,double );
double div(double ,double );

int main()
{
    cout<<"Enter 1 for Addition."<<endl;
    cout<<"Enter 2 for subtraction."<<endl;
    cout<<"Enter 3 for multiply."<<endl;
    cout<<"Enter 4 for division."<<endl;
    int choice;
    int ch=1;
    while(ch==1)
    {
        cout<<"Enter the choice :";
        cin>>choice;

        double num1,num2,result;

        cout<<"Enter first number :- ";
        cin>>num1;
        cout<<"Enter second number :- ";
        cin>>num2;

        switch(choice)
        {
            case 1 :
            result =sum(num1,num2);
            cout<<"Result of addition of "<<num1<<" and "<<num2<<" is "<<result<<endl;
            cout<<"Enter ch value '1' for do more compution."<<endl;
            cout<<"Enter ch value :";
            cin>>ch;
            break;

            case 2 :
            result =sub(num1,num2);
            cout<<"Result of subtraction of "<<num1<<" from "<<num2<<" is "<<result<<endl;
            cout<<"Enter ch value '1' for do more compution."<<endl;
            cout<<"Enter ch value :";
            cin>>ch;
            break;

            case 3 :
            result =mul(num1,num2);
            cout<<"Result of multiply of "<<num1<<" and "<<num2<<" is "<<result<<endl;
            cout<<"Enter ch value '1' for do more compution."<<endl;
            cout<<"Enter ch value :";
            cin>>ch;
            break;

            case 4 :
            result =div(num1,num2);
            cout<<"Result of "<<num1<<" is divided by "<<num2<<" is "<<result<<endl;
            cout<<"Enter ch value '1' for do more compution."<<endl;
            cout<<"Enter ch value :";
            cin>>ch;
            break;

            default:
            cout<<"you select wrong choice."<<endl;
            cout<<"Enter ch value '1s' for do more compution."<<endl;
            cout<<"Enter ch value :";
            cin>>ch;
            break;
        }
    }
    return 0;
}

double sum(double num1,double num2)
{
    return (num1 +num2);
}

double sub(double num1,double num2)
{
    return (num1-num2);
}

double mul(double num1,double num2)
{
    return (num1*num2);
}

double div(double num1,double num2)
{
    return (num1/num2);
}



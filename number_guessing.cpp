
#include <cstdlib>
#include<iostream>

using namespace std;

int main()
{
    srand(time(0));
    int random_number,lb=30,ub=50,guess_number,count_num=1;
    random_number = (rand ()%(ub-lb+1)+lb);
    cout<<"You have to guess number between 30 and 70."<<endl;
    cout<<"Enter your guessed number : ";
    cin>>guess_number;

    while(guess_number != random_number)
    {
        if(guess_number < 30 || guess_number > 70)
        {
            cout<<"you are out of bound."<<endl;
        }
        else if(guess_number > random_number)
        {
            cout<<"is too high"<<endl;
        }
        else
        {
            cout<<"is too low"<<endl;
        }
        cout<<"Again enter your guessed number : ";
        cin>>guess_number;
        count_num++ ;
    }

    cout<<"you guessed number in "<<count_num<<" times"<<endl;
    return 0;

}

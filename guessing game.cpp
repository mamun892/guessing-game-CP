#include<iostream>
#include<cstdlib>
#include<conio.h>

using namespace std;

int main()
{
    while(1)// while use due to karon outpurt bar bar cholbe
    {

        int guessNumber, randomNumber;


        cout<< " Enter your guess 1 to 5 :";
        cin>> guessNumber;

        randomNumber= rand()%5+1;
        if( guessNumber== randomNumber)
        {

            cout<<  " You have won"<<endl<<endl;
        }
        else
        {

            cout<< " You Have lost. Try again" << endl;
            cout<< " random Number was:"<< randomNumber<< endl<<endl;

        }

    }
    getch();
}

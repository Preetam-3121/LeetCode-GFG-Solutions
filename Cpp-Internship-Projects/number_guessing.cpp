#include<iostream>
#include<cstdlib>
#include<ctime>
#include<cmath>

using namespace std;

int main(){
    cout<<"===== Number Guessing Game ====="<<endl;
    srand(time(0));
    int num=rand()%100+1;
    int guess,attempts=0;

    cout<<"I have picked a number between 1 and 100."<<endl;

    do{
        cout<<"Enter your guess: ";cin>>guess;
        attempts++;

        if(guess==num)
        cout<<"\nCongratulations! You guessed it in "<<attempts<<" attempts."<<endl;
        
        else if(abs(guess-num)<=5)
        cout<<"You're Close! Try again.\n"<<endl;

        else if(guess<num)
        cout<<"Too Low! Try again.\n"<<endl;
        
        else
        cout<<"Too High! Try again.\n"<<endl;

    }while(guess!=num);
    
    cout<<"\nThank you for playing!"<<endl;

    return 0;
}

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));
    int User_input = 0;
    int Number_of_Tries = 0;
    int random = rand() % 100 + 1;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I have selected a number between 1 and 100." << endl;
    cout << "Can you guess what it is?" << endl;

    while (User_input!=random){
        cout<<"Enter your guess: ";
        cin>>User_input;
    Number_of_Tries++;

        if(User_input>random){
           cout<<"Too High! Try Again";
        }
        else if(User_input<random){
            cout<<"Too Low! Try Again";
        }
        else{
            cout << "Congratulations! You guessed the number in " << Number_of_Tries << " tries." << endl;

        }
    }
    return 0;
}
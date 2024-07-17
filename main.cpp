#include <iostream>
#include <string>
#include <random>
#include <cstdlib>

using namespace std;

int random_number;
int user_number;
void Guess_The_Number();


void play_again() {
    string play_response;
    cout << "Wanna play again? [y] [n] \n";
    cin >> play_response;
    if (play_response == "y") {
        Guess_The_Number();
    }
    else {
        return;
    }
}

void Guess_The_Number() {
    system("clear");
    srand(time(0));
    int random_number = rand()%100 + 1;
    cout << "Choose a number between 1 and 100: ";
    while (true) {
        cin >> user_number;
        if (user_number < 0 || user_number > 100) {
            cout << "Invalid input \n";
            cout << "Plz choose a number between 1 and 100 \n";
        }
        else if (user_number > random_number) {
            cout << "try lower \n";
        }
        else if (user_number < random_number) {
            cout << "try higher \n";
        }
        else {
            cout << "Bazinga \n";
            play_again();
            break;
        }
    }
    return;
}

int main()
{
    Guess_The_Number();
    return 0;
}

#include <iostream>
using namespace std;
#include <string>
int main() {
    while (true) {
    cout << "Welcome to ~Ghoster~" << endl;       
    cout << "Please type your name" << endl;
    string userName;
    cin >> userName;
    cout << "So your name is " << userName << " ?" << endl;
    cout << "If this is correct please type \"Yes\" " << endl;
    string Answer;
    cin >> Answer;
    if (Answer == "Yes"|| Answer == "yes") {
    cout << "Hello " << userName << " I hope you enjoy!" << endl;
} else {
    cout << "Syntax error please restart." << endl;
}
    cout << "To move you can use W for forward, A for left, D for right and finally S for backwards" << endl; 
    cout << "Please type \"Start\" to start the program." << endl;
    string Correct;
    cin >> Correct;
    if (Correct == "Start" || Correct == "start") {
    cout << "The game will now start:"
} else {cout << "
}
return 0;
}
#include <bits/stdc++.h>
#include <time.h>
#include <cstdlib>
using namespace std;

int getSecretNum();
int playerGuess();
void Notification(int guess, int secretNum);
void aGame(int &record);
void Continue(int &record);

int main()
{
    int record=INT_MAX;
    aGame(record);
    Continue(record);

    return 0;
}

int getSecretNum(){
    int a = ( rand() +rand())%100 + 1;
    return a;

}

int playerGuess(){
    int tmp;
    cout <<"\nEnter your guess (1...100): ";
    cin >> tmp;
    while (cin.good()==false || tmp<1 || tmp>100){
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        cout << "\nIncorrect Input";
        cout <<"\nEnter your guess (1...100): ";
        cin >> tmp;
    }
    return tmp;
}

void Notification(int guess, int secretNum){
    if (guess>secretNum) cout <<guess<<"\nYour Number Is Bigger";
    else if (guess<secretNum) cout <<guess<<"\nYour Number Is Smaller";
    else cout <<guess<<"\nCongratulation! You Win.";
}
void aGame(int &record){
    srand(time(NULL));
    int count1=0;
    int secretNum;
    int guess=-1;
    secretNum = getSecretNum();
    while (guess!=secretNum){
        guess = playerGuess();count1++;
        Notification(guess,secretNum);
    }
    if (count1 < record) {cout << "You have got new record.\n";record = count1;}
    return;
}
void Continue(int &record){
    char choice;
    cout << "\nDo you want to play again?" << endl;
    cout << "Press Y to play, press any key to exit\n";
    cin >> choice;
    if (choice=='Y'||choice=='y') {
        cout << "Beat the record: " << record<<endl;
        aGame(record);
        Continue(record);
    }
    return;
}


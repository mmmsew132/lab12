#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>

using namespace std;

int main() {
    srand(time(0));
    int i = rand()%9;
    string grade[9] = {"A", "B+", "B", "C+", "C", "D+", "D", "F", "W"};
    cout << "Press Enter 3 times to reveal your future.";
    cin.get();
    cin.get();
    cin.get();
    cout << "You will get " << grade[i] << " in this 261102";
}
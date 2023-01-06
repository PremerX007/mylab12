#include <iostream>
using namespace std;

int main(){
    cout << "Press Enter 3 times to reveal your future.";
    cin.get();
    cin.get();
    cin.get();

    srand(time(0));
    int x = rand()%9;
    string result;
    switch (x)
    {
    case 0:
        result = "A";
        break;
    case 1:
        result = "B+";
        break;
    case 2:
        result = "B";
        break;
    case 3:
        result = "C+";
        break;
    case 4:
        result = "C";
        break;
    case 5:
        result = "D+";
        break;
    case 6:
        result = "D";
        break;
    case 7:
        result = "F";
        break;
    default:
        result = "W";
        break;
    }
    cout << "You will get " << result << " in this 261102.";
}
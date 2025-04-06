#include <iostream>
using namespace std;

int main() {
    int firstNum, answer;
    int i = 1;

    firstNum = 5;

    while (i <= 12) {
        answer = firstNum * i;
        cout << firstNum << " times " << i << " is " << answer << endl;
        i++;
    }

    return 0;
}
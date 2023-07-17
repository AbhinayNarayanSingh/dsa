#include<iostream>
#include<math.h>
using namespace std;

void isPrime() {

    // Check if a number is prime or not
    int num;
    cin>>num;

    for (int factor = 2; factor < num; factor++)
    {
        if (num % factor == 0 ) {
            cout<<num<<" Is Not a Prime Number";
            return;
        }
    }
    cout<<num<<" Is a Prime Number";

}

void reverseNumber() {
    int num;
    cin>>num;
    
    int reverse = 0;

    while (num > 0)
    {
        int lastDigit = num % 10;
        // In the context of the expression num % 10, the result is the remainder of dividing num by 10. This operation effectively isolates the last digit of num because the remainder when dividing by 10 will always be the value of the last digit.

        reverse = reverse * 10 + lastDigit;
        num = num/10;
    }

    cout<<reverse<<endl;

}

void isArmStrong() {
    int num;
    cin>>num;

    int sumOf = 0;
    int originalNum = num;

    while (num > 0)
    {
        int lastDigit = num % 10;
        // sumOf += pow(lastDigit, 3);
        sumOf += lastDigit * lastDigit * lastDigit;
        num /= 10;
    }

    if (originalNum == sumOf) {
        cout<<originalNum<<" is a Arm Strong Number";
    } else {
        cout<<originalNum<<" is not a Arm Strong Number because sum is "<<sumOf;
    }
    cout<<endl;

}

int main() {

    isArmStrong();
    return 0;
}
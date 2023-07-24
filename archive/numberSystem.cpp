#include<iostream>
#include<math.h>
#include <limits.h>
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

// new
void factorial() {
    int num;
    cin>>num;

    int fact=1;

    for (int i = 1; i <= num; i++)
    {
        fact *= i;
    }

    cout<<fact<<endl;
    
}


void array() {
    int num;
    cin>>num;

    int newArray[num];
    int minNo=0;
    int maxNo=0;

    for (int i = 0; i < num; i++)
    {
        cin>>newArray[i];

        if (minNo == 0 && maxNo == 0) {
            minNo = newArray[i];
            maxNo = newArray[i];
        } else {
            minNo = min(minNo, newArray[i]);
            maxNo = max(maxNo, newArray[i]);
        }
        
        // else if (minNo > newArray[i]) {
        //     minNo = newArray[i];
        // } else if (maxNo < newArray[i]) {
        //     maxNo = newArray[i];
        // }
    }

    cout<<"min: "<<minNo<<" max: "<<maxNo<<endl;
}

void linearSearch() {
    int newArray[25] = {17, 9, 4, 22, 1, 13, 8, 19, 25, 3, 11, 7, 15, 6, 2, 20, 10, 14, 23, 18, 5, 12, 21, 16, 24};
    int searchValue = 0;
    cin>>searchValue;

    for (int i = 0; i < 10; i++)
    {
        if (newArray[i] == searchValue) {
            cout<<searchValue<<" found at index "<<i<<endl;
            return;
        }
    }

    cout<<searchValue<<" not found "<<endl;
    
}

void binarySearch() {
    int newArray[25] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25};

    cout<<sizeof(newArray)/sizeof(newArray[0])<<endl;

}

// Function to convert a decimal number to binary, it is designed to work with non-negative (positive or zero) decimal numbers only.
void decimalToBinary() {
    int num;
    cin >> num;

    int userInput = num; // Store the user input for displaying later
    int binaryNum = 0;
    int power = 0;

    while (num != 0) {
        int bit = num & 1; //is used to extract the least significant bit (LSB) of the current number (num) using a bitwise AND operation.

        binaryNum = (bit * pow(10, power)) + binaryNum; // Update binaryNum by adding the current bit at the appropriate position

        num = num >> 1; // Right shift num to get the next bit
        power++; // Increment power for the next position
    }

    // Output the binary representation of the input decimal number
    cout << "Binary of " << userInput << " is " << binaryNum << endl;
}

void reverseNumber() {
    int num;
    cin >> num;

    int userInput = num; // Store the user input for displaying later
    int reverseNum=0;

    while (num != 0) {
        int lastDigit = num % 10;
        reverseNum = reverseNum * 10 + lastDigit;

        num /= 10;
    }

    cout<<reverseNum<<" is reverse of "<<userInput<<endl;
}

void decimalToBinaryOldApproch() {
    int num;
    cin>>num;

    int binary = 0;

    while (num !=0) 
    {
        int reminder = num % 2;
        binary = binary * 10 + reminder;
        num = (num - reminder) / 2;
    }
    
    cout<<binary<<endl;
}

void binaryToDecimal() {
    int num;
    cin>>num;

    int power = 0;
    int decimal=0;

    while(num != 0) {

        int digit = num % 10;

        if (digit == 0) {
            num /= 10;
            power++;
            continue;
        }

        decimal = decimal + (digit * pow(2, power));
        num /= 10;
        power++;

    }

    cout<<decimal<<endl;

}

void fibonacciNumber() {
    // 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 
    // n = (n-1) + (n-2)
    int num;
    cin>>num;

    int firstNum=0;
    int secondNum=1;

    cout<<firstNum<<", "<<secondNum<<", ";

    for (int i = 0; i < (num-2); i++)
    {
        int newNumber = firstNum + secondNum;
        cout<<newNumber<<", ";

        firstNum = secondNum;
        secondNum = newNumber;
    }

    cout<<endl;
    
}

int reverseInteger() {

    int num;
    cin>>num;

    int reverse = 0;

    while ( num != 0) {
        int lastDigit = num % 10;

        if ((reverse > INT_MAX / 10) || (reverse < INT_MIN / 10)) {
            return 0;
        }
        reverse = (reverse * 10) + lastDigit;
        num /= 10;
    }
    cout<<reverse<<endl;
    return reverse;


    // return 0;
} 


bool isPowerOfTwo() {
    int num;       // 6
    cin>>num;

    int powerIs=0;

    for (int i = 0; i < 32; i++)
    {
        int powerIs = pow(2, i);

        if (num == powerIs) {
            return true;
        } else if (powerIs > num ) {
            break;
        }
    }
    return false;
}

int main() {

    return 0;
}
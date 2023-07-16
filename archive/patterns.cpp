#include<iostream>
using namespace std;


void pattern5(int n) {

  for (int row = 1; row <= n; row++)
    {
        int temp = 0;
        
        for (int col = 1; col <= n; col++)
        {
            if (row <= 4) {

                if (col > row && col <= n-row) {
                    cout<<"  ";
                } else {
                    cout<<" *";
                }

            } else {

                if ( col < row ) {

                } else {
                    cout<<" *";
                }

            }
        }
        cout<<endl;
    }

}

void pattern6(int n) {
    for (int row = 0; row < n; row++)
    {
        for (int col = 1; col <= (n - row); col++)
        {
            cout<<col;
        }
        cout<<endl;
    }
}

void pattern7(int n) {
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            if ((row + col) % 2 == 0){
                cout<<1<<" ";
            } else {
                cout<<0<<" ";
            }
        }
        cout<<endl;
    }
}

void pattern8(int n) {
    for (int row = 1; row <= n; row++)
    {
        for (int whitespace = 0; whitespace < (n - row); whitespace++)
        {
            cout<<"  ";
        }
        
        for (int col = 1; col <= n; col++)
        {
            cout<<" *";
        }
        cout<<endl;
    }
}

void pattern9(int n) {
    for (int row = 1; row <= n; row++)
    {
        for (int whitespace = 0; whitespace < (n - row); whitespace++)
        {
            cout<<" ";
        }
        
        for (int col = 1; col <= row; col++)
        {
            cout<<" "<<col;
        }
        cout<<endl;
    }
}

void pattern10(int n) {

    for (int row = 1; row <= n; row++)
    {
        
        for (int whitespace = 0; whitespace < (n-row); whitespace++)
        {
            cout<<"  ";
        }
        for (int ngCol = row; ngCol > 1; ngCol--)
        {
            cout<<" "<<ngCol;
        }

        for (int col = 1; col <= row; col++)
        {
            cout<<" "<<col;
        }

        cout<<endl;
    }

}

void pattern11(int n) {

    // first half
    for (int row = 1; row <= n; row++)
    {

        for (int whitespace = 0; whitespace < (n - row); whitespace++)
        {
            cout<<"  ";
        }

        for (int col = 1; col <= (2 * row - 1); col++)
        {
            cout<<" *";
        }
        
        cout<<endl;
        
    }

    for (int row = n; row > 0; row--)
    {
        for (int whitespace = 0; whitespace < (n - row); whitespace++)
        {
            cout<<"  ";
        }
        

        for (int col = 1; col <= (2 * row - 1); col++)
        {
            cout<<" *";
        }
        
        cout<<endl;
    }
    
}

int main() {
    pattern11(4);

    return 0;
}
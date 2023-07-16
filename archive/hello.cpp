#include<iostream>

using namespace std;


// int main(){
//     // cout<<"Hello Programmer\n";

//     int amount1;
//     int amount2;

//     cin>>amount1;
//     cin>>amount2;

//     int sum = amount1 + amount2;
//     cout<<sum<<endl;

//     return 0;
// }


// main() {
//     int a,b,c;
//     cin>>a>>b>>c;

//     if (a > b) {
//         if (a > c) {
//             cout<<"a is bigger";
//         } else {
//             cout<<"c is bigger";
//         } 
//     } else {
//         if (b > c) {
//             cout<<"b is bigger";
//         } else {
//             cout<<"c is bigger";
//         }
//     }

// }


// main() {
// // for loop
//     for (int i = 0; i < 10; i++)
//     {
//         cout<<i<<endl;
//     }

// // while loop
//     int i = 0;
//     while (i < 10)
//     {
//         cout<<i<<endl;
//         i++;
//     }  

// // do while loop
//     int n = 0;

//     do {
//         cout<<n<<endl;
//         n++;

//     } while(n < 10);

// }


// main(){
//     int pocketMoney = 500;

//     for (int i = 0; i < 30; i++)
//     {
//         if (i % 2 == 0) {
//             continue;
//         } else {
//             cout<<"trip day"<<endl;

//             if (pocketMoney > 125) {
//                 pocketMoney = pocketMoney - 125;
//             } else {
//                 cout<<"money over"<<endl;
//                 break;
//             }
//         }
//     }
    
// }

// int main() {
//     int number = 14;
//     int i;

//     for ( i = 2; i < number; i++)
//     {
//         if (number % i == 0) {
//             cout<<"Non Prime Number"<<endl;
//             break;
//         }
//     }

//     if (i == number) {
//         cout<<"Prime Number"<<endl;
//     } 

    
//     return 0;
// }



// int main() {
//     // 1,2,3,4,5,6,7,8,9
    
//     int a,b;
//     cin>>a>>b;

//     for (int i = 0; i < b; i++)
//     {
//         if( i == 0) continue;
//         int t;
        
//         for (t = 2; t < i; t++)
//         {
//             if (t % i == 0) {
//                 break;
//             }
//         }

//         if (t == i) {
//             cout<<i<<endl;
//         }
        

        
//     }
    


//     return 0;
// }


// int main() {
//     int button;
//     cin>>button;

//     switch (button)
//     {
//     case 1:
//         cout<<"start";
//         break;
    
//     default:
//         cout<<"invalid";
//         break;
//     }


//     return 0;
// }


int main() {

    int row = 5, col = 5;
    // cin>>row>>col;

    for (int i = 0; i < row; i++)
    {
        for (int t = 0; t < col; t++)
        {
            cout<<"*";
        }
        cout<<""<<endl;
        
    }

    cout<<""<<endl;
    cout<<""<<endl;

    for (int i = 1; i <= row; i++)
    {
        for (int t = 1; t <= col; t++)
        {
            if (i == 1 || i == row || t == 1 || t == col) {
                cout<<"*";
            } else {
                cout<<" ";
            }
        }
        cout<<""<<endl;
    }
    

    cout<<""<<endl;
    cout<<""<<endl;

    for (int i = 1; i <= row; i++) {

        for (int t = 0; t < col; t++)
        {
            cout<<"* ";
        }
        col--;
        cout<<endl;
        
    }


    cout<<""<<endl;
    cout<<""<<endl;

    for (int i = 1; i <= 5; i++) {
        
        for (int t = 1; t <= 5; t++)
        {

            if(t<=5-i){
                cout<<" -";
            } else {
                cout<<" *";
            }
        }
        cout<<endl;
    }
    

    cout<<""<<endl;
    cout<<""<<endl;

    for (int i = 1; i <= 5; i++)
    {
        for (int n = 1; n <= i; n++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
        
    }


    cout<<""<<endl;
    cout<<""<<endl;


    int temp = 0;

    for (int i = 1; i <= 5; i++)
    {
        for (int n = 1; n <= i; n++)
        {
            cout<<++temp<<" ";
        }
        cout<<endl;
        
    }
    
    cout<<""<<endl;
    cout<<""<<endl;

    int n = 8;


    for (int i = 1; i <= n; i++)
    {
        for (int t = 1; t <= n; t++)
        {
            if (i <= 4) {

                if (t > i && t <= n-i) {
                    cout<<"  ";
                } else {
                    cout<<" *";
                }

            } else {
                // 5        0
                // 4
                // if ((t-4))
                // 5 < 1
                if (t < i ) {
                    cout<<t<<" ";
                } else {
                    cout<<" *";
                }

            }
        }
        cout<<endl;
        
    }
    

    return 0;
}
//creating Rectangle with nested loop.

#include <iostream>
#include <stdio.h>

using namespace std;
 int main(){
    int rows;
    int columns;
    char symbol;
    cout<<"ENTER A ROWS"<<endl;
    cin>>rows;

    cout<<"ENTER A COLUMNS"<<endl;
    cin>>columns;

    cout<<"ENTER A SYMBOL"<<endl;
    cin>>symbol;

    for(int i=1;i<=rows;i++){
        for(int j=1;j<=columns;j++){
            cout<<symbol;
        }
        cout<<'\n';
    }
    return 0;
 }

// int main(){
//     int rows;
//     cout<<"ENTER A ROWS"<<endl;
//     cin>>rows;

//     for(int i=0;i<=rows;i++){
//         for(int j=0;j<=i;j++){
//             cout<<j+1;
//         }
//         cout<<'\n';
//     }
//     return 0;
// }

 

// int main()
// {
//    int rows;
//    int columns;
//    char symbol;

//    std::cout << "How many rows?: ";
//    std::cin >> rows;

//    std::cout << "How many columns?: ";
//    std::cin >> columns;

//    std::cout << "Enter a symbol to use: ";
//    std::cin >> symbol;

//    for(int i = 1; i <= rows; i++){
//       for(int j = 1; j <= columns; j++){
//          std::cout << symbol;
//       }
//       std::cout << '\n';
//    }

//    return 0;
// }
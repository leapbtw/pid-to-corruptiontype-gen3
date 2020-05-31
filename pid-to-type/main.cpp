//
//  main.cpp
//  pid-to-type
//
//  Created by Macintosh HD on 31/05/20.
//  Copyright © 2020 leapbtw. All rights reserved.
//

#include <iostream>
using namespace std;

bool case1 (char lmd); // if LeftMostDigit == 0,1,2,3,8,9,a,b -> true

int main() {
    long int x;
    char pid[10];
    system("clear"); //replace clear with cls if building for windows
    cout << endl << endl << endl << "PID to Corruption Types calculator by leapbtw";
    cout << endl << "input your PID and press enter: ";
    cin >> hex >> x;
    cout << "input your PID again and press enter: ";
    cin >> pid;
    int r = x%24;
    char lmd = pid[0];
    cout << endl << "reminder: " << x % 24 << "      leftmost: " << pid[0] << endl << endl;
    
    switch (r) {
        case 0:
            if (case1(lmd) == true) {
                cout << "type 8";
            }
            else cout << "type 6";
            break;
        
        case 1:
            if (case1(lmd) == true) {
                cout << "type 8";
            }
            else cout << "type 6";
            break;
            
        case 2:
            
            if (case1(lmd) == true) {
                cout << "type 7";
            }
            else cout << "type 3";
            break;
        
        case 3:
            if (case1(lmd) == true) {
                cout << "type 7";
            }
            else cout << "type 3";
            break;
            
        case 4:
            if (case1(lmd) == true) {
                cout << "type 5";
            }
            else cout << "type 10";
            break;
            
        case 5:
            if (case1(lmd) == true) {
                cout << "type 5";
            }
            else cout << "type 10";
            break;
            
        case 6:
            if (case1(lmd) == true) {
                cout << "type 8";
            }
            else cout << "type 6";
            break;
            
        case 7:
            if (case1(lmd) == true) {
                cout << "type 8";
            }
            else cout << "type 6";
            break;
            
        case 8:
            if (case1(lmd) == true) {
                cout << "type 4";
            }
            else cout << "type 2";
            break;
            
        case 9:
            if (case1(lmd) == true) {
                cout << "type 4";
            }
            else cout << "type 2";
            break;
            
        case 10:
            if (case1(lmd) == true) {
                cout << "type 3";
            }
            else cout << "type 9";
            break;
            
        case 11:
            if (case1(lmd) == true) {
                cout << "type 3";
            }
            else cout << "type 9";
            break;
            
        case 12:
            if (case1(lmd) == true) {
                cout << "type 7";
            }
            else cout << "type 3";
            break;
            
        case 13:
            if (case1(lmd) == true) {
                cout << "type 7";
            }
            else cout << "type 3";
            break;
            
        case 14:
            if (case1(lmd) == true) {
                cout << "type 4";
            }
            else cout << "type 2";
            break;
            
        case 15:
            if (case1(lmd) == true) {
                cout << "type 4";
            }
            else cout << "type 2";
            break;
            
        case 16:
            if (case1(lmd) == true) {
                cout << "type 1";
            }
            else cout << "type 8";
            break;
            
        case 17:
            if (case1(lmd) == true) {
                cout << "type 1";
            }
            else cout << "type 8";
            break;
            
        case 18:
            if (case1(lmd) == true) {
                cout << "type 5";
            }
            else cout << "type 10";
            break;
            
        case 19:
            if (case1(lmd) == true) {
                cout << "type 5";
            }
            else cout << "type 10";
            break;
            
        case 20:
            if (case1(lmd) == true) {
                cout << "type 3";
            }
            else cout << "type 9";
            break;
            
        case 21:
            if (case1(lmd) == true) {
                cout << "type 3";
            }
            else cout << "type 9";
            break;
            
        case 22:
            if (case1(lmd) == true) {
                cout << "type 1";
            }
            else cout << "type 8";
            break;
            
        case 23:
            if (case1(lmd) == true) {
                cout << "type 1";
            }
            else cout << "type 8";
            break;
            
        default:
            cout << "THERE HAS BEEN AN ERROR";
            break;
    }
    
    cout << endl << endl << "this is a free tool avaible from github.com/leapbtw feel free to report bugs and give feedback. thank you for using my tool!" << endl << endl << endl << endl;
}

bool case1 (char lmd) {
    if (lmd == 48 || lmd == 49 || lmd == 50 || lmd == 51 || lmd == 56 || lmd == 57 || lmd == 97 || lmd == 98 || lmd == 65 || lmd == 66) {
        return true;
    }
    else return false;
}

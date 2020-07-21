//
//  main.cpp
//  pid-to-type
//
//  Created by Macintosh HD on 31/05/20.
//  Copyright © 2020 leapbtw. All rights reserved.
//

#include <iostream>
#include <math.h>
using namespace std;

bool case1(char lmd); // if LeftMostDigit == 0,1,2,3,8,9,a,b -> true
void program(); //code
long long int hextodec(char pid[]); //hex pid to dex pid

int main() {
    char pid[8], answer = 121;
    system("clear"); //replace clear with cls if building for windows
    cout << endl << endl << "this is a free tool avaible from github.com/leapbtw feel free to report bugs and give feedback. thank you for using my tool!" << endl << endl << endl << endl;
    
    while (answer != 78 && answer != 110) {
        cout << endl << endl << endl << "PID to Corruption Types calculator by leapbtw";
        cout << endl << "input your PID and press enter: ";
        cin >> pid;
		cout << "hex to dec: " << hextodec(pid) << endl;
        int r = hextodec(pid) % 24;
        char lmd = pid[0];
        cout << endl << "reminder: " << hextodec(pid) % 24 << endl << "leftmost digit: " << pid[0] << endl << endl << "   > ";
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
                cout << "THERE HAS BEEN AN ERROR1";
                break;
        }
		cout << endl << endl << "do you want to calculate another PID? [y/n]:  ";
		cin >> answer;
		if (answer != 78 && answer != 110) system("clear");
    }
    
}

bool case1 (char lmd) {
    if (lmd == 48 || lmd == 49 || lmd == 50 || lmd == 51 || lmd == 56 || lmd == 57 || lmd == 97 || lmd == 98 || lmd == 65 || lmd == 66) {
        return true;
    }
    else return false;
}

long long int hextodec(char pid[]) {
	long long int digit[8];
	
    for (int i = 0; i < 8; i++) {
		digit[i] = pid[i];
        
        switch (digit[i]) { //ascii to dec
			//numbers
            case 48:
                digit[i] = 0;
				break;
            case 49:
                digit[i] = 1;
				break;
            case 50:
                digit[i] = 2;
				break;
            case 51:
                digit[i] = 3;
				break;
			case 52:
                digit[i] = 4;
				break;
			case 53:
				digit[i] = 5;
				break;
			case 54:
				digit[i] = 6;
				break;
			case 55:
				digit[i] = 7;
				break;
			case 56:
				digit[i] = 8;
				break;
			case 57:
				digit[i] = 9;
				break;
			//non capital letters;
			case 97:
				digit[i] = 10;
				break;
			case 98:
				digit[i] = 11;
				break;
			case 99:
				digit[i] = 12;
				break;
			case 100:
				digit[i] = 13;
				break;
			case 101:
				digit[i] = 14;
				break;
			case 102:
				digit[i] = 15;
				break;
			//capital letters
			case 65:
				digit[i] = 10;
				break;
			case 66:
				digit[i] = 11;
				break;
			case 67:
				digit[i] = 12;
				break;
			case 68:
				digit[i] = 13;
				break;
			case 69:
				digit[i] = 14;
				break;
			case 70:
				digit[i] = 15;
				break;
			default:
				cout << "THERE HAS BEEN AN ERROR2";
				break;
            }
        }
	long long int result = (digit[0]*pow(16,7))+(digit[1]*pow(16,6))+(digit[2]*pow(16,5))+(digit[3]*pow(16,4))+(digit[4]*pow(16,3))+(digit[5]*pow(16,2))+(digit[6]*16)+digit[7];
    return result;
}

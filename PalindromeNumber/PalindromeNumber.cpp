/*********************************************************
 
Given an integer x, return true if x is a palindrome,and false otherwise.

*********************************************************/

/*-----------------------solution-------------------------*/
#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
bool isPalindrome(int x) {
    if (x < 0) {
        return false;
    }
    
    int original = x;
    long long reverse = 0;
    
    while (x != 0) {
        int y = x % 10;
        reverse = reverse*10 + y;
        x = x / 10;
    }
    
    return reverse == original;
}
int main(){
    int x;
    cout<<"enter the number:";
    cin>>x;
    bool p = isPalindrome(x);
    cout<<p;
}
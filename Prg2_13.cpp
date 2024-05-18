/*
    * 이름, 이니셜, 성을 입력받고
    * 결합해서 출력하는 프로그램
*/

#include <iostream>
#include <string>
using namespace std;

int main(){

    string first;
    string initial;
    string last;
    string space = " ";
    string dot = ".";
    string fullName;

    cout << "이름(first name) 입력하기: ";
    cin >> first;
    cout << "이니셜(initial) 입력하기: ";
    cin >> initial;
    cout << "성(last name) 입력하기: ";
    cin >> last;

    fullName = first + space + initial + dot + space + last;

    cout << "전체 이름(full name): " << fullName;
    return 0;
}
#include <iostream>
using namespace std;

//세자릿수 주어졌을 때  해당 숫자 역순으로 출력하는 프로그램

int main(){

    // 입력한 세 자릿수 저장, reverse 값 저장 하는 변수 선언
    int x;
    int result = 0;
    cout << "세 자릿수를 입력하시오: ";
    cin >> x;

    result += (x%10) * 100;  // ex x = 123, result = 300
    x /= 10;   // x = 12
    result += (x%10) * 10; // result = 300 + 20
    x /= 10;   // x = 1
    result += (x%10);   // result = 320 + 1

    cout <<  "역순: " << result << endl;
    return 0;
}

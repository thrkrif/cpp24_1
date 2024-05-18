/*
    * 오른쪽에서 왼쪽으로 결합 방향을 갖는 표현식
*/

#include <iostream>
using namespace std;

int main(){

    //선언과 초기화
    int x = 10;
    int y = 20;
    //할당
    y += x *=40;    // 40 * 10(x) = 400, 400 + 20(y) = 420
    //x와 y의 값 출력
    cout << "x의 값: " << x << endl;
    cout << "y의 값: " << y << endl;

}
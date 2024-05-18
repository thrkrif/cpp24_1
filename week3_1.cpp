#include <iostream>
using namespace std;

// int 자료형의 정수를 입력받아서, 첫 번째부터 세 번째 자릿수를 각각 출력하는 프로그램을 만드시오. 
/*
1. 조건문으로 세자리 이상의 수를 받는다.
2. for문으로 자릿수에 맞는 숫자 값을 받는다.
*/
int main(){
    
    // 입력할 정수, 자릿수
    int x, y;
    cout << "세 자리 이상의 정수를 입력하세요: ";
    cin >> x;

    if(x>99){
        for(int i = 1; i < 4; i++){
            y = x % 10;
            x /= 10;
            cout << i << "번째 자릿수는 " << y << endl;

        }
    }
    else{
        cout << "오류입니다. 100 이상의 정수를 입력하세요";
    }



    return 0;
}
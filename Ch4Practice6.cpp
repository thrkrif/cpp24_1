#include <iostream>
using namespace std;
/*
*   *이 1,3,5,7,,,, 개  행, 열    중첩 반복문 안 행 * 2 - 1 개는 별의 갯수
*/
int main(){
    
    int type;
    int row;
    do{
    cout << "패턴 타입을 입력하세요(1 - 2):";
    cin >> type;
    }while(type<1 || type >2);

    do{
    cout << "패턴의 크기(줄 수)를 입력하세요(1 - 6):";
    cin >> row;
    }while(row<1 || row >6);

    if(type == 1){
    for(int i = row; i>=1; i--){
        //1 공백 만들기. 0,1,2...칸
       for(int i = row; i >= 1; i--) {
            // 공백 출력
            for(int j = 1; j <= row - i; j++) {
                cout << " ";
            }
            // 별표 출력
            for(int j = 1; j <= 2 * i - 1; j++) {
                cout << "*";
            }
            cout << endl;
        }
    }
    }
    if(type==2){
    for(int i = 1; i <= row; i++)
    {
        // 공백 만들기
        for(int j = 1; j <= (row-i); j++)
        {
            cout << " ";
        }
        // 별 만들기
        for(int j = 1; j <= (2 * i - 1); j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    }

    
   
    
    return 0;

}
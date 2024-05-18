#include <iostream>
using namespace std;
/*
 * 몇 월 며칠이 1년에 몇번째 날인지 구하기
 * switch와 단순 덧셈 이용, 윤달은 제외 
*/
int main(){
    int month, day;
    int dayOfyear = 0;

    cout << "몇월인지를 입력해주세요: ";
    cin >> month;
    cout << "일을 입력하세요: ";
    cin >> day;

    switch(month){
        case 12: dayOfyear += 30;   // 11월
        case 11: dayOfyear += 31;
        case 10: dayOfyear += 30;
        case 9: dayOfyear += 31;
        case 8: dayOfyear += 31;
        case 7: dayOfyear += 30;
        case 6: dayOfyear += 31;
        case 5: dayOfyear += 30;
        case 4: dayOfyear += 31;
        case 3: dayOfyear += 28;
        case 2: dayOfyear += 31;    // 1월
        case 1: dayOfyear += day;   // 해당 월의 몇번째 날인지 표현
            break;
        default:
            cout << "유효하지 않은 월입니다." << endl;


    }
    cout << "입력한 날짜는 1년 중 " << dayOfyear << "번 째 날입니다." << endl;

    return 0;
}
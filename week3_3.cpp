#include <iostream>
using namespace std;

//시간을 시,분,초 단위로 입력받았을 때, 이를 초 단위로 변환하는 프로그램을 만드세요.

int main(){
    
    // 시간, 분, 초
    int hour, min, sec;
    long sum;
    cout << "시,분,초 를 입력하시오:";
    cin >> hour;
    cin >> min;
    cin >> sec;
   
    //시간, 분, 초에 해당하는 범위 내에 있는 경우에만 값을 출력한다.

    if((0 < hour && hour < 25)){
    if(0 < min && min < 60){
    if(0 < sec && sec < 60){
    cout << "현재 시간은 " << hour << "시 " << min << "분 " << sec << "초 입니다." << endl;
    sum = hour * 360 + min * 60 + sec;
    cout << "초 단위로 변환한 시간: " << sum << endl;
    }
    else{
        cout << "알맞은 시간을 입력해주세요";
    }
    }
    else{
        cout << "알맞은 시간을 입력해주세요";
    }
    }
    else{
        cout << "알맞은 시간을 입력해주세요";
    }
    return 0;
}
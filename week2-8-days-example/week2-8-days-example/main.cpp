//
//  main.cpp
//  week2-8-days-example
//
//  Created by mac on 2013/10/31.
//  Copyright (c) 2013年 mac. All rights reserved.
//

#include <iostream>
using namespace std;

typedef enum days{SUN,MON,TUE,WED,THU,FRI,SAT}days;

inline days operator+(days d){
    return static_cast<days>((static_cast<int>(d)+1)%7);
}

ostream& operator<<
(ostream& out,days d){
    switch (d) {
        case SUN:
            out<<"SUN";
            break;
        case MON:
            out<<"MON";break;
        case TUE:
            out<<"TUE";break;
        case WED:
            out<<"WED";break;
        case THU:
            out<<"THU";break;
        case FRI:
            out<<"FRI";break;
        case SAT:
            out<<"SAT";break;
        default:
            break;
    }
    return out;
}

int main()
{
    days d=MON, e;
    e= +d;
    cout<<d<<'\t'<<e<<endl;
  
}


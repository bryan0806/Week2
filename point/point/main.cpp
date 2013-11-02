//
//  main.cpp
//  point
//
//  Created by mac on 2013/11/1.
//  Copyright (c) 2013年 mac. All rights reserved.
//

#include <iostream>
using namespace std;

class point{
public:
    double x,y;
    
};

point operator+ (point& p1,point& p2){
    point sum={p1.x+p2.x,p1.y+p2.y};
    return sum;
}

ostream& operator<<(ostream& out,const point& p){ //need const C++ doesn’t allow a non-const reference to a temporary object. 
    out<<"("<<p.x<<","<<p.y<<")";
    return out;
}

int main()
{
    point a={3.5,2.5},b={2.5,4.5},c;
    std::cout<<"a="<<a<<"b="<<b<<endl;
    std::cout<<"sum="<< a+b<<endl;
}


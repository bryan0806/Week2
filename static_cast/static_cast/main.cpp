//
//  main.cpp
//  static_cast
//
//  Created by mac on 2013/11/2.
//  Copyright (c) 2013年 mac. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    char y =static_cast<char>('A'+1);
    double x = static_cast<double>(static_cast<int>(y)+1);
    cout<<"y="<<y<<endl;
    cout<<"x="<<x<<endl;
}


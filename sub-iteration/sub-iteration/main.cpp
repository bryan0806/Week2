//
//  main.cpp
//  sub-iteration
//
//  Created by mac on 2013/10/30.
//  Copyright (c) 2013年 mac. All rights reserved.
//

#include <iostream>
using namespace std;

template <class T>
T iteration(T data[],int size) {
    for (int i=0; i<size; ++i)
        cout<<data[i]<<'\t';
    return 0; // just do not know why need this, if not would have error" control reaches end of non-void function "
}

int main(void)
{
    int a[]={1,3,5};
    double b[]={1.2,3.4,5.6};
    
    std::cout << "iteration a:"<<iteration(a,3)<<endl;
    std::cout<<"iteration b:"<<iteration(b,3)<<endl;
    return 0;
}


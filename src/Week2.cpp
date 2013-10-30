//============================================================================
// Name        : Week2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <complex>
using namespace std;

template <class T>
inline void swap(T& d,T& s)
{
    T temp=d;
    d=s;
    s=temp;
}

template <class summable>
summable sum(const summable data[],int size,summable asum=0) { //this is correct , power point is wrong one

    for (int i=0; i<size; ++i){
        asum += data[i];
    }

    return asum;
};

int main() {
	 int m=5,n=10;
	    double x=5.3,y=10.6;
	    complex<double> r(2.4, 3.5),s(3.4, 6.7);
	    cout<<"Input:"<<m<<","<<n<<endl;
	    int a[]={1,2,3};
	    double b[]={2.1,2.2,2.3};
	    ::swap(m,n); // As you can see, it lists the STL� std::swap() as one of the candidate functions.
	    //Since you�e using the std namespace, the compiler doesn� have enough information to
	    //determine which function should be used

	    //You can tell the compiler to use your function by using the scope resolution operator without a namespace:
	    cout<<"output:"<<m<<","<<n<<endl;
	    cout<<"double input:"<<x<<","<<y<<endl;
	    ::swap(x,y);
	    cout<<"double output:"<<x<<","<<y<<endl;
	    cout<<"complex input:"<<r<<","<<s<<endl;
	    ::swap(r,s);
	    cout<<"double output:"<<r<<","<<s<<endl;
        cout<<"sum of array a is :"<<sum(a,3)<<endl;
        cout<<"sum of array b is :"<<sum(b,3)<<endl;
        cout<<"sum of array a when default asum=5 : "<<sum(a,3,5)<<endl;
        cout<<"sum of array b when default asum=2 : "<<sum(b,3,12.0)<<endl; //here if you use 12 would have error
}

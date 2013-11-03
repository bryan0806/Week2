//
//  main.cpp
//  Dijkstra-Algorithm
//
//  Created by mac on 2013/11/2.
//  Copyright (c) 2013年 mac. All rights reserved.
//

#include <iostream>
#include <cstdlib>
using namespace std;

class Graph{
public:
    const int vertex=50;
    double density;
    double edge = vertex * density;
    int V(Graph g){return g.vertex;}
    double E(Graph k){return k.edge;}
    //double E(Graph k)const{return edge;}
    
    
private:
    
    
    
};

class vertex{
    
};

class edge{
    
};



int main(int argc, const char * argv[])
{
    
    Graph g1,g2;
    g1.density=0.2;
    g2.density=0.4;
    cout<<"g1 density="<<g1.density<<endl;
    cout<<"V(g1)="<<g1.V(g1)<<endl;
    cout<<"V(g2)="<<g2.V(g2)<<endl;
    cout<<"E(g1)="<<g1.E(g1)<<endl;
    cout<<"E(g2)="<<g2.E(g2)<<endl;
    cout<<g1.vertex*g1.density<<endl;
    
}

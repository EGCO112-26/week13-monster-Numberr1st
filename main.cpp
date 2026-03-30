//
//  main.cpp
//  monster
//
//  Created by Mingmanas Sivaraksa on 30/3/2566 BE.
//

#include <iostream>
using namespace std;
#include "monster.h"

int main(int argc, const char * argv[]) {
    monster *p;

    monster m1("Tony",18,2);
    monster m2("Peach"),m4("Kling",30);
    monster m3("Great");
    monster x[5]={{"jojo",150},{"JiJi",7}};

    p=new monster("Lulu",170,8); //constructor
    delete p; // destructor

    return 0; // destructor x,m4,m2,m1

}

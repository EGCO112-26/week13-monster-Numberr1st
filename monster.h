//
//  monster.h
//  monster
//
//  Created by Mingmanas Sivaraksa on 30/3/2566 BE.
//

#ifndef monster_h
#define monster_h

class monster{
private:
    string name;
    int hp,potion;
public:
    void Attack(monster &);
    void heal();
    monster(string n="Charles", int=10,int=1); // set standard string(name) int(hp) int (potion)
    ~monster(); //declare destructor
};

monster::monster(string n,int h,int p){
    name = n;
    h>200 ? hp=200: hp=h;
    p>10 ? potion=10: potion=p;
    
    cout << "Monster " << name <<" เริ่ด"<< endl;
    cout << "============" << endl;
}

monster::~monster(){ // destructor and return data rom last to first 
    cout << "Bye Bye!! " << name << " HP : " <<hp<< " Potion : "<< potion <<endl;
}

#endif /* monster_h */



#include <iostream>
#include "rationalnumber.h"
using namespace std;

rationalnumber::rationalnumber(rationalnumber &object_name){
    p = object_name.p;
    q = object_name.q;
}
void rationalnumber::setP(int _p){ //объектод утга оноох хүртвэр
    p = _p; }
void rationalnumber::setQ(int _q){ //объектод утга оноох хувиар
    if(q == 0)
        q = 1;
    else
        q = _q;
    }
float rationalnumber::Nemeh(rationalnumber b){
    return ((this->p* b.q) + (b.p* this->q))/(this->q* b.q*1.0);
}
float rationalnumber::Hasah(rationalnumber b){
    return ((this->p* b.q) - (b.p* this->q))/(this->q* b.q*1.0);
}
float rationalnumber::Huvaah(rationalnumber b){
    return (this->p*b.q)/(this->q*b.p*1.0);
}
float rationalnumber::Urjih(rationalnumber b){
    return (this->p* b.p)/(this->q* b.q*1.0);
}
float rationalnumber::huraah(int &p, int &q){
    int temp =0;
    for(int i=2; i <= p || i <= q; i++)
        if(p%i==0 && q%i==0)
            temp =i;
    if(temp != 0)
        p = p/temp, q = q/temp;
    return 1.0*p/q;
}
int main()
{
    rationalnumber a, b, c;
    int p, q;
    cin >> p, a.setP(p);
    cin >> q, a.setQ(q);
    cin >> p, b.setP(p);
    cin >> q, b.setQ(q);
    cout<<"Plus:    "<< a.Plus(b) << endl;
    cout<<"Minus:   "<< a.Minus(b)<< endl;
    cout<<"Division:  "<<a.division(b)<<endl;
    cout<<"Multiplication:  "<<a.multiplication(b)<<endl;
    cout<<"2 obeject nemeh "<<endl;
    c = a + b;

    cout << a.huraah(p, q);

}



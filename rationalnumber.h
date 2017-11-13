#ifndef RATIONALNUMBER_H_INCLUDED
#define RATIONALNUMBER_H_INCLUDED
class rationalnumber
{
private:
    int p, q; //p = хүртвэр q = хувиар
public:
//    rationalnumber(int p =1; int q =1);
//    rationalnumber(rationalnumber &object_name);
    void setP(int _p); //объектийн хүртвэрийг авах
    void setQ(int _q); //объектийн хувиарыг авах
    int getP(); //объектийн хүртвэрийг буцаах
    int getQ(); //объектийн хувиарыг буцаах
    float Nemeh(rationalnumber b);   //2 объектийг нэмэх
    float Urjih(rationalnumber b); //2объектийг үржих
    float Hasah(rationalnumber b);  //2 объектийн хасах
    float Huvaah(rationalnumber b);   //2 объектийн хуваах
    float huraah(int &p, int &q);   // рационал бутархайг хураах
    rationalnumber operator+(const rationalnumber& b)
    {
        rationalnumber t;
        t.p = (this->p*b.q) + (this->q*b.p);
        t.q = this->q *b.q*1.0;
        return t;
    }
    rationalnumber operator-(const rationalnumber& b)
    {
        rationalnumber t;
        t.p = this->p - b.p;
        t.q = this->q - b.q;
        return t;
    }

    rationalnumber operator*(const rationalnumber& b)
    {
        rationalnumber t;
        t.p = this->p * b.p;
        t.q = this->q * b.q;
        return t;
    }
    rationalnumber operator/(const rationalnumber& b)
    {
        rationalnumber t;
        t.p = this->p / b.p;
        t.q = this->q / b.q;
        return t;
    }



#endif // RATIONALNUMBER_H_INCLUDED

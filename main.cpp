#include <iostream>
using namespace std;

class Human
{

public:
     Human();//overload the constructor.
     Human(int age_tem, int hei_tem, string sex_tem);
     ~Human();//overload the destructor.
    void setAge(int a)
    {
        age = a;
    }
    void setHeight(int b)
    {
        height = b;
    }
    void setSex(string a)
    {
        sex = a;
    }

    int getAge()
    {
        return age;
    }
    int getHeight()
    {
        return height;
    }
    string getSex()
    {
        return sex;
    }

private:
    int age;
    int height;
    string sex;

};
class Man :public Human
{
public:
    void hair()
    {
        this->setSex("man");
        cout<<"Man has short hair."<<endl;
    }
};

    Human::Human(void)
    {
        cout<<"An object of human has created."<<endl;
    }
    Human::Human(int age_tem, int hei_tem, string sex_tem):age(age_tem),height(hei_tem),sex(sex_tem)
    {
        cout<<"An object of human has created. age is "<<age<<endl;
    }

    Human::~Human(void)
    {
        cout<<"The object has been destroyed."<<endl;
    }
int main()
{  
    Human m1;
    m1.setAge(20);
    m1.setHeight(180);
    m1.setSex("man");

    Human w1(18,170,"women");
    //w1.setAge(18);
   // w1.setHeight(170);
    //w1.setSex("women");

    Man m;
    m.setAge(24);
    m.setHeight(170);
    m.hair();


    cout<<"m1:"<<endl<<m1.getAge()<<" years old"
               <<endl<<m1.getHeight()<<" tall"
               <<endl<<m1.getSex()<<endl;

    cout<<"w1:"<<endl<<w1.getAge()<<" years old"
               <<endl<<w1.getHeight()<<" tall"
               <<endl<<w1.getSex()<<endl;

    cout<<"w1:"<<endl<<m.getAge()<<" years old"
               <<endl<<m.getHeight()<<" tall"
               <<endl<<m.getSex()<<endl;

    return 0;
}

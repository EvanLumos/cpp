#include <iostream>
using namespace std;

class human
{

public:
     human();//overload the constructor.
     human(int age_tem, int hei_tem, string sex_tem);
     ~human();//overload the destructor.
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

    human::human(void)
    {
        cout<<"An object of human has created."<<endl;
    }
    human::human(int age_tem, int hei_tem, string sex_tem):age(age_tem),height(hei_tem),sex(sex_tem)
    {
        cout<<"An object of human has created. age is "<<age<<endl;
    }

    human::~human(void)
    {
        cout<<"The object has been destroyed."<<endl;
    }
int main()
{  
    human m1;
    m1.setAge(20);
    m1.setHeight(180);
    m1.setSex("man");

    human w1(18,170,"women");
    //w1.setAge(18);
   // w1.setHeight(170);
    //w1.setSex("women");

    cout<<"m1:"<<endl<<m1.getAge()<<" years old"
               <<endl<<m1.getHeight()<<" tall"
               <<endl<<m1.getSex()<<endl;
    cout<<"w1:"<<endl<<w1.getAge()<<" years old"
               <<endl<<w1.getHeight()<<" tall"
               <<endl<<w1.getSex()<<endl;
    return 0;
}

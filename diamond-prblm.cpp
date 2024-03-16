#include<iostream>
using namespace std;

class Person{
   public:
   void walk(){
      cout << "Walking..\n";
   }
};
class Teacher : virtual public Person{
   public:
   void teach(){
      cout << "Teaching\n";
   }
};

class Researcher : virtual public Person
{
public:
   void research(){
      cout << "Researching..\n";
   }
};

class Professor : public Teacher, public Researcher{
   public:
   void lect(){
      cout << "Lecturing..\n";
   }
};

int main(){
   Professor p;
   ///By scope resolution
   p.Teacher::walk();
   p.walk();


   
}

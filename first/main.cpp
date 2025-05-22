

#include <iostream>

class Caine {
  public:
  bool eat() {
    std::cout<<"Cainele mananca"<< std::endl;
    return true;
  };
  int getAge() {
    return age;
  }
  int setAge(int nage) {
    age = nage;
    return age;
  }
private:
  int age;
};
int main(){
  Caine d = Caine();
  d.eat();
  d.setAge(25);
  std::cout<<d.getAge();
  return 0;
}

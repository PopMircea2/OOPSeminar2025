#include<iostream>
#include<vector>

//polimorphism ca sa implementam, reutilizam cod, declutter

class Shapes {
public:
    int s;
    Shapes() {
        s = 42;
    }

    virtual void speak() {
        std::cout<<"I am a Shape\n";
    }
    virtual ~Shapes() = default; // Add a virtual destructor

};

class Rectangle:public Shapes {//ce pui inainte de friend class modifica datele in private daca punem private
public:
    int y;
    Rectangle(int y) {
        this->y = y;
    }
    void speak() override {
        std::cout<<"I am a Rectangle\n";
    }
};

class Triangle:public Shapes {
    public:
    void speak() override {
        std::cout<<"I am a Triangle\n";
    }
};
void printShapes(std::vector<Shapes*> shapes) {
    for (auto shape: shapes) {
        shape->speak();
    }
}

int main(){
    // Shapes s;
    // s.speak();
    // Rectangle r;
    // r.speak();
    //Shapes s = Rectangle();

    // Shapes s1;
    // std::cout<<s1.s;
    //
    // Shapes s2 = Rectangle(5);
    // std::cout<<s2.s;
    //std::cout<<s2.y;

    Shapes* sptr;
    Shapes s3;
    Rectangle r(50);
    Triangle t;

    std::vector<Shapes*> shape = {
        new Shapes(),
        new Rectangle(5),
        new Triangle(),
    };

    // sptr = &s3;
    // sptr->speak();
    //
    // sptr = &r;
    // sptr->speak();
    //
    // sptr = &t;
    // sptr->speak();
printShapes(shape);

    // std::cout<<"Hello World!"<< std::endl;
    return 0;
}
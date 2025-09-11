#include <iostream>
using namespace std;
#include <string>

/*class Car
{
private:
    string color;
    float weight;

public:
    Car(string color, float weight)
    {
        this->color = color;
        this->weight = weight;
    }
    void display()
    {
        cout << "Color: " << color << endl;
        cout << "Weight: " << weight << " kg" << endl;
    }
};

int main()
{
    Car c1("Red", 1500.5);
    // Car c1 = Car("Red", 1500.5); // Alternative way to create an object
    c1.display();
    return 0;
}*/

class Book
{
private:
    string title;
    string author;
    int year;

public:
    Book()
    {
        this->title = "Unknown Title";
        this->author = "Unknown Author";
        this->year = 0;
    }

    Book(string title, string author, int year)
    {
        this->title = title;
        this->author = author;
        this->year = year;
    }

    void display()
    {
        cout << this->title << ", " << this->author << " ," << this->year << endl;
    }
};

int main()
{
    Book b1("Matilda", "Roald Dahl", 1988);
    Book b2("The Giving Tree", "Shel Silverstein", 1964);
    Book b3;
    b1.display();
    b2.display();
    b3.display();
    return 0;
}
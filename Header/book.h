#ifndef BOOK_H
#define BOOK_H
#include <string>
#include <iostream>
using namespace std;

class Book
{
private:
    int Id;
    string Author;
    string Title;
    int Year;
    bool Available;
    double Price;

public:
    int getId();
    string getAuthor();
    string getTitle();
    int getYear();
    bool getAvailable();
    double getPrice();


    void setId(int id);
    void setAuthor(string A);
    void setTitle(string T);
    void setYear(int Y);
    void setAvailable(bool Av);
    void setPrice(double P);

    void Display();
};

#endif // BOOK_H

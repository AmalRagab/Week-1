#include "book.h"

int Book::getId() {
    return Id;
     }
string Book::getAuthor() {
     return Author;
     }
string Book::getTitle() {
     return Title;
     }
int Book::getYear() {
    return Year;
    }
bool Book::getAvailable() {
    return Available;
    }
double Book::getPrice() {
     return Price;
     }

void Book::setId(int id) {
    Id = id;
    }
void Book::setAuthor(string author) {
     Author = author;
     }
void Book::setTitle(string title) {
     Title = title;
     }
void Book::setYear(int y) {
    Year = y;
    }
void Book::setAvailable(bool available) {
    Available = available;
    }
void Book::setPrice(double price) {
    Price = price;
    }

void Book::Display(){
    cout << " \t\tThe info of book"<<endl<<endl;
    cout << "ID : " << Id << endl;
    cout << "Author : " << Author << endl;
    cout << "Title : " << Title << endl;
    cout << "Year : " << Year << endl;
    cout << "Price : " << Price << endl;
    cout << "Available : " << (Available ? "Yes" : "No") << endl << endl;
    cout << "---------------------------------" << endl;
}

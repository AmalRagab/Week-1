#include <iostream>
#include "Book.h"

using namespace std;

int main()
{  Book arr[3];
    for (int i = 0; i < 3; i++)
    {
        int id;
        string author;
        string title;
        int year;
        bool available;
        double price;
      cout << "\t\tGive me the next info. about the book "<< i+1 << "..." <<endl ;
     cout<< "Enter the ID :- " ;
     cin >> id ;
     cout<< "Enter the Author :- " ;
     cin >> author ;
     cout<< "Enter the Title :- " ;
     cin >> title ;
     cout<< "Enter the Year :- " ;
     cin >> year ;
     cout<< "Enter the Available ( Yes '1' or No '0' ) :- " ;
     cin >> available ;
     cout<< "Enter the Price :- " ;
     cin >> price ;
        arr[i].setId(id);
        arr[i].setAuthor(author);
        arr[i].setTitle(title);
        arr[i].setYear(year);
        arr[i].setPrice(price);
        arr[i].setAvailable(available);

    }
    for (int i = 0; i < 3; i++) {
        arr[i].Display();
    }
    return 0;
}

#ifndef TEMA_LOCATION_H
#define TEMA_LOCATION_H
#include <iostream>
#include <string>
using namespace std;

class location{
    string country;
    string city;
    string street;
    int number;

public:

    location() {
        country = city = street = "";
        number = 0;
    }

    void add_country(string &Country);

    void add_city(string &City);

    void add_address(string &Street, int &Number);

    string get_country();

    string get_city();

    string get_street();

    int get_number() const;

    friend ostream& operator<< (ostream &cout, const location &place);

    friend istream& operator>> (istream &cin, location &place);

    location &operator=(const location &place);

    friend class person;

    friend class gym;
};

#endif

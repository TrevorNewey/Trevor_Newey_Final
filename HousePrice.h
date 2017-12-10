// File: HousePrice
// Created by Hugo Valle on 11/22/2017.
// Copyright (c) 2017 WSU
//

#ifndef HW8_HOUSEPRICE_H
#define HW8_HOUSEPRICE_H

#include <string>
#include <iostream>
using namespace std;

/*!
 * Class HousePrice
 */
class HousePrice
{
private:
    double price;
    string state;
    string city;
    string street;
    int postalCode;
    int number;
    int id;
public:
    HousePrice();
    HousePrice(int id, int number, const string &street, const string &city,
               const string &state, int postalCode, double Price);
    double getPrice() const;
    const string & getState() const;

    const string &getCity() const;

    const string &getStreet() const;

    int getPostalCode() const;

    int getNumber() const;

    int getId() const;
    //Setters
    void setPrice(double price);

    void setState(const string &state);

    void setCity(const string &city);

    void setStreet(const string &street);

    void setPostalCode(int postalCode);

    void setNumber(int number);

    void setId(int id);
};
ostream & operator <<(ostream &os, const HousePrice & price);

#endif //HW8_HOUSEPRICE_H

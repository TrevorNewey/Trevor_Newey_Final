// File: HousePrice
// Created by Hugo Valle on 11/22/2017.
// Copyright (c) 2017 WSU
//

#include "HousePrice.h"

/*!
 * Default constructor for HousePrice()
 */
HousePrice::HousePrice() {
    double price = 0.0;
    string state = "";
    string city = "";
    string street = "";
    int postalCode = 00000;
    int number=0;
    int id=0;
}
/*!
 * Gets the price for the House HousePrice Object
 * @return : Returns the price
 */
double HousePrice::getPrice() const {
    return price;
}
/*!
 * Gets the state for the HousePrice Object
 * @return : Returns the state
 */
const string &HousePrice::getState() const {
    return state;
}
/*!
 * Constructor the takes all the parameters for the HousePrice object
 * @param id : The ID of HousePrice Object
 * @param number : The number of HousePrice object
 * @param street : The street of the HousePrice object
 * @param city : The city of HousePrice object
 * @param state : The state of HousePrice object
 * @param postalCode : The postal code of HousePrice object
 * @param Price : The Price of HousePrice object
 */
HousePrice::HousePrice(int id, int number, const string &street, const string &city, const string &state,
                       int postalCode, double Price) {
    HousePrice::id = id;
    HousePrice::number = number;
    HousePrice::street = street;
    HousePrice::city = city;
    HousePrice::state = state;
    HousePrice::postalCode = postalCode;
    HousePrice::price = Price;

}
/*!
 * Gets the city of the Houseprice Object
 * @return : Returns the city
 */
const string &HousePrice::getCity() const {
    return city;
}
/*!
 * Gets the Street for the HousePrice object
 * @return : Returns the street value
 */
const string &HousePrice::getStreet() const {
    return street;
}
/*!
 * Gets the postal Code from the HousePrice object
 * @return : Returns the postal code for the HousePrice object
 */
int HousePrice::getPostalCode() const {
    return postalCode;
}
/*!
 * Gets the Number from the HousePrice object
 * @return : Returns the number from the HousePrice object
 */
int HousePrice::getNumber() const {
    return number;
}
/*!
 * Gets the ID of the HousePrice object
 * @return Returns the ID of the HousePrice object
 */
int HousePrice::getId() const {
    return id;
}
/*!
 * Sets the price for the house price object
 * @param price : the price of the house
 */
void HousePrice::setPrice(double price) {
    HousePrice::price = price;
}
/*!
 * Sets the state for the HousePrice object
 * @param state : The state of the house
 */
void HousePrice::setState(const string &state) {
    HousePrice::state = state;
}
/*!
 * Sets the city of the HousePrice object
 * @param city : The city of the house
 */
void HousePrice::setCity(const string &city) {
    HousePrice::city = city;
}
/*!
 * Sets the street of the HousePrice object
 * @param street : The street of the house
 */
void HousePrice::setStreet(const string &street) {
    HousePrice::street = street;
}
/*!
 * Sets the postal code of the HousePrice object
 * @param postalCode : The postal code of the house
 */
void HousePrice::setPostalCode(int postalCode) {
    HousePrice::postalCode = postalCode;
}
/*!
 * Sets the number of the HousePrice object
 * @param number : The number of the house
 */
void HousePrice::setNumber(int number) {
    HousePrice::number = number;
}
/*!
 * Sets the id of the HousePrice object
 * @param id : The id of the house
 */
void HousePrice::setId(int id) {
    HousePrice::id = id;
}
/*!
 * Operator overloading for <<
 * @param os The command left of the << operator
 * @param price : The house object we use << with
 * @return : Returns an output of all the members of the HousePrice object
 */
ostream &operator<<(ostream &os, const HousePrice &price)
{
    os << "id: "<<price.getId()<<" number: "<<price.getNumber()<<" postalCode: "<<price.getPostalCode()<<
       " street "<<price.getStreet()<<" city: "<<price.getCity()<<" state: "<<price.getState()<<" price: "<<price.getPrice();

    return os;
}

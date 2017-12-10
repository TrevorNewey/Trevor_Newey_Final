// File: HouseFunc
// Created by Hugo Valle on 11/22/2017.
// Copyright (c) 2017 WSU
//

#include <iostream>
#include <vector>
#include <map>
#include "HouseFunc.h"
#include "HousePrice.h"
#include "csv.h" // library to read csv files
#include <algorithm>
#include <fstream>
#include <sstream>


using namespace std;
/*!
 * Read CSV Mock Data. Parses each record in the file to
 * an object of HousePrice house. Then, populate a vector
 * of HousePrice objects with all the records.
 * It uses special library to parse CSV file "csv.h"
 * @param fileIn File name <string>
 * @param hp Reference to Vector of HousePrice Objects
 */
void readCSV(const string fileIn,vector<HousePrice>& hp)
{
    ifstream inFS(fileIn);//input file stream
    //ofstream outFS;//output file stream
    if(!inFS.is_open()){
        cout<<"Error: File didn't open";
    }
    else{

        io::CSVReader<7> in(fileIn);
        in.read_header(io::ignore_extra_column,"id","number","street","city","state","postalCode","price");
        int id;
        int number;
        int postalCode;
        string street;
        string city;
        string state;
        double price;
        while(in.read_row(id,number,street,city,state,postalCode,price)){
            HousePrice house;
            house.setPrice(price);
            house.setCity(city);
            house.setId(id);
            house.setNumber(number);
            house.setPostalCode(postalCode);
            house.setState(state);
            house.setStreet(street);
            hp.push_back(house);
            //cout<<"id: "<<id<<" number: "<<number<<" postalCode: "<<postalCode<<" street: "<<street<<" city: "<<city<<" state: "<<state<<" price: "<<price<<endl;
        }
        for(auto item: hp){
            cout<<"id: "<<item.getId()<<" number: "<<item.getNumber()<<" postalCode: "<<item.getPostalCode()<<" street: "<<item.getStreet()<<" city: "<<item.getCity()<<" state: "<<item.getState()<<" price: "<<item.getPrice()<<endl;
        }
        }
    inFS.close();
    }


/*!
 * Sort the Vector of HousePrice Objects by price. Display the most affordable
 * and the most expensive house from the vector.
 * @param hp Reference to vector<HousePrice>
 */
void houseMarketValues(vector<HousePrice> &hp)
{
    sort(hp.begin(),hp.end(),[](const HousePrice& lhs, const HousePrice& rhs)
    {
       return lhs.getPrice()<rhs.getPrice();
    });
    cout<<"Most Affordable Home: "<<hp.front()<<endl;
    cout<<"Most Expensive Home: "<<hp.back()<<endl;
}


/*!
 * Sort the Vector of HousePrice Objects by state. Display the
 * number of houses per state.
 * It uses a map to count instances per state.
 * @param hp Reference to vector<HousePrice>
 */
void houseMarketPerState(vector<HousePrice> &hp)
{
    // Sort by State
    sort(hp.begin(),hp.end(),[](const HousePrice& lhs, const HousePrice& rhs)
    {
        return lhs.getState()<rhs.getState();
    });
    vector<string> state;
    for (auto item: hp) {
        state.push_back(item.getState());
    }
    int result = count(state.begin(),state.end(),"AK");
    cout<<"AK "<<result<<"  ";
    result = count(state.begin(),state.end(),"AL");
    cout<<"AL "<<result<<"  ";
    result = count(state.begin(),state.end(),"AR");
    cout<<"AR "<<result<<"  ";
    result = count(state.begin(),state.end(),"AZ");
    cout<<"AZ "<<result<<"  ";
    result = count(state.begin(),state.end(),"CA");
    cout<<"CA "<<result<<"  ";
    result = count(state.begin(),state.end(),"CO");
    cout<<"CO "<<result<<"  ";
    result = count(state.begin(),state.end(),"CT");
    cout<<"CT "<<result<<"  ";
    result = count(state.begin(),state.end(),"DC");
    cout<<"DC "<<result<<"  ";
    result = count(state.begin(),state.end(),"DE");
    cout<<"DE "<<result<<"  ";
    result = count(state.begin(),state.end(),"FL");
    cout<<"FL "<<result<<"  ";
    cout<<endl;
    result = count(state.begin(),state.end(),"GA");
    cout<<"GA "<<result<<"  ";
    result = count(state.begin(),state.end(),"HI");
    cout<<"HI "<<result<<"  ";
    result = count(state.begin(),state.end(),"IA");
    cout<<"IA "<<result<<"  ";
    result = count(state.begin(),state.end(),"ID");
    cout<<"ID "<<result<<"  ";
    result = count(state.begin(),state.end(),"IL");
    cout<<"IL "<<result<<"  ";
    result = count(state.begin(),state.end(),"IN");
    cout<<"IN "<<result<<"  ";
    result = count(state.begin(),state.end(),"KS");
    cout<<"KS "<<result<<"  ";
    result = count(state.begin(),state.end(),"KY");
    cout<<"KY "<<result<<"  ";
    result = count(state.begin(),state.end(),"LA");
    cout<<"LA "<<result<<"  ";
    result = count(state.begin(),state.end(),"MA");
    cout<<"MA "<<result<<"  ";
    cout<<endl;
    result = count(state.begin(),state.end(),"ME");
    cout<<"ME "<<result<<"  ";
    result = count(state.begin(),state.end(),"MD");
    cout<<"MD "<<result<<"  ";
    result = count(state.begin(),state.end(),"MI");
    cout<<"MI "<<result<<"  ";
    result = count(state.begin(),state.end(),"MN");
    cout<<"MN "<<result<<"  ";
    result = count(state.begin(),state.end(),"MO");
    cout<<"MO "<<result<<"  ";
    result = count(state.begin(),state.end(),"MS");
    cout<<"MS "<<result<<"  ";
    result = count(state.begin(),state.end(),"MT");
    cout<<"MT "<<result<<"  ";
    result = count(state.begin(),state.end(),"NC");
    cout<<"NC "<<result<<"  ";
    result = count(state.begin(),state.end(),"ND");
    cout<<"ND "<<result<<"  ";
    result = count(state.begin(),state.end(),"NE");
    cout<<"NE "<<result<<"  ";
    cout<<endl;
    result = count(state.begin(),state.end(),"NH");
    cout<<"NH "<<result<<"  ";
    result = count(state.begin(),state.end(),"NJ");
    cout<<"NJ "<<result<<"  ";
    result = count(state.begin(),state.end(),"NM");
    cout<<"NM "<<result<<"  ";
    result = count(state.begin(),state.end(),"NV");
    cout<<"NV "<<result<<"  ";
    result = count(state.begin(),state.end(),"NY");
    cout<<"NY "<<result<<"  ";
    result = count(state.begin(),state.end(),"OH");
    cout<<"OH "<<result<<"  ";
    result = count(state.begin(),state.end(),"OK");
    cout<<"OK "<<result<<"  ";
    result = count(state.begin(),state.end(),"OR");
    cout<<"OR "<<result<<"  ";
    result = count(state.begin(),state.end(),"PA");
    cout<<"PA "<<result<<"  ";
    result = count(state.begin(),state.end(),"RI");
    cout<<"RI "<<result<<"  ";
    cout<<endl;
    result = count(state.begin(),state.end(),"SC");
    cout<<"SC "<<result<<"  ";
    result = count(state.begin(),state.end(),"SD");
    cout<<"SD "<<result<<"  ";
    result = count(state.begin(),state.end(),"TN");
    cout<<"TN "<<result<<"  ";
    result = count(state.begin(),state.end(),"TX");
    cout<<"TX "<<result<<"  ";
    result = count(state.begin(),state.end(),"UT");
    cout<<"UT "<<result<<"  ";
    result = count(state.begin(),state.end(),"VA");
    cout<<"VA "<<result<<"  ";
    result = count(state.begin(),state.end(),"VT");
    cout<<"VT "<<result<<"  ";
    result = count(state.begin(),state.end(),"WA");
    cout<<"WA "<<result<<"  ";
    result = count(state.begin(),state.end(),"WI");
    cout<<"WI "<<result<<"  ";
    result = count(state.begin(),state.end(),"WV");
    cout<<"WV "<<result<<"  ";
    cout<<endl;
    result = count(state.begin(),state.end(),"WY");
    cout<<"WY "<<result<<"  ";
}
//int i = 0;
//string stateArray[51] = {"AK","AL","AR","AZ","CA","CO",
//                         "CT","DC","DE","FL","GA","HI","IA","ID",
//                         "IL","IN","KS","KY","LA","MA","ME","MD",
//                         "MI","MN","MO","MS","MT","NC",
//                         "ND","NE","NH","NJ","NM","NV","NY","OH",
//                         "OK","OR","PA","RI","SC","SD","TN","TX",
//                         "UT","VA","VT","WA",
//                         "WI","WV","WY"};

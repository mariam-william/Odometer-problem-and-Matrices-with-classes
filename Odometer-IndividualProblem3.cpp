// Title: Odometer - Fuel Efficiency Calculator for Cars.
// CS213 - OOP - Assignment 2
// Version 1.0

#include <iostream>

using namespace std;

// Creating the class called Odometer, to contain members and functions
class Odometer {
private: // Declaring Private member variables.
    float milesDriven;
    float fuelEfficiency;

public: // Contains constructors, functions, member functions.
    Odometer (){ // constructor to initialize miles and fuel efficiency
        milesDriven = 0.0;
        fuelEfficiency = 0.0;
    }

    void resetMiles(){ // Function to reset Miles.
        milesDriven = 0.0;
    };

    void setFuelEfficiency (float fuelEfficiency){ // Setter for Fuel efficiency.
        this->fuelEfficiency = fuelEfficiency;
    };

    void tripMiles (float milesDriven){ // Setter for trip miles.
        this->milesDriven = milesDriven;
    }

    float gasConsumesd (){ // Function to calculate the consumed gasoline.
        return milesDriven / fuelEfficiency;
    }
};

int main()
{
    // Testing Program with two different trips with two different cars, each has its own fuel efficiency.
    Odometer trip1, trip2;
    // First Trip
    trip1.resetMiles();
    trip1.setFuelEfficiency(50);
    trip1.tripMiles(110);
    cout << "Fuel efficiency for the car: " << endl << endl;
    cout << "Gallons consumed after 110 miles = " << trip1.gasConsumesd() << " gallon." << endl << endl;

    trip1.tripMiles(40);
    cout << "Gallons consumed after another 40 miles = " << trip1.gasConsumesd() << " gallon.\n\n" << endl;
    trip1.resetMiles();

    //Second Trip
    trip2.resetMiles();
    trip2.setFuelEfficiency(40);
    trip2.tripMiles(180);
    cout << "Fuel efficiency for the truck: " << endl << endl;
    cout << "Gallons consumed after 180 miles = " << trip2.gasConsumesd() << " gallon." << endl << endl;

    trip2.tripMiles(100);
    cout << "Gallons consumed after another 100 miles = " << trip2.gasConsumesd() << " gallon." << endl << endl;
    trip2.resetMiles();


    return 0;
}

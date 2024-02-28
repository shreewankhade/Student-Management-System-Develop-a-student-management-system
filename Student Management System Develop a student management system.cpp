#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Flight {
    string flightNumber;
    string origin;
    string destination;
    int capacity;
    int reservedSeats;
};

vector<Flight> flights;

void displayFlights() {
    cout << "Available Flights:" << endl;
    for (const Flight& flight : flights) {
        cout << "Flight Number: " << flight.flightNumber << endl;
        cout << "Origin: " << flight.origin << ", Destination: " << flight.destination << endl;
        cout << "Available Seats: " << flight.capacity - flight.reservedSeats << endl;
        cout << endl;
    }
}

void reserveSeat(string flightNumber) {
    for (Flight& flight

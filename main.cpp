
/*
Asignacion: BoxOffice
Nombre: Maria A. Nieves Rivera
Num. Est: 801-19-5581
Colaboraciones:
- I. Gonzalez Albino
*/

#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    // Program purpose 
    cout << "This program determines the gross and net earnings from a movie in theaters, along with the distributor's profit.\n\n";

    // Ticket prices
    const double Adult_Ticket_Price = 10.00;
    const double Child_Ticket_Price = 6.00;

    // Theater profit
    const double Theater_Profit_Percentage = 0.20;
    
    // User input information 
    string MovieName;
    int Adult_Tickets_Sold, Child_Tickets_Sold;
    
    cout << "Enter movie name: ";
    getline(cin, MovieName); 
    cout << "Amount of adults tickets sold: ";
    cin >> Adult_Tickets_Sold;
    cout << "Amount of child tickets sold: ";
    cin >> Child_Tickets_Sold;
    
    // Profits
    double Gross_Profit = (Adult_Tickets_Sold * Adult_Ticket_Price) + (Child_Tickets_Sold * Child_Ticket_Price);
    double Net_Profit = Gross_Profit * Theater_Profit_Percentage;
    double Distributor_Amount = Gross_Profit - Net_Profit;
    
    // Output
    cout << fixed << showpoint << setprecision(2); 
    cout << "\n";
    cout << left << setw(30) << "Movie Name: " << "\"" << MovieName << "\"" << endl;
    cout << left << setw(30) << "Adult Tickets Sold: " << right << setw(6) << Adult_Tickets_Sold << endl;
    cout << left << setw(30) << "Child Tickets Sold: " << right << setw(6) << Child_Tickets_Sold << endl;
    cout << left << setw(30) << "Gross Box Office Profit: " << "$" << right << setw(8) << Gross_Profit << endl;
    cout << left << setw(30) << "Net Box Office Profit: " << "$" << right << setw(8) << Net_Profit << endl;
    cout << left << setw(30) << "Amount Paid to Distributor: " << "$" << right << setw(8) << Distributor_Amount << endl;
    
    return 0;
}
#include <iostream>

using namespace std;

int main() {

    cout << "Challenge one :: " << endl;

    string teaType = "Green Tea";
    float teaPricePerkilo = 12.50;
    char teaRating = 'A';

    cout << "Tea type :: " << teaType << "\nPrice per kilo :: " << teaPricePerkilo << "\nRating :: " << teaRating << endl;

    cout << "Challenge two :: " << endl;

    float teaBasePrice;
    float teaTax = 10;
    int teaFinalPrice;
    
    cout << "Enter base price for you tea :: ";
    cin >> teaBasePrice;

    teaFinalPrice = (int) (teaBasePrice + (teaBasePrice * teaTax / 100));

    cout << "Final tea price :: " << teaFinalPrice << endl;

    cout << "Challenge three :: " << endl;

    string userFavouriteTea;
    int teaQuantity;

    cout << "Tell us your favourite tea :: ";
    getline(cin, userFavouriteTea);

    cout << "How many cups would you like? :: ";
    cin >> teaQuantity;

    cout << "Thank you for waiting!!\nHere is your " << teaQuantity << " cups of " << userFavouriteTea << " \n";

    return 0;

}
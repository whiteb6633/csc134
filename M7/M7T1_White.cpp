# include <iostream>
using namespace std;

// CSC 134
// M7T1 - Restaraunt Rating
// whiteb
// 4/29/24
// Use Restaraunt class to store user ratings

// Next time we'll put the class in a seperate file

class Restaraunt {
    private:
    string name;   // the name
    double rating; // 0 to 5 stars

    public:
    // constructor
    Restaraunt(string n, double r) {
        name = n;
        rating = r;
    }
    // getters and setters
    void setName(string n) {
        name = n;
    }
    void setRating(double r) {
        rating = r;
    }
    string getName() const {
        return name;
    }
    double getRating() const {
        return rating;
    }
    // print a formatted entry
    void printInfo() {
        cout << "Name: " << name << " ";
        cout << "(" << rating << "/5 stars)" << endl;
    }

};

int main() {
    cout << "M7T1 - Restaraunt Reviews" << endl;
    // create a restaraunt
    Restaraunt lunch_place = Restaraunt("Mi Casita", 4.5);
    // the constructor saves us from having to use 3 lines to set up
    // Restaraunt lunch_place;
    // lunch_place.setName("Place");
    // lunch_place.setRating( 3.0);
    Restaraunt breakfast_place = Restaraunt("Waffle House", 3.0);
    cout << "Review info:" << endl;
    cout << "Breakfast:" << endl;
    breakfast_place.printInfo();
    cout << "Lunch:" << endl;
    lunch_place.printInfo();

    return 0;
}
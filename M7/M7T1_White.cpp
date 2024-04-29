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

};

int main() {
    cout << "MT71 - Restaraunt Reviews" << endl;
    // create a restaraunt
    Restaraunt lunch_place = Restaraunt("Mi Casita", 4.5);
    cout << "Review info" << endl;
    cout << lunch_place.getName() << endl;
    cout << lunch_place.getRating() << endl;
    return 0;
}
#include <iostream>
using namespace std;
class Distance {
public:
    // Explicit constructor to initialize distance in meters
    explicit Distance(double meters) : meters_(meters) {}

    // Getter method to retrieve distance in meters
    double getMeters() const {
        return meters_;
    }

    // Conversion method to convert meters to kilometers
    double toKilometers() const {
        return meters_ / 1000.0;
    }

private:
    double meters_;
};

int main() {
    // Using explicit constructor to create a Distance object
    Distance distanceInMeters(1500.0);

    // Accessing the distance in meters using the getter method
    cout << "Distance in meters: " << distanceInMeters.getMeters() << " m" <<endl;

    // Using the conversion method to convert meters to kilometers
    cout << "Distance in kilometers: " << distanceInMeters.toKilometers() << " km" <<endl;

    // Uncommenting the line below would result in a compilation error
    // Distance distanceError = 2000.0; // Error: No viable conversion from 'double' to 'Distance'

    return 0;
}

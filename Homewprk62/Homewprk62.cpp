#include <iostream>
#include <vector>
#include <list>

using namespace std;

//class Point {
//public:
//    Point(int x = 0, int y = 0) : x(x), y(y) {}
//
//    int getX() const { return x; }
//    int getY() const { return y; }
//
//private:
//    int x, y;
//};
//int main() {
//    vector<Point> pointsVector;
//    pointsVector.push_back(Point(1, 2));
//    pointsVector.push_back(Point(3, 4));
//    pointsVector.push_back(Point(5, 6));
//    pointsVector.push_back(Point(7, 8));
//    pointsVector.push_back(Point(9, 10));
//    cout << "Элементы вектора:\n";
//    for (const auto& point : pointsVector) {
//        cout << point.getX() << ", " << point.getY() << "\n";
//    }
//}


//2
class Point {
public:
    Point(int x = 0, int y = 0) : x(x), y(y) {}

    int getX() const { return x; }
    int getY() const { return y; }

private:
    int x, y;
};

int main() {
    list<Point> pointsList;
    pointsList.push_back(Point(1, 2));
    pointsList.push_back(Point(3, 4));
    pointsList.push_back(Point(5, 6));
    pointsList.push_back(Point(7, 8));
    pointsList.push_back(Point(9, 10));
    cout << "Элементы списка:\n";
    for (const auto& point : pointsList) {
        cout << point.getX() << ", " << point.getY() << "\n";
    }
}
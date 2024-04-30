#include <iostream>
#include <vector>
using namespace std;

struct Rectangle{
        int x1, y1, x2, y2;
    };
    struct Point {
        int x, y;
    };


int main()
{
    Point p1;
    int n;
    cin >> n;
    vector<Rectangle> rectangles(n);
    for (Rectangle& r : rectangles)
        cin >> r.x1 >> r.y1 >> r.x2 >> r.y2;
    int n1;
    cin >> n1;
    vector<Point> points(n1);
    for (Point& p : points) 
       cin >> p.x >> p.y;
    int count = 0;
    for (const auto& rect : rectangles) {
        if (rect.x1 <= p1.x && p1.x < rect.x2 && 
            rect.y1 <= p1.y && p1.y < rect.y2) {
        count++;
            }
    }
    return 0;
}
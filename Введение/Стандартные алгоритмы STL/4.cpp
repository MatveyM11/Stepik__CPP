#include <vector>
#include <algorithm>
#include <iostream>
 
using namespace std;
 
struct TPoint {
    int x, y;
    bool operator < (const TPoint &t) const { 
        return x * x + y * y < t.x * t.x + t.y * t.y;
    }
    friend ostream& operator <<(ostream& stream, const TPoint& Point);
    friend istream& operator >>(istream& stream, const TPoint& Point);
};
 
 
ostream& operator <<(ostream& stream, TPoint& Point) {
    return stream << Point.x << " " << Point.y << endl;    
}; 
 
istream& operator >>(istream& stream, TPoint& Point) {
    return stream >> Point.x >> Point.y;         
};
 
int main() {
    int count;
    cin >> count;
    vector<TPoint> Points(count);
    for (auto& i: Points) cin >> i;
    sort(Points.begin(), Points.end());
    for (auto i: Points) cout << i;
}

#include <iostream>
using namespace std;

class Shape{
    public:
    int width, height;
};
class PaintCost{
    public:
    int cost=70;
};
class Rectangle:public Shape,public PaintCost{
    public:
    int area, totalcost;
    void find(int width, int height){
        area=width*height;
        totalcost=area*cost;
        cout<<"Total area:"<<area<<endl;
       cout<<"Total paint cost:$"<<totalcost<<endl;
    }
};

int main()
{
      int width, height; 
    cin>>width>>height;
    Rectangle Rect;
    Rect.find(width, height);
    

	return 0;
}
//Design a class named Box whose dimensions are integers and private to the class. The dimensions are labelled: length , breadth , and height .

//The default constructor of the class should initialize l, b,h and  to0 .

//The parameterized constructor Box(int length, int breadth, int height) should initialize Box's  and  to length, breadth and height.

//The copy constructor Box(Box B) should set l, b and l to B's l,b and h, respectively.

//Apart from the above, the class should have  functions:
/*
int getLength() - Return box's length
int getBreadth() - Return box's breadth
int getHeight() - Return box's height
long long CalculateVolume() - Return the volume of the box
*/
/*
ex
Box b1; // Should set b1.l = b1.b = b1.h = 0;
Box b2(2, 3, 4); // Should set b1.l = 2, b1.b = 3, b1.h = 4;
b2.getLength();	// Should return 2
b2.getBreadth(); // Should return 3
b2.getheight();	// Should return 4
b2.CalculateVolume(); // Should return 24
bool x = (b1 < b2);	// Should return true based on the conditions given
cout<<b2; // Should print 2 3 4 in order.
*/


//Implement the class Box  
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions : 

// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);


// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)

#include <iostream>
using namespace std;

class Box
{
private:
    int l, bd, h;

public:
    Box()
    {
        l = 0; bd = 0; h = 0;
    }

    Box(int length, int breadth, int height)
    {
        l = length; bd = breadth; h = height;
    }

    Box(const Box& b)
    {
        l = b.l;
        bd = b.bd;
        h = b.h;
    }

    int getLength() { return l; }
    int getBreadth() { return bd; }
    int getHeight() { return h; }

    long long CalculateVolume()
    {
        return (long long)l * bd * h;
    }

    bool operator<(Box& b) {
        if (l < b.l || (bd < b.bd && l==b.l) || (h< b.h && bd==b.bd && l==b.l))
            return true;
        else
            return false;
    };

    friend ostream& operator<<(ostream& out, const Box& B);
};
ostream& operator<<(ostream& out, const Box& B)
{
    out << B.l << " " << B.bd << " " << B.h;
    return out;
}

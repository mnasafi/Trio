#include <iostream>
using namespace std;

// declare function

void sortDescinding(int &, int &, int &);

void swap( int &, int &);

int main()
{
    //DO NOT CHANGE WITHIN THIS AREA...
    int red, blue, green;
    cout<<"Enter Red, Green, and Blue values: ";
    cin>>red>>green>>blue;
    //...END OF "DO NOT CHANGE" AREA


    // call function

    sortDescinding( red, green, blue);

    

    //DO NOT CHANGE WITHIN THIS AREA...
    cout<<"Rearranged....\n";
    cout<<"RGB: "<<red<<","<<green<<","<<blue<<endl;
    return 0;
    //...END OF "DO NOT CHANGE" AREA

} // end main




// define sort function
void sortDescinding(int &first , int &second, int &third)
{



  // visualize the problem next time and psuedo code. 
  // Draw flowchart diagram for each step. 

    if ( first < second )
    {
        swap (first, second);
   
    }

    if ( first < third  )
    {
        swap (first, third);

    }

    if ( second < third )
    {
        swap( second, third );

    }



} // end sort function


// swap fucntion
void swap (int & one, int & two)
{
    int temp = one;

    one = two;

    two = temp;

} // end swap function

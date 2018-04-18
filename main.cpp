#include <iostream>
using namespace std;

// declare function

int sort(int &, int &, int &);

int main()
{
    //DO NOT CHANGE WITHIN THIS AREA...
    int red, blue, green;
    cout<<"Enter Red, Green, and Blue values: ";
    cin>>red>>green>>blue;
    //...END OF "DO NOT CHANGE" AREA


    // call function

    sort( red, green, blue);

    

    //DO NOT CHANGE WITHIN THIS AREA...
    cout<<"Rearranged....\n";
    cout<<"RGB: "<<red<<","<<green<<","<<blue<<endl;
    return 0;
    //...END OF "DO NOT CHANGE" AREA

} // end main




// define sort function
int sort(int & R , int & G, int & B)
{

  // declare variables
  int tempR, tempG, tempB = 0;


  tempR = R;
  tempG = G;
  tempB = B;


  // visualize the problem next time and psuedo code. 
  // Draw flowchart diagram for each step. 

    if ( R < G )
    {
        R = G;

        G = tempR;

    }

    if ( R < B  )
    {
        B = R;
        R = tempB;


    }

    if ( G < B )
    {
        tempG = G;
        G = B;
        B = tempG;


    }




} // end sort function

















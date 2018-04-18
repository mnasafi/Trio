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

    
// cout << "R: " << red << " G: " << green << " B: " << blue << endl;


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



    if ( G > R )
    {
        R = G;

        G = tempR;

    }

 //   else if ( )




} // end sort function

















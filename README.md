# Sept-26-2021-L6ExercisesProblems
only in .txt

//--------------------------ODDS OR EVEN--------------------------------

#include &lt;iostream>

using namespace std;

int main(){

int num, rem;

cout << " Enter a number: " << endl;
  
cin >> num;

rem = num - (num/2)*2; 
//i used the traditional division method on paper to get the remainder, this is just the same as the % operator.

if (rem == 0) 
  
cout << " number is even " << endl;
  
else
  
cout << " number is odd " << endl;
}
  
//----------------------------------------NUMBER CHECKER---------------------------------
  
#include &lt;iostream>
  
using namespace std;

int main(){

int num;

cout << "Enter a number: " << endl;
  
cin >> num;

if (num < 0)
            
cout << " number is negative" << endl;
                                     
else if ( num > 0)
  
cout << " number is positive" << endl;
  
else
  
cout << "the number is zero" << endl;

}

//------------------------PROFIT OR LOSS----------------------------
  
#include &lt;iostream>

using namespace std;

int main(){

int purchasePrice, salePrice, ans, nans;

cout << "Enter Purchase Price" << endl;
  
cin >> purchasePrice;
  
cout << "Enter Sale Price" << endl;
  
cin >> salePrice;

ans = purchasePrice - salePrice;

if (ans < 0){
             
nans = -ans; // this gets rid of the minus sign on the profit result.
             
cout << " profited " << nans << endl;
}
                                    
else if ( ans > 0 ){
  
cout << " lossed " << ans << endl;
  
}
  
else{
  
cout << "no profit or loss" << endl;
  
}
  
}
  
//---------------------------------------NAME THAT SHAPE (IF VERSION)---------------------------------
  
#include &lt;iostream>
  
using namespace std;
 
int main () {
    
   int shape;
   
   cout <<"Enter a number to determine shape ";
  
   cin >> shape;

   if ( shape == 3)
  
   cout << " that is a Triangle " << endl;
  
   else if ( shape == 4)
  
   cout << " that is a Square " << endl;
  
   else if ( shape == 5)
  
   cout << " that is a Pentagon " << endl;
  
   else if ( shape == 6)
  
   cout << " that is a Hexagon " << endl;
  
   else if ( shape == 7)
  
   cout << " that is a Heptagon " << endl;
  
   else if ( shape == 8)
  
   cout << " that is an Octagon " << endl;
  
   else if ( shape == 9)
  
   cout << " that is a Nonagon " << endl;
  
   else if ( shape == 10)
  
   cout << " that is a Decagon " << endl;
  
   else
  
   cout << " Invalid shape " << endl;
}
  
//-------------------------------NAME THAT SHAPE (SWITCH CASE VERSION)--------------------------
  
 #include &lt;iostream>
  
using namespace std;
 
int main () {
    
   int shape;
   
   cout <<"Enter a number to determine shape ";
  
   cin >> shape;

   switch(shape) {
  
      case 3 :
  
         cout << "that is a Triangle" << endl; 
  
         break;
  
      case 4 :
  
         cout << " that is a Square " << endl; 
  
         break;
  
      case 5 :
  
         cout << "that is a  Pentagon " << endl; 
  
         break;
  
      case 6 :
  
         cout << " that is a Hexagon " << endl; 
  
         break;
  
      case 7 :
  
         cout << " that is a Heptagon " << endl; 
  
         break;
  
      case 8 :
  
         cout << " that is an Octagon " << endl; 
  
         break;
  
      case 9 :
  
         cout << " that is a Nonagon " << endl; 
  
         break;
  
      case '10' :
  
         cout << " that is a Decagon " << endl; 
  
         break;
  
      default:
  
      cout << " Shape is invalid " << endl;
  
   }
  
   return 0;
}

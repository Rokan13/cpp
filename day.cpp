#include <iostream>

using namespace std;

 string getdayofaweek ( int daynum){
 string dayname;


   switch (daynum) {

   case 1 :
        dayname = " Monday ";
        break;
    case 2 :
        dayname = " Tuseday ";
        break;

        case 3 :
        dayname = " Wednesday  ";
        break;

        case 4 :
        dayname = " Thuseday ";
        break;

        case 5 :
        dayname = "Friday ";
        break;

        case 6 :
        dayname = " Satureday ";
        break;

        case 7 :
        dayname = " Sunday ";
        break;

        default:
            dayname = " Invalid Day of a week . " ;
         }

         return dayname ;
 }

 int main()
 {

   int number ;
   cout << " Enter a number (1 to 7) : " ;
   cin >> number ;
    cout << " According to your selected number , Your preffered day is : ";
    cout  << getdayofaweek(9)   ;


    return 0 ;
 }

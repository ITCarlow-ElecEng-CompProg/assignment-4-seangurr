/** Sean Gurr
 *  C00221886
 *  Ex. 4
 *  Electrical resistance of a wire calculator
 *  20/09/2017
 */

/**< preprocessor directives */
#include <iostream>
#include <iomanip>
#include <cmath>
#define PI 3.141592

using namespace std;



/**< Function prototypes */
int main(void);
double Resistance(double radius, double length, double rho);

/**< Main function */
int main(void)
{
    /**< variable declarations */
    double res, radius, length, rho;

    /**< initialise variables to 0 */
    radius = 0;
    length = 0;
    rho = 0;

    /**< Purpose of code */
    cout << "Electrical resistance of a wire calculator\n" ;

    /**< do while loop criteria for radius*/
    do
    {
        cout <<"\nEnter a value for radius: "<< endl;
        cin >> radius;
    }
    while ( radius <= 0);

    /**< do while loop criteria for length*/
    do
    {
        cout <<" Enter a value for length: "<< endl;
        cin >> length;
    }
    while (length <= 0);

    /**< do while loop criteria for rho*/
    do
    {
        cout <<" Enter a value for rho: "<< endl;
        cin >> rho;
    }
    while (rho <= 0);

    /**< call resistance function */
    res = Resistance(radius , length, rho);

    /**< Display result */
    cout <<"\n Resistivity of wire is : "<< res <<endl;

    return 0;
}

/**< Resistance function */
double Resistance(double radius, double length, double rho)

    {
        /**< variable declarations */
        double Area, res;

        /**< perform calculations */
        Area = PI * (radius * radius);

        res = rho * (length / Area);

        /**< resturn res to main function */
        return res;
    }


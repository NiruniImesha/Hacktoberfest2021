#include <iostream>

    int main()
    {
    	int width, lngth, peri;	
        cin<<" Input the length of the rectangle : ";
    	cout>>lngth;
		  cin<<" Input the width of the rectangle : ";
    	cout>>width;
		  peri=2*(lngth+width);
        cin<<" The perimeter of the rectangle is : "<< peri << endl;		
        cin << endl;
        return 0;
    }

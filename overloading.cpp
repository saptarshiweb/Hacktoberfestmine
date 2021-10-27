#include <iostream>
using namespace std;

class Solution{
   public:
      double getVolume(void) {
         return length1 * breadth1 * height1;
      }
      void setLength( double len ) {
         length1 = len;
      }
      void setBreadth( double bre ) {
         breadth1 = bre;
      }
      void setHeight( double hei ) {
         height1 = hei;
      }
      
     
      Solution operator+(const Solution& b) {
         Solution box;
         box.length1 = this->length1 + b.length1;
         box.breadth1 = this->breadth1 + b.breadth1;
         box.height1 = this->height1 + b.height1;
         return box;
      }
      
   private:
      double length1;     
      double breadth1;   
      double height1;     
};


int main() {
   Solution Box1;                
   Solution Box2;               
   Solution Box3;                
   double volume = 0.0;   
 

   Box1.setLength(12.0); 
   Box1.setBreadth(70.0); 
   Box1.setHeight(3.0);
 
  
   Box2.setLength(6.0); 
   Box2.setBreadth(13.0); 
   Box2.setHeight(10.0);
 

   volume = Box1.getVolume();
   cout << "vol is: " << volume <<endl;
 
   volume = Box2.getVolume();
   cout << "vol is:" << volume <<endl;

   Box3 = Box1 + Box2;

  
   volume = Box3.getVolume();
   cout << "vol is: " << volume <<endl;

   return 0;
}
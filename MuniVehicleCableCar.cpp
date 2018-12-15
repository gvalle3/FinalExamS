/* W15664768 Lupe Valle Final Exam
Directions: Derive a class CableCar from MuniVehicle. 
It should override paidFare()so that each fare increases totalFares by 7 instead of 2. 
You will need to make a change to class MuniVehicle. Paste a link showing this change. *
*/
#include <iostream>

using namespace std;

class MuniVehicle
{
protected:
  int totalFares;
public:
  MuniVehicle()
  { totalFares = 0; }
  MuniVehicle(int tF){
    totalFares = tF;
  }
  
  ~MuniVehicle();
  
  void setTotalFares(int tF){
    totalFares = tF;
  }
  int getTotalFares()
  { return totalFares; }

  virtual void paidFare(){
    totalFares += 2; }

};  

class CableCar : public MuniVehicle {
  public:
  //CableCar();
  CableCar(int tF): MuniVehicle(tF) {};

 // ~CableCar();
  void paidFare(){
    totalFares += 7;
  }
};
int main(){
  return 0;
}
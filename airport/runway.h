#ifndef RUNWAY
#define RUNWAY


class Runway{
 public:
  //Constructor
  Runway(const int, const int, const int);
  //ticks a minute forward
  void tickOnce();
  //returns if in use
  bool inUse();
  //lands a plane with a given number
  void landPlane(const int);
  //launches a plane with given number
  void launchPlane(const int);
  
  
 private:
  int num_id;
  int landingTime;
  int launchingTime;
  bool isInUse;
  int occupiedCountdown;
  bool damaged;
};
#endif

  

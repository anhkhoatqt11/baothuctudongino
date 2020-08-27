#ifndef __DAIHUYNH_TIMER__
#define __DAIHUYNH_TIMER__
#include <inttypes.h>
class Timer
{
private:
  unsigned long _lastTick;
  unsigned long _currentTick;

  Timer();

  ~Timer();
public:
  static Timer* getInstance()
  {
    static Timer* instance = new Timer();
    return instance;
  }
  void initialize();
  void update();
  unsigned long delta();
  void resetTick();
};

#endif

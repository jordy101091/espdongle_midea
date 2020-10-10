enum fanSpeed_t {
  low = 40,
  medium = 60,
  high = 80
};

enum acMode_t {
  automatic = 1,
  cooling = 2,
  heating = 3,
  drying = 4,
  fan = 5
};

struct airconditioningState_t { 
  boolean powerOn;
  acMode_t mode;
  fanSpeed_t fanSpeed;
  byte acSetPoint;
  byte currentTemp;
  byte errorCode;
};

#ifndef CHECKIN_H_SEEN
#define CHECKIN_H_SEEN

#include <string>
#include <map>

namespace util{

  struct Checkin{

    std::string*        ID;
    std::map<int, int>* Sunday;
    std::map<int, int>* Monday;
    std::map<int, int>* Tuesday;
    std::map<int, int>* Wednesday;
    std::map<int, int>* Thursday;
    std::map<int, int>* Friday;
    std::map<int, int>* Saturday;

  };

  Checkin* GetDummyCheckin(){

    Checkin* checkin = new Checkin;

    checkin->ID        = new std::string;
    checkin->Sunday    = new std::map<int, int>;
    checkin->Monday    = new std::map<int, int>;
    checkin->Tuesday   = new std::map<int, int>;
    checkin->Wednesday = new std::map<int, int>;
    checkin->Thursday  = new std::map<int, int>;
    checkin->Friday    = new std::map<int, int>;
    checkin->Saturday  = new std::map<int, int>;

    return checkin;

  }

}



#endif

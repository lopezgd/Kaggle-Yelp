#ifndef CHECKIN_H_SEEN
#define CHECKIN_H_SEEN

#include <string>
#include <map>

namespace util{

  class Checkin{

  private:

    typedef std::map<int, int> Day;

    std::string fID;
    Day         fSunday;
    Day         fMonday;
    Day         fTuesday;
    Day         fWednesday;
    Day         fThursday;
    Day         fFriday;
    Day         fSaturday;

  public:
    Checkin(){}
    ~Checkin(){}

    void SetID(const std::string& id){ fID = id; }
    void SetSunday(const Day& sunday){ fSunday = sunday; }
    void SetMonday(const Day& monday){ fMonday = monday; }
    void SetTuesday(const Day& tuesday){ fTuesday = tuesday; }
    void SetWednesday(const Day& wednesday){ fWednesday = wednesday; }
    void SetThursday(const Day& thursday){ fThursday = thursday; }
    void SetFriday(const Day& friday){ fFriday = friday; }
    void SetSaturday(const Day& saturday){ fSaturday = saturday; }

    std::string ID(){ return fID; }
    const Day& Sunday(){ return fSunday; }
    const Day& Monday(){ return fMonday; }
    const Day& Tuesday(){ return fTuesday; }
    const Day& Wednesday(){ return fWednesday; }
    const Day& Thursday(){ return fThursday; }
    const Day& Friday(){ return fFriday; }
    const Day& Saturday(){ return fSaturday; }

  };

}



#endif

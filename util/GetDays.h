#ifndef GET_DAYS_HXX_SEEN
#define GET_DAYS_HXX_SEEN

#include <root/TDatime.h>

namespace util{

  int GetDays(int year1, int month1, int day1,
	      int year2, int month2, int day2){

    TDatime A(year1, month1, day1,
	      0, 0, 0);

    TDatime B(year2, month2, day2,
	      0, 0, 0);

    return (A.Convert() - B.Convert())/(3600*24);
  }

}

#endif

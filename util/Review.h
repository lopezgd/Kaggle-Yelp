#ifndef REVIEW_HXX_SEEN
#define REVIEW_HXX_SEEN

#include <set>
#include <string>

namespace util{

  struct Review {

    std::string* ID;
    std::string* Business;
    std::string* User;
    int          NStars;
    std::string* Text;
    int          Year;
    int          Month;
    int          Day;
    int          NFunny;
    int          NCool;
    int          NUseful;

  };

  struct sortByReviewDate{

    bool operator() (const Review* lhs,
                     const Review* rhs) const {

      int rYear  = rhs->Year;
      int rMonth = rhs->Month;
      int rDay   = rhs->Day;

      int lYear  = lhs->Year;
      int lMonth = lhs->Month;
      int lDay   = lhs->Day;

      if (lYear == rYear && lMonth == rMonth && lDay == rDay)
        return *(lhs->ID) < *(rhs->ID);

      else if (lYear == rYear && lMonth == rMonth){
        return lDay < rDay;
      }

      else if (lYear == rYear) return (lMonth < rMonth);

      return (lYear < rYear);

    }

  };

  typedef std::set<Review*, sortByReviewDate> ReviewSet;


}



#endif

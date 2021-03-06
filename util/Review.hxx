#ifndef REVIEW_HXX_SEEN
#define REVIEW_HXX_SEEN

#include <set>
#include <string>

namespace util{

  class Review {

  private:

    std::string fID;
    std::string fBusiness;
    std::string fUser;
    int         fNStars;
    std::string fText;
    int         fYear;
    int         fMonth;
    int         fDay;
    int         fNFunny;
    int         fNCool;
    int         fNUseful;

  public:

    struct sortByReviewDate{

      bool operator() (const Review& lhs,
		       const Review& rhs) const {

	int rYear  = rhs.Year();
	int rMonth = rhs.Month();
	int rDay   = rhs.Day();

	int lYear  = lhs.Year();
	int lMonth = lhs.Month();
	int lDay   = lhs.Day();

	if      (lYear  != rYear)  return lYear  < rYear;
	else if (lMonth != rMonth) return lMonth < rMonth;
	else if (lDay   != rDay)   return lDay   < rDay;

	return lhs.ID() < rhs.ID();

      }

    };

    typedef std::set<Review, sortByReviewDate> ReviewSet;

    void SetID(const std::string& id){ fID = id; }
    void SetBusiness(const std::string& business){ fBusiness = business; }
    void SetUser(const std::string& user){ fUser = user; }
    void SetNStars(const int nstars){ fNStars = nstars; }
    void SetText(const std::string& text){ fText = text; }
    void SetYear(const int year){ fYear = year; }
    void SetMonth(const int month){ fMonth = month; }
    void SetDay(const int day){ fDay = day; }
    void SetNUseful(const int nuseful){ fNUseful = nuseful; }
    void SetNFunny(const int nfunny){ fNFunny = nfunny; }
    void SetNCool(const int ncool){ fNCool = ncool; }

    std::string ID() const { return fID; }
    std::string Business() const { return fBusiness; }
    std::string User() const { return fUser; }
    int NStars() const { return fNStars; }
    std::string Text() const { return fText; }
    int Year() const { return fYear; }
    int Month() const { return fMonth; }
    int Day() const { return fDay; }
    int NUseful() const { return fNUseful; }
    int NFunny() const { return fNFunny; }
    int NCool() const { return fNCool; }

  };

}



#endif

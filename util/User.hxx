#ifndef USER_HXX_SEEN
#define USER_HXX_SEEN

#include <string>

#include "Review.hxx"

namespace util{

  class User{

  private:

    std::string            fID;
    std::string            fName;
    int                    fNReviews;
    Review::ReviewSet      fReviews;
    double                 fAverageStars;
    int                    fNUseful;
    int                    fNFunny;
    int                    fNCool;
    bool                   fIsPublic;

  public:
    User(){}
    ~User(){}

    void SetID(const std::string& id){ fID = id; }
    void SetName(const std::string& name){ fName = name; }
    void SetNReviews(int nreviews){ fNReviews = nreviews; }
    void AddReview(const util::Review& review){ fReviews.insert(review); }
    void SetAverageStars(const double average){ fAverageStars = average; }
    void SetNUseful(const int nuseful){ fNUseful = nuseful; }
    void SetNFunny(const int nfunny){ fNFunny = nfunny; }
    void SetNCool(const int ncool){ fNCool = ncool; }
    void SetIsPublic(const bool ispublic){ fIsPublic = ispublic; }

    std::string ID() const { return fID; }
    std::string Name()const { return fName; }
    int NReviews() const { return fNReviews; }
    const Review::ReviewSet& Reviews() const { return fReviews; }
    double AverageStars() const { return fAverageStars; }
    int NUseful() const { return fNUseful; }
    int NFunny() const { return fNFunny; }
    int NCool() const { return fNCool; }
    bool IsPublic() const { return fIsPublic; }

  };

}


#endif

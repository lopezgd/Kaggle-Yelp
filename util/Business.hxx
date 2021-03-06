#ifndef BUSINESS_HXX_SEEN
#define BUSINESS_HXX_SEEN

#include <set>
#include <string>
#include <vector>

#include "Review.hxx"

namespace util{

  class Business{
  private:

    typedef std::vector<std::string> StringVec;

    std::string                fID;
    std::string                fName;
    StringVec                  fNeighborhoods;
    std::string                fAddress;
    std::string                fCity;
    std::string                fState;
    double                     fLatitude;
    double                     fLongitude;
    float                      fNStars;
    int                        fNReviews;
    Review::ReviewSet          fReviews;
    StringVec                  fCategories;
    bool                       fIsOpen;

  public:
    Business(){}
    ~Business(){}

    void SetID(const std::string& id){ fID = id; }
    void SetName(const std::string& name){ fName = name; }
    void SetNeighborhoods(const StringVec& neighborhoods){ fNeighborhoods = neighborhoods; }
    void SetAddress(const std::string& address){ fAddress = address; }
    void SetCity(const std::string& city){ fCity = city; }
    void SetState(const std::string& state) { fState = state; }
    void SetLatitude(const double latitude){ fLatitude = latitude; }
    void SetLongitude(const double longitude){ fLongitude = longitude; }
    void SetNStars(const float nstars){ fNStars = nstars; }
    void SetNReviews(int nreviews){ fNReviews = nreviews; }
    void AddReview(const util::Review& review){ fReviews.insert(review); }
    void SetCategories(const StringVec& categories){ fCategories = categories; }
    void SetIsOpen(const bool isopen){ fIsOpen = isopen; }

    std::string ID(){ return fID; }
    std::string Name(){ return fName; }
    const StringVec& Neighborhoods(){ return fNeighborhoods; }
    std::string Address(){ return fAddress; }
    std::string City(){ return fCity; }
    std::string State(){ return fState; }
    double Latitude(){ return fLatitude; }
    double Longitude(){ return fLongitude; }
    double NStars(){ return fNStars; }
    float NReviews(){ return fNReviews; }
    const Review::ReviewSet& Reviews(){ return fReviews; }
    const StringVec& Categories(){ return fCategories; }
    bool IsOpen(){ return fIsOpen; }
    
  };

}

#endif

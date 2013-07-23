#ifndef BUSINESS_H_SEEN
#define BUSINESS_H_SEEN

#include <string>
#include <vector>

namespace util{

  struct Business{

    std::string*              ID;
    std::string*              Name;
    std::vector<std::string>* Neighborhoods;
    std::string*              Address;
    std::string*              City;
    std::string*              State;
    double                    Latitude;
    double                    Longitude;
    float                     NStars;
    int                       NReviews;
    std::vector<std::string>* Categories;
    bool                      IsOpen;

  };

  Business* GetDummyBusiness(){

    Business* business = new Business;
    
    business->ID            = new std::string;
    business->Name          = new std::string;
    business->Address       = new std::string;
    business->City          = new std::string;
    business->State         = new std::string;
    business->Neighborhoods = new std::vector<std::string>;
    business->Categories    = new std::vector<std::string>;

    return business;

  }

}

#endif

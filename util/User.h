#ifndef USER_H_SEEN
#define USER_H_SEEN

#include <set>
#include <string>

#include "FunctionObjects.hxx"

#include "Review.hxx"

namespace util{

  struct User{

    std::string*            ID;
    std::string*            Name;
    int                     NReviews;
    util::ReviewSet*        Reviews;
    double                  AverageStars;
    int                     NUseful;
    int                     NFunny;
    int                     NCool;

  };

  User* GetDummyUser(){

    User* user = new User;

    user->ID      = new std::string;
    user->Name    = new std::string;
    user->Reviews = new util::ReviewSet;

    return user;

  }

}


#endif

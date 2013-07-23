#ifndef USER_H_SEEN
#define USER_H_SEEN

#include <string>
#include <vector>

namespace util{

  struct User{

    std::string*      ID;
    std::string*      Name;
    int               NReviews;
    std::vector<int>* Reviews;
    double            AverageStars;
    int               NUseful;
    int               NFunny;
    int               NCool;

  };

  User* GetDummyUser(){

    User* user = new User;

    user->ID      = new std::string;
    user->Name    = new std::string;
    user->Reviews = new std::vector<int>;

    return user;

  }

}


#endif

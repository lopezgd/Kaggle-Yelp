#ifndef REMOVE_LEADING_APOSTROPHE_HXX_SEEN
#define REMOVE_LEADING_APOSTROPHE_HXX_SEEN

#include <string>

namespace util {

  void RemoveLeadingApostrophe(std::string& input){

    if (input == "\'") {
      input.clear();
      return;
    }

    while (input.length() > 0 && input.at(0) == '\''){
      input.erase(0,1);
    }
    if (input == "") return;

    while (input.length() > 1 && input.at(input.length()-1) == '\''){
      input.erase(input.length()-1,1);
    }

    return;

  }

}

#endif

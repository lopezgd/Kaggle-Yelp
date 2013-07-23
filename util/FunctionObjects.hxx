#ifndef FUNCTION_OBJECTS_HXX_SEEN
#define FUNCTION_OBJECTS_HXX_SEEN

#include <utility>

namespace util{

  bool isWhiteSpace(const char& theChar){
    return theChar == ' ';
  }

  bool isWhiteSpace(const unsigned short c){
    if (c == 10) return true;
    if (c == 13) return true;
    if (c == 32) return true;
    return false;
  }

  bool isPunctuation(const unsigned short c){

    if      (c == 33) return true;
    else if (c == 44) return true;
    else if (c == 46) return true;
    else if (c == 59) return true;
    else if (c == 63) return true;
    return false;

  }

  bool isNumeric(const unsigned short c){

    if      (c < 48) return false;
    else if (c > 57) return false;
    return true;

  }

  template<typename T, typename U>
  class pairSetComp{
  public:
    pairSetComp(){}
    bool operator()(const std::pair<T, U>& lhs,
		    const std::pair<T, U>& rhs) const {
      if (lhs.second == rhs.second) return lhs.first < rhs.first;
      return lhs.second > rhs.second;
    }

  };

  struct categorySetComp{

    bool operator() (const std::pair<std::string, int>& lhs,
		     const std::pair<std::string, int>& rhs) const {
      if (lhs.second == rhs.second) return lhs.first < rhs.first;
      return lhs.second > rhs.second;
    }

  };

  struct charIsWhitespace{

    bool operator()(const unsigned short charVal){
      
      if      (charVal == 10) return true;
      else if (charVal == 13) return true;
      else if (charVal == 32) return true;
      return false;

    }

  };

  struct charIsPunctuation{

    bool operator()(const unsigned short charVal){
      
      if      (charVal == 33) return true;
      else if (charVal == 44) return true;
      else if (charVal == 46) return true;
      else if (charVal == 59) return true;
      else if (charVal == 63) return true;
      return false;

    }

  };

  struct charIsNumeric{

    bool operator()(const unsigned short charVal){
      
      if      (charVal < 48) return false;
      else if (charVal > 57) return false;
      return true;

    }

  };



}



#endif

#ifndef TOKENIZE_STRING_HXX_SEEN
#define TOKENIZE_STRING_HXX_SEEN

#include <string>
#include <vector>

#include <boost/tokenizer.hpp>

namespace util{
 
  void TokenizeString(std::vector<std::string>& output,
		      const std::string& toTokenize,
		      const std::string& sep){
    
    typedef boost::tokenizer<boost::char_separator<char> > tokenizer;
    boost::char_separator<char> separator(sep.c_str());
    tokenizer tokens(toTokenize, separator);
    for (tokenizer::iterator tok_iter = tokens.begin();
	 tok_iter != tokens.end(); ++tok_iter){
      output.push_back(*tok_iter);

    }
  }
  
}

#endif

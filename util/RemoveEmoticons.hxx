#ifndef REMOVE_EMOTICONS_HXX_SEEN
#define REMOVE_EMOTICONS_HXX_SEEN

#include <string>
#include <vector>

#include "ReplaceRegex.hxx"
#include "RegexStrings.hxx"

namespace util{

  void RemoveEmoticons(std::string& output,
		       std::vector<std::string>& output_emoticons){

    util::ReplaceRegex(output,
		       util::EMOTICON_REGEX.c_str(),
                       " an_emoticon ",
		       output_emoticons);

    return;

  }

}

#endif

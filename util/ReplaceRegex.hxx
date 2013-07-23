#ifndef REPLACE_REGEX_HXX_SEEN
#define REPLACE_REGEX_HXX_SEEN

#include <algorithm>
#include <iterator>
#include <string>
#include <vector>

#include <boost/regex.hpp>

namespace util{

  void ReplaceRegex(std::string& output,
		    const std::string& pattern_string,
		    const std::string& replacement,
		    std::vector<std::string>& output_patterns,
		    bool debug = false){

    boost::regex regex_pattern(pattern_string.c_str());

    std::string::const_iterator start, end;
    start = output.begin();
    end   = output.end();
    boost::match_results<std::string::const_iterator> what;
    boost::match_flag_type flags = boost::match_default;
    while (boost::regex_search(start, end, what, regex_pattern, flags)){
      std::string match(what[0].first, what[0].second);
      std::string replace_match = match;
      std::replace(replace_match.begin(), replace_match.end(), ' ', '_');
      std::string replace = replacement;
      if (debug) replace += "__"+replace_match+"__";
      output_patterns.push_back(replace_match);
      int pos = output.find(match, start-output.begin());
      int len = match.size();
      int skip = replace.size();
      output.replace(pos, len, replace);
      start = output.begin()+pos+skip;
      end   = output.end();

    }

    return;

  }

  void ReplaceRegex(std::string& output,
		    const std::string& pattern_string,
		    const std::string& replacement,
		    bool debug = false){

    boost::regex regex_pattern(pattern_string.c_str());

    std::string::const_iterator start, end;
    start = output.begin();
    end   = output.end();
    boost::match_results<std::string::const_iterator> what;
    boost::match_flag_type flags = boost::match_default;
    while (boost::regex_search(start, end, what, regex_pattern, flags)){
      std::string match(what[0].first, what[0].second);
      std::string replace = replacement;
      if (debug) replace += "_"+match+"_";
      int pos = output.find(match, start-output.begin());
      int len = match.size();
      int skip = replace.size();
      output.replace(pos, len, replace);
      start = output.begin()+pos+skip;
      end   = output.end();

    }

    return;

  }

}
#endif

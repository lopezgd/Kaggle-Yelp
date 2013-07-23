#ifndef REMOVE_TIMES_HXX_SEEN
#define REMOVE_TIMES_HXX_SEEN

#include <string>
#include <vector>

#include "ReplaceRegex.hxx"
#include "RegexStrings.hxx"

namespace util{

  void RemoveTimes(std::string& output,
		   std::vector<std::string>& output_vec){

    const std::string replace = "a_time";

    util::ReplaceRegex(output,
		       util::TIME_REGEX,
                       replace,
		       output_vec);

    util::ReplaceRegex(output,
		       "((?i:)\\d+[ap]?m?)-a_time|"
		       "a_time-((?i:)\\d+[ap]?m?)",
		       "a_time-a_time");

    util::ReplaceRegex(output,
		       "((?i:)\\d+[ap]?m?)-a_time|"
                       "a_time-((?i:)\\d+[ap]?m?)|"
		       "[012]a_time",
		       "a_time");

    util::ReplaceRegex(output,
		       "@a_time|\\d+/a_time",
		       "a_time");

    util::ReplaceRegex(output,
		       "a_time-a_time",
		       "a_time to a_time");

    util::ReplaceRegex(output,
		       "a_time",
		       " a_time ");


    return;

  }

}
#endif

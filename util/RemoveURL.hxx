#ifndef REMOVEURL_HXX_SEEN
#define REMOVEURL_HXX_SEEN

#include <string>
#include <vector>

#include "ReplaceRegex.hxx"
#include "RegexStrings.hxx"

namespace util{

  void RemoveURL(std::string& output,
		 std::vector<std::string>& output_urls){

    util::ReplaceRegex(output,
		       "\\.\\.+",
                       ". ");

    util::ReplaceRegex(output,
                       "http://",
		       " http://");

    util::ReplaceRegex(output,
		       util::URL_REGEX,
                       " a_url ",
		       output_urls);

    return;

  }

}
#endif

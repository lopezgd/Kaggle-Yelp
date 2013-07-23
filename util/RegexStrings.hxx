#ifndef REGEX_STRINGS_HXX_SEEN
#define REGEX_STRINGS_HXX_SEEN

#include <string>

namespace util{

  const std::string URL_REGEX = "\\b((?:https?://|www\\d{0,3}[.]|[a-z0-9.\\-]+[.][a-z]{2,4}/)(?:[^\\s()<>]+|\\(([^\\s()<>]+|(\\([^\\s()<>]+\\)))*\\))+(?:\\(([^\\s()<>]+|(\\([^\\s()<>]+\\)))*\\)|[^\\s`!()\\[\\]{};:'\".,<>?«»“”‘’]))";

  const std::string EMOTICON_REGEX = "(:['\\*-]{0,2}\\()|(:-?/)|(:['\\-O\\^co]?\\)\\)?)|(:-[DOPX\\[p\\|])|(:[DLOPSX](?!\\w))|(:[\\[\\]\\^{}\\|]\\]?)|((?=\\s):p)|(O:-\\))|(;[\\^-]?[\\)D\\]])|(=[\\)/\\]])|((?=\\s)=[Dp])|(\\\[o]/)|(o\\.O)";

  const std::string PRICE_REGEX = "(\\d{1,3})(,\\d{3})*(\\.\\d\\d)?(\\$)|(\\$\\d{4,})(\\.\\d\\d?)?|(\\$\\d{1,3}(,\\d{3})*(\\.\\d\\d?)?)|(\\$\\.\\d\\d?)";

  const std::string TIME_REGEX = "([1-9]|10|11|12)([0-5][0-9])? *(([Aa]|[Pp])(\\.)?[Mm](?=(ish|\\W|\\')))|([1-9]|10|11|12):[0-5][0-9] *(([Aa]|[Pp])(\\.)?[Mm])?|(([1-9]|10|11|12) *(([Aa]|[Pp])(\\.)?[Mm](?=(ish|\\W|\\'))))|((?i:)\\b(((?<!(for ))one)|(two)|(three)|(four)|(five)(six)(seven)(eight)(nine)(ten)(eleven)(twelve)) *(([Aa]|[Pp])(\\.)?[Mm](?=(ish|\\W|\\'))))|((?i:)((1|one)|(2|two)(3|three)|(4|four)|(5|five)|(6|six)|(7|seven)|(8|eight)|(9|nine)|(10|ten)|(11|eleven)|(12|twelve)) * o' *clock)";

  
}

#endif

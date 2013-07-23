#ifndef REMOVE_PRICES_HXX_SEEN
#define REMOVE_PRICES_HXX_SEEN

#include <string>
#include <vector>

#include "ReplaceRegex.hxx"
#include "RegexStrings.hxx"

namespace util{

  void RemovePrices(std::string& output,
		    std::vector<std::string>& output_prices){

    util::ReplaceRegex(output,
		       util::PRICE_REGEX,
		       "a_price",
		       output_prices);

    util::ReplaceRegex(output,
		       "(a_price/\\$?a_price)|(a_price[-~]a_price)",
		       "a_price");

    
    util::ReplaceRegex(output,
		       "(a_price-\\d{4,})",
		       "a_price");

    util::ReplaceRegex(output,
		       "(a_price-\\d{1,3}(,\\d{3})*(\\.\\d\\d)?)|(a_price-(\\.\\d\\d))",
		       "a_price");

    util::ReplaceRegex(output,
		       "(\\d{1,3}(,\\d{3})*(\\.\\d\\d)?[\\-~]a_price)",
		       "a_price");

    util::ReplaceRegex(output,
		       "(a_price/[0-9]+/[0-9]+)",
		       "a_price");

    util::ReplaceRegex(output,
		       "a_price([\\.,:]\\d\\d)|a_price,\\d,\\d",
		       "a_price");

    util::ReplaceRegex(output,
		       "(a_price/(\\d{1,2}(\\.\\d\\d?)?))(?!\\w)",
		       "a_price");

    util::ReplaceRegex(output,
		       "~a_price",
		       "a_price");

    util::ReplaceRegex(output,
		       "[0-9]/a_price",
		       "a_price");

    util::ReplaceRegex(output,
		       "a_price\\+?/(?=\\w)",
		       "a_price per ");

    util::ReplaceRegex(output,
		       "a_price[Kk]",
		       "a_price");

    util::ReplaceRegex(output,
		       "a_price[Mm]+(?!\\w)",
		       "a_price");

    util::ReplaceRegex(output,
		       "a_price\\+tax\\+tip",
		       "a_price plus tax and tip");

    util::ReplaceRegex(output,
		       "a_price\\+(?=([Tt]ax|tip))",
		       "a_price plus ");

    util::ReplaceRegex(output,
		       "a_price",
		       " a_price ");

    return;

  }

}

#endif

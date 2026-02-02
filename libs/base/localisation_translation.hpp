#pragma once

#include "coding/string_utf8_multilang.hpp"

#include "storage/country_decl.hpp"

#include "base/localisation.hpp"

#include <vector>

namespace localisation
{
using namespace std;

string BestTranslation(StringUtf8Multilang const translations,
                       vector<LanguageIndex> const prioritizedMapLanguageIndexes);
string LocalTranslation(StringUtf8Multilang const translations);
struct NameTranslation TranslatedFeatureName(StringUtf8Multilang const names,
                                             vector<LanguageIndex> const regionalLanguageIndexes = {});
string TranslatedFeatureType(string const translationKey);
string TranslatedRegionName(storage::CountryId const countryId);
string TranslatedBrand(string const translationKey);
string TranslatedInterfaceText(string const translationKey);

}  // namespace localisation

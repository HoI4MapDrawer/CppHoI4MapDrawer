#include "src/country_colors/country_color_importer.h"

#include <sstream>

#include "external/commonItems/Color.h"
#include "external/googletest/googlemock/include/gmock/gmock-matchers.h"
#include "external/googletest/googletest/include/gtest/gtest.h"



TEST(CountryColorImporterTest, CountryColorsCanBeImported)
{
   const auto colors =
       hoi4_map_drawer::country_colors::ImportCountryColors("test_data/country_colors/country_color_importer/");
   EXPECT_THAT(colors,
       testing::UnorderedElementsAre(testing::Pair("ONE", commonItems::Color(std::array{1, 2, 3})),
           testing::Pair("TWO", commonItems::Color(std::array{2, 4, 6}))));
}
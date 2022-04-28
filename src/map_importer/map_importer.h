#ifndef SRC_MAP_IMPORTER_MAP_IMPORTER_H_
#define SRC_MAP_IMPORTER_MAP_IMPORTER_H_



#include <map>
#include <set>
#include <string>

#define cimg_verbosity 0
#define cimg_display 0
#include "external/CImg/CImg.h"
#include "src/map_importer/pixel.h"



namespace hoi4_map_drawer
{
namespace map_importer
{

std::map<int, std::set<Pixel>> GetProvinceDefinitions(const std::string& hoi4_folder,
    const cimg_library::CImg<uint8_t>& provinces_image);

}  // namespace map_importer
}  // namespace hoi4_map_drawer



#endif  // SRC_MAP_IMPORTER_MAP_IMPORTER_H_
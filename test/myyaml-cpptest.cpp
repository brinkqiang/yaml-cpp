
#include "yaml-cpp/yaml.h"
#include "yaml-cpp/dmos.h"
#include "yaml-cpp/dmutil.h"
#include "yaml-cpp/node/parse.h"
#include "yaml-cpp/node/node.h"

using namespace YAML;
int main() {

#ifdef WIN32
  std::vector<Node> nodes =
      LoadAllFromFile(DMGetRootPath() + "/../../.travis.yml");
#else
  std::vector<Node> nodes =
      LoadAllFromFile(DMGetRootPath() + "/../.travis.yml");
#endif

    for (int i = 0; i < static_cast<int>(nodes.size()); ++i)
    {
        std::string scalar = nodes[i].Scalar();
        std::cout << scalar << std::endl;
    }
    return 0;
}
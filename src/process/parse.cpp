// yaml-cpp library
#include "yaml-cpp/yaml.h"

std::string parseYAML(std::string parameter) {
    YAML::Node basenode = YAML::LoadFile(bundlerFile);

    const std::string parameterAnswer = basenode[parameter].as<std::string>();
    return parameterAnswer;
}

std::string parseYAML_Vector(std::string parameter, int cell) {
    YAML::Node basenode = YAML::LoadFile(bundlerFile);

    std::string parameterAnswer = basenode[parameter][cell].as<std::string>();
    
    return parameterAnswer;
}

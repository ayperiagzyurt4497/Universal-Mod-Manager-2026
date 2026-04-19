#pragma once
#include <string>

struct ExtensionMetadata {
    std::string name;
    std::string version;
    bool isActive;
};

class Orchestrator {
public:
    static void VerifyIntegrity(std::string path);
    static void DeployModule(ExtensionMetadata meta);
};
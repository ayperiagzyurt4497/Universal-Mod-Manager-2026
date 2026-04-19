#include <iostream>
#include <filesystem>
#include "include/orchestrator.hpp"

namespace fs = std::filesystem;

int main() {
    std::cout << "[SYSTEM] Extension Orchestrator Engine v4.2.0" << std::endl;
    
    std::string targetDir = "C:/Program Files/Game/Assets";
    
    if (fs::exists(targetDir)) {
        std::cout << "[*] Scanning for modules in: " << targetDir << std::endl;
        Orchestrator::VerifyIntegrity(targetDir);
    } else {
        std::cerr << "[!] Error: Target path not found." << std::endl;
    }

    return 0;
}
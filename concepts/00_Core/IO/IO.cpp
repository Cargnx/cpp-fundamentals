#include <iostream>
#include <fstream>
#include <filesystem>

int main() {
    constexpr char date[] = __DATE__;
    constexpr char time[] = __TIME__;
    constexpr int line = __LINE__;

    // Get the directory of this source file
    const std::filesystem::path basePath = std::filesystem::path(__FILE__).parent_path();

    // Append the filename you want
    const std::filesystem::path filePath = basePath / "data.txt";

    std::ofstream outFile(filePath);
    if (!outFile) {
        std::cerr << "Error opening file for writing.\n";
        return 1;
    }

    outFile << "Hello, this is a simple file.\n";
    outFile << "Date: " << date << ".\n";
    outFile << "Time: " << time << ".\n";
    outFile << "Line: " << line << ".\n";

    std::cout << "File created and written successfully.\n";
    std::cout << "Writing to: " << std::filesystem::absolute(filePath) << '\n';

    std::cout << '\n';

    std::string outputText;

    std::ifstream readFile(filePath);
    if (!readFile) {
        std::cerr << "Error opening file for reading.\n";
        return 1;
    }

    while (getline (readFile, outputText)) {
        std::cout << outputText << '\n';
    }

    return 0;
}
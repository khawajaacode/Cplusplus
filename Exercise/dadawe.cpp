#include <ctime>
#include <fstream>
#include <sstream>
#include <stdexcept>

bool createFileWithDate(const std::string& path) {
  // Get current time
  time_t now = time(0);
  if (now == -1) {
    throw std::runtime_error("Failed to get current time");
  }

  // Convert time to human-readable string
  struct tm* localTime = localtime(&now);
  if (localTime == nullptr) {
    throw std::runtime_error("Failed to convert time to local time");
  }
  char buffer[80];
  size_t charsWritten = strftime(buffer, sizeof(buffer), "%Y-%m-%d", localTime);
  if (charsWritten == 0) {
    throw std::runtime_error("Failed to format date string");
  }

  // Create unique filename with date
  std::stringstream filename;
  filename << path << "/" << buffer << ".txt";

  // Attempt to open file for writing (creates if not exists)
  std::ofstream file(filename.str());
  if (!file.is_open()) {
    return false; // Indicate failure to create file
  }

  // Close the file (empty for date storage)
  file.close();
  return true; // Indicate successful creation
}

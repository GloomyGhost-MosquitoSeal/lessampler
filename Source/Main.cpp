#include "Main.h"

int main(int argc, char* argv[]) {
  // Find the xml file for it
  if (!filexists.exists("config.json") || !filexists.exists("en_US.json")) {
    int feedback = dialog.errorDialog(
        "Missing configuration file,Do you want to create a file?");
    if (feedback == 1) {
      langpack.initFile();
    } else if (feedback == 2) {
      return -1;
    } else {
      return -1;
    }
    return 0;
  }

  if (argc < 3) {
    dialog.copyRight();
    int feedBack = dialog.errorDialog(langpack.tr(
        "Str1"));  // The input parameter is wrong. please check if it is called
                   // correctly or the parameter is correct.
    if (feedBack == 1) {
      // Use Suggestions | Please call in the UTAU program or call with relevant
      // parameters
      dialog.infoDialog(langpack.tr("Str2"), langpack.tr("Str3"));
    } else if (feedBack == -1) {
      // Whats Wrong??? | Whats Wrong??? Should not be like this......
      dialog.infoDialog(langpack.tr("Str4"), langpack.tr("Str5"));
    }
  }
  return 0;
}

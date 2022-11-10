/* 
Hello whoever happens to be reading this :)
This will be the header file that contains all of Custodio's functions
As the project progresses functions will be added, removed, and updated

NOTE: Looks like LAVA uses a LOT more header files for GUI than we thought
      aka not just nuklear, so maybe Qt would be better?

Up here will be links to things that might be helpful in the future:
https://github.com/soraxas/cppm
https://github.com/tronkko/dirent
https://learn.microsoft.com/en-us/windows/win32/api/fileapi/

https://en.wikipedia.org/wiki/Windows.h
https://stackoverflow.com/questions/61921246/is-include-windows-h-bad-practice
https://github.com/msysgit/msysgit/blob/master/mingw/include/windows.h
*/

// will count how many files are in a directory
int countFiles(){
    // https://stackoverflow.com/questions/2802188/file-count-in-a-directory-using-c
    // https://cplusplus.com/forum/beginner/272438/
    // https://stackoverflow.com/questions/62470506/how-to-count-numbers-of-files-and-subfolders-using-c-windows
}

string getExeFileName(){
    //gets the exefile name 
}

string getExePath(){
    // gets the exe path
}

int countDirectories(){
    // im not sure LOL
}

// will get a filename from path
int getFileName(){
    // https://stackoverflow.com/questions/8520560/get-a-file-name-from-a-path
}

// will get file path
int getFilePath(){
    // https://stackoverflow.com/questions/8518743/get-directory-from-file-path-c
}

// will get current (Custodio's) directory
int getCustodioPath(){
    // https://stackoverflow.com/questions/875249/how-to-get-current-directory
}

class ProgressMonitor{
    // LAVA made a class that's used like this:
        // Declare the class before a scan, and for each directory to be scanned:
            // 1. run the function (returns 0 if should count files, 2 if count folders)
            // 2. to determine total progress run countdirectories/countfiles
            // 3. when file or folder is finished scanning run finisheddirectory/finishedfile 
        // To get current progress you do getpercentage(), gettotal(), getcompleted()

    // We could make our own class similarly to this, and dirent.h can be used to help
    
    // this function is protected
    void updatePercentage(){
        // updates what the percentage of scans are
    }

    // this function is public
    float getPercentage(){
        // returns progressPercentage
    }

    double getTotal(){
        //returns totalProgressCount
    }

    double getCompleted(){
        //returns totalProgressCompleted
    }

    // function that runs only if the scan is finished AND progress monitor is not at 100%
    void finishedEarly(){
        // changes the progress count/percentage to 100 to match actual progress
        // returns
    }

    // function that resets everything to 0, if scan is canceled or finished
    void resetProgressMonitor(){
        // sets all variables to 0
    }

    // function that updates when a folder is finished scanning
    void finishedDirectory(){
        // adds to the file count completed
        // runs updatePercentage
    }

    // funciton that runs after a file is finished scanning
    void finishedFile(){
        // adds to the file count completed
        // runs updatePercentage
    }

    void addFile(){
        // adds to the file count
        // adds to the progress count
    }

    void countDirectories(){
        // takes the directory as input
        // call this for each directory added to a scan
        // adds the amount of directories within a directory to the count
        // uses dirent [iterateDirectory] within [ls.c]
    }

    void countFiles(){
        // takes the directory as input
        // uses direct [iterateDirectory] within [ls.c]
    }

    int Recommend(){
        // figures out if we use countDirectories or countFiles
        //uses dirent [iterateDirectory] within [ls.c]
    }
}

void fileCount(){
    // uses file count + stat 
    // https://pubs.opengroup.org/onlinepubs/009696799/functions/stat.html
}

// Lava included a class called "WorkQueue" but I cannot tell if we need it

class CustodioScan{
    public:
        // includes all variables we want public
        // includes all functions we want to include
}

inline void CustodioScan:: supportPage(){
    //opens support page/FAQ in browser
}

inline int CustodioScan::scheduleScanDaily(){
    // function to schedule a daily scan
    // takes in input month, day, year, hour, minute, often
}

inline int CustodioScan::scheduleScanWeekly(){
    // function to schedule a weekly scan
    // takes in input month, day, year, hour, minute, often
    // https://stackoverflow.com/questions/11972368/c-get-which-day-by-input-date
}

inline int CustodioScan::scheduleScanMonthly(){
    // function to schedule a monthly scan
    // takes in input month, day, year, hour, minute, often
}

//this is not declared in our requirements
inline int CustodioScan::scheduleScanOnce(){
    // function to schedule a once
    // takes in input month, day, year, hour, minute, often
}

//this is not declared in our requirements
inline int CustodioScan::scheduleScanWeekly(){
    // function to remove a scheduled scan
    // returns 0 when done
}

inline int CustodioScan::scanFile(){
    // updates scan count
    // updates current scan directory
    // if file is found to be invected, returns print statement
    // else, says no virus detected
    // lava puts a .lava extension at the end of infected files, how?

    // https://stackoverflow.com/questions/50286699/how-to-open-a-file-ending-with-a-particular-extension-in-c
    // https://word.tips.net/T001003_Using_Your_Own_File_Extensions.html#:~:text=In%20the%20File%20Name%20field,Press%20Enter.
    // https://cplusplus.com/forum/beginner/224276/
}

inline int CustodioScan::iterateDirectory(){
    // takes in directory
    // literally taken from dirent github
    // https://github.com/tronkko/dirent [ls.c]
}

bool is_empty(){
    // takes in the file
    // checks if it's empty
    // https://stackoverflow.com/questions/2390912/checking-for-an-empty-file-in-c
}

// Lava includes a "readantibody" function, but I'm not sure if that's needed

// Lava also includes seperate functions to getDownloadsFolder and getDocumentsFolder

inline bool CustodioScan::resetQuarantineContents(){
    // takes in directory
    // literally taken from dirent github
    // https://github.com/tronkko/dirent [ls.c]
}

inline bool CustodioScan::scanDirectory(){
    // basically just sets clean if directory is clean, cancel if user wants to cancel
}

// Lava has a QuickScan function, but we don't have that in our requirements

inline bool CustodioScan::quarantineIsEmpty(){
    // checks if quarantine file is empty
    // lava named theirs quarantine.lava
}

inline set<string> CustodioScan::countQuarantineContents(){
    // prints the contents of the quarantine
    // puts each line into a string
    // returns string
}

// followed by a bunch of functions with seeing what's in quarantine

// followed by moving/removing files/quarantine files

inline bool CustodioScan::CompleteScan(){
    // does a complete scan of the device
}

inline string CustodioScan::getTime(){
    // gets time, time_t
    // tm struct
    // https://en.cppreference.com/w/c/chrono/time_t
}

// LAVA includes a function to check clamav.config files

// Lava includes a function to update their virus database
// would we just run freshclam at program startup?

// They also include a bunch of functions that verify things

inline CustodioScan::CustodioScan(){
    // Basically the big file that does the scanning
}
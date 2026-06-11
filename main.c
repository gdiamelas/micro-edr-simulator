#include <stdio.h>
#include <string.h>

// Predefined "blacklist" of suspicious process names
const char* SUSPICIOUS_PROCESSES[] = {
    "keylogger.exe",
    "spyware_hook.exe",
    "hidden_tracker.exe"
};
int blacklist_size = 3;

// Function that simulates checking a single process
void check_process(const char* running_process) {
    int found = 0;
    
    for (int i = 0; i < blacklist_size; i++) {
        if (strcmp(running_process, SUSPICIOUS_PROCESSES[i]) == 0) {
            printf("[WARNING] Suspicious process detected running in background: %s\n", running_process);
            found = 1;
            break;
        }
    }
    
    if (!found) {
        printf("[✔] Process %s clean.\n", running_process);
    }
}

int main() {
    printf("--- Cybersecurity Process Monitor Tool v1.0 ---\n\n");
    
    // Simulated list of active processes retrieved from the system
    const char* active_processes[] = {
        "chrome.exe",
        "svchost.exe",
        "spyware_hook.exe", // This should be detected by the scanner
        "spotify.exe"
    };
    int active_size = 4;
    
    // Start the system scan simulation
    printf("Scanning active system processes...\n");
    for (int i = 0; i < active_size; i++) {
        check_process(active_processes[i]);
    }
    
    printf("\nScan complete.\n");
    return 0;
}

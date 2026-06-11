# Process Signature Matcher (Micro-EDR Simulator)

A lightweight, cross-platform C program that simulates the core functionality of an Endpoint Detection and Response (EDR) tool. It scans a list of active system processes against a predefined "blacklist" of known malicious software signatures (Signature-Based Detection).

---

## Features
* **Signature-Based Detection:** Identifies known threats using string-matching algorithms (`strcmp`).
* **Cross-Platform Simulation:** Written in pure C (`stdio.h`, `string.h`), allowing it to run seamlessly on Windows, Linux, and macOS without OS-specific dependencies.
* **Modular Design:** Easily expandable blacklist and active process array for testing custom scenarios.

---

## How It Works
The application mimics a security agent checking running applications:
1. It maintains a hardcoded Blacklist of suspicious process names (e.g., `keylogger.exe`, `spyware_hook.exe`).
2. It iterates through an array of simulated Active Processes.
3. If a match is found, it triggers a `[WARNING]` alert indicating potential malware activity. Otherwise, it logs the process as `[✔] Clean`.

---

## Technical Stack & Skills Demonstrated
* **Language:** C (C99 Standard)
* **Concepts:** Array manipulation, String handling, Pointers, Security automation logic.
* **Cybersecurity Framework:** Threat Detection, Signature Analysis.

---

## Dynamic Development (AI-Assisted Learning)
This project was developed with the assistance of Artificial Intelligence (AI) for educational and research purposes. AI was utilized as a tool to accelerate the learning process, refine coding logic, and structure the initial architectural concept of signature matching. All code and methodologies have been thoroughly analyzed, documented, and verified to ensure deep technical understanding of low-level security systems.

--- Cybersecurity Process Monitor Tool v1.0 ---

Scanning active system processes...
[✔] Process chrome.exe clean.
[✔] Process svchost.exe clean.
[WARNING] Suspicious process detected running in background: spyware_hook.exe
[✔] Process spotify.exe clean.

Scan complete.

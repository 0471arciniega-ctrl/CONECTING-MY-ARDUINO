# Arduino IDE 2 Installation & Troubleshooting on Debian Linux

A quick, reliable guide to resolving `dpkg` database lock errors and successfully installing the Arduino IDE (v2.x) on Debian-based distributions using Flatpak, including full USB serial upload permissions.

---

## 1. Prerequisites & Fixing Interrupted `dpkg` Errors

If an installation was canceled or power was interrupted, `apt` and `dpkg` lock operations with the error:
> `Error: dpkg was interrupted, you must manually run 'sudo dpkg --configure -a' to correct the problem.`

### Fix:
1. Reconfigure pending package states:
   ```bash
   sudo dpkg --configure -a
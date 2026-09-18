import subprocess
print("Cleaner | Created by and for Cockatiel Project")
print("==============================================")
subprocess.run(["sudo", "apt", "autoremove"])
subprocess.run(["sudo", "apt", "clean"])
subprocess.run(["sudo", "apt", "autoclean"])
print("=================== Done! ====================")

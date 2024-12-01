#!/bin/bash

# Navigate to the DSA folder
cd /path/to/your/dsa/code

# Add all files, commit, and push to GitHub
git add .
git commit -m "Auto update DSA code at $(date)"
git push origin main

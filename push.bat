@echo off
set "PATH=C:\Users\sharm\.gemini\antigravity\bin\git\cmd;C:\Users\sharm\.gemini\antigravity\bin\git\mingw64\bin;%PATH%"
cd /d "%~dp0"
echo ===================================================
echo Pushing 100 Days of Code (Day 1 - Day 96) to GitHub
echo ===================================================
echo Target: https://github.com/devangok/100-Days-of-Code-.git
echo.
git push -u origin main
echo.
echo If finished, press any key to exit.
pause

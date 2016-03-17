@echo off

REM cleanup
DEL /S /Q *.pbo

"C:\Program Files (x86)\Mikero\DePboTools\bin\MakePbo.exe" -UP EUBG_Main
"C:\Program Files (x86)\Mikero\DePboTools\bin\MakePbo.exe" -UP EUBG_NordicBG

windres.exe .\resource\resource.rc -O coff -o .\bin\resource.res
clang++.exe .\main.cpp .\src\*.cpp .\bin\resource.res -O3 -std=c++17 -IInclude -o .\bin\main.exe
.\bin\main.exe
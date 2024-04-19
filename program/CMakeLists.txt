cmake_minimum_required(VERSION 3.4)

project(ComputerService)

#Ustaw we własnej zmiennej SOURCE_FILES zbiór plików źródłowych projektu
set(SOURCE_FILES src/main.cpp)

#Włącz powyższy zbiór plików do zbudowania programu wykonywalnego Program
add_executable(ComputerService ${SOURCE_FILES})

#Dołącz katalog include podprojektu Program do globalnej listy. Dzięki temu każdy inny podprojekt będzie ten katalog "widział"
target_include_directories(ComputerService PUBLIC include)

#Określenie zależności pomiędzy projektami Program i Biblioteka
target_link_libraries(ComputerService Library)

enable_testing()
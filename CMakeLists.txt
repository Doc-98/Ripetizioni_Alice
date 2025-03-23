cmake_minimum_required(VERSION 3.30)
project(Ripetizioni_Alice C)

set(CMAKE_C_STANDARD 99)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/executables)


add_library(Ripetizioni_Alice STATIC
        src/Ordinamento_Vettori/selectionSort.c
        src/Ordinamento_Vettori/bubbleSort.c
        src/Ordinamento_Vettori/insertionSort.c
        src/Ordinamento_Vettori/FunzioniUtili_Vettori.c
        src/Ordinamento_Vettori/InvesioneVettore.c
        src/Puntatori_E_File/SperimentiamoPuntatori.c
        src/Ordinamento_Vettori/Esercizi/Riordina_Vettore_Soluzione.c
        src/Ordinamento_Vettori/Esercizi/Riordina_Vettore.c
        src/Puntatori_E_File/Esercizi/File_1.c
        src/Puntatori_E_File/Esercizi/Puntatori_E_Funzioni.c
        src/Puntatori_E_File/Esercizi/Teoria_Puntatori_Soluzione.c
        src/Puntatori_E_File/Esercizi/File_2.c
        src/Puntatori_E_File/Esercizi/File_3.c)

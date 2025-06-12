#include "pocketpy.h"
#include <stdio.h>
#include "levenshtein.c"



static bool levenshtein_int(int argc, py_Ref argv) {
  PY_CHECK_ARGC(2);
  PY_CHECK_ARG_TYPE(0, tp_str);
  PY_CHECK_ARG_TYPE(1, tp_str);
  const char* a = py_tostr(py_arg(0));
  const char* b = py_tostr(py_arg(1));
  int res = levenshtein(a,b);
  py_newint(py_retval(), res);
  return true;
}



int main() {

    FILE *fp;
    char caminho[] = "main.py"; // Caminho relativo
    //char caminho[] = "C:\\Users\\Joao\\Documents\\meu_arquivo.txt"; // Caminho absoluto
    char vetor[5000];
    fp = fopen(caminho, "r");
    fread(vetor, sizeof(char),2500,fp);
    
    

  py_initialize();

  py_GlobalRef __main__ = py_getmodule("__main__");

  // Bind a function named "add" to the main module
  py_bindfunc(__main__, "levenshtein" , levenshtein_int);

  if (!py_exec(vetor, "main.py", EXEC_MODE, NULL)) {
    py_printexc();
    goto finalize;
  }

finalize:
  py_finalize();
  return 0;
}
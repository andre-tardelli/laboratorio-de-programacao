#include <stdio.h>
#include "log.h"

static int ativo = 1;

void Log_ativar(int estado)
{
    ativo = estado;
}

void Log_msg(const char *mensagem)
{
    if (ativo == 1)
    {
        printf("%s\n",mensagem);
    }    
}

void Log_erro(const char *erro)
{

    if(ativo == 1)
    {
        printf("[ERRO ]%s\n", erro);
    }
}
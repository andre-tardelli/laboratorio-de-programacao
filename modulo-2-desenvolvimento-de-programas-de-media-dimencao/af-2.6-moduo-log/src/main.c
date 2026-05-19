#include <stdio.h>
#include "log.h"

int main()
{
    printf("== Teste 1: Log ativo (padrão) ==\n");
    Log_msg("Sistema iniciado");
    Log_erro("Ficheiro não encontrado");
    Log_msg("Operação concluída");

    printf("\n== Teste 2 : Desativar log ==\n");
    Log_ativar(0);
    Log_msg("Esta mensagm não deve aparecer");

    printf("\n== Teste 3: Reativar log ==\n");
    Log_ativar(1);
    Log_msg("Log reativado");
    
    return 0;


}
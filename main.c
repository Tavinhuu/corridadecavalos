#include <stdio.h>

int escolhaMenuPrincipal, comecarapostas, cavaloaleatorio, apostaNoCavalo, back;

int dinheiro = 0;

char cavalo[] =

        "      -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n"
        "      -=            ___  ______ _____ _____ _____ ___   _____           -=\n"
        "      -=           / _ \\ | ___ \\  _  /  ___|_   _/ _ \\ /  ___|          -=\n"
        "      -=          / /_\\ \\| |_/ / | | \\ `--.  | |/ /_\\ \\ `--.            -=\n"
        "      -=          |  _  ||  __/| | | |`--. \\ | ||  _  | `--. \\          -=\n"
        "      -=          | | | || |   \\ \\_/ /\\__/ / | || | | |\\__/ /           -=\n"
        "      -=          \\_| |_/\\_|    \\___/\\____/  \\_/\\_| |_/\\____/           -=\n"
        "      -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n";





void menuprincipal(){
    system("clear");
    printf("%s", cavalo);
    printf("      -= Bem vindo ao sistema de apostas do Gustavo, escolha uma das opções\n");
    printf("      -= Digite 1 para checar seu saldo\n");
    printf("      -= Digite 2 para começar suas apostas\n");
    scanf("%d", &escolhaMenuPrincipal);
    
    switch(escolhaMenuPrincipal){
        case 1:
            printf("%s", cavalo);
            printf("      -= Seu dinheiro atual é: %d\n", dinheiro);
            printf("      -= Digite qualquer número para retornar ao menu principal\n");
            scanf("%d", &back);
            if (back != 0){
                menuprincipal();
            }
            break;
        case 2:
            menuCavalo();
            break;
    }
    
}

void menuCavalo(){
    system("clear");
    printf("%s", cavalo);
    printf("      -= Legal! Vamos começar com apostas em cavalos?, escolha uma das opções\n");
    printf("      -= Digite 1 para comecar as apostas\n");
    scanf("%d", &comecarapostas);
    switch(comecarapostas){
        case 1:
            comecarCorrida();
    
            
        case 2:
            menuprincipal();
            
    }
}


void corridaAndamento(){
    char *escolherMensagem() {
    char *mensagens[] = {
        "Trovão veloz (N1) avança na frente!",
        "Estrela dourada (N2) realiza uma curva magnifica",
        "Flecha rápida (N3) dispara na frente e assume a primeira posição",
        "Coração valente (N4) retoma sua colocação",
        "A disputa esta entre flecha rápida (N3) e Trovão veloz (N1)",
        "Coração valente (N4) e estrela dourada (N2) competem o primeiro lugar",
        "A disputa está acirrada!",
        // Adicione quantas mensagens desejar
    };

    int numMensagens = sizeof(mensagens) / sizeof(mensagens[0]);
    int indice = rand() % numMensagens;

    return mensagens[indice];
}

    int inicio;
    system("clear");
    printf("      -=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("      -= A corrida foi iniciada! Seu cavalo é o N%d    -=\n", apostaNoCavalo );
    printf("      -=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=\n\n");
    sleep(3);
    for(inicio = 0; inicio<6; inicio++){
        srand(time(NULL));
        char *mensagem = escolherMensagem();
        printf("      -= %s\n\n", mensagem);
        sleep(3);
    }
    
    srand(time(NULL));
    int vencedoraleatorio = rand() % 3;
    
    sleep(1);
    printf("      -= O vencedor foi o cavalo N%d\n", vencedoraleatorio+1);
    if (apostaNoCavalo == 1){
        if (vencedoraleatorio == 0) {
            voceVenceu();
        }
    }
    if (apostaNoCavalo == 2){
        if (vencedoraleatorio == 1) {
            voceVenceu();
        }
    }
    if (apostaNoCavalo == 3){
        if (vencedoraleatorio == 2) {
            voceVenceu();
        }
    }
    if (apostaNoCavalo == 4){
        if (vencedoraleatorio == 3) {
            voceVenceu();
        }
    }
    int nada;
    scanf("%d", &nada);
        
    
}


void voceVenceu(){
    int voltarmenu;
    printf("%s", cavalo);
    printf("      -= Legal! Você venceu! Foram adicionados $10,00 na sua conta\n");
    
    dinheiro += 10;
    
    printf("      -= Digite qualquer número para retornar ao menu\n");
    scanf("%d", &voltarmenu);
    if (voltarmenu != 0){
        menuprincipal();
    }
}



void comecarCorrida(){
    printf("%s", cavalo);
    
    printf("      -=  Escolha seu cavalo para apostar\n");
    printf("\n      -= Trovão Veloz - garanhão majestoso conhecido por sua velocidade imbatível");
    printf("\n      -= Estrela Dourada - conhecida por sua graça e habilidade nas curvas");
    printf("\n      -= Flecha Rápida - um cavalo ágil e astuto, capaz de acelerar como uma flecha");
    printf("\n      -= Coração Valente - conhecido por nunca desistir, mesmo nas condições mais desafiadoras da pista\n");
            
    cavaloaleatorio = rand() % 2;
            
    scanf("%d", &apostaNoCavalo);
    switch(apostaNoCavalo){
        case 1:
            corridaAndamento();
            
            break;
        
        case 2:
            corridaAndamento();
            
            break;
        case 3:
            corridaAndamento();
            
            break;
        case 4:
            corridaAndamento();
            
            break;
}
}



int main(void){
    menuprincipal();
}

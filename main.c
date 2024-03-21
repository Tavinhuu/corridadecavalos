#include <stdio.h>
#include <locale.h>

int escolhaMenuPrincipal, comecarapostas, cavaloaleatorio, apostaNoCavalo, back;

int dinheiro = 1000;
int inicio;
int cavaloEscolhido = 0;

// menuzinho

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
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("%s", cavalo);
    printf("      -= Bem vindo ao sistema de apostas do Gustavo, escolha uma das opções\n");
    printf("      -= Digite 1 para checar seu saldo\n");
    printf("      -= Digite 2 para começar suas apostas\n\n");
    printf("      -= Digite qualquer outro valor para fechar\n");
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
        default:
            printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
            printf("%s", cavalo);
            printf("      -=  Obrigado por utilizar");
    }
    
}

void menuCavalo(){
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("%s", cavalo);
    printf("      -= Legal! Vamos começar com apostas em cavalos?, escolha uma das opções\n");
    printf("      -= Digite 1 para comecar as apostas\n\n");
    printf("      -= Digite qualquer número para retornar ao menu\n");
    scanf("%d", &comecarapostas);
    if(comecarapostas == 1){
        if (dinheiro >= 10){
              comecarCorrida();
        } else {
          printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
          printf("%s", cavalo);
          printf("      -= Ah!! Que pena, você não tem dinheiro suficiente");
        }
            
    } else {
        menuprincipal();
    }
}

void comecarCorrida(){
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
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
            cavaloEscolhido = 1;
            corridaAndamento();
            
            break;
        
        case 2:
            cavaloEscolhido = 2;
            corridaAndamento();
            
            break;
        case 3:
            cavaloEscolhido = 3;

            corridaAndamento();
            
            break;
        case 4:
            cavaloEscolhido = 4;
            corridaAndamento();
            
            break;
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

    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("      -=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("      -= A corrida foi iniciada! Seu cavalo é o N%d    -=\n", apostaNoCavalo );
    printf("      -=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=\n\n");
    // espera 2 seg pra enviar as msg
    sleep(3);

    //envia as msg aleatoria em loop com delay de 2 seg por 6 vezes

    for(inicio = 0; inicio<6; inicio++){
        srand(time(NULL));
        char *mensagem = escolherMensagem();
        printf("      -= %s\n\n", mensagem);
        sleep(3);
    }
    
    // ver o vencedor aleatorio

    srand(time(NULL));
    int vencedoraleatorio = rand() % 3;
    
    sleep(1);
    printf("      -= O vencedor foi o cavalo N%d\n", vencedoraleatorio+1);

    // caso escolha o cavalo 1


    if (cavaloEscolhido == 1){

        // se o vencedor for o cavalo 1

        if (vencedoraleatorio == 0) {

            // envia para o menu de win

            voceVenceu();

            // se o vencedor não for o 1

        } else{

            // perdeu fi

            vocePerdeu();
        }
    }
    if (cavaloEscolhido == 2){
        if (vencedoraleatorio == 1) {
            voceVenceu();
        } else{
            vocePerdeu();
        }
    }
    if (cavaloEscolhido == 3){
        if (vencedoraleatorio == 2) {
            voceVenceu();
        } else{
            vocePerdeu();
        }
    }
    if (cavaloEscolhido == 4){
        if (vencedoraleatorio == 3) {
            voceVenceu();
        } else{
            vocePerdeu();
        }
    }

    //fiz isso aq so pra voltar pro menu tbm pq tava voltando direto

    int nada;
    scanf("%d", &nada);
        
    
}

// se ele vencer


void voceVenceu(){
    int voltarmenu;
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("%s", cavalo);
    printf("      -= Legal! Você venceu! Foram adicionados $10,00 na sua conta\n");
    
    // adiciona 10

    dinheiro += 10;
    
    printf("      -= Digite qualquer número para retornar ao menu\n");
    scanf("%d", &voltarmenu);

    // volta pro menu

    if (voltarmenu != 0){
        menuprincipal();
    }
}


// Caso o usuário não ganhe este será o menu

void vocePerdeu(){
    int voltarmenu;
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("%s", cavalo);
    printf("      -= Ah que pena, você perdeu! Foram removidos $10,00 na sua conta\n");
    
    // remove 10 de dinheiro

    dinheiro -= 10;
    
    printf("      -= Digite qualquer número para retornar ao menu\n");
    scanf("%d", &voltarmenu);

    // retorna ao menu

    if (voltarmenu != 0){
        menuprincipal();
    }
}




int main(void){
    setlocale(LC_ALL, "Portuguese");
    menuprincipal();
}

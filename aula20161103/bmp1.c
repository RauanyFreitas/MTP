#include <stdio.h>
#include <math.h>
struct Pixel {
    unsigned char B;
    unsigned char G;
    unsigned char R;
};
int main() {
    struct Pixel pixel;
    int Offset, WPX, HPX, BPP, NCP, PAL, AUX, i, j;
    FILE * imagem;
    unsigned char byte;
    unsigned short word;
    unsigned int dword;
    imagem = fopen ("Core.bmp", "rb");
    if(imagem==NULL)
    {
        fprintf (stderr, "Arquiuvo nao encontrado!\n");
        return 1;
    }

    fread(&byte, sizeof(byte), 1, imagem);
    printf("%c", byte);
    fread(&byte, sizeof(byte), 1, imagem);
    printf("%c\n", byte);
    fread(&dword, sizeof(dword), 1, imagem);
    printf("Tamanho do arquivo (bytes): %u\n", dword);
    fseek(imagem, 2*sizeof(word), SEEK_CUR);
    fread(&dword, sizeof(dword), 1, imagem);
    printf("Offset (bytes): %u\n", dword);
    fread(&dword, sizeof(dword), 1, imagem);
    printf("Tamanho do cabecalho (bytes): %u\n", dword);
    fread(&dword, sizeof(dword), 1, imagem);
    WPX = dword;
    printf("Largura da imagem (pixels): %u\n", WPX);
    fread(&dword, sizeof(dword), 1, imagem);
    HPX = dword;
    printf("Altura da imagem (pixels): %u\n", HPX);
    fread(&word, sizeof(word), 1, imagem);
    printf("Qtde de planos de cores: %u\n", word);
    fread(&word, sizeof(word), 1, imagem);
    BPP = word;
    printf("Bits por pixel: %u\n", BPP);
    fread(&dword, sizeof(dword), 1, imagem);
    printf("Método de compressão: %u\n", dword);
    fread(&dword, sizeof(dword), 1, imagem);
    printf("Tamanho da imagem (bytes): %u\n", dword);
    fread(&dword, sizeof(dword), 1, imagem);
    printf("Resolução horizontal: %u\n", dword);
    fread(&dword, sizeof(dword), 1, imagem);
    printf("Resolução vertical: %u\n", dword);
    fread(&dword, sizeof(dword), 1, imagem);
    NCP = (dword == 0) ? (1 << BPP) : dword;
    printf("Número de cores na paleta: %u\n", NCP);
    fread(&dword, sizeof(dword), 1, imagem);
    printf("Número de cores importantes %u\n", (dword == 0)? NCP : dword );
    PAL = floor((BPP*WPX + 31.)/32.)*4;
    printf("Tamanho da linha da array de pixels (bytes): %u\n", PAL);
    AUX = PAL - WPX*3;
    for(j = 0; j < HPX; j++) {
		for(i = 0; i < WPX; i++) {
			fread(&pixel, sizeof(pixel), 1, imagem);
			printf("R: %u, G: %u, B: %u\n", pixel.R, pixel.G, pixel.B);
		}
		if(AUX > 0)
			fseek(imagem, AUX, SEEK_CUR);
	}



    fclose(imagem);
    return 0;
}


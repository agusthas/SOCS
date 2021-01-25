#include <stdio.h>
#define ll long long int
#define gtc() getchar()

struct mahasiswa
{
    char name[102];
    char nim[10];
    int age;
    char pc[7];
    char pob[101];
    char dob[101];
    char hs[101];
    int sib;
    int height;
    char rek[10];
};

void insert(struct mahasiswa *mhs, int N)
{
    for (int i = 1; i <= N; i++)
    {
        gets(mhs[i].name);
        gets(mhs[i].nim);
        scanf("%d", &mhs[i].age);
        gtc();
        gets(mhs[i].pc);
        gets(mhs[i].pob);
        gets(mhs[i].dob);
        gets(mhs[i].hs);
        scanf("%d", &mhs[i].sib);
        gtc();
        scanf("%d", &mhs[i].height);
        gtc();
        gets(mhs[i].rek);
    }
}

void print(struct mahasiswa *mhs, int N)
{
    for (int i = 1; i <= N; i++)
    {
        printf("Mahasiswa ke-%d:\n", i);
        printf("Nama: %s\n", mhs[i].name);
        printf("NIM: %s\n", mhs[i].nim);
        printf("Umur: %d\n", mhs[i].age);
        printf("Kode Pos: %s\n", mhs[i].pc);
        printf("Tempat Lahir: %s\n", mhs[i].pob);
        printf("Tanggal Lahir: %s\n", mhs[i].dob);
        printf("Almamater SMA: %s\n", mhs[i].hs);
        printf("Jumlah Saudara Kandung: %d\n", mhs[i].sib);
        printf("Tinggi Badan: %d\n", mhs[i].height);
        printf("NOMOR REKENING: %s\n", mhs[i].rek);
    }
}

int main()
{
    int N;
    struct mahasiswa mhs[101];
    scanf("%d", &N);
    gtc();
    insert(mhs, N);
    print(mhs, N);
    return 0;
}
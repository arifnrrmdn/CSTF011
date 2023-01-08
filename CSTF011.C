#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<ctype.h>

//deklarasi variabel
int pilih,karung,harga,total_transaksi;
float diskon;
char status_member;
main()
{
    system("cls");
    puts("TOKO GROSIR BERAS \"MAKMUR\"");
    puts("--------------------------");
    puts("DAFTAR JENIS BERAS");
    puts("1.PUTIH");
    puts("2.MERAH");
    puts("3.HITAM");
    puts("4.KETAN");
    puts("5.COKLAT");
    printf("PILIH : "); scanf("%d",&pilih);
    switch (pilih)
    {
    case 1: 
    printf("BERAS YANG DIPILIH ADALAH BERAS PUTIH"); 
    printf("\nJUMLAH BELI (KARUNG) : "); scanf("%d",&karung);
    printf("STATUS M=MEMBER N=NON MEMBER : "); status_member=getche();
    harga = karung*275.000;
    switch(toupper(status_member))
    {
        case 'M': 
            diskon = harga * 85 / 100;
            total_transaksi = harga - diskon;
        case 'N':
            diskon = 0;
            total_transaksi = harga;
    }
    printf("\nTOTAL TRANSAKSI : %.2f.000",harga);
    printf("\nPOTONGAN        : %.2f",diskon);
    puts("\n-------------------------");
    printf("JUMLAH BAYAR    : %.2f.000",total_transaksi);
    break;

    case 2: 
    printf("BERAS YANG DIPILIH ADALAH BERAS MERAH"); 
    printf("\nJUMLAH BELI (KARUNG) : "); scanf("%d",&karung);
    printf("STATUS M=MEMBER N=NON MEMBER : "); status_member=getche();
    harga = karung*285.000;
    switch(toupper(status_member))
    {
        case 'M': 
            diskon = harga * 85 / 100;
            total_transaksi = harga - diskon;
        case 'N':
            diskon = 0;
            total_transaksi = harga;
    }
    printf("\nTOTAL TRANSAKSI : %d.000",harga);
    printf("\nPOTONGAN        : %d",diskon);
    puts("\n-------------------------");
    printf("JUMLAH BAYAR    : %d.000",total_transaksi);
    break;

    case 3: 
    printf("BERAS YANG DIPILIH ADALAH BERAS HITAM"); 
    printf("\nJUMLAH BELI (KARUNG) : "); scanf("%d",&karung);
    printf("STATUS M=MEMBER N=NON MEMBER : "); status_member=getche();
    harga = karung*300.000;
    switch(toupper(status_member))
    {
        case 'M': 
            diskon = (float) harga * 85 / 100;
            total_transaksi = harga - diskon;
        case 'N':
            diskon = 0;
            total_transaksi = harga;
    }
    printf("\nTOTAL TRANSAKSI : %d.000",harga);
    printf("\nPOTONGAN        : %d",diskon);
    puts("\n-------------------------");
    printf("JUMLAH BAYAR    : %d.000",total_transaksi);
    break;

    case 4: 
    printf("BERAS YANG DIPILIH ADALAH BERAS KETAN"); 
    printf("\nJUMLAH BELI (KARUNG) : "); scanf("%d",&karung);
    printf("STATUS M=MEMBER N=NON MEMBER : "); status_member=getche();
    harga = karung*350.000;
    switch(toupper(status_member))
    {
        case 'M': 
            diskon = harga * 85 / 100;
            total_transaksi = harga - diskon;
        case 'N':
            diskon = 0;
            total_transaksi = harga;
    }
    printf("\nTOTAL TRANSAKSI : %d.000",harga);
    printf("\nPOTONGAN        : %d",diskon);
    puts("\n-------------------------");
    printf("JUMLAH BAYAR    : %d.000",total_transaksi);
    case 5: 
    printf("BERAS YANG DIPILIH ADALAH BERAS COKELAT"); 
    printf("\nJUMLAH BELI (KARUNG) : "); scanf("%d",&karung);
    printf("STATUS M=MEMBER N=NON MEMBER : "); status_member=getche();
    harga = karung*200.000;
    switch(toupper(status_member))
    {
        case 'M': 
            diskon = harga * 85 / 100;
            total_transaksi = harga - diskon;
        case 'N':
            diskon = 0;
            total_transaksi = harga;
    }
    printf("\nTOTAL TRANSAKSI : %d.000",harga);
    printf("\nPOTONGAN        : %d",diskon);
    puts("\n-------------------------");
    printf("JUMLAH BAYAR    : %d.000",total_transaksi);
    break;
    default:
        break;
    }
    getch();
    return 0;
}


```mermaid
    flowchart TD;
    A(start) --> B[/float fJumlahBeli, fHarga, fDiskon/];
    B --> C[/string sBonus/];
    C --> D[print Harga Barang];
    D --> E[/input Harga Barang/];
    E --> F[print Jumlah Belinya];
    F --> G[/input Jumlah Belinya/];
    G --> H{jumlah beli > 15};
    H --ya--> I[/bonus payung/];
    I --> J[/diskon 0,15 x harga/];
    H --tidak--> K[/tidak ada bonus/];
    K --> O
    J --> O[selesai ifalse statement];
    O --> M[print strip];
    M --> N[print diskon];
    N --> P[print bonus];
    P --> S(finish)
    ```    
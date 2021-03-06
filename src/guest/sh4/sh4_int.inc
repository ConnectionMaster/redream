/*      NAME     INTEVT   PRI   IPR              IPR_SHIFT */
SH4_INT(IRL_0,   0x200,   15,   0,               0)
SH4_INT(IRL_1,   0x220,   14,   0,               0)
SH4_INT(IRL_2,   0x240,   13,   0,               0)
SH4_INT(IRL_3,   0x260,   12,   0,               0)
SH4_INT(IRL_4,   0x280,   11,   0,               0)
SH4_INT(IRL_5,   0x2a0,   10,   0,               0)
SH4_INT(IRL_6,   0x2c0,   9,    0,               0)
SH4_INT(IRL_7,   0x2e0,   8,    0,               0)
SH4_INT(IRL_8,   0x300,   7,    0,               0)
SH4_INT(IRL_9,   0x320,   6,    0,               0)
SH4_INT(IRL_10,  0x340,   5,    0,               0)
SH4_INT(IRL_11,  0x360,   4,    0,               0)
SH4_INT(IRL_12,  0x380,   3,    0,               0)
SH4_INT(IRL_13,  0x3a0,   2,    0,               0)
SH4_INT(IRL_14,  0x3c0,   1,    0,               0)
SH4_INT(HUDI,    0x600,   0,    IPRC,            0)
SH4_INT(GPOI,    0x620,   0,    IPRC,            12)
SH4_INT(DMTE0,   0x640,   0,    IPRC,            8)
SH4_INT(DMTE1,   0x660,   0,    IPRC,            8)
SH4_INT(DMTE2,   0x680,   0,    IPRC,            8)
SH4_INT(DMTE3,   0x6a0,   0,    IPRC,            8)
SH4_INT(DMTE4,   0x780,   0,    IPRC,            8)
SH4_INT(DMTE5,   0x7a0,   0,    IPRC,            8)
SH4_INT(DMTE6,   0x7c0,   0,    IPRC,            8)
SH4_INT(DMTE7,   0x7e0,   0,    IPRC,            8)
SH4_INT(DMAE,    0x6c0,   0,    IPRC,            8)
SH4_INT(TUNI3,   0xb00,   0,    INTPRI00,        8)
SH4_INT(TUNI4,   0xb80,   0,    INTPRI00,        12)
SH4_INT(TUNI0,   0x400,   0,    IPRA,            12)
SH4_INT(TUNI1,   0x420,   0,    IPRA,            8)
SH4_INT(TUNI2,   0x440,   0,    IPRA,            4)
SH4_INT(TICPI2,  0x460,   0,    IPRA,            4)
SH4_INT(ATI,     0x480,   0,    IPRA,            0)
SH4_INT(PRI,     0x4a0,   0,    IPRA,            0)
SH4_INT(CUI,     0x4c0,   0,    IPRA,            0)
SH4_INT(SCI1ERI, 0x4e0,   0,    IPRB,            4)
SH4_INT(SCI1RXI, 0x500,   0,    IPRB,            4)
SH4_INT(SCI1TXI, 0x520,   0,    IPRB,            4)
SH4_INT(SCI1TEI, 0x540,   0,    IPRB,            4)
SH4_INT(SCIFERI, 0x700,   0,    IPRC,            4)
SH4_INT(SCIFRXI, 0x720,   0,    IPRC,            4)
SH4_INT(SCIFBRI, 0x740,   0,    IPRC,            4)
SH4_INT(SCIFTXI, 0x760,   0,    IPRC,            4)
SH4_INT(ITI,     0x560,   0,    IPRB,            12)
SH4_INT(RCMI,    0x580,   0,    IPRB,            8)
SH4_INT(ROVI,    0x5a0,   0,    IPRB,            8)

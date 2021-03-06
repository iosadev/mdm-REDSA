//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGAffineTransform {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
    double _field6;
};

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint _field1;
    struct CGSize _field2;
};

struct CGSize {
    double width;
    double height;
};

struct _DDRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct bignum_st;

struct bn_blinding_st;

struct bn_mont_ctx_st;

struct crypto_ex_data_st {
    struct stack_st_void *_field1;
    int _field2;
};

struct engine_st;

struct in6_addr {
    union {
        unsigned char _field1[16];
        unsigned short _field2[8];
        unsigned int _field3[4];
    } _field1;
};

struct in_addr {
    unsigned int _field1;
};

struct rsa_meth_st;

struct rsa_st {
    int _field1;
    long long _field2;
    struct rsa_meth_st *_field3;
    struct engine_st *_field4;
    struct bignum_st *_field5;
    struct bignum_st *_field6;
    struct bignum_st *_field7;
    struct bignum_st *_field8;
    struct bignum_st *_field9;
    struct bignum_st *_field10;
    struct bignum_st *_field11;
    struct bignum_st *_field12;
    struct crypto_ex_data_st _field13;
    int _field14;
    int _field15;
    struct bn_mont_ctx_st *_field16;
    struct bn_mont_ctx_st *_field17;
    struct bn_mont_ctx_st *_field18;
    char *_field19;
    struct bn_blinding_st *_field20;
    struct bn_blinding_st *_field21;
};

struct sockaddr_in {
    unsigned char _field1;
    unsigned char _field2;
    unsigned short _field3;
    struct in_addr _field4;
    char _field5[8];
};

struct sockaddr_in6 {
    unsigned char _field1;
    unsigned char _field2;
    unsigned short _field3;
    unsigned int _field4;
    struct in6_addr _field5;
    unsigned int _field6;
};

struct stack_st_void;


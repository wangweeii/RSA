//
// Created by w15627 on 2019/12/19.
//

#ifndef RSA_RSA_H
#define RSA_RSA_H

class RSA
{
public:
        RSA() = default;

        ~RSA();

        // 生成一对密钥

        // 设置公钥或私钥

        // 返回解密后的明文
        void decipher(huge ciphertext, Huge *plaintext, RsaPriKey prikey);

        // 返回加密后的密文
        void encipher(Huge plaintext, Huge *ciphertext, RsaPubKey pubkey);

private:
        unsigned long long key;
        unsigned           n;
        unsigned           content;

        // 辗转相除法求最大公约数
        int gcd(int a, int b);

        // 蒙哥马利算法
        int mgml();
};

#endif //RSA_RSA_H
#include "base64.h"  
#include <stdio.h> 
#include <string.h>
#include "hmac_sha256.h"
  
int arrayToStr(unsigned char *buf, unsigned int buflen, char *out)
{
    char strBuf[64] = {0};
    char pbuf[64];
    int i;
    for(i = 0; i < buflen; i++)
    {
        sprintf(pbuf, "%02x", buf[i]);
        strncat(strBuf, pbuf, 2);
    }
    strncpy(out, strBuf, buflen * 2);
    printf("out = %s\nlen:%d\n", out, strlen(out));
    return strlen(out);
}

int main()
{
    unsigned char * result;
	unsigned char *base64_data;
	int base64_len = 0;
	int i = 0;
	int str_len = 0;
	char buff[512] = {0};
    result = HMAC_SHA256("test", "123456");

    unsigned char arr[32] = { 0 };
    memcpy(arr, result, 32);

    for(i = 0; i < 32; i++) {
        printf("%x", arr[i]);
    }
	printf("\n");
	//str_len = arrayToStr(arr, sizeof(arr), buff);		// 将十六进制转换成字符串进行base64加密
	str_len = sizeof(arr);
	base64_data = base64_encode(arr, str_len);
	printf("base64:%s\n", base64_data);
    return 0;
}
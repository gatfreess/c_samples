#include <sys/time.h>

/**
 *  获取当前时间戳毫秒值
 *  Created by y.q on 2020-11-20.
 *     
*/

long get_timestamp() {
    struct timeval tv;
    gettimeofday(&tv, NULL);
//    printf("second:%ld\n", tv.tv_sec);  //秒
//    printf("millisecond:%ld\n", tv.tv_sec * 1000 + tv.tv_usec / 1000);  //毫秒
//    printf("microsecond:%ld\n", tv.tv_sec * 1000000 + tv.tv_usec);  //微秒
    return tv.tv_sec * 1000 + tv.tv_usec / 1000;
}

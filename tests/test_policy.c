#include "policy.h"
#include <assert.h>
#include <string.h>

int main(void) {
    Signal signal_case_1 = {80, 107, 21, 21, 12};
    assert(score_signal(signal_case_1) == 144);
    assert(strcmp(classify_signal(signal_case_1), "review") == 0);
    Signal signal_case_2 = {64, 96, 11, 25, 9};
    assert(score_signal(signal_case_2) == 109);
    assert(strcmp(classify_signal(signal_case_2), "review") == 0);
    Signal signal_case_3 = {79, 93, 10, 18, 10};
    assert(score_signal(signal_case_3) == 169);
    assert(strcmp(classify_signal(signal_case_3), "accept") == 0);
    return 0;
}

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <assert.h>
#include "unittests.h"
#include "naming_style.pb.h"

int main()
{
    main_message_t message = MAIN_MESSAGE_INIT_ZERO;

    message.lucky_number = 13;
    message.my_enum = MY_ENUM1_ENUM_THIRD;
    message.my_enum2 = MY_ENUM2_ENUM2_ENTRY;
    message.one_of_name.test_message2.has_test_value = true;
    message.one_of_name.test_message2.test_value = 5;
    message.which_one_of_name = 1;
    message.has_test_message3 = true;
    message.test_message3.has_v = true;
    message.fixed_values[0] = 1;

    assert(strcmp("ENTRY_FIRST", my_enum1_name(MY_ENUM1_ENTRY_FIRST)) == 0);

    (void)message.lucky_number;
    return 0;
}

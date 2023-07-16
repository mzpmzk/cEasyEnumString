# cEasyEnumString

cEasyEnumString is a library that automates the process of generating functions for converting enum values to strings
in C. It provides a convenient way to define enums and automatically generates associated string conversion functions.

## Usage

To use cEasyEnumString, follow these steps:

1. Include the `cEasyEnumString.h` header file in your project.

2. Define your enums using the `ENUM_DEF` macro provided by cEasyEnumString. For example, consider the `ErrorCode` enum:

```c
/* error_code.h file */
ENUM_DEF(ErrorCode,
         ERROR_OK,
         ERROR_CONNECTION_FAILED,
         ERROR_AUTHENTICATION_FAILED,
         ERROR_TIMEOUT,
         ERROR_INVALID_DATA,
         ERROR_INSUFFICIENT_MEMORY,
         ERROR_HARDWARE_FAILURE,
         ERROR_INVALID_CONFIGURATION,
         ERROR_UNSUPPORTED_FEATURE,
         ERROR_UNKNOWN);
```

3. Create a C file. You can choose any file name and put the following lines in the file:

```c
#define __C_EASY_EMUM_STRING_TO_STR_FUNC_DEFINITION_FILE__

#include "error_code.h"
```
This macro expands to define the enum and generate the associated string conversion functions.

4. Use the generated functions to convert enum values to strings. For example:

```c   
#include <stdio.h>
#include "error_code.h"

int main() {
    ErrorCode code = ERROR_OK;

    /* prints 'ERROR_OK' */
    printf("%s\n", ErrorCode_toStr(code));

    code = ERROR_HARDWARE_FAILURE;

    /* prints 'ERROR_HARDWARE_FAILURE' */
    printf("%s\n", ErrorCode_toStr(code));

    code = 86400;

    /* prints 'Invalid value of ErrorCode enum' as
     * the maximum enum value is limited to a much smaller value */
    printf("%s\n", ErrorCode_toStr(code));

    return 0;
}
```

The complete example is available in the `example` directory.

## Limitations

1. Enum defined using the `ENUM_DEF` macro has to start from 0. You cannot choose other initial values, and you cannot
use custom values for subsequent enum members. This limitation exists because the enum definition is converted into
a string array, and simple indexing is required.
2. The maximum number of enum members is limited to 32. However, you can expand this limit by adding subsequent `str_N`
macros in the `cEasyEnumString.h` file.
3. When you need to define a private enum (an enum visible only in a C file) using `ENUM_DEF`, you can simply add 
add `#define __C_EASY_EMUM_STRING_TO_STR_FUNC_DEFINITION_FILE__` at the top of the file, before including
`cEasyEnumString.h`, However, if this C file also includes headers with other enums (after
`__C_EASY_EMUM_STRING_TO_STR_FUNC_DEFINITION_FILE__` is defined), the build will fail due to multiple `*_toStr()`
function definitions.

## License

This library is released under the [MIT License](LICENSE).

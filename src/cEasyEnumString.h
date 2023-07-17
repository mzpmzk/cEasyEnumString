/*====================================================================================================================*\
 * MIT License
 *
 * Copyright (c) 2023 Pawel Kusinski
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
\*====================================================================================================================*/

#pragma once

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                       _____                _____                      _____ _        _                              *
 *                      |  ___|              |  ___|                    /  ___| |      (_)                             * 
 *                   ___| |__  __ _ ___ _   _| |__ _ __  _   _ _ __ ___ \ `--.| |_ _ __ _ _ __   __ _                  *
 *                  / __|  __|/ _` / __| | | |  __| '_ \| | | | '_ ` _ \ `--. \ __| '__| | '_ \ / _` |                 *
 *                 | (__| |__| (_| \__ \ |_| | |__| | | | |_| | | | | | /\__/ / |_| |  | | | | | (_| |                 *
 *                  \___\____/\__,_|___/\__, \____/_| |_|\__,_|_| |_| |_\____/ \__|_|  |_|_| |_|\__, |                 *
 *                                       __/ |                                                   __/ |                 *
 *                                      |___/                                                   |___/                  *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * 
 * cEasyEnumString automatically generates functions for converting enum values to strings. 
 * The main macro defined in the file is 'ENUM_DEF,' which is used to define an enum
 * and generate associated string conversion functions.
 */

/* Helper macros for parameter list stringification */
#define str_1(x1)\
        #x1
#define str_2(x1, x2)\
        #x1, #x2
#define str_3(x1, x2, x3)\
        #x1, #x2, #x3
#define str_4(x1, x2, x3, x4)\
        #x1, #x2, #x3, #x4
#define str_5(x1, x2, x3, x4, x5)\
        #x1, #x2, #x3, #x4, #x5
#define str_6(x1, x2, x3, x4, x5, x6)\
        #x1, #x2, #x3, #x4, #x5, #x6
#define str_7(x1, x2, x3, x4, x5, x6, x7)\
        #x1, #x2, #x3, #x4, #x5, #x6, #x7
#define str_8(x1, x2, x3, x4, x5, x6, x7, x8)\
        #x1, #x2, #x3, #x4, #x5, #x6, #x7, #x8
#define str_9(x1, x2, x3, x4, x5, x6, x7, x8, x9)\
        #x1, #x2, #x3, #x4, #x5, #x6, #x7, #x8, #x9
#define str_10(x1, x2, x3, x4, x5, x6, x7, x8, x9, x10)\
        #x1, #x2, #x3, #x4, #x5, #x6, #x7, #x8, #x9, #x10
#define str_11(x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11)\
        #x1, #x2, #x3, #x4, #x5, #x6, #x7, #x8, #x9, #x10, #x11
#define str_12(x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12)\
        #x1, #x2, #x3, #x4, #x5, #x6, #x7, #x8, #x9, #x10, #x11, #x12
#define str_13(x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13)\
        #x1, #x2, #x3, #x4, #x5, #x6, #x7, #x8, #x9, #x10, #x11, #x12, #x13
#define str_14(x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, x14)\
        #x1, #x2, #x3, #x4, #x5, #x6, #x7, #x8, #x9, #x10, #x11, #x12, #x13, #x14
#define str_15(x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, x14, x15)\
        #x1, #x2, #x3, #x4, #x5, #x6, #x7, #x8, #x9, #x10, #x11, #x12, #x13, #x14, #x15
#define str_16(x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, x14, x15, x16)\
        #x1, #x2, #x3, #x4, #x5, #x6, #x7, #x8, #x9, #x10, #x11, #x12, #x13, #x14, #x15, #x16
#define str_17(x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, x14, x15, x16, x17)\
        #x1, #x2, #x3, #x4, #x5, #x6, #x7, #x8, #x9, #x10, #x11, #x12, #x13, #x14, #x15, #x16, #x17
#define str_18(x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, x14, x15, x16, x17, x18)\
        #x1, #x2, #x3, #x4, #x5, #x6, #x7, #x8, #x9, #x10, #x11, #x12, #x13, #x14, #x15, #x16, #x17, #x18
#define str_19(x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, x14, x15, x16, x17, x18, x19)\
        #x1, #x2, #x3, #x4, #x5, #x6, #x7, #x8, #x9, #x10, #x11, #x12, #x13, #x14, #x15, #x16, #x17, #x18, #x19
#define str_20(x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, x14, x15, x16, x17, x18, x19, x20)\
        #x1, #x2, #x3, #x4, #x5, #x6, #x7, #x8, #x9, #x10, #x11, #x12, #x13, #x14, #x15, #x16, #x17, #x18, #x19, #x20
#define str_21(x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, x14, x15, x16, x17, x18, x19, x20, x21)\
        #x1, #x2, #x3, #x4, #x5, #x6, #x7, #x8, #x9, #x10, #x11, #x12, #x13, #x14, #x15, #x16, #x17, #x18, #x19, #x20,\
        #x21
#define str_22(x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, x14, x15, x16, x17, x18, x19, x20, x21, x22)\
        #x1, #x2, #x3, #x4, #x5, #x6, #x7, #x8, #x9, #x10, #x11, #x12, #x13, #x14, #x15, #x16, #x17, #x18, #x19, #x20,\
        #x21, #x22
#define str_23(x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, x14, x15, x16, x17, x18, x19, x20, x21, x22,\
               x23)\
        #x1, #x2, #x3, #x4, #x5, #x6, #x7, #x8, #x9, #x10, #x11, #x12, #x13, #x14, #x15, #x16, #x17, #x18, #x19, #x20,\
        #x21, #x22, #x23
#define str_24(x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, x14, x15, x16, x17, x18, x19, x20, x21, x22,\
               x23, x24)\
        #x1, #x2, #x3, #x4, #x5, #x6, #x7, #x8, #x9, #x10, #x11, #x12, #x13, #x14, #x15, #x16, #x17, #x18, #x19, #x20,\
        #x21, #x22, #x23, #x24
#define str_25(x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, x14, x15, x16, x17, x18, x19, x20, x21, x22,\
               x23, x24, x25)\
        #x1, #x2, #x3, #x4, #x5, #x6, #x7, #x8, #x9, #x10, #x11, #x12, #x13, #x14, #x15, #x16, #x17, #x18, #x19, #x20,\
        #x21, #x22, #x23, #x24, #x25
#define str_26(x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, x14, x15, x16, x17, x18, x19, x20, x21, x22,\
               x23, x24, x25, x26)\
        #x1, #x2, #x3, #x4, #x5, #x6, #x7, #x8, #x9, #x10, #x11, #x12, #x13, #x14, #x15, #x16, #x17, #x18, #x19, #x20,\
        #x21, #x22, #x23, #x24, #x25, #x26
#define str_27(x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, x14, x15, x16, x17, x18, x19, x20, x21, x22,\
               x23, x24, x25, x26, x27)\
        #x1, #x2, #x3, #x4, #x5, #x6, #x7, #x8, #x9, #x10, #x11, #x12, #x13, #x14, #x15, #x16, #x17, #x18, #x19, #x20,\
        #x21, #x22, #x23, #x24, #x25, #x26, #x27
#define str_28(x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, x14, x15, x16, x17, x18, x19, x20, x21, x22,\
               x23, x24, x25, x26, x27, x28)\
        #x1, #x2, #x3, #x4, #x5, #x6, #x7, #x8, #x9, #x10, #x11, #x12, #x13, #x14, #x15, #x16, #x17, #x18, #x19, #x20,\
        #x21, #x22, #x23, #x24, #x25, #x26, #x27, #x28
#define str_29(x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, x14, x15, x16, x17, x18, x19, x20, x21, x22,\
               x23, x24, x25, x26, x27, x28, x29)\
        #x1, #x2, #x3, #x4, #x5, #x6, #x7, #x8, #x9, #x10, #x11, #x12, #x13, #x14, #x15, #x16, #x17, #x18, #x19, #x20,\
        #x21, #x22, #x23, #x24, #x25, #x26, #x27, #x28, #x29
#define str_30(x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, x14, x15, x16, x17, x18, x19, x20, x21, x22,\
               x23, x24, x25, x26, x27, x28, x29, x30)\
        #x1, #x2, #x3, #x4, #x5, #x6, #x7, #x8, #x9, #x10, #x11, #x12, #x13, #x14, #x15, #x16, #x17, #x18, #x19, #x20,\
        #x21, #x22, #x23, #x24, #x25, #x26, #x27, #x28, #x29, #x30
#define str_31(x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, x14, x15, x16, x17, x18, x19, x20, x21, x22,\
               x23, x24, x25, x26, x27, x28, x29, x30, x31)\
        #x1, #x2, #x3, #x4, #x5, #x6, #x7, #x8, #x9, #x10, #x11, #x12, #x13, #x14, #x15, #x16, #x17, #x18, #x19, #x20,\
        #x21, #x22, #x23, #x24, #x25, #x26, #x27, #x28, #x29, #x30, #x31
#define str_32(x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, x14, x15, x16, x17, x18, x19, x20, x21, x22,\
               x23, x24, x25, x26, x27, x28, x29, x30, x31, x32)\
        #x1, #x2, #x3, #x4, #x5, #x6, #x7, #x8, #x9, #x10, #x11, #x12, #x13, #x14, #x15, #x16, #x17, #x18, #x19, #x20,\
        #x21, #x22, #x23, #x24, #x25, #x26, #x27, #x28, #x29, #x30, #x31, #x32

/* Helper macros for getting the number of __VA_ARGS__ arguments */
#define NARGS_SEQ(_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,\
                  _19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30,_31,_32,N,...) N
#define NARGS(...) NARGS_SEQ(__VA_ARGS__, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20,\
                             19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1)

/* Helper concatenation macros */
#define CONCAT(a, b) CONCAT2(a, b)
#define CONCAT2(a, b) a##b

#ifdef __C_EASY_EMUM_STRING_TO_STR_FUNC_DEFINITION_FILE__
/* Example macro expansions when __C_EASY_EMUM_STRING_TO_STR_FUNC_DEFINITION_FILE__ is defined:
 *
 * The follwoing definition:
 * ----------------------------------------------------
 * ENUM_DEF(ErrorCode,
 *          ERROR_OK,
 *          ERROR_CONNECTION_FAILED,
 *          ERROR_AUTHENTICATION_FAILED,
 *          ERROR_TIMEOUT,
 *          ERROR_INVALID_DATA,
 *          ERROR_INSUFFICIENT_MEMORY,
 *          ERROR_HARDWARE_FAILURE,
 *          ERROR_INVALID_CONFIGURATION,
 *          ERROR_UNSUPPORTED_FEATURE,
 *          ERROR_UNKNOWN);
 * ----------------------------------------------------
 * 
 * Expands to:
 * ----------------------------------------------------
 * typedef enum _ErrorCode {
 *     ERROR_OK,
 *     ERROR_CONNECTION_FAILED,
 *     ERROR_AUTHENTICATION_FAILED,
 *     ERROR_TIMEOUT,
 *     ERROR_INVALID_DATA,
 *     ERROR_INSUFFICIENT_MEMORY,
 *     ERROR_HARDWARE_FAILURE,
 *     ERROR_INVALID_CONFIGURATION,
 *     ERROR_UNSUPPORTED_FEATURE,
 *     ERROR_UNKNOWN
 * } ErrorCode;
 * 
 * static const char* ErrorCode_str[] = {
 *     "ERROR_OK",
 *     "ERROR_CONNECTION_FAILED",
 *     "ERROR_AUTHENTICATION_FAILED",
 *     "ERROR_TIMEOUT",
 *     "ERROR_INVALID_DATA",
 *     "ERROR_INSUFFICIENT_MEMORY",
 *     "ERROR_HARDWARE_FAILURE",
 *     "ERROR_INVALID_CONFIGURATION",
 *     "ERROR_UNSUPPORTED_FEATURE",
 *     "ERROR_UNKNOWN"
 * };
 * 
 * const char* ErrorCode_toStr(ErrorCode val) {
 *     if (val >= 10) {
 *         return "Invalid value of " "ErrorCode" " enum";
 *     }
 *     return ErrorCode_str[val];
 * }
 * ----------------------------------------------------
 */
#define ENUM_DEF(name, ...) \
    typedef enum _##name {\
        __VA_ARGS__\
    } name;\
    static const char* name##_str[] = { CONCAT(str_, NARGS(__VA_ARGS__))(__VA_ARGS__) };\
    const char* name ## _toStr(name val) {\
        if (val >= NARGS(__VA_ARGS__)) {\
            return "Invalid value of " #name " enum";\
        }\
        return name##_str[val];\
    }
#else
/* Example macro expansions when __C_EASY_EMUM_STRING_TO_STR_FUNC_DEFINITION_FILE__ is not defined:
 *
 * The follwoing definition:
 * ----------------------------------------------------
 * ENUM_DEF(ErrorCode,
 *          ERROR_OK,
 *          ERROR_CONNECTION_FAILED,
 *          ERROR_AUTHENTICATION_FAILED,
 *          ERROR_TIMEOUT,
 *          ERROR_INVALID_DATA,
 *          ERROR_INSUFFICIENT_MEMORY,
 *          ERROR_HARDWARE_FAILURE,
 *          ERROR_INVALID_CONFIGURATION,
 *          ERROR_UNSUPPORTED_FEATURE,
 *          ERROR_UNKNOWN);
 * ----------------------------------------------------
 * 
 * Expands to:
 * ----------------------------------------------------
 * typedef enum _ErrorCode {
 *     ERROR_OK,
 *     ERROR_CONNECTION_FAILED,
 *     ERROR_AUTHENTICATION_FAILED,
 *     ERROR_TIMEOUT,
 *     ERROR_INVALID_DATA,
 *     ERROR_INSUFFICIENT_MEMORY,
 *     ERROR_HARDWARE_FAILURE,
 *     ERROR_INVALID_CONFIGURATION,
 *     ERROR_UNSUPPORTED_FEATURE,
 *     ERROR_UNKNOWN
 * } ErrorCode;
 * 
 * const char* ErrorCode_toStr(ErrorCode val);
 * ----------------------------------------------------
 */

#define ENUM_DEF(name, ...)\
    typedef enum _ ## name {\
    __VA_ARGS__\
    } name;\
const char* name ## _toStr(name val);
#endif

#ifndef WHITENOISE8192_H_
#define WHITENOISE8192_H_
 
#include "Arduino.h"
#include <avr/pgmspace.h>
 
#define WHITENOISE8192_NUM_CELLS 8192
#define WHITENOISE8192_SAMPLERATE 8192
 
prog_char WHITENOISE8192_DATA [] PROGMEM = {22, -14, 108, 2, -80, -99, 62, -62,
-11, -127, -102, -80, -114, -66, -2, 68, -63, -101, 0, -13, 37, 55, 104, 61,
125, 101, -54, 60, -91, -102, -127, 17, 26, -23, -97, 80, 43, -77, 117, -71, 66,
-59, 30, -86, 111, 112, 65, -49, 85, -95, 38, 27, -39, 80, 94, 44, 20, 116, 36,
-74, -106, -57, 57, 96, -37, 39, -72, 21, -80, 121, -127, 88, -84, 54, 120, -6,
-94, 41, -41, -22, 39, 113, 84, 85, -31, -49, 79, -13, -43, -25, 7, -27, -2,
-91, 85, 102, 82, 37, -28, 115, -82, -79, -33, -38, 80, 47, 68, 32, 36, -29, 30,
47, -36, -90, -2, -37, 46, -35, -49, -64, 81, 35, -87, 121, 121, -110, -44, -33,
9, 83, 70, 48, 10, 43, 85, 40, 48, 88, 122, -83, -22, -38, 78, 113, -91, 110,
-1, 114, 72, 2, 49, -92, 80, -30, 124, -15, 125, -116, 87, -76, 115, 84, -112,
107, -101, 109, -66, 27, -99, 59, -56, 91, 89, -18, -113, -57, 27, -110, -107,
-87, -14, -31, -54, -10, 1, 90, 91, 28, -9, -122, 31, -32, -128, 98, 25, 110,
-41, -97, 19, 17, 42, 5, 68, 123, 66, 22, -77, -43, -125, 86, 92, -4, -15, 33,
-79, -38, -128, 113, -102, -64, 94, -12, 14, 118, 106, -105, -86, -76, 27, -77,
-16, 46, -100, 22, 118, -31, -2, 36, 74, 85, 63, -81, 93, 114, 37, -29, -92,
104, 115, -89, 127, 81, -74, 8, -94, -29, -120, -50, -124, 53, 10, -1, 18, 121,
87, -72, 26, -49, -62, 43, 65, -57, 21, -61, 10, -88, -111, 54, 42, -5, 5, 50,
-72, 59, 116, 80, -4, -110, -103, -64, -71, 79, 124, -61, -58, 1, -113, 16, -75,
-125, 114, -97, -53, -30, -127, 101, -83, 70, -77, -42, 51, -15, -17, -123, 44,
19, 53, 40, 22, -95, -10, -84, -12, -102, 9, 44, 124, 82, -74, -112, 36, 5, 65,
9, 63, 73, 103, -15, 33, 90, -53, 60, 104, -72, 80, -23, 84, -75, 98, -63, 82,
61, 100, -28, -96, 68, -103, -124, -57, -1, 59, 6, -44, 34, -114, -83, 50, 103,
-120, -106, -75, -11, 92, -123, 115, -36, 116, -63, 1, -16, -13, -73, 33, 127,
-7, -10, 26, -20, 97, -72, 19, 77, 21, 28, 12, -17, -25, 33, 118, -69, -33, -36,
-46, 34, 96, 111, -14, -74, -51, -80, 2, -42, -71, -28, 74, 8, 111, -13, 33, 81,
68, -71, -88, 60, 36, 17, 123, 103, 46, 0, -63, -128, -44, 66, -92, 63, -102,
76, -25, -53, 67, -16, 4, -52, -70, -77, 74, 71, -51, -78, -36, -69, 35, -65,
26, 22, 7, 85, 36, -39, 17, 64, -47, -115, -58, 124, 92, 29, -103, -78, 64, 85,
49, 30, 57, -66, 65, -90, -78, -124, 38, 90, 11, -85, 73, -23, -42, -95, -71,
79, 106, 38, -7, -107, -19, 1, 91, 119, 103, -47, 124, -40, -96, -103, 88, -53,
18, -60, -77, -14, 54, -70, -82, -8, -49, 111, -76, -52, 105, 117, -11, -50,
-26, 111, -37, 48, 42, -71, 5, 3, -81, -51, -35, -24, -98, 83, -59, -38, -29,
18, 102, -126, -34, -60, 98, 0, 124, -113, 101, 55, -6, 69, -106, -96, 39, 49,
35, -4, 7, 27, -78, 89, 44, -47, 68, -23, -126, -36, 92, -12, -74, 117, -28, 30,
118, 52, -31, -126, 9, -2, -115, 6, 121, 106, -112, -37, 92, -85, -44, 102, 112,
47, 43, -57, -61, -19, -81, 112, 72, 19, 113, -72, 44, -53, -21, 94, 44, 0, 44,
-2, -121, 77, 89, -92, 98, 117, 100, -24, 33, 47, 20, -93, -103, -29, 29, -21,
18, 102, -27, -25, -93, 79, -18, 29, 53, 50, 26, -21, 104, 25, 73, -69, -70,
-31, 9, 53, -81, 27, 63, -61, -40, 49, 123, -31, 34, 32, -33, -117, -55, -47,
-17, 106, -34, -97, 117, 14, -124, -7, -97, -61, 121, -124, -48, 118, 12, -70,
52, -75, -68, -15, -6, 53, 121, -33, 122, -21, 23, 19, 86, -30, 101, -125, -81,
-27, -106, 17, 29, -101, -80, -92, -91, -66, 118, -44, 36, -127, 66, 71, -100,
119, 60, -111, -50, -74, -41, 97, 13, 55, -49, 9, 11, 8, 41, 27, 110, 127, 87,
56, 29, -34, 26, -48, 99, -125, 113, -99, -100, -73, -72, -4, -116, -93, 58,
-60, 20, 89, 82, 54, -35, -13, -13, 65, -92, -123, 106, -115, -20, -68, -123,
-46, 69, -110, -19, -82, 59, 54, -2, 4, 61, -96, 84, -106, -37, 72, 53, -92,
108, -80, -126, -85, 97, 21, 39, -26, -121, 101, 18, -67, -103, -9, 37, 45, -71,
58, 56, 41, 70, 76, -110, 51, 114, 40, -96, -35, 81, -12, -28, -15, -112, -114,
100, -82, 105, 80, 55, -36, 0, -30, 47, -46, -38, -22, 93, -4, -73, 114, 79, 16,
-40, 5, -116, 50, 24, -17, 94, 70, 53, -76, 70, 126, 15, -69, -118, 117, 75,
-122, 64, -17, 6, -83, -109, -87, 67, 106, 29, -30, 19, -20, 38, -123, 31, 84,
78, -3, -60, -87, -117, -110, -28, 14, -13, 120, -109, 19, 9, 88, 29, 26, -127,
-115, -33, -9, 93, 59, 38, 57, 80, 4, -63, -86, -127, -30, 16, -33, -9, -21, 81,
-102, -111, -127, -5, 95, 34, -46, 82, -102, 75, -95, 17, 10, 52, -106, -48, 39,
-114, -28, 126, -34, -62, 70, -47, 20, -110, 34, 46, -75, -115, 0, 45, -112,
-75, -72, -126, -73, 4, 79, 18, 70, -110, 45, 2, 40, 45, 11, 43, 13, -85, -58,
-18, 100, 111, 18, 10, -54, 94, 124, -36, -54, 23, -67, 113, 93, 101, -80, -115,
69, 124, 32, -108, 106, -12, -20, 26, 48, 123, -121, 59, 50, -67, 28, -62, 109,
-41, -117, 19, -113, 126, -51, 35, -102, -88, -36, -60, -74, 113, -49, -112,
-22, -22, -48, 7, 77, -53, -64, -86, -114, -91, -8, 3, -119, -79, 72, 120, -14,
15, -115, 80, 95, -39, 97, 100, 109, 77, -32, -22, 77, 124, 58, -106, 110, -93,
-39, 97, -70, 55, 38, 112, 108, 1, 19, -26, -127, 97, -69, -109, -58, -98, 53,
80, -36, 90, 94, 79, -13, 119, -126, 69, 15, -54, -104, 43, 8, 69, 92, -20, 23,
32, 49, -116, 53, 102, 96, 75, -15, -71, -92, -28, 94, -15, -52, -92, 73, 2,
-56, 93, 39, 103, -121, -90, -11, -110, 37, 40, -6, -52, 7, 79, -64, 100, 49,
-35, 74, -106, -93, 104, 55, -5, -72, 28, -109, -95, -32, 86, 15, 58, -13, 68,
-33, 106, 47, -97, 127, -73, 77, -47, 75, 106, -69, 48, -14, -78, 67, -107, 47,
-95, -75, -67, -110, -67, -121, -101, 104, -81, 33, -36, 95, -56, 104, 67, 25,
-53, -34, 92, 104, -10, 84, 26, 45, -31, 42, -32, 2, 49, 108, -82, 105, -56,
-80, -56, 101, -49, 80, 86, -96, -27, -103, 86, 77, -90, 73, 85, 40, 62, -100,
-95, 74, -81, 79, 10, -47, 77, 55, 35, 121, 46, -40, -36, 112, 49, -10, -104,
-13, 22, 38, 69, 37, -98, -59, -88, -37, 82, 109, -97, 69, -102, 114, -76, 23,
-34, -59, 11, -21, 10, -20, 127, -33, 26, 30, 115, -62, 93, 112, 59, -13, -118,
-101, 104, 5, 75, 70, 65, 11, 115, -120, -40, 60, -61, -17, -67, 30, 61, -45,
48, 96, -62, -125, -125, 77, -63, -15, -38, 81, 78, -28, 117, -16, -79, -54, 99,
7, -74, -9, 5, 51, -49, -119, 114, -106, -58, 27, 110, 105, 35, -33, 9, -108,
63, 22, -52, 89, -112, -125, 66, -66, -25, 66, 55, -126, 36, -63, 21, -69, -128,
-37, -93, 16, -53, 115, -5, 58, -86, 87, -93, 45, 55, 102, 2, 73, 78, 115, -94,
-76, 121, -40, 27, 55, 101, 5, -3, 110, 12, 87, 65, -18, -112, -87, 73, -57, 54,
94, 125, -73, -127, 97, -48, 8, -21, -98, 31, 50, -112, 90, -46, -127, 110, -9,
106, -104, -123, -72, 118, -44, 21, 14, 15, 126, -117, 45, -93, -27, -1, 127, 0,
-111, -24, -32, 101, -41, -72, 121, -86, -47, -111, 89, -42, 11, 17, -69, -40,
1, 14, 113, -30, 111, -117, -124, 98, -93, 94, -119, 96, -5, 102, 95, -102, -8,
44, 85, 119, 41, 98, 111, -8, 19, -80, -35, 10, 100, -84, -12, -128, -109, 3,
-123, 44, 36, 67, -101, 59, -81, 126, -103, 83, 120, -128, 61, 44, 6, 23, 17,
-119, -100, 105, -79, -6, -36, 76, -70, 78, -45, -20, 10, 109, -18, 47, -100,
75, -55, -62, -121, 108, 50, -41, 48, -84, 0, 70, 126, 1, -71, -94, 88, 31, 33,
-33, 12, -58, 86, 18, 26, 124, -98, 34, -18, -96, -99, 41, -21, 73, -80, -34,
-109, -124, -102, -34, -39, 122, 56, 98, 71, 124, 14, -72, 15, -78, 19, 123,
-59, 28, -90, -90, 21, 38, -114, -119, -106, 126, 11, -34, -61, 78, 102, 36, 67,
99, 66, -114, 68, 62, -128, 32, -102, -43, 7, -4, 96, 17, 21, -21, 28, 20, -74,
-98, -72, 45, -70, 31, 78, 46, -99, -13, -38, -48, 32, -123, -75, -93, -12, 66,
-1, -51, -80, -102, -88, -60, -86, -97, -80, -72, -116, 84, -32, -58, 67, 97,
-55, 19, 78, -85, 83, -4, -2, 81, -54, -38, -53, 76, 93, -104, 67, -98, 38, -78,
-6, 98, -19, 53, -30, 43, -32, 24, 94, 91, 66, -19, -123, -10, 113, 1, 89, -56,
-60, 27, 16, 7, -21, -128, -70, -64, -5, 27, 29, 39, 17, -33, 100, -41, 98, 80,
114, 28, -95, 94, -60, 122, 15, 124, -15, 73, -93, 58, -58, -29, -50, 34, -52,
104, 122, 46, -123, -97, 36, -11, 4, 3, 57, -76, -3, 35, -38, -74, 38, 116, -31,
-49, -97, -84, -28, -110, 50, -94, -106, 104, 6, -66, -37, -84, -88, -50, -92,
88, 113, 36, 99, 48, -6, 96, -101, -43, -47, -120, 83, 68, 34, -46, 91, -101,
-76, 28, 93, -34, -35, 57, -118, -91, -82, 21, -79, 55, -93, -67, 106, 122, 22,
-37, -37, 36, 110, -67, 99, -102, 75, 112, -103, -1, -68, -93, 43, 22, -116,
116, 65, 96, 45, -28, 46, -117, -93, -75, -113, 121, -14, 24, 9, -109, -36,
-121, -72, 8, -94, 29, -60, -108, 76, -32, 34, 79, -123, 65, -104, 122, 119,
117, 75, -54, 102, 108, 4, -75, -36, 4, -55, 115, -71, -118, 96, -34, 100, -5,
-43, -120, 61, -64, 42, -70, 82, 84, -67, 35, -100, 112, -16, -107, 118, -5, 58,
-52, 121, 71, 124, 93, 84, -26, 122, -73, 11, -92, 60, 45, -54, 113, 48, 126,
-29, 2, -125, 19, 33, -121, 27, -128, -85, -44, -111, -37, -113, -2, -68, -8,
-84, 8, 86, -75, 28, 17, 28, 109, 108, -113, 49, -5, -40, 97, 78, -18, -89, -88,
34, -106, 109, 17, 10, -112, -100, 84, 0, 24, 9, 126, 122, 55, 0, -28, 102,
-115, 108, 29, 84, -21, -18, -46, -78, -1, 110, -125, 65, 125, -106, -64, -89,
-90, -15, 9, -34, -90, -16, -59, 29, -128, 1, -8, 48, -79, 58, 119, 21, 56,
-126, -39, 72, 56, -81, 51, -98, 36, 2, -10, -9, -120, -110, -105, -9, 3, 62,
35, -71, -102, 74, 39, 120, 21, 37, 88, -44, -66, -59, 120, -67, 8, 108, 26, 82,
-121, -18, 118, 38, -61, 28, -44, -80, 104, 114, 117, 117, -4, 22, -89, 83, -4,
-4, 31, 60, -78, 37, 40, 75, 74, 48, 56, -76, 24, 99, -35, 111, 111, -66, -20,
15, 82, 92, 114, -31, 40, -42, 56, 9, -64, -91, 67, 16, -34, 93, -94, 29, 7,
-30, -24, -113, 85, -1, 21, 34, 78, 55, 114, -49, -90, -34, -113, 104, 8, 89, 7,
-38, -74, 119, 115, 78, 58, -69, 0, -123, 18, -5, 55, -36, -89, -115, 74, -94,
97, -22, -79, -69, -106, -87, 83, 94, 54, -82, 47, 73, -52, -58, 59, 97, -58,
-31, -49, -4, -48, -125, -42, 112, -70, -4, 59, -98, 99, -39, 51, -26, 61, -56,
-123, 7, 11, 23, -96, 83, 88, 24, -68, -42, -30, 59, 97, 112, 34, -34, 57, -12,
9, -70, 124, 81, -12, 73, 114, -109, -53, 94, 97, 23, -121, 65, 6, 62, -92,
-111, -16, -121, -16, -86, -19, 56, 109, -10, -90, -19, 79, 99, -21, 123, -12,
-79, -97, -61, -11, 82, 48, -88, 26, -42, 42, -77, -73, 1, -8, 25, -70, 8, 92,
121, 10, 77, -72, 43, -31, -11, -27, 103, 113, 63, 28, -110, 111, 124, 1, 66,
-17, -87, -110, 88, 12, 124, -63, 99, -80, 92, 26, 68, 111, -103, 78, 37, -102,
118, -3, -120, -67, -63, -28, 6, 56, 12, -75, -86, 78, -6, -42, 45, 26, -40,
-66, -93, -49, -126, 86, -34, -6, 24, 6, -84, -111, 20, 96, 6, -91, -16, 110,
35, -128, 39, 90, 58, -108, 28, 66, -8, 28, -82, -57, 45, 72, 35, -60, -107, 84,
-56, -84, -115, 25, -59, 32, 24, -78, 33, 67, -86, -56, -65, 83, 52, -103, 34,
-2, 92, -56, 95, -115, 105, 42, -25, -10, 104, 15, 115, 88, -17, -42, 15, -29,
113, 102, 112, 81, 28, -60, 33, 21, 113, 26, -7, 89, -69, 63, 1, -104, 81, -61,
-57, -1, -43, -45, -117, -16, -113, -85, 15, -100, 7, 37, 108, -126, 83, -21,
77, -21, 82, 7, -80, 39, -80, -82, -128, 34, 106, 125, 109, -62, -122, -82, 10,
122, -121, -102, 76, 82, 107, -106, -20, 112, -124, -87, 12, 108, -46, 89, 24,
-22, 10, 79, 94, 38, 19, -12, -126, -43, 4, 15, -7, -39, 2, -57, 92, -126, 61,
95, 3, 125, -61, -68, -105, -48, 110, -103, 42, -31, 34, 90, 83, 3, 82, -10,
113, -11, -95, -112, 5, -70, 46, -97, 102, -90, 127, 103, -83, 20, 23, 109, 119,
-106, 122, 9, 47, 59, -24, -101, -42, -109, -69, -117, -15, -78, 88, -28, -72,
71, -50, 87, -15, -85, 31, 52, 64, -19, 27, -126, 2, -24, -20, 107, 92, -46, 8,
-97, 96, 1, 67, 103, -25, 76, 13, -36, -53, -22, 123, 74, 40, 63, -4, -101, 58,
54, 31, -121, 123, -55, 124, -83, 50, -110, 74, -91, 22, -6, -96, 31, 38, 36,
107, -71, 80, -121, -56, 111, 88, 82, -71, -49, -110, -56, -103, -23, 38, 103,
-78, 18, -49, 3, 7, 87, -60, 54, 105, 95, -91, -6, -54, 13, 101, -41, 92, 94,
-8, 8, 114, -81, 24, 41, -13, 100, 59, 55, -90, -85, -56, 98, -105, 99, -88, 10,
110, -31, 127, -26, 125, -124, 56, 14, -64, 17, 75, -114, 107, -92, -57, 97,
-89, -107, 64, 69, 95, -122, 99, -118, -96, -127, 1, 2, 80, 86, 70, 60, 58,
-105, -128, 54, -18, 45, 10, 28, 56, -12, 99, -117, -23, -1, -118, 9, -124, -31,
-29, 58, -87, 90, -115, -100, 50, 86, -9, -120, -127, 41, -68, 37, -6, -17, 50,
-56, -21, 37, 0, -34, 78, 31, -61, 13, -80, -70, -74, 121, -114, -80, 61, -16,
-45, -107, -70, -3, -101, -71, -29, -23, 87, 110, 59, -123, -97, 41, -9, 35,
-23, 24, 126, 46, -97, 37, 99, -31, 62, -66, 100, 26, 0, 77, -117, 36, -38, -62,
57, -47, 113, 44, -70, 77, -113, 100, 8, -44, -109, -76, 106, -24, -113, 24, 57,
85, -61, -48, 103, -9, 74, -69, 42, 44, -127, 60, -59, 15, -88, -24, 82, 126,
-41, 115, -79, 7, -97, 119, -21, 3, -80, -114, -1, -22, 70, 28, -35, -73, -107,
108, -77, 80, 19, 114, -22, -40, 41, 117, 8, 107, 9, -30, -114, 46, 22, 109, -2,
-31, -59, 43, -79, -6, 67, 75, 39, -77, -115, -114, -60, -46, 100, -71, 24, -63,
76, -34, -70, 64, 5, -94, -98, 19, 124, 93, 96, -92, 113, -7, -60, 70, -54, 46,
24, 74, -4, 121, -41, 81, -65, -69, 58, 86, 71, -33, -126, -13, 86, -71, -73,
36, 4, 121, 105, 85, -42, -3, 87, 126, 58, 127, -73, -5, 114, -19, -16, -35,
-68, 28, 90, -72, -31, -55, 54, -74, 79, 114, 5, -62, 31, -126, -125, -35, -22,
125, -31, -19, -29, -43, 122, -19, -45, 113, -47, -113, 50, 59, 42, 16, -116,
-48, 11, 118, -126, 81, -81, 63, -86, 59, -1, 61, 100, 127, 88, -62, -64, -126,
27, 73, -14, -120, -29, 123, -47, -16, -30, -81, 77, 78, -70, -37, 70, -75, -74,
10, -36, 23, -90, 46, 17, 24, -45, -90, 101, -34, 117, -10, 115, -14, -16, -88,
-20, 15, 31, 115, 40, 68, -109, 32, -76, 67, -25, -1, -101, 96, -59, -84, 96,
45, -44, 79, -86, 12, 7, -30, 94, -51, -26, 95, 89, -1, -36, -22, -53, 6, 18,
-16, 101, 0, 39, -98, -17, -37, 19, 80, -94, -126, 76, -121, 73, -68, 97, 90,
87, 109, 38, -80, -21, -41, 76, -23, -120, 4, -124, 9, -87, 10, -72, -118, 13,
-9, 115, -56, -82, 63, -55, 51, 67, -49, -71, -34, -123, -7, -79, 16, 36, 8,
-19, -15, 81, 125, -19, -115, -87, 43, -104, 47, -67, -32, -49, -93, 7, 24, -28,
-85, 94, 46, 27, 122, 49, -13, -90, -93, 70, -61, -92, -4, 51, -75, 115, 119,
119, 79, -50, 111, -30, 6, 53, 97, 17, 106, 86, -54, -80, -77, -3, 17, -102, 31,
102, -59, 75, -120, 9, 123, -90, -72, -105, -126, -44, -41, -70, -127, -78, 114,
-117, 39, 24, -53, -84, 34, 10, -88, -11, -42, -122, 17, 28, 29, 96, 6, -7, 125,
-85, 25, -92, 63, -10, -74, -95, -115, 68, 19, 64, 3, 54, -78, -95, 59, -88, 81,
-120, -31, 74, 94, -118, 0, 113, 80, -53, 64, -20, 92, 0, 40, -58, -119, -113,
102, 120, 122, 97, -68, -49, 39, 100, -110, 26, -27, -94, -82, -9, -18, 22, 55,
50, 59, 10, -109, -127, -64, 51, 39, -78, -105, 45, -2, -74, -16, -2, -101, 20,
-68, -107, 6, 105, 43, -44, 99, -38, 116, 9, 38, -63, 13, 109, 71, 23, -85,
-107, -3, 40, 60, -89, -110, -34, 43, -105, -76, -62, -105, 83, 101, -22, 10,
110, 124, 54, 93, -101, -114, -102, -81, 122, 54, -40, 77, 11, -31, 18, 35, 14,
25, 81, 87, 15, -7, -79, -15, 2, -97, -4, 125, 103, 31, -92, 118, 9, 39, 34,
-23, 60, 90, 63, 69, 49, 68, -20, 91, -36, 28, 7, 104, -127, -112, 2, 48, -92,
-22, 98, 72, 86, 2, 117, 102, 27, -53, 20, -1, 96, -33, -31, -62, 0, 23, 83, 2,
11, 51, 38, 23, 0, -24, 93, 121, 4, 87, -104, -127, -2, -97, -85, -115, -44,
-43, -100, 120, 84, -99, 1, 18, 1, -29, -23, 119, -18, 73, 56, -77, -77, -81,
-18, 47, 117, -90, -29, 51, 32, 114, -1, -51, 88, -25, 2, 44, -80, 97, 127, 80,
-89, 127, -20, 39, 81, 94, 124, -74, -85, -28, -34, 113, 85, 67, 79, -32, -8,
-121, -36, 50, 123, 8, 54, -91, 7, -43, 32, -110, 51, -120, 59, -106, 70, 122,
71, 114, -95, -71, -6, 9, 38, 68, 124, -111, 26, 62, -47, 126, -1, 125, -128,
115, 29, -44, 40, 105, 78, -95, 49, -122, -110, 43, -19, 57, -14, 35, 30, 114,
-13, -50, -96, 65, -21, 84, -18, -4, 12, -100, -89, -123, -79, -44, 12, 90, -66,
-95, -13, -125, -110, 28, -50, -39, 46, -114, -33, 65, 28, -9, 38, -61, 24, 55,
55, 92, 63, 101, -56, -101, -83, -45, 87, 58, 63, 122, 53, -109, -128, -97, -48,
87, -20, -2, -62, -87, -117, 49, 89, 58, 127, 1, 2, 7, 76, 90, 54, 2, 96, -96,
84, -4, 47, -23, -118, -126, 36, 58, 47, 6, -46, -92, 86, 103, 72, 54, -34, -85,
47, 124, -8, -53, 117, -55, 102, -24, 43, -127, 126, 62, 121, -127, 123, -106,
126, 10, 57, -55, -124, 68, 16, -73, 91, 78, 122, 56, 25, -74, -80, -88, 19,
-74, -83, 96, -71, -99, -37, 36, 105, -5, 64, -2, -116, 19, -90, 78, 89, 93, 37,
-69, -8, -49, -46, -72, -71, 117, -118, 114, 12, -42, 63, 23, -114, -73, 25,
-32, -70, 75, -48, 46, -39, -122, -8, -108, 59, 63, -21, 44, -74, -96, 116,
-109, 126, 85, -62, -25, 27, -103, -113, -90, -39, -126, -46, 3, -57, -112, -21,
-48, 45, 59, 8, -29, 60, 12, -106, 124, 51, 50, -100, 103, 37, -42, 11, -110,
113, 39, -121, 44, -105, 99, -111, 100, -117, 92, 110, 123, 115, -45, 19, 96,
-127, -82, 113, 72, 40, -38, -116, -126, -122, -79, 11, -104, 40, 55, -26, -9,
-75, -120, 101, 73, -21, 60, 124, -26, -36, -83, -14, -4, -7, -73, -68, 5, 107,
-80, 101, -57, -42, -11, -120, 62, 65, -1, 91, -86, -102, 42, -10, 85, 102, 120,
103, 100, -68, 31, 74, -109, -27, -125, -104, -86, 78, -74, -64, 78, -27, -116,
-99, 36, 117, 75, -50, -96, -63, 1, 106, 46, 80, -33, -72, 61, -34, 65, 53, 95,
-101, -126, -92, 88, -3, 73, -114, 26, 63, -121, 61, -84, 3, -13, 80, -34, -10,
-97, 127, 65, -81, -90, -31, -10, 99, 30, -13, 125, 52, -38, -80, -61, -35, 124,
-102, 51, -49, 67, 116, -117, -51, 87, -4, -56, 73, 114, 114, -43, -113, -66,
51, -18, -14, -90, -47, 85, 40, -7, -127, -95, -43, 11, -90, -34, 57, 101, -29,
-51, 1, 117, 21, 61, -8, -70, 121, -24, 87, -89, -12, 121, 50, -28, -6, -6, -95,
-6, 38, 49, -99, 127, 120, 55, -55, 46, 39, -57, 33, -58, -4, -7, -86, 86, -31,
94, 25, 16, -126, 90, 80, 106, -33, 109, 82, -44, 109, -65, -69, 2, -72, -54,
-60, -119, -121, 111, 69, -69, -95, -21, -106, 37, 2, -18, -29, 30, 32, 127, 75,
32, -53, -58, 79, -36, -78, 110, 5, -111, 82, -5, 28, -62, 64, -52, 22, -96,
-30, 52, 22, 104, 126, -9, -72, 34, -118, 62, -90, 115, 63, -101, -26, 36, -32,
90, -62, -110, 100, 95, -8, -120, -113, -90, 3, -102, -27, -10, 110, -122, 18,
106, -69, 3, -64, -94, 118, 25, -99, -107, -24, -60, 71, -10, -93, -128, -121,
-76, 53, -42, -114, 20, -61, 77, 88, 81, -61, -81, 21, -27, 43, 99, -38, 111,
-33, 31, -109, 119, -110, -50, -96, -81, 95, -36, 63, 85, 16, 56, -74, 94, -43,
115, -87, -52, 109, -52, -49, -117, 82, -81, -16, -60, 39, 123, 125, 64, 29,
-107, -90, 119, -76, 101, 24, 67, 116, -82, -96, 3, -119, -57, -60, -53, -116,
-3, 87, 110, -25, 23, 93, 0, 106, -80, -19, -89, -87, -8, -94, 108, 115, -28,
-94, -20, -52, 5, 113, -101, -115, -47, 110, -121, -37, 37, -60, 70, -105, -28,
63, 91, -91, 108, -90, 119, 96, 34, 23, 11, 107, 42, -122, 42, 17, 124, 51, 93,
-88, -3, -113, 26, 97, -117, 28, -108, 7, -109, -128, 101, 35, -108, 102, 85,
-113, 20, 57, -81, 39, -27, -68, 23, 66, 4, -19, -35, 79, 21, -2, 82, 95, 1, 67,
57, 29, 88, 57, -84, 11, 81, -44, -26, 101, -128, -110, 52, 32, -7, 39, 70, -23,
-53, 101, 38, -97, -117, 106, -89, -92, 67, -77, -64, 77, -124, -75, 77, 94, 46,
-51, 57, 34, -15, 119, -71, 70, 63, -47, -84, 69, -10, 82, 115, -67, -73, -44,
-3, 48, 25, -88, -81, -105, 8, 55, -99, -5, -27, 100, 116, -103, -37, 114, 102,
-102, 51, 110, -64, -109, -101, 107, 37, 65, -8, 34, 91, 84, 21, 126, 67, -54,
63, 118, -59, -23, 59, -124, -84, 65, -55, -21, 122, 118, 105, -1, 83, 55, 12,
-100, 77, 3, 64, 104, -22, -18, 84, 114, -28, 108, 46, 50, -11, 28, 44, -76, 47,
-70, -115, -48, -19, -38, 127, 35, -69, 127, 103, -79, 62, 37, -91, 1, 99, -99,
126, -119, -14, -93, 39, -61, -111, -101, 17, -15, 104, 111, 55, 64, 35, 47,
119, -88, 113, -81, -126, 113, -76, 27, 58, -56, -2, -29, 97, 64, -48, -74, 118,
-29, 36, 98, 103, 64, 114, 70, -95, -87, 87, 4, 48, -104, -66, 77, 81, -127, 41,
50, 19, 67, -62, -34, -44, -11, 101, -66, -18, -40, -22, 65, -97, -44, 76, -87,
52, -52, 16, -86, -78, 77, 37, 87, -29, -54, -77, 34, 35, 95, 9, 111, 124, 18,
-84, -47, -31, 7, -81, -6, -80, 117, 1, 35, 104, -17, -125, -118, -97, -75, 35,
-95, -95, -34, -45, -96, -58, 86, -84, 92, -119, -48, -17, -28, 91, 80, 13, -51,
-104, -49, 26, 43, -72, -117, 65, -42, 36, 99, 14, 25, -54, -97, -12, -31, -52,
113, -43, 84, -56, -82, 73, 27, -39, -60, 113, -115, 68, -106, 41, -32, -28,
118, -21, -50, 24, 60, -12, 77, -80, 19, -6, -16, 79, 110, 44, 36, 44, 122, -67,
-20, -18, 88, 101, -121, -80, 22, 49, -100, -114, 37, -118, 105, 99, 2, -31, 42,
21, -81, 105, -104, 7, -26, -49, -117, 111, -40, -17, -28, 104, -78, 102, -97,
104, 62, 99, -12, -109, 38, 88, 44, -98, 101, 98, 11, -38, -95, 125, 124, -42,
-8, 29, -35, -101, -45, -126, -124, 104, -67, 83, -76, -60, -123, 37, 98, 59,
-87, -36, 59, -106, -87, -116, 74, 66, 36, 29, 53, 39, 126, 27, -21, -66, -8,
80, 57, -48, 26, 93, 39, 66, -87, -31, -11, -85, -111, -91, 121, 37, 65, 81, 62,
124, -70, -16, 127, -55, 55, 36, -116, -108, -31, -58, 54, -65, -106, 31, 34,
47, 30, -117, -68, -115, -23, 9, 122, 118, -74, 84, 3, -91, 51, -22, 17, -58,
-87, -25, 119, 44, -29, 111, 85, -43, -13, -57, -51, 58, 0, 114, 101, 87, -72,
-127, -20, -90, 7, 54, -17, -114, -23, -25, -27, 99, 69, 102, 68, 43, 66, -40,
-41, -105, 19, 93, -126, 50, 16, 68, 14, -9, -66, 104, 72, -52, -84, 24, 104,
17, -21, 47, -125, -39, 36, 57, 81, 33, 33, -78, 102, 47, 84, -76, 51, 70, -111,
18, 28, -50, -100, 26, 58, 28, -39, -37, 97, 96, -104, -36, 94, 120, 78, 90,
-48, -69, 76, 59, 59, 44, -90, 25, 30, 48, 99, 95, 14, 58, -92, 56, 38, -44, 48,
13, -13, -85, 0, 9, 6, -97, 87, -104, -92, -44, 126, 56, 73, -18, 89, 41, 2, 78,
-44, 105, 40, 52, 75, -14, -42, -119, 103, 69, 110, 47, 48, 127, 45, -22, 27,
-91, -13, 60, -64, -69, -71, 53, -90, -32, 15, 123, 27, -9, 31, 114, -23, -5, 8,
-60, 103, -94, -82, -16, 86, 4, -28, -74, -20, 73, -53, 126, 82, 111, -41, 2,
-71, 41, 70, 40, 15, 44, -128, 71, -117, 98, 52, -85, 12, -115, -121, 50, 7, 12,
48, 1, -114, -11, 95, 34, 107, 66, -102, -43, -104, 107, 75, -38, -93, 23, 21,
-43, -53, -4, 26, 83, 4, -51, 98, 97, 42, 73, 38, -90, -126, 48, 111, -8, -51,
63, -110, 28, 42, 122, -16, 20, -20, 113, 68, 11, -77, 90, 41, 58, -127, -38,
101, -70, 15, 10, -100, -54, 46, -31, -2, 90, -88, 51, 29, 15, -14, 119, 87, 59,
-118, 56, 75, 22, -22, -22, -47, 97, 77, -9, -86, -91, 90, -96, -89, 109, -28,
-23, 120, -94, 121, -17, 7, 12, -118, 70, 43, 96, -82, -100, -18, -30, -49, -45,
-5, -55, -126, 50, 65, -39, 69, -102, -56, 20, 61, 57, -16, -91, 64, 81, -36,
-103, 47, -113, -117, -45, 38, 27, -68, -50, -8, 27, -12, -119, 63, -101, 2, 5,
-31, 117, 18, -7, -51, -58, 103, 33, 54, -2, -43, 8, -14, -7, 89, -108, 88, -34,
-120, 81, -70, 57, 120, -106, -98, -22, 94, -94, 1, 36, 114, -25, -63, 26, 98,
-43, -115, -9, -119, -11, 13, -124, -65, -55, 39, -31, -32, -112, -118, -3, -92,
84, 98, 48, -27, -118, -21, 1, 114, 47, 15, 56, -16, -95, -6, 3, -84, -35, 91,
-10, -48, 62, -31, 38, -49, -71, -85, -123, -127, 37, -26, -22, -57, -32, 112,
14, 75, -59, 6, 125, -65, 58, 101, -10, -114, -43, -82, -9, -127, 4, -45, -15,
96, -61, 88, -66, 11, 95, 48, -9, -117, 40, 58, 77, 113, -83, 70, -58, 65, 14,
31, 112, -22, 113, 73, -117, 69, -17, 10, -58, -124, -120, 66, 61, 53, -81, 67,
-37, -27, 65, 5, 122, 5, -96, -66, -22, -31, -54, 31, -19, 99, -59, -76, 83,
-73, 127, 13, -11, -100, 122, -5, -69, -89, 34, 33, 32, 123, 28, -102, -35, -69,
95, 84, 16, 104, 29, -53, -124, -87, 37, 1, 65, 106, -8, -98, -46, 55, -14, 86,
-95, -23, -42, -125, 25, 26, 59, 118, -102, 38, -17, -35, 17, 49, 53, -17, -113,
-121, 54, 107, -36, -112, 103, 13, 36, 18, 115, 72, 98, -14, -23, 78, 91, -45,
26, -39, 51, -125, -59, -41, 106, 62, 5, 127, -123, 12, -83, -71, 46, 95, -94,
-127, -75, 109, -30, -27, -108, 78, 51, 83, -46, 73, -23, -60, 17, 0, -88, 53,
-2, -99, -74, 106, -50, 29, 13, 3, 60, -40, 20, 21, 21, -114, -76, 65, 54, -96,
-66, 58, 63, 96, -1, 65, 45, -120, 107, -38, 3, -46, 101, 83, -34, 111, 38, -19,
14, 32, -35, -96, -108, 39, 4, -19, 65, 31, 76, -30, 53, -69, 67, -9, 71, -93,
103, 64, -101, -100, -3, -116, 68, -78, 28, -104, -86, 110, -83, -107, -6, -68,
23, -107, -127, 64, 27, -48, 59, -53, -73, -59, 111, 22, 99, 74, -73, -90, -72,
94, -37, 57, -29, 33, 68, -33, -86, 118, 63, 75, -30, 55, -74, -55, 89, -30,
-70, -116, -78, -98, 108, -75, 24, 108, 88, 31, 47, -82, -35, -1, 79, -114, -8,
95, -31, -104, 123, 21, 61, -51, 61, 49, 12, 57, -76, -110, 68, -100, -41, -3,
-104, -121, -103, 99, -112, 31, 60, 2, -33, 43, 62, 6, -56, -5, 64, 116, -41,
-110, 36, -18, -34, 123, -37, 84, -103, -49, 12, -9, 85, 93, 75, -56, -79, 90,
-128, -107, -114, 35, -2, -32, 1, 84, -101, 113, 52, -54, -85, -128, -5, 20,
103, 62, -102, 92, -3, -60, -42, 102, -61, -59, -6, 19, 101, -93, 13, -76, -36,
9, -89, 94, 34, 35, -60, 70, -85, 50, 37, 14, 69, -102, 95, -17, 60, -124, 90,
-85, -38, -40, -25, -9, -86, 122, 31, 113, -90, -42, -62, 117, -107, 43, -84,
23, -89, -4, -1, 76, 40, -89, 69, -75, 127, 111, 101, 29, 53, -35, 46, -67, 100,
50, 19, -22, 102, 19, 121, 18, 103, 127, 8, -6, 81, 85, -54, 47, 120, -32, 3, 6,
24, -103, 35, -123, 77, -117, -128, 124, 46, -68, 75, -2, -94, 66, -13, -35,
-93, 75, -81, 111, -93, 112, 77, 28, 52, 93, 21, -56, 28, -3, 92, 64, 68, -119,
40, -120, -33, 113, 56, 122, -33, 19, 121, -89, -96, -24, -74, 82, -13, -61,
-20, 24, -101, -125, 27, 122, -66, -45, 3, 0, -80, -89, 100, 89, 86, -76, -38,
-128, -54, 66, 118, 33, 83, 32, -126, 30, -100, 19, -24, -120, 10, -73, -53,
-10, 63, -100, 103, 19, -48, -31, -10, 11, -95, -99, 72, 119, 4, 74, -43, 33,
-82, -74, -28, -108, 71, 12, -118, 43, -80, 126, 60, 18, -115, 26, -56, -16, 75,
100, -45, 84, 110, 108, -78, -48, 18, 101, -13, 6, -100, -87, -114, 113, -29,
-114, 60, 70, -103, -83, -50, 84, 86, 62, 92, -95, 107, 107, 24, -81, 29, -111,
35, 26, 50, -120, 24, -93, 11, 100, -12, -20, -11, 94, -4, -87, 66, -24, 124,
41, 64, 88, 62, -14, 4, -67, -110, -51, -90, -76, 94, 110, -62, 78, -24, -43,
116, 89, -128, 96, 69, 91, -96, -65, -73, -111, -62, -107, -109, 110, 41, 82,
42, 83, 59, 69, -98, 45, 55, -59, -40, -85, -43, 30, 54, -57, 44, 90, 12, 86,
-61, 97, -84, 102, 61, 2, 50, 58, 66, 49, -83, -122, 20, 36, 21, -71, 59, -99,
58, 65, 19, 32, -91, 4, 72, -101, 50, 39, 125, -67, -98, 114, -127, 74, -102,
59, -27, 6, -12, 6, 30, 58, 44, 95, -128, 116, -51, 27, 26, -65, 36, -28, -104,
-61, -32, -45, 99, -78, 46, -56, 40, -53, 97, -125, -115, 64, 53, 20, 120, 10,
90, 67, 48, -26, -115, -35, -33, -100, -40, 68, -24, -56, 95, 92, -67, -59, 84,
88, 55, 93, -65, 107, -58, 116, 87, -124, -116, -112, 75, 85, 79, -37, -80, -44,
98, -87, -126, 73, 82, 126, 37, -49, -34, -38, 59, 10, 17, -86, 63, 47, 61, 22,
29, 83, -108, -31, 45, -18, 28, 53, -121, -34, -23, 86, 114, -48, -124, -60, 53,
-94, -119, 108, 37, 36, 11, -9, 61, -26, -48, 124, 115, 89, -81, -70, -44, -83,
-35, -87, -37, -105, -45, -69, -128, 60, -109, -14, -33, -117, -1, -4, 68, -48,
17, 67, -107, 45, -63, -36, 57, 47, -110, 62, -51, 69, -99, 63, 88, -83, -70,
-86, -113, -72, -84, -106, 31, -14, 33, 94, -125, 42, 73, -22, -86, 109, 101,
-64, -50, -34, 66, 33, -33, 31, -97, 105, 20, -120, -123, 66, -47, -15, -87, 49,
18, -98, 1, 94, -82, 101, -117, -64, -118, 85, -128, -58, -19, -88, 83, 6, 59,
22, 26, -95, -112, -39, -33, -59, 87, 5, 49, -91, -8, -72, -47, -89, -107, -118,
-28, 15, 82, -11, 102, 96, -1, -82, -81, 81, 47, -89, 30, -126, -56, 92, 80, 56,
125, -9, -114, 107, 7, -100, -63, -44, -59, 21, -35, 79, -94, 54, 76, -119, 24,
31, 85, -97, 41, 92, -108, 78, -117, -69, -72, 112, 46, -101, -8, 17, 108, -22,
-105, -75, -34, -37, -50, 99, 30, 126, -40, -120, -127, 32, 19, -36, -93, -84,
116, 92, -74, -22, 44, -17, 31, 78, -121, 54, 11, -45, 115, 10, -74, 60, -42,
74, 12, 88, 73, -42, 65, -115, -17, -118, 44, 38, 2, -108, -9, -72, 71, -113,
33, 86, -122, 59, 84, -63, 120, -57, -85, 80, -30, -78, -1, 10, 37, -79, 82, 30,
-36, -7, 69, -74, 44, -112, 69, -43, -56, -100, -78, -103, -63, -68, 105, -98,
67, -83, -36, -30, 109, 104, 55, -3, 59, -62, -22, 94, 114, -89, 110, 74, 106,
68, 119, -2, 75, -56, -28, -103, -39, 125, 53, -80, -27, -59, 118, -80, -41,
100, 53, -19, -95, 45, -96, -120, 46, -82, 114, -82, 79, -41, -109, -98, 76,
-22, 73, -106, 103, -128, -52, 35, 67, 39, 45, -24, 43, -66, -48, 5, -126, -70,
-25, -115, 15, -44, 99, -1, 61, 62, 123, 19, 86, -84, -66, -38, -87, 98, 117,
-20, 91, -53, -59, -92, 116, 63, 62, -122, 24, 6, 61, -93, -56, 125, -94, 88,
-42, -71, 94, 78, 20, 17, -60, 56, 108, 71, 33, -119, -76, -68, 126, -76, -20,
-60, 10, -15, -127, 42, 5, -41, -46, 89, -94, -69, 82, -98, -104, -88, 106, -43,
-66, 61, -125, -126, 0, -50, -33, 73, -62, 10, -99, 66, 85, -108, 105, -88, -79,
13, 25, 73, 84, -112, 14, 14, -29, -34, 17, 23, -90, 49, -52, 68, 60, -42, 48,
83, -3, -119, -122, -60, -69, 32, -84, 13, -52, -74, -60, 57, -2, 103, -126,
-91, -57, -100, 49, 107, 22, 127, -54, 18, -50, -62, -30, 10, 109, 112, 1, -77,
-49, -18, 65, -115, 87, 14, 85, 81, -48, 1, 126, 104, -7, -24, -77, -122, -54,
84, 2, 123, 99, -91, -12, -68, 115, 14, -90, 11, -125, 34, 29, -21, -121, 86,
35, 2, -31, 53, 35, 38, -97, 94, -48, -28, -95, 112, 6, 114, 29, -112, -110,
-65, 52, 27, 105, -93, -54, -53, 74, -85, -10, -108, 59, 74, -17, -118, -63, 63,
-96, -46, 56, 26, 89, 9, 113, 85, 117, 58, -18, 127, 46, 9, -99, -88, -18, -31,
37, -100, 77, 39, 30, 51, -13, -55, -37, -98, 99, 113, 118, -55, 26, 9, 9, 39,
89, -69, -19, -23, -47, -1, 75, 64, 30, -103, 91, -85, 50, -56, -50, -90, 34,
-46, 125, 117, -69, -14, 102, 113, -73, 2, 34, -21, -104, 96, 112, -10, -77, 92,
63, -35, -16, -9, 20, -113, -66, 98, -81, -50, 79, -37, 119, 2, -121, -59, 99,
28, -100, 30, -77, -4, -91, -90, -70, -95, -5, -35, 26, -118, -12, 112, 3, 108,
-23, -5, -57, -128, 31, 125, 82, -30, 10, 35, -95, -14, 102, -39, -50, 31, 114,
-108, 14, 11, 30, 1, -48, 33, -2, 38, -118, 20, -73, -85, -128, 82, 12, -82,
-74, 105, -83, -7, 127, 36, -12, 52, -37, 83, 86, -64, 92, 92, 13, 36, 54, -9,
68, -100, 101, -40, -13, 64, -57, 13, 104, 106, -102, -25, 18, -55, -2, -96,
-79, 80, -27, -80, -8, -65, -55, 25, -78, -14, -102, -56, 50, 123, 113, -73,
-24, 32, -51, -72, -31, 89, -84, 82, 101, -99, -20, -18, 29, -17, -89, 74, 103,
-52, -123, -18, 107, -66, 80, 56, 113, -52, -69, -85, -86, 103, -101, 51, 109,
23, -105, 46, 13, -42, -51, -33, 106, 44, 20, -123, 32, 122, 24, 33, 88, -104,
-68, 82, 39, 31, -117, -41, -107, -116, -121, -113, 23, 28, -55, -85, 89, 22,
40, -42, 72, 16, 23, -16, -81, -57, -32, 104, 104, 47, 101, -117, 109, -42, 124,
48, -46, -115, -72, -58, 29, 50, 113, -67, -113, -114, -105, -117, 17, -66, 88,
-77, -24, -113, -98, -1, -78, 78, 40, -2, 58, -22, 29, 71, 117, 63, -96, 72,
-56, -111, -70, 17, -86, -16, 10, 34, -113, -50, -97, 31, 27, -43, 89, -59, 62,
-57, 4, 98, -104, 17, 106, 25, -76, -50, 108, -6, -82, 10, 82, 40, 27, -122,
-47, -5, 21, -100, 14, 125, 1, 78, 102, -55, 117, 51, 29, -10, -12, 29, -85,
-112, 102, 65, -97, -117, 74, -88, -86, -75, 70, 115, -64, -42, 117, -105, 15,
-23, -115, 4, -25, 29, -93, -125, -96, 94, 99, -64, 86, 37, 3, 110, 63, -16, 45,
76, 74, -98, -89, 124, -28, 100, 32, -27, 2, 34, 114, 58, 66, -31, -40, -118,
-10, 13, 19, 62, -74, -50, -89, -70, 104, 0, -122, 97, 37, -93, -48, -94, -39,
-98, -42, -39, -15, -53, -113, -74, 91, -103, -54, -103, 30, -113, 118, 43, -18,
58, 66, 62, -4, 3, -108, 58, -21, 54, 95, 30, 26, 57, 120, 41, -63, -99, 24,
-112, -51, -57, -53, 96, 93, 69, 11, 31, -70, 68, 7, 10, -16, 14, -30, -123,
-93, -12, 81, -17, 83, 25, -6, 110, 99, -7, 1, -17, -10, 33, -33, -76, -128,
-78, -98, -41, 17, 115, -123, 91, 33, -94, 39, -81, -118, -115, -67, 47, -53,
-56, -116, -7, -97, -124, -123, 49, -29, -104, 97, 109, 117, 30, 60, -73, 64,
96, 83, -93, 127, -110, -100, -91, 111, 65, -5, 32, 70, -1, -83, -25, -31, 118,
6, 18, -4, 113, -77, 115, 82, 65, -14, 127, 40, 53, 67, -107, -45, 28, 127, 30,
-98, 93, -53, -73, -20, -106, 15, 23, 88, -18, 3, -33, 61, 70, 15, 109, 66, -86,
-18, 71, -30, 67, 93, -95, -78, -107, -118, 62, 120, 50, 20, -73, 69, 61, -63,
21, -123, 46, 28, 65, -115, 66, 66, 44, -66, 67, 109, 62, -127, 62, -27, 120,
-106, 64, -54, 61, -85, -94, 41, 20, -35, 29, 9, -24, -16, 103, -74, 67, -83,
-49, 71, -103, 60, 98, 121, -92, 7, -32, 12, 95, -15, 86, -32, -88, -27, -107,
-5, 47, -126, -65, 46, 21, 72, 110, -41, -49, 63, -52, 0, 45, 44, 26, -86, 90,
-1, -47, 107, -82, 23, -30, -82, -44, -37, 111, 93, -108, 7, -109, -110, 106,
-55, -38, 113, -68, -103, -81, -120, -121, -67, -85, -85, -102, 27, 36, 88, 53,
-73, 61, 3, 99, -42, 36, 25, 95, -5, -110, -47, 84, -118, -125, -111, 43, 59,
37, -51, 53, 42, 71, 35, 9, -114, -86, -59, 90, 18, 90, 41, 62, -121, 44, 76,
86, 119, 102, -117, 120, 12, 35, 124, 37, 5, -67, -30, 125, -64, -38, 116, -52,
10, 35, -63, 94, 4, 126, 106, -86, -86, -125, 92, 79, -6, -128, 81, -111, -90,
-120, -121, -126, 89, -73, -29, -37, -120, 75, 124, 70, 96, -74, -113, -63, 32,
79, -53, -63, 112, -54, 11, -121, 88, 116, 17, 60, 52, 108, 1, 19, 103, -58,
-29, -30, 52, 53, 30, -38, 12, 8, 20, 13, -124, 22, -41, 118, -95, 48, 38, -43,
-44, 82, 76, -33, 71, -104, 20, -120, -17, -82, -47, -36, 93, 78, 9, 66, 2, 126,
-16, 76, -94, 51, -18, 28, 48, -118, 2, 58, 103, 59, -115, 55, 123, 32, 67, 70,
6, 21, -47, -84, 29, -23, -119, 81, 127, 63, 28, 45, -66, 102, -112, 7, 118,
118, 18, -54, -15, -15, -109, -68, -85, 108, 79, 82, 16, -32, -47, 123, -125, 6,
-15, -102, -89, 113, 120, 126, 119, -28, -44, 51, -25, -96, 23, 42, 122, -32, 9,
127, -99, -19, -14, -38, 71, 7, 66, -32, -59, -124, -121, 46, 125, 44, -103,
-109, 83, 121, -65, 39, -9, -78, 34, -10, -46, 53, -117, 5, 13, -17, -93, 44,
77, -75, -7, 5, 20, 53, 71, -81, 102, -99, -94, 68, -20, 27, 101, -19, 92, 89,
-17, 4, -124, -115, 21, -60, 36, 127, 62, -56, -93, -65, 41, -105, -76, -36,
-91, -66, 112, 75, 94, -94, 106, -79, 50, -118, 28, 82, -32, -23, -45, 86, -86,
34, -72, -91, 64, 85, -47, -93, 80, 1, 110, 6, 117, -34, -49, 118, 34, 123, 82,
83, -34, -19, 109, 66, 50, -70, -90, 89, -103, -84, 55, -77, 27, -65, -111,
-104, -10, -73, 72, 3, -50, 97, -90, 34, -4, 96, 8, -18, -36, -112, -119, 116,
-54, -52, 66, -67, -120, 7, -57, 92, -40, -70, 77, 43, -125, 100, -123, 116,
-108, -112, 105, 76, -108, 19, -125, 83, 12, 19, -33, 39, 31, -39, -36, 38,
-111, 118, 42, -31, -98, -87, 40, 22, 8, 23, 25, -43, -33, 115, -125, -94, 120,
108, -71, -88, -97, -12, 117, 14, 80, -70, 88, -99, 53, 14, 104, -58, 73, -60,
102, 56, 6, 111, -16, -62, -104, 109, 62, -116, -28, 120, 27, -124, -117, 66,
74, -9, 75, -88, -76, 54, 84, 44, 53, 19, 20, 125, -87, 80, -128, -125, 126,
-119, 69, -126, -99, 15, -111, 126, 63, -95, -14, 44, -78, 76, -74, 55, 75, 39,
77, -88, 37, 65, -32, 80, -114, -29, 18, -57, 9, 13, -93, 36, -21, -5, -59, -29,
-52, 72, 94, 101, -36, 32, -80, -65, -112, 57, -60, 107, 5, 76, -118, 46, 103,
-102, 106, -113, 23, -19, 121, -34, 46, 108, 56, -65, -50, 56, -85, -86, -6,
-34, -30, -11, -101, 8, 113, 112, -122, -92, 17, 116, -86, -103, -90, 82, 81,
-2, -1, -124, -120, -2, -105, 46, -111, -29, -106, 61, -99, 63, -80, -36, 86,
-42, 80, -34, -120, 23, 82, 6, 16, 95, 102, -95, 42, -41, 34, -34, -79, 26, -96,
55, 39, 65, 54, 82, -71, -87, 58, 112, 100, 119, -85, -88, -19, 29, 17, -29, 34,
-58, 15, 19, -108, -5, 93, -109, -116, 96, 36, -104, 26, 75, -57, -31, 35, 24,
-116, 101, -95, 78, 48, 80, -67, -105, 34, -60, -104, -37, 105, -99, -110, -12,
86, -108, -112, -61, -68, -93, -52, -40, 32, -76, -82, 15, 38, 64, -54, 122,
-21, 82, -54, -92, 39, 45, 91, 101, 100, 86, 101, 44, -120, -70, 49, 20, 20, 34,
-110, -124, 18, -5, 39, 111, 60, 80, -122, 10, -106, -74, -77, -93, -53, 41, 33,
-74, -42, -23, -31, -108, -127, -30, -34, -59, 80, -50, 87, -96, -86, 29, 12,
102, 49, -57, -54, -102, -11, 121, -26, 51, -95, -107, 80, -88, 89, 51, -102,
76, 10, 45, 24, 101, 24, 106, 59, 24, 1, 80, 104, 119, -41, 35, 3, 89, 71, -51,
72, 107, 33, 91, -60, 124, 103, 19, 40, -105, -94, -11, 80, 73, -114, 43, -91,
-98, 56, 90, 116, -26, -47, -55, 18, -53, 12, -29, 105, -41, -1, -3, 110, 18,
28, -74, 40, 41, -14, 45, 25, -25, -122, -17, -102, 18, -101, -80, -5, -40, -39,
-18, 118, 103, 101, -116, 110, 68, -23, -33, -116, 117, 118, -88, 48, 40, 18,
11, 111, -12, 46, -89, -50, 10, 58, 81, -95, 5, 2, 72, -107, 0, -30, 77, -63,
-109, -68, -108, -74, -61, 124, 1, 124, 39, -103, 103, -50, 25, -5, 74, 12,
-119, 2, 38, 115, 58, -24, -80, -37, -118, -97, -10, 84, -35, 23, 0, -28, -36,
-97, -95, -97, 112, -65, 2, -7, -70, -1, -59, -90, 59, 31, 95, 40, 100, 65, 38,
-12, -63, -11, 67, 124, -123, -113, -26, 70, -95, 69, 112, -48, -69, -94, 65,
-110, -71, 104, 29, -21, -34, 65, 36, 87, -63, 59, -35, 82, -57, 59, -36, 17,
35, 13, 96, 97, 28, 99, -32, -80, 30, -111, 21, -127, 24, -65, 19, -60, -107,
11, -46, 41, -116, 101, -101, 23, 21, 92, -70, -43, -85, 32, 20, 11, 54, 20, 45,
37, 74, -73, -83, 114, -59, -93, 26, -76, 28, -76, -59, -74, 69, 28, 49, 19, 5,
-53, -57, -4, 7, 67, -117, -55, 52, 100, 47, 0, -97, -49, 35, 40, 59, -102, 53,
-11, 18, -82, -89, -89, -20, -109, 18, -74, -16, 21, 68, 102, 39, 36, 68, -89,
-75, 32, -50, 33, -4, -45, 33, 23, -103, -2, 63, 109, -111, 77, 20, 56, 21, 15,
-78, -99, 69, 88, -96, -9, -116, 28, -61, -86, 55, 119, 22, 106, -59, -125, -99,
-117, -43, -7, -16, -71, -47, -9, -58, -23, -115, 77, 81, -85, -69, -34, 69,
106, -114, -23, -82, 47, -90, 50, -76, -63, -101, 4, 33, 84, -81, 76, -110, 76,
25, -44, -66, 121, 101, 16, 53, 27, -90, -31, -37, 40, -36, -67, -115, -86, -12,
-21, -124, -53, 96, -9, 41, -27, 36, -31, -95, -53, 78, -61, 84, 79, -73, -63,
-101, -17, -110, 55, -124, 8, 70, -32, 32, -18, 109, 44, -17, -121, -29, -112,
97, 13, 13, -13, -102, -70, -77, -62, -104, 2, 44, -109, 46, -94, -21, 2, -33,
77, 21, -87, 64, -57, -47, -33, -53, 42, 34, -3, 42, -14, 100, 7, -77, 103, -95,
28, 55, -77, -44, -106, 20, 81, 45, -14, -127, 46, 102, -56, 41, -35, 61, 91,
121, -65, -75, -98, -114, 27, 103, -80, -1, -7, -100, -44, -64, -89, -38, 114,
105, -33, 113, 55, 26, 31, 98, 55, -20, -81, 114, -110, 72, 37, -33, -50, -91,
-111, -107, -48, -39, 52, 57, 118, 111, 43, 68, -6, 67, 122, -5, 40, -103, -100,
86, -58, 51, 54, -120, 14, -70, -66, 35, 52, -73, -5, -69, 5, -7, -80, 86, 43,
-31, -59, -72, -29, 2, -117, -119, -33, 102, 50, 77, 50, -12, -79, -84, 72, -63,
53, -125, -26, 98, 117, -45, -102, -66, -73, -72, 61, 58, 51, 81, 52, -94, -102,
-50, 20, -41, 108, -18, -39, 44, -83, 75, -20, 3, -87, -24, 94, 52, 111, -19,
19, -79, -114, -63, 1, 106, -81, 111, -69, -51, -97, -33, -105, -111, -21, 72,
-59, 62, 89, 55, 111, -40, -116, -46, 101, -30, -28, 59, 45, 33, 11, 30, 35, -7,
122, 25, 53, 20, 72, 44, 51, -46, -15, 111, 10, -74, -37, -39, 83, 52, -46, 94,
23, 121, -116, -25, 98, 46, -31, 12, 78, 86, -27, -54, 78, -25, 2, -57, -57,
122, -80, 126, 119, 76, -17, -125, 55, 6, 44, 1, -101, 78, 87, -53, 17, 36, 84,
5, 91, 40, -38, 65, 7, -56, -99, -36, 119, 27, -99, -31, -69, 26, -85, -123, };
 
 #endif /* WHITENOISE8192_H_ */

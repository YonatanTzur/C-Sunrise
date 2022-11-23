# C-Sunrise
Implement C++ code (LED sequence) on 3D object shaped as a mountain and forest with Arduino nano.

---HARDWARE---
Arrange 64 Leds over the object - 21 for the general part "sky" (in the code), and 43 devided for RM (right-mountain),
RT (right-trail), MM (midle-mountain), e.t.c (in the code).
This represent the seperation I have decided on, and important to follow for the specific code (with no changes) to run.
There must be a buffer between the "sky" part and the other lower parts.

---CODE---
The function outside the main loop called "changeColor", and accept the following parameters:
int part: "sky", "northShine1", e.t.c
int rStart: initial value for red in RGB
int gStart: initial value for green in RGB  
int bStart: initial value for blue in RGB  
int rEnd: final position for red in RGB
int gEnd: final position for green in RGB  
int bEnd: final position for blue in RGB
int Currectframe: k (the iteration invoked outside the function)
int EndFrame: 255 (constant)

# Tower-of-Hanoi
C++ Tower of Hanoi Step Generator

This program takes input via the command line as a number. It will then generate the appropriate moves to most efficiently complete the tower of Hanoi.

Below is a diagram explaining which names apply to what pins. First, second and third. The first pin is the one which the entire stack of plates starts on. The goal is to get them - in the same configuration - to the third pin with the condition that you may only move one plate at a time and that no larger plate may be placed on a smaller plate.

F   S   T

The program operates on the principle of recursion. You can consider each stage as a Russian-Doll stage of the prior. You start bottom up. Your goal is to get the largest bottom plate onto the bottom of the third pin and to do this, you must form a stack of any plates above it on the second pin. Then you must move the plate to the third pin. Then you must once again move the smaller stack which is now on the second pin, onto the third pin to complete the game. You can break this down further and further until you reach the idea of moving just two plates, where the moves are originally defined.

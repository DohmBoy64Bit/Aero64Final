/* Minimal macros for assembling spimdisasm / splat output with GNU as (mips-linux-gnu-as).
 * Project-local (not from Nintendo SDK). Extend as new pseudo-ops appear in splat output.
 */
.macro glabel name
    .global \name
    .type \name, @function
    \name:
.endm

.macro endlabel name
    .size \name, . - \name
.endm

.macro nonmatching name, size=0
.endm

.macro dlabel name
    .global \name
    \name:
.endm

.macro enddlabel name
.endm

.macro alabel name
    \name:
.endm

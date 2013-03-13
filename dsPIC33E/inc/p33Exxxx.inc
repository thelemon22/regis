;;
;; generic include file for dsPIC33F
;;

.ifdef __33EP128GP502
.include "p33EP128GP502.inc"
.equ VALID_ID,1
.endif

.ifdef __33EP128GP504
.include "p33EP128GP504.inc"
.equ VALID_ID,1
.endif

.ifdef __33EP128GP506
.include "p33EP128GP506.inc"
.equ VALID_ID,1
.endif

.ifdef __33EP128MC202
.include "p33EP128MC202.inc"
.equ VALID_ID,1
.endif

.ifdef __33EP128MC204
.include "p33EP128MC204.inc"
.equ VALID_ID,1
.endif

.ifdef __33EP128MC206
.include "p33EP128MC206.inc"
.equ VALID_ID,1
.endif

.ifdef __33EP128MC502
.include "p33EP128MC502.inc"
.equ VALID_ID,1
.endif

.ifdef __33EP128MC504
.include "p33EP128MC504.inc"
.equ VALID_ID,1
.endif

.ifdef __33EP128MC506
.include "p33EP128MC506.inc"
.equ VALID_ID,1
.endif

.ifdef __33EP256GP502
.include "p33EP256GP502.inc"
.equ VALID_ID,1
.endif

.ifdef __33EP256GP504
.include "p33EP256GP504.inc"
.equ VALID_ID,1
.endif

.ifdef __33EP256GP506
.include "p33EP256GP506.inc"
.equ VALID_ID,1
.endif

.ifdef __33EP256MC202
.include "p33EP256MC202.inc"
.equ VALID_ID,1
.endif

.ifdef __33EP256MC204
.include "p33EP256MC204.inc"
.equ VALID_ID,1
.endif

.ifdef __33EP256MC206
.include "p33EP256MC206.inc"
.equ VALID_ID,1
.endif

.ifdef __33EP256MC502
.include "p33EP256MC502.inc"
.equ VALID_ID,1
.endif

.ifdef __33EP256MC504
.include "p33EP256MC504.inc"
.equ VALID_ID,1
.endif

.ifdef __33EP256MC506
.include "p33EP256MC506.inc"
.equ VALID_ID,1
.endif

.ifdef __33EP256MU806
.include "p33EP256MU806.inc"
.equ VALID_ID,1
.endif

.ifdef __33EP256MU810
.include "p33EP256MU810.inc"
.equ VALID_ID,1
.endif

.ifdef __33EP256MU814
.include "p33EP256MU814.inc"
.equ VALID_ID,1
.endif

.ifdef __33EP32GP502
.include "p33EP32GP502.inc"
.equ VALID_ID,1
.endif

.ifdef __33EP32GP503
.include "p33EP32GP503.inc"
.equ VALID_ID,1
.endif

.ifdef __33EP32GP504
.include "p33EP32GP504.inc"
.equ VALID_ID,1
.endif

.ifdef __33EP32MC202
.include "p33EP32MC202.inc"
.equ VALID_ID,1
.endif

.ifdef __33EP32MC203
.include "p33EP32MC203.inc"
.equ VALID_ID,1
.endif

.ifdef __33EP32MC204
.include "p33EP32MC204.inc"
.equ VALID_ID,1
.endif

.ifdef __33EP32MC502
.include "p33EP32MC502.inc"
.equ VALID_ID,1
.endif

.ifdef __33EP32MC503
.include "p33EP32MC503.inc"
.equ VALID_ID,1
.endif

.ifdef __33EP32MC504
.include "p33EP32MC504.inc"
.equ VALID_ID,1
.endif

.ifdef __33EP512GP806
.include "p33EP512GP806.inc"
.equ VALID_ID,1
.endif

.ifdef __33EP512MC806
.include "p33EP512MC806.inc"
.equ VALID_ID,1
.endif

.ifdef __33EP512MU810
.include "p33EP512MU810.inc"
.equ VALID_ID,1
.endif

.ifdef __33EP512MU814
.include "p33EP512MU814.inc"
.equ VALID_ID,1
.endif

.ifdef __33EP64GP502
.include "p33EP64GP502.inc"
.equ VALID_ID,1
.endif

.ifdef __33EP64GP503
.include "p33EP64GP503.inc"
.equ VALID_ID,1
.endif

.ifdef __33EP64GP504
.include "p33EP64GP504.inc"
.equ VALID_ID,1
.endif

.ifdef __33EP64GP506
.include "p33EP64GP506.inc"
.equ VALID_ID,1
.endif

.ifdef __33EP64MC202
.include "p33EP64MC202.inc"
.equ VALID_ID,1
.endif

.ifdef __33EP64MC203
.include "p33EP64MC203.inc"
.equ VALID_ID,1
.endif

.ifdef __33EP64MC204
.include "p33EP64MC204.inc"
.equ VALID_ID,1
.endif

.ifdef __33EP64MC206
.include "p33EP64MC206.inc"
.equ VALID_ID,1
.endif

.ifdef __33EP64MC502
.include "p33EP64MC502.inc"
.equ VALID_ID,1
.endif

.ifdef __33EP64MC503
.include "p33EP64MC503.inc"
.equ VALID_ID,1
.endif

.ifdef __33EP64MC504
.include "p33EP64MC504.inc"
.equ VALID_ID,1
.endif

.ifdef __33EP64MC506
.include "p33EP64MC506.inc"
.equ VALID_ID,1
.endif

.ifndef VALID_ID
.error "processor ID not specified in generic include file"
.endif

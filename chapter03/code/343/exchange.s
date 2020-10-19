	.file	"exchange.c"
	.text
	.globl	exchange
	.def	exchange;	.scl	2;	.type	32;	.endef
	.seh_proc	exchange
exchange:
	.seh_endprologue
	movl	(%rcx), %eax
	movl	%edx, (%rcx)
	ret
	.seh_endproc
	.globl	exchange2
	.def	exchange2;	.scl	2;	.type	32;	.endef
	.seh_proc	exchange2
exchange2:
	.seh_endprologue
	movl	(%rcx), %eax
	movl	%edx, (%rcx)
	ret
	.seh_endproc
	.globl	exchange3
	.def	exchange3;	.scl	2;	.type	32;	.endef
	.seh_proc	exchange3

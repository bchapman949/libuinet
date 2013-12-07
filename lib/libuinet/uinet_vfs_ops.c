/*-
 * Copyright (c) 2011 Kip Macy
 * All rights reserved.
 * Copyright (c) 2013 Patrick Kelsey. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice unmodified, this list of conditions, and the following
 *    disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 * IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 * NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 * THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * Derived in part from libplebnet's pn_vfs_ops.c.
 *
 */

#include <uinet_sys/cdefs.h>
#include <uinet_sys/param.h>
#include <uinet_sys/types.h>
#include <uinet_sys/limits.h>
#include <uinet_sys/malloc.h>
#include <uinet_sys/namei.h>
#include <uinet_sys/refcount.h>
#include <uinet_sys/resourcevar.h>
#include <uinet_sys/systm.h>
#include <uinet_sys/proc.h>
#include <uinet_sys/priv.h>
#include <uinet_sys/time.h>
#include <uinet_sys/ucred.h>
#include <uinet_sys/vnode.h>
#include <uinet_sys/uio.h>


void
NDFREE(struct nameidata *ndp, const u_int flags)
{

}

int	
vn_open(struct nameidata *ndp, int *flagp, int cmode, struct file *fp)
{
	panic("vn_open not implemented");

	return (0);
}


int	
vn_close(struct vnode *vp,
	    int flags, struct ucred *file_cred, struct thread *td)
{
	panic("vn_close not implemented");

	return (0);
}

int	
vn_rdwr(enum uio_rw rw, struct vnode *vp, void *base,
	    int len, off_t offset, enum uio_seg segflg, int ioflg,
	    struct ucred *active_cred, struct ucred *file_cred, ssize_t *aresid,
	    struct thread *td)
{
	panic("vn_rdwr not implemented");

	return (0);
}


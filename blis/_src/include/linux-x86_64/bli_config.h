/*

   BLIS
   An object-based framework for developing high-performance BLAS-like
   libraries.

   Copyright (C) 2014, The University of Texas at Austin

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are
   met:
    - Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.
    - Redistributions in binary form must reproduce the above copyright
      notice, this list of conditions and the following disclaimer in the
      documentation and/or other materials provided with the distribution.
    - Neither the name of The University of Texas at Austin nor the names
      of its contributors may be used to endorse or promote products
      derived from this software without specific prior written permission.

   THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
   "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
   LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
   A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
   HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
   SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
   LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
   DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
   THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
   (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
   OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

*/

#ifndef BLIS_CONFIG_H
#define BLIS_CONFIG_H

// Enabled configuration "family" (config_name)
#define BLIS_FAMILY_X86_64


// Enabled sub-configurations (config_list)
#define BLIS_CONFIG_SKX
#define BLIS_CONFIG_KNL
#define BLIS_CONFIG_HASWELL
#define BLIS_CONFIG_SANDYBRIDGE
#define BLIS_CONFIG_PENRYN
#define BLIS_CONFIG_ZEN
#define BLIS_CONFIG_EXCAVATOR
#define BLIS_CONFIG_STEAMROLLER
#define BLIS_CONFIG_PILEDRIVER
#define BLIS_CONFIG_BULLDOZER
#define BLIS_CONFIG_GENERIC


// Enabled kernel sets (kernel_list)
#define BLIS_KERNELS_SKX
#define BLIS_KERNELS_KNL
#define BLIS_KERNELS_HASWELL
#define BLIS_KERNELS_SANDYBRIDGE
#define BLIS_KERNELS_PENRYN
#define BLIS_KERNELS_ZEN
#define BLIS_KERNELS_PILEDRIVER
#define BLIS_KERNELS_BULLDOZER
#define BLIS_KERNELS_GENERIC


#if 0
#define BLIS_ENABLE_OPENMP
#endif

#if 0
#define BLIS_ENABLE_PTHREADS
#endif

#if 1
#define BLIS_ENABLE_PACKBUF_POOLS
#endif

#if 0 == 64
#define BLIS_INT_TYPE_SIZE 64
#elif 0 == 32
#define BLIS_INT_TYPE_SIZE 32
#else
// determine automatically
#endif

#if 32 == 64
#define BLIS_BLAS_INT_TYPE_SIZE 64
#elif 32 == 32
#define BLIS_BLAS_INT_TYPE_SIZE 32
#else
// determine automatically
#endif

#ifndef BLIS_ENABLE_BLAS
#ifndef BLIS_DISABLE_BLAS
#if 0
#define BLIS_ENABLE_BLAS
#else
#define BLIS_DISABLE_BLAS
#endif
#endif
#endif

#ifndef BLIS_ENABLE_CBLAS
#ifndef BLIS_DISABLE_CBLAS
#if 0
#define BLIS_ENABLE_CBLAS
#else
#define BLIS_DISABLE_CBLAS
#endif
#endif
#endif

#if 0
#define BLIS_ENABLE_MEMKIND
#else
#define BLIS_DISABLE_MEMKIND
#endif

#if 0
#define BLIS_ENABLE_SANDBOX
#else
#define BLIS_DISABLE_SANDBOX
#endif

#endif
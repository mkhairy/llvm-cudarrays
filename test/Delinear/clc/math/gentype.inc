#define GENTYPE float
#include BODY
#undef GENTYPE

#define GENTYPE float2
#include BODY
#undef GENTYPE

#define GENTYPE float3
#include BODY
#undef GENTYPE

#define GENTYPE float4
#include BODY
#undef GENTYPE

#define GENTYPE float8
#include BODY
#undef GENTYPE

#define GENTYPE float16
#include BODY
#undef GENTYPE

#ifdef cl_khr_fp64
#define GENTYPE double
#include BODY
#undef GENTYPE

#define GENTYPE double2
#include BODY
#undef GENTYPE

#define GENTYPE double3
#include BODY
#undef GENTYPE

#define GENTYPE double4
#include BODY
#undef GENTYPE

#define GENTYPE double8
#include BODY
#undef GENTYPE

#define GENTYPE double16
#include BODY
#undef GENTYPE
#endif

#undef BODY

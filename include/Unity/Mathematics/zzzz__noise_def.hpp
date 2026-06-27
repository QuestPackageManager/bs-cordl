#pragma once
// IWYU pragma private; include "Unity/Mathematics/noise.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(noise)
namespace Unity::Mathematics {
struct float2;
}
namespace Unity::Mathematics {
struct float3;
}
namespace Unity::Mathematics {
struct float4;
}
// Forward declare root types
namespace Unity::Mathematics {
class noise;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Mathematics::noise);
// Dependencies System.Object
namespace Unity::Mathematics {
// Is value type: false
// CS Name: Unity.Mathematics.noise
class CORDL_TYPE noise : public ::System::Object {
public:
// Declarations
/// @brief Method cellular, addr 0x6534094, size 0x878, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 cellular(::Unity::Mathematics::float2  P) ;

/// @brief Method cellular, addr 0x6535780, size 0x21b8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 cellular(::Unity::Mathematics::float3  P) ;

/// @brief Method cellular2x2, addr 0x6534b20, size 0x37c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 cellular2x2(::Unity::Mathematics::float2  P) ;

/// @brief Method cellular2x2x2, addr 0x6534f40, size 0x71c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 cellular2x2x2(::Unity::Mathematics::float3  P) ;

/// @brief Method cnoise, addr 0x6537938, size 0x2cc, virtual false, abstract: false, final false
static inline float_t cnoise(::Unity::Mathematics::float2  P) ;

/// @brief Method cnoise, addr 0x6537ff8, size 0x744, virtual false, abstract: false, final false
static inline float_t cnoise(::Unity::Mathematics::float3  P) ;

/// @brief Method cnoise, addr 0x6538f54, size 0x1108, virtual false, abstract: false, final false
static inline float_t cnoise(::Unity::Mathematics::float4  P) ;

/// @brief Method fade, addr 0x6537cac, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 fade(::Unity::Mathematics::float2  t) ;

/// @brief Method fade, addr 0x653873c, size 0x5c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 fade(::Unity::Mathematics::float3  t) ;

/// @brief Method fade, addr 0x653a05c, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 fade(::Unity::Mathematics::float4  t) ;

/// @brief Method grad4, addr 0x653b310, size 0x17c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 grad4(float_t  j, ::Unity::Mathematics::float4  ip) ;

/// @brief Method mod289, addr 0x653490c, size 0xc4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 mod289(::Unity::Mathematics::float2  x) ;

/// @brief Method mod289, addr 0x653565c, size 0x124, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 mod289(::Unity::Mathematics::float3  x) ;

/// @brief Method mod289, addr 0x6537c04, size 0x74, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 mod289(::Unity::Mathematics::float4  x) ;

/// @brief Method mod289, addr 0x653b25c, size 0x7c, virtual false, abstract: false, final false
static inline float_t mod289(float_t  x) ;

/// @brief Method mod7, addr 0x6534a08, size 0x118, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 mod7(::Unity::Mathematics::float3  x) ;

/// @brief Method mod7, addr 0x6534ed0, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 mod7(::Unity::Mathematics::float4  x) ;

/// @brief Method permute, addr 0x65349d0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 permute(::Unity::Mathematics::float3  x) ;

/// @brief Method permute, addr 0x6534e9c, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 permute(::Unity::Mathematics::float4  x) ;

/// @brief Method permute, addr 0x653b2d8, size 0x1c, virtual false, abstract: false, final false
static inline float_t permute(float_t  x) ;

/// @brief Method pnoise, addr 0x6537ce0, size 0x318, virtual false, abstract: false, final false
static inline float_t pnoise(::Unity::Mathematics::float2  P, ::Unity::Mathematics::float2  rep) ;

/// @brief Method pnoise, addr 0x6538798, size 0x7bc, virtual false, abstract: false, final false
static inline float_t pnoise(::Unity::Mathematics::float3  P, ::Unity::Mathematics::float3  rep) ;

/// @brief Method pnoise, addr 0x653a0a0, size 0x11bc, virtual false, abstract: false, final false
static inline float_t pnoise(::Unity::Mathematics::float4  P, ::Unity::Mathematics::float4  rep) ;

/// @brief Method psrdnoise, addr 0x653d354, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 psrdnoise(::Unity::Mathematics::float2  pos, ::Unity::Mathematics::float2  per) ;

/// @brief Method psrdnoise, addr 0x653cf70, size 0x3e4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 psrdnoise(::Unity::Mathematics::float2  pos, ::Unity::Mathematics::float2  per, float_t  rot) ;

/// @brief Method psrnoise, addr 0x653d698, size 0x8, virtual false, abstract: false, final false
static inline float_t psrnoise(::Unity::Mathematics::float2  pos, ::Unity::Mathematics::float2  per) ;

/// @brief Method psrnoise, addr 0x653d35c, size 0x33c, virtual false, abstract: false, final false
static inline float_t psrnoise(::Unity::Mathematics::float2  pos, ::Unity::Mathematics::float2  per, float_t  rot) ;

/// @brief Method rgrad2, addr 0x653b48c, size 0x154, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 rgrad2(::Unity::Mathematics::float2  p, float_t  rot) ;

/// @brief Method snoise, addr 0x653b5e0, size 0x3bc, virtual false, abstract: false, final false
static inline float_t snoise(::Unity::Mathematics::float2  v) ;

/// @brief Method snoise, addr 0x653b99c, size 0x640, virtual false, abstract: false, final false
static inline float_t snoise(::Unity::Mathematics::float3  v) ;

/// @brief Method snoise, addr 0x653bfdc, size 0x78c, virtual false, abstract: false, final false
static inline float_t snoise(::Unity::Mathematics::float3  v, ::ByRef<::Unity::Mathematics::float3>  gradient) ;

/// @brief Method snoise, addr 0x653c768, size 0x808, virtual false, abstract: false, final false
static inline float_t snoise(::Unity::Mathematics::float4  v) ;

/// @brief Method srdnoise, addr 0x653da34, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 srdnoise(::Unity::Mathematics::float2  pos) ;

/// @brief Method srdnoise, addr 0x653d6a0, size 0x394, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 srdnoise(::Unity::Mathematics::float2  pos, float_t  rot) ;

/// @brief Method srnoise, addr 0x653dd08, size 0x1e08, virtual false, abstract: false, final false
static inline float_t srnoise(::Unity::Mathematics::float2  pos) ;

/// @brief Method srnoise, addr 0x653da3c, size 0x2cc, virtual false, abstract: false, final false
static inline float_t srnoise(::Unity::Mathematics::float2  pos, float_t  rot) ;

/// @brief Method taylorInvSqrt, addr 0x6537c78, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 taylorInvSqrt(::Unity::Mathematics::float4  r) ;

/// @brief Method taylorInvSqrt, addr 0x653b2f4, size 0x1c, virtual false, abstract: false, final false
static inline float_t taylorInvSqrt(float_t  r) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr noise() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "noise", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
noise(noise && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "noise", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
noise(noise const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13181};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::noise, 0x10>, "Size mismatch!");

} // namespace end def Unity::Mathematics
NEED_NO_BOX(::Unity::Mathematics::noise);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::noise*, "Unity.Mathematics", "noise");

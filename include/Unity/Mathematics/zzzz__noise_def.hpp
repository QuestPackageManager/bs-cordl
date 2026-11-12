#pragma once
// IWYU pragma private; include "Unity/Mathematics/noise.hpp"
#include "beatsaber-hook/shared/types.hpp"
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
MARK_REF_T(::Unity::Mathematics::noise*);
DEFINE_IL2CPP_CLASS(::Unity::Mathematics::noise*, "Unity.Mathematics", "noise");
// [Il2CppEagerStaticClassConstruction]
// Dependencies System.Object
namespace Unity::Mathematics {
// Is value type: false
// CS Name: Unity.Mathematics.noise
class CORDL_TYPE noise : public ::System::Object {
public:
  // Declarations
  /// @brief Method cellular, addr 0x6a6920c, size 0x878, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 cellular(::Unity::Mathematics::float2 P);

  /// @brief Method cellular, addr 0x6a6a8f8, size 0x21b8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 cellular(::Unity::Mathematics::float3 P);

  /// @brief Method cellular2x2, addr 0x6a69c98, size 0x37c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 cellular2x2(::Unity::Mathematics::float2 P);

  /// @brief Method cellular2x2x2, addr 0x6a6a0b8, size 0x71c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 cellular2x2x2(::Unity::Mathematics::float3 P);

  /// @brief Method cnoise, addr 0x6a6cab0, size 0x2cc, virtual false, abstract: false, final false
  static inline float_t cnoise(::Unity::Mathematics::float2 P);

  /// @brief Method cnoise, addr 0x6a6d170, size 0x744, virtual false, abstract: false, final false
  static inline float_t cnoise(::Unity::Mathematics::float3 P);

  /// @brief Method cnoise, addr 0x6a6e0cc, size 0x1108, virtual false, abstract: false, final false
  static inline float_t cnoise(::Unity::Mathematics::float4 P);

  /// @brief Method fade, addr 0x6a6ce24, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 fade(::Unity::Mathematics::float2 t);

  /// @brief Method fade, addr 0x6a6d8b4, size 0x5c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 fade(::Unity::Mathematics::float3 t);

  /// @brief Method fade, addr 0x6a6f1d4, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 fade(::Unity::Mathematics::float4 t);

  /// @brief Method grad4, addr 0x6a70488, size 0x17c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 grad4(float_t j, ::Unity::Mathematics::float4 ip);

  /// @brief Method mod289, addr 0x6a69a84, size 0xc4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 mod289(::Unity::Mathematics::float2 x);

  /// @brief Method mod289, addr 0x6a6a7d4, size 0x124, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 mod289(::Unity::Mathematics::float3 x);

  /// @brief Method mod289, addr 0x6a6cd7c, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 mod289(::Unity::Mathematics::float4 x);

  /// @brief Method mod289, addr 0x6a703d4, size 0x7c, virtual false, abstract: false, final false
  static inline float_t mod289(float_t x);

  /// @brief Method mod7, addr 0x6a69b80, size 0x118, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 mod7(::Unity::Mathematics::float3 x);

  /// @brief Method mod7, addr 0x6a6a048, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 mod7(::Unity::Mathematics::float4 x);

  /// @brief Method permute, addr 0x6a69b48, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 permute(::Unity::Mathematics::float3 x);

  /// @brief Method permute, addr 0x6a6a014, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 permute(::Unity::Mathematics::float4 x);

  /// @brief Method permute, addr 0x6a70450, size 0x1c, virtual false, abstract: false, final false
  static inline float_t permute(float_t x);

  /// @brief Method pnoise, addr 0x6a6ce58, size 0x318, virtual false, abstract: false, final false
  static inline float_t pnoise(::Unity::Mathematics::float2 P, ::Unity::Mathematics::float2 rep);

  /// @brief Method pnoise, addr 0x6a6d910, size 0x7bc, virtual false, abstract: false, final false
  static inline float_t pnoise(::Unity::Mathematics::float3 P, ::Unity::Mathematics::float3 rep);

  /// @brief Method pnoise, addr 0x6a6f218, size 0x11bc, virtual false, abstract: false, final false
  static inline float_t pnoise(::Unity::Mathematics::float4 P, ::Unity::Mathematics::float4 rep);

  /// @brief Method psrdnoise, addr 0x6a724cc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 psrdnoise(::Unity::Mathematics::float2 pos, ::Unity::Mathematics::float2 per);

  /// @brief Method psrdnoise, addr 0x6a720e8, size 0x3e4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 psrdnoise(::Unity::Mathematics::float2 pos, ::Unity::Mathematics::float2 per, float_t rot);

  /// @brief Method psrnoise, addr 0x6a72810, size 0x8, virtual false, abstract: false, final false
  static inline float_t psrnoise(::Unity::Mathematics::float2 pos, ::Unity::Mathematics::float2 per);

  /// @brief Method psrnoise, addr 0x6a724d4, size 0x33c, virtual false, abstract: false, final false
  static inline float_t psrnoise(::Unity::Mathematics::float2 pos, ::Unity::Mathematics::float2 per, float_t rot);

  /// @brief Method rgrad2, addr 0x6a70604, size 0x154, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 rgrad2(::Unity::Mathematics::float2 p, float_t rot);

  /// @brief Method snoise, addr 0x6a70758, size 0x3bc, virtual false, abstract: false, final false
  static inline float_t snoise(::Unity::Mathematics::float2 v);

  /// @brief Method snoise, addr 0x6a70b14, size 0x640, virtual false, abstract: false, final false
  static inline float_t snoise(::Unity::Mathematics::float3 v);

  /// @brief Method snoise, addr 0x6a71154, size 0x78c, virtual false, abstract: false, final false
  static inline float_t snoise(::Unity::Mathematics::float3 v, ::by_ref<::Unity::Mathematics::float3> gradient);

  /// @brief Method snoise, addr 0x6a718e0, size 0x808, virtual false, abstract: false, final false
  static inline float_t snoise(::Unity::Mathematics::float4 v);

  /// @brief Method srdnoise, addr 0x6a72bac, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 srdnoise(::Unity::Mathematics::float2 pos);

  /// @brief Method srdnoise, addr 0x6a72818, size 0x394, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 srdnoise(::Unity::Mathematics::float2 pos, float_t rot);

  /// @brief Method srnoise, addr 0x6a72e80, size 0x8, virtual false, abstract: false, final false
  static inline float_t srnoise(::Unity::Mathematics::float2 pos);

  /// @brief Method srnoise, addr 0x6a72bb4, size 0x2cc, virtual false, abstract: false, final false
  static inline float_t srnoise(::Unity::Mathematics::float2 pos, float_t rot);

  /// @brief Method taylorInvSqrt, addr 0x6a6cdf0, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 taylorInvSqrt(::Unity::Mathematics::float4 r);

  /// @brief Method taylorInvSqrt, addr 0x6a7046c, size 0x1c, virtual false, abstract: false, final false
  static inline float_t taylorInvSqrt(float_t r);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr noise();

public:
  // Ctor Parameters [CppParam { name: "", ty: "noise", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  noise(noise&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "noise", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  noise(noise const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13369 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Mathematics::noise) == 0x10, "Size mismatch!");

} // namespace Unity::Mathematics

#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
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
// Type: Unity.Mathematics::noise
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Mathematics {
// Is value type: false
// CS Name: ::Unity.Mathematics::noise*
class CORDL_TYPE noise : public ::System::Object {
public:
  // Declarations
  /// @brief Method cellular, addr 0x322ea0c, size 0x1148, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 cellular(::Unity::Mathematics::float2 P);

  /// @brief Method cellular, addr 0x3231854, size 0x4494, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 cellular(::Unity::Mathematics::float3 P);

  /// @brief Method cellular2x2, addr 0x322fd64, size 0x57c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 cellular2x2(::Unity::Mathematics::float2 P);

  /// @brief Method cellular2x2x2, addr 0x3230484, size 0x12b8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 cellular2x2x2(::Unity::Mathematics::float3 P);

  /// @brief Method cnoise, addr 0x3235ce8, size 0x698, virtual false, abstract: false, final false
  static inline float_t cnoise(::Unity::Mathematics::float2 P);

  /// @brief Method cnoise, addr 0x3236c34, size 0xe78, virtual false, abstract: false, final false
  static inline float_t cnoise(::Unity::Mathematics::float3 P);

  /// @brief Method cnoise, addr 0x32389f8, size 0x29c8, virtual false, abstract: false, final false
  static inline float_t cnoise(::Unity::Mathematics::float4 P);

  /// @brief Method fade, addr 0x323651c, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 fade(::Unity::Mathematics::float2 t);

  /// @brief Method fade, addr 0x3237aac, size 0x5c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 fade(::Unity::Mathematics::float3 t);

  /// @brief Method fade, addr 0x323b3c0, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 fade(::Unity::Mathematics::float4 t);

  /// @brief Method grad4, addr 0x323df48, size 0x240, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 grad4(float_t j, ::Unity::Mathematics::float4 ip);

  /// @brief Method mod289, addr 0x322fb54, size 0xc8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 mod289(::Unity::Mathematics::float2 x);

  /// @brief Method mod289, addr 0x323173c, size 0x118, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 mod289(::Unity::Mathematics::float3 x);

  /// @brief Method mod289, addr 0x3236380, size 0x168, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 mod289(::Unity::Mathematics::float4 x);

  /// @brief Method mod289, addr 0x323dea0, size 0x70, virtual false, abstract: false, final false
  static inline float_t mod289(float_t x);

  /// @brief Method mod7, addr 0x322fc50, size 0x114, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 mod7(::Unity::Mathematics::float3 x);

  /// @brief Method mod7, addr 0x3230320, size 0x164, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 mod7(::Unity::Mathematics::float4 x);

  /// @brief Method permute, addr 0x322fc1c, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 permute(::Unity::Mathematics::float3 x);

  /// @brief Method permute, addr 0x32302e0, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 permute(::Unity::Mathematics::float4 x);

  /// @brief Method permute, addr 0x323df10, size 0x1c, virtual false, abstract: false, final false
  static inline float_t permute(float_t x);

  /// @brief Method pnoise, addr 0x3236550, size 0x6e4, virtual false, abstract: false, final false
  static inline float_t pnoise(::Unity::Mathematics::float2 P, ::Unity::Mathematics::float2 rep);

  /// @brief Method pnoise, addr 0x3237b08, size 0xef0, virtual false, abstract: false, final false
  static inline float_t pnoise(::Unity::Mathematics::float3 P, ::Unity::Mathematics::float3 rep);

  /// @brief Method pnoise, addr 0x323b404, size 0x2a9c, virtual false, abstract: false, final false
  static inline float_t pnoise(::Unity::Mathematics::float4 P, ::Unity::Mathematics::float4 rep);

  /// @brief Method psrdnoise, addr 0x3242348, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 psrdnoise(::Unity::Mathematics::float2 pos, ::Unity::Mathematics::float2 per);

  /// @brief Method psrdnoise, addr 0x3241f54, size 0x3f4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 psrdnoise(::Unity::Mathematics::float2 pos, ::Unity::Mathematics::float2 per, float_t rot);

  /// @brief Method psrnoise, addr 0x3242774, size 0x8, virtual false, abstract: false, final false
  static inline float_t psrnoise(::Unity::Mathematics::float2 pos, ::Unity::Mathematics::float2 per);

  /// @brief Method psrnoise, addr 0x3242350, size 0x424, virtual false, abstract: false, final false
  static inline float_t psrnoise(::Unity::Mathematics::float2 pos, ::Unity::Mathematics::float2 per, float_t rot);

  /// @brief Method rgrad2, addr 0x323e188, size 0x13c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 rgrad2(::Unity::Mathematics::float2 p, float_t rot);

  /// @brief Method snoise, addr 0x323e2c4, size 0x5d8, virtual false, abstract: false, final false
  static inline float_t snoise(::Unity::Mathematics::float2 v);

  /// @brief Method snoise, addr 0x323e89c, size 0x1110, virtual false, abstract: false, final false
  static inline float_t snoise(::Unity::Mathematics::float3 v);

  /// @brief Method snoise, addr 0x323f9ac, size 0x1198, virtual false, abstract: false, final false
  static inline float_t snoise(::Unity::Mathematics::float3 v, ByRef<::Unity::Mathematics::float3> gradient);

  /// @brief Method snoise, addr 0x3240b44, size 0x1410, virtual false, abstract: false, final false
  static inline float_t snoise(::Unity::Mathematics::float4 v);

  /// @brief Method srdnoise, addr 0x3242b24, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 srdnoise(::Unity::Mathematics::float2 pos);

  /// @brief Method srdnoise, addr 0x324277c, size 0x3a8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 srdnoise(::Unity::Mathematics::float2 pos, float_t rot);

  /// @brief Method srnoise, addr 0x3242f0c, size 0x8, virtual false, abstract: false, final false
  static inline float_t srnoise(::Unity::Mathematics::float2 pos);

  /// @brief Method srnoise, addr 0x3242b2c, size 0x3e0, virtual false, abstract: false, final false
  static inline float_t srnoise(::Unity::Mathematics::float2 pos, float_t rot);

  /// @brief Method taylorInvSqrt, addr 0x32364e8, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 taylorInvSqrt(::Unity::Mathematics::float4 r);

  /// @brief Method taylorInvSqrt, addr 0x323df2c, size 0x1c, virtual false, abstract: false, final false
  static inline float_t taylorInvSqrt(float_t r);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr noise();

public:
  // Ctor Parameters [CppParam { name: "", ty: "noise", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  noise(noise&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "noise", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  noise(noise const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::noise, 0x10>, "Size mismatch!");

} // namespace Unity::Mathematics
NEED_NO_BOX(::Unity::Mathematics::noise);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::noise*, "Unity.Mathematics", "noise");

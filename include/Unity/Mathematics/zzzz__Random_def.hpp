#pragma once
// IWYU pragma private; include "Unity/Mathematics/Random.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Random)
namespace Unity::Mathematics {
struct bool2;
}
namespace Unity::Mathematics {
struct bool3;
}
namespace Unity::Mathematics {
struct bool4;
}
namespace Unity::Mathematics {
struct double2;
}
namespace Unity::Mathematics {
struct double3;
}
namespace Unity::Mathematics {
struct double4;
}
namespace Unity::Mathematics {
struct float2;
}
namespace Unity::Mathematics {
struct float3;
}
namespace Unity::Mathematics {
struct float4;
}
namespace Unity::Mathematics {
struct int2;
}
namespace Unity::Mathematics {
struct int3;
}
namespace Unity::Mathematics {
struct int4;
}
namespace Unity::Mathematics {
struct quaternion;
}
namespace Unity::Mathematics {
struct uint2;
}
namespace Unity::Mathematics {
struct uint3;
}
namespace Unity::Mathematics {
struct uint4;
}
// Forward declare root types
namespace Unity::Mathematics {
struct Random;
}
// Write type traits
MARK_VAL_T(::Unity::Mathematics::Random);
// Dependencies
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.Random
struct CORDL_TYPE Random {
public:
  // Declarations
  /// @brief Method CheckIndexForHash, addr 0x46d4bec, size 0x58, virtual false, abstract: false, final false
  static inline void CheckIndexForHash(uint32_t index);

  /// @brief Method CheckInitState, addr 0x46d4be8, size 0x4, virtual false, abstract: false, final false
  inline void CheckInitState();

  /// @brief Method CheckNextIntMax, addr 0x46d4c48, size 0x4, virtual false, abstract: false, final false
  inline void CheckNextIntMax(int32_t max);

  /// @brief Method CheckNextIntMinMax, addr 0x46d4c4c, size 0x4, virtual false, abstract: false, final false
  inline void CheckNextIntMinMax(int32_t min, int32_t max);

  /// @brief Method CheckNextUIntMinMax, addr 0x46d4c50, size 0x4, virtual false, abstract: false, final false
  inline void CheckNextUIntMinMax(uint32_t min, uint32_t max);

  /// @brief Method CheckState, addr 0x46d4c44, size 0x4, virtual false, abstract: false, final false
  inline void CheckState();

  /// @brief Method CreateFromIndex, addr 0x46d3234, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::Random CreateFromIndex(uint32_t index);

  /// @brief Method InitState, addr 0x46d3294, size 0x14, virtual false, abstract: false, final false
  inline void InitState(uint32_t seed);

  /// @brief Method NextBool, addr 0x46d32a8, size 0x20, virtual false, abstract: false, final false
  inline bool NextBool();

  /// @brief Method NextBool2, addr 0x46d32c8, size 0x30, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool2 NextBool2();

  /// @brief Method NextBool3, addr 0x46d32f8, size 0x40, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 NextBool3();

  /// @brief Method NextBool4, addr 0x46d3338, size 0x50, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 NextBool4();

  /// @brief Method NextDouble, addr 0x46d3f98, size 0x38, virtual false, abstract: false, final false
  inline double_t NextDouble();

  /// @brief Method NextDouble, addr 0x46d4168, size 0x3c, virtual false, abstract: false, final false
  inline double_t NextDouble(double_t max);

  /// @brief Method NextDouble, addr 0x46d4360, size 0x44, virtual false, abstract: false, final false
  inline double_t NextDouble(double_t min, double_t max);

  /// @brief Method NextDouble2, addr 0x46d3fd0, size 0x60, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double2 NextDouble2();

  /// @brief Method NextDouble2, addr 0x46d41a4, size 0x68, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double2 NextDouble2(::Unity::Mathematics::double2 max);

  /// @brief Method NextDouble2, addr 0x46d43a4, size 0x78, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double2 NextDouble2(::Unity::Mathematics::double2 min, ::Unity::Mathematics::double2 max);

  /// @brief Method NextDouble2Direction, addr 0x46d4690, size 0xec, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double2 NextDouble2Direction();

  /// @brief Method NextDouble3, addr 0x46d4030, size 0x88, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 NextDouble3();

  /// @brief Method NextDouble3, addr 0x46d420c, size 0x94, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 NextDouble3(::Unity::Mathematics::double3 max);

  /// @brief Method NextDouble3, addr 0x46d441c, size 0xac, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 NextDouble3(::Unity::Mathematics::double3 min, ::Unity::Mathematics::double3 max);

  /// @brief Method NextDouble3Direction, addr 0x46d48ec, size 0x178, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 NextDouble3Direction();

  /// @brief Method NextDouble4, addr 0x46d40b8, size 0xb0, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 NextDouble4();

  /// @brief Method NextDouble4, addr 0x46d42a0, size 0xc0, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 NextDouble4(::Unity::Mathematics::double4 max);

  /// @brief Method NextDouble4, addr 0x46d44c8, size 0xe0, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 NextDouble4(::Unity::Mathematics::double4 min, ::Unity::Mathematics::double4 max);

  /// @brief Method NextFloat, addr 0x46d3af0, size 0x2c, virtual false, abstract: false, final false
  inline float_t NextFloat();

  /// @brief Method NextFloat, addr 0x46d3c48, size 0x30, virtual false, abstract: false, final false
  inline float_t NextFloat(float_t max);

  /// @brief Method NextFloat, addr 0x46d3dc8, size 0x38, virtual false, abstract: false, final false
  inline float_t NextFloat(float_t min, float_t max);

  /// @brief Method NextFloat2, addr 0x46d3b1c, size 0x48, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float2 NextFloat2();

  /// @brief Method NextFloat2, addr 0x46d3c78, size 0x50, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float2 NextFloat2(::Unity::Mathematics::float2 max);

  /// @brief Method NextFloat2, addr 0x46d3e00, size 0x60, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float2 NextFloat2(::Unity::Mathematics::float2 min, ::Unity::Mathematics::float2 max);

  /// @brief Method NextFloat2Direction, addr 0x46d45a8, size 0xe8, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float2 NextFloat2Direction();

  /// @brief Method NextFloat3, addr 0x46d3b64, size 0x64, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 NextFloat3();

  /// @brief Method NextFloat3, addr 0x46d3cc8, size 0x70, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 NextFloat3(::Unity::Mathematics::float3 max);

  /// @brief Method NextFloat3, addr 0x46d3e60, size 0x88, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 NextFloat3(::Unity::Mathematics::float3 min, ::Unity::Mathematics::float3 max);

  /// @brief Method NextFloat3Direction, addr 0x46d477c, size 0x170, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 NextFloat3Direction();

  /// @brief Method NextFloat4, addr 0x46d3bc8, size 0x80, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 NextFloat4();

  /// @brief Method NextFloat4, addr 0x46d3d38, size 0x90, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 NextFloat4(::Unity::Mathematics::float4 max);

  /// @brief Method NextFloat4, addr 0x46d3ee8, size 0xb0, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 NextFloat4(::Unity::Mathematics::float4 min, ::Unity::Mathematics::float4 max);

  /// @brief Method NextInt, addr 0x46d3388, size 0x20, virtual false, abstract: false, final false
  inline int32_t NextInt();

  /// @brief Method NextInt, addr 0x46d3478, size 0x28, virtual false, abstract: false, final false
  inline int32_t NextInt(int32_t max);

  /// @brief Method NextInt, addr 0x46d3598, size 0x2c, virtual false, abstract: false, final false
  inline int32_t NextInt(int32_t min, int32_t max);

  /// @brief Method NextInt2, addr 0x46d33a8, size 0x34, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int2 NextInt2();

  /// @brief Method NextInt2, addr 0x46d34a0, size 0x3c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int2 NextInt2(::Unity::Mathematics::int2 max);

  /// @brief Method NextInt2, addr 0x46d35c4, size 0x5c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int2 NextInt2(::Unity::Mathematics::int2 min, ::Unity::Mathematics::int2 max);

  /// @brief Method NextInt3, addr 0x46d33dc, size 0x44, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 NextInt3();

  /// @brief Method NextInt3, addr 0x46d34dc, size 0x54, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 NextInt3(::Unity::Mathematics::int3 max);

  /// @brief Method NextInt3, addr 0x46d3620, size 0x78, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 NextInt3(::Unity::Mathematics::int3 min, ::Unity::Mathematics::int3 max);

  /// @brief Method NextInt4, addr 0x46d3420, size 0x58, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 NextInt4();

  /// @brief Method NextInt4, addr 0x46d3530, size 0x68, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 NextInt4(::Unity::Mathematics::int4 max);

  /// @brief Method NextInt4, addr 0x46d3698, size 0xa8, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 NextInt4(::Unity::Mathematics::int4 min, ::Unity::Mathematics::int4 max);

  /// @brief Method NextQuaternionRotation, addr 0x46d4a64, size 0x168, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::quaternion NextQuaternionRotation();

  /// @brief Method NextState, addr 0x46d4bcc, size 0x1c, virtual false, abstract: false, final false
  inline uint32_t NextState();

  /// @brief Method NextUInt, addr 0x46d3740, size 0x20, virtual false, abstract: false, final false
  inline uint32_t NextUInt();

  /// @brief Method NextUInt, addr 0x46d3830, size 0x28, virtual false, abstract: false, final false
  inline uint32_t NextUInt(uint32_t max);

  /// @brief Method NextUInt, addr 0x46d3948, size 0x2c, virtual false, abstract: false, final false
  inline uint32_t NextUInt(uint32_t min, uint32_t max);

  /// @brief Method NextUInt2, addr 0x46d3760, size 0x34, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint2 NextUInt2();

  /// @brief Method NextUInt2, addr 0x46d3858, size 0x3c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint2 NextUInt2(::Unity::Mathematics::uint2 max);

  /// @brief Method NextUInt2, addr 0x46d3974, size 0x5c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint2 NextUInt2(::Unity::Mathematics::uint2 min, ::Unity::Mathematics::uint2 max);

  /// @brief Method NextUInt3, addr 0x46d3794, size 0x44, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint3 NextUInt3();

  /// @brief Method NextUInt3, addr 0x46d3894, size 0x50, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint3 NextUInt3(::Unity::Mathematics::uint3 max);

  /// @brief Method NextUInt3, addr 0x46d39d0, size 0x78, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint3 NextUInt3(::Unity::Mathematics::uint3 min, ::Unity::Mathematics::uint3 max);

  /// @brief Method NextUInt4, addr 0x46d37d8, size 0x58, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 NextUInt4();

  /// @brief Method NextUInt4, addr 0x46d38e4, size 0x64, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 NextUInt4(::Unity::Mathematics::uint4 max);

  /// @brief Method NextUInt4, addr 0x46d3a48, size 0xa8, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 NextUInt4(::Unity::Mathematics::uint4 min, ::Unity::Mathematics::uint4 max);

  /// @brief Method WangHash, addr 0x46d326c, size 0x28, virtual false, abstract: false, final false
  static inline uint32_t WangHash(uint32_t n);

  /// @brief Method .ctor, addr 0x46d3220, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(uint32_t seed);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Random();

  // Ctor Parameters [CppParam { name: "state", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr Random(uint32_t state) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10015 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field state, offset: 0x0, size: 0x4, def value: None
  uint32_t state;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::Random, state) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::Random, 0x4>, "Size mismatch!");

} // namespace Unity::Mathematics
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::Random, "Unity.Mathematics", "Random");

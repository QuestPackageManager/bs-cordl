#pragma once
// IWYU pragma private; include "Unity/Mathematics/math.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(math)
namespace Unity::Mathematics {
struct AffineTransform;
}
namespace Unity::Mathematics {
struct RigidTransform;
}
namespace Unity::Mathematics {
struct bool2;
}
namespace Unity::Mathematics {
struct bool2x2;
}
namespace Unity::Mathematics {
struct bool2x3;
}
namespace Unity::Mathematics {
struct bool2x4;
}
namespace Unity::Mathematics {
struct bool3;
}
namespace Unity::Mathematics {
struct bool3x2;
}
namespace Unity::Mathematics {
struct bool3x3;
}
namespace Unity::Mathematics {
struct bool3x4;
}
namespace Unity::Mathematics {
struct bool4;
}
namespace Unity::Mathematics {
struct bool4x2;
}
namespace Unity::Mathematics {
struct bool4x3;
}
namespace Unity::Mathematics {
struct bool4x4;
}
namespace Unity::Mathematics {
struct double2;
}
namespace Unity::Mathematics {
struct double2x2;
}
namespace Unity::Mathematics {
struct double2x3;
}
namespace Unity::Mathematics {
struct double2x4;
}
namespace Unity::Mathematics {
struct double3;
}
namespace Unity::Mathematics {
struct double3x2;
}
namespace Unity::Mathematics {
struct double3x3;
}
namespace Unity::Mathematics {
struct double3x4;
}
namespace Unity::Mathematics {
struct double4;
}
namespace Unity::Mathematics {
struct double4x2;
}
namespace Unity::Mathematics {
struct double4x3;
}
namespace Unity::Mathematics {
struct double4x4;
}
namespace Unity::Mathematics {
struct float2;
}
namespace Unity::Mathematics {
struct float2x2;
}
namespace Unity::Mathematics {
struct float2x3;
}
namespace Unity::Mathematics {
struct float2x4;
}
namespace Unity::Mathematics {
struct float3;
}
namespace Unity::Mathematics {
struct float3x2;
}
namespace Unity::Mathematics {
struct float3x3;
}
namespace Unity::Mathematics {
struct float3x4;
}
namespace Unity::Mathematics {
struct float4;
}
namespace Unity::Mathematics {
struct float4x2;
}
namespace Unity::Mathematics {
struct float4x3;
}
namespace Unity::Mathematics {
struct float4x4;
}
namespace Unity::Mathematics {
struct half2;
}
namespace Unity::Mathematics {
struct half3;
}
namespace Unity::Mathematics {
struct half4;
}
namespace Unity::Mathematics {
struct half;
}
namespace Unity::Mathematics {
struct int2;
}
namespace Unity::Mathematics {
struct int2x2;
}
namespace Unity::Mathematics {
struct int2x3;
}
namespace Unity::Mathematics {
struct int2x4;
}
namespace Unity::Mathematics {
struct int3;
}
namespace Unity::Mathematics {
struct int3x2;
}
namespace Unity::Mathematics {
struct int3x3;
}
namespace Unity::Mathematics {
struct int3x4;
}
namespace Unity::Mathematics {
struct int4;
}
namespace Unity::Mathematics {
struct int4x2;
}
namespace Unity::Mathematics {
struct int4x3;
}
namespace Unity::Mathematics {
struct int4x4;
}
namespace Unity::Mathematics {
struct math_LongDoubleUnion;
}
namespace Unity::Mathematics {
struct math_RotationOrder;
}
namespace Unity::Mathematics {
struct math_ShuffleComponent;
}
namespace Unity::Mathematics {
struct quaternion;
}
namespace Unity::Mathematics {
struct uint2;
}
namespace Unity::Mathematics {
struct uint2x2;
}
namespace Unity::Mathematics {
struct uint2x3;
}
namespace Unity::Mathematics {
struct uint2x4;
}
namespace Unity::Mathematics {
struct uint3;
}
namespace Unity::Mathematics {
struct uint3x2;
}
namespace Unity::Mathematics {
struct uint3x3;
}
namespace Unity::Mathematics {
struct uint3x4;
}
namespace Unity::Mathematics {
struct uint4;
}
namespace Unity::Mathematics {
struct uint4x2;
}
namespace Unity::Mathematics {
struct uint4x3;
}
namespace Unity::Mathematics {
struct uint4x4;
}
// Forward declare root types
namespace Unity::Mathematics {
struct math_RotationOrder;
}
namespace Unity::Mathematics {
struct math_ShuffleComponent;
}
namespace Unity::Mathematics {
class math;
}
namespace Unity::Mathematics {
struct math_LongDoubleUnion;
}
// Write type traits
MARK_VAL_T(::Unity::Mathematics::math_RotationOrder);
MARK_VAL_T(::Unity::Mathematics::math_ShuffleComponent);
MARK_REF_PTR_T(::Unity::Mathematics::math);
MARK_VAL_T(::Unity::Mathematics::math_LongDoubleUnion);
// Dependencies 
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.math/RotationOrder
struct CORDL_TYPE math_RotationOrder {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __math_RotationOrder_Unwrapped
enum struct __math_RotationOrder_Unwrapped : uint8_t {
__E_XYZ = static_cast<uint8_t>(0x0u),
__E_XZY = static_cast<uint8_t>(0x1u),
__E_YXZ = static_cast<uint8_t>(0x2u),
__E_YZX = static_cast<uint8_t>(0x3u),
__E_ZXY = static_cast<uint8_t>(0x4u),
__E_ZYX = static_cast<uint8_t>(0x5u),
__E_Default = static_cast<uint8_t>(0x4u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __math_RotationOrder_Unwrapped () const noexcept {
return static_cast<__math_RotationOrder_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint8_t () const noexcept {
return static_cast<uint8_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr math_RotationOrder() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr math_RotationOrder(uint8_t  value__) noexcept;

/// @brief Field Default value: U8(4)
static ::Unity::Mathematics::math_RotationOrder const Default;

/// @brief Field XYZ value: U8(0)
static ::Unity::Mathematics::math_RotationOrder const XYZ;

/// @brief Field XZY value: U8(1)
static ::Unity::Mathematics::math_RotationOrder const XZY;

/// @brief Field YXZ value: U8(2)
static ::Unity::Mathematics::math_RotationOrder const YXZ;

/// @brief Field YZX value: U8(3)
static ::Unity::Mathematics::math_RotationOrder const YZX;

/// @brief Field ZXY value: U8(4)
static ::Unity::Mathematics::math_RotationOrder const ZXY;

/// @brief Field ZYX value: U8(5)
static ::Unity::Mathematics::math_RotationOrder const ZYX;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13109};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field value__, offset: 0x0, size: 0x1, def value: None
 uint8_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::math_RotationOrder, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::math_RotationOrder, 0x1>, "Size mismatch!");

} // namespace end def Unity::Mathematics
// Dependencies 
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.math/ShuffleComponent
struct CORDL_TYPE math_ShuffleComponent {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __math_ShuffleComponent_Unwrapped
enum struct __math_ShuffleComponent_Unwrapped : uint8_t {
__E_LeftX = static_cast<uint8_t>(0x0u),
__E_LeftY = static_cast<uint8_t>(0x1u),
__E_LeftZ = static_cast<uint8_t>(0x2u),
__E_LeftW = static_cast<uint8_t>(0x3u),
__E_RightX = static_cast<uint8_t>(0x4u),
__E_RightY = static_cast<uint8_t>(0x5u),
__E_RightZ = static_cast<uint8_t>(0x6u),
__E_RightW = static_cast<uint8_t>(0x7u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __math_ShuffleComponent_Unwrapped () const noexcept {
return static_cast<__math_ShuffleComponent_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint8_t () const noexcept {
return static_cast<uint8_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr math_ShuffleComponent() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr math_ShuffleComponent(uint8_t  value__) noexcept;

/// @brief Field LeftW value: U8(3)
static ::Unity::Mathematics::math_ShuffleComponent const LeftW;

/// @brief Field LeftX value: U8(0)
static ::Unity::Mathematics::math_ShuffleComponent const LeftX;

/// @brief Field LeftY value: U8(1)
static ::Unity::Mathematics::math_ShuffleComponent const LeftY;

/// @brief Field LeftZ value: U8(2)
static ::Unity::Mathematics::math_ShuffleComponent const LeftZ;

/// @brief Field RightW value: U8(7)
static ::Unity::Mathematics::math_ShuffleComponent const RightW;

/// @brief Field RightX value: U8(4)
static ::Unity::Mathematics::math_ShuffleComponent const RightX;

/// @brief Field RightY value: U8(5)
static ::Unity::Mathematics::math_ShuffleComponent const RightY;

/// @brief Field RightZ value: U8(6)
static ::Unity::Mathematics::math_ShuffleComponent const RightZ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13110};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field value__, offset: 0x0, size: 0x1, def value: None
 uint8_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::math_ShuffleComponent, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::math_ShuffleComponent, 0x1>, "Size mismatch!");

} // namespace end def Unity::Mathematics
// Dependencies 
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.math/LongDoubleUnion
struct CORDL_TYPE math_LongDoubleUnion {
public:
// Declarations
/// @brief Field doubleValue, offset 0x0, size 0x8 
 __declspec(property(get=__cordl_internal_get_doubleValue, put=__cordl_internal_set_doubleValue)) double_t  doubleValue;

/// @brief Field longValue, offset 0x0, size 0x8 
 __declspec(property(get=__cordl_internal_get_longValue, put=__cordl_internal_set_longValue)) int64_t  longValue;

constexpr double_t const& __cordl_internal_get_doubleValue() const;

constexpr double_t& __cordl_internal_get_doubleValue() ;

constexpr int64_t const& __cordl_internal_get_longValue() const;

constexpr int64_t& __cordl_internal_get_longValue() ;

constexpr void __cordl_internal_set_doubleValue(double_t  value) ;

constexpr void __cordl_internal_set_longValue(int64_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr math_LongDoubleUnion() ;

// Ctor Parameters [CppParam { name: "longValue", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "doubleValue", ty: "double_t", modifiers: "", def_value: None }]
constexpr math_LongDoubleUnion(int64_t  longValue, double_t  doubleValue) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___longValue_padding[0x0];
/// @brief Field longValue, offset: 0x0, size: 0x8, def value: None
 int64_t  ___longValue;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___longValue_padding_forAlignment[0x0];
/// @brief Field longValue, offset: 0x0, size: 0x8, def value: None
 int64_t  ___longValue_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___doubleValue_padding[0x0];
/// @brief Field doubleValue, offset: 0x0, size: 0x8, def value: None
 double_t  ___doubleValue;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___doubleValue_padding_forAlignment[0x0];
/// @brief Field doubleValue, offset: 0x0, size: 0x8, def value: None
 double_t  ___doubleValue_forAlignment;
};
};
public:

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13111};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::math_LongDoubleUnion, 0x8>, "Size mismatch!");

} // namespace end def Unity::Mathematics
// Dependencies System.Object
namespace Unity::Mathematics {
// Is value type: false
// CS Name: Unity.Mathematics.math
class CORDL_TYPE math : public ::System::Object {
public:
// Declarations
using LongDoubleUnion = ::Unity::Mathematics::math_LongDoubleUnion;

using RotationOrder = ::Unity::Mathematics::math_RotationOrder;

using ShuffleComponent = ::Unity::Mathematics::math_ShuffleComponent;

/// @brief Method AffineTransform, addr 0x648a0e0, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::AffineTransform AffineTransform(::Unity::Mathematics::float3x4  m) ;

/// @brief Method AffineTransform, addr 0x648a0a0, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::AffineTransform AffineTransform(::Unity::Mathematics::float4x4  m) ;

/// @brief Method AffineTransform, addr 0x648a104, size 0x64, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::AffineTransform AffineTransform(::Unity::Mathematics::RigidTransform  rigid) ;

/// @brief Method AffineTransform, addr 0x648a010, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::AffineTransform AffineTransform(::Unity::Mathematics::float3x3  rotationScale) ;

/// @brief Method AffineTransform, addr 0x6489ec8, size 0x74, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::AffineTransform AffineTransform(::Unity::Mathematics::float3  translation, ::Unity::Mathematics::quaternion  rotation) ;

/// @brief Method AffineTransform, addr 0x6489f3c, size 0xb8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::AffineTransform AffineTransform(::Unity::Mathematics::float3  translation, ::Unity::Mathematics::quaternion  rotation, ::Unity::Mathematics::float3  scale) ;

/// @brief Method AffineTransform, addr 0x6489ff4, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::AffineTransform AffineTransform(::Unity::Mathematics::float3  translation, ::Unity::Mathematics::float3x3  rotationScale) ;

/// @brief Method Euler, addr 0x64acf18, size 0x154, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 Euler(::Unity::Mathematics::quaternion  q, ::Unity::Mathematics::math_RotationOrder  order) ;

/// @brief Method EulerXYZ, addr 0x64abdf4, size 0x2dc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 EulerXYZ(::Unity::Mathematics::quaternion  q) ;

/// @brief Method EulerXZY, addr 0x64ac0d0, size 0x2d8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 EulerXZY(::Unity::Mathematics::quaternion  q) ;

/// @brief Method EulerYXZ, addr 0x64ac3a8, size 0x2d8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 EulerYXZ(::Unity::Mathematics::quaternion  q) ;

/// @brief Method EulerYZX, addr 0x64ac680, size 0x2e0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 EulerYZX(::Unity::Mathematics::quaternion  q) ;

/// @brief Method EulerZXY, addr 0x64ac960, size 0x2dc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 EulerZXY(::Unity::Mathematics::quaternion  q) ;

/// @brief Method EulerZYX, addr 0x64acc3c, size 0x2dc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 EulerZYX(::Unity::Mathematics::quaternion  q) ;

/// @brief Method RigidTransform, addr 0x64b4e74, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::RigidTransform RigidTransform(::Unity::Mathematics::quaternion  rot, ::Unity::Mathematics::float3  pos) ;

/// @brief Method RigidTransform, addr 0x64b4e88, size 0x74, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::RigidTransform RigidTransform(::Unity::Mathematics::float3x3  rotation, ::Unity::Mathematics::float3  translation) ;

/// @brief Method RigidTransform, addr 0x64b4efc, size 0x6c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::RigidTransform RigidTransform(::Unity::Mathematics::float4x4  transform) ;

/// @brief Method abs, addr 0x649a2f0, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 abs(::Unity::Mathematics::double2  x) ;

/// @brief Method abs, addr 0x649a2fc, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 abs(::Unity::Mathematics::double3  x) ;

/// @brief Method abs, addr 0x649a30c, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 abs(::Unity::Mathematics::double4  x) ;

/// @brief Method abs, addr 0x649a2b8, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 abs(::Unity::Mathematics::float2  x) ;

/// @brief Method abs, addr 0x649a2c4, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 abs(::Unity::Mathematics::float3  x) ;

/// @brief Method abs, addr 0x649a2d4, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 abs(::Unity::Mathematics::float4  x) ;

/// @brief Method abs, addr 0x649a20c, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 abs(::Unity::Mathematics::int2  x) ;

/// @brief Method abs, addr 0x649a234, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 abs(::Unity::Mathematics::int3  x) ;

/// @brief Method abs, addr 0x649a264, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 abs(::Unity::Mathematics::int4  x) ;

/// @brief Method abs, addr 0x649a2e8, size 0x8, virtual false, abstract: false, final false
static inline double_t abs(double_t  x) ;

/// @brief Method abs, addr 0x649a2b0, size 0x8, virtual false, abstract: false, final false
static inline float_t abs(float_t  x) ;

/// @brief Method abs, addr 0x649a200, size 0xc, virtual false, abstract: false, final false
static inline int32_t abs(int32_t  x) ;

/// @brief Method abs, addr 0x649a2a4, size 0xc, virtual false, abstract: false, final false
static inline int64_t abs(int64_t  x) ;

/// @brief Method acos, addr 0x649d224, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 acos(::Unity::Mathematics::double2  x) ;

/// @brief Method acos, addr 0x649d2d4, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 acos(::Unity::Mathematics::double3  x) ;

/// @brief Method acos, addr 0x649d3d4, size 0x148, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 acos(::Unity::Mathematics::double4  x) ;

/// @brief Method acos, addr 0x649ceb0, size 0xb8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 acos(::Unity::Mathematics::float2  x) ;

/// @brief Method acos, addr 0x649cf68, size 0x108, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 acos(::Unity::Mathematics::float3  x) ;

/// @brief Method acos, addr 0x649d070, size 0x154, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 acos(::Unity::Mathematics::float4  x) ;

/// @brief Method acos, addr 0x649d1c4, size 0x60, virtual false, abstract: false, final false
static inline double_t acos(double_t  x) ;

/// @brief Method acos, addr 0x649ce48, size 0x68, virtual false, abstract: false, final false
static inline float_t acos(float_t  x) ;

/// @brief Method adj, addr 0x64b4b80, size 0xcc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 adj(::Unity::Mathematics::float3x3  m, ::ByRef<float_t>  det) ;

/// @brief Method adjInverse, addr 0x64b4c4c, size 0xec, virtual false, abstract: false, final false
static inline bool adjInverse(::Unity::Mathematics::float3x3  m, ::ByRef<::Unity::Mathematics::float3x3>  i, float_t  epsilon) ;

/// @brief Method all, addr 0x64a6d20, size 0x14, virtual false, abstract: false, final false
static inline bool all(::Unity::Mathematics::bool2  x) ;

/// @brief Method all, addr 0x64a6d34, size 0x18, virtual false, abstract: false, final false
static inline bool all(::Unity::Mathematics::bool3  x) ;

/// @brief Method all, addr 0x64a6d4c, size 0x14, virtual false, abstract: false, final false
static inline bool all(::Unity::Mathematics::bool4  x) ;

/// @brief Method all, addr 0x64a6e70, size 0x14, virtual false, abstract: false, final false
static inline bool all(::Unity::Mathematics::double2  x) ;

/// @brief Method all, addr 0x64a6e84, size 0x24, virtual false, abstract: false, final false
static inline bool all(::Unity::Mathematics::double3  x) ;

/// @brief Method all, addr 0x64a6ea8, size 0x28, virtual false, abstract: false, final false
static inline bool all(::Unity::Mathematics::double4  x) ;

/// @brief Method all, addr 0x64a6e10, size 0x14, virtual false, abstract: false, final false
static inline bool all(::Unity::Mathematics::float2  x) ;

/// @brief Method all, addr 0x64a6e24, size 0x24, virtual false, abstract: false, final false
static inline bool all(::Unity::Mathematics::float3  x) ;

/// @brief Method all, addr 0x64a6e48, size 0x28, virtual false, abstract: false, final false
static inline bool all(::Unity::Mathematics::float4  x) ;

/// @brief Method all, addr 0x64a6d60, size 0x14, virtual false, abstract: false, final false
static inline bool all(::Unity::Mathematics::int2  x) ;

/// @brief Method all, addr 0x64a6d74, size 0x24, virtual false, abstract: false, final false
static inline bool all(::Unity::Mathematics::int3  x) ;

/// @brief Method all, addr 0x64a6d98, size 0x20, virtual false, abstract: false, final false
static inline bool all(::Unity::Mathematics::int4  x) ;

/// @brief Method all, addr 0x64a6db8, size 0x14, virtual false, abstract: false, final false
static inline bool all(::Unity::Mathematics::uint2  x) ;

/// @brief Method all, addr 0x64a6dcc, size 0x24, virtual false, abstract: false, final false
static inline bool all(::Unity::Mathematics::uint3  x) ;

/// @brief Method all, addr 0x64a6df0, size 0x20, virtual false, abstract: false, final false
static inline bool all(::Unity::Mathematics::uint4  x) ;

/// @brief Method angle, addr 0x64b476c, size 0x1b8, virtual false, abstract: false, final false
static inline float_t angle(::Unity::Mathematics::quaternion  q1, ::Unity::Mathematics::quaternion  q2) ;

/// @brief Method any, addr 0x64a6bc4, size 0x10, virtual false, abstract: false, final false
static inline bool any(::Unity::Mathematics::bool2  x) ;

/// @brief Method any, addr 0x64a6bd4, size 0x14, virtual false, abstract: false, final false
static inline bool any(::Unity::Mathematics::bool3  x) ;

/// @brief Method any, addr 0x64a6be8, size 0x10, virtual false, abstract: false, final false
static inline bool any(::Unity::Mathematics::bool4  x) ;

/// @brief Method any, addr 0x64a6cc4, size 0x14, virtual false, abstract: false, final false
static inline bool any(::Unity::Mathematics::double2  x) ;

/// @brief Method any, addr 0x64a6cd8, size 0x20, virtual false, abstract: false, final false
static inline bool any(::Unity::Mathematics::double3  x) ;

/// @brief Method any, addr 0x64a6cf8, size 0x28, virtual false, abstract: false, final false
static inline bool any(::Unity::Mathematics::double4  x) ;

/// @brief Method any, addr 0x64a6c68, size 0x14, virtual false, abstract: false, final false
static inline bool any(::Unity::Mathematics::float2  x) ;

/// @brief Method any, addr 0x64a6c7c, size 0x20, virtual false, abstract: false, final false
static inline bool any(::Unity::Mathematics::float3  x) ;

/// @brief Method any, addr 0x64a6c9c, size 0x28, virtual false, abstract: false, final false
static inline bool any(::Unity::Mathematics::float4  x) ;

/// @brief Method any, addr 0x64a6bf8, size 0xc, virtual false, abstract: false, final false
static inline bool any(::Unity::Mathematics::int2  x) ;

/// @brief Method any, addr 0x64a6c04, size 0x14, virtual false, abstract: false, final false
static inline bool any(::Unity::Mathematics::int3  x) ;

/// @brief Method any, addr 0x64a6c18, size 0x18, virtual false, abstract: false, final false
static inline bool any(::Unity::Mathematics::int4  x) ;

/// @brief Method any, addr 0x64a6c30, size 0xc, virtual false, abstract: false, final false
static inline bool any(::Unity::Mathematics::uint2  x) ;

/// @brief Method any, addr 0x64a6c3c, size 0x14, virtual false, abstract: false, final false
static inline bool any(::Unity::Mathematics::uint3  x) ;

/// @brief Method any, addr 0x64a6c50, size 0x18, virtual false, abstract: false, final false
static inline bool any(::Unity::Mathematics::uint4  x) ;

/// @brief Method asdouble, addr 0x649855c, size 0x8, virtual false, abstract: false, final false
static inline double_t asdouble(int64_t  x) ;

/// @brief Method asdouble, addr 0x6498564, size 0x8, virtual false, abstract: false, final false
static inline double_t asdouble(uint64_t  x) ;

/// @brief Method asfloat, addr 0x64984ac, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 asfloat(::Unity::Mathematics::int2  x) ;

/// @brief Method asfloat, addr 0x64984f4, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 asfloat(::Unity::Mathematics::uint2  x) ;

/// @brief Method asfloat, addr 0x64984bc, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 asfloat(::Unity::Mathematics::int3  x) ;

/// @brief Method asfloat, addr 0x6498504, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 asfloat(::Unity::Mathematics::uint3  x) ;

/// @brief Method asfloat, addr 0x64984d0, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 asfloat(::Unity::Mathematics::int4  x) ;

/// @brief Method asfloat, addr 0x6498518, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 asfloat(::Unity::Mathematics::uint4  x) ;

/// @brief Method asfloat, addr 0x64984a4, size 0x8, virtual false, abstract: false, final false
static inline float_t asfloat(int32_t  x) ;

/// @brief Method asfloat, addr 0x64984ec, size 0x8, virtual false, abstract: false, final false
static inline float_t asfloat(uint32_t  x) ;

/// @brief Method asin, addr 0x649e6a0, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 asin(::Unity::Mathematics::double2  x) ;

/// @brief Method asin, addr 0x649e750, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 asin(::Unity::Mathematics::double3  x) ;

/// @brief Method asin, addr 0x649e850, size 0x148, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 asin(::Unity::Mathematics::double4  x) ;

/// @brief Method asin, addr 0x649e32c, size 0xb8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 asin(::Unity::Mathematics::float2  x) ;

/// @brief Method asin, addr 0x649e3e4, size 0x108, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 asin(::Unity::Mathematics::float3  x) ;

/// @brief Method asin, addr 0x649e4ec, size 0x154, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 asin(::Unity::Mathematics::float4  x) ;

/// @brief Method asin, addr 0x649e640, size 0x60, virtual false, abstract: false, final false
static inline double_t asin(double_t  x) ;

/// @brief Method asin, addr 0x649e2c4, size 0x68, virtual false, abstract: false, final false
static inline float_t asin(float_t  x) ;

/// @brief Method asint, addr 0x64983f0, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 asint(::Unity::Mathematics::float2  x) ;

/// @brief Method asint, addr 0x64983d8, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 asint(::Unity::Mathematics::uint2  x) ;

/// @brief Method asint, addr 0x6498400, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 asint(::Unity::Mathematics::float3  x) ;

/// @brief Method asint, addr 0x64983dc, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 asint(::Unity::Mathematics::uint3  x) ;

/// @brief Method asint, addr 0x6498414, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 asint(::Unity::Mathematics::float4  x) ;

/// @brief Method asint, addr 0x64983e4, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 asint(::Unity::Mathematics::uint4  x) ;

/// @brief Method asint, addr 0x64983e8, size 0x8, virtual false, abstract: false, final false
static inline int32_t asint(float_t  x) ;

/// @brief Method asint, addr 0x64983d4, size 0x4, virtual false, abstract: false, final false
static inline int32_t asint(uint32_t  x) ;

/// @brief Method aslong, addr 0x6498490, size 0x8, virtual false, abstract: false, final false
static inline int64_t aslong(double_t  x) ;

/// @brief Method aslong, addr 0x649848c, size 0x4, virtual false, abstract: false, final false
static inline int64_t aslong(uint64_t  x) ;

/// @brief Method asuint, addr 0x649844c, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 asuint(::Unity::Mathematics::float2  x) ;

/// @brief Method asuint, addr 0x6498434, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 asuint(::Unity::Mathematics::int2  x) ;

/// @brief Method asuint, addr 0x649845c, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 asuint(::Unity::Mathematics::float3  x) ;

/// @brief Method asuint, addr 0x6498438, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 asuint(::Unity::Mathematics::int3  x) ;

/// @brief Method asuint, addr 0x6498470, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 asuint(::Unity::Mathematics::float4  x) ;

/// @brief Method asuint, addr 0x6498440, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 asuint(::Unity::Mathematics::int4  x) ;

/// @brief Method asuint, addr 0x6498444, size 0x8, virtual false, abstract: false, final false
static inline uint32_t asuint(float_t  x) ;

/// @brief Method asuint, addr 0x6498430, size 0x4, virtual false, abstract: false, final false
static inline uint32_t asuint(int32_t  x) ;

/// @brief Method asulong, addr 0x649849c, size 0x8, virtual false, abstract: false, final false
static inline uint64_t asulong(double_t  x) ;

/// @brief Method asulong, addr 0x6498498, size 0x4, virtual false, abstract: false, final false
static inline uint64_t asulong(int64_t  x) ;

/// @brief Method atan, addr 0x649b5f4, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 atan(::Unity::Mathematics::double2  x) ;

/// @brief Method atan, addr 0x649b6a4, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 atan(::Unity::Mathematics::double3  x) ;

/// @brief Method atan, addr 0x649b7a4, size 0x148, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 atan(::Unity::Mathematics::double4  x) ;

/// @brief Method atan, addr 0x649b280, size 0xb8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 atan(::Unity::Mathematics::float2  x) ;

/// @brief Method atan, addr 0x649b338, size 0x108, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 atan(::Unity::Mathematics::float3  x) ;

/// @brief Method atan, addr 0x649b440, size 0x154, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 atan(::Unity::Mathematics::float4  x) ;

/// @brief Method atan, addr 0x649b594, size 0x60, virtual false, abstract: false, final false
static inline double_t atan(double_t  x) ;

/// @brief Method atan, addr 0x649b218, size 0x68, virtual false, abstract: false, final false
static inline float_t atan(float_t  x) ;

/// @brief Method atan2, addr 0x649bd40, size 0xc8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 atan2(::Unity::Mathematics::double2  y, ::Unity::Mathematics::double2  x) ;

/// @brief Method atan2, addr 0x649be08, size 0x120, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 atan2(::Unity::Mathematics::double3  y, ::Unity::Mathematics::double3  x) ;

/// @brief Method atan2, addr 0x649bf28, size 0x178, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 atan2(::Unity::Mathematics::double4  y, ::Unity::Mathematics::double4  x) ;

/// @brief Method atan2, addr 0x649b95c, size 0xd0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 atan2(::Unity::Mathematics::float2  y, ::Unity::Mathematics::float2  x) ;

/// @brief Method atan2, addr 0x649ba2c, size 0x128, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 atan2(::Unity::Mathematics::float3  y, ::Unity::Mathematics::float3  x) ;

/// @brief Method atan2, addr 0x649bb54, size 0x184, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 atan2(::Unity::Mathematics::float4  y, ::Unity::Mathematics::float4  x) ;

/// @brief Method atan2, addr 0x649bcd8, size 0x68, virtual false, abstract: false, final false
static inline double_t atan2(double_t  y, double_t  x) ;

/// @brief Method atan2, addr 0x649b8ec, size 0x70, virtual false, abstract: false, final false
static inline float_t atan2(float_t  y, float_t  x) ;

/// @brief Method back, addr 0x64abdc4, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 back() ;

/// @brief Method bitmask, addr 0x6498534, size 0x28, virtual false, abstract: false, final false
static inline int32_t bitmask(::Unity::Mathematics::bool4  value) ;

/// @brief Method bool2, addr 0x648aa7c, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2 bool2(bool  v) ;

/// @brief Method bool2, addr 0x648aa58, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2 bool2(bool  x, bool  y) ;

/// @brief Method bool2, addr 0x648aa70, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2 bool2(::Unity::Mathematics::bool2  xy) ;

/// @brief Method bool2x2, addr 0x648ad98, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 bool2x2(::Unity::Mathematics::bool2  c0, ::Unity::Mathematics::bool2  c1) ;

/// @brief Method bool2x2, addr 0x648ada0, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 bool2x2(bool  m00, bool  m01, bool  m10, bool  m11) ;

/// @brief Method bool2x2, addr 0x648adc4, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 bool2x2(bool  v) ;

/// @brief Method bool2x3, addr 0x648aee0, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x3 bool2x3(::Unity::Mathematics::bool2  c0, ::Unity::Mathematics::bool2  c1, ::Unity::Mathematics::bool2  c2) ;

/// @brief Method bool2x3, addr 0x648aef4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x3 bool2x3(bool  m00, bool  m01, bool  m02, bool  m10, bool  m11, bool  m12) ;

/// @brief Method bool2x3, addr 0x648af2c, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x3 bool2x3(bool  v) ;

/// @brief Method bool2x4, addr 0x648b0c0, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x4 bool2x4(::Unity::Mathematics::bool2  c0, ::Unity::Mathematics::bool2  c1, ::Unity::Mathematics::bool2  c2, ::Unity::Mathematics::bool2  c3) ;

/// @brief Method bool2x4, addr 0x648b0dc, size 0x48, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x4 bool2x4(bool  m00, bool  m01, bool  m02, bool  m03, bool  m10, bool  m11, bool  m12, bool  m13) ;

/// @brief Method bool2x4, addr 0x648b124, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x4 bool2x4(bool  v) ;

/// @brief Method bool3, addr 0x648b370, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 bool3(bool  v) ;

/// @brief Method bool3, addr 0x648b300, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 bool3(bool  x, bool  y, bool  z) ;

/// @brief Method bool3, addr 0x648b324, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 bool3(bool  x, ::Unity::Mathematics::bool2  yz) ;

/// @brief Method bool3, addr 0x648b340, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 bool3(::Unity::Mathematics::bool2  xy, bool  z) ;

/// @brief Method bool3, addr 0x648b360, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 bool3(::Unity::Mathematics::bool3  xyz) ;

/// @brief Method bool3x2, addr 0x648b6e4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x2 bool3x2(::Unity::Mathematics::bool3  c0, ::Unity::Mathematics::bool3  c1) ;

/// @brief Method bool3x2, addr 0x648b6ec, size 0x54, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x2 bool3x2(bool  m00, bool  m01, bool  m10, bool  m11, bool  m20, bool  m21) ;

/// @brief Method bool3x2, addr 0x648b740, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x2 bool3x2(bool  v) ;

/// @brief Method bool3x3, addr 0x648b8e4, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 bool3x3(::Unity::Mathematics::bool3  c0, ::Unity::Mathematics::bool3  c1, ::Unity::Mathematics::bool3  c2) ;

/// @brief Method bool3x3, addr 0x648b918, size 0x7c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 bool3x3(bool  m00, bool  m01, bool  m02, bool  m10, bool  m11, bool  m12, bool  m20, bool  m21, bool  m22) ;

/// @brief Method bool3x3, addr 0x648b994, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 bool3x3(bool  v) ;

/// @brief Method bool3x4, addr 0x648bc24, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 bool3x4(::Unity::Mathematics::bool3  c0, ::Unity::Mathematics::bool3  c1, ::Unity::Mathematics::bool3  c2, ::Unity::Mathematics::bool3  c3) ;

/// @brief Method bool3x4, addr 0x648bc68, size 0xa8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 bool3x4(bool  m00, bool  m01, bool  m02, bool  m03, bool  m10, bool  m11, bool  m12, bool  m13, bool  m20, bool  m21, bool  m22, bool  m23) ;

/// @brief Method bool3x4, addr 0x648bd10, size 0x48, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 bool3x4(bool  v) ;

/// @brief Method bool4, addr 0x648c1a4, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4 bool4(bool  v) ;

/// @brief Method bool4, addr 0x648c0ac, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4 bool4(bool  x, bool  y, bool  z, bool  w) ;

/// @brief Method bool4, addr 0x648c0e0, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4 bool4(bool  x, bool  y, ::Unity::Mathematics::bool2  zw) ;

/// @brief Method bool4, addr 0x648c100, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4 bool4(bool  x, ::Unity::Mathematics::bool2  yz, bool  w) ;

/// @brief Method bool4, addr 0x648c124, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4 bool4(bool  x, ::Unity::Mathematics::bool3  yzw) ;

/// @brief Method bool4, addr 0x648c138, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4 bool4(::Unity::Mathematics::bool2  xy, bool  z, bool  w) ;

/// @brief Method bool4, addr 0x648c164, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4 bool4(::Unity::Mathematics::bool2  xy, ::Unity::Mathematics::bool2  zw) ;

/// @brief Method bool4, addr 0x648c17c, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4 bool4(::Unity::Mathematics::bool3  xyz, bool  w) ;

/// @brief Method bool4, addr 0x648c19c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4 bool4(::Unity::Mathematics::bool4  xyzw) ;

/// @brief Method bool4x2, addr 0x648c550, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x2 bool4x2(::Unity::Mathematics::bool4  c0, ::Unity::Mathematics::bool4  c1) ;

/// @brief Method bool4x2, addr 0x648c558, size 0x5c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x2 bool4x2(bool  m00, bool  m01, bool  m10, bool  m11, bool  m20, bool  m21, bool  m30, bool  m31) ;

/// @brief Method bool4x2, addr 0x648c5b4, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x2 bool4x2(bool  v) ;

/// @brief Method bool4x3, addr 0x648c7d0, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x3 bool4x3(::Unity::Mathematics::bool4  c0, ::Unity::Mathematics::bool4  c1, ::Unity::Mathematics::bool4  c2) ;

/// @brief Method bool4x3, addr 0x648c7dc, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x3 bool4x3(bool  m00, bool  m01, bool  m02, bool  m10, bool  m11, bool  m12, bool  m20, bool  m21, bool  m22, bool  m30, bool  m31, bool  m32) ;

/// @brief Method bool4x3, addr 0x648c86c, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x3 bool4x3(bool  v) ;

/// @brief Method bool4x4, addr 0x648cb40, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x4 bool4x4(::Unity::Mathematics::bool4  c0, ::Unity::Mathematics::bool4  c1, ::Unity::Mathematics::bool4  c2, ::Unity::Mathematics::bool4  c3) ;

/// @brief Method bool4x4, addr 0x648cb50, size 0xc8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x4 bool4x4(bool  m00, bool  m01, bool  m02, bool  m03, bool  m10, bool  m11, bool  m12, bool  m13, bool  m20, bool  m21, bool  m22, bool  m23, bool  m30, bool  m31, bool  m32, bool  m33) ;

/// @brief Method bool4x4, addr 0x648cc18, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x4 bool4x4(bool  v) ;

/// @brief Method ceil, addr 0x649f2e0, size 0x9c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 ceil(::Unity::Mathematics::double2  x) ;

/// @brief Method ceil, addr 0x649f37c, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 ceil(::Unity::Mathematics::double3  x) ;

/// @brief Method ceil, addr 0x649f45c, size 0x11c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 ceil(::Unity::Mathematics::double4  x) ;

/// @brief Method ceil, addr 0x649efe8, size 0x9c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 ceil(::Unity::Mathematics::float2  x) ;

/// @brief Method ceil, addr 0x649f084, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 ceil(::Unity::Mathematics::float3  x) ;

/// @brief Method ceil, addr 0x649f164, size 0x11c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 ceil(::Unity::Mathematics::float4  x) ;

/// @brief Method ceil, addr 0x649f280, size 0x60, virtual false, abstract: false, final false
static inline double_t ceil(double_t  x) ;

/// @brief Method ceil, addr 0x649ef88, size 0x60, virtual false, abstract: false, final false
static inline float_t ceil(float_t  x) ;

/// @brief Method ceillog2, addr 0x64aa11c, size 0x7c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 ceillog2(::Unity::Mathematics::int2  x) ;

/// @brief Method ceillog2, addr 0x64aa374, size 0x7c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 ceillog2(::Unity::Mathematics::uint2  x) ;

/// @brief Method ceillog2, addr 0x64aa198, size 0xb4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 ceillog2(::Unity::Mathematics::int3  x) ;

/// @brief Method ceillog2, addr 0x64aa3f0, size 0xb4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 ceillog2(::Unity::Mathematics::uint3  x) ;

/// @brief Method ceillog2, addr 0x64aa24c, size 0xf0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 ceillog2(::Unity::Mathematics::int4  x) ;

/// @brief Method ceillog2, addr 0x64aa4a4, size 0xf0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 ceillog2(::Unity::Mathematics::uint4  x) ;

/// @brief Method ceillog2, addr 0x64aa0e4, size 0x38, virtual false, abstract: false, final false
static inline int32_t ceillog2(int32_t  x) ;

/// @brief Method ceillog2, addr 0x64aa33c, size 0x38, virtual false, abstract: false, final false
static inline int32_t ceillog2(uint32_t  x) ;

/// @brief Method ceilpow2, addr 0x64a9c9c, size 0x88, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 ceilpow2(::Unity::Mathematics::int2  x) ;

/// @brief Method ceilpow2, addr 0x64a9d24, size 0xa4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 ceilpow2(::Unity::Mathematics::int3  x) ;

/// @brief Method ceilpow2, addr 0x64a9dc8, size 0x104, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 ceilpow2(::Unity::Mathematics::int4  x) ;

/// @brief Method ceilpow2, addr 0x64a9eec, size 0x6c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 ceilpow2(::Unity::Mathematics::uint2  x) ;

/// @brief Method ceilpow2, addr 0x64a9f58, size 0x94, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 ceilpow2(::Unity::Mathematics::uint3  x) ;

/// @brief Method ceilpow2, addr 0x64a9fec, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 ceilpow2(::Unity::Mathematics::uint4  x) ;

/// @brief Method ceilpow2, addr 0x64a9c7c, size 0x20, virtual false, abstract: false, final false
static inline int32_t ceilpow2(int32_t  x) ;

/// @brief Method ceilpow2, addr 0x64aa09c, size 0x24, virtual false, abstract: false, final false
static inline int64_t ceilpow2(int64_t  x) ;

/// @brief Method ceilpow2, addr 0x64a9ecc, size 0x20, virtual false, abstract: false, final false
static inline uint32_t ceilpow2(uint32_t  x) ;

/// @brief Method ceilpow2, addr 0x64aa0c0, size 0x24, virtual false, abstract: false, final false
static inline uint64_t ceilpow2(uint64_t  x) ;

/// @brief Method chgsign, addr 0x64ab968, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 chgsign(::Unity::Mathematics::float2  x, ::Unity::Mathematics::float2  y) ;

/// @brief Method chgsign, addr 0x64ab9a0, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 chgsign(::Unity::Mathematics::float3  x, ::Unity::Mathematics::float3  y) ;

/// @brief Method chgsign, addr 0x64ab9ec, size 0x6c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 chgsign(::Unity::Mathematics::float4  x, ::Unity::Mathematics::float4  y) ;

/// @brief Method chgsign, addr 0x64ab950, size 0x18, virtual false, abstract: false, final false
static inline float_t chgsign(float_t  x, float_t  y) ;

/// @brief Method clamp, addr 0x6499d98, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 clamp(::Unity::Mathematics::double2  valueToClamp, ::Unity::Mathematics::double2  lowerBound, ::Unity::Mathematics::double2  upperBound) ;

/// @brief Method clamp, addr 0x6499ddc, size 0x88, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 clamp(::Unity::Mathematics::double3  valueToClamp, ::Unity::Mathematics::double3  lowerBound, ::Unity::Mathematics::double3  upperBound) ;

/// @brief Method clamp, addr 0x6499e64, size 0xb4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 clamp(::Unity::Mathematics::double4  valueToClamp, ::Unity::Mathematics::double4  lowerBound, ::Unity::Mathematics::double4  upperBound) ;

/// @brief Method clamp, addr 0x6499c38, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 clamp(::Unity::Mathematics::float2  valueToClamp, ::Unity::Mathematics::float2  lowerBound, ::Unity::Mathematics::float2  upperBound) ;

/// @brief Method clamp, addr 0x6499c7c, size 0x78, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 clamp(::Unity::Mathematics::float3  valueToClamp, ::Unity::Mathematics::float3  lowerBound, ::Unity::Mathematics::float3  upperBound) ;

/// @brief Method clamp, addr 0x6499cf4, size 0x74, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 clamp(::Unity::Mathematics::float4  valueToClamp, ::Unity::Mathematics::float4  lowerBound, ::Unity::Mathematics::float4  upperBound) ;

/// @brief Method clamp, addr 0x6499a14, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 clamp(::Unity::Mathematics::int2  valueToClamp, ::Unity::Mathematics::int2  lowerBound, ::Unity::Mathematics::int2  upperBound) ;

/// @brief Method clamp, addr 0x6499a48, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 clamp(::Unity::Mathematics::int3  valueToClamp, ::Unity::Mathematics::int3  lowerBound, ::Unity::Mathematics::int3  upperBound) ;

/// @brief Method clamp, addr 0x6499a8c, size 0x64, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 clamp(::Unity::Mathematics::int4  valueToClamp, ::Unity::Mathematics::int4  lowerBound, ::Unity::Mathematics::int4  upperBound) ;

/// @brief Method clamp, addr 0x6499b04, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 clamp(::Unity::Mathematics::uint2  valueToClamp, ::Unity::Mathematics::uint2  lowerBound, ::Unity::Mathematics::uint2  upperBound) ;

/// @brief Method clamp, addr 0x6499b38, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 clamp(::Unity::Mathematics::uint3  valueToClamp, ::Unity::Mathematics::uint3  lowerBound, ::Unity::Mathematics::uint3  upperBound) ;

/// @brief Method clamp, addr 0x6499b7c, size 0x64, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 clamp(::Unity::Mathematics::uint4  valueToClamp, ::Unity::Mathematics::uint4  lowerBound, ::Unity::Mathematics::uint4  upperBound) ;

/// @brief Method clamp, addr 0x6499d68, size 0x30, virtual false, abstract: false, final false
static inline double_t clamp(double_t  valueToClamp, double_t  lowerBound, double_t  upperBound) ;

/// @brief Method clamp, addr 0x6499c08, size 0x30, virtual false, abstract: false, final false
static inline float_t clamp(float_t  valueToClamp, float_t  lowerBound, float_t  upperBound) ;

/// @brief Method clamp, addr 0x6499a00, size 0x14, virtual false, abstract: false, final false
static inline int32_t clamp(int32_t  valueToClamp, int32_t  lowerBound, int32_t  upperBound) ;

/// @brief Method clamp, addr 0x6499be0, size 0x14, virtual false, abstract: false, final false
static inline int64_t clamp(int64_t  valueToClamp, int64_t  lowerBound, int64_t  upperBound) ;

/// @brief Method clamp, addr 0x6499af0, size 0x14, virtual false, abstract: false, final false
static inline uint32_t clamp(uint32_t  valueToClamp, uint32_t  lowerBound, uint32_t  upperBound) ;

/// @brief Method clamp, addr 0x6499bf4, size 0x14, virtual false, abstract: false, final false
static inline uint64_t clamp(uint64_t  valueToClamp, uint64_t  lowerBound, uint64_t  upperBound) ;

/// @brief Method cmax, addr 0x64aae64, size 0x1c, virtual false, abstract: false, final false
static inline double_t cmax(::Unity::Mathematics::double2  x) ;

/// @brief Method cmax, addr 0x64aae80, size 0x30, virtual false, abstract: false, final false
static inline double_t cmax(::Unity::Mathematics::double3  x) ;

/// @brief Method cmax, addr 0x64aaeb0, size 0x44, virtual false, abstract: false, final false
static inline double_t cmax(::Unity::Mathematics::double4  x) ;

/// @brief Method cmax, addr 0x64aadd4, size 0x1c, virtual false, abstract: false, final false
static inline float_t cmax(::Unity::Mathematics::float2  x) ;

/// @brief Method cmax, addr 0x64aadf0, size 0x30, virtual false, abstract: false, final false
static inline float_t cmax(::Unity::Mathematics::float3  x) ;

/// @brief Method cmax, addr 0x64aae20, size 0x44, virtual false, abstract: false, final false
static inline float_t cmax(::Unity::Mathematics::float4  x) ;

/// @brief Method cmax, addr 0x64aad3c, size 0x10, virtual false, abstract: false, final false
static inline int32_t cmax(::Unity::Mathematics::int2  x) ;

/// @brief Method cmax, addr 0x64aad4c, size 0x18, virtual false, abstract: false, final false
static inline int32_t cmax(::Unity::Mathematics::int3  x) ;

/// @brief Method cmax, addr 0x64aad64, size 0x24, virtual false, abstract: false, final false
static inline int32_t cmax(::Unity::Mathematics::int4  x) ;

/// @brief Method cmax, addr 0x64aad88, size 0x10, virtual false, abstract: false, final false
static inline uint32_t cmax(::Unity::Mathematics::uint2  x) ;

/// @brief Method cmax, addr 0x64aad98, size 0x18, virtual false, abstract: false, final false
static inline uint32_t cmax(::Unity::Mathematics::uint3  x) ;

/// @brief Method cmax, addr 0x64aadb0, size 0x24, virtual false, abstract: false, final false
static inline uint32_t cmax(::Unity::Mathematics::uint4  x) ;

/// @brief Method cmin, addr 0x64aacac, size 0x1c, virtual false, abstract: false, final false
static inline double_t cmin(::Unity::Mathematics::double2  x) ;

/// @brief Method cmin, addr 0x64aacc8, size 0x30, virtual false, abstract: false, final false
static inline double_t cmin(::Unity::Mathematics::double3  x) ;

/// @brief Method cmin, addr 0x64aacf8, size 0x44, virtual false, abstract: false, final false
static inline double_t cmin(::Unity::Mathematics::double4  x) ;

/// @brief Method cmin, addr 0x64aac1c, size 0x1c, virtual false, abstract: false, final false
static inline float_t cmin(::Unity::Mathematics::float2  x) ;

/// @brief Method cmin, addr 0x64aac38, size 0x30, virtual false, abstract: false, final false
static inline float_t cmin(::Unity::Mathematics::float3  x) ;

/// @brief Method cmin, addr 0x64aac68, size 0x44, virtual false, abstract: false, final false
static inline float_t cmin(::Unity::Mathematics::float4  x) ;

/// @brief Method cmin, addr 0x64aab84, size 0x10, virtual false, abstract: false, final false
static inline int32_t cmin(::Unity::Mathematics::int2  x) ;

/// @brief Method cmin, addr 0x64aab94, size 0x18, virtual false, abstract: false, final false
static inline int32_t cmin(::Unity::Mathematics::int3  x) ;

/// @brief Method cmin, addr 0x64aabac, size 0x24, virtual false, abstract: false, final false
static inline int32_t cmin(::Unity::Mathematics::int4  x) ;

/// @brief Method cmin, addr 0x64aabd0, size 0x10, virtual false, abstract: false, final false
static inline uint32_t cmin(::Unity::Mathematics::uint2  x) ;

/// @brief Method cmin, addr 0x64aabe0, size 0x18, virtual false, abstract: false, final false
static inline uint32_t cmin(::Unity::Mathematics::uint3  x) ;

/// @brief Method cmin, addr 0x64aabf8, size 0x24, virtual false, abstract: false, final false
static inline uint32_t cmin(::Unity::Mathematics::uint4  x) ;

/// @brief Method compress, addr 0x64ab1a4, size 0x58, virtual false, abstract: false, final false
static inline int32_t compress(float_t*  output, int32_t  index, ::Unity::Mathematics::float4  val, ::Unity::Mathematics::bool4  mask) ;

/// @brief Method compress, addr 0x64ab0e4, size 0x60, virtual false, abstract: false, final false
static inline int32_t compress(int32_t*  output, int32_t  index, ::Unity::Mathematics::int4  val, ::Unity::Mathematics::bool4  mask) ;

/// @brief Method compress, addr 0x64ab144, size 0x60, virtual false, abstract: false, final false
static inline int32_t compress(uint32_t*  output, int32_t  index, ::Unity::Mathematics::uint4  val, ::Unity::Mathematics::bool4  mask) ;

/// @brief Method conjugate, addr 0x64b37a8, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::quaternion conjugate(::Unity::Mathematics::quaternion  q) ;

/// @brief Method cos, addr 0x649c47c, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 cos(::Unity::Mathematics::double2  x) ;

/// @brief Method cos, addr 0x649c52c, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 cos(::Unity::Mathematics::double3  x) ;

/// @brief Method cos, addr 0x649c62c, size 0x148, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 cos(::Unity::Mathematics::double4  x) ;

/// @brief Method cos, addr 0x649c108, size 0xb8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 cos(::Unity::Mathematics::float2  x) ;

/// @brief Method cos, addr 0x649c1c0, size 0x108, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 cos(::Unity::Mathematics::float3  x) ;

/// @brief Method cos, addr 0x649c2c8, size 0x154, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 cos(::Unity::Mathematics::float4  x) ;

/// @brief Method cos, addr 0x649c41c, size 0x60, virtual false, abstract: false, final false
static inline double_t cos(double_t  x) ;

/// @brief Method cos, addr 0x649c0a0, size 0x68, virtual false, abstract: false, final false
static inline float_t cos(float_t  x) ;

/// @brief Method cosh, addr 0x649cb50, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 cosh(::Unity::Mathematics::double2  x) ;

/// @brief Method cosh, addr 0x649cc00, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 cosh(::Unity::Mathematics::double3  x) ;

/// @brief Method cosh, addr 0x649cd00, size 0x148, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 cosh(::Unity::Mathematics::double4  x) ;

/// @brief Method cosh, addr 0x649c7dc, size 0xb8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 cosh(::Unity::Mathematics::float2  x) ;

/// @brief Method cosh, addr 0x649c894, size 0x108, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 cosh(::Unity::Mathematics::float3  x) ;

/// @brief Method cosh, addr 0x649c99c, size 0x154, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 cosh(::Unity::Mathematics::float4  x) ;

/// @brief Method cosh, addr 0x649caf0, size 0x60, virtual false, abstract: false, final false
static inline double_t cosh(double_t  x) ;

/// @brief Method cosh, addr 0x649c774, size 0x68, virtual false, abstract: false, final false
static inline float_t cosh(float_t  x) ;

/// @brief Method countbits, addr 0x64a8758, size 0x88, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 countbits(::Unity::Mathematics::int2  x) ;

/// @brief Method countbits, addr 0x64a8984, size 0x88, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 countbits(::Unity::Mathematics::uint2  x) ;

/// @brief Method countbits, addr 0x64a87e0, size 0xac, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 countbits(::Unity::Mathematics::int3  x) ;

/// @brief Method countbits, addr 0x64a8a0c, size 0xac, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 countbits(::Unity::Mathematics::uint3  x) ;

/// @brief Method countbits, addr 0x64a888c, size 0xe4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 countbits(::Unity::Mathematics::int4  x) ;

/// @brief Method countbits, addr 0x64a8ab8, size 0xe4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 countbits(::Unity::Mathematics::uint4  x) ;

/// @brief Method countbits, addr 0x64a8744, size 0x14, virtual false, abstract: false, final false
static inline int32_t countbits(int32_t  x) ;

/// @brief Method countbits, addr 0x64a8bb0, size 0x14, virtual false, abstract: false, final false
static inline int32_t countbits(int64_t  x) ;

/// @brief Method countbits, addr 0x64a8970, size 0x14, virtual false, abstract: false, final false
static inline int32_t countbits(uint32_t  x) ;

/// @brief Method countbits, addr 0x64a8b9c, size 0x14, virtual false, abstract: false, final false
static inline int32_t countbits(uint64_t  x) ;

/// @brief Method cross, addr 0x64a66a0, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 cross(::Unity::Mathematics::double3  x, ::Unity::Mathematics::double3  y) ;

/// @brief Method cross, addr 0x64a6678, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 cross(::Unity::Mathematics::float3  x, ::Unity::Mathematics::float3  y) ;

/// @brief Method csum, addr 0x64aaf80, size 0x8, virtual false, abstract: false, final false
static inline double_t csum(::Unity::Mathematics::double2  x) ;

/// @brief Method csum, addr 0x64aaf88, size 0xc, virtual false, abstract: false, final false
static inline double_t csum(::Unity::Mathematics::double3  x) ;

/// @brief Method csum, addr 0x64aaf94, size 0x10, virtual false, abstract: false, final false
static inline double_t csum(::Unity::Mathematics::double4  x) ;

/// @brief Method csum, addr 0x64aaf5c, size 0x8, virtual false, abstract: false, final false
static inline float_t csum(::Unity::Mathematics::float2  x) ;

/// @brief Method csum, addr 0x64aaf64, size 0xc, virtual false, abstract: false, final false
static inline float_t csum(::Unity::Mathematics::float3  x) ;

/// @brief Method csum, addr 0x64aaf70, size 0x10, virtual false, abstract: false, final false
static inline float_t csum(::Unity::Mathematics::float4  x) ;

/// @brief Method csum, addr 0x64aaef4, size 0xc, virtual false, abstract: false, final false
static inline int32_t csum(::Unity::Mathematics::int2  x) ;

/// @brief Method csum, addr 0x64aaf00, size 0x10, virtual false, abstract: false, final false
static inline int32_t csum(::Unity::Mathematics::int3  x) ;

/// @brief Method csum, addr 0x64aaf10, size 0x18, virtual false, abstract: false, final false
static inline int32_t csum(::Unity::Mathematics::int4  x) ;

/// @brief Method csum, addr 0x64aaf28, size 0xc, virtual false, abstract: false, final false
static inline uint32_t csum(::Unity::Mathematics::uint2  x) ;

/// @brief Method csum, addr 0x64aaf34, size 0x10, virtual false, abstract: false, final false
static inline uint32_t csum(::Unity::Mathematics::uint3  x) ;

/// @brief Method csum, addr 0x64aaf44, size 0x18, virtual false, abstract: false, final false
static inline uint32_t csum(::Unity::Mathematics::uint4  x) ;

/// @brief Method decompose, addr 0x648a778, size 0x108, virtual false, abstract: false, final false
static inline void decompose(::Unity::Mathematics::AffineTransform  a, ::ByRef<::Unity::Mathematics::float3>  translation, ::ByRef<::Unity::Mathematics::quaternion>  rotation, ::ByRef<::Unity::Mathematics::float3>  scale) ;

/// @brief Method degrees, addr 0x64aab3c, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 degrees(::Unity::Mathematics::double2  x) ;

/// @brief Method degrees, addr 0x64aab50, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 degrees(::Unity::Mathematics::double3  x) ;

/// @brief Method degrees, addr 0x64aab68, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 degrees(::Unity::Mathematics::double4  x) ;

/// @brief Method degrees, addr 0x64aaae4, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 degrees(::Unity::Mathematics::float2  x) ;

/// @brief Method degrees, addr 0x64aaaf8, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 degrees(::Unity::Mathematics::float3  x) ;

/// @brief Method degrees, addr 0x64aab10, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 degrees(::Unity::Mathematics::float4  x) ;

/// @brief Method degrees, addr 0x64aab2c, size 0x10, virtual false, abstract: false, final false
static inline double_t degrees(double_t  x) ;

/// @brief Method degrees, addr 0x64aaad4, size 0x10, virtual false, abstract: false, final false
static inline float_t degrees(float_t  x) ;

/// @brief Method determinant, addr 0x648d580, size 0x10, virtual false, abstract: false, final false
static inline double_t determinant(::Unity::Mathematics::double2x2  m) ;

/// @brief Method determinant, addr 0x648e89c, size 0x54, virtual false, abstract: false, final false
static inline double_t determinant(::Unity::Mathematics::double3x3  m) ;

/// @brief Method determinant, addr 0x64908b0, size 0xe8, virtual false, abstract: false, final false
static inline double_t determinant(::Unity::Mathematics::double4x4  m) ;

/// @brief Method determinant, addr 0x6491264, size 0x10, virtual false, abstract: false, final false
static inline float_t determinant(::Unity::Mathematics::float2x2  m) ;

/// @brief Method determinant, addr 0x6492388, size 0x54, virtual false, abstract: false, final false
static inline float_t determinant(::Unity::Mathematics::float3x3  m) ;

/// @brief Method determinant, addr 0x6493f38, size 0xe8, virtual false, abstract: false, final false
static inline float_t determinant(::Unity::Mathematics::float4x4  m) ;

/// @brief Method determinant, addr 0x64952f0, size 0x18, virtual false, abstract: false, final false
static inline int32_t determinant(::Unity::Mathematics::int2x2  m) ;

/// @brief Method determinant, addr 0x6496648, size 0x4c, virtual false, abstract: false, final false
static inline int32_t determinant(::Unity::Mathematics::int3x3  m) ;

/// @brief Method determinant, addr 0x64980e8, size 0xc4, virtual false, abstract: false, final false
static inline int32_t determinant(::Unity::Mathematics::int4x4  m) ;

/// @brief Method distance, addr 0x64a639c, size 0x88, virtual false, abstract: false, final false
static inline double_t distance(::Unity::Mathematics::double2  x, ::Unity::Mathematics::double2  y) ;

/// @brief Method distance, addr 0x64a6424, size 0xa4, virtual false, abstract: false, final false
static inline double_t distance(::Unity::Mathematics::double3  x, ::Unity::Mathematics::double3  y) ;

/// @brief Method distance, addr 0x64a64c8, size 0xc0, virtual false, abstract: false, final false
static inline double_t distance(::Unity::Mathematics::double4  x, ::Unity::Mathematics::double4  y) ;

/// @brief Method distance, addr 0x64a6394, size 0x8, virtual false, abstract: false, final false
static inline double_t distance(double_t  x, double_t  y) ;

/// @brief Method distance, addr 0x64a61a8, size 0x88, virtual false, abstract: false, final false
static inline float_t distance(::Unity::Mathematics::float2  x, ::Unity::Mathematics::float2  y) ;

/// @brief Method distance, addr 0x64a6230, size 0xa4, virtual false, abstract: false, final false
static inline float_t distance(::Unity::Mathematics::float3  x, ::Unity::Mathematics::float3  y) ;

/// @brief Method distance, addr 0x64a62d4, size 0xc0, virtual false, abstract: false, final false
static inline float_t distance(::Unity::Mathematics::float4  x, ::Unity::Mathematics::float4  y) ;

/// @brief Method distance, addr 0x64a61a0, size 0x8, virtual false, abstract: false, final false
static inline float_t distance(float_t  x, float_t  y) ;

/// @brief Method distancesq, addr 0x64a660c, size 0x18, virtual false, abstract: false, final false
static inline double_t distancesq(::Unity::Mathematics::double2  x, ::Unity::Mathematics::double2  y) ;

/// @brief Method distancesq, addr 0x64a6624, size 0x24, virtual false, abstract: false, final false
static inline double_t distancesq(::Unity::Mathematics::double3  x, ::Unity::Mathematics::double3  y) ;

/// @brief Method distancesq, addr 0x64a6648, size 0x30, virtual false, abstract: false, final false
static inline double_t distancesq(::Unity::Mathematics::double4  x, ::Unity::Mathematics::double4  y) ;

/// @brief Method distancesq, addr 0x64a6600, size 0xc, virtual false, abstract: false, final false
static inline double_t distancesq(double_t  x, double_t  y) ;

/// @brief Method distancesq, addr 0x64a6594, size 0x18, virtual false, abstract: false, final false
static inline float_t distancesq(::Unity::Mathematics::float2  x, ::Unity::Mathematics::float2  y) ;

/// @brief Method distancesq, addr 0x64a65ac, size 0x24, virtual false, abstract: false, final false
static inline float_t distancesq(::Unity::Mathematics::float3  x, ::Unity::Mathematics::float3  y) ;

/// @brief Method distancesq, addr 0x64a65d0, size 0x30, virtual false, abstract: false, final false
static inline float_t distancesq(::Unity::Mathematics::float4  x, ::Unity::Mathematics::float4  y) ;

/// @brief Method distancesq, addr 0x64a6588, size 0xc, virtual false, abstract: false, final false
static inline float_t distancesq(float_t  x, float_t  y) ;

/// @brief Method dot, addr 0x649a428, size 0x10, virtual false, abstract: false, final false
static inline double_t dot(::Unity::Mathematics::double2  x, ::Unity::Mathematics::double2  y) ;

/// @brief Method dot, addr 0x649a438, size 0x18, virtual false, abstract: false, final false
static inline double_t dot(::Unity::Mathematics::double3  x, ::Unity::Mathematics::double3  y) ;

/// @brief Method dot, addr 0x649a450, size 0x20, virtual false, abstract: false, final false
static inline double_t dot(::Unity::Mathematics::double4  x, ::Unity::Mathematics::double4  y) ;

/// @brief Method dot, addr 0x649a420, size 0x8, virtual false, abstract: false, final false
static inline double_t dot(double_t  x, double_t  y) ;

/// @brief Method dot, addr 0x64b37f0, size 0x20, virtual false, abstract: false, final false
static inline float_t dot(::Unity::Mathematics::quaternion  a, ::Unity::Mathematics::quaternion  b) ;

/// @brief Method dot, addr 0x649a3d8, size 0x10, virtual false, abstract: false, final false
static inline float_t dot(::Unity::Mathematics::float2  x, ::Unity::Mathematics::float2  y) ;

/// @brief Method dot, addr 0x649a3e8, size 0x18, virtual false, abstract: false, final false
static inline float_t dot(::Unity::Mathematics::float3  x, ::Unity::Mathematics::float3  y) ;

/// @brief Method dot, addr 0x649a400, size 0x20, virtual false, abstract: false, final false
static inline float_t dot(::Unity::Mathematics::float4  x, ::Unity::Mathematics::float4  y) ;

/// @brief Method dot, addr 0x649a3d0, size 0x8, virtual false, abstract: false, final false
static inline float_t dot(float_t  x, float_t  y) ;

/// @brief Method dot, addr 0x649a328, size 0x14, virtual false, abstract: false, final false
static inline int32_t dot(::Unity::Mathematics::int2  x, ::Unity::Mathematics::int2  y) ;

/// @brief Method dot, addr 0x649a33c, size 0x18, virtual false, abstract: false, final false
static inline int32_t dot(::Unity::Mathematics::int3  x, ::Unity::Mathematics::int3  y) ;

/// @brief Method dot, addr 0x649a354, size 0x24, virtual false, abstract: false, final false
static inline int32_t dot(::Unity::Mathematics::int4  x, ::Unity::Mathematics::int4  y) ;

/// @brief Method dot, addr 0x649a320, size 0x8, virtual false, abstract: false, final false
static inline int32_t dot(int32_t  x, int32_t  y) ;

/// @brief Method dot, addr 0x649a380, size 0x14, virtual false, abstract: false, final false
static inline uint32_t dot(::Unity::Mathematics::uint2  x, ::Unity::Mathematics::uint2  y) ;

/// @brief Method dot, addr 0x649a394, size 0x18, virtual false, abstract: false, final false
static inline uint32_t dot(::Unity::Mathematics::uint3  x, ::Unity::Mathematics::uint3  y) ;

/// @brief Method dot, addr 0x649a3ac, size 0x24, virtual false, abstract: false, final false
static inline uint32_t dot(::Unity::Mathematics::uint4  x, ::Unity::Mathematics::uint4  y) ;

/// @brief Method dot, addr 0x649a378, size 0x8, virtual false, abstract: false, final false
static inline uint32_t dot(uint32_t  x, uint32_t  y) ;

/// @brief Method double2, addr 0x648cfc0, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 double2(::Unity::Mathematics::bool2  v) ;

/// @brief Method double2, addr 0x648d108, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 double2(::Unity::Mathematics::float2  v) ;

/// @brief Method double2, addr 0x648d014, size 0x64, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 double2(::Unity::Mathematics::half  v) ;

/// @brief Method double2, addr 0x648d078, size 0x84, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 double2(::Unity::Mathematics::half2  v) ;

/// @brief Method double2, addr 0x648cfe8, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 double2(::Unity::Mathematics::int2  v) ;

/// @brief Method double2, addr 0x648d004, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 double2(::Unity::Mathematics::uint2  v) ;

/// @brief Method double2, addr 0x648cfa8, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 double2(bool  v) ;

/// @brief Method double2, addr 0x648cfa0, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 double2(double_t  v) ;

/// @brief Method double2, addr 0x648d0fc, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 double2(float_t  v) ;

/// @brief Method double2, addr 0x648cfdc, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 double2(int32_t  v) ;

/// @brief Method double2, addr 0x648cff8, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 double2(uint32_t  v) ;

/// @brief Method double2, addr 0x648cf98, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 double2(double_t  x, double_t  y) ;

/// @brief Method double2, addr 0x648cf9c, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 double2(::Unity::Mathematics::double2  xy) ;

/// @brief Method double2x2, addr 0x648d44c, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x2 double2x2(::Unity::Mathematics::double2  c0, ::Unity::Mathematics::double2  c1) ;

/// @brief Method double2x2, addr 0x648d450, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x2 double2x2(double_t  m00, double_t  m01, double_t  m10, double_t  m11) ;

/// @brief Method double2x2, addr 0x648d490, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x2 double2x2(::Unity::Mathematics::bool2x2  v) ;

/// @brief Method double2x2, addr 0x648d530, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x2 double2x2(::Unity::Mathematics::float2x2  v) ;

/// @brief Method double2x2, addr 0x648d4d0, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x2 double2x2(::Unity::Mathematics::int2x2  v) ;

/// @brief Method double2x2, addr 0x648d500, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x2 double2x2(::Unity::Mathematics::uint2x2  v) ;

/// @brief Method double2x2, addr 0x648d470, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x2 double2x2(bool  v) ;

/// @brief Method double2x2, addr 0x648d460, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x2 double2x2(double_t  v) ;

/// @brief Method double2x2, addr 0x648d51c, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x2 double2x2(float_t  v) ;

/// @brief Method double2x2, addr 0x648d4bc, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x2 double2x2(int32_t  v) ;

/// @brief Method double2x2, addr 0x648d4ec, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x2 double2x2(uint32_t  v) ;

/// @brief Method double2x3, addr 0x648d688, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x3 double2x3(::Unity::Mathematics::double2  c0, ::Unity::Mathematics::double2  c1, ::Unity::Mathematics::double2  c2) ;

/// @brief Method double2x3, addr 0x648d698, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x3 double2x3(double_t  m00, double_t  m01, double_t  m02, double_t  m10, double_t  m11, double_t  m12) ;

/// @brief Method double2x3, addr 0x648d6d8, size 0x48, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x3 double2x3(::Unity::Mathematics::bool2x3  v) ;

/// @brief Method double2x3, addr 0x648d7c4, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x3 double2x3(::Unity::Mathematics::float2x3  v) ;

/// @brief Method double2x3, addr 0x648d734, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x3 double2x3(::Unity::Mathematics::int2x3  v) ;

/// @brief Method double2x3, addr 0x648d77c, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x3 double2x3(::Unity::Mathematics::uint2x3  v) ;

/// @brief Method double2x3, addr 0x648d6b8, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x3 double2x3(bool  v) ;

/// @brief Method double2x3, addr 0x648d6a8, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x3 double2x3(double_t  v) ;

/// @brief Method double2x3, addr 0x648d7b0, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x3 double2x3(float_t  v) ;

/// @brief Method double2x3, addr 0x648d720, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x3 double2x3(int32_t  v) ;

/// @brief Method double2x3, addr 0x648d768, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x3 double2x3(uint32_t  v) ;

/// @brief Method double2x4, addr 0x648d94c, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x4 double2x4(::Unity::Mathematics::double2  c0, ::Unity::Mathematics::double2  c1, ::Unity::Mathematics::double2  c2, ::Unity::Mathematics::double2  c3) ;

/// @brief Method double2x4, addr 0x648d960, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x4 double2x4(double_t  m00, double_t  m01, double_t  m02, double_t  m03, double_t  m10, double_t  m11, double_t  m12, double_t  m13) ;

/// @brief Method double2x4, addr 0x648d9ac, size 0x5c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x4 double2x4(::Unity::Mathematics::bool2x4  v) ;

/// @brief Method double2x4, addr 0x648dad8, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x4 double2x4(::Unity::Mathematics::float2x4  v) ;

/// @brief Method double2x4, addr 0x648da20, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x4 double2x4(::Unity::Mathematics::int2x4  v) ;

/// @brief Method double2x4, addr 0x648da7c, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x4 double2x4(::Unity::Mathematics::uint2x4  v) ;

/// @brief Method double2x4, addr 0x648d988, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x4 double2x4(bool  v) ;

/// @brief Method double2x4, addr 0x648d974, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x4 double2x4(double_t  v) ;

/// @brief Method double2x4, addr 0x648dac0, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x4 double2x4(float_t  v) ;

/// @brief Method double2x4, addr 0x648da08, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x4 double2x4(int32_t  v) ;

/// @brief Method double2x4, addr 0x648da64, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x4 double2x4(uint32_t  v) ;

/// @brief Method double3, addr 0x648dcf8, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 double3(::Unity::Mathematics::bool3  v) ;

/// @brief Method double3, addr 0x648decc, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 double3(::Unity::Mathematics::float3  v) ;

/// @brief Method double3, addr 0x648dd64, size 0x68, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 double3(::Unity::Mathematics::half  v) ;

/// @brief Method double3, addr 0x648ddcc, size 0xf0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 double3(::Unity::Mathematics::half3  v) ;

/// @brief Method double3, addr 0x648dd2c, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 double3(::Unity::Mathematics::int3  v) ;

/// @brief Method double3, addr 0x648dd50, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 double3(::Unity::Mathematics::uint3  v) ;

/// @brief Method double3, addr 0x648dcdc, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 double3(bool  v) ;

/// @brief Method double3, addr 0x648dcd0, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 double3(double_t  v) ;

/// @brief Method double3, addr 0x648debc, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 double3(float_t  v) ;

/// @brief Method double3, addr 0x648dd1c, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 double3(int32_t  v) ;

/// @brief Method double3, addr 0x648dd40, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 double3(uint32_t  v) ;

/// @brief Method double3, addr 0x648dcc0, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 double3(double_t  x, double_t  y, double_t  z) ;

/// @brief Method double3, addr 0x648dcc4, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 double3(double_t  x, ::Unity::Mathematics::double2  yz) ;

/// @brief Method double3, addr 0x648dcc8, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 double3(::Unity::Mathematics::double2  xy, double_t  z) ;

/// @brief Method double3, addr 0x648dccc, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 double3(::Unity::Mathematics::double3  xyz) ;

/// @brief Method double3x2, addr 0x648e2c4, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x2 double3x2(::Unity::Mathematics::double3  c0, ::Unity::Mathematics::double3  c1) ;

/// @brief Method double3x2, addr 0x648e2d4, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x2 double3x2(double_t  m00, double_t  m01, double_t  m10, double_t  m11, double_t  m20, double_t  m21) ;

/// @brief Method double3x2, addr 0x648e314, size 0x48, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x2 double3x2(::Unity::Mathematics::bool3x2  v) ;

/// @brief Method double3x2, addr 0x648e400, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x2 double3x2(::Unity::Mathematics::float3x2  v) ;

/// @brief Method double3x2, addr 0x648e370, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x2 double3x2(::Unity::Mathematics::int3x2  v) ;

/// @brief Method double3x2, addr 0x648e3b8, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x2 double3x2(::Unity::Mathematics::uint3x2  v) ;

/// @brief Method double3x2, addr 0x648e2f4, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x2 double3x2(bool  v) ;

/// @brief Method double3x2, addr 0x648e2e4, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x2 double3x2(double_t  v) ;

/// @brief Method double3x2, addr 0x648e3ec, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x2 double3x2(float_t  v) ;

/// @brief Method double3x2, addr 0x648e35c, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x2 double3x2(int32_t  v) ;

/// @brief Method double3x2, addr 0x648e3a4, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x2 double3x2(uint32_t  v) ;

/// @brief Method double3x3, addr 0x648e57c, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x3 double3x3(::Unity::Mathematics::double3  c0, ::Unity::Mathematics::double3  c1, ::Unity::Mathematics::double3  c2) ;

/// @brief Method double3x3, addr 0x648e5a0, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x3 double3x3(double_t  m00, double_t  m01, double_t  m02, double_t  m10, double_t  m11, double_t  m12, double_t  m20, double_t  m21, double_t  m22) ;

/// @brief Method double3x3, addr 0x648e5fc, size 0x78, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x3 double3x3(::Unity::Mathematics::bool3x3  v) ;

/// @brief Method double3x3, addr 0x648e768, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x3 double3x3(::Unity::Mathematics::float3x3  v) ;

/// @brief Method double3x3, addr 0x648e690, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x3 double3x3(::Unity::Mathematics::int3x3  v) ;

/// @brief Method double3x3, addr 0x648e6fc, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x3 double3x3(::Unity::Mathematics::uint3x3  v) ;

/// @brief Method double3x3, addr 0x648e5d4, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x3 double3x3(bool  v) ;

/// @brief Method double3x3, addr 0x648e5bc, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x3 double3x3(double_t  v) ;

/// @brief Method double3x3, addr 0x648e74c, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x3 double3x3(float_t  v) ;

/// @brief Method double3x3, addr 0x648e674, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x3 double3x3(int32_t  v) ;

/// @brief Method double3x3, addr 0x648e6e0, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x3 double3x3(uint32_t  v) ;

/// @brief Method double3x4, addr 0x648eab8, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x4 double3x4(::Unity::Mathematics::double3  c0, ::Unity::Mathematics::double3  c1, ::Unity::Mathematics::double3  c2, ::Unity::Mathematics::double3  c3) ;

/// @brief Method double3x4, addr 0x648eaec, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x4 double3x4(double_t  m00, double_t  m01, double_t  m02, double_t  m03, double_t  m10, double_t  m11, double_t  m12, double_t  m13, double_t  m20, double_t  m21, double_t  m22, double_t  m23) ;

/// @brief Method double3x4, addr 0x648eb68, size 0x9c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x4 double3x4(::Unity::Mathematics::bool3x4  v) ;

/// @brief Method double3x4, addr 0x648ed2c, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x4 double3x4(::Unity::Mathematics::float3x4  v) ;

/// @brief Method double3x4, addr 0x648ec24, size 0x64, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x4 double3x4(::Unity::Mathematics::int3x4  v) ;

/// @brief Method double3x4, addr 0x648eca8, size 0x64, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x4 double3x4(::Unity::Mathematics::uint3x4  v) ;

/// @brief Method double3x4, addr 0x648eb3c, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x4 double3x4(bool  v) ;

/// @brief Method double3x4, addr 0x648eb20, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x4 double3x4(double_t  v) ;

/// @brief Method double3x4, addr 0x648ed0c, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x4 double3x4(float_t  v) ;

/// @brief Method double3x4, addr 0x648ec04, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x4 double3x4(int32_t  v) ;

/// @brief Method double3x4, addr 0x648ec88, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x4 double3x4(uint32_t  v) ;

/// @brief Method double4, addr 0x648f0ac, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 double4(::Unity::Mathematics::bool4  v) ;

/// @brief Method double4, addr 0x648f2f0, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 double4(::Unity::Mathematics::float4  v) ;

/// @brief Method double4, addr 0x648f138, size 0x6c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 double4(::Unity::Mathematics::half  v) ;

/// @brief Method double4, addr 0x648f1a4, size 0x138, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 double4(::Unity::Mathematics::half4  v) ;

/// @brief Method double4, addr 0x648f0ec, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 double4(::Unity::Mathematics::int4  v) ;

/// @brief Method double4, addr 0x648f11c, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 double4(::Unity::Mathematics::uint4  v) ;

/// @brief Method double4, addr 0x648f08c, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 double4(bool  v) ;

/// @brief Method double4, addr 0x648f07c, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 double4(double_t  v) ;

/// @brief Method double4, addr 0x648f2dc, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 double4(float_t  v) ;

/// @brief Method double4, addr 0x648f0d8, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 double4(int32_t  v) ;

/// @brief Method double4, addr 0x648f108, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 double4(uint32_t  v) ;

/// @brief Method double4, addr 0x648f05c, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 double4(double_t  x, double_t  y, double_t  z, double_t  w) ;

/// @brief Method double4, addr 0x648f060, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 double4(double_t  x, double_t  y, ::Unity::Mathematics::double2  zw) ;

/// @brief Method double4, addr 0x648f064, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 double4(double_t  x, ::Unity::Mathematics::double2  yz, double_t  w) ;

/// @brief Method double4, addr 0x648f068, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 double4(double_t  x, ::Unity::Mathematics::double3  yzw) ;

/// @brief Method double4, addr 0x648f06c, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 double4(::Unity::Mathematics::double2  xy, double_t  z, double_t  w) ;

/// @brief Method double4, addr 0x648f070, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 double4(::Unity::Mathematics::double2  xy, ::Unity::Mathematics::double2  zw) ;

/// @brief Method double4, addr 0x648f074, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 double4(::Unity::Mathematics::double3  xyz, double_t  w) ;

/// @brief Method double4, addr 0x648f078, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 double4(::Unity::Mathematics::double4  xyzw) ;

/// @brief Method double4x2, addr 0x648f7b4, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x2 double4x2(::Unity::Mathematics::double4  c0, ::Unity::Mathematics::double4  c1) ;

/// @brief Method double4x2, addr 0x648f7c8, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x2 double4x2(double_t  m00, double_t  m01, double_t  m10, double_t  m11, double_t  m20, double_t  m21, double_t  m30, double_t  m31) ;

/// @brief Method double4x2, addr 0x648f814, size 0x5c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x2 double4x2(::Unity::Mathematics::bool4x2  v) ;

/// @brief Method double4x2, addr 0x648f940, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x2 double4x2(::Unity::Mathematics::float4x2  v) ;

/// @brief Method double4x2, addr 0x648f888, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x2 double4x2(::Unity::Mathematics::int4x2  v) ;

/// @brief Method double4x2, addr 0x648f8e4, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x2 double4x2(::Unity::Mathematics::uint4x2  v) ;

/// @brief Method double4x2, addr 0x648f7f0, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x2 double4x2(bool  v) ;

/// @brief Method double4x2, addr 0x648f7dc, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x2 double4x2(double_t  v) ;

/// @brief Method double4x2, addr 0x648f928, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x2 double4x2(float_t  v) ;

/// @brief Method double4x2, addr 0x648f870, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x2 double4x2(int32_t  v) ;

/// @brief Method double4x2, addr 0x648f8cc, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x2 double4x2(uint32_t  v) ;

/// @brief Method double4x3, addr 0x648fb38, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x3 double4x3(::Unity::Mathematics::double4  c0, ::Unity::Mathematics::double4  c1, ::Unity::Mathematics::double4  c2) ;

/// @brief Method double4x3, addr 0x648fb64, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x3 double4x3(double_t  m00, double_t  m01, double_t  m02, double_t  m10, double_t  m11, double_t  m12, double_t  m20, double_t  m21, double_t  m22, double_t  m30, double_t  m31, double_t  m32) ;

/// @brief Method double4x3, addr 0x648fbe0, size 0x84, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x3 double4x3(::Unity::Mathematics::bool4x3  v) ;

/// @brief Method double4x3, addr 0x648fd8c, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x3 double4x3(::Unity::Mathematics::float4x3  v) ;

/// @brief Method double4x3, addr 0x648fc84, size 0x64, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x3 double4x3(::Unity::Mathematics::int4x3  v) ;

/// @brief Method double4x3, addr 0x648fd08, size 0x64, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x3 double4x3(::Unity::Mathematics::uint4x3  v) ;

/// @brief Method double4x3, addr 0x648fbb4, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x3 double4x3(bool  v) ;

/// @brief Method double4x3, addr 0x648fb98, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x3 double4x3(double_t  v) ;

/// @brief Method double4x3, addr 0x648fd6c, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x3 double4x3(float_t  v) ;

/// @brief Method double4x3, addr 0x648fc64, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x3 double4x3(int32_t  v) ;

/// @brief Method double4x3, addr 0x648fce8, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x3 double4x3(uint32_t  v) ;

/// @brief Method double4x4, addr 0x649005c, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x4 double4x4(::Unity::Mathematics::double4  c0, ::Unity::Mathematics::double4  c1, ::Unity::Mathematics::double4  c2, ::Unity::Mathematics::double4  c3) ;

/// @brief Method double4x4, addr 0x64900a0, size 0x54, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x4 double4x4(double_t  m00, double_t  m01, double_t  m02, double_t  m03, double_t  m10, double_t  m11, double_t  m12, double_t  m13, double_t  m20, double_t  m21, double_t  m22, double_t  m23, double_t  m30, double_t  m31, double_t  m32, double_t  m33) ;

/// @brief Method double4x4, addr 0x649014c, size 0xac, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x4 double4x4(::Unity::Mathematics::bool4x4  v) ;

/// @brief Method double4x4, addr 0x6490378, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x4 double4x4(::Unity::Mathematics::float4x4  v) ;

/// @brief Method double4x4, addr 0x6490220, size 0x84, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x4 double4x4(::Unity::Mathematics::int4x4  v) ;

/// @brief Method double4x4, addr 0x64902cc, size 0x84, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x4 double4x4(::Unity::Mathematics::uint4x4  v) ;

/// @brief Method double4x4, addr 0x6490118, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x4 double4x4(bool  v) ;

/// @brief Method double4x4, addr 0x64900f4, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x4 double4x4(double_t  v) ;

/// @brief Method double4x4, addr 0x6490350, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x4 double4x4(float_t  v) ;

/// @brief Method double4x4, addr 0x64901f8, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x4 double4x4(int32_t  v) ;

/// @brief Method double4x4, addr 0x64902a4, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x4 double4x4(uint32_t  v) ;

/// @brief Method down, addr 0x64abda4, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 down() ;

/// @brief Method exp, addr 0x64a1e44, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 exp(::Unity::Mathematics::double2  x) ;

/// @brief Method exp, addr 0x64a1ef4, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 exp(::Unity::Mathematics::double3  x) ;

/// @brief Method exp, addr 0x64a1ff4, size 0x148, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 exp(::Unity::Mathematics::double4  x) ;

/// @brief Method exp, addr 0x64a1ad0, size 0xb8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 exp(::Unity::Mathematics::float2  x) ;

/// @brief Method exp, addr 0x64a1b88, size 0x108, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 exp(::Unity::Mathematics::float3  x) ;

/// @brief Method exp, addr 0x64a1c90, size 0x154, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 exp(::Unity::Mathematics::float4  x) ;

/// @brief Method exp, addr 0x64b3c98, size 0x1a0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::quaternion exp(::Unity::Mathematics::quaternion  q) ;

/// @brief Method exp, addr 0x64a1de4, size 0x60, virtual false, abstract: false, final false
static inline double_t exp(double_t  x) ;

/// @brief Method exp, addr 0x64a1a68, size 0x68, virtual false, abstract: false, final false
static inline float_t exp(float_t  x) ;

/// @brief Method exp10, addr 0x64a2cbc, size 0xc4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 exp10(::Unity::Mathematics::double2  x) ;

/// @brief Method exp10, addr 0x64a2d80, size 0x110, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 exp10(::Unity::Mathematics::double3  x) ;

/// @brief Method exp10, addr 0x64a2e90, size 0x164, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 exp10(::Unity::Mathematics::double4  x) ;

/// @brief Method exp10, addr 0x64a290c, size 0xcc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 exp10(::Unity::Mathematics::float2  x) ;

/// @brief Method exp10, addr 0x64a29d8, size 0x114, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 exp10(::Unity::Mathematics::float3  x) ;

/// @brief Method exp10, addr 0x64a2aec, size 0x168, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 exp10(::Unity::Mathematics::float4  x) ;

/// @brief Method exp10, addr 0x64a2c54, size 0x68, virtual false, abstract: false, final false
static inline double_t exp10(double_t  x) ;

/// @brief Method exp10, addr 0x64a2898, size 0x74, virtual false, abstract: false, final false
static inline float_t exp10(float_t  x) ;

/// @brief Method exp2, addr 0x64a2560, size 0xc4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 exp2(::Unity::Mathematics::double2  x) ;

/// @brief Method exp2, addr 0x64a2624, size 0x110, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 exp2(::Unity::Mathematics::double3  x) ;

/// @brief Method exp2, addr 0x64a2734, size 0x164, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 exp2(::Unity::Mathematics::double4  x) ;

/// @brief Method exp2, addr 0x64a21b0, size 0xcc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 exp2(::Unity::Mathematics::float2  x) ;

/// @brief Method exp2, addr 0x64a227c, size 0x114, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 exp2(::Unity::Mathematics::float3  x) ;

/// @brief Method exp2, addr 0x64a2390, size 0x168, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 exp2(::Unity::Mathematics::float4  x) ;

/// @brief Method exp2, addr 0x64a24f8, size 0x68, virtual false, abstract: false, final false
static inline double_t exp2(double_t  x) ;

/// @brief Method exp2, addr 0x64a213c, size 0x74, virtual false, abstract: false, final false
static inline float_t exp2(float_t  x) ;

/// @brief Method f16tof32, addr 0x64ab254, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 f16tof32(::Unity::Mathematics::uint2  x) ;

/// @brief Method f16tof32, addr 0x64ab304, size 0xf4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 f16tof32(::Unity::Mathematics::uint3  x) ;

/// @brief Method f16tof32, addr 0x64ab3f8, size 0x148, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 f16tof32(::Unity::Mathematics::uint4  x) ;

/// @brief Method f16tof32, addr 0x64ab1fc, size 0x58, virtual false, abstract: false, final false
static inline float_t f16tof32(uint32_t  x) ;

/// @brief Method f32tof16, addr 0x64ab59c, size 0xbc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 f32tof16(::Unity::Mathematics::float2  x) ;

/// @brief Method f32tof16, addr 0x64ab658, size 0xfc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 f32tof16(::Unity::Mathematics::float3  x) ;

/// @brief Method f32tof16, addr 0x64ab754, size 0x144, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 f32tof16(::Unity::Mathematics::float4  x) ;

/// @brief Method f32tof16, addr 0x64ab540, size 0x5c, virtual false, abstract: false, final false
static inline uint32_t f32tof16(float_t  x) ;

/// @brief Method faceforward, addr 0x64a7f58, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 faceforward(::Unity::Mathematics::double2  n, ::Unity::Mathematics::double2  i, ::Unity::Mathematics::double2  ng) ;

/// @brief Method faceforward, addr 0x64a7f7c, size 0x3c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 faceforward(::Unity::Mathematics::double3  n, ::Unity::Mathematics::double3  i, ::Unity::Mathematics::double3  ng) ;

/// @brief Method faceforward, addr 0x64a7fb8, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 faceforward(::Unity::Mathematics::double4  n, ::Unity::Mathematics::double4  i, ::Unity::Mathematics::double4  ng) ;

/// @brief Method faceforward, addr 0x64a7ea8, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 faceforward(::Unity::Mathematics::float2  n, ::Unity::Mathematics::float2  i, ::Unity::Mathematics::float2  ng) ;

/// @brief Method faceforward, addr 0x64a7ecc, size 0x3c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 faceforward(::Unity::Mathematics::float3  n, ::Unity::Mathematics::float3  i, ::Unity::Mathematics::float3  ng) ;

/// @brief Method faceforward, addr 0x64a7f08, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 faceforward(::Unity::Mathematics::float4  n, ::Unity::Mathematics::float4  i, ::Unity::Mathematics::float4  ng) ;

/// @brief Method fastinverse, addr 0x648ed9c, size 0x7c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x4 fastinverse(::Unity::Mathematics::double3x4  m) ;

/// @brief Method fastinverse, addr 0x6490818, size 0x98, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x4 fastinverse(::Unity::Mathematics::double4x4  m) ;

/// @brief Method fastinverse, addr 0x64927c0, size 0x7c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x4 fastinverse(::Unity::Mathematics::float3x4  m) ;

/// @brief Method fastinverse, addr 0x6493ea0, size 0x98, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x4 fastinverse(::Unity::Mathematics::float4x4  m) ;

/// @brief Method float2, addr 0x6490ccc, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 float2(::Unity::Mathematics::bool2  v) ;

/// @brief Method float2, addr 0x6490e0c, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 float2(::Unity::Mathematics::double2  v) ;

/// @brief Method float2, addr 0x6490d20, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 float2(::Unity::Mathematics::half  v) ;

/// @brief Method float2, addr 0x6490d80, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 float2(::Unity::Mathematics::half2  v) ;

/// @brief Method float2, addr 0x6490cf4, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 float2(::Unity::Mathematics::int2  v) ;

/// @brief Method float2, addr 0x6490d10, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 float2(::Unity::Mathematics::uint2  v) ;

/// @brief Method float2, addr 0x6490cb4, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 float2(bool  v) ;

/// @brief Method float2, addr 0x6490e00, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 float2(double_t  v) ;

/// @brief Method float2, addr 0x6490cac, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 float2(float_t  v) ;

/// @brief Method float2, addr 0x6490ce8, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 float2(int32_t  v) ;

/// @brief Method float2, addr 0x6490d04, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 float2(uint32_t  v) ;

/// @brief Method float2, addr 0x6490ca4, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 float2(float_t  x, float_t  y) ;

/// @brief Method float2, addr 0x6490ca8, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 float2(::Unity::Mathematics::float2  xy) ;

/// @brief Method float2x2, addr 0x6491130, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x2 float2x2(::Unity::Mathematics::float2  c0, ::Unity::Mathematics::float2  c1) ;

/// @brief Method float2x2, addr 0x6491134, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x2 float2x2(float_t  m00, float_t  m01, float_t  m10, float_t  m11) ;

/// @brief Method float2x2, addr 0x6491174, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x2 float2x2(::Unity::Mathematics::bool2x2  v) ;

/// @brief Method float2x2, addr 0x6491214, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x2 float2x2(::Unity::Mathematics::double2x2  v) ;

/// @brief Method float2x2, addr 0x64911b4, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x2 float2x2(::Unity::Mathematics::int2x2  v) ;

/// @brief Method float2x2, addr 0x64911e4, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x2 float2x2(::Unity::Mathematics::uint2x2  v) ;

/// @brief Method float2x2, addr 0x6491154, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x2 float2x2(bool  v) ;

/// @brief Method float2x2, addr 0x6491200, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x2 float2x2(double_t  v) ;

/// @brief Method float2x2, addr 0x6491144, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x2 float2x2(float_t  v) ;

/// @brief Method float2x2, addr 0x64911a0, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x2 float2x2(int32_t  v) ;

/// @brief Method float2x2, addr 0x64911d0, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x2 float2x2(uint32_t  v) ;

/// @brief Method float2x3, addr 0x649132c, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x3 float2x3(::Unity::Mathematics::float2  c0, ::Unity::Mathematics::float2  c1, ::Unity::Mathematics::float2  c2) ;

/// @brief Method float2x3, addr 0x649133c, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x3 float2x3(float_t  m00, float_t  m01, float_t  m02, float_t  m10, float_t  m11, float_t  m12) ;

/// @brief Method float2x3, addr 0x649137c, size 0x48, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x3 float2x3(::Unity::Mathematics::bool2x3  v) ;

/// @brief Method float2x3, addr 0x6491468, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x3 float2x3(::Unity::Mathematics::double2x3  v) ;

/// @brief Method float2x3, addr 0x64913d8, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x3 float2x3(::Unity::Mathematics::int2x3  v) ;

/// @brief Method float2x3, addr 0x6491420, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x3 float2x3(::Unity::Mathematics::uint2x3  v) ;

/// @brief Method float2x3, addr 0x649135c, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x3 float2x3(bool  v) ;

/// @brief Method float2x3, addr 0x6491454, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x3 float2x3(double_t  v) ;

/// @brief Method float2x3, addr 0x649134c, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x3 float2x3(float_t  v) ;

/// @brief Method float2x3, addr 0x64913c4, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x3 float2x3(int32_t  v) ;

/// @brief Method float2x3, addr 0x649140c, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x3 float2x3(uint32_t  v) ;

/// @brief Method float2x4, addr 0x649159c, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x4 float2x4(::Unity::Mathematics::float2  c0, ::Unity::Mathematics::float2  c1, ::Unity::Mathematics::float2  c2, ::Unity::Mathematics::float2  c3) ;

/// @brief Method float2x4, addr 0x64915b0, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x4 float2x4(float_t  m00, float_t  m01, float_t  m02, float_t  m03, float_t  m10, float_t  m11, float_t  m12, float_t  m13) ;

/// @brief Method float2x4, addr 0x64915f4, size 0x5c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x4 float2x4(::Unity::Mathematics::bool2x4  v) ;

/// @brief Method float2x4, addr 0x6491708, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x4 float2x4(::Unity::Mathematics::double2x4  v) ;

/// @brief Method float2x4, addr 0x6491660, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x4 float2x4(::Unity::Mathematics::int2x4  v) ;

/// @brief Method float2x4, addr 0x64916b4, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x4 float2x4(::Unity::Mathematics::uint2x4  v) ;

/// @brief Method float2x4, addr 0x64915d0, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x4 float2x4(bool  v) ;

/// @brief Method float2x4, addr 0x64916f8, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x4 float2x4(double_t  v) ;

/// @brief Method float2x4, addr 0x64915c4, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x4 float2x4(float_t  v) ;

/// @brief Method float2x4, addr 0x6491650, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x4 float2x4(int32_t  v) ;

/// @brief Method float2x4, addr 0x64916a4, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x4 float2x4(uint32_t  v) ;

/// @brief Method float3, addr 0x64918ac, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 float3(::Unity::Mathematics::bool3  v) ;

/// @brief Method float3, addr 0x6491a5c, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 float3(::Unity::Mathematics::double3  v) ;

/// @brief Method float3, addr 0x6491918, size 0x64, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 float3(::Unity::Mathematics::half  v) ;

/// @brief Method float3, addr 0x649197c, size 0xd0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 float3(::Unity::Mathematics::half3  v) ;

/// @brief Method float3, addr 0x64918e0, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 float3(::Unity::Mathematics::int3  v) ;

/// @brief Method float3, addr 0x6491904, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 float3(::Unity::Mathematics::uint3  v) ;

/// @brief Method float3, addr 0x6491890, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 float3(bool  v) ;

/// @brief Method float3, addr 0x6491a4c, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 float3(double_t  v) ;

/// @brief Method float3, addr 0x6491884, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 float3(float_t  v) ;

/// @brief Method float3, addr 0x64918d0, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 float3(int32_t  v) ;

/// @brief Method float3, addr 0x64918f4, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 float3(uint32_t  v) ;

/// @brief Method float3, addr 0x6491874, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 float3(float_t  x, float_t  y, float_t  z) ;

/// @brief Method float3, addr 0x6491878, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 float3(float_t  x, ::Unity::Mathematics::float2  yz) ;

/// @brief Method float3, addr 0x649187c, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 float3(::Unity::Mathematics::float2  xy, float_t  z) ;

/// @brief Method float3, addr 0x6491880, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 float3(::Unity::Mathematics::float3  xyz) ;

/// @brief Method float3x2, addr 0x6491e24, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x2 float3x2(::Unity::Mathematics::float3  c0, ::Unity::Mathematics::float3  c1) ;

/// @brief Method float3x2, addr 0x6491e34, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x2 float3x2(float_t  m00, float_t  m01, float_t  m10, float_t  m11, float_t  m20, float_t  m21) ;

/// @brief Method float3x2, addr 0x6491e74, size 0x48, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x2 float3x2(::Unity::Mathematics::bool3x2  v) ;

/// @brief Method float3x2, addr 0x6491f60, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x2 float3x2(::Unity::Mathematics::double3x2  v) ;

/// @brief Method float3x2, addr 0x6491ed0, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x2 float3x2(::Unity::Mathematics::int3x2  v) ;

/// @brief Method float3x2, addr 0x6491f18, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x2 float3x2(::Unity::Mathematics::uint3x2  v) ;

/// @brief Method float3x2, addr 0x6491e54, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x2 float3x2(bool  v) ;

/// @brief Method float3x2, addr 0x6491f4c, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x2 float3x2(double_t  v) ;

/// @brief Method float3x2, addr 0x6491e44, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x2 float3x2(float_t  v) ;

/// @brief Method float3x2, addr 0x6491ebc, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x2 float3x2(int32_t  v) ;

/// @brief Method float3x2, addr 0x6491f04, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x2 float3x2(uint32_t  v) ;

/// @brief Method float3x3, addr 0x6492090, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 float3x3(::Unity::Mathematics::float3  c0, ::Unity::Mathematics::float3  c1, ::Unity::Mathematics::float3  c2) ;

/// @brief Method float3x3, addr 0x64ad1f0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 float3x3(::Unity::Mathematics::float4x4  f4x4) ;

/// @brief Method float3x3, addr 0x64920b4, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 float3x3(float_t  m00, float_t  m01, float_t  m02, float_t  m10, float_t  m11, float_t  m12, float_t  m20, float_t  m21, float_t  m22) ;

/// @brief Method float3x3, addr 0x64ad220, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 float3x3(::Unity::Mathematics::quaternion  rotation) ;

/// @brief Method float3x3, addr 0x6492108, size 0x78, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 float3x3(::Unity::Mathematics::bool3x3  v) ;

/// @brief Method float3x3, addr 0x649225c, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 float3x3(::Unity::Mathematics::double3x3  v) ;

/// @brief Method float3x3, addr 0x6492194, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 float3x3(::Unity::Mathematics::int3x3  v) ;

/// @brief Method float3x3, addr 0x64921f8, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 float3x3(::Unity::Mathematics::uint3x3  v) ;

/// @brief Method float3x3, addr 0x64920e0, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 float3x3(bool  v) ;

/// @brief Method float3x3, addr 0x6492248, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 float3x3(double_t  v) ;

/// @brief Method float3x3, addr 0x64920d0, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 float3x3(float_t  v) ;

/// @brief Method float3x3, addr 0x6492180, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 float3x3(int32_t  v) ;

/// @brief Method float3x3, addr 0x64921e4, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 float3x3(uint32_t  v) ;

/// @brief Method float3x4, addr 0x6492510, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x4 float3x4(::Unity::Mathematics::float3  c0, ::Unity::Mathematics::float3  c1, ::Unity::Mathematics::float3  c2, ::Unity::Mathematics::float3  c3) ;

/// @brief Method float3x4, addr 0x6492544, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x4 float3x4(float_t  m00, float_t  m01, float_t  m02, float_t  m03, float_t  m10, float_t  m11, float_t  m12, float_t  m13, float_t  m20, float_t  m21, float_t  m22, float_t  m23) ;

/// @brief Method float3x4, addr 0x648a1c0, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x4 float3x4(::Unity::Mathematics::AffineTransform  transform) ;

/// @brief Method float3x4, addr 0x64925b4, size 0x9c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x4 float3x4(::Unity::Mathematics::bool3x4  v) ;

/// @brief Method float3x4, addr 0x6492754, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x4 float3x4(::Unity::Mathematics::double3x4  v) ;

/// @brief Method float3x4, addr 0x6492664, size 0x64, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x4 float3x4(::Unity::Mathematics::int3x4  v) ;

/// @brief Method float3x4, addr 0x64926dc, size 0x64, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x4 float3x4(::Unity::Mathematics::uint3x4  v) ;

/// @brief Method float3x4, addr 0x6492588, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x4 float3x4(bool  v) ;

/// @brief Method float3x4, addr 0x6492740, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x4 float3x4(double_t  v) ;

/// @brief Method float3x4, addr 0x6492578, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x4 float3x4(float_t  v) ;

/// @brief Method float3x4, addr 0x6492650, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x4 float3x4(int32_t  v) ;

/// @brief Method float3x4, addr 0x64926c8, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x4 float3x4(uint32_t  v) ;

/// @brief Method float4, addr 0x6492a18, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 float4(::Unity::Mathematics::bool4  v) ;

/// @brief Method float4, addr 0x6492be0, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 float4(::Unity::Mathematics::double4  v) ;

/// @brief Method float4, addr 0x6492aa4, size 0x68, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 float4(::Unity::Mathematics::half  v) ;

/// @brief Method float4, addr 0x6492b0c, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 float4(::Unity::Mathematics::half4  v) ;

/// @brief Method float4, addr 0x6492a58, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 float4(::Unity::Mathematics::int4  v) ;

/// @brief Method float4, addr 0x6492a88, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 float4(::Unity::Mathematics::uint4  v) ;

/// @brief Method float4, addr 0x64929f8, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 float4(bool  v) ;

/// @brief Method float4, addr 0x6492bcc, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 float4(double_t  v) ;

/// @brief Method float4, addr 0x64929e8, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 float4(float_t  v) ;

/// @brief Method float4, addr 0x6492a44, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 float4(int32_t  v) ;

/// @brief Method float4, addr 0x6492a74, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 float4(uint32_t  v) ;

/// @brief Method float4, addr 0x64929c8, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 float4(float_t  x, float_t  y, float_t  z, float_t  w) ;

/// @brief Method float4, addr 0x64929cc, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 float4(float_t  x, float_t  y, ::Unity::Mathematics::float2  zw) ;

/// @brief Method float4, addr 0x64929d0, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 float4(float_t  x, ::Unity::Mathematics::float2  yz, float_t  w) ;

/// @brief Method float4, addr 0x64929d4, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 float4(float_t  x, ::Unity::Mathematics::float3  yzw) ;

/// @brief Method float4, addr 0x64929d8, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 float4(::Unity::Mathematics::float2  xy, float_t  z, float_t  w) ;

/// @brief Method float4, addr 0x64929dc, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 float4(::Unity::Mathematics::float2  xy, ::Unity::Mathematics::float2  zw) ;

/// @brief Method float4, addr 0x64929e0, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 float4(::Unity::Mathematics::float3  xyz, float_t  w) ;

/// @brief Method float4, addr 0x64929e4, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 float4(::Unity::Mathematics::float4  xyzw) ;

/// @brief Method float4x2, addr 0x6493058, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x2 float4x2(::Unity::Mathematics::float4  c0, ::Unity::Mathematics::float4  c1) ;

/// @brief Method float4x2, addr 0x649306c, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x2 float4x2(float_t  m00, float_t  m01, float_t  m10, float_t  m11, float_t  m20, float_t  m21, float_t  m30, float_t  m31) ;

/// @brief Method float4x2, addr 0x64930b0, size 0x5c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x2 float4x2(::Unity::Mathematics::bool4x2  v) ;

/// @brief Method float4x2, addr 0x64931c4, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x2 float4x2(::Unity::Mathematics::double4x2  v) ;

/// @brief Method float4x2, addr 0x649311c, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x2 float4x2(::Unity::Mathematics::int4x2  v) ;

/// @brief Method float4x2, addr 0x6493170, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x2 float4x2(::Unity::Mathematics::uint4x2  v) ;

/// @brief Method float4x2, addr 0x649308c, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x2 float4x2(bool  v) ;

/// @brief Method float4x2, addr 0x64931b4, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x2 float4x2(double_t  v) ;

/// @brief Method float4x2, addr 0x6493080, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x2 float4x2(float_t  v) ;

/// @brief Method float4x2, addr 0x649310c, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x2 float4x2(int32_t  v) ;

/// @brief Method float4x2, addr 0x6493160, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x2 float4x2(uint32_t  v) ;

/// @brief Method float4x3, addr 0x6493350, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x3 float4x3(::Unity::Mathematics::float4  c0, ::Unity::Mathematics::float4  c1, ::Unity::Mathematics::float4  c2) ;

/// @brief Method float4x3, addr 0x649336c, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x3 float4x3(float_t  m00, float_t  m01, float_t  m02, float_t  m10, float_t  m11, float_t  m12, float_t  m20, float_t  m21, float_t  m22, float_t  m30, float_t  m31, float_t  m32) ;

/// @brief Method float4x3, addr 0x64933dc, size 0x84, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x3 float4x3(::Unity::Mathematics::bool4x3  v) ;

/// @brief Method float4x3, addr 0x6493564, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x3 float4x3(::Unity::Mathematics::double4x3  v) ;

/// @brief Method float4x3, addr 0x6493474, size 0x64, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x3 float4x3(::Unity::Mathematics::int4x3  v) ;

/// @brief Method float4x3, addr 0x64934ec, size 0x64, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x3 float4x3(::Unity::Mathematics::uint4x3  v) ;

/// @brief Method float4x3, addr 0x64933b0, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x3 float4x3(bool  v) ;

/// @brief Method float4x3, addr 0x6493550, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x3 float4x3(double_t  v) ;

/// @brief Method float4x3, addr 0x64933a0, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x3 float4x3(float_t  v) ;

/// @brief Method float4x3, addr 0x6493460, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x3 float4x3(int32_t  v) ;

/// @brief Method float4x3, addr 0x64934d8, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x3 float4x3(uint32_t  v) ;

/// @brief Method float4x4, addr 0x6493794, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x4 float4x4(::Unity::Mathematics::float4  c0, ::Unity::Mathematics::float4  c1, ::Unity::Mathematics::float4  c2, ::Unity::Mathematics::float4  c3) ;

/// @brief Method float4x4, addr 0x64937b8, size 0x54, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x4 float4x4(float_t  m00, float_t  m01, float_t  m02, float_t  m03, float_t  m10, float_t  m11, float_t  m12, float_t  m13, float_t  m20, float_t  m21, float_t  m22, float_t  m23, float_t  m30, float_t  m31, float_t  m32, float_t  m33) ;

/// @brief Method float4x4, addr 0x64ad238, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x4 float4x4(::Unity::Mathematics::float3x3  rotation, ::Unity::Mathematics::float3  translation) ;

/// @brief Method float4x4, addr 0x64ad288, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x4 float4x4(::Unity::Mathematics::quaternion  rotation, ::Unity::Mathematics::float3  translation) ;

/// @brief Method float4x4, addr 0x648a168, size 0x58, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x4 float4x4(::Unity::Mathematics::AffineTransform  transform) ;

/// @brief Method float4x4, addr 0x64ad2a0, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x4 float4x4(::Unity::Mathematics::RigidTransform  transform) ;

/// @brief Method float4x4, addr 0x6493850, size 0xac, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x4 float4x4(::Unity::Mathematics::bool4x4  v) ;

/// @brief Method float4x4, addr 0x6493a40, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x4 float4x4(::Unity::Mathematics::double4x4  v) ;

/// @brief Method float4x4, addr 0x6493910, size 0x84, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x4 float4x4(::Unity::Mathematics::int4x4  v) ;

/// @brief Method float4x4, addr 0x64939a8, size 0x84, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x4 float4x4(::Unity::Mathematics::uint4x4  v) ;

/// @brief Method float4x4, addr 0x649381c, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x4 float4x4(bool  v) ;

/// @brief Method float4x4, addr 0x6493a2c, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x4 float4x4(double_t  v) ;

/// @brief Method float4x4, addr 0x649380c, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x4 float4x4(float_t  v) ;

/// @brief Method float4x4, addr 0x64938fc, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x4 float4x4(int32_t  v) ;

/// @brief Method float4x4, addr 0x6493994, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x4 float4x4(uint32_t  v) ;

/// @brief Method floor, addr 0x649ecf0, size 0x9c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 floor(::Unity::Mathematics::double2  x) ;

/// @brief Method floor, addr 0x649ed8c, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 floor(::Unity::Mathematics::double3  x) ;

/// @brief Method floor, addr 0x649ee6c, size 0x11c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 floor(::Unity::Mathematics::double4  x) ;

/// @brief Method floor, addr 0x649e9f8, size 0x9c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 floor(::Unity::Mathematics::float2  x) ;

/// @brief Method floor, addr 0x649ea94, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 floor(::Unity::Mathematics::float3  x) ;

/// @brief Method floor, addr 0x649eb74, size 0x11c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 floor(::Unity::Mathematics::float4  x) ;

/// @brief Method floor, addr 0x649ec90, size 0x60, virtual false, abstract: false, final false
static inline double_t floor(double_t  x) ;

/// @brief Method floor, addr 0x649e998, size 0x60, virtual false, abstract: false, final false
static inline float_t floor(float_t  x) ;

/// @brief Method floorlog2, addr 0x64aa5cc, size 0x78, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 floorlog2(::Unity::Mathematics::int2  x) ;

/// @brief Method floorlog2, addr 0x64aa814, size 0x78, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 floorlog2(::Unity::Mathematics::uint2  x) ;

/// @brief Method floorlog2, addr 0x64aa644, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 floorlog2(::Unity::Mathematics::int3  x) ;

/// @brief Method floorlog2, addr 0x64aa88c, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 floorlog2(::Unity::Mathematics::uint3  x) ;

/// @brief Method floorlog2, addr 0x64aa6f4, size 0xe8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 floorlog2(::Unity::Mathematics::int4  x) ;

/// @brief Method floorlog2, addr 0x64aa93c, size 0xe8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 floorlog2(::Unity::Mathematics::uint4  x) ;

/// @brief Method floorlog2, addr 0x64aa594, size 0x38, virtual false, abstract: false, final false
static inline int32_t floorlog2(int32_t  x) ;

/// @brief Method floorlog2, addr 0x64aa7dc, size 0x38, virtual false, abstract: false, final false
static inline int32_t floorlog2(uint32_t  x) ;

/// @brief Method fmod, addr 0x64a4650, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 fmod(::Unity::Mathematics::double2  x, ::Unity::Mathematics::double2  y) ;

/// @brief Method fmod, addr 0x64a4694, size 0x68, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 fmod(::Unity::Mathematics::double3  x, ::Unity::Mathematics::double3  y) ;

/// @brief Method fmod, addr 0x64a46fc, size 0x8c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 fmod(::Unity::Mathematics::double4  x, ::Unity::Mathematics::double4  y) ;

/// @brief Method fmod, addr 0x64a4514, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 fmod(::Unity::Mathematics::float2  x, ::Unity::Mathematics::float2  y) ;

/// @brief Method fmod, addr 0x64a4558, size 0x68, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 fmod(::Unity::Mathematics::float3  x, ::Unity::Mathematics::float3  y) ;

/// @brief Method fmod, addr 0x64a45c0, size 0x8c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 fmod(::Unity::Mathematics::float4  x, ::Unity::Mathematics::float4  y) ;

/// @brief Method fmod, addr 0x64a464c, size 0x4, virtual false, abstract: false, final false
static inline double_t fmod(double_t  x, double_t  y) ;

/// @brief Method fmod, addr 0x64a4510, size 0x4, virtual false, abstract: false, final false
static inline float_t fmod(float_t  x, float_t  y) ;

/// @brief Method fold_to_uint, addr 0x64ad16c, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 fold_to_uint(::Unity::Mathematics::double2  x) ;

/// @brief Method fold_to_uint, addr 0x64ad18c, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 fold_to_uint(::Unity::Mathematics::double3  x) ;

/// @brief Method fold_to_uint, addr 0x64ad1b8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 fold_to_uint(::Unity::Mathematics::double4  x) ;

/// @brief Method fold_to_uint, addr 0x64ad15c, size 0x10, virtual false, abstract: false, final false
static inline uint32_t fold_to_uint(double_t  x) ;

/// @brief Method forward, addr 0x64abdb4, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 forward() ;

/// @brief Method forward, addr 0x64b4dfc, size 0x78, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 forward(::Unity::Mathematics::quaternion  q) ;

/// @brief Method frac, addr 0x64a0d90, size 0xa4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 frac(::Unity::Mathematics::double2  x) ;

/// @brief Method frac, addr 0x64a0e34, size 0xec, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 frac(::Unity::Mathematics::double3  x) ;

/// @brief Method frac, addr 0x64a0f20, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 frac(::Unity::Mathematics::double4  x) ;

/// @brief Method frac, addr 0x64a0b58, size 0xa4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 frac(::Unity::Mathematics::float2  x) ;

/// @brief Method frac, addr 0x64a0bfc, size 0xec, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 frac(::Unity::Mathematics::float3  x) ;

/// @brief Method frac, addr 0x64a0ce8, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 frac(::Unity::Mathematics::float4  x) ;

/// @brief Method frac, addr 0x64a0d2c, size 0x64, virtual false, abstract: false, final false
static inline double_t frac(double_t  x) ;

/// @brief Method frac, addr 0x64a0af4, size 0x64, virtual false, abstract: false, final false
static inline float_t frac(float_t  x) ;

/// @brief Method half, addr 0x64942d0, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half half(double_t  v) ;

/// @brief Method half, addr 0x6494274, size 0x5c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half half(float_t  v) ;

/// @brief Method half, addr 0x6494270, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half half(::Unity::Mathematics::half  x) ;

/// @brief Method half2, addr 0x64944c0, size 0x94, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half2 half2(::Unity::Mathematics::double2  v) ;

/// @brief Method half2, addr 0x64943c4, size 0x94, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half2 half2(::Unity::Mathematics::float2  v) ;

/// @brief Method half2, addr 0x6494358, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half2 half2(::Unity::Mathematics::half  v) ;

/// @brief Method half2, addr 0x6494458, size 0x68, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half2 half2(double_t  v) ;

/// @brief Method half2, addr 0x6494360, size 0x64, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half2 half2(float_t  v) ;

/// @brief Method half2, addr 0x649434c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half2 half2(::Unity::Mathematics::half  x, ::Unity::Mathematics::half  y) ;

/// @brief Method half2, addr 0x6494354, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half2 half2(::Unity::Mathematics::half2  xy) ;

/// @brief Method half3, addr 0x64947c4, size 0xec, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half3 half3(::Unity::Mathematics::double3  v) ;

/// @brief Method half3, addr 0x6494674, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half3 half3(::Unity::Mathematics::float3  v) ;

/// @brief Method half3, addr 0x64945f4, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half3 half3(::Unity::Mathematics::half  v) ;

/// @brief Method half3, addr 0x6494754, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half3 half3(double_t  v) ;

/// @brief Method half3, addr 0x6494608, size 0x6c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half3 half3(float_t  v) ;

/// @brief Method half3, addr 0x64945cc, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half3 half3(::Unity::Mathematics::half  x, ::Unity::Mathematics::half  y, ::Unity::Mathematics::half  z) ;

/// @brief Method half3, addr 0x64945e0, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half3 half3(::Unity::Mathematics::half  x, ::Unity::Mathematics::half2  yz) ;

/// @brief Method half3, addr 0x64945e8, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half3 half3(::Unity::Mathematics::half2  xy, ::Unity::Mathematics::half  z) ;

/// @brief Method half3, addr 0x64945f0, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half3 half3(::Unity::Mathematics::half3  xyz) ;

/// @brief Method half4, addr 0x6494bd0, size 0x13c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half4 half4(::Unity::Mathematics::double4  v) ;

/// @brief Method half4, addr 0x6494a34, size 0x130, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half4 half4(::Unity::Mathematics::float4  v) ;

/// @brief Method half4, addr 0x64949bc, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half4 half4(::Unity::Mathematics::half  v) ;

/// @brief Method half4, addr 0x6494b64, size 0x6c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half4 half4(double_t  v) ;

/// @brief Method half4, addr 0x64949cc, size 0x68, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half4 half4(float_t  v) ;

/// @brief Method half4, addr 0x649494c, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half4 half4(::Unity::Mathematics::half  x, ::Unity::Mathematics::half  y, ::Unity::Mathematics::half  z, ::Unity::Mathematics::half  w) ;

/// @brief Method half4, addr 0x6494968, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half4 half4(::Unity::Mathematics::half  x, ::Unity::Mathematics::half  y, ::Unity::Mathematics::half2  zw) ;

/// @brief Method half4, addr 0x6494978, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half4 half4(::Unity::Mathematics::half  x, ::Unity::Mathematics::half2  yz, ::Unity::Mathematics::half  w) ;

/// @brief Method half4, addr 0x649498c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half4 half4(::Unity::Mathematics::half  x, ::Unity::Mathematics::half3  yzw) ;

/// @brief Method half4, addr 0x6494994, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half4 half4(::Unity::Mathematics::half2  xy, ::Unity::Mathematics::half  z, ::Unity::Mathematics::half  w) ;

/// @brief Method half4, addr 0x64949a8, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half4 half4(::Unity::Mathematics::half2  xy, ::Unity::Mathematics::half2  zw) ;

/// @brief Method half4, addr 0x64949b0, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half4 half4(::Unity::Mathematics::half3  xyz, ::Unity::Mathematics::half  w) ;

/// @brief Method half4, addr 0x64949b8, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half4 half4(::Unity::Mathematics::half4  xyzw) ;

/// @brief Method hash, addr 0x648a880, size 0xc8, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::AffineTransform  a) ;

/// @brief Method hash, addr 0x64abd90, size 0x4, virtual false, abstract: false, final false
static inline uint32_t hash(void*  pBuffer, int32_t  numBytes, uint32_t  seed) ;

/// @brief Method hash, addr 0x64b4d38, size 0x60, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::quaternion  q) ;

/// @brief Method hash, addr 0x64b533c, size 0x9c, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::RigidTransform  t) ;

/// @brief Method hash, addr 0x648aa90, size 0x38, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::bool2  v) ;

/// @brief Method hash, addr 0x648adfc, size 0x74, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::bool2x2  v) ;

/// @brief Method hash, addr 0x648af84, size 0xb0, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::bool2x3  v) ;

/// @brief Method hash, addr 0x648b188, size 0xbc, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::bool2x4  v) ;

/// @brief Method hash, addr 0x648b388, size 0x54, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::bool3  v) ;

/// @brief Method hash, addr 0x648b794, size 0xac, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::bool3x2  v) ;

/// @brief Method hash, addr 0x648ba14, size 0x114, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::bool3x3  v) ;

/// @brief Method hash, addr 0x648bdfc, size 0x16c, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::bool3x4  v) ;

/// @brief Method hash, addr 0x648c1b4, size 0x48, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::bool4  v) ;

/// @brief Method hash, addr 0x648c638, size 0xc0, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::bool4x2  v) ;

/// @brief Method hash, addr 0x648c8f0, size 0x158, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::bool4x3  v) ;

/// @brief Method hash, addr 0x648ccf0, size 0x160, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::bool4x4  v) ;

/// @brief Method hash, addr 0x648d114, size 0x44, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::double2  v) ;

/// @brief Method hash, addr 0x648d590, size 0x78, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::double2x2  v) ;

/// @brief Method hash, addr 0x648d800, size 0xa4, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::double2x3  v) ;

/// @brief Method hash, addr 0x648db20, size 0xd0, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::double2x4  v) ;

/// @brief Method hash, addr 0x648dedc, size 0x60, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::double3  v) ;

/// @brief Method hash, addr 0x648e43c, size 0xa0, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::double3x2  v) ;

/// @brief Method hash, addr 0x648e8f0, size 0xe4, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::double3x3  v) ;

/// @brief Method hash, addr 0x648ee18, size 0x11c, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::double3x4  v) ;

/// @brief Method hash, addr 0x648f304, size 0x80, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::double4  v) ;

/// @brief Method hash, addr 0x648f988, size 0xd8, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::double4x2  v) ;

/// @brief Method hash, addr 0x648fdf4, size 0x138, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::double4x3  v) ;

/// @brief Method hash, addr 0x6490998, size 0x188, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::double4x4  v) ;

/// @brief Method hash, addr 0x6490e18, size 0x34, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::float2  v) ;

/// @brief Method hash, addr 0x6491274, size 0x58, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::float2x2  v) ;

/// @brief Method hash, addr 0x64914ac, size 0x74, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::float2x3  v) ;

/// @brief Method hash, addr 0x649174c, size 0x90, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::float2x4  v) ;

/// @brief Method hash, addr 0x6491a6c, size 0x48, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::float3  v) ;

/// @brief Method hash, addr 0x6491fa4, size 0x70, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::float3x2  v) ;

/// @brief Method hash, addr 0x64923dc, size 0x84, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::float3x3  v) ;

/// @brief Method hash, addr 0x649283c, size 0xb4, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::float3x4  v) ;

/// @brief Method hash, addr 0x6492bf4, size 0x60, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::float4  v) ;

/// @brief Method hash, addr 0x6493208, size 0x9c, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::float4x2  v) ;

/// @brief Method hash, addr 0x64935c8, size 0xe0, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::float4x3  v) ;

/// @brief Method hash, addr 0x6494020, size 0x124, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::float4x4  v) ;

/// @brief Method hash, addr 0x6494330, size 0x1c, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::half  v) ;

/// @brief Method hash, addr 0x6494554, size 0x38, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::half2  v) ;

/// @brief Method hash, addr 0x64948b0, size 0x4c, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::half3  v) ;

/// @brief Method hash, addr 0x6494d0c, size 0x68, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::half4  v) ;

/// @brief Method hash, addr 0x6494edc, size 0x30, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::int2  v) ;

/// @brief Method hash, addr 0x6495308, size 0x50, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::int2x2  v) ;

/// @brief Method hash, addr 0x6495610, size 0x74, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::int2x3  v) ;

/// @brief Method hash, addr 0x64959c4, size 0x90, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::int2x4  v) ;

/// @brief Method hash, addr 0x6495c34, size 0x40, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::int3  v) ;

/// @brief Method hash, addr 0x64961f0, size 0x7c, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::int3x2  v) ;

/// @brief Method hash, addr 0x6496694, size 0xac, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::int3x3  v) ;

/// @brief Method hash, addr 0x6496c40, size 0xdc, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::int3x4  v) ;

/// @brief Method hash, addr 0x6496fbc, size 0x58, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::int4  v) ;

/// @brief Method hash, addr 0x64975dc, size 0x9c, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::int4x2  v) ;

/// @brief Method hash, addr 0x6497aa8, size 0xd8, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::int4x3  v) ;

/// @brief Method hash, addr 0x64981ac, size 0x114, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::int4x4  v) ;

/// @brief Method hash, addr 0x64b556c, size 0x30, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::uint2  v) ;

/// @brief Method hash, addr 0x64b5950, size 0x50, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::uint2x2  v) ;

/// @brief Method hash, addr 0x64b5c34, size 0x74, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::uint2x3  v) ;

/// @brief Method hash, addr 0x64b5fd8, size 0x90, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::uint2x4  v) ;

/// @brief Method hash, addr 0x64b6228, size 0x40, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::uint3  v) ;

/// @brief Method hash, addr 0x64b67d4, size 0x7c, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::uint3x2  v) ;

/// @brief Method hash, addr 0x64b6c2c, size 0xac, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::uint3x3  v) ;

/// @brief Method hash, addr 0x64b71e8, size 0xdc, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::uint3x4  v) ;

/// @brief Method hash, addr 0x64b7534, size 0x58, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::uint4  v) ;

/// @brief Method hash, addr 0x64b7b48, size 0x9c, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::uint4x2  v) ;

/// @brief Method hash, addr 0x64b8018, size 0xd8, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::uint4x3  v) ;

/// @brief Method hash, addr 0x64b866c, size 0x114, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::uint4x4  v) ;

/// @brief Method hash_with_unaligned_loads, addr 0x64aba60, size 0x17c, virtual false, abstract: false, final false
static inline uint32_t hash_with_unaligned_loads(void*  pBuffer, int32_t  numBytes, uint32_t  seed) ;

/// @brief Method hash_without_unaligned_loads, addr 0x64abbdc, size 0x1b4, virtual false, abstract: false, final false
static inline uint32_t hash_without_unaligned_loads(void*  pBuffer, int32_t  numBytes, uint32_t  seed) ;

/// @brief Method hashwide, addr 0x648aac8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::bool2  v) ;

/// @brief Method hashwide, addr 0x648ae70, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::bool2x2  v) ;

/// @brief Method hashwide, addr 0x648b034, size 0x8c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::bool2x3  v) ;

/// @brief Method hashwide, addr 0x648b244, size 0xbc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::bool2x4  v) ;

/// @brief Method hashwide, addr 0x648d158, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::double2  v) ;

/// @brief Method hashwide, addr 0x648d608, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::double2x2  v) ;

/// @brief Method hashwide, addr 0x648d8a4, size 0xa8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::double2x3  v) ;

/// @brief Method hashwide, addr 0x648dbf0, size 0xd0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::double2x4  v) ;

/// @brief Method hashwide, addr 0x6490e4c, size 0x3c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::float2  v) ;

/// @brief Method hashwide, addr 0x64912cc, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::float2x2  v) ;

/// @brief Method hashwide, addr 0x6491520, size 0x7c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::float2x3  v) ;

/// @brief Method hashwide, addr 0x64917dc, size 0x98, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::float2x4  v) ;

/// @brief Method hashwide, addr 0x649458c, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::half2  v) ;

/// @brief Method hashwide, addr 0x6494f0c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::int2  v) ;

/// @brief Method hashwide, addr 0x6495358, size 0x58, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::int2x2  v) ;

/// @brief Method hashwide, addr 0x6495684, size 0x7c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::int2x3  v) ;

/// @brief Method hashwide, addr 0x6495a54, size 0x98, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::int2x4  v) ;

/// @brief Method hashwide, addr 0x64b559c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::uint2  v) ;

/// @brief Method hashwide, addr 0x64b59a0, size 0x58, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::uint2x2  v) ;

/// @brief Method hashwide, addr 0x64b5ca8, size 0x7c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::uint2x3  v) ;

/// @brief Method hashwide, addr 0x64b6068, size 0x98, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::uint2x4  v) ;

/// @brief Method hashwide, addr 0x648b3dc, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::bool3  v) ;

/// @brief Method hashwide, addr 0x648b840, size 0xa4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::bool3x2  v) ;

/// @brief Method hashwide, addr 0x648bb28, size 0xfc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::bool3x3  v) ;

/// @brief Method hashwide, addr 0x648bf68, size 0x144, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::bool3x4  v) ;

/// @brief Method hashwide, addr 0x648df3c, size 0x64, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::double3  v) ;

/// @brief Method hashwide, addr 0x648e4dc, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::double3x2  v) ;

/// @brief Method hashwide, addr 0x648e9d4, size 0xe4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::double3x3  v) ;

/// @brief Method hashwide, addr 0x648ef34, size 0x128, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::double3x4  v) ;

/// @brief Method hashwide, addr 0x6491ab4, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::float3  v) ;

/// @brief Method hashwide, addr 0x6492014, size 0x7c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::float3x2  v) ;

/// @brief Method hashwide, addr 0x6492460, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::float3x3  v) ;

/// @brief Method hashwide, addr 0x64928f0, size 0xd8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::float3x4  v) ;

/// @brief Method hashwide, addr 0x64948fc, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::half3  v) ;

/// @brief Method hashwide, addr 0x6495c74, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::int3  v) ;

/// @brief Method hashwide, addr 0x649626c, size 0x84, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::int3x2  v) ;

/// @brief Method hashwide, addr 0x6496740, size 0xb4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::int3x3  v) ;

/// @brief Method hashwide, addr 0x6496d1c, size 0xe4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::int3x4  v) ;

/// @brief Method hashwide, addr 0x64b6268, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::uint3  v) ;

/// @brief Method hashwide, addr 0x64b6850, size 0x84, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::uint3x2  v) ;

/// @brief Method hashwide, addr 0x64b6cd8, size 0xb4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::uint3x3  v) ;

/// @brief Method hashwide, addr 0x64b72c4, size 0xe4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::uint3x4  v) ;

/// @brief Method hashwide, addr 0x648a948, size 0x110, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::AffineTransform  a) ;

/// @brief Method hashwide, addr 0x64b4d98, size 0x64, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::quaternion  q) ;

/// @brief Method hashwide, addr 0x64b53d8, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::RigidTransform  t) ;

/// @brief Method hashwide, addr 0x648c1fc, size 0x6c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::bool4  v) ;

/// @brief Method hashwide, addr 0x648c6f8, size 0xd8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::bool4x2  v) ;

/// @brief Method hashwide, addr 0x648ca48, size 0xf8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::bool4x3  v) ;

/// @brief Method hashwide, addr 0x648ce50, size 0x148, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::bool4x4  v) ;

/// @brief Method hashwide, addr 0x648f384, size 0x84, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::double4  v) ;

/// @brief Method hashwide, addr 0x648fa60, size 0xd8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::double4x2  v) ;

/// @brief Method hashwide, addr 0x648ff2c, size 0x130, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::double4x3  v) ;

/// @brief Method hashwide, addr 0x6490b20, size 0x184, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::double4x4  v) ;

/// @brief Method hashwide, addr 0x6492c54, size 0x64, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::float4  v) ;

/// @brief Method hashwide, addr 0x64932a4, size 0xac, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::float4x2  v) ;

/// @brief Method hashwide, addr 0x64936a8, size 0xec, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::float4x3  v) ;

/// @brief Method hashwide, addr 0x6494144, size 0x12c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::float4x4  v) ;

/// @brief Method hashwide, addr 0x6494d74, size 0x6c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::half4  v) ;

/// @brief Method hashwide, addr 0x6497014, size 0x5c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::int4  v) ;

/// @brief Method hashwide, addr 0x6497678, size 0x9c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::int4x2  v) ;

/// @brief Method hashwide, addr 0x6497b80, size 0xd8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::int4x3  v) ;

/// @brief Method hashwide, addr 0x64982c0, size 0x114, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::int4x4  v) ;

/// @brief Method hashwide, addr 0x64b758c, size 0x5c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::uint4  v) ;

/// @brief Method hashwide, addr 0x64b7be4, size 0x9c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::uint4x2  v) ;

/// @brief Method hashwide, addr 0x64b80f0, size 0xd8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::uint4x3  v) ;

/// @brief Method hashwide, addr 0x64b8780, size 0x4644, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::uint4x4  v) ;

/// @brief Method int2, addr 0x6494e14, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 int2(::Unity::Mathematics::bool2  v) ;

/// @brief Method int2, addr 0x6494ea8, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 int2(::Unity::Mathematics::double2  v) ;

/// @brief Method int2, addr 0x6494e54, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 int2(::Unity::Mathematics::float2  v) ;

/// @brief Method int2, addr 0x6494e30, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 int2(::Unity::Mathematics::uint2  v) ;

/// @brief Method int2, addr 0x6494dfc, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 int2(bool  v) ;

/// @brief Method int2, addr 0x6494e88, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 int2(double_t  v) ;

/// @brief Method int2, addr 0x6494e34, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 int2(float_t  v) ;

/// @brief Method int2, addr 0x6494df0, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 int2(int32_t  v) ;

/// @brief Method int2, addr 0x6494e24, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 int2(uint32_t  v) ;

/// @brief Method int2, addr 0x6494de0, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 int2(int32_t  x, int32_t  y) ;

/// @brief Method int2, addr 0x6494dec, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 int2(::Unity::Mathematics::int2  xy) ;

/// @brief Method int2x2, addr 0x6495178, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x2 int2x2(::Unity::Mathematics::int2  c0, ::Unity::Mathematics::int2  c1) ;

/// @brief Method int2x2, addr 0x649517c, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x2 int2x2(int32_t  m00, int32_t  m01, int32_t  m10, int32_t  m11) ;

/// @brief Method int2x2, addr 0x64951b4, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x2 int2x2(::Unity::Mathematics::bool2x2  v) ;

/// @brief Method int2x2, addr 0x6495288, size 0x54, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x2 int2x2(::Unity::Mathematics::double2x2  v) ;

/// @brief Method int2x2, addr 0x649520c, size 0x58, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x2 int2x2(::Unity::Mathematics::float2x2  v) ;

/// @brief Method int2x2, addr 0x64951e4, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x2 int2x2(::Unity::Mathematics::uint2x2  v) ;

/// @brief Method int2x2, addr 0x64951a0, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x2 int2x2(bool  v) ;

/// @brief Method int2x2, addr 0x6495264, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x2 int2x2(double_t  v) ;

/// @brief Method int2x2, addr 0x64951e8, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x2 int2x2(float_t  v) ;

/// @brief Method int2x2, addr 0x6495190, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x2 int2x2(int32_t  v) ;

/// @brief Method int2x2, addr 0x64951d4, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x2 int2x2(uint32_t  v) ;

/// @brief Method int2x3, addr 0x64953b0, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x3 int2x3(::Unity::Mathematics::int2  c0, ::Unity::Mathematics::int2  c1, ::Unity::Mathematics::int2  c2) ;

/// @brief Method int2x3, addr 0x64953bc, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x3 int2x3(int32_t  m00, int32_t  m01, int32_t  m02, int32_t  m10, int32_t  m11, int32_t  m12) ;

/// @brief Method int2x3, addr 0x649540c, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x3 int2x3(::Unity::Mathematics::bool2x3  v) ;

/// @brief Method int2x3, addr 0x649555c, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x3 int2x3(::Unity::Mathematics::double2x3  v) ;

/// @brief Method int2x3, addr 0x64954a8, size 0x8c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x3 int2x3(::Unity::Mathematics::float2x3  v) ;

/// @brief Method int2x3, addr 0x649546c, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x3 int2x3(::Unity::Mathematics::uint2x3  v) ;

/// @brief Method int2x3, addr 0x64953f4, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x3 int2x3(bool  v) ;

/// @brief Method int2x3, addr 0x6495534, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x3 int2x3(double_t  v) ;

/// @brief Method int2x3, addr 0x6495480, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x3 int2x3(float_t  v) ;

/// @brief Method int2x3, addr 0x64953e0, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x3 int2x3(int32_t  v) ;

/// @brief Method int2x3, addr 0x6495458, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x3 int2x3(uint32_t  v) ;

/// @brief Method int2x4, addr 0x6495700, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x4 int2x4(::Unity::Mathematics::int2  c0, ::Unity::Mathematics::int2  c1, ::Unity::Mathematics::int2  c2, ::Unity::Mathematics::int2  c3) ;

/// @brief Method int2x4, addr 0x649570c, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x4 int2x4(int32_t  m00, int32_t  m01, int32_t  m02, int32_t  m03, int32_t  m10, int32_t  m11, int32_t  m12, int32_t  m13) ;

/// @brief Method int2x4, addr 0x6495764, size 0x74, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x4 int2x4(::Unity::Mathematics::bool2x4  v) ;

/// @brief Method int2x4, addr 0x64958e8, size 0xb8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x4 int2x4(::Unity::Mathematics::double2x4  v) ;

/// @brief Method int2x4, addr 0x6495820, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x4 int2x4(::Unity::Mathematics::float2x4  v) ;

/// @brief Method int2x4, addr 0x64957ec, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x4 int2x4(::Unity::Mathematics::uint2x4  v) ;

/// @brief Method int2x4, addr 0x649574c, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x4 int2x4(bool  v) ;

/// @brief Method int2x4, addr 0x64958c0, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x4 int2x4(double_t  v) ;

/// @brief Method int2x4, addr 0x64957f8, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x4 int2x4(float_t  v) ;

/// @brief Method int2x4, addr 0x6495738, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x4 int2x4(int32_t  v) ;

/// @brief Method int2x4, addr 0x64957d8, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x4 int2x4(uint32_t  v) ;

/// @brief Method int3, addr 0x6495b48, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 int3(::Unity::Mathematics::bool3  v) ;

/// @brief Method int3, addr 0x6495bf4, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 int3(::Unity::Mathematics::double3  v) ;

/// @brief Method int3, addr 0x6495b94, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 int3(::Unity::Mathematics::float3  v) ;

/// @brief Method int3, addr 0x6495b6c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 int3(::Unity::Mathematics::uint3  v) ;

/// @brief Method int3, addr 0x6495b2c, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 int3(bool  v) ;

/// @brief Method int3, addr 0x6495bd4, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 int3(double_t  v) ;

/// @brief Method int3, addr 0x6495b74, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 int3(float_t  v) ;

/// @brief Method int3, addr 0x6495b20, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 int3(int32_t  v) ;

/// @brief Method int3, addr 0x6495b60, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 int3(uint32_t  v) ;

/// @brief Method int3, addr 0x6495aec, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 int3(int32_t  x, int32_t  y, int32_t  z) ;

/// @brief Method int3, addr 0x6495afc, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 int3(int32_t  x, ::Unity::Mathematics::int2  yz) ;

/// @brief Method int3, addr 0x6495b10, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 int3(::Unity::Mathematics::int2  xy, int32_t  z) ;

/// @brief Method int3, addr 0x6495b18, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 int3(::Unity::Mathematics::int3  xyz) ;

/// @brief Method int3x2, addr 0x6495f88, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x2 int3x2(::Unity::Mathematics::int3  c0, ::Unity::Mathematics::int3  c1) ;

/// @brief Method int3x2, addr 0x6495f9c, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x2 int3x2(int32_t  m00, int32_t  m01, int32_t  m10, int32_t  m11, int32_t  m20, int32_t  m21) ;

/// @brief Method int3x2, addr 0x6495fe8, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x2 int3x2(::Unity::Mathematics::bool3x2  v) ;

/// @brief Method int3x2, addr 0x6496140, size 0x88, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x2 int3x2(::Unity::Mathematics::double3x2  v) ;

/// @brief Method int3x2, addr 0x6496088, size 0x88, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x2 int3x2(::Unity::Mathematics::float3x2  v) ;

/// @brief Method int3x2, addr 0x6496034, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x2 int3x2(::Unity::Mathematics::uint3x2  v) ;

/// @brief Method int3x2, addr 0x6495fc8, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x2 int3x2(bool  v) ;

/// @brief Method int3x2, addr 0x6496110, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x2 int3x2(double_t  v) ;

/// @brief Method int3x2, addr 0x6496058, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x2 int3x2(float_t  v) ;

/// @brief Method int3x2, addr 0x6495fac, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x2 int3x2(int32_t  v) ;

/// @brief Method int3x2, addr 0x6496018, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x2 int3x2(uint32_t  v) ;

/// @brief Method int3x3, addr 0x64962f0, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x3 int3x3(::Unity::Mathematics::int3  c0, ::Unity::Mathematics::int3  c1, ::Unity::Mathematics::int3  c2) ;

/// @brief Method int3x3, addr 0x649630c, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x3 int3x3(int32_t  m00, int32_t  m01, int32_t  m02, int32_t  m10, int32_t  m11, int32_t  m12, int32_t  m20, int32_t  m21, int32_t  m22) ;

/// @brief Method int3x3, addr 0x6496374, size 0x54, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x3 int3x3(::Unity::Mathematics::bool3x3  v) ;

/// @brief Method int3x3, addr 0x6496554, size 0xc4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x3 int3x3(::Unity::Mathematics::double3x3  v) ;

/// @brief Method int3x3, addr 0x6496458, size 0xc4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x3 int3x3(::Unity::Mathematics::float3x3  v) ;

/// @brief Method int3x3, addr 0x64963ec, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x3 int3x3(::Unity::Mathematics::uint3x3  v) ;

/// @brief Method int3x3, addr 0x649634c, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x3 int3x3(bool  v) ;

/// @brief Method int3x3, addr 0x649651c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x3 int3x3(double_t  v) ;

/// @brief Method int3x3, addr 0x6496420, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x3 int3x3(float_t  v) ;

/// @brief Method int3x3, addr 0x6496328, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x3 int3x3(int32_t  v) ;

/// @brief Method int3x3, addr 0x64963c8, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x3 int3x3(uint32_t  v) ;

/// @brief Method int3x4, addr 0x64967f4, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x4 int3x4(::Unity::Mathematics::int3  c0, ::Unity::Mathematics::int3  c1, ::Unity::Mathematics::int3  c2, ::Unity::Mathematics::int3  c3) ;

/// @brief Method int3x4, addr 0x6496818, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x4 int3x4(int32_t  m00, int32_t  m01, int32_t  m02, int32_t  m03, int32_t  m10, int32_t  m11, int32_t  m12, int32_t  m13, int32_t  m20, int32_t  m21, int32_t  m22, int32_t  m23) ;

/// @brief Method int3x4, addr 0x64968a8, size 0x74, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x4 int3x4(::Unity::Mathematics::bool3x4  v) ;

/// @brief Method int3x4, addr 0x6496b08, size 0xfc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x4 int3x4(::Unity::Mathematics::double3x4  v) ;

/// @brief Method int3x4, addr 0x64969cc, size 0xfc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x4 int3x4(::Unity::Mathematics::float3x4  v) ;

/// @brief Method int3x4, addr 0x6496948, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x4 int3x4(::Unity::Mathematics::uint3x4  v) ;

/// @brief Method int3x4, addr 0x6496878, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x4 int3x4(bool  v) ;

/// @brief Method int3x4, addr 0x6496ac8, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x4 int3x4(double_t  v) ;

/// @brief Method int3x4, addr 0x649698c, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x4 int3x4(float_t  v) ;

/// @brief Method int3x4, addr 0x649684c, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x4 int3x4(int32_t  v) ;

/// @brief Method int3x4, addr 0x649691c, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x4 int3x4(uint32_t  v) ;

/// @brief Method int4, addr 0x6496e94, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 int4(::Unity::Mathematics::bool4  v) ;

/// @brief Method int4, addr 0x6496f68, size 0x54, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 int4(::Unity::Mathematics::double4  v) ;

/// @brief Method int4, addr 0x6496eec, size 0x58, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 int4(::Unity::Mathematics::float4  v) ;

/// @brief Method int4, addr 0x6496ec4, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 int4(::Unity::Mathematics::uint4  v) ;

/// @brief Method int4, addr 0x6496e7c, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 int4(bool  v) ;

/// @brief Method int4, addr 0x6496f44, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 int4(double_t  v) ;

/// @brief Method int4, addr 0x6496ec8, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 int4(float_t  v) ;

/// @brief Method int4, addr 0x6496e6c, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 int4(int32_t  v) ;

/// @brief Method int4, addr 0x6496eb4, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 int4(uint32_t  v) ;

/// @brief Method int4, addr 0x6496e00, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 int4(int32_t  x, int32_t  y, int32_t  z, int32_t  w) ;

/// @brief Method int4, addr 0x6496e18, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 int4(int32_t  x, int32_t  y, ::Unity::Mathematics::int2  zw) ;

/// @brief Method int4, addr 0x6496e28, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 int4(int32_t  x, ::Unity::Mathematics::int2  yz, int32_t  w) ;

/// @brief Method int4, addr 0x6496e3c, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 int4(int32_t  x, ::Unity::Mathematics::int3  yzw) ;

/// @brief Method int4, addr 0x6496e50, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 int4(::Unity::Mathematics::int2  xy, int32_t  z, int32_t  w) ;

/// @brief Method int4, addr 0x6496e5c, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 int4(::Unity::Mathematics::int2  xy, ::Unity::Mathematics::int2  zw) ;

/// @brief Method int4, addr 0x6496e60, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 int4(::Unity::Mathematics::int3  xyz, int32_t  w) ;

/// @brief Method int4, addr 0x6496e68, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 int4(::Unity::Mathematics::int4  xyzw) ;

/// @brief Method int4x2, addr 0x6497344, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x2 int4x2(::Unity::Mathematics::int4  c0, ::Unity::Mathematics::int4  c1) ;

/// @brief Method int4x2, addr 0x6497350, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x2 int4x2(int32_t  m00, int32_t  m01, int32_t  m10, int32_t  m11, int32_t  m20, int32_t  m21, int32_t  m30, int32_t  m31) ;

/// @brief Method int4x2, addr 0x6497390, size 0x5c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x2 int4x2(::Unity::Mathematics::bool4x2  v) ;

/// @brief Method int4x2, addr 0x64974fc, size 0xb4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x2 int4x2(::Unity::Mathematics::double4x2  v) ;

/// @brief Method int4x2, addr 0x6497434, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x2 int4x2(::Unity::Mathematics::float4x2  v) ;

/// @brief Method int4x2, addr 0x6497400, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x2 int4x2(::Unity::Mathematics::uint4x2  v) ;

/// @brief Method int4x2, addr 0x6497378, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x2 int4x2(bool  v) ;

/// @brief Method int4x2, addr 0x64974d4, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x2 int4x2(double_t  v) ;

/// @brief Method int4x2, addr 0x649740c, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x2 int4x2(float_t  v) ;

/// @brief Method int4x2, addr 0x6497364, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x2 int4x2(int32_t  v) ;

/// @brief Method int4x2, addr 0x64973ec, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x2 int4x2(uint32_t  v) ;

/// @brief Method int4x3, addr 0x6497714, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x3 int4x3(::Unity::Mathematics::int4  c0, ::Unity::Mathematics::int4  c1, ::Unity::Mathematics::int4  c2) ;

/// @brief Method int4x3, addr 0x6497724, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x3 int4x3(int32_t  m00, int32_t  m01, int32_t  m02, int32_t  m10, int32_t  m11, int32_t  m12, int32_t  m20, int32_t  m21, int32_t  m22, int32_t  m30, int32_t  m31, int32_t  m32) ;

/// @brief Method int4x3, addr 0x649778c, size 0x78, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x3 int4x3(::Unity::Mathematics::bool4x3  v) ;

/// @brief Method int4x3, addr 0x6497970, size 0x104, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x3 int4x3(::Unity::Mathematics::double4x3  v) ;

/// @brief Method int4x3, addr 0x649785c, size 0xe8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x3 int4x3(::Unity::Mathematics::float4x3  v) ;

/// @brief Method int4x3, addr 0x649781c, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x3 int4x3(::Unity::Mathematics::uint4x3  v) ;

/// @brief Method int4x3, addr 0x6497770, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x3 int4x3(bool  v) ;

/// @brief Method int4x3, addr 0x6497944, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x3 int4x3(double_t  v) ;

/// @brief Method int4x3, addr 0x6497830, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x3 int4x3(float_t  v) ;

/// @brief Method int4x3, addr 0x6497758, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x3 int4x3(int32_t  v) ;

/// @brief Method int4x3, addr 0x6497804, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x3 int4x3(uint32_t  v) ;

/// @brief Method int4x4, addr 0x6497c58, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 int4x4(::Unity::Mathematics::int4  c0, ::Unity::Mathematics::int4  c1, ::Unity::Mathematics::int4  c2, ::Unity::Mathematics::int4  c3) ;

/// @brief Method int4x4, addr 0x6497c6c, size 0x54, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 int4x4(int32_t  m00, int32_t  m01, int32_t  m02, int32_t  m03, int32_t  m10, int32_t  m11, int32_t  m12, int32_t  m13, int32_t  m20, int32_t  m21, int32_t  m22, int32_t  m23, int32_t  m30, int32_t  m31, int32_t  m32, int32_t  m33) ;

/// @brief Method int4x4, addr 0x6497cfc, size 0x94, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 int4x4(::Unity::Mathematics::bool4x4  v) ;

/// @brief Method int4x4, addr 0x6497f48, size 0x15c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 int4x4(::Unity::Mathematics::double4x4  v) ;

/// @brief Method int4x4, addr 0x6497df0, size 0x128, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 int4x4(::Unity::Mathematics::float4x4  v) ;

/// @brief Method int4x4, addr 0x6497dac, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 int4x4(::Unity::Mathematics::uint4x4  v) ;

/// @brief Method int4x4, addr 0x6497cdc, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 int4x4(bool  v) ;

/// @brief Method int4x4, addr 0x6497f18, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 int4x4(double_t  v) ;

/// @brief Method int4x4, addr 0x6497dc0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 int4x4(float_t  v) ;

/// @brief Method int4x4, addr 0x6497cc0, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 int4x4(int32_t  v) ;

/// @brief Method int4x4, addr 0x6497d90, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 int4x4(uint32_t  v) ;

/// @brief Method inverse, addr 0x648a6c8, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::AffineTransform inverse(::Unity::Mathematics::AffineTransform  a) ;

/// @brief Method inverse, addr 0x64b4f68, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::RigidTransform inverse(::Unity::Mathematics::RigidTransform  t) ;

/// @brief Method inverse, addr 0x648d554, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x2 inverse(::Unity::Mathematics::double2x2  m) ;

/// @brief Method inverse, addr 0x648e7c8, size 0xd4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x3 inverse(::Unity::Mathematics::double3x3  m) ;

/// @brief Method inverse, addr 0x64904c4, size 0x354, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x4 inverse(::Unity::Mathematics::double4x4  m) ;

/// @brief Method inverse, addr 0x6491238, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x2 inverse(::Unity::Mathematics::float2x2  m) ;

/// @brief Method inverse, addr 0x64922b8, size 0xd0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 inverse(::Unity::Mathematics::float3x3  m) ;

/// @brief Method inverse, addr 0x6493b64, size 0x33c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x4 inverse(::Unity::Mathematics::float4x4  m) ;

/// @brief Method inverse, addr 0x64b37b8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::quaternion inverse(::Unity::Mathematics::quaternion  q) ;

/// @brief Method isfinite, addr 0x649864c, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2 isfinite(::Unity::Mathematics::double2  x) ;

/// @brief Method isfinite, addr 0x6498584, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2 isfinite(::Unity::Mathematics::float2  x) ;

/// @brief Method isfinite, addr 0x6498674, size 0x3c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 isfinite(::Unity::Mathematics::double3  x) ;

/// @brief Method isfinite, addr 0x64985ac, size 0x3c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 isfinite(::Unity::Mathematics::float3  x) ;

/// @brief Method isfinite, addr 0x64986b0, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4 isfinite(::Unity::Mathematics::double4  x) ;

/// @brief Method isfinite, addr 0x64985e8, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4 isfinite(::Unity::Mathematics::float4  x) ;

/// @brief Method isfinite, addr 0x6498634, size 0x18, virtual false, abstract: false, final false
static inline bool isfinite(double_t  x) ;

/// @brief Method isfinite, addr 0x649856c, size 0x18, virtual false, abstract: false, final false
static inline bool isfinite(float_t  x) ;

/// @brief Method isinf, addr 0x64987dc, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2 isinf(::Unity::Mathematics::double2  x) ;

/// @brief Method isinf, addr 0x6498714, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2 isinf(::Unity::Mathematics::float2  x) ;

/// @brief Method isinf, addr 0x6498804, size 0x3c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 isinf(::Unity::Mathematics::double3  x) ;

/// @brief Method isinf, addr 0x649873c, size 0x3c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 isinf(::Unity::Mathematics::float3  x) ;

/// @brief Method isinf, addr 0x6498840, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4 isinf(::Unity::Mathematics::double4  x) ;

/// @brief Method isinf, addr 0x6498778, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4 isinf(::Unity::Mathematics::float4  x) ;

/// @brief Method isinf, addr 0x64987c4, size 0x18, virtual false, abstract: false, final false
static inline bool isinf(double_t  x) ;

/// @brief Method isinf, addr 0x64986fc, size 0x18, virtual false, abstract: false, final false
static inline bool isinf(float_t  x) ;

/// @brief Method isnan, addr 0x649897c, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2 isnan(::Unity::Mathematics::double2  x) ;

/// @brief Method isnan, addr 0x64988a4, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2 isnan(::Unity::Mathematics::float2  x) ;

/// @brief Method isnan, addr 0x64989a8, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 isnan(::Unity::Mathematics::double3  x) ;

/// @brief Method isnan, addr 0x64988d0, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 isnan(::Unity::Mathematics::float3  x) ;

/// @brief Method isnan, addr 0x64989e8, size 0x54, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4 isnan(::Unity::Mathematics::double4  x) ;

/// @brief Method isnan, addr 0x6498910, size 0x54, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4 isnan(::Unity::Mathematics::float4  x) ;

/// @brief Method isnan, addr 0x6498964, size 0x18, virtual false, abstract: false, final false
static inline bool isnan(double_t  x) ;

/// @brief Method isnan, addr 0x649888c, size 0x18, virtual false, abstract: false, final false
static inline bool isnan(float_t  x) ;

/// @brief Method ispow2, addr 0x6498a50, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2 ispow2(::Unity::Mathematics::int2  x) ;

/// @brief Method ispow2, addr 0x6498b40, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2 ispow2(::Unity::Mathematics::uint2  x) ;

/// @brief Method ispow2, addr 0x6498a80, size 0x48, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 ispow2(::Unity::Mathematics::int3  x) ;

/// @brief Method ispow2, addr 0x6498b6c, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 ispow2(::Unity::Mathematics::uint3  x) ;

/// @brief Method ispow2, addr 0x6498ac8, size 0x64, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4 ispow2(::Unity::Mathematics::int4  x) ;

/// @brief Method ispow2, addr 0x6498bac, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4 ispow2(::Unity::Mathematics::uint4  x) ;

/// @brief Method ispow2, addr 0x6498a3c, size 0x14, virtual false, abstract: false, final false
static inline bool ispow2(int32_t  x) ;

/// @brief Method ispow2, addr 0x6498b2c, size 0x14, virtual false, abstract: false, final false
static inline bool ispow2(uint32_t  x) ;

/// @brief Method left, addr 0x64abdd4, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 left() ;

/// @brief Method length, addr 0x64a5f7c, size 0x70, virtual false, abstract: false, final false
static inline double_t length(::Unity::Mathematics::double2  x) ;

/// @brief Method length, addr 0x64a5fec, size 0x84, virtual false, abstract: false, final false
static inline double_t length(::Unity::Mathematics::double3  x) ;

/// @brief Method length, addr 0x64a6070, size 0x90, virtual false, abstract: false, final false
static inline double_t length(::Unity::Mathematics::double4  x) ;

/// @brief Method length, addr 0x64a5f74, size 0x8, virtual false, abstract: false, final false
static inline double_t length(double_t  x) ;

/// @brief Method length, addr 0x64b3810, size 0x90, virtual false, abstract: false, final false
static inline float_t length(::Unity::Mathematics::quaternion  q) ;

/// @brief Method length, addr 0x64a5df0, size 0x70, virtual false, abstract: false, final false
static inline float_t length(::Unity::Mathematics::float2  x) ;

/// @brief Method length, addr 0x64a5e60, size 0x84, virtual false, abstract: false, final false
static inline float_t length(::Unity::Mathematics::float3  x) ;

/// @brief Method length, addr 0x64a5ee4, size 0x90, virtual false, abstract: false, final false
static inline float_t length(::Unity::Mathematics::float4  x) ;

/// @brief Method length, addr 0x64a5de8, size 0x8, virtual false, abstract: false, final false
static inline float_t length(float_t  x) ;

/// @brief Method lengthsq, addr 0x64a6158, size 0x10, virtual false, abstract: false, final false
static inline double_t lengthsq(::Unity::Mathematics::double2  x) ;

/// @brief Method lengthsq, addr 0x64a6168, size 0x18, virtual false, abstract: false, final false
static inline double_t lengthsq(::Unity::Mathematics::double3  x) ;

/// @brief Method lengthsq, addr 0x64a6180, size 0x20, virtual false, abstract: false, final false
static inline double_t lengthsq(::Unity::Mathematics::double4  x) ;

/// @brief Method lengthsq, addr 0x64a6150, size 0x8, virtual false, abstract: false, final false
static inline double_t lengthsq(double_t  x) ;

/// @brief Method lengthsq, addr 0x64b38a0, size 0x20, virtual false, abstract: false, final false
static inline float_t lengthsq(::Unity::Mathematics::quaternion  q) ;

/// @brief Method lengthsq, addr 0x64a6108, size 0x10, virtual false, abstract: false, final false
static inline float_t lengthsq(::Unity::Mathematics::float2  x) ;

/// @brief Method lengthsq, addr 0x64a6118, size 0x18, virtual false, abstract: false, final false
static inline float_t lengthsq(::Unity::Mathematics::float3  x) ;

/// @brief Method lengthsq, addr 0x64a6130, size 0x20, virtual false, abstract: false, final false
static inline float_t lengthsq(::Unity::Mathematics::float4  x) ;

/// @brief Method lengthsq, addr 0x64a6100, size 0x8, virtual false, abstract: false, final false
static inline float_t lengthsq(float_t  x) ;

/// @brief Method lerp, addr 0x64993cc, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 lerp(::Unity::Mathematics::double2  start, ::Unity::Mathematics::double2  end, ::Unity::Mathematics::double2  t) ;

/// @brief Method lerp, addr 0x6499350, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 lerp(::Unity::Mathematics::double2  start, ::Unity::Mathematics::double2  end, double_t  t) ;

/// @brief Method lerp, addr 0x64993e8, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 lerp(::Unity::Mathematics::double3  start, ::Unity::Mathematics::double3  end, ::Unity::Mathematics::double3  t) ;

/// @brief Method lerp, addr 0x649936c, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 lerp(::Unity::Mathematics::double3  start, ::Unity::Mathematics::double3  end, double_t  t) ;

/// @brief Method lerp, addr 0x6499418, size 0x3c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 lerp(::Unity::Mathematics::double4  start, ::Unity::Mathematics::double4  end, ::Unity::Mathematics::double4  t) ;

/// @brief Method lerp, addr 0x6499394, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 lerp(::Unity::Mathematics::double4  start, ::Unity::Mathematics::double4  end, double_t  t) ;

/// @brief Method lerp, addr 0x64992b8, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 lerp(::Unity::Mathematics::float2  start, ::Unity::Mathematics::float2  end, ::Unity::Mathematics::float2  t) ;

/// @brief Method lerp, addr 0x649923c, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 lerp(::Unity::Mathematics::float2  start, ::Unity::Mathematics::float2  end, float_t  t) ;

/// @brief Method lerp, addr 0x64992d4, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 lerp(::Unity::Mathematics::float3  start, ::Unity::Mathematics::float3  end, ::Unity::Mathematics::float3  t) ;

/// @brief Method lerp, addr 0x6499258, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 lerp(::Unity::Mathematics::float3  start, ::Unity::Mathematics::float3  end, float_t  t) ;

/// @brief Method lerp, addr 0x6499304, size 0x3c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 lerp(::Unity::Mathematics::float4  start, ::Unity::Mathematics::float4  end, ::Unity::Mathematics::float4  t) ;

/// @brief Method lerp, addr 0x6499280, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 lerp(::Unity::Mathematics::float4  start, ::Unity::Mathematics::float4  end, float_t  t) ;

/// @brief Method lerp, addr 0x6499340, size 0x10, virtual false, abstract: false, final false
static inline double_t lerp(double_t  start, double_t  end, double_t  t) ;

/// @brief Method lerp, addr 0x649922c, size 0x10, virtual false, abstract: false, final false
static inline float_t lerp(float_t  start, float_t  end, float_t  t) ;

/// @brief Method log, addr 0x64a33d0, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 log(::Unity::Mathematics::double2  x) ;

/// @brief Method log, addr 0x64a3480, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 log(::Unity::Mathematics::double3  x) ;

/// @brief Method log, addr 0x64a3580, size 0x148, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 log(::Unity::Mathematics::double4  x) ;

/// @brief Method log, addr 0x64a305c, size 0xb8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 log(::Unity::Mathematics::float2  x) ;

/// @brief Method log, addr 0x64a3114, size 0x108, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 log(::Unity::Mathematics::float3  x) ;

/// @brief Method log, addr 0x64a321c, size 0x154, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 log(::Unity::Mathematics::float4  x) ;

/// @brief Method log, addr 0x64b3f4c, size 0x1cc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::quaternion log(::Unity::Mathematics::quaternion  q) ;

/// @brief Method log, addr 0x64a3370, size 0x60, virtual false, abstract: false, final false
static inline double_t log(double_t  x) ;

/// @brief Method log, addr 0x64a2ff4, size 0x68, virtual false, abstract: false, final false
static inline float_t log(float_t  x) ;

/// @brief Method log10, addr 0x64a4218, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 log10(::Unity::Mathematics::double2  x) ;

/// @brief Method log10, addr 0x64a42c8, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 log10(::Unity::Mathematics::double3  x) ;

/// @brief Method log10, addr 0x64a43c8, size 0x148, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 log10(::Unity::Mathematics::double4  x) ;

/// @brief Method log10, addr 0x64a3ea4, size 0xb8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 log10(::Unity::Mathematics::float2  x) ;

/// @brief Method log10, addr 0x64a3f5c, size 0x108, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 log10(::Unity::Mathematics::float3  x) ;

/// @brief Method log10, addr 0x64a4064, size 0x154, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 log10(::Unity::Mathematics::float4  x) ;

/// @brief Method log10, addr 0x64a41b8, size 0x60, virtual false, abstract: false, final false
static inline double_t log10(double_t  x) ;

/// @brief Method log10, addr 0x64a3e3c, size 0x68, virtual false, abstract: false, final false
static inline float_t log10(float_t  x) ;

/// @brief Method log2, addr 0x64a3afc, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 log2(::Unity::Mathematics::double2  x) ;

/// @brief Method log2, addr 0x64a3bbc, size 0x118, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 log2(::Unity::Mathematics::double3  x) ;

/// @brief Method log2, addr 0x64a3cd4, size 0x168, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 log2(::Unity::Mathematics::double4  x) ;

/// @brief Method log2, addr 0x64a3738, size 0xc8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 log2(::Unity::Mathematics::float2  x) ;

/// @brief Method log2, addr 0x64a3800, size 0x120, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 log2(::Unity::Mathematics::float3  x) ;

/// @brief Method log2, addr 0x64a3920, size 0x174, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 log2(::Unity::Mathematics::float4  x) ;

/// @brief Method log2, addr 0x64a3a94, size 0x68, virtual false, abstract: false, final false
static inline double_t log2(double_t  x) ;

/// @brief Method log2, addr 0x64a36c8, size 0x70, virtual false, abstract: false, final false
static inline float_t log2(float_t  x) ;

/// @brief Method lzcnt, addr 0x64a8c00, size 0x78, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 lzcnt(::Unity::Mathematics::int2  x) ;

/// @brief Method lzcnt, addr 0x64a8e50, size 0x78, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 lzcnt(::Unity::Mathematics::uint2  x) ;

/// @brief Method lzcnt, addr 0x64a8c78, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 lzcnt(::Unity::Mathematics::int3  x) ;

/// @brief Method lzcnt, addr 0x64a8ec8, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 lzcnt(::Unity::Mathematics::uint3  x) ;

/// @brief Method lzcnt, addr 0x64a8d28, size 0xec, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 lzcnt(::Unity::Mathematics::int4  x) ;

/// @brief Method lzcnt, addr 0x64a8f78, size 0xec, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 lzcnt(::Unity::Mathematics::uint4  x) ;

/// @brief Method lzcnt, addr 0x64a8bc4, size 0x3c, virtual false, abstract: false, final false
static inline int32_t lzcnt(int32_t  x) ;

/// @brief Method lzcnt, addr 0x64a9064, size 0x4c, virtual false, abstract: false, final false
static inline int32_t lzcnt(int64_t  x) ;

/// @brief Method lzcnt, addr 0x64a8e14, size 0x3c, virtual false, abstract: false, final false
static inline int32_t lzcnt(uint32_t  x) ;

/// @brief Method lzcnt, addr 0x64a90b0, size 0x4c, virtual false, abstract: false, final false
static inline int32_t lzcnt(uint64_t  x) ;

/// @brief Method mad, addr 0x649999c, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 mad(::Unity::Mathematics::double2  mulA, ::Unity::Mathematics::double2  mulB, ::Unity::Mathematics::double2  addC) ;

/// @brief Method mad, addr 0x64999b0, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 mad(::Unity::Mathematics::double3  mulA, ::Unity::Mathematics::double3  mulB, ::Unity::Mathematics::double3  addC) ;

/// @brief Method mad, addr 0x64999d4, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 mad(::Unity::Mathematics::double4  mulA, ::Unity::Mathematics::double4  mulB, ::Unity::Mathematics::double4  addC) ;

/// @brief Method mad, addr 0x649992c, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 mad(::Unity::Mathematics::float2  mulA, ::Unity::Mathematics::float2  mulB, ::Unity::Mathematics::float2  addC) ;

/// @brief Method mad, addr 0x6499940, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 mad(::Unity::Mathematics::float3  mulA, ::Unity::Mathematics::float3  mulB, ::Unity::Mathematics::float3  addC) ;

/// @brief Method mad, addr 0x6499964, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 mad(::Unity::Mathematics::float4  mulA, ::Unity::Mathematics::float4  mulB, ::Unity::Mathematics::float4  addC) ;

/// @brief Method mad, addr 0x6499828, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 mad(::Unity::Mathematics::int2  mulA, ::Unity::Mathematics::int2  mulB, ::Unity::Mathematics::int2  addC) ;

/// @brief Method mad, addr 0x6499844, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 mad(::Unity::Mathematics::int3  mulA, ::Unity::Mathematics::int3  mulB, ::Unity::Mathematics::int3  addC) ;

/// @brief Method mad, addr 0x6499864, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 mad(::Unity::Mathematics::int4  mulA, ::Unity::Mathematics::int4  mulB, ::Unity::Mathematics::int4  addC) ;

/// @brief Method mad, addr 0x64998a0, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 mad(::Unity::Mathematics::uint2  mulA, ::Unity::Mathematics::uint2  mulB, ::Unity::Mathematics::uint2  addC) ;

/// @brief Method mad, addr 0x64998bc, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 mad(::Unity::Mathematics::uint3  mulA, ::Unity::Mathematics::uint3  mulB, ::Unity::Mathematics::uint3  addC) ;

/// @brief Method mad, addr 0x64998dc, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 mad(::Unity::Mathematics::uint4  mulA, ::Unity::Mathematics::uint4  mulB, ::Unity::Mathematics::uint4  addC) ;

/// @brief Method mad, addr 0x6499990, size 0xc, virtual false, abstract: false, final false
static inline double_t mad(double_t  mulA, double_t  mulB, double_t  addC) ;

/// @brief Method mad, addr 0x6499920, size 0xc, virtual false, abstract: false, final false
static inline float_t mad(float_t  mulA, float_t  mulB, float_t  addC) ;

/// @brief Method mad, addr 0x6499820, size 0x8, virtual false, abstract: false, final false
static inline int32_t mad(int32_t  mulA, int32_t  mulB, int32_t  addC) ;

/// @brief Method mad, addr 0x6499910, size 0x8, virtual false, abstract: false, final false
static inline int64_t mad(int64_t  mulA, int64_t  mulB, int64_t  addC) ;

/// @brief Method mad, addr 0x6499898, size 0x8, virtual false, abstract: false, final false
static inline uint32_t mad(uint32_t  mulA, uint32_t  mulB, uint32_t  addC) ;

/// @brief Method mad, addr 0x6499918, size 0x8, virtual false, abstract: false, final false
static inline uint64_t mad(uint64_t  mulA, uint64_t  mulB, uint64_t  addC) ;

/// @brief Method max, addr 0x6499160, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 max(::Unity::Mathematics::double2  x, ::Unity::Mathematics::double2  y) ;

/// @brief Method max, addr 0x6499190, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 max(::Unity::Mathematics::double3  x, ::Unity::Mathematics::double3  y) ;

/// @brief Method max, addr 0x64991d4, size 0x58, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 max(::Unity::Mathematics::double4  x, ::Unity::Mathematics::double4  y) ;

/// @brief Method max, addr 0x6499078, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 max(::Unity::Mathematics::float2  x, ::Unity::Mathematics::float2  y) ;

/// @brief Method max, addr 0x64990a8, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 max(::Unity::Mathematics::float3  x, ::Unity::Mathematics::float3  y) ;

/// @brief Method max, addr 0x64990ec, size 0x58, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 max(::Unity::Mathematics::float4  x, ::Unity::Mathematics::float4  y) ;

/// @brief Method max, addr 0x6498f30, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 max(::Unity::Mathematics::int2  x, ::Unity::Mathematics::int2  y) ;

/// @brief Method max, addr 0x6498f50, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 max(::Unity::Mathematics::int3  x, ::Unity::Mathematics::int3  y) ;

/// @brief Method max, addr 0x6498f78, size 0x3c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 max(::Unity::Mathematics::int4  x, ::Unity::Mathematics::int4  y) ;

/// @brief Method max, addr 0x6498fc0, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 max(::Unity::Mathematics::uint2  x, ::Unity::Mathematics::uint2  y) ;

/// @brief Method max, addr 0x6498fe0, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 max(::Unity::Mathematics::uint3  x, ::Unity::Mathematics::uint3  y) ;

/// @brief Method max, addr 0x6499008, size 0x3c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 max(::Unity::Mathematics::uint4  x, ::Unity::Mathematics::uint4  y) ;

/// @brief Method max, addr 0x6499144, size 0x1c, virtual false, abstract: false, final false
static inline double_t max(double_t  x, double_t  y) ;

/// @brief Method max, addr 0x649905c, size 0x1c, virtual false, abstract: false, final false
static inline float_t max(float_t  x, float_t  y) ;

/// @brief Method max, addr 0x6498f24, size 0xc, virtual false, abstract: false, final false
static inline int32_t max(int32_t  x, int32_t  y) ;

/// @brief Method max, addr 0x6499044, size 0xc, virtual false, abstract: false, final false
static inline int64_t max(int64_t  x, int64_t  y) ;

/// @brief Method max, addr 0x6498fb4, size 0xc, virtual false, abstract: false, final false
static inline uint32_t max(uint32_t  x, uint32_t  y) ;

/// @brief Method max, addr 0x6499050, size 0xc, virtual false, abstract: false, final false
static inline uint64_t max(uint64_t  x, uint64_t  y) ;

/// @brief Method min, addr 0x6498e58, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 min(::Unity::Mathematics::double2  x, ::Unity::Mathematics::double2  y) ;

/// @brief Method min, addr 0x6498e88, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 min(::Unity::Mathematics::double3  x, ::Unity::Mathematics::double3  y) ;

/// @brief Method min, addr 0x6498ecc, size 0x58, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 min(::Unity::Mathematics::double4  x, ::Unity::Mathematics::double4  y) ;

/// @brief Method min, addr 0x6498d70, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 min(::Unity::Mathematics::float2  x, ::Unity::Mathematics::float2  y) ;

/// @brief Method min, addr 0x6498da0, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 min(::Unity::Mathematics::float3  x, ::Unity::Mathematics::float3  y) ;

/// @brief Method min, addr 0x6498de4, size 0x58, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 min(::Unity::Mathematics::float4  x, ::Unity::Mathematics::float4  y) ;

/// @brief Method min, addr 0x6498c28, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 min(::Unity::Mathematics::int2  x, ::Unity::Mathematics::int2  y) ;

/// @brief Method min, addr 0x6498c48, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 min(::Unity::Mathematics::int3  x, ::Unity::Mathematics::int3  y) ;

/// @brief Method min, addr 0x6498c70, size 0x3c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 min(::Unity::Mathematics::int4  x, ::Unity::Mathematics::int4  y) ;

/// @brief Method min, addr 0x6498cb8, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 min(::Unity::Mathematics::uint2  x, ::Unity::Mathematics::uint2  y) ;

/// @brief Method min, addr 0x6498cd8, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 min(::Unity::Mathematics::uint3  x, ::Unity::Mathematics::uint3  y) ;

/// @brief Method min, addr 0x6498d00, size 0x3c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 min(::Unity::Mathematics::uint4  x, ::Unity::Mathematics::uint4  y) ;

/// @brief Method min, addr 0x6498e3c, size 0x1c, virtual false, abstract: false, final false
static inline double_t min(double_t  x, double_t  y) ;

/// @brief Method min, addr 0x6498d54, size 0x1c, virtual false, abstract: false, final false
static inline float_t min(float_t  x, float_t  y) ;

/// @brief Method min, addr 0x6498c1c, size 0xc, virtual false, abstract: false, final false
static inline int32_t min(int32_t  x, int32_t  y) ;

/// @brief Method min, addr 0x6498d3c, size 0xc, virtual false, abstract: false, final false
static inline int64_t min(int64_t  x, int64_t  y) ;

/// @brief Method min, addr 0x6498cac, size 0xc, virtual false, abstract: false, final false
static inline uint32_t min(uint32_t  x, uint32_t  y) ;

/// @brief Method min, addr 0x6498d48, size 0xc, virtual false, abstract: false, final false
static inline uint64_t min(uint64_t  x, uint64_t  y) ;

/// @brief Method modf, addr 0x64a4a08, size 0xd4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 modf(::Unity::Mathematics::double2  x, ::ByRef<::Unity::Mathematics::double2>  i) ;

/// @brief Method modf, addr 0x64a4adc, size 0x54, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 modf(::Unity::Mathematics::double3  x, ::ByRef<::Unity::Mathematics::double3>  i) ;

/// @brief Method modf, addr 0x64a4b30, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 modf(::Unity::Mathematics::double4  x, ::ByRef<::Unity::Mathematics::double4>  i) ;

/// @brief Method modf, addr 0x64a4800, size 0xdc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 modf(::Unity::Mathematics::float2  x, ::ByRef<::Unity::Mathematics::float2>  i) ;

/// @brief Method modf, addr 0x64a48dc, size 0x54, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 modf(::Unity::Mathematics::float3  x, ::ByRef<::Unity::Mathematics::float3>  i) ;

/// @brief Method modf, addr 0x64a4930, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 modf(::Unity::Mathematics::float4  x, ::ByRef<::Unity::Mathematics::float4>  i) ;

/// @brief Method modf, addr 0x64a4990, size 0x78, virtual false, abstract: false, final false
static inline double_t modf(double_t  x, ::ByRef<double_t>  i) ;

/// @brief Method modf, addr 0x64a4788, size 0x78, virtual false, abstract: false, final false
static inline float_t modf(float_t  x, ::ByRef<float_t>  i) ;

/// @brief Method movehl, addr 0x64ad150, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 movehl(::Unity::Mathematics::double4  a, ::Unity::Mathematics::double4  b) ;

/// @brief Method movehl, addr 0x64ad144, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 movehl(::Unity::Mathematics::float4  a, ::Unity::Mathematics::float4  b) ;

/// @brief Method movelh, addr 0x64ad138, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 movelh(::Unity::Mathematics::double4  a, ::Unity::Mathematics::double4  b) ;

/// @brief Method movelh, addr 0x64ad12c, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 movelh(::Unity::Mathematics::float4  a, ::Unity::Mathematics::float4  b) ;

/// @brief Method mul, addr 0x648a1d4, size 0x184, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::AffineTransform mul(::Unity::Mathematics::AffineTransform  a, ::Unity::Mathematics::AffineTransform  b) ;

/// @brief Method mul, addr 0x648a4b4, size 0x114, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::AffineTransform mul(::Unity::Mathematics::AffineTransform  a, ::Unity::Mathematics::float3x3  b) ;

/// @brief Method mul, addr 0x648a358, size 0x15c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::AffineTransform mul(::Unity::Mathematics::float3x3  a, ::Unity::Mathematics::AffineTransform  b) ;

/// @brief Method mul, addr 0x64b5048, size 0x128, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::RigidTransform mul(::Unity::Mathematics::RigidTransform  a, ::Unity::Mathematics::RigidTransform  b) ;

/// @brief Method mul, addr 0x64aed10, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 mul(::Unity::Mathematics::double2  a, ::Unity::Mathematics::double2x2  b) ;

/// @brief Method mul, addr 0x64af034, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 mul(::Unity::Mathematics::double2x2  a, ::Unity::Mathematics::double2  b) ;

/// @brief Method mul, addr 0x64af16c, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 mul(::Unity::Mathematics::double2x3  a, ::Unity::Mathematics::double3  b) ;

/// @brief Method mul, addr 0x64af2e4, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 mul(::Unity::Mathematics::double2x4  a, ::Unity::Mathematics::double4  b) ;

/// @brief Method mul, addr 0x64aedbc, size 0x3c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 mul(::Unity::Mathematics::double3  a, ::Unity::Mathematics::double3x2  b) ;

/// @brief Method mul, addr 0x64aeee4, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 mul(::Unity::Mathematics::double4  a, ::Unity::Mathematics::double4x2  b) ;

/// @brief Method mul, addr 0x64af050, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x2 mul(::Unity::Mathematics::double2x2  a, ::Unity::Mathematics::double2x2  b) ;

/// @brief Method mul, addr 0x64af190, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x2 mul(::Unity::Mathematics::double2x3  a, ::Unity::Mathematics::double3x2  b) ;

/// @brief Method mul, addr 0x64af310, size 0x94, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x2 mul(::Unity::Mathematics::double2x4  a, ::Unity::Mathematics::double4x2  b) ;

/// @brief Method mul, addr 0x64af084, size 0x64, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x3 mul(::Unity::Mathematics::double2x2  a, ::Unity::Mathematics::double2x3  b) ;

/// @brief Method mul, addr 0x64af200, size 0x64, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x3 mul(::Unity::Mathematics::double2x3  a, ::Unity::Mathematics::double3x3  b) ;

/// @brief Method mul, addr 0x64af3a4, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x3 mul(::Unity::Mathematics::double2x4  a, ::Unity::Mathematics::double4x3  b) ;

/// @brief Method mul, addr 0x64af0e8, size 0x84, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x4 mul(::Unity::Mathematics::double2x2  a, ::Unity::Mathematics::double2x4  b) ;

/// @brief Method mul, addr 0x64af264, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x4 mul(::Unity::Mathematics::double2x3  a, ::Unity::Mathematics::double3x4  b) ;

/// @brief Method mul, addr 0x64af424, size 0xa4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x4 mul(::Unity::Mathematics::double2x4  a, ::Unity::Mathematics::double4x4  b) ;

/// @brief Method mul, addr 0x64aed2c, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 mul(::Unity::Mathematics::double2  a, ::Unity::Mathematics::double2x3  b) ;

/// @brief Method mul, addr 0x64aedf8, size 0x58, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 mul(::Unity::Mathematics::double3  a, ::Unity::Mathematics::double3x3  b) ;

/// @brief Method mul, addr 0x64af4c8, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 mul(::Unity::Mathematics::double3x2  a, ::Unity::Mathematics::double2  b) ;

/// @brief Method mul, addr 0x64af6b0, size 0x54, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 mul(::Unity::Mathematics::double3x3  a, ::Unity::Mathematics::double3  b) ;

/// @brief Method mul, addr 0x64af940, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 mul(::Unity::Mathematics::double3x4  a, ::Unity::Mathematics::double4  b) ;

/// @brief Method mul, addr 0x64aef30, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 mul(::Unity::Mathematics::double4  a, ::Unity::Mathematics::double4x3  b) ;

/// @brief Method mul, addr 0x64af4fc, size 0x54, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x2 mul(::Unity::Mathematics::double3x2  a, ::Unity::Mathematics::double2x2  b) ;

/// @brief Method mul, addr 0x64af704, size 0x88, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x2 mul(::Unity::Mathematics::double3x3  a, ::Unity::Mathematics::double3x2  b) ;

/// @brief Method mul, addr 0x64af9b0, size 0xb4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x2 mul(::Unity::Mathematics::double3x4  a, ::Unity::Mathematics::double4x2  b) ;

/// @brief Method mul, addr 0x64af550, size 0x98, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x3 mul(::Unity::Mathematics::double3x2  a, ::Unity::Mathematics::double2x3  b) ;

/// @brief Method mul, addr 0x64af78c, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x3 mul(::Unity::Mathematics::double3x3  a, ::Unity::Mathematics::double3x3  b) ;

/// @brief Method mul, addr 0x64afa64, size 0xfc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x3 mul(::Unity::Mathematics::double3x4  a, ::Unity::Mathematics::double4x3  b) ;

/// @brief Method mul, addr 0x64af5e8, size 0xc8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x4 mul(::Unity::Mathematics::double3x2  a, ::Unity::Mathematics::double2x4  b) ;

/// @brief Method mul, addr 0x64af84c, size 0xf4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x4 mul(::Unity::Mathematics::double3x3  a, ::Unity::Mathematics::double3x4  b) ;

/// @brief Method mul, addr 0x64afb60, size 0x144, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x4 mul(::Unity::Mathematics::double3x4  a, ::Unity::Mathematics::double4x4  b) ;

/// @brief Method mul, addr 0x64aed60, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 mul(::Unity::Mathematics::double2  a, ::Unity::Mathematics::double2x4  b) ;

/// @brief Method mul, addr 0x64aee50, size 0x74, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 mul(::Unity::Mathematics::double3  a, ::Unity::Mathematics::double3x4  b) ;

/// @brief Method mul, addr 0x64aefa0, size 0x94, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 mul(::Unity::Mathematics::double4  a, ::Unity::Mathematics::double4x4  b) ;

/// @brief Method mul, addr 0x64afca4, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 mul(::Unity::Mathematics::double4x2  a, ::Unity::Mathematics::double2  b) ;

/// @brief Method mul, addr 0x64afe3c, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 mul(::Unity::Mathematics::double4x3  a, ::Unity::Mathematics::double3  b) ;

/// @brief Method mul, addr 0x64b00bc, size 0x98, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 mul(::Unity::Mathematics::double4x4  a, ::Unity::Mathematics::double4  b) ;

/// @brief Method mul, addr 0x64afce8, size 0x48, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x2 mul(::Unity::Mathematics::double4x2  a, ::Unity::Mathematics::double2x2  b) ;

/// @brief Method mul, addr 0x64afeac, size 0x7c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x2 mul(::Unity::Mathematics::double4x3  a, ::Unity::Mathematics::double3x2  b) ;

/// @brief Method mul, addr 0x64b0154, size 0xa4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x2 mul(::Unity::Mathematics::double4x4  a, ::Unity::Mathematics::double4x2  b) ;

/// @brief Method mul, addr 0x64afd30, size 0x78, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x3 mul(::Unity::Mathematics::double4x2  a, ::Unity::Mathematics::double2x3  b) ;

/// @brief Method mul, addr 0x64aff28, size 0xb4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x3 mul(::Unity::Mathematics::double4x3  a, ::Unity::Mathematics::double3x3  b) ;

/// @brief Method mul, addr 0x64b01f8, size 0xec, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x3 mul(::Unity::Mathematics::double4x4  a, ::Unity::Mathematics::double4x3  b) ;

/// @brief Method mul, addr 0x64afda8, size 0x94, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x4 mul(::Unity::Mathematics::double4x2  a, ::Unity::Mathematics::double2x4  b) ;

/// @brief Method mul, addr 0x64affdc, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x4 mul(::Unity::Mathematics::double4x3  a, ::Unity::Mathematics::double3x4  b) ;

/// @brief Method mul, addr 0x64b02e4, size 0x12c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x4 mul(::Unity::Mathematics::double4x4  a, ::Unity::Mathematics::double4x4  b) ;

/// @brief Method mul, addr 0x64ad738, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 mul(::Unity::Mathematics::float2  a, ::Unity::Mathematics::float2x2  b) ;

/// @brief Method mul, addr 0x64ada5c, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 mul(::Unity::Mathematics::float2x2  a, ::Unity::Mathematics::float2  b) ;

/// @brief Method mul, addr 0x64adb74, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 mul(::Unity::Mathematics::float2x3  a, ::Unity::Mathematics::float3  b) ;

/// @brief Method mul, addr 0x64add0c, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 mul(::Unity::Mathematics::float2x4  a, ::Unity::Mathematics::float4  b) ;

/// @brief Method mul, addr 0x64ad7e4, size 0x3c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 mul(::Unity::Mathematics::float3  a, ::Unity::Mathematics::float3x2  b) ;

/// @brief Method mul, addr 0x64ad90c, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 mul(::Unity::Mathematics::float4  a, ::Unity::Mathematics::float4x2  b) ;

/// @brief Method mul, addr 0x64ada78, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x2 mul(::Unity::Mathematics::float2x2  a, ::Unity::Mathematics::float2x2  b) ;

/// @brief Method mul, addr 0x64adb98, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x2 mul(::Unity::Mathematics::float2x3  a, ::Unity::Mathematics::float3x2  b) ;

/// @brief Method mul, addr 0x64add38, size 0x7c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x2 mul(::Unity::Mathematics::float2x4  a, ::Unity::Mathematics::float4x2  b) ;

/// @brief Method mul, addr 0x64adaac, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x3 mul(::Unity::Mathematics::float2x2  a, ::Unity::Mathematics::float2x3  b) ;

/// @brief Method mul, addr 0x64adbf8, size 0x7c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x3 mul(::Unity::Mathematics::float2x3  a, ::Unity::Mathematics::float3x3  b) ;

/// @brief Method mul, addr 0x64addb4, size 0xac, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x3 mul(::Unity::Mathematics::float2x4  a, ::Unity::Mathematics::float4x3  b) ;

/// @brief Method mul, addr 0x64adb0c, size 0x68, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x4 mul(::Unity::Mathematics::float2x2  a, ::Unity::Mathematics::float2x4  b) ;

/// @brief Method mul, addr 0x64adc74, size 0x98, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x4 mul(::Unity::Mathematics::float2x3  a, ::Unity::Mathematics::float3x4  b) ;

/// @brief Method mul, addr 0x64ade60, size 0xc8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x4 mul(::Unity::Mathematics::float2x4  a, ::Unity::Mathematics::float4x4  b) ;

/// @brief Method mul, addr 0x64ad754, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 mul(::Unity::Mathematics::float2  a, ::Unity::Mathematics::float2x3  b) ;

/// @brief Method mul, addr 0x64ad820, size 0x58, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 mul(::Unity::Mathematics::float3  a, ::Unity::Mathematics::float3x3  b) ;

/// @brief Method mul, addr 0x64adf28, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 mul(::Unity::Mathematics::float3x2  a, ::Unity::Mathematics::float2  b) ;

/// @brief Method mul, addr 0x64ae14c, size 0x48, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 mul(::Unity::Mathematics::float3x3  a, ::Unity::Mathematics::float3  b) ;

/// @brief Method mul, addr 0x64ae494, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 mul(::Unity::Mathematics::float3x4  a, ::Unity::Mathematics::float4  b) ;

/// @brief Method mul, addr 0x64ad958, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 mul(::Unity::Mathematics::float4  a, ::Unity::Mathematics::float4x3  b) ;

/// @brief Method mul, addr 0x64b418c, size 0x7c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 mul(::Unity::Mathematics::quaternion  q, ::Unity::Mathematics::float3  v) ;

/// @brief Method mul, addr 0x64adf58, size 0x6c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x2 mul(::Unity::Mathematics::float3x2  a, ::Unity::Mathematics::float2x2  b) ;

/// @brief Method mul, addr 0x64ae194, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x2 mul(::Unity::Mathematics::float3x3  a, ::Unity::Mathematics::float3x2  b) ;

/// @brief Method mul, addr 0x64ae4f4, size 0xdc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x2 mul(::Unity::Mathematics::float3x4  a, ::Unity::Mathematics::float4x2  b) ;

/// @brief Method mul, addr 0x64adfc4, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 mul(::Unity::Mathematics::float3x2  a, ::Unity::Mathematics::float2x3  b) ;

/// @brief Method mul, addr 0x64ae234, size 0x104, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 mul(::Unity::Mathematics::float3x3  a, ::Unity::Mathematics::float3x3  b) ;

/// @brief Method mul, addr 0x64ae5d0, size 0x168, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 mul(::Unity::Mathematics::float3x4  a, ::Unity::Mathematics::float4x3  b) ;

/// @brief Method mul, addr 0x64ae074, size 0xd8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x4 mul(::Unity::Mathematics::float3x2  a, ::Unity::Mathematics::float2x4  b) ;

/// @brief Method mul, addr 0x64ae338, size 0x15c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x4 mul(::Unity::Mathematics::float3x3  a, ::Unity::Mathematics::float3x4  b) ;

/// @brief Method mul, addr 0x64ae738, size 0x1e4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x4 mul(::Unity::Mathematics::float3x4  a, ::Unity::Mathematics::float4x4  b) ;

/// @brief Method mul, addr 0x648a5c8, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 mul(::Unity::Mathematics::AffineTransform  a, ::Unity::Mathematics::float4  pos) ;

/// @brief Method mul, addr 0x64b5170, size 0xa8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 mul(::Unity::Mathematics::RigidTransform  a, ::Unity::Mathematics::float4  pos) ;

/// @brief Method mul, addr 0x64ad788, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 mul(::Unity::Mathematics::float2  a, ::Unity::Mathematics::float2x4  b) ;

/// @brief Method mul, addr 0x64ad878, size 0x74, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 mul(::Unity::Mathematics::float3  a, ::Unity::Mathematics::float3x4  b) ;

/// @brief Method mul, addr 0x64ad9c8, size 0x94, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 mul(::Unity::Mathematics::float4  a, ::Unity::Mathematics::float4x4  b) ;

/// @brief Method mul, addr 0x64ae91c, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 mul(::Unity::Mathematics::float4x2  a, ::Unity::Mathematics::float2  b) ;

/// @brief Method mul, addr 0x64ae9f0, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 mul(::Unity::Mathematics::float4x3  a, ::Unity::Mathematics::float3  b) ;

/// @brief Method mul, addr 0x64aeb48, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 mul(::Unity::Mathematics::float4x4  a, ::Unity::Mathematics::float4  b) ;

/// @brief Method mul, addr 0x64ae93c, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x2 mul(::Unity::Mathematics::float4x2  a, ::Unity::Mathematics::float2x2  b) ;

/// @brief Method mul, addr 0x64aea1c, size 0x48, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x2 mul(::Unity::Mathematics::float4x3  a, ::Unity::Mathematics::float3x2  b) ;

/// @brief Method mul, addr 0x64aeb7c, size 0x58, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x2 mul(::Unity::Mathematics::float4x4  a, ::Unity::Mathematics::float4x2  b) ;

/// @brief Method mul, addr 0x64ae960, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x3 mul(::Unity::Mathematics::float4x2  a, ::Unity::Mathematics::float2x3  b) ;

/// @brief Method mul, addr 0x64aea64, size 0x64, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x3 mul(::Unity::Mathematics::float4x3  a, ::Unity::Mathematics::float3x3  b) ;

/// @brief Method mul, addr 0x64aebd4, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x3 mul(::Unity::Mathematics::float4x4  a, ::Unity::Mathematics::float4x3  b) ;

/// @brief Method mul, addr 0x64ae9a0, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x4 mul(::Unity::Mathematics::float4x2  a, ::Unity::Mathematics::float2x4  b) ;

/// @brief Method mul, addr 0x64aeac8, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x4 mul(::Unity::Mathematics::float4x3  a, ::Unity::Mathematics::float3x4  b) ;

/// @brief Method mul, addr 0x64aec54, size 0xa4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x4 mul(::Unity::Mathematics::float4x4  a, ::Unity::Mathematics::float4x4  b) ;

/// @brief Method mul, addr 0x64b042c, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 mul(::Unity::Mathematics::int2  a, ::Unity::Mathematics::int2x2  b) ;

/// @brief Method mul, addr 0x64b06dc, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 mul(::Unity::Mathematics::int2x2  a, ::Unity::Mathematics::int2  b) ;

/// @brief Method mul, addr 0x64b080c, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 mul(::Unity::Mathematics::int2x3  a, ::Unity::Mathematics::int3  b) ;

/// @brief Method mul, addr 0x64b09b8, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 mul(::Unity::Mathematics::int2x4  a, ::Unity::Mathematics::int4  b) ;

/// @brief Method mul, addr 0x64b04d8, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 mul(::Unity::Mathematics::int3  a, ::Unity::Mathematics::int3x2  b) ;

/// @brief Method mul, addr 0x64b05d0, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 mul(::Unity::Mathematics::int4  a, ::Unity::Mathematics::int4x2  b) ;

/// @brief Method mul, addr 0x64b0700, size 0x3c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x2 mul(::Unity::Mathematics::int2x2  a, ::Unity::Mathematics::int2x2  b) ;

/// @brief Method mul, addr 0x64b083c, size 0x54, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x2 mul(::Unity::Mathematics::int2x3  a, ::Unity::Mathematics::int3x2  b) ;

/// @brief Method mul, addr 0x64b0a04, size 0x6c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x2 mul(::Unity::Mathematics::int2x4  a, ::Unity::Mathematics::int4x2  b) ;

/// @brief Method mul, addr 0x64b073c, size 0x5c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x3 mul(::Unity::Mathematics::int2x2  a, ::Unity::Mathematics::int2x3  b) ;

/// @brief Method mul, addr 0x64b0890, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x3 mul(::Unity::Mathematics::int2x3  a, ::Unity::Mathematics::int3x3  b) ;

/// @brief Method mul, addr 0x64b0a70, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x3 mul(::Unity::Mathematics::int2x4  a, ::Unity::Mathematics::int4x3  b) ;

/// @brief Method mul, addr 0x64b0798, size 0x74, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x4 mul(::Unity::Mathematics::int2x2  a, ::Unity::Mathematics::int2x4  b) ;

/// @brief Method mul, addr 0x64b0910, size 0xa8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x4 mul(::Unity::Mathematics::int2x3  a, ::Unity::Mathematics::int3x4  b) ;

/// @brief Method mul, addr 0x64b0b10, size 0xcc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x4 mul(::Unity::Mathematics::int2x4  a, ::Unity::Mathematics::int4x4  b) ;

/// @brief Method mul, addr 0x64b0450, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 mul(::Unity::Mathematics::int2  a, ::Unity::Mathematics::int2x3  b) ;

/// @brief Method mul, addr 0x64b050c, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 mul(::Unity::Mathematics::int3  a, ::Unity::Mathematics::int3x3  b) ;

/// @brief Method mul, addr 0x64b0bdc, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 mul(::Unity::Mathematics::int3x2  a, ::Unity::Mathematics::int2  b) ;

/// @brief Method mul, addr 0x64b0dac, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 mul(::Unity::Mathematics::int3x3  a, ::Unity::Mathematics::int3  b) ;

/// @brief Method mul, addr 0x64b1038, size 0x68, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 mul(::Unity::Mathematics::int3x4  a, ::Unity::Mathematics::int4  b) ;

/// @brief Method mul, addr 0x64b0610, size 0x58, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 mul(::Unity::Mathematics::int4  a, ::Unity::Mathematics::int4x3  b) ;

/// @brief Method mul, addr 0x64b0c0c, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x2 mul(::Unity::Mathematics::int3x2  a, ::Unity::Mathematics::int2x2  b) ;

/// @brief Method mul, addr 0x64b0df0, size 0x84, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x2 mul(::Unity::Mathematics::int3x3  a, ::Unity::Mathematics::int3x2  b) ;

/// @brief Method mul, addr 0x64b10a0, size 0xac, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x2 mul(::Unity::Mathematics::int3x4  a, ::Unity::Mathematics::int4x2  b) ;

/// @brief Method mul, addr 0x64b0c6c, size 0x88, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x3 mul(::Unity::Mathematics::int3x2  a, ::Unity::Mathematics::int2x3  b) ;

/// @brief Method mul, addr 0x64b0e74, size 0xc4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x3 mul(::Unity::Mathematics::int3x3  a, ::Unity::Mathematics::int3x3  b) ;

/// @brief Method mul, addr 0x64b114c, size 0xf8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x3 mul(::Unity::Mathematics::int3x4  a, ::Unity::Mathematics::int4x3  b) ;

/// @brief Method mul, addr 0x64b0cf4, size 0xb8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x4 mul(::Unity::Mathematics::int3x2  a, ::Unity::Mathematics::int2x4  b) ;

/// @brief Method mul, addr 0x64b0f38, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x4 mul(::Unity::Mathematics::int3x3  a, ::Unity::Mathematics::int3x4  b) ;

/// @brief Method mul, addr 0x64b1244, size 0x14c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x4 mul(::Unity::Mathematics::int3x4  a, ::Unity::Mathematics::int4x4  b) ;

/// @brief Method mul, addr 0x64b0480, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 mul(::Unity::Mathematics::int2  a, ::Unity::Mathematics::int2x4  b) ;

/// @brief Method mul, addr 0x64b0550, size 0x5c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 mul(::Unity::Mathematics::int3  a, ::Unity::Mathematics::int3x4  b) ;

/// @brief Method mul, addr 0x64b0668, size 0x74, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 mul(::Unity::Mathematics::int4  a, ::Unity::Mathematics::int4x4  b) ;

/// @brief Method mul, addr 0x64b1390, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 mul(::Unity::Mathematics::int4x2  a, ::Unity::Mathematics::int2  b) ;

/// @brief Method mul, addr 0x64b15e4, size 0x68, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 mul(::Unity::Mathematics::int4x3  a, ::Unity::Mathematics::int3  b) ;

/// @brief Method mul, addr 0x64b193c, size 0x8c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 mul(::Unity::Mathematics::int4x4  a, ::Unity::Mathematics::int4  b) ;

/// @brief Method mul, addr 0x64b13d4, size 0x78, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x2 mul(::Unity::Mathematics::int4x2  a, ::Unity::Mathematics::int2x2  b) ;

/// @brief Method mul, addr 0x64b164c, size 0xa8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x2 mul(::Unity::Mathematics::int4x3  a, ::Unity::Mathematics::int3x2  b) ;

/// @brief Method mul, addr 0x64b19c8, size 0xe4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x2 mul(::Unity::Mathematics::int4x4  a, ::Unity::Mathematics::int4x2  b) ;

/// @brief Method mul, addr 0x64b144c, size 0xac, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x3 mul(::Unity::Mathematics::int4x2  a, ::Unity::Mathematics::int2x3  b) ;

/// @brief Method mul, addr 0x64b16f4, size 0xfc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x3 mul(::Unity::Mathematics::int4x3  a, ::Unity::Mathematics::int3x3  b) ;

/// @brief Method mul, addr 0x64b1aac, size 0x148, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x3 mul(::Unity::Mathematics::int4x4  a, ::Unity::Mathematics::int4x3  b) ;

/// @brief Method mul, addr 0x64b14f8, size 0xec, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 mul(::Unity::Mathematics::int4x2  a, ::Unity::Mathematics::int2x4  b) ;

/// @brief Method mul, addr 0x64b17f0, size 0x14c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 mul(::Unity::Mathematics::int4x3  a, ::Unity::Mathematics::int3x4  b) ;

/// @brief Method mul, addr 0x64b1bf4, size 0x1a4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 mul(::Unity::Mathematics::int4x4  a, ::Unity::Mathematics::int4x4  b) ;

/// @brief Method mul, addr 0x64b4118, size 0x74, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::quaternion mul(::Unity::Mathematics::quaternion  a, ::Unity::Mathematics::quaternion  b) ;

/// @brief Method mul, addr 0x64b1db4, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 mul(::Unity::Mathematics::uint2  a, ::Unity::Mathematics::uint2x2  b) ;

/// @brief Method mul, addr 0x64b2064, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 mul(::Unity::Mathematics::uint2x2  a, ::Unity::Mathematics::uint2  b) ;

/// @brief Method mul, addr 0x64b2194, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 mul(::Unity::Mathematics::uint2x3  a, ::Unity::Mathematics::uint3  b) ;

/// @brief Method mul, addr 0x64b2340, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 mul(::Unity::Mathematics::uint2x4  a, ::Unity::Mathematics::uint4  b) ;

/// @brief Method mul, addr 0x64b1e60, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 mul(::Unity::Mathematics::uint3  a, ::Unity::Mathematics::uint3x2  b) ;

/// @brief Method mul, addr 0x64b1f58, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 mul(::Unity::Mathematics::uint4  a, ::Unity::Mathematics::uint4x2  b) ;

/// @brief Method mul, addr 0x64b2088, size 0x3c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x2 mul(::Unity::Mathematics::uint2x2  a, ::Unity::Mathematics::uint2x2  b) ;

/// @brief Method mul, addr 0x64b21c4, size 0x54, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x2 mul(::Unity::Mathematics::uint2x3  a, ::Unity::Mathematics::uint3x2  b) ;

/// @brief Method mul, addr 0x64b238c, size 0x6c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x2 mul(::Unity::Mathematics::uint2x4  a, ::Unity::Mathematics::uint4x2  b) ;

/// @brief Method mul, addr 0x64b20c4, size 0x5c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x3 mul(::Unity::Mathematics::uint2x2  a, ::Unity::Mathematics::uint2x3  b) ;

/// @brief Method mul, addr 0x64b2218, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x3 mul(::Unity::Mathematics::uint2x3  a, ::Unity::Mathematics::uint3x3  b) ;

/// @brief Method mul, addr 0x64b23f8, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x3 mul(::Unity::Mathematics::uint2x4  a, ::Unity::Mathematics::uint4x3  b) ;

/// @brief Method mul, addr 0x64b2120, size 0x74, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x4 mul(::Unity::Mathematics::uint2x2  a, ::Unity::Mathematics::uint2x4  b) ;

/// @brief Method mul, addr 0x64b2298, size 0xa8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x4 mul(::Unity::Mathematics::uint2x3  a, ::Unity::Mathematics::uint3x4  b) ;

/// @brief Method mul, addr 0x64b2498, size 0xcc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x4 mul(::Unity::Mathematics::uint2x4  a, ::Unity::Mathematics::uint4x4  b) ;

/// @brief Method mul, addr 0x64b1dd8, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 mul(::Unity::Mathematics::uint2  a, ::Unity::Mathematics::uint2x3  b) ;

/// @brief Method mul, addr 0x64b1e94, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 mul(::Unity::Mathematics::uint3  a, ::Unity::Mathematics::uint3x3  b) ;

/// @brief Method mul, addr 0x64b2564, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 mul(::Unity::Mathematics::uint3x2  a, ::Unity::Mathematics::uint2  b) ;

/// @brief Method mul, addr 0x64b2734, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 mul(::Unity::Mathematics::uint3x3  a, ::Unity::Mathematics::uint3  b) ;

/// @brief Method mul, addr 0x64b29c0, size 0x68, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 mul(::Unity::Mathematics::uint3x4  a, ::Unity::Mathematics::uint4  b) ;

/// @brief Method mul, addr 0x64b1f98, size 0x58, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 mul(::Unity::Mathematics::uint4  a, ::Unity::Mathematics::uint4x3  b) ;

/// @brief Method mul, addr 0x64b2594, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x2 mul(::Unity::Mathematics::uint3x2  a, ::Unity::Mathematics::uint2x2  b) ;

/// @brief Method mul, addr 0x64b2778, size 0x84, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x2 mul(::Unity::Mathematics::uint3x3  a, ::Unity::Mathematics::uint3x2  b) ;

/// @brief Method mul, addr 0x64b2a28, size 0xac, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x2 mul(::Unity::Mathematics::uint3x4  a, ::Unity::Mathematics::uint4x2  b) ;

/// @brief Method mul, addr 0x64b25f4, size 0x88, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x3 mul(::Unity::Mathematics::uint3x2  a, ::Unity::Mathematics::uint2x3  b) ;

/// @brief Method mul, addr 0x64b27fc, size 0xc4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x3 mul(::Unity::Mathematics::uint3x3  a, ::Unity::Mathematics::uint3x3  b) ;

/// @brief Method mul, addr 0x64b2ad4, size 0xf8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x3 mul(::Unity::Mathematics::uint3x4  a, ::Unity::Mathematics::uint4x3  b) ;

/// @brief Method mul, addr 0x64b267c, size 0xb8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x4 mul(::Unity::Mathematics::uint3x2  a, ::Unity::Mathematics::uint2x4  b) ;

/// @brief Method mul, addr 0x64b28c0, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x4 mul(::Unity::Mathematics::uint3x3  a, ::Unity::Mathematics::uint3x4  b) ;

/// @brief Method mul, addr 0x64b2bcc, size 0x14c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x4 mul(::Unity::Mathematics::uint3x4  a, ::Unity::Mathematics::uint4x4  b) ;

/// @brief Method mul, addr 0x64b1e08, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 mul(::Unity::Mathematics::uint2  a, ::Unity::Mathematics::uint2x4  b) ;

/// @brief Method mul, addr 0x64b1ed8, size 0x5c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 mul(::Unity::Mathematics::uint3  a, ::Unity::Mathematics::uint3x4  b) ;

/// @brief Method mul, addr 0x64b1ff0, size 0x74, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 mul(::Unity::Mathematics::uint4  a, ::Unity::Mathematics::uint4x4  b) ;

/// @brief Method mul, addr 0x64b2d18, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 mul(::Unity::Mathematics::uint4x2  a, ::Unity::Mathematics::uint2  b) ;

/// @brief Method mul, addr 0x64b2f6c, size 0x68, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 mul(::Unity::Mathematics::uint4x3  a, ::Unity::Mathematics::uint3  b) ;

/// @brief Method mul, addr 0x64b32c4, size 0x8c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 mul(::Unity::Mathematics::uint4x4  a, ::Unity::Mathematics::uint4  b) ;

/// @brief Method mul, addr 0x64b2d5c, size 0x78, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x2 mul(::Unity::Mathematics::uint4x2  a, ::Unity::Mathematics::uint2x2  b) ;

/// @brief Method mul, addr 0x64b2fd4, size 0xa8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x2 mul(::Unity::Mathematics::uint4x3  a, ::Unity::Mathematics::uint3x2  b) ;

/// @brief Method mul, addr 0x64b3350, size 0xe4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x2 mul(::Unity::Mathematics::uint4x4  a, ::Unity::Mathematics::uint4x2  b) ;

/// @brief Method mul, addr 0x64b2dd4, size 0xac, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x3 mul(::Unity::Mathematics::uint4x2  a, ::Unity::Mathematics::uint2x3  b) ;

/// @brief Method mul, addr 0x64b307c, size 0xfc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x3 mul(::Unity::Mathematics::uint4x3  a, ::Unity::Mathematics::uint3x3  b) ;

/// @brief Method mul, addr 0x64b3434, size 0x148, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x3 mul(::Unity::Mathematics::uint4x4  a, ::Unity::Mathematics::uint4x3  b) ;

/// @brief Method mul, addr 0x64b2e80, size 0xec, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x4 mul(::Unity::Mathematics::uint4x2  a, ::Unity::Mathematics::uint2x4  b) ;

/// @brief Method mul, addr 0x64b3178, size 0x14c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x4 mul(::Unity::Mathematics::uint4x3  a, ::Unity::Mathematics::uint3x4  b) ;

/// @brief Method mul, addr 0x64b357c, size 0x1a4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x4 mul(::Unity::Mathematics::uint4x4  a, ::Unity::Mathematics::uint4x4  b) ;

/// @brief Method mul, addr 0x64aed00, size 0x10, virtual false, abstract: false, final false
static inline double_t mul(::Unity::Mathematics::double2  a, ::Unity::Mathematics::double2  b) ;

/// @brief Method mul, addr 0x64aeda4, size 0x18, virtual false, abstract: false, final false
static inline double_t mul(::Unity::Mathematics::double3  a, ::Unity::Mathematics::double3  b) ;

/// @brief Method mul, addr 0x64aeec4, size 0x20, virtual false, abstract: false, final false
static inline double_t mul(::Unity::Mathematics::double4  a, ::Unity::Mathematics::double4  b) ;

/// @brief Method mul, addr 0x64aecf8, size 0x8, virtual false, abstract: false, final false
static inline double_t mul(double_t  a, double_t  b) ;

/// @brief Method mul, addr 0x64ad728, size 0x10, virtual false, abstract: false, final false
static inline float_t mul(::Unity::Mathematics::float2  a, ::Unity::Mathematics::float2  b) ;

/// @brief Method mul, addr 0x64ad7cc, size 0x18, virtual false, abstract: false, final false
static inline float_t mul(::Unity::Mathematics::float3  a, ::Unity::Mathematics::float3  b) ;

/// @brief Method mul, addr 0x64ad8ec, size 0x20, virtual false, abstract: false, final false
static inline float_t mul(::Unity::Mathematics::float4  a, ::Unity::Mathematics::float4  b) ;

/// @brief Method mul, addr 0x64ad720, size 0x8, virtual false, abstract: false, final false
static inline float_t mul(float_t  a, float_t  b) ;

/// @brief Method mul, addr 0x64b0418, size 0x14, virtual false, abstract: false, final false
static inline int32_t mul(::Unity::Mathematics::int2  a, ::Unity::Mathematics::int2  b) ;

/// @brief Method mul, addr 0x64b04c0, size 0x18, virtual false, abstract: false, final false
static inline int32_t mul(::Unity::Mathematics::int3  a, ::Unity::Mathematics::int3  b) ;

/// @brief Method mul, addr 0x64b05ac, size 0x24, virtual false, abstract: false, final false
static inline int32_t mul(::Unity::Mathematics::int4  a, ::Unity::Mathematics::int4  b) ;

/// @brief Method mul, addr 0x64b0410, size 0x8, virtual false, abstract: false, final false
static inline int32_t mul(int32_t  a, int32_t  b) ;

/// @brief Method mul, addr 0x64b1da0, size 0x14, virtual false, abstract: false, final false
static inline uint32_t mul(::Unity::Mathematics::uint2  a, ::Unity::Mathematics::uint2  b) ;

/// @brief Method mul, addr 0x64b1e48, size 0x18, virtual false, abstract: false, final false
static inline uint32_t mul(::Unity::Mathematics::uint3  a, ::Unity::Mathematics::uint3  b) ;

/// @brief Method mul, addr 0x64b1f34, size 0x24, virtual false, abstract: false, final false
static inline uint32_t mul(::Unity::Mathematics::uint4  a, ::Unity::Mathematics::uint4  b) ;

/// @brief Method mul, addr 0x64b1d98, size 0x8, virtual false, abstract: false, final false
static inline uint32_t mul(uint32_t  a, uint32_t  b) ;

/// @brief Method mulScale, addr 0x64ad06c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 mulScale(::Unity::Mathematics::float3x3  m, ::Unity::Mathematics::float3  s) ;

/// @brief Method nlerp, addr 0x64b4284, size 0x174, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::quaternion nlerp(::Unity::Mathematics::quaternion  q1, ::Unity::Mathematics::quaternion  q2, float_t  t) ;

/// @brief Method normalize, addr 0x64a5790, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 normalize(::Unity::Mathematics::double2  x) ;

/// @brief Method normalize, addr 0x64a5810, size 0x98, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 normalize(::Unity::Mathematics::double3  x) ;

/// @brief Method normalize, addr 0x64a58a8, size 0xa8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 normalize(::Unity::Mathematics::double4  x) ;

/// @brief Method normalize, addr 0x64a55d0, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 normalize(::Unity::Mathematics::float2  x) ;

/// @brief Method normalize, addr 0x64a5650, size 0x98, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 normalize(::Unity::Mathematics::float3  x) ;

/// @brief Method normalize, addr 0x64a56e8, size 0xa8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 normalize(::Unity::Mathematics::float4  x) ;

/// @brief Method normalize, addr 0x64b38c0, size 0xa8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::quaternion normalize(::Unity::Mathematics::quaternion  q) ;

/// @brief Method normalizesafe, addr 0x64a5b9c, size 0xa4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 normalizesafe(::Unity::Mathematics::double2  x, ::Unity::Mathematics::double2  defaultvalue) ;

/// @brief Method normalizesafe, addr 0x64a5c40, size 0xc4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 normalizesafe(::Unity::Mathematics::double3  x, ::Unity::Mathematics::double3  defaultvalue) ;

/// @brief Method normalizesafe, addr 0x64a5d04, size 0xe4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 normalizesafe(::Unity::Mathematics::double4  x, ::Unity::Mathematics::double4  defaultvalue) ;

/// @brief Method normalizesafe, addr 0x64a5950, size 0xa4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 normalizesafe(::Unity::Mathematics::float2  x, ::Unity::Mathematics::float2  defaultvalue) ;

/// @brief Method normalizesafe, addr 0x64a59f4, size 0xc4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 normalizesafe(::Unity::Mathematics::float3  x, ::Unity::Mathematics::float3  defaultvalue) ;

/// @brief Method normalizesafe, addr 0x64a5ab8, size 0xe4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 normalizesafe(::Unity::Mathematics::float4  x, ::Unity::Mathematics::float4  defaultvalue) ;

/// @brief Method normalizesafe, addr 0x64b3968, size 0x110, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::quaternion normalizesafe(::Unity::Mathematics::quaternion  q) ;

/// @brief Method normalizesafe, addr 0x64b3a78, size 0xe4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::quaternion normalizesafe(::Unity::Mathematics::quaternion  q, ::Unity::Mathematics::quaternion  defaultvalue) ;

/// @brief Method orthonormal_basis, addr 0x64ab8f4, size 0x5c, virtual false, abstract: false, final false
static inline void orthonormal_basis(::Unity::Mathematics::double3  normal, ::ByRef<::Unity::Mathematics::double3>  basis1, ::ByRef<::Unity::Mathematics::double3>  basis2) ;

/// @brief Method orthonormal_basis, addr 0x64ab898, size 0x5c, virtual false, abstract: false, final false
static inline void orthonormal_basis(::Unity::Mathematics::float3  normal, ::ByRef<::Unity::Mathematics::float3>  basis1, ::ByRef<::Unity::Mathematics::float3>  basis2) ;

/// @brief Method orthonormalize, addr 0x64ad2e0, size 0x19c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 orthonormalize(::Unity::Mathematics::float3x3  i) ;

/// @brief Method pow, addr 0x64a1708, size 0xc8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 pow(::Unity::Mathematics::double2  x, ::Unity::Mathematics::double2  y) ;

/// @brief Method pow, addr 0x64a17d0, size 0x120, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 pow(::Unity::Mathematics::double3  x, ::Unity::Mathematics::double3  y) ;

/// @brief Method pow, addr 0x64a18f0, size 0x178, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 pow(::Unity::Mathematics::double4  x, ::Unity::Mathematics::double4  y) ;

/// @brief Method pow, addr 0x64a1320, size 0xd0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 pow(::Unity::Mathematics::float2  x, ::Unity::Mathematics::float2  y) ;

/// @brief Method pow, addr 0x64a13f0, size 0x128, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 pow(::Unity::Mathematics::float3  x, ::Unity::Mathematics::float3  y) ;

/// @brief Method pow, addr 0x64a1518, size 0x188, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 pow(::Unity::Mathematics::float4  x, ::Unity::Mathematics::float4  y) ;

/// @brief Method pow, addr 0x64a16a0, size 0x68, virtual false, abstract: false, final false
static inline double_t pow(double_t  x, double_t  y) ;

/// @brief Method pow, addr 0x64a12b0, size 0x70, virtual false, abstract: false, final false
static inline float_t pow(float_t  x, float_t  y) ;

/// @brief Method project, addr 0x64a7c34, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 project(::Unity::Mathematics::double2  a, ::Unity::Mathematics::double2  ontoB) ;

/// @brief Method project, addr 0x64a7c5c, size 0x3c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 project(::Unity::Mathematics::double3  a, ::Unity::Mathematics::double3  ontoB) ;

/// @brief Method project, addr 0x64a7c98, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 project(::Unity::Mathematics::double4  a, ::Unity::Mathematics::double4  ontoB) ;

/// @brief Method project, addr 0x64a79c0, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 project(::Unity::Mathematics::float2  a, ::Unity::Mathematics::float2  ontoB) ;

/// @brief Method project, addr 0x64a79e8, size 0x3c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 project(::Unity::Mathematics::float3  a, ::Unity::Mathematics::float3  ontoB) ;

/// @brief Method project, addr 0x64a7a24, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 project(::Unity::Mathematics::float4  a, ::Unity::Mathematics::float4  ontoB) ;

/// @brief Method projectsafe, addr 0x64a7cf8, size 0x58, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 projectsafe(::Unity::Mathematics::double2  a, ::Unity::Mathematics::double2  ontoB, ::Unity::Mathematics::double2  defaultValue) ;

/// @brief Method projectsafe, addr 0x64a7d50, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 projectsafe(::Unity::Mathematics::double3  a, ::Unity::Mathematics::double3  ontoB, ::Unity::Mathematics::double3  defaultValue) ;

/// @brief Method projectsafe, addr 0x64a7de0, size 0xc8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 projectsafe(::Unity::Mathematics::double4  a, ::Unity::Mathematics::double4  ontoB, ::Unity::Mathematics::double4  defaultValue) ;

/// @brief Method projectsafe, addr 0x64a7a84, size 0x58, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 projectsafe(::Unity::Mathematics::float2  a, ::Unity::Mathematics::float2  ontoB, ::Unity::Mathematics::float2  defaultValue) ;

/// @brief Method projectsafe, addr 0x64a7adc, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 projectsafe(::Unity::Mathematics::float3  a, ::Unity::Mathematics::float3  ontoB, ::Unity::Mathematics::float3  defaultValue) ;

/// @brief Method projectsafe, addr 0x64a7b6c, size 0xc8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 projectsafe(::Unity::Mathematics::float4  a, ::Unity::Mathematics::float4  ontoB, ::Unity::Mathematics::float4  defaultValue) ;

/// @brief Method pseudoinverse, addr 0x64ad47c, size 0x2a4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 pseudoinverse(::Unity::Mathematics::float3x3  m) ;

/// @brief Method quaternion, addr 0x64b3728, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::quaternion quaternion(::Unity::Mathematics::float3x3  m) ;

/// @brief Method quaternion, addr 0x64b3768, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::quaternion quaternion(::Unity::Mathematics::float4x4  m) ;

/// @brief Method quaternion, addr 0x64b3724, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::quaternion quaternion(::Unity::Mathematics::float4  value) ;

/// @brief Method quaternion, addr 0x64b3720, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::quaternion quaternion(float_t  x, float_t  y, float_t  z, float_t  w) ;

/// @brief Method radians, addr 0x64aaa8c, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 radians(::Unity::Mathematics::double2  x) ;

/// @brief Method radians, addr 0x64aaaa0, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 radians(::Unity::Mathematics::double3  x) ;

/// @brief Method radians, addr 0x64aaab8, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 radians(::Unity::Mathematics::double4  x) ;

/// @brief Method radians, addr 0x64aaa34, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 radians(::Unity::Mathematics::float2  x) ;

/// @brief Method radians, addr 0x64aaa48, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 radians(::Unity::Mathematics::float3  x) ;

/// @brief Method radians, addr 0x64aaa60, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 radians(::Unity::Mathematics::float4  x) ;

/// @brief Method radians, addr 0x64aaa7c, size 0x10, virtual false, abstract: false, final false
static inline double_t radians(double_t  x) ;

/// @brief Method radians, addr 0x64aaa24, size 0x10, virtual false, abstract: false, final false
static inline float_t radians(float_t  x) ;

/// @brief Method rcp, addr 0x64a0fb8, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 rcp(::Unity::Mathematics::double2  x) ;

/// @brief Method rcp, addr 0x64a0fc8, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 rcp(::Unity::Mathematics::double3  x) ;

/// @brief Method rcp, addr 0x64a0fdc, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 rcp(::Unity::Mathematics::double4  x) ;

/// @brief Method rcp, addr 0x64a0f70, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 rcp(::Unity::Mathematics::float2  x) ;

/// @brief Method rcp, addr 0x64a0f80, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 rcp(::Unity::Mathematics::float3  x) ;

/// @brief Method rcp, addr 0x64a0f94, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 rcp(::Unity::Mathematics::float4  x) ;

/// @brief Method rcp, addr 0x64a0fac, size 0xc, virtual false, abstract: false, final false
static inline double_t rcp(double_t  x) ;

/// @brief Method rcp, addr 0x64a0f64, size 0xc, virtual false, abstract: false, final false
static inline float_t rcp(float_t  x) ;

/// @brief Method read32_little_endian, addr 0x64aba58, size 0x8, virtual false, abstract: false, final false
static inline uint32_t read32_little_endian(void*  pBuffer) ;

/// @brief Method reflect, addr 0x64a731c, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 reflect(::Unity::Mathematics::double2  i, ::Unity::Mathematics::double2  n) ;

/// @brief Method reflect, addr 0x64a7344, size 0x3c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 reflect(::Unity::Mathematics::double3  i, ::Unity::Mathematics::double3  n) ;

/// @brief Method reflect, addr 0x64a7380, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 reflect(::Unity::Mathematics::double4  i, ::Unity::Mathematics::double4  n) ;

/// @brief Method reflect, addr 0x64a7268, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 reflect(::Unity::Mathematics::float2  i, ::Unity::Mathematics::float2  n) ;

/// @brief Method reflect, addr 0x64a7290, size 0x3c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 reflect(::Unity::Mathematics::float3  i, ::Unity::Mathematics::float3  n) ;

/// @brief Method reflect, addr 0x64a72cc, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 reflect(::Unity::Mathematics::float4  i, ::Unity::Mathematics::float4  n) ;

/// @brief Method refract, addr 0x64a76c8, size 0xd4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 refract(::Unity::Mathematics::double2  i, ::Unity::Mathematics::double2  n, double_t  indexOfRefraction) ;

/// @brief Method refract, addr 0x64a779c, size 0xfc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 refract(::Unity::Mathematics::double3  i, ::Unity::Mathematics::double3  n, double_t  indexOfRefraction) ;

/// @brief Method refract, addr 0x64a7898, size 0x128, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 refract(::Unity::Mathematics::double4  i, ::Unity::Mathematics::double4  n, double_t  indexOfRefraction) ;

/// @brief Method refract, addr 0x64a73d0, size 0xd4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 refract(::Unity::Mathematics::float2  i, ::Unity::Mathematics::float2  n, float_t  indexOfRefraction) ;

/// @brief Method refract, addr 0x64a74a4, size 0xfc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 refract(::Unity::Mathematics::float3  i, ::Unity::Mathematics::float3  n, float_t  indexOfRefraction) ;

/// @brief Method refract, addr 0x64a75a0, size 0x128, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 refract(::Unity::Mathematics::float4  i, ::Unity::Mathematics::float4  n, float_t  indexOfRefraction) ;

/// @brief Method remap, addr 0x64996fc, size 0x3c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 remap(::Unity::Mathematics::double2  srcStart, ::Unity::Mathematics::double2  srcEnd, ::Unity::Mathematics::double2  dstStart, ::Unity::Mathematics::double2  dstEnd, ::Unity::Mathematics::double2  x) ;

/// @brief Method remap, addr 0x6499738, size 0x64, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 remap(::Unity::Mathematics::double3  srcStart, ::Unity::Mathematics::double3  srcEnd, ::Unity::Mathematics::double3  dstStart, ::Unity::Mathematics::double3  dstEnd, ::Unity::Mathematics::double3  x) ;

/// @brief Method remap, addr 0x649979c, size 0x84, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 remap(::Unity::Mathematics::double4  srcStart, ::Unity::Mathematics::double4  srcEnd, ::Unity::Mathematics::double4  dstStart, ::Unity::Mathematics::double4  dstEnd, ::Unity::Mathematics::double4  x) ;

/// @brief Method remap, addr 0x64995b8, size 0x3c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 remap(::Unity::Mathematics::float2  srcStart, ::Unity::Mathematics::float2  srcEnd, ::Unity::Mathematics::float2  dstStart, ::Unity::Mathematics::float2  dstEnd, ::Unity::Mathematics::float2  x) ;

/// @brief Method remap, addr 0x64995f4, size 0x68, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 remap(::Unity::Mathematics::float3  srcStart, ::Unity::Mathematics::float3  srcEnd, ::Unity::Mathematics::float3  dstStart, ::Unity::Mathematics::float3  dstEnd, ::Unity::Mathematics::float3  x) ;

/// @brief Method remap, addr 0x649965c, size 0x84, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 remap(::Unity::Mathematics::float4  srcStart, ::Unity::Mathematics::float4  srcEnd, ::Unity::Mathematics::float4  dstStart, ::Unity::Mathematics::float4  dstEnd, ::Unity::Mathematics::float4  x) ;

/// @brief Method remap, addr 0x64996e0, size 0x1c, virtual false, abstract: false, final false
static inline double_t remap(double_t  srcStart, double_t  srcEnd, double_t  dstStart, double_t  dstEnd, double_t  x) ;

/// @brief Method remap, addr 0x649959c, size 0x1c, virtual false, abstract: false, final false
static inline float_t remap(float_t  srcStart, float_t  srcEnd, float_t  dstStart, float_t  dstEnd, float_t  x) ;

/// @brief Method reversebits, addr 0x64a96b4, size 0x6c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 reversebits(::Unity::Mathematics::int2  x) ;

/// @brief Method reversebits, addr 0x64a9720, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 reversebits(::Unity::Mathematics::int3  x) ;

/// @brief Method reversebits, addr 0x64a9790, size 0xdc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 reversebits(::Unity::Mathematics::int4  x) ;

/// @brief Method reversebits, addr 0x64a9874, size 0x6c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 reversebits(::Unity::Mathematics::uint2  x) ;

/// @brief Method reversebits, addr 0x64a98e0, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 reversebits(::Unity::Mathematics::uint3  x) ;

/// @brief Method reversebits, addr 0x64a9950, size 0xdc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 reversebits(::Unity::Mathematics::uint4  x) ;

/// @brief Method reversebits, addr 0x64a96ac, size 0x8, virtual false, abstract: false, final false
static inline int32_t reversebits(int32_t  x) ;

/// @brief Method reversebits, addr 0x64a9a2c, size 0x8, virtual false, abstract: false, final false
static inline int64_t reversebits(int64_t  x) ;

/// @brief Method reversebits, addr 0x64a986c, size 0x8, virtual false, abstract: false, final false
static inline uint32_t reversebits(uint32_t  x) ;

/// @brief Method reversebits, addr 0x64a9a34, size 0x8, virtual false, abstract: false, final false
static inline uint64_t reversebits(uint64_t  x) ;

/// @brief Method right, addr 0x64abde4, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 right() ;

/// @brief Method rol, addr 0x64a9a48, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 rol(::Unity::Mathematics::int2  x, int32_t  n) ;

/// @brief Method rol, addr 0x64a9a68, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 rol(::Unity::Mathematics::int3  x, int32_t  n) ;

/// @brief Method rol, addr 0x64a9a8c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 rol(::Unity::Mathematics::int4  x, int32_t  n) ;

/// @brief Method rol, addr 0x64a9ad0, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 rol(::Unity::Mathematics::uint2  x, int32_t  n) ;

/// @brief Method rol, addr 0x64a9af0, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 rol(::Unity::Mathematics::uint3  x, int32_t  n) ;

/// @brief Method rol, addr 0x64a9b14, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 rol(::Unity::Mathematics::uint4  x, int32_t  n) ;

/// @brief Method rol, addr 0x64a9a3c, size 0xc, virtual false, abstract: false, final false
static inline int32_t rol(int32_t  x, int32_t  n) ;

/// @brief Method rol, addr 0x64a9b4c, size 0xc, virtual false, abstract: false, final false
static inline int64_t rol(int64_t  x, int32_t  n) ;

/// @brief Method rol, addr 0x64a9ac4, size 0xc, virtual false, abstract: false, final false
static inline uint32_t rol(uint32_t  x, int32_t  n) ;

/// @brief Method rol, addr 0x64a9b58, size 0xc, virtual false, abstract: false, final false
static inline uint64_t rol(uint64_t  x, int32_t  n) ;

/// @brief Method ror, addr 0x64a9b6c, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 ror(::Unity::Mathematics::int2  x, int32_t  n) ;

/// @brief Method ror, addr 0x64a9b8c, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 ror(::Unity::Mathematics::int3  x, int32_t  n) ;

/// @brief Method ror, addr 0x64a9bb0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 ror(::Unity::Mathematics::int4  x, int32_t  n) ;

/// @brief Method ror, addr 0x64a9bf0, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 ror(::Unity::Mathematics::uint2  x, int32_t  n) ;

/// @brief Method ror, addr 0x64a9c10, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 ror(::Unity::Mathematics::uint3  x, int32_t  n) ;

/// @brief Method ror, addr 0x64a9c34, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 ror(::Unity::Mathematics::uint4  x, int32_t  n) ;

/// @brief Method ror, addr 0x64a9b64, size 0x8, virtual false, abstract: false, final false
static inline int32_t ror(int32_t  x, int32_t  n) ;

/// @brief Method ror, addr 0x64a9c6c, size 0x8, virtual false, abstract: false, final false
static inline int64_t ror(int64_t  x, int32_t  n) ;

/// @brief Method ror, addr 0x64a9be8, size 0x8, virtual false, abstract: false, final false
static inline uint32_t ror(uint32_t  x, int32_t  n) ;

/// @brief Method ror, addr 0x64a9c74, size 0x8, virtual false, abstract: false, final false
static inline uint64_t ror(uint64_t  x, int32_t  n) ;

/// @brief Method rotate, addr 0x64903bc, size 0x58, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 rotate(::Unity::Mathematics::double4x4  a, ::Unity::Mathematics::double3  b) ;

/// @brief Method rotate, addr 0x648a628, size 0x48, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 rotate(::Unity::Mathematics::AffineTransform  a, ::Unity::Mathematics::float3  dir) ;

/// @brief Method rotate, addr 0x64b5218, size 0x84, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 rotate(::Unity::Mathematics::RigidTransform  a, ::Unity::Mathematics::float3  dir) ;

/// @brief Method rotate, addr 0x6493a80, size 0x48, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 rotate(::Unity::Mathematics::float4x4  a, ::Unity::Mathematics::float3  b) ;

/// @brief Method rotate, addr 0x64b4208, size 0x7c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 rotate(::Unity::Mathematics::quaternion  q, ::Unity::Mathematics::float3  v) ;

/// @brief Method rotation, addr 0x64b4924, size 0x25c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::quaternion rotation(::Unity::Mathematics::float3x3  m) ;

/// @brief Method round, addr 0x649fd8c, size 0x170, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 round(::Unity::Mathematics::double2  x) ;

/// @brief Method round, addr 0x649fefc, size 0x214, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 round(::Unity::Mathematics::double3  x) ;

/// @brief Method round, addr 0x64a0110, size 0x2c0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 round(::Unity::Mathematics::double4  x) ;

/// @brief Method round, addr 0x649f644, size 0x17c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 round(::Unity::Mathematics::float2  x) ;

/// @brief Method round, addr 0x649f7c0, size 0x22c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 round(::Unity::Mathematics::float3  x) ;

/// @brief Method round, addr 0x649f9ec, size 0x2d4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 round(::Unity::Mathematics::float4  x) ;

/// @brief Method round, addr 0x649fcc0, size 0xcc, virtual false, abstract: false, final false
static inline double_t round(double_t  x) ;

/// @brief Method round, addr 0x649f578, size 0xcc, virtual false, abstract: false, final false
static inline float_t round(float_t  x) ;

/// @brief Method rsqrt, addr 0x64a5410, size 0xa8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 rsqrt(::Unity::Mathematics::double2  x) ;

/// @brief Method rsqrt, addr 0x64a54b8, size 0xf0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 rsqrt(::Unity::Mathematics::double3  x) ;

/// @brief Method rsqrt, addr 0x64a55a8, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 rsqrt(::Unity::Mathematics::double4  x) ;

/// @brief Method rsqrt, addr 0x64a51e8, size 0xa8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 rsqrt(::Unity::Mathematics::float2  x) ;

/// @brief Method rsqrt, addr 0x64a5290, size 0xf0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 rsqrt(::Unity::Mathematics::float3  x) ;

/// @brief Method rsqrt, addr 0x64a5380, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 rsqrt(::Unity::Mathematics::float4  x) ;

/// @brief Method rsqrt, addr 0x64a53a8, size 0x68, virtual false, abstract: false, final false
static inline double_t rsqrt(double_t  x) ;

/// @brief Method rsqrt, addr 0x64a5180, size 0x68, virtual false, abstract: false, final false
static inline float_t rsqrt(float_t  x) ;

/// @brief Method saturate, addr 0x649a088, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 saturate(::Unity::Mathematics::double2  x) ;

/// @brief Method saturate, addr 0x649a0c8, size 0x88, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 saturate(::Unity::Mathematics::double3  x) ;

/// @brief Method saturate, addr 0x649a150, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 saturate(::Unity::Mathematics::double4  x) ;

/// @brief Method saturate, addr 0x6499f50, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 saturate(::Unity::Mathematics::float2  x) ;

/// @brief Method saturate, addr 0x6499f90, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 saturate(::Unity::Mathematics::float3  x) ;

/// @brief Method saturate, addr 0x649a000, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 saturate(::Unity::Mathematics::float4  x) ;

/// @brief Method saturate, addr 0x649a050, size 0x38, virtual false, abstract: false, final false
static inline double_t saturate(double_t  x) ;

/// @brief Method saturate, addr 0x6499f18, size 0x38, virtual false, abstract: false, final false
static inline float_t saturate(float_t  x) ;

/// @brief Method scaleMul, addr 0x64ad0a4, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 scaleMul(::Unity::Mathematics::float3  s, ::Unity::Mathematics::float3x3  m) ;

/// @brief Method select, addr 0x64a7114, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 select(::Unity::Mathematics::double2  falseValue, ::Unity::Mathematics::double2  trueValue, ::Unity::Mathematics::bool2  test) ;

/// @brief Method select, addr 0x64a70d8, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 select(::Unity::Mathematics::double2  falseValue, ::Unity::Mathematics::double2  trueValue, bool  test) ;

/// @brief Method select, addr 0x64a7128, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 select(::Unity::Mathematics::double3  falseValue, ::Unity::Mathematics::double3  trueValue, ::Unity::Mathematics::bool3  test) ;

/// @brief Method select, addr 0x64a70e8, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 select(::Unity::Mathematics::double3  falseValue, ::Unity::Mathematics::double3  trueValue, bool  test) ;

/// @brief Method select, addr 0x64a7144, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 select(::Unity::Mathematics::double4  falseValue, ::Unity::Mathematics::double4  trueValue, ::Unity::Mathematics::bool4  test) ;

/// @brief Method select, addr 0x64a70fc, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 select(::Unity::Mathematics::double4  falseValue, ::Unity::Mathematics::double4  trueValue, bool  test) ;

/// @brief Method select, addr 0x64a7078, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 select(::Unity::Mathematics::float2  falseValue, ::Unity::Mathematics::float2  trueValue, ::Unity::Mathematics::bool2  test) ;

/// @brief Method select, addr 0x64a703c, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 select(::Unity::Mathematics::float2  falseValue, ::Unity::Mathematics::float2  trueValue, bool  test) ;

/// @brief Method select, addr 0x64a708c, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 select(::Unity::Mathematics::float3  falseValue, ::Unity::Mathematics::float3  trueValue, ::Unity::Mathematics::bool3  test) ;

/// @brief Method select, addr 0x64a704c, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 select(::Unity::Mathematics::float3  falseValue, ::Unity::Mathematics::float3  trueValue, bool  test) ;

/// @brief Method select, addr 0x64a70a8, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 select(::Unity::Mathematics::float4  falseValue, ::Unity::Mathematics::float4  trueValue, ::Unity::Mathematics::bool4  test) ;

/// @brief Method select, addr 0x64a7060, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 select(::Unity::Mathematics::float4  falseValue, ::Unity::Mathematics::float4  trueValue, bool  test) ;

/// @brief Method select, addr 0x64a6f0c, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 select(::Unity::Mathematics::int2  falseValue, ::Unity::Mathematics::int2  trueValue, ::Unity::Mathematics::bool2  test) ;

/// @brief Method select, addr 0x64a6edc, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 select(::Unity::Mathematics::int2  falseValue, ::Unity::Mathematics::int2  trueValue, bool  test) ;

/// @brief Method select, addr 0x64a6f24, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 select(::Unity::Mathematics::int3  falseValue, ::Unity::Mathematics::int3  trueValue, ::Unity::Mathematics::bool3  test) ;

/// @brief Method select, addr 0x64a6ee8, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 select(::Unity::Mathematics::int3  falseValue, ::Unity::Mathematics::int3  trueValue, bool  test) ;

/// @brief Method select, addr 0x64a6f48, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 select(::Unity::Mathematics::int4  falseValue, ::Unity::Mathematics::int4  trueValue, ::Unity::Mathematics::bool4  test) ;

/// @brief Method select, addr 0x64a6efc, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 select(::Unity::Mathematics::int4  falseValue, ::Unity::Mathematics::int4  trueValue, bool  test) ;

/// @brief Method select, addr 0x64a6fb0, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 select(::Unity::Mathematics::uint2  falseValue, ::Unity::Mathematics::uint2  trueValue, ::Unity::Mathematics::bool2  test) ;

/// @brief Method select, addr 0x64a6f80, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 select(::Unity::Mathematics::uint2  falseValue, ::Unity::Mathematics::uint2  trueValue, bool  test) ;

/// @brief Method select, addr 0x64a6fc8, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 select(::Unity::Mathematics::uint3  falseValue, ::Unity::Mathematics::uint3  trueValue, ::Unity::Mathematics::bool3  test) ;

/// @brief Method select, addr 0x64a6f8c, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 select(::Unity::Mathematics::uint3  falseValue, ::Unity::Mathematics::uint3  trueValue, bool  test) ;

/// @brief Method select, addr 0x64a6fec, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 select(::Unity::Mathematics::uint4  falseValue, ::Unity::Mathematics::uint4  trueValue, ::Unity::Mathematics::bool4  test) ;

/// @brief Method select, addr 0x64a6fa0, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 select(::Unity::Mathematics::uint4  falseValue, ::Unity::Mathematics::uint4  trueValue, bool  test) ;

/// @brief Method select, addr 0x64a70cc, size 0xc, virtual false, abstract: false, final false
static inline double_t select(double_t  falseValue, double_t  trueValue, bool  test) ;

/// @brief Method select, addr 0x64a7030, size 0xc, virtual false, abstract: false, final false
static inline float_t select(float_t  falseValue, float_t  trueValue, bool  test) ;

/// @brief Method select, addr 0x64a6ed0, size 0xc, virtual false, abstract: false, final false
static inline int32_t select(int32_t  falseValue, int32_t  trueValue, bool  test) ;

/// @brief Method select, addr 0x64a7018, size 0xc, virtual false, abstract: false, final false
static inline int64_t select(int64_t  falseValue, int64_t  trueValue, bool  test) ;

/// @brief Method select, addr 0x64a6f74, size 0xc, virtual false, abstract: false, final false
static inline uint32_t select(uint32_t  falseValue, uint32_t  trueValue, bool  test) ;

/// @brief Method select, addr 0x64a7024, size 0xc, virtual false, abstract: false, final false
static inline uint64_t select(uint64_t  falseValue, uint64_t  trueValue, bool  test) ;

/// @brief Method select_shuffle_component, addr 0x648acbc, size 0xdc, virtual false, abstract: false, final false
static inline bool select_shuffle_component(::Unity::Mathematics::bool2  a, ::Unity::Mathematics::bool2  b, ::Unity::Mathematics::math_ShuffleComponent  component) ;

/// @brief Method select_shuffle_component, addr 0x648b5e8, size 0xfc, virtual false, abstract: false, final false
static inline bool select_shuffle_component(::Unity::Mathematics::bool3  a, ::Unity::Mathematics::bool3  b, ::Unity::Mathematics::math_ShuffleComponent  component) ;

/// @brief Method select_shuffle_component, addr 0x648c424, size 0x12c, virtual false, abstract: false, final false
static inline bool select_shuffle_component(::Unity::Mathematics::bool4  a, ::Unity::Mathematics::bool4  b, ::Unity::Mathematics::math_ShuffleComponent  component) ;

/// @brief Method select_shuffle_component, addr 0x648d374, size 0xd8, virtual false, abstract: false, final false
static inline double_t select_shuffle_component(::Unity::Mathematics::double2  a, ::Unity::Mathematics::double2  b, ::Unity::Mathematics::math_ShuffleComponent  component) ;

/// @brief Method select_shuffle_component, addr 0x648e1d0, size 0xf4, virtual false, abstract: false, final false
static inline double_t select_shuffle_component(::Unity::Mathematics::double3  a, ::Unity::Mathematics::double3  b, ::Unity::Mathematics::math_ShuffleComponent  component) ;

/// @brief Method select_shuffle_component, addr 0x648f68c, size 0x128, virtual false, abstract: false, final false
static inline double_t select_shuffle_component(::Unity::Mathematics::double4  a, ::Unity::Mathematics::double4  b, ::Unity::Mathematics::math_ShuffleComponent  component) ;

/// @brief Method select_shuffle_component, addr 0x6491058, size 0xd8, virtual false, abstract: false, final false
static inline float_t select_shuffle_component(::Unity::Mathematics::float2  a, ::Unity::Mathematics::float2  b, ::Unity::Mathematics::math_ShuffleComponent  component) ;

/// @brief Method select_shuffle_component, addr 0x6491d30, size 0xf4, virtual false, abstract: false, final false
static inline float_t select_shuffle_component(::Unity::Mathematics::float3  a, ::Unity::Mathematics::float3  b, ::Unity::Mathematics::math_ShuffleComponent  component) ;

/// @brief Method select_shuffle_component, addr 0x6492f30, size 0x128, virtual false, abstract: false, final false
static inline float_t select_shuffle_component(::Unity::Mathematics::float4  a, ::Unity::Mathematics::float4  b, ::Unity::Mathematics::math_ShuffleComponent  component) ;

/// @brief Method select_shuffle_component, addr 0x64950a8, size 0xd0, virtual false, abstract: false, final false
static inline int32_t select_shuffle_component(::Unity::Mathematics::int2  a, ::Unity::Mathematics::int2  b, ::Unity::Mathematics::math_ShuffleComponent  component) ;

/// @brief Method select_shuffle_component, addr 0x6495e9c, size 0xec, virtual false, abstract: false, final false
static inline int32_t select_shuffle_component(::Unity::Mathematics::int3  a, ::Unity::Mathematics::int3  b, ::Unity::Mathematics::math_ShuffleComponent  component) ;

/// @brief Method select_shuffle_component, addr 0x6497234, size 0x110, virtual false, abstract: false, final false
static inline int32_t select_shuffle_component(::Unity::Mathematics::int4  a, ::Unity::Mathematics::int4  b, ::Unity::Mathematics::math_ShuffleComponent  component) ;

/// @brief Method select_shuffle_component, addr 0x64b5738, size 0xd0, virtual false, abstract: false, final false
static inline uint32_t select_shuffle_component(::Unity::Mathematics::uint2  a, ::Unity::Mathematics::uint2  b, ::Unity::Mathematics::math_ShuffleComponent  component) ;

/// @brief Method select_shuffle_component, addr 0x64b6490, size 0xec, virtual false, abstract: false, final false
static inline uint32_t select_shuffle_component(::Unity::Mathematics::uint3  a, ::Unity::Mathematics::uint3  b, ::Unity::Mathematics::math_ShuffleComponent  component) ;

/// @brief Method select_shuffle_component, addr 0x64b77ac, size 0x110, virtual false, abstract: false, final false
static inline uint32_t select_shuffle_component(::Unity::Mathematics::uint4  a, ::Unity::Mathematics::uint4  b, ::Unity::Mathematics::math_ShuffleComponent  component) ;

/// @brief Method shuffle, addr 0x648ab10, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2 shuffle(::Unity::Mathematics::bool2  left, ::Unity::Mathematics::bool2  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y) ;

/// @brief Method shuffle, addr 0x648b43c, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2 shuffle(::Unity::Mathematics::bool3  left, ::Unity::Mathematics::bool3  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y) ;

/// @brief Method shuffle, addr 0x648c278, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2 shuffle(::Unity::Mathematics::bool4  left, ::Unity::Mathematics::bool4  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y) ;

/// @brief Method shuffle, addr 0x648ab70, size 0x8c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 shuffle(::Unity::Mathematics::bool2  left, ::Unity::Mathematics::bool2  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y, ::Unity::Mathematics::math_ShuffleComponent  z) ;

/// @brief Method shuffle, addr 0x648b49c, size 0x8c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 shuffle(::Unity::Mathematics::bool3  left, ::Unity::Mathematics::bool3  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y, ::Unity::Mathematics::math_ShuffleComponent  z) ;

/// @brief Method shuffle, addr 0x648c2d8, size 0x8c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 shuffle(::Unity::Mathematics::bool4  left, ::Unity::Mathematics::bool4  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y, ::Unity::Mathematics::math_ShuffleComponent  z) ;

/// @brief Method shuffle, addr 0x648abfc, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4 shuffle(::Unity::Mathematics::bool2  left, ::Unity::Mathematics::bool2  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y, ::Unity::Mathematics::math_ShuffleComponent  z, ::Unity::Mathematics::math_ShuffleComponent  w) ;

/// @brief Method shuffle, addr 0x648b528, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4 shuffle(::Unity::Mathematics::bool3  left, ::Unity::Mathematics::bool3  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y, ::Unity::Mathematics::math_ShuffleComponent  z, ::Unity::Mathematics::math_ShuffleComponent  w) ;

/// @brief Method shuffle, addr 0x648c364, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4 shuffle(::Unity::Mathematics::bool4  left, ::Unity::Mathematics::bool4  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y, ::Unity::Mathematics::math_ShuffleComponent  z, ::Unity::Mathematics::math_ShuffleComponent  w) ;

/// @brief Method shuffle, addr 0x648d1ac, size 0x68, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 shuffle(::Unity::Mathematics::double2  left, ::Unity::Mathematics::double2  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y) ;

/// @brief Method shuffle, addr 0x648dfa8, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 shuffle(::Unity::Mathematics::double3  left, ::Unity::Mathematics::double3  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y) ;

/// @brief Method shuffle, addr 0x648f410, size 0x98, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 shuffle(::Unity::Mathematics::double4  left, ::Unity::Mathematics::double4  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y) ;

/// @brief Method shuffle, addr 0x648d214, size 0x98, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 shuffle(::Unity::Mathematics::double2  left, ::Unity::Mathematics::double2  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y, ::Unity::Mathematics::math_ShuffleComponent  z) ;

/// @brief Method shuffle, addr 0x648e028, size 0xb8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 shuffle(::Unity::Mathematics::double3  left, ::Unity::Mathematics::double3  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y, ::Unity::Mathematics::math_ShuffleComponent  z) ;

/// @brief Method shuffle, addr 0x648f4a8, size 0xd8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 shuffle(::Unity::Mathematics::double4  left, ::Unity::Mathematics::double4  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y, ::Unity::Mathematics::math_ShuffleComponent  z) ;

/// @brief Method shuffle, addr 0x648d2ac, size 0xc8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 shuffle(::Unity::Mathematics::double2  left, ::Unity::Mathematics::double2  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y, ::Unity::Mathematics::math_ShuffleComponent  z, ::Unity::Mathematics::math_ShuffleComponent  w) ;

/// @brief Method shuffle, addr 0x648e0e0, size 0xf0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 shuffle(::Unity::Mathematics::double3  left, ::Unity::Mathematics::double3  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y, ::Unity::Mathematics::math_ShuffleComponent  z, ::Unity::Mathematics::math_ShuffleComponent  w) ;

/// @brief Method shuffle, addr 0x648f580, size 0x10c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 shuffle(::Unity::Mathematics::double4  left, ::Unity::Mathematics::double4  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y, ::Unity::Mathematics::math_ShuffleComponent  z, ::Unity::Mathematics::math_ShuffleComponent  w) ;

/// @brief Method shuffle, addr 0x6490e90, size 0x68, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 shuffle(::Unity::Mathematics::float2  left, ::Unity::Mathematics::float2  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y) ;

/// @brief Method shuffle, addr 0x6491b08, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 shuffle(::Unity::Mathematics::float3  left, ::Unity::Mathematics::float3  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y) ;

/// @brief Method shuffle, addr 0x6492cc0, size 0x98, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 shuffle(::Unity::Mathematics::float4  left, ::Unity::Mathematics::float4  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y) ;

/// @brief Method shuffle, addr 0x6490ef8, size 0x98, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 shuffle(::Unity::Mathematics::float2  left, ::Unity::Mathematics::float2  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y, ::Unity::Mathematics::math_ShuffleComponent  z) ;

/// @brief Method shuffle, addr 0x6491b88, size 0xb8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 shuffle(::Unity::Mathematics::float3  left, ::Unity::Mathematics::float3  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y, ::Unity::Mathematics::math_ShuffleComponent  z) ;

/// @brief Method shuffle, addr 0x6492d58, size 0xcc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 shuffle(::Unity::Mathematics::float4  left, ::Unity::Mathematics::float4  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y, ::Unity::Mathematics::math_ShuffleComponent  z) ;

/// @brief Method shuffle, addr 0x6490f90, size 0xc8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 shuffle(::Unity::Mathematics::float2  left, ::Unity::Mathematics::float2  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y, ::Unity::Mathematics::math_ShuffleComponent  z, ::Unity::Mathematics::math_ShuffleComponent  w) ;

/// @brief Method shuffle, addr 0x6491c40, size 0xf0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 shuffle(::Unity::Mathematics::float3  left, ::Unity::Mathematics::float3  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y, ::Unity::Mathematics::math_ShuffleComponent  z, ::Unity::Mathematics::math_ShuffleComponent  w) ;

/// @brief Method shuffle, addr 0x6492e24, size 0x10c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 shuffle(::Unity::Mathematics::float4  left, ::Unity::Mathematics::float4  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y, ::Unity::Mathematics::math_ShuffleComponent  z, ::Unity::Mathematics::math_ShuffleComponent  w) ;

/// @brief Method shuffle, addr 0x6494f4c, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 shuffle(::Unity::Mathematics::int2  left, ::Unity::Mathematics::int2  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y) ;

/// @brief Method shuffle, addr 0x6495cc8, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 shuffle(::Unity::Mathematics::int3  left, ::Unity::Mathematics::int3  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y) ;

/// @brief Method shuffle, addr 0x6497078, size 0x68, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 shuffle(::Unity::Mathematics::int4  left, ::Unity::Mathematics::int4  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y) ;

/// @brief Method shuffle, addr 0x6494f9c, size 0x74, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 shuffle(::Unity::Mathematics::int2  left, ::Unity::Mathematics::int2  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y, ::Unity::Mathematics::math_ShuffleComponent  z) ;

/// @brief Method shuffle, addr 0x6495d38, size 0x9c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 shuffle(::Unity::Mathematics::int3  left, ::Unity::Mathematics::int3  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y, ::Unity::Mathematics::math_ShuffleComponent  z) ;

/// @brief Method shuffle, addr 0x64970e0, size 0x94, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 shuffle(::Unity::Mathematics::int4  left, ::Unity::Mathematics::int4  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y, ::Unity::Mathematics::math_ShuffleComponent  z) ;

/// @brief Method shuffle, addr 0x6495010, size 0x98, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 shuffle(::Unity::Mathematics::int2  left, ::Unity::Mathematics::int2  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y, ::Unity::Mathematics::math_ShuffleComponent  z, ::Unity::Mathematics::math_ShuffleComponent  w) ;

/// @brief Method shuffle, addr 0x6495dd4, size 0xc8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 shuffle(::Unity::Mathematics::int3  left, ::Unity::Mathematics::int3  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y, ::Unity::Mathematics::math_ShuffleComponent  z, ::Unity::Mathematics::math_ShuffleComponent  w) ;

/// @brief Method shuffle, addr 0x6497174, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 shuffle(::Unity::Mathematics::int4  left, ::Unity::Mathematics::int4  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y, ::Unity::Mathematics::math_ShuffleComponent  z, ::Unity::Mathematics::math_ShuffleComponent  w) ;

/// @brief Method shuffle, addr 0x64b55dc, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 shuffle(::Unity::Mathematics::uint2  left, ::Unity::Mathematics::uint2  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y) ;

/// @brief Method shuffle, addr 0x64b62bc, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 shuffle(::Unity::Mathematics::uint3  left, ::Unity::Mathematics::uint3  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y) ;

/// @brief Method shuffle, addr 0x64b75f0, size 0x68, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 shuffle(::Unity::Mathematics::uint4  left, ::Unity::Mathematics::uint4  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y) ;

/// @brief Method shuffle, addr 0x64b562c, size 0x74, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 shuffle(::Unity::Mathematics::uint2  left, ::Unity::Mathematics::uint2  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y, ::Unity::Mathematics::math_ShuffleComponent  z) ;

/// @brief Method shuffle, addr 0x64b632c, size 0x9c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 shuffle(::Unity::Mathematics::uint3  left, ::Unity::Mathematics::uint3  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y, ::Unity::Mathematics::math_ShuffleComponent  z) ;

/// @brief Method shuffle, addr 0x64b7658, size 0x94, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 shuffle(::Unity::Mathematics::uint4  left, ::Unity::Mathematics::uint4  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y, ::Unity::Mathematics::math_ShuffleComponent  z) ;

/// @brief Method shuffle, addr 0x64b56a0, size 0x98, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 shuffle(::Unity::Mathematics::uint2  left, ::Unity::Mathematics::uint2  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y, ::Unity::Mathematics::math_ShuffleComponent  z, ::Unity::Mathematics::math_ShuffleComponent  w) ;

/// @brief Method shuffle, addr 0x64b63c8, size 0xc8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 shuffle(::Unity::Mathematics::uint3  left, ::Unity::Mathematics::uint3  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y, ::Unity::Mathematics::math_ShuffleComponent  z, ::Unity::Mathematics::math_ShuffleComponent  w) ;

/// @brief Method shuffle, addr 0x64b76ec, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 shuffle(::Unity::Mathematics::uint4  left, ::Unity::Mathematics::uint4  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y, ::Unity::Mathematics::math_ShuffleComponent  z, ::Unity::Mathematics::math_ShuffleComponent  w) ;

/// @brief Method shuffle, addr 0x648ab00, size 0x10, virtual false, abstract: false, final false
static inline bool shuffle(::Unity::Mathematics::bool2  left, ::Unity::Mathematics::bool2  right, ::Unity::Mathematics::math_ShuffleComponent  x) ;

/// @brief Method shuffle, addr 0x648b42c, size 0x10, virtual false, abstract: false, final false
static inline bool shuffle(::Unity::Mathematics::bool3  left, ::Unity::Mathematics::bool3  right, ::Unity::Mathematics::math_ShuffleComponent  x) ;

/// @brief Method shuffle, addr 0x648c268, size 0x10, virtual false, abstract: false, final false
static inline bool shuffle(::Unity::Mathematics::bool4  left, ::Unity::Mathematics::bool4  right, ::Unity::Mathematics::math_ShuffleComponent  x) ;

/// @brief Method shuffle, addr 0x648d1a4, size 0x8, virtual false, abstract: false, final false
static inline double_t shuffle(::Unity::Mathematics::double2  left, ::Unity::Mathematics::double2  right, ::Unity::Mathematics::math_ShuffleComponent  x) ;

/// @brief Method shuffle, addr 0x648dfa0, size 0x8, virtual false, abstract: false, final false
static inline double_t shuffle(::Unity::Mathematics::double3  left, ::Unity::Mathematics::double3  right, ::Unity::Mathematics::math_ShuffleComponent  x) ;

/// @brief Method shuffle, addr 0x648f408, size 0x8, virtual false, abstract: false, final false
static inline double_t shuffle(::Unity::Mathematics::double4  left, ::Unity::Mathematics::double4  right, ::Unity::Mathematics::math_ShuffleComponent  x) ;

/// @brief Method shuffle, addr 0x6490e88, size 0x8, virtual false, abstract: false, final false
static inline float_t shuffle(::Unity::Mathematics::float2  left, ::Unity::Mathematics::float2  right, ::Unity::Mathematics::math_ShuffleComponent  x) ;

/// @brief Method shuffle, addr 0x6491b00, size 0x8, virtual false, abstract: false, final false
static inline float_t shuffle(::Unity::Mathematics::float3  left, ::Unity::Mathematics::float3  right, ::Unity::Mathematics::math_ShuffleComponent  x) ;

/// @brief Method shuffle, addr 0x6492cb8, size 0x8, virtual false, abstract: false, final false
static inline float_t shuffle(::Unity::Mathematics::float4  left, ::Unity::Mathematics::float4  right, ::Unity::Mathematics::math_ShuffleComponent  x) ;

/// @brief Method shuffle, addr 0x6494f44, size 0x8, virtual false, abstract: false, final false
static inline int32_t shuffle(::Unity::Mathematics::int2  left, ::Unity::Mathematics::int2  right, ::Unity::Mathematics::math_ShuffleComponent  x) ;

/// @brief Method shuffle, addr 0x6495cb8, size 0x10, virtual false, abstract: false, final false
static inline int32_t shuffle(::Unity::Mathematics::int3  left, ::Unity::Mathematics::int3  right, ::Unity::Mathematics::math_ShuffleComponent  x) ;

/// @brief Method shuffle, addr 0x6497070, size 0x8, virtual false, abstract: false, final false
static inline int32_t shuffle(::Unity::Mathematics::int4  left, ::Unity::Mathematics::int4  right, ::Unity::Mathematics::math_ShuffleComponent  x) ;

/// @brief Method shuffle, addr 0x64b55d4, size 0x8, virtual false, abstract: false, final false
static inline uint32_t shuffle(::Unity::Mathematics::uint2  left, ::Unity::Mathematics::uint2  right, ::Unity::Mathematics::math_ShuffleComponent  x) ;

/// @brief Method shuffle, addr 0x64b62ac, size 0x10, virtual false, abstract: false, final false
static inline uint32_t shuffle(::Unity::Mathematics::uint3  left, ::Unity::Mathematics::uint3  right, ::Unity::Mathematics::math_ShuffleComponent  x) ;

/// @brief Method shuffle, addr 0x64b75e8, size 0x8, virtual false, abstract: false, final false
static inline uint32_t shuffle(::Unity::Mathematics::uint4  left, ::Unity::Mathematics::uint4  right, ::Unity::Mathematics::math_ShuffleComponent  x) ;

/// @brief Method sign, addr 0x64a117c, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 sign(::Unity::Mathematics::double2  x) ;

/// @brief Method sign, addr 0x64a11c0, size 0x68, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 sign(::Unity::Mathematics::double3  x) ;

/// @brief Method sign, addr 0x64a1228, size 0x88, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 sign(::Unity::Mathematics::double4  x) ;

/// @brief Method sign, addr 0x64a10c0, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 sign(::Unity::Mathematics::float2  x) ;

/// @brief Method sign, addr 0x64a10e4, size 0x3c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 sign(::Unity::Mathematics::float3  x) ;

/// @brief Method sign, addr 0x64a1120, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 sign(::Unity::Mathematics::float4  x) ;

/// @brief Method sign, addr 0x64a1004, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 sign(::Unity::Mathematics::int2  x) ;

/// @brief Method sign, addr 0x64a1028, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 sign(::Unity::Mathematics::int3  x) ;

/// @brief Method sign, addr 0x64a1058, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 sign(::Unity::Mathematics::int4  x) ;

/// @brief Method sign, addr 0x64a1154, size 0x28, virtual false, abstract: false, final false
static inline double_t sign(double_t  x) ;

/// @brief Method sign, addr 0x64a10a4, size 0x1c, virtual false, abstract: false, final false
static inline float_t sign(float_t  x) ;

/// @brief Method sign, addr 0x64a0ff4, size 0x10, virtual false, abstract: false, final false
static inline int32_t sign(int32_t  x) ;

/// @brief Method sin, addr 0x649d8f8, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 sin(::Unity::Mathematics::double2  x) ;

/// @brief Method sin, addr 0x649d9a8, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 sin(::Unity::Mathematics::double3  x) ;

/// @brief Method sin, addr 0x649daa8, size 0x148, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 sin(::Unity::Mathematics::double4  x) ;

/// @brief Method sin, addr 0x649d584, size 0xb8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 sin(::Unity::Mathematics::float2  x) ;

/// @brief Method sin, addr 0x649d63c, size 0x108, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 sin(::Unity::Mathematics::float3  x) ;

/// @brief Method sin, addr 0x649d744, size 0x154, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 sin(::Unity::Mathematics::float4  x) ;

/// @brief Method sin, addr 0x649d898, size 0x60, virtual false, abstract: false, final false
static inline double_t sin(double_t  x) ;

/// @brief Method sin, addr 0x649d51c, size 0x68, virtual false, abstract: false, final false
static inline float_t sin(float_t  x) ;

/// @brief Method sincos, addr 0x64a83b4, size 0x148, virtual false, abstract: false, final false
static inline void sincos(::Unity::Mathematics::double2  x, ::ByRef<::Unity::Mathematics::double2>  s, ::ByRef<::Unity::Mathematics::double2>  c) ;

/// @brief Method sincos, addr 0x64a84fc, size 0x1dc, virtual false, abstract: false, final false
static inline void sincos(::Unity::Mathematics::double3  x, ::ByRef<::Unity::Mathematics::double3>  s, ::ByRef<::Unity::Mathematics::double3>  c) ;

/// @brief Method sincos, addr 0x64a86d8, size 0x6c, virtual false, abstract: false, final false
static inline void sincos(::Unity::Mathematics::double4  x, ::ByRef<::Unity::Mathematics::double4>  s, ::ByRef<::Unity::Mathematics::double4>  c) ;

/// @brief Method sincos, addr 0x64a80d0, size 0x158, virtual false, abstract: false, final false
static inline void sincos(::Unity::Mathematics::float2  x, ::ByRef<::Unity::Mathematics::float2>  s, ::ByRef<::Unity::Mathematics::float2>  c) ;

/// @brief Method sincos, addr 0x64a8228, size 0x64, virtual false, abstract: false, final false
static inline void sincos(::Unity::Mathematics::float3  x, ::ByRef<::Unity::Mathematics::float3>  s, ::ByRef<::Unity::Mathematics::float3>  c) ;

/// @brief Method sincos, addr 0x64a828c, size 0x6c, virtual false, abstract: false, final false
static inline void sincos(::Unity::Mathematics::float4  x, ::ByRef<::Unity::Mathematics::float4>  s, ::ByRef<::Unity::Mathematics::float4>  c) ;

/// @brief Method sincos, addr 0x64a82f8, size 0xbc, virtual false, abstract: false, final false
static inline void sincos(double_t  x, ::ByRef<double_t>  s, ::ByRef<double_t>  c) ;

/// @brief Method sincos, addr 0x64a8008, size 0xc8, virtual false, abstract: false, final false
static inline void sincos(float_t  x, ::ByRef<float_t>  s, ::ByRef<float_t>  c) ;

/// @brief Method sinh, addr 0x649dfcc, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 sinh(::Unity::Mathematics::double2  x) ;

/// @brief Method sinh, addr 0x649e07c, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 sinh(::Unity::Mathematics::double3  x) ;

/// @brief Method sinh, addr 0x649e17c, size 0x148, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 sinh(::Unity::Mathematics::double4  x) ;

/// @brief Method sinh, addr 0x649dc58, size 0xb8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 sinh(::Unity::Mathematics::float2  x) ;

/// @brief Method sinh, addr 0x649dd10, size 0x108, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 sinh(::Unity::Mathematics::float3  x) ;

/// @brief Method sinh, addr 0x649de18, size 0x154, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 sinh(::Unity::Mathematics::float4  x) ;

/// @brief Method sinh, addr 0x649df6c, size 0x60, virtual false, abstract: false, final false
static inline double_t sinh(double_t  x) ;

/// @brief Method sinh, addr 0x649dbf0, size 0x68, virtual false, abstract: false, final false
static inline float_t sinh(float_t  x) ;

/// @brief Method slerp, addr 0x64b43f8, size 0x374, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::quaternion slerp(::Unity::Mathematics::quaternion  q1, ::Unity::Mathematics::quaternion  q2, float_t  t) ;

/// @brief Method smoothstep, addr 0x64a693c, size 0x68, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 smoothstep(::Unity::Mathematics::double2  xMin, ::Unity::Mathematics::double2  xMax, ::Unity::Mathematics::double2  x) ;

/// @brief Method smoothstep, addr 0x64a69a4, size 0xec, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 smoothstep(::Unity::Mathematics::double3  xMin, ::Unity::Mathematics::double3  xMax, ::Unity::Mathematics::double3  x) ;

/// @brief Method smoothstep, addr 0x64a6a90, size 0x134, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 smoothstep(::Unity::Mathematics::double4  xMin, ::Unity::Mathematics::double4  xMax, ::Unity::Mathematics::double4  x) ;

/// @brief Method smoothstep, addr 0x64a6720, size 0x68, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 smoothstep(::Unity::Mathematics::float2  xMin, ::Unity::Mathematics::float2  xMax, ::Unity::Mathematics::float2  x) ;

/// @brief Method smoothstep, addr 0x64a6788, size 0xc4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 smoothstep(::Unity::Mathematics::float3  xMin, ::Unity::Mathematics::float3  xMax, ::Unity::Mathematics::float3  x) ;

/// @brief Method smoothstep, addr 0x64a684c, size 0x98, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 smoothstep(::Unity::Mathematics::float4  xMin, ::Unity::Mathematics::float4  xMax, ::Unity::Mathematics::float4  x) ;

/// @brief Method smoothstep, addr 0x64a68e4, size 0x58, virtual false, abstract: false, final false
static inline double_t smoothstep(double_t  xMin, double_t  xMax, double_t  x) ;

/// @brief Method smoothstep, addr 0x64a66c8, size 0x58, virtual false, abstract: false, final false
static inline float_t smoothstep(float_t  xMin, float_t  xMax, float_t  x) ;

/// @brief Method sqrt, addr 0x64a4ee8, size 0x9c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 sqrt(::Unity::Mathematics::double2  x) ;

/// @brief Method sqrt, addr 0x64a4f84, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 sqrt(::Unity::Mathematics::double3  x) ;

/// @brief Method sqrt, addr 0x64a5064, size 0x11c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 sqrt(::Unity::Mathematics::double4  x) ;

/// @brief Method sqrt, addr 0x64a4bf0, size 0x9c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 sqrt(::Unity::Mathematics::float2  x) ;

/// @brief Method sqrt, addr 0x64a4c8c, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 sqrt(::Unity::Mathematics::float3  x) ;

/// @brief Method sqrt, addr 0x64a4d6c, size 0x11c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 sqrt(::Unity::Mathematics::float4  x) ;

/// @brief Method sqrt, addr 0x64a4e88, size 0x60, virtual false, abstract: false, final false
static inline double_t sqrt(double_t  x) ;

/// @brief Method sqrt, addr 0x64a4b90, size 0x60, virtual false, abstract: false, final false
static inline float_t sqrt(float_t  x) ;

/// @brief Method square, addr 0x64aafe4, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 square(::Unity::Mathematics::double2  x) ;

/// @brief Method square, addr 0x64aaff0, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 square(::Unity::Mathematics::double3  x) ;

/// @brief Method square, addr 0x64ab000, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 square(::Unity::Mathematics::double4  x) ;

/// @brief Method square, addr 0x64aafac, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 square(::Unity::Mathematics::float2  x) ;

/// @brief Method square, addr 0x64aafb8, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 square(::Unity::Mathematics::float3  x) ;

/// @brief Method square, addr 0x64aafc8, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 square(::Unity::Mathematics::float4  x) ;

/// @brief Method square, addr 0x64ab01c, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 square(::Unity::Mathematics::int2  x) ;

/// @brief Method square, addr 0x64ab034, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 square(::Unity::Mathematics::int3  x) ;

/// @brief Method square, addr 0x64ab050, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 square(::Unity::Mathematics::int4  x) ;

/// @brief Method square, addr 0x64ab084, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 square(::Unity::Mathematics::uint2  x) ;

/// @brief Method square, addr 0x64ab09c, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 square(::Unity::Mathematics::uint3  x) ;

/// @brief Method square, addr 0x64ab0b8, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 square(::Unity::Mathematics::uint4  x) ;

/// @brief Method square, addr 0x64aafdc, size 0x8, virtual false, abstract: false, final false
static inline double_t square(double_t  x) ;

/// @brief Method square, addr 0x64aafa4, size 0x8, virtual false, abstract: false, final false
static inline float_t square(float_t  x) ;

/// @brief Method square, addr 0x64ab014, size 0x8, virtual false, abstract: false, final false
static inline int32_t square(int32_t  x) ;

/// @brief Method square, addr 0x64ab07c, size 0x8, virtual false, abstract: false, final false
static inline uint32_t square(uint32_t  x) ;

/// @brief Method step, addr 0x64a71fc, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 step(::Unity::Mathematics::double2  threshold, ::Unity::Mathematics::double2  x) ;

/// @brief Method step, addr 0x64a7218, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 step(::Unity::Mathematics::double3  threshold, ::Unity::Mathematics::double3  x) ;

/// @brief Method step, addr 0x64a723c, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 step(::Unity::Mathematics::double4  threshold, ::Unity::Mathematics::double4  x) ;

/// @brief Method step, addr 0x64a717c, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 step(::Unity::Mathematics::float2  threshold, ::Unity::Mathematics::float2  x) ;

/// @brief Method step, addr 0x64a7198, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 step(::Unity::Mathematics::float3  threshold, ::Unity::Mathematics::float3  x) ;

/// @brief Method step, addr 0x64a71bc, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 step(::Unity::Mathematics::float4  threshold, ::Unity::Mathematics::float4  x) ;

/// @brief Method step, addr 0x64a71e8, size 0x14, virtual false, abstract: false, final false
static inline double_t step(double_t  threshold, double_t  x) ;

/// @brief Method step, addr 0x64a7168, size 0x14, virtual false, abstract: false, final false
static inline float_t step(float_t  threshold, float_t  x) ;

/// @brief Method tan, addr 0x649a84c, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 tan(::Unity::Mathematics::double2  x) ;

/// @brief Method tan, addr 0x649a8fc, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 tan(::Unity::Mathematics::double3  x) ;

/// @brief Method tan, addr 0x649a9fc, size 0x148, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 tan(::Unity::Mathematics::double4  x) ;

/// @brief Method tan, addr 0x649a4d8, size 0xb8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 tan(::Unity::Mathematics::float2  x) ;

/// @brief Method tan, addr 0x649a590, size 0x108, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 tan(::Unity::Mathematics::float3  x) ;

/// @brief Method tan, addr 0x649a698, size 0x154, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 tan(::Unity::Mathematics::float4  x) ;

/// @brief Method tan, addr 0x649a7ec, size 0x60, virtual false, abstract: false, final false
static inline double_t tan(double_t  x) ;

/// @brief Method tan, addr 0x649a470, size 0x68, virtual false, abstract: false, final false
static inline float_t tan(float_t  x) ;

/// @brief Method tanh, addr 0x649af20, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 tanh(::Unity::Mathematics::double2  x) ;

/// @brief Method tanh, addr 0x649afd0, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 tanh(::Unity::Mathematics::double3  x) ;

/// @brief Method tanh, addr 0x649b0d0, size 0x148, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 tanh(::Unity::Mathematics::double4  x) ;

/// @brief Method tanh, addr 0x649abac, size 0xb8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 tanh(::Unity::Mathematics::float2  x) ;

/// @brief Method tanh, addr 0x649ac64, size 0x108, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 tanh(::Unity::Mathematics::float3  x) ;

/// @brief Method tanh, addr 0x649ad6c, size 0x154, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 tanh(::Unity::Mathematics::float4  x) ;

/// @brief Method tanh, addr 0x649aec0, size 0x60, virtual false, abstract: false, final false
static inline double_t tanh(double_t  x) ;

/// @brief Method tanh, addr 0x649ab44, size 0x68, virtual false, abstract: false, final false
static inline float_t tanh(float_t  x) ;

/// @brief Method transform, addr 0x6490414, size 0x6c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 transform(::Unity::Mathematics::double4x4  a, ::Unity::Mathematics::double3  b) ;

/// @brief Method transform, addr 0x648a670, size 0x58, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 transform(::Unity::Mathematics::AffineTransform  a, ::Unity::Mathematics::float3  pos) ;

/// @brief Method transform, addr 0x64b529c, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 transform(::Unity::Mathematics::RigidTransform  a, ::Unity::Mathematics::float3  pos) ;

/// @brief Method transform, addr 0x6493ac8, size 0x58, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 transform(::Unity::Mathematics::float4x4  a, ::Unity::Mathematics::float3  b) ;

/// @brief Method transpose, addr 0x648addc, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 transpose(::Unity::Mathematics::bool2x2  v) ;

/// @brief Method transpose, addr 0x648b75c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x3 transpose(::Unity::Mathematics::bool3x2  v) ;

/// @brief Method transpose, addr 0x648c5c4, size 0x74, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x4 transpose(::Unity::Mathematics::bool4x2  v) ;

/// @brief Method transpose, addr 0x648af4c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x2 transpose(::Unity::Mathematics::bool2x3  v) ;

/// @brief Method transpose, addr 0x648b9d4, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 transpose(::Unity::Mathematics::bool3x3  v) ;

/// @brief Method transpose, addr 0x648c880, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 transpose(::Unity::Mathematics::bool4x3  v) ;

/// @brief Method transpose, addr 0x648b140, size 0x48, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x2 transpose(::Unity::Mathematics::bool2x4  v) ;

/// @brief Method transpose, addr 0x648bd58, size 0xa4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x3 transpose(::Unity::Mathematics::bool3x4  v) ;

/// @brief Method transpose, addr 0x648cc2c, size 0xc4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x4 transpose(::Unity::Mathematics::bool4x4  v) ;

/// @brief Method transpose, addr 0x648d544, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x2 transpose(::Unity::Mathematics::double2x2  v) ;

/// @brief Method transpose, addr 0x648e420, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x3 transpose(::Unity::Mathematics::double3x2  v) ;

/// @brief Method transpose, addr 0x648f964, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x4 transpose(::Unity::Mathematics::double4x2  v) ;

/// @brief Method transpose, addr 0x648d7e4, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x2 transpose(::Unity::Mathematics::double2x3  v) ;

/// @brief Method transpose, addr 0x648e798, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x3 transpose(::Unity::Mathematics::double3x3  v) ;

/// @brief Method transpose, addr 0x648fdc0, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x4 transpose(::Unity::Mathematics::double4x3  v) ;

/// @brief Method transpose, addr 0x648dafc, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x2 transpose(::Unity::Mathematics::double2x4  v) ;

/// @brief Method transpose, addr 0x648ed60, size 0x3c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x3 transpose(::Unity::Mathematics::double3x4  v) ;

/// @brief Method transpose, addr 0x6490480, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x4 transpose(::Unity::Mathematics::double4x4  v) ;

/// @brief Method transpose, addr 0x6491228, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x2 transpose(::Unity::Mathematics::float2x2  v) ;

/// @brief Method transpose, addr 0x6491f80, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x3 transpose(::Unity::Mathematics::float3x2  v) ;

/// @brief Method transpose, addr 0x64931e4, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x4 transpose(::Unity::Mathematics::float4x2  v) ;

/// @brief Method transpose, addr 0x6491488, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x2 transpose(::Unity::Mathematics::float2x3  v) ;

/// @brief Method transpose, addr 0x6492288, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 transpose(::Unity::Mathematics::float3x3  v) ;

/// @brief Method transpose, addr 0x6493594, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x4 transpose(::Unity::Mathematics::float4x3  v) ;

/// @brief Method transpose, addr 0x6491728, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x2 transpose(::Unity::Mathematics::float2x4  v) ;

/// @brief Method transpose, addr 0x6492784, size 0x3c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x3 transpose(::Unity::Mathematics::float3x4  v) ;

/// @brief Method transpose, addr 0x6493b20, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x4 transpose(::Unity::Mathematics::float4x4  v) ;

/// @brief Method transpose, addr 0x64952dc, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x2 transpose(::Unity::Mathematics::int2x2  v) ;

/// @brief Method transpose, addr 0x64961c8, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x3 transpose(::Unity::Mathematics::int3x2  v) ;

/// @brief Method transpose, addr 0x64975b0, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x4 transpose(::Unity::Mathematics::int4x2  v) ;

/// @brief Method transpose, addr 0x64955ec, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x2 transpose(::Unity::Mathematics::int2x3  v) ;

/// @brief Method transpose, addr 0x6496618, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x3 transpose(::Unity::Mathematics::int3x3  v) ;

/// @brief Method transpose, addr 0x6497a74, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x4 transpose(::Unity::Mathematics::int4x3  v) ;

/// @brief Method transpose, addr 0x64959a0, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x2 transpose(::Unity::Mathematics::int2x4  v) ;

/// @brief Method transpose, addr 0x6496c04, size 0x3c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x3 transpose(::Unity::Mathematics::int3x4  v) ;

/// @brief Method transpose, addr 0x64980a4, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 transpose(::Unity::Mathematics::int4x4  v) ;

/// @brief Method transpose, addr 0x64b593c, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x2 transpose(::Unity::Mathematics::uint2x2  v) ;

/// @brief Method transpose, addr 0x64b67ac, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x3 transpose(::Unity::Mathematics::uint3x2  v) ;

/// @brief Method transpose, addr 0x64b7b1c, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x4 transpose(::Unity::Mathematics::uint4x2  v) ;

/// @brief Method transpose, addr 0x64b5c10, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x2 transpose(::Unity::Mathematics::uint2x3  v) ;

/// @brief Method transpose, addr 0x64b6bfc, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x3 transpose(::Unity::Mathematics::uint3x3  v) ;

/// @brief Method transpose, addr 0x64b7fe4, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x4 transpose(::Unity::Mathematics::uint4x3  v) ;

/// @brief Method transpose, addr 0x64b5fb4, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x2 transpose(::Unity::Mathematics::uint2x4  v) ;

/// @brief Method transpose, addr 0x64b71ac, size 0x3c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x3 transpose(::Unity::Mathematics::uint3x4  v) ;

/// @brief Method transpose, addr 0x64b8628, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x4 transpose(::Unity::Mathematics::uint4x4  v) ;

/// @brief Method trunc, addr 0x64a07d8, size 0xb8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 trunc(::Unity::Mathematics::double2  x) ;

/// @brief Method trunc, addr 0x64a0890, size 0x10c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 trunc(::Unity::Mathematics::double3  x) ;

/// @brief Method trunc, addr 0x64a099c, size 0x158, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 trunc(::Unity::Mathematics::double4  x) ;

/// @brief Method trunc, addr 0x64a043c, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 trunc(::Unity::Mathematics::float2  x) ;

/// @brief Method trunc, addr 0x64a04fc, size 0x114, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 trunc(::Unity::Mathematics::float3  x) ;

/// @brief Method trunc, addr 0x64a0610, size 0x164, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 trunc(::Unity::Mathematics::float4  x) ;

/// @brief Method trunc, addr 0x64a0774, size 0x64, virtual false, abstract: false, final false
static inline double_t trunc(double_t  x) ;

/// @brief Method trunc, addr 0x64a03d0, size 0x6c, virtual false, abstract: false, final false
static inline float_t trunc(float_t  x) ;

/// @brief Method tzcnt, addr 0x64a9138, size 0x88, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 tzcnt(::Unity::Mathematics::int2  x) ;

/// @brief Method tzcnt, addr 0x64a93bc, size 0x88, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 tzcnt(::Unity::Mathematics::uint2  x) ;

/// @brief Method tzcnt, addr 0x64a91c0, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 tzcnt(::Unity::Mathematics::int3  x) ;

/// @brief Method tzcnt, addr 0x64a9444, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 tzcnt(::Unity::Mathematics::uint3  x) ;

/// @brief Method tzcnt, addr 0x64a9280, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 tzcnt(::Unity::Mathematics::int4  x) ;

/// @brief Method tzcnt, addr 0x64a9504, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 tzcnt(::Unity::Mathematics::uint4  x) ;

/// @brief Method tzcnt, addr 0x64a90fc, size 0x3c, virtual false, abstract: false, final false
static inline int32_t tzcnt(int32_t  x) ;

/// @brief Method tzcnt, addr 0x64a9604, size 0x54, virtual false, abstract: false, final false
static inline int32_t tzcnt(int64_t  x) ;

/// @brief Method tzcnt, addr 0x64a9380, size 0x3c, virtual false, abstract: false, final false
static inline int32_t tzcnt(uint32_t  x) ;

/// @brief Method tzcnt, addr 0x64a9658, size 0x54, virtual false, abstract: false, final false
static inline int32_t tzcnt(uint64_t  x) ;

/// @brief Method uint2, addr 0x64b54cc, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 uint2(::Unity::Mathematics::bool2  v) ;

/// @brief Method uint2, addr 0x64b5544, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 uint2(::Unity::Mathematics::double2  v) ;

/// @brief Method uint2, addr 0x64b5504, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 uint2(::Unity::Mathematics::float2  v) ;

/// @brief Method uint2, addr 0x64b54e8, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 uint2(::Unity::Mathematics::int2  v) ;

/// @brief Method uint2, addr 0x64b54b4, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 uint2(bool  v) ;

/// @brief Method uint2, addr 0x64b552c, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 uint2(double_t  v) ;

/// @brief Method uint2, addr 0x64b54ec, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 uint2(float_t  v) ;

/// @brief Method uint2, addr 0x64b54dc, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 uint2(int32_t  v) ;

/// @brief Method uint2, addr 0x64b54a8, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 uint2(uint32_t  v) ;

/// @brief Method uint2, addr 0x64b5498, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 uint2(uint32_t  x, uint32_t  y) ;

/// @brief Method uint2, addr 0x64b54a4, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 uint2(::Unity::Mathematics::uint2  xy) ;

/// @brief Method uint2x2, addr 0x64b5808, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x2 uint2x2(::Unity::Mathematics::uint2  c0, ::Unity::Mathematics::uint2  c1) ;

/// @brief Method uint2x2, addr 0x64b580c, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x2 uint2x2(uint32_t  m00, uint32_t  m01, uint32_t  m10, uint32_t  m11) ;

/// @brief Method uint2x2, addr 0x64b5844, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x2 uint2x2(::Unity::Mathematics::bool2x2  v) ;

/// @brief Method uint2x2, addr 0x64b58f0, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x2 uint2x2(::Unity::Mathematics::double2x2  v) ;

/// @brief Method uint2x2, addr 0x64b5894, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x2 uint2x2(::Unity::Mathematics::float2x2  v) ;

/// @brief Method uint2x2, addr 0x64b5874, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x2 uint2x2(::Unity::Mathematics::int2x2  v) ;

/// @brief Method uint2x2, addr 0x64b5830, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x2 uint2x2(bool  v) ;

/// @brief Method uint2x2, addr 0x64b58d4, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x2 uint2x2(double_t  v) ;

/// @brief Method uint2x2, addr 0x64b5878, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x2 uint2x2(float_t  v) ;

/// @brief Method uint2x2, addr 0x64b5864, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x2 uint2x2(int32_t  v) ;

/// @brief Method uint2x2, addr 0x64b5820, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x2 uint2x2(uint32_t  v) ;

/// @brief Method uint2x3, addr 0x64b59f8, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x3 uint2x3(::Unity::Mathematics::uint2  c0, ::Unity::Mathematics::uint2  c1, ::Unity::Mathematics::uint2  c2) ;

/// @brief Method uint2x3, addr 0x64b5a04, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x3 uint2x3(uint32_t  m00, uint32_t  m01, uint32_t  m02, uint32_t  m10, uint32_t  m11, uint32_t  m12) ;

/// @brief Method uint2x3, addr 0x64b5a54, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x3 uint2x3(::Unity::Mathematics::bool2x3  v) ;

/// @brief Method uint2x3, addr 0x64b5b8c, size 0x84, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x3 uint2x3(::Unity::Mathematics::double2x3  v) ;

/// @brief Method uint2x3, addr 0x64b5ae8, size 0x84, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x3 uint2x3(::Unity::Mathematics::float2x3  v) ;

/// @brief Method uint2x3, addr 0x64b5ab4, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x3 uint2x3(::Unity::Mathematics::int2x3  v) ;

/// @brief Method uint2x3, addr 0x64b5a3c, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x3 uint2x3(bool  v) ;

/// @brief Method uint2x3, addr 0x64b5b6c, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x3 uint2x3(double_t  v) ;

/// @brief Method uint2x3, addr 0x64b5ac8, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x3 uint2x3(float_t  v) ;

/// @brief Method uint2x3, addr 0x64b5aa0, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x3 uint2x3(int32_t  v) ;

/// @brief Method uint2x3, addr 0x64b5a28, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x3 uint2x3(uint32_t  v) ;

/// @brief Method uint2x4, addr 0x64b5d24, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x4 uint2x4(::Unity::Mathematics::uint2  c0, ::Unity::Mathematics::uint2  c1, ::Unity::Mathematics::uint2  c2, ::Unity::Mathematics::uint2  c3) ;

/// @brief Method uint2x4, addr 0x64b5d30, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x4 uint2x4(uint32_t  m00, uint32_t  m01, uint32_t  m02, uint32_t  m03, uint32_t  m10, uint32_t  m11, uint32_t  m12, uint32_t  m13) ;

/// @brief Method uint2x4, addr 0x64b5d88, size 0x74, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x4 uint2x4(::Unity::Mathematics::bool2x4  v) ;

/// @brief Method uint2x4, addr 0x64b5f08, size 0xac, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x4 uint2x4(::Unity::Mathematics::double2x4  v) ;

/// @brief Method uint2x4, addr 0x64b5e3c, size 0xac, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x4 uint2x4(::Unity::Mathematics::float2x4  v) ;

/// @brief Method uint2x4, addr 0x64b5e10, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x4 uint2x4(::Unity::Mathematics::int2x4  v) ;

/// @brief Method uint2x4, addr 0x64b5d70, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x4 uint2x4(bool  v) ;

/// @brief Method uint2x4, addr 0x64b5ee8, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x4 uint2x4(double_t  v) ;

/// @brief Method uint2x4, addr 0x64b5e1c, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x4 uint2x4(float_t  v) ;

/// @brief Method uint2x4, addr 0x64b5dfc, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x4 uint2x4(int32_t  v) ;

/// @brief Method uint2x4, addr 0x64b5d5c, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x4 uint2x4(uint32_t  v) ;

/// @brief Method uint3, addr 0x64b615c, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 uint3(::Unity::Mathematics::bool3  v) ;

/// @brief Method uint3, addr 0x64b61f0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 uint3(::Unity::Mathematics::double3  v) ;

/// @brief Method uint3, addr 0x64b61a0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 uint3(::Unity::Mathematics::float3  v) ;

/// @brief Method uint3, addr 0x64b6180, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 uint3(::Unity::Mathematics::int3  v) ;

/// @brief Method uint3, addr 0x64b6140, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 uint3(bool  v) ;

/// @brief Method uint3, addr 0x64b61d8, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 uint3(double_t  v) ;

/// @brief Method uint3, addr 0x64b6188, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 uint3(float_t  v) ;

/// @brief Method uint3, addr 0x64b6174, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 uint3(int32_t  v) ;

/// @brief Method uint3, addr 0x64b6134, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 uint3(uint32_t  v) ;

/// @brief Method uint3, addr 0x64b6100, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 uint3(uint32_t  x, uint32_t  y, uint32_t  z) ;

/// @brief Method uint3, addr 0x64b6110, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 uint3(uint32_t  x, ::Unity::Mathematics::uint2  yz) ;

/// @brief Method uint3, addr 0x64b6124, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 uint3(::Unity::Mathematics::uint2  xy, uint32_t  z) ;

/// @brief Method uint3, addr 0x64b612c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 uint3(::Unity::Mathematics::uint3  xyz) ;

/// @brief Method uint3x2, addr 0x64b657c, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x2 uint3x2(::Unity::Mathematics::uint3  c0, ::Unity::Mathematics::uint3  c1) ;

/// @brief Method uint3x2, addr 0x64b6590, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x2 uint3x2(uint32_t  m00, uint32_t  m01, uint32_t  m10, uint32_t  m11, uint32_t  m20, uint32_t  m21) ;

/// @brief Method uint3x2, addr 0x64b65dc, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x2 uint3x2(::Unity::Mathematics::bool3x2  v) ;

/// @brief Method uint3x2, addr 0x64b6724, size 0x88, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x2 uint3x2(::Unity::Mathematics::double3x2  v) ;

/// @brief Method uint3x2, addr 0x64b6674, size 0x88, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x2 uint3x2(::Unity::Mathematics::float3x2  v) ;

/// @brief Method uint3x2, addr 0x64b6628, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x2 uint3x2(::Unity::Mathematics::int3x2  v) ;

/// @brief Method uint3x2, addr 0x64b65bc, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x2 uint3x2(bool  v) ;

/// @brief Method uint3x2, addr 0x64b66fc, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x2 uint3x2(double_t  v) ;

/// @brief Method uint3x2, addr 0x64b664c, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x2 uint3x2(float_t  v) ;

/// @brief Method uint3x2, addr 0x64b660c, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x2 uint3x2(int32_t  v) ;

/// @brief Method uint3x2, addr 0x64b65a0, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x2 uint3x2(uint32_t  v) ;

/// @brief Method uint3x3, addr 0x64b68d4, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x3 uint3x3(::Unity::Mathematics::uint3  c0, ::Unity::Mathematics::uint3  c1, ::Unity::Mathematics::uint3  c2) ;

/// @brief Method uint3x3, addr 0x64b68f0, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x3 uint3x3(uint32_t  m00, uint32_t  m01, uint32_t  m02, uint32_t  m10, uint32_t  m11, uint32_t  m12, uint32_t  m20, uint32_t  m21, uint32_t  m22) ;

/// @brief Method uint3x3, addr 0x64b6958, size 0x54, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x3 uint3x3(::Unity::Mathematics::bool3x3  v) ;

/// @brief Method uint3x3, addr 0x64b6b30, size 0xcc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x3 uint3x3(::Unity::Mathematics::double3x3  v) ;

/// @brief Method uint3x3, addr 0x64b6a34, size 0xcc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x3 uint3x3(::Unity::Mathematics::float3x3  v) ;

/// @brief Method uint3x3, addr 0x64b69d0, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x3 uint3x3(::Unity::Mathematics::int3x3  v) ;

/// @brief Method uint3x3, addr 0x64b6930, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x3 uint3x3(bool  v) ;

/// @brief Method uint3x3, addr 0x64b6b00, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x3 uint3x3(double_t  v) ;

/// @brief Method uint3x3, addr 0x64b6a04, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x3 uint3x3(float_t  v) ;

/// @brief Method uint3x3, addr 0x64b69ac, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x3 uint3x3(int32_t  v) ;

/// @brief Method uint3x3, addr 0x64b690c, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x3 uint3x3(uint32_t  v) ;

/// @brief Method uint3x4, addr 0x64b6d8c, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x4 uint3x4(::Unity::Mathematics::uint3  c0, ::Unity::Mathematics::uint3  c1, ::Unity::Mathematics::uint3  c2, ::Unity::Mathematics::uint3  c3) ;

/// @brief Method uint3x4, addr 0x64b6db0, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x4 uint3x4(uint32_t  m00, uint32_t  m01, uint32_t  m02, uint32_t  m03, uint32_t  m10, uint32_t  m11, uint32_t  m12, uint32_t  m13, uint32_t  m20, uint32_t  m21, uint32_t  m22, uint32_t  m23) ;

/// @brief Method uint3x4, addr 0x64b6e40, size 0x74, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x4 uint3x4(::Unity::Mathematics::bool3x4  v) ;

/// @brief Method uint3x4, addr 0x64b70a0, size 0x10c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x4 uint3x4(::Unity::Mathematics::double3x4  v) ;

/// @brief Method uint3x4, addr 0x64b6f5c, size 0x10c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x4 uint3x4(::Unity::Mathematics::float3x4  v) ;

/// @brief Method uint3x4, addr 0x64b6ee0, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x4 uint3x4(::Unity::Mathematics::int3x4  v) ;

/// @brief Method uint3x4, addr 0x64b6e10, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x4 uint3x4(bool  v) ;

/// @brief Method uint3x4, addr 0x64b7068, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x4 uint3x4(double_t  v) ;

/// @brief Method uint3x4, addr 0x64b6f24, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x4 uint3x4(float_t  v) ;

/// @brief Method uint3x4, addr 0x64b6eb4, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x4 uint3x4(int32_t  v) ;

/// @brief Method uint3x4, addr 0x64b6de4, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x4 uint3x4(uint32_t  v) ;

/// @brief Method uint4, addr 0x64b743c, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 uint4(::Unity::Mathematics::bool4  v) ;

/// @brief Method uint4, addr 0x64b74e8, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 uint4(::Unity::Mathematics::double4  v) ;

/// @brief Method uint4, addr 0x64b748c, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 uint4(::Unity::Mathematics::float4  v) ;

/// @brief Method uint4, addr 0x64b746c, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 uint4(::Unity::Mathematics::int4  v) ;

/// @brief Method uint4, addr 0x64b7424, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 uint4(bool  v) ;

/// @brief Method uint4, addr 0x64b74cc, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 uint4(double_t  v) ;

/// @brief Method uint4, addr 0x64b7470, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 uint4(float_t  v) ;

/// @brief Method uint4, addr 0x64b745c, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 uint4(int32_t  v) ;

/// @brief Method uint4, addr 0x64b7414, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 uint4(uint32_t  v) ;

/// @brief Method uint4, addr 0x64b73a8, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 uint4(uint32_t  x, uint32_t  y, uint32_t  z, uint32_t  w) ;

/// @brief Method uint4, addr 0x64b73c0, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 uint4(uint32_t  x, uint32_t  y, ::Unity::Mathematics::uint2  zw) ;

/// @brief Method uint4, addr 0x64b73d0, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 uint4(uint32_t  x, ::Unity::Mathematics::uint2  yz, uint32_t  w) ;

/// @brief Method uint4, addr 0x64b73e4, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 uint4(uint32_t  x, ::Unity::Mathematics::uint3  yzw) ;

/// @brief Method uint4, addr 0x64b73f8, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 uint4(::Unity::Mathematics::uint2  xy, uint32_t  z, uint32_t  w) ;

/// @brief Method uint4, addr 0x64b7404, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 uint4(::Unity::Mathematics::uint2  xy, ::Unity::Mathematics::uint2  zw) ;

/// @brief Method uint4, addr 0x64b7408, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 uint4(::Unity::Mathematics::uint3  xyz, uint32_t  w) ;

/// @brief Method uint4, addr 0x64b7410, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 uint4(::Unity::Mathematics::uint4  xyzw) ;

/// @brief Method uint4x2, addr 0x64b78bc, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x2 uint4x2(::Unity::Mathematics::uint4  c0, ::Unity::Mathematics::uint4  c1) ;

/// @brief Method uint4x2, addr 0x64b78c8, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x2 uint4x2(uint32_t  m00, uint32_t  m01, uint32_t  m10, uint32_t  m11, uint32_t  m20, uint32_t  m21, uint32_t  m30, uint32_t  m31) ;

/// @brief Method uint4x2, addr 0x64b7908, size 0x5c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x2 uint4x2(::Unity::Mathematics::bool4x2  v) ;

/// @brief Method uint4x2, addr 0x64b7a70, size 0xac, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x2 uint4x2(::Unity::Mathematics::double4x2  v) ;

/// @brief Method uint4x2, addr 0x64b79a4, size 0xac, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x2 uint4x2(::Unity::Mathematics::float4x2  v) ;

/// @brief Method uint4x2, addr 0x64b7978, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x2 uint4x2(::Unity::Mathematics::int4x2  v) ;

/// @brief Method uint4x2, addr 0x64b78f0, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x2 uint4x2(bool  v) ;

/// @brief Method uint4x2, addr 0x64b7a50, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x2 uint4x2(double_t  v) ;

/// @brief Method uint4x2, addr 0x64b7984, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x2 uint4x2(float_t  v) ;

/// @brief Method uint4x2, addr 0x64b7964, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x2 uint4x2(int32_t  v) ;

/// @brief Method uint4x2, addr 0x64b78dc, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x2 uint4x2(uint32_t  v) ;

/// @brief Method uint4x3, addr 0x64b7c80, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x3 uint4x3(::Unity::Mathematics::uint4  c0, ::Unity::Mathematics::uint4  c1, ::Unity::Mathematics::uint4  c2) ;

/// @brief Method uint4x3, addr 0x64b7c90, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x3 uint4x3(uint32_t  m00, uint32_t  m01, uint32_t  m02, uint32_t  m10, uint32_t  m11, uint32_t  m12, uint32_t  m20, uint32_t  m21, uint32_t  m22, uint32_t  m30, uint32_t  m31, uint32_t  m32) ;

/// @brief Method uint4x3, addr 0x64b7cf8, size 0x78, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x3 uint4x3(::Unity::Mathematics::bool4x3  v) ;

/// @brief Method uint4x3, addr 0x64b7ee4, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x3 uint4x3(::Unity::Mathematics::double4x3  v) ;

/// @brief Method uint4x3, addr 0x64b7dc0, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x3 uint4x3(::Unity::Mathematics::float4x3  v) ;

/// @brief Method uint4x3, addr 0x64b7d88, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x3 uint4x3(::Unity::Mathematics::int4x3  v) ;

/// @brief Method uint4x3, addr 0x64b7cdc, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x3 uint4x3(bool  v) ;

/// @brief Method uint4x3, addr 0x64b7ec0, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x3 uint4x3(double_t  v) ;

/// @brief Method uint4x3, addr 0x64b7d9c, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x3 uint4x3(float_t  v) ;

/// @brief Method uint4x3, addr 0x64b7d70, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x3 uint4x3(int32_t  v) ;

/// @brief Method uint4x3, addr 0x64b7cc4, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x3 uint4x3(uint32_t  v) ;

/// @brief Method uint4x4, addr 0x64b81c8, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x4 uint4x4(::Unity::Mathematics::uint4  c0, ::Unity::Mathematics::uint4  c1, ::Unity::Mathematics::uint4  c2, ::Unity::Mathematics::uint4  c3) ;

/// @brief Method uint4x4, addr 0x64b81dc, size 0x54, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x4 uint4x4(uint32_t  m00, uint32_t  m01, uint32_t  m02, uint32_t  m03, uint32_t  m10, uint32_t  m11, uint32_t  m12, uint32_t  m13, uint32_t  m20, uint32_t  m21, uint32_t  m22, uint32_t  m23, uint32_t  m30, uint32_t  m31, uint32_t  m32, uint32_t  m33) ;

/// @brief Method uint4x4, addr 0x64b826c, size 0x94, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x4 uint4x4(::Unity::Mathematics::bool4x4  v) ;

/// @brief Method uint4x4, addr 0x64b84d4, size 0x154, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x4 uint4x4(::Unity::Mathematics::double4x4  v) ;

/// @brief Method uint4x4, addr 0x64b8358, size 0x154, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x4 uint4x4(::Unity::Mathematics::float4x4  v) ;

/// @brief Method uint4x4, addr 0x64b831c, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x4 uint4x4(::Unity::Mathematics::int4x4  v) ;

/// @brief Method uint4x4, addr 0x64b824c, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x4 uint4x4(bool  v) ;

/// @brief Method uint4x4, addr 0x64b84ac, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x4 uint4x4(double_t  v) ;

/// @brief Method uint4x4, addr 0x64b8330, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x4 uint4x4(float_t  v) ;

/// @brief Method uint4x4, addr 0x64b8300, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x4 uint4x4(int32_t  v) ;

/// @brief Method uint4x4, addr 0x64b8230, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x4 uint4x4(uint32_t  v) ;

/// @brief Method unitexp, addr 0x64b3b5c, size 0x13c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::quaternion unitexp(::Unity::Mathematics::quaternion  q) ;

/// @brief Method unitlog, addr 0x64b3e38, size 0x114, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::quaternion unitlog(::Unity::Mathematics::quaternion  q) ;

/// @brief Method unlerp, addr 0x6499508, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 unlerp(::Unity::Mathematics::double2  start, ::Unity::Mathematics::double2  end, ::Unity::Mathematics::double2  x) ;

/// @brief Method unlerp, addr 0x6499524, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 unlerp(::Unity::Mathematics::double3  start, ::Unity::Mathematics::double3  end, ::Unity::Mathematics::double3  x) ;

/// @brief Method unlerp, addr 0x6499558, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 unlerp(::Unity::Mathematics::double4  start, ::Unity::Mathematics::double4  end, ::Unity::Mathematics::double4  x) ;

/// @brief Method unlerp, addr 0x6499464, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 unlerp(::Unity::Mathematics::float2  start, ::Unity::Mathematics::float2  end, ::Unity::Mathematics::float2  x) ;

/// @brief Method unlerp, addr 0x6499480, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 unlerp(::Unity::Mathematics::float3  start, ::Unity::Mathematics::float3  end, ::Unity::Mathematics::float3  x) ;

/// @brief Method unlerp, addr 0x64994b4, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 unlerp(::Unity::Mathematics::float4  start, ::Unity::Mathematics::float4  end, ::Unity::Mathematics::float4  x) ;

/// @brief Method unlerp, addr 0x64994f8, size 0x10, virtual false, abstract: false, final false
static inline double_t unlerp(double_t  start, double_t  end, double_t  x) ;

/// @brief Method unlerp, addr 0x6499454, size 0x10, virtual false, abstract: false, final false
static inline float_t unlerp(float_t  start, float_t  end, float_t  x) ;

/// @brief Method unpackhi, addr 0x64ad118, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 unpackhi(::Unity::Mathematics::double4  a, ::Unity::Mathematics::double4  b) ;

/// @brief Method unpackhi, addr 0x64ad104, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 unpackhi(::Unity::Mathematics::float4  a, ::Unity::Mathematics::float4  b) ;

/// @brief Method unpacklo, addr 0x64ad0f4, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 unpacklo(::Unity::Mathematics::double4  a, ::Unity::Mathematics::double4  b) ;

/// @brief Method unpacklo, addr 0x64ad0e4, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 unpacklo(::Unity::Mathematics::float4  a, ::Unity::Mathematics::float4  b) ;

/// @brief Method up, addr 0x64abd94, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 up() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr math() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "math", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
math(math && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "math", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
math(math const& ) = delete;

/// @brief Field DBL_MIN_NORMAL offset 0xffffffff size 0x8
static constexpr double_t  DBL_MIN_NORMAL{static_cast<double_t>(0.0)};

/// @brief Field E offset 0xffffffff size 0x4
static constexpr float_t  E{static_cast<float_t>(2.7182817f)};

/// @brief Field EPSILON offset 0xffffffff size 0x4
static constexpr float_t  EPSILON{static_cast<float_t>(1.1920929e-7f)};

/// @brief Field EPSILON_DBL offset 0xffffffff size 0x8
static constexpr double_t  EPSILON_DBL{static_cast<double_t>(0.0)};

/// @brief Field E_DBL offset 0xffffffff size 0x8
static constexpr double_t  E_DBL{static_cast<double_t>(2.7)};

/// @brief Field FLT_MIN_NORMAL offset 0xffffffff size 0x4
static constexpr float_t  FLT_MIN_NORMAL{static_cast<float_t>(1.1754944e-38f)};

/// @brief Field INFINITY_DBL offset 0xffffffff size 0x8
static constexpr double_t  INFINITY_DBL{INFINITY};

/// @brief Field LN10 offset 0xffffffff size 0x4
static constexpr float_t  LN10{static_cast<float_t>(2.3025851f)};

/// @brief Field LN10_DBL offset 0xffffffff size 0x8
static constexpr double_t  LN10_DBL{static_cast<double_t>(2.3)};

/// @brief Field LN2 offset 0xffffffff size 0x4
static constexpr float_t  LN2{static_cast<float_t>(0.6931472f)};

/// @brief Field LN2_DBL offset 0xffffffff size 0x8
static constexpr double_t  LN2_DBL{static_cast<double_t>(0.7)};

/// @brief Field LOG10E offset 0xffffffff size 0x4
static constexpr float_t  LOG10E{static_cast<float_t>(0.4342945f)};

/// @brief Field LOG10E_DBL offset 0xffffffff size 0x8
static constexpr double_t  LOG10E_DBL{static_cast<double_t>(0.4)};

/// @brief Field LOG2E offset 0xffffffff size 0x4
static constexpr float_t  LOG2E{static_cast<float_t>(1.442695f)};

/// @brief Field LOG2E_DBL offset 0xffffffff size 0x8
static constexpr double_t  LOG2E_DBL{static_cast<double_t>(1.4)};

/// @brief Field NAN_DBL offset 0xffffffff size 0x8
static constexpr double_t  NAN_DBL{NAN};

/// @brief Field PI offset 0xffffffff size 0x4
static constexpr float_t  PI{static_cast<float_t>(3.1415927f)};

/// @brief Field PI2 offset 0xffffffff size 0x4
static constexpr float_t  PI2{static_cast<float_t>(6.2831855f)};

/// @brief Field PI2_DBL offset 0xffffffff size 0x8
static constexpr double_t  PI2_DBL{static_cast<double_t>(6.3)};

/// @brief Field PIHALF offset 0xffffffff size 0x4
static constexpr float_t  PIHALF{static_cast<float_t>(1.5707964f)};

/// @brief Field PIHALF_DBL offset 0xffffffff size 0x8
static constexpr double_t  PIHALF_DBL{static_cast<double_t>(1.6)};

/// @brief Field PI_DBL offset 0xffffffff size 0x8
static constexpr double_t  PI_DBL{static_cast<double_t>(3.1)};

/// @brief Field SQRT2 offset 0xffffffff size 0x4
static constexpr float_t  SQRT2{static_cast<float_t>(1.4142135f)};

/// @brief Field SQRT2_DBL offset 0xffffffff size 0x8
static constexpr double_t  SQRT2_DBL{static_cast<double_t>(1.4)};

/// @brief Field TAU offset 0xffffffff size 0x4
static constexpr float_t  TAU{static_cast<float_t>(6.2831855f)};

/// @brief Field TAU_DBL offset 0xffffffff size 0x8
static constexpr double_t  TAU_DBL{static_cast<double_t>(6.3)};

/// @brief Field TODEGREES offset 0xffffffff size 0x4
static constexpr float_t  TODEGREES{static_cast<float_t>(57.29578f)};

/// @brief Field TODEGREES_DBL offset 0xffffffff size 0x8
static constexpr double_t  TODEGREES_DBL{static_cast<double_t>(57.3)};

/// @brief Field TORADIANS offset 0xffffffff size 0x4
static constexpr float_t  TORADIANS{static_cast<float_t>(0.017453292f)};

/// @brief Field TORADIANS_DBL offset 0xffffffff size 0x8
static constexpr double_t  TORADIANS_DBL{static_cast<double_t>(0.0)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13112};

/// @brief Field INFINITY offset 0xffffffff size 0x4
static constexpr float_t  _cordl_INFINITY{INFINITY};

/// @brief Field NAN offset 0xffffffff size 0x4
static constexpr float_t  _cordl_NAN{NAN};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::math, 0x10>, "Size mismatch!");

} // namespace end def Unity::Mathematics
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::math_RotationOrder, "Unity.Mathematics", "math/RotationOrder");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::math_ShuffleComponent, "Unity.Mathematics", "math/ShuffleComponent");
NEED_NO_BOX(::Unity::Mathematics::math);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::math*, "Unity.Mathematics", "math");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::math_LongDoubleUnion, "Unity.Mathematics", "math/LongDoubleUnion");

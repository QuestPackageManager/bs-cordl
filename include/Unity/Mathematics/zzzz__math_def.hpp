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
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13101};

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
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13102};

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
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13103};

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

/// @brief Method AffineTransform, addr 0x641655c, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::AffineTransform AffineTransform(::Unity::Mathematics::float3x4  m) ;

/// @brief Method AffineTransform, addr 0x641651c, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::AffineTransform AffineTransform(::Unity::Mathematics::float4x4  m) ;

/// @brief Method AffineTransform, addr 0x6416580, size 0x64, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::AffineTransform AffineTransform(::Unity::Mathematics::RigidTransform  rigid) ;

/// @brief Method AffineTransform, addr 0x641648c, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::AffineTransform AffineTransform(::Unity::Mathematics::float3x3  rotationScale) ;

/// @brief Method AffineTransform, addr 0x6416344, size 0x74, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::AffineTransform AffineTransform(::Unity::Mathematics::float3  translation, ::Unity::Mathematics::quaternion  rotation) ;

/// @brief Method AffineTransform, addr 0x64163b8, size 0xb8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::AffineTransform AffineTransform(::Unity::Mathematics::float3  translation, ::Unity::Mathematics::quaternion  rotation, ::Unity::Mathematics::float3  scale) ;

/// @brief Method AffineTransform, addr 0x6416470, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::AffineTransform AffineTransform(::Unity::Mathematics::float3  translation, ::Unity::Mathematics::float3x3  rotationScale) ;

/// @brief Method Euler, addr 0x6439394, size 0x154, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 Euler(::Unity::Mathematics::quaternion  q, ::Unity::Mathematics::math_RotationOrder  order) ;

/// @brief Method EulerXYZ, addr 0x6438270, size 0x2dc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 EulerXYZ(::Unity::Mathematics::quaternion  q) ;

/// @brief Method EulerXZY, addr 0x643854c, size 0x2d8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 EulerXZY(::Unity::Mathematics::quaternion  q) ;

/// @brief Method EulerYXZ, addr 0x6438824, size 0x2d8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 EulerYXZ(::Unity::Mathematics::quaternion  q) ;

/// @brief Method EulerYZX, addr 0x6438afc, size 0x2e0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 EulerYZX(::Unity::Mathematics::quaternion  q) ;

/// @brief Method EulerZXY, addr 0x6438ddc, size 0x2dc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 EulerZXY(::Unity::Mathematics::quaternion  q) ;

/// @brief Method EulerZYX, addr 0x64390b8, size 0x2dc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 EulerZYX(::Unity::Mathematics::quaternion  q) ;

/// @brief Method RigidTransform, addr 0x64412f0, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::RigidTransform RigidTransform(::Unity::Mathematics::quaternion  rot, ::Unity::Mathematics::float3  pos) ;

/// @brief Method RigidTransform, addr 0x6441304, size 0x74, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::RigidTransform RigidTransform(::Unity::Mathematics::float3x3  rotation, ::Unity::Mathematics::float3  translation) ;

/// @brief Method RigidTransform, addr 0x6441378, size 0x6c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::RigidTransform RigidTransform(::Unity::Mathematics::float4x4  transform) ;

/// @brief Method abs, addr 0x642676c, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 abs(::Unity::Mathematics::double2  x) ;

/// @brief Method abs, addr 0x6426778, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 abs(::Unity::Mathematics::double3  x) ;

/// @brief Method abs, addr 0x6426788, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 abs(::Unity::Mathematics::double4  x) ;

/// @brief Method abs, addr 0x6426734, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 abs(::Unity::Mathematics::float2  x) ;

/// @brief Method abs, addr 0x6426740, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 abs(::Unity::Mathematics::float3  x) ;

/// @brief Method abs, addr 0x6426750, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 abs(::Unity::Mathematics::float4  x) ;

/// @brief Method abs, addr 0x6426688, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 abs(::Unity::Mathematics::int2  x) ;

/// @brief Method abs, addr 0x64266b0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 abs(::Unity::Mathematics::int3  x) ;

/// @brief Method abs, addr 0x64266e0, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 abs(::Unity::Mathematics::int4  x) ;

/// @brief Method abs, addr 0x6426764, size 0x8, virtual false, abstract: false, final false
static inline double_t abs(double_t  x) ;

/// @brief Method abs, addr 0x642672c, size 0x8, virtual false, abstract: false, final false
static inline float_t abs(float_t  x) ;

/// @brief Method abs, addr 0x642667c, size 0xc, virtual false, abstract: false, final false
static inline int32_t abs(int32_t  x) ;

/// @brief Method abs, addr 0x6426720, size 0xc, virtual false, abstract: false, final false
static inline int64_t abs(int64_t  x) ;

/// @brief Method acos, addr 0x64296a0, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 acos(::Unity::Mathematics::double2  x) ;

/// @brief Method acos, addr 0x6429750, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 acos(::Unity::Mathematics::double3  x) ;

/// @brief Method acos, addr 0x6429850, size 0x148, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 acos(::Unity::Mathematics::double4  x) ;

/// @brief Method acos, addr 0x642932c, size 0xb8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 acos(::Unity::Mathematics::float2  x) ;

/// @brief Method acos, addr 0x64293e4, size 0x108, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 acos(::Unity::Mathematics::float3  x) ;

/// @brief Method acos, addr 0x64294ec, size 0x154, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 acos(::Unity::Mathematics::float4  x) ;

/// @brief Method acos, addr 0x6429640, size 0x60, virtual false, abstract: false, final false
static inline double_t acos(double_t  x) ;

/// @brief Method acos, addr 0x64292c4, size 0x68, virtual false, abstract: false, final false
static inline float_t acos(float_t  x) ;

/// @brief Method adj, addr 0x6440ffc, size 0xcc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 adj(::Unity::Mathematics::float3x3  m, ::ByRef<float_t>  det) ;

/// @brief Method adjInverse, addr 0x64410c8, size 0xec, virtual false, abstract: false, final false
static inline bool adjInverse(::Unity::Mathematics::float3x3  m, ::ByRef<::Unity::Mathematics::float3x3>  i, float_t  epsilon) ;

/// @brief Method all, addr 0x643319c, size 0x14, virtual false, abstract: false, final false
static inline bool all(::Unity::Mathematics::bool2  x) ;

/// @brief Method all, addr 0x64331b0, size 0x18, virtual false, abstract: false, final false
static inline bool all(::Unity::Mathematics::bool3  x) ;

/// @brief Method all, addr 0x64331c8, size 0x14, virtual false, abstract: false, final false
static inline bool all(::Unity::Mathematics::bool4  x) ;

/// @brief Method all, addr 0x64332ec, size 0x14, virtual false, abstract: false, final false
static inline bool all(::Unity::Mathematics::double2  x) ;

/// @brief Method all, addr 0x6433300, size 0x24, virtual false, abstract: false, final false
static inline bool all(::Unity::Mathematics::double3  x) ;

/// @brief Method all, addr 0x6433324, size 0x28, virtual false, abstract: false, final false
static inline bool all(::Unity::Mathematics::double4  x) ;

/// @brief Method all, addr 0x643328c, size 0x14, virtual false, abstract: false, final false
static inline bool all(::Unity::Mathematics::float2  x) ;

/// @brief Method all, addr 0x64332a0, size 0x24, virtual false, abstract: false, final false
static inline bool all(::Unity::Mathematics::float3  x) ;

/// @brief Method all, addr 0x64332c4, size 0x28, virtual false, abstract: false, final false
static inline bool all(::Unity::Mathematics::float4  x) ;

/// @brief Method all, addr 0x64331dc, size 0x14, virtual false, abstract: false, final false
static inline bool all(::Unity::Mathematics::int2  x) ;

/// @brief Method all, addr 0x64331f0, size 0x24, virtual false, abstract: false, final false
static inline bool all(::Unity::Mathematics::int3  x) ;

/// @brief Method all, addr 0x6433214, size 0x20, virtual false, abstract: false, final false
static inline bool all(::Unity::Mathematics::int4  x) ;

/// @brief Method all, addr 0x6433234, size 0x14, virtual false, abstract: false, final false
static inline bool all(::Unity::Mathematics::uint2  x) ;

/// @brief Method all, addr 0x6433248, size 0x24, virtual false, abstract: false, final false
static inline bool all(::Unity::Mathematics::uint3  x) ;

/// @brief Method all, addr 0x643326c, size 0x20, virtual false, abstract: false, final false
static inline bool all(::Unity::Mathematics::uint4  x) ;

/// @brief Method angle, addr 0x6440be8, size 0x1b8, virtual false, abstract: false, final false
static inline float_t angle(::Unity::Mathematics::quaternion  q1, ::Unity::Mathematics::quaternion  q2) ;

/// @brief Method any, addr 0x6433040, size 0x10, virtual false, abstract: false, final false
static inline bool any(::Unity::Mathematics::bool2  x) ;

/// @brief Method any, addr 0x6433050, size 0x14, virtual false, abstract: false, final false
static inline bool any(::Unity::Mathematics::bool3  x) ;

/// @brief Method any, addr 0x6433064, size 0x10, virtual false, abstract: false, final false
static inline bool any(::Unity::Mathematics::bool4  x) ;

/// @brief Method any, addr 0x6433140, size 0x14, virtual false, abstract: false, final false
static inline bool any(::Unity::Mathematics::double2  x) ;

/// @brief Method any, addr 0x6433154, size 0x20, virtual false, abstract: false, final false
static inline bool any(::Unity::Mathematics::double3  x) ;

/// @brief Method any, addr 0x6433174, size 0x28, virtual false, abstract: false, final false
static inline bool any(::Unity::Mathematics::double4  x) ;

/// @brief Method any, addr 0x64330e4, size 0x14, virtual false, abstract: false, final false
static inline bool any(::Unity::Mathematics::float2  x) ;

/// @brief Method any, addr 0x64330f8, size 0x20, virtual false, abstract: false, final false
static inline bool any(::Unity::Mathematics::float3  x) ;

/// @brief Method any, addr 0x6433118, size 0x28, virtual false, abstract: false, final false
static inline bool any(::Unity::Mathematics::float4  x) ;

/// @brief Method any, addr 0x6433074, size 0xc, virtual false, abstract: false, final false
static inline bool any(::Unity::Mathematics::int2  x) ;

/// @brief Method any, addr 0x6433080, size 0x14, virtual false, abstract: false, final false
static inline bool any(::Unity::Mathematics::int3  x) ;

/// @brief Method any, addr 0x6433094, size 0x18, virtual false, abstract: false, final false
static inline bool any(::Unity::Mathematics::int4  x) ;

/// @brief Method any, addr 0x64330ac, size 0xc, virtual false, abstract: false, final false
static inline bool any(::Unity::Mathematics::uint2  x) ;

/// @brief Method any, addr 0x64330b8, size 0x14, virtual false, abstract: false, final false
static inline bool any(::Unity::Mathematics::uint3  x) ;

/// @brief Method any, addr 0x64330cc, size 0x18, virtual false, abstract: false, final false
static inline bool any(::Unity::Mathematics::uint4  x) ;

/// @brief Method asdouble, addr 0x64249d8, size 0x8, virtual false, abstract: false, final false
static inline double_t asdouble(int64_t  x) ;

/// @brief Method asdouble, addr 0x64249e0, size 0x8, virtual false, abstract: false, final false
static inline double_t asdouble(uint64_t  x) ;

/// @brief Method asfloat, addr 0x6424928, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 asfloat(::Unity::Mathematics::int2  x) ;

/// @brief Method asfloat, addr 0x6424970, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 asfloat(::Unity::Mathematics::uint2  x) ;

/// @brief Method asfloat, addr 0x6424938, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 asfloat(::Unity::Mathematics::int3  x) ;

/// @brief Method asfloat, addr 0x6424980, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 asfloat(::Unity::Mathematics::uint3  x) ;

/// @brief Method asfloat, addr 0x642494c, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 asfloat(::Unity::Mathematics::int4  x) ;

/// @brief Method asfloat, addr 0x6424994, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 asfloat(::Unity::Mathematics::uint4  x) ;

/// @brief Method asfloat, addr 0x6424920, size 0x8, virtual false, abstract: false, final false
static inline float_t asfloat(int32_t  x) ;

/// @brief Method asfloat, addr 0x6424968, size 0x8, virtual false, abstract: false, final false
static inline float_t asfloat(uint32_t  x) ;

/// @brief Method asin, addr 0x642ab1c, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 asin(::Unity::Mathematics::double2  x) ;

/// @brief Method asin, addr 0x642abcc, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 asin(::Unity::Mathematics::double3  x) ;

/// @brief Method asin, addr 0x642accc, size 0x148, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 asin(::Unity::Mathematics::double4  x) ;

/// @brief Method asin, addr 0x642a7a8, size 0xb8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 asin(::Unity::Mathematics::float2  x) ;

/// @brief Method asin, addr 0x642a860, size 0x108, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 asin(::Unity::Mathematics::float3  x) ;

/// @brief Method asin, addr 0x642a968, size 0x154, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 asin(::Unity::Mathematics::float4  x) ;

/// @brief Method asin, addr 0x642aabc, size 0x60, virtual false, abstract: false, final false
static inline double_t asin(double_t  x) ;

/// @brief Method asin, addr 0x642a740, size 0x68, virtual false, abstract: false, final false
static inline float_t asin(float_t  x) ;

/// @brief Method asint, addr 0x642486c, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 asint(::Unity::Mathematics::float2  x) ;

/// @brief Method asint, addr 0x6424854, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 asint(::Unity::Mathematics::uint2  x) ;

/// @brief Method asint, addr 0x642487c, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 asint(::Unity::Mathematics::float3  x) ;

/// @brief Method asint, addr 0x6424858, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 asint(::Unity::Mathematics::uint3  x) ;

/// @brief Method asint, addr 0x6424890, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 asint(::Unity::Mathematics::float4  x) ;

/// @brief Method asint, addr 0x6424860, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 asint(::Unity::Mathematics::uint4  x) ;

/// @brief Method asint, addr 0x6424864, size 0x8, virtual false, abstract: false, final false
static inline int32_t asint(float_t  x) ;

/// @brief Method asint, addr 0x6424850, size 0x4, virtual false, abstract: false, final false
static inline int32_t asint(uint32_t  x) ;

/// @brief Method aslong, addr 0x642490c, size 0x8, virtual false, abstract: false, final false
static inline int64_t aslong(double_t  x) ;

/// @brief Method aslong, addr 0x6424908, size 0x4, virtual false, abstract: false, final false
static inline int64_t aslong(uint64_t  x) ;

/// @brief Method asuint, addr 0x64248c8, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 asuint(::Unity::Mathematics::float2  x) ;

/// @brief Method asuint, addr 0x64248b0, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 asuint(::Unity::Mathematics::int2  x) ;

/// @brief Method asuint, addr 0x64248d8, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 asuint(::Unity::Mathematics::float3  x) ;

/// @brief Method asuint, addr 0x64248b4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 asuint(::Unity::Mathematics::int3  x) ;

/// @brief Method asuint, addr 0x64248ec, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 asuint(::Unity::Mathematics::float4  x) ;

/// @brief Method asuint, addr 0x64248bc, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 asuint(::Unity::Mathematics::int4  x) ;

/// @brief Method asuint, addr 0x64248c0, size 0x8, virtual false, abstract: false, final false
static inline uint32_t asuint(float_t  x) ;

/// @brief Method asuint, addr 0x64248ac, size 0x4, virtual false, abstract: false, final false
static inline uint32_t asuint(int32_t  x) ;

/// @brief Method asulong, addr 0x6424918, size 0x8, virtual false, abstract: false, final false
static inline uint64_t asulong(double_t  x) ;

/// @brief Method asulong, addr 0x6424914, size 0x4, virtual false, abstract: false, final false
static inline uint64_t asulong(int64_t  x) ;

/// @brief Method atan, addr 0x6427a70, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 atan(::Unity::Mathematics::double2  x) ;

/// @brief Method atan, addr 0x6427b20, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 atan(::Unity::Mathematics::double3  x) ;

/// @brief Method atan, addr 0x6427c20, size 0x148, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 atan(::Unity::Mathematics::double4  x) ;

/// @brief Method atan, addr 0x64276fc, size 0xb8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 atan(::Unity::Mathematics::float2  x) ;

/// @brief Method atan, addr 0x64277b4, size 0x108, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 atan(::Unity::Mathematics::float3  x) ;

/// @brief Method atan, addr 0x64278bc, size 0x154, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 atan(::Unity::Mathematics::float4  x) ;

/// @brief Method atan, addr 0x6427a10, size 0x60, virtual false, abstract: false, final false
static inline double_t atan(double_t  x) ;

/// @brief Method atan, addr 0x6427694, size 0x68, virtual false, abstract: false, final false
static inline float_t atan(float_t  x) ;

/// @brief Method atan2, addr 0x64281bc, size 0xc8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 atan2(::Unity::Mathematics::double2  y, ::Unity::Mathematics::double2  x) ;

/// @brief Method atan2, addr 0x6428284, size 0x120, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 atan2(::Unity::Mathematics::double3  y, ::Unity::Mathematics::double3  x) ;

/// @brief Method atan2, addr 0x64283a4, size 0x178, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 atan2(::Unity::Mathematics::double4  y, ::Unity::Mathematics::double4  x) ;

/// @brief Method atan2, addr 0x6427dd8, size 0xd0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 atan2(::Unity::Mathematics::float2  y, ::Unity::Mathematics::float2  x) ;

/// @brief Method atan2, addr 0x6427ea8, size 0x128, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 atan2(::Unity::Mathematics::float3  y, ::Unity::Mathematics::float3  x) ;

/// @brief Method atan2, addr 0x6427fd0, size 0x184, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 atan2(::Unity::Mathematics::float4  y, ::Unity::Mathematics::float4  x) ;

/// @brief Method atan2, addr 0x6428154, size 0x68, virtual false, abstract: false, final false
static inline double_t atan2(double_t  y, double_t  x) ;

/// @brief Method atan2, addr 0x6427d68, size 0x70, virtual false, abstract: false, final false
static inline float_t atan2(float_t  y, float_t  x) ;

/// @brief Method back, addr 0x6438240, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 back() ;

/// @brief Method bitmask, addr 0x64249b0, size 0x28, virtual false, abstract: false, final false
static inline int32_t bitmask(::Unity::Mathematics::bool4  value) ;

/// @brief Method bool2, addr 0x6416ef8, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2 bool2(bool  v) ;

/// @brief Method bool2, addr 0x6416ed4, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2 bool2(bool  x, bool  y) ;

/// @brief Method bool2, addr 0x6416eec, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2 bool2(::Unity::Mathematics::bool2  xy) ;

/// @brief Method bool2x2, addr 0x6417214, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 bool2x2(::Unity::Mathematics::bool2  c0, ::Unity::Mathematics::bool2  c1) ;

/// @brief Method bool2x2, addr 0x641721c, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 bool2x2(bool  m00, bool  m01, bool  m10, bool  m11) ;

/// @brief Method bool2x2, addr 0x6417240, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 bool2x2(bool  v) ;

/// @brief Method bool2x3, addr 0x641735c, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x3 bool2x3(::Unity::Mathematics::bool2  c0, ::Unity::Mathematics::bool2  c1, ::Unity::Mathematics::bool2  c2) ;

/// @brief Method bool2x3, addr 0x6417370, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x3 bool2x3(bool  m00, bool  m01, bool  m02, bool  m10, bool  m11, bool  m12) ;

/// @brief Method bool2x3, addr 0x64173a8, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x3 bool2x3(bool  v) ;

/// @brief Method bool2x4, addr 0x641753c, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x4 bool2x4(::Unity::Mathematics::bool2  c0, ::Unity::Mathematics::bool2  c1, ::Unity::Mathematics::bool2  c2, ::Unity::Mathematics::bool2  c3) ;

/// @brief Method bool2x4, addr 0x6417558, size 0x48, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x4 bool2x4(bool  m00, bool  m01, bool  m02, bool  m03, bool  m10, bool  m11, bool  m12, bool  m13) ;

/// @brief Method bool2x4, addr 0x64175a0, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x4 bool2x4(bool  v) ;

/// @brief Method bool3, addr 0x64177ec, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 bool3(bool  v) ;

/// @brief Method bool3, addr 0x641777c, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 bool3(bool  x, bool  y, bool  z) ;

/// @brief Method bool3, addr 0x64177a0, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 bool3(bool  x, ::Unity::Mathematics::bool2  yz) ;

/// @brief Method bool3, addr 0x64177bc, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 bool3(::Unity::Mathematics::bool2  xy, bool  z) ;

/// @brief Method bool3, addr 0x64177dc, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 bool3(::Unity::Mathematics::bool3  xyz) ;

/// @brief Method bool3x2, addr 0x6417b60, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x2 bool3x2(::Unity::Mathematics::bool3  c0, ::Unity::Mathematics::bool3  c1) ;

/// @brief Method bool3x2, addr 0x6417b68, size 0x54, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x2 bool3x2(bool  m00, bool  m01, bool  m10, bool  m11, bool  m20, bool  m21) ;

/// @brief Method bool3x2, addr 0x6417bbc, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x2 bool3x2(bool  v) ;

/// @brief Method bool3x3, addr 0x6417d60, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 bool3x3(::Unity::Mathematics::bool3  c0, ::Unity::Mathematics::bool3  c1, ::Unity::Mathematics::bool3  c2) ;

/// @brief Method bool3x3, addr 0x6417d94, size 0x7c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 bool3x3(bool  m00, bool  m01, bool  m02, bool  m10, bool  m11, bool  m12, bool  m20, bool  m21, bool  m22) ;

/// @brief Method bool3x3, addr 0x6417e10, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 bool3x3(bool  v) ;

/// @brief Method bool3x4, addr 0x64180a0, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 bool3x4(::Unity::Mathematics::bool3  c0, ::Unity::Mathematics::bool3  c1, ::Unity::Mathematics::bool3  c2, ::Unity::Mathematics::bool3  c3) ;

/// @brief Method bool3x4, addr 0x64180e4, size 0xa8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 bool3x4(bool  m00, bool  m01, bool  m02, bool  m03, bool  m10, bool  m11, bool  m12, bool  m13, bool  m20, bool  m21, bool  m22, bool  m23) ;

/// @brief Method bool3x4, addr 0x641818c, size 0x48, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 bool3x4(bool  v) ;

/// @brief Method bool4, addr 0x6418620, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4 bool4(bool  v) ;

/// @brief Method bool4, addr 0x6418528, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4 bool4(bool  x, bool  y, bool  z, bool  w) ;

/// @brief Method bool4, addr 0x641855c, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4 bool4(bool  x, bool  y, ::Unity::Mathematics::bool2  zw) ;

/// @brief Method bool4, addr 0x641857c, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4 bool4(bool  x, ::Unity::Mathematics::bool2  yz, bool  w) ;

/// @brief Method bool4, addr 0x64185a0, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4 bool4(bool  x, ::Unity::Mathematics::bool3  yzw) ;

/// @brief Method bool4, addr 0x64185b4, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4 bool4(::Unity::Mathematics::bool2  xy, bool  z, bool  w) ;

/// @brief Method bool4, addr 0x64185e0, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4 bool4(::Unity::Mathematics::bool2  xy, ::Unity::Mathematics::bool2  zw) ;

/// @brief Method bool4, addr 0x64185f8, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4 bool4(::Unity::Mathematics::bool3  xyz, bool  w) ;

/// @brief Method bool4, addr 0x6418618, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4 bool4(::Unity::Mathematics::bool4  xyzw) ;

/// @brief Method bool4x2, addr 0x64189cc, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x2 bool4x2(::Unity::Mathematics::bool4  c0, ::Unity::Mathematics::bool4  c1) ;

/// @brief Method bool4x2, addr 0x64189d4, size 0x5c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x2 bool4x2(bool  m00, bool  m01, bool  m10, bool  m11, bool  m20, bool  m21, bool  m30, bool  m31) ;

/// @brief Method bool4x2, addr 0x6418a30, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x2 bool4x2(bool  v) ;

/// @brief Method bool4x3, addr 0x6418c4c, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x3 bool4x3(::Unity::Mathematics::bool4  c0, ::Unity::Mathematics::bool4  c1, ::Unity::Mathematics::bool4  c2) ;

/// @brief Method bool4x3, addr 0x6418c58, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x3 bool4x3(bool  m00, bool  m01, bool  m02, bool  m10, bool  m11, bool  m12, bool  m20, bool  m21, bool  m22, bool  m30, bool  m31, bool  m32) ;

/// @brief Method bool4x3, addr 0x6418ce8, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x3 bool4x3(bool  v) ;

/// @brief Method bool4x4, addr 0x6418fbc, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x4 bool4x4(::Unity::Mathematics::bool4  c0, ::Unity::Mathematics::bool4  c1, ::Unity::Mathematics::bool4  c2, ::Unity::Mathematics::bool4  c3) ;

/// @brief Method bool4x4, addr 0x6418fcc, size 0xc8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x4 bool4x4(bool  m00, bool  m01, bool  m02, bool  m03, bool  m10, bool  m11, bool  m12, bool  m13, bool  m20, bool  m21, bool  m22, bool  m23, bool  m30, bool  m31, bool  m32, bool  m33) ;

/// @brief Method bool4x4, addr 0x6419094, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x4 bool4x4(bool  v) ;

/// @brief Method ceil, addr 0x642b75c, size 0x9c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 ceil(::Unity::Mathematics::double2  x) ;

/// @brief Method ceil, addr 0x642b7f8, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 ceil(::Unity::Mathematics::double3  x) ;

/// @brief Method ceil, addr 0x642b8d8, size 0x11c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 ceil(::Unity::Mathematics::double4  x) ;

/// @brief Method ceil, addr 0x642b464, size 0x9c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 ceil(::Unity::Mathematics::float2  x) ;

/// @brief Method ceil, addr 0x642b500, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 ceil(::Unity::Mathematics::float3  x) ;

/// @brief Method ceil, addr 0x642b5e0, size 0x11c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 ceil(::Unity::Mathematics::float4  x) ;

/// @brief Method ceil, addr 0x642b6fc, size 0x60, virtual false, abstract: false, final false
static inline double_t ceil(double_t  x) ;

/// @brief Method ceil, addr 0x642b404, size 0x60, virtual false, abstract: false, final false
static inline float_t ceil(float_t  x) ;

/// @brief Method ceillog2, addr 0x6436598, size 0x7c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 ceillog2(::Unity::Mathematics::int2  x) ;

/// @brief Method ceillog2, addr 0x64367f0, size 0x7c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 ceillog2(::Unity::Mathematics::uint2  x) ;

/// @brief Method ceillog2, addr 0x6436614, size 0xb4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 ceillog2(::Unity::Mathematics::int3  x) ;

/// @brief Method ceillog2, addr 0x643686c, size 0xb4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 ceillog2(::Unity::Mathematics::uint3  x) ;

/// @brief Method ceillog2, addr 0x64366c8, size 0xf0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 ceillog2(::Unity::Mathematics::int4  x) ;

/// @brief Method ceillog2, addr 0x6436920, size 0xf0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 ceillog2(::Unity::Mathematics::uint4  x) ;

/// @brief Method ceillog2, addr 0x6436560, size 0x38, virtual false, abstract: false, final false
static inline int32_t ceillog2(int32_t  x) ;

/// @brief Method ceillog2, addr 0x64367b8, size 0x38, virtual false, abstract: false, final false
static inline int32_t ceillog2(uint32_t  x) ;

/// @brief Method ceilpow2, addr 0x6436118, size 0x88, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 ceilpow2(::Unity::Mathematics::int2  x) ;

/// @brief Method ceilpow2, addr 0x64361a0, size 0xa4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 ceilpow2(::Unity::Mathematics::int3  x) ;

/// @brief Method ceilpow2, addr 0x6436244, size 0x104, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 ceilpow2(::Unity::Mathematics::int4  x) ;

/// @brief Method ceilpow2, addr 0x6436368, size 0x6c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 ceilpow2(::Unity::Mathematics::uint2  x) ;

/// @brief Method ceilpow2, addr 0x64363d4, size 0x94, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 ceilpow2(::Unity::Mathematics::uint3  x) ;

/// @brief Method ceilpow2, addr 0x6436468, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 ceilpow2(::Unity::Mathematics::uint4  x) ;

/// @brief Method ceilpow2, addr 0x64360f8, size 0x20, virtual false, abstract: false, final false
static inline int32_t ceilpow2(int32_t  x) ;

/// @brief Method ceilpow2, addr 0x6436518, size 0x24, virtual false, abstract: false, final false
static inline int64_t ceilpow2(int64_t  x) ;

/// @brief Method ceilpow2, addr 0x6436348, size 0x20, virtual false, abstract: false, final false
static inline uint32_t ceilpow2(uint32_t  x) ;

/// @brief Method ceilpow2, addr 0x643653c, size 0x24, virtual false, abstract: false, final false
static inline uint64_t ceilpow2(uint64_t  x) ;

/// @brief Method chgsign, addr 0x6437de4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 chgsign(::Unity::Mathematics::float2  x, ::Unity::Mathematics::float2  y) ;

/// @brief Method chgsign, addr 0x6437e1c, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 chgsign(::Unity::Mathematics::float3  x, ::Unity::Mathematics::float3  y) ;

/// @brief Method chgsign, addr 0x6437e68, size 0x6c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 chgsign(::Unity::Mathematics::float4  x, ::Unity::Mathematics::float4  y) ;

/// @brief Method chgsign, addr 0x6437dcc, size 0x18, virtual false, abstract: false, final false
static inline float_t chgsign(float_t  x, float_t  y) ;

/// @brief Method clamp, addr 0x6426214, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 clamp(::Unity::Mathematics::double2  valueToClamp, ::Unity::Mathematics::double2  lowerBound, ::Unity::Mathematics::double2  upperBound) ;

/// @brief Method clamp, addr 0x6426258, size 0x88, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 clamp(::Unity::Mathematics::double3  valueToClamp, ::Unity::Mathematics::double3  lowerBound, ::Unity::Mathematics::double3  upperBound) ;

/// @brief Method clamp, addr 0x64262e0, size 0xb4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 clamp(::Unity::Mathematics::double4  valueToClamp, ::Unity::Mathematics::double4  lowerBound, ::Unity::Mathematics::double4  upperBound) ;

/// @brief Method clamp, addr 0x64260b4, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 clamp(::Unity::Mathematics::float2  valueToClamp, ::Unity::Mathematics::float2  lowerBound, ::Unity::Mathematics::float2  upperBound) ;

/// @brief Method clamp, addr 0x64260f8, size 0x78, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 clamp(::Unity::Mathematics::float3  valueToClamp, ::Unity::Mathematics::float3  lowerBound, ::Unity::Mathematics::float3  upperBound) ;

/// @brief Method clamp, addr 0x6426170, size 0x74, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 clamp(::Unity::Mathematics::float4  valueToClamp, ::Unity::Mathematics::float4  lowerBound, ::Unity::Mathematics::float4  upperBound) ;

/// @brief Method clamp, addr 0x6425e90, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 clamp(::Unity::Mathematics::int2  valueToClamp, ::Unity::Mathematics::int2  lowerBound, ::Unity::Mathematics::int2  upperBound) ;

/// @brief Method clamp, addr 0x6425ec4, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 clamp(::Unity::Mathematics::int3  valueToClamp, ::Unity::Mathematics::int3  lowerBound, ::Unity::Mathematics::int3  upperBound) ;

/// @brief Method clamp, addr 0x6425f08, size 0x64, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 clamp(::Unity::Mathematics::int4  valueToClamp, ::Unity::Mathematics::int4  lowerBound, ::Unity::Mathematics::int4  upperBound) ;

/// @brief Method clamp, addr 0x6425f80, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 clamp(::Unity::Mathematics::uint2  valueToClamp, ::Unity::Mathematics::uint2  lowerBound, ::Unity::Mathematics::uint2  upperBound) ;

/// @brief Method clamp, addr 0x6425fb4, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 clamp(::Unity::Mathematics::uint3  valueToClamp, ::Unity::Mathematics::uint3  lowerBound, ::Unity::Mathematics::uint3  upperBound) ;

/// @brief Method clamp, addr 0x6425ff8, size 0x64, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 clamp(::Unity::Mathematics::uint4  valueToClamp, ::Unity::Mathematics::uint4  lowerBound, ::Unity::Mathematics::uint4  upperBound) ;

/// @brief Method clamp, addr 0x64261e4, size 0x30, virtual false, abstract: false, final false
static inline double_t clamp(double_t  valueToClamp, double_t  lowerBound, double_t  upperBound) ;

/// @brief Method clamp, addr 0x6426084, size 0x30, virtual false, abstract: false, final false
static inline float_t clamp(float_t  valueToClamp, float_t  lowerBound, float_t  upperBound) ;

/// @brief Method clamp, addr 0x6425e7c, size 0x14, virtual false, abstract: false, final false
static inline int32_t clamp(int32_t  valueToClamp, int32_t  lowerBound, int32_t  upperBound) ;

/// @brief Method clamp, addr 0x642605c, size 0x14, virtual false, abstract: false, final false
static inline int64_t clamp(int64_t  valueToClamp, int64_t  lowerBound, int64_t  upperBound) ;

/// @brief Method clamp, addr 0x6425f6c, size 0x14, virtual false, abstract: false, final false
static inline uint32_t clamp(uint32_t  valueToClamp, uint32_t  lowerBound, uint32_t  upperBound) ;

/// @brief Method clamp, addr 0x6426070, size 0x14, virtual false, abstract: false, final false
static inline uint64_t clamp(uint64_t  valueToClamp, uint64_t  lowerBound, uint64_t  upperBound) ;

/// @brief Method cmax, addr 0x64372e0, size 0x1c, virtual false, abstract: false, final false
static inline double_t cmax(::Unity::Mathematics::double2  x) ;

/// @brief Method cmax, addr 0x64372fc, size 0x30, virtual false, abstract: false, final false
static inline double_t cmax(::Unity::Mathematics::double3  x) ;

/// @brief Method cmax, addr 0x643732c, size 0x44, virtual false, abstract: false, final false
static inline double_t cmax(::Unity::Mathematics::double4  x) ;

/// @brief Method cmax, addr 0x6437250, size 0x1c, virtual false, abstract: false, final false
static inline float_t cmax(::Unity::Mathematics::float2  x) ;

/// @brief Method cmax, addr 0x643726c, size 0x30, virtual false, abstract: false, final false
static inline float_t cmax(::Unity::Mathematics::float3  x) ;

/// @brief Method cmax, addr 0x643729c, size 0x44, virtual false, abstract: false, final false
static inline float_t cmax(::Unity::Mathematics::float4  x) ;

/// @brief Method cmax, addr 0x64371b8, size 0x10, virtual false, abstract: false, final false
static inline int32_t cmax(::Unity::Mathematics::int2  x) ;

/// @brief Method cmax, addr 0x64371c8, size 0x18, virtual false, abstract: false, final false
static inline int32_t cmax(::Unity::Mathematics::int3  x) ;

/// @brief Method cmax, addr 0x64371e0, size 0x24, virtual false, abstract: false, final false
static inline int32_t cmax(::Unity::Mathematics::int4  x) ;

/// @brief Method cmax, addr 0x6437204, size 0x10, virtual false, abstract: false, final false
static inline uint32_t cmax(::Unity::Mathematics::uint2  x) ;

/// @brief Method cmax, addr 0x6437214, size 0x18, virtual false, abstract: false, final false
static inline uint32_t cmax(::Unity::Mathematics::uint3  x) ;

/// @brief Method cmax, addr 0x643722c, size 0x24, virtual false, abstract: false, final false
static inline uint32_t cmax(::Unity::Mathematics::uint4  x) ;

/// @brief Method cmin, addr 0x6437128, size 0x1c, virtual false, abstract: false, final false
static inline double_t cmin(::Unity::Mathematics::double2  x) ;

/// @brief Method cmin, addr 0x6437144, size 0x30, virtual false, abstract: false, final false
static inline double_t cmin(::Unity::Mathematics::double3  x) ;

/// @brief Method cmin, addr 0x6437174, size 0x44, virtual false, abstract: false, final false
static inline double_t cmin(::Unity::Mathematics::double4  x) ;

/// @brief Method cmin, addr 0x6437098, size 0x1c, virtual false, abstract: false, final false
static inline float_t cmin(::Unity::Mathematics::float2  x) ;

/// @brief Method cmin, addr 0x64370b4, size 0x30, virtual false, abstract: false, final false
static inline float_t cmin(::Unity::Mathematics::float3  x) ;

/// @brief Method cmin, addr 0x64370e4, size 0x44, virtual false, abstract: false, final false
static inline float_t cmin(::Unity::Mathematics::float4  x) ;

/// @brief Method cmin, addr 0x6437000, size 0x10, virtual false, abstract: false, final false
static inline int32_t cmin(::Unity::Mathematics::int2  x) ;

/// @brief Method cmin, addr 0x6437010, size 0x18, virtual false, abstract: false, final false
static inline int32_t cmin(::Unity::Mathematics::int3  x) ;

/// @brief Method cmin, addr 0x6437028, size 0x24, virtual false, abstract: false, final false
static inline int32_t cmin(::Unity::Mathematics::int4  x) ;

/// @brief Method cmin, addr 0x643704c, size 0x10, virtual false, abstract: false, final false
static inline uint32_t cmin(::Unity::Mathematics::uint2  x) ;

/// @brief Method cmin, addr 0x643705c, size 0x18, virtual false, abstract: false, final false
static inline uint32_t cmin(::Unity::Mathematics::uint3  x) ;

/// @brief Method cmin, addr 0x6437074, size 0x24, virtual false, abstract: false, final false
static inline uint32_t cmin(::Unity::Mathematics::uint4  x) ;

/// @brief Method compress, addr 0x6437620, size 0x58, virtual false, abstract: false, final false
static inline int32_t compress(float_t*  output, int32_t  index, ::Unity::Mathematics::float4  val, ::Unity::Mathematics::bool4  mask) ;

/// @brief Method compress, addr 0x6437560, size 0x60, virtual false, abstract: false, final false
static inline int32_t compress(int32_t*  output, int32_t  index, ::Unity::Mathematics::int4  val, ::Unity::Mathematics::bool4  mask) ;

/// @brief Method compress, addr 0x64375c0, size 0x60, virtual false, abstract: false, final false
static inline int32_t compress(uint32_t*  output, int32_t  index, ::Unity::Mathematics::uint4  val, ::Unity::Mathematics::bool4  mask) ;

/// @brief Method conjugate, addr 0x643fc24, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::quaternion conjugate(::Unity::Mathematics::quaternion  q) ;

/// @brief Method cos, addr 0x64288f8, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 cos(::Unity::Mathematics::double2  x) ;

/// @brief Method cos, addr 0x64289a8, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 cos(::Unity::Mathematics::double3  x) ;

/// @brief Method cos, addr 0x6428aa8, size 0x148, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 cos(::Unity::Mathematics::double4  x) ;

/// @brief Method cos, addr 0x6428584, size 0xb8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 cos(::Unity::Mathematics::float2  x) ;

/// @brief Method cos, addr 0x642863c, size 0x108, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 cos(::Unity::Mathematics::float3  x) ;

/// @brief Method cos, addr 0x6428744, size 0x154, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 cos(::Unity::Mathematics::float4  x) ;

/// @brief Method cos, addr 0x6428898, size 0x60, virtual false, abstract: false, final false
static inline double_t cos(double_t  x) ;

/// @brief Method cos, addr 0x642851c, size 0x68, virtual false, abstract: false, final false
static inline float_t cos(float_t  x) ;

/// @brief Method cosh, addr 0x6428fcc, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 cosh(::Unity::Mathematics::double2  x) ;

/// @brief Method cosh, addr 0x642907c, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 cosh(::Unity::Mathematics::double3  x) ;

/// @brief Method cosh, addr 0x642917c, size 0x148, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 cosh(::Unity::Mathematics::double4  x) ;

/// @brief Method cosh, addr 0x6428c58, size 0xb8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 cosh(::Unity::Mathematics::float2  x) ;

/// @brief Method cosh, addr 0x6428d10, size 0x108, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 cosh(::Unity::Mathematics::float3  x) ;

/// @brief Method cosh, addr 0x6428e18, size 0x154, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 cosh(::Unity::Mathematics::float4  x) ;

/// @brief Method cosh, addr 0x6428f6c, size 0x60, virtual false, abstract: false, final false
static inline double_t cosh(double_t  x) ;

/// @brief Method cosh, addr 0x6428bf0, size 0x68, virtual false, abstract: false, final false
static inline float_t cosh(float_t  x) ;

/// @brief Method countbits, addr 0x6434bd4, size 0x88, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 countbits(::Unity::Mathematics::int2  x) ;

/// @brief Method countbits, addr 0x6434e00, size 0x88, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 countbits(::Unity::Mathematics::uint2  x) ;

/// @brief Method countbits, addr 0x6434c5c, size 0xac, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 countbits(::Unity::Mathematics::int3  x) ;

/// @brief Method countbits, addr 0x6434e88, size 0xac, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 countbits(::Unity::Mathematics::uint3  x) ;

/// @brief Method countbits, addr 0x6434d08, size 0xe4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 countbits(::Unity::Mathematics::int4  x) ;

/// @brief Method countbits, addr 0x6434f34, size 0xe4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 countbits(::Unity::Mathematics::uint4  x) ;

/// @brief Method countbits, addr 0x6434bc0, size 0x14, virtual false, abstract: false, final false
static inline int32_t countbits(int32_t  x) ;

/// @brief Method countbits, addr 0x643502c, size 0x14, virtual false, abstract: false, final false
static inline int32_t countbits(int64_t  x) ;

/// @brief Method countbits, addr 0x6434dec, size 0x14, virtual false, abstract: false, final false
static inline int32_t countbits(uint32_t  x) ;

/// @brief Method countbits, addr 0x6435018, size 0x14, virtual false, abstract: false, final false
static inline int32_t countbits(uint64_t  x) ;

/// @brief Method cross, addr 0x6432b1c, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 cross(::Unity::Mathematics::double3  x, ::Unity::Mathematics::double3  y) ;

/// @brief Method cross, addr 0x6432af4, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 cross(::Unity::Mathematics::float3  x, ::Unity::Mathematics::float3  y) ;

/// @brief Method csum, addr 0x64373fc, size 0x8, virtual false, abstract: false, final false
static inline double_t csum(::Unity::Mathematics::double2  x) ;

/// @brief Method csum, addr 0x6437404, size 0xc, virtual false, abstract: false, final false
static inline double_t csum(::Unity::Mathematics::double3  x) ;

/// @brief Method csum, addr 0x6437410, size 0x10, virtual false, abstract: false, final false
static inline double_t csum(::Unity::Mathematics::double4  x) ;

/// @brief Method csum, addr 0x64373d8, size 0x8, virtual false, abstract: false, final false
static inline float_t csum(::Unity::Mathematics::float2  x) ;

/// @brief Method csum, addr 0x64373e0, size 0xc, virtual false, abstract: false, final false
static inline float_t csum(::Unity::Mathematics::float3  x) ;

/// @brief Method csum, addr 0x64373ec, size 0x10, virtual false, abstract: false, final false
static inline float_t csum(::Unity::Mathematics::float4  x) ;

/// @brief Method csum, addr 0x6437370, size 0xc, virtual false, abstract: false, final false
static inline int32_t csum(::Unity::Mathematics::int2  x) ;

/// @brief Method csum, addr 0x643737c, size 0x10, virtual false, abstract: false, final false
static inline int32_t csum(::Unity::Mathematics::int3  x) ;

/// @brief Method csum, addr 0x643738c, size 0x18, virtual false, abstract: false, final false
static inline int32_t csum(::Unity::Mathematics::int4  x) ;

/// @brief Method csum, addr 0x64373a4, size 0xc, virtual false, abstract: false, final false
static inline uint32_t csum(::Unity::Mathematics::uint2  x) ;

/// @brief Method csum, addr 0x64373b0, size 0x10, virtual false, abstract: false, final false
static inline uint32_t csum(::Unity::Mathematics::uint3  x) ;

/// @brief Method csum, addr 0x64373c0, size 0x18, virtual false, abstract: false, final false
static inline uint32_t csum(::Unity::Mathematics::uint4  x) ;

/// @brief Method decompose, addr 0x6416bf4, size 0x108, virtual false, abstract: false, final false
static inline void decompose(::Unity::Mathematics::AffineTransform  a, ::ByRef<::Unity::Mathematics::float3>  translation, ::ByRef<::Unity::Mathematics::quaternion>  rotation, ::ByRef<::Unity::Mathematics::float3>  scale) ;

/// @brief Method degrees, addr 0x6436fb8, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 degrees(::Unity::Mathematics::double2  x) ;

/// @brief Method degrees, addr 0x6436fcc, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 degrees(::Unity::Mathematics::double3  x) ;

/// @brief Method degrees, addr 0x6436fe4, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 degrees(::Unity::Mathematics::double4  x) ;

/// @brief Method degrees, addr 0x6436f60, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 degrees(::Unity::Mathematics::float2  x) ;

/// @brief Method degrees, addr 0x6436f74, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 degrees(::Unity::Mathematics::float3  x) ;

/// @brief Method degrees, addr 0x6436f8c, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 degrees(::Unity::Mathematics::float4  x) ;

/// @brief Method degrees, addr 0x6436fa8, size 0x10, virtual false, abstract: false, final false
static inline double_t degrees(double_t  x) ;

/// @brief Method degrees, addr 0x6436f50, size 0x10, virtual false, abstract: false, final false
static inline float_t degrees(float_t  x) ;

/// @brief Method determinant, addr 0x64199fc, size 0x10, virtual false, abstract: false, final false
static inline double_t determinant(::Unity::Mathematics::double2x2  m) ;

/// @brief Method determinant, addr 0x641ad18, size 0x54, virtual false, abstract: false, final false
static inline double_t determinant(::Unity::Mathematics::double3x3  m) ;

/// @brief Method determinant, addr 0x641cd2c, size 0xe8, virtual false, abstract: false, final false
static inline double_t determinant(::Unity::Mathematics::double4x4  m) ;

/// @brief Method determinant, addr 0x641d6e0, size 0x10, virtual false, abstract: false, final false
static inline float_t determinant(::Unity::Mathematics::float2x2  m) ;

/// @brief Method determinant, addr 0x641e804, size 0x54, virtual false, abstract: false, final false
static inline float_t determinant(::Unity::Mathematics::float3x3  m) ;

/// @brief Method determinant, addr 0x64203b4, size 0xe8, virtual false, abstract: false, final false
static inline float_t determinant(::Unity::Mathematics::float4x4  m) ;

/// @brief Method determinant, addr 0x642176c, size 0x18, virtual false, abstract: false, final false
static inline int32_t determinant(::Unity::Mathematics::int2x2  m) ;

/// @brief Method determinant, addr 0x6422ac4, size 0x4c, virtual false, abstract: false, final false
static inline int32_t determinant(::Unity::Mathematics::int3x3  m) ;

/// @brief Method determinant, addr 0x6424564, size 0xc4, virtual false, abstract: false, final false
static inline int32_t determinant(::Unity::Mathematics::int4x4  m) ;

/// @brief Method distance, addr 0x6432818, size 0x88, virtual false, abstract: false, final false
static inline double_t distance(::Unity::Mathematics::double2  x, ::Unity::Mathematics::double2  y) ;

/// @brief Method distance, addr 0x64328a0, size 0xa4, virtual false, abstract: false, final false
static inline double_t distance(::Unity::Mathematics::double3  x, ::Unity::Mathematics::double3  y) ;

/// @brief Method distance, addr 0x6432944, size 0xc0, virtual false, abstract: false, final false
static inline double_t distance(::Unity::Mathematics::double4  x, ::Unity::Mathematics::double4  y) ;

/// @brief Method distance, addr 0x6432810, size 0x8, virtual false, abstract: false, final false
static inline double_t distance(double_t  x, double_t  y) ;

/// @brief Method distance, addr 0x6432624, size 0x88, virtual false, abstract: false, final false
static inline float_t distance(::Unity::Mathematics::float2  x, ::Unity::Mathematics::float2  y) ;

/// @brief Method distance, addr 0x64326ac, size 0xa4, virtual false, abstract: false, final false
static inline float_t distance(::Unity::Mathematics::float3  x, ::Unity::Mathematics::float3  y) ;

/// @brief Method distance, addr 0x6432750, size 0xc0, virtual false, abstract: false, final false
static inline float_t distance(::Unity::Mathematics::float4  x, ::Unity::Mathematics::float4  y) ;

/// @brief Method distance, addr 0x643261c, size 0x8, virtual false, abstract: false, final false
static inline float_t distance(float_t  x, float_t  y) ;

/// @brief Method distancesq, addr 0x6432a88, size 0x18, virtual false, abstract: false, final false
static inline double_t distancesq(::Unity::Mathematics::double2  x, ::Unity::Mathematics::double2  y) ;

/// @brief Method distancesq, addr 0x6432aa0, size 0x24, virtual false, abstract: false, final false
static inline double_t distancesq(::Unity::Mathematics::double3  x, ::Unity::Mathematics::double3  y) ;

/// @brief Method distancesq, addr 0x6432ac4, size 0x30, virtual false, abstract: false, final false
static inline double_t distancesq(::Unity::Mathematics::double4  x, ::Unity::Mathematics::double4  y) ;

/// @brief Method distancesq, addr 0x6432a7c, size 0xc, virtual false, abstract: false, final false
static inline double_t distancesq(double_t  x, double_t  y) ;

/// @brief Method distancesq, addr 0x6432a10, size 0x18, virtual false, abstract: false, final false
static inline float_t distancesq(::Unity::Mathematics::float2  x, ::Unity::Mathematics::float2  y) ;

/// @brief Method distancesq, addr 0x6432a28, size 0x24, virtual false, abstract: false, final false
static inline float_t distancesq(::Unity::Mathematics::float3  x, ::Unity::Mathematics::float3  y) ;

/// @brief Method distancesq, addr 0x6432a4c, size 0x30, virtual false, abstract: false, final false
static inline float_t distancesq(::Unity::Mathematics::float4  x, ::Unity::Mathematics::float4  y) ;

/// @brief Method distancesq, addr 0x6432a04, size 0xc, virtual false, abstract: false, final false
static inline float_t distancesq(float_t  x, float_t  y) ;

/// @brief Method dot, addr 0x64268a4, size 0x10, virtual false, abstract: false, final false
static inline double_t dot(::Unity::Mathematics::double2  x, ::Unity::Mathematics::double2  y) ;

/// @brief Method dot, addr 0x64268b4, size 0x18, virtual false, abstract: false, final false
static inline double_t dot(::Unity::Mathematics::double3  x, ::Unity::Mathematics::double3  y) ;

/// @brief Method dot, addr 0x64268cc, size 0x20, virtual false, abstract: false, final false
static inline double_t dot(::Unity::Mathematics::double4  x, ::Unity::Mathematics::double4  y) ;

/// @brief Method dot, addr 0x642689c, size 0x8, virtual false, abstract: false, final false
static inline double_t dot(double_t  x, double_t  y) ;

/// @brief Method dot, addr 0x643fc6c, size 0x20, virtual false, abstract: false, final false
static inline float_t dot(::Unity::Mathematics::quaternion  a, ::Unity::Mathematics::quaternion  b) ;

/// @brief Method dot, addr 0x6426854, size 0x10, virtual false, abstract: false, final false
static inline float_t dot(::Unity::Mathematics::float2  x, ::Unity::Mathematics::float2  y) ;

/// @brief Method dot, addr 0x6426864, size 0x18, virtual false, abstract: false, final false
static inline float_t dot(::Unity::Mathematics::float3  x, ::Unity::Mathematics::float3  y) ;

/// @brief Method dot, addr 0x642687c, size 0x20, virtual false, abstract: false, final false
static inline float_t dot(::Unity::Mathematics::float4  x, ::Unity::Mathematics::float4  y) ;

/// @brief Method dot, addr 0x642684c, size 0x8, virtual false, abstract: false, final false
static inline float_t dot(float_t  x, float_t  y) ;

/// @brief Method dot, addr 0x64267a4, size 0x14, virtual false, abstract: false, final false
static inline int32_t dot(::Unity::Mathematics::int2  x, ::Unity::Mathematics::int2  y) ;

/// @brief Method dot, addr 0x64267b8, size 0x18, virtual false, abstract: false, final false
static inline int32_t dot(::Unity::Mathematics::int3  x, ::Unity::Mathematics::int3  y) ;

/// @brief Method dot, addr 0x64267d0, size 0x24, virtual false, abstract: false, final false
static inline int32_t dot(::Unity::Mathematics::int4  x, ::Unity::Mathematics::int4  y) ;

/// @brief Method dot, addr 0x642679c, size 0x8, virtual false, abstract: false, final false
static inline int32_t dot(int32_t  x, int32_t  y) ;

/// @brief Method dot, addr 0x64267fc, size 0x14, virtual false, abstract: false, final false
static inline uint32_t dot(::Unity::Mathematics::uint2  x, ::Unity::Mathematics::uint2  y) ;

/// @brief Method dot, addr 0x6426810, size 0x18, virtual false, abstract: false, final false
static inline uint32_t dot(::Unity::Mathematics::uint3  x, ::Unity::Mathematics::uint3  y) ;

/// @brief Method dot, addr 0x6426828, size 0x24, virtual false, abstract: false, final false
static inline uint32_t dot(::Unity::Mathematics::uint4  x, ::Unity::Mathematics::uint4  y) ;

/// @brief Method dot, addr 0x64267f4, size 0x8, virtual false, abstract: false, final false
static inline uint32_t dot(uint32_t  x, uint32_t  y) ;

/// @brief Method double2, addr 0x641943c, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 double2(::Unity::Mathematics::bool2  v) ;

/// @brief Method double2, addr 0x6419584, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 double2(::Unity::Mathematics::float2  v) ;

/// @brief Method double2, addr 0x6419490, size 0x64, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 double2(::Unity::Mathematics::half  v) ;

/// @brief Method double2, addr 0x64194f4, size 0x84, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 double2(::Unity::Mathematics::half2  v) ;

/// @brief Method double2, addr 0x6419464, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 double2(::Unity::Mathematics::int2  v) ;

/// @brief Method double2, addr 0x6419480, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 double2(::Unity::Mathematics::uint2  v) ;

/// @brief Method double2, addr 0x6419424, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 double2(bool  v) ;

/// @brief Method double2, addr 0x641941c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 double2(double_t  v) ;

/// @brief Method double2, addr 0x6419578, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 double2(float_t  v) ;

/// @brief Method double2, addr 0x6419458, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 double2(int32_t  v) ;

/// @brief Method double2, addr 0x6419474, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 double2(uint32_t  v) ;

/// @brief Method double2, addr 0x6419414, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 double2(double_t  x, double_t  y) ;

/// @brief Method double2, addr 0x6419418, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 double2(::Unity::Mathematics::double2  xy) ;

/// @brief Method double2x2, addr 0x64198c8, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x2 double2x2(::Unity::Mathematics::double2  c0, ::Unity::Mathematics::double2  c1) ;

/// @brief Method double2x2, addr 0x64198cc, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x2 double2x2(double_t  m00, double_t  m01, double_t  m10, double_t  m11) ;

/// @brief Method double2x2, addr 0x641990c, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x2 double2x2(::Unity::Mathematics::bool2x2  v) ;

/// @brief Method double2x2, addr 0x64199ac, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x2 double2x2(::Unity::Mathematics::float2x2  v) ;

/// @brief Method double2x2, addr 0x641994c, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x2 double2x2(::Unity::Mathematics::int2x2  v) ;

/// @brief Method double2x2, addr 0x641997c, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x2 double2x2(::Unity::Mathematics::uint2x2  v) ;

/// @brief Method double2x2, addr 0x64198ec, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x2 double2x2(bool  v) ;

/// @brief Method double2x2, addr 0x64198dc, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x2 double2x2(double_t  v) ;

/// @brief Method double2x2, addr 0x6419998, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x2 double2x2(float_t  v) ;

/// @brief Method double2x2, addr 0x6419938, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x2 double2x2(int32_t  v) ;

/// @brief Method double2x2, addr 0x6419968, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x2 double2x2(uint32_t  v) ;

/// @brief Method double2x3, addr 0x6419b04, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x3 double2x3(::Unity::Mathematics::double2  c0, ::Unity::Mathematics::double2  c1, ::Unity::Mathematics::double2  c2) ;

/// @brief Method double2x3, addr 0x6419b14, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x3 double2x3(double_t  m00, double_t  m01, double_t  m02, double_t  m10, double_t  m11, double_t  m12) ;

/// @brief Method double2x3, addr 0x6419b54, size 0x48, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x3 double2x3(::Unity::Mathematics::bool2x3  v) ;

/// @brief Method double2x3, addr 0x6419c40, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x3 double2x3(::Unity::Mathematics::float2x3  v) ;

/// @brief Method double2x3, addr 0x6419bb0, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x3 double2x3(::Unity::Mathematics::int2x3  v) ;

/// @brief Method double2x3, addr 0x6419bf8, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x3 double2x3(::Unity::Mathematics::uint2x3  v) ;

/// @brief Method double2x3, addr 0x6419b34, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x3 double2x3(bool  v) ;

/// @brief Method double2x3, addr 0x6419b24, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x3 double2x3(double_t  v) ;

/// @brief Method double2x3, addr 0x6419c2c, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x3 double2x3(float_t  v) ;

/// @brief Method double2x3, addr 0x6419b9c, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x3 double2x3(int32_t  v) ;

/// @brief Method double2x3, addr 0x6419be4, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x3 double2x3(uint32_t  v) ;

/// @brief Method double2x4, addr 0x6419dc8, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x4 double2x4(::Unity::Mathematics::double2  c0, ::Unity::Mathematics::double2  c1, ::Unity::Mathematics::double2  c2, ::Unity::Mathematics::double2  c3) ;

/// @brief Method double2x4, addr 0x6419ddc, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x4 double2x4(double_t  m00, double_t  m01, double_t  m02, double_t  m03, double_t  m10, double_t  m11, double_t  m12, double_t  m13) ;

/// @brief Method double2x4, addr 0x6419e28, size 0x5c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x4 double2x4(::Unity::Mathematics::bool2x4  v) ;

/// @brief Method double2x4, addr 0x6419f54, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x4 double2x4(::Unity::Mathematics::float2x4  v) ;

/// @brief Method double2x4, addr 0x6419e9c, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x4 double2x4(::Unity::Mathematics::int2x4  v) ;

/// @brief Method double2x4, addr 0x6419ef8, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x4 double2x4(::Unity::Mathematics::uint2x4  v) ;

/// @brief Method double2x4, addr 0x6419e04, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x4 double2x4(bool  v) ;

/// @brief Method double2x4, addr 0x6419df0, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x4 double2x4(double_t  v) ;

/// @brief Method double2x4, addr 0x6419f3c, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x4 double2x4(float_t  v) ;

/// @brief Method double2x4, addr 0x6419e84, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x4 double2x4(int32_t  v) ;

/// @brief Method double2x4, addr 0x6419ee0, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x4 double2x4(uint32_t  v) ;

/// @brief Method double3, addr 0x641a174, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 double3(::Unity::Mathematics::bool3  v) ;

/// @brief Method double3, addr 0x641a348, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 double3(::Unity::Mathematics::float3  v) ;

/// @brief Method double3, addr 0x641a1e0, size 0x68, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 double3(::Unity::Mathematics::half  v) ;

/// @brief Method double3, addr 0x641a248, size 0xf0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 double3(::Unity::Mathematics::half3  v) ;

/// @brief Method double3, addr 0x641a1a8, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 double3(::Unity::Mathematics::int3  v) ;

/// @brief Method double3, addr 0x641a1cc, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 double3(::Unity::Mathematics::uint3  v) ;

/// @brief Method double3, addr 0x641a158, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 double3(bool  v) ;

/// @brief Method double3, addr 0x641a14c, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 double3(double_t  v) ;

/// @brief Method double3, addr 0x641a338, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 double3(float_t  v) ;

/// @brief Method double3, addr 0x641a198, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 double3(int32_t  v) ;

/// @brief Method double3, addr 0x641a1bc, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 double3(uint32_t  v) ;

/// @brief Method double3, addr 0x641a13c, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 double3(double_t  x, double_t  y, double_t  z) ;

/// @brief Method double3, addr 0x641a140, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 double3(double_t  x, ::Unity::Mathematics::double2  yz) ;

/// @brief Method double3, addr 0x641a144, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 double3(::Unity::Mathematics::double2  xy, double_t  z) ;

/// @brief Method double3, addr 0x641a148, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 double3(::Unity::Mathematics::double3  xyz) ;

/// @brief Method double3x2, addr 0x641a740, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x2 double3x2(::Unity::Mathematics::double3  c0, ::Unity::Mathematics::double3  c1) ;

/// @brief Method double3x2, addr 0x641a750, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x2 double3x2(double_t  m00, double_t  m01, double_t  m10, double_t  m11, double_t  m20, double_t  m21) ;

/// @brief Method double3x2, addr 0x641a790, size 0x48, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x2 double3x2(::Unity::Mathematics::bool3x2  v) ;

/// @brief Method double3x2, addr 0x641a87c, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x2 double3x2(::Unity::Mathematics::float3x2  v) ;

/// @brief Method double3x2, addr 0x641a7ec, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x2 double3x2(::Unity::Mathematics::int3x2  v) ;

/// @brief Method double3x2, addr 0x641a834, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x2 double3x2(::Unity::Mathematics::uint3x2  v) ;

/// @brief Method double3x2, addr 0x641a770, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x2 double3x2(bool  v) ;

/// @brief Method double3x2, addr 0x641a760, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x2 double3x2(double_t  v) ;

/// @brief Method double3x2, addr 0x641a868, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x2 double3x2(float_t  v) ;

/// @brief Method double3x2, addr 0x641a7d8, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x2 double3x2(int32_t  v) ;

/// @brief Method double3x2, addr 0x641a820, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x2 double3x2(uint32_t  v) ;

/// @brief Method double3x3, addr 0x641a9f8, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x3 double3x3(::Unity::Mathematics::double3  c0, ::Unity::Mathematics::double3  c1, ::Unity::Mathematics::double3  c2) ;

/// @brief Method double3x3, addr 0x641aa1c, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x3 double3x3(double_t  m00, double_t  m01, double_t  m02, double_t  m10, double_t  m11, double_t  m12, double_t  m20, double_t  m21, double_t  m22) ;

/// @brief Method double3x3, addr 0x641aa78, size 0x78, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x3 double3x3(::Unity::Mathematics::bool3x3  v) ;

/// @brief Method double3x3, addr 0x641abe4, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x3 double3x3(::Unity::Mathematics::float3x3  v) ;

/// @brief Method double3x3, addr 0x641ab0c, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x3 double3x3(::Unity::Mathematics::int3x3  v) ;

/// @brief Method double3x3, addr 0x641ab78, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x3 double3x3(::Unity::Mathematics::uint3x3  v) ;

/// @brief Method double3x3, addr 0x641aa50, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x3 double3x3(bool  v) ;

/// @brief Method double3x3, addr 0x641aa38, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x3 double3x3(double_t  v) ;

/// @brief Method double3x3, addr 0x641abc8, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x3 double3x3(float_t  v) ;

/// @brief Method double3x3, addr 0x641aaf0, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x3 double3x3(int32_t  v) ;

/// @brief Method double3x3, addr 0x641ab5c, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x3 double3x3(uint32_t  v) ;

/// @brief Method double3x4, addr 0x641af34, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x4 double3x4(::Unity::Mathematics::double3  c0, ::Unity::Mathematics::double3  c1, ::Unity::Mathematics::double3  c2, ::Unity::Mathematics::double3  c3) ;

/// @brief Method double3x4, addr 0x641af68, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x4 double3x4(double_t  m00, double_t  m01, double_t  m02, double_t  m03, double_t  m10, double_t  m11, double_t  m12, double_t  m13, double_t  m20, double_t  m21, double_t  m22, double_t  m23) ;

/// @brief Method double3x4, addr 0x641afe4, size 0x9c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x4 double3x4(::Unity::Mathematics::bool3x4  v) ;

/// @brief Method double3x4, addr 0x641b1a8, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x4 double3x4(::Unity::Mathematics::float3x4  v) ;

/// @brief Method double3x4, addr 0x641b0a0, size 0x64, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x4 double3x4(::Unity::Mathematics::int3x4  v) ;

/// @brief Method double3x4, addr 0x641b124, size 0x64, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x4 double3x4(::Unity::Mathematics::uint3x4  v) ;

/// @brief Method double3x4, addr 0x641afb8, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x4 double3x4(bool  v) ;

/// @brief Method double3x4, addr 0x641af9c, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x4 double3x4(double_t  v) ;

/// @brief Method double3x4, addr 0x641b188, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x4 double3x4(float_t  v) ;

/// @brief Method double3x4, addr 0x641b080, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x4 double3x4(int32_t  v) ;

/// @brief Method double3x4, addr 0x641b104, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x4 double3x4(uint32_t  v) ;

/// @brief Method double4, addr 0x641b528, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 double4(::Unity::Mathematics::bool4  v) ;

/// @brief Method double4, addr 0x641b76c, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 double4(::Unity::Mathematics::float4  v) ;

/// @brief Method double4, addr 0x641b5b4, size 0x6c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 double4(::Unity::Mathematics::half  v) ;

/// @brief Method double4, addr 0x641b620, size 0x138, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 double4(::Unity::Mathematics::half4  v) ;

/// @brief Method double4, addr 0x641b568, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 double4(::Unity::Mathematics::int4  v) ;

/// @brief Method double4, addr 0x641b598, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 double4(::Unity::Mathematics::uint4  v) ;

/// @brief Method double4, addr 0x641b508, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 double4(bool  v) ;

/// @brief Method double4, addr 0x641b4f8, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 double4(double_t  v) ;

/// @brief Method double4, addr 0x641b758, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 double4(float_t  v) ;

/// @brief Method double4, addr 0x641b554, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 double4(int32_t  v) ;

/// @brief Method double4, addr 0x641b584, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 double4(uint32_t  v) ;

/// @brief Method double4, addr 0x641b4d8, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 double4(double_t  x, double_t  y, double_t  z, double_t  w) ;

/// @brief Method double4, addr 0x641b4dc, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 double4(double_t  x, double_t  y, ::Unity::Mathematics::double2  zw) ;

/// @brief Method double4, addr 0x641b4e0, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 double4(double_t  x, ::Unity::Mathematics::double2  yz, double_t  w) ;

/// @brief Method double4, addr 0x641b4e4, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 double4(double_t  x, ::Unity::Mathematics::double3  yzw) ;

/// @brief Method double4, addr 0x641b4e8, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 double4(::Unity::Mathematics::double2  xy, double_t  z, double_t  w) ;

/// @brief Method double4, addr 0x641b4ec, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 double4(::Unity::Mathematics::double2  xy, ::Unity::Mathematics::double2  zw) ;

/// @brief Method double4, addr 0x641b4f0, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 double4(::Unity::Mathematics::double3  xyz, double_t  w) ;

/// @brief Method double4, addr 0x641b4f4, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 double4(::Unity::Mathematics::double4  xyzw) ;

/// @brief Method double4x2, addr 0x641bc30, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x2 double4x2(::Unity::Mathematics::double4  c0, ::Unity::Mathematics::double4  c1) ;

/// @brief Method double4x2, addr 0x641bc44, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x2 double4x2(double_t  m00, double_t  m01, double_t  m10, double_t  m11, double_t  m20, double_t  m21, double_t  m30, double_t  m31) ;

/// @brief Method double4x2, addr 0x641bc90, size 0x5c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x2 double4x2(::Unity::Mathematics::bool4x2  v) ;

/// @brief Method double4x2, addr 0x641bdbc, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x2 double4x2(::Unity::Mathematics::float4x2  v) ;

/// @brief Method double4x2, addr 0x641bd04, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x2 double4x2(::Unity::Mathematics::int4x2  v) ;

/// @brief Method double4x2, addr 0x641bd60, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x2 double4x2(::Unity::Mathematics::uint4x2  v) ;

/// @brief Method double4x2, addr 0x641bc6c, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x2 double4x2(bool  v) ;

/// @brief Method double4x2, addr 0x641bc58, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x2 double4x2(double_t  v) ;

/// @brief Method double4x2, addr 0x641bda4, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x2 double4x2(float_t  v) ;

/// @brief Method double4x2, addr 0x641bcec, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x2 double4x2(int32_t  v) ;

/// @brief Method double4x2, addr 0x641bd48, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x2 double4x2(uint32_t  v) ;

/// @brief Method double4x3, addr 0x641bfb4, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x3 double4x3(::Unity::Mathematics::double4  c0, ::Unity::Mathematics::double4  c1, ::Unity::Mathematics::double4  c2) ;

/// @brief Method double4x3, addr 0x641bfe0, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x3 double4x3(double_t  m00, double_t  m01, double_t  m02, double_t  m10, double_t  m11, double_t  m12, double_t  m20, double_t  m21, double_t  m22, double_t  m30, double_t  m31, double_t  m32) ;

/// @brief Method double4x3, addr 0x641c05c, size 0x84, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x3 double4x3(::Unity::Mathematics::bool4x3  v) ;

/// @brief Method double4x3, addr 0x641c208, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x3 double4x3(::Unity::Mathematics::float4x3  v) ;

/// @brief Method double4x3, addr 0x641c100, size 0x64, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x3 double4x3(::Unity::Mathematics::int4x3  v) ;

/// @brief Method double4x3, addr 0x641c184, size 0x64, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x3 double4x3(::Unity::Mathematics::uint4x3  v) ;

/// @brief Method double4x3, addr 0x641c030, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x3 double4x3(bool  v) ;

/// @brief Method double4x3, addr 0x641c014, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x3 double4x3(double_t  v) ;

/// @brief Method double4x3, addr 0x641c1e8, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x3 double4x3(float_t  v) ;

/// @brief Method double4x3, addr 0x641c0e0, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x3 double4x3(int32_t  v) ;

/// @brief Method double4x3, addr 0x641c164, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x3 double4x3(uint32_t  v) ;

/// @brief Method double4x4, addr 0x641c4d8, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x4 double4x4(::Unity::Mathematics::double4  c0, ::Unity::Mathematics::double4  c1, ::Unity::Mathematics::double4  c2, ::Unity::Mathematics::double4  c3) ;

/// @brief Method double4x4, addr 0x641c51c, size 0x54, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x4 double4x4(double_t  m00, double_t  m01, double_t  m02, double_t  m03, double_t  m10, double_t  m11, double_t  m12, double_t  m13, double_t  m20, double_t  m21, double_t  m22, double_t  m23, double_t  m30, double_t  m31, double_t  m32, double_t  m33) ;

/// @brief Method double4x4, addr 0x641c5c8, size 0xac, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x4 double4x4(::Unity::Mathematics::bool4x4  v) ;

/// @brief Method double4x4, addr 0x641c7f4, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x4 double4x4(::Unity::Mathematics::float4x4  v) ;

/// @brief Method double4x4, addr 0x641c69c, size 0x84, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x4 double4x4(::Unity::Mathematics::int4x4  v) ;

/// @brief Method double4x4, addr 0x641c748, size 0x84, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x4 double4x4(::Unity::Mathematics::uint4x4  v) ;

/// @brief Method double4x4, addr 0x641c594, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x4 double4x4(bool  v) ;

/// @brief Method double4x4, addr 0x641c570, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x4 double4x4(double_t  v) ;

/// @brief Method double4x4, addr 0x641c7cc, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x4 double4x4(float_t  v) ;

/// @brief Method double4x4, addr 0x641c674, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x4 double4x4(int32_t  v) ;

/// @brief Method double4x4, addr 0x641c720, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x4 double4x4(uint32_t  v) ;

/// @brief Method down, addr 0x6438220, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 down() ;

/// @brief Method exp, addr 0x642e2c0, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 exp(::Unity::Mathematics::double2  x) ;

/// @brief Method exp, addr 0x642e370, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 exp(::Unity::Mathematics::double3  x) ;

/// @brief Method exp, addr 0x642e470, size 0x148, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 exp(::Unity::Mathematics::double4  x) ;

/// @brief Method exp, addr 0x642df4c, size 0xb8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 exp(::Unity::Mathematics::float2  x) ;

/// @brief Method exp, addr 0x642e004, size 0x108, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 exp(::Unity::Mathematics::float3  x) ;

/// @brief Method exp, addr 0x642e10c, size 0x154, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 exp(::Unity::Mathematics::float4  x) ;

/// @brief Method exp, addr 0x6440114, size 0x1a0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::quaternion exp(::Unity::Mathematics::quaternion  q) ;

/// @brief Method exp, addr 0x642e260, size 0x60, virtual false, abstract: false, final false
static inline double_t exp(double_t  x) ;

/// @brief Method exp, addr 0x642dee4, size 0x68, virtual false, abstract: false, final false
static inline float_t exp(float_t  x) ;

/// @brief Method exp10, addr 0x642f138, size 0xc4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 exp10(::Unity::Mathematics::double2  x) ;

/// @brief Method exp10, addr 0x642f1fc, size 0x110, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 exp10(::Unity::Mathematics::double3  x) ;

/// @brief Method exp10, addr 0x642f30c, size 0x164, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 exp10(::Unity::Mathematics::double4  x) ;

/// @brief Method exp10, addr 0x642ed88, size 0xcc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 exp10(::Unity::Mathematics::float2  x) ;

/// @brief Method exp10, addr 0x642ee54, size 0x114, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 exp10(::Unity::Mathematics::float3  x) ;

/// @brief Method exp10, addr 0x642ef68, size 0x168, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 exp10(::Unity::Mathematics::float4  x) ;

/// @brief Method exp10, addr 0x642f0d0, size 0x68, virtual false, abstract: false, final false
static inline double_t exp10(double_t  x) ;

/// @brief Method exp10, addr 0x642ed14, size 0x74, virtual false, abstract: false, final false
static inline float_t exp10(float_t  x) ;

/// @brief Method exp2, addr 0x642e9dc, size 0xc4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 exp2(::Unity::Mathematics::double2  x) ;

/// @brief Method exp2, addr 0x642eaa0, size 0x110, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 exp2(::Unity::Mathematics::double3  x) ;

/// @brief Method exp2, addr 0x642ebb0, size 0x164, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 exp2(::Unity::Mathematics::double4  x) ;

/// @brief Method exp2, addr 0x642e62c, size 0xcc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 exp2(::Unity::Mathematics::float2  x) ;

/// @brief Method exp2, addr 0x642e6f8, size 0x114, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 exp2(::Unity::Mathematics::float3  x) ;

/// @brief Method exp2, addr 0x642e80c, size 0x168, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 exp2(::Unity::Mathematics::float4  x) ;

/// @brief Method exp2, addr 0x642e974, size 0x68, virtual false, abstract: false, final false
static inline double_t exp2(double_t  x) ;

/// @brief Method exp2, addr 0x642e5b8, size 0x74, virtual false, abstract: false, final false
static inline float_t exp2(float_t  x) ;

/// @brief Method f16tof32, addr 0x64376d0, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 f16tof32(::Unity::Mathematics::uint2  x) ;

/// @brief Method f16tof32, addr 0x6437780, size 0xf4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 f16tof32(::Unity::Mathematics::uint3  x) ;

/// @brief Method f16tof32, addr 0x6437874, size 0x148, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 f16tof32(::Unity::Mathematics::uint4  x) ;

/// @brief Method f16tof32, addr 0x6437678, size 0x58, virtual false, abstract: false, final false
static inline float_t f16tof32(uint32_t  x) ;

/// @brief Method f32tof16, addr 0x6437a18, size 0xbc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 f32tof16(::Unity::Mathematics::float2  x) ;

/// @brief Method f32tof16, addr 0x6437ad4, size 0xfc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 f32tof16(::Unity::Mathematics::float3  x) ;

/// @brief Method f32tof16, addr 0x6437bd0, size 0x144, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 f32tof16(::Unity::Mathematics::float4  x) ;

/// @brief Method f32tof16, addr 0x64379bc, size 0x5c, virtual false, abstract: false, final false
static inline uint32_t f32tof16(float_t  x) ;

/// @brief Method faceforward, addr 0x64343d4, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 faceforward(::Unity::Mathematics::double2  n, ::Unity::Mathematics::double2  i, ::Unity::Mathematics::double2  ng) ;

/// @brief Method faceforward, addr 0x64343f8, size 0x3c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 faceforward(::Unity::Mathematics::double3  n, ::Unity::Mathematics::double3  i, ::Unity::Mathematics::double3  ng) ;

/// @brief Method faceforward, addr 0x6434434, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 faceforward(::Unity::Mathematics::double4  n, ::Unity::Mathematics::double4  i, ::Unity::Mathematics::double4  ng) ;

/// @brief Method faceforward, addr 0x6434324, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 faceforward(::Unity::Mathematics::float2  n, ::Unity::Mathematics::float2  i, ::Unity::Mathematics::float2  ng) ;

/// @brief Method faceforward, addr 0x6434348, size 0x3c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 faceforward(::Unity::Mathematics::float3  n, ::Unity::Mathematics::float3  i, ::Unity::Mathematics::float3  ng) ;

/// @brief Method faceforward, addr 0x6434384, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 faceforward(::Unity::Mathematics::float4  n, ::Unity::Mathematics::float4  i, ::Unity::Mathematics::float4  ng) ;

/// @brief Method fastinverse, addr 0x641b218, size 0x7c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x4 fastinverse(::Unity::Mathematics::double3x4  m) ;

/// @brief Method fastinverse, addr 0x641cc94, size 0x98, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x4 fastinverse(::Unity::Mathematics::double4x4  m) ;

/// @brief Method fastinverse, addr 0x641ec3c, size 0x7c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x4 fastinverse(::Unity::Mathematics::float3x4  m) ;

/// @brief Method fastinverse, addr 0x642031c, size 0x98, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x4 fastinverse(::Unity::Mathematics::float4x4  m) ;

/// @brief Method float2, addr 0x641d148, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 float2(::Unity::Mathematics::bool2  v) ;

/// @brief Method float2, addr 0x641d288, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 float2(::Unity::Mathematics::double2  v) ;

/// @brief Method float2, addr 0x641d19c, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 float2(::Unity::Mathematics::half  v) ;

/// @brief Method float2, addr 0x641d1fc, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 float2(::Unity::Mathematics::half2  v) ;

/// @brief Method float2, addr 0x641d170, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 float2(::Unity::Mathematics::int2  v) ;

/// @brief Method float2, addr 0x641d18c, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 float2(::Unity::Mathematics::uint2  v) ;

/// @brief Method float2, addr 0x641d130, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 float2(bool  v) ;

/// @brief Method float2, addr 0x641d27c, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 float2(double_t  v) ;

/// @brief Method float2, addr 0x641d128, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 float2(float_t  v) ;

/// @brief Method float2, addr 0x641d164, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 float2(int32_t  v) ;

/// @brief Method float2, addr 0x641d180, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 float2(uint32_t  v) ;

/// @brief Method float2, addr 0x641d120, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 float2(float_t  x, float_t  y) ;

/// @brief Method float2, addr 0x641d124, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 float2(::Unity::Mathematics::float2  xy) ;

/// @brief Method float2x2, addr 0x641d5ac, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x2 float2x2(::Unity::Mathematics::float2  c0, ::Unity::Mathematics::float2  c1) ;

/// @brief Method float2x2, addr 0x641d5b0, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x2 float2x2(float_t  m00, float_t  m01, float_t  m10, float_t  m11) ;

/// @brief Method float2x2, addr 0x641d5f0, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x2 float2x2(::Unity::Mathematics::bool2x2  v) ;

/// @brief Method float2x2, addr 0x641d690, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x2 float2x2(::Unity::Mathematics::double2x2  v) ;

/// @brief Method float2x2, addr 0x641d630, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x2 float2x2(::Unity::Mathematics::int2x2  v) ;

/// @brief Method float2x2, addr 0x641d660, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x2 float2x2(::Unity::Mathematics::uint2x2  v) ;

/// @brief Method float2x2, addr 0x641d5d0, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x2 float2x2(bool  v) ;

/// @brief Method float2x2, addr 0x641d67c, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x2 float2x2(double_t  v) ;

/// @brief Method float2x2, addr 0x641d5c0, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x2 float2x2(float_t  v) ;

/// @brief Method float2x2, addr 0x641d61c, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x2 float2x2(int32_t  v) ;

/// @brief Method float2x2, addr 0x641d64c, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x2 float2x2(uint32_t  v) ;

/// @brief Method float2x3, addr 0x641d7a8, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x3 float2x3(::Unity::Mathematics::float2  c0, ::Unity::Mathematics::float2  c1, ::Unity::Mathematics::float2  c2) ;

/// @brief Method float2x3, addr 0x641d7b8, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x3 float2x3(float_t  m00, float_t  m01, float_t  m02, float_t  m10, float_t  m11, float_t  m12) ;

/// @brief Method float2x3, addr 0x641d7f8, size 0x48, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x3 float2x3(::Unity::Mathematics::bool2x3  v) ;

/// @brief Method float2x3, addr 0x641d8e4, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x3 float2x3(::Unity::Mathematics::double2x3  v) ;

/// @brief Method float2x3, addr 0x641d854, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x3 float2x3(::Unity::Mathematics::int2x3  v) ;

/// @brief Method float2x3, addr 0x641d89c, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x3 float2x3(::Unity::Mathematics::uint2x3  v) ;

/// @brief Method float2x3, addr 0x641d7d8, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x3 float2x3(bool  v) ;

/// @brief Method float2x3, addr 0x641d8d0, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x3 float2x3(double_t  v) ;

/// @brief Method float2x3, addr 0x641d7c8, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x3 float2x3(float_t  v) ;

/// @brief Method float2x3, addr 0x641d840, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x3 float2x3(int32_t  v) ;

/// @brief Method float2x3, addr 0x641d888, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x3 float2x3(uint32_t  v) ;

/// @brief Method float2x4, addr 0x641da18, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x4 float2x4(::Unity::Mathematics::float2  c0, ::Unity::Mathematics::float2  c1, ::Unity::Mathematics::float2  c2, ::Unity::Mathematics::float2  c3) ;

/// @brief Method float2x4, addr 0x641da2c, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x4 float2x4(float_t  m00, float_t  m01, float_t  m02, float_t  m03, float_t  m10, float_t  m11, float_t  m12, float_t  m13) ;

/// @brief Method float2x4, addr 0x641da70, size 0x5c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x4 float2x4(::Unity::Mathematics::bool2x4  v) ;

/// @brief Method float2x4, addr 0x641db84, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x4 float2x4(::Unity::Mathematics::double2x4  v) ;

/// @brief Method float2x4, addr 0x641dadc, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x4 float2x4(::Unity::Mathematics::int2x4  v) ;

/// @brief Method float2x4, addr 0x641db30, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x4 float2x4(::Unity::Mathematics::uint2x4  v) ;

/// @brief Method float2x4, addr 0x641da4c, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x4 float2x4(bool  v) ;

/// @brief Method float2x4, addr 0x641db74, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x4 float2x4(double_t  v) ;

/// @brief Method float2x4, addr 0x641da40, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x4 float2x4(float_t  v) ;

/// @brief Method float2x4, addr 0x641dacc, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x4 float2x4(int32_t  v) ;

/// @brief Method float2x4, addr 0x641db20, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x4 float2x4(uint32_t  v) ;

/// @brief Method float3, addr 0x641dd28, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 float3(::Unity::Mathematics::bool3  v) ;

/// @brief Method float3, addr 0x641ded8, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 float3(::Unity::Mathematics::double3  v) ;

/// @brief Method float3, addr 0x641dd94, size 0x64, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 float3(::Unity::Mathematics::half  v) ;

/// @brief Method float3, addr 0x641ddf8, size 0xd0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 float3(::Unity::Mathematics::half3  v) ;

/// @brief Method float3, addr 0x641dd5c, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 float3(::Unity::Mathematics::int3  v) ;

/// @brief Method float3, addr 0x641dd80, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 float3(::Unity::Mathematics::uint3  v) ;

/// @brief Method float3, addr 0x641dd0c, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 float3(bool  v) ;

/// @brief Method float3, addr 0x641dec8, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 float3(double_t  v) ;

/// @brief Method float3, addr 0x641dd00, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 float3(float_t  v) ;

/// @brief Method float3, addr 0x641dd4c, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 float3(int32_t  v) ;

/// @brief Method float3, addr 0x641dd70, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 float3(uint32_t  v) ;

/// @brief Method float3, addr 0x641dcf0, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 float3(float_t  x, float_t  y, float_t  z) ;

/// @brief Method float3, addr 0x641dcf4, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 float3(float_t  x, ::Unity::Mathematics::float2  yz) ;

/// @brief Method float3, addr 0x641dcf8, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 float3(::Unity::Mathematics::float2  xy, float_t  z) ;

/// @brief Method float3, addr 0x641dcfc, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 float3(::Unity::Mathematics::float3  xyz) ;

/// @brief Method float3x2, addr 0x641e2a0, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x2 float3x2(::Unity::Mathematics::float3  c0, ::Unity::Mathematics::float3  c1) ;

/// @brief Method float3x2, addr 0x641e2b0, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x2 float3x2(float_t  m00, float_t  m01, float_t  m10, float_t  m11, float_t  m20, float_t  m21) ;

/// @brief Method float3x2, addr 0x641e2f0, size 0x48, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x2 float3x2(::Unity::Mathematics::bool3x2  v) ;

/// @brief Method float3x2, addr 0x641e3dc, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x2 float3x2(::Unity::Mathematics::double3x2  v) ;

/// @brief Method float3x2, addr 0x641e34c, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x2 float3x2(::Unity::Mathematics::int3x2  v) ;

/// @brief Method float3x2, addr 0x641e394, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x2 float3x2(::Unity::Mathematics::uint3x2  v) ;

/// @brief Method float3x2, addr 0x641e2d0, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x2 float3x2(bool  v) ;

/// @brief Method float3x2, addr 0x641e3c8, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x2 float3x2(double_t  v) ;

/// @brief Method float3x2, addr 0x641e2c0, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x2 float3x2(float_t  v) ;

/// @brief Method float3x2, addr 0x641e338, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x2 float3x2(int32_t  v) ;

/// @brief Method float3x2, addr 0x641e380, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x2 float3x2(uint32_t  v) ;

/// @brief Method float3x3, addr 0x641e50c, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 float3x3(::Unity::Mathematics::float3  c0, ::Unity::Mathematics::float3  c1, ::Unity::Mathematics::float3  c2) ;

/// @brief Method float3x3, addr 0x643966c, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 float3x3(::Unity::Mathematics::float4x4  f4x4) ;

/// @brief Method float3x3, addr 0x641e530, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 float3x3(float_t  m00, float_t  m01, float_t  m02, float_t  m10, float_t  m11, float_t  m12, float_t  m20, float_t  m21, float_t  m22) ;

/// @brief Method float3x3, addr 0x643969c, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 float3x3(::Unity::Mathematics::quaternion  rotation) ;

/// @brief Method float3x3, addr 0x641e584, size 0x78, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 float3x3(::Unity::Mathematics::bool3x3  v) ;

/// @brief Method float3x3, addr 0x641e6d8, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 float3x3(::Unity::Mathematics::double3x3  v) ;

/// @brief Method float3x3, addr 0x641e610, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 float3x3(::Unity::Mathematics::int3x3  v) ;

/// @brief Method float3x3, addr 0x641e674, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 float3x3(::Unity::Mathematics::uint3x3  v) ;

/// @brief Method float3x3, addr 0x641e55c, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 float3x3(bool  v) ;

/// @brief Method float3x3, addr 0x641e6c4, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 float3x3(double_t  v) ;

/// @brief Method float3x3, addr 0x641e54c, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 float3x3(float_t  v) ;

/// @brief Method float3x3, addr 0x641e5fc, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 float3x3(int32_t  v) ;

/// @brief Method float3x3, addr 0x641e660, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 float3x3(uint32_t  v) ;

/// @brief Method float3x4, addr 0x641e98c, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x4 float3x4(::Unity::Mathematics::float3  c0, ::Unity::Mathematics::float3  c1, ::Unity::Mathematics::float3  c2, ::Unity::Mathematics::float3  c3) ;

/// @brief Method float3x4, addr 0x641e9c0, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x4 float3x4(float_t  m00, float_t  m01, float_t  m02, float_t  m03, float_t  m10, float_t  m11, float_t  m12, float_t  m13, float_t  m20, float_t  m21, float_t  m22, float_t  m23) ;

/// @brief Method float3x4, addr 0x641663c, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x4 float3x4(::Unity::Mathematics::AffineTransform  transform) ;

/// @brief Method float3x4, addr 0x641ea30, size 0x9c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x4 float3x4(::Unity::Mathematics::bool3x4  v) ;

/// @brief Method float3x4, addr 0x641ebd0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x4 float3x4(::Unity::Mathematics::double3x4  v) ;

/// @brief Method float3x4, addr 0x641eae0, size 0x64, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x4 float3x4(::Unity::Mathematics::int3x4  v) ;

/// @brief Method float3x4, addr 0x641eb58, size 0x64, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x4 float3x4(::Unity::Mathematics::uint3x4  v) ;

/// @brief Method float3x4, addr 0x641ea04, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x4 float3x4(bool  v) ;

/// @brief Method float3x4, addr 0x641ebbc, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x4 float3x4(double_t  v) ;

/// @brief Method float3x4, addr 0x641e9f4, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x4 float3x4(float_t  v) ;

/// @brief Method float3x4, addr 0x641eacc, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x4 float3x4(int32_t  v) ;

/// @brief Method float3x4, addr 0x641eb44, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x4 float3x4(uint32_t  v) ;

/// @brief Method float4, addr 0x641ee94, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 float4(::Unity::Mathematics::bool4  v) ;

/// @brief Method float4, addr 0x641f05c, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 float4(::Unity::Mathematics::double4  v) ;

/// @brief Method float4, addr 0x641ef20, size 0x68, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 float4(::Unity::Mathematics::half  v) ;

/// @brief Method float4, addr 0x641ef88, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 float4(::Unity::Mathematics::half4  v) ;

/// @brief Method float4, addr 0x641eed4, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 float4(::Unity::Mathematics::int4  v) ;

/// @brief Method float4, addr 0x641ef04, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 float4(::Unity::Mathematics::uint4  v) ;

/// @brief Method float4, addr 0x641ee74, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 float4(bool  v) ;

/// @brief Method float4, addr 0x641f048, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 float4(double_t  v) ;

/// @brief Method float4, addr 0x641ee64, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 float4(float_t  v) ;

/// @brief Method float4, addr 0x641eec0, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 float4(int32_t  v) ;

/// @brief Method float4, addr 0x641eef0, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 float4(uint32_t  v) ;

/// @brief Method float4, addr 0x641ee44, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 float4(float_t  x, float_t  y, float_t  z, float_t  w) ;

/// @brief Method float4, addr 0x641ee48, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 float4(float_t  x, float_t  y, ::Unity::Mathematics::float2  zw) ;

/// @brief Method float4, addr 0x641ee4c, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 float4(float_t  x, ::Unity::Mathematics::float2  yz, float_t  w) ;

/// @brief Method float4, addr 0x641ee50, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 float4(float_t  x, ::Unity::Mathematics::float3  yzw) ;

/// @brief Method float4, addr 0x641ee54, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 float4(::Unity::Mathematics::float2  xy, float_t  z, float_t  w) ;

/// @brief Method float4, addr 0x641ee58, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 float4(::Unity::Mathematics::float2  xy, ::Unity::Mathematics::float2  zw) ;

/// @brief Method float4, addr 0x641ee5c, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 float4(::Unity::Mathematics::float3  xyz, float_t  w) ;

/// @brief Method float4, addr 0x641ee60, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 float4(::Unity::Mathematics::float4  xyzw) ;

/// @brief Method float4x2, addr 0x641f4d4, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x2 float4x2(::Unity::Mathematics::float4  c0, ::Unity::Mathematics::float4  c1) ;

/// @brief Method float4x2, addr 0x641f4e8, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x2 float4x2(float_t  m00, float_t  m01, float_t  m10, float_t  m11, float_t  m20, float_t  m21, float_t  m30, float_t  m31) ;

/// @brief Method float4x2, addr 0x641f52c, size 0x5c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x2 float4x2(::Unity::Mathematics::bool4x2  v) ;

/// @brief Method float4x2, addr 0x641f640, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x2 float4x2(::Unity::Mathematics::double4x2  v) ;

/// @brief Method float4x2, addr 0x641f598, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x2 float4x2(::Unity::Mathematics::int4x2  v) ;

/// @brief Method float4x2, addr 0x641f5ec, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x2 float4x2(::Unity::Mathematics::uint4x2  v) ;

/// @brief Method float4x2, addr 0x641f508, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x2 float4x2(bool  v) ;

/// @brief Method float4x2, addr 0x641f630, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x2 float4x2(double_t  v) ;

/// @brief Method float4x2, addr 0x641f4fc, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x2 float4x2(float_t  v) ;

/// @brief Method float4x2, addr 0x641f588, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x2 float4x2(int32_t  v) ;

/// @brief Method float4x2, addr 0x641f5dc, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x2 float4x2(uint32_t  v) ;

/// @brief Method float4x3, addr 0x641f7cc, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x3 float4x3(::Unity::Mathematics::float4  c0, ::Unity::Mathematics::float4  c1, ::Unity::Mathematics::float4  c2) ;

/// @brief Method float4x3, addr 0x641f7e8, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x3 float4x3(float_t  m00, float_t  m01, float_t  m02, float_t  m10, float_t  m11, float_t  m12, float_t  m20, float_t  m21, float_t  m22, float_t  m30, float_t  m31, float_t  m32) ;

/// @brief Method float4x3, addr 0x641f858, size 0x84, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x3 float4x3(::Unity::Mathematics::bool4x3  v) ;

/// @brief Method float4x3, addr 0x641f9e0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x3 float4x3(::Unity::Mathematics::double4x3  v) ;

/// @brief Method float4x3, addr 0x641f8f0, size 0x64, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x3 float4x3(::Unity::Mathematics::int4x3  v) ;

/// @brief Method float4x3, addr 0x641f968, size 0x64, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x3 float4x3(::Unity::Mathematics::uint4x3  v) ;

/// @brief Method float4x3, addr 0x641f82c, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x3 float4x3(bool  v) ;

/// @brief Method float4x3, addr 0x641f9cc, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x3 float4x3(double_t  v) ;

/// @brief Method float4x3, addr 0x641f81c, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x3 float4x3(float_t  v) ;

/// @brief Method float4x3, addr 0x641f8dc, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x3 float4x3(int32_t  v) ;

/// @brief Method float4x3, addr 0x641f954, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x3 float4x3(uint32_t  v) ;

/// @brief Method float4x4, addr 0x641fc10, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x4 float4x4(::Unity::Mathematics::float4  c0, ::Unity::Mathematics::float4  c1, ::Unity::Mathematics::float4  c2, ::Unity::Mathematics::float4  c3) ;

/// @brief Method float4x4, addr 0x641fc34, size 0x54, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x4 float4x4(float_t  m00, float_t  m01, float_t  m02, float_t  m03, float_t  m10, float_t  m11, float_t  m12, float_t  m13, float_t  m20, float_t  m21, float_t  m22, float_t  m23, float_t  m30, float_t  m31, float_t  m32, float_t  m33) ;

/// @brief Method float4x4, addr 0x64396b4, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x4 float4x4(::Unity::Mathematics::float3x3  rotation, ::Unity::Mathematics::float3  translation) ;

/// @brief Method float4x4, addr 0x6439704, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x4 float4x4(::Unity::Mathematics::quaternion  rotation, ::Unity::Mathematics::float3  translation) ;

/// @brief Method float4x4, addr 0x64165e4, size 0x58, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x4 float4x4(::Unity::Mathematics::AffineTransform  transform) ;

/// @brief Method float4x4, addr 0x643971c, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x4 float4x4(::Unity::Mathematics::RigidTransform  transform) ;

/// @brief Method float4x4, addr 0x641fccc, size 0xac, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x4 float4x4(::Unity::Mathematics::bool4x4  v) ;

/// @brief Method float4x4, addr 0x641febc, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x4 float4x4(::Unity::Mathematics::double4x4  v) ;

/// @brief Method float4x4, addr 0x641fd8c, size 0x84, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x4 float4x4(::Unity::Mathematics::int4x4  v) ;

/// @brief Method float4x4, addr 0x641fe24, size 0x84, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x4 float4x4(::Unity::Mathematics::uint4x4  v) ;

/// @brief Method float4x4, addr 0x641fc98, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x4 float4x4(bool  v) ;

/// @brief Method float4x4, addr 0x641fea8, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x4 float4x4(double_t  v) ;

/// @brief Method float4x4, addr 0x641fc88, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x4 float4x4(float_t  v) ;

/// @brief Method float4x4, addr 0x641fd78, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x4 float4x4(int32_t  v) ;

/// @brief Method float4x4, addr 0x641fe10, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x4 float4x4(uint32_t  v) ;

/// @brief Method floor, addr 0x642b16c, size 0x9c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 floor(::Unity::Mathematics::double2  x) ;

/// @brief Method floor, addr 0x642b208, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 floor(::Unity::Mathematics::double3  x) ;

/// @brief Method floor, addr 0x642b2e8, size 0x11c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 floor(::Unity::Mathematics::double4  x) ;

/// @brief Method floor, addr 0x642ae74, size 0x9c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 floor(::Unity::Mathematics::float2  x) ;

/// @brief Method floor, addr 0x642af10, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 floor(::Unity::Mathematics::float3  x) ;

/// @brief Method floor, addr 0x642aff0, size 0x11c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 floor(::Unity::Mathematics::float4  x) ;

/// @brief Method floor, addr 0x642b10c, size 0x60, virtual false, abstract: false, final false
static inline double_t floor(double_t  x) ;

/// @brief Method floor, addr 0x642ae14, size 0x60, virtual false, abstract: false, final false
static inline float_t floor(float_t  x) ;

/// @brief Method floorlog2, addr 0x6436a48, size 0x78, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 floorlog2(::Unity::Mathematics::int2  x) ;

/// @brief Method floorlog2, addr 0x6436c90, size 0x78, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 floorlog2(::Unity::Mathematics::uint2  x) ;

/// @brief Method floorlog2, addr 0x6436ac0, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 floorlog2(::Unity::Mathematics::int3  x) ;

/// @brief Method floorlog2, addr 0x6436d08, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 floorlog2(::Unity::Mathematics::uint3  x) ;

/// @brief Method floorlog2, addr 0x6436b70, size 0xe8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 floorlog2(::Unity::Mathematics::int4  x) ;

/// @brief Method floorlog2, addr 0x6436db8, size 0xe8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 floorlog2(::Unity::Mathematics::uint4  x) ;

/// @brief Method floorlog2, addr 0x6436a10, size 0x38, virtual false, abstract: false, final false
static inline int32_t floorlog2(int32_t  x) ;

/// @brief Method floorlog2, addr 0x6436c58, size 0x38, virtual false, abstract: false, final false
static inline int32_t floorlog2(uint32_t  x) ;

/// @brief Method fmod, addr 0x6430acc, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 fmod(::Unity::Mathematics::double2  x, ::Unity::Mathematics::double2  y) ;

/// @brief Method fmod, addr 0x6430b10, size 0x68, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 fmod(::Unity::Mathematics::double3  x, ::Unity::Mathematics::double3  y) ;

/// @brief Method fmod, addr 0x6430b78, size 0x8c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 fmod(::Unity::Mathematics::double4  x, ::Unity::Mathematics::double4  y) ;

/// @brief Method fmod, addr 0x6430990, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 fmod(::Unity::Mathematics::float2  x, ::Unity::Mathematics::float2  y) ;

/// @brief Method fmod, addr 0x64309d4, size 0x68, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 fmod(::Unity::Mathematics::float3  x, ::Unity::Mathematics::float3  y) ;

/// @brief Method fmod, addr 0x6430a3c, size 0x8c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 fmod(::Unity::Mathematics::float4  x, ::Unity::Mathematics::float4  y) ;

/// @brief Method fmod, addr 0x6430ac8, size 0x4, virtual false, abstract: false, final false
static inline double_t fmod(double_t  x, double_t  y) ;

/// @brief Method fmod, addr 0x643098c, size 0x4, virtual false, abstract: false, final false
static inline float_t fmod(float_t  x, float_t  y) ;

/// @brief Method fold_to_uint, addr 0x64395e8, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 fold_to_uint(::Unity::Mathematics::double2  x) ;

/// @brief Method fold_to_uint, addr 0x6439608, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 fold_to_uint(::Unity::Mathematics::double3  x) ;

/// @brief Method fold_to_uint, addr 0x6439634, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 fold_to_uint(::Unity::Mathematics::double4  x) ;

/// @brief Method fold_to_uint, addr 0x64395d8, size 0x10, virtual false, abstract: false, final false
static inline uint32_t fold_to_uint(double_t  x) ;

/// @brief Method forward, addr 0x6438230, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 forward() ;

/// @brief Method forward, addr 0x6441278, size 0x78, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 forward(::Unity::Mathematics::quaternion  q) ;

/// @brief Method frac, addr 0x642d20c, size 0xa4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 frac(::Unity::Mathematics::double2  x) ;

/// @brief Method frac, addr 0x642d2b0, size 0xec, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 frac(::Unity::Mathematics::double3  x) ;

/// @brief Method frac, addr 0x642d39c, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 frac(::Unity::Mathematics::double4  x) ;

/// @brief Method frac, addr 0x642cfd4, size 0xa4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 frac(::Unity::Mathematics::float2  x) ;

/// @brief Method frac, addr 0x642d078, size 0xec, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 frac(::Unity::Mathematics::float3  x) ;

/// @brief Method frac, addr 0x642d164, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 frac(::Unity::Mathematics::float4  x) ;

/// @brief Method frac, addr 0x642d1a8, size 0x64, virtual false, abstract: false, final false
static inline double_t frac(double_t  x) ;

/// @brief Method frac, addr 0x642cf70, size 0x64, virtual false, abstract: false, final false
static inline float_t frac(float_t  x) ;

/// @brief Method half, addr 0x642074c, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half half(double_t  v) ;

/// @brief Method half, addr 0x64206f0, size 0x5c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half half(float_t  v) ;

/// @brief Method half, addr 0x64206ec, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half half(::Unity::Mathematics::half  x) ;

/// @brief Method half2, addr 0x642093c, size 0x94, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half2 half2(::Unity::Mathematics::double2  v) ;

/// @brief Method half2, addr 0x6420840, size 0x94, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half2 half2(::Unity::Mathematics::float2  v) ;

/// @brief Method half2, addr 0x64207d4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half2 half2(::Unity::Mathematics::half  v) ;

/// @brief Method half2, addr 0x64208d4, size 0x68, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half2 half2(double_t  v) ;

/// @brief Method half2, addr 0x64207dc, size 0x64, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half2 half2(float_t  v) ;

/// @brief Method half2, addr 0x64207c8, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half2 half2(::Unity::Mathematics::half  x, ::Unity::Mathematics::half  y) ;

/// @brief Method half2, addr 0x64207d0, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half2 half2(::Unity::Mathematics::half2  xy) ;

/// @brief Method half3, addr 0x6420c40, size 0xec, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half3 half3(::Unity::Mathematics::double3  v) ;

/// @brief Method half3, addr 0x6420af0, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half3 half3(::Unity::Mathematics::float3  v) ;

/// @brief Method half3, addr 0x6420a70, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half3 half3(::Unity::Mathematics::half  v) ;

/// @brief Method half3, addr 0x6420bd0, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half3 half3(double_t  v) ;

/// @brief Method half3, addr 0x6420a84, size 0x6c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half3 half3(float_t  v) ;

/// @brief Method half3, addr 0x6420a48, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half3 half3(::Unity::Mathematics::half  x, ::Unity::Mathematics::half  y, ::Unity::Mathematics::half  z) ;

/// @brief Method half3, addr 0x6420a5c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half3 half3(::Unity::Mathematics::half  x, ::Unity::Mathematics::half2  yz) ;

/// @brief Method half3, addr 0x6420a64, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half3 half3(::Unity::Mathematics::half2  xy, ::Unity::Mathematics::half  z) ;

/// @brief Method half3, addr 0x6420a6c, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half3 half3(::Unity::Mathematics::half3  xyz) ;

/// @brief Method half4, addr 0x642104c, size 0x13c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half4 half4(::Unity::Mathematics::double4  v) ;

/// @brief Method half4, addr 0x6420eb0, size 0x130, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half4 half4(::Unity::Mathematics::float4  v) ;

/// @brief Method half4, addr 0x6420e38, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half4 half4(::Unity::Mathematics::half  v) ;

/// @brief Method half4, addr 0x6420fe0, size 0x6c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half4 half4(double_t  v) ;

/// @brief Method half4, addr 0x6420e48, size 0x68, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half4 half4(float_t  v) ;

/// @brief Method half4, addr 0x6420dc8, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half4 half4(::Unity::Mathematics::half  x, ::Unity::Mathematics::half  y, ::Unity::Mathematics::half  z, ::Unity::Mathematics::half  w) ;

/// @brief Method half4, addr 0x6420de4, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half4 half4(::Unity::Mathematics::half  x, ::Unity::Mathematics::half  y, ::Unity::Mathematics::half2  zw) ;

/// @brief Method half4, addr 0x6420df4, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half4 half4(::Unity::Mathematics::half  x, ::Unity::Mathematics::half2  yz, ::Unity::Mathematics::half  w) ;

/// @brief Method half4, addr 0x6420e08, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half4 half4(::Unity::Mathematics::half  x, ::Unity::Mathematics::half3  yzw) ;

/// @brief Method half4, addr 0x6420e10, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half4 half4(::Unity::Mathematics::half2  xy, ::Unity::Mathematics::half  z, ::Unity::Mathematics::half  w) ;

/// @brief Method half4, addr 0x6420e24, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half4 half4(::Unity::Mathematics::half2  xy, ::Unity::Mathematics::half2  zw) ;

/// @brief Method half4, addr 0x6420e2c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half4 half4(::Unity::Mathematics::half3  xyz, ::Unity::Mathematics::half  w) ;

/// @brief Method half4, addr 0x6420e34, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half4 half4(::Unity::Mathematics::half4  xyzw) ;

/// @brief Method hash, addr 0x6416cfc, size 0xc8, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::AffineTransform  a) ;

/// @brief Method hash, addr 0x643820c, size 0x4, virtual false, abstract: false, final false
static inline uint32_t hash(void*  pBuffer, int32_t  numBytes, uint32_t  seed) ;

/// @brief Method hash, addr 0x64411b4, size 0x60, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::quaternion  q) ;

/// @brief Method hash, addr 0x64417b8, size 0x9c, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::RigidTransform  t) ;

/// @brief Method hash, addr 0x6416f0c, size 0x38, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::bool2  v) ;

/// @brief Method hash, addr 0x6417278, size 0x74, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::bool2x2  v) ;

/// @brief Method hash, addr 0x6417400, size 0xb0, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::bool2x3  v) ;

/// @brief Method hash, addr 0x6417604, size 0xbc, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::bool2x4  v) ;

/// @brief Method hash, addr 0x6417804, size 0x54, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::bool3  v) ;

/// @brief Method hash, addr 0x6417c10, size 0xac, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::bool3x2  v) ;

/// @brief Method hash, addr 0x6417e90, size 0x114, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::bool3x3  v) ;

/// @brief Method hash, addr 0x6418278, size 0x16c, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::bool3x4  v) ;

/// @brief Method hash, addr 0x6418630, size 0x48, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::bool4  v) ;

/// @brief Method hash, addr 0x6418ab4, size 0xc0, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::bool4x2  v) ;

/// @brief Method hash, addr 0x6418d6c, size 0x158, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::bool4x3  v) ;

/// @brief Method hash, addr 0x641916c, size 0x160, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::bool4x4  v) ;

/// @brief Method hash, addr 0x6419590, size 0x44, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::double2  v) ;

/// @brief Method hash, addr 0x6419a0c, size 0x78, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::double2x2  v) ;

/// @brief Method hash, addr 0x6419c7c, size 0xa4, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::double2x3  v) ;

/// @brief Method hash, addr 0x6419f9c, size 0xd0, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::double2x4  v) ;

/// @brief Method hash, addr 0x641a358, size 0x60, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::double3  v) ;

/// @brief Method hash, addr 0x641a8b8, size 0xa0, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::double3x2  v) ;

/// @brief Method hash, addr 0x641ad6c, size 0xe4, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::double3x3  v) ;

/// @brief Method hash, addr 0x641b294, size 0x11c, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::double3x4  v) ;

/// @brief Method hash, addr 0x641b780, size 0x80, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::double4  v) ;

/// @brief Method hash, addr 0x641be04, size 0xd8, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::double4x2  v) ;

/// @brief Method hash, addr 0x641c270, size 0x138, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::double4x3  v) ;

/// @brief Method hash, addr 0x641ce14, size 0x188, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::double4x4  v) ;

/// @brief Method hash, addr 0x641d294, size 0x34, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::float2  v) ;

/// @brief Method hash, addr 0x641d6f0, size 0x58, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::float2x2  v) ;

/// @brief Method hash, addr 0x641d928, size 0x74, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::float2x3  v) ;

/// @brief Method hash, addr 0x641dbc8, size 0x90, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::float2x4  v) ;

/// @brief Method hash, addr 0x641dee8, size 0x48, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::float3  v) ;

/// @brief Method hash, addr 0x641e420, size 0x70, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::float3x2  v) ;

/// @brief Method hash, addr 0x641e858, size 0x84, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::float3x3  v) ;

/// @brief Method hash, addr 0x641ecb8, size 0xb4, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::float3x4  v) ;

/// @brief Method hash, addr 0x641f070, size 0x60, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::float4  v) ;

/// @brief Method hash, addr 0x641f684, size 0x9c, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::float4x2  v) ;

/// @brief Method hash, addr 0x641fa44, size 0xe0, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::float4x3  v) ;

/// @brief Method hash, addr 0x642049c, size 0x124, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::float4x4  v) ;

/// @brief Method hash, addr 0x64207ac, size 0x1c, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::half  v) ;

/// @brief Method hash, addr 0x64209d0, size 0x38, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::half2  v) ;

/// @brief Method hash, addr 0x6420d2c, size 0x4c, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::half3  v) ;

/// @brief Method hash, addr 0x6421188, size 0x68, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::half4  v) ;

/// @brief Method hash, addr 0x6421358, size 0x30, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::int2  v) ;

/// @brief Method hash, addr 0x6421784, size 0x50, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::int2x2  v) ;

/// @brief Method hash, addr 0x6421a8c, size 0x74, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::int2x3  v) ;

/// @brief Method hash, addr 0x6421e40, size 0x90, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::int2x4  v) ;

/// @brief Method hash, addr 0x64220b0, size 0x40, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::int3  v) ;

/// @brief Method hash, addr 0x642266c, size 0x7c, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::int3x2  v) ;

/// @brief Method hash, addr 0x6422b10, size 0xac, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::int3x3  v) ;

/// @brief Method hash, addr 0x64230bc, size 0xdc, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::int3x4  v) ;

/// @brief Method hash, addr 0x6423438, size 0x58, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::int4  v) ;

/// @brief Method hash, addr 0x6423a58, size 0x9c, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::int4x2  v) ;

/// @brief Method hash, addr 0x6423f24, size 0xd8, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::int4x3  v) ;

/// @brief Method hash, addr 0x6424628, size 0x114, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::int4x4  v) ;

/// @brief Method hash, addr 0x64419e8, size 0x30, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::uint2  v) ;

/// @brief Method hash, addr 0x6441dcc, size 0x50, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::uint2x2  v) ;

/// @brief Method hash, addr 0x64420b0, size 0x74, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::uint2x3  v) ;

/// @brief Method hash, addr 0x6442454, size 0x90, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::uint2x4  v) ;

/// @brief Method hash, addr 0x64426a4, size 0x40, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::uint3  v) ;

/// @brief Method hash, addr 0x6442c50, size 0x7c, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::uint3x2  v) ;

/// @brief Method hash, addr 0x64430a8, size 0xac, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::uint3x3  v) ;

/// @brief Method hash, addr 0x6443664, size 0xdc, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::uint3x4  v) ;

/// @brief Method hash, addr 0x64439b0, size 0x58, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::uint4  v) ;

/// @brief Method hash, addr 0x6443fc4, size 0x9c, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::uint4x2  v) ;

/// @brief Method hash, addr 0x6444494, size 0xd8, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::uint4x3  v) ;

/// @brief Method hash, addr 0x6444ae8, size 0x114, virtual false, abstract: false, final false
static inline uint32_t hash(::Unity::Mathematics::uint4x4  v) ;

/// @brief Method hash_with_unaligned_loads, addr 0x6437edc, size 0x17c, virtual false, abstract: false, final false
static inline uint32_t hash_with_unaligned_loads(void*  pBuffer, int32_t  numBytes, uint32_t  seed) ;

/// @brief Method hash_without_unaligned_loads, addr 0x6438058, size 0x1b4, virtual false, abstract: false, final false
static inline uint32_t hash_without_unaligned_loads(void*  pBuffer, int32_t  numBytes, uint32_t  seed) ;

/// @brief Method hashwide, addr 0x6416f44, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::bool2  v) ;

/// @brief Method hashwide, addr 0x64172ec, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::bool2x2  v) ;

/// @brief Method hashwide, addr 0x64174b0, size 0x8c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::bool2x3  v) ;

/// @brief Method hashwide, addr 0x64176c0, size 0xbc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::bool2x4  v) ;

/// @brief Method hashwide, addr 0x64195d4, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::double2  v) ;

/// @brief Method hashwide, addr 0x6419a84, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::double2x2  v) ;

/// @brief Method hashwide, addr 0x6419d20, size 0xa8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::double2x3  v) ;

/// @brief Method hashwide, addr 0x641a06c, size 0xd0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::double2x4  v) ;

/// @brief Method hashwide, addr 0x641d2c8, size 0x3c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::float2  v) ;

/// @brief Method hashwide, addr 0x641d748, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::float2x2  v) ;

/// @brief Method hashwide, addr 0x641d99c, size 0x7c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::float2x3  v) ;

/// @brief Method hashwide, addr 0x641dc58, size 0x98, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::float2x4  v) ;

/// @brief Method hashwide, addr 0x6420a08, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::half2  v) ;

/// @brief Method hashwide, addr 0x6421388, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::int2  v) ;

/// @brief Method hashwide, addr 0x64217d4, size 0x58, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::int2x2  v) ;

/// @brief Method hashwide, addr 0x6421b00, size 0x7c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::int2x3  v) ;

/// @brief Method hashwide, addr 0x6421ed0, size 0x98, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::int2x4  v) ;

/// @brief Method hashwide, addr 0x6441a18, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::uint2  v) ;

/// @brief Method hashwide, addr 0x6441e1c, size 0x58, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::uint2x2  v) ;

/// @brief Method hashwide, addr 0x6442124, size 0x7c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::uint2x3  v) ;

/// @brief Method hashwide, addr 0x64424e4, size 0x98, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::uint2x4  v) ;

/// @brief Method hashwide, addr 0x6417858, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::bool3  v) ;

/// @brief Method hashwide, addr 0x6417cbc, size 0xa4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::bool3x2  v) ;

/// @brief Method hashwide, addr 0x6417fa4, size 0xfc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::bool3x3  v) ;

/// @brief Method hashwide, addr 0x64183e4, size 0x144, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::bool3x4  v) ;

/// @brief Method hashwide, addr 0x641a3b8, size 0x64, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::double3  v) ;

/// @brief Method hashwide, addr 0x641a958, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::double3x2  v) ;

/// @brief Method hashwide, addr 0x641ae50, size 0xe4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::double3x3  v) ;

/// @brief Method hashwide, addr 0x641b3b0, size 0x128, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::double3x4  v) ;

/// @brief Method hashwide, addr 0x641df30, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::float3  v) ;

/// @brief Method hashwide, addr 0x641e490, size 0x7c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::float3x2  v) ;

/// @brief Method hashwide, addr 0x641e8dc, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::float3x3  v) ;

/// @brief Method hashwide, addr 0x641ed6c, size 0xd8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::float3x4  v) ;

/// @brief Method hashwide, addr 0x6420d78, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::half3  v) ;

/// @brief Method hashwide, addr 0x64220f0, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::int3  v) ;

/// @brief Method hashwide, addr 0x64226e8, size 0x84, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::int3x2  v) ;

/// @brief Method hashwide, addr 0x6422bbc, size 0xb4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::int3x3  v) ;

/// @brief Method hashwide, addr 0x6423198, size 0xe4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::int3x4  v) ;

/// @brief Method hashwide, addr 0x64426e4, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::uint3  v) ;

/// @brief Method hashwide, addr 0x6442ccc, size 0x84, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::uint3x2  v) ;

/// @brief Method hashwide, addr 0x6443154, size 0xb4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::uint3x3  v) ;

/// @brief Method hashwide, addr 0x6443740, size 0xe4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::uint3x4  v) ;

/// @brief Method hashwide, addr 0x6416dc4, size 0x110, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::AffineTransform  a) ;

/// @brief Method hashwide, addr 0x6441214, size 0x64, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::quaternion  q) ;

/// @brief Method hashwide, addr 0x6441854, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::RigidTransform  t) ;

/// @brief Method hashwide, addr 0x6418678, size 0x6c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::bool4  v) ;

/// @brief Method hashwide, addr 0x6418b74, size 0xd8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::bool4x2  v) ;

/// @brief Method hashwide, addr 0x6418ec4, size 0xf8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::bool4x3  v) ;

/// @brief Method hashwide, addr 0x64192cc, size 0x148, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::bool4x4  v) ;

/// @brief Method hashwide, addr 0x641b800, size 0x84, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::double4  v) ;

/// @brief Method hashwide, addr 0x641bedc, size 0xd8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::double4x2  v) ;

/// @brief Method hashwide, addr 0x641c3a8, size 0x130, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::double4x3  v) ;

/// @brief Method hashwide, addr 0x641cf9c, size 0x184, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::double4x4  v) ;

/// @brief Method hashwide, addr 0x641f0d0, size 0x64, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::float4  v) ;

/// @brief Method hashwide, addr 0x641f720, size 0xac, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::float4x2  v) ;

/// @brief Method hashwide, addr 0x641fb24, size 0xec, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::float4x3  v) ;

/// @brief Method hashwide, addr 0x64205c0, size 0x12c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::float4x4  v) ;

/// @brief Method hashwide, addr 0x64211f0, size 0x6c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::half4  v) ;

/// @brief Method hashwide, addr 0x6423490, size 0x5c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::int4  v) ;

/// @brief Method hashwide, addr 0x6423af4, size 0x9c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::int4x2  v) ;

/// @brief Method hashwide, addr 0x6423ffc, size 0xd8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::int4x3  v) ;

/// @brief Method hashwide, addr 0x642473c, size 0x114, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::int4x4  v) ;

/// @brief Method hashwide, addr 0x6443a08, size 0x5c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::uint4  v) ;

/// @brief Method hashwide, addr 0x6444060, size 0x9c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::uint4x2  v) ;

/// @brief Method hashwide, addr 0x644456c, size 0xd8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::uint4x3  v) ;

/// @brief Method hashwide, addr 0x6444bfc, size 0x4644, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::uint4x4  v) ;

/// @brief Method int2, addr 0x6421290, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 int2(::Unity::Mathematics::bool2  v) ;

/// @brief Method int2, addr 0x6421324, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 int2(::Unity::Mathematics::double2  v) ;

/// @brief Method int2, addr 0x64212d0, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 int2(::Unity::Mathematics::float2  v) ;

/// @brief Method int2, addr 0x64212ac, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 int2(::Unity::Mathematics::uint2  v) ;

/// @brief Method int2, addr 0x6421278, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 int2(bool  v) ;

/// @brief Method int2, addr 0x6421304, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 int2(double_t  v) ;

/// @brief Method int2, addr 0x64212b0, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 int2(float_t  v) ;

/// @brief Method int2, addr 0x642126c, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 int2(int32_t  v) ;

/// @brief Method int2, addr 0x64212a0, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 int2(uint32_t  v) ;

/// @brief Method int2, addr 0x642125c, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 int2(int32_t  x, int32_t  y) ;

/// @brief Method int2, addr 0x6421268, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 int2(::Unity::Mathematics::int2  xy) ;

/// @brief Method int2x2, addr 0x64215f4, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x2 int2x2(::Unity::Mathematics::int2  c0, ::Unity::Mathematics::int2  c1) ;

/// @brief Method int2x2, addr 0x64215f8, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x2 int2x2(int32_t  m00, int32_t  m01, int32_t  m10, int32_t  m11) ;

/// @brief Method int2x2, addr 0x6421630, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x2 int2x2(::Unity::Mathematics::bool2x2  v) ;

/// @brief Method int2x2, addr 0x6421704, size 0x54, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x2 int2x2(::Unity::Mathematics::double2x2  v) ;

/// @brief Method int2x2, addr 0x6421688, size 0x58, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x2 int2x2(::Unity::Mathematics::float2x2  v) ;

/// @brief Method int2x2, addr 0x6421660, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x2 int2x2(::Unity::Mathematics::uint2x2  v) ;

/// @brief Method int2x2, addr 0x642161c, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x2 int2x2(bool  v) ;

/// @brief Method int2x2, addr 0x64216e0, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x2 int2x2(double_t  v) ;

/// @brief Method int2x2, addr 0x6421664, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x2 int2x2(float_t  v) ;

/// @brief Method int2x2, addr 0x642160c, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x2 int2x2(int32_t  v) ;

/// @brief Method int2x2, addr 0x6421650, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x2 int2x2(uint32_t  v) ;

/// @brief Method int2x3, addr 0x642182c, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x3 int2x3(::Unity::Mathematics::int2  c0, ::Unity::Mathematics::int2  c1, ::Unity::Mathematics::int2  c2) ;

/// @brief Method int2x3, addr 0x6421838, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x3 int2x3(int32_t  m00, int32_t  m01, int32_t  m02, int32_t  m10, int32_t  m11, int32_t  m12) ;

/// @brief Method int2x3, addr 0x6421888, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x3 int2x3(::Unity::Mathematics::bool2x3  v) ;

/// @brief Method int2x3, addr 0x64219d8, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x3 int2x3(::Unity::Mathematics::double2x3  v) ;

/// @brief Method int2x3, addr 0x6421924, size 0x8c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x3 int2x3(::Unity::Mathematics::float2x3  v) ;

/// @brief Method int2x3, addr 0x64218e8, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x3 int2x3(::Unity::Mathematics::uint2x3  v) ;

/// @brief Method int2x3, addr 0x6421870, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x3 int2x3(bool  v) ;

/// @brief Method int2x3, addr 0x64219b0, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x3 int2x3(double_t  v) ;

/// @brief Method int2x3, addr 0x64218fc, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x3 int2x3(float_t  v) ;

/// @brief Method int2x3, addr 0x642185c, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x3 int2x3(int32_t  v) ;

/// @brief Method int2x3, addr 0x64218d4, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x3 int2x3(uint32_t  v) ;

/// @brief Method int2x4, addr 0x6421b7c, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x4 int2x4(::Unity::Mathematics::int2  c0, ::Unity::Mathematics::int2  c1, ::Unity::Mathematics::int2  c2, ::Unity::Mathematics::int2  c3) ;

/// @brief Method int2x4, addr 0x6421b88, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x4 int2x4(int32_t  m00, int32_t  m01, int32_t  m02, int32_t  m03, int32_t  m10, int32_t  m11, int32_t  m12, int32_t  m13) ;

/// @brief Method int2x4, addr 0x6421be0, size 0x74, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x4 int2x4(::Unity::Mathematics::bool2x4  v) ;

/// @brief Method int2x4, addr 0x6421d64, size 0xb8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x4 int2x4(::Unity::Mathematics::double2x4  v) ;

/// @brief Method int2x4, addr 0x6421c9c, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x4 int2x4(::Unity::Mathematics::float2x4  v) ;

/// @brief Method int2x4, addr 0x6421c68, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x4 int2x4(::Unity::Mathematics::uint2x4  v) ;

/// @brief Method int2x4, addr 0x6421bc8, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x4 int2x4(bool  v) ;

/// @brief Method int2x4, addr 0x6421d3c, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x4 int2x4(double_t  v) ;

/// @brief Method int2x4, addr 0x6421c74, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x4 int2x4(float_t  v) ;

/// @brief Method int2x4, addr 0x6421bb4, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x4 int2x4(int32_t  v) ;

/// @brief Method int2x4, addr 0x6421c54, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x4 int2x4(uint32_t  v) ;

/// @brief Method int3, addr 0x6421fc4, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 int3(::Unity::Mathematics::bool3  v) ;

/// @brief Method int3, addr 0x6422070, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 int3(::Unity::Mathematics::double3  v) ;

/// @brief Method int3, addr 0x6422010, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 int3(::Unity::Mathematics::float3  v) ;

/// @brief Method int3, addr 0x6421fe8, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 int3(::Unity::Mathematics::uint3  v) ;

/// @brief Method int3, addr 0x6421fa8, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 int3(bool  v) ;

/// @brief Method int3, addr 0x6422050, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 int3(double_t  v) ;

/// @brief Method int3, addr 0x6421ff0, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 int3(float_t  v) ;

/// @brief Method int3, addr 0x6421f9c, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 int3(int32_t  v) ;

/// @brief Method int3, addr 0x6421fdc, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 int3(uint32_t  v) ;

/// @brief Method int3, addr 0x6421f68, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 int3(int32_t  x, int32_t  y, int32_t  z) ;

/// @brief Method int3, addr 0x6421f78, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 int3(int32_t  x, ::Unity::Mathematics::int2  yz) ;

/// @brief Method int3, addr 0x6421f8c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 int3(::Unity::Mathematics::int2  xy, int32_t  z) ;

/// @brief Method int3, addr 0x6421f94, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 int3(::Unity::Mathematics::int3  xyz) ;

/// @brief Method int3x2, addr 0x6422404, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x2 int3x2(::Unity::Mathematics::int3  c0, ::Unity::Mathematics::int3  c1) ;

/// @brief Method int3x2, addr 0x6422418, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x2 int3x2(int32_t  m00, int32_t  m01, int32_t  m10, int32_t  m11, int32_t  m20, int32_t  m21) ;

/// @brief Method int3x2, addr 0x6422464, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x2 int3x2(::Unity::Mathematics::bool3x2  v) ;

/// @brief Method int3x2, addr 0x64225bc, size 0x88, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x2 int3x2(::Unity::Mathematics::double3x2  v) ;

/// @brief Method int3x2, addr 0x6422504, size 0x88, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x2 int3x2(::Unity::Mathematics::float3x2  v) ;

/// @brief Method int3x2, addr 0x64224b0, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x2 int3x2(::Unity::Mathematics::uint3x2  v) ;

/// @brief Method int3x2, addr 0x6422444, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x2 int3x2(bool  v) ;

/// @brief Method int3x2, addr 0x642258c, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x2 int3x2(double_t  v) ;

/// @brief Method int3x2, addr 0x64224d4, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x2 int3x2(float_t  v) ;

/// @brief Method int3x2, addr 0x6422428, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x2 int3x2(int32_t  v) ;

/// @brief Method int3x2, addr 0x6422494, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x2 int3x2(uint32_t  v) ;

/// @brief Method int3x3, addr 0x642276c, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x3 int3x3(::Unity::Mathematics::int3  c0, ::Unity::Mathematics::int3  c1, ::Unity::Mathematics::int3  c2) ;

/// @brief Method int3x3, addr 0x6422788, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x3 int3x3(int32_t  m00, int32_t  m01, int32_t  m02, int32_t  m10, int32_t  m11, int32_t  m12, int32_t  m20, int32_t  m21, int32_t  m22) ;

/// @brief Method int3x3, addr 0x64227f0, size 0x54, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x3 int3x3(::Unity::Mathematics::bool3x3  v) ;

/// @brief Method int3x3, addr 0x64229d0, size 0xc4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x3 int3x3(::Unity::Mathematics::double3x3  v) ;

/// @brief Method int3x3, addr 0x64228d4, size 0xc4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x3 int3x3(::Unity::Mathematics::float3x3  v) ;

/// @brief Method int3x3, addr 0x6422868, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x3 int3x3(::Unity::Mathematics::uint3x3  v) ;

/// @brief Method int3x3, addr 0x64227c8, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x3 int3x3(bool  v) ;

/// @brief Method int3x3, addr 0x6422998, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x3 int3x3(double_t  v) ;

/// @brief Method int3x3, addr 0x642289c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x3 int3x3(float_t  v) ;

/// @brief Method int3x3, addr 0x64227a4, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x3 int3x3(int32_t  v) ;

/// @brief Method int3x3, addr 0x6422844, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x3 int3x3(uint32_t  v) ;

/// @brief Method int3x4, addr 0x6422c70, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x4 int3x4(::Unity::Mathematics::int3  c0, ::Unity::Mathematics::int3  c1, ::Unity::Mathematics::int3  c2, ::Unity::Mathematics::int3  c3) ;

/// @brief Method int3x4, addr 0x6422c94, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x4 int3x4(int32_t  m00, int32_t  m01, int32_t  m02, int32_t  m03, int32_t  m10, int32_t  m11, int32_t  m12, int32_t  m13, int32_t  m20, int32_t  m21, int32_t  m22, int32_t  m23) ;

/// @brief Method int3x4, addr 0x6422d24, size 0x74, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x4 int3x4(::Unity::Mathematics::bool3x4  v) ;

/// @brief Method int3x4, addr 0x6422f84, size 0xfc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x4 int3x4(::Unity::Mathematics::double3x4  v) ;

/// @brief Method int3x4, addr 0x6422e48, size 0xfc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x4 int3x4(::Unity::Mathematics::float3x4  v) ;

/// @brief Method int3x4, addr 0x6422dc4, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x4 int3x4(::Unity::Mathematics::uint3x4  v) ;

/// @brief Method int3x4, addr 0x6422cf4, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x4 int3x4(bool  v) ;

/// @brief Method int3x4, addr 0x6422f44, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x4 int3x4(double_t  v) ;

/// @brief Method int3x4, addr 0x6422e08, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x4 int3x4(float_t  v) ;

/// @brief Method int3x4, addr 0x6422cc8, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x4 int3x4(int32_t  v) ;

/// @brief Method int3x4, addr 0x6422d98, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x4 int3x4(uint32_t  v) ;

/// @brief Method int4, addr 0x6423310, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 int4(::Unity::Mathematics::bool4  v) ;

/// @brief Method int4, addr 0x64233e4, size 0x54, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 int4(::Unity::Mathematics::double4  v) ;

/// @brief Method int4, addr 0x6423368, size 0x58, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 int4(::Unity::Mathematics::float4  v) ;

/// @brief Method int4, addr 0x6423340, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 int4(::Unity::Mathematics::uint4  v) ;

/// @brief Method int4, addr 0x64232f8, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 int4(bool  v) ;

/// @brief Method int4, addr 0x64233c0, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 int4(double_t  v) ;

/// @brief Method int4, addr 0x6423344, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 int4(float_t  v) ;

/// @brief Method int4, addr 0x64232e8, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 int4(int32_t  v) ;

/// @brief Method int4, addr 0x6423330, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 int4(uint32_t  v) ;

/// @brief Method int4, addr 0x642327c, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 int4(int32_t  x, int32_t  y, int32_t  z, int32_t  w) ;

/// @brief Method int4, addr 0x6423294, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 int4(int32_t  x, int32_t  y, ::Unity::Mathematics::int2  zw) ;

/// @brief Method int4, addr 0x64232a4, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 int4(int32_t  x, ::Unity::Mathematics::int2  yz, int32_t  w) ;

/// @brief Method int4, addr 0x64232b8, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 int4(int32_t  x, ::Unity::Mathematics::int3  yzw) ;

/// @brief Method int4, addr 0x64232cc, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 int4(::Unity::Mathematics::int2  xy, int32_t  z, int32_t  w) ;

/// @brief Method int4, addr 0x64232d8, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 int4(::Unity::Mathematics::int2  xy, ::Unity::Mathematics::int2  zw) ;

/// @brief Method int4, addr 0x64232dc, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 int4(::Unity::Mathematics::int3  xyz, int32_t  w) ;

/// @brief Method int4, addr 0x64232e4, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 int4(::Unity::Mathematics::int4  xyzw) ;

/// @brief Method int4x2, addr 0x64237c0, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x2 int4x2(::Unity::Mathematics::int4  c0, ::Unity::Mathematics::int4  c1) ;

/// @brief Method int4x2, addr 0x64237cc, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x2 int4x2(int32_t  m00, int32_t  m01, int32_t  m10, int32_t  m11, int32_t  m20, int32_t  m21, int32_t  m30, int32_t  m31) ;

/// @brief Method int4x2, addr 0x642380c, size 0x5c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x2 int4x2(::Unity::Mathematics::bool4x2  v) ;

/// @brief Method int4x2, addr 0x6423978, size 0xb4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x2 int4x2(::Unity::Mathematics::double4x2  v) ;

/// @brief Method int4x2, addr 0x64238b0, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x2 int4x2(::Unity::Mathematics::float4x2  v) ;

/// @brief Method int4x2, addr 0x642387c, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x2 int4x2(::Unity::Mathematics::uint4x2  v) ;

/// @brief Method int4x2, addr 0x64237f4, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x2 int4x2(bool  v) ;

/// @brief Method int4x2, addr 0x6423950, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x2 int4x2(double_t  v) ;

/// @brief Method int4x2, addr 0x6423888, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x2 int4x2(float_t  v) ;

/// @brief Method int4x2, addr 0x64237e0, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x2 int4x2(int32_t  v) ;

/// @brief Method int4x2, addr 0x6423868, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x2 int4x2(uint32_t  v) ;

/// @brief Method int4x3, addr 0x6423b90, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x3 int4x3(::Unity::Mathematics::int4  c0, ::Unity::Mathematics::int4  c1, ::Unity::Mathematics::int4  c2) ;

/// @brief Method int4x3, addr 0x6423ba0, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x3 int4x3(int32_t  m00, int32_t  m01, int32_t  m02, int32_t  m10, int32_t  m11, int32_t  m12, int32_t  m20, int32_t  m21, int32_t  m22, int32_t  m30, int32_t  m31, int32_t  m32) ;

/// @brief Method int4x3, addr 0x6423c08, size 0x78, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x3 int4x3(::Unity::Mathematics::bool4x3  v) ;

/// @brief Method int4x3, addr 0x6423dec, size 0x104, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x3 int4x3(::Unity::Mathematics::double4x3  v) ;

/// @brief Method int4x3, addr 0x6423cd8, size 0xe8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x3 int4x3(::Unity::Mathematics::float4x3  v) ;

/// @brief Method int4x3, addr 0x6423c98, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x3 int4x3(::Unity::Mathematics::uint4x3  v) ;

/// @brief Method int4x3, addr 0x6423bec, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x3 int4x3(bool  v) ;

/// @brief Method int4x3, addr 0x6423dc0, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x3 int4x3(double_t  v) ;

/// @brief Method int4x3, addr 0x6423cac, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x3 int4x3(float_t  v) ;

/// @brief Method int4x3, addr 0x6423bd4, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x3 int4x3(int32_t  v) ;

/// @brief Method int4x3, addr 0x6423c80, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x3 int4x3(uint32_t  v) ;

/// @brief Method int4x4, addr 0x64240d4, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 int4x4(::Unity::Mathematics::int4  c0, ::Unity::Mathematics::int4  c1, ::Unity::Mathematics::int4  c2, ::Unity::Mathematics::int4  c3) ;

/// @brief Method int4x4, addr 0x64240e8, size 0x54, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 int4x4(int32_t  m00, int32_t  m01, int32_t  m02, int32_t  m03, int32_t  m10, int32_t  m11, int32_t  m12, int32_t  m13, int32_t  m20, int32_t  m21, int32_t  m22, int32_t  m23, int32_t  m30, int32_t  m31, int32_t  m32, int32_t  m33) ;

/// @brief Method int4x4, addr 0x6424178, size 0x94, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 int4x4(::Unity::Mathematics::bool4x4  v) ;

/// @brief Method int4x4, addr 0x64243c4, size 0x15c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 int4x4(::Unity::Mathematics::double4x4  v) ;

/// @brief Method int4x4, addr 0x642426c, size 0x128, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 int4x4(::Unity::Mathematics::float4x4  v) ;

/// @brief Method int4x4, addr 0x6424228, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 int4x4(::Unity::Mathematics::uint4x4  v) ;

/// @brief Method int4x4, addr 0x6424158, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 int4x4(bool  v) ;

/// @brief Method int4x4, addr 0x6424394, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 int4x4(double_t  v) ;

/// @brief Method int4x4, addr 0x642423c, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 int4x4(float_t  v) ;

/// @brief Method int4x4, addr 0x642413c, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 int4x4(int32_t  v) ;

/// @brief Method int4x4, addr 0x642420c, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 int4x4(uint32_t  v) ;

/// @brief Method inverse, addr 0x6416b44, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::AffineTransform inverse(::Unity::Mathematics::AffineTransform  a) ;

/// @brief Method inverse, addr 0x64413e4, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::RigidTransform inverse(::Unity::Mathematics::RigidTransform  t) ;

/// @brief Method inverse, addr 0x64199d0, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x2 inverse(::Unity::Mathematics::double2x2  m) ;

/// @brief Method inverse, addr 0x641ac44, size 0xd4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x3 inverse(::Unity::Mathematics::double3x3  m) ;

/// @brief Method inverse, addr 0x641c940, size 0x354, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x4 inverse(::Unity::Mathematics::double4x4  m) ;

/// @brief Method inverse, addr 0x641d6b4, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x2 inverse(::Unity::Mathematics::float2x2  m) ;

/// @brief Method inverse, addr 0x641e734, size 0xd0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 inverse(::Unity::Mathematics::float3x3  m) ;

/// @brief Method inverse, addr 0x641ffe0, size 0x33c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x4 inverse(::Unity::Mathematics::float4x4  m) ;

/// @brief Method inverse, addr 0x643fc34, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::quaternion inverse(::Unity::Mathematics::quaternion  q) ;

/// @brief Method isfinite, addr 0x6424ac8, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2 isfinite(::Unity::Mathematics::double2  x) ;

/// @brief Method isfinite, addr 0x6424a00, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2 isfinite(::Unity::Mathematics::float2  x) ;

/// @brief Method isfinite, addr 0x6424af0, size 0x3c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 isfinite(::Unity::Mathematics::double3  x) ;

/// @brief Method isfinite, addr 0x6424a28, size 0x3c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 isfinite(::Unity::Mathematics::float3  x) ;

/// @brief Method isfinite, addr 0x6424b2c, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4 isfinite(::Unity::Mathematics::double4  x) ;

/// @brief Method isfinite, addr 0x6424a64, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4 isfinite(::Unity::Mathematics::float4  x) ;

/// @brief Method isfinite, addr 0x6424ab0, size 0x18, virtual false, abstract: false, final false
static inline bool isfinite(double_t  x) ;

/// @brief Method isfinite, addr 0x64249e8, size 0x18, virtual false, abstract: false, final false
static inline bool isfinite(float_t  x) ;

/// @brief Method isinf, addr 0x6424c58, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2 isinf(::Unity::Mathematics::double2  x) ;

/// @brief Method isinf, addr 0x6424b90, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2 isinf(::Unity::Mathematics::float2  x) ;

/// @brief Method isinf, addr 0x6424c80, size 0x3c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 isinf(::Unity::Mathematics::double3  x) ;

/// @brief Method isinf, addr 0x6424bb8, size 0x3c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 isinf(::Unity::Mathematics::float3  x) ;

/// @brief Method isinf, addr 0x6424cbc, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4 isinf(::Unity::Mathematics::double4  x) ;

/// @brief Method isinf, addr 0x6424bf4, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4 isinf(::Unity::Mathematics::float4  x) ;

/// @brief Method isinf, addr 0x6424c40, size 0x18, virtual false, abstract: false, final false
static inline bool isinf(double_t  x) ;

/// @brief Method isinf, addr 0x6424b78, size 0x18, virtual false, abstract: false, final false
static inline bool isinf(float_t  x) ;

/// @brief Method isnan, addr 0x6424df8, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2 isnan(::Unity::Mathematics::double2  x) ;

/// @brief Method isnan, addr 0x6424d20, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2 isnan(::Unity::Mathematics::float2  x) ;

/// @brief Method isnan, addr 0x6424e24, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 isnan(::Unity::Mathematics::double3  x) ;

/// @brief Method isnan, addr 0x6424d4c, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 isnan(::Unity::Mathematics::float3  x) ;

/// @brief Method isnan, addr 0x6424e64, size 0x54, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4 isnan(::Unity::Mathematics::double4  x) ;

/// @brief Method isnan, addr 0x6424d8c, size 0x54, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4 isnan(::Unity::Mathematics::float4  x) ;

/// @brief Method isnan, addr 0x6424de0, size 0x18, virtual false, abstract: false, final false
static inline bool isnan(double_t  x) ;

/// @brief Method isnan, addr 0x6424d08, size 0x18, virtual false, abstract: false, final false
static inline bool isnan(float_t  x) ;

/// @brief Method ispow2, addr 0x6424ecc, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2 ispow2(::Unity::Mathematics::int2  x) ;

/// @brief Method ispow2, addr 0x6424fbc, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2 ispow2(::Unity::Mathematics::uint2  x) ;

/// @brief Method ispow2, addr 0x6424efc, size 0x48, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 ispow2(::Unity::Mathematics::int3  x) ;

/// @brief Method ispow2, addr 0x6424fe8, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 ispow2(::Unity::Mathematics::uint3  x) ;

/// @brief Method ispow2, addr 0x6424f44, size 0x64, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4 ispow2(::Unity::Mathematics::int4  x) ;

/// @brief Method ispow2, addr 0x6425028, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4 ispow2(::Unity::Mathematics::uint4  x) ;

/// @brief Method ispow2, addr 0x6424eb8, size 0x14, virtual false, abstract: false, final false
static inline bool ispow2(int32_t  x) ;

/// @brief Method ispow2, addr 0x6424fa8, size 0x14, virtual false, abstract: false, final false
static inline bool ispow2(uint32_t  x) ;

/// @brief Method left, addr 0x6438250, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 left() ;

/// @brief Method length, addr 0x64323f8, size 0x70, virtual false, abstract: false, final false
static inline double_t length(::Unity::Mathematics::double2  x) ;

/// @brief Method length, addr 0x6432468, size 0x84, virtual false, abstract: false, final false
static inline double_t length(::Unity::Mathematics::double3  x) ;

/// @brief Method length, addr 0x64324ec, size 0x90, virtual false, abstract: false, final false
static inline double_t length(::Unity::Mathematics::double4  x) ;

/// @brief Method length, addr 0x64323f0, size 0x8, virtual false, abstract: false, final false
static inline double_t length(double_t  x) ;

/// @brief Method length, addr 0x643fc8c, size 0x90, virtual false, abstract: false, final false
static inline float_t length(::Unity::Mathematics::quaternion  q) ;

/// @brief Method length, addr 0x643226c, size 0x70, virtual false, abstract: false, final false
static inline float_t length(::Unity::Mathematics::float2  x) ;

/// @brief Method length, addr 0x64322dc, size 0x84, virtual false, abstract: false, final false
static inline float_t length(::Unity::Mathematics::float3  x) ;

/// @brief Method length, addr 0x6432360, size 0x90, virtual false, abstract: false, final false
static inline float_t length(::Unity::Mathematics::float4  x) ;

/// @brief Method length, addr 0x6432264, size 0x8, virtual false, abstract: false, final false
static inline float_t length(float_t  x) ;

/// @brief Method lengthsq, addr 0x64325d4, size 0x10, virtual false, abstract: false, final false
static inline double_t lengthsq(::Unity::Mathematics::double2  x) ;

/// @brief Method lengthsq, addr 0x64325e4, size 0x18, virtual false, abstract: false, final false
static inline double_t lengthsq(::Unity::Mathematics::double3  x) ;

/// @brief Method lengthsq, addr 0x64325fc, size 0x20, virtual false, abstract: false, final false
static inline double_t lengthsq(::Unity::Mathematics::double4  x) ;

/// @brief Method lengthsq, addr 0x64325cc, size 0x8, virtual false, abstract: false, final false
static inline double_t lengthsq(double_t  x) ;

/// @brief Method lengthsq, addr 0x643fd1c, size 0x20, virtual false, abstract: false, final false
static inline float_t lengthsq(::Unity::Mathematics::quaternion  q) ;

/// @brief Method lengthsq, addr 0x6432584, size 0x10, virtual false, abstract: false, final false
static inline float_t lengthsq(::Unity::Mathematics::float2  x) ;

/// @brief Method lengthsq, addr 0x6432594, size 0x18, virtual false, abstract: false, final false
static inline float_t lengthsq(::Unity::Mathematics::float3  x) ;

/// @brief Method lengthsq, addr 0x64325ac, size 0x20, virtual false, abstract: false, final false
static inline float_t lengthsq(::Unity::Mathematics::float4  x) ;

/// @brief Method lengthsq, addr 0x643257c, size 0x8, virtual false, abstract: false, final false
static inline float_t lengthsq(float_t  x) ;

/// @brief Method lerp, addr 0x6425848, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 lerp(::Unity::Mathematics::double2  start, ::Unity::Mathematics::double2  end, ::Unity::Mathematics::double2  t) ;

/// @brief Method lerp, addr 0x64257cc, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 lerp(::Unity::Mathematics::double2  start, ::Unity::Mathematics::double2  end, double_t  t) ;

/// @brief Method lerp, addr 0x6425864, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 lerp(::Unity::Mathematics::double3  start, ::Unity::Mathematics::double3  end, ::Unity::Mathematics::double3  t) ;

/// @brief Method lerp, addr 0x64257e8, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 lerp(::Unity::Mathematics::double3  start, ::Unity::Mathematics::double3  end, double_t  t) ;

/// @brief Method lerp, addr 0x6425894, size 0x3c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 lerp(::Unity::Mathematics::double4  start, ::Unity::Mathematics::double4  end, ::Unity::Mathematics::double4  t) ;

/// @brief Method lerp, addr 0x6425810, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 lerp(::Unity::Mathematics::double4  start, ::Unity::Mathematics::double4  end, double_t  t) ;

/// @brief Method lerp, addr 0x6425734, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 lerp(::Unity::Mathematics::float2  start, ::Unity::Mathematics::float2  end, ::Unity::Mathematics::float2  t) ;

/// @brief Method lerp, addr 0x64256b8, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 lerp(::Unity::Mathematics::float2  start, ::Unity::Mathematics::float2  end, float_t  t) ;

/// @brief Method lerp, addr 0x6425750, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 lerp(::Unity::Mathematics::float3  start, ::Unity::Mathematics::float3  end, ::Unity::Mathematics::float3  t) ;

/// @brief Method lerp, addr 0x64256d4, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 lerp(::Unity::Mathematics::float3  start, ::Unity::Mathematics::float3  end, float_t  t) ;

/// @brief Method lerp, addr 0x6425780, size 0x3c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 lerp(::Unity::Mathematics::float4  start, ::Unity::Mathematics::float4  end, ::Unity::Mathematics::float4  t) ;

/// @brief Method lerp, addr 0x64256fc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 lerp(::Unity::Mathematics::float4  start, ::Unity::Mathematics::float4  end, float_t  t) ;

/// @brief Method lerp, addr 0x64257bc, size 0x10, virtual false, abstract: false, final false
static inline double_t lerp(double_t  start, double_t  end, double_t  t) ;

/// @brief Method lerp, addr 0x64256a8, size 0x10, virtual false, abstract: false, final false
static inline float_t lerp(float_t  start, float_t  end, float_t  t) ;

/// @brief Method log, addr 0x642f84c, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 log(::Unity::Mathematics::double2  x) ;

/// @brief Method log, addr 0x642f8fc, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 log(::Unity::Mathematics::double3  x) ;

/// @brief Method log, addr 0x642f9fc, size 0x148, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 log(::Unity::Mathematics::double4  x) ;

/// @brief Method log, addr 0x642f4d8, size 0xb8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 log(::Unity::Mathematics::float2  x) ;

/// @brief Method log, addr 0x642f590, size 0x108, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 log(::Unity::Mathematics::float3  x) ;

/// @brief Method log, addr 0x642f698, size 0x154, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 log(::Unity::Mathematics::float4  x) ;

/// @brief Method log, addr 0x64403c8, size 0x1cc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::quaternion log(::Unity::Mathematics::quaternion  q) ;

/// @brief Method log, addr 0x642f7ec, size 0x60, virtual false, abstract: false, final false
static inline double_t log(double_t  x) ;

/// @brief Method log, addr 0x642f470, size 0x68, virtual false, abstract: false, final false
static inline float_t log(float_t  x) ;

/// @brief Method log10, addr 0x6430694, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 log10(::Unity::Mathematics::double2  x) ;

/// @brief Method log10, addr 0x6430744, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 log10(::Unity::Mathematics::double3  x) ;

/// @brief Method log10, addr 0x6430844, size 0x148, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 log10(::Unity::Mathematics::double4  x) ;

/// @brief Method log10, addr 0x6430320, size 0xb8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 log10(::Unity::Mathematics::float2  x) ;

/// @brief Method log10, addr 0x64303d8, size 0x108, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 log10(::Unity::Mathematics::float3  x) ;

/// @brief Method log10, addr 0x64304e0, size 0x154, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 log10(::Unity::Mathematics::float4  x) ;

/// @brief Method log10, addr 0x6430634, size 0x60, virtual false, abstract: false, final false
static inline double_t log10(double_t  x) ;

/// @brief Method log10, addr 0x64302b8, size 0x68, virtual false, abstract: false, final false
static inline float_t log10(float_t  x) ;

/// @brief Method log2, addr 0x642ff78, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 log2(::Unity::Mathematics::double2  x) ;

/// @brief Method log2, addr 0x6430038, size 0x118, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 log2(::Unity::Mathematics::double3  x) ;

/// @brief Method log2, addr 0x6430150, size 0x168, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 log2(::Unity::Mathematics::double4  x) ;

/// @brief Method log2, addr 0x642fbb4, size 0xc8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 log2(::Unity::Mathematics::float2  x) ;

/// @brief Method log2, addr 0x642fc7c, size 0x120, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 log2(::Unity::Mathematics::float3  x) ;

/// @brief Method log2, addr 0x642fd9c, size 0x174, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 log2(::Unity::Mathematics::float4  x) ;

/// @brief Method log2, addr 0x642ff10, size 0x68, virtual false, abstract: false, final false
static inline double_t log2(double_t  x) ;

/// @brief Method log2, addr 0x642fb44, size 0x70, virtual false, abstract: false, final false
static inline float_t log2(float_t  x) ;

/// @brief Method lzcnt, addr 0x643507c, size 0x78, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 lzcnt(::Unity::Mathematics::int2  x) ;

/// @brief Method lzcnt, addr 0x64352cc, size 0x78, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 lzcnt(::Unity::Mathematics::uint2  x) ;

/// @brief Method lzcnt, addr 0x64350f4, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 lzcnt(::Unity::Mathematics::int3  x) ;

/// @brief Method lzcnt, addr 0x6435344, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 lzcnt(::Unity::Mathematics::uint3  x) ;

/// @brief Method lzcnt, addr 0x64351a4, size 0xec, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 lzcnt(::Unity::Mathematics::int4  x) ;

/// @brief Method lzcnt, addr 0x64353f4, size 0xec, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 lzcnt(::Unity::Mathematics::uint4  x) ;

/// @brief Method lzcnt, addr 0x6435040, size 0x3c, virtual false, abstract: false, final false
static inline int32_t lzcnt(int32_t  x) ;

/// @brief Method lzcnt, addr 0x64354e0, size 0x4c, virtual false, abstract: false, final false
static inline int32_t lzcnt(int64_t  x) ;

/// @brief Method lzcnt, addr 0x6435290, size 0x3c, virtual false, abstract: false, final false
static inline int32_t lzcnt(uint32_t  x) ;

/// @brief Method lzcnt, addr 0x643552c, size 0x4c, virtual false, abstract: false, final false
static inline int32_t lzcnt(uint64_t  x) ;

/// @brief Method mad, addr 0x6425e18, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 mad(::Unity::Mathematics::double2  mulA, ::Unity::Mathematics::double2  mulB, ::Unity::Mathematics::double2  addC) ;

/// @brief Method mad, addr 0x6425e2c, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 mad(::Unity::Mathematics::double3  mulA, ::Unity::Mathematics::double3  mulB, ::Unity::Mathematics::double3  addC) ;

/// @brief Method mad, addr 0x6425e50, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 mad(::Unity::Mathematics::double4  mulA, ::Unity::Mathematics::double4  mulB, ::Unity::Mathematics::double4  addC) ;

/// @brief Method mad, addr 0x6425da8, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 mad(::Unity::Mathematics::float2  mulA, ::Unity::Mathematics::float2  mulB, ::Unity::Mathematics::float2  addC) ;

/// @brief Method mad, addr 0x6425dbc, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 mad(::Unity::Mathematics::float3  mulA, ::Unity::Mathematics::float3  mulB, ::Unity::Mathematics::float3  addC) ;

/// @brief Method mad, addr 0x6425de0, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 mad(::Unity::Mathematics::float4  mulA, ::Unity::Mathematics::float4  mulB, ::Unity::Mathematics::float4  addC) ;

/// @brief Method mad, addr 0x6425ca4, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 mad(::Unity::Mathematics::int2  mulA, ::Unity::Mathematics::int2  mulB, ::Unity::Mathematics::int2  addC) ;

/// @brief Method mad, addr 0x6425cc0, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 mad(::Unity::Mathematics::int3  mulA, ::Unity::Mathematics::int3  mulB, ::Unity::Mathematics::int3  addC) ;

/// @brief Method mad, addr 0x6425ce0, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 mad(::Unity::Mathematics::int4  mulA, ::Unity::Mathematics::int4  mulB, ::Unity::Mathematics::int4  addC) ;

/// @brief Method mad, addr 0x6425d1c, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 mad(::Unity::Mathematics::uint2  mulA, ::Unity::Mathematics::uint2  mulB, ::Unity::Mathematics::uint2  addC) ;

/// @brief Method mad, addr 0x6425d38, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 mad(::Unity::Mathematics::uint3  mulA, ::Unity::Mathematics::uint3  mulB, ::Unity::Mathematics::uint3  addC) ;

/// @brief Method mad, addr 0x6425d58, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 mad(::Unity::Mathematics::uint4  mulA, ::Unity::Mathematics::uint4  mulB, ::Unity::Mathematics::uint4  addC) ;

/// @brief Method mad, addr 0x6425e0c, size 0xc, virtual false, abstract: false, final false
static inline double_t mad(double_t  mulA, double_t  mulB, double_t  addC) ;

/// @brief Method mad, addr 0x6425d9c, size 0xc, virtual false, abstract: false, final false
static inline float_t mad(float_t  mulA, float_t  mulB, float_t  addC) ;

/// @brief Method mad, addr 0x6425c9c, size 0x8, virtual false, abstract: false, final false
static inline int32_t mad(int32_t  mulA, int32_t  mulB, int32_t  addC) ;

/// @brief Method mad, addr 0x6425d8c, size 0x8, virtual false, abstract: false, final false
static inline int64_t mad(int64_t  mulA, int64_t  mulB, int64_t  addC) ;

/// @brief Method mad, addr 0x6425d14, size 0x8, virtual false, abstract: false, final false
static inline uint32_t mad(uint32_t  mulA, uint32_t  mulB, uint32_t  addC) ;

/// @brief Method mad, addr 0x6425d94, size 0x8, virtual false, abstract: false, final false
static inline uint64_t mad(uint64_t  mulA, uint64_t  mulB, uint64_t  addC) ;

/// @brief Method max, addr 0x64255dc, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 max(::Unity::Mathematics::double2  x, ::Unity::Mathematics::double2  y) ;

/// @brief Method max, addr 0x642560c, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 max(::Unity::Mathematics::double3  x, ::Unity::Mathematics::double3  y) ;

/// @brief Method max, addr 0x6425650, size 0x58, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 max(::Unity::Mathematics::double4  x, ::Unity::Mathematics::double4  y) ;

/// @brief Method max, addr 0x64254f4, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 max(::Unity::Mathematics::float2  x, ::Unity::Mathematics::float2  y) ;

/// @brief Method max, addr 0x6425524, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 max(::Unity::Mathematics::float3  x, ::Unity::Mathematics::float3  y) ;

/// @brief Method max, addr 0x6425568, size 0x58, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 max(::Unity::Mathematics::float4  x, ::Unity::Mathematics::float4  y) ;

/// @brief Method max, addr 0x64253ac, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 max(::Unity::Mathematics::int2  x, ::Unity::Mathematics::int2  y) ;

/// @brief Method max, addr 0x64253cc, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 max(::Unity::Mathematics::int3  x, ::Unity::Mathematics::int3  y) ;

/// @brief Method max, addr 0x64253f4, size 0x3c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 max(::Unity::Mathematics::int4  x, ::Unity::Mathematics::int4  y) ;

/// @brief Method max, addr 0x642543c, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 max(::Unity::Mathematics::uint2  x, ::Unity::Mathematics::uint2  y) ;

/// @brief Method max, addr 0x642545c, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 max(::Unity::Mathematics::uint3  x, ::Unity::Mathematics::uint3  y) ;

/// @brief Method max, addr 0x6425484, size 0x3c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 max(::Unity::Mathematics::uint4  x, ::Unity::Mathematics::uint4  y) ;

/// @brief Method max, addr 0x64255c0, size 0x1c, virtual false, abstract: false, final false
static inline double_t max(double_t  x, double_t  y) ;

/// @brief Method max, addr 0x64254d8, size 0x1c, virtual false, abstract: false, final false
static inline float_t max(float_t  x, float_t  y) ;

/// @brief Method max, addr 0x64253a0, size 0xc, virtual false, abstract: false, final false
static inline int32_t max(int32_t  x, int32_t  y) ;

/// @brief Method max, addr 0x64254c0, size 0xc, virtual false, abstract: false, final false
static inline int64_t max(int64_t  x, int64_t  y) ;

/// @brief Method max, addr 0x6425430, size 0xc, virtual false, abstract: false, final false
static inline uint32_t max(uint32_t  x, uint32_t  y) ;

/// @brief Method max, addr 0x64254cc, size 0xc, virtual false, abstract: false, final false
static inline uint64_t max(uint64_t  x, uint64_t  y) ;

/// @brief Method min, addr 0x64252d4, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 min(::Unity::Mathematics::double2  x, ::Unity::Mathematics::double2  y) ;

/// @brief Method min, addr 0x6425304, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 min(::Unity::Mathematics::double3  x, ::Unity::Mathematics::double3  y) ;

/// @brief Method min, addr 0x6425348, size 0x58, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 min(::Unity::Mathematics::double4  x, ::Unity::Mathematics::double4  y) ;

/// @brief Method min, addr 0x64251ec, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 min(::Unity::Mathematics::float2  x, ::Unity::Mathematics::float2  y) ;

/// @brief Method min, addr 0x642521c, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 min(::Unity::Mathematics::float3  x, ::Unity::Mathematics::float3  y) ;

/// @brief Method min, addr 0x6425260, size 0x58, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 min(::Unity::Mathematics::float4  x, ::Unity::Mathematics::float4  y) ;

/// @brief Method min, addr 0x64250a4, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 min(::Unity::Mathematics::int2  x, ::Unity::Mathematics::int2  y) ;

/// @brief Method min, addr 0x64250c4, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 min(::Unity::Mathematics::int3  x, ::Unity::Mathematics::int3  y) ;

/// @brief Method min, addr 0x64250ec, size 0x3c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 min(::Unity::Mathematics::int4  x, ::Unity::Mathematics::int4  y) ;

/// @brief Method min, addr 0x6425134, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 min(::Unity::Mathematics::uint2  x, ::Unity::Mathematics::uint2  y) ;

/// @brief Method min, addr 0x6425154, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 min(::Unity::Mathematics::uint3  x, ::Unity::Mathematics::uint3  y) ;

/// @brief Method min, addr 0x642517c, size 0x3c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 min(::Unity::Mathematics::uint4  x, ::Unity::Mathematics::uint4  y) ;

/// @brief Method min, addr 0x64252b8, size 0x1c, virtual false, abstract: false, final false
static inline double_t min(double_t  x, double_t  y) ;

/// @brief Method min, addr 0x64251d0, size 0x1c, virtual false, abstract: false, final false
static inline float_t min(float_t  x, float_t  y) ;

/// @brief Method min, addr 0x6425098, size 0xc, virtual false, abstract: false, final false
static inline int32_t min(int32_t  x, int32_t  y) ;

/// @brief Method min, addr 0x64251b8, size 0xc, virtual false, abstract: false, final false
static inline int64_t min(int64_t  x, int64_t  y) ;

/// @brief Method min, addr 0x6425128, size 0xc, virtual false, abstract: false, final false
static inline uint32_t min(uint32_t  x, uint32_t  y) ;

/// @brief Method min, addr 0x64251c4, size 0xc, virtual false, abstract: false, final false
static inline uint64_t min(uint64_t  x, uint64_t  y) ;

/// @brief Method modf, addr 0x6430e84, size 0xd4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 modf(::Unity::Mathematics::double2  x, ::ByRef<::Unity::Mathematics::double2>  i) ;

/// @brief Method modf, addr 0x6430f58, size 0x54, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 modf(::Unity::Mathematics::double3  x, ::ByRef<::Unity::Mathematics::double3>  i) ;

/// @brief Method modf, addr 0x6430fac, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 modf(::Unity::Mathematics::double4  x, ::ByRef<::Unity::Mathematics::double4>  i) ;

/// @brief Method modf, addr 0x6430c7c, size 0xdc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 modf(::Unity::Mathematics::float2  x, ::ByRef<::Unity::Mathematics::float2>  i) ;

/// @brief Method modf, addr 0x6430d58, size 0x54, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 modf(::Unity::Mathematics::float3  x, ::ByRef<::Unity::Mathematics::float3>  i) ;

/// @brief Method modf, addr 0x6430dac, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 modf(::Unity::Mathematics::float4  x, ::ByRef<::Unity::Mathematics::float4>  i) ;

/// @brief Method modf, addr 0x6430e0c, size 0x78, virtual false, abstract: false, final false
static inline double_t modf(double_t  x, ::ByRef<double_t>  i) ;

/// @brief Method modf, addr 0x6430c04, size 0x78, virtual false, abstract: false, final false
static inline float_t modf(float_t  x, ::ByRef<float_t>  i) ;

/// @brief Method movehl, addr 0x64395cc, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 movehl(::Unity::Mathematics::double4  a, ::Unity::Mathematics::double4  b) ;

/// @brief Method movehl, addr 0x64395c0, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 movehl(::Unity::Mathematics::float4  a, ::Unity::Mathematics::float4  b) ;

/// @brief Method movelh, addr 0x64395b4, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 movelh(::Unity::Mathematics::double4  a, ::Unity::Mathematics::double4  b) ;

/// @brief Method movelh, addr 0x64395a8, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 movelh(::Unity::Mathematics::float4  a, ::Unity::Mathematics::float4  b) ;

/// @brief Method mul, addr 0x6416650, size 0x184, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::AffineTransform mul(::Unity::Mathematics::AffineTransform  a, ::Unity::Mathematics::AffineTransform  b) ;

/// @brief Method mul, addr 0x6416930, size 0x114, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::AffineTransform mul(::Unity::Mathematics::AffineTransform  a, ::Unity::Mathematics::float3x3  b) ;

/// @brief Method mul, addr 0x64167d4, size 0x15c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::AffineTransform mul(::Unity::Mathematics::float3x3  a, ::Unity::Mathematics::AffineTransform  b) ;

/// @brief Method mul, addr 0x64414c4, size 0x128, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::RigidTransform mul(::Unity::Mathematics::RigidTransform  a, ::Unity::Mathematics::RigidTransform  b) ;

/// @brief Method mul, addr 0x643b18c, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 mul(::Unity::Mathematics::double2  a, ::Unity::Mathematics::double2x2  b) ;

/// @brief Method mul, addr 0x643b4b0, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 mul(::Unity::Mathematics::double2x2  a, ::Unity::Mathematics::double2  b) ;

/// @brief Method mul, addr 0x643b5e8, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 mul(::Unity::Mathematics::double2x3  a, ::Unity::Mathematics::double3  b) ;

/// @brief Method mul, addr 0x643b760, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 mul(::Unity::Mathematics::double2x4  a, ::Unity::Mathematics::double4  b) ;

/// @brief Method mul, addr 0x643b238, size 0x3c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 mul(::Unity::Mathematics::double3  a, ::Unity::Mathematics::double3x2  b) ;

/// @brief Method mul, addr 0x643b360, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 mul(::Unity::Mathematics::double4  a, ::Unity::Mathematics::double4x2  b) ;

/// @brief Method mul, addr 0x643b4cc, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x2 mul(::Unity::Mathematics::double2x2  a, ::Unity::Mathematics::double2x2  b) ;

/// @brief Method mul, addr 0x643b60c, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x2 mul(::Unity::Mathematics::double2x3  a, ::Unity::Mathematics::double3x2  b) ;

/// @brief Method mul, addr 0x643b78c, size 0x94, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x2 mul(::Unity::Mathematics::double2x4  a, ::Unity::Mathematics::double4x2  b) ;

/// @brief Method mul, addr 0x643b500, size 0x64, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x3 mul(::Unity::Mathematics::double2x2  a, ::Unity::Mathematics::double2x3  b) ;

/// @brief Method mul, addr 0x643b67c, size 0x64, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x3 mul(::Unity::Mathematics::double2x3  a, ::Unity::Mathematics::double3x3  b) ;

/// @brief Method mul, addr 0x643b820, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x3 mul(::Unity::Mathematics::double2x4  a, ::Unity::Mathematics::double4x3  b) ;

/// @brief Method mul, addr 0x643b564, size 0x84, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x4 mul(::Unity::Mathematics::double2x2  a, ::Unity::Mathematics::double2x4  b) ;

/// @brief Method mul, addr 0x643b6e0, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x4 mul(::Unity::Mathematics::double2x3  a, ::Unity::Mathematics::double3x4  b) ;

/// @brief Method mul, addr 0x643b8a0, size 0xa4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x4 mul(::Unity::Mathematics::double2x4  a, ::Unity::Mathematics::double4x4  b) ;

/// @brief Method mul, addr 0x643b1a8, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 mul(::Unity::Mathematics::double2  a, ::Unity::Mathematics::double2x3  b) ;

/// @brief Method mul, addr 0x643b274, size 0x58, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 mul(::Unity::Mathematics::double3  a, ::Unity::Mathematics::double3x3  b) ;

/// @brief Method mul, addr 0x643b944, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 mul(::Unity::Mathematics::double3x2  a, ::Unity::Mathematics::double2  b) ;

/// @brief Method mul, addr 0x643bb2c, size 0x54, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 mul(::Unity::Mathematics::double3x3  a, ::Unity::Mathematics::double3  b) ;

/// @brief Method mul, addr 0x643bdbc, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 mul(::Unity::Mathematics::double3x4  a, ::Unity::Mathematics::double4  b) ;

/// @brief Method mul, addr 0x643b3ac, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 mul(::Unity::Mathematics::double4  a, ::Unity::Mathematics::double4x3  b) ;

/// @brief Method mul, addr 0x643b978, size 0x54, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x2 mul(::Unity::Mathematics::double3x2  a, ::Unity::Mathematics::double2x2  b) ;

/// @brief Method mul, addr 0x643bb80, size 0x88, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x2 mul(::Unity::Mathematics::double3x3  a, ::Unity::Mathematics::double3x2  b) ;

/// @brief Method mul, addr 0x643be2c, size 0xb4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x2 mul(::Unity::Mathematics::double3x4  a, ::Unity::Mathematics::double4x2  b) ;

/// @brief Method mul, addr 0x643b9cc, size 0x98, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x3 mul(::Unity::Mathematics::double3x2  a, ::Unity::Mathematics::double2x3  b) ;

/// @brief Method mul, addr 0x643bc08, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x3 mul(::Unity::Mathematics::double3x3  a, ::Unity::Mathematics::double3x3  b) ;

/// @brief Method mul, addr 0x643bee0, size 0xfc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x3 mul(::Unity::Mathematics::double3x4  a, ::Unity::Mathematics::double4x3  b) ;

/// @brief Method mul, addr 0x643ba64, size 0xc8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x4 mul(::Unity::Mathematics::double3x2  a, ::Unity::Mathematics::double2x4  b) ;

/// @brief Method mul, addr 0x643bcc8, size 0xf4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x4 mul(::Unity::Mathematics::double3x3  a, ::Unity::Mathematics::double3x4  b) ;

/// @brief Method mul, addr 0x643bfdc, size 0x144, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x4 mul(::Unity::Mathematics::double3x4  a, ::Unity::Mathematics::double4x4  b) ;

/// @brief Method mul, addr 0x643b1dc, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 mul(::Unity::Mathematics::double2  a, ::Unity::Mathematics::double2x4  b) ;

/// @brief Method mul, addr 0x643b2cc, size 0x74, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 mul(::Unity::Mathematics::double3  a, ::Unity::Mathematics::double3x4  b) ;

/// @brief Method mul, addr 0x643b41c, size 0x94, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 mul(::Unity::Mathematics::double4  a, ::Unity::Mathematics::double4x4  b) ;

/// @brief Method mul, addr 0x643c120, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 mul(::Unity::Mathematics::double4x2  a, ::Unity::Mathematics::double2  b) ;

/// @brief Method mul, addr 0x643c2b8, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 mul(::Unity::Mathematics::double4x3  a, ::Unity::Mathematics::double3  b) ;

/// @brief Method mul, addr 0x643c538, size 0x98, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 mul(::Unity::Mathematics::double4x4  a, ::Unity::Mathematics::double4  b) ;

/// @brief Method mul, addr 0x643c164, size 0x48, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x2 mul(::Unity::Mathematics::double4x2  a, ::Unity::Mathematics::double2x2  b) ;

/// @brief Method mul, addr 0x643c328, size 0x7c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x2 mul(::Unity::Mathematics::double4x3  a, ::Unity::Mathematics::double3x2  b) ;

/// @brief Method mul, addr 0x643c5d0, size 0xa4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x2 mul(::Unity::Mathematics::double4x4  a, ::Unity::Mathematics::double4x2  b) ;

/// @brief Method mul, addr 0x643c1ac, size 0x78, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x3 mul(::Unity::Mathematics::double4x2  a, ::Unity::Mathematics::double2x3  b) ;

/// @brief Method mul, addr 0x643c3a4, size 0xb4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x3 mul(::Unity::Mathematics::double4x3  a, ::Unity::Mathematics::double3x3  b) ;

/// @brief Method mul, addr 0x643c674, size 0xec, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x3 mul(::Unity::Mathematics::double4x4  a, ::Unity::Mathematics::double4x3  b) ;

/// @brief Method mul, addr 0x643c224, size 0x94, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x4 mul(::Unity::Mathematics::double4x2  a, ::Unity::Mathematics::double2x4  b) ;

/// @brief Method mul, addr 0x643c458, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x4 mul(::Unity::Mathematics::double4x3  a, ::Unity::Mathematics::double3x4  b) ;

/// @brief Method mul, addr 0x643c760, size 0x12c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x4 mul(::Unity::Mathematics::double4x4  a, ::Unity::Mathematics::double4x4  b) ;

/// @brief Method mul, addr 0x6439bb4, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 mul(::Unity::Mathematics::float2  a, ::Unity::Mathematics::float2x2  b) ;

/// @brief Method mul, addr 0x6439ed8, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 mul(::Unity::Mathematics::float2x2  a, ::Unity::Mathematics::float2  b) ;

/// @brief Method mul, addr 0x6439ff0, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 mul(::Unity::Mathematics::float2x3  a, ::Unity::Mathematics::float3  b) ;

/// @brief Method mul, addr 0x643a188, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 mul(::Unity::Mathematics::float2x4  a, ::Unity::Mathematics::float4  b) ;

/// @brief Method mul, addr 0x6439c60, size 0x3c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 mul(::Unity::Mathematics::float3  a, ::Unity::Mathematics::float3x2  b) ;

/// @brief Method mul, addr 0x6439d88, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 mul(::Unity::Mathematics::float4  a, ::Unity::Mathematics::float4x2  b) ;

/// @brief Method mul, addr 0x6439ef4, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x2 mul(::Unity::Mathematics::float2x2  a, ::Unity::Mathematics::float2x2  b) ;

/// @brief Method mul, addr 0x643a014, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x2 mul(::Unity::Mathematics::float2x3  a, ::Unity::Mathematics::float3x2  b) ;

/// @brief Method mul, addr 0x643a1b4, size 0x7c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x2 mul(::Unity::Mathematics::float2x4  a, ::Unity::Mathematics::float4x2  b) ;

/// @brief Method mul, addr 0x6439f28, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x3 mul(::Unity::Mathematics::float2x2  a, ::Unity::Mathematics::float2x3  b) ;

/// @brief Method mul, addr 0x643a074, size 0x7c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x3 mul(::Unity::Mathematics::float2x3  a, ::Unity::Mathematics::float3x3  b) ;

/// @brief Method mul, addr 0x643a230, size 0xac, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x3 mul(::Unity::Mathematics::float2x4  a, ::Unity::Mathematics::float4x3  b) ;

/// @brief Method mul, addr 0x6439f88, size 0x68, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x4 mul(::Unity::Mathematics::float2x2  a, ::Unity::Mathematics::float2x4  b) ;

/// @brief Method mul, addr 0x643a0f0, size 0x98, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x4 mul(::Unity::Mathematics::float2x3  a, ::Unity::Mathematics::float3x4  b) ;

/// @brief Method mul, addr 0x643a2dc, size 0xc8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x4 mul(::Unity::Mathematics::float2x4  a, ::Unity::Mathematics::float4x4  b) ;

/// @brief Method mul, addr 0x6439bd0, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 mul(::Unity::Mathematics::float2  a, ::Unity::Mathematics::float2x3  b) ;

/// @brief Method mul, addr 0x6439c9c, size 0x58, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 mul(::Unity::Mathematics::float3  a, ::Unity::Mathematics::float3x3  b) ;

/// @brief Method mul, addr 0x643a3a4, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 mul(::Unity::Mathematics::float3x2  a, ::Unity::Mathematics::float2  b) ;

/// @brief Method mul, addr 0x643a5c8, size 0x48, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 mul(::Unity::Mathematics::float3x3  a, ::Unity::Mathematics::float3  b) ;

/// @brief Method mul, addr 0x643a910, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 mul(::Unity::Mathematics::float3x4  a, ::Unity::Mathematics::float4  b) ;

/// @brief Method mul, addr 0x6439dd4, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 mul(::Unity::Mathematics::float4  a, ::Unity::Mathematics::float4x3  b) ;

/// @brief Method mul, addr 0x6440608, size 0x7c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 mul(::Unity::Mathematics::quaternion  q, ::Unity::Mathematics::float3  v) ;

/// @brief Method mul, addr 0x643a3d4, size 0x6c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x2 mul(::Unity::Mathematics::float3x2  a, ::Unity::Mathematics::float2x2  b) ;

/// @brief Method mul, addr 0x643a610, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x2 mul(::Unity::Mathematics::float3x3  a, ::Unity::Mathematics::float3x2  b) ;

/// @brief Method mul, addr 0x643a970, size 0xdc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x2 mul(::Unity::Mathematics::float3x4  a, ::Unity::Mathematics::float4x2  b) ;

/// @brief Method mul, addr 0x643a440, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 mul(::Unity::Mathematics::float3x2  a, ::Unity::Mathematics::float2x3  b) ;

/// @brief Method mul, addr 0x643a6b0, size 0x104, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 mul(::Unity::Mathematics::float3x3  a, ::Unity::Mathematics::float3x3  b) ;

/// @brief Method mul, addr 0x643aa4c, size 0x168, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 mul(::Unity::Mathematics::float3x4  a, ::Unity::Mathematics::float4x3  b) ;

/// @brief Method mul, addr 0x643a4f0, size 0xd8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x4 mul(::Unity::Mathematics::float3x2  a, ::Unity::Mathematics::float2x4  b) ;

/// @brief Method mul, addr 0x643a7b4, size 0x15c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x4 mul(::Unity::Mathematics::float3x3  a, ::Unity::Mathematics::float3x4  b) ;

/// @brief Method mul, addr 0x643abb4, size 0x1e4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x4 mul(::Unity::Mathematics::float3x4  a, ::Unity::Mathematics::float4x4  b) ;

/// @brief Method mul, addr 0x6416a44, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 mul(::Unity::Mathematics::AffineTransform  a, ::Unity::Mathematics::float4  pos) ;

/// @brief Method mul, addr 0x64415ec, size 0xa8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 mul(::Unity::Mathematics::RigidTransform  a, ::Unity::Mathematics::float4  pos) ;

/// @brief Method mul, addr 0x6439c04, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 mul(::Unity::Mathematics::float2  a, ::Unity::Mathematics::float2x4  b) ;

/// @brief Method mul, addr 0x6439cf4, size 0x74, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 mul(::Unity::Mathematics::float3  a, ::Unity::Mathematics::float3x4  b) ;

/// @brief Method mul, addr 0x6439e44, size 0x94, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 mul(::Unity::Mathematics::float4  a, ::Unity::Mathematics::float4x4  b) ;

/// @brief Method mul, addr 0x643ad98, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 mul(::Unity::Mathematics::float4x2  a, ::Unity::Mathematics::float2  b) ;

/// @brief Method mul, addr 0x643ae6c, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 mul(::Unity::Mathematics::float4x3  a, ::Unity::Mathematics::float3  b) ;

/// @brief Method mul, addr 0x643afc4, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 mul(::Unity::Mathematics::float4x4  a, ::Unity::Mathematics::float4  b) ;

/// @brief Method mul, addr 0x643adb8, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x2 mul(::Unity::Mathematics::float4x2  a, ::Unity::Mathematics::float2x2  b) ;

/// @brief Method mul, addr 0x643ae98, size 0x48, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x2 mul(::Unity::Mathematics::float4x3  a, ::Unity::Mathematics::float3x2  b) ;

/// @brief Method mul, addr 0x643aff8, size 0x58, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x2 mul(::Unity::Mathematics::float4x4  a, ::Unity::Mathematics::float4x2  b) ;

/// @brief Method mul, addr 0x643addc, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x3 mul(::Unity::Mathematics::float4x2  a, ::Unity::Mathematics::float2x3  b) ;

/// @brief Method mul, addr 0x643aee0, size 0x64, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x3 mul(::Unity::Mathematics::float4x3  a, ::Unity::Mathematics::float3x3  b) ;

/// @brief Method mul, addr 0x643b050, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x3 mul(::Unity::Mathematics::float4x4  a, ::Unity::Mathematics::float4x3  b) ;

/// @brief Method mul, addr 0x643ae1c, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x4 mul(::Unity::Mathematics::float4x2  a, ::Unity::Mathematics::float2x4  b) ;

/// @brief Method mul, addr 0x643af44, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x4 mul(::Unity::Mathematics::float4x3  a, ::Unity::Mathematics::float3x4  b) ;

/// @brief Method mul, addr 0x643b0d0, size 0xa4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x4 mul(::Unity::Mathematics::float4x4  a, ::Unity::Mathematics::float4x4  b) ;

/// @brief Method mul, addr 0x643c8a8, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 mul(::Unity::Mathematics::int2  a, ::Unity::Mathematics::int2x2  b) ;

/// @brief Method mul, addr 0x643cb58, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 mul(::Unity::Mathematics::int2x2  a, ::Unity::Mathematics::int2  b) ;

/// @brief Method mul, addr 0x643cc88, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 mul(::Unity::Mathematics::int2x3  a, ::Unity::Mathematics::int3  b) ;

/// @brief Method mul, addr 0x643ce34, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 mul(::Unity::Mathematics::int2x4  a, ::Unity::Mathematics::int4  b) ;

/// @brief Method mul, addr 0x643c954, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 mul(::Unity::Mathematics::int3  a, ::Unity::Mathematics::int3x2  b) ;

/// @brief Method mul, addr 0x643ca4c, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 mul(::Unity::Mathematics::int4  a, ::Unity::Mathematics::int4x2  b) ;

/// @brief Method mul, addr 0x643cb7c, size 0x3c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x2 mul(::Unity::Mathematics::int2x2  a, ::Unity::Mathematics::int2x2  b) ;

/// @brief Method mul, addr 0x643ccb8, size 0x54, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x2 mul(::Unity::Mathematics::int2x3  a, ::Unity::Mathematics::int3x2  b) ;

/// @brief Method mul, addr 0x643ce80, size 0x6c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x2 mul(::Unity::Mathematics::int2x4  a, ::Unity::Mathematics::int4x2  b) ;

/// @brief Method mul, addr 0x643cbb8, size 0x5c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x3 mul(::Unity::Mathematics::int2x2  a, ::Unity::Mathematics::int2x3  b) ;

/// @brief Method mul, addr 0x643cd0c, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x3 mul(::Unity::Mathematics::int2x3  a, ::Unity::Mathematics::int3x3  b) ;

/// @brief Method mul, addr 0x643ceec, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x3 mul(::Unity::Mathematics::int2x4  a, ::Unity::Mathematics::int4x3  b) ;

/// @brief Method mul, addr 0x643cc14, size 0x74, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x4 mul(::Unity::Mathematics::int2x2  a, ::Unity::Mathematics::int2x4  b) ;

/// @brief Method mul, addr 0x643cd8c, size 0xa8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x4 mul(::Unity::Mathematics::int2x3  a, ::Unity::Mathematics::int3x4  b) ;

/// @brief Method mul, addr 0x643cf8c, size 0xcc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x4 mul(::Unity::Mathematics::int2x4  a, ::Unity::Mathematics::int4x4  b) ;

/// @brief Method mul, addr 0x643c8cc, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 mul(::Unity::Mathematics::int2  a, ::Unity::Mathematics::int2x3  b) ;

/// @brief Method mul, addr 0x643c988, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 mul(::Unity::Mathematics::int3  a, ::Unity::Mathematics::int3x3  b) ;

/// @brief Method mul, addr 0x643d058, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 mul(::Unity::Mathematics::int3x2  a, ::Unity::Mathematics::int2  b) ;

/// @brief Method mul, addr 0x643d228, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 mul(::Unity::Mathematics::int3x3  a, ::Unity::Mathematics::int3  b) ;

/// @brief Method mul, addr 0x643d4b4, size 0x68, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 mul(::Unity::Mathematics::int3x4  a, ::Unity::Mathematics::int4  b) ;

/// @brief Method mul, addr 0x643ca8c, size 0x58, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 mul(::Unity::Mathematics::int4  a, ::Unity::Mathematics::int4x3  b) ;

/// @brief Method mul, addr 0x643d088, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x2 mul(::Unity::Mathematics::int3x2  a, ::Unity::Mathematics::int2x2  b) ;

/// @brief Method mul, addr 0x643d26c, size 0x84, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x2 mul(::Unity::Mathematics::int3x3  a, ::Unity::Mathematics::int3x2  b) ;

/// @brief Method mul, addr 0x643d51c, size 0xac, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x2 mul(::Unity::Mathematics::int3x4  a, ::Unity::Mathematics::int4x2  b) ;

/// @brief Method mul, addr 0x643d0e8, size 0x88, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x3 mul(::Unity::Mathematics::int3x2  a, ::Unity::Mathematics::int2x3  b) ;

/// @brief Method mul, addr 0x643d2f0, size 0xc4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x3 mul(::Unity::Mathematics::int3x3  a, ::Unity::Mathematics::int3x3  b) ;

/// @brief Method mul, addr 0x643d5c8, size 0xf8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x3 mul(::Unity::Mathematics::int3x4  a, ::Unity::Mathematics::int4x3  b) ;

/// @brief Method mul, addr 0x643d170, size 0xb8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x4 mul(::Unity::Mathematics::int3x2  a, ::Unity::Mathematics::int2x4  b) ;

/// @brief Method mul, addr 0x643d3b4, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x4 mul(::Unity::Mathematics::int3x3  a, ::Unity::Mathematics::int3x4  b) ;

/// @brief Method mul, addr 0x643d6c0, size 0x14c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x4 mul(::Unity::Mathematics::int3x4  a, ::Unity::Mathematics::int4x4  b) ;

/// @brief Method mul, addr 0x643c8fc, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 mul(::Unity::Mathematics::int2  a, ::Unity::Mathematics::int2x4  b) ;

/// @brief Method mul, addr 0x643c9cc, size 0x5c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 mul(::Unity::Mathematics::int3  a, ::Unity::Mathematics::int3x4  b) ;

/// @brief Method mul, addr 0x643cae4, size 0x74, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 mul(::Unity::Mathematics::int4  a, ::Unity::Mathematics::int4x4  b) ;

/// @brief Method mul, addr 0x643d80c, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 mul(::Unity::Mathematics::int4x2  a, ::Unity::Mathematics::int2  b) ;

/// @brief Method mul, addr 0x643da60, size 0x68, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 mul(::Unity::Mathematics::int4x3  a, ::Unity::Mathematics::int3  b) ;

/// @brief Method mul, addr 0x643ddb8, size 0x8c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 mul(::Unity::Mathematics::int4x4  a, ::Unity::Mathematics::int4  b) ;

/// @brief Method mul, addr 0x643d850, size 0x78, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x2 mul(::Unity::Mathematics::int4x2  a, ::Unity::Mathematics::int2x2  b) ;

/// @brief Method mul, addr 0x643dac8, size 0xa8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x2 mul(::Unity::Mathematics::int4x3  a, ::Unity::Mathematics::int3x2  b) ;

/// @brief Method mul, addr 0x643de44, size 0xe4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x2 mul(::Unity::Mathematics::int4x4  a, ::Unity::Mathematics::int4x2  b) ;

/// @brief Method mul, addr 0x643d8c8, size 0xac, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x3 mul(::Unity::Mathematics::int4x2  a, ::Unity::Mathematics::int2x3  b) ;

/// @brief Method mul, addr 0x643db70, size 0xfc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x3 mul(::Unity::Mathematics::int4x3  a, ::Unity::Mathematics::int3x3  b) ;

/// @brief Method mul, addr 0x643df28, size 0x148, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x3 mul(::Unity::Mathematics::int4x4  a, ::Unity::Mathematics::int4x3  b) ;

/// @brief Method mul, addr 0x643d974, size 0xec, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 mul(::Unity::Mathematics::int4x2  a, ::Unity::Mathematics::int2x4  b) ;

/// @brief Method mul, addr 0x643dc6c, size 0x14c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 mul(::Unity::Mathematics::int4x3  a, ::Unity::Mathematics::int3x4  b) ;

/// @brief Method mul, addr 0x643e070, size 0x1a4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 mul(::Unity::Mathematics::int4x4  a, ::Unity::Mathematics::int4x4  b) ;

/// @brief Method mul, addr 0x6440594, size 0x74, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::quaternion mul(::Unity::Mathematics::quaternion  a, ::Unity::Mathematics::quaternion  b) ;

/// @brief Method mul, addr 0x643e230, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 mul(::Unity::Mathematics::uint2  a, ::Unity::Mathematics::uint2x2  b) ;

/// @brief Method mul, addr 0x643e4e0, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 mul(::Unity::Mathematics::uint2x2  a, ::Unity::Mathematics::uint2  b) ;

/// @brief Method mul, addr 0x643e610, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 mul(::Unity::Mathematics::uint2x3  a, ::Unity::Mathematics::uint3  b) ;

/// @brief Method mul, addr 0x643e7bc, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 mul(::Unity::Mathematics::uint2x4  a, ::Unity::Mathematics::uint4  b) ;

/// @brief Method mul, addr 0x643e2dc, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 mul(::Unity::Mathematics::uint3  a, ::Unity::Mathematics::uint3x2  b) ;

/// @brief Method mul, addr 0x643e3d4, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 mul(::Unity::Mathematics::uint4  a, ::Unity::Mathematics::uint4x2  b) ;

/// @brief Method mul, addr 0x643e504, size 0x3c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x2 mul(::Unity::Mathematics::uint2x2  a, ::Unity::Mathematics::uint2x2  b) ;

/// @brief Method mul, addr 0x643e640, size 0x54, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x2 mul(::Unity::Mathematics::uint2x3  a, ::Unity::Mathematics::uint3x2  b) ;

/// @brief Method mul, addr 0x643e808, size 0x6c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x2 mul(::Unity::Mathematics::uint2x4  a, ::Unity::Mathematics::uint4x2  b) ;

/// @brief Method mul, addr 0x643e540, size 0x5c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x3 mul(::Unity::Mathematics::uint2x2  a, ::Unity::Mathematics::uint2x3  b) ;

/// @brief Method mul, addr 0x643e694, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x3 mul(::Unity::Mathematics::uint2x3  a, ::Unity::Mathematics::uint3x3  b) ;

/// @brief Method mul, addr 0x643e874, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x3 mul(::Unity::Mathematics::uint2x4  a, ::Unity::Mathematics::uint4x3  b) ;

/// @brief Method mul, addr 0x643e59c, size 0x74, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x4 mul(::Unity::Mathematics::uint2x2  a, ::Unity::Mathematics::uint2x4  b) ;

/// @brief Method mul, addr 0x643e714, size 0xa8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x4 mul(::Unity::Mathematics::uint2x3  a, ::Unity::Mathematics::uint3x4  b) ;

/// @brief Method mul, addr 0x643e914, size 0xcc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x4 mul(::Unity::Mathematics::uint2x4  a, ::Unity::Mathematics::uint4x4  b) ;

/// @brief Method mul, addr 0x643e254, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 mul(::Unity::Mathematics::uint2  a, ::Unity::Mathematics::uint2x3  b) ;

/// @brief Method mul, addr 0x643e310, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 mul(::Unity::Mathematics::uint3  a, ::Unity::Mathematics::uint3x3  b) ;

/// @brief Method mul, addr 0x643e9e0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 mul(::Unity::Mathematics::uint3x2  a, ::Unity::Mathematics::uint2  b) ;

/// @brief Method mul, addr 0x643ebb0, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 mul(::Unity::Mathematics::uint3x3  a, ::Unity::Mathematics::uint3  b) ;

/// @brief Method mul, addr 0x643ee3c, size 0x68, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 mul(::Unity::Mathematics::uint3x4  a, ::Unity::Mathematics::uint4  b) ;

/// @brief Method mul, addr 0x643e414, size 0x58, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 mul(::Unity::Mathematics::uint4  a, ::Unity::Mathematics::uint4x3  b) ;

/// @brief Method mul, addr 0x643ea10, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x2 mul(::Unity::Mathematics::uint3x2  a, ::Unity::Mathematics::uint2x2  b) ;

/// @brief Method mul, addr 0x643ebf4, size 0x84, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x2 mul(::Unity::Mathematics::uint3x3  a, ::Unity::Mathematics::uint3x2  b) ;

/// @brief Method mul, addr 0x643eea4, size 0xac, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x2 mul(::Unity::Mathematics::uint3x4  a, ::Unity::Mathematics::uint4x2  b) ;

/// @brief Method mul, addr 0x643ea70, size 0x88, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x3 mul(::Unity::Mathematics::uint3x2  a, ::Unity::Mathematics::uint2x3  b) ;

/// @brief Method mul, addr 0x643ec78, size 0xc4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x3 mul(::Unity::Mathematics::uint3x3  a, ::Unity::Mathematics::uint3x3  b) ;

/// @brief Method mul, addr 0x643ef50, size 0xf8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x3 mul(::Unity::Mathematics::uint3x4  a, ::Unity::Mathematics::uint4x3  b) ;

/// @brief Method mul, addr 0x643eaf8, size 0xb8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x4 mul(::Unity::Mathematics::uint3x2  a, ::Unity::Mathematics::uint2x4  b) ;

/// @brief Method mul, addr 0x643ed3c, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x4 mul(::Unity::Mathematics::uint3x3  a, ::Unity::Mathematics::uint3x4  b) ;

/// @brief Method mul, addr 0x643f048, size 0x14c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x4 mul(::Unity::Mathematics::uint3x4  a, ::Unity::Mathematics::uint4x4  b) ;

/// @brief Method mul, addr 0x643e284, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 mul(::Unity::Mathematics::uint2  a, ::Unity::Mathematics::uint2x4  b) ;

/// @brief Method mul, addr 0x643e354, size 0x5c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 mul(::Unity::Mathematics::uint3  a, ::Unity::Mathematics::uint3x4  b) ;

/// @brief Method mul, addr 0x643e46c, size 0x74, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 mul(::Unity::Mathematics::uint4  a, ::Unity::Mathematics::uint4x4  b) ;

/// @brief Method mul, addr 0x643f194, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 mul(::Unity::Mathematics::uint4x2  a, ::Unity::Mathematics::uint2  b) ;

/// @brief Method mul, addr 0x643f3e8, size 0x68, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 mul(::Unity::Mathematics::uint4x3  a, ::Unity::Mathematics::uint3  b) ;

/// @brief Method mul, addr 0x643f740, size 0x8c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 mul(::Unity::Mathematics::uint4x4  a, ::Unity::Mathematics::uint4  b) ;

/// @brief Method mul, addr 0x643f1d8, size 0x78, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x2 mul(::Unity::Mathematics::uint4x2  a, ::Unity::Mathematics::uint2x2  b) ;

/// @brief Method mul, addr 0x643f450, size 0xa8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x2 mul(::Unity::Mathematics::uint4x3  a, ::Unity::Mathematics::uint3x2  b) ;

/// @brief Method mul, addr 0x643f7cc, size 0xe4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x2 mul(::Unity::Mathematics::uint4x4  a, ::Unity::Mathematics::uint4x2  b) ;

/// @brief Method mul, addr 0x643f250, size 0xac, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x3 mul(::Unity::Mathematics::uint4x2  a, ::Unity::Mathematics::uint2x3  b) ;

/// @brief Method mul, addr 0x643f4f8, size 0xfc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x3 mul(::Unity::Mathematics::uint4x3  a, ::Unity::Mathematics::uint3x3  b) ;

/// @brief Method mul, addr 0x643f8b0, size 0x148, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x3 mul(::Unity::Mathematics::uint4x4  a, ::Unity::Mathematics::uint4x3  b) ;

/// @brief Method mul, addr 0x643f2fc, size 0xec, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x4 mul(::Unity::Mathematics::uint4x2  a, ::Unity::Mathematics::uint2x4  b) ;

/// @brief Method mul, addr 0x643f5f4, size 0x14c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x4 mul(::Unity::Mathematics::uint4x3  a, ::Unity::Mathematics::uint3x4  b) ;

/// @brief Method mul, addr 0x643f9f8, size 0x1a4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x4 mul(::Unity::Mathematics::uint4x4  a, ::Unity::Mathematics::uint4x4  b) ;

/// @brief Method mul, addr 0x643b17c, size 0x10, virtual false, abstract: false, final false
static inline double_t mul(::Unity::Mathematics::double2  a, ::Unity::Mathematics::double2  b) ;

/// @brief Method mul, addr 0x643b220, size 0x18, virtual false, abstract: false, final false
static inline double_t mul(::Unity::Mathematics::double3  a, ::Unity::Mathematics::double3  b) ;

/// @brief Method mul, addr 0x643b340, size 0x20, virtual false, abstract: false, final false
static inline double_t mul(::Unity::Mathematics::double4  a, ::Unity::Mathematics::double4  b) ;

/// @brief Method mul, addr 0x643b174, size 0x8, virtual false, abstract: false, final false
static inline double_t mul(double_t  a, double_t  b) ;

/// @brief Method mul, addr 0x6439ba4, size 0x10, virtual false, abstract: false, final false
static inline float_t mul(::Unity::Mathematics::float2  a, ::Unity::Mathematics::float2  b) ;

/// @brief Method mul, addr 0x6439c48, size 0x18, virtual false, abstract: false, final false
static inline float_t mul(::Unity::Mathematics::float3  a, ::Unity::Mathematics::float3  b) ;

/// @brief Method mul, addr 0x6439d68, size 0x20, virtual false, abstract: false, final false
static inline float_t mul(::Unity::Mathematics::float4  a, ::Unity::Mathematics::float4  b) ;

/// @brief Method mul, addr 0x6439b9c, size 0x8, virtual false, abstract: false, final false
static inline float_t mul(float_t  a, float_t  b) ;

/// @brief Method mul, addr 0x643c894, size 0x14, virtual false, abstract: false, final false
static inline int32_t mul(::Unity::Mathematics::int2  a, ::Unity::Mathematics::int2  b) ;

/// @brief Method mul, addr 0x643c93c, size 0x18, virtual false, abstract: false, final false
static inline int32_t mul(::Unity::Mathematics::int3  a, ::Unity::Mathematics::int3  b) ;

/// @brief Method mul, addr 0x643ca28, size 0x24, virtual false, abstract: false, final false
static inline int32_t mul(::Unity::Mathematics::int4  a, ::Unity::Mathematics::int4  b) ;

/// @brief Method mul, addr 0x643c88c, size 0x8, virtual false, abstract: false, final false
static inline int32_t mul(int32_t  a, int32_t  b) ;

/// @brief Method mul, addr 0x643e21c, size 0x14, virtual false, abstract: false, final false
static inline uint32_t mul(::Unity::Mathematics::uint2  a, ::Unity::Mathematics::uint2  b) ;

/// @brief Method mul, addr 0x643e2c4, size 0x18, virtual false, abstract: false, final false
static inline uint32_t mul(::Unity::Mathematics::uint3  a, ::Unity::Mathematics::uint3  b) ;

/// @brief Method mul, addr 0x643e3b0, size 0x24, virtual false, abstract: false, final false
static inline uint32_t mul(::Unity::Mathematics::uint4  a, ::Unity::Mathematics::uint4  b) ;

/// @brief Method mul, addr 0x643e214, size 0x8, virtual false, abstract: false, final false
static inline uint32_t mul(uint32_t  a, uint32_t  b) ;

/// @brief Method mulScale, addr 0x64394e8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 mulScale(::Unity::Mathematics::float3x3  m, ::Unity::Mathematics::float3  s) ;

/// @brief Method nlerp, addr 0x6440700, size 0x174, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::quaternion nlerp(::Unity::Mathematics::quaternion  q1, ::Unity::Mathematics::quaternion  q2, float_t  t) ;

/// @brief Method normalize, addr 0x6431c0c, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 normalize(::Unity::Mathematics::double2  x) ;

/// @brief Method normalize, addr 0x6431c8c, size 0x98, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 normalize(::Unity::Mathematics::double3  x) ;

/// @brief Method normalize, addr 0x6431d24, size 0xa8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 normalize(::Unity::Mathematics::double4  x) ;

/// @brief Method normalize, addr 0x6431a4c, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 normalize(::Unity::Mathematics::float2  x) ;

/// @brief Method normalize, addr 0x6431acc, size 0x98, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 normalize(::Unity::Mathematics::float3  x) ;

/// @brief Method normalize, addr 0x6431b64, size 0xa8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 normalize(::Unity::Mathematics::float4  x) ;

/// @brief Method normalize, addr 0x643fd3c, size 0xa8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::quaternion normalize(::Unity::Mathematics::quaternion  q) ;

/// @brief Method normalizesafe, addr 0x6432018, size 0xa4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 normalizesafe(::Unity::Mathematics::double2  x, ::Unity::Mathematics::double2  defaultvalue) ;

/// @brief Method normalizesafe, addr 0x64320bc, size 0xc4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 normalizesafe(::Unity::Mathematics::double3  x, ::Unity::Mathematics::double3  defaultvalue) ;

/// @brief Method normalizesafe, addr 0x6432180, size 0xe4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 normalizesafe(::Unity::Mathematics::double4  x, ::Unity::Mathematics::double4  defaultvalue) ;

/// @brief Method normalizesafe, addr 0x6431dcc, size 0xa4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 normalizesafe(::Unity::Mathematics::float2  x, ::Unity::Mathematics::float2  defaultvalue) ;

/// @brief Method normalizesafe, addr 0x6431e70, size 0xc4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 normalizesafe(::Unity::Mathematics::float3  x, ::Unity::Mathematics::float3  defaultvalue) ;

/// @brief Method normalizesafe, addr 0x6431f34, size 0xe4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 normalizesafe(::Unity::Mathematics::float4  x, ::Unity::Mathematics::float4  defaultvalue) ;

/// @brief Method normalizesafe, addr 0x643fde4, size 0x110, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::quaternion normalizesafe(::Unity::Mathematics::quaternion  q) ;

/// @brief Method normalizesafe, addr 0x643fef4, size 0xe4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::quaternion normalizesafe(::Unity::Mathematics::quaternion  q, ::Unity::Mathematics::quaternion  defaultvalue) ;

/// @brief Method orthonormal_basis, addr 0x6437d70, size 0x5c, virtual false, abstract: false, final false
static inline void orthonormal_basis(::Unity::Mathematics::double3  normal, ::ByRef<::Unity::Mathematics::double3>  basis1, ::ByRef<::Unity::Mathematics::double3>  basis2) ;

/// @brief Method orthonormal_basis, addr 0x6437d14, size 0x5c, virtual false, abstract: false, final false
static inline void orthonormal_basis(::Unity::Mathematics::float3  normal, ::ByRef<::Unity::Mathematics::float3>  basis1, ::ByRef<::Unity::Mathematics::float3>  basis2) ;

/// @brief Method orthonormalize, addr 0x643975c, size 0x19c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 orthonormalize(::Unity::Mathematics::float3x3  i) ;

/// @brief Method pow, addr 0x642db84, size 0xc8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 pow(::Unity::Mathematics::double2  x, ::Unity::Mathematics::double2  y) ;

/// @brief Method pow, addr 0x642dc4c, size 0x120, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 pow(::Unity::Mathematics::double3  x, ::Unity::Mathematics::double3  y) ;

/// @brief Method pow, addr 0x642dd6c, size 0x178, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 pow(::Unity::Mathematics::double4  x, ::Unity::Mathematics::double4  y) ;

/// @brief Method pow, addr 0x642d79c, size 0xd0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 pow(::Unity::Mathematics::float2  x, ::Unity::Mathematics::float2  y) ;

/// @brief Method pow, addr 0x642d86c, size 0x128, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 pow(::Unity::Mathematics::float3  x, ::Unity::Mathematics::float3  y) ;

/// @brief Method pow, addr 0x642d994, size 0x188, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 pow(::Unity::Mathematics::float4  x, ::Unity::Mathematics::float4  y) ;

/// @brief Method pow, addr 0x642db1c, size 0x68, virtual false, abstract: false, final false
static inline double_t pow(double_t  x, double_t  y) ;

/// @brief Method pow, addr 0x642d72c, size 0x70, virtual false, abstract: false, final false
static inline float_t pow(float_t  x, float_t  y) ;

/// @brief Method project, addr 0x64340b0, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 project(::Unity::Mathematics::double2  a, ::Unity::Mathematics::double2  ontoB) ;

/// @brief Method project, addr 0x64340d8, size 0x3c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 project(::Unity::Mathematics::double3  a, ::Unity::Mathematics::double3  ontoB) ;

/// @brief Method project, addr 0x6434114, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 project(::Unity::Mathematics::double4  a, ::Unity::Mathematics::double4  ontoB) ;

/// @brief Method project, addr 0x6433e3c, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 project(::Unity::Mathematics::float2  a, ::Unity::Mathematics::float2  ontoB) ;

/// @brief Method project, addr 0x6433e64, size 0x3c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 project(::Unity::Mathematics::float3  a, ::Unity::Mathematics::float3  ontoB) ;

/// @brief Method project, addr 0x6433ea0, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 project(::Unity::Mathematics::float4  a, ::Unity::Mathematics::float4  ontoB) ;

/// @brief Method projectsafe, addr 0x6434174, size 0x58, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 projectsafe(::Unity::Mathematics::double2  a, ::Unity::Mathematics::double2  ontoB, ::Unity::Mathematics::double2  defaultValue) ;

/// @brief Method projectsafe, addr 0x64341cc, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 projectsafe(::Unity::Mathematics::double3  a, ::Unity::Mathematics::double3  ontoB, ::Unity::Mathematics::double3  defaultValue) ;

/// @brief Method projectsafe, addr 0x643425c, size 0xc8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 projectsafe(::Unity::Mathematics::double4  a, ::Unity::Mathematics::double4  ontoB, ::Unity::Mathematics::double4  defaultValue) ;

/// @brief Method projectsafe, addr 0x6433f00, size 0x58, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 projectsafe(::Unity::Mathematics::float2  a, ::Unity::Mathematics::float2  ontoB, ::Unity::Mathematics::float2  defaultValue) ;

/// @brief Method projectsafe, addr 0x6433f58, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 projectsafe(::Unity::Mathematics::float3  a, ::Unity::Mathematics::float3  ontoB, ::Unity::Mathematics::float3  defaultValue) ;

/// @brief Method projectsafe, addr 0x6433fe8, size 0xc8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 projectsafe(::Unity::Mathematics::float4  a, ::Unity::Mathematics::float4  ontoB, ::Unity::Mathematics::float4  defaultValue) ;

/// @brief Method pseudoinverse, addr 0x64398f8, size 0x2a4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 pseudoinverse(::Unity::Mathematics::float3x3  m) ;

/// @brief Method quaternion, addr 0x643fba4, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::quaternion quaternion(::Unity::Mathematics::float3x3  m) ;

/// @brief Method quaternion, addr 0x643fbe4, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::quaternion quaternion(::Unity::Mathematics::float4x4  m) ;

/// @brief Method quaternion, addr 0x643fba0, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::quaternion quaternion(::Unity::Mathematics::float4  value) ;

/// @brief Method quaternion, addr 0x643fb9c, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::quaternion quaternion(float_t  x, float_t  y, float_t  z, float_t  w) ;

/// @brief Method radians, addr 0x6436f08, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 radians(::Unity::Mathematics::double2  x) ;

/// @brief Method radians, addr 0x6436f1c, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 radians(::Unity::Mathematics::double3  x) ;

/// @brief Method radians, addr 0x6436f34, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 radians(::Unity::Mathematics::double4  x) ;

/// @brief Method radians, addr 0x6436eb0, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 radians(::Unity::Mathematics::float2  x) ;

/// @brief Method radians, addr 0x6436ec4, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 radians(::Unity::Mathematics::float3  x) ;

/// @brief Method radians, addr 0x6436edc, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 radians(::Unity::Mathematics::float4  x) ;

/// @brief Method radians, addr 0x6436ef8, size 0x10, virtual false, abstract: false, final false
static inline double_t radians(double_t  x) ;

/// @brief Method radians, addr 0x6436ea0, size 0x10, virtual false, abstract: false, final false
static inline float_t radians(float_t  x) ;

/// @brief Method rcp, addr 0x642d434, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 rcp(::Unity::Mathematics::double2  x) ;

/// @brief Method rcp, addr 0x642d444, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 rcp(::Unity::Mathematics::double3  x) ;

/// @brief Method rcp, addr 0x642d458, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 rcp(::Unity::Mathematics::double4  x) ;

/// @brief Method rcp, addr 0x642d3ec, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 rcp(::Unity::Mathematics::float2  x) ;

/// @brief Method rcp, addr 0x642d3fc, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 rcp(::Unity::Mathematics::float3  x) ;

/// @brief Method rcp, addr 0x642d410, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 rcp(::Unity::Mathematics::float4  x) ;

/// @brief Method rcp, addr 0x642d428, size 0xc, virtual false, abstract: false, final false
static inline double_t rcp(double_t  x) ;

/// @brief Method rcp, addr 0x642d3e0, size 0xc, virtual false, abstract: false, final false
static inline float_t rcp(float_t  x) ;

/// @brief Method read32_little_endian, addr 0x6437ed4, size 0x8, virtual false, abstract: false, final false
static inline uint32_t read32_little_endian(void*  pBuffer) ;

/// @brief Method reflect, addr 0x6433798, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 reflect(::Unity::Mathematics::double2  i, ::Unity::Mathematics::double2  n) ;

/// @brief Method reflect, addr 0x64337c0, size 0x3c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 reflect(::Unity::Mathematics::double3  i, ::Unity::Mathematics::double3  n) ;

/// @brief Method reflect, addr 0x64337fc, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 reflect(::Unity::Mathematics::double4  i, ::Unity::Mathematics::double4  n) ;

/// @brief Method reflect, addr 0x64336e4, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 reflect(::Unity::Mathematics::float2  i, ::Unity::Mathematics::float2  n) ;

/// @brief Method reflect, addr 0x643370c, size 0x3c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 reflect(::Unity::Mathematics::float3  i, ::Unity::Mathematics::float3  n) ;

/// @brief Method reflect, addr 0x6433748, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 reflect(::Unity::Mathematics::float4  i, ::Unity::Mathematics::float4  n) ;

/// @brief Method refract, addr 0x6433b44, size 0xd4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 refract(::Unity::Mathematics::double2  i, ::Unity::Mathematics::double2  n, double_t  indexOfRefraction) ;

/// @brief Method refract, addr 0x6433c18, size 0xfc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 refract(::Unity::Mathematics::double3  i, ::Unity::Mathematics::double3  n, double_t  indexOfRefraction) ;

/// @brief Method refract, addr 0x6433d14, size 0x128, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 refract(::Unity::Mathematics::double4  i, ::Unity::Mathematics::double4  n, double_t  indexOfRefraction) ;

/// @brief Method refract, addr 0x643384c, size 0xd4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 refract(::Unity::Mathematics::float2  i, ::Unity::Mathematics::float2  n, float_t  indexOfRefraction) ;

/// @brief Method refract, addr 0x6433920, size 0xfc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 refract(::Unity::Mathematics::float3  i, ::Unity::Mathematics::float3  n, float_t  indexOfRefraction) ;

/// @brief Method refract, addr 0x6433a1c, size 0x128, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 refract(::Unity::Mathematics::float4  i, ::Unity::Mathematics::float4  n, float_t  indexOfRefraction) ;

/// @brief Method remap, addr 0x6425b78, size 0x3c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 remap(::Unity::Mathematics::double2  srcStart, ::Unity::Mathematics::double2  srcEnd, ::Unity::Mathematics::double2  dstStart, ::Unity::Mathematics::double2  dstEnd, ::Unity::Mathematics::double2  x) ;

/// @brief Method remap, addr 0x6425bb4, size 0x64, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 remap(::Unity::Mathematics::double3  srcStart, ::Unity::Mathematics::double3  srcEnd, ::Unity::Mathematics::double3  dstStart, ::Unity::Mathematics::double3  dstEnd, ::Unity::Mathematics::double3  x) ;

/// @brief Method remap, addr 0x6425c18, size 0x84, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 remap(::Unity::Mathematics::double4  srcStart, ::Unity::Mathematics::double4  srcEnd, ::Unity::Mathematics::double4  dstStart, ::Unity::Mathematics::double4  dstEnd, ::Unity::Mathematics::double4  x) ;

/// @brief Method remap, addr 0x6425a34, size 0x3c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 remap(::Unity::Mathematics::float2  srcStart, ::Unity::Mathematics::float2  srcEnd, ::Unity::Mathematics::float2  dstStart, ::Unity::Mathematics::float2  dstEnd, ::Unity::Mathematics::float2  x) ;

/// @brief Method remap, addr 0x6425a70, size 0x68, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 remap(::Unity::Mathematics::float3  srcStart, ::Unity::Mathematics::float3  srcEnd, ::Unity::Mathematics::float3  dstStart, ::Unity::Mathematics::float3  dstEnd, ::Unity::Mathematics::float3  x) ;

/// @brief Method remap, addr 0x6425ad8, size 0x84, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 remap(::Unity::Mathematics::float4  srcStart, ::Unity::Mathematics::float4  srcEnd, ::Unity::Mathematics::float4  dstStart, ::Unity::Mathematics::float4  dstEnd, ::Unity::Mathematics::float4  x) ;

/// @brief Method remap, addr 0x6425b5c, size 0x1c, virtual false, abstract: false, final false
static inline double_t remap(double_t  srcStart, double_t  srcEnd, double_t  dstStart, double_t  dstEnd, double_t  x) ;

/// @brief Method remap, addr 0x6425a18, size 0x1c, virtual false, abstract: false, final false
static inline float_t remap(float_t  srcStart, float_t  srcEnd, float_t  dstStart, float_t  dstEnd, float_t  x) ;

/// @brief Method reversebits, addr 0x6435b30, size 0x6c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 reversebits(::Unity::Mathematics::int2  x) ;

/// @brief Method reversebits, addr 0x6435b9c, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 reversebits(::Unity::Mathematics::int3  x) ;

/// @brief Method reversebits, addr 0x6435c0c, size 0xdc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 reversebits(::Unity::Mathematics::int4  x) ;

/// @brief Method reversebits, addr 0x6435cf0, size 0x6c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 reversebits(::Unity::Mathematics::uint2  x) ;

/// @brief Method reversebits, addr 0x6435d5c, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 reversebits(::Unity::Mathematics::uint3  x) ;

/// @brief Method reversebits, addr 0x6435dcc, size 0xdc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 reversebits(::Unity::Mathematics::uint4  x) ;

/// @brief Method reversebits, addr 0x6435b28, size 0x8, virtual false, abstract: false, final false
static inline int32_t reversebits(int32_t  x) ;

/// @brief Method reversebits, addr 0x6435ea8, size 0x8, virtual false, abstract: false, final false
static inline int64_t reversebits(int64_t  x) ;

/// @brief Method reversebits, addr 0x6435ce8, size 0x8, virtual false, abstract: false, final false
static inline uint32_t reversebits(uint32_t  x) ;

/// @brief Method reversebits, addr 0x6435eb0, size 0x8, virtual false, abstract: false, final false
static inline uint64_t reversebits(uint64_t  x) ;

/// @brief Method right, addr 0x6438260, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 right() ;

/// @brief Method rol, addr 0x6435ec4, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 rol(::Unity::Mathematics::int2  x, int32_t  n) ;

/// @brief Method rol, addr 0x6435ee4, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 rol(::Unity::Mathematics::int3  x, int32_t  n) ;

/// @brief Method rol, addr 0x6435f08, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 rol(::Unity::Mathematics::int4  x, int32_t  n) ;

/// @brief Method rol, addr 0x6435f4c, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 rol(::Unity::Mathematics::uint2  x, int32_t  n) ;

/// @brief Method rol, addr 0x6435f6c, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 rol(::Unity::Mathematics::uint3  x, int32_t  n) ;

/// @brief Method rol, addr 0x6435f90, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 rol(::Unity::Mathematics::uint4  x, int32_t  n) ;

/// @brief Method rol, addr 0x6435eb8, size 0xc, virtual false, abstract: false, final false
static inline int32_t rol(int32_t  x, int32_t  n) ;

/// @brief Method rol, addr 0x6435fc8, size 0xc, virtual false, abstract: false, final false
static inline int64_t rol(int64_t  x, int32_t  n) ;

/// @brief Method rol, addr 0x6435f40, size 0xc, virtual false, abstract: false, final false
static inline uint32_t rol(uint32_t  x, int32_t  n) ;

/// @brief Method rol, addr 0x6435fd4, size 0xc, virtual false, abstract: false, final false
static inline uint64_t rol(uint64_t  x, int32_t  n) ;

/// @brief Method ror, addr 0x6435fe8, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 ror(::Unity::Mathematics::int2  x, int32_t  n) ;

/// @brief Method ror, addr 0x6436008, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 ror(::Unity::Mathematics::int3  x, int32_t  n) ;

/// @brief Method ror, addr 0x643602c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 ror(::Unity::Mathematics::int4  x, int32_t  n) ;

/// @brief Method ror, addr 0x643606c, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 ror(::Unity::Mathematics::uint2  x, int32_t  n) ;

/// @brief Method ror, addr 0x643608c, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 ror(::Unity::Mathematics::uint3  x, int32_t  n) ;

/// @brief Method ror, addr 0x64360b0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 ror(::Unity::Mathematics::uint4  x, int32_t  n) ;

/// @brief Method ror, addr 0x6435fe0, size 0x8, virtual false, abstract: false, final false
static inline int32_t ror(int32_t  x, int32_t  n) ;

/// @brief Method ror, addr 0x64360e8, size 0x8, virtual false, abstract: false, final false
static inline int64_t ror(int64_t  x, int32_t  n) ;

/// @brief Method ror, addr 0x6436064, size 0x8, virtual false, abstract: false, final false
static inline uint32_t ror(uint32_t  x, int32_t  n) ;

/// @brief Method ror, addr 0x64360f0, size 0x8, virtual false, abstract: false, final false
static inline uint64_t ror(uint64_t  x, int32_t  n) ;

/// @brief Method rotate, addr 0x641c838, size 0x58, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 rotate(::Unity::Mathematics::double4x4  a, ::Unity::Mathematics::double3  b) ;

/// @brief Method rotate, addr 0x6416aa4, size 0x48, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 rotate(::Unity::Mathematics::AffineTransform  a, ::Unity::Mathematics::float3  dir) ;

/// @brief Method rotate, addr 0x6441694, size 0x84, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 rotate(::Unity::Mathematics::RigidTransform  a, ::Unity::Mathematics::float3  dir) ;

/// @brief Method rotate, addr 0x641fefc, size 0x48, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 rotate(::Unity::Mathematics::float4x4  a, ::Unity::Mathematics::float3  b) ;

/// @brief Method rotate, addr 0x6440684, size 0x7c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 rotate(::Unity::Mathematics::quaternion  q, ::Unity::Mathematics::float3  v) ;

/// @brief Method rotation, addr 0x6440da0, size 0x25c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::quaternion rotation(::Unity::Mathematics::float3x3  m) ;

/// @brief Method round, addr 0x642c208, size 0x170, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 round(::Unity::Mathematics::double2  x) ;

/// @brief Method round, addr 0x642c378, size 0x214, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 round(::Unity::Mathematics::double3  x) ;

/// @brief Method round, addr 0x642c58c, size 0x2c0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 round(::Unity::Mathematics::double4  x) ;

/// @brief Method round, addr 0x642bac0, size 0x17c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 round(::Unity::Mathematics::float2  x) ;

/// @brief Method round, addr 0x642bc3c, size 0x22c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 round(::Unity::Mathematics::float3  x) ;

/// @brief Method round, addr 0x642be68, size 0x2d4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 round(::Unity::Mathematics::float4  x) ;

/// @brief Method round, addr 0x642c13c, size 0xcc, virtual false, abstract: false, final false
static inline double_t round(double_t  x) ;

/// @brief Method round, addr 0x642b9f4, size 0xcc, virtual false, abstract: false, final false
static inline float_t round(float_t  x) ;

/// @brief Method rsqrt, addr 0x643188c, size 0xa8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 rsqrt(::Unity::Mathematics::double2  x) ;

/// @brief Method rsqrt, addr 0x6431934, size 0xf0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 rsqrt(::Unity::Mathematics::double3  x) ;

/// @brief Method rsqrt, addr 0x6431a24, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 rsqrt(::Unity::Mathematics::double4  x) ;

/// @brief Method rsqrt, addr 0x6431664, size 0xa8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 rsqrt(::Unity::Mathematics::float2  x) ;

/// @brief Method rsqrt, addr 0x643170c, size 0xf0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 rsqrt(::Unity::Mathematics::float3  x) ;

/// @brief Method rsqrt, addr 0x64317fc, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 rsqrt(::Unity::Mathematics::float4  x) ;

/// @brief Method rsqrt, addr 0x6431824, size 0x68, virtual false, abstract: false, final false
static inline double_t rsqrt(double_t  x) ;

/// @brief Method rsqrt, addr 0x64315fc, size 0x68, virtual false, abstract: false, final false
static inline float_t rsqrt(float_t  x) ;

/// @brief Method saturate, addr 0x6426504, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 saturate(::Unity::Mathematics::double2  x) ;

/// @brief Method saturate, addr 0x6426544, size 0x88, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 saturate(::Unity::Mathematics::double3  x) ;

/// @brief Method saturate, addr 0x64265cc, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 saturate(::Unity::Mathematics::double4  x) ;

/// @brief Method saturate, addr 0x64263cc, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 saturate(::Unity::Mathematics::float2  x) ;

/// @brief Method saturate, addr 0x642640c, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 saturate(::Unity::Mathematics::float3  x) ;

/// @brief Method saturate, addr 0x642647c, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 saturate(::Unity::Mathematics::float4  x) ;

/// @brief Method saturate, addr 0x64264cc, size 0x38, virtual false, abstract: false, final false
static inline double_t saturate(double_t  x) ;

/// @brief Method saturate, addr 0x6426394, size 0x38, virtual false, abstract: false, final false
static inline float_t saturate(float_t  x) ;

/// @brief Method scaleMul, addr 0x6439520, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 scaleMul(::Unity::Mathematics::float3  s, ::Unity::Mathematics::float3x3  m) ;

/// @brief Method select, addr 0x6433590, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 select(::Unity::Mathematics::double2  falseValue, ::Unity::Mathematics::double2  trueValue, ::Unity::Mathematics::bool2  test) ;

/// @brief Method select, addr 0x6433554, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 select(::Unity::Mathematics::double2  falseValue, ::Unity::Mathematics::double2  trueValue, bool  test) ;

/// @brief Method select, addr 0x64335a4, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 select(::Unity::Mathematics::double3  falseValue, ::Unity::Mathematics::double3  trueValue, ::Unity::Mathematics::bool3  test) ;

/// @brief Method select, addr 0x6433564, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 select(::Unity::Mathematics::double3  falseValue, ::Unity::Mathematics::double3  trueValue, bool  test) ;

/// @brief Method select, addr 0x64335c0, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 select(::Unity::Mathematics::double4  falseValue, ::Unity::Mathematics::double4  trueValue, ::Unity::Mathematics::bool4  test) ;

/// @brief Method select, addr 0x6433578, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 select(::Unity::Mathematics::double4  falseValue, ::Unity::Mathematics::double4  trueValue, bool  test) ;

/// @brief Method select, addr 0x64334f4, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 select(::Unity::Mathematics::float2  falseValue, ::Unity::Mathematics::float2  trueValue, ::Unity::Mathematics::bool2  test) ;

/// @brief Method select, addr 0x64334b8, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 select(::Unity::Mathematics::float2  falseValue, ::Unity::Mathematics::float2  trueValue, bool  test) ;

/// @brief Method select, addr 0x6433508, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 select(::Unity::Mathematics::float3  falseValue, ::Unity::Mathematics::float3  trueValue, ::Unity::Mathematics::bool3  test) ;

/// @brief Method select, addr 0x64334c8, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 select(::Unity::Mathematics::float3  falseValue, ::Unity::Mathematics::float3  trueValue, bool  test) ;

/// @brief Method select, addr 0x6433524, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 select(::Unity::Mathematics::float4  falseValue, ::Unity::Mathematics::float4  trueValue, ::Unity::Mathematics::bool4  test) ;

/// @brief Method select, addr 0x64334dc, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 select(::Unity::Mathematics::float4  falseValue, ::Unity::Mathematics::float4  trueValue, bool  test) ;

/// @brief Method select, addr 0x6433388, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 select(::Unity::Mathematics::int2  falseValue, ::Unity::Mathematics::int2  trueValue, ::Unity::Mathematics::bool2  test) ;

/// @brief Method select, addr 0x6433358, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 select(::Unity::Mathematics::int2  falseValue, ::Unity::Mathematics::int2  trueValue, bool  test) ;

/// @brief Method select, addr 0x64333a0, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 select(::Unity::Mathematics::int3  falseValue, ::Unity::Mathematics::int3  trueValue, ::Unity::Mathematics::bool3  test) ;

/// @brief Method select, addr 0x6433364, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 select(::Unity::Mathematics::int3  falseValue, ::Unity::Mathematics::int3  trueValue, bool  test) ;

/// @brief Method select, addr 0x64333c4, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 select(::Unity::Mathematics::int4  falseValue, ::Unity::Mathematics::int4  trueValue, ::Unity::Mathematics::bool4  test) ;

/// @brief Method select, addr 0x6433378, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 select(::Unity::Mathematics::int4  falseValue, ::Unity::Mathematics::int4  trueValue, bool  test) ;

/// @brief Method select, addr 0x643342c, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 select(::Unity::Mathematics::uint2  falseValue, ::Unity::Mathematics::uint2  trueValue, ::Unity::Mathematics::bool2  test) ;

/// @brief Method select, addr 0x64333fc, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 select(::Unity::Mathematics::uint2  falseValue, ::Unity::Mathematics::uint2  trueValue, bool  test) ;

/// @brief Method select, addr 0x6433444, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 select(::Unity::Mathematics::uint3  falseValue, ::Unity::Mathematics::uint3  trueValue, ::Unity::Mathematics::bool3  test) ;

/// @brief Method select, addr 0x6433408, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 select(::Unity::Mathematics::uint3  falseValue, ::Unity::Mathematics::uint3  trueValue, bool  test) ;

/// @brief Method select, addr 0x6433468, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 select(::Unity::Mathematics::uint4  falseValue, ::Unity::Mathematics::uint4  trueValue, ::Unity::Mathematics::bool4  test) ;

/// @brief Method select, addr 0x643341c, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 select(::Unity::Mathematics::uint4  falseValue, ::Unity::Mathematics::uint4  trueValue, bool  test) ;

/// @brief Method select, addr 0x6433548, size 0xc, virtual false, abstract: false, final false
static inline double_t select(double_t  falseValue, double_t  trueValue, bool  test) ;

/// @brief Method select, addr 0x64334ac, size 0xc, virtual false, abstract: false, final false
static inline float_t select(float_t  falseValue, float_t  trueValue, bool  test) ;

/// @brief Method select, addr 0x643334c, size 0xc, virtual false, abstract: false, final false
static inline int32_t select(int32_t  falseValue, int32_t  trueValue, bool  test) ;

/// @brief Method select, addr 0x6433494, size 0xc, virtual false, abstract: false, final false
static inline int64_t select(int64_t  falseValue, int64_t  trueValue, bool  test) ;

/// @brief Method select, addr 0x64333f0, size 0xc, virtual false, abstract: false, final false
static inline uint32_t select(uint32_t  falseValue, uint32_t  trueValue, bool  test) ;

/// @brief Method select, addr 0x64334a0, size 0xc, virtual false, abstract: false, final false
static inline uint64_t select(uint64_t  falseValue, uint64_t  trueValue, bool  test) ;

/// @brief Method select_shuffle_component, addr 0x6417138, size 0xdc, virtual false, abstract: false, final false
static inline bool select_shuffle_component(::Unity::Mathematics::bool2  a, ::Unity::Mathematics::bool2  b, ::Unity::Mathematics::math_ShuffleComponent  component) ;

/// @brief Method select_shuffle_component, addr 0x6417a64, size 0xfc, virtual false, abstract: false, final false
static inline bool select_shuffle_component(::Unity::Mathematics::bool3  a, ::Unity::Mathematics::bool3  b, ::Unity::Mathematics::math_ShuffleComponent  component) ;

/// @brief Method select_shuffle_component, addr 0x64188a0, size 0x12c, virtual false, abstract: false, final false
static inline bool select_shuffle_component(::Unity::Mathematics::bool4  a, ::Unity::Mathematics::bool4  b, ::Unity::Mathematics::math_ShuffleComponent  component) ;

/// @brief Method select_shuffle_component, addr 0x64197f0, size 0xd8, virtual false, abstract: false, final false
static inline double_t select_shuffle_component(::Unity::Mathematics::double2  a, ::Unity::Mathematics::double2  b, ::Unity::Mathematics::math_ShuffleComponent  component) ;

/// @brief Method select_shuffle_component, addr 0x641a64c, size 0xf4, virtual false, abstract: false, final false
static inline double_t select_shuffle_component(::Unity::Mathematics::double3  a, ::Unity::Mathematics::double3  b, ::Unity::Mathematics::math_ShuffleComponent  component) ;

/// @brief Method select_shuffle_component, addr 0x641bb08, size 0x128, virtual false, abstract: false, final false
static inline double_t select_shuffle_component(::Unity::Mathematics::double4  a, ::Unity::Mathematics::double4  b, ::Unity::Mathematics::math_ShuffleComponent  component) ;

/// @brief Method select_shuffle_component, addr 0x641d4d4, size 0xd8, virtual false, abstract: false, final false
static inline float_t select_shuffle_component(::Unity::Mathematics::float2  a, ::Unity::Mathematics::float2  b, ::Unity::Mathematics::math_ShuffleComponent  component) ;

/// @brief Method select_shuffle_component, addr 0x641e1ac, size 0xf4, virtual false, abstract: false, final false
static inline float_t select_shuffle_component(::Unity::Mathematics::float3  a, ::Unity::Mathematics::float3  b, ::Unity::Mathematics::math_ShuffleComponent  component) ;

/// @brief Method select_shuffle_component, addr 0x641f3ac, size 0x128, virtual false, abstract: false, final false
static inline float_t select_shuffle_component(::Unity::Mathematics::float4  a, ::Unity::Mathematics::float4  b, ::Unity::Mathematics::math_ShuffleComponent  component) ;

/// @brief Method select_shuffle_component, addr 0x6421524, size 0xd0, virtual false, abstract: false, final false
static inline int32_t select_shuffle_component(::Unity::Mathematics::int2  a, ::Unity::Mathematics::int2  b, ::Unity::Mathematics::math_ShuffleComponent  component) ;

/// @brief Method select_shuffle_component, addr 0x6422318, size 0xec, virtual false, abstract: false, final false
static inline int32_t select_shuffle_component(::Unity::Mathematics::int3  a, ::Unity::Mathematics::int3  b, ::Unity::Mathematics::math_ShuffleComponent  component) ;

/// @brief Method select_shuffle_component, addr 0x64236b0, size 0x110, virtual false, abstract: false, final false
static inline int32_t select_shuffle_component(::Unity::Mathematics::int4  a, ::Unity::Mathematics::int4  b, ::Unity::Mathematics::math_ShuffleComponent  component) ;

/// @brief Method select_shuffle_component, addr 0x6441bb4, size 0xd0, virtual false, abstract: false, final false
static inline uint32_t select_shuffle_component(::Unity::Mathematics::uint2  a, ::Unity::Mathematics::uint2  b, ::Unity::Mathematics::math_ShuffleComponent  component) ;

/// @brief Method select_shuffle_component, addr 0x644290c, size 0xec, virtual false, abstract: false, final false
static inline uint32_t select_shuffle_component(::Unity::Mathematics::uint3  a, ::Unity::Mathematics::uint3  b, ::Unity::Mathematics::math_ShuffleComponent  component) ;

/// @brief Method select_shuffle_component, addr 0x6443c28, size 0x110, virtual false, abstract: false, final false
static inline uint32_t select_shuffle_component(::Unity::Mathematics::uint4  a, ::Unity::Mathematics::uint4  b, ::Unity::Mathematics::math_ShuffleComponent  component) ;

/// @brief Method shuffle, addr 0x6416f8c, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2 shuffle(::Unity::Mathematics::bool2  left, ::Unity::Mathematics::bool2  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y) ;

/// @brief Method shuffle, addr 0x64178b8, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2 shuffle(::Unity::Mathematics::bool3  left, ::Unity::Mathematics::bool3  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y) ;

/// @brief Method shuffle, addr 0x64186f4, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2 shuffle(::Unity::Mathematics::bool4  left, ::Unity::Mathematics::bool4  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y) ;

/// @brief Method shuffle, addr 0x6416fec, size 0x8c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 shuffle(::Unity::Mathematics::bool2  left, ::Unity::Mathematics::bool2  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y, ::Unity::Mathematics::math_ShuffleComponent  z) ;

/// @brief Method shuffle, addr 0x6417918, size 0x8c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 shuffle(::Unity::Mathematics::bool3  left, ::Unity::Mathematics::bool3  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y, ::Unity::Mathematics::math_ShuffleComponent  z) ;

/// @brief Method shuffle, addr 0x6418754, size 0x8c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 shuffle(::Unity::Mathematics::bool4  left, ::Unity::Mathematics::bool4  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y, ::Unity::Mathematics::math_ShuffleComponent  z) ;

/// @brief Method shuffle, addr 0x6417078, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4 shuffle(::Unity::Mathematics::bool2  left, ::Unity::Mathematics::bool2  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y, ::Unity::Mathematics::math_ShuffleComponent  z, ::Unity::Mathematics::math_ShuffleComponent  w) ;

/// @brief Method shuffle, addr 0x64179a4, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4 shuffle(::Unity::Mathematics::bool3  left, ::Unity::Mathematics::bool3  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y, ::Unity::Mathematics::math_ShuffleComponent  z, ::Unity::Mathematics::math_ShuffleComponent  w) ;

/// @brief Method shuffle, addr 0x64187e0, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4 shuffle(::Unity::Mathematics::bool4  left, ::Unity::Mathematics::bool4  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y, ::Unity::Mathematics::math_ShuffleComponent  z, ::Unity::Mathematics::math_ShuffleComponent  w) ;

/// @brief Method shuffle, addr 0x6419628, size 0x68, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 shuffle(::Unity::Mathematics::double2  left, ::Unity::Mathematics::double2  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y) ;

/// @brief Method shuffle, addr 0x641a424, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 shuffle(::Unity::Mathematics::double3  left, ::Unity::Mathematics::double3  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y) ;

/// @brief Method shuffle, addr 0x641b88c, size 0x98, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 shuffle(::Unity::Mathematics::double4  left, ::Unity::Mathematics::double4  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y) ;

/// @brief Method shuffle, addr 0x6419690, size 0x98, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 shuffle(::Unity::Mathematics::double2  left, ::Unity::Mathematics::double2  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y, ::Unity::Mathematics::math_ShuffleComponent  z) ;

/// @brief Method shuffle, addr 0x641a4a4, size 0xb8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 shuffle(::Unity::Mathematics::double3  left, ::Unity::Mathematics::double3  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y, ::Unity::Mathematics::math_ShuffleComponent  z) ;

/// @brief Method shuffle, addr 0x641b924, size 0xd8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 shuffle(::Unity::Mathematics::double4  left, ::Unity::Mathematics::double4  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y, ::Unity::Mathematics::math_ShuffleComponent  z) ;

/// @brief Method shuffle, addr 0x6419728, size 0xc8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 shuffle(::Unity::Mathematics::double2  left, ::Unity::Mathematics::double2  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y, ::Unity::Mathematics::math_ShuffleComponent  z, ::Unity::Mathematics::math_ShuffleComponent  w) ;

/// @brief Method shuffle, addr 0x641a55c, size 0xf0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 shuffle(::Unity::Mathematics::double3  left, ::Unity::Mathematics::double3  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y, ::Unity::Mathematics::math_ShuffleComponent  z, ::Unity::Mathematics::math_ShuffleComponent  w) ;

/// @brief Method shuffle, addr 0x641b9fc, size 0x10c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 shuffle(::Unity::Mathematics::double4  left, ::Unity::Mathematics::double4  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y, ::Unity::Mathematics::math_ShuffleComponent  z, ::Unity::Mathematics::math_ShuffleComponent  w) ;

/// @brief Method shuffle, addr 0x641d30c, size 0x68, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 shuffle(::Unity::Mathematics::float2  left, ::Unity::Mathematics::float2  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y) ;

/// @brief Method shuffle, addr 0x641df84, size 0x80, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 shuffle(::Unity::Mathematics::float3  left, ::Unity::Mathematics::float3  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y) ;

/// @brief Method shuffle, addr 0x641f13c, size 0x98, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 shuffle(::Unity::Mathematics::float4  left, ::Unity::Mathematics::float4  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y) ;

/// @brief Method shuffle, addr 0x641d374, size 0x98, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 shuffle(::Unity::Mathematics::float2  left, ::Unity::Mathematics::float2  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y, ::Unity::Mathematics::math_ShuffleComponent  z) ;

/// @brief Method shuffle, addr 0x641e004, size 0xb8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 shuffle(::Unity::Mathematics::float3  left, ::Unity::Mathematics::float3  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y, ::Unity::Mathematics::math_ShuffleComponent  z) ;

/// @brief Method shuffle, addr 0x641f1d4, size 0xcc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 shuffle(::Unity::Mathematics::float4  left, ::Unity::Mathematics::float4  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y, ::Unity::Mathematics::math_ShuffleComponent  z) ;

/// @brief Method shuffle, addr 0x641d40c, size 0xc8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 shuffle(::Unity::Mathematics::float2  left, ::Unity::Mathematics::float2  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y, ::Unity::Mathematics::math_ShuffleComponent  z, ::Unity::Mathematics::math_ShuffleComponent  w) ;

/// @brief Method shuffle, addr 0x641e0bc, size 0xf0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 shuffle(::Unity::Mathematics::float3  left, ::Unity::Mathematics::float3  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y, ::Unity::Mathematics::math_ShuffleComponent  z, ::Unity::Mathematics::math_ShuffleComponent  w) ;

/// @brief Method shuffle, addr 0x641f2a0, size 0x10c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 shuffle(::Unity::Mathematics::float4  left, ::Unity::Mathematics::float4  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y, ::Unity::Mathematics::math_ShuffleComponent  z, ::Unity::Mathematics::math_ShuffleComponent  w) ;

/// @brief Method shuffle, addr 0x64213c8, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 shuffle(::Unity::Mathematics::int2  left, ::Unity::Mathematics::int2  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y) ;

/// @brief Method shuffle, addr 0x6422144, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 shuffle(::Unity::Mathematics::int3  left, ::Unity::Mathematics::int3  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y) ;

/// @brief Method shuffle, addr 0x64234f4, size 0x68, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 shuffle(::Unity::Mathematics::int4  left, ::Unity::Mathematics::int4  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y) ;

/// @brief Method shuffle, addr 0x6421418, size 0x74, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 shuffle(::Unity::Mathematics::int2  left, ::Unity::Mathematics::int2  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y, ::Unity::Mathematics::math_ShuffleComponent  z) ;

/// @brief Method shuffle, addr 0x64221b4, size 0x9c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 shuffle(::Unity::Mathematics::int3  left, ::Unity::Mathematics::int3  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y, ::Unity::Mathematics::math_ShuffleComponent  z) ;

/// @brief Method shuffle, addr 0x642355c, size 0x94, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 shuffle(::Unity::Mathematics::int4  left, ::Unity::Mathematics::int4  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y, ::Unity::Mathematics::math_ShuffleComponent  z) ;

/// @brief Method shuffle, addr 0x642148c, size 0x98, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 shuffle(::Unity::Mathematics::int2  left, ::Unity::Mathematics::int2  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y, ::Unity::Mathematics::math_ShuffleComponent  z, ::Unity::Mathematics::math_ShuffleComponent  w) ;

/// @brief Method shuffle, addr 0x6422250, size 0xc8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 shuffle(::Unity::Mathematics::int3  left, ::Unity::Mathematics::int3  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y, ::Unity::Mathematics::math_ShuffleComponent  z, ::Unity::Mathematics::math_ShuffleComponent  w) ;

/// @brief Method shuffle, addr 0x64235f0, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 shuffle(::Unity::Mathematics::int4  left, ::Unity::Mathematics::int4  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y, ::Unity::Mathematics::math_ShuffleComponent  z, ::Unity::Mathematics::math_ShuffleComponent  w) ;

/// @brief Method shuffle, addr 0x6441a58, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 shuffle(::Unity::Mathematics::uint2  left, ::Unity::Mathematics::uint2  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y) ;

/// @brief Method shuffle, addr 0x6442738, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 shuffle(::Unity::Mathematics::uint3  left, ::Unity::Mathematics::uint3  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y) ;

/// @brief Method shuffle, addr 0x6443a6c, size 0x68, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 shuffle(::Unity::Mathematics::uint4  left, ::Unity::Mathematics::uint4  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y) ;

/// @brief Method shuffle, addr 0x6441aa8, size 0x74, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 shuffle(::Unity::Mathematics::uint2  left, ::Unity::Mathematics::uint2  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y, ::Unity::Mathematics::math_ShuffleComponent  z) ;

/// @brief Method shuffle, addr 0x64427a8, size 0x9c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 shuffle(::Unity::Mathematics::uint3  left, ::Unity::Mathematics::uint3  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y, ::Unity::Mathematics::math_ShuffleComponent  z) ;

/// @brief Method shuffle, addr 0x6443ad4, size 0x94, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 shuffle(::Unity::Mathematics::uint4  left, ::Unity::Mathematics::uint4  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y, ::Unity::Mathematics::math_ShuffleComponent  z) ;

/// @brief Method shuffle, addr 0x6441b1c, size 0x98, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 shuffle(::Unity::Mathematics::uint2  left, ::Unity::Mathematics::uint2  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y, ::Unity::Mathematics::math_ShuffleComponent  z, ::Unity::Mathematics::math_ShuffleComponent  w) ;

/// @brief Method shuffle, addr 0x6442844, size 0xc8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 shuffle(::Unity::Mathematics::uint3  left, ::Unity::Mathematics::uint3  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y, ::Unity::Mathematics::math_ShuffleComponent  z, ::Unity::Mathematics::math_ShuffleComponent  w) ;

/// @brief Method shuffle, addr 0x6443b68, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 shuffle(::Unity::Mathematics::uint4  left, ::Unity::Mathematics::uint4  right, ::Unity::Mathematics::math_ShuffleComponent  x, ::Unity::Mathematics::math_ShuffleComponent  y, ::Unity::Mathematics::math_ShuffleComponent  z, ::Unity::Mathematics::math_ShuffleComponent  w) ;

/// @brief Method shuffle, addr 0x6416f7c, size 0x10, virtual false, abstract: false, final false
static inline bool shuffle(::Unity::Mathematics::bool2  left, ::Unity::Mathematics::bool2  right, ::Unity::Mathematics::math_ShuffleComponent  x) ;

/// @brief Method shuffle, addr 0x64178a8, size 0x10, virtual false, abstract: false, final false
static inline bool shuffle(::Unity::Mathematics::bool3  left, ::Unity::Mathematics::bool3  right, ::Unity::Mathematics::math_ShuffleComponent  x) ;

/// @brief Method shuffle, addr 0x64186e4, size 0x10, virtual false, abstract: false, final false
static inline bool shuffle(::Unity::Mathematics::bool4  left, ::Unity::Mathematics::bool4  right, ::Unity::Mathematics::math_ShuffleComponent  x) ;

/// @brief Method shuffle, addr 0x6419620, size 0x8, virtual false, abstract: false, final false
static inline double_t shuffle(::Unity::Mathematics::double2  left, ::Unity::Mathematics::double2  right, ::Unity::Mathematics::math_ShuffleComponent  x) ;

/// @brief Method shuffle, addr 0x641a41c, size 0x8, virtual false, abstract: false, final false
static inline double_t shuffle(::Unity::Mathematics::double3  left, ::Unity::Mathematics::double3  right, ::Unity::Mathematics::math_ShuffleComponent  x) ;

/// @brief Method shuffle, addr 0x641b884, size 0x8, virtual false, abstract: false, final false
static inline double_t shuffle(::Unity::Mathematics::double4  left, ::Unity::Mathematics::double4  right, ::Unity::Mathematics::math_ShuffleComponent  x) ;

/// @brief Method shuffle, addr 0x641d304, size 0x8, virtual false, abstract: false, final false
static inline float_t shuffle(::Unity::Mathematics::float2  left, ::Unity::Mathematics::float2  right, ::Unity::Mathematics::math_ShuffleComponent  x) ;

/// @brief Method shuffle, addr 0x641df7c, size 0x8, virtual false, abstract: false, final false
static inline float_t shuffle(::Unity::Mathematics::float3  left, ::Unity::Mathematics::float3  right, ::Unity::Mathematics::math_ShuffleComponent  x) ;

/// @brief Method shuffle, addr 0x641f134, size 0x8, virtual false, abstract: false, final false
static inline float_t shuffle(::Unity::Mathematics::float4  left, ::Unity::Mathematics::float4  right, ::Unity::Mathematics::math_ShuffleComponent  x) ;

/// @brief Method shuffle, addr 0x64213c0, size 0x8, virtual false, abstract: false, final false
static inline int32_t shuffle(::Unity::Mathematics::int2  left, ::Unity::Mathematics::int2  right, ::Unity::Mathematics::math_ShuffleComponent  x) ;

/// @brief Method shuffle, addr 0x6422134, size 0x10, virtual false, abstract: false, final false
static inline int32_t shuffle(::Unity::Mathematics::int3  left, ::Unity::Mathematics::int3  right, ::Unity::Mathematics::math_ShuffleComponent  x) ;

/// @brief Method shuffle, addr 0x64234ec, size 0x8, virtual false, abstract: false, final false
static inline int32_t shuffle(::Unity::Mathematics::int4  left, ::Unity::Mathematics::int4  right, ::Unity::Mathematics::math_ShuffleComponent  x) ;

/// @brief Method shuffle, addr 0x6441a50, size 0x8, virtual false, abstract: false, final false
static inline uint32_t shuffle(::Unity::Mathematics::uint2  left, ::Unity::Mathematics::uint2  right, ::Unity::Mathematics::math_ShuffleComponent  x) ;

/// @brief Method shuffle, addr 0x6442728, size 0x10, virtual false, abstract: false, final false
static inline uint32_t shuffle(::Unity::Mathematics::uint3  left, ::Unity::Mathematics::uint3  right, ::Unity::Mathematics::math_ShuffleComponent  x) ;

/// @brief Method shuffle, addr 0x6443a64, size 0x8, virtual false, abstract: false, final false
static inline uint32_t shuffle(::Unity::Mathematics::uint4  left, ::Unity::Mathematics::uint4  right, ::Unity::Mathematics::math_ShuffleComponent  x) ;

/// @brief Method sign, addr 0x642d5f8, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 sign(::Unity::Mathematics::double2  x) ;

/// @brief Method sign, addr 0x642d63c, size 0x68, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 sign(::Unity::Mathematics::double3  x) ;

/// @brief Method sign, addr 0x642d6a4, size 0x88, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 sign(::Unity::Mathematics::double4  x) ;

/// @brief Method sign, addr 0x642d53c, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 sign(::Unity::Mathematics::float2  x) ;

/// @brief Method sign, addr 0x642d560, size 0x3c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 sign(::Unity::Mathematics::float3  x) ;

/// @brief Method sign, addr 0x642d59c, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 sign(::Unity::Mathematics::float4  x) ;

/// @brief Method sign, addr 0x642d480, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 sign(::Unity::Mathematics::int2  x) ;

/// @brief Method sign, addr 0x642d4a4, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 sign(::Unity::Mathematics::int3  x) ;

/// @brief Method sign, addr 0x642d4d4, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 sign(::Unity::Mathematics::int4  x) ;

/// @brief Method sign, addr 0x642d5d0, size 0x28, virtual false, abstract: false, final false
static inline double_t sign(double_t  x) ;

/// @brief Method sign, addr 0x642d520, size 0x1c, virtual false, abstract: false, final false
static inline float_t sign(float_t  x) ;

/// @brief Method sign, addr 0x642d470, size 0x10, virtual false, abstract: false, final false
static inline int32_t sign(int32_t  x) ;

/// @brief Method sin, addr 0x6429d74, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 sin(::Unity::Mathematics::double2  x) ;

/// @brief Method sin, addr 0x6429e24, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 sin(::Unity::Mathematics::double3  x) ;

/// @brief Method sin, addr 0x6429f24, size 0x148, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 sin(::Unity::Mathematics::double4  x) ;

/// @brief Method sin, addr 0x6429a00, size 0xb8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 sin(::Unity::Mathematics::float2  x) ;

/// @brief Method sin, addr 0x6429ab8, size 0x108, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 sin(::Unity::Mathematics::float3  x) ;

/// @brief Method sin, addr 0x6429bc0, size 0x154, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 sin(::Unity::Mathematics::float4  x) ;

/// @brief Method sin, addr 0x6429d14, size 0x60, virtual false, abstract: false, final false
static inline double_t sin(double_t  x) ;

/// @brief Method sin, addr 0x6429998, size 0x68, virtual false, abstract: false, final false
static inline float_t sin(float_t  x) ;

/// @brief Method sincos, addr 0x6434830, size 0x148, virtual false, abstract: false, final false
static inline void sincos(::Unity::Mathematics::double2  x, ::ByRef<::Unity::Mathematics::double2>  s, ::ByRef<::Unity::Mathematics::double2>  c) ;

/// @brief Method sincos, addr 0x6434978, size 0x1dc, virtual false, abstract: false, final false
static inline void sincos(::Unity::Mathematics::double3  x, ::ByRef<::Unity::Mathematics::double3>  s, ::ByRef<::Unity::Mathematics::double3>  c) ;

/// @brief Method sincos, addr 0x6434b54, size 0x6c, virtual false, abstract: false, final false
static inline void sincos(::Unity::Mathematics::double4  x, ::ByRef<::Unity::Mathematics::double4>  s, ::ByRef<::Unity::Mathematics::double4>  c) ;

/// @brief Method sincos, addr 0x643454c, size 0x158, virtual false, abstract: false, final false
static inline void sincos(::Unity::Mathematics::float2  x, ::ByRef<::Unity::Mathematics::float2>  s, ::ByRef<::Unity::Mathematics::float2>  c) ;

/// @brief Method sincos, addr 0x64346a4, size 0x64, virtual false, abstract: false, final false
static inline void sincos(::Unity::Mathematics::float3  x, ::ByRef<::Unity::Mathematics::float3>  s, ::ByRef<::Unity::Mathematics::float3>  c) ;

/// @brief Method sincos, addr 0x6434708, size 0x6c, virtual false, abstract: false, final false
static inline void sincos(::Unity::Mathematics::float4  x, ::ByRef<::Unity::Mathematics::float4>  s, ::ByRef<::Unity::Mathematics::float4>  c) ;

/// @brief Method sincos, addr 0x6434774, size 0xbc, virtual false, abstract: false, final false
static inline void sincos(double_t  x, ::ByRef<double_t>  s, ::ByRef<double_t>  c) ;

/// @brief Method sincos, addr 0x6434484, size 0xc8, virtual false, abstract: false, final false
static inline void sincos(float_t  x, ::ByRef<float_t>  s, ::ByRef<float_t>  c) ;

/// @brief Method sinh, addr 0x642a448, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 sinh(::Unity::Mathematics::double2  x) ;

/// @brief Method sinh, addr 0x642a4f8, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 sinh(::Unity::Mathematics::double3  x) ;

/// @brief Method sinh, addr 0x642a5f8, size 0x148, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 sinh(::Unity::Mathematics::double4  x) ;

/// @brief Method sinh, addr 0x642a0d4, size 0xb8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 sinh(::Unity::Mathematics::float2  x) ;

/// @brief Method sinh, addr 0x642a18c, size 0x108, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 sinh(::Unity::Mathematics::float3  x) ;

/// @brief Method sinh, addr 0x642a294, size 0x154, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 sinh(::Unity::Mathematics::float4  x) ;

/// @brief Method sinh, addr 0x642a3e8, size 0x60, virtual false, abstract: false, final false
static inline double_t sinh(double_t  x) ;

/// @brief Method sinh, addr 0x642a06c, size 0x68, virtual false, abstract: false, final false
static inline float_t sinh(float_t  x) ;

/// @brief Method slerp, addr 0x6440874, size 0x374, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::quaternion slerp(::Unity::Mathematics::quaternion  q1, ::Unity::Mathematics::quaternion  q2, float_t  t) ;

/// @brief Method smoothstep, addr 0x6432db8, size 0x68, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 smoothstep(::Unity::Mathematics::double2  xMin, ::Unity::Mathematics::double2  xMax, ::Unity::Mathematics::double2  x) ;

/// @brief Method smoothstep, addr 0x6432e20, size 0xec, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 smoothstep(::Unity::Mathematics::double3  xMin, ::Unity::Mathematics::double3  xMax, ::Unity::Mathematics::double3  x) ;

/// @brief Method smoothstep, addr 0x6432f0c, size 0x134, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 smoothstep(::Unity::Mathematics::double4  xMin, ::Unity::Mathematics::double4  xMax, ::Unity::Mathematics::double4  x) ;

/// @brief Method smoothstep, addr 0x6432b9c, size 0x68, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 smoothstep(::Unity::Mathematics::float2  xMin, ::Unity::Mathematics::float2  xMax, ::Unity::Mathematics::float2  x) ;

/// @brief Method smoothstep, addr 0x6432c04, size 0xc4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 smoothstep(::Unity::Mathematics::float3  xMin, ::Unity::Mathematics::float3  xMax, ::Unity::Mathematics::float3  x) ;

/// @brief Method smoothstep, addr 0x6432cc8, size 0x98, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 smoothstep(::Unity::Mathematics::float4  xMin, ::Unity::Mathematics::float4  xMax, ::Unity::Mathematics::float4  x) ;

/// @brief Method smoothstep, addr 0x6432d60, size 0x58, virtual false, abstract: false, final false
static inline double_t smoothstep(double_t  xMin, double_t  xMax, double_t  x) ;

/// @brief Method smoothstep, addr 0x6432b44, size 0x58, virtual false, abstract: false, final false
static inline float_t smoothstep(float_t  xMin, float_t  xMax, float_t  x) ;

/// @brief Method sqrt, addr 0x6431364, size 0x9c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 sqrt(::Unity::Mathematics::double2  x) ;

/// @brief Method sqrt, addr 0x6431400, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 sqrt(::Unity::Mathematics::double3  x) ;

/// @brief Method sqrt, addr 0x64314e0, size 0x11c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 sqrt(::Unity::Mathematics::double4  x) ;

/// @brief Method sqrt, addr 0x643106c, size 0x9c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 sqrt(::Unity::Mathematics::float2  x) ;

/// @brief Method sqrt, addr 0x6431108, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 sqrt(::Unity::Mathematics::float3  x) ;

/// @brief Method sqrt, addr 0x64311e8, size 0x11c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 sqrt(::Unity::Mathematics::float4  x) ;

/// @brief Method sqrt, addr 0x6431304, size 0x60, virtual false, abstract: false, final false
static inline double_t sqrt(double_t  x) ;

/// @brief Method sqrt, addr 0x643100c, size 0x60, virtual false, abstract: false, final false
static inline float_t sqrt(float_t  x) ;

/// @brief Method square, addr 0x6437460, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 square(::Unity::Mathematics::double2  x) ;

/// @brief Method square, addr 0x643746c, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 square(::Unity::Mathematics::double3  x) ;

/// @brief Method square, addr 0x643747c, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 square(::Unity::Mathematics::double4  x) ;

/// @brief Method square, addr 0x6437428, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 square(::Unity::Mathematics::float2  x) ;

/// @brief Method square, addr 0x6437434, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 square(::Unity::Mathematics::float3  x) ;

/// @brief Method square, addr 0x6437444, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 square(::Unity::Mathematics::float4  x) ;

/// @brief Method square, addr 0x6437498, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 square(::Unity::Mathematics::int2  x) ;

/// @brief Method square, addr 0x64374b0, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 square(::Unity::Mathematics::int3  x) ;

/// @brief Method square, addr 0x64374cc, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 square(::Unity::Mathematics::int4  x) ;

/// @brief Method square, addr 0x6437500, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 square(::Unity::Mathematics::uint2  x) ;

/// @brief Method square, addr 0x6437518, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 square(::Unity::Mathematics::uint3  x) ;

/// @brief Method square, addr 0x6437534, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 square(::Unity::Mathematics::uint4  x) ;

/// @brief Method square, addr 0x6437458, size 0x8, virtual false, abstract: false, final false
static inline double_t square(double_t  x) ;

/// @brief Method square, addr 0x6437420, size 0x8, virtual false, abstract: false, final false
static inline float_t square(float_t  x) ;

/// @brief Method square, addr 0x6437490, size 0x8, virtual false, abstract: false, final false
static inline int32_t square(int32_t  x) ;

/// @brief Method square, addr 0x64374f8, size 0x8, virtual false, abstract: false, final false
static inline uint32_t square(uint32_t  x) ;

/// @brief Method step, addr 0x6433678, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 step(::Unity::Mathematics::double2  threshold, ::Unity::Mathematics::double2  x) ;

/// @brief Method step, addr 0x6433694, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 step(::Unity::Mathematics::double3  threshold, ::Unity::Mathematics::double3  x) ;

/// @brief Method step, addr 0x64336b8, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 step(::Unity::Mathematics::double4  threshold, ::Unity::Mathematics::double4  x) ;

/// @brief Method step, addr 0x64335f8, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 step(::Unity::Mathematics::float2  threshold, ::Unity::Mathematics::float2  x) ;

/// @brief Method step, addr 0x6433614, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 step(::Unity::Mathematics::float3  threshold, ::Unity::Mathematics::float3  x) ;

/// @brief Method step, addr 0x6433638, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 step(::Unity::Mathematics::float4  threshold, ::Unity::Mathematics::float4  x) ;

/// @brief Method step, addr 0x6433664, size 0x14, virtual false, abstract: false, final false
static inline double_t step(double_t  threshold, double_t  x) ;

/// @brief Method step, addr 0x64335e4, size 0x14, virtual false, abstract: false, final false
static inline float_t step(float_t  threshold, float_t  x) ;

/// @brief Method tan, addr 0x6426cc8, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 tan(::Unity::Mathematics::double2  x) ;

/// @brief Method tan, addr 0x6426d78, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 tan(::Unity::Mathematics::double3  x) ;

/// @brief Method tan, addr 0x6426e78, size 0x148, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 tan(::Unity::Mathematics::double4  x) ;

/// @brief Method tan, addr 0x6426954, size 0xb8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 tan(::Unity::Mathematics::float2  x) ;

/// @brief Method tan, addr 0x6426a0c, size 0x108, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 tan(::Unity::Mathematics::float3  x) ;

/// @brief Method tan, addr 0x6426b14, size 0x154, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 tan(::Unity::Mathematics::float4  x) ;

/// @brief Method tan, addr 0x6426c68, size 0x60, virtual false, abstract: false, final false
static inline double_t tan(double_t  x) ;

/// @brief Method tan, addr 0x64268ec, size 0x68, virtual false, abstract: false, final false
static inline float_t tan(float_t  x) ;

/// @brief Method tanh, addr 0x642739c, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 tanh(::Unity::Mathematics::double2  x) ;

/// @brief Method tanh, addr 0x642744c, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 tanh(::Unity::Mathematics::double3  x) ;

/// @brief Method tanh, addr 0x642754c, size 0x148, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 tanh(::Unity::Mathematics::double4  x) ;

/// @brief Method tanh, addr 0x6427028, size 0xb8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 tanh(::Unity::Mathematics::float2  x) ;

/// @brief Method tanh, addr 0x64270e0, size 0x108, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 tanh(::Unity::Mathematics::float3  x) ;

/// @brief Method tanh, addr 0x64271e8, size 0x154, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 tanh(::Unity::Mathematics::float4  x) ;

/// @brief Method tanh, addr 0x642733c, size 0x60, virtual false, abstract: false, final false
static inline double_t tanh(double_t  x) ;

/// @brief Method tanh, addr 0x6426fc0, size 0x68, virtual false, abstract: false, final false
static inline float_t tanh(float_t  x) ;

/// @brief Method transform, addr 0x641c890, size 0x6c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 transform(::Unity::Mathematics::double4x4  a, ::Unity::Mathematics::double3  b) ;

/// @brief Method transform, addr 0x6416aec, size 0x58, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 transform(::Unity::Mathematics::AffineTransform  a, ::Unity::Mathematics::float3  pos) ;

/// @brief Method transform, addr 0x6441718, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 transform(::Unity::Mathematics::RigidTransform  a, ::Unity::Mathematics::float3  pos) ;

/// @brief Method transform, addr 0x641ff44, size 0x58, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 transform(::Unity::Mathematics::float4x4  a, ::Unity::Mathematics::float3  b) ;

/// @brief Method transpose, addr 0x6417258, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x2 transpose(::Unity::Mathematics::bool2x2  v) ;

/// @brief Method transpose, addr 0x6417bd8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x3 transpose(::Unity::Mathematics::bool3x2  v) ;

/// @brief Method transpose, addr 0x6418a40, size 0x74, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2x4 transpose(::Unity::Mathematics::bool4x2  v) ;

/// @brief Method transpose, addr 0x64173c8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x2 transpose(::Unity::Mathematics::bool2x3  v) ;

/// @brief Method transpose, addr 0x6417e50, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x3 transpose(::Unity::Mathematics::bool3x3  v) ;

/// @brief Method transpose, addr 0x6418cfc, size 0x70, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3x4 transpose(::Unity::Mathematics::bool4x3  v) ;

/// @brief Method transpose, addr 0x64175bc, size 0x48, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x2 transpose(::Unity::Mathematics::bool2x4  v) ;

/// @brief Method transpose, addr 0x64181d4, size 0xa4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x3 transpose(::Unity::Mathematics::bool3x4  v) ;

/// @brief Method transpose, addr 0x64190a8, size 0xc4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4x4 transpose(::Unity::Mathematics::bool4x4  v) ;

/// @brief Method transpose, addr 0x64199c0, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x2 transpose(::Unity::Mathematics::double2x2  v) ;

/// @brief Method transpose, addr 0x641a89c, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x3 transpose(::Unity::Mathematics::double3x2  v) ;

/// @brief Method transpose, addr 0x641bde0, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2x4 transpose(::Unity::Mathematics::double4x2  v) ;

/// @brief Method transpose, addr 0x6419c60, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x2 transpose(::Unity::Mathematics::double2x3  v) ;

/// @brief Method transpose, addr 0x641ac14, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x3 transpose(::Unity::Mathematics::double3x3  v) ;

/// @brief Method transpose, addr 0x641c23c, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3x4 transpose(::Unity::Mathematics::double4x3  v) ;

/// @brief Method transpose, addr 0x6419f78, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x2 transpose(::Unity::Mathematics::double2x4  v) ;

/// @brief Method transpose, addr 0x641b1dc, size 0x3c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x3 transpose(::Unity::Mathematics::double3x4  v) ;

/// @brief Method transpose, addr 0x641c8fc, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4x4 transpose(::Unity::Mathematics::double4x4  v) ;

/// @brief Method transpose, addr 0x641d6a4, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x2 transpose(::Unity::Mathematics::float2x2  v) ;

/// @brief Method transpose, addr 0x641e3fc, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x3 transpose(::Unity::Mathematics::float3x2  v) ;

/// @brief Method transpose, addr 0x641f660, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2x4 transpose(::Unity::Mathematics::float4x2  v) ;

/// @brief Method transpose, addr 0x641d904, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x2 transpose(::Unity::Mathematics::float2x3  v) ;

/// @brief Method transpose, addr 0x641e704, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x3 transpose(::Unity::Mathematics::float3x3  v) ;

/// @brief Method transpose, addr 0x641fa10, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3x4 transpose(::Unity::Mathematics::float4x3  v) ;

/// @brief Method transpose, addr 0x641dba4, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x2 transpose(::Unity::Mathematics::float2x4  v) ;

/// @brief Method transpose, addr 0x641ec00, size 0x3c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x3 transpose(::Unity::Mathematics::float3x4  v) ;

/// @brief Method transpose, addr 0x641ff9c, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x4 transpose(::Unity::Mathematics::float4x4  v) ;

/// @brief Method transpose, addr 0x6421758, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x2 transpose(::Unity::Mathematics::int2x2  v) ;

/// @brief Method transpose, addr 0x6422644, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x3 transpose(::Unity::Mathematics::int3x2  v) ;

/// @brief Method transpose, addr 0x6423a2c, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2x4 transpose(::Unity::Mathematics::int4x2  v) ;

/// @brief Method transpose, addr 0x6421a68, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x2 transpose(::Unity::Mathematics::int2x3  v) ;

/// @brief Method transpose, addr 0x6422a94, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x3 transpose(::Unity::Mathematics::int3x3  v) ;

/// @brief Method transpose, addr 0x6423ef0, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3x4 transpose(::Unity::Mathematics::int4x3  v) ;

/// @brief Method transpose, addr 0x6421e1c, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x2 transpose(::Unity::Mathematics::int2x4  v) ;

/// @brief Method transpose, addr 0x6423080, size 0x3c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x3 transpose(::Unity::Mathematics::int3x4  v) ;

/// @brief Method transpose, addr 0x6424520, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4x4 transpose(::Unity::Mathematics::int4x4  v) ;

/// @brief Method transpose, addr 0x6441db8, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x2 transpose(::Unity::Mathematics::uint2x2  v) ;

/// @brief Method transpose, addr 0x6442c28, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x3 transpose(::Unity::Mathematics::uint3x2  v) ;

/// @brief Method transpose, addr 0x6443f98, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x4 transpose(::Unity::Mathematics::uint4x2  v) ;

/// @brief Method transpose, addr 0x644208c, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x2 transpose(::Unity::Mathematics::uint2x3  v) ;

/// @brief Method transpose, addr 0x6443078, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x3 transpose(::Unity::Mathematics::uint3x3  v) ;

/// @brief Method transpose, addr 0x6444460, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x4 transpose(::Unity::Mathematics::uint4x3  v) ;

/// @brief Method transpose, addr 0x6442430, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x2 transpose(::Unity::Mathematics::uint2x4  v) ;

/// @brief Method transpose, addr 0x6443628, size 0x3c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x3 transpose(::Unity::Mathematics::uint3x4  v) ;

/// @brief Method transpose, addr 0x6444aa4, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x4 transpose(::Unity::Mathematics::uint4x4  v) ;

/// @brief Method trunc, addr 0x642cc54, size 0xb8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 trunc(::Unity::Mathematics::double2  x) ;

/// @brief Method trunc, addr 0x642cd0c, size 0x10c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 trunc(::Unity::Mathematics::double3  x) ;

/// @brief Method trunc, addr 0x642ce18, size 0x158, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 trunc(::Unity::Mathematics::double4  x) ;

/// @brief Method trunc, addr 0x642c8b8, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 trunc(::Unity::Mathematics::float2  x) ;

/// @brief Method trunc, addr 0x642c978, size 0x114, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 trunc(::Unity::Mathematics::float3  x) ;

/// @brief Method trunc, addr 0x642ca8c, size 0x164, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 trunc(::Unity::Mathematics::float4  x) ;

/// @brief Method trunc, addr 0x642cbf0, size 0x64, virtual false, abstract: false, final false
static inline double_t trunc(double_t  x) ;

/// @brief Method trunc, addr 0x642c84c, size 0x6c, virtual false, abstract: false, final false
static inline float_t trunc(float_t  x) ;

/// @brief Method tzcnt, addr 0x64355b4, size 0x88, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 tzcnt(::Unity::Mathematics::int2  x) ;

/// @brief Method tzcnt, addr 0x6435838, size 0x88, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int2 tzcnt(::Unity::Mathematics::uint2  x) ;

/// @brief Method tzcnt, addr 0x643563c, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 tzcnt(::Unity::Mathematics::int3  x) ;

/// @brief Method tzcnt, addr 0x64358c0, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 tzcnt(::Unity::Mathematics::uint3  x) ;

/// @brief Method tzcnt, addr 0x64356fc, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 tzcnt(::Unity::Mathematics::int4  x) ;

/// @brief Method tzcnt, addr 0x6435980, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 tzcnt(::Unity::Mathematics::uint4  x) ;

/// @brief Method tzcnt, addr 0x6435578, size 0x3c, virtual false, abstract: false, final false
static inline int32_t tzcnt(int32_t  x) ;

/// @brief Method tzcnt, addr 0x6435a80, size 0x54, virtual false, abstract: false, final false
static inline int32_t tzcnt(int64_t  x) ;

/// @brief Method tzcnt, addr 0x64357fc, size 0x3c, virtual false, abstract: false, final false
static inline int32_t tzcnt(uint32_t  x) ;

/// @brief Method tzcnt, addr 0x6435ad4, size 0x54, virtual false, abstract: false, final false
static inline int32_t tzcnt(uint64_t  x) ;

/// @brief Method uint2, addr 0x6441948, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 uint2(::Unity::Mathematics::bool2  v) ;

/// @brief Method uint2, addr 0x64419c0, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 uint2(::Unity::Mathematics::double2  v) ;

/// @brief Method uint2, addr 0x6441980, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 uint2(::Unity::Mathematics::float2  v) ;

/// @brief Method uint2, addr 0x6441964, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 uint2(::Unity::Mathematics::int2  v) ;

/// @brief Method uint2, addr 0x6441930, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 uint2(bool  v) ;

/// @brief Method uint2, addr 0x64419a8, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 uint2(double_t  v) ;

/// @brief Method uint2, addr 0x6441968, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 uint2(float_t  v) ;

/// @brief Method uint2, addr 0x6441958, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 uint2(int32_t  v) ;

/// @brief Method uint2, addr 0x6441924, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 uint2(uint32_t  v) ;

/// @brief Method uint2, addr 0x6441914, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 uint2(uint32_t  x, uint32_t  y) ;

/// @brief Method uint2, addr 0x6441920, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2 uint2(::Unity::Mathematics::uint2  xy) ;

/// @brief Method uint2x2, addr 0x6441c84, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x2 uint2x2(::Unity::Mathematics::uint2  c0, ::Unity::Mathematics::uint2  c1) ;

/// @brief Method uint2x2, addr 0x6441c88, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x2 uint2x2(uint32_t  m00, uint32_t  m01, uint32_t  m10, uint32_t  m11) ;

/// @brief Method uint2x2, addr 0x6441cc0, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x2 uint2x2(::Unity::Mathematics::bool2x2  v) ;

/// @brief Method uint2x2, addr 0x6441d6c, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x2 uint2x2(::Unity::Mathematics::double2x2  v) ;

/// @brief Method uint2x2, addr 0x6441d10, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x2 uint2x2(::Unity::Mathematics::float2x2  v) ;

/// @brief Method uint2x2, addr 0x6441cf0, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x2 uint2x2(::Unity::Mathematics::int2x2  v) ;

/// @brief Method uint2x2, addr 0x6441cac, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x2 uint2x2(bool  v) ;

/// @brief Method uint2x2, addr 0x6441d50, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x2 uint2x2(double_t  v) ;

/// @brief Method uint2x2, addr 0x6441cf4, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x2 uint2x2(float_t  v) ;

/// @brief Method uint2x2, addr 0x6441ce0, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x2 uint2x2(int32_t  v) ;

/// @brief Method uint2x2, addr 0x6441c9c, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x2 uint2x2(uint32_t  v) ;

/// @brief Method uint2x3, addr 0x6441e74, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x3 uint2x3(::Unity::Mathematics::uint2  c0, ::Unity::Mathematics::uint2  c1, ::Unity::Mathematics::uint2  c2) ;

/// @brief Method uint2x3, addr 0x6441e80, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x3 uint2x3(uint32_t  m00, uint32_t  m01, uint32_t  m02, uint32_t  m10, uint32_t  m11, uint32_t  m12) ;

/// @brief Method uint2x3, addr 0x6441ed0, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x3 uint2x3(::Unity::Mathematics::bool2x3  v) ;

/// @brief Method uint2x3, addr 0x6442008, size 0x84, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x3 uint2x3(::Unity::Mathematics::double2x3  v) ;

/// @brief Method uint2x3, addr 0x6441f64, size 0x84, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x3 uint2x3(::Unity::Mathematics::float2x3  v) ;

/// @brief Method uint2x3, addr 0x6441f30, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x3 uint2x3(::Unity::Mathematics::int2x3  v) ;

/// @brief Method uint2x3, addr 0x6441eb8, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x3 uint2x3(bool  v) ;

/// @brief Method uint2x3, addr 0x6441fe8, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x3 uint2x3(double_t  v) ;

/// @brief Method uint2x3, addr 0x6441f44, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x3 uint2x3(float_t  v) ;

/// @brief Method uint2x3, addr 0x6441f1c, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x3 uint2x3(int32_t  v) ;

/// @brief Method uint2x3, addr 0x6441ea4, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x3 uint2x3(uint32_t  v) ;

/// @brief Method uint2x4, addr 0x64421a0, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x4 uint2x4(::Unity::Mathematics::uint2  c0, ::Unity::Mathematics::uint2  c1, ::Unity::Mathematics::uint2  c2, ::Unity::Mathematics::uint2  c3) ;

/// @brief Method uint2x4, addr 0x64421ac, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x4 uint2x4(uint32_t  m00, uint32_t  m01, uint32_t  m02, uint32_t  m03, uint32_t  m10, uint32_t  m11, uint32_t  m12, uint32_t  m13) ;

/// @brief Method uint2x4, addr 0x6442204, size 0x74, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x4 uint2x4(::Unity::Mathematics::bool2x4  v) ;

/// @brief Method uint2x4, addr 0x6442384, size 0xac, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x4 uint2x4(::Unity::Mathematics::double2x4  v) ;

/// @brief Method uint2x4, addr 0x64422b8, size 0xac, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x4 uint2x4(::Unity::Mathematics::float2x4  v) ;

/// @brief Method uint2x4, addr 0x644228c, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x4 uint2x4(::Unity::Mathematics::int2x4  v) ;

/// @brief Method uint2x4, addr 0x64421ec, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x4 uint2x4(bool  v) ;

/// @brief Method uint2x4, addr 0x6442364, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x4 uint2x4(double_t  v) ;

/// @brief Method uint2x4, addr 0x6442298, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x4 uint2x4(float_t  v) ;

/// @brief Method uint2x4, addr 0x6442278, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x4 uint2x4(int32_t  v) ;

/// @brief Method uint2x4, addr 0x64421d8, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint2x4 uint2x4(uint32_t  v) ;

/// @brief Method uint3, addr 0x64425d8, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 uint3(::Unity::Mathematics::bool3  v) ;

/// @brief Method uint3, addr 0x644266c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 uint3(::Unity::Mathematics::double3  v) ;

/// @brief Method uint3, addr 0x644261c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 uint3(::Unity::Mathematics::float3  v) ;

/// @brief Method uint3, addr 0x64425fc, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 uint3(::Unity::Mathematics::int3  v) ;

/// @brief Method uint3, addr 0x64425bc, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 uint3(bool  v) ;

/// @brief Method uint3, addr 0x6442654, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 uint3(double_t  v) ;

/// @brief Method uint3, addr 0x6442604, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 uint3(float_t  v) ;

/// @brief Method uint3, addr 0x64425f0, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 uint3(int32_t  v) ;

/// @brief Method uint3, addr 0x64425b0, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 uint3(uint32_t  v) ;

/// @brief Method uint3, addr 0x644257c, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 uint3(uint32_t  x, uint32_t  y, uint32_t  z) ;

/// @brief Method uint3, addr 0x644258c, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 uint3(uint32_t  x, ::Unity::Mathematics::uint2  yz) ;

/// @brief Method uint3, addr 0x64425a0, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 uint3(::Unity::Mathematics::uint2  xy, uint32_t  z) ;

/// @brief Method uint3, addr 0x64425a8, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3 uint3(::Unity::Mathematics::uint3  xyz) ;

/// @brief Method uint3x2, addr 0x64429f8, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x2 uint3x2(::Unity::Mathematics::uint3  c0, ::Unity::Mathematics::uint3  c1) ;

/// @brief Method uint3x2, addr 0x6442a0c, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x2 uint3x2(uint32_t  m00, uint32_t  m01, uint32_t  m10, uint32_t  m11, uint32_t  m20, uint32_t  m21) ;

/// @brief Method uint3x2, addr 0x6442a58, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x2 uint3x2(::Unity::Mathematics::bool3x2  v) ;

/// @brief Method uint3x2, addr 0x6442ba0, size 0x88, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x2 uint3x2(::Unity::Mathematics::double3x2  v) ;

/// @brief Method uint3x2, addr 0x6442af0, size 0x88, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x2 uint3x2(::Unity::Mathematics::float3x2  v) ;

/// @brief Method uint3x2, addr 0x6442aa4, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x2 uint3x2(::Unity::Mathematics::int3x2  v) ;

/// @brief Method uint3x2, addr 0x6442a38, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x2 uint3x2(bool  v) ;

/// @brief Method uint3x2, addr 0x6442b78, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x2 uint3x2(double_t  v) ;

/// @brief Method uint3x2, addr 0x6442ac8, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x2 uint3x2(float_t  v) ;

/// @brief Method uint3x2, addr 0x6442a88, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x2 uint3x2(int32_t  v) ;

/// @brief Method uint3x2, addr 0x6442a1c, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x2 uint3x2(uint32_t  v) ;

/// @brief Method uint3x3, addr 0x6442d50, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x3 uint3x3(::Unity::Mathematics::uint3  c0, ::Unity::Mathematics::uint3  c1, ::Unity::Mathematics::uint3  c2) ;

/// @brief Method uint3x3, addr 0x6442d6c, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x3 uint3x3(uint32_t  m00, uint32_t  m01, uint32_t  m02, uint32_t  m10, uint32_t  m11, uint32_t  m12, uint32_t  m20, uint32_t  m21, uint32_t  m22) ;

/// @brief Method uint3x3, addr 0x6442dd4, size 0x54, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x3 uint3x3(::Unity::Mathematics::bool3x3  v) ;

/// @brief Method uint3x3, addr 0x6442fac, size 0xcc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x3 uint3x3(::Unity::Mathematics::double3x3  v) ;

/// @brief Method uint3x3, addr 0x6442eb0, size 0xcc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x3 uint3x3(::Unity::Mathematics::float3x3  v) ;

/// @brief Method uint3x3, addr 0x6442e4c, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x3 uint3x3(::Unity::Mathematics::int3x3  v) ;

/// @brief Method uint3x3, addr 0x6442dac, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x3 uint3x3(bool  v) ;

/// @brief Method uint3x3, addr 0x6442f7c, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x3 uint3x3(double_t  v) ;

/// @brief Method uint3x3, addr 0x6442e80, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x3 uint3x3(float_t  v) ;

/// @brief Method uint3x3, addr 0x6442e28, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x3 uint3x3(int32_t  v) ;

/// @brief Method uint3x3, addr 0x6442d88, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x3 uint3x3(uint32_t  v) ;

/// @brief Method uint3x4, addr 0x6443208, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x4 uint3x4(::Unity::Mathematics::uint3  c0, ::Unity::Mathematics::uint3  c1, ::Unity::Mathematics::uint3  c2, ::Unity::Mathematics::uint3  c3) ;

/// @brief Method uint3x4, addr 0x644322c, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x4 uint3x4(uint32_t  m00, uint32_t  m01, uint32_t  m02, uint32_t  m03, uint32_t  m10, uint32_t  m11, uint32_t  m12, uint32_t  m13, uint32_t  m20, uint32_t  m21, uint32_t  m22, uint32_t  m23) ;

/// @brief Method uint3x4, addr 0x64432bc, size 0x74, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x4 uint3x4(::Unity::Mathematics::bool3x4  v) ;

/// @brief Method uint3x4, addr 0x644351c, size 0x10c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x4 uint3x4(::Unity::Mathematics::double3x4  v) ;

/// @brief Method uint3x4, addr 0x64433d8, size 0x10c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x4 uint3x4(::Unity::Mathematics::float3x4  v) ;

/// @brief Method uint3x4, addr 0x644335c, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x4 uint3x4(::Unity::Mathematics::int3x4  v) ;

/// @brief Method uint3x4, addr 0x644328c, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x4 uint3x4(bool  v) ;

/// @brief Method uint3x4, addr 0x64434e4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x4 uint3x4(double_t  v) ;

/// @brief Method uint3x4, addr 0x64433a0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x4 uint3x4(float_t  v) ;

/// @brief Method uint3x4, addr 0x6443330, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x4 uint3x4(int32_t  v) ;

/// @brief Method uint3x4, addr 0x6443260, size 0x2c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint3x4 uint3x4(uint32_t  v) ;

/// @brief Method uint4, addr 0x64438b8, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 uint4(::Unity::Mathematics::bool4  v) ;

/// @brief Method uint4, addr 0x6443964, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 uint4(::Unity::Mathematics::double4  v) ;

/// @brief Method uint4, addr 0x6443908, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 uint4(::Unity::Mathematics::float4  v) ;

/// @brief Method uint4, addr 0x64438e8, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 uint4(::Unity::Mathematics::int4  v) ;

/// @brief Method uint4, addr 0x64438a0, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 uint4(bool  v) ;

/// @brief Method uint4, addr 0x6443948, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 uint4(double_t  v) ;

/// @brief Method uint4, addr 0x64438ec, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 uint4(float_t  v) ;

/// @brief Method uint4, addr 0x64438d8, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 uint4(int32_t  v) ;

/// @brief Method uint4, addr 0x6443890, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 uint4(uint32_t  v) ;

/// @brief Method uint4, addr 0x6443824, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 uint4(uint32_t  x, uint32_t  y, uint32_t  z, uint32_t  w) ;

/// @brief Method uint4, addr 0x644383c, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 uint4(uint32_t  x, uint32_t  y, ::Unity::Mathematics::uint2  zw) ;

/// @brief Method uint4, addr 0x644384c, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 uint4(uint32_t  x, ::Unity::Mathematics::uint2  yz, uint32_t  w) ;

/// @brief Method uint4, addr 0x6443860, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 uint4(uint32_t  x, ::Unity::Mathematics::uint3  yzw) ;

/// @brief Method uint4, addr 0x6443874, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 uint4(::Unity::Mathematics::uint2  xy, uint32_t  z, uint32_t  w) ;

/// @brief Method uint4, addr 0x6443880, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 uint4(::Unity::Mathematics::uint2  xy, ::Unity::Mathematics::uint2  zw) ;

/// @brief Method uint4, addr 0x6443884, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 uint4(::Unity::Mathematics::uint3  xyz, uint32_t  w) ;

/// @brief Method uint4, addr 0x644388c, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4 uint4(::Unity::Mathematics::uint4  xyzw) ;

/// @brief Method uint4x2, addr 0x6443d38, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x2 uint4x2(::Unity::Mathematics::uint4  c0, ::Unity::Mathematics::uint4  c1) ;

/// @brief Method uint4x2, addr 0x6443d44, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x2 uint4x2(uint32_t  m00, uint32_t  m01, uint32_t  m10, uint32_t  m11, uint32_t  m20, uint32_t  m21, uint32_t  m30, uint32_t  m31) ;

/// @brief Method uint4x2, addr 0x6443d84, size 0x5c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x2 uint4x2(::Unity::Mathematics::bool4x2  v) ;

/// @brief Method uint4x2, addr 0x6443eec, size 0xac, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x2 uint4x2(::Unity::Mathematics::double4x2  v) ;

/// @brief Method uint4x2, addr 0x6443e20, size 0xac, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x2 uint4x2(::Unity::Mathematics::float4x2  v) ;

/// @brief Method uint4x2, addr 0x6443df4, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x2 uint4x2(::Unity::Mathematics::int4x2  v) ;

/// @brief Method uint4x2, addr 0x6443d6c, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x2 uint4x2(bool  v) ;

/// @brief Method uint4x2, addr 0x6443ecc, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x2 uint4x2(double_t  v) ;

/// @brief Method uint4x2, addr 0x6443e00, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x2 uint4x2(float_t  v) ;

/// @brief Method uint4x2, addr 0x6443de0, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x2 uint4x2(int32_t  v) ;

/// @brief Method uint4x2, addr 0x6443d58, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x2 uint4x2(uint32_t  v) ;

/// @brief Method uint4x3, addr 0x64440fc, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x3 uint4x3(::Unity::Mathematics::uint4  c0, ::Unity::Mathematics::uint4  c1, ::Unity::Mathematics::uint4  c2) ;

/// @brief Method uint4x3, addr 0x644410c, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x3 uint4x3(uint32_t  m00, uint32_t  m01, uint32_t  m02, uint32_t  m10, uint32_t  m11, uint32_t  m12, uint32_t  m20, uint32_t  m21, uint32_t  m22, uint32_t  m30, uint32_t  m31, uint32_t  m32) ;

/// @brief Method uint4x3, addr 0x6444174, size 0x78, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x3 uint4x3(::Unity::Mathematics::bool4x3  v) ;

/// @brief Method uint4x3, addr 0x6444360, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x3 uint4x3(::Unity::Mathematics::double4x3  v) ;

/// @brief Method uint4x3, addr 0x644423c, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x3 uint4x3(::Unity::Mathematics::float4x3  v) ;

/// @brief Method uint4x3, addr 0x6444204, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x3 uint4x3(::Unity::Mathematics::int4x3  v) ;

/// @brief Method uint4x3, addr 0x6444158, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x3 uint4x3(bool  v) ;

/// @brief Method uint4x3, addr 0x644433c, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x3 uint4x3(double_t  v) ;

/// @brief Method uint4x3, addr 0x6444218, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x3 uint4x3(float_t  v) ;

/// @brief Method uint4x3, addr 0x64441ec, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x3 uint4x3(int32_t  v) ;

/// @brief Method uint4x3, addr 0x6444140, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x3 uint4x3(uint32_t  v) ;

/// @brief Method uint4x4, addr 0x6444644, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x4 uint4x4(::Unity::Mathematics::uint4  c0, ::Unity::Mathematics::uint4  c1, ::Unity::Mathematics::uint4  c2, ::Unity::Mathematics::uint4  c3) ;

/// @brief Method uint4x4, addr 0x6444658, size 0x54, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x4 uint4x4(uint32_t  m00, uint32_t  m01, uint32_t  m02, uint32_t  m03, uint32_t  m10, uint32_t  m11, uint32_t  m12, uint32_t  m13, uint32_t  m20, uint32_t  m21, uint32_t  m22, uint32_t  m23, uint32_t  m30, uint32_t  m31, uint32_t  m32, uint32_t  m33) ;

/// @brief Method uint4x4, addr 0x64446e8, size 0x94, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x4 uint4x4(::Unity::Mathematics::bool4x4  v) ;

/// @brief Method uint4x4, addr 0x6444950, size 0x154, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x4 uint4x4(::Unity::Mathematics::double4x4  v) ;

/// @brief Method uint4x4, addr 0x64447d4, size 0x154, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x4 uint4x4(::Unity::Mathematics::float4x4  v) ;

/// @brief Method uint4x4, addr 0x6444798, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x4 uint4x4(::Unity::Mathematics::int4x4  v) ;

/// @brief Method uint4x4, addr 0x64446c8, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x4 uint4x4(bool  v) ;

/// @brief Method uint4x4, addr 0x6444928, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x4 uint4x4(double_t  v) ;

/// @brief Method uint4x4, addr 0x64447ac, size 0x28, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x4 uint4x4(float_t  v) ;

/// @brief Method uint4x4, addr 0x644477c, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x4 uint4x4(int32_t  v) ;

/// @brief Method uint4x4, addr 0x64446ac, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::uint4x4 uint4x4(uint32_t  v) ;

/// @brief Method unitexp, addr 0x643ffd8, size 0x13c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::quaternion unitexp(::Unity::Mathematics::quaternion  q) ;

/// @brief Method unitlog, addr 0x64402b4, size 0x114, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::quaternion unitlog(::Unity::Mathematics::quaternion  q) ;

/// @brief Method unlerp, addr 0x6425984, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double2 unlerp(::Unity::Mathematics::double2  start, ::Unity::Mathematics::double2  end, ::Unity::Mathematics::double2  x) ;

/// @brief Method unlerp, addr 0x64259a0, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double3 unlerp(::Unity::Mathematics::double3  start, ::Unity::Mathematics::double3  end, ::Unity::Mathematics::double3  x) ;

/// @brief Method unlerp, addr 0x64259d4, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 unlerp(::Unity::Mathematics::double4  start, ::Unity::Mathematics::double4  end, ::Unity::Mathematics::double4  x) ;

/// @brief Method unlerp, addr 0x64258e0, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 unlerp(::Unity::Mathematics::float2  start, ::Unity::Mathematics::float2  end, ::Unity::Mathematics::float2  x) ;

/// @brief Method unlerp, addr 0x64258fc, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 unlerp(::Unity::Mathematics::float3  start, ::Unity::Mathematics::float3  end, ::Unity::Mathematics::float3  x) ;

/// @brief Method unlerp, addr 0x6425930, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 unlerp(::Unity::Mathematics::float4  start, ::Unity::Mathematics::float4  end, ::Unity::Mathematics::float4  x) ;

/// @brief Method unlerp, addr 0x6425974, size 0x10, virtual false, abstract: false, final false
static inline double_t unlerp(double_t  start, double_t  end, double_t  x) ;

/// @brief Method unlerp, addr 0x64258d0, size 0x10, virtual false, abstract: false, final false
static inline float_t unlerp(float_t  start, float_t  end, float_t  x) ;

/// @brief Method unpackhi, addr 0x6439594, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 unpackhi(::Unity::Mathematics::double4  a, ::Unity::Mathematics::double4  b) ;

/// @brief Method unpackhi, addr 0x6439580, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 unpackhi(::Unity::Mathematics::float4  a, ::Unity::Mathematics::float4  b) ;

/// @brief Method unpacklo, addr 0x6439570, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::double4 unpacklo(::Unity::Mathematics::double4  a, ::Unity::Mathematics::double4  b) ;

/// @brief Method unpacklo, addr 0x6439560, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 unpacklo(::Unity::Mathematics::float4  a, ::Unity::Mathematics::float4  b) ;

/// @brief Method up, addr 0x6438210, size 0x10, virtual false, abstract: false, final false
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
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13104};

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

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
  constexpr operator __math_RotationOrder_Unwrapped() const noexcept {
    return static_cast<__math_RotationOrder_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint8_t() const noexcept {
    return static_cast<uint8_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr math_RotationOrder();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr math_RotationOrder(uint8_t value__) noexcept;

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13097 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Field value__, offset: 0x0, size: 0x1, def value: None
  uint8_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::math_RotationOrder, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::math_RotationOrder, 0x1>, "Size mismatch!");

} // namespace Unity::Mathematics
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
  constexpr operator __math_ShuffleComponent_Unwrapped() const noexcept {
    return static_cast<__math_ShuffleComponent_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint8_t() const noexcept {
    return static_cast<uint8_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr math_ShuffleComponent();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr math_ShuffleComponent(uint8_t value__) noexcept;

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13098 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Field value__, offset: 0x0, size: 0x1, def value: None
  uint8_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::math_ShuffleComponent, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::math_ShuffleComponent, 0x1>, "Size mismatch!");

} // namespace Unity::Mathematics
// Dependencies
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.math/LongDoubleUnion
struct CORDL_TYPE math_LongDoubleUnion {
public:
  // Declarations
  /// @brief Field doubleValue, offset 0x0, size 0x8
  __declspec(property(get = __cordl_internal_get_doubleValue, put = __cordl_internal_set_doubleValue)) double_t doubleValue;

  /// @brief Field longValue, offset 0x0, size 0x8
  __declspec(property(get = __cordl_internal_get_longValue, put = __cordl_internal_set_longValue)) int64_t longValue;

  constexpr double_t const& __cordl_internal_get_doubleValue() const;

  constexpr double_t& __cordl_internal_get_doubleValue();

  constexpr int64_t const& __cordl_internal_get_longValue() const;

  constexpr int64_t& __cordl_internal_get_longValue();

  constexpr void __cordl_internal_set_doubleValue(double_t value);

  constexpr void __cordl_internal_set_longValue(int64_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr math_LongDoubleUnion();

  // Ctor Parameters [CppParam { name: "longValue", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "doubleValue", ty: "double_t", modifiers: "", def_value: None }]
  constexpr math_LongDoubleUnion(int64_t longValue, double_t doubleValue) noexcept;

private:
  /// @brief Explicitly laid out type with union based offsets
  union {
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___longValue_padding[0x0];
      /// @brief Field longValue, offset: 0x0, size: 0x8, def value: None
      int64_t ___longValue;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___longValue_padding_forAlignment[0x0];
      /// @brief Field longValue, offset: 0x0, size: 0x8, def value: None
      int64_t ___longValue_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___doubleValue_padding[0x0];
      /// @brief Field doubleValue, offset: 0x0, size: 0x8, def value: None
      double_t ___doubleValue;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___doubleValue_padding_forAlignment[0x0];
      /// @brief Field doubleValue, offset: 0x0, size: 0x8, def value: None
      double_t ___doubleValue_forAlignment;
    };
  };

public:
  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13099 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::math_LongDoubleUnion, 0x8>, "Size mismatch!");

} // namespace Unity::Mathematics
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

  /// @brief Method AffineTransform, addr 0x6415e9c, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::AffineTransform AffineTransform(::Unity::Mathematics::float3x4 m);

  /// @brief Method AffineTransform, addr 0x6415e5c, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::AffineTransform AffineTransform(::Unity::Mathematics::float4x4 m);

  /// @brief Method AffineTransform, addr 0x6415ec0, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::AffineTransform AffineTransform(::Unity::Mathematics::RigidTransform rigid);

  /// @brief Method AffineTransform, addr 0x6415dcc, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::AffineTransform AffineTransform(::Unity::Mathematics::float3x3 rotationScale);

  /// @brief Method AffineTransform, addr 0x6415c84, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::AffineTransform AffineTransform(::Unity::Mathematics::float3 translation, ::Unity::Mathematics::quaternion rotation);

  /// @brief Method AffineTransform, addr 0x6415cf8, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::AffineTransform AffineTransform(::Unity::Mathematics::float3 translation, ::Unity::Mathematics::quaternion rotation, ::Unity::Mathematics::float3 scale);

  /// @brief Method AffineTransform, addr 0x6415db0, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::AffineTransform AffineTransform(::Unity::Mathematics::float3 translation, ::Unity::Mathematics::float3x3 rotationScale);

  /// @brief Method Euler, addr 0x6438cd4, size 0x154, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 Euler(::Unity::Mathematics::quaternion q, ::Unity::Mathematics::math_RotationOrder order);

  /// @brief Method EulerXYZ, addr 0x6437bb0, size 0x2dc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 EulerXYZ(::Unity::Mathematics::quaternion q);

  /// @brief Method EulerXZY, addr 0x6437e8c, size 0x2d8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 EulerXZY(::Unity::Mathematics::quaternion q);

  /// @brief Method EulerYXZ, addr 0x6438164, size 0x2d8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 EulerYXZ(::Unity::Mathematics::quaternion q);

  /// @brief Method EulerYZX, addr 0x643843c, size 0x2e0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 EulerYZX(::Unity::Mathematics::quaternion q);

  /// @brief Method EulerZXY, addr 0x643871c, size 0x2dc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 EulerZXY(::Unity::Mathematics::quaternion q);

  /// @brief Method EulerZYX, addr 0x64389f8, size 0x2dc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 EulerZYX(::Unity::Mathematics::quaternion q);

  /// @brief Method RigidTransform, addr 0x6440c30, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::RigidTransform RigidTransform(::Unity::Mathematics::quaternion rot, ::Unity::Mathematics::float3 pos);

  /// @brief Method RigidTransform, addr 0x6440c44, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::RigidTransform RigidTransform(::Unity::Mathematics::float3x3 rotation, ::Unity::Mathematics::float3 translation);

  /// @brief Method RigidTransform, addr 0x6440cb8, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::RigidTransform RigidTransform(::Unity::Mathematics::float4x4 transform);

  /// @brief Method abs, addr 0x64260ac, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 abs(::Unity::Mathematics::double2 x);

  /// @brief Method abs, addr 0x64260b8, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 abs(::Unity::Mathematics::double3 x);

  /// @brief Method abs, addr 0x64260c8, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 abs(::Unity::Mathematics::double4 x);

  /// @brief Method abs, addr 0x6426074, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 abs(::Unity::Mathematics::float2 x);

  /// @brief Method abs, addr 0x6426080, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 abs(::Unity::Mathematics::float3 x);

  /// @brief Method abs, addr 0x6426090, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 abs(::Unity::Mathematics::float4 x);

  /// @brief Method abs, addr 0x6425fc8, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 abs(::Unity::Mathematics::int2 x);

  /// @brief Method abs, addr 0x6425ff0, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 abs(::Unity::Mathematics::int3 x);

  /// @brief Method abs, addr 0x6426020, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 abs(::Unity::Mathematics::int4 x);

  /// @brief Method abs, addr 0x64260a4, size 0x8, virtual false, abstract: false, final false
  static inline double_t abs(double_t x);

  /// @brief Method abs, addr 0x642606c, size 0x8, virtual false, abstract: false, final false
  static inline float_t abs(float_t x);

  /// @brief Method abs, addr 0x6425fbc, size 0xc, virtual false, abstract: false, final false
  static inline int32_t abs(int32_t x);

  /// @brief Method abs, addr 0x6426060, size 0xc, virtual false, abstract: false, final false
  static inline int64_t abs(int64_t x);

  /// @brief Method acos, addr 0x6428fe0, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 acos(::Unity::Mathematics::double2 x);

  /// @brief Method acos, addr 0x6429090, size 0x100, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 acos(::Unity::Mathematics::double3 x);

  /// @brief Method acos, addr 0x6429190, size 0x148, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 acos(::Unity::Mathematics::double4 x);

  /// @brief Method acos, addr 0x6428c6c, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 acos(::Unity::Mathematics::float2 x);

  /// @brief Method acos, addr 0x6428d24, size 0x108, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 acos(::Unity::Mathematics::float3 x);

  /// @brief Method acos, addr 0x6428e2c, size 0x154, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 acos(::Unity::Mathematics::float4 x);

  /// @brief Method acos, addr 0x6428f80, size 0x60, virtual false, abstract: false, final false
  static inline double_t acos(double_t x);

  /// @brief Method acos, addr 0x6428c04, size 0x68, virtual false, abstract: false, final false
  static inline float_t acos(float_t x);

  /// @brief Method adj, addr 0x644093c, size 0xcc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 adj(::Unity::Mathematics::float3x3 m, ::ByRef<float_t> det);

  /// @brief Method adjInverse, addr 0x6440a08, size 0xec, virtual false, abstract: false, final false
  static inline bool adjInverse(::Unity::Mathematics::float3x3 m, ::ByRef<::Unity::Mathematics::float3x3> i, float_t epsilon);

  /// @brief Method all, addr 0x6432adc, size 0x14, virtual false, abstract: false, final false
  static inline bool all(::Unity::Mathematics::bool2 x);

  /// @brief Method all, addr 0x6432af0, size 0x18, virtual false, abstract: false, final false
  static inline bool all(::Unity::Mathematics::bool3 x);

  /// @brief Method all, addr 0x6432b08, size 0x14, virtual false, abstract: false, final false
  static inline bool all(::Unity::Mathematics::bool4 x);

  /// @brief Method all, addr 0x6432c2c, size 0x14, virtual false, abstract: false, final false
  static inline bool all(::Unity::Mathematics::double2 x);

  /// @brief Method all, addr 0x6432c40, size 0x24, virtual false, abstract: false, final false
  static inline bool all(::Unity::Mathematics::double3 x);

  /// @brief Method all, addr 0x6432c64, size 0x28, virtual false, abstract: false, final false
  static inline bool all(::Unity::Mathematics::double4 x);

  /// @brief Method all, addr 0x6432bcc, size 0x14, virtual false, abstract: false, final false
  static inline bool all(::Unity::Mathematics::float2 x);

  /// @brief Method all, addr 0x6432be0, size 0x24, virtual false, abstract: false, final false
  static inline bool all(::Unity::Mathematics::float3 x);

  /// @brief Method all, addr 0x6432c04, size 0x28, virtual false, abstract: false, final false
  static inline bool all(::Unity::Mathematics::float4 x);

  /// @brief Method all, addr 0x6432b1c, size 0x14, virtual false, abstract: false, final false
  static inline bool all(::Unity::Mathematics::int2 x);

  /// @brief Method all, addr 0x6432b30, size 0x24, virtual false, abstract: false, final false
  static inline bool all(::Unity::Mathematics::int3 x);

  /// @brief Method all, addr 0x6432b54, size 0x20, virtual false, abstract: false, final false
  static inline bool all(::Unity::Mathematics::int4 x);

  /// @brief Method all, addr 0x6432b74, size 0x14, virtual false, abstract: false, final false
  static inline bool all(::Unity::Mathematics::uint2 x);

  /// @brief Method all, addr 0x6432b88, size 0x24, virtual false, abstract: false, final false
  static inline bool all(::Unity::Mathematics::uint3 x);

  /// @brief Method all, addr 0x6432bac, size 0x20, virtual false, abstract: false, final false
  static inline bool all(::Unity::Mathematics::uint4 x);

  /// @brief Method angle, addr 0x6440528, size 0x1b8, virtual false, abstract: false, final false
  static inline float_t angle(::Unity::Mathematics::quaternion q1, ::Unity::Mathematics::quaternion q2);

  /// @brief Method any, addr 0x6432980, size 0x10, virtual false, abstract: false, final false
  static inline bool any(::Unity::Mathematics::bool2 x);

  /// @brief Method any, addr 0x6432990, size 0x14, virtual false, abstract: false, final false
  static inline bool any(::Unity::Mathematics::bool3 x);

  /// @brief Method any, addr 0x64329a4, size 0x10, virtual false, abstract: false, final false
  static inline bool any(::Unity::Mathematics::bool4 x);

  /// @brief Method any, addr 0x6432a80, size 0x14, virtual false, abstract: false, final false
  static inline bool any(::Unity::Mathematics::double2 x);

  /// @brief Method any, addr 0x6432a94, size 0x20, virtual false, abstract: false, final false
  static inline bool any(::Unity::Mathematics::double3 x);

  /// @brief Method any, addr 0x6432ab4, size 0x28, virtual false, abstract: false, final false
  static inline bool any(::Unity::Mathematics::double4 x);

  /// @brief Method any, addr 0x6432a24, size 0x14, virtual false, abstract: false, final false
  static inline bool any(::Unity::Mathematics::float2 x);

  /// @brief Method any, addr 0x6432a38, size 0x20, virtual false, abstract: false, final false
  static inline bool any(::Unity::Mathematics::float3 x);

  /// @brief Method any, addr 0x6432a58, size 0x28, virtual false, abstract: false, final false
  static inline bool any(::Unity::Mathematics::float4 x);

  /// @brief Method any, addr 0x64329b4, size 0xc, virtual false, abstract: false, final false
  static inline bool any(::Unity::Mathematics::int2 x);

  /// @brief Method any, addr 0x64329c0, size 0x14, virtual false, abstract: false, final false
  static inline bool any(::Unity::Mathematics::int3 x);

  /// @brief Method any, addr 0x64329d4, size 0x18, virtual false, abstract: false, final false
  static inline bool any(::Unity::Mathematics::int4 x);

  /// @brief Method any, addr 0x64329ec, size 0xc, virtual false, abstract: false, final false
  static inline bool any(::Unity::Mathematics::uint2 x);

  /// @brief Method any, addr 0x64329f8, size 0x14, virtual false, abstract: false, final false
  static inline bool any(::Unity::Mathematics::uint3 x);

  /// @brief Method any, addr 0x6432a0c, size 0x18, virtual false, abstract: false, final false
  static inline bool any(::Unity::Mathematics::uint4 x);

  /// @brief Method asdouble, addr 0x6424318, size 0x8, virtual false, abstract: false, final false
  static inline double_t asdouble(int64_t x);

  /// @brief Method asdouble, addr 0x6424320, size 0x8, virtual false, abstract: false, final false
  static inline double_t asdouble(uint64_t x);

  /// @brief Method asfloat, addr 0x6424268, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 asfloat(::Unity::Mathematics::int2 x);

  /// @brief Method asfloat, addr 0x64242b0, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 asfloat(::Unity::Mathematics::uint2 x);

  /// @brief Method asfloat, addr 0x6424278, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 asfloat(::Unity::Mathematics::int3 x);

  /// @brief Method asfloat, addr 0x64242c0, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 asfloat(::Unity::Mathematics::uint3 x);

  /// @brief Method asfloat, addr 0x642428c, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 asfloat(::Unity::Mathematics::int4 x);

  /// @brief Method asfloat, addr 0x64242d4, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 asfloat(::Unity::Mathematics::uint4 x);

  /// @brief Method asfloat, addr 0x6424260, size 0x8, virtual false, abstract: false, final false
  static inline float_t asfloat(int32_t x);

  /// @brief Method asfloat, addr 0x64242a8, size 0x8, virtual false, abstract: false, final false
  static inline float_t asfloat(uint32_t x);

  /// @brief Method asin, addr 0x642a45c, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 asin(::Unity::Mathematics::double2 x);

  /// @brief Method asin, addr 0x642a50c, size 0x100, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 asin(::Unity::Mathematics::double3 x);

  /// @brief Method asin, addr 0x642a60c, size 0x148, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 asin(::Unity::Mathematics::double4 x);

  /// @brief Method asin, addr 0x642a0e8, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 asin(::Unity::Mathematics::float2 x);

  /// @brief Method asin, addr 0x642a1a0, size 0x108, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 asin(::Unity::Mathematics::float3 x);

  /// @brief Method asin, addr 0x642a2a8, size 0x154, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 asin(::Unity::Mathematics::float4 x);

  /// @brief Method asin, addr 0x642a3fc, size 0x60, virtual false, abstract: false, final false
  static inline double_t asin(double_t x);

  /// @brief Method asin, addr 0x642a080, size 0x68, virtual false, abstract: false, final false
  static inline float_t asin(float_t x);

  /// @brief Method asint, addr 0x64241ac, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 asint(::Unity::Mathematics::float2 x);

  /// @brief Method asint, addr 0x6424194, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 asint(::Unity::Mathematics::uint2 x);

  /// @brief Method asint, addr 0x64241bc, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 asint(::Unity::Mathematics::float3 x);

  /// @brief Method asint, addr 0x6424198, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 asint(::Unity::Mathematics::uint3 x);

  /// @brief Method asint, addr 0x64241d0, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 asint(::Unity::Mathematics::float4 x);

  /// @brief Method asint, addr 0x64241a0, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 asint(::Unity::Mathematics::uint4 x);

  /// @brief Method asint, addr 0x64241a4, size 0x8, virtual false, abstract: false, final false
  static inline int32_t asint(float_t x);

  /// @brief Method asint, addr 0x6424190, size 0x4, virtual false, abstract: false, final false
  static inline int32_t asint(uint32_t x);

  /// @brief Method aslong, addr 0x642424c, size 0x8, virtual false, abstract: false, final false
  static inline int64_t aslong(double_t x);

  /// @brief Method aslong, addr 0x6424248, size 0x4, virtual false, abstract: false, final false
  static inline int64_t aslong(uint64_t x);

  /// @brief Method asuint, addr 0x6424208, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 asuint(::Unity::Mathematics::float2 x);

  /// @brief Method asuint, addr 0x64241f0, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 asuint(::Unity::Mathematics::int2 x);

  /// @brief Method asuint, addr 0x6424218, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 asuint(::Unity::Mathematics::float3 x);

  /// @brief Method asuint, addr 0x64241f4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 asuint(::Unity::Mathematics::int3 x);

  /// @brief Method asuint, addr 0x642422c, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 asuint(::Unity::Mathematics::float4 x);

  /// @brief Method asuint, addr 0x64241fc, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 asuint(::Unity::Mathematics::int4 x);

  /// @brief Method asuint, addr 0x6424200, size 0x8, virtual false, abstract: false, final false
  static inline uint32_t asuint(float_t x);

  /// @brief Method asuint, addr 0x64241ec, size 0x4, virtual false, abstract: false, final false
  static inline uint32_t asuint(int32_t x);

  /// @brief Method asulong, addr 0x6424258, size 0x8, virtual false, abstract: false, final false
  static inline uint64_t asulong(double_t x);

  /// @brief Method asulong, addr 0x6424254, size 0x4, virtual false, abstract: false, final false
  static inline uint64_t asulong(int64_t x);

  /// @brief Method atan, addr 0x64273b0, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 atan(::Unity::Mathematics::double2 x);

  /// @brief Method atan, addr 0x6427460, size 0x100, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 atan(::Unity::Mathematics::double3 x);

  /// @brief Method atan, addr 0x6427560, size 0x148, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 atan(::Unity::Mathematics::double4 x);

  /// @brief Method atan, addr 0x642703c, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 atan(::Unity::Mathematics::float2 x);

  /// @brief Method atan, addr 0x64270f4, size 0x108, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 atan(::Unity::Mathematics::float3 x);

  /// @brief Method atan, addr 0x64271fc, size 0x154, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 atan(::Unity::Mathematics::float4 x);

  /// @brief Method atan, addr 0x6427350, size 0x60, virtual false, abstract: false, final false
  static inline double_t atan(double_t x);

  /// @brief Method atan, addr 0x6426fd4, size 0x68, virtual false, abstract: false, final false
  static inline float_t atan(float_t x);

  /// @brief Method atan2, addr 0x6427afc, size 0xc8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 atan2(::Unity::Mathematics::double2 y, ::Unity::Mathematics::double2 x);

  /// @brief Method atan2, addr 0x6427bc4, size 0x120, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 atan2(::Unity::Mathematics::double3 y, ::Unity::Mathematics::double3 x);

  /// @brief Method atan2, addr 0x6427ce4, size 0x178, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 atan2(::Unity::Mathematics::double4 y, ::Unity::Mathematics::double4 x);

  /// @brief Method atan2, addr 0x6427718, size 0xd0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 atan2(::Unity::Mathematics::float2 y, ::Unity::Mathematics::float2 x);

  /// @brief Method atan2, addr 0x64277e8, size 0x128, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 atan2(::Unity::Mathematics::float3 y, ::Unity::Mathematics::float3 x);

  /// @brief Method atan2, addr 0x6427910, size 0x184, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 atan2(::Unity::Mathematics::float4 y, ::Unity::Mathematics::float4 x);

  /// @brief Method atan2, addr 0x6427a94, size 0x68, virtual false, abstract: false, final false
  static inline double_t atan2(double_t y, double_t x);

  /// @brief Method atan2, addr 0x64276a8, size 0x70, virtual false, abstract: false, final false
  static inline float_t atan2(float_t y, float_t x);

  /// @brief Method back, addr 0x6437b80, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 back();

  /// @brief Method bitmask, addr 0x64242f0, size 0x28, virtual false, abstract: false, final false
  static inline int32_t bitmask(::Unity::Mathematics::bool4 value);

  /// @brief Method bool2, addr 0x6416838, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 bool2(bool v);

  /// @brief Method bool2, addr 0x6416814, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 bool2(bool x, bool y);

  /// @brief Method bool2, addr 0x641682c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 bool2(::Unity::Mathematics::bool2 xy);

  /// @brief Method bool2x2, addr 0x6416b54, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 bool2x2(::Unity::Mathematics::bool2 c0, ::Unity::Mathematics::bool2 c1);

  /// @brief Method bool2x2, addr 0x6416b5c, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 bool2x2(bool m00, bool m01, bool m10, bool m11);

  /// @brief Method bool2x2, addr 0x6416b80, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 bool2x2(bool v);

  /// @brief Method bool2x3, addr 0x6416c9c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 bool2x3(::Unity::Mathematics::bool2 c0, ::Unity::Mathematics::bool2 c1, ::Unity::Mathematics::bool2 c2);

  /// @brief Method bool2x3, addr 0x6416cb0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 bool2x3(bool m00, bool m01, bool m02, bool m10, bool m11, bool m12);

  /// @brief Method bool2x3, addr 0x6416ce8, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 bool2x3(bool v);

  /// @brief Method bool2x4, addr 0x6416e7c, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 bool2x4(::Unity::Mathematics::bool2 c0, ::Unity::Mathematics::bool2 c1, ::Unity::Mathematics::bool2 c2, ::Unity::Mathematics::bool2 c3);

  /// @brief Method bool2x4, addr 0x6416e98, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 bool2x4(bool m00, bool m01, bool m02, bool m03, bool m10, bool m11, bool m12, bool m13);

  /// @brief Method bool2x4, addr 0x6416ee0, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 bool2x4(bool v);

  /// @brief Method bool3, addr 0x641712c, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 bool3(bool v);

  /// @brief Method bool3, addr 0x64170bc, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 bool3(bool x, bool y, bool z);

  /// @brief Method bool3, addr 0x64170e0, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 bool3(bool x, ::Unity::Mathematics::bool2 yz);

  /// @brief Method bool3, addr 0x64170fc, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 bool3(::Unity::Mathematics::bool2 xy, bool z);

  /// @brief Method bool3, addr 0x641711c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 bool3(::Unity::Mathematics::bool3 xyz);

  /// @brief Method bool3x2, addr 0x64174a0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 bool3x2(::Unity::Mathematics::bool3 c0, ::Unity::Mathematics::bool3 c1);

  /// @brief Method bool3x2, addr 0x64174a8, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 bool3x2(bool m00, bool m01, bool m10, bool m11, bool m20, bool m21);

  /// @brief Method bool3x2, addr 0x64174fc, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 bool3x2(bool v);

  /// @brief Method bool3x3, addr 0x64176a0, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 bool3x3(::Unity::Mathematics::bool3 c0, ::Unity::Mathematics::bool3 c1, ::Unity::Mathematics::bool3 c2);

  /// @brief Method bool3x3, addr 0x64176d4, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 bool3x3(bool m00, bool m01, bool m02, bool m10, bool m11, bool m12, bool m20, bool m21, bool m22);

  /// @brief Method bool3x3, addr 0x6417750, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 bool3x3(bool v);

  /// @brief Method bool3x4, addr 0x64179e0, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 bool3x4(::Unity::Mathematics::bool3 c0, ::Unity::Mathematics::bool3 c1, ::Unity::Mathematics::bool3 c2, ::Unity::Mathematics::bool3 c3);

  /// @brief Method bool3x4, addr 0x6417a24, size 0xa8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 bool3x4(bool m00, bool m01, bool m02, bool m03, bool m10, bool m11, bool m12, bool m13, bool m20, bool m21, bool m22, bool m23);

  /// @brief Method bool3x4, addr 0x6417acc, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 bool3x4(bool v);

  /// @brief Method bool4, addr 0x6417f60, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 bool4(bool v);

  /// @brief Method bool4, addr 0x6417e68, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 bool4(bool x, bool y, bool z, bool w);

  /// @brief Method bool4, addr 0x6417e9c, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 bool4(bool x, bool y, ::Unity::Mathematics::bool2 zw);

  /// @brief Method bool4, addr 0x6417ebc, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 bool4(bool x, ::Unity::Mathematics::bool2 yz, bool w);

  /// @brief Method bool4, addr 0x6417ee0, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 bool4(bool x, ::Unity::Mathematics::bool3 yzw);

  /// @brief Method bool4, addr 0x6417ef4, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 bool4(::Unity::Mathematics::bool2 xy, bool z, bool w);

  /// @brief Method bool4, addr 0x6417f20, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 bool4(::Unity::Mathematics::bool2 xy, ::Unity::Mathematics::bool2 zw);

  /// @brief Method bool4, addr 0x6417f38, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 bool4(::Unity::Mathematics::bool3 xyz, bool w);

  /// @brief Method bool4, addr 0x6417f58, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 bool4(::Unity::Mathematics::bool4 xyzw);

  /// @brief Method bool4x2, addr 0x641830c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 bool4x2(::Unity::Mathematics::bool4 c0, ::Unity::Mathematics::bool4 c1);

  /// @brief Method bool4x2, addr 0x6418314, size 0x5c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 bool4x2(bool m00, bool m01, bool m10, bool m11, bool m20, bool m21, bool m30, bool m31);

  /// @brief Method bool4x2, addr 0x6418370, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 bool4x2(bool v);

  /// @brief Method bool4x3, addr 0x641858c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 bool4x3(::Unity::Mathematics::bool4 c0, ::Unity::Mathematics::bool4 c1, ::Unity::Mathematics::bool4 c2);

  /// @brief Method bool4x3, addr 0x6418598, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 bool4x3(bool m00, bool m01, bool m02, bool m10, bool m11, bool m12, bool m20, bool m21, bool m22, bool m30, bool m31, bool m32);

  /// @brief Method bool4x3, addr 0x6418628, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 bool4x3(bool v);

  /// @brief Method bool4x4, addr 0x64188fc, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x4 bool4x4(::Unity::Mathematics::bool4 c0, ::Unity::Mathematics::bool4 c1, ::Unity::Mathematics::bool4 c2, ::Unity::Mathematics::bool4 c3);

  /// @brief Method bool4x4, addr 0x641890c, size 0xc8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x4 bool4x4(bool m00, bool m01, bool m02, bool m03, bool m10, bool m11, bool m12, bool m13, bool m20, bool m21, bool m22, bool m23, bool m30, bool m31,
                                                      bool m32, bool m33);

  /// @brief Method bool4x4, addr 0x64189d4, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x4 bool4x4(bool v);

  /// @brief Method ceil, addr 0x642b09c, size 0x9c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 ceil(::Unity::Mathematics::double2 x);

  /// @brief Method ceil, addr 0x642b138, size 0xe0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 ceil(::Unity::Mathematics::double3 x);

  /// @brief Method ceil, addr 0x642b218, size 0x11c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 ceil(::Unity::Mathematics::double4 x);

  /// @brief Method ceil, addr 0x642ada4, size 0x9c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 ceil(::Unity::Mathematics::float2 x);

  /// @brief Method ceil, addr 0x642ae40, size 0xe0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 ceil(::Unity::Mathematics::float3 x);

  /// @brief Method ceil, addr 0x642af20, size 0x11c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 ceil(::Unity::Mathematics::float4 x);

  /// @brief Method ceil, addr 0x642b03c, size 0x60, virtual false, abstract: false, final false
  static inline double_t ceil(double_t x);

  /// @brief Method ceil, addr 0x642ad44, size 0x60, virtual false, abstract: false, final false
  static inline float_t ceil(float_t x);

  /// @brief Method ceillog2, addr 0x6435ed8, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 ceillog2(::Unity::Mathematics::int2 x);

  /// @brief Method ceillog2, addr 0x6436130, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 ceillog2(::Unity::Mathematics::uint2 x);

  /// @brief Method ceillog2, addr 0x6435f54, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 ceillog2(::Unity::Mathematics::int3 x);

  /// @brief Method ceillog2, addr 0x64361ac, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 ceillog2(::Unity::Mathematics::uint3 x);

  /// @brief Method ceillog2, addr 0x6436008, size 0xf0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 ceillog2(::Unity::Mathematics::int4 x);

  /// @brief Method ceillog2, addr 0x6436260, size 0xf0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 ceillog2(::Unity::Mathematics::uint4 x);

  /// @brief Method ceillog2, addr 0x6435ea0, size 0x38, virtual false, abstract: false, final false
  static inline int32_t ceillog2(int32_t x);

  /// @brief Method ceillog2, addr 0x64360f8, size 0x38, virtual false, abstract: false, final false
  static inline int32_t ceillog2(uint32_t x);

  /// @brief Method ceilpow2, addr 0x6435a58, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 ceilpow2(::Unity::Mathematics::int2 x);

  /// @brief Method ceilpow2, addr 0x6435ae0, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 ceilpow2(::Unity::Mathematics::int3 x);

  /// @brief Method ceilpow2, addr 0x6435b84, size 0x104, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 ceilpow2(::Unity::Mathematics::int4 x);

  /// @brief Method ceilpow2, addr 0x6435ca8, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 ceilpow2(::Unity::Mathematics::uint2 x);

  /// @brief Method ceilpow2, addr 0x6435d14, size 0x94, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 ceilpow2(::Unity::Mathematics::uint3 x);

  /// @brief Method ceilpow2, addr 0x6435da8, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 ceilpow2(::Unity::Mathematics::uint4 x);

  /// @brief Method ceilpow2, addr 0x6435a38, size 0x20, virtual false, abstract: false, final false
  static inline int32_t ceilpow2(int32_t x);

  /// @brief Method ceilpow2, addr 0x6435e58, size 0x24, virtual false, abstract: false, final false
  static inline int64_t ceilpow2(int64_t x);

  /// @brief Method ceilpow2, addr 0x6435c88, size 0x20, virtual false, abstract: false, final false
  static inline uint32_t ceilpow2(uint32_t x);

  /// @brief Method ceilpow2, addr 0x6435e7c, size 0x24, virtual false, abstract: false, final false
  static inline uint64_t ceilpow2(uint64_t x);

  /// @brief Method chgsign, addr 0x6437724, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 chgsign(::Unity::Mathematics::float2 x, ::Unity::Mathematics::float2 y);

  /// @brief Method chgsign, addr 0x643775c, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 chgsign(::Unity::Mathematics::float3 x, ::Unity::Mathematics::float3 y);

  /// @brief Method chgsign, addr 0x64377a8, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 chgsign(::Unity::Mathematics::float4 x, ::Unity::Mathematics::float4 y);

  /// @brief Method chgsign, addr 0x643770c, size 0x18, virtual false, abstract: false, final false
  static inline float_t chgsign(float_t x, float_t y);

  /// @brief Method clamp, addr 0x6425b54, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 clamp(::Unity::Mathematics::double2 valueToClamp, ::Unity::Mathematics::double2 lowerBound, ::Unity::Mathematics::double2 upperBound);

  /// @brief Method clamp, addr 0x6425b98, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 clamp(::Unity::Mathematics::double3 valueToClamp, ::Unity::Mathematics::double3 lowerBound, ::Unity::Mathematics::double3 upperBound);

  /// @brief Method clamp, addr 0x6425c20, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 clamp(::Unity::Mathematics::double4 valueToClamp, ::Unity::Mathematics::double4 lowerBound, ::Unity::Mathematics::double4 upperBound);

  /// @brief Method clamp, addr 0x64259f4, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 clamp(::Unity::Mathematics::float2 valueToClamp, ::Unity::Mathematics::float2 lowerBound, ::Unity::Mathematics::float2 upperBound);

  /// @brief Method clamp, addr 0x6425a38, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 clamp(::Unity::Mathematics::float3 valueToClamp, ::Unity::Mathematics::float3 lowerBound, ::Unity::Mathematics::float3 upperBound);

  /// @brief Method clamp, addr 0x6425ab0, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 clamp(::Unity::Mathematics::float4 valueToClamp, ::Unity::Mathematics::float4 lowerBound, ::Unity::Mathematics::float4 upperBound);

  /// @brief Method clamp, addr 0x64257d0, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 clamp(::Unity::Mathematics::int2 valueToClamp, ::Unity::Mathematics::int2 lowerBound, ::Unity::Mathematics::int2 upperBound);

  /// @brief Method clamp, addr 0x6425804, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 clamp(::Unity::Mathematics::int3 valueToClamp, ::Unity::Mathematics::int3 lowerBound, ::Unity::Mathematics::int3 upperBound);

  /// @brief Method clamp, addr 0x6425848, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 clamp(::Unity::Mathematics::int4 valueToClamp, ::Unity::Mathematics::int4 lowerBound, ::Unity::Mathematics::int4 upperBound);

  /// @brief Method clamp, addr 0x64258c0, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 clamp(::Unity::Mathematics::uint2 valueToClamp, ::Unity::Mathematics::uint2 lowerBound, ::Unity::Mathematics::uint2 upperBound);

  /// @brief Method clamp, addr 0x64258f4, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 clamp(::Unity::Mathematics::uint3 valueToClamp, ::Unity::Mathematics::uint3 lowerBound, ::Unity::Mathematics::uint3 upperBound);

  /// @brief Method clamp, addr 0x6425938, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 clamp(::Unity::Mathematics::uint4 valueToClamp, ::Unity::Mathematics::uint4 lowerBound, ::Unity::Mathematics::uint4 upperBound);

  /// @brief Method clamp, addr 0x6425b24, size 0x30, virtual false, abstract: false, final false
  static inline double_t clamp(double_t valueToClamp, double_t lowerBound, double_t upperBound);

  /// @brief Method clamp, addr 0x64259c4, size 0x30, virtual false, abstract: false, final false
  static inline float_t clamp(float_t valueToClamp, float_t lowerBound, float_t upperBound);

  /// @brief Method clamp, addr 0x64257bc, size 0x14, virtual false, abstract: false, final false
  static inline int32_t clamp(int32_t valueToClamp, int32_t lowerBound, int32_t upperBound);

  /// @brief Method clamp, addr 0x642599c, size 0x14, virtual false, abstract: false, final false
  static inline int64_t clamp(int64_t valueToClamp, int64_t lowerBound, int64_t upperBound);

  /// @brief Method clamp, addr 0x64258ac, size 0x14, virtual false, abstract: false, final false
  static inline uint32_t clamp(uint32_t valueToClamp, uint32_t lowerBound, uint32_t upperBound);

  /// @brief Method clamp, addr 0x64259b0, size 0x14, virtual false, abstract: false, final false
  static inline uint64_t clamp(uint64_t valueToClamp, uint64_t lowerBound, uint64_t upperBound);

  /// @brief Method cmax, addr 0x6436c20, size 0x1c, virtual false, abstract: false, final false
  static inline double_t cmax(::Unity::Mathematics::double2 x);

  /// @brief Method cmax, addr 0x6436c3c, size 0x30, virtual false, abstract: false, final false
  static inline double_t cmax(::Unity::Mathematics::double3 x);

  /// @brief Method cmax, addr 0x6436c6c, size 0x44, virtual false, abstract: false, final false
  static inline double_t cmax(::Unity::Mathematics::double4 x);

  /// @brief Method cmax, addr 0x6436b90, size 0x1c, virtual false, abstract: false, final false
  static inline float_t cmax(::Unity::Mathematics::float2 x);

  /// @brief Method cmax, addr 0x6436bac, size 0x30, virtual false, abstract: false, final false
  static inline float_t cmax(::Unity::Mathematics::float3 x);

  /// @brief Method cmax, addr 0x6436bdc, size 0x44, virtual false, abstract: false, final false
  static inline float_t cmax(::Unity::Mathematics::float4 x);

  /// @brief Method cmax, addr 0x6436af8, size 0x10, virtual false, abstract: false, final false
  static inline int32_t cmax(::Unity::Mathematics::int2 x);

  /// @brief Method cmax, addr 0x6436b08, size 0x18, virtual false, abstract: false, final false
  static inline int32_t cmax(::Unity::Mathematics::int3 x);

  /// @brief Method cmax, addr 0x6436b20, size 0x24, virtual false, abstract: false, final false
  static inline int32_t cmax(::Unity::Mathematics::int4 x);

  /// @brief Method cmax, addr 0x6436b44, size 0x10, virtual false, abstract: false, final false
  static inline uint32_t cmax(::Unity::Mathematics::uint2 x);

  /// @brief Method cmax, addr 0x6436b54, size 0x18, virtual false, abstract: false, final false
  static inline uint32_t cmax(::Unity::Mathematics::uint3 x);

  /// @brief Method cmax, addr 0x6436b6c, size 0x24, virtual false, abstract: false, final false
  static inline uint32_t cmax(::Unity::Mathematics::uint4 x);

  /// @brief Method cmin, addr 0x6436a68, size 0x1c, virtual false, abstract: false, final false
  static inline double_t cmin(::Unity::Mathematics::double2 x);

  /// @brief Method cmin, addr 0x6436a84, size 0x30, virtual false, abstract: false, final false
  static inline double_t cmin(::Unity::Mathematics::double3 x);

  /// @brief Method cmin, addr 0x6436ab4, size 0x44, virtual false, abstract: false, final false
  static inline double_t cmin(::Unity::Mathematics::double4 x);

  /// @brief Method cmin, addr 0x64369d8, size 0x1c, virtual false, abstract: false, final false
  static inline float_t cmin(::Unity::Mathematics::float2 x);

  /// @brief Method cmin, addr 0x64369f4, size 0x30, virtual false, abstract: false, final false
  static inline float_t cmin(::Unity::Mathematics::float3 x);

  /// @brief Method cmin, addr 0x6436a24, size 0x44, virtual false, abstract: false, final false
  static inline float_t cmin(::Unity::Mathematics::float4 x);

  /// @brief Method cmin, addr 0x6436940, size 0x10, virtual false, abstract: false, final false
  static inline int32_t cmin(::Unity::Mathematics::int2 x);

  /// @brief Method cmin, addr 0x6436950, size 0x18, virtual false, abstract: false, final false
  static inline int32_t cmin(::Unity::Mathematics::int3 x);

  /// @brief Method cmin, addr 0x6436968, size 0x24, virtual false, abstract: false, final false
  static inline int32_t cmin(::Unity::Mathematics::int4 x);

  /// @brief Method cmin, addr 0x643698c, size 0x10, virtual false, abstract: false, final false
  static inline uint32_t cmin(::Unity::Mathematics::uint2 x);

  /// @brief Method cmin, addr 0x643699c, size 0x18, virtual false, abstract: false, final false
  static inline uint32_t cmin(::Unity::Mathematics::uint3 x);

  /// @brief Method cmin, addr 0x64369b4, size 0x24, virtual false, abstract: false, final false
  static inline uint32_t cmin(::Unity::Mathematics::uint4 x);

  /// @brief Method compress, addr 0x6436f60, size 0x58, virtual false, abstract: false, final false
  static inline int32_t compress(float_t* output, int32_t index, ::Unity::Mathematics::float4 val, ::Unity::Mathematics::bool4 mask);

  /// @brief Method compress, addr 0x6436ea0, size 0x60, virtual false, abstract: false, final false
  static inline int32_t compress(int32_t* output, int32_t index, ::Unity::Mathematics::int4 val, ::Unity::Mathematics::bool4 mask);

  /// @brief Method compress, addr 0x6436f00, size 0x60, virtual false, abstract: false, final false
  static inline int32_t compress(uint32_t* output, int32_t index, ::Unity::Mathematics::uint4 val, ::Unity::Mathematics::bool4 mask);

  /// @brief Method conjugate, addr 0x643f564, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion conjugate(::Unity::Mathematics::quaternion q);

  /// @brief Method cos, addr 0x6428238, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 cos(::Unity::Mathematics::double2 x);

  /// @brief Method cos, addr 0x64282e8, size 0x100, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 cos(::Unity::Mathematics::double3 x);

  /// @brief Method cos, addr 0x64283e8, size 0x148, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 cos(::Unity::Mathematics::double4 x);

  /// @brief Method cos, addr 0x6427ec4, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 cos(::Unity::Mathematics::float2 x);

  /// @brief Method cos, addr 0x6427f7c, size 0x108, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 cos(::Unity::Mathematics::float3 x);

  /// @brief Method cos, addr 0x6428084, size 0x154, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 cos(::Unity::Mathematics::float4 x);

  /// @brief Method cos, addr 0x64281d8, size 0x60, virtual false, abstract: false, final false
  static inline double_t cos(double_t x);

  /// @brief Method cos, addr 0x6427e5c, size 0x68, virtual false, abstract: false, final false
  static inline float_t cos(float_t x);

  /// @brief Method cosh, addr 0x642890c, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 cosh(::Unity::Mathematics::double2 x);

  /// @brief Method cosh, addr 0x64289bc, size 0x100, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 cosh(::Unity::Mathematics::double3 x);

  /// @brief Method cosh, addr 0x6428abc, size 0x148, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 cosh(::Unity::Mathematics::double4 x);

  /// @brief Method cosh, addr 0x6428598, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 cosh(::Unity::Mathematics::float2 x);

  /// @brief Method cosh, addr 0x6428650, size 0x108, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 cosh(::Unity::Mathematics::float3 x);

  /// @brief Method cosh, addr 0x6428758, size 0x154, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 cosh(::Unity::Mathematics::float4 x);

  /// @brief Method cosh, addr 0x64288ac, size 0x60, virtual false, abstract: false, final false
  static inline double_t cosh(double_t x);

  /// @brief Method cosh, addr 0x6428530, size 0x68, virtual false, abstract: false, final false
  static inline float_t cosh(float_t x);

  /// @brief Method countbits, addr 0x6434514, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 countbits(::Unity::Mathematics::int2 x);

  /// @brief Method countbits, addr 0x6434740, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 countbits(::Unity::Mathematics::uint2 x);

  /// @brief Method countbits, addr 0x643459c, size 0xac, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 countbits(::Unity::Mathematics::int3 x);

  /// @brief Method countbits, addr 0x64347c8, size 0xac, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 countbits(::Unity::Mathematics::uint3 x);

  /// @brief Method countbits, addr 0x6434648, size 0xe4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 countbits(::Unity::Mathematics::int4 x);

  /// @brief Method countbits, addr 0x6434874, size 0xe4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 countbits(::Unity::Mathematics::uint4 x);

  /// @brief Method countbits, addr 0x6434500, size 0x14, virtual false, abstract: false, final false
  static inline int32_t countbits(int32_t x);

  /// @brief Method countbits, addr 0x643496c, size 0x14, virtual false, abstract: false, final false
  static inline int32_t countbits(int64_t x);

  /// @brief Method countbits, addr 0x643472c, size 0x14, virtual false, abstract: false, final false
  static inline int32_t countbits(uint32_t x);

  /// @brief Method countbits, addr 0x6434958, size 0x14, virtual false, abstract: false, final false
  static inline int32_t countbits(uint64_t x);

  /// @brief Method cross, addr 0x643245c, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 cross(::Unity::Mathematics::double3 x, ::Unity::Mathematics::double3 y);

  /// @brief Method cross, addr 0x6432434, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 cross(::Unity::Mathematics::float3 x, ::Unity::Mathematics::float3 y);

  /// @brief Method csum, addr 0x6436d3c, size 0x8, virtual false, abstract: false, final false
  static inline double_t csum(::Unity::Mathematics::double2 x);

  /// @brief Method csum, addr 0x6436d44, size 0xc, virtual false, abstract: false, final false
  static inline double_t csum(::Unity::Mathematics::double3 x);

  /// @brief Method csum, addr 0x6436d50, size 0x10, virtual false, abstract: false, final false
  static inline double_t csum(::Unity::Mathematics::double4 x);

  /// @brief Method csum, addr 0x6436d18, size 0x8, virtual false, abstract: false, final false
  static inline float_t csum(::Unity::Mathematics::float2 x);

  /// @brief Method csum, addr 0x6436d20, size 0xc, virtual false, abstract: false, final false
  static inline float_t csum(::Unity::Mathematics::float3 x);

  /// @brief Method csum, addr 0x6436d2c, size 0x10, virtual false, abstract: false, final false
  static inline float_t csum(::Unity::Mathematics::float4 x);

  /// @brief Method csum, addr 0x6436cb0, size 0xc, virtual false, abstract: false, final false
  static inline int32_t csum(::Unity::Mathematics::int2 x);

  /// @brief Method csum, addr 0x6436cbc, size 0x10, virtual false, abstract: false, final false
  static inline int32_t csum(::Unity::Mathematics::int3 x);

  /// @brief Method csum, addr 0x6436ccc, size 0x18, virtual false, abstract: false, final false
  static inline int32_t csum(::Unity::Mathematics::int4 x);

  /// @brief Method csum, addr 0x6436ce4, size 0xc, virtual false, abstract: false, final false
  static inline uint32_t csum(::Unity::Mathematics::uint2 x);

  /// @brief Method csum, addr 0x6436cf0, size 0x10, virtual false, abstract: false, final false
  static inline uint32_t csum(::Unity::Mathematics::uint3 x);

  /// @brief Method csum, addr 0x6436d00, size 0x18, virtual false, abstract: false, final false
  static inline uint32_t csum(::Unity::Mathematics::uint4 x);

  /// @brief Method decompose, addr 0x6416534, size 0x108, virtual false, abstract: false, final false
  static inline void decompose(::Unity::Mathematics::AffineTransform a, ::ByRef<::Unity::Mathematics::float3> translation, ::ByRef<::Unity::Mathematics::quaternion> rotation,
                               ::ByRef<::Unity::Mathematics::float3> scale);

  /// @brief Method degrees, addr 0x64368f8, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 degrees(::Unity::Mathematics::double2 x);

  /// @brief Method degrees, addr 0x643690c, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 degrees(::Unity::Mathematics::double3 x);

  /// @brief Method degrees, addr 0x6436924, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 degrees(::Unity::Mathematics::double4 x);

  /// @brief Method degrees, addr 0x64368a0, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 degrees(::Unity::Mathematics::float2 x);

  /// @brief Method degrees, addr 0x64368b4, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 degrees(::Unity::Mathematics::float3 x);

  /// @brief Method degrees, addr 0x64368cc, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 degrees(::Unity::Mathematics::float4 x);

  /// @brief Method degrees, addr 0x64368e8, size 0x10, virtual false, abstract: false, final false
  static inline double_t degrees(double_t x);

  /// @brief Method degrees, addr 0x6436890, size 0x10, virtual false, abstract: false, final false
  static inline float_t degrees(float_t x);

  /// @brief Method determinant, addr 0x641933c, size 0x10, virtual false, abstract: false, final false
  static inline double_t determinant(::Unity::Mathematics::double2x2 m);

  /// @brief Method determinant, addr 0x641a658, size 0x54, virtual false, abstract: false, final false
  static inline double_t determinant(::Unity::Mathematics::double3x3 m);

  /// @brief Method determinant, addr 0x641c66c, size 0xe8, virtual false, abstract: false, final false
  static inline double_t determinant(::Unity::Mathematics::double4x4 m);

  /// @brief Method determinant, addr 0x641d020, size 0x10, virtual false, abstract: false, final false
  static inline float_t determinant(::Unity::Mathematics::float2x2 m);

  /// @brief Method determinant, addr 0x641e144, size 0x54, virtual false, abstract: false, final false
  static inline float_t determinant(::Unity::Mathematics::float3x3 m);

  /// @brief Method determinant, addr 0x641fcf4, size 0xe8, virtual false, abstract: false, final false
  static inline float_t determinant(::Unity::Mathematics::float4x4 m);

  /// @brief Method determinant, addr 0x64210ac, size 0x18, virtual false, abstract: false, final false
  static inline int32_t determinant(::Unity::Mathematics::int2x2 m);

  /// @brief Method determinant, addr 0x6422404, size 0x4c, virtual false, abstract: false, final false
  static inline int32_t determinant(::Unity::Mathematics::int3x3 m);

  /// @brief Method determinant, addr 0x6423ea4, size 0xc4, virtual false, abstract: false, final false
  static inline int32_t determinant(::Unity::Mathematics::int4x4 m);

  /// @brief Method distance, addr 0x6432158, size 0x88, virtual false, abstract: false, final false
  static inline double_t distance(::Unity::Mathematics::double2 x, ::Unity::Mathematics::double2 y);

  /// @brief Method distance, addr 0x64321e0, size 0xa4, virtual false, abstract: false, final false
  static inline double_t distance(::Unity::Mathematics::double3 x, ::Unity::Mathematics::double3 y);

  /// @brief Method distance, addr 0x6432284, size 0xc0, virtual false, abstract: false, final false
  static inline double_t distance(::Unity::Mathematics::double4 x, ::Unity::Mathematics::double4 y);

  /// @brief Method distance, addr 0x6432150, size 0x8, virtual false, abstract: false, final false
  static inline double_t distance(double_t x, double_t y);

  /// @brief Method distance, addr 0x6431f64, size 0x88, virtual false, abstract: false, final false
  static inline float_t distance(::Unity::Mathematics::float2 x, ::Unity::Mathematics::float2 y);

  /// @brief Method distance, addr 0x6431fec, size 0xa4, virtual false, abstract: false, final false
  static inline float_t distance(::Unity::Mathematics::float3 x, ::Unity::Mathematics::float3 y);

  /// @brief Method distance, addr 0x6432090, size 0xc0, virtual false, abstract: false, final false
  static inline float_t distance(::Unity::Mathematics::float4 x, ::Unity::Mathematics::float4 y);

  /// @brief Method distance, addr 0x6431f5c, size 0x8, virtual false, abstract: false, final false
  static inline float_t distance(float_t x, float_t y);

  /// @brief Method distancesq, addr 0x64323c8, size 0x18, virtual false, abstract: false, final false
  static inline double_t distancesq(::Unity::Mathematics::double2 x, ::Unity::Mathematics::double2 y);

  /// @brief Method distancesq, addr 0x64323e0, size 0x24, virtual false, abstract: false, final false
  static inline double_t distancesq(::Unity::Mathematics::double3 x, ::Unity::Mathematics::double3 y);

  /// @brief Method distancesq, addr 0x6432404, size 0x30, virtual false, abstract: false, final false
  static inline double_t distancesq(::Unity::Mathematics::double4 x, ::Unity::Mathematics::double4 y);

  /// @brief Method distancesq, addr 0x64323bc, size 0xc, virtual false, abstract: false, final false
  static inline double_t distancesq(double_t x, double_t y);

  /// @brief Method distancesq, addr 0x6432350, size 0x18, virtual false, abstract: false, final false
  static inline float_t distancesq(::Unity::Mathematics::float2 x, ::Unity::Mathematics::float2 y);

  /// @brief Method distancesq, addr 0x6432368, size 0x24, virtual false, abstract: false, final false
  static inline float_t distancesq(::Unity::Mathematics::float3 x, ::Unity::Mathematics::float3 y);

  /// @brief Method distancesq, addr 0x643238c, size 0x30, virtual false, abstract: false, final false
  static inline float_t distancesq(::Unity::Mathematics::float4 x, ::Unity::Mathematics::float4 y);

  /// @brief Method distancesq, addr 0x6432344, size 0xc, virtual false, abstract: false, final false
  static inline float_t distancesq(float_t x, float_t y);

  /// @brief Method dot, addr 0x64261e4, size 0x10, virtual false, abstract: false, final false
  static inline double_t dot(::Unity::Mathematics::double2 x, ::Unity::Mathematics::double2 y);

  /// @brief Method dot, addr 0x64261f4, size 0x18, virtual false, abstract: false, final false
  static inline double_t dot(::Unity::Mathematics::double3 x, ::Unity::Mathematics::double3 y);

  /// @brief Method dot, addr 0x642620c, size 0x20, virtual false, abstract: false, final false
  static inline double_t dot(::Unity::Mathematics::double4 x, ::Unity::Mathematics::double4 y);

  /// @brief Method dot, addr 0x64261dc, size 0x8, virtual false, abstract: false, final false
  static inline double_t dot(double_t x, double_t y);

  /// @brief Method dot, addr 0x643f5ac, size 0x20, virtual false, abstract: false, final false
  static inline float_t dot(::Unity::Mathematics::quaternion a, ::Unity::Mathematics::quaternion b);

  /// @brief Method dot, addr 0x6426194, size 0x10, virtual false, abstract: false, final false
  static inline float_t dot(::Unity::Mathematics::float2 x, ::Unity::Mathematics::float2 y);

  /// @brief Method dot, addr 0x64261a4, size 0x18, virtual false, abstract: false, final false
  static inline float_t dot(::Unity::Mathematics::float3 x, ::Unity::Mathematics::float3 y);

  /// @brief Method dot, addr 0x64261bc, size 0x20, virtual false, abstract: false, final false
  static inline float_t dot(::Unity::Mathematics::float4 x, ::Unity::Mathematics::float4 y);

  /// @brief Method dot, addr 0x642618c, size 0x8, virtual false, abstract: false, final false
  static inline float_t dot(float_t x, float_t y);

  /// @brief Method dot, addr 0x64260e4, size 0x14, virtual false, abstract: false, final false
  static inline int32_t dot(::Unity::Mathematics::int2 x, ::Unity::Mathematics::int2 y);

  /// @brief Method dot, addr 0x64260f8, size 0x18, virtual false, abstract: false, final false
  static inline int32_t dot(::Unity::Mathematics::int3 x, ::Unity::Mathematics::int3 y);

  /// @brief Method dot, addr 0x6426110, size 0x24, virtual false, abstract: false, final false
  static inline int32_t dot(::Unity::Mathematics::int4 x, ::Unity::Mathematics::int4 y);

  /// @brief Method dot, addr 0x64260dc, size 0x8, virtual false, abstract: false, final false
  static inline int32_t dot(int32_t x, int32_t y);

  /// @brief Method dot, addr 0x642613c, size 0x14, virtual false, abstract: false, final false
  static inline uint32_t dot(::Unity::Mathematics::uint2 x, ::Unity::Mathematics::uint2 y);

  /// @brief Method dot, addr 0x6426150, size 0x18, virtual false, abstract: false, final false
  static inline uint32_t dot(::Unity::Mathematics::uint3 x, ::Unity::Mathematics::uint3 y);

  /// @brief Method dot, addr 0x6426168, size 0x24, virtual false, abstract: false, final false
  static inline uint32_t dot(::Unity::Mathematics::uint4 x, ::Unity::Mathematics::uint4 y);

  /// @brief Method dot, addr 0x6426134, size 0x8, virtual false, abstract: false, final false
  static inline uint32_t dot(uint32_t x, uint32_t y);

  /// @brief Method double2, addr 0x6418d7c, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 double2(::Unity::Mathematics::bool2 v);

  /// @brief Method double2, addr 0x6418ec4, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 double2(::Unity::Mathematics::float2 v);

  /// @brief Method double2, addr 0x6418dd0, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 double2(::Unity::Mathematics::half v);

  /// @brief Method double2, addr 0x6418e34, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 double2(::Unity::Mathematics::half2 v);

  /// @brief Method double2, addr 0x6418da4, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 double2(::Unity::Mathematics::int2 v);

  /// @brief Method double2, addr 0x6418dc0, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 double2(::Unity::Mathematics::uint2 v);

  /// @brief Method double2, addr 0x6418d64, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 double2(bool v);

  /// @brief Method double2, addr 0x6418d5c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 double2(double_t v);

  /// @brief Method double2, addr 0x6418eb8, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 double2(float_t v);

  /// @brief Method double2, addr 0x6418d98, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 double2(int32_t v);

  /// @brief Method double2, addr 0x6418db4, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 double2(uint32_t v);

  /// @brief Method double2, addr 0x6418d54, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 double2(double_t x, double_t y);

  /// @brief Method double2, addr 0x6418d58, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 double2(::Unity::Mathematics::double2 xy);

  /// @brief Method double2x2, addr 0x6419208, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 double2x2(::Unity::Mathematics::double2 c0, ::Unity::Mathematics::double2 c1);

  /// @brief Method double2x2, addr 0x641920c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 double2x2(double_t m00, double_t m01, double_t m10, double_t m11);

  /// @brief Method double2x2, addr 0x641924c, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 double2x2(::Unity::Mathematics::bool2x2 v);

  /// @brief Method double2x2, addr 0x64192ec, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 double2x2(::Unity::Mathematics::float2x2 v);

  /// @brief Method double2x2, addr 0x641928c, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 double2x2(::Unity::Mathematics::int2x2 v);

  /// @brief Method double2x2, addr 0x64192bc, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 double2x2(::Unity::Mathematics::uint2x2 v);

  /// @brief Method double2x2, addr 0x641922c, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 double2x2(bool v);

  /// @brief Method double2x2, addr 0x641921c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 double2x2(double_t v);

  /// @brief Method double2x2, addr 0x64192d8, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 double2x2(float_t v);

  /// @brief Method double2x2, addr 0x6419278, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 double2x2(int32_t v);

  /// @brief Method double2x2, addr 0x64192a8, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 double2x2(uint32_t v);

  /// @brief Method double2x3, addr 0x6419444, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 double2x3(::Unity::Mathematics::double2 c0, ::Unity::Mathematics::double2 c1, ::Unity::Mathematics::double2 c2);

  /// @brief Method double2x3, addr 0x6419454, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 double2x3(double_t m00, double_t m01, double_t m02, double_t m10, double_t m11, double_t m12);

  /// @brief Method double2x3, addr 0x6419494, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 double2x3(::Unity::Mathematics::bool2x3 v);

  /// @brief Method double2x3, addr 0x6419580, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 double2x3(::Unity::Mathematics::float2x3 v);

  /// @brief Method double2x3, addr 0x64194f0, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 double2x3(::Unity::Mathematics::int2x3 v);

  /// @brief Method double2x3, addr 0x6419538, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 double2x3(::Unity::Mathematics::uint2x3 v);

  /// @brief Method double2x3, addr 0x6419474, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 double2x3(bool v);

  /// @brief Method double2x3, addr 0x6419464, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 double2x3(double_t v);

  /// @brief Method double2x3, addr 0x641956c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 double2x3(float_t v);

  /// @brief Method double2x3, addr 0x64194dc, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 double2x3(int32_t v);

  /// @brief Method double2x3, addr 0x6419524, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 double2x3(uint32_t v);

  /// @brief Method double2x4, addr 0x6419708, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 double2x4(::Unity::Mathematics::double2 c0, ::Unity::Mathematics::double2 c1, ::Unity::Mathematics::double2 c2, ::Unity::Mathematics::double2 c3);

  /// @brief Method double2x4, addr 0x641971c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 double2x4(double_t m00, double_t m01, double_t m02, double_t m03, double_t m10, double_t m11, double_t m12, double_t m13);

  /// @brief Method double2x4, addr 0x6419768, size 0x5c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 double2x4(::Unity::Mathematics::bool2x4 v);

  /// @brief Method double2x4, addr 0x6419894, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 double2x4(::Unity::Mathematics::float2x4 v);

  /// @brief Method double2x4, addr 0x64197dc, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 double2x4(::Unity::Mathematics::int2x4 v);

  /// @brief Method double2x4, addr 0x6419838, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 double2x4(::Unity::Mathematics::uint2x4 v);

  /// @brief Method double2x4, addr 0x6419744, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 double2x4(bool v);

  /// @brief Method double2x4, addr 0x6419730, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 double2x4(double_t v);

  /// @brief Method double2x4, addr 0x641987c, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 double2x4(float_t v);

  /// @brief Method double2x4, addr 0x64197c4, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 double2x4(int32_t v);

  /// @brief Method double2x4, addr 0x6419820, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 double2x4(uint32_t v);

  /// @brief Method double3, addr 0x6419ab4, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 double3(::Unity::Mathematics::bool3 v);

  /// @brief Method double3, addr 0x6419c88, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 double3(::Unity::Mathematics::float3 v);

  /// @brief Method double3, addr 0x6419b20, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 double3(::Unity::Mathematics::half v);

  /// @brief Method double3, addr 0x6419b88, size 0xf0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 double3(::Unity::Mathematics::half3 v);

  /// @brief Method double3, addr 0x6419ae8, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 double3(::Unity::Mathematics::int3 v);

  /// @brief Method double3, addr 0x6419b0c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 double3(::Unity::Mathematics::uint3 v);

  /// @brief Method double3, addr 0x6419a98, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 double3(bool v);

  /// @brief Method double3, addr 0x6419a8c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 double3(double_t v);

  /// @brief Method double3, addr 0x6419c78, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 double3(float_t v);

  /// @brief Method double3, addr 0x6419ad8, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 double3(int32_t v);

  /// @brief Method double3, addr 0x6419afc, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 double3(uint32_t v);

  /// @brief Method double3, addr 0x6419a7c, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 double3(double_t x, double_t y, double_t z);

  /// @brief Method double3, addr 0x6419a80, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 double3(double_t x, ::Unity::Mathematics::double2 yz);

  /// @brief Method double3, addr 0x6419a84, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 double3(::Unity::Mathematics::double2 xy, double_t z);

  /// @brief Method double3, addr 0x6419a88, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 double3(::Unity::Mathematics::double3 xyz);

  /// @brief Method double3x2, addr 0x641a080, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x2 double3x2(::Unity::Mathematics::double3 c0, ::Unity::Mathematics::double3 c1);

  /// @brief Method double3x2, addr 0x641a090, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x2 double3x2(double_t m00, double_t m01, double_t m10, double_t m11, double_t m20, double_t m21);

  /// @brief Method double3x2, addr 0x641a0d0, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x2 double3x2(::Unity::Mathematics::bool3x2 v);

  /// @brief Method double3x2, addr 0x641a1bc, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x2 double3x2(::Unity::Mathematics::float3x2 v);

  /// @brief Method double3x2, addr 0x641a12c, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x2 double3x2(::Unity::Mathematics::int3x2 v);

  /// @brief Method double3x2, addr 0x641a174, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x2 double3x2(::Unity::Mathematics::uint3x2 v);

  /// @brief Method double3x2, addr 0x641a0b0, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x2 double3x2(bool v);

  /// @brief Method double3x2, addr 0x641a0a0, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x2 double3x2(double_t v);

  /// @brief Method double3x2, addr 0x641a1a8, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x2 double3x2(float_t v);

  /// @brief Method double3x2, addr 0x641a118, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x2 double3x2(int32_t v);

  /// @brief Method double3x2, addr 0x641a160, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x2 double3x2(uint32_t v);

  /// @brief Method double3x3, addr 0x641a338, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 double3x3(::Unity::Mathematics::double3 c0, ::Unity::Mathematics::double3 c1, ::Unity::Mathematics::double3 c2);

  /// @brief Method double3x3, addr 0x641a35c, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 double3x3(double_t m00, double_t m01, double_t m02, double_t m10, double_t m11, double_t m12, double_t m20, double_t m21, double_t m22);

  /// @brief Method double3x3, addr 0x641a3b8, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 double3x3(::Unity::Mathematics::bool3x3 v);

  /// @brief Method double3x3, addr 0x641a524, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 double3x3(::Unity::Mathematics::float3x3 v);

  /// @brief Method double3x3, addr 0x641a44c, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 double3x3(::Unity::Mathematics::int3x3 v);

  /// @brief Method double3x3, addr 0x641a4b8, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 double3x3(::Unity::Mathematics::uint3x3 v);

  /// @brief Method double3x3, addr 0x641a390, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 double3x3(bool v);

  /// @brief Method double3x3, addr 0x641a378, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 double3x3(double_t v);

  /// @brief Method double3x3, addr 0x641a508, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 double3x3(float_t v);

  /// @brief Method double3x3, addr 0x641a430, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 double3x3(int32_t v);

  /// @brief Method double3x3, addr 0x641a49c, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 double3x3(uint32_t v);

  /// @brief Method double3x4, addr 0x641a874, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 double3x4(::Unity::Mathematics::double3 c0, ::Unity::Mathematics::double3 c1, ::Unity::Mathematics::double3 c2, ::Unity::Mathematics::double3 c3);

  /// @brief Method double3x4, addr 0x641a8a8, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 double3x4(double_t m00, double_t m01, double_t m02, double_t m03, double_t m10, double_t m11, double_t m12, double_t m13, double_t m20, double_t m21,
                                                          double_t m22, double_t m23);

  /// @brief Method double3x4, addr 0x641a924, size 0x9c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 double3x4(::Unity::Mathematics::bool3x4 v);

  /// @brief Method double3x4, addr 0x641aae8, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 double3x4(::Unity::Mathematics::float3x4 v);

  /// @brief Method double3x4, addr 0x641a9e0, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 double3x4(::Unity::Mathematics::int3x4 v);

  /// @brief Method double3x4, addr 0x641aa64, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 double3x4(::Unity::Mathematics::uint3x4 v);

  /// @brief Method double3x4, addr 0x641a8f8, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 double3x4(bool v);

  /// @brief Method double3x4, addr 0x641a8dc, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 double3x4(double_t v);

  /// @brief Method double3x4, addr 0x641aac8, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 double3x4(float_t v);

  /// @brief Method double3x4, addr 0x641a9c0, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 double3x4(int32_t v);

  /// @brief Method double3x4, addr 0x641aa44, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 double3x4(uint32_t v);

  /// @brief Method double4, addr 0x641ae68, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 double4(::Unity::Mathematics::bool4 v);

  /// @brief Method double4, addr 0x641b0ac, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 double4(::Unity::Mathematics::float4 v);

  /// @brief Method double4, addr 0x641aef4, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 double4(::Unity::Mathematics::half v);

  /// @brief Method double4, addr 0x641af60, size 0x138, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 double4(::Unity::Mathematics::half4 v);

  /// @brief Method double4, addr 0x641aea8, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 double4(::Unity::Mathematics::int4 v);

  /// @brief Method double4, addr 0x641aed8, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 double4(::Unity::Mathematics::uint4 v);

  /// @brief Method double4, addr 0x641ae48, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 double4(bool v);

  /// @brief Method double4, addr 0x641ae38, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 double4(double_t v);

  /// @brief Method double4, addr 0x641b098, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 double4(float_t v);

  /// @brief Method double4, addr 0x641ae94, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 double4(int32_t v);

  /// @brief Method double4, addr 0x641aec4, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 double4(uint32_t v);

  /// @brief Method double4, addr 0x641ae18, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 double4(double_t x, double_t y, double_t z, double_t w);

  /// @brief Method double4, addr 0x641ae1c, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 double4(double_t x, double_t y, ::Unity::Mathematics::double2 zw);

  /// @brief Method double4, addr 0x641ae20, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 double4(double_t x, ::Unity::Mathematics::double2 yz, double_t w);

  /// @brief Method double4, addr 0x641ae24, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 double4(double_t x, ::Unity::Mathematics::double3 yzw);

  /// @brief Method double4, addr 0x641ae28, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 double4(::Unity::Mathematics::double2 xy, double_t z, double_t w);

  /// @brief Method double4, addr 0x641ae2c, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 double4(::Unity::Mathematics::double2 xy, ::Unity::Mathematics::double2 zw);

  /// @brief Method double4, addr 0x641ae30, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 double4(::Unity::Mathematics::double3 xyz, double_t w);

  /// @brief Method double4, addr 0x641ae34, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 double4(::Unity::Mathematics::double4 xyzw);

  /// @brief Method double4x2, addr 0x641b570, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 double4x2(::Unity::Mathematics::double4 c0, ::Unity::Mathematics::double4 c1);

  /// @brief Method double4x2, addr 0x641b584, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 double4x2(double_t m00, double_t m01, double_t m10, double_t m11, double_t m20, double_t m21, double_t m30, double_t m31);

  /// @brief Method double4x2, addr 0x641b5d0, size 0x5c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 double4x2(::Unity::Mathematics::bool4x2 v);

  /// @brief Method double4x2, addr 0x641b6fc, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 double4x2(::Unity::Mathematics::float4x2 v);

  /// @brief Method double4x2, addr 0x641b644, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 double4x2(::Unity::Mathematics::int4x2 v);

  /// @brief Method double4x2, addr 0x641b6a0, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 double4x2(::Unity::Mathematics::uint4x2 v);

  /// @brief Method double4x2, addr 0x641b5ac, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 double4x2(bool v);

  /// @brief Method double4x2, addr 0x641b598, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 double4x2(double_t v);

  /// @brief Method double4x2, addr 0x641b6e4, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 double4x2(float_t v);

  /// @brief Method double4x2, addr 0x641b62c, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 double4x2(int32_t v);

  /// @brief Method double4x2, addr 0x641b688, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 double4x2(uint32_t v);

  /// @brief Method double4x3, addr 0x641b8f4, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 double4x3(::Unity::Mathematics::double4 c0, ::Unity::Mathematics::double4 c1, ::Unity::Mathematics::double4 c2);

  /// @brief Method double4x3, addr 0x641b920, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 double4x3(double_t m00, double_t m01, double_t m02, double_t m10, double_t m11, double_t m12, double_t m20, double_t m21, double_t m22, double_t m30,
                                                          double_t m31, double_t m32);

  /// @brief Method double4x3, addr 0x641b99c, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 double4x3(::Unity::Mathematics::bool4x3 v);

  /// @brief Method double4x3, addr 0x641bb48, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 double4x3(::Unity::Mathematics::float4x3 v);

  /// @brief Method double4x3, addr 0x641ba40, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 double4x3(::Unity::Mathematics::int4x3 v);

  /// @brief Method double4x3, addr 0x641bac4, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 double4x3(::Unity::Mathematics::uint4x3 v);

  /// @brief Method double4x3, addr 0x641b970, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 double4x3(bool v);

  /// @brief Method double4x3, addr 0x641b954, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 double4x3(double_t v);

  /// @brief Method double4x3, addr 0x641bb28, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 double4x3(float_t v);

  /// @brief Method double4x3, addr 0x641ba20, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 double4x3(int32_t v);

  /// @brief Method double4x3, addr 0x641baa4, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 double4x3(uint32_t v);

  /// @brief Method double4x4, addr 0x641be18, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x4 double4x4(::Unity::Mathematics::double4 c0, ::Unity::Mathematics::double4 c1, ::Unity::Mathematics::double4 c2, ::Unity::Mathematics::double4 c3);

  /// @brief Method double4x4, addr 0x641be5c, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x4 double4x4(double_t m00, double_t m01, double_t m02, double_t m03, double_t m10, double_t m11, double_t m12, double_t m13, double_t m20, double_t m21,
                                                          double_t m22, double_t m23, double_t m30, double_t m31, double_t m32, double_t m33);

  /// @brief Method double4x4, addr 0x641bf08, size 0xac, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x4 double4x4(::Unity::Mathematics::bool4x4 v);

  /// @brief Method double4x4, addr 0x641c134, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x4 double4x4(::Unity::Mathematics::float4x4 v);

  /// @brief Method double4x4, addr 0x641bfdc, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x4 double4x4(::Unity::Mathematics::int4x4 v);

  /// @brief Method double4x4, addr 0x641c088, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x4 double4x4(::Unity::Mathematics::uint4x4 v);

  /// @brief Method double4x4, addr 0x641bed4, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x4 double4x4(bool v);

  /// @brief Method double4x4, addr 0x641beb0, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x4 double4x4(double_t v);

  /// @brief Method double4x4, addr 0x641c10c, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x4 double4x4(float_t v);

  /// @brief Method double4x4, addr 0x641bfb4, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x4 double4x4(int32_t v);

  /// @brief Method double4x4, addr 0x641c060, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x4 double4x4(uint32_t v);

  /// @brief Method down, addr 0x6437b60, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 down();

  /// @brief Method exp, addr 0x642dc00, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 exp(::Unity::Mathematics::double2 x);

  /// @brief Method exp, addr 0x642dcb0, size 0x100, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 exp(::Unity::Mathematics::double3 x);

  /// @brief Method exp, addr 0x642ddb0, size 0x148, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 exp(::Unity::Mathematics::double4 x);

  /// @brief Method exp, addr 0x642d88c, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 exp(::Unity::Mathematics::float2 x);

  /// @brief Method exp, addr 0x642d944, size 0x108, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 exp(::Unity::Mathematics::float3 x);

  /// @brief Method exp, addr 0x642da4c, size 0x154, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 exp(::Unity::Mathematics::float4 x);

  /// @brief Method exp, addr 0x643fa54, size 0x1a0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion exp(::Unity::Mathematics::quaternion q);

  /// @brief Method exp, addr 0x642dba0, size 0x60, virtual false, abstract: false, final false
  static inline double_t exp(double_t x);

  /// @brief Method exp, addr 0x642d824, size 0x68, virtual false, abstract: false, final false
  static inline float_t exp(float_t x);

  /// @brief Method exp10, addr 0x642ea78, size 0xc4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 exp10(::Unity::Mathematics::double2 x);

  /// @brief Method exp10, addr 0x642eb3c, size 0x110, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 exp10(::Unity::Mathematics::double3 x);

  /// @brief Method exp10, addr 0x642ec4c, size 0x164, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 exp10(::Unity::Mathematics::double4 x);

  /// @brief Method exp10, addr 0x642e6c8, size 0xcc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 exp10(::Unity::Mathematics::float2 x);

  /// @brief Method exp10, addr 0x642e794, size 0x114, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 exp10(::Unity::Mathematics::float3 x);

  /// @brief Method exp10, addr 0x642e8a8, size 0x168, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 exp10(::Unity::Mathematics::float4 x);

  /// @brief Method exp10, addr 0x642ea10, size 0x68, virtual false, abstract: false, final false
  static inline double_t exp10(double_t x);

  /// @brief Method exp10, addr 0x642e654, size 0x74, virtual false, abstract: false, final false
  static inline float_t exp10(float_t x);

  /// @brief Method exp2, addr 0x642e31c, size 0xc4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 exp2(::Unity::Mathematics::double2 x);

  /// @brief Method exp2, addr 0x642e3e0, size 0x110, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 exp2(::Unity::Mathematics::double3 x);

  /// @brief Method exp2, addr 0x642e4f0, size 0x164, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 exp2(::Unity::Mathematics::double4 x);

  /// @brief Method exp2, addr 0x642df6c, size 0xcc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 exp2(::Unity::Mathematics::float2 x);

  /// @brief Method exp2, addr 0x642e038, size 0x114, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 exp2(::Unity::Mathematics::float3 x);

  /// @brief Method exp2, addr 0x642e14c, size 0x168, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 exp2(::Unity::Mathematics::float4 x);

  /// @brief Method exp2, addr 0x642e2b4, size 0x68, virtual false, abstract: false, final false
  static inline double_t exp2(double_t x);

  /// @brief Method exp2, addr 0x642def8, size 0x74, virtual false, abstract: false, final false
  static inline float_t exp2(float_t x);

  /// @brief Method f16tof32, addr 0x6437010, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 f16tof32(::Unity::Mathematics::uint2 x);

  /// @brief Method f16tof32, addr 0x64370c0, size 0xf4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 f16tof32(::Unity::Mathematics::uint3 x);

  /// @brief Method f16tof32, addr 0x64371b4, size 0x148, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 f16tof32(::Unity::Mathematics::uint4 x);

  /// @brief Method f16tof32, addr 0x6436fb8, size 0x58, virtual false, abstract: false, final false
  static inline float_t f16tof32(uint32_t x);

  /// @brief Method f32tof16, addr 0x6437358, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 f32tof16(::Unity::Mathematics::float2 x);

  /// @brief Method f32tof16, addr 0x6437414, size 0xfc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 f32tof16(::Unity::Mathematics::float3 x);

  /// @brief Method f32tof16, addr 0x6437510, size 0x144, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 f32tof16(::Unity::Mathematics::float4 x);

  /// @brief Method f32tof16, addr 0x64372fc, size 0x5c, virtual false, abstract: false, final false
  static inline uint32_t f32tof16(float_t x);

  /// @brief Method faceforward, addr 0x6433d14, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 faceforward(::Unity::Mathematics::double2 n, ::Unity::Mathematics::double2 i, ::Unity::Mathematics::double2 ng);

  /// @brief Method faceforward, addr 0x6433d38, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 faceforward(::Unity::Mathematics::double3 n, ::Unity::Mathematics::double3 i, ::Unity::Mathematics::double3 ng);

  /// @brief Method faceforward, addr 0x6433d74, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 faceforward(::Unity::Mathematics::double4 n, ::Unity::Mathematics::double4 i, ::Unity::Mathematics::double4 ng);

  /// @brief Method faceforward, addr 0x6433c64, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 faceforward(::Unity::Mathematics::float2 n, ::Unity::Mathematics::float2 i, ::Unity::Mathematics::float2 ng);

  /// @brief Method faceforward, addr 0x6433c88, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 faceforward(::Unity::Mathematics::float3 n, ::Unity::Mathematics::float3 i, ::Unity::Mathematics::float3 ng);

  /// @brief Method faceforward, addr 0x6433cc4, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 faceforward(::Unity::Mathematics::float4 n, ::Unity::Mathematics::float4 i, ::Unity::Mathematics::float4 ng);

  /// @brief Method fastinverse, addr 0x641ab58, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 fastinverse(::Unity::Mathematics::double3x4 m);

  /// @brief Method fastinverse, addr 0x641c5d4, size 0x98, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x4 fastinverse(::Unity::Mathematics::double4x4 m);

  /// @brief Method fastinverse, addr 0x641e57c, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 fastinverse(::Unity::Mathematics::float3x4 m);

  /// @brief Method fastinverse, addr 0x641fc5c, size 0x98, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 fastinverse(::Unity::Mathematics::float4x4 m);

  /// @brief Method float2, addr 0x641ca88, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 float2(::Unity::Mathematics::bool2 v);

  /// @brief Method float2, addr 0x641cbc8, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 float2(::Unity::Mathematics::double2 v);

  /// @brief Method float2, addr 0x641cadc, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 float2(::Unity::Mathematics::half v);

  /// @brief Method float2, addr 0x641cb3c, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 float2(::Unity::Mathematics::half2 v);

  /// @brief Method float2, addr 0x641cab0, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 float2(::Unity::Mathematics::int2 v);

  /// @brief Method float2, addr 0x641cacc, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 float2(::Unity::Mathematics::uint2 v);

  /// @brief Method float2, addr 0x641ca70, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 float2(bool v);

  /// @brief Method float2, addr 0x641cbbc, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 float2(double_t v);

  /// @brief Method float2, addr 0x641ca68, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 float2(float_t v);

  /// @brief Method float2, addr 0x641caa4, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 float2(int32_t v);

  /// @brief Method float2, addr 0x641cac0, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 float2(uint32_t v);

  /// @brief Method float2, addr 0x641ca60, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 float2(float_t x, float_t y);

  /// @brief Method float2, addr 0x641ca64, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 float2(::Unity::Mathematics::float2 xy);

  /// @brief Method float2x2, addr 0x641ceec, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 float2x2(::Unity::Mathematics::float2 c0, ::Unity::Mathematics::float2 c1);

  /// @brief Method float2x2, addr 0x641cef0, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 float2x2(float_t m00, float_t m01, float_t m10, float_t m11);

  /// @brief Method float2x2, addr 0x641cf30, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 float2x2(::Unity::Mathematics::bool2x2 v);

  /// @brief Method float2x2, addr 0x641cfd0, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 float2x2(::Unity::Mathematics::double2x2 v);

  /// @brief Method float2x2, addr 0x641cf70, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 float2x2(::Unity::Mathematics::int2x2 v);

  /// @brief Method float2x2, addr 0x641cfa0, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 float2x2(::Unity::Mathematics::uint2x2 v);

  /// @brief Method float2x2, addr 0x641cf10, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 float2x2(bool v);

  /// @brief Method float2x2, addr 0x641cfbc, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 float2x2(double_t v);

  /// @brief Method float2x2, addr 0x641cf00, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 float2x2(float_t v);

  /// @brief Method float2x2, addr 0x641cf5c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 float2x2(int32_t v);

  /// @brief Method float2x2, addr 0x641cf8c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 float2x2(uint32_t v);

  /// @brief Method float2x3, addr 0x641d0e8, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 float2x3(::Unity::Mathematics::float2 c0, ::Unity::Mathematics::float2 c1, ::Unity::Mathematics::float2 c2);

  /// @brief Method float2x3, addr 0x641d0f8, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 float2x3(float_t m00, float_t m01, float_t m02, float_t m10, float_t m11, float_t m12);

  /// @brief Method float2x3, addr 0x641d138, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 float2x3(::Unity::Mathematics::bool2x3 v);

  /// @brief Method float2x3, addr 0x641d224, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 float2x3(::Unity::Mathematics::double2x3 v);

  /// @brief Method float2x3, addr 0x641d194, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 float2x3(::Unity::Mathematics::int2x3 v);

  /// @brief Method float2x3, addr 0x641d1dc, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 float2x3(::Unity::Mathematics::uint2x3 v);

  /// @brief Method float2x3, addr 0x641d118, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 float2x3(bool v);

  /// @brief Method float2x3, addr 0x641d210, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 float2x3(double_t v);

  /// @brief Method float2x3, addr 0x641d108, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 float2x3(float_t v);

  /// @brief Method float2x3, addr 0x641d180, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 float2x3(int32_t v);

  /// @brief Method float2x3, addr 0x641d1c8, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 float2x3(uint32_t v);

  /// @brief Method float2x4, addr 0x641d358, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x4 float2x4(::Unity::Mathematics::float2 c0, ::Unity::Mathematics::float2 c1, ::Unity::Mathematics::float2 c2, ::Unity::Mathematics::float2 c3);

  /// @brief Method float2x4, addr 0x641d36c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x4 float2x4(float_t m00, float_t m01, float_t m02, float_t m03, float_t m10, float_t m11, float_t m12, float_t m13);

  /// @brief Method float2x4, addr 0x641d3b0, size 0x5c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x4 float2x4(::Unity::Mathematics::bool2x4 v);

  /// @brief Method float2x4, addr 0x641d4c4, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x4 float2x4(::Unity::Mathematics::double2x4 v);

  /// @brief Method float2x4, addr 0x641d41c, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x4 float2x4(::Unity::Mathematics::int2x4 v);

  /// @brief Method float2x4, addr 0x641d470, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x4 float2x4(::Unity::Mathematics::uint2x4 v);

  /// @brief Method float2x4, addr 0x641d38c, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x4 float2x4(bool v);

  /// @brief Method float2x4, addr 0x641d4b4, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x4 float2x4(double_t v);

  /// @brief Method float2x4, addr 0x641d380, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x4 float2x4(float_t v);

  /// @brief Method float2x4, addr 0x641d40c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x4 float2x4(int32_t v);

  /// @brief Method float2x4, addr 0x641d460, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x4 float2x4(uint32_t v);

  /// @brief Method float3, addr 0x641d668, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 float3(::Unity::Mathematics::bool3 v);

  /// @brief Method float3, addr 0x641d818, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 float3(::Unity::Mathematics::double3 v);

  /// @brief Method float3, addr 0x641d6d4, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 float3(::Unity::Mathematics::half v);

  /// @brief Method float3, addr 0x641d738, size 0xd0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 float3(::Unity::Mathematics::half3 v);

  /// @brief Method float3, addr 0x641d69c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 float3(::Unity::Mathematics::int3 v);

  /// @brief Method float3, addr 0x641d6c0, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 float3(::Unity::Mathematics::uint3 v);

  /// @brief Method float3, addr 0x641d64c, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 float3(bool v);

  /// @brief Method float3, addr 0x641d808, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 float3(double_t v);

  /// @brief Method float3, addr 0x641d640, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 float3(float_t v);

  /// @brief Method float3, addr 0x641d68c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 float3(int32_t v);

  /// @brief Method float3, addr 0x641d6b0, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 float3(uint32_t v);

  /// @brief Method float3, addr 0x641d630, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 float3(float_t x, float_t y, float_t z);

  /// @brief Method float3, addr 0x641d634, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 float3(float_t x, ::Unity::Mathematics::float2 yz);

  /// @brief Method float3, addr 0x641d638, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 float3(::Unity::Mathematics::float2 xy, float_t z);

  /// @brief Method float3, addr 0x641d63c, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 float3(::Unity::Mathematics::float3 xyz);

  /// @brief Method float3x2, addr 0x641dbe0, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x2 float3x2(::Unity::Mathematics::float3 c0, ::Unity::Mathematics::float3 c1);

  /// @brief Method float3x2, addr 0x641dbf0, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x2 float3x2(float_t m00, float_t m01, float_t m10, float_t m11, float_t m20, float_t m21);

  /// @brief Method float3x2, addr 0x641dc30, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x2 float3x2(::Unity::Mathematics::bool3x2 v);

  /// @brief Method float3x2, addr 0x641dd1c, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x2 float3x2(::Unity::Mathematics::double3x2 v);

  /// @brief Method float3x2, addr 0x641dc8c, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x2 float3x2(::Unity::Mathematics::int3x2 v);

  /// @brief Method float3x2, addr 0x641dcd4, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x2 float3x2(::Unity::Mathematics::uint3x2 v);

  /// @brief Method float3x2, addr 0x641dc10, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x2 float3x2(bool v);

  /// @brief Method float3x2, addr 0x641dd08, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x2 float3x2(double_t v);

  /// @brief Method float3x2, addr 0x641dc00, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x2 float3x2(float_t v);

  /// @brief Method float3x2, addr 0x641dc78, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x2 float3x2(int32_t v);

  /// @brief Method float3x2, addr 0x641dcc0, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x2 float3x2(uint32_t v);

  /// @brief Method float3x3, addr 0x641de4c, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 float3x3(::Unity::Mathematics::float3 c0, ::Unity::Mathematics::float3 c1, ::Unity::Mathematics::float3 c2);

  /// @brief Method float3x3, addr 0x6438fac, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 float3x3(::Unity::Mathematics::float4x4 f4x4);

  /// @brief Method float3x3, addr 0x641de70, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 float3x3(float_t m00, float_t m01, float_t m02, float_t m10, float_t m11, float_t m12, float_t m20, float_t m21, float_t m22);

  /// @brief Method float3x3, addr 0x6438fdc, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 float3x3(::Unity::Mathematics::quaternion rotation);

  /// @brief Method float3x3, addr 0x641dec4, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 float3x3(::Unity::Mathematics::bool3x3 v);

  /// @brief Method float3x3, addr 0x641e018, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 float3x3(::Unity::Mathematics::double3x3 v);

  /// @brief Method float3x3, addr 0x641df50, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 float3x3(::Unity::Mathematics::int3x3 v);

  /// @brief Method float3x3, addr 0x641dfb4, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 float3x3(::Unity::Mathematics::uint3x3 v);

  /// @brief Method float3x3, addr 0x641de9c, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 float3x3(bool v);

  /// @brief Method float3x3, addr 0x641e004, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 float3x3(double_t v);

  /// @brief Method float3x3, addr 0x641de8c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 float3x3(float_t v);

  /// @brief Method float3x3, addr 0x641df3c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 float3x3(int32_t v);

  /// @brief Method float3x3, addr 0x641dfa0, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 float3x3(uint32_t v);

  /// @brief Method float3x4, addr 0x641e2cc, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 float3x4(::Unity::Mathematics::float3 c0, ::Unity::Mathematics::float3 c1, ::Unity::Mathematics::float3 c2, ::Unity::Mathematics::float3 c3);

  /// @brief Method float3x4, addr 0x641e300, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 float3x4(float_t m00, float_t m01, float_t m02, float_t m03, float_t m10, float_t m11, float_t m12, float_t m13, float_t m20, float_t m21, float_t m22,
                                                        float_t m23);

  /// @brief Method float3x4, addr 0x6415f7c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 float3x4(::Unity::Mathematics::AffineTransform transform);

  /// @brief Method float3x4, addr 0x641e370, size 0x9c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 float3x4(::Unity::Mathematics::bool3x4 v);

  /// @brief Method float3x4, addr 0x641e510, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 float3x4(::Unity::Mathematics::double3x4 v);

  /// @brief Method float3x4, addr 0x641e420, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 float3x4(::Unity::Mathematics::int3x4 v);

  /// @brief Method float3x4, addr 0x641e498, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 float3x4(::Unity::Mathematics::uint3x4 v);

  /// @brief Method float3x4, addr 0x641e344, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 float3x4(bool v);

  /// @brief Method float3x4, addr 0x641e4fc, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 float3x4(double_t v);

  /// @brief Method float3x4, addr 0x641e334, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 float3x4(float_t v);

  /// @brief Method float3x4, addr 0x641e40c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 float3x4(int32_t v);

  /// @brief Method float3x4, addr 0x641e484, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 float3x4(uint32_t v);

  /// @brief Method float4, addr 0x641e7d4, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 float4(::Unity::Mathematics::bool4 v);

  /// @brief Method float4, addr 0x641e99c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 float4(::Unity::Mathematics::double4 v);

  /// @brief Method float4, addr 0x641e860, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 float4(::Unity::Mathematics::half v);

  /// @brief Method float4, addr 0x641e8c8, size 0xc0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 float4(::Unity::Mathematics::half4 v);

  /// @brief Method float4, addr 0x641e814, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 float4(::Unity::Mathematics::int4 v);

  /// @brief Method float4, addr 0x641e844, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 float4(::Unity::Mathematics::uint4 v);

  /// @brief Method float4, addr 0x641e7b4, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 float4(bool v);

  /// @brief Method float4, addr 0x641e988, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 float4(double_t v);

  /// @brief Method float4, addr 0x641e7a4, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 float4(float_t v);

  /// @brief Method float4, addr 0x641e800, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 float4(int32_t v);

  /// @brief Method float4, addr 0x641e830, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 float4(uint32_t v);

  /// @brief Method float4, addr 0x641e784, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 float4(float_t x, float_t y, float_t z, float_t w);

  /// @brief Method float4, addr 0x641e788, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 float4(float_t x, float_t y, ::Unity::Mathematics::float2 zw);

  /// @brief Method float4, addr 0x641e78c, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 float4(float_t x, ::Unity::Mathematics::float2 yz, float_t w);

  /// @brief Method float4, addr 0x641e790, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 float4(float_t x, ::Unity::Mathematics::float3 yzw);

  /// @brief Method float4, addr 0x641e794, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 float4(::Unity::Mathematics::float2 xy, float_t z, float_t w);

  /// @brief Method float4, addr 0x641e798, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 float4(::Unity::Mathematics::float2 xy, ::Unity::Mathematics::float2 zw);

  /// @brief Method float4, addr 0x641e79c, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 float4(::Unity::Mathematics::float3 xyz, float_t w);

  /// @brief Method float4, addr 0x641e7a0, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 float4(::Unity::Mathematics::float4 xyzw);

  /// @brief Method float4x2, addr 0x641ee14, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x2 float4x2(::Unity::Mathematics::float4 c0, ::Unity::Mathematics::float4 c1);

  /// @brief Method float4x2, addr 0x641ee28, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x2 float4x2(float_t m00, float_t m01, float_t m10, float_t m11, float_t m20, float_t m21, float_t m30, float_t m31);

  /// @brief Method float4x2, addr 0x641ee6c, size 0x5c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x2 float4x2(::Unity::Mathematics::bool4x2 v);

  /// @brief Method float4x2, addr 0x641ef80, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x2 float4x2(::Unity::Mathematics::double4x2 v);

  /// @brief Method float4x2, addr 0x641eed8, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x2 float4x2(::Unity::Mathematics::int4x2 v);

  /// @brief Method float4x2, addr 0x641ef2c, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x2 float4x2(::Unity::Mathematics::uint4x2 v);

  /// @brief Method float4x2, addr 0x641ee48, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x2 float4x2(bool v);

  /// @brief Method float4x2, addr 0x641ef70, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x2 float4x2(double_t v);

  /// @brief Method float4x2, addr 0x641ee3c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x2 float4x2(float_t v);

  /// @brief Method float4x2, addr 0x641eec8, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x2 float4x2(int32_t v);

  /// @brief Method float4x2, addr 0x641ef1c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x2 float4x2(uint32_t v);

  /// @brief Method float4x3, addr 0x641f10c, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x3 float4x3(::Unity::Mathematics::float4 c0, ::Unity::Mathematics::float4 c1, ::Unity::Mathematics::float4 c2);

  /// @brief Method float4x3, addr 0x641f128, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x3 float4x3(float_t m00, float_t m01, float_t m02, float_t m10, float_t m11, float_t m12, float_t m20, float_t m21, float_t m22, float_t m30, float_t m31,
                                                        float_t m32);

  /// @brief Method float4x3, addr 0x641f198, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x3 float4x3(::Unity::Mathematics::bool4x3 v);

  /// @brief Method float4x3, addr 0x641f320, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x3 float4x3(::Unity::Mathematics::double4x3 v);

  /// @brief Method float4x3, addr 0x641f230, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x3 float4x3(::Unity::Mathematics::int4x3 v);

  /// @brief Method float4x3, addr 0x641f2a8, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x3 float4x3(::Unity::Mathematics::uint4x3 v);

  /// @brief Method float4x3, addr 0x641f16c, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x3 float4x3(bool v);

  /// @brief Method float4x3, addr 0x641f30c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x3 float4x3(double_t v);

  /// @brief Method float4x3, addr 0x641f15c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x3 float4x3(float_t v);

  /// @brief Method float4x3, addr 0x641f21c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x3 float4x3(int32_t v);

  /// @brief Method float4x3, addr 0x641f294, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x3 float4x3(uint32_t v);

  /// @brief Method float4x4, addr 0x641f550, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 float4x4(::Unity::Mathematics::float4 c0, ::Unity::Mathematics::float4 c1, ::Unity::Mathematics::float4 c2, ::Unity::Mathematics::float4 c3);

  /// @brief Method float4x4, addr 0x641f574, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 float4x4(float_t m00, float_t m01, float_t m02, float_t m03, float_t m10, float_t m11, float_t m12, float_t m13, float_t m20, float_t m21, float_t m22,
                                                        float_t m23, float_t m30, float_t m31, float_t m32, float_t m33);

  /// @brief Method float4x4, addr 0x6438ff4, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 float4x4(::Unity::Mathematics::float3x3 rotation, ::Unity::Mathematics::float3 translation);

  /// @brief Method float4x4, addr 0x6439044, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 float4x4(::Unity::Mathematics::quaternion rotation, ::Unity::Mathematics::float3 translation);

  /// @brief Method float4x4, addr 0x6415f24, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 float4x4(::Unity::Mathematics::AffineTransform transform);

  /// @brief Method float4x4, addr 0x643905c, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 float4x4(::Unity::Mathematics::RigidTransform transform);

  /// @brief Method float4x4, addr 0x641f60c, size 0xac, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 float4x4(::Unity::Mathematics::bool4x4 v);

  /// @brief Method float4x4, addr 0x641f7fc, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 float4x4(::Unity::Mathematics::double4x4 v);

  /// @brief Method float4x4, addr 0x641f6cc, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 float4x4(::Unity::Mathematics::int4x4 v);

  /// @brief Method float4x4, addr 0x641f764, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 float4x4(::Unity::Mathematics::uint4x4 v);

  /// @brief Method float4x4, addr 0x641f5d8, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 float4x4(bool v);

  /// @brief Method float4x4, addr 0x641f7e8, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 float4x4(double_t v);

  /// @brief Method float4x4, addr 0x641f5c8, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 float4x4(float_t v);

  /// @brief Method float4x4, addr 0x641f6b8, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 float4x4(int32_t v);

  /// @brief Method float4x4, addr 0x641f750, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 float4x4(uint32_t v);

  /// @brief Method floor, addr 0x642aaac, size 0x9c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 floor(::Unity::Mathematics::double2 x);

  /// @brief Method floor, addr 0x642ab48, size 0xe0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 floor(::Unity::Mathematics::double3 x);

  /// @brief Method floor, addr 0x642ac28, size 0x11c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 floor(::Unity::Mathematics::double4 x);

  /// @brief Method floor, addr 0x642a7b4, size 0x9c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 floor(::Unity::Mathematics::float2 x);

  /// @brief Method floor, addr 0x642a850, size 0xe0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 floor(::Unity::Mathematics::float3 x);

  /// @brief Method floor, addr 0x642a930, size 0x11c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 floor(::Unity::Mathematics::float4 x);

  /// @brief Method floor, addr 0x642aa4c, size 0x60, virtual false, abstract: false, final false
  static inline double_t floor(double_t x);

  /// @brief Method floor, addr 0x642a754, size 0x60, virtual false, abstract: false, final false
  static inline float_t floor(float_t x);

  /// @brief Method floorlog2, addr 0x6436388, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 floorlog2(::Unity::Mathematics::int2 x);

  /// @brief Method floorlog2, addr 0x64365d0, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 floorlog2(::Unity::Mathematics::uint2 x);

  /// @brief Method floorlog2, addr 0x6436400, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 floorlog2(::Unity::Mathematics::int3 x);

  /// @brief Method floorlog2, addr 0x6436648, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 floorlog2(::Unity::Mathematics::uint3 x);

  /// @brief Method floorlog2, addr 0x64364b0, size 0xe8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 floorlog2(::Unity::Mathematics::int4 x);

  /// @brief Method floorlog2, addr 0x64366f8, size 0xe8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 floorlog2(::Unity::Mathematics::uint4 x);

  /// @brief Method floorlog2, addr 0x6436350, size 0x38, virtual false, abstract: false, final false
  static inline int32_t floorlog2(int32_t x);

  /// @brief Method floorlog2, addr 0x6436598, size 0x38, virtual false, abstract: false, final false
  static inline int32_t floorlog2(uint32_t x);

  /// @brief Method fmod, addr 0x643040c, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 fmod(::Unity::Mathematics::double2 x, ::Unity::Mathematics::double2 y);

  /// @brief Method fmod, addr 0x6430450, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 fmod(::Unity::Mathematics::double3 x, ::Unity::Mathematics::double3 y);

  /// @brief Method fmod, addr 0x64304b8, size 0x8c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 fmod(::Unity::Mathematics::double4 x, ::Unity::Mathematics::double4 y);

  /// @brief Method fmod, addr 0x64302d0, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 fmod(::Unity::Mathematics::float2 x, ::Unity::Mathematics::float2 y);

  /// @brief Method fmod, addr 0x6430314, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 fmod(::Unity::Mathematics::float3 x, ::Unity::Mathematics::float3 y);

  /// @brief Method fmod, addr 0x643037c, size 0x8c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 fmod(::Unity::Mathematics::float4 x, ::Unity::Mathematics::float4 y);

  /// @brief Method fmod, addr 0x6430408, size 0x4, virtual false, abstract: false, final false
  static inline double_t fmod(double_t x, double_t y);

  /// @brief Method fmod, addr 0x64302cc, size 0x4, virtual false, abstract: false, final false
  static inline float_t fmod(float_t x, float_t y);

  /// @brief Method fold_to_uint, addr 0x6438f28, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 fold_to_uint(::Unity::Mathematics::double2 x);

  /// @brief Method fold_to_uint, addr 0x6438f48, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 fold_to_uint(::Unity::Mathematics::double3 x);

  /// @brief Method fold_to_uint, addr 0x6438f74, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 fold_to_uint(::Unity::Mathematics::double4 x);

  /// @brief Method fold_to_uint, addr 0x6438f18, size 0x10, virtual false, abstract: false, final false
  static inline uint32_t fold_to_uint(double_t x);

  /// @brief Method forward, addr 0x6437b70, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 forward();

  /// @brief Method forward, addr 0x6440bb8, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 forward(::Unity::Mathematics::quaternion q);

  /// @brief Method frac, addr 0x642cb4c, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 frac(::Unity::Mathematics::double2 x);

  /// @brief Method frac, addr 0x642cbf0, size 0xec, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 frac(::Unity::Mathematics::double3 x);

  /// @brief Method frac, addr 0x642ccdc, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 frac(::Unity::Mathematics::double4 x);

  /// @brief Method frac, addr 0x642c914, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 frac(::Unity::Mathematics::float2 x);

  /// @brief Method frac, addr 0x642c9b8, size 0xec, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 frac(::Unity::Mathematics::float3 x);

  /// @brief Method frac, addr 0x642caa4, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 frac(::Unity::Mathematics::float4 x);

  /// @brief Method frac, addr 0x642cae8, size 0x64, virtual false, abstract: false, final false
  static inline double_t frac(double_t x);

  /// @brief Method frac, addr 0x642c8b0, size 0x64, virtual false, abstract: false, final false
  static inline float_t frac(float_t x);

  /// @brief Method half, addr 0x642008c, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half half(double_t v);

  /// @brief Method half, addr 0x6420030, size 0x5c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half half(float_t v);

  /// @brief Method half, addr 0x642002c, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half half(::Unity::Mathematics::half x);

  /// @brief Method half2, addr 0x642027c, size 0x94, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half2 half2(::Unity::Mathematics::double2 v);

  /// @brief Method half2, addr 0x6420180, size 0x94, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half2 half2(::Unity::Mathematics::float2 v);

  /// @brief Method half2, addr 0x6420114, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half2 half2(::Unity::Mathematics::half v);

  /// @brief Method half2, addr 0x6420214, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half2 half2(double_t v);

  /// @brief Method half2, addr 0x642011c, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half2 half2(float_t v);

  /// @brief Method half2, addr 0x6420108, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half2 half2(::Unity::Mathematics::half x, ::Unity::Mathematics::half y);

  /// @brief Method half2, addr 0x6420110, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half2 half2(::Unity::Mathematics::half2 xy);

  /// @brief Method half3, addr 0x6420580, size 0xec, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half3 half3(::Unity::Mathematics::double3 v);

  /// @brief Method half3, addr 0x6420430, size 0xe0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half3 half3(::Unity::Mathematics::float3 v);

  /// @brief Method half3, addr 0x64203b0, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half3 half3(::Unity::Mathematics::half v);

  /// @brief Method half3, addr 0x6420510, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half3 half3(double_t v);

  /// @brief Method half3, addr 0x64203c4, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half3 half3(float_t v);

  /// @brief Method half3, addr 0x6420388, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half3 half3(::Unity::Mathematics::half x, ::Unity::Mathematics::half y, ::Unity::Mathematics::half z);

  /// @brief Method half3, addr 0x642039c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half3 half3(::Unity::Mathematics::half x, ::Unity::Mathematics::half2 yz);

  /// @brief Method half3, addr 0x64203a4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half3 half3(::Unity::Mathematics::half2 xy, ::Unity::Mathematics::half z);

  /// @brief Method half3, addr 0x64203ac, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half3 half3(::Unity::Mathematics::half3 xyz);

  /// @brief Method half4, addr 0x642098c, size 0x13c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half4 half4(::Unity::Mathematics::double4 v);

  /// @brief Method half4, addr 0x64207f0, size 0x130, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half4 half4(::Unity::Mathematics::float4 v);

  /// @brief Method half4, addr 0x6420778, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half4 half4(::Unity::Mathematics::half v);

  /// @brief Method half4, addr 0x6420920, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half4 half4(double_t v);

  /// @brief Method half4, addr 0x6420788, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half4 half4(float_t v);

  /// @brief Method half4, addr 0x6420708, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half4 half4(::Unity::Mathematics::half x, ::Unity::Mathematics::half y, ::Unity::Mathematics::half z, ::Unity::Mathematics::half w);

  /// @brief Method half4, addr 0x6420724, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half4 half4(::Unity::Mathematics::half x, ::Unity::Mathematics::half y, ::Unity::Mathematics::half2 zw);

  /// @brief Method half4, addr 0x6420734, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half4 half4(::Unity::Mathematics::half x, ::Unity::Mathematics::half2 yz, ::Unity::Mathematics::half w);

  /// @brief Method half4, addr 0x6420748, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half4 half4(::Unity::Mathematics::half x, ::Unity::Mathematics::half3 yzw);

  /// @brief Method half4, addr 0x6420750, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half4 half4(::Unity::Mathematics::half2 xy, ::Unity::Mathematics::half z, ::Unity::Mathematics::half w);

  /// @brief Method half4, addr 0x6420764, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half4 half4(::Unity::Mathematics::half2 xy, ::Unity::Mathematics::half2 zw);

  /// @brief Method half4, addr 0x642076c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half4 half4(::Unity::Mathematics::half3 xyz, ::Unity::Mathematics::half w);

  /// @brief Method half4, addr 0x6420774, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half4 half4(::Unity::Mathematics::half4 xyzw);

  /// @brief Method hash, addr 0x641663c, size 0xc8, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::AffineTransform a);

  /// @brief Method hash, addr 0x6437b4c, size 0x4, virtual false, abstract: false, final false
  static inline uint32_t hash(void* pBuffer, int32_t numBytes, uint32_t seed);

  /// @brief Method hash, addr 0x6440af4, size 0x60, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::quaternion q);

  /// @brief Method hash, addr 0x64410f8, size 0x9c, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::RigidTransform t);

  /// @brief Method hash, addr 0x641684c, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::bool2 v);

  /// @brief Method hash, addr 0x6416bb8, size 0x74, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::bool2x2 v);

  /// @brief Method hash, addr 0x6416d40, size 0xb0, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::bool2x3 v);

  /// @brief Method hash, addr 0x6416f44, size 0xbc, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::bool2x4 v);

  /// @brief Method hash, addr 0x6417144, size 0x54, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::bool3 v);

  /// @brief Method hash, addr 0x6417550, size 0xac, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::bool3x2 v);

  /// @brief Method hash, addr 0x64177d0, size 0x114, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::bool3x3 v);

  /// @brief Method hash, addr 0x6417bb8, size 0x16c, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::bool3x4 v);

  /// @brief Method hash, addr 0x6417f70, size 0x48, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::bool4 v);

  /// @brief Method hash, addr 0x64183f4, size 0xc0, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::bool4x2 v);

  /// @brief Method hash, addr 0x64186ac, size 0x158, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::bool4x3 v);

  /// @brief Method hash, addr 0x6418aac, size 0x160, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::bool4x4 v);

  /// @brief Method hash, addr 0x6418ed0, size 0x44, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::double2 v);

  /// @brief Method hash, addr 0x641934c, size 0x78, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::double2x2 v);

  /// @brief Method hash, addr 0x64195bc, size 0xa4, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::double2x3 v);

  /// @brief Method hash, addr 0x64198dc, size 0xd0, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::double2x4 v);

  /// @brief Method hash, addr 0x6419c98, size 0x60, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::double3 v);

  /// @brief Method hash, addr 0x641a1f8, size 0xa0, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::double3x2 v);

  /// @brief Method hash, addr 0x641a6ac, size 0xe4, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::double3x3 v);

  /// @brief Method hash, addr 0x641abd4, size 0x11c, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::double3x4 v);

  /// @brief Method hash, addr 0x641b0c0, size 0x80, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::double4 v);

  /// @brief Method hash, addr 0x641b744, size 0xd8, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::double4x2 v);

  /// @brief Method hash, addr 0x641bbb0, size 0x138, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::double4x3 v);

  /// @brief Method hash, addr 0x641c754, size 0x188, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::double4x4 v);

  /// @brief Method hash, addr 0x641cbd4, size 0x34, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::float2 v);

  /// @brief Method hash, addr 0x641d030, size 0x58, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::float2x2 v);

  /// @brief Method hash, addr 0x641d268, size 0x74, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::float2x3 v);

  /// @brief Method hash, addr 0x641d508, size 0x90, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::float2x4 v);

  /// @brief Method hash, addr 0x641d828, size 0x48, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::float3 v);

  /// @brief Method hash, addr 0x641dd60, size 0x70, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::float3x2 v);

  /// @brief Method hash, addr 0x641e198, size 0x84, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::float3x3 v);

  /// @brief Method hash, addr 0x641e5f8, size 0xb4, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::float3x4 v);

  /// @brief Method hash, addr 0x641e9b0, size 0x60, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::float4 v);

  /// @brief Method hash, addr 0x641efc4, size 0x9c, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::float4x2 v);

  /// @brief Method hash, addr 0x641f384, size 0xe0, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::float4x3 v);

  /// @brief Method hash, addr 0x641fddc, size 0x124, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::float4x4 v);

  /// @brief Method hash, addr 0x64200ec, size 0x1c, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::half v);

  /// @brief Method hash, addr 0x6420310, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::half2 v);

  /// @brief Method hash, addr 0x642066c, size 0x4c, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::half3 v);

  /// @brief Method hash, addr 0x6420ac8, size 0x68, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::half4 v);

  /// @brief Method hash, addr 0x6420c98, size 0x30, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::int2 v);

  /// @brief Method hash, addr 0x64210c4, size 0x50, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::int2x2 v);

  /// @brief Method hash, addr 0x64213cc, size 0x74, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::int2x3 v);

  /// @brief Method hash, addr 0x6421780, size 0x90, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::int2x4 v);

  /// @brief Method hash, addr 0x64219f0, size 0x40, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::int3 v);

  /// @brief Method hash, addr 0x6421fac, size 0x7c, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::int3x2 v);

  /// @brief Method hash, addr 0x6422450, size 0xac, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::int3x3 v);

  /// @brief Method hash, addr 0x64229fc, size 0xdc, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::int3x4 v);

  /// @brief Method hash, addr 0x6422d78, size 0x58, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::int4 v);

  /// @brief Method hash, addr 0x6423398, size 0x9c, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::int4x2 v);

  /// @brief Method hash, addr 0x6423864, size 0xd8, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::int4x3 v);

  /// @brief Method hash, addr 0x6423f68, size 0x114, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::int4x4 v);

  /// @brief Method hash, addr 0x6441328, size 0x30, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::uint2 v);

  /// @brief Method hash, addr 0x644170c, size 0x50, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::uint2x2 v);

  /// @brief Method hash, addr 0x64419f0, size 0x74, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::uint2x3 v);

  /// @brief Method hash, addr 0x6441d94, size 0x90, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::uint2x4 v);

  /// @brief Method hash, addr 0x6441fe4, size 0x40, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::uint3 v);

  /// @brief Method hash, addr 0x6442590, size 0x7c, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::uint3x2 v);

  /// @brief Method hash, addr 0x64429e8, size 0xac, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::uint3x3 v);

  /// @brief Method hash, addr 0x6442fa4, size 0xdc, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::uint3x4 v);

  /// @brief Method hash, addr 0x64432f0, size 0x58, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::uint4 v);

  /// @brief Method hash, addr 0x6443904, size 0x9c, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::uint4x2 v);

  /// @brief Method hash, addr 0x6443dd4, size 0xd8, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::uint4x3 v);

  /// @brief Method hash, addr 0x6444428, size 0x114, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::uint4x4 v);

  /// @brief Method hash_with_unaligned_loads, addr 0x643781c, size 0x17c, virtual false, abstract: false, final false
  static inline uint32_t hash_with_unaligned_loads(void* pBuffer, int32_t numBytes, uint32_t seed);

  /// @brief Method hash_without_unaligned_loads, addr 0x6437998, size 0x1b4, virtual false, abstract: false, final false
  static inline uint32_t hash_without_unaligned_loads(void* pBuffer, int32_t numBytes, uint32_t seed);

  /// @brief Method hashwide, addr 0x6416884, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::bool2 v);

  /// @brief Method hashwide, addr 0x6416c2c, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::bool2x2 v);

  /// @brief Method hashwide, addr 0x6416df0, size 0x8c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::bool2x3 v);

  /// @brief Method hashwide, addr 0x6417000, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::bool2x4 v);

  /// @brief Method hashwide, addr 0x6418f14, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::double2 v);

  /// @brief Method hashwide, addr 0x64193c4, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::double2x2 v);

  /// @brief Method hashwide, addr 0x6419660, size 0xa8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::double2x3 v);

  /// @brief Method hashwide, addr 0x64199ac, size 0xd0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::double2x4 v);

  /// @brief Method hashwide, addr 0x641cc08, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::float2 v);

  /// @brief Method hashwide, addr 0x641d088, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::float2x2 v);

  /// @brief Method hashwide, addr 0x641d2dc, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::float2x3 v);

  /// @brief Method hashwide, addr 0x641d598, size 0x98, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::float2x4 v);

  /// @brief Method hashwide, addr 0x6420348, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::half2 v);

  /// @brief Method hashwide, addr 0x6420cc8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::int2 v);

  /// @brief Method hashwide, addr 0x6421114, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::int2x2 v);

  /// @brief Method hashwide, addr 0x6421440, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::int2x3 v);

  /// @brief Method hashwide, addr 0x6421810, size 0x98, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::int2x4 v);

  /// @brief Method hashwide, addr 0x6441358, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::uint2 v);

  /// @brief Method hashwide, addr 0x644175c, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::uint2x2 v);

  /// @brief Method hashwide, addr 0x6441a64, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::uint2x3 v);

  /// @brief Method hashwide, addr 0x6441e24, size 0x98, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::uint2x4 v);

  /// @brief Method hashwide, addr 0x6417198, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::bool3 v);

  /// @brief Method hashwide, addr 0x64175fc, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::bool3x2 v);

  /// @brief Method hashwide, addr 0x64178e4, size 0xfc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::bool3x3 v);

  /// @brief Method hashwide, addr 0x6417d24, size 0x144, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::bool3x4 v);

  /// @brief Method hashwide, addr 0x6419cf8, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::double3 v);

  /// @brief Method hashwide, addr 0x641a298, size 0xa0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::double3x2 v);

  /// @brief Method hashwide, addr 0x641a790, size 0xe4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::double3x3 v);

  /// @brief Method hashwide, addr 0x641acf0, size 0x128, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::double3x4 v);

  /// @brief Method hashwide, addr 0x641d870, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::float3 v);

  /// @brief Method hashwide, addr 0x641ddd0, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::float3x2 v);

  /// @brief Method hashwide, addr 0x641e21c, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::float3x3 v);

  /// @brief Method hashwide, addr 0x641e6ac, size 0xd8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::float3x4 v);

  /// @brief Method hashwide, addr 0x64206b8, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::half3 v);

  /// @brief Method hashwide, addr 0x6421a30, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::int3 v);

  /// @brief Method hashwide, addr 0x6422028, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::int3x2 v);

  /// @brief Method hashwide, addr 0x64224fc, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::int3x3 v);

  /// @brief Method hashwide, addr 0x6422ad8, size 0xe4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::int3x4 v);

  /// @brief Method hashwide, addr 0x6442024, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::uint3 v);

  /// @brief Method hashwide, addr 0x644260c, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::uint3x2 v);

  /// @brief Method hashwide, addr 0x6442a94, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::uint3x3 v);

  /// @brief Method hashwide, addr 0x6443080, size 0xe4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::uint3x4 v);

  /// @brief Method hashwide, addr 0x6416704, size 0x110, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::AffineTransform a);

  /// @brief Method hashwide, addr 0x6440b54, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::quaternion q);

  /// @brief Method hashwide, addr 0x6441194, size 0xc0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::RigidTransform t);

  /// @brief Method hashwide, addr 0x6417fb8, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::bool4 v);

  /// @brief Method hashwide, addr 0x64184b4, size 0xd8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::bool4x2 v);

  /// @brief Method hashwide, addr 0x6418804, size 0xf8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::bool4x3 v);

  /// @brief Method hashwide, addr 0x6418c0c, size 0x148, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::bool4x4 v);

  /// @brief Method hashwide, addr 0x641b140, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::double4 v);

  /// @brief Method hashwide, addr 0x641b81c, size 0xd8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::double4x2 v);

  /// @brief Method hashwide, addr 0x641bce8, size 0x130, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::double4x3 v);

  /// @brief Method hashwide, addr 0x641c8dc, size 0x184, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::double4x4 v);

  /// @brief Method hashwide, addr 0x641ea10, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::float4 v);

  /// @brief Method hashwide, addr 0x641f060, size 0xac, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::float4x2 v);

  /// @brief Method hashwide, addr 0x641f464, size 0xec, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::float4x3 v);

  /// @brief Method hashwide, addr 0x641ff00, size 0x12c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::float4x4 v);

  /// @brief Method hashwide, addr 0x6420b30, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::half4 v);

  /// @brief Method hashwide, addr 0x6422dd0, size 0x5c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::int4 v);

  /// @brief Method hashwide, addr 0x6423434, size 0x9c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::int4x2 v);

  /// @brief Method hashwide, addr 0x642393c, size 0xd8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::int4x3 v);

  /// @brief Method hashwide, addr 0x642407c, size 0x114, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::int4x4 v);

  /// @brief Method hashwide, addr 0x6443348, size 0x5c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::uint4 v);

  /// @brief Method hashwide, addr 0x64439a0, size 0x9c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::uint4x2 v);

  /// @brief Method hashwide, addr 0x6443eac, size 0xd8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::uint4x3 v);

  /// @brief Method hashwide, addr 0x644453c, size 0x4644, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::uint4x4 v);

  /// @brief Method int2, addr 0x6420bd0, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 int2(::Unity::Mathematics::bool2 v);

  /// @brief Method int2, addr 0x6420c64, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 int2(::Unity::Mathematics::double2 v);

  /// @brief Method int2, addr 0x6420c10, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 int2(::Unity::Mathematics::float2 v);

  /// @brief Method int2, addr 0x6420bec, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 int2(::Unity::Mathematics::uint2 v);

  /// @brief Method int2, addr 0x6420bb8, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 int2(bool v);

  /// @brief Method int2, addr 0x6420c44, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 int2(double_t v);

  /// @brief Method int2, addr 0x6420bf0, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 int2(float_t v);

  /// @brief Method int2, addr 0x6420bac, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 int2(int32_t v);

  /// @brief Method int2, addr 0x6420be0, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 int2(uint32_t v);

  /// @brief Method int2, addr 0x6420b9c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 int2(int32_t x, int32_t y);

  /// @brief Method int2, addr 0x6420ba8, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 int2(::Unity::Mathematics::int2 xy);

  /// @brief Method int2x2, addr 0x6420f34, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x2 int2x2(::Unity::Mathematics::int2 c0, ::Unity::Mathematics::int2 c1);

  /// @brief Method int2x2, addr 0x6420f38, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x2 int2x2(int32_t m00, int32_t m01, int32_t m10, int32_t m11);

  /// @brief Method int2x2, addr 0x6420f70, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x2 int2x2(::Unity::Mathematics::bool2x2 v);

  /// @brief Method int2x2, addr 0x6421044, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x2 int2x2(::Unity::Mathematics::double2x2 v);

  /// @brief Method int2x2, addr 0x6420fc8, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x2 int2x2(::Unity::Mathematics::float2x2 v);

  /// @brief Method int2x2, addr 0x6420fa0, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x2 int2x2(::Unity::Mathematics::uint2x2 v);

  /// @brief Method int2x2, addr 0x6420f5c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x2 int2x2(bool v);

  /// @brief Method int2x2, addr 0x6421020, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x2 int2x2(double_t v);

  /// @brief Method int2x2, addr 0x6420fa4, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x2 int2x2(float_t v);

  /// @brief Method int2x2, addr 0x6420f4c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x2 int2x2(int32_t v);

  /// @brief Method int2x2, addr 0x6420f90, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x2 int2x2(uint32_t v);

  /// @brief Method int2x3, addr 0x642116c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x3 int2x3(::Unity::Mathematics::int2 c0, ::Unity::Mathematics::int2 c1, ::Unity::Mathematics::int2 c2);

  /// @brief Method int2x3, addr 0x6421178, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x3 int2x3(int32_t m00, int32_t m01, int32_t m02, int32_t m10, int32_t m11, int32_t m12);

  /// @brief Method int2x3, addr 0x64211c8, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x3 int2x3(::Unity::Mathematics::bool2x3 v);

  /// @brief Method int2x3, addr 0x6421318, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x3 int2x3(::Unity::Mathematics::double2x3 v);

  /// @brief Method int2x3, addr 0x6421264, size 0x8c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x3 int2x3(::Unity::Mathematics::float2x3 v);

  /// @brief Method int2x3, addr 0x6421228, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x3 int2x3(::Unity::Mathematics::uint2x3 v);

  /// @brief Method int2x3, addr 0x64211b0, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x3 int2x3(bool v);

  /// @brief Method int2x3, addr 0x64212f0, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x3 int2x3(double_t v);

  /// @brief Method int2x3, addr 0x642123c, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x3 int2x3(float_t v);

  /// @brief Method int2x3, addr 0x642119c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x3 int2x3(int32_t v);

  /// @brief Method int2x3, addr 0x6421214, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x3 int2x3(uint32_t v);

  /// @brief Method int2x4, addr 0x64214bc, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x4 int2x4(::Unity::Mathematics::int2 c0, ::Unity::Mathematics::int2 c1, ::Unity::Mathematics::int2 c2, ::Unity::Mathematics::int2 c3);

  /// @brief Method int2x4, addr 0x64214c8, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x4 int2x4(int32_t m00, int32_t m01, int32_t m02, int32_t m03, int32_t m10, int32_t m11, int32_t m12, int32_t m13);

  /// @brief Method int2x4, addr 0x6421520, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x4 int2x4(::Unity::Mathematics::bool2x4 v);

  /// @brief Method int2x4, addr 0x64216a4, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x4 int2x4(::Unity::Mathematics::double2x4 v);

  /// @brief Method int2x4, addr 0x64215dc, size 0xa0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x4 int2x4(::Unity::Mathematics::float2x4 v);

  /// @brief Method int2x4, addr 0x64215a8, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x4 int2x4(::Unity::Mathematics::uint2x4 v);

  /// @brief Method int2x4, addr 0x6421508, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x4 int2x4(bool v);

  /// @brief Method int2x4, addr 0x642167c, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x4 int2x4(double_t v);

  /// @brief Method int2x4, addr 0x64215b4, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x4 int2x4(float_t v);

  /// @brief Method int2x4, addr 0x64214f4, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x4 int2x4(int32_t v);

  /// @brief Method int2x4, addr 0x6421594, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x4 int2x4(uint32_t v);

  /// @brief Method int3, addr 0x6421904, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 int3(::Unity::Mathematics::bool3 v);

  /// @brief Method int3, addr 0x64219b0, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 int3(::Unity::Mathematics::double3 v);

  /// @brief Method int3, addr 0x6421950, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 int3(::Unity::Mathematics::float3 v);

  /// @brief Method int3, addr 0x6421928, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 int3(::Unity::Mathematics::uint3 v);

  /// @brief Method int3, addr 0x64218e8, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 int3(bool v);

  /// @brief Method int3, addr 0x6421990, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 int3(double_t v);

  /// @brief Method int3, addr 0x6421930, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 int3(float_t v);

  /// @brief Method int3, addr 0x64218dc, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 int3(int32_t v);

  /// @brief Method int3, addr 0x642191c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 int3(uint32_t v);

  /// @brief Method int3, addr 0x64218a8, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 int3(int32_t x, int32_t y, int32_t z);

  /// @brief Method int3, addr 0x64218b8, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 int3(int32_t x, ::Unity::Mathematics::int2 yz);

  /// @brief Method int3, addr 0x64218cc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 int3(::Unity::Mathematics::int2 xy, int32_t z);

  /// @brief Method int3, addr 0x64218d4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 int3(::Unity::Mathematics::int3 xyz);

  /// @brief Method int3x2, addr 0x6421d44, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 int3x2(::Unity::Mathematics::int3 c0, ::Unity::Mathematics::int3 c1);

  /// @brief Method int3x2, addr 0x6421d58, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 int3x2(int32_t m00, int32_t m01, int32_t m10, int32_t m11, int32_t m20, int32_t m21);

  /// @brief Method int3x2, addr 0x6421da4, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 int3x2(::Unity::Mathematics::bool3x2 v);

  /// @brief Method int3x2, addr 0x6421efc, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 int3x2(::Unity::Mathematics::double3x2 v);

  /// @brief Method int3x2, addr 0x6421e44, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 int3x2(::Unity::Mathematics::float3x2 v);

  /// @brief Method int3x2, addr 0x6421df0, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 int3x2(::Unity::Mathematics::uint3x2 v);

  /// @brief Method int3x2, addr 0x6421d84, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 int3x2(bool v);

  /// @brief Method int3x2, addr 0x6421ecc, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 int3x2(double_t v);

  /// @brief Method int3x2, addr 0x6421e14, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 int3x2(float_t v);

  /// @brief Method int3x2, addr 0x6421d68, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 int3x2(int32_t v);

  /// @brief Method int3x2, addr 0x6421dd4, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 int3x2(uint32_t v);

  /// @brief Method int3x3, addr 0x64220ac, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x3 int3x3(::Unity::Mathematics::int3 c0, ::Unity::Mathematics::int3 c1, ::Unity::Mathematics::int3 c2);

  /// @brief Method int3x3, addr 0x64220c8, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x3 int3x3(int32_t m00, int32_t m01, int32_t m02, int32_t m10, int32_t m11, int32_t m12, int32_t m20, int32_t m21, int32_t m22);

  /// @brief Method int3x3, addr 0x6422130, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x3 int3x3(::Unity::Mathematics::bool3x3 v);

  /// @brief Method int3x3, addr 0x6422310, size 0xc4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x3 int3x3(::Unity::Mathematics::double3x3 v);

  /// @brief Method int3x3, addr 0x6422214, size 0xc4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x3 int3x3(::Unity::Mathematics::float3x3 v);

  /// @brief Method int3x3, addr 0x64221a8, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x3 int3x3(::Unity::Mathematics::uint3x3 v);

  /// @brief Method int3x3, addr 0x6422108, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x3 int3x3(bool v);

  /// @brief Method int3x3, addr 0x64222d8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x3 int3x3(double_t v);

  /// @brief Method int3x3, addr 0x64221dc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x3 int3x3(float_t v);

  /// @brief Method int3x3, addr 0x64220e4, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x3 int3x3(int32_t v);

  /// @brief Method int3x3, addr 0x6422184, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x3 int3x3(uint32_t v);

  /// @brief Method int3x4, addr 0x64225b0, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 int3x4(::Unity::Mathematics::int3 c0, ::Unity::Mathematics::int3 c1, ::Unity::Mathematics::int3 c2, ::Unity::Mathematics::int3 c3);

  /// @brief Method int3x4, addr 0x64225d4, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 int3x4(int32_t m00, int32_t m01, int32_t m02, int32_t m03, int32_t m10, int32_t m11, int32_t m12, int32_t m13, int32_t m20, int32_t m21, int32_t m22,
                                                    int32_t m23);

  /// @brief Method int3x4, addr 0x6422664, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 int3x4(::Unity::Mathematics::bool3x4 v);

  /// @brief Method int3x4, addr 0x64228c4, size 0xfc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 int3x4(::Unity::Mathematics::double3x4 v);

  /// @brief Method int3x4, addr 0x6422788, size 0xfc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 int3x4(::Unity::Mathematics::float3x4 v);

  /// @brief Method int3x4, addr 0x6422704, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 int3x4(::Unity::Mathematics::uint3x4 v);

  /// @brief Method int3x4, addr 0x6422634, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 int3x4(bool v);

  /// @brief Method int3x4, addr 0x6422884, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 int3x4(double_t v);

  /// @brief Method int3x4, addr 0x6422748, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 int3x4(float_t v);

  /// @brief Method int3x4, addr 0x6422608, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 int3x4(int32_t v);

  /// @brief Method int3x4, addr 0x64226d8, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 int3x4(uint32_t v);

  /// @brief Method int4, addr 0x6422c50, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 int4(::Unity::Mathematics::bool4 v);

  /// @brief Method int4, addr 0x6422d24, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 int4(::Unity::Mathematics::double4 v);

  /// @brief Method int4, addr 0x6422ca8, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 int4(::Unity::Mathematics::float4 v);

  /// @brief Method int4, addr 0x6422c80, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 int4(::Unity::Mathematics::uint4 v);

  /// @brief Method int4, addr 0x6422c38, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 int4(bool v);

  /// @brief Method int4, addr 0x6422d00, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 int4(double_t v);

  /// @brief Method int4, addr 0x6422c84, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 int4(float_t v);

  /// @brief Method int4, addr 0x6422c28, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 int4(int32_t v);

  /// @brief Method int4, addr 0x6422c70, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 int4(uint32_t v);

  /// @brief Method int4, addr 0x6422bbc, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 int4(int32_t x, int32_t y, int32_t z, int32_t w);

  /// @brief Method int4, addr 0x6422bd4, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 int4(int32_t x, int32_t y, ::Unity::Mathematics::int2 zw);

  /// @brief Method int4, addr 0x6422be4, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 int4(int32_t x, ::Unity::Mathematics::int2 yz, int32_t w);

  /// @brief Method int4, addr 0x6422bf8, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 int4(int32_t x, ::Unity::Mathematics::int3 yzw);

  /// @brief Method int4, addr 0x6422c0c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 int4(::Unity::Mathematics::int2 xy, int32_t z, int32_t w);

  /// @brief Method int4, addr 0x6422c18, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 int4(::Unity::Mathematics::int2 xy, ::Unity::Mathematics::int2 zw);

  /// @brief Method int4, addr 0x6422c1c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 int4(::Unity::Mathematics::int3 xyz, int32_t w);

  /// @brief Method int4, addr 0x6422c24, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 int4(::Unity::Mathematics::int4 xyzw);

  /// @brief Method int4x2, addr 0x6423100, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 int4x2(::Unity::Mathematics::int4 c0, ::Unity::Mathematics::int4 c1);

  /// @brief Method int4x2, addr 0x642310c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 int4x2(int32_t m00, int32_t m01, int32_t m10, int32_t m11, int32_t m20, int32_t m21, int32_t m30, int32_t m31);

  /// @brief Method int4x2, addr 0x642314c, size 0x5c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 int4x2(::Unity::Mathematics::bool4x2 v);

  /// @brief Method int4x2, addr 0x64232b8, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 int4x2(::Unity::Mathematics::double4x2 v);

  /// @brief Method int4x2, addr 0x64231f0, size 0xa0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 int4x2(::Unity::Mathematics::float4x2 v);

  /// @brief Method int4x2, addr 0x64231bc, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 int4x2(::Unity::Mathematics::uint4x2 v);

  /// @brief Method int4x2, addr 0x6423134, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 int4x2(bool v);

  /// @brief Method int4x2, addr 0x6423290, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 int4x2(double_t v);

  /// @brief Method int4x2, addr 0x64231c8, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 int4x2(float_t v);

  /// @brief Method int4x2, addr 0x6423120, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 int4x2(int32_t v);

  /// @brief Method int4x2, addr 0x64231a8, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 int4x2(uint32_t v);

  /// @brief Method int4x3, addr 0x64234d0, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 int4x3(::Unity::Mathematics::int4 c0, ::Unity::Mathematics::int4 c1, ::Unity::Mathematics::int4 c2);

  /// @brief Method int4x3, addr 0x64234e0, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 int4x3(int32_t m00, int32_t m01, int32_t m02, int32_t m10, int32_t m11, int32_t m12, int32_t m20, int32_t m21, int32_t m22, int32_t m30, int32_t m31,
                                                    int32_t m32);

  /// @brief Method int4x3, addr 0x6423548, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 int4x3(::Unity::Mathematics::bool4x3 v);

  /// @brief Method int4x3, addr 0x642372c, size 0x104, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 int4x3(::Unity::Mathematics::double4x3 v);

  /// @brief Method int4x3, addr 0x6423618, size 0xe8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 int4x3(::Unity::Mathematics::float4x3 v);

  /// @brief Method int4x3, addr 0x64235d8, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 int4x3(::Unity::Mathematics::uint4x3 v);

  /// @brief Method int4x3, addr 0x642352c, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 int4x3(bool v);

  /// @brief Method int4x3, addr 0x6423700, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 int4x3(double_t v);

  /// @brief Method int4x3, addr 0x64235ec, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 int4x3(float_t v);

  /// @brief Method int4x3, addr 0x6423514, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 int4x3(int32_t v);

  /// @brief Method int4x3, addr 0x64235c0, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 int4x3(uint32_t v);

  /// @brief Method int4x4, addr 0x6423a14, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 int4x4(::Unity::Mathematics::int4 c0, ::Unity::Mathematics::int4 c1, ::Unity::Mathematics::int4 c2, ::Unity::Mathematics::int4 c3);

  /// @brief Method int4x4, addr 0x6423a28, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 int4x4(int32_t m00, int32_t m01, int32_t m02, int32_t m03, int32_t m10, int32_t m11, int32_t m12, int32_t m13, int32_t m20, int32_t m21, int32_t m22,
                                                    int32_t m23, int32_t m30, int32_t m31, int32_t m32, int32_t m33);

  /// @brief Method int4x4, addr 0x6423ab8, size 0x94, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 int4x4(::Unity::Mathematics::bool4x4 v);

  /// @brief Method int4x4, addr 0x6423d04, size 0x15c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 int4x4(::Unity::Mathematics::double4x4 v);

  /// @brief Method int4x4, addr 0x6423bac, size 0x128, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 int4x4(::Unity::Mathematics::float4x4 v);

  /// @brief Method int4x4, addr 0x6423b68, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 int4x4(::Unity::Mathematics::uint4x4 v);

  /// @brief Method int4x4, addr 0x6423a98, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 int4x4(bool v);

  /// @brief Method int4x4, addr 0x6423cd4, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 int4x4(double_t v);

  /// @brief Method int4x4, addr 0x6423b7c, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 int4x4(float_t v);

  /// @brief Method int4x4, addr 0x6423a7c, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 int4x4(int32_t v);

  /// @brief Method int4x4, addr 0x6423b4c, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 int4x4(uint32_t v);

  /// @brief Method inverse, addr 0x6416484, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::AffineTransform inverse(::Unity::Mathematics::AffineTransform a);

  /// @brief Method inverse, addr 0x6440d24, size 0xe0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::RigidTransform inverse(::Unity::Mathematics::RigidTransform t);

  /// @brief Method inverse, addr 0x6419310, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 inverse(::Unity::Mathematics::double2x2 m);

  /// @brief Method inverse, addr 0x641a584, size 0xd4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 inverse(::Unity::Mathematics::double3x3 m);

  /// @brief Method inverse, addr 0x641c280, size 0x354, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x4 inverse(::Unity::Mathematics::double4x4 m);

  /// @brief Method inverse, addr 0x641cff4, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 inverse(::Unity::Mathematics::float2x2 m);

  /// @brief Method inverse, addr 0x641e074, size 0xd0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 inverse(::Unity::Mathematics::float3x3 m);

  /// @brief Method inverse, addr 0x641f920, size 0x33c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 inverse(::Unity::Mathematics::float4x4 m);

  /// @brief Method inverse, addr 0x643f574, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion inverse(::Unity::Mathematics::quaternion q);

  /// @brief Method isfinite, addr 0x6424408, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 isfinite(::Unity::Mathematics::double2 x);

  /// @brief Method isfinite, addr 0x6424340, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 isfinite(::Unity::Mathematics::float2 x);

  /// @brief Method isfinite, addr 0x6424430, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 isfinite(::Unity::Mathematics::double3 x);

  /// @brief Method isfinite, addr 0x6424368, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 isfinite(::Unity::Mathematics::float3 x);

  /// @brief Method isfinite, addr 0x642446c, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 isfinite(::Unity::Mathematics::double4 x);

  /// @brief Method isfinite, addr 0x64243a4, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 isfinite(::Unity::Mathematics::float4 x);

  /// @brief Method isfinite, addr 0x64243f0, size 0x18, virtual false, abstract: false, final false
  static inline bool isfinite(double_t x);

  /// @brief Method isfinite, addr 0x6424328, size 0x18, virtual false, abstract: false, final false
  static inline bool isfinite(float_t x);

  /// @brief Method isinf, addr 0x6424598, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 isinf(::Unity::Mathematics::double2 x);

  /// @brief Method isinf, addr 0x64244d0, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 isinf(::Unity::Mathematics::float2 x);

  /// @brief Method isinf, addr 0x64245c0, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 isinf(::Unity::Mathematics::double3 x);

  /// @brief Method isinf, addr 0x64244f8, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 isinf(::Unity::Mathematics::float3 x);

  /// @brief Method isinf, addr 0x64245fc, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 isinf(::Unity::Mathematics::double4 x);

  /// @brief Method isinf, addr 0x6424534, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 isinf(::Unity::Mathematics::float4 x);

  /// @brief Method isinf, addr 0x6424580, size 0x18, virtual false, abstract: false, final false
  static inline bool isinf(double_t x);

  /// @brief Method isinf, addr 0x64244b8, size 0x18, virtual false, abstract: false, final false
  static inline bool isinf(float_t x);

  /// @brief Method isnan, addr 0x6424738, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 isnan(::Unity::Mathematics::double2 x);

  /// @brief Method isnan, addr 0x6424660, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 isnan(::Unity::Mathematics::float2 x);

  /// @brief Method isnan, addr 0x6424764, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 isnan(::Unity::Mathematics::double3 x);

  /// @brief Method isnan, addr 0x642468c, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 isnan(::Unity::Mathematics::float3 x);

  /// @brief Method isnan, addr 0x64247a4, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 isnan(::Unity::Mathematics::double4 x);

  /// @brief Method isnan, addr 0x64246cc, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 isnan(::Unity::Mathematics::float4 x);

  /// @brief Method isnan, addr 0x6424720, size 0x18, virtual false, abstract: false, final false
  static inline bool isnan(double_t x);

  /// @brief Method isnan, addr 0x6424648, size 0x18, virtual false, abstract: false, final false
  static inline bool isnan(float_t x);

  /// @brief Method ispow2, addr 0x642480c, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 ispow2(::Unity::Mathematics::int2 x);

  /// @brief Method ispow2, addr 0x64248fc, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 ispow2(::Unity::Mathematics::uint2 x);

  /// @brief Method ispow2, addr 0x642483c, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 ispow2(::Unity::Mathematics::int3 x);

  /// @brief Method ispow2, addr 0x6424928, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 ispow2(::Unity::Mathematics::uint3 x);

  /// @brief Method ispow2, addr 0x6424884, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 ispow2(::Unity::Mathematics::int4 x);

  /// @brief Method ispow2, addr 0x6424968, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 ispow2(::Unity::Mathematics::uint4 x);

  /// @brief Method ispow2, addr 0x64247f8, size 0x14, virtual false, abstract: false, final false
  static inline bool ispow2(int32_t x);

  /// @brief Method ispow2, addr 0x64248e8, size 0x14, virtual false, abstract: false, final false
  static inline bool ispow2(uint32_t x);

  /// @brief Method left, addr 0x6437b90, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 left();

  /// @brief Method length, addr 0x6431d38, size 0x70, virtual false, abstract: false, final false
  static inline double_t length(::Unity::Mathematics::double2 x);

  /// @brief Method length, addr 0x6431da8, size 0x84, virtual false, abstract: false, final false
  static inline double_t length(::Unity::Mathematics::double3 x);

  /// @brief Method length, addr 0x6431e2c, size 0x90, virtual false, abstract: false, final false
  static inline double_t length(::Unity::Mathematics::double4 x);

  /// @brief Method length, addr 0x6431d30, size 0x8, virtual false, abstract: false, final false
  static inline double_t length(double_t x);

  /// @brief Method length, addr 0x643f5cc, size 0x90, virtual false, abstract: false, final false
  static inline float_t length(::Unity::Mathematics::quaternion q);

  /// @brief Method length, addr 0x6431bac, size 0x70, virtual false, abstract: false, final false
  static inline float_t length(::Unity::Mathematics::float2 x);

  /// @brief Method length, addr 0x6431c1c, size 0x84, virtual false, abstract: false, final false
  static inline float_t length(::Unity::Mathematics::float3 x);

  /// @brief Method length, addr 0x6431ca0, size 0x90, virtual false, abstract: false, final false
  static inline float_t length(::Unity::Mathematics::float4 x);

  /// @brief Method length, addr 0x6431ba4, size 0x8, virtual false, abstract: false, final false
  static inline float_t length(float_t x);

  /// @brief Method lengthsq, addr 0x6431f14, size 0x10, virtual false, abstract: false, final false
  static inline double_t lengthsq(::Unity::Mathematics::double2 x);

  /// @brief Method lengthsq, addr 0x6431f24, size 0x18, virtual false, abstract: false, final false
  static inline double_t lengthsq(::Unity::Mathematics::double3 x);

  /// @brief Method lengthsq, addr 0x6431f3c, size 0x20, virtual false, abstract: false, final false
  static inline double_t lengthsq(::Unity::Mathematics::double4 x);

  /// @brief Method lengthsq, addr 0x6431f0c, size 0x8, virtual false, abstract: false, final false
  static inline double_t lengthsq(double_t x);

  /// @brief Method lengthsq, addr 0x643f65c, size 0x20, virtual false, abstract: false, final false
  static inline float_t lengthsq(::Unity::Mathematics::quaternion q);

  /// @brief Method lengthsq, addr 0x6431ec4, size 0x10, virtual false, abstract: false, final false
  static inline float_t lengthsq(::Unity::Mathematics::float2 x);

  /// @brief Method lengthsq, addr 0x6431ed4, size 0x18, virtual false, abstract: false, final false
  static inline float_t lengthsq(::Unity::Mathematics::float3 x);

  /// @brief Method lengthsq, addr 0x6431eec, size 0x20, virtual false, abstract: false, final false
  static inline float_t lengthsq(::Unity::Mathematics::float4 x);

  /// @brief Method lengthsq, addr 0x6431ebc, size 0x8, virtual false, abstract: false, final false
  static inline float_t lengthsq(float_t x);

  /// @brief Method lerp, addr 0x6425188, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 lerp(::Unity::Mathematics::double2 start, ::Unity::Mathematics::double2 end, ::Unity::Mathematics::double2 t);

  /// @brief Method lerp, addr 0x642510c, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 lerp(::Unity::Mathematics::double2 start, ::Unity::Mathematics::double2 end, double_t t);

  /// @brief Method lerp, addr 0x64251a4, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 lerp(::Unity::Mathematics::double3 start, ::Unity::Mathematics::double3 end, ::Unity::Mathematics::double3 t);

  /// @brief Method lerp, addr 0x6425128, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 lerp(::Unity::Mathematics::double3 start, ::Unity::Mathematics::double3 end, double_t t);

  /// @brief Method lerp, addr 0x64251d4, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 lerp(::Unity::Mathematics::double4 start, ::Unity::Mathematics::double4 end, ::Unity::Mathematics::double4 t);

  /// @brief Method lerp, addr 0x6425150, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 lerp(::Unity::Mathematics::double4 start, ::Unity::Mathematics::double4 end, double_t t);

  /// @brief Method lerp, addr 0x6425074, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 lerp(::Unity::Mathematics::float2 start, ::Unity::Mathematics::float2 end, ::Unity::Mathematics::float2 t);

  /// @brief Method lerp, addr 0x6424ff8, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 lerp(::Unity::Mathematics::float2 start, ::Unity::Mathematics::float2 end, float_t t);

  /// @brief Method lerp, addr 0x6425090, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 lerp(::Unity::Mathematics::float3 start, ::Unity::Mathematics::float3 end, ::Unity::Mathematics::float3 t);

  /// @brief Method lerp, addr 0x6425014, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 lerp(::Unity::Mathematics::float3 start, ::Unity::Mathematics::float3 end, float_t t);

  /// @brief Method lerp, addr 0x64250c0, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 lerp(::Unity::Mathematics::float4 start, ::Unity::Mathematics::float4 end, ::Unity::Mathematics::float4 t);

  /// @brief Method lerp, addr 0x642503c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 lerp(::Unity::Mathematics::float4 start, ::Unity::Mathematics::float4 end, float_t t);

  /// @brief Method lerp, addr 0x64250fc, size 0x10, virtual false, abstract: false, final false
  static inline double_t lerp(double_t start, double_t end, double_t t);

  /// @brief Method lerp, addr 0x6424fe8, size 0x10, virtual false, abstract: false, final false
  static inline float_t lerp(float_t start, float_t end, float_t t);

  /// @brief Method log, addr 0x642f18c, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 log(::Unity::Mathematics::double2 x);

  /// @brief Method log, addr 0x642f23c, size 0x100, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 log(::Unity::Mathematics::double3 x);

  /// @brief Method log, addr 0x642f33c, size 0x148, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 log(::Unity::Mathematics::double4 x);

  /// @brief Method log, addr 0x642ee18, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 log(::Unity::Mathematics::float2 x);

  /// @brief Method log, addr 0x642eed0, size 0x108, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 log(::Unity::Mathematics::float3 x);

  /// @brief Method log, addr 0x642efd8, size 0x154, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 log(::Unity::Mathematics::float4 x);

  /// @brief Method log, addr 0x643fd08, size 0x1cc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion log(::Unity::Mathematics::quaternion q);

  /// @brief Method log, addr 0x642f12c, size 0x60, virtual false, abstract: false, final false
  static inline double_t log(double_t x);

  /// @brief Method log, addr 0x642edb0, size 0x68, virtual false, abstract: false, final false
  static inline float_t log(float_t x);

  /// @brief Method log10, addr 0x642ffd4, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 log10(::Unity::Mathematics::double2 x);

  /// @brief Method log10, addr 0x6430084, size 0x100, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 log10(::Unity::Mathematics::double3 x);

  /// @brief Method log10, addr 0x6430184, size 0x148, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 log10(::Unity::Mathematics::double4 x);

  /// @brief Method log10, addr 0x642fc60, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 log10(::Unity::Mathematics::float2 x);

  /// @brief Method log10, addr 0x642fd18, size 0x108, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 log10(::Unity::Mathematics::float3 x);

  /// @brief Method log10, addr 0x642fe20, size 0x154, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 log10(::Unity::Mathematics::float4 x);

  /// @brief Method log10, addr 0x642ff74, size 0x60, virtual false, abstract: false, final false
  static inline double_t log10(double_t x);

  /// @brief Method log10, addr 0x642fbf8, size 0x68, virtual false, abstract: false, final false
  static inline float_t log10(float_t x);

  /// @brief Method log2, addr 0x642f8b8, size 0xc0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 log2(::Unity::Mathematics::double2 x);

  /// @brief Method log2, addr 0x642f978, size 0x118, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 log2(::Unity::Mathematics::double3 x);

  /// @brief Method log2, addr 0x642fa90, size 0x168, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 log2(::Unity::Mathematics::double4 x);

  /// @brief Method log2, addr 0x642f4f4, size 0xc8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 log2(::Unity::Mathematics::float2 x);

  /// @brief Method log2, addr 0x642f5bc, size 0x120, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 log2(::Unity::Mathematics::float3 x);

  /// @brief Method log2, addr 0x642f6dc, size 0x174, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 log2(::Unity::Mathematics::float4 x);

  /// @brief Method log2, addr 0x642f850, size 0x68, virtual false, abstract: false, final false
  static inline double_t log2(double_t x);

  /// @brief Method log2, addr 0x642f484, size 0x70, virtual false, abstract: false, final false
  static inline float_t log2(float_t x);

  /// @brief Method lzcnt, addr 0x64349bc, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 lzcnt(::Unity::Mathematics::int2 x);

  /// @brief Method lzcnt, addr 0x6434c0c, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 lzcnt(::Unity::Mathematics::uint2 x);

  /// @brief Method lzcnt, addr 0x6434a34, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 lzcnt(::Unity::Mathematics::int3 x);

  /// @brief Method lzcnt, addr 0x6434c84, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 lzcnt(::Unity::Mathematics::uint3 x);

  /// @brief Method lzcnt, addr 0x6434ae4, size 0xec, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 lzcnt(::Unity::Mathematics::int4 x);

  /// @brief Method lzcnt, addr 0x6434d34, size 0xec, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 lzcnt(::Unity::Mathematics::uint4 x);

  /// @brief Method lzcnt, addr 0x6434980, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t lzcnt(int32_t x);

  /// @brief Method lzcnt, addr 0x6434e20, size 0x4c, virtual false, abstract: false, final false
  static inline int32_t lzcnt(int64_t x);

  /// @brief Method lzcnt, addr 0x6434bd0, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t lzcnt(uint32_t x);

  /// @brief Method lzcnt, addr 0x6434e6c, size 0x4c, virtual false, abstract: false, final false
  static inline int32_t lzcnt(uint64_t x);

  /// @brief Method mad, addr 0x6425758, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 mad(::Unity::Mathematics::double2 mulA, ::Unity::Mathematics::double2 mulB, ::Unity::Mathematics::double2 addC);

  /// @brief Method mad, addr 0x642576c, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 mad(::Unity::Mathematics::double3 mulA, ::Unity::Mathematics::double3 mulB, ::Unity::Mathematics::double3 addC);

  /// @brief Method mad, addr 0x6425790, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 mad(::Unity::Mathematics::double4 mulA, ::Unity::Mathematics::double4 mulB, ::Unity::Mathematics::double4 addC);

  /// @brief Method mad, addr 0x64256e8, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 mad(::Unity::Mathematics::float2 mulA, ::Unity::Mathematics::float2 mulB, ::Unity::Mathematics::float2 addC);

  /// @brief Method mad, addr 0x64256fc, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 mad(::Unity::Mathematics::float3 mulA, ::Unity::Mathematics::float3 mulB, ::Unity::Mathematics::float3 addC);

  /// @brief Method mad, addr 0x6425720, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 mad(::Unity::Mathematics::float4 mulA, ::Unity::Mathematics::float4 mulB, ::Unity::Mathematics::float4 addC);

  /// @brief Method mad, addr 0x64255e4, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 mad(::Unity::Mathematics::int2 mulA, ::Unity::Mathematics::int2 mulB, ::Unity::Mathematics::int2 addC);

  /// @brief Method mad, addr 0x6425600, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 mad(::Unity::Mathematics::int3 mulA, ::Unity::Mathematics::int3 mulB, ::Unity::Mathematics::int3 addC);

  /// @brief Method mad, addr 0x6425620, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 mad(::Unity::Mathematics::int4 mulA, ::Unity::Mathematics::int4 mulB, ::Unity::Mathematics::int4 addC);

  /// @brief Method mad, addr 0x642565c, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 mad(::Unity::Mathematics::uint2 mulA, ::Unity::Mathematics::uint2 mulB, ::Unity::Mathematics::uint2 addC);

  /// @brief Method mad, addr 0x6425678, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 mad(::Unity::Mathematics::uint3 mulA, ::Unity::Mathematics::uint3 mulB, ::Unity::Mathematics::uint3 addC);

  /// @brief Method mad, addr 0x6425698, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 mad(::Unity::Mathematics::uint4 mulA, ::Unity::Mathematics::uint4 mulB, ::Unity::Mathematics::uint4 addC);

  /// @brief Method mad, addr 0x642574c, size 0xc, virtual false, abstract: false, final false
  static inline double_t mad(double_t mulA, double_t mulB, double_t addC);

  /// @brief Method mad, addr 0x64256dc, size 0xc, virtual false, abstract: false, final false
  static inline float_t mad(float_t mulA, float_t mulB, float_t addC);

  /// @brief Method mad, addr 0x64255dc, size 0x8, virtual false, abstract: false, final false
  static inline int32_t mad(int32_t mulA, int32_t mulB, int32_t addC);

  /// @brief Method mad, addr 0x64256cc, size 0x8, virtual false, abstract: false, final false
  static inline int64_t mad(int64_t mulA, int64_t mulB, int64_t addC);

  /// @brief Method mad, addr 0x6425654, size 0x8, virtual false, abstract: false, final false
  static inline uint32_t mad(uint32_t mulA, uint32_t mulB, uint32_t addC);

  /// @brief Method mad, addr 0x64256d4, size 0x8, virtual false, abstract: false, final false
  static inline uint64_t mad(uint64_t mulA, uint64_t mulB, uint64_t addC);

  /// @brief Method max, addr 0x6424f1c, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 max(::Unity::Mathematics::double2 x, ::Unity::Mathematics::double2 y);

  /// @brief Method max, addr 0x6424f4c, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 max(::Unity::Mathematics::double3 x, ::Unity::Mathematics::double3 y);

  /// @brief Method max, addr 0x6424f90, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 max(::Unity::Mathematics::double4 x, ::Unity::Mathematics::double4 y);

  /// @brief Method max, addr 0x6424e34, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 max(::Unity::Mathematics::float2 x, ::Unity::Mathematics::float2 y);

  /// @brief Method max, addr 0x6424e64, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 max(::Unity::Mathematics::float3 x, ::Unity::Mathematics::float3 y);

  /// @brief Method max, addr 0x6424ea8, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 max(::Unity::Mathematics::float4 x, ::Unity::Mathematics::float4 y);

  /// @brief Method max, addr 0x6424cec, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 max(::Unity::Mathematics::int2 x, ::Unity::Mathematics::int2 y);

  /// @brief Method max, addr 0x6424d0c, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 max(::Unity::Mathematics::int3 x, ::Unity::Mathematics::int3 y);

  /// @brief Method max, addr 0x6424d34, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 max(::Unity::Mathematics::int4 x, ::Unity::Mathematics::int4 y);

  /// @brief Method max, addr 0x6424d7c, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 max(::Unity::Mathematics::uint2 x, ::Unity::Mathematics::uint2 y);

  /// @brief Method max, addr 0x6424d9c, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 max(::Unity::Mathematics::uint3 x, ::Unity::Mathematics::uint3 y);

  /// @brief Method max, addr 0x6424dc4, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 max(::Unity::Mathematics::uint4 x, ::Unity::Mathematics::uint4 y);

  /// @brief Method max, addr 0x6424f00, size 0x1c, virtual false, abstract: false, final false
  static inline double_t max(double_t x, double_t y);

  /// @brief Method max, addr 0x6424e18, size 0x1c, virtual false, abstract: false, final false
  static inline float_t max(float_t x, float_t y);

  /// @brief Method max, addr 0x6424ce0, size 0xc, virtual false, abstract: false, final false
  static inline int32_t max(int32_t x, int32_t y);

  /// @brief Method max, addr 0x6424e00, size 0xc, virtual false, abstract: false, final false
  static inline int64_t max(int64_t x, int64_t y);

  /// @brief Method max, addr 0x6424d70, size 0xc, virtual false, abstract: false, final false
  static inline uint32_t max(uint32_t x, uint32_t y);

  /// @brief Method max, addr 0x6424e0c, size 0xc, virtual false, abstract: false, final false
  static inline uint64_t max(uint64_t x, uint64_t y);

  /// @brief Method min, addr 0x6424c14, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 min(::Unity::Mathematics::double2 x, ::Unity::Mathematics::double2 y);

  /// @brief Method min, addr 0x6424c44, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 min(::Unity::Mathematics::double3 x, ::Unity::Mathematics::double3 y);

  /// @brief Method min, addr 0x6424c88, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 min(::Unity::Mathematics::double4 x, ::Unity::Mathematics::double4 y);

  /// @brief Method min, addr 0x6424b2c, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 min(::Unity::Mathematics::float2 x, ::Unity::Mathematics::float2 y);

  /// @brief Method min, addr 0x6424b5c, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 min(::Unity::Mathematics::float3 x, ::Unity::Mathematics::float3 y);

  /// @brief Method min, addr 0x6424ba0, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 min(::Unity::Mathematics::float4 x, ::Unity::Mathematics::float4 y);

  /// @brief Method min, addr 0x64249e4, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 min(::Unity::Mathematics::int2 x, ::Unity::Mathematics::int2 y);

  /// @brief Method min, addr 0x6424a04, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 min(::Unity::Mathematics::int3 x, ::Unity::Mathematics::int3 y);

  /// @brief Method min, addr 0x6424a2c, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 min(::Unity::Mathematics::int4 x, ::Unity::Mathematics::int4 y);

  /// @brief Method min, addr 0x6424a74, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 min(::Unity::Mathematics::uint2 x, ::Unity::Mathematics::uint2 y);

  /// @brief Method min, addr 0x6424a94, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 min(::Unity::Mathematics::uint3 x, ::Unity::Mathematics::uint3 y);

  /// @brief Method min, addr 0x6424abc, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 min(::Unity::Mathematics::uint4 x, ::Unity::Mathematics::uint4 y);

  /// @brief Method min, addr 0x6424bf8, size 0x1c, virtual false, abstract: false, final false
  static inline double_t min(double_t x, double_t y);

  /// @brief Method min, addr 0x6424b10, size 0x1c, virtual false, abstract: false, final false
  static inline float_t min(float_t x, float_t y);

  /// @brief Method min, addr 0x64249d8, size 0xc, virtual false, abstract: false, final false
  static inline int32_t min(int32_t x, int32_t y);

  /// @brief Method min, addr 0x6424af8, size 0xc, virtual false, abstract: false, final false
  static inline int64_t min(int64_t x, int64_t y);

  /// @brief Method min, addr 0x6424a68, size 0xc, virtual false, abstract: false, final false
  static inline uint32_t min(uint32_t x, uint32_t y);

  /// @brief Method min, addr 0x6424b04, size 0xc, virtual false, abstract: false, final false
  static inline uint64_t min(uint64_t x, uint64_t y);

  /// @brief Method modf, addr 0x64307c4, size 0xd4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 modf(::Unity::Mathematics::double2 x, ::ByRef<::Unity::Mathematics::double2> i);

  /// @brief Method modf, addr 0x6430898, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 modf(::Unity::Mathematics::double3 x, ::ByRef<::Unity::Mathematics::double3> i);

  /// @brief Method modf, addr 0x64308ec, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 modf(::Unity::Mathematics::double4 x, ::ByRef<::Unity::Mathematics::double4> i);

  /// @brief Method modf, addr 0x64305bc, size 0xdc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 modf(::Unity::Mathematics::float2 x, ::ByRef<::Unity::Mathematics::float2> i);

  /// @brief Method modf, addr 0x6430698, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 modf(::Unity::Mathematics::float3 x, ::ByRef<::Unity::Mathematics::float3> i);

  /// @brief Method modf, addr 0x64306ec, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 modf(::Unity::Mathematics::float4 x, ::ByRef<::Unity::Mathematics::float4> i);

  /// @brief Method modf, addr 0x643074c, size 0x78, virtual false, abstract: false, final false
  static inline double_t modf(double_t x, ::ByRef<double_t> i);

  /// @brief Method modf, addr 0x6430544, size 0x78, virtual false, abstract: false, final false
  static inline float_t modf(float_t x, ::ByRef<float_t> i);

  /// @brief Method movehl, addr 0x6438f0c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 movehl(::Unity::Mathematics::double4 a, ::Unity::Mathematics::double4 b);

  /// @brief Method movehl, addr 0x6438f00, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 movehl(::Unity::Mathematics::float4 a, ::Unity::Mathematics::float4 b);

  /// @brief Method movelh, addr 0x6438ef4, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 movelh(::Unity::Mathematics::double4 a, ::Unity::Mathematics::double4 b);

  /// @brief Method movelh, addr 0x6438ee8, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 movelh(::Unity::Mathematics::float4 a, ::Unity::Mathematics::float4 b);

  /// @brief Method mul, addr 0x6415f90, size 0x184, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::AffineTransform mul(::Unity::Mathematics::AffineTransform a, ::Unity::Mathematics::AffineTransform b);

  /// @brief Method mul, addr 0x6416270, size 0x114, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::AffineTransform mul(::Unity::Mathematics::AffineTransform a, ::Unity::Mathematics::float3x3 b);

  /// @brief Method mul, addr 0x6416114, size 0x15c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::AffineTransform mul(::Unity::Mathematics::float3x3 a, ::Unity::Mathematics::AffineTransform b);

  /// @brief Method mul, addr 0x6440e04, size 0x128, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::RigidTransform mul(::Unity::Mathematics::RigidTransform a, ::Unity::Mathematics::RigidTransform b);

  /// @brief Method mul, addr 0x643aacc, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 mul(::Unity::Mathematics::double2 a, ::Unity::Mathematics::double2x2 b);

  /// @brief Method mul, addr 0x643adf0, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 mul(::Unity::Mathematics::double2x2 a, ::Unity::Mathematics::double2 b);

  /// @brief Method mul, addr 0x643af28, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 mul(::Unity::Mathematics::double2x3 a, ::Unity::Mathematics::double3 b);

  /// @brief Method mul, addr 0x643b0a0, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 mul(::Unity::Mathematics::double2x4 a, ::Unity::Mathematics::double4 b);

  /// @brief Method mul, addr 0x643ab78, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 mul(::Unity::Mathematics::double3 a, ::Unity::Mathematics::double3x2 b);

  /// @brief Method mul, addr 0x643aca0, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 mul(::Unity::Mathematics::double4 a, ::Unity::Mathematics::double4x2 b);

  /// @brief Method mul, addr 0x643ae0c, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 mul(::Unity::Mathematics::double2x2 a, ::Unity::Mathematics::double2x2 b);

  /// @brief Method mul, addr 0x643af4c, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 mul(::Unity::Mathematics::double2x3 a, ::Unity::Mathematics::double3x2 b);

  /// @brief Method mul, addr 0x643b0cc, size 0x94, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 mul(::Unity::Mathematics::double2x4 a, ::Unity::Mathematics::double4x2 b);

  /// @brief Method mul, addr 0x643ae40, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 mul(::Unity::Mathematics::double2x2 a, ::Unity::Mathematics::double2x3 b);

  /// @brief Method mul, addr 0x643afbc, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 mul(::Unity::Mathematics::double2x3 a, ::Unity::Mathematics::double3x3 b);

  /// @brief Method mul, addr 0x643b160, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 mul(::Unity::Mathematics::double2x4 a, ::Unity::Mathematics::double4x3 b);

  /// @brief Method mul, addr 0x643aea4, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 mul(::Unity::Mathematics::double2x2 a, ::Unity::Mathematics::double2x4 b);

  /// @brief Method mul, addr 0x643b020, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 mul(::Unity::Mathematics::double2x3 a, ::Unity::Mathematics::double3x4 b);

  /// @brief Method mul, addr 0x643b1e0, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 mul(::Unity::Mathematics::double2x4 a, ::Unity::Mathematics::double4x4 b);

  /// @brief Method mul, addr 0x643aae8, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 mul(::Unity::Mathematics::double2 a, ::Unity::Mathematics::double2x3 b);

  /// @brief Method mul, addr 0x643abb4, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 mul(::Unity::Mathematics::double3 a, ::Unity::Mathematics::double3x3 b);

  /// @brief Method mul, addr 0x643b284, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 mul(::Unity::Mathematics::double3x2 a, ::Unity::Mathematics::double2 b);

  /// @brief Method mul, addr 0x643b46c, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 mul(::Unity::Mathematics::double3x3 a, ::Unity::Mathematics::double3 b);

  /// @brief Method mul, addr 0x643b6fc, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 mul(::Unity::Mathematics::double3x4 a, ::Unity::Mathematics::double4 b);

  /// @brief Method mul, addr 0x643acec, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 mul(::Unity::Mathematics::double4 a, ::Unity::Mathematics::double4x3 b);

  /// @brief Method mul, addr 0x643b2b8, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x2 mul(::Unity::Mathematics::double3x2 a, ::Unity::Mathematics::double2x2 b);

  /// @brief Method mul, addr 0x643b4c0, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x2 mul(::Unity::Mathematics::double3x3 a, ::Unity::Mathematics::double3x2 b);

  /// @brief Method mul, addr 0x643b76c, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x2 mul(::Unity::Mathematics::double3x4 a, ::Unity::Mathematics::double4x2 b);

  /// @brief Method mul, addr 0x643b30c, size 0x98, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 mul(::Unity::Mathematics::double3x2 a, ::Unity::Mathematics::double2x3 b);

  /// @brief Method mul, addr 0x643b548, size 0xc0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 mul(::Unity::Mathematics::double3x3 a, ::Unity::Mathematics::double3x3 b);

  /// @brief Method mul, addr 0x643b820, size 0xfc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 mul(::Unity::Mathematics::double3x4 a, ::Unity::Mathematics::double4x3 b);

  /// @brief Method mul, addr 0x643b3a4, size 0xc8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 mul(::Unity::Mathematics::double3x2 a, ::Unity::Mathematics::double2x4 b);

  /// @brief Method mul, addr 0x643b608, size 0xf4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 mul(::Unity::Mathematics::double3x3 a, ::Unity::Mathematics::double3x4 b);

  /// @brief Method mul, addr 0x643b91c, size 0x144, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 mul(::Unity::Mathematics::double3x4 a, ::Unity::Mathematics::double4x4 b);

  /// @brief Method mul, addr 0x643ab1c, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 mul(::Unity::Mathematics::double2 a, ::Unity::Mathematics::double2x4 b);

  /// @brief Method mul, addr 0x643ac0c, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 mul(::Unity::Mathematics::double3 a, ::Unity::Mathematics::double3x4 b);

  /// @brief Method mul, addr 0x643ad5c, size 0x94, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 mul(::Unity::Mathematics::double4 a, ::Unity::Mathematics::double4x4 b);

  /// @brief Method mul, addr 0x643ba60, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 mul(::Unity::Mathematics::double4x2 a, ::Unity::Mathematics::double2 b);

  /// @brief Method mul, addr 0x643bbf8, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 mul(::Unity::Mathematics::double4x3 a, ::Unity::Mathematics::double3 b);

  /// @brief Method mul, addr 0x643be78, size 0x98, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 mul(::Unity::Mathematics::double4x4 a, ::Unity::Mathematics::double4 b);

  /// @brief Method mul, addr 0x643baa4, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 mul(::Unity::Mathematics::double4x2 a, ::Unity::Mathematics::double2x2 b);

  /// @brief Method mul, addr 0x643bc68, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 mul(::Unity::Mathematics::double4x3 a, ::Unity::Mathematics::double3x2 b);

  /// @brief Method mul, addr 0x643bf10, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 mul(::Unity::Mathematics::double4x4 a, ::Unity::Mathematics::double4x2 b);

  /// @brief Method mul, addr 0x643baec, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 mul(::Unity::Mathematics::double4x2 a, ::Unity::Mathematics::double2x3 b);

  /// @brief Method mul, addr 0x643bce4, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 mul(::Unity::Mathematics::double4x3 a, ::Unity::Mathematics::double3x3 b);

  /// @brief Method mul, addr 0x643bfb4, size 0xec, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 mul(::Unity::Mathematics::double4x4 a, ::Unity::Mathematics::double4x3 b);

  /// @brief Method mul, addr 0x643bb64, size 0x94, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x4 mul(::Unity::Mathematics::double4x2 a, ::Unity::Mathematics::double2x4 b);

  /// @brief Method mul, addr 0x643bd98, size 0xe0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x4 mul(::Unity::Mathematics::double4x3 a, ::Unity::Mathematics::double3x4 b);

  /// @brief Method mul, addr 0x643c0a0, size 0x12c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x4 mul(::Unity::Mathematics::double4x4 a, ::Unity::Mathematics::double4x4 b);

  /// @brief Method mul, addr 0x64394f4, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 mul(::Unity::Mathematics::float2 a, ::Unity::Mathematics::float2x2 b);

  /// @brief Method mul, addr 0x6439818, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 mul(::Unity::Mathematics::float2x2 a, ::Unity::Mathematics::float2 b);

  /// @brief Method mul, addr 0x6439930, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 mul(::Unity::Mathematics::float2x3 a, ::Unity::Mathematics::float3 b);

  /// @brief Method mul, addr 0x6439ac8, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 mul(::Unity::Mathematics::float2x4 a, ::Unity::Mathematics::float4 b);

  /// @brief Method mul, addr 0x64395a0, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 mul(::Unity::Mathematics::float3 a, ::Unity::Mathematics::float3x2 b);

  /// @brief Method mul, addr 0x64396c8, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 mul(::Unity::Mathematics::float4 a, ::Unity::Mathematics::float4x2 b);

  /// @brief Method mul, addr 0x6439834, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 mul(::Unity::Mathematics::float2x2 a, ::Unity::Mathematics::float2x2 b);

  /// @brief Method mul, addr 0x6439954, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 mul(::Unity::Mathematics::float2x3 a, ::Unity::Mathematics::float3x2 b);

  /// @brief Method mul, addr 0x6439af4, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 mul(::Unity::Mathematics::float2x4 a, ::Unity::Mathematics::float4x2 b);

  /// @brief Method mul, addr 0x6439868, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 mul(::Unity::Mathematics::float2x2 a, ::Unity::Mathematics::float2x3 b);

  /// @brief Method mul, addr 0x64399b4, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 mul(::Unity::Mathematics::float2x3 a, ::Unity::Mathematics::float3x3 b);

  /// @brief Method mul, addr 0x6439b70, size 0xac, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 mul(::Unity::Mathematics::float2x4 a, ::Unity::Mathematics::float4x3 b);

  /// @brief Method mul, addr 0x64398c8, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x4 mul(::Unity::Mathematics::float2x2 a, ::Unity::Mathematics::float2x4 b);

  /// @brief Method mul, addr 0x6439a30, size 0x98, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x4 mul(::Unity::Mathematics::float2x3 a, ::Unity::Mathematics::float3x4 b);

  /// @brief Method mul, addr 0x6439c1c, size 0xc8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x4 mul(::Unity::Mathematics::float2x4 a, ::Unity::Mathematics::float4x4 b);

  /// @brief Method mul, addr 0x6439510, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 mul(::Unity::Mathematics::float2 a, ::Unity::Mathematics::float2x3 b);

  /// @brief Method mul, addr 0x64395dc, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 mul(::Unity::Mathematics::float3 a, ::Unity::Mathematics::float3x3 b);

  /// @brief Method mul, addr 0x6439ce4, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 mul(::Unity::Mathematics::float3x2 a, ::Unity::Mathematics::float2 b);

  /// @brief Method mul, addr 0x6439f08, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 mul(::Unity::Mathematics::float3x3 a, ::Unity::Mathematics::float3 b);

  /// @brief Method mul, addr 0x643a250, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 mul(::Unity::Mathematics::float3x4 a, ::Unity::Mathematics::float4 b);

  /// @brief Method mul, addr 0x6439714, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 mul(::Unity::Mathematics::float4 a, ::Unity::Mathematics::float4x3 b);

  /// @brief Method mul, addr 0x643ff48, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 mul(::Unity::Mathematics::quaternion q, ::Unity::Mathematics::float3 v);

  /// @brief Method mul, addr 0x6439d14, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x2 mul(::Unity::Mathematics::float3x2 a, ::Unity::Mathematics::float2x2 b);

  /// @brief Method mul, addr 0x6439f50, size 0xa0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x2 mul(::Unity::Mathematics::float3x3 a, ::Unity::Mathematics::float3x2 b);

  /// @brief Method mul, addr 0x643a2b0, size 0xdc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x2 mul(::Unity::Mathematics::float3x4 a, ::Unity::Mathematics::float4x2 b);

  /// @brief Method mul, addr 0x6439d80, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 mul(::Unity::Mathematics::float3x2 a, ::Unity::Mathematics::float2x3 b);

  /// @brief Method mul, addr 0x6439ff0, size 0x104, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 mul(::Unity::Mathematics::float3x3 a, ::Unity::Mathematics::float3x3 b);

  /// @brief Method mul, addr 0x643a38c, size 0x168, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 mul(::Unity::Mathematics::float3x4 a, ::Unity::Mathematics::float4x3 b);

  /// @brief Method mul, addr 0x6439e30, size 0xd8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 mul(::Unity::Mathematics::float3x2 a, ::Unity::Mathematics::float2x4 b);

  /// @brief Method mul, addr 0x643a0f4, size 0x15c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 mul(::Unity::Mathematics::float3x3 a, ::Unity::Mathematics::float3x4 b);

  /// @brief Method mul, addr 0x643a4f4, size 0x1e4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 mul(::Unity::Mathematics::float3x4 a, ::Unity::Mathematics::float4x4 b);

  /// @brief Method mul, addr 0x6416384, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 mul(::Unity::Mathematics::AffineTransform a, ::Unity::Mathematics::float4 pos);

  /// @brief Method mul, addr 0x6440f2c, size 0xa8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 mul(::Unity::Mathematics::RigidTransform a, ::Unity::Mathematics::float4 pos);

  /// @brief Method mul, addr 0x6439544, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 mul(::Unity::Mathematics::float2 a, ::Unity::Mathematics::float2x4 b);

  /// @brief Method mul, addr 0x6439634, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 mul(::Unity::Mathematics::float3 a, ::Unity::Mathematics::float3x4 b);

  /// @brief Method mul, addr 0x6439784, size 0x94, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 mul(::Unity::Mathematics::float4 a, ::Unity::Mathematics::float4x4 b);

  /// @brief Method mul, addr 0x643a6d8, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 mul(::Unity::Mathematics::float4x2 a, ::Unity::Mathematics::float2 b);

  /// @brief Method mul, addr 0x643a7ac, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 mul(::Unity::Mathematics::float4x3 a, ::Unity::Mathematics::float3 b);

  /// @brief Method mul, addr 0x643a904, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 mul(::Unity::Mathematics::float4x4 a, ::Unity::Mathematics::float4 b);

  /// @brief Method mul, addr 0x643a6f8, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x2 mul(::Unity::Mathematics::float4x2 a, ::Unity::Mathematics::float2x2 b);

  /// @brief Method mul, addr 0x643a7d8, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x2 mul(::Unity::Mathematics::float4x3 a, ::Unity::Mathematics::float3x2 b);

  /// @brief Method mul, addr 0x643a938, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x2 mul(::Unity::Mathematics::float4x4 a, ::Unity::Mathematics::float4x2 b);

  /// @brief Method mul, addr 0x643a71c, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x3 mul(::Unity::Mathematics::float4x2 a, ::Unity::Mathematics::float2x3 b);

  /// @brief Method mul, addr 0x643a820, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x3 mul(::Unity::Mathematics::float4x3 a, ::Unity::Mathematics::float3x3 b);

  /// @brief Method mul, addr 0x643a990, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x3 mul(::Unity::Mathematics::float4x4 a, ::Unity::Mathematics::float4x3 b);

  /// @brief Method mul, addr 0x643a75c, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 mul(::Unity::Mathematics::float4x2 a, ::Unity::Mathematics::float2x4 b);

  /// @brief Method mul, addr 0x643a884, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 mul(::Unity::Mathematics::float4x3 a, ::Unity::Mathematics::float3x4 b);

  /// @brief Method mul, addr 0x643aa10, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 mul(::Unity::Mathematics::float4x4 a, ::Unity::Mathematics::float4x4 b);

  /// @brief Method mul, addr 0x643c1e8, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 mul(::Unity::Mathematics::int2 a, ::Unity::Mathematics::int2x2 b);

  /// @brief Method mul, addr 0x643c498, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 mul(::Unity::Mathematics::int2x2 a, ::Unity::Mathematics::int2 b);

  /// @brief Method mul, addr 0x643c5c8, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 mul(::Unity::Mathematics::int2x3 a, ::Unity::Mathematics::int3 b);

  /// @brief Method mul, addr 0x643c774, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 mul(::Unity::Mathematics::int2x4 a, ::Unity::Mathematics::int4 b);

  /// @brief Method mul, addr 0x643c294, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 mul(::Unity::Mathematics::int3 a, ::Unity::Mathematics::int3x2 b);

  /// @brief Method mul, addr 0x643c38c, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 mul(::Unity::Mathematics::int4 a, ::Unity::Mathematics::int4x2 b);

  /// @brief Method mul, addr 0x643c4bc, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x2 mul(::Unity::Mathematics::int2x2 a, ::Unity::Mathematics::int2x2 b);

  /// @brief Method mul, addr 0x643c5f8, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x2 mul(::Unity::Mathematics::int2x3 a, ::Unity::Mathematics::int3x2 b);

  /// @brief Method mul, addr 0x643c7c0, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x2 mul(::Unity::Mathematics::int2x4 a, ::Unity::Mathematics::int4x2 b);

  /// @brief Method mul, addr 0x643c4f8, size 0x5c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x3 mul(::Unity::Mathematics::int2x2 a, ::Unity::Mathematics::int2x3 b);

  /// @brief Method mul, addr 0x643c64c, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x3 mul(::Unity::Mathematics::int2x3 a, ::Unity::Mathematics::int3x3 b);

  /// @brief Method mul, addr 0x643c82c, size 0xa0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x3 mul(::Unity::Mathematics::int2x4 a, ::Unity::Mathematics::int4x3 b);

  /// @brief Method mul, addr 0x643c554, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x4 mul(::Unity::Mathematics::int2x2 a, ::Unity::Mathematics::int2x4 b);

  /// @brief Method mul, addr 0x643c6cc, size 0xa8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x4 mul(::Unity::Mathematics::int2x3 a, ::Unity::Mathematics::int3x4 b);

  /// @brief Method mul, addr 0x643c8cc, size 0xcc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x4 mul(::Unity::Mathematics::int2x4 a, ::Unity::Mathematics::int4x4 b);

  /// @brief Method mul, addr 0x643c20c, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 mul(::Unity::Mathematics::int2 a, ::Unity::Mathematics::int2x3 b);

  /// @brief Method mul, addr 0x643c2c8, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 mul(::Unity::Mathematics::int3 a, ::Unity::Mathematics::int3x3 b);

  /// @brief Method mul, addr 0x643c998, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 mul(::Unity::Mathematics::int3x2 a, ::Unity::Mathematics::int2 b);

  /// @brief Method mul, addr 0x643cb68, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 mul(::Unity::Mathematics::int3x3 a, ::Unity::Mathematics::int3 b);

  /// @brief Method mul, addr 0x643cdf4, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 mul(::Unity::Mathematics::int3x4 a, ::Unity::Mathematics::int4 b);

  /// @brief Method mul, addr 0x643c3cc, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 mul(::Unity::Mathematics::int4 a, ::Unity::Mathematics::int4x3 b);

  /// @brief Method mul, addr 0x643c9c8, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 mul(::Unity::Mathematics::int3x2 a, ::Unity::Mathematics::int2x2 b);

  /// @brief Method mul, addr 0x643cbac, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 mul(::Unity::Mathematics::int3x3 a, ::Unity::Mathematics::int3x2 b);

  /// @brief Method mul, addr 0x643ce5c, size 0xac, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 mul(::Unity::Mathematics::int3x4 a, ::Unity::Mathematics::int4x2 b);

  /// @brief Method mul, addr 0x643ca28, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x3 mul(::Unity::Mathematics::int3x2 a, ::Unity::Mathematics::int2x3 b);

  /// @brief Method mul, addr 0x643cc30, size 0xc4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x3 mul(::Unity::Mathematics::int3x3 a, ::Unity::Mathematics::int3x3 b);

  /// @brief Method mul, addr 0x643cf08, size 0xf8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x3 mul(::Unity::Mathematics::int3x4 a, ::Unity::Mathematics::int4x3 b);

  /// @brief Method mul, addr 0x643cab0, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 mul(::Unity::Mathematics::int3x2 a, ::Unity::Mathematics::int2x4 b);

  /// @brief Method mul, addr 0x643ccf4, size 0x100, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 mul(::Unity::Mathematics::int3x3 a, ::Unity::Mathematics::int3x4 b);

  /// @brief Method mul, addr 0x643d000, size 0x14c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 mul(::Unity::Mathematics::int3x4 a, ::Unity::Mathematics::int4x4 b);

  /// @brief Method mul, addr 0x643c23c, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 mul(::Unity::Mathematics::int2 a, ::Unity::Mathematics::int2x4 b);

  /// @brief Method mul, addr 0x643c30c, size 0x5c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 mul(::Unity::Mathematics::int3 a, ::Unity::Mathematics::int3x4 b);

  /// @brief Method mul, addr 0x643c424, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 mul(::Unity::Mathematics::int4 a, ::Unity::Mathematics::int4x4 b);

  /// @brief Method mul, addr 0x643d14c, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 mul(::Unity::Mathematics::int4x2 a, ::Unity::Mathematics::int2 b);

  /// @brief Method mul, addr 0x643d3a0, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 mul(::Unity::Mathematics::int4x3 a, ::Unity::Mathematics::int3 b);

  /// @brief Method mul, addr 0x643d6f8, size 0x8c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 mul(::Unity::Mathematics::int4x4 a, ::Unity::Mathematics::int4 b);

  /// @brief Method mul, addr 0x643d190, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 mul(::Unity::Mathematics::int4x2 a, ::Unity::Mathematics::int2x2 b);

  /// @brief Method mul, addr 0x643d408, size 0xa8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 mul(::Unity::Mathematics::int4x3 a, ::Unity::Mathematics::int3x2 b);

  /// @brief Method mul, addr 0x643d784, size 0xe4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 mul(::Unity::Mathematics::int4x4 a, ::Unity::Mathematics::int4x2 b);

  /// @brief Method mul, addr 0x643d208, size 0xac, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 mul(::Unity::Mathematics::int4x2 a, ::Unity::Mathematics::int2x3 b);

  /// @brief Method mul, addr 0x643d4b0, size 0xfc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 mul(::Unity::Mathematics::int4x3 a, ::Unity::Mathematics::int3x3 b);

  /// @brief Method mul, addr 0x643d868, size 0x148, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 mul(::Unity::Mathematics::int4x4 a, ::Unity::Mathematics::int4x3 b);

  /// @brief Method mul, addr 0x643d2b4, size 0xec, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 mul(::Unity::Mathematics::int4x2 a, ::Unity::Mathematics::int2x4 b);

  /// @brief Method mul, addr 0x643d5ac, size 0x14c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 mul(::Unity::Mathematics::int4x3 a, ::Unity::Mathematics::int3x4 b);

  /// @brief Method mul, addr 0x643d9b0, size 0x1a4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 mul(::Unity::Mathematics::int4x4 a, ::Unity::Mathematics::int4x4 b);

  /// @brief Method mul, addr 0x643fed4, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion mul(::Unity::Mathematics::quaternion a, ::Unity::Mathematics::quaternion b);

  /// @brief Method mul, addr 0x643db70, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 mul(::Unity::Mathematics::uint2 a, ::Unity::Mathematics::uint2x2 b);

  /// @brief Method mul, addr 0x643de20, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 mul(::Unity::Mathematics::uint2x2 a, ::Unity::Mathematics::uint2 b);

  /// @brief Method mul, addr 0x643df50, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 mul(::Unity::Mathematics::uint2x3 a, ::Unity::Mathematics::uint3 b);

  /// @brief Method mul, addr 0x643e0fc, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 mul(::Unity::Mathematics::uint2x4 a, ::Unity::Mathematics::uint4 b);

  /// @brief Method mul, addr 0x643dc1c, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 mul(::Unity::Mathematics::uint3 a, ::Unity::Mathematics::uint3x2 b);

  /// @brief Method mul, addr 0x643dd14, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 mul(::Unity::Mathematics::uint4 a, ::Unity::Mathematics::uint4x2 b);

  /// @brief Method mul, addr 0x643de44, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 mul(::Unity::Mathematics::uint2x2 a, ::Unity::Mathematics::uint2x2 b);

  /// @brief Method mul, addr 0x643df80, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 mul(::Unity::Mathematics::uint2x3 a, ::Unity::Mathematics::uint3x2 b);

  /// @brief Method mul, addr 0x643e148, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 mul(::Unity::Mathematics::uint2x4 a, ::Unity::Mathematics::uint4x2 b);

  /// @brief Method mul, addr 0x643de80, size 0x5c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x3 mul(::Unity::Mathematics::uint2x2 a, ::Unity::Mathematics::uint2x3 b);

  /// @brief Method mul, addr 0x643dfd4, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x3 mul(::Unity::Mathematics::uint2x3 a, ::Unity::Mathematics::uint3x3 b);

  /// @brief Method mul, addr 0x643e1b4, size 0xa0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x3 mul(::Unity::Mathematics::uint2x4 a, ::Unity::Mathematics::uint4x3 b);

  /// @brief Method mul, addr 0x643dedc, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x4 mul(::Unity::Mathematics::uint2x2 a, ::Unity::Mathematics::uint2x4 b);

  /// @brief Method mul, addr 0x643e054, size 0xa8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x4 mul(::Unity::Mathematics::uint2x3 a, ::Unity::Mathematics::uint3x4 b);

  /// @brief Method mul, addr 0x643e254, size 0xcc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x4 mul(::Unity::Mathematics::uint2x4 a, ::Unity::Mathematics::uint4x4 b);

  /// @brief Method mul, addr 0x643db94, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 mul(::Unity::Mathematics::uint2 a, ::Unity::Mathematics::uint2x3 b);

  /// @brief Method mul, addr 0x643dc50, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 mul(::Unity::Mathematics::uint3 a, ::Unity::Mathematics::uint3x3 b);

  /// @brief Method mul, addr 0x643e320, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 mul(::Unity::Mathematics::uint3x2 a, ::Unity::Mathematics::uint2 b);

  /// @brief Method mul, addr 0x643e4f0, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 mul(::Unity::Mathematics::uint3x3 a, ::Unity::Mathematics::uint3 b);

  /// @brief Method mul, addr 0x643e77c, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 mul(::Unity::Mathematics::uint3x4 a, ::Unity::Mathematics::uint4 b);

  /// @brief Method mul, addr 0x643dd54, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 mul(::Unity::Mathematics::uint4 a, ::Unity::Mathematics::uint4x3 b);

  /// @brief Method mul, addr 0x643e350, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 mul(::Unity::Mathematics::uint3x2 a, ::Unity::Mathematics::uint2x2 b);

  /// @brief Method mul, addr 0x643e534, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 mul(::Unity::Mathematics::uint3x3 a, ::Unity::Mathematics::uint3x2 b);

  /// @brief Method mul, addr 0x643e7e4, size 0xac, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 mul(::Unity::Mathematics::uint3x4 a, ::Unity::Mathematics::uint4x2 b);

  /// @brief Method mul, addr 0x643e3b0, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x3 mul(::Unity::Mathematics::uint3x2 a, ::Unity::Mathematics::uint2x3 b);

  /// @brief Method mul, addr 0x643e5b8, size 0xc4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x3 mul(::Unity::Mathematics::uint3x3 a, ::Unity::Mathematics::uint3x3 b);

  /// @brief Method mul, addr 0x643e890, size 0xf8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x3 mul(::Unity::Mathematics::uint3x4 a, ::Unity::Mathematics::uint4x3 b);

  /// @brief Method mul, addr 0x643e438, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 mul(::Unity::Mathematics::uint3x2 a, ::Unity::Mathematics::uint2x4 b);

  /// @brief Method mul, addr 0x643e67c, size 0x100, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 mul(::Unity::Mathematics::uint3x3 a, ::Unity::Mathematics::uint3x4 b);

  /// @brief Method mul, addr 0x643e988, size 0x14c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 mul(::Unity::Mathematics::uint3x4 a, ::Unity::Mathematics::uint4x4 b);

  /// @brief Method mul, addr 0x643dbc4, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 mul(::Unity::Mathematics::uint2 a, ::Unity::Mathematics::uint2x4 b);

  /// @brief Method mul, addr 0x643dc94, size 0x5c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 mul(::Unity::Mathematics::uint3 a, ::Unity::Mathematics::uint3x4 b);

  /// @brief Method mul, addr 0x643ddac, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 mul(::Unity::Mathematics::uint4 a, ::Unity::Mathematics::uint4x4 b);

  /// @brief Method mul, addr 0x643ead4, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 mul(::Unity::Mathematics::uint4x2 a, ::Unity::Mathematics::uint2 b);

  /// @brief Method mul, addr 0x643ed28, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 mul(::Unity::Mathematics::uint4x3 a, ::Unity::Mathematics::uint3 b);

  /// @brief Method mul, addr 0x643f080, size 0x8c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 mul(::Unity::Mathematics::uint4x4 a, ::Unity::Mathematics::uint4 b);

  /// @brief Method mul, addr 0x643eb18, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x2 mul(::Unity::Mathematics::uint4x2 a, ::Unity::Mathematics::uint2x2 b);

  /// @brief Method mul, addr 0x643ed90, size 0xa8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x2 mul(::Unity::Mathematics::uint4x3 a, ::Unity::Mathematics::uint3x2 b);

  /// @brief Method mul, addr 0x643f10c, size 0xe4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x2 mul(::Unity::Mathematics::uint4x4 a, ::Unity::Mathematics::uint4x2 b);

  /// @brief Method mul, addr 0x643eb90, size 0xac, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 mul(::Unity::Mathematics::uint4x2 a, ::Unity::Mathematics::uint2x3 b);

  /// @brief Method mul, addr 0x643ee38, size 0xfc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 mul(::Unity::Mathematics::uint4x3 a, ::Unity::Mathematics::uint3x3 b);

  /// @brief Method mul, addr 0x643f1f0, size 0x148, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 mul(::Unity::Mathematics::uint4x4 a, ::Unity::Mathematics::uint4x3 b);

  /// @brief Method mul, addr 0x643ec3c, size 0xec, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x4 mul(::Unity::Mathematics::uint4x2 a, ::Unity::Mathematics::uint2x4 b);

  /// @brief Method mul, addr 0x643ef34, size 0x14c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x4 mul(::Unity::Mathematics::uint4x3 a, ::Unity::Mathematics::uint3x4 b);

  /// @brief Method mul, addr 0x643f338, size 0x1a4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x4 mul(::Unity::Mathematics::uint4x4 a, ::Unity::Mathematics::uint4x4 b);

  /// @brief Method mul, addr 0x643aabc, size 0x10, virtual false, abstract: false, final false
  static inline double_t mul(::Unity::Mathematics::double2 a, ::Unity::Mathematics::double2 b);

  /// @brief Method mul, addr 0x643ab60, size 0x18, virtual false, abstract: false, final false
  static inline double_t mul(::Unity::Mathematics::double3 a, ::Unity::Mathematics::double3 b);

  /// @brief Method mul, addr 0x643ac80, size 0x20, virtual false, abstract: false, final false
  static inline double_t mul(::Unity::Mathematics::double4 a, ::Unity::Mathematics::double4 b);

  /// @brief Method mul, addr 0x643aab4, size 0x8, virtual false, abstract: false, final false
  static inline double_t mul(double_t a, double_t b);

  /// @brief Method mul, addr 0x64394e4, size 0x10, virtual false, abstract: false, final false
  static inline float_t mul(::Unity::Mathematics::float2 a, ::Unity::Mathematics::float2 b);

  /// @brief Method mul, addr 0x6439588, size 0x18, virtual false, abstract: false, final false
  static inline float_t mul(::Unity::Mathematics::float3 a, ::Unity::Mathematics::float3 b);

  /// @brief Method mul, addr 0x64396a8, size 0x20, virtual false, abstract: false, final false
  static inline float_t mul(::Unity::Mathematics::float4 a, ::Unity::Mathematics::float4 b);

  /// @brief Method mul, addr 0x64394dc, size 0x8, virtual false, abstract: false, final false
  static inline float_t mul(float_t a, float_t b);

  /// @brief Method mul, addr 0x643c1d4, size 0x14, virtual false, abstract: false, final false
  static inline int32_t mul(::Unity::Mathematics::int2 a, ::Unity::Mathematics::int2 b);

  /// @brief Method mul, addr 0x643c27c, size 0x18, virtual false, abstract: false, final false
  static inline int32_t mul(::Unity::Mathematics::int3 a, ::Unity::Mathematics::int3 b);

  /// @brief Method mul, addr 0x643c368, size 0x24, virtual false, abstract: false, final false
  static inline int32_t mul(::Unity::Mathematics::int4 a, ::Unity::Mathematics::int4 b);

  /// @brief Method mul, addr 0x643c1cc, size 0x8, virtual false, abstract: false, final false
  static inline int32_t mul(int32_t a, int32_t b);

  /// @brief Method mul, addr 0x643db5c, size 0x14, virtual false, abstract: false, final false
  static inline uint32_t mul(::Unity::Mathematics::uint2 a, ::Unity::Mathematics::uint2 b);

  /// @brief Method mul, addr 0x643dc04, size 0x18, virtual false, abstract: false, final false
  static inline uint32_t mul(::Unity::Mathematics::uint3 a, ::Unity::Mathematics::uint3 b);

  /// @brief Method mul, addr 0x643dcf0, size 0x24, virtual false, abstract: false, final false
  static inline uint32_t mul(::Unity::Mathematics::uint4 a, ::Unity::Mathematics::uint4 b);

  /// @brief Method mul, addr 0x643db54, size 0x8, virtual false, abstract: false, final false
  static inline uint32_t mul(uint32_t a, uint32_t b);

  /// @brief Method mulScale, addr 0x6438e28, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 mulScale(::Unity::Mathematics::float3x3 m, ::Unity::Mathematics::float3 s);

  /// @brief Method nlerp, addr 0x6440040, size 0x174, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion nlerp(::Unity::Mathematics::quaternion q1, ::Unity::Mathematics::quaternion q2, float_t t);

  /// @brief Method normalize, addr 0x643154c, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 normalize(::Unity::Mathematics::double2 x);

  /// @brief Method normalize, addr 0x64315cc, size 0x98, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 normalize(::Unity::Mathematics::double3 x);

  /// @brief Method normalize, addr 0x6431664, size 0xa8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 normalize(::Unity::Mathematics::double4 x);

  /// @brief Method normalize, addr 0x643138c, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 normalize(::Unity::Mathematics::float2 x);

  /// @brief Method normalize, addr 0x643140c, size 0x98, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 normalize(::Unity::Mathematics::float3 x);

  /// @brief Method normalize, addr 0x64314a4, size 0xa8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 normalize(::Unity::Mathematics::float4 x);

  /// @brief Method normalize, addr 0x643f67c, size 0xa8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion normalize(::Unity::Mathematics::quaternion q);

  /// @brief Method normalizesafe, addr 0x6431958, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 normalizesafe(::Unity::Mathematics::double2 x, ::Unity::Mathematics::double2 defaultvalue);

  /// @brief Method normalizesafe, addr 0x64319fc, size 0xc4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 normalizesafe(::Unity::Mathematics::double3 x, ::Unity::Mathematics::double3 defaultvalue);

  /// @brief Method normalizesafe, addr 0x6431ac0, size 0xe4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 normalizesafe(::Unity::Mathematics::double4 x, ::Unity::Mathematics::double4 defaultvalue);

  /// @brief Method normalizesafe, addr 0x643170c, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 normalizesafe(::Unity::Mathematics::float2 x, ::Unity::Mathematics::float2 defaultvalue);

  /// @brief Method normalizesafe, addr 0x64317b0, size 0xc4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 normalizesafe(::Unity::Mathematics::float3 x, ::Unity::Mathematics::float3 defaultvalue);

  /// @brief Method normalizesafe, addr 0x6431874, size 0xe4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 normalizesafe(::Unity::Mathematics::float4 x, ::Unity::Mathematics::float4 defaultvalue);

  /// @brief Method normalizesafe, addr 0x643f724, size 0x110, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion normalizesafe(::Unity::Mathematics::quaternion q);

  /// @brief Method normalizesafe, addr 0x643f834, size 0xe4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion normalizesafe(::Unity::Mathematics::quaternion q, ::Unity::Mathematics::quaternion defaultvalue);

  /// @brief Method orthonormal_basis, addr 0x64376b0, size 0x5c, virtual false, abstract: false, final false
  static inline void orthonormal_basis(::Unity::Mathematics::double3 normal, ::ByRef<::Unity::Mathematics::double3> basis1, ::ByRef<::Unity::Mathematics::double3> basis2);

  /// @brief Method orthonormal_basis, addr 0x6437654, size 0x5c, virtual false, abstract: false, final false
  static inline void orthonormal_basis(::Unity::Mathematics::float3 normal, ::ByRef<::Unity::Mathematics::float3> basis1, ::ByRef<::Unity::Mathematics::float3> basis2);

  /// @brief Method orthonormalize, addr 0x643909c, size 0x19c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 orthonormalize(::Unity::Mathematics::float3x3 i);

  /// @brief Method pow, addr 0x642d4c4, size 0xc8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 pow(::Unity::Mathematics::double2 x, ::Unity::Mathematics::double2 y);

  /// @brief Method pow, addr 0x642d58c, size 0x120, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 pow(::Unity::Mathematics::double3 x, ::Unity::Mathematics::double3 y);

  /// @brief Method pow, addr 0x642d6ac, size 0x178, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 pow(::Unity::Mathematics::double4 x, ::Unity::Mathematics::double4 y);

  /// @brief Method pow, addr 0x642d0dc, size 0xd0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 pow(::Unity::Mathematics::float2 x, ::Unity::Mathematics::float2 y);

  /// @brief Method pow, addr 0x642d1ac, size 0x128, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 pow(::Unity::Mathematics::float3 x, ::Unity::Mathematics::float3 y);

  /// @brief Method pow, addr 0x642d2d4, size 0x188, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 pow(::Unity::Mathematics::float4 x, ::Unity::Mathematics::float4 y);

  /// @brief Method pow, addr 0x642d45c, size 0x68, virtual false, abstract: false, final false
  static inline double_t pow(double_t x, double_t y);

  /// @brief Method pow, addr 0x642d06c, size 0x70, virtual false, abstract: false, final false
  static inline float_t pow(float_t x, float_t y);

  /// @brief Method project, addr 0x64339f0, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 project(::Unity::Mathematics::double2 a, ::Unity::Mathematics::double2 ontoB);

  /// @brief Method project, addr 0x6433a18, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 project(::Unity::Mathematics::double3 a, ::Unity::Mathematics::double3 ontoB);

  /// @brief Method project, addr 0x6433a54, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 project(::Unity::Mathematics::double4 a, ::Unity::Mathematics::double4 ontoB);

  /// @brief Method project, addr 0x643377c, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 project(::Unity::Mathematics::float2 a, ::Unity::Mathematics::float2 ontoB);

  /// @brief Method project, addr 0x64337a4, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 project(::Unity::Mathematics::float3 a, ::Unity::Mathematics::float3 ontoB);

  /// @brief Method project, addr 0x64337e0, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 project(::Unity::Mathematics::float4 a, ::Unity::Mathematics::float4 ontoB);

  /// @brief Method projectsafe, addr 0x6433ab4, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 projectsafe(::Unity::Mathematics::double2 a, ::Unity::Mathematics::double2 ontoB, ::Unity::Mathematics::double2 defaultValue);

  /// @brief Method projectsafe, addr 0x6433b0c, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 projectsafe(::Unity::Mathematics::double3 a, ::Unity::Mathematics::double3 ontoB, ::Unity::Mathematics::double3 defaultValue);

  /// @brief Method projectsafe, addr 0x6433b9c, size 0xc8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 projectsafe(::Unity::Mathematics::double4 a, ::Unity::Mathematics::double4 ontoB, ::Unity::Mathematics::double4 defaultValue);

  /// @brief Method projectsafe, addr 0x6433840, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 projectsafe(::Unity::Mathematics::float2 a, ::Unity::Mathematics::float2 ontoB, ::Unity::Mathematics::float2 defaultValue);

  /// @brief Method projectsafe, addr 0x6433898, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 projectsafe(::Unity::Mathematics::float3 a, ::Unity::Mathematics::float3 ontoB, ::Unity::Mathematics::float3 defaultValue);

  /// @brief Method projectsafe, addr 0x6433928, size 0xc8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 projectsafe(::Unity::Mathematics::float4 a, ::Unity::Mathematics::float4 ontoB, ::Unity::Mathematics::float4 defaultValue);

  /// @brief Method pseudoinverse, addr 0x6439238, size 0x2a4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 pseudoinverse(::Unity::Mathematics::float3x3 m);

  /// @brief Method quaternion, addr 0x643f4e4, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion quaternion(::Unity::Mathematics::float3x3 m);

  /// @brief Method quaternion, addr 0x643f524, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion quaternion(::Unity::Mathematics::float4x4 m);

  /// @brief Method quaternion, addr 0x643f4e0, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion quaternion(::Unity::Mathematics::float4 value);

  /// @brief Method quaternion, addr 0x643f4dc, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion quaternion(float_t x, float_t y, float_t z, float_t w);

  /// @brief Method radians, addr 0x6436848, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 radians(::Unity::Mathematics::double2 x);

  /// @brief Method radians, addr 0x643685c, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 radians(::Unity::Mathematics::double3 x);

  /// @brief Method radians, addr 0x6436874, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 radians(::Unity::Mathematics::double4 x);

  /// @brief Method radians, addr 0x64367f0, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 radians(::Unity::Mathematics::float2 x);

  /// @brief Method radians, addr 0x6436804, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 radians(::Unity::Mathematics::float3 x);

  /// @brief Method radians, addr 0x643681c, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 radians(::Unity::Mathematics::float4 x);

  /// @brief Method radians, addr 0x6436838, size 0x10, virtual false, abstract: false, final false
  static inline double_t radians(double_t x);

  /// @brief Method radians, addr 0x64367e0, size 0x10, virtual false, abstract: false, final false
  static inline float_t radians(float_t x);

  /// @brief Method rcp, addr 0x642cd74, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 rcp(::Unity::Mathematics::double2 x);

  /// @brief Method rcp, addr 0x642cd84, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 rcp(::Unity::Mathematics::double3 x);

  /// @brief Method rcp, addr 0x642cd98, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 rcp(::Unity::Mathematics::double4 x);

  /// @brief Method rcp, addr 0x642cd2c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 rcp(::Unity::Mathematics::float2 x);

  /// @brief Method rcp, addr 0x642cd3c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 rcp(::Unity::Mathematics::float3 x);

  /// @brief Method rcp, addr 0x642cd50, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 rcp(::Unity::Mathematics::float4 x);

  /// @brief Method rcp, addr 0x642cd68, size 0xc, virtual false, abstract: false, final false
  static inline double_t rcp(double_t x);

  /// @brief Method rcp, addr 0x642cd20, size 0xc, virtual false, abstract: false, final false
  static inline float_t rcp(float_t x);

  /// @brief Method read32_little_endian, addr 0x6437814, size 0x8, virtual false, abstract: false, final false
  static inline uint32_t read32_little_endian(void* pBuffer);

  /// @brief Method reflect, addr 0x64330d8, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 reflect(::Unity::Mathematics::double2 i, ::Unity::Mathematics::double2 n);

  /// @brief Method reflect, addr 0x6433100, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 reflect(::Unity::Mathematics::double3 i, ::Unity::Mathematics::double3 n);

  /// @brief Method reflect, addr 0x643313c, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 reflect(::Unity::Mathematics::double4 i, ::Unity::Mathematics::double4 n);

  /// @brief Method reflect, addr 0x6433024, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 reflect(::Unity::Mathematics::float2 i, ::Unity::Mathematics::float2 n);

  /// @brief Method reflect, addr 0x643304c, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 reflect(::Unity::Mathematics::float3 i, ::Unity::Mathematics::float3 n);

  /// @brief Method reflect, addr 0x6433088, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 reflect(::Unity::Mathematics::float4 i, ::Unity::Mathematics::float4 n);

  /// @brief Method refract, addr 0x6433484, size 0xd4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 refract(::Unity::Mathematics::double2 i, ::Unity::Mathematics::double2 n, double_t indexOfRefraction);

  /// @brief Method refract, addr 0x6433558, size 0xfc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 refract(::Unity::Mathematics::double3 i, ::Unity::Mathematics::double3 n, double_t indexOfRefraction);

  /// @brief Method refract, addr 0x6433654, size 0x128, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 refract(::Unity::Mathematics::double4 i, ::Unity::Mathematics::double4 n, double_t indexOfRefraction);

  /// @brief Method refract, addr 0x643318c, size 0xd4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 refract(::Unity::Mathematics::float2 i, ::Unity::Mathematics::float2 n, float_t indexOfRefraction);

  /// @brief Method refract, addr 0x6433260, size 0xfc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 refract(::Unity::Mathematics::float3 i, ::Unity::Mathematics::float3 n, float_t indexOfRefraction);

  /// @brief Method refract, addr 0x643335c, size 0x128, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 refract(::Unity::Mathematics::float4 i, ::Unity::Mathematics::float4 n, float_t indexOfRefraction);

  /// @brief Method remap, addr 0x64254b8, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 remap(::Unity::Mathematics::double2 srcStart, ::Unity::Mathematics::double2 srcEnd, ::Unity::Mathematics::double2 dstStart,
                                                    ::Unity::Mathematics::double2 dstEnd, ::Unity::Mathematics::double2 x);

  /// @brief Method remap, addr 0x64254f4, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 remap(::Unity::Mathematics::double3 srcStart, ::Unity::Mathematics::double3 srcEnd, ::Unity::Mathematics::double3 dstStart,
                                                    ::Unity::Mathematics::double3 dstEnd, ::Unity::Mathematics::double3 x);

  /// @brief Method remap, addr 0x6425558, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 remap(::Unity::Mathematics::double4 srcStart, ::Unity::Mathematics::double4 srcEnd, ::Unity::Mathematics::double4 dstStart,
                                                    ::Unity::Mathematics::double4 dstEnd, ::Unity::Mathematics::double4 x);

  /// @brief Method remap, addr 0x6425374, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 remap(::Unity::Mathematics::float2 srcStart, ::Unity::Mathematics::float2 srcEnd, ::Unity::Mathematics::float2 dstStart,
                                                   ::Unity::Mathematics::float2 dstEnd, ::Unity::Mathematics::float2 x);

  /// @brief Method remap, addr 0x64253b0, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 remap(::Unity::Mathematics::float3 srcStart, ::Unity::Mathematics::float3 srcEnd, ::Unity::Mathematics::float3 dstStart,
                                                   ::Unity::Mathematics::float3 dstEnd, ::Unity::Mathematics::float3 x);

  /// @brief Method remap, addr 0x6425418, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 remap(::Unity::Mathematics::float4 srcStart, ::Unity::Mathematics::float4 srcEnd, ::Unity::Mathematics::float4 dstStart,
                                                   ::Unity::Mathematics::float4 dstEnd, ::Unity::Mathematics::float4 x);

  /// @brief Method remap, addr 0x642549c, size 0x1c, virtual false, abstract: false, final false
  static inline double_t remap(double_t srcStart, double_t srcEnd, double_t dstStart, double_t dstEnd, double_t x);

  /// @brief Method remap, addr 0x6425358, size 0x1c, virtual false, abstract: false, final false
  static inline float_t remap(float_t srcStart, float_t srcEnd, float_t dstStart, float_t dstEnd, float_t x);

  /// @brief Method reversebits, addr 0x6435470, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 reversebits(::Unity::Mathematics::int2 x);

  /// @brief Method reversebits, addr 0x64354dc, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 reversebits(::Unity::Mathematics::int3 x);

  /// @brief Method reversebits, addr 0x643554c, size 0xdc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 reversebits(::Unity::Mathematics::int4 x);

  /// @brief Method reversebits, addr 0x6435630, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 reversebits(::Unity::Mathematics::uint2 x);

  /// @brief Method reversebits, addr 0x643569c, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 reversebits(::Unity::Mathematics::uint3 x);

  /// @brief Method reversebits, addr 0x643570c, size 0xdc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 reversebits(::Unity::Mathematics::uint4 x);

  /// @brief Method reversebits, addr 0x6435468, size 0x8, virtual false, abstract: false, final false
  static inline int32_t reversebits(int32_t x);

  /// @brief Method reversebits, addr 0x64357e8, size 0x8, virtual false, abstract: false, final false
  static inline int64_t reversebits(int64_t x);

  /// @brief Method reversebits, addr 0x6435628, size 0x8, virtual false, abstract: false, final false
  static inline uint32_t reversebits(uint32_t x);

  /// @brief Method reversebits, addr 0x64357f0, size 0x8, virtual false, abstract: false, final false
  static inline uint64_t reversebits(uint64_t x);

  /// @brief Method right, addr 0x6437ba0, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 right();

  /// @brief Method rol, addr 0x6435804, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 rol(::Unity::Mathematics::int2 x, int32_t n);

  /// @brief Method rol, addr 0x6435824, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 rol(::Unity::Mathematics::int3 x, int32_t n);

  /// @brief Method rol, addr 0x6435848, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 rol(::Unity::Mathematics::int4 x, int32_t n);

  /// @brief Method rol, addr 0x643588c, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 rol(::Unity::Mathematics::uint2 x, int32_t n);

  /// @brief Method rol, addr 0x64358ac, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 rol(::Unity::Mathematics::uint3 x, int32_t n);

  /// @brief Method rol, addr 0x64358d0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 rol(::Unity::Mathematics::uint4 x, int32_t n);

  /// @brief Method rol, addr 0x64357f8, size 0xc, virtual false, abstract: false, final false
  static inline int32_t rol(int32_t x, int32_t n);

  /// @brief Method rol, addr 0x6435908, size 0xc, virtual false, abstract: false, final false
  static inline int64_t rol(int64_t x, int32_t n);

  /// @brief Method rol, addr 0x6435880, size 0xc, virtual false, abstract: false, final false
  static inline uint32_t rol(uint32_t x, int32_t n);

  /// @brief Method rol, addr 0x6435914, size 0xc, virtual false, abstract: false, final false
  static inline uint64_t rol(uint64_t x, int32_t n);

  /// @brief Method ror, addr 0x6435928, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 ror(::Unity::Mathematics::int2 x, int32_t n);

  /// @brief Method ror, addr 0x6435948, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 ror(::Unity::Mathematics::int3 x, int32_t n);

  /// @brief Method ror, addr 0x643596c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 ror(::Unity::Mathematics::int4 x, int32_t n);

  /// @brief Method ror, addr 0x64359ac, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 ror(::Unity::Mathematics::uint2 x, int32_t n);

  /// @brief Method ror, addr 0x64359cc, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 ror(::Unity::Mathematics::uint3 x, int32_t n);

  /// @brief Method ror, addr 0x64359f0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 ror(::Unity::Mathematics::uint4 x, int32_t n);

  /// @brief Method ror, addr 0x6435920, size 0x8, virtual false, abstract: false, final false
  static inline int32_t ror(int32_t x, int32_t n);

  /// @brief Method ror, addr 0x6435a28, size 0x8, virtual false, abstract: false, final false
  static inline int64_t ror(int64_t x, int32_t n);

  /// @brief Method ror, addr 0x64359a4, size 0x8, virtual false, abstract: false, final false
  static inline uint32_t ror(uint32_t x, int32_t n);

  /// @brief Method ror, addr 0x6435a30, size 0x8, virtual false, abstract: false, final false
  static inline uint64_t ror(uint64_t x, int32_t n);

  /// @brief Method rotate, addr 0x641c178, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 rotate(::Unity::Mathematics::double4x4 a, ::Unity::Mathematics::double3 b);

  /// @brief Method rotate, addr 0x64163e4, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 rotate(::Unity::Mathematics::AffineTransform a, ::Unity::Mathematics::float3 dir);

  /// @brief Method rotate, addr 0x6440fd4, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 rotate(::Unity::Mathematics::RigidTransform a, ::Unity::Mathematics::float3 dir);

  /// @brief Method rotate, addr 0x641f83c, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 rotate(::Unity::Mathematics::float4x4 a, ::Unity::Mathematics::float3 b);

  /// @brief Method rotate, addr 0x643ffc4, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 rotate(::Unity::Mathematics::quaternion q, ::Unity::Mathematics::float3 v);

  /// @brief Method rotation, addr 0x64406e0, size 0x25c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion rotation(::Unity::Mathematics::float3x3 m);

  /// @brief Method round, addr 0x642bb48, size 0x170, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 round(::Unity::Mathematics::double2 x);

  /// @brief Method round, addr 0x642bcb8, size 0x214, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 round(::Unity::Mathematics::double3 x);

  /// @brief Method round, addr 0x642becc, size 0x2c0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 round(::Unity::Mathematics::double4 x);

  /// @brief Method round, addr 0x642b400, size 0x17c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 round(::Unity::Mathematics::float2 x);

  /// @brief Method round, addr 0x642b57c, size 0x22c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 round(::Unity::Mathematics::float3 x);

  /// @brief Method round, addr 0x642b7a8, size 0x2d4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 round(::Unity::Mathematics::float4 x);

  /// @brief Method round, addr 0x642ba7c, size 0xcc, virtual false, abstract: false, final false
  static inline double_t round(double_t x);

  /// @brief Method round, addr 0x642b334, size 0xcc, virtual false, abstract: false, final false
  static inline float_t round(float_t x);

  /// @brief Method rsqrt, addr 0x64311cc, size 0xa8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 rsqrt(::Unity::Mathematics::double2 x);

  /// @brief Method rsqrt, addr 0x6431274, size 0xf0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 rsqrt(::Unity::Mathematics::double3 x);

  /// @brief Method rsqrt, addr 0x6431364, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 rsqrt(::Unity::Mathematics::double4 x);

  /// @brief Method rsqrt, addr 0x6430fa4, size 0xa8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 rsqrt(::Unity::Mathematics::float2 x);

  /// @brief Method rsqrt, addr 0x643104c, size 0xf0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 rsqrt(::Unity::Mathematics::float3 x);

  /// @brief Method rsqrt, addr 0x643113c, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 rsqrt(::Unity::Mathematics::float4 x);

  /// @brief Method rsqrt, addr 0x6431164, size 0x68, virtual false, abstract: false, final false
  static inline double_t rsqrt(double_t x);

  /// @brief Method rsqrt, addr 0x6430f3c, size 0x68, virtual false, abstract: false, final false
  static inline float_t rsqrt(float_t x);

  /// @brief Method saturate, addr 0x6425e44, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 saturate(::Unity::Mathematics::double2 x);

  /// @brief Method saturate, addr 0x6425e84, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 saturate(::Unity::Mathematics::double3 x);

  /// @brief Method saturate, addr 0x6425f0c, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 saturate(::Unity::Mathematics::double4 x);

  /// @brief Method saturate, addr 0x6425d0c, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 saturate(::Unity::Mathematics::float2 x);

  /// @brief Method saturate, addr 0x6425d4c, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 saturate(::Unity::Mathematics::float3 x);

  /// @brief Method saturate, addr 0x6425dbc, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 saturate(::Unity::Mathematics::float4 x);

  /// @brief Method saturate, addr 0x6425e0c, size 0x38, virtual false, abstract: false, final false
  static inline double_t saturate(double_t x);

  /// @brief Method saturate, addr 0x6425cd4, size 0x38, virtual false, abstract: false, final false
  static inline float_t saturate(float_t x);

  /// @brief Method scaleMul, addr 0x6438e60, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 scaleMul(::Unity::Mathematics::float3 s, ::Unity::Mathematics::float3x3 m);

  /// @brief Method select, addr 0x6432ed0, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 select(::Unity::Mathematics::double2 falseValue, ::Unity::Mathematics::double2 trueValue, ::Unity::Mathematics::bool2 test);

  /// @brief Method select, addr 0x6432e94, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 select(::Unity::Mathematics::double2 falseValue, ::Unity::Mathematics::double2 trueValue, bool test);

  /// @brief Method select, addr 0x6432ee4, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 select(::Unity::Mathematics::double3 falseValue, ::Unity::Mathematics::double3 trueValue, ::Unity::Mathematics::bool3 test);

  /// @brief Method select, addr 0x6432ea4, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 select(::Unity::Mathematics::double3 falseValue, ::Unity::Mathematics::double3 trueValue, bool test);

  /// @brief Method select, addr 0x6432f00, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 select(::Unity::Mathematics::double4 falseValue, ::Unity::Mathematics::double4 trueValue, ::Unity::Mathematics::bool4 test);

  /// @brief Method select, addr 0x6432eb8, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 select(::Unity::Mathematics::double4 falseValue, ::Unity::Mathematics::double4 trueValue, bool test);

  /// @brief Method select, addr 0x6432e34, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 select(::Unity::Mathematics::float2 falseValue, ::Unity::Mathematics::float2 trueValue, ::Unity::Mathematics::bool2 test);

  /// @brief Method select, addr 0x6432df8, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 select(::Unity::Mathematics::float2 falseValue, ::Unity::Mathematics::float2 trueValue, bool test);

  /// @brief Method select, addr 0x6432e48, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 select(::Unity::Mathematics::float3 falseValue, ::Unity::Mathematics::float3 trueValue, ::Unity::Mathematics::bool3 test);

  /// @brief Method select, addr 0x6432e08, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 select(::Unity::Mathematics::float3 falseValue, ::Unity::Mathematics::float3 trueValue, bool test);

  /// @brief Method select, addr 0x6432e64, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 select(::Unity::Mathematics::float4 falseValue, ::Unity::Mathematics::float4 trueValue, ::Unity::Mathematics::bool4 test);

  /// @brief Method select, addr 0x6432e1c, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 select(::Unity::Mathematics::float4 falseValue, ::Unity::Mathematics::float4 trueValue, bool test);

  /// @brief Method select, addr 0x6432cc8, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 select(::Unity::Mathematics::int2 falseValue, ::Unity::Mathematics::int2 trueValue, ::Unity::Mathematics::bool2 test);

  /// @brief Method select, addr 0x6432c98, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 select(::Unity::Mathematics::int2 falseValue, ::Unity::Mathematics::int2 trueValue, bool test);

  /// @brief Method select, addr 0x6432ce0, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 select(::Unity::Mathematics::int3 falseValue, ::Unity::Mathematics::int3 trueValue, ::Unity::Mathematics::bool3 test);

  /// @brief Method select, addr 0x6432ca4, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 select(::Unity::Mathematics::int3 falseValue, ::Unity::Mathematics::int3 trueValue, bool test);

  /// @brief Method select, addr 0x6432d04, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 select(::Unity::Mathematics::int4 falseValue, ::Unity::Mathematics::int4 trueValue, ::Unity::Mathematics::bool4 test);

  /// @brief Method select, addr 0x6432cb8, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 select(::Unity::Mathematics::int4 falseValue, ::Unity::Mathematics::int4 trueValue, bool test);

  /// @brief Method select, addr 0x6432d6c, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 select(::Unity::Mathematics::uint2 falseValue, ::Unity::Mathematics::uint2 trueValue, ::Unity::Mathematics::bool2 test);

  /// @brief Method select, addr 0x6432d3c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 select(::Unity::Mathematics::uint2 falseValue, ::Unity::Mathematics::uint2 trueValue, bool test);

  /// @brief Method select, addr 0x6432d84, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 select(::Unity::Mathematics::uint3 falseValue, ::Unity::Mathematics::uint3 trueValue, ::Unity::Mathematics::bool3 test);

  /// @brief Method select, addr 0x6432d48, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 select(::Unity::Mathematics::uint3 falseValue, ::Unity::Mathematics::uint3 trueValue, bool test);

  /// @brief Method select, addr 0x6432da8, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 select(::Unity::Mathematics::uint4 falseValue, ::Unity::Mathematics::uint4 trueValue, ::Unity::Mathematics::bool4 test);

  /// @brief Method select, addr 0x6432d5c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 select(::Unity::Mathematics::uint4 falseValue, ::Unity::Mathematics::uint4 trueValue, bool test);

  /// @brief Method select, addr 0x6432e88, size 0xc, virtual false, abstract: false, final false
  static inline double_t select(double_t falseValue, double_t trueValue, bool test);

  /// @brief Method select, addr 0x6432dec, size 0xc, virtual false, abstract: false, final false
  static inline float_t select(float_t falseValue, float_t trueValue, bool test);

  /// @brief Method select, addr 0x6432c8c, size 0xc, virtual false, abstract: false, final false
  static inline int32_t select(int32_t falseValue, int32_t trueValue, bool test);

  /// @brief Method select, addr 0x6432dd4, size 0xc, virtual false, abstract: false, final false
  static inline int64_t select(int64_t falseValue, int64_t trueValue, bool test);

  /// @brief Method select, addr 0x6432d30, size 0xc, virtual false, abstract: false, final false
  static inline uint32_t select(uint32_t falseValue, uint32_t trueValue, bool test);

  /// @brief Method select, addr 0x6432de0, size 0xc, virtual false, abstract: false, final false
  static inline uint64_t select(uint64_t falseValue, uint64_t trueValue, bool test);

  /// @brief Method select_shuffle_component, addr 0x6416a78, size 0xdc, virtual false, abstract: false, final false
  static inline bool select_shuffle_component(::Unity::Mathematics::bool2 a, ::Unity::Mathematics::bool2 b, ::Unity::Mathematics::math_ShuffleComponent component);

  /// @brief Method select_shuffle_component, addr 0x64173a4, size 0xfc, virtual false, abstract: false, final false
  static inline bool select_shuffle_component(::Unity::Mathematics::bool3 a, ::Unity::Mathematics::bool3 b, ::Unity::Mathematics::math_ShuffleComponent component);

  /// @brief Method select_shuffle_component, addr 0x64181e0, size 0x12c, virtual false, abstract: false, final false
  static inline bool select_shuffle_component(::Unity::Mathematics::bool4 a, ::Unity::Mathematics::bool4 b, ::Unity::Mathematics::math_ShuffleComponent component);

  /// @brief Method select_shuffle_component, addr 0x6419130, size 0xd8, virtual false, abstract: false, final false
  static inline double_t select_shuffle_component(::Unity::Mathematics::double2 a, ::Unity::Mathematics::double2 b, ::Unity::Mathematics::math_ShuffleComponent component);

  /// @brief Method select_shuffle_component, addr 0x6419f8c, size 0xf4, virtual false, abstract: false, final false
  static inline double_t select_shuffle_component(::Unity::Mathematics::double3 a, ::Unity::Mathematics::double3 b, ::Unity::Mathematics::math_ShuffleComponent component);

  /// @brief Method select_shuffle_component, addr 0x641b448, size 0x128, virtual false, abstract: false, final false
  static inline double_t select_shuffle_component(::Unity::Mathematics::double4 a, ::Unity::Mathematics::double4 b, ::Unity::Mathematics::math_ShuffleComponent component);

  /// @brief Method select_shuffle_component, addr 0x641ce14, size 0xd8, virtual false, abstract: false, final false
  static inline float_t select_shuffle_component(::Unity::Mathematics::float2 a, ::Unity::Mathematics::float2 b, ::Unity::Mathematics::math_ShuffleComponent component);

  /// @brief Method select_shuffle_component, addr 0x641daec, size 0xf4, virtual false, abstract: false, final false
  static inline float_t select_shuffle_component(::Unity::Mathematics::float3 a, ::Unity::Mathematics::float3 b, ::Unity::Mathematics::math_ShuffleComponent component);

  /// @brief Method select_shuffle_component, addr 0x641ecec, size 0x128, virtual false, abstract: false, final false
  static inline float_t select_shuffle_component(::Unity::Mathematics::float4 a, ::Unity::Mathematics::float4 b, ::Unity::Mathematics::math_ShuffleComponent component);

  /// @brief Method select_shuffle_component, addr 0x6420e64, size 0xd0, virtual false, abstract: false, final false
  static inline int32_t select_shuffle_component(::Unity::Mathematics::int2 a, ::Unity::Mathematics::int2 b, ::Unity::Mathematics::math_ShuffleComponent component);

  /// @brief Method select_shuffle_component, addr 0x6421c58, size 0xec, virtual false, abstract: false, final false
  static inline int32_t select_shuffle_component(::Unity::Mathematics::int3 a, ::Unity::Mathematics::int3 b, ::Unity::Mathematics::math_ShuffleComponent component);

  /// @brief Method select_shuffle_component, addr 0x6422ff0, size 0x110, virtual false, abstract: false, final false
  static inline int32_t select_shuffle_component(::Unity::Mathematics::int4 a, ::Unity::Mathematics::int4 b, ::Unity::Mathematics::math_ShuffleComponent component);

  /// @brief Method select_shuffle_component, addr 0x64414f4, size 0xd0, virtual false, abstract: false, final false
  static inline uint32_t select_shuffle_component(::Unity::Mathematics::uint2 a, ::Unity::Mathematics::uint2 b, ::Unity::Mathematics::math_ShuffleComponent component);

  /// @brief Method select_shuffle_component, addr 0x644224c, size 0xec, virtual false, abstract: false, final false
  static inline uint32_t select_shuffle_component(::Unity::Mathematics::uint3 a, ::Unity::Mathematics::uint3 b, ::Unity::Mathematics::math_ShuffleComponent component);

  /// @brief Method select_shuffle_component, addr 0x6443568, size 0x110, virtual false, abstract: false, final false
  static inline uint32_t select_shuffle_component(::Unity::Mathematics::uint4 a, ::Unity::Mathematics::uint4 b, ::Unity::Mathematics::math_ShuffleComponent component);

  /// @brief Method shuffle, addr 0x64168cc, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 shuffle(::Unity::Mathematics::bool2 left, ::Unity::Mathematics::bool2 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                    ::Unity::Mathematics::math_ShuffleComponent y);

  /// @brief Method shuffle, addr 0x64171f8, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 shuffle(::Unity::Mathematics::bool3 left, ::Unity::Mathematics::bool3 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                    ::Unity::Mathematics::math_ShuffleComponent y);

  /// @brief Method shuffle, addr 0x6418034, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 shuffle(::Unity::Mathematics::bool4 left, ::Unity::Mathematics::bool4 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                    ::Unity::Mathematics::math_ShuffleComponent y);

  /// @brief Method shuffle, addr 0x641692c, size 0x8c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 shuffle(::Unity::Mathematics::bool2 left, ::Unity::Mathematics::bool2 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                    ::Unity::Mathematics::math_ShuffleComponent y, ::Unity::Mathematics::math_ShuffleComponent z);

  /// @brief Method shuffle, addr 0x6417258, size 0x8c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 shuffle(::Unity::Mathematics::bool3 left, ::Unity::Mathematics::bool3 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                    ::Unity::Mathematics::math_ShuffleComponent y, ::Unity::Mathematics::math_ShuffleComponent z);

  /// @brief Method shuffle, addr 0x6418094, size 0x8c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 shuffle(::Unity::Mathematics::bool4 left, ::Unity::Mathematics::bool4 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                    ::Unity::Mathematics::math_ShuffleComponent y, ::Unity::Mathematics::math_ShuffleComponent z);

  /// @brief Method shuffle, addr 0x64169b8, size 0xc0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 shuffle(::Unity::Mathematics::bool2 left, ::Unity::Mathematics::bool2 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                    ::Unity::Mathematics::math_ShuffleComponent y, ::Unity::Mathematics::math_ShuffleComponent z, ::Unity::Mathematics::math_ShuffleComponent w);

  /// @brief Method shuffle, addr 0x64172e4, size 0xc0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 shuffle(::Unity::Mathematics::bool3 left, ::Unity::Mathematics::bool3 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                    ::Unity::Mathematics::math_ShuffleComponent y, ::Unity::Mathematics::math_ShuffleComponent z, ::Unity::Mathematics::math_ShuffleComponent w);

  /// @brief Method shuffle, addr 0x6418120, size 0xc0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 shuffle(::Unity::Mathematics::bool4 left, ::Unity::Mathematics::bool4 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                    ::Unity::Mathematics::math_ShuffleComponent y, ::Unity::Mathematics::math_ShuffleComponent z, ::Unity::Mathematics::math_ShuffleComponent w);

  /// @brief Method shuffle, addr 0x6418f68, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 shuffle(::Unity::Mathematics::double2 left, ::Unity::Mathematics::double2 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                      ::Unity::Mathematics::math_ShuffleComponent y);

  /// @brief Method shuffle, addr 0x6419d64, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 shuffle(::Unity::Mathematics::double3 left, ::Unity::Mathematics::double3 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                      ::Unity::Mathematics::math_ShuffleComponent y);

  /// @brief Method shuffle, addr 0x641b1cc, size 0x98, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 shuffle(::Unity::Mathematics::double4 left, ::Unity::Mathematics::double4 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                      ::Unity::Mathematics::math_ShuffleComponent y);

  /// @brief Method shuffle, addr 0x6418fd0, size 0x98, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 shuffle(::Unity::Mathematics::double2 left, ::Unity::Mathematics::double2 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                      ::Unity::Mathematics::math_ShuffleComponent y, ::Unity::Mathematics::math_ShuffleComponent z);

  /// @brief Method shuffle, addr 0x6419de4, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 shuffle(::Unity::Mathematics::double3 left, ::Unity::Mathematics::double3 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                      ::Unity::Mathematics::math_ShuffleComponent y, ::Unity::Mathematics::math_ShuffleComponent z);

  /// @brief Method shuffle, addr 0x641b264, size 0xd8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 shuffle(::Unity::Mathematics::double4 left, ::Unity::Mathematics::double4 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                      ::Unity::Mathematics::math_ShuffleComponent y, ::Unity::Mathematics::math_ShuffleComponent z);

  /// @brief Method shuffle, addr 0x6419068, size 0xc8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 shuffle(::Unity::Mathematics::double2 left, ::Unity::Mathematics::double2 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                      ::Unity::Mathematics::math_ShuffleComponent y, ::Unity::Mathematics::math_ShuffleComponent z, ::Unity::Mathematics::math_ShuffleComponent w);

  /// @brief Method shuffle, addr 0x6419e9c, size 0xf0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 shuffle(::Unity::Mathematics::double3 left, ::Unity::Mathematics::double3 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                      ::Unity::Mathematics::math_ShuffleComponent y, ::Unity::Mathematics::math_ShuffleComponent z, ::Unity::Mathematics::math_ShuffleComponent w);

  /// @brief Method shuffle, addr 0x641b33c, size 0x10c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 shuffle(::Unity::Mathematics::double4 left, ::Unity::Mathematics::double4 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                      ::Unity::Mathematics::math_ShuffleComponent y, ::Unity::Mathematics::math_ShuffleComponent z, ::Unity::Mathematics::math_ShuffleComponent w);

  /// @brief Method shuffle, addr 0x641cc4c, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 shuffle(::Unity::Mathematics::float2 left, ::Unity::Mathematics::float2 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                     ::Unity::Mathematics::math_ShuffleComponent y);

  /// @brief Method shuffle, addr 0x641d8c4, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 shuffle(::Unity::Mathematics::float3 left, ::Unity::Mathematics::float3 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                     ::Unity::Mathematics::math_ShuffleComponent y);

  /// @brief Method shuffle, addr 0x641ea7c, size 0x98, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 shuffle(::Unity::Mathematics::float4 left, ::Unity::Mathematics::float4 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                     ::Unity::Mathematics::math_ShuffleComponent y);

  /// @brief Method shuffle, addr 0x641ccb4, size 0x98, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 shuffle(::Unity::Mathematics::float2 left, ::Unity::Mathematics::float2 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                     ::Unity::Mathematics::math_ShuffleComponent y, ::Unity::Mathematics::math_ShuffleComponent z);

  /// @brief Method shuffle, addr 0x641d944, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 shuffle(::Unity::Mathematics::float3 left, ::Unity::Mathematics::float3 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                     ::Unity::Mathematics::math_ShuffleComponent y, ::Unity::Mathematics::math_ShuffleComponent z);

  /// @brief Method shuffle, addr 0x641eb14, size 0xcc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 shuffle(::Unity::Mathematics::float4 left, ::Unity::Mathematics::float4 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                     ::Unity::Mathematics::math_ShuffleComponent y, ::Unity::Mathematics::math_ShuffleComponent z);

  /// @brief Method shuffle, addr 0x641cd4c, size 0xc8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 shuffle(::Unity::Mathematics::float2 left, ::Unity::Mathematics::float2 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                     ::Unity::Mathematics::math_ShuffleComponent y, ::Unity::Mathematics::math_ShuffleComponent z, ::Unity::Mathematics::math_ShuffleComponent w);

  /// @brief Method shuffle, addr 0x641d9fc, size 0xf0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 shuffle(::Unity::Mathematics::float3 left, ::Unity::Mathematics::float3 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                     ::Unity::Mathematics::math_ShuffleComponent y, ::Unity::Mathematics::math_ShuffleComponent z, ::Unity::Mathematics::math_ShuffleComponent w);

  /// @brief Method shuffle, addr 0x641ebe0, size 0x10c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 shuffle(::Unity::Mathematics::float4 left, ::Unity::Mathematics::float4 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                     ::Unity::Mathematics::math_ShuffleComponent y, ::Unity::Mathematics::math_ShuffleComponent z, ::Unity::Mathematics::math_ShuffleComponent w);

  /// @brief Method shuffle, addr 0x6420d08, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 shuffle(::Unity::Mathematics::int2 left, ::Unity::Mathematics::int2 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                   ::Unity::Mathematics::math_ShuffleComponent y);

  /// @brief Method shuffle, addr 0x6421a84, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 shuffle(::Unity::Mathematics::int3 left, ::Unity::Mathematics::int3 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                   ::Unity::Mathematics::math_ShuffleComponent y);

  /// @brief Method shuffle, addr 0x6422e34, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 shuffle(::Unity::Mathematics::int4 left, ::Unity::Mathematics::int4 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                   ::Unity::Mathematics::math_ShuffleComponent y);

  /// @brief Method shuffle, addr 0x6420d58, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 shuffle(::Unity::Mathematics::int2 left, ::Unity::Mathematics::int2 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                   ::Unity::Mathematics::math_ShuffleComponent y, ::Unity::Mathematics::math_ShuffleComponent z);

  /// @brief Method shuffle, addr 0x6421af4, size 0x9c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 shuffle(::Unity::Mathematics::int3 left, ::Unity::Mathematics::int3 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                   ::Unity::Mathematics::math_ShuffleComponent y, ::Unity::Mathematics::math_ShuffleComponent z);

  /// @brief Method shuffle, addr 0x6422e9c, size 0x94, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 shuffle(::Unity::Mathematics::int4 left, ::Unity::Mathematics::int4 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                   ::Unity::Mathematics::math_ShuffleComponent y, ::Unity::Mathematics::math_ShuffleComponent z);

  /// @brief Method shuffle, addr 0x6420dcc, size 0x98, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 shuffle(::Unity::Mathematics::int2 left, ::Unity::Mathematics::int2 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                   ::Unity::Mathematics::math_ShuffleComponent y, ::Unity::Mathematics::math_ShuffleComponent z, ::Unity::Mathematics::math_ShuffleComponent w);

  /// @brief Method shuffle, addr 0x6421b90, size 0xc8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 shuffle(::Unity::Mathematics::int3 left, ::Unity::Mathematics::int3 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                   ::Unity::Mathematics::math_ShuffleComponent y, ::Unity::Mathematics::math_ShuffleComponent z, ::Unity::Mathematics::math_ShuffleComponent w);

  /// @brief Method shuffle, addr 0x6422f30, size 0xc0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 shuffle(::Unity::Mathematics::int4 left, ::Unity::Mathematics::int4 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                   ::Unity::Mathematics::math_ShuffleComponent y, ::Unity::Mathematics::math_ShuffleComponent z, ::Unity::Mathematics::math_ShuffleComponent w);

  /// @brief Method shuffle, addr 0x6441398, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 shuffle(::Unity::Mathematics::uint2 left, ::Unity::Mathematics::uint2 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                    ::Unity::Mathematics::math_ShuffleComponent y);

  /// @brief Method shuffle, addr 0x6442078, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 shuffle(::Unity::Mathematics::uint3 left, ::Unity::Mathematics::uint3 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                    ::Unity::Mathematics::math_ShuffleComponent y);

  /// @brief Method shuffle, addr 0x64433ac, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 shuffle(::Unity::Mathematics::uint4 left, ::Unity::Mathematics::uint4 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                    ::Unity::Mathematics::math_ShuffleComponent y);

  /// @brief Method shuffle, addr 0x64413e8, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 shuffle(::Unity::Mathematics::uint2 left, ::Unity::Mathematics::uint2 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                    ::Unity::Mathematics::math_ShuffleComponent y, ::Unity::Mathematics::math_ShuffleComponent z);

  /// @brief Method shuffle, addr 0x64420e8, size 0x9c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 shuffle(::Unity::Mathematics::uint3 left, ::Unity::Mathematics::uint3 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                    ::Unity::Mathematics::math_ShuffleComponent y, ::Unity::Mathematics::math_ShuffleComponent z);

  /// @brief Method shuffle, addr 0x6443414, size 0x94, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 shuffle(::Unity::Mathematics::uint4 left, ::Unity::Mathematics::uint4 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                    ::Unity::Mathematics::math_ShuffleComponent y, ::Unity::Mathematics::math_ShuffleComponent z);

  /// @brief Method shuffle, addr 0x644145c, size 0x98, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 shuffle(::Unity::Mathematics::uint2 left, ::Unity::Mathematics::uint2 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                    ::Unity::Mathematics::math_ShuffleComponent y, ::Unity::Mathematics::math_ShuffleComponent z, ::Unity::Mathematics::math_ShuffleComponent w);

  /// @brief Method shuffle, addr 0x6442184, size 0xc8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 shuffle(::Unity::Mathematics::uint3 left, ::Unity::Mathematics::uint3 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                    ::Unity::Mathematics::math_ShuffleComponent y, ::Unity::Mathematics::math_ShuffleComponent z, ::Unity::Mathematics::math_ShuffleComponent w);

  /// @brief Method shuffle, addr 0x64434a8, size 0xc0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 shuffle(::Unity::Mathematics::uint4 left, ::Unity::Mathematics::uint4 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                    ::Unity::Mathematics::math_ShuffleComponent y, ::Unity::Mathematics::math_ShuffleComponent z, ::Unity::Mathematics::math_ShuffleComponent w);

  /// @brief Method shuffle, addr 0x64168bc, size 0x10, virtual false, abstract: false, final false
  static inline bool shuffle(::Unity::Mathematics::bool2 left, ::Unity::Mathematics::bool2 right, ::Unity::Mathematics::math_ShuffleComponent x);

  /// @brief Method shuffle, addr 0x64171e8, size 0x10, virtual false, abstract: false, final false
  static inline bool shuffle(::Unity::Mathematics::bool3 left, ::Unity::Mathematics::bool3 right, ::Unity::Mathematics::math_ShuffleComponent x);

  /// @brief Method shuffle, addr 0x6418024, size 0x10, virtual false, abstract: false, final false
  static inline bool shuffle(::Unity::Mathematics::bool4 left, ::Unity::Mathematics::bool4 right, ::Unity::Mathematics::math_ShuffleComponent x);

  /// @brief Method shuffle, addr 0x6418f60, size 0x8, virtual false, abstract: false, final false
  static inline double_t shuffle(::Unity::Mathematics::double2 left, ::Unity::Mathematics::double2 right, ::Unity::Mathematics::math_ShuffleComponent x);

  /// @brief Method shuffle, addr 0x6419d5c, size 0x8, virtual false, abstract: false, final false
  static inline double_t shuffle(::Unity::Mathematics::double3 left, ::Unity::Mathematics::double3 right, ::Unity::Mathematics::math_ShuffleComponent x);

  /// @brief Method shuffle, addr 0x641b1c4, size 0x8, virtual false, abstract: false, final false
  static inline double_t shuffle(::Unity::Mathematics::double4 left, ::Unity::Mathematics::double4 right, ::Unity::Mathematics::math_ShuffleComponent x);

  /// @brief Method shuffle, addr 0x641cc44, size 0x8, virtual false, abstract: false, final false
  static inline float_t shuffle(::Unity::Mathematics::float2 left, ::Unity::Mathematics::float2 right, ::Unity::Mathematics::math_ShuffleComponent x);

  /// @brief Method shuffle, addr 0x641d8bc, size 0x8, virtual false, abstract: false, final false
  static inline float_t shuffle(::Unity::Mathematics::float3 left, ::Unity::Mathematics::float3 right, ::Unity::Mathematics::math_ShuffleComponent x);

  /// @brief Method shuffle, addr 0x641ea74, size 0x8, virtual false, abstract: false, final false
  static inline float_t shuffle(::Unity::Mathematics::float4 left, ::Unity::Mathematics::float4 right, ::Unity::Mathematics::math_ShuffleComponent x);

  /// @brief Method shuffle, addr 0x6420d00, size 0x8, virtual false, abstract: false, final false
  static inline int32_t shuffle(::Unity::Mathematics::int2 left, ::Unity::Mathematics::int2 right, ::Unity::Mathematics::math_ShuffleComponent x);

  /// @brief Method shuffle, addr 0x6421a74, size 0x10, virtual false, abstract: false, final false
  static inline int32_t shuffle(::Unity::Mathematics::int3 left, ::Unity::Mathematics::int3 right, ::Unity::Mathematics::math_ShuffleComponent x);

  /// @brief Method shuffle, addr 0x6422e2c, size 0x8, virtual false, abstract: false, final false
  static inline int32_t shuffle(::Unity::Mathematics::int4 left, ::Unity::Mathematics::int4 right, ::Unity::Mathematics::math_ShuffleComponent x);

  /// @brief Method shuffle, addr 0x6441390, size 0x8, virtual false, abstract: false, final false
  static inline uint32_t shuffle(::Unity::Mathematics::uint2 left, ::Unity::Mathematics::uint2 right, ::Unity::Mathematics::math_ShuffleComponent x);

  /// @brief Method shuffle, addr 0x6442068, size 0x10, virtual false, abstract: false, final false
  static inline uint32_t shuffle(::Unity::Mathematics::uint3 left, ::Unity::Mathematics::uint3 right, ::Unity::Mathematics::math_ShuffleComponent x);

  /// @brief Method shuffle, addr 0x64433a4, size 0x8, virtual false, abstract: false, final false
  static inline uint32_t shuffle(::Unity::Mathematics::uint4 left, ::Unity::Mathematics::uint4 right, ::Unity::Mathematics::math_ShuffleComponent x);

  /// @brief Method sign, addr 0x642cf38, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 sign(::Unity::Mathematics::double2 x);

  /// @brief Method sign, addr 0x642cf7c, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 sign(::Unity::Mathematics::double3 x);

  /// @brief Method sign, addr 0x642cfe4, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 sign(::Unity::Mathematics::double4 x);

  /// @brief Method sign, addr 0x642ce7c, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 sign(::Unity::Mathematics::float2 x);

  /// @brief Method sign, addr 0x642cea0, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 sign(::Unity::Mathematics::float3 x);

  /// @brief Method sign, addr 0x642cedc, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 sign(::Unity::Mathematics::float4 x);

  /// @brief Method sign, addr 0x642cdc0, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 sign(::Unity::Mathematics::int2 x);

  /// @brief Method sign, addr 0x642cde4, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 sign(::Unity::Mathematics::int3 x);

  /// @brief Method sign, addr 0x642ce14, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 sign(::Unity::Mathematics::int4 x);

  /// @brief Method sign, addr 0x642cf10, size 0x28, virtual false, abstract: false, final false
  static inline double_t sign(double_t x);

  /// @brief Method sign, addr 0x642ce60, size 0x1c, virtual false, abstract: false, final false
  static inline float_t sign(float_t x);

  /// @brief Method sign, addr 0x642cdb0, size 0x10, virtual false, abstract: false, final false
  static inline int32_t sign(int32_t x);

  /// @brief Method sin, addr 0x64296b4, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 sin(::Unity::Mathematics::double2 x);

  /// @brief Method sin, addr 0x6429764, size 0x100, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 sin(::Unity::Mathematics::double3 x);

  /// @brief Method sin, addr 0x6429864, size 0x148, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 sin(::Unity::Mathematics::double4 x);

  /// @brief Method sin, addr 0x6429340, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 sin(::Unity::Mathematics::float2 x);

  /// @brief Method sin, addr 0x64293f8, size 0x108, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 sin(::Unity::Mathematics::float3 x);

  /// @brief Method sin, addr 0x6429500, size 0x154, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 sin(::Unity::Mathematics::float4 x);

  /// @brief Method sin, addr 0x6429654, size 0x60, virtual false, abstract: false, final false
  static inline double_t sin(double_t x);

  /// @brief Method sin, addr 0x64292d8, size 0x68, virtual false, abstract: false, final false
  static inline float_t sin(float_t x);

  /// @brief Method sincos, addr 0x6434170, size 0x148, virtual false, abstract: false, final false
  static inline void sincos(::Unity::Mathematics::double2 x, ::ByRef<::Unity::Mathematics::double2> s, ::ByRef<::Unity::Mathematics::double2> c);

  /// @brief Method sincos, addr 0x64342b8, size 0x1dc, virtual false, abstract: false, final false
  static inline void sincos(::Unity::Mathematics::double3 x, ::ByRef<::Unity::Mathematics::double3> s, ::ByRef<::Unity::Mathematics::double3> c);

  /// @brief Method sincos, addr 0x6434494, size 0x6c, virtual false, abstract: false, final false
  static inline void sincos(::Unity::Mathematics::double4 x, ::ByRef<::Unity::Mathematics::double4> s, ::ByRef<::Unity::Mathematics::double4> c);

  /// @brief Method sincos, addr 0x6433e8c, size 0x158, virtual false, abstract: false, final false
  static inline void sincos(::Unity::Mathematics::float2 x, ::ByRef<::Unity::Mathematics::float2> s, ::ByRef<::Unity::Mathematics::float2> c);

  /// @brief Method sincos, addr 0x6433fe4, size 0x64, virtual false, abstract: false, final false
  static inline void sincos(::Unity::Mathematics::float3 x, ::ByRef<::Unity::Mathematics::float3> s, ::ByRef<::Unity::Mathematics::float3> c);

  /// @brief Method sincos, addr 0x6434048, size 0x6c, virtual false, abstract: false, final false
  static inline void sincos(::Unity::Mathematics::float4 x, ::ByRef<::Unity::Mathematics::float4> s, ::ByRef<::Unity::Mathematics::float4> c);

  /// @brief Method sincos, addr 0x64340b4, size 0xbc, virtual false, abstract: false, final false
  static inline void sincos(double_t x, ::ByRef<double_t> s, ::ByRef<double_t> c);

  /// @brief Method sincos, addr 0x6433dc4, size 0xc8, virtual false, abstract: false, final false
  static inline void sincos(float_t x, ::ByRef<float_t> s, ::ByRef<float_t> c);

  /// @brief Method sinh, addr 0x6429d88, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 sinh(::Unity::Mathematics::double2 x);

  /// @brief Method sinh, addr 0x6429e38, size 0x100, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 sinh(::Unity::Mathematics::double3 x);

  /// @brief Method sinh, addr 0x6429f38, size 0x148, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 sinh(::Unity::Mathematics::double4 x);

  /// @brief Method sinh, addr 0x6429a14, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 sinh(::Unity::Mathematics::float2 x);

  /// @brief Method sinh, addr 0x6429acc, size 0x108, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 sinh(::Unity::Mathematics::float3 x);

  /// @brief Method sinh, addr 0x6429bd4, size 0x154, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 sinh(::Unity::Mathematics::float4 x);

  /// @brief Method sinh, addr 0x6429d28, size 0x60, virtual false, abstract: false, final false
  static inline double_t sinh(double_t x);

  /// @brief Method sinh, addr 0x64299ac, size 0x68, virtual false, abstract: false, final false
  static inline float_t sinh(float_t x);

  /// @brief Method slerp, addr 0x64401b4, size 0x374, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion slerp(::Unity::Mathematics::quaternion q1, ::Unity::Mathematics::quaternion q2, float_t t);

  /// @brief Method smoothstep, addr 0x64326f8, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 smoothstep(::Unity::Mathematics::double2 xMin, ::Unity::Mathematics::double2 xMax, ::Unity::Mathematics::double2 x);

  /// @brief Method smoothstep, addr 0x6432760, size 0xec, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 smoothstep(::Unity::Mathematics::double3 xMin, ::Unity::Mathematics::double3 xMax, ::Unity::Mathematics::double3 x);

  /// @brief Method smoothstep, addr 0x643284c, size 0x134, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 smoothstep(::Unity::Mathematics::double4 xMin, ::Unity::Mathematics::double4 xMax, ::Unity::Mathematics::double4 x);

  /// @brief Method smoothstep, addr 0x64324dc, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 smoothstep(::Unity::Mathematics::float2 xMin, ::Unity::Mathematics::float2 xMax, ::Unity::Mathematics::float2 x);

  /// @brief Method smoothstep, addr 0x6432544, size 0xc4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 smoothstep(::Unity::Mathematics::float3 xMin, ::Unity::Mathematics::float3 xMax, ::Unity::Mathematics::float3 x);

  /// @brief Method smoothstep, addr 0x6432608, size 0x98, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 smoothstep(::Unity::Mathematics::float4 xMin, ::Unity::Mathematics::float4 xMax, ::Unity::Mathematics::float4 x);

  /// @brief Method smoothstep, addr 0x64326a0, size 0x58, virtual false, abstract: false, final false
  static inline double_t smoothstep(double_t xMin, double_t xMax, double_t x);

  /// @brief Method smoothstep, addr 0x6432484, size 0x58, virtual false, abstract: false, final false
  static inline float_t smoothstep(float_t xMin, float_t xMax, float_t x);

  /// @brief Method sqrt, addr 0x6430ca4, size 0x9c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 sqrt(::Unity::Mathematics::double2 x);

  /// @brief Method sqrt, addr 0x6430d40, size 0xe0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 sqrt(::Unity::Mathematics::double3 x);

  /// @brief Method sqrt, addr 0x6430e20, size 0x11c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 sqrt(::Unity::Mathematics::double4 x);

  /// @brief Method sqrt, addr 0x64309ac, size 0x9c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 sqrt(::Unity::Mathematics::float2 x);

  /// @brief Method sqrt, addr 0x6430a48, size 0xe0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 sqrt(::Unity::Mathematics::float3 x);

  /// @brief Method sqrt, addr 0x6430b28, size 0x11c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 sqrt(::Unity::Mathematics::float4 x);

  /// @brief Method sqrt, addr 0x6430c44, size 0x60, virtual false, abstract: false, final false
  static inline double_t sqrt(double_t x);

  /// @brief Method sqrt, addr 0x643094c, size 0x60, virtual false, abstract: false, final false
  static inline float_t sqrt(float_t x);

  /// @brief Method square, addr 0x6436da0, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 square(::Unity::Mathematics::double2 x);

  /// @brief Method square, addr 0x6436dac, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 square(::Unity::Mathematics::double3 x);

  /// @brief Method square, addr 0x6436dbc, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 square(::Unity::Mathematics::double4 x);

  /// @brief Method square, addr 0x6436d68, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 square(::Unity::Mathematics::float2 x);

  /// @brief Method square, addr 0x6436d74, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 square(::Unity::Mathematics::float3 x);

  /// @brief Method square, addr 0x6436d84, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 square(::Unity::Mathematics::float4 x);

  /// @brief Method square, addr 0x6436dd8, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 square(::Unity::Mathematics::int2 x);

  /// @brief Method square, addr 0x6436df0, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 square(::Unity::Mathematics::int3 x);

  /// @brief Method square, addr 0x6436e0c, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 square(::Unity::Mathematics::int4 x);

  /// @brief Method square, addr 0x6436e40, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 square(::Unity::Mathematics::uint2 x);

  /// @brief Method square, addr 0x6436e58, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 square(::Unity::Mathematics::uint3 x);

  /// @brief Method square, addr 0x6436e74, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 square(::Unity::Mathematics::uint4 x);

  /// @brief Method square, addr 0x6436d98, size 0x8, virtual false, abstract: false, final false
  static inline double_t square(double_t x);

  /// @brief Method square, addr 0x6436d60, size 0x8, virtual false, abstract: false, final false
  static inline float_t square(float_t x);

  /// @brief Method square, addr 0x6436dd0, size 0x8, virtual false, abstract: false, final false
  static inline int32_t square(int32_t x);

  /// @brief Method square, addr 0x6436e38, size 0x8, virtual false, abstract: false, final false
  static inline uint32_t square(uint32_t x);

  /// @brief Method step, addr 0x6432fb8, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 step(::Unity::Mathematics::double2 threshold, ::Unity::Mathematics::double2 x);

  /// @brief Method step, addr 0x6432fd4, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 step(::Unity::Mathematics::double3 threshold, ::Unity::Mathematics::double3 x);

  /// @brief Method step, addr 0x6432ff8, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 step(::Unity::Mathematics::double4 threshold, ::Unity::Mathematics::double4 x);

  /// @brief Method step, addr 0x6432f38, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 step(::Unity::Mathematics::float2 threshold, ::Unity::Mathematics::float2 x);

  /// @brief Method step, addr 0x6432f54, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 step(::Unity::Mathematics::float3 threshold, ::Unity::Mathematics::float3 x);

  /// @brief Method step, addr 0x6432f78, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 step(::Unity::Mathematics::float4 threshold, ::Unity::Mathematics::float4 x);

  /// @brief Method step, addr 0x6432fa4, size 0x14, virtual false, abstract: false, final false
  static inline double_t step(double_t threshold, double_t x);

  /// @brief Method step, addr 0x6432f24, size 0x14, virtual false, abstract: false, final false
  static inline float_t step(float_t threshold, float_t x);

  /// @brief Method tan, addr 0x6426608, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 tan(::Unity::Mathematics::double2 x);

  /// @brief Method tan, addr 0x64266b8, size 0x100, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 tan(::Unity::Mathematics::double3 x);

  /// @brief Method tan, addr 0x64267b8, size 0x148, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 tan(::Unity::Mathematics::double4 x);

  /// @brief Method tan, addr 0x6426294, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 tan(::Unity::Mathematics::float2 x);

  /// @brief Method tan, addr 0x642634c, size 0x108, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 tan(::Unity::Mathematics::float3 x);

  /// @brief Method tan, addr 0x6426454, size 0x154, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 tan(::Unity::Mathematics::float4 x);

  /// @brief Method tan, addr 0x64265a8, size 0x60, virtual false, abstract: false, final false
  static inline double_t tan(double_t x);

  /// @brief Method tan, addr 0x642622c, size 0x68, virtual false, abstract: false, final false
  static inline float_t tan(float_t x);

  /// @brief Method tanh, addr 0x6426cdc, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 tanh(::Unity::Mathematics::double2 x);

  /// @brief Method tanh, addr 0x6426d8c, size 0x100, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 tanh(::Unity::Mathematics::double3 x);

  /// @brief Method tanh, addr 0x6426e8c, size 0x148, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 tanh(::Unity::Mathematics::double4 x);

  /// @brief Method tanh, addr 0x6426968, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 tanh(::Unity::Mathematics::float2 x);

  /// @brief Method tanh, addr 0x6426a20, size 0x108, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 tanh(::Unity::Mathematics::float3 x);

  /// @brief Method tanh, addr 0x6426b28, size 0x154, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 tanh(::Unity::Mathematics::float4 x);

  /// @brief Method tanh, addr 0x6426c7c, size 0x60, virtual false, abstract: false, final false
  static inline double_t tanh(double_t x);

  /// @brief Method tanh, addr 0x6426900, size 0x68, virtual false, abstract: false, final false
  static inline float_t tanh(float_t x);

  /// @brief Method transform, addr 0x641c1d0, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 transform(::Unity::Mathematics::double4x4 a, ::Unity::Mathematics::double3 b);

  /// @brief Method transform, addr 0x641642c, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 transform(::Unity::Mathematics::AffineTransform a, ::Unity::Mathematics::float3 pos);

  /// @brief Method transform, addr 0x6441058, size 0xa0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 transform(::Unity::Mathematics::RigidTransform a, ::Unity::Mathematics::float3 pos);

  /// @brief Method transform, addr 0x641f884, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 transform(::Unity::Mathematics::float4x4 a, ::Unity::Mathematics::float3 b);

  /// @brief Method transpose, addr 0x6416b98, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 transpose(::Unity::Mathematics::bool2x2 v);

  /// @brief Method transpose, addr 0x6417518, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 transpose(::Unity::Mathematics::bool3x2 v);

  /// @brief Method transpose, addr 0x6418380, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 transpose(::Unity::Mathematics::bool4x2 v);

  /// @brief Method transpose, addr 0x6416d08, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 transpose(::Unity::Mathematics::bool2x3 v);

  /// @brief Method transpose, addr 0x6417790, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 transpose(::Unity::Mathematics::bool3x3 v);

  /// @brief Method transpose, addr 0x641863c, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 transpose(::Unity::Mathematics::bool4x3 v);

  /// @brief Method transpose, addr 0x6416efc, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 transpose(::Unity::Mathematics::bool2x4 v);

  /// @brief Method transpose, addr 0x6417b14, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 transpose(::Unity::Mathematics::bool3x4 v);

  /// @brief Method transpose, addr 0x64189e8, size 0xc4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x4 transpose(::Unity::Mathematics::bool4x4 v);

  /// @brief Method transpose, addr 0x6419300, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 transpose(::Unity::Mathematics::double2x2 v);

  /// @brief Method transpose, addr 0x641a1dc, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 transpose(::Unity::Mathematics::double3x2 v);

  /// @brief Method transpose, addr 0x641b720, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 transpose(::Unity::Mathematics::double4x2 v);

  /// @brief Method transpose, addr 0x64195a0, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x2 transpose(::Unity::Mathematics::double2x3 v);

  /// @brief Method transpose, addr 0x641a554, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 transpose(::Unity::Mathematics::double3x3 v);

  /// @brief Method transpose, addr 0x641bb7c, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 transpose(::Unity::Mathematics::double4x3 v);

  /// @brief Method transpose, addr 0x64198b8, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 transpose(::Unity::Mathematics::double2x4 v);

  /// @brief Method transpose, addr 0x641ab1c, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 transpose(::Unity::Mathematics::double3x4 v);

  /// @brief Method transpose, addr 0x641c23c, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x4 transpose(::Unity::Mathematics::double4x4 v);

  /// @brief Method transpose, addr 0x641cfe4, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 transpose(::Unity::Mathematics::float2x2 v);

  /// @brief Method transpose, addr 0x641dd3c, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 transpose(::Unity::Mathematics::float3x2 v);

  /// @brief Method transpose, addr 0x641efa0, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x4 transpose(::Unity::Mathematics::float4x2 v);

  /// @brief Method transpose, addr 0x641d244, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x2 transpose(::Unity::Mathematics::float2x3 v);

  /// @brief Method transpose, addr 0x641e044, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 transpose(::Unity::Mathematics::float3x3 v);

  /// @brief Method transpose, addr 0x641f350, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 transpose(::Unity::Mathematics::float4x3 v);

  /// @brief Method transpose, addr 0x641d4e4, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x2 transpose(::Unity::Mathematics::float2x4 v);

  /// @brief Method transpose, addr 0x641e540, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x3 transpose(::Unity::Mathematics::float3x4 v);

  /// @brief Method transpose, addr 0x641f8dc, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 transpose(::Unity::Mathematics::float4x4 v);

  /// @brief Method transpose, addr 0x6421098, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x2 transpose(::Unity::Mathematics::int2x2 v);

  /// @brief Method transpose, addr 0x6421f84, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x3 transpose(::Unity::Mathematics::int3x2 v);

  /// @brief Method transpose, addr 0x642336c, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x4 transpose(::Unity::Mathematics::int4x2 v);

  /// @brief Method transpose, addr 0x64213a8, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 transpose(::Unity::Mathematics::int2x3 v);

  /// @brief Method transpose, addr 0x64223d4, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x3 transpose(::Unity::Mathematics::int3x3 v);

  /// @brief Method transpose, addr 0x6423830, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 transpose(::Unity::Mathematics::int4x3 v);

  /// @brief Method transpose, addr 0x642175c, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 transpose(::Unity::Mathematics::int2x4 v);

  /// @brief Method transpose, addr 0x64229c0, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 transpose(::Unity::Mathematics::int3x4 v);

  /// @brief Method transpose, addr 0x6423e60, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 transpose(::Unity::Mathematics::int4x4 v);

  /// @brief Method transpose, addr 0x64416f8, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 transpose(::Unity::Mathematics::uint2x2 v);

  /// @brief Method transpose, addr 0x6442568, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x3 transpose(::Unity::Mathematics::uint3x2 v);

  /// @brief Method transpose, addr 0x64438d8, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x4 transpose(::Unity::Mathematics::uint4x2 v);

  /// @brief Method transpose, addr 0x64419cc, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 transpose(::Unity::Mathematics::uint2x3 v);

  /// @brief Method transpose, addr 0x64429b8, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x3 transpose(::Unity::Mathematics::uint3x3 v);

  /// @brief Method transpose, addr 0x6443da0, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 transpose(::Unity::Mathematics::uint4x3 v);

  /// @brief Method transpose, addr 0x6441d70, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x2 transpose(::Unity::Mathematics::uint2x4 v);

  /// @brief Method transpose, addr 0x6442f68, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 transpose(::Unity::Mathematics::uint3x4 v);

  /// @brief Method transpose, addr 0x64443e4, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x4 transpose(::Unity::Mathematics::uint4x4 v);

  /// @brief Method trunc, addr 0x642c594, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 trunc(::Unity::Mathematics::double2 x);

  /// @brief Method trunc, addr 0x642c64c, size 0x10c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 trunc(::Unity::Mathematics::double3 x);

  /// @brief Method trunc, addr 0x642c758, size 0x158, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 trunc(::Unity::Mathematics::double4 x);

  /// @brief Method trunc, addr 0x642c1f8, size 0xc0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 trunc(::Unity::Mathematics::float2 x);

  /// @brief Method trunc, addr 0x642c2b8, size 0x114, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 trunc(::Unity::Mathematics::float3 x);

  /// @brief Method trunc, addr 0x642c3cc, size 0x164, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 trunc(::Unity::Mathematics::float4 x);

  /// @brief Method trunc, addr 0x642c530, size 0x64, virtual false, abstract: false, final false
  static inline double_t trunc(double_t x);

  /// @brief Method trunc, addr 0x642c18c, size 0x6c, virtual false, abstract: false, final false
  static inline float_t trunc(float_t x);

  /// @brief Method tzcnt, addr 0x6434ef4, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 tzcnt(::Unity::Mathematics::int2 x);

  /// @brief Method tzcnt, addr 0x6435178, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 tzcnt(::Unity::Mathematics::uint2 x);

  /// @brief Method tzcnt, addr 0x6434f7c, size 0xc0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 tzcnt(::Unity::Mathematics::int3 x);

  /// @brief Method tzcnt, addr 0x6435200, size 0xc0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 tzcnt(::Unity::Mathematics::uint3 x);

  /// @brief Method tzcnt, addr 0x643503c, size 0x100, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 tzcnt(::Unity::Mathematics::int4 x);

  /// @brief Method tzcnt, addr 0x64352c0, size 0x100, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 tzcnt(::Unity::Mathematics::uint4 x);

  /// @brief Method tzcnt, addr 0x6434eb8, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t tzcnt(int32_t x);

  /// @brief Method tzcnt, addr 0x64353c0, size 0x54, virtual false, abstract: false, final false
  static inline int32_t tzcnt(int64_t x);

  /// @brief Method tzcnt, addr 0x643513c, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t tzcnt(uint32_t x);

  /// @brief Method tzcnt, addr 0x6435414, size 0x54, virtual false, abstract: false, final false
  static inline int32_t tzcnt(uint64_t x);

  /// @brief Method uint2, addr 0x6441288, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 uint2(::Unity::Mathematics::bool2 v);

  /// @brief Method uint2, addr 0x6441300, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 uint2(::Unity::Mathematics::double2 v);

  /// @brief Method uint2, addr 0x64412c0, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 uint2(::Unity::Mathematics::float2 v);

  /// @brief Method uint2, addr 0x64412a4, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 uint2(::Unity::Mathematics::int2 v);

  /// @brief Method uint2, addr 0x6441270, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 uint2(bool v);

  /// @brief Method uint2, addr 0x64412e8, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 uint2(double_t v);

  /// @brief Method uint2, addr 0x64412a8, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 uint2(float_t v);

  /// @brief Method uint2, addr 0x6441298, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 uint2(int32_t v);

  /// @brief Method uint2, addr 0x6441264, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 uint2(uint32_t v);

  /// @brief Method uint2, addr 0x6441254, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 uint2(uint32_t x, uint32_t y);

  /// @brief Method uint2, addr 0x6441260, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 uint2(::Unity::Mathematics::uint2 xy);

  /// @brief Method uint2x2, addr 0x64415c4, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 uint2x2(::Unity::Mathematics::uint2 c0, ::Unity::Mathematics::uint2 c1);

  /// @brief Method uint2x2, addr 0x64415c8, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 uint2x2(uint32_t m00, uint32_t m01, uint32_t m10, uint32_t m11);

  /// @brief Method uint2x2, addr 0x6441600, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 uint2x2(::Unity::Mathematics::bool2x2 v);

  /// @brief Method uint2x2, addr 0x64416ac, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 uint2x2(::Unity::Mathematics::double2x2 v);

  /// @brief Method uint2x2, addr 0x6441650, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 uint2x2(::Unity::Mathematics::float2x2 v);

  /// @brief Method uint2x2, addr 0x6441630, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 uint2x2(::Unity::Mathematics::int2x2 v);

  /// @brief Method uint2x2, addr 0x64415ec, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 uint2x2(bool v);

  /// @brief Method uint2x2, addr 0x6441690, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 uint2x2(double_t v);

  /// @brief Method uint2x2, addr 0x6441634, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 uint2x2(float_t v);

  /// @brief Method uint2x2, addr 0x6441620, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 uint2x2(int32_t v);

  /// @brief Method uint2x2, addr 0x64415dc, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 uint2x2(uint32_t v);

  /// @brief Method uint2x3, addr 0x64417b4, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x3 uint2x3(::Unity::Mathematics::uint2 c0, ::Unity::Mathematics::uint2 c1, ::Unity::Mathematics::uint2 c2);

  /// @brief Method uint2x3, addr 0x64417c0, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x3 uint2x3(uint32_t m00, uint32_t m01, uint32_t m02, uint32_t m10, uint32_t m11, uint32_t m12);

  /// @brief Method uint2x3, addr 0x6441810, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x3 uint2x3(::Unity::Mathematics::bool2x3 v);

  /// @brief Method uint2x3, addr 0x6441948, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x3 uint2x3(::Unity::Mathematics::double2x3 v);

  /// @brief Method uint2x3, addr 0x64418a4, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x3 uint2x3(::Unity::Mathematics::float2x3 v);

  /// @brief Method uint2x3, addr 0x6441870, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x3 uint2x3(::Unity::Mathematics::int2x3 v);

  /// @brief Method uint2x3, addr 0x64417f8, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x3 uint2x3(bool v);

  /// @brief Method uint2x3, addr 0x6441928, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x3 uint2x3(double_t v);

  /// @brief Method uint2x3, addr 0x6441884, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x3 uint2x3(float_t v);

  /// @brief Method uint2x3, addr 0x644185c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x3 uint2x3(int32_t v);

  /// @brief Method uint2x3, addr 0x64417e4, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x3 uint2x3(uint32_t v);

  /// @brief Method uint2x4, addr 0x6441ae0, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x4 uint2x4(::Unity::Mathematics::uint2 c0, ::Unity::Mathematics::uint2 c1, ::Unity::Mathematics::uint2 c2, ::Unity::Mathematics::uint2 c3);

  /// @brief Method uint2x4, addr 0x6441aec, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x4 uint2x4(uint32_t m00, uint32_t m01, uint32_t m02, uint32_t m03, uint32_t m10, uint32_t m11, uint32_t m12, uint32_t m13);

  /// @brief Method uint2x4, addr 0x6441b44, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x4 uint2x4(::Unity::Mathematics::bool2x4 v);

  /// @brief Method uint2x4, addr 0x6441cc4, size 0xac, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x4 uint2x4(::Unity::Mathematics::double2x4 v);

  /// @brief Method uint2x4, addr 0x6441bf8, size 0xac, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x4 uint2x4(::Unity::Mathematics::float2x4 v);

  /// @brief Method uint2x4, addr 0x6441bcc, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x4 uint2x4(::Unity::Mathematics::int2x4 v);

  /// @brief Method uint2x4, addr 0x6441b2c, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x4 uint2x4(bool v);

  /// @brief Method uint2x4, addr 0x6441ca4, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x4 uint2x4(double_t v);

  /// @brief Method uint2x4, addr 0x6441bd8, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x4 uint2x4(float_t v);

  /// @brief Method uint2x4, addr 0x6441bb8, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x4 uint2x4(int32_t v);

  /// @brief Method uint2x4, addr 0x6441b18, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x4 uint2x4(uint32_t v);

  /// @brief Method uint3, addr 0x6441f18, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 uint3(::Unity::Mathematics::bool3 v);

  /// @brief Method uint3, addr 0x6441fac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 uint3(::Unity::Mathematics::double3 v);

  /// @brief Method uint3, addr 0x6441f5c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 uint3(::Unity::Mathematics::float3 v);

  /// @brief Method uint3, addr 0x6441f3c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 uint3(::Unity::Mathematics::int3 v);

  /// @brief Method uint3, addr 0x6441efc, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 uint3(bool v);

  /// @brief Method uint3, addr 0x6441f94, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 uint3(double_t v);

  /// @brief Method uint3, addr 0x6441f44, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 uint3(float_t v);

  /// @brief Method uint3, addr 0x6441f30, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 uint3(int32_t v);

  /// @brief Method uint3, addr 0x6441ef0, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 uint3(uint32_t v);

  /// @brief Method uint3, addr 0x6441ebc, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 uint3(uint32_t x, uint32_t y, uint32_t z);

  /// @brief Method uint3, addr 0x6441ecc, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 uint3(uint32_t x, ::Unity::Mathematics::uint2 yz);

  /// @brief Method uint3, addr 0x6441ee0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 uint3(::Unity::Mathematics::uint2 xy, uint32_t z);

  /// @brief Method uint3, addr 0x6441ee8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 uint3(::Unity::Mathematics::uint3 xyz);

  /// @brief Method uint3x2, addr 0x6442338, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 uint3x2(::Unity::Mathematics::uint3 c0, ::Unity::Mathematics::uint3 c1);

  /// @brief Method uint3x2, addr 0x644234c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 uint3x2(uint32_t m00, uint32_t m01, uint32_t m10, uint32_t m11, uint32_t m20, uint32_t m21);

  /// @brief Method uint3x2, addr 0x6442398, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 uint3x2(::Unity::Mathematics::bool3x2 v);

  /// @brief Method uint3x2, addr 0x64424e0, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 uint3x2(::Unity::Mathematics::double3x2 v);

  /// @brief Method uint3x2, addr 0x6442430, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 uint3x2(::Unity::Mathematics::float3x2 v);

  /// @brief Method uint3x2, addr 0x64423e4, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 uint3x2(::Unity::Mathematics::int3x2 v);

  /// @brief Method uint3x2, addr 0x6442378, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 uint3x2(bool v);

  /// @brief Method uint3x2, addr 0x64424b8, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 uint3x2(double_t v);

  /// @brief Method uint3x2, addr 0x6442408, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 uint3x2(float_t v);

  /// @brief Method uint3x2, addr 0x64423c8, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 uint3x2(int32_t v);

  /// @brief Method uint3x2, addr 0x644235c, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 uint3x2(uint32_t v);

  /// @brief Method uint3x3, addr 0x6442690, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x3 uint3x3(::Unity::Mathematics::uint3 c0, ::Unity::Mathematics::uint3 c1, ::Unity::Mathematics::uint3 c2);

  /// @brief Method uint3x3, addr 0x64426ac, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x3 uint3x3(uint32_t m00, uint32_t m01, uint32_t m02, uint32_t m10, uint32_t m11, uint32_t m12, uint32_t m20, uint32_t m21, uint32_t m22);

  /// @brief Method uint3x3, addr 0x6442714, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x3 uint3x3(::Unity::Mathematics::bool3x3 v);

  /// @brief Method uint3x3, addr 0x64428ec, size 0xcc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x3 uint3x3(::Unity::Mathematics::double3x3 v);

  /// @brief Method uint3x3, addr 0x64427f0, size 0xcc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x3 uint3x3(::Unity::Mathematics::float3x3 v);

  /// @brief Method uint3x3, addr 0x644278c, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x3 uint3x3(::Unity::Mathematics::int3x3 v);

  /// @brief Method uint3x3, addr 0x64426ec, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x3 uint3x3(bool v);

  /// @brief Method uint3x3, addr 0x64428bc, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x3 uint3x3(double_t v);

  /// @brief Method uint3x3, addr 0x64427c0, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x3 uint3x3(float_t v);

  /// @brief Method uint3x3, addr 0x6442768, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x3 uint3x3(int32_t v);

  /// @brief Method uint3x3, addr 0x64426c8, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x3 uint3x3(uint32_t v);

  /// @brief Method uint3x4, addr 0x6442b48, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 uint3x4(::Unity::Mathematics::uint3 c0, ::Unity::Mathematics::uint3 c1, ::Unity::Mathematics::uint3 c2, ::Unity::Mathematics::uint3 c3);

  /// @brief Method uint3x4, addr 0x6442b6c, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 uint3x4(uint32_t m00, uint32_t m01, uint32_t m02, uint32_t m03, uint32_t m10, uint32_t m11, uint32_t m12, uint32_t m13, uint32_t m20, uint32_t m21,
                                                      uint32_t m22, uint32_t m23);

  /// @brief Method uint3x4, addr 0x6442bfc, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 uint3x4(::Unity::Mathematics::bool3x4 v);

  /// @brief Method uint3x4, addr 0x6442e5c, size 0x10c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 uint3x4(::Unity::Mathematics::double3x4 v);

  /// @brief Method uint3x4, addr 0x6442d18, size 0x10c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 uint3x4(::Unity::Mathematics::float3x4 v);

  /// @brief Method uint3x4, addr 0x6442c9c, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 uint3x4(::Unity::Mathematics::int3x4 v);

  /// @brief Method uint3x4, addr 0x6442bcc, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 uint3x4(bool v);

  /// @brief Method uint3x4, addr 0x6442e24, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 uint3x4(double_t v);

  /// @brief Method uint3x4, addr 0x6442ce0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 uint3x4(float_t v);

  /// @brief Method uint3x4, addr 0x6442c70, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 uint3x4(int32_t v);

  /// @brief Method uint3x4, addr 0x6442ba0, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 uint3x4(uint32_t v);

  /// @brief Method uint4, addr 0x64431f8, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 uint4(::Unity::Mathematics::bool4 v);

  /// @brief Method uint4, addr 0x64432a4, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 uint4(::Unity::Mathematics::double4 v);

  /// @brief Method uint4, addr 0x6443248, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 uint4(::Unity::Mathematics::float4 v);

  /// @brief Method uint4, addr 0x6443228, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 uint4(::Unity::Mathematics::int4 v);

  /// @brief Method uint4, addr 0x64431e0, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 uint4(bool v);

  /// @brief Method uint4, addr 0x6443288, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 uint4(double_t v);

  /// @brief Method uint4, addr 0x644322c, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 uint4(float_t v);

  /// @brief Method uint4, addr 0x6443218, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 uint4(int32_t v);

  /// @brief Method uint4, addr 0x64431d0, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 uint4(uint32_t v);

  /// @brief Method uint4, addr 0x6443164, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 uint4(uint32_t x, uint32_t y, uint32_t z, uint32_t w);

  /// @brief Method uint4, addr 0x644317c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 uint4(uint32_t x, uint32_t y, ::Unity::Mathematics::uint2 zw);

  /// @brief Method uint4, addr 0x644318c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 uint4(uint32_t x, ::Unity::Mathematics::uint2 yz, uint32_t w);

  /// @brief Method uint4, addr 0x64431a0, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 uint4(uint32_t x, ::Unity::Mathematics::uint3 yzw);

  /// @brief Method uint4, addr 0x64431b4, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 uint4(::Unity::Mathematics::uint2 xy, uint32_t z, uint32_t w);

  /// @brief Method uint4, addr 0x64431c0, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 uint4(::Unity::Mathematics::uint2 xy, ::Unity::Mathematics::uint2 zw);

  /// @brief Method uint4, addr 0x64431c4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 uint4(::Unity::Mathematics::uint3 xyz, uint32_t w);

  /// @brief Method uint4, addr 0x64431cc, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 uint4(::Unity::Mathematics::uint4 xyzw);

  /// @brief Method uint4x2, addr 0x6443678, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x2 uint4x2(::Unity::Mathematics::uint4 c0, ::Unity::Mathematics::uint4 c1);

  /// @brief Method uint4x2, addr 0x6443684, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x2 uint4x2(uint32_t m00, uint32_t m01, uint32_t m10, uint32_t m11, uint32_t m20, uint32_t m21, uint32_t m30, uint32_t m31);

  /// @brief Method uint4x2, addr 0x64436c4, size 0x5c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x2 uint4x2(::Unity::Mathematics::bool4x2 v);

  /// @brief Method uint4x2, addr 0x644382c, size 0xac, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x2 uint4x2(::Unity::Mathematics::double4x2 v);

  /// @brief Method uint4x2, addr 0x6443760, size 0xac, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x2 uint4x2(::Unity::Mathematics::float4x2 v);

  /// @brief Method uint4x2, addr 0x6443734, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x2 uint4x2(::Unity::Mathematics::int4x2 v);

  /// @brief Method uint4x2, addr 0x64436ac, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x2 uint4x2(bool v);

  /// @brief Method uint4x2, addr 0x644380c, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x2 uint4x2(double_t v);

  /// @brief Method uint4x2, addr 0x6443740, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x2 uint4x2(float_t v);

  /// @brief Method uint4x2, addr 0x6443720, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x2 uint4x2(int32_t v);

  /// @brief Method uint4x2, addr 0x6443698, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x2 uint4x2(uint32_t v);

  /// @brief Method uint4x3, addr 0x6443a3c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 uint4x3(::Unity::Mathematics::uint4 c0, ::Unity::Mathematics::uint4 c1, ::Unity::Mathematics::uint4 c2);

  /// @brief Method uint4x3, addr 0x6443a4c, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 uint4x3(uint32_t m00, uint32_t m01, uint32_t m02, uint32_t m10, uint32_t m11, uint32_t m12, uint32_t m20, uint32_t m21, uint32_t m22, uint32_t m30,
                                                      uint32_t m31, uint32_t m32);

  /// @brief Method uint4x3, addr 0x6443ab4, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 uint4x3(::Unity::Mathematics::bool4x3 v);

  /// @brief Method uint4x3, addr 0x6443ca0, size 0x100, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 uint4x3(::Unity::Mathematics::double4x3 v);

  /// @brief Method uint4x3, addr 0x6443b7c, size 0x100, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 uint4x3(::Unity::Mathematics::float4x3 v);

  /// @brief Method uint4x3, addr 0x6443b44, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 uint4x3(::Unity::Mathematics::int4x3 v);

  /// @brief Method uint4x3, addr 0x6443a98, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 uint4x3(bool v);

  /// @brief Method uint4x3, addr 0x6443c7c, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 uint4x3(double_t v);

  /// @brief Method uint4x3, addr 0x6443b58, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 uint4x3(float_t v);

  /// @brief Method uint4x3, addr 0x6443b2c, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 uint4x3(int32_t v);

  /// @brief Method uint4x3, addr 0x6443a80, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 uint4x3(uint32_t v);

  /// @brief Method uint4x4, addr 0x6443f84, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x4 uint4x4(::Unity::Mathematics::uint4 c0, ::Unity::Mathematics::uint4 c1, ::Unity::Mathematics::uint4 c2, ::Unity::Mathematics::uint4 c3);

  /// @brief Method uint4x4, addr 0x6443f98, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x4 uint4x4(uint32_t m00, uint32_t m01, uint32_t m02, uint32_t m03, uint32_t m10, uint32_t m11, uint32_t m12, uint32_t m13, uint32_t m20, uint32_t m21,
                                                      uint32_t m22, uint32_t m23, uint32_t m30, uint32_t m31, uint32_t m32, uint32_t m33);

  /// @brief Method uint4x4, addr 0x6444028, size 0x94, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x4 uint4x4(::Unity::Mathematics::bool4x4 v);

  /// @brief Method uint4x4, addr 0x6444290, size 0x154, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x4 uint4x4(::Unity::Mathematics::double4x4 v);

  /// @brief Method uint4x4, addr 0x6444114, size 0x154, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x4 uint4x4(::Unity::Mathematics::float4x4 v);

  /// @brief Method uint4x4, addr 0x64440d8, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x4 uint4x4(::Unity::Mathematics::int4x4 v);

  /// @brief Method uint4x4, addr 0x6444008, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x4 uint4x4(bool v);

  /// @brief Method uint4x4, addr 0x6444268, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x4 uint4x4(double_t v);

  /// @brief Method uint4x4, addr 0x64440ec, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x4 uint4x4(float_t v);

  /// @brief Method uint4x4, addr 0x64440bc, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x4 uint4x4(int32_t v);

  /// @brief Method uint4x4, addr 0x6443fec, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x4 uint4x4(uint32_t v);

  /// @brief Method unitexp, addr 0x643f918, size 0x13c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion unitexp(::Unity::Mathematics::quaternion q);

  /// @brief Method unitlog, addr 0x643fbf4, size 0x114, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion unitlog(::Unity::Mathematics::quaternion q);

  /// @brief Method unlerp, addr 0x64252c4, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 unlerp(::Unity::Mathematics::double2 start, ::Unity::Mathematics::double2 end, ::Unity::Mathematics::double2 x);

  /// @brief Method unlerp, addr 0x64252e0, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 unlerp(::Unity::Mathematics::double3 start, ::Unity::Mathematics::double3 end, ::Unity::Mathematics::double3 x);

  /// @brief Method unlerp, addr 0x6425314, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 unlerp(::Unity::Mathematics::double4 start, ::Unity::Mathematics::double4 end, ::Unity::Mathematics::double4 x);

  /// @brief Method unlerp, addr 0x6425220, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 unlerp(::Unity::Mathematics::float2 start, ::Unity::Mathematics::float2 end, ::Unity::Mathematics::float2 x);

  /// @brief Method unlerp, addr 0x642523c, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 unlerp(::Unity::Mathematics::float3 start, ::Unity::Mathematics::float3 end, ::Unity::Mathematics::float3 x);

  /// @brief Method unlerp, addr 0x6425270, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 unlerp(::Unity::Mathematics::float4 start, ::Unity::Mathematics::float4 end, ::Unity::Mathematics::float4 x);

  /// @brief Method unlerp, addr 0x64252b4, size 0x10, virtual false, abstract: false, final false
  static inline double_t unlerp(double_t start, double_t end, double_t x);

  /// @brief Method unlerp, addr 0x6425210, size 0x10, virtual false, abstract: false, final false
  static inline float_t unlerp(float_t start, float_t end, float_t x);

  /// @brief Method unpackhi, addr 0x6438ed4, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 unpackhi(::Unity::Mathematics::double4 a, ::Unity::Mathematics::double4 b);

  /// @brief Method unpackhi, addr 0x6438ec0, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 unpackhi(::Unity::Mathematics::float4 a, ::Unity::Mathematics::float4 b);

  /// @brief Method unpacklo, addr 0x6438eb0, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 unpacklo(::Unity::Mathematics::double4 a, ::Unity::Mathematics::double4 b);

  /// @brief Method unpacklo, addr 0x6438ea0, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 unpacklo(::Unity::Mathematics::float4 a, ::Unity::Mathematics::float4 b);

  /// @brief Method up, addr 0x6437b50, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 up();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr math();

public:
  // Ctor Parameters [CppParam { name: "", ty: "math", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  math(math&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "math", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  math(math const&) = delete;

  /// @brief Field DBL_MIN_NORMAL offset 0xffffffff size 0x8
  static constexpr double_t DBL_MIN_NORMAL{ static_cast<double_t>(0.0) };

  /// @brief Field E offset 0xffffffff size 0x4
  static constexpr float_t E{ static_cast<float_t>(2.7182817f) };

  /// @brief Field EPSILON offset 0xffffffff size 0x4
  static constexpr float_t EPSILON{ static_cast<float_t>(1.1920929e-7f) };

  /// @brief Field EPSILON_DBL offset 0xffffffff size 0x8
  static constexpr double_t EPSILON_DBL{ static_cast<double_t>(0.0) };

  /// @brief Field E_DBL offset 0xffffffff size 0x8
  static constexpr double_t E_DBL{ static_cast<double_t>(2.7) };

  /// @brief Field FLT_MIN_NORMAL offset 0xffffffff size 0x4
  static constexpr float_t FLT_MIN_NORMAL{ static_cast<float_t>(1.1754944e-38f) };

  /// @brief Field INFINITY_DBL offset 0xffffffff size 0x8
  static constexpr double_t INFINITY_DBL{ INFINITY };

  /// @brief Field LN10 offset 0xffffffff size 0x4
  static constexpr float_t LN10{ static_cast<float_t>(2.3025851f) };

  /// @brief Field LN10_DBL offset 0xffffffff size 0x8
  static constexpr double_t LN10_DBL{ static_cast<double_t>(2.3) };

  /// @brief Field LN2 offset 0xffffffff size 0x4
  static constexpr float_t LN2{ static_cast<float_t>(0.6931472f) };

  /// @brief Field LN2_DBL offset 0xffffffff size 0x8
  static constexpr double_t LN2_DBL{ static_cast<double_t>(0.7) };

  /// @brief Field LOG10E offset 0xffffffff size 0x4
  static constexpr float_t LOG10E{ static_cast<float_t>(0.4342945f) };

  /// @brief Field LOG10E_DBL offset 0xffffffff size 0x8
  static constexpr double_t LOG10E_DBL{ static_cast<double_t>(0.4) };

  /// @brief Field LOG2E offset 0xffffffff size 0x4
  static constexpr float_t LOG2E{ static_cast<float_t>(1.442695f) };

  /// @brief Field LOG2E_DBL offset 0xffffffff size 0x8
  static constexpr double_t LOG2E_DBL{ static_cast<double_t>(1.4) };

  /// @brief Field NAN_DBL offset 0xffffffff size 0x8
  static constexpr double_t NAN_DBL{ NAN };

  /// @brief Field PI offset 0xffffffff size 0x4
  static constexpr float_t PI{ static_cast<float_t>(3.1415927f) };

  /// @brief Field PI2 offset 0xffffffff size 0x4
  static constexpr float_t PI2{ static_cast<float_t>(6.2831855f) };

  /// @brief Field PI2_DBL offset 0xffffffff size 0x8
  static constexpr double_t PI2_DBL{ static_cast<double_t>(6.3) };

  /// @brief Field PIHALF offset 0xffffffff size 0x4
  static constexpr float_t PIHALF{ static_cast<float_t>(1.5707964f) };

  /// @brief Field PIHALF_DBL offset 0xffffffff size 0x8
  static constexpr double_t PIHALF_DBL{ static_cast<double_t>(1.6) };

  /// @brief Field PI_DBL offset 0xffffffff size 0x8
  static constexpr double_t PI_DBL{ static_cast<double_t>(3.1) };

  /// @brief Field SQRT2 offset 0xffffffff size 0x4
  static constexpr float_t SQRT2{ static_cast<float_t>(1.4142135f) };

  /// @brief Field SQRT2_DBL offset 0xffffffff size 0x8
  static constexpr double_t SQRT2_DBL{ static_cast<double_t>(1.4) };

  /// @brief Field TAU offset 0xffffffff size 0x4
  static constexpr float_t TAU{ static_cast<float_t>(6.2831855f) };

  /// @brief Field TAU_DBL offset 0xffffffff size 0x8
  static constexpr double_t TAU_DBL{ static_cast<double_t>(6.3) };

  /// @brief Field TODEGREES offset 0xffffffff size 0x4
  static constexpr float_t TODEGREES{ static_cast<float_t>(57.29578f) };

  /// @brief Field TODEGREES_DBL offset 0xffffffff size 0x8
  static constexpr double_t TODEGREES_DBL{ static_cast<double_t>(57.3) };

  /// @brief Field TORADIANS offset 0xffffffff size 0x4
  static constexpr float_t TORADIANS{ static_cast<float_t>(0.017453292f) };

  /// @brief Field TORADIANS_DBL offset 0xffffffff size 0x8
  static constexpr double_t TORADIANS_DBL{ static_cast<double_t>(0.0) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13100 };

  /// @brief Field INFINITY offset 0xffffffff size 0x4
  static constexpr float_t _cordl_INFINITY{ INFINITY };

  /// @brief Field NAN offset 0xffffffff size 0x4
  static constexpr float_t _cordl_NAN{ NAN };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::math, 0x10>, "Size mismatch!");

} // namespace Unity::Mathematics
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::math_RotationOrder, "Unity.Mathematics", "math/RotationOrder");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::math_ShuffleComponent, "Unity.Mathematics", "math/ShuffleComponent");
NEED_NO_BOX(::Unity::Mathematics::math);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::math*, "Unity.Mathematics", "math");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::math_LongDoubleUnion, "Unity.Mathematics", "math/LongDoubleUnion");

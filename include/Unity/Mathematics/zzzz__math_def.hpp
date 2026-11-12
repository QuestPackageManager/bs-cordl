#pragma once
// IWYU pragma private; include "Unity/Mathematics/math.hpp"
#include "beatsaber-hook/shared/types.hpp"
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
MARK_REF_T(::Unity::Mathematics::math*);
MARK_VAL_T(::Unity::Mathematics::math_LongDoubleUnion);
DEFINE_IL2CPP_CLASS(::Unity::Mathematics::math_RotationOrder, "Unity.Mathematics", "math/RotationOrder");
DEFINE_IL2CPP_CLASS(::Unity::Mathematics::math_ShuffleComponent, "Unity.Mathematics", "math/ShuffleComponent");
DEFINE_IL2CPP_CLASS(::Unity::Mathematics::math*, "Unity.Mathematics", "math");
DEFINE_IL2CPP_CLASS(::Unity::Mathematics::math_LongDoubleUnion, "Unity.Mathematics", "math/LongDoubleUnion");
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

  // Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None, comment: None }]
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13373 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Field value__, offset: 0x0, size: 0x1, def value: None
  uint8_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::math_RotationOrder, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Unity::Mathematics::math_RotationOrder) == 0x1, "Size mismatch!");

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

  // Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None, comment: None }]
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13374 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Field value__, offset: 0x0, size: 0x1, def value: None
  uint8_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::math_ShuffleComponent, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Unity::Mathematics::math_ShuffleComponent) == 0x1, "Size mismatch!");

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

  // Ctor Parameters [CppParam { name: "longValue", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "doubleValue", ty: "double_t", modifiers: "", def_value: None,
  // comment: None }]
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13375 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(sizeof(::Unity::Mathematics::math_LongDoubleUnion) == 0x8, "Size mismatch!");

} // namespace Unity::Mathematics
// [Il2CppEagerStaticClassConstruction]
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

  /// @brief Method AffineTransform, addr 0x6a36460, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::AffineTransform AffineTransform(::Unity::Mathematics::float3x4 m);

  /// @brief Method AffineTransform, addr 0x6a36420, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::AffineTransform AffineTransform(::Unity::Mathematics::float4x4 m);

  /// @brief Method AffineTransform, addr 0x6a36484, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::AffineTransform AffineTransform(::Unity::Mathematics::RigidTransform rigid);

  /// @brief Method AffineTransform, addr 0x6a36390, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::AffineTransform AffineTransform(::Unity::Mathematics::float3x3 rotationScale);

  /// @brief Method AffineTransform, addr 0x6a36248, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::AffineTransform AffineTransform(::Unity::Mathematics::float3 translation, ::Unity::Mathematics::quaternion rotation);

  /// @brief Method AffineTransform, addr 0x6a362bc, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::AffineTransform AffineTransform(::Unity::Mathematics::float3 translation, ::Unity::Mathematics::quaternion rotation, ::Unity::Mathematics::float3 scale);

  /// @brief Method AffineTransform, addr 0x6a36374, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::AffineTransform AffineTransform(::Unity::Mathematics::float3 translation, ::Unity::Mathematics::float3x3 rotationScale);

  /// @brief Method Euler, addr 0x6a59298, size 0x154, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 Euler(::Unity::Mathematics::quaternion q, ::Unity::Mathematics::math_RotationOrder order);

  /// @brief Method EulerXYZ, addr 0x6a58174, size 0x2dc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 EulerXYZ(::Unity::Mathematics::quaternion q);

  /// @brief Method EulerXZY, addr 0x6a58450, size 0x2d8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 EulerXZY(::Unity::Mathematics::quaternion q);

  /// @brief Method EulerYXZ, addr 0x6a58728, size 0x2d8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 EulerYXZ(::Unity::Mathematics::quaternion q);

  /// @brief Method EulerYZX, addr 0x6a58a00, size 0x2e0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 EulerYZX(::Unity::Mathematics::quaternion q);

  /// @brief Method EulerZXY, addr 0x6a58ce0, size 0x2dc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 EulerZXY(::Unity::Mathematics::quaternion q);

  /// @brief Method EulerZYX, addr 0x6a58fbc, size 0x2dc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 EulerZYX(::Unity::Mathematics::quaternion q);

  /// @brief Method RigidTransform, addr 0x6a611f4, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::RigidTransform RigidTransform(::Unity::Mathematics::quaternion rot, ::Unity::Mathematics::float3 pos);

  /// @brief Method RigidTransform, addr 0x6a61208, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::RigidTransform RigidTransform(::Unity::Mathematics::float3x3 rotation, ::Unity::Mathematics::float3 translation);

  /// @brief Method RigidTransform, addr 0x6a6127c, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::RigidTransform RigidTransform(::Unity::Mathematics::float4x4 transform);

  /// @brief Method abs, addr 0x6a46670, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 abs(::Unity::Mathematics::double2 x);

  /// @brief Method abs, addr 0x6a4667c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 abs(::Unity::Mathematics::double3 x);

  /// @brief Method abs, addr 0x6a4668c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 abs(::Unity::Mathematics::double4 x);

  /// @brief Method abs, addr 0x6a46638, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 abs(::Unity::Mathematics::float2 x);

  /// @brief Method abs, addr 0x6a46644, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 abs(::Unity::Mathematics::float3 x);

  /// @brief Method abs, addr 0x6a46654, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 abs(::Unity::Mathematics::float4 x);

  /// @brief Method abs, addr 0x6a4658c, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 abs(::Unity::Mathematics::int2 x);

  /// @brief Method abs, addr 0x6a465b4, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 abs(::Unity::Mathematics::int3 x);

  /// @brief Method abs, addr 0x6a465e4, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 abs(::Unity::Mathematics::int4 x);

  /// @brief Method abs, addr 0x6a46668, size 0x8, virtual false, abstract: false, final false
  static inline double_t abs(double_t x);

  /// @brief Method abs, addr 0x6a46630, size 0x8, virtual false, abstract: false, final false
  static inline float_t abs(float_t x);

  /// @brief Method abs, addr 0x6a46580, size 0xc, virtual false, abstract: false, final false
  static inline int32_t abs(int32_t x);

  /// @brief Method abs, addr 0x6a46624, size 0xc, virtual false, abstract: false, final false
  static inline int64_t abs(int64_t x);

  /// @brief Method acos, addr 0x6a495a4, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 acos(::Unity::Mathematics::double2 x);

  /// @brief Method acos, addr 0x6a49654, size 0x100, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 acos(::Unity::Mathematics::double3 x);

  /// @brief Method acos, addr 0x6a49754, size 0x148, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 acos(::Unity::Mathematics::double4 x);

  /// @brief Method acos, addr 0x6a49230, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 acos(::Unity::Mathematics::float2 x);

  /// @brief Method acos, addr 0x6a492e8, size 0x108, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 acos(::Unity::Mathematics::float3 x);

  /// @brief Method acos, addr 0x6a493f0, size 0x154, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 acos(::Unity::Mathematics::float4 x);

  /// @brief Method acos, addr 0x6a49544, size 0x60, virtual false, abstract: false, final false
  static inline double_t acos(double_t x);

  /// @brief Method acos, addr 0x6a491c8, size 0x68, virtual false, abstract: false, final false
  static inline float_t acos(float_t x);

  /// @brief Method adj, addr 0x6a60f00, size 0xcc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 adj(::Unity::Mathematics::float3x3 m, ::by_ref<float_t> det);

  /// @brief Method adjInverse, addr 0x6a60fcc, size 0xec, virtual false, abstract: false, final false
  static inline bool adjInverse(::Unity::Mathematics::float3x3 m, ::by_ref<::Unity::Mathematics::float3x3> i, float_t epsilon);

  /// @brief Method all, addr 0x6a530a0, size 0x14, virtual false, abstract: false, final false
  static inline bool all(::Unity::Mathematics::bool2 x);

  /// @brief Method all, addr 0x6a530b4, size 0x18, virtual false, abstract: false, final false
  static inline bool all(::Unity::Mathematics::bool3 x);

  /// @brief Method all, addr 0x6a530cc, size 0x14, virtual false, abstract: false, final false
  static inline bool all(::Unity::Mathematics::bool4 x);

  /// @brief Method all, addr 0x6a531f0, size 0x14, virtual false, abstract: false, final false
  static inline bool all(::Unity::Mathematics::double2 x);

  /// @brief Method all, addr 0x6a53204, size 0x24, virtual false, abstract: false, final false
  static inline bool all(::Unity::Mathematics::double3 x);

  /// @brief Method all, addr 0x6a53228, size 0x28, virtual false, abstract: false, final false
  static inline bool all(::Unity::Mathematics::double4 x);

  /// @brief Method all, addr 0x6a53190, size 0x14, virtual false, abstract: false, final false
  static inline bool all(::Unity::Mathematics::float2 x);

  /// @brief Method all, addr 0x6a531a4, size 0x24, virtual false, abstract: false, final false
  static inline bool all(::Unity::Mathematics::float3 x);

  /// @brief Method all, addr 0x6a531c8, size 0x28, virtual false, abstract: false, final false
  static inline bool all(::Unity::Mathematics::float4 x);

  /// @brief Method all, addr 0x6a530e0, size 0x14, virtual false, abstract: false, final false
  static inline bool all(::Unity::Mathematics::int2 x);

  /// @brief Method all, addr 0x6a530f4, size 0x24, virtual false, abstract: false, final false
  static inline bool all(::Unity::Mathematics::int3 x);

  /// @brief Method all, addr 0x6a53118, size 0x20, virtual false, abstract: false, final false
  static inline bool all(::Unity::Mathematics::int4 x);

  /// @brief Method all, addr 0x6a53138, size 0x14, virtual false, abstract: false, final false
  static inline bool all(::Unity::Mathematics::uint2 x);

  /// @brief Method all, addr 0x6a5314c, size 0x24, virtual false, abstract: false, final false
  static inline bool all(::Unity::Mathematics::uint3 x);

  /// @brief Method all, addr 0x6a53170, size 0x20, virtual false, abstract: false, final false
  static inline bool all(::Unity::Mathematics::uint4 x);

  /// @brief Method angle, addr 0x6a60aec, size 0x1b8, virtual false, abstract: false, final false
  static inline float_t angle(::Unity::Mathematics::quaternion q1, ::Unity::Mathematics::quaternion q2);

  /// @brief Method any, addr 0x6a52f44, size 0x10, virtual false, abstract: false, final false
  static inline bool any(::Unity::Mathematics::bool2 x);

  /// @brief Method any, addr 0x6a52f54, size 0x14, virtual false, abstract: false, final false
  static inline bool any(::Unity::Mathematics::bool3 x);

  /// @brief Method any, addr 0x6a52f68, size 0x10, virtual false, abstract: false, final false
  static inline bool any(::Unity::Mathematics::bool4 x);

  /// @brief Method any, addr 0x6a53044, size 0x14, virtual false, abstract: false, final false
  static inline bool any(::Unity::Mathematics::double2 x);

  /// @brief Method any, addr 0x6a53058, size 0x20, virtual false, abstract: false, final false
  static inline bool any(::Unity::Mathematics::double3 x);

  /// @brief Method any, addr 0x6a53078, size 0x28, virtual false, abstract: false, final false
  static inline bool any(::Unity::Mathematics::double4 x);

  /// @brief Method any, addr 0x6a52fe8, size 0x14, virtual false, abstract: false, final false
  static inline bool any(::Unity::Mathematics::float2 x);

  /// @brief Method any, addr 0x6a52ffc, size 0x20, virtual false, abstract: false, final false
  static inline bool any(::Unity::Mathematics::float3 x);

  /// @brief Method any, addr 0x6a5301c, size 0x28, virtual false, abstract: false, final false
  static inline bool any(::Unity::Mathematics::float4 x);

  /// @brief Method any, addr 0x6a52f78, size 0xc, virtual false, abstract: false, final false
  static inline bool any(::Unity::Mathematics::int2 x);

  /// @brief Method any, addr 0x6a52f84, size 0x14, virtual false, abstract: false, final false
  static inline bool any(::Unity::Mathematics::int3 x);

  /// @brief Method any, addr 0x6a52f98, size 0x18, virtual false, abstract: false, final false
  static inline bool any(::Unity::Mathematics::int4 x);

  /// @brief Method any, addr 0x6a52fb0, size 0xc, virtual false, abstract: false, final false
  static inline bool any(::Unity::Mathematics::uint2 x);

  /// @brief Method any, addr 0x6a52fbc, size 0x14, virtual false, abstract: false, final false
  static inline bool any(::Unity::Mathematics::uint3 x);

  /// @brief Method any, addr 0x6a52fd0, size 0x18, virtual false, abstract: false, final false
  static inline bool any(::Unity::Mathematics::uint4 x);

  /// @brief Method asdouble, addr 0x6a448dc, size 0x8, virtual false, abstract: false, final false
  static inline double_t asdouble(int64_t x);

  /// @brief Method asdouble, addr 0x6a448e4, size 0x8, virtual false, abstract: false, final false
  static inline double_t asdouble(uint64_t x);

  /// @brief Method asfloat, addr 0x6a4482c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 asfloat(::Unity::Mathematics::int2 x);

  /// @brief Method asfloat, addr 0x6a44874, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 asfloat(::Unity::Mathematics::uint2 x);

  /// @brief Method asfloat, addr 0x6a4483c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 asfloat(::Unity::Mathematics::int3 x);

  /// @brief Method asfloat, addr 0x6a44884, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 asfloat(::Unity::Mathematics::uint3 x);

  /// @brief Method asfloat, addr 0x6a44850, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 asfloat(::Unity::Mathematics::int4 x);

  /// @brief Method asfloat, addr 0x6a44898, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 asfloat(::Unity::Mathematics::uint4 x);

  /// @brief Method asfloat, addr 0x6a44824, size 0x8, virtual false, abstract: false, final false
  static inline float_t asfloat(int32_t x);

  /// @brief Method asfloat, addr 0x6a4486c, size 0x8, virtual false, abstract: false, final false
  static inline float_t asfloat(uint32_t x);

  /// @brief Method asin, addr 0x6a4aa20, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 asin(::Unity::Mathematics::double2 x);

  /// @brief Method asin, addr 0x6a4aad0, size 0x100, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 asin(::Unity::Mathematics::double3 x);

  /// @brief Method asin, addr 0x6a4abd0, size 0x148, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 asin(::Unity::Mathematics::double4 x);

  /// @brief Method asin, addr 0x6a4a6ac, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 asin(::Unity::Mathematics::float2 x);

  /// @brief Method asin, addr 0x6a4a764, size 0x108, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 asin(::Unity::Mathematics::float3 x);

  /// @brief Method asin, addr 0x6a4a86c, size 0x154, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 asin(::Unity::Mathematics::float4 x);

  /// @brief Method asin, addr 0x6a4a9c0, size 0x60, virtual false, abstract: false, final false
  static inline double_t asin(double_t x);

  /// @brief Method asin, addr 0x6a4a644, size 0x68, virtual false, abstract: false, final false
  static inline float_t asin(float_t x);

  /// @brief Method asint, addr 0x6a44770, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 asint(::Unity::Mathematics::float2 x);

  /// @brief Method asint, addr 0x6a44758, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 asint(::Unity::Mathematics::uint2 x);

  /// @brief Method asint, addr 0x6a44780, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 asint(::Unity::Mathematics::float3 x);

  /// @brief Method asint, addr 0x6a4475c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 asint(::Unity::Mathematics::uint3 x);

  /// @brief Method asint, addr 0x6a44794, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 asint(::Unity::Mathematics::float4 x);

  /// @brief Method asint, addr 0x6a44764, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 asint(::Unity::Mathematics::uint4 x);

  /// @brief Method asint, addr 0x6a44768, size 0x8, virtual false, abstract: false, final false
  static inline int32_t asint(float_t x);

  /// @brief Method asint, addr 0x6a44754, size 0x4, virtual false, abstract: false, final false
  static inline int32_t asint(uint32_t x);

  /// @brief Method aslong, addr 0x6a44810, size 0x8, virtual false, abstract: false, final false
  static inline int64_t aslong(double_t x);

  /// @brief Method aslong, addr 0x6a4480c, size 0x4, virtual false, abstract: false, final false
  static inline int64_t aslong(uint64_t x);

  /// @brief Method asuint, addr 0x6a447cc, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 asuint(::Unity::Mathematics::float2 x);

  /// @brief Method asuint, addr 0x6a447b4, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 asuint(::Unity::Mathematics::int2 x);

  /// @brief Method asuint, addr 0x6a447dc, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 asuint(::Unity::Mathematics::float3 x);

  /// @brief Method asuint, addr 0x6a447b8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 asuint(::Unity::Mathematics::int3 x);

  /// @brief Method asuint, addr 0x6a447f0, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 asuint(::Unity::Mathematics::float4 x);

  /// @brief Method asuint, addr 0x6a447c0, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 asuint(::Unity::Mathematics::int4 x);

  /// @brief Method asuint, addr 0x6a447c4, size 0x8, virtual false, abstract: false, final false
  static inline uint32_t asuint(float_t x);

  /// @brief Method asuint, addr 0x6a447b0, size 0x4, virtual false, abstract: false, final false
  static inline uint32_t asuint(int32_t x);

  /// @brief Method asulong, addr 0x6a4481c, size 0x8, virtual false, abstract: false, final false
  static inline uint64_t asulong(double_t x);

  /// @brief Method asulong, addr 0x6a44818, size 0x4, virtual false, abstract: false, final false
  static inline uint64_t asulong(int64_t x);

  /// @brief Method atan, addr 0x6a47974, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 atan(::Unity::Mathematics::double2 x);

  /// @brief Method atan, addr 0x6a47a24, size 0x100, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 atan(::Unity::Mathematics::double3 x);

  /// @brief Method atan, addr 0x6a47b24, size 0x148, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 atan(::Unity::Mathematics::double4 x);

  /// @brief Method atan, addr 0x6a47600, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 atan(::Unity::Mathematics::float2 x);

  /// @brief Method atan, addr 0x6a476b8, size 0x108, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 atan(::Unity::Mathematics::float3 x);

  /// @brief Method atan, addr 0x6a477c0, size 0x154, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 atan(::Unity::Mathematics::float4 x);

  /// @brief Method atan, addr 0x6a47914, size 0x60, virtual false, abstract: false, final false
  static inline double_t atan(double_t x);

  /// @brief Method atan, addr 0x6a47598, size 0x68, virtual false, abstract: false, final false
  static inline float_t atan(float_t x);

  /// @brief Method atan2, addr 0x6a480c0, size 0xc8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 atan2(::Unity::Mathematics::double2 y, ::Unity::Mathematics::double2 x);

  /// @brief Method atan2, addr 0x6a48188, size 0x120, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 atan2(::Unity::Mathematics::double3 y, ::Unity::Mathematics::double3 x);

  /// @brief Method atan2, addr 0x6a482a8, size 0x178, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 atan2(::Unity::Mathematics::double4 y, ::Unity::Mathematics::double4 x);

  /// @brief Method atan2, addr 0x6a47cdc, size 0xd0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 atan2(::Unity::Mathematics::float2 y, ::Unity::Mathematics::float2 x);

  /// @brief Method atan2, addr 0x6a47dac, size 0x128, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 atan2(::Unity::Mathematics::float3 y, ::Unity::Mathematics::float3 x);

  /// @brief Method atan2, addr 0x6a47ed4, size 0x184, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 atan2(::Unity::Mathematics::float4 y, ::Unity::Mathematics::float4 x);

  /// @brief Method atan2, addr 0x6a48058, size 0x68, virtual false, abstract: false, final false
  static inline double_t atan2(double_t y, double_t x);

  /// @brief Method atan2, addr 0x6a47c6c, size 0x70, virtual false, abstract: false, final false
  static inline float_t atan2(float_t y, float_t x);

  /// @brief Method back, addr 0x6a58144, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 back();

  /// @brief Method bitmask, addr 0x6a448b4, size 0x28, virtual false, abstract: false, final false
  static inline int32_t bitmask(::Unity::Mathematics::bool4 value);

  /// @brief Method bool2, addr 0x6a36dfc, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 bool2(bool v);

  /// @brief Method bool2, addr 0x6a36dd8, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 bool2(bool x, bool y);

  /// @brief Method bool2, addr 0x6a36df0, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 bool2(::Unity::Mathematics::bool2 xy);

  /// @brief Method bool2x2, addr 0x6a37118, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 bool2x2(::Unity::Mathematics::bool2 c0, ::Unity::Mathematics::bool2 c1);

  /// @brief Method bool2x2, addr 0x6a37120, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 bool2x2(bool m00, bool m01, bool m10, bool m11);

  /// @brief Method bool2x2, addr 0x6a37144, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 bool2x2(bool v);

  /// @brief Method bool2x3, addr 0x6a37260, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 bool2x3(::Unity::Mathematics::bool2 c0, ::Unity::Mathematics::bool2 c1, ::Unity::Mathematics::bool2 c2);

  /// @brief Method bool2x3, addr 0x6a37274, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 bool2x3(bool m00, bool m01, bool m02, bool m10, bool m11, bool m12);

  /// @brief Method bool2x3, addr 0x6a372ac, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 bool2x3(bool v);

  /// @brief Method bool2x4, addr 0x6a37440, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 bool2x4(::Unity::Mathematics::bool2 c0, ::Unity::Mathematics::bool2 c1, ::Unity::Mathematics::bool2 c2, ::Unity::Mathematics::bool2 c3);

  /// @brief Method bool2x4, addr 0x6a3745c, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 bool2x4(bool m00, bool m01, bool m02, bool m03, bool m10, bool m11, bool m12, bool m13);

  /// @brief Method bool2x4, addr 0x6a374a4, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 bool2x4(bool v);

  /// @brief Method bool3, addr 0x6a376f0, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 bool3(bool v);

  /// @brief Method bool3, addr 0x6a37680, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 bool3(bool x, bool y, bool z);

  /// @brief Method bool3, addr 0x6a376a4, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 bool3(bool x, ::Unity::Mathematics::bool2 yz);

  /// @brief Method bool3, addr 0x6a376c0, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 bool3(::Unity::Mathematics::bool2 xy, bool z);

  /// @brief Method bool3, addr 0x6a376e0, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 bool3(::Unity::Mathematics::bool3 xyz);

  /// @brief Method bool3x2, addr 0x6a37a64, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 bool3x2(::Unity::Mathematics::bool3 c0, ::Unity::Mathematics::bool3 c1);

  /// @brief Method bool3x2, addr 0x6a37a6c, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 bool3x2(bool m00, bool m01, bool m10, bool m11, bool m20, bool m21);

  /// @brief Method bool3x2, addr 0x6a37ac0, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 bool3x2(bool v);

  /// @brief Method bool3x3, addr 0x6a37c64, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 bool3x3(::Unity::Mathematics::bool3 c0, ::Unity::Mathematics::bool3 c1, ::Unity::Mathematics::bool3 c2);

  /// @brief Method bool3x3, addr 0x6a37c98, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 bool3x3(bool m00, bool m01, bool m02, bool m10, bool m11, bool m12, bool m20, bool m21, bool m22);

  /// @brief Method bool3x3, addr 0x6a37d14, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 bool3x3(bool v);

  /// @brief Method bool3x4, addr 0x6a37fa4, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 bool3x4(::Unity::Mathematics::bool3 c0, ::Unity::Mathematics::bool3 c1, ::Unity::Mathematics::bool3 c2, ::Unity::Mathematics::bool3 c3);

  /// @brief Method bool3x4, addr 0x6a37fe8, size 0xa8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 bool3x4(bool m00, bool m01, bool m02, bool m03, bool m10, bool m11, bool m12, bool m13, bool m20, bool m21, bool m22, bool m23);

  /// @brief Method bool3x4, addr 0x6a38090, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 bool3x4(bool v);

  /// @brief Method bool4, addr 0x6a38524, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 bool4(bool v);

  /// @brief Method bool4, addr 0x6a3842c, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 bool4(bool x, bool y, bool z, bool w);

  /// @brief Method bool4, addr 0x6a38460, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 bool4(bool x, bool y, ::Unity::Mathematics::bool2 zw);

  /// @brief Method bool4, addr 0x6a38480, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 bool4(bool x, ::Unity::Mathematics::bool2 yz, bool w);

  /// @brief Method bool4, addr 0x6a384a4, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 bool4(bool x, ::Unity::Mathematics::bool3 yzw);

  /// @brief Method bool4, addr 0x6a384b8, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 bool4(::Unity::Mathematics::bool2 xy, bool z, bool w);

  /// @brief Method bool4, addr 0x6a384e4, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 bool4(::Unity::Mathematics::bool2 xy, ::Unity::Mathematics::bool2 zw);

  /// @brief Method bool4, addr 0x6a384fc, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 bool4(::Unity::Mathematics::bool3 xyz, bool w);

  /// @brief Method bool4, addr 0x6a3851c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 bool4(::Unity::Mathematics::bool4 xyzw);

  /// @brief Method bool4x2, addr 0x6a388d0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 bool4x2(::Unity::Mathematics::bool4 c0, ::Unity::Mathematics::bool4 c1);

  /// @brief Method bool4x2, addr 0x6a388d8, size 0x5c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 bool4x2(bool m00, bool m01, bool m10, bool m11, bool m20, bool m21, bool m30, bool m31);

  /// @brief Method bool4x2, addr 0x6a38934, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 bool4x2(bool v);

  /// @brief Method bool4x3, addr 0x6a38b50, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 bool4x3(::Unity::Mathematics::bool4 c0, ::Unity::Mathematics::bool4 c1, ::Unity::Mathematics::bool4 c2);

  /// @brief Method bool4x3, addr 0x6a38b5c, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 bool4x3(bool m00, bool m01, bool m02, bool m10, bool m11, bool m12, bool m20, bool m21, bool m22, bool m30, bool m31, bool m32);

  /// @brief Method bool4x3, addr 0x6a38bec, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 bool4x3(bool v);

  /// @brief Method bool4x4, addr 0x6a38ec0, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x4 bool4x4(::Unity::Mathematics::bool4 c0, ::Unity::Mathematics::bool4 c1, ::Unity::Mathematics::bool4 c2, ::Unity::Mathematics::bool4 c3);

  /// @brief Method bool4x4, addr 0x6a38ed0, size 0xc8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x4 bool4x4(bool m00, bool m01, bool m02, bool m03, bool m10, bool m11, bool m12, bool m13, bool m20, bool m21, bool m22, bool m23, bool m30, bool m31,
                                                      bool m32, bool m33);

  /// @brief Method bool4x4, addr 0x6a38f98, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x4 bool4x4(bool v);

  /// @brief Method ceil, addr 0x6a4b660, size 0x9c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 ceil(::Unity::Mathematics::double2 x);

  /// @brief Method ceil, addr 0x6a4b6fc, size 0xe0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 ceil(::Unity::Mathematics::double3 x);

  /// @brief Method ceil, addr 0x6a4b7dc, size 0x11c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 ceil(::Unity::Mathematics::double4 x);

  /// @brief Method ceil, addr 0x6a4b368, size 0x9c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 ceil(::Unity::Mathematics::float2 x);

  /// @brief Method ceil, addr 0x6a4b404, size 0xe0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 ceil(::Unity::Mathematics::float3 x);

  /// @brief Method ceil, addr 0x6a4b4e4, size 0x11c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 ceil(::Unity::Mathematics::float4 x);

  /// @brief Method ceil, addr 0x6a4b600, size 0x60, virtual false, abstract: false, final false
  static inline double_t ceil(double_t x);

  /// @brief Method ceil, addr 0x6a4b308, size 0x60, virtual false, abstract: false, final false
  static inline float_t ceil(float_t x);

  /// @brief Method ceillog2, addr 0x6a5649c, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 ceillog2(::Unity::Mathematics::int2 x);

  /// @brief Method ceillog2, addr 0x6a566f4, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 ceillog2(::Unity::Mathematics::uint2 x);

  /// @brief Method ceillog2, addr 0x6a56518, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 ceillog2(::Unity::Mathematics::int3 x);

  /// @brief Method ceillog2, addr 0x6a56770, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 ceillog2(::Unity::Mathematics::uint3 x);

  /// @brief Method ceillog2, addr 0x6a565cc, size 0xf0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 ceillog2(::Unity::Mathematics::int4 x);

  /// @brief Method ceillog2, addr 0x6a56824, size 0xf0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 ceillog2(::Unity::Mathematics::uint4 x);

  /// @brief Method ceillog2, addr 0x6a56464, size 0x38, virtual false, abstract: false, final false
  static inline int32_t ceillog2(int32_t x);

  /// @brief Method ceillog2, addr 0x6a566bc, size 0x38, virtual false, abstract: false, final false
  static inline int32_t ceillog2(uint32_t x);

  /// @brief Method ceilpow2, addr 0x6a5601c, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 ceilpow2(::Unity::Mathematics::int2 x);

  /// @brief Method ceilpow2, addr 0x6a560a4, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 ceilpow2(::Unity::Mathematics::int3 x);

  /// @brief Method ceilpow2, addr 0x6a56148, size 0x104, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 ceilpow2(::Unity::Mathematics::int4 x);

  /// @brief Method ceilpow2, addr 0x6a5626c, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 ceilpow2(::Unity::Mathematics::uint2 x);

  /// @brief Method ceilpow2, addr 0x6a562d8, size 0x94, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 ceilpow2(::Unity::Mathematics::uint3 x);

  /// @brief Method ceilpow2, addr 0x6a5636c, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 ceilpow2(::Unity::Mathematics::uint4 x);

  /// @brief Method ceilpow2, addr 0x6a55ffc, size 0x20, virtual false, abstract: false, final false
  static inline int32_t ceilpow2(int32_t x);

  /// @brief Method ceilpow2, addr 0x6a5641c, size 0x24, virtual false, abstract: false, final false
  static inline int64_t ceilpow2(int64_t x);

  /// @brief Method ceilpow2, addr 0x6a5624c, size 0x20, virtual false, abstract: false, final false
  static inline uint32_t ceilpow2(uint32_t x);

  /// @brief Method ceilpow2, addr 0x6a56440, size 0x24, virtual false, abstract: false, final false
  static inline uint64_t ceilpow2(uint64_t x);

  /// @brief Method chgsign, addr 0x6a57ce8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 chgsign(::Unity::Mathematics::float2 x, ::Unity::Mathematics::float2 y);

  /// @brief Method chgsign, addr 0x6a57d20, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 chgsign(::Unity::Mathematics::float3 x, ::Unity::Mathematics::float3 y);

  /// @brief Method chgsign, addr 0x6a57d6c, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 chgsign(::Unity::Mathematics::float4 x, ::Unity::Mathematics::float4 y);

  /// @brief Method chgsign, addr 0x6a57cd0, size 0x18, virtual false, abstract: false, final false
  static inline float_t chgsign(float_t x, float_t y);

  /// @brief Method clamp, addr 0x6a46118, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 clamp(::Unity::Mathematics::double2 valueToClamp, ::Unity::Mathematics::double2 lowerBound, ::Unity::Mathematics::double2 upperBound);

  /// @brief Method clamp, addr 0x6a4615c, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 clamp(::Unity::Mathematics::double3 valueToClamp, ::Unity::Mathematics::double3 lowerBound, ::Unity::Mathematics::double3 upperBound);

  /// @brief Method clamp, addr 0x6a461e4, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 clamp(::Unity::Mathematics::double4 valueToClamp, ::Unity::Mathematics::double4 lowerBound, ::Unity::Mathematics::double4 upperBound);

  /// @brief Method clamp, addr 0x6a45fb8, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 clamp(::Unity::Mathematics::float2 valueToClamp, ::Unity::Mathematics::float2 lowerBound, ::Unity::Mathematics::float2 upperBound);

  /// @brief Method clamp, addr 0x6a45ffc, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 clamp(::Unity::Mathematics::float3 valueToClamp, ::Unity::Mathematics::float3 lowerBound, ::Unity::Mathematics::float3 upperBound);

  /// @brief Method clamp, addr 0x6a46074, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 clamp(::Unity::Mathematics::float4 valueToClamp, ::Unity::Mathematics::float4 lowerBound, ::Unity::Mathematics::float4 upperBound);

  /// @brief Method clamp, addr 0x6a45d94, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 clamp(::Unity::Mathematics::int2 valueToClamp, ::Unity::Mathematics::int2 lowerBound, ::Unity::Mathematics::int2 upperBound);

  /// @brief Method clamp, addr 0x6a45dc8, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 clamp(::Unity::Mathematics::int3 valueToClamp, ::Unity::Mathematics::int3 lowerBound, ::Unity::Mathematics::int3 upperBound);

  /// @brief Method clamp, addr 0x6a45e0c, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 clamp(::Unity::Mathematics::int4 valueToClamp, ::Unity::Mathematics::int4 lowerBound, ::Unity::Mathematics::int4 upperBound);

  /// @brief Method clamp, addr 0x6a45e84, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 clamp(::Unity::Mathematics::uint2 valueToClamp, ::Unity::Mathematics::uint2 lowerBound, ::Unity::Mathematics::uint2 upperBound);

  /// @brief Method clamp, addr 0x6a45eb8, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 clamp(::Unity::Mathematics::uint3 valueToClamp, ::Unity::Mathematics::uint3 lowerBound, ::Unity::Mathematics::uint3 upperBound);

  /// @brief Method clamp, addr 0x6a45efc, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 clamp(::Unity::Mathematics::uint4 valueToClamp, ::Unity::Mathematics::uint4 lowerBound, ::Unity::Mathematics::uint4 upperBound);

  /// @brief Method clamp, addr 0x6a460e8, size 0x30, virtual false, abstract: false, final false
  static inline double_t clamp(double_t valueToClamp, double_t lowerBound, double_t upperBound);

  /// @brief Method clamp, addr 0x6a45f88, size 0x30, virtual false, abstract: false, final false
  static inline float_t clamp(float_t valueToClamp, float_t lowerBound, float_t upperBound);

  /// @brief Method clamp, addr 0x6a45d80, size 0x14, virtual false, abstract: false, final false
  static inline int32_t clamp(int32_t valueToClamp, int32_t lowerBound, int32_t upperBound);

  /// @brief Method clamp, addr 0x6a45f60, size 0x14, virtual false, abstract: false, final false
  static inline int64_t clamp(int64_t valueToClamp, int64_t lowerBound, int64_t upperBound);

  /// @brief Method clamp, addr 0x6a45e70, size 0x14, virtual false, abstract: false, final false
  static inline uint32_t clamp(uint32_t valueToClamp, uint32_t lowerBound, uint32_t upperBound);

  /// @brief Method clamp, addr 0x6a45f74, size 0x14, virtual false, abstract: false, final false
  static inline uint64_t clamp(uint64_t valueToClamp, uint64_t lowerBound, uint64_t upperBound);

  /// @brief Method cmax, addr 0x6a571e4, size 0x1c, virtual false, abstract: false, final false
  static inline double_t cmax(::Unity::Mathematics::double2 x);

  /// @brief Method cmax, addr 0x6a57200, size 0x30, virtual false, abstract: false, final false
  static inline double_t cmax(::Unity::Mathematics::double3 x);

  /// @brief Method cmax, addr 0x6a57230, size 0x44, virtual false, abstract: false, final false
  static inline double_t cmax(::Unity::Mathematics::double4 x);

  /// @brief Method cmax, addr 0x6a57154, size 0x1c, virtual false, abstract: false, final false
  static inline float_t cmax(::Unity::Mathematics::float2 x);

  /// @brief Method cmax, addr 0x6a57170, size 0x30, virtual false, abstract: false, final false
  static inline float_t cmax(::Unity::Mathematics::float3 x);

  /// @brief Method cmax, addr 0x6a571a0, size 0x44, virtual false, abstract: false, final false
  static inline float_t cmax(::Unity::Mathematics::float4 x);

  /// @brief Method cmax, addr 0x6a570bc, size 0x10, virtual false, abstract: false, final false
  static inline int32_t cmax(::Unity::Mathematics::int2 x);

  /// @brief Method cmax, addr 0x6a570cc, size 0x18, virtual false, abstract: false, final false
  static inline int32_t cmax(::Unity::Mathematics::int3 x);

  /// @brief Method cmax, addr 0x6a570e4, size 0x24, virtual false, abstract: false, final false
  static inline int32_t cmax(::Unity::Mathematics::int4 x);

  /// @brief Method cmax, addr 0x6a57108, size 0x10, virtual false, abstract: false, final false
  static inline uint32_t cmax(::Unity::Mathematics::uint2 x);

  /// @brief Method cmax, addr 0x6a57118, size 0x18, virtual false, abstract: false, final false
  static inline uint32_t cmax(::Unity::Mathematics::uint3 x);

  /// @brief Method cmax, addr 0x6a57130, size 0x24, virtual false, abstract: false, final false
  static inline uint32_t cmax(::Unity::Mathematics::uint4 x);

  /// @brief Method cmin, addr 0x6a5702c, size 0x1c, virtual false, abstract: false, final false
  static inline double_t cmin(::Unity::Mathematics::double2 x);

  /// @brief Method cmin, addr 0x6a57048, size 0x30, virtual false, abstract: false, final false
  static inline double_t cmin(::Unity::Mathematics::double3 x);

  /// @brief Method cmin, addr 0x6a57078, size 0x44, virtual false, abstract: false, final false
  static inline double_t cmin(::Unity::Mathematics::double4 x);

  /// @brief Method cmin, addr 0x6a56f9c, size 0x1c, virtual false, abstract: false, final false
  static inline float_t cmin(::Unity::Mathematics::float2 x);

  /// @brief Method cmin, addr 0x6a56fb8, size 0x30, virtual false, abstract: false, final false
  static inline float_t cmin(::Unity::Mathematics::float3 x);

  /// @brief Method cmin, addr 0x6a56fe8, size 0x44, virtual false, abstract: false, final false
  static inline float_t cmin(::Unity::Mathematics::float4 x);

  /// @brief Method cmin, addr 0x6a56f04, size 0x10, virtual false, abstract: false, final false
  static inline int32_t cmin(::Unity::Mathematics::int2 x);

  /// @brief Method cmin, addr 0x6a56f14, size 0x18, virtual false, abstract: false, final false
  static inline int32_t cmin(::Unity::Mathematics::int3 x);

  /// @brief Method cmin, addr 0x6a56f2c, size 0x24, virtual false, abstract: false, final false
  static inline int32_t cmin(::Unity::Mathematics::int4 x);

  /// @brief Method cmin, addr 0x6a56f50, size 0x10, virtual false, abstract: false, final false
  static inline uint32_t cmin(::Unity::Mathematics::uint2 x);

  /// @brief Method cmin, addr 0x6a56f60, size 0x18, virtual false, abstract: false, final false
  static inline uint32_t cmin(::Unity::Mathematics::uint3 x);

  /// @brief Method cmin, addr 0x6a56f78, size 0x24, virtual false, abstract: false, final false
  static inline uint32_t cmin(::Unity::Mathematics::uint4 x);

  /// @brief Method compress, addr 0x6a57524, size 0x58, virtual false, abstract: false, final false
  static inline int32_t compress(float_t* output, int32_t index, ::Unity::Mathematics::float4 val, ::Unity::Mathematics::bool4 mask);

  /// @brief Method compress, addr 0x6a57464, size 0x60, virtual false, abstract: false, final false
  static inline int32_t compress(int32_t* output, int32_t index, ::Unity::Mathematics::int4 val, ::Unity::Mathematics::bool4 mask);

  /// @brief Method compress, addr 0x6a574c4, size 0x60, virtual false, abstract: false, final false
  static inline int32_t compress(uint32_t* output, int32_t index, ::Unity::Mathematics::uint4 val, ::Unity::Mathematics::bool4 mask);

  /// @brief Method conjugate, addr 0x6a5fb28, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion conjugate(::Unity::Mathematics::quaternion q);

  /// @brief Method cos, addr 0x6a487fc, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 cos(::Unity::Mathematics::double2 x);

  /// @brief Method cos, addr 0x6a488ac, size 0x100, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 cos(::Unity::Mathematics::double3 x);

  /// @brief Method cos, addr 0x6a489ac, size 0x148, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 cos(::Unity::Mathematics::double4 x);

  /// @brief Method cos, addr 0x6a48488, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 cos(::Unity::Mathematics::float2 x);

  /// @brief Method cos, addr 0x6a48540, size 0x108, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 cos(::Unity::Mathematics::float3 x);

  /// @brief Method cos, addr 0x6a48648, size 0x154, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 cos(::Unity::Mathematics::float4 x);

  /// @brief Method cos, addr 0x6a4879c, size 0x60, virtual false, abstract: false, final false
  static inline double_t cos(double_t x);

  /// @brief Method cos, addr 0x6a48420, size 0x68, virtual false, abstract: false, final false
  static inline float_t cos(float_t x);

  /// @brief Method cosh, addr 0x6a48ed0, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 cosh(::Unity::Mathematics::double2 x);

  /// @brief Method cosh, addr 0x6a48f80, size 0x100, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 cosh(::Unity::Mathematics::double3 x);

  /// @brief Method cosh, addr 0x6a49080, size 0x148, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 cosh(::Unity::Mathematics::double4 x);

  /// @brief Method cosh, addr 0x6a48b5c, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 cosh(::Unity::Mathematics::float2 x);

  /// @brief Method cosh, addr 0x6a48c14, size 0x108, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 cosh(::Unity::Mathematics::float3 x);

  /// @brief Method cosh, addr 0x6a48d1c, size 0x154, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 cosh(::Unity::Mathematics::float4 x);

  /// @brief Method cosh, addr 0x6a48e70, size 0x60, virtual false, abstract: false, final false
  static inline double_t cosh(double_t x);

  /// @brief Method cosh, addr 0x6a48af4, size 0x68, virtual false, abstract: false, final false
  static inline float_t cosh(float_t x);

  /// @brief Method countbits, addr 0x6a54ad8, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 countbits(::Unity::Mathematics::int2 x);

  /// @brief Method countbits, addr 0x6a54d04, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 countbits(::Unity::Mathematics::uint2 x);

  /// @brief Method countbits, addr 0x6a54b60, size 0xac, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 countbits(::Unity::Mathematics::int3 x);

  /// @brief Method countbits, addr 0x6a54d8c, size 0xac, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 countbits(::Unity::Mathematics::uint3 x);

  /// @brief Method countbits, addr 0x6a54c0c, size 0xe4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 countbits(::Unity::Mathematics::int4 x);

  /// @brief Method countbits, addr 0x6a54e38, size 0xe4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 countbits(::Unity::Mathematics::uint4 x);

  /// @brief Method countbits, addr 0x6a54ac4, size 0x14, virtual false, abstract: false, final false
  static inline int32_t countbits(int32_t x);

  /// @brief Method countbits, addr 0x6a54f30, size 0x14, virtual false, abstract: false, final false
  static inline int32_t countbits(int64_t x);

  /// @brief Method countbits, addr 0x6a54cf0, size 0x14, virtual false, abstract: false, final false
  static inline int32_t countbits(uint32_t x);

  /// @brief Method countbits, addr 0x6a54f1c, size 0x14, virtual false, abstract: false, final false
  static inline int32_t countbits(uint64_t x);

  /// @brief Method cross, addr 0x6a52a20, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 cross(::Unity::Mathematics::double3 x, ::Unity::Mathematics::double3 y);

  /// @brief Method cross, addr 0x6a529f8, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 cross(::Unity::Mathematics::float3 x, ::Unity::Mathematics::float3 y);

  /// @brief Method csum, addr 0x6a57300, size 0x8, virtual false, abstract: false, final false
  static inline double_t csum(::Unity::Mathematics::double2 x);

  /// @brief Method csum, addr 0x6a57308, size 0xc, virtual false, abstract: false, final false
  static inline double_t csum(::Unity::Mathematics::double3 x);

  /// @brief Method csum, addr 0x6a57314, size 0x10, virtual false, abstract: false, final false
  static inline double_t csum(::Unity::Mathematics::double4 x);

  /// @brief Method csum, addr 0x6a572dc, size 0x8, virtual false, abstract: false, final false
  static inline float_t csum(::Unity::Mathematics::float2 x);

  /// @brief Method csum, addr 0x6a572e4, size 0xc, virtual false, abstract: false, final false
  static inline float_t csum(::Unity::Mathematics::float3 x);

  /// @brief Method csum, addr 0x6a572f0, size 0x10, virtual false, abstract: false, final false
  static inline float_t csum(::Unity::Mathematics::float4 x);

  /// @brief Method csum, addr 0x6a57274, size 0xc, virtual false, abstract: false, final false
  static inline int32_t csum(::Unity::Mathematics::int2 x);

  /// @brief Method csum, addr 0x6a57280, size 0x10, virtual false, abstract: false, final false
  static inline int32_t csum(::Unity::Mathematics::int3 x);

  /// @brief Method csum, addr 0x6a57290, size 0x18, virtual false, abstract: false, final false
  static inline int32_t csum(::Unity::Mathematics::int4 x);

  /// @brief Method csum, addr 0x6a572a8, size 0xc, virtual false, abstract: false, final false
  static inline uint32_t csum(::Unity::Mathematics::uint2 x);

  /// @brief Method csum, addr 0x6a572b4, size 0x10, virtual false, abstract: false, final false
  static inline uint32_t csum(::Unity::Mathematics::uint3 x);

  /// @brief Method csum, addr 0x6a572c4, size 0x18, virtual false, abstract: false, final false
  static inline uint32_t csum(::Unity::Mathematics::uint4 x);

  /// @brief Method decompose, addr 0x6a36af8, size 0x108, virtual false, abstract: false, final false
  static inline void decompose(::Unity::Mathematics::AffineTransform a, ::by_ref<::Unity::Mathematics::float3> translation, ::by_ref<::Unity::Mathematics::quaternion> rotation,
                               ::by_ref<::Unity::Mathematics::float3> scale);

  /// @brief Method degrees, addr 0x6a56ebc, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 degrees(::Unity::Mathematics::double2 x);

  /// @brief Method degrees, addr 0x6a56ed0, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 degrees(::Unity::Mathematics::double3 x);

  /// @brief Method degrees, addr 0x6a56ee8, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 degrees(::Unity::Mathematics::double4 x);

  /// @brief Method degrees, addr 0x6a56e64, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 degrees(::Unity::Mathematics::float2 x);

  /// @brief Method degrees, addr 0x6a56e78, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 degrees(::Unity::Mathematics::float3 x);

  /// @brief Method degrees, addr 0x6a56e90, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 degrees(::Unity::Mathematics::float4 x);

  /// @brief Method degrees, addr 0x6a56eac, size 0x10, virtual false, abstract: false, final false
  static inline double_t degrees(double_t x);

  /// @brief Method degrees, addr 0x6a56e54, size 0x10, virtual false, abstract: false, final false
  static inline float_t degrees(float_t x);

  /// @brief Method determinant, addr 0x6a39900, size 0x10, virtual false, abstract: false, final false
  static inline double_t determinant(::Unity::Mathematics::double2x2 m);

  /// @brief Method determinant, addr 0x6a3ac1c, size 0x54, virtual false, abstract: false, final false
  static inline double_t determinant(::Unity::Mathematics::double3x3 m);

  /// @brief Method determinant, addr 0x6a3cc30, size 0xe8, virtual false, abstract: false, final false
  static inline double_t determinant(::Unity::Mathematics::double4x4 m);

  /// @brief Method determinant, addr 0x6a3d5e4, size 0x10, virtual false, abstract: false, final false
  static inline float_t determinant(::Unity::Mathematics::float2x2 m);

  /// @brief Method determinant, addr 0x6a3e708, size 0x54, virtual false, abstract: false, final false
  static inline float_t determinant(::Unity::Mathematics::float3x3 m);

  /// @brief Method determinant, addr 0x6a402b8, size 0xe8, virtual false, abstract: false, final false
  static inline float_t determinant(::Unity::Mathematics::float4x4 m);

  /// @brief Method determinant, addr 0x6a41670, size 0x18, virtual false, abstract: false, final false
  static inline int32_t determinant(::Unity::Mathematics::int2x2 m);

  /// @brief Method determinant, addr 0x6a429c8, size 0x4c, virtual false, abstract: false, final false
  static inline int32_t determinant(::Unity::Mathematics::int3x3 m);

  /// @brief Method determinant, addr 0x6a44468, size 0xc4, virtual false, abstract: false, final false
  static inline int32_t determinant(::Unity::Mathematics::int4x4 m);

  /// @brief Method distance, addr 0x6a5271c, size 0x88, virtual false, abstract: false, final false
  static inline double_t distance(::Unity::Mathematics::double2 x, ::Unity::Mathematics::double2 y);

  /// @brief Method distance, addr 0x6a527a4, size 0xa4, virtual false, abstract: false, final false
  static inline double_t distance(::Unity::Mathematics::double3 x, ::Unity::Mathematics::double3 y);

  /// @brief Method distance, addr 0x6a52848, size 0xc0, virtual false, abstract: false, final false
  static inline double_t distance(::Unity::Mathematics::double4 x, ::Unity::Mathematics::double4 y);

  /// @brief Method distance, addr 0x6a52714, size 0x8, virtual false, abstract: false, final false
  static inline double_t distance(double_t x, double_t y);

  /// @brief Method distance, addr 0x6a52528, size 0x88, virtual false, abstract: false, final false
  static inline float_t distance(::Unity::Mathematics::float2 x, ::Unity::Mathematics::float2 y);

  /// @brief Method distance, addr 0x6a525b0, size 0xa4, virtual false, abstract: false, final false
  static inline float_t distance(::Unity::Mathematics::float3 x, ::Unity::Mathematics::float3 y);

  /// @brief Method distance, addr 0x6a52654, size 0xc0, virtual false, abstract: false, final false
  static inline float_t distance(::Unity::Mathematics::float4 x, ::Unity::Mathematics::float4 y);

  /// @brief Method distance, addr 0x6a52520, size 0x8, virtual false, abstract: false, final false
  static inline float_t distance(float_t x, float_t y);

  /// @brief Method distancesq, addr 0x6a5298c, size 0x18, virtual false, abstract: false, final false
  static inline double_t distancesq(::Unity::Mathematics::double2 x, ::Unity::Mathematics::double2 y);

  /// @brief Method distancesq, addr 0x6a529a4, size 0x24, virtual false, abstract: false, final false
  static inline double_t distancesq(::Unity::Mathematics::double3 x, ::Unity::Mathematics::double3 y);

  /// @brief Method distancesq, addr 0x6a529c8, size 0x30, virtual false, abstract: false, final false
  static inline double_t distancesq(::Unity::Mathematics::double4 x, ::Unity::Mathematics::double4 y);

  /// @brief Method distancesq, addr 0x6a52980, size 0xc, virtual false, abstract: false, final false
  static inline double_t distancesq(double_t x, double_t y);

  /// @brief Method distancesq, addr 0x6a52914, size 0x18, virtual false, abstract: false, final false
  static inline float_t distancesq(::Unity::Mathematics::float2 x, ::Unity::Mathematics::float2 y);

  /// @brief Method distancesq, addr 0x6a5292c, size 0x24, virtual false, abstract: false, final false
  static inline float_t distancesq(::Unity::Mathematics::float3 x, ::Unity::Mathematics::float3 y);

  /// @brief Method distancesq, addr 0x6a52950, size 0x30, virtual false, abstract: false, final false
  static inline float_t distancesq(::Unity::Mathematics::float4 x, ::Unity::Mathematics::float4 y);

  /// @brief Method distancesq, addr 0x6a52908, size 0xc, virtual false, abstract: false, final false
  static inline float_t distancesq(float_t x, float_t y);

  /// @brief Method dot, addr 0x6a467a8, size 0x10, virtual false, abstract: false, final false
  static inline double_t dot(::Unity::Mathematics::double2 x, ::Unity::Mathematics::double2 y);

  /// @brief Method dot, addr 0x6a467b8, size 0x18, virtual false, abstract: false, final false
  static inline double_t dot(::Unity::Mathematics::double3 x, ::Unity::Mathematics::double3 y);

  /// @brief Method dot, addr 0x6a467d0, size 0x20, virtual false, abstract: false, final false
  static inline double_t dot(::Unity::Mathematics::double4 x, ::Unity::Mathematics::double4 y);

  /// @brief Method dot, addr 0x6a467a0, size 0x8, virtual false, abstract: false, final false
  static inline double_t dot(double_t x, double_t y);

  /// @brief Method dot, addr 0x6a5fb70, size 0x20, virtual false, abstract: false, final false
  static inline float_t dot(::Unity::Mathematics::quaternion a, ::Unity::Mathematics::quaternion b);

  /// @brief Method dot, addr 0x6a46758, size 0x10, virtual false, abstract: false, final false
  static inline float_t dot(::Unity::Mathematics::float2 x, ::Unity::Mathematics::float2 y);

  /// @brief Method dot, addr 0x6a46768, size 0x18, virtual false, abstract: false, final false
  static inline float_t dot(::Unity::Mathematics::float3 x, ::Unity::Mathematics::float3 y);

  /// @brief Method dot, addr 0x6a46780, size 0x20, virtual false, abstract: false, final false
  static inline float_t dot(::Unity::Mathematics::float4 x, ::Unity::Mathematics::float4 y);

  /// @brief Method dot, addr 0x6a46750, size 0x8, virtual false, abstract: false, final false
  static inline float_t dot(float_t x, float_t y);

  /// @brief Method dot, addr 0x6a466a8, size 0x14, virtual false, abstract: false, final false
  static inline int32_t dot(::Unity::Mathematics::int2 x, ::Unity::Mathematics::int2 y);

  /// @brief Method dot, addr 0x6a466bc, size 0x18, virtual false, abstract: false, final false
  static inline int32_t dot(::Unity::Mathematics::int3 x, ::Unity::Mathematics::int3 y);

  /// @brief Method dot, addr 0x6a466d4, size 0x24, virtual false, abstract: false, final false
  static inline int32_t dot(::Unity::Mathematics::int4 x, ::Unity::Mathematics::int4 y);

  /// @brief Method dot, addr 0x6a466a0, size 0x8, virtual false, abstract: false, final false
  static inline int32_t dot(int32_t x, int32_t y);

  /// @brief Method dot, addr 0x6a46700, size 0x14, virtual false, abstract: false, final false
  static inline uint32_t dot(::Unity::Mathematics::uint2 x, ::Unity::Mathematics::uint2 y);

  /// @brief Method dot, addr 0x6a46714, size 0x18, virtual false, abstract: false, final false
  static inline uint32_t dot(::Unity::Mathematics::uint3 x, ::Unity::Mathematics::uint3 y);

  /// @brief Method dot, addr 0x6a4672c, size 0x24, virtual false, abstract: false, final false
  static inline uint32_t dot(::Unity::Mathematics::uint4 x, ::Unity::Mathematics::uint4 y);

  /// @brief Method dot, addr 0x6a466f8, size 0x8, virtual false, abstract: false, final false
  static inline uint32_t dot(uint32_t x, uint32_t y);

  /// @brief Method double2, addr 0x6a39340, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 double2(::Unity::Mathematics::bool2 v);

  /// @brief Method double2, addr 0x6a39488, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 double2(::Unity::Mathematics::float2 v);

  /// @brief Method double2, addr 0x6a39394, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 double2(::Unity::Mathematics::half v);

  /// @brief Method double2, addr 0x6a393f8, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 double2(::Unity::Mathematics::half2 v);

  /// @brief Method double2, addr 0x6a39368, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 double2(::Unity::Mathematics::int2 v);

  /// @brief Method double2, addr 0x6a39384, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 double2(::Unity::Mathematics::uint2 v);

  /// @brief Method double2, addr 0x6a39328, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 double2(bool v);

  /// @brief Method double2, addr 0x6a39320, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 double2(double_t v);

  /// @brief Method double2, addr 0x6a3947c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 double2(float_t v);

  /// @brief Method double2, addr 0x6a3935c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 double2(int32_t v);

  /// @brief Method double2, addr 0x6a39378, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 double2(uint32_t v);

  /// @brief Method double2, addr 0x6a39318, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 double2(double_t x, double_t y);

  /// @brief Method double2, addr 0x6a3931c, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 double2(::Unity::Mathematics::double2 xy);

  /// @brief Method double2x2, addr 0x6a397cc, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 double2x2(::Unity::Mathematics::double2 c0, ::Unity::Mathematics::double2 c1);

  /// @brief Method double2x2, addr 0x6a397d0, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 double2x2(double_t m00, double_t m01, double_t m10, double_t m11);

  /// @brief Method double2x2, addr 0x6a39810, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 double2x2(::Unity::Mathematics::bool2x2 v);

  /// @brief Method double2x2, addr 0x6a398b0, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 double2x2(::Unity::Mathematics::float2x2 v);

  /// @brief Method double2x2, addr 0x6a39850, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 double2x2(::Unity::Mathematics::int2x2 v);

  /// @brief Method double2x2, addr 0x6a39880, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 double2x2(::Unity::Mathematics::uint2x2 v);

  /// @brief Method double2x2, addr 0x6a397f0, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 double2x2(bool v);

  /// @brief Method double2x2, addr 0x6a397e0, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 double2x2(double_t v);

  /// @brief Method double2x2, addr 0x6a3989c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 double2x2(float_t v);

  /// @brief Method double2x2, addr 0x6a3983c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 double2x2(int32_t v);

  /// @brief Method double2x2, addr 0x6a3986c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 double2x2(uint32_t v);

  /// @brief Method double2x3, addr 0x6a39a08, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 double2x3(::Unity::Mathematics::double2 c0, ::Unity::Mathematics::double2 c1, ::Unity::Mathematics::double2 c2);

  /// @brief Method double2x3, addr 0x6a39a18, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 double2x3(double_t m00, double_t m01, double_t m02, double_t m10, double_t m11, double_t m12);

  /// @brief Method double2x3, addr 0x6a39a58, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 double2x3(::Unity::Mathematics::bool2x3 v);

  /// @brief Method double2x3, addr 0x6a39b44, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 double2x3(::Unity::Mathematics::float2x3 v);

  /// @brief Method double2x3, addr 0x6a39ab4, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 double2x3(::Unity::Mathematics::int2x3 v);

  /// @brief Method double2x3, addr 0x6a39afc, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 double2x3(::Unity::Mathematics::uint2x3 v);

  /// @brief Method double2x3, addr 0x6a39a38, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 double2x3(bool v);

  /// @brief Method double2x3, addr 0x6a39a28, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 double2x3(double_t v);

  /// @brief Method double2x3, addr 0x6a39b30, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 double2x3(float_t v);

  /// @brief Method double2x3, addr 0x6a39aa0, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 double2x3(int32_t v);

  /// @brief Method double2x3, addr 0x6a39ae8, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 double2x3(uint32_t v);

  /// @brief Method double2x4, addr 0x6a39ccc, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 double2x4(::Unity::Mathematics::double2 c0, ::Unity::Mathematics::double2 c1, ::Unity::Mathematics::double2 c2, ::Unity::Mathematics::double2 c3);

  /// @brief Method double2x4, addr 0x6a39ce0, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 double2x4(double_t m00, double_t m01, double_t m02, double_t m03, double_t m10, double_t m11, double_t m12, double_t m13);

  /// @brief Method double2x4, addr 0x6a39d2c, size 0x5c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 double2x4(::Unity::Mathematics::bool2x4 v);

  /// @brief Method double2x4, addr 0x6a39e58, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 double2x4(::Unity::Mathematics::float2x4 v);

  /// @brief Method double2x4, addr 0x6a39da0, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 double2x4(::Unity::Mathematics::int2x4 v);

  /// @brief Method double2x4, addr 0x6a39dfc, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 double2x4(::Unity::Mathematics::uint2x4 v);

  /// @brief Method double2x4, addr 0x6a39d08, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 double2x4(bool v);

  /// @brief Method double2x4, addr 0x6a39cf4, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 double2x4(double_t v);

  /// @brief Method double2x4, addr 0x6a39e40, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 double2x4(float_t v);

  /// @brief Method double2x4, addr 0x6a39d88, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 double2x4(int32_t v);

  /// @brief Method double2x4, addr 0x6a39de4, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 double2x4(uint32_t v);

  /// @brief Method double3, addr 0x6a3a078, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 double3(::Unity::Mathematics::bool3 v);

  /// @brief Method double3, addr 0x6a3a24c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 double3(::Unity::Mathematics::float3 v);

  /// @brief Method double3, addr 0x6a3a0e4, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 double3(::Unity::Mathematics::half v);

  /// @brief Method double3, addr 0x6a3a14c, size 0xf0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 double3(::Unity::Mathematics::half3 v);

  /// @brief Method double3, addr 0x6a3a0ac, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 double3(::Unity::Mathematics::int3 v);

  /// @brief Method double3, addr 0x6a3a0d0, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 double3(::Unity::Mathematics::uint3 v);

  /// @brief Method double3, addr 0x6a3a05c, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 double3(bool v);

  /// @brief Method double3, addr 0x6a3a050, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 double3(double_t v);

  /// @brief Method double3, addr 0x6a3a23c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 double3(float_t v);

  /// @brief Method double3, addr 0x6a3a09c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 double3(int32_t v);

  /// @brief Method double3, addr 0x6a3a0c0, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 double3(uint32_t v);

  /// @brief Method double3, addr 0x6a3a040, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 double3(double_t x, double_t y, double_t z);

  /// @brief Method double3, addr 0x6a3a044, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 double3(double_t x, ::Unity::Mathematics::double2 yz);

  /// @brief Method double3, addr 0x6a3a048, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 double3(::Unity::Mathematics::double2 xy, double_t z);

  /// @brief Method double3, addr 0x6a3a04c, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 double3(::Unity::Mathematics::double3 xyz);

  /// @brief Method double3x2, addr 0x6a3a644, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x2 double3x2(::Unity::Mathematics::double3 c0, ::Unity::Mathematics::double3 c1);

  /// @brief Method double3x2, addr 0x6a3a654, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x2 double3x2(double_t m00, double_t m01, double_t m10, double_t m11, double_t m20, double_t m21);

  /// @brief Method double3x2, addr 0x6a3a694, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x2 double3x2(::Unity::Mathematics::bool3x2 v);

  /// @brief Method double3x2, addr 0x6a3a780, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x2 double3x2(::Unity::Mathematics::float3x2 v);

  /// @brief Method double3x2, addr 0x6a3a6f0, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x2 double3x2(::Unity::Mathematics::int3x2 v);

  /// @brief Method double3x2, addr 0x6a3a738, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x2 double3x2(::Unity::Mathematics::uint3x2 v);

  /// @brief Method double3x2, addr 0x6a3a674, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x2 double3x2(bool v);

  /// @brief Method double3x2, addr 0x6a3a664, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x2 double3x2(double_t v);

  /// @brief Method double3x2, addr 0x6a3a76c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x2 double3x2(float_t v);

  /// @brief Method double3x2, addr 0x6a3a6dc, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x2 double3x2(int32_t v);

  /// @brief Method double3x2, addr 0x6a3a724, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x2 double3x2(uint32_t v);

  /// @brief Method double3x3, addr 0x6a3a8fc, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 double3x3(::Unity::Mathematics::double3 c0, ::Unity::Mathematics::double3 c1, ::Unity::Mathematics::double3 c2);

  /// @brief Method double3x3, addr 0x6a3a920, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 double3x3(double_t m00, double_t m01, double_t m02, double_t m10, double_t m11, double_t m12, double_t m20, double_t m21, double_t m22);

  /// @brief Method double3x3, addr 0x6a3a97c, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 double3x3(::Unity::Mathematics::bool3x3 v);

  /// @brief Method double3x3, addr 0x6a3aae8, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 double3x3(::Unity::Mathematics::float3x3 v);

  /// @brief Method double3x3, addr 0x6a3aa10, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 double3x3(::Unity::Mathematics::int3x3 v);

  /// @brief Method double3x3, addr 0x6a3aa7c, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 double3x3(::Unity::Mathematics::uint3x3 v);

  /// @brief Method double3x3, addr 0x6a3a954, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 double3x3(bool v);

  /// @brief Method double3x3, addr 0x6a3a93c, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 double3x3(double_t v);

  /// @brief Method double3x3, addr 0x6a3aacc, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 double3x3(float_t v);

  /// @brief Method double3x3, addr 0x6a3a9f4, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 double3x3(int32_t v);

  /// @brief Method double3x3, addr 0x6a3aa60, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 double3x3(uint32_t v);

  /// @brief Method double3x4, addr 0x6a3ae38, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 double3x4(::Unity::Mathematics::double3 c0, ::Unity::Mathematics::double3 c1, ::Unity::Mathematics::double3 c2, ::Unity::Mathematics::double3 c3);

  /// @brief Method double3x4, addr 0x6a3ae6c, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 double3x4(double_t m00, double_t m01, double_t m02, double_t m03, double_t m10, double_t m11, double_t m12, double_t m13, double_t m20, double_t m21,
                                                          double_t m22, double_t m23);

  /// @brief Method double3x4, addr 0x6a3aee8, size 0x9c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 double3x4(::Unity::Mathematics::bool3x4 v);

  /// @brief Method double3x4, addr 0x6a3b0ac, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 double3x4(::Unity::Mathematics::float3x4 v);

  /// @brief Method double3x4, addr 0x6a3afa4, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 double3x4(::Unity::Mathematics::int3x4 v);

  /// @brief Method double3x4, addr 0x6a3b028, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 double3x4(::Unity::Mathematics::uint3x4 v);

  /// @brief Method double3x4, addr 0x6a3aebc, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 double3x4(bool v);

  /// @brief Method double3x4, addr 0x6a3aea0, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 double3x4(double_t v);

  /// @brief Method double3x4, addr 0x6a3b08c, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 double3x4(float_t v);

  /// @brief Method double3x4, addr 0x6a3af84, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 double3x4(int32_t v);

  /// @brief Method double3x4, addr 0x6a3b008, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 double3x4(uint32_t v);

  /// @brief Method double4, addr 0x6a3b42c, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 double4(::Unity::Mathematics::bool4 v);

  /// @brief Method double4, addr 0x6a3b670, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 double4(::Unity::Mathematics::float4 v);

  /// @brief Method double4, addr 0x6a3b4b8, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 double4(::Unity::Mathematics::half v);

  /// @brief Method double4, addr 0x6a3b524, size 0x138, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 double4(::Unity::Mathematics::half4 v);

  /// @brief Method double4, addr 0x6a3b46c, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 double4(::Unity::Mathematics::int4 v);

  /// @brief Method double4, addr 0x6a3b49c, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 double4(::Unity::Mathematics::uint4 v);

  /// @brief Method double4, addr 0x6a3b40c, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 double4(bool v);

  /// @brief Method double4, addr 0x6a3b3fc, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 double4(double_t v);

  /// @brief Method double4, addr 0x6a3b65c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 double4(float_t v);

  /// @brief Method double4, addr 0x6a3b458, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 double4(int32_t v);

  /// @brief Method double4, addr 0x6a3b488, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 double4(uint32_t v);

  /// @brief Method double4, addr 0x6a3b3dc, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 double4(double_t x, double_t y, double_t z, double_t w);

  /// @brief Method double4, addr 0x6a3b3e0, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 double4(double_t x, double_t y, ::Unity::Mathematics::double2 zw);

  /// @brief Method double4, addr 0x6a3b3e4, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 double4(double_t x, ::Unity::Mathematics::double2 yz, double_t w);

  /// @brief Method double4, addr 0x6a3b3e8, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 double4(double_t x, ::Unity::Mathematics::double3 yzw);

  /// @brief Method double4, addr 0x6a3b3ec, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 double4(::Unity::Mathematics::double2 xy, double_t z, double_t w);

  /// @brief Method double4, addr 0x6a3b3f0, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 double4(::Unity::Mathematics::double2 xy, ::Unity::Mathematics::double2 zw);

  /// @brief Method double4, addr 0x6a3b3f4, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 double4(::Unity::Mathematics::double3 xyz, double_t w);

  /// @brief Method double4, addr 0x6a3b3f8, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 double4(::Unity::Mathematics::double4 xyzw);

  /// @brief Method double4x2, addr 0x6a3bb34, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 double4x2(::Unity::Mathematics::double4 c0, ::Unity::Mathematics::double4 c1);

  /// @brief Method double4x2, addr 0x6a3bb48, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 double4x2(double_t m00, double_t m01, double_t m10, double_t m11, double_t m20, double_t m21, double_t m30, double_t m31);

  /// @brief Method double4x2, addr 0x6a3bb94, size 0x5c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 double4x2(::Unity::Mathematics::bool4x2 v);

  /// @brief Method double4x2, addr 0x6a3bcc0, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 double4x2(::Unity::Mathematics::float4x2 v);

  /// @brief Method double4x2, addr 0x6a3bc08, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 double4x2(::Unity::Mathematics::int4x2 v);

  /// @brief Method double4x2, addr 0x6a3bc64, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 double4x2(::Unity::Mathematics::uint4x2 v);

  /// @brief Method double4x2, addr 0x6a3bb70, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 double4x2(bool v);

  /// @brief Method double4x2, addr 0x6a3bb5c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 double4x2(double_t v);

  /// @brief Method double4x2, addr 0x6a3bca8, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 double4x2(float_t v);

  /// @brief Method double4x2, addr 0x6a3bbf0, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 double4x2(int32_t v);

  /// @brief Method double4x2, addr 0x6a3bc4c, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 double4x2(uint32_t v);

  /// @brief Method double4x3, addr 0x6a3beb8, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 double4x3(::Unity::Mathematics::double4 c0, ::Unity::Mathematics::double4 c1, ::Unity::Mathematics::double4 c2);

  /// @brief Method double4x3, addr 0x6a3bee4, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 double4x3(double_t m00, double_t m01, double_t m02, double_t m10, double_t m11, double_t m12, double_t m20, double_t m21, double_t m22, double_t m30,
                                                          double_t m31, double_t m32);

  /// @brief Method double4x3, addr 0x6a3bf60, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 double4x3(::Unity::Mathematics::bool4x3 v);

  /// @brief Method double4x3, addr 0x6a3c10c, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 double4x3(::Unity::Mathematics::float4x3 v);

  /// @brief Method double4x3, addr 0x6a3c004, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 double4x3(::Unity::Mathematics::int4x3 v);

  /// @brief Method double4x3, addr 0x6a3c088, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 double4x3(::Unity::Mathematics::uint4x3 v);

  /// @brief Method double4x3, addr 0x6a3bf34, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 double4x3(bool v);

  /// @brief Method double4x3, addr 0x6a3bf18, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 double4x3(double_t v);

  /// @brief Method double4x3, addr 0x6a3c0ec, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 double4x3(float_t v);

  /// @brief Method double4x3, addr 0x6a3bfe4, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 double4x3(int32_t v);

  /// @brief Method double4x3, addr 0x6a3c068, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 double4x3(uint32_t v);

  /// @brief Method double4x4, addr 0x6a3c3dc, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x4 double4x4(::Unity::Mathematics::double4 c0, ::Unity::Mathematics::double4 c1, ::Unity::Mathematics::double4 c2, ::Unity::Mathematics::double4 c3);

  /// @brief Method double4x4, addr 0x6a3c420, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x4 double4x4(double_t m00, double_t m01, double_t m02, double_t m03, double_t m10, double_t m11, double_t m12, double_t m13, double_t m20, double_t m21,
                                                          double_t m22, double_t m23, double_t m30, double_t m31, double_t m32, double_t m33);

  /// @brief Method double4x4, addr 0x6a3c4cc, size 0xac, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x4 double4x4(::Unity::Mathematics::bool4x4 v);

  /// @brief Method double4x4, addr 0x6a3c6f8, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x4 double4x4(::Unity::Mathematics::float4x4 v);

  /// @brief Method double4x4, addr 0x6a3c5a0, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x4 double4x4(::Unity::Mathematics::int4x4 v);

  /// @brief Method double4x4, addr 0x6a3c64c, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x4 double4x4(::Unity::Mathematics::uint4x4 v);

  /// @brief Method double4x4, addr 0x6a3c498, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x4 double4x4(bool v);

  /// @brief Method double4x4, addr 0x6a3c474, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x4 double4x4(double_t v);

  /// @brief Method double4x4, addr 0x6a3c6d0, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x4 double4x4(float_t v);

  /// @brief Method double4x4, addr 0x6a3c578, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x4 double4x4(int32_t v);

  /// @brief Method double4x4, addr 0x6a3c624, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x4 double4x4(uint32_t v);

  /// @brief Method down, addr 0x6a58124, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 down();

  /// @brief Method exp, addr 0x6a4e1c4, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 exp(::Unity::Mathematics::double2 x);

  /// @brief Method exp, addr 0x6a4e274, size 0x100, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 exp(::Unity::Mathematics::double3 x);

  /// @brief Method exp, addr 0x6a4e374, size 0x148, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 exp(::Unity::Mathematics::double4 x);

  /// @brief Method exp, addr 0x6a4de50, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 exp(::Unity::Mathematics::float2 x);

  /// @brief Method exp, addr 0x6a4df08, size 0x108, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 exp(::Unity::Mathematics::float3 x);

  /// @brief Method exp, addr 0x6a4e010, size 0x154, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 exp(::Unity::Mathematics::float4 x);

  /// @brief Method exp, addr 0x6a60018, size 0x1a0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion exp(::Unity::Mathematics::quaternion q);

  /// @brief Method exp, addr 0x6a4e164, size 0x60, virtual false, abstract: false, final false
  static inline double_t exp(double_t x);

  /// @brief Method exp, addr 0x6a4dde8, size 0x68, virtual false, abstract: false, final false
  static inline float_t exp(float_t x);

  /// @brief Method exp10, addr 0x6a4f03c, size 0xc4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 exp10(::Unity::Mathematics::double2 x);

  /// @brief Method exp10, addr 0x6a4f100, size 0x110, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 exp10(::Unity::Mathematics::double3 x);

  /// @brief Method exp10, addr 0x6a4f210, size 0x164, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 exp10(::Unity::Mathematics::double4 x);

  /// @brief Method exp10, addr 0x6a4ec8c, size 0xcc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 exp10(::Unity::Mathematics::float2 x);

  /// @brief Method exp10, addr 0x6a4ed58, size 0x114, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 exp10(::Unity::Mathematics::float3 x);

  /// @brief Method exp10, addr 0x6a4ee6c, size 0x168, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 exp10(::Unity::Mathematics::float4 x);

  /// @brief Method exp10, addr 0x6a4efd4, size 0x68, virtual false, abstract: false, final false
  static inline double_t exp10(double_t x);

  /// @brief Method exp10, addr 0x6a4ec18, size 0x74, virtual false, abstract: false, final false
  static inline float_t exp10(float_t x);

  /// @brief Method exp2, addr 0x6a4e8e0, size 0xc4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 exp2(::Unity::Mathematics::double2 x);

  /// @brief Method exp2, addr 0x6a4e9a4, size 0x110, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 exp2(::Unity::Mathematics::double3 x);

  /// @brief Method exp2, addr 0x6a4eab4, size 0x164, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 exp2(::Unity::Mathematics::double4 x);

  /// @brief Method exp2, addr 0x6a4e530, size 0xcc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 exp2(::Unity::Mathematics::float2 x);

  /// @brief Method exp2, addr 0x6a4e5fc, size 0x114, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 exp2(::Unity::Mathematics::float3 x);

  /// @brief Method exp2, addr 0x6a4e710, size 0x168, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 exp2(::Unity::Mathematics::float4 x);

  /// @brief Method exp2, addr 0x6a4e878, size 0x68, virtual false, abstract: false, final false
  static inline double_t exp2(double_t x);

  /// @brief Method exp2, addr 0x6a4e4bc, size 0x74, virtual false, abstract: false, final false
  static inline float_t exp2(float_t x);

  /// @brief Method f16tof32, addr 0x6a575d4, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 f16tof32(::Unity::Mathematics::uint2 x);

  /// @brief Method f16tof32, addr 0x6a57684, size 0xf4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 f16tof32(::Unity::Mathematics::uint3 x);

  /// @brief Method f16tof32, addr 0x6a57778, size 0x148, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 f16tof32(::Unity::Mathematics::uint4 x);

  /// @brief Method f16tof32, addr 0x6a5757c, size 0x58, virtual false, abstract: false, final false
  static inline float_t f16tof32(uint32_t x);

  /// @brief Method f32tof16, addr 0x6a5791c, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 f32tof16(::Unity::Mathematics::float2 x);

  /// @brief Method f32tof16, addr 0x6a579d8, size 0xfc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 f32tof16(::Unity::Mathematics::float3 x);

  /// @brief Method f32tof16, addr 0x6a57ad4, size 0x144, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 f32tof16(::Unity::Mathematics::float4 x);

  /// @brief Method f32tof16, addr 0x6a578c0, size 0x5c, virtual false, abstract: false, final false
  static inline uint32_t f32tof16(float_t x);

  /// @brief Method faceforward, addr 0x6a542d8, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 faceforward(::Unity::Mathematics::double2 n, ::Unity::Mathematics::double2 i, ::Unity::Mathematics::double2 ng);

  /// @brief Method faceforward, addr 0x6a542fc, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 faceforward(::Unity::Mathematics::double3 n, ::Unity::Mathematics::double3 i, ::Unity::Mathematics::double3 ng);

  /// @brief Method faceforward, addr 0x6a54338, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 faceforward(::Unity::Mathematics::double4 n, ::Unity::Mathematics::double4 i, ::Unity::Mathematics::double4 ng);

  /// @brief Method faceforward, addr 0x6a54228, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 faceforward(::Unity::Mathematics::float2 n, ::Unity::Mathematics::float2 i, ::Unity::Mathematics::float2 ng);

  /// @brief Method faceforward, addr 0x6a5424c, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 faceforward(::Unity::Mathematics::float3 n, ::Unity::Mathematics::float3 i, ::Unity::Mathematics::float3 ng);

  /// @brief Method faceforward, addr 0x6a54288, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 faceforward(::Unity::Mathematics::float4 n, ::Unity::Mathematics::float4 i, ::Unity::Mathematics::float4 ng);

  /// @brief Method fastinverse, addr 0x6a3b11c, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 fastinverse(::Unity::Mathematics::double3x4 m);

  /// @brief Method fastinverse, addr 0x6a3cb98, size 0x98, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x4 fastinverse(::Unity::Mathematics::double4x4 m);

  /// @brief Method fastinverse, addr 0x6a3eb40, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 fastinverse(::Unity::Mathematics::float3x4 m);

  /// @brief Method fastinverse, addr 0x6a40220, size 0x98, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 fastinverse(::Unity::Mathematics::float4x4 m);

  /// @brief Method float2, addr 0x6a3d04c, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 float2(::Unity::Mathematics::bool2 v);

  /// @brief Method float2, addr 0x6a3d18c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 float2(::Unity::Mathematics::double2 v);

  /// @brief Method float2, addr 0x6a3d0a0, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 float2(::Unity::Mathematics::half v);

  /// @brief Method float2, addr 0x6a3d100, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 float2(::Unity::Mathematics::half2 v);

  /// @brief Method float2, addr 0x6a3d074, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 float2(::Unity::Mathematics::int2 v);

  /// @brief Method float2, addr 0x6a3d090, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 float2(::Unity::Mathematics::uint2 v);

  /// @brief Method float2, addr 0x6a3d034, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 float2(bool v);

  /// @brief Method float2, addr 0x6a3d180, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 float2(double_t v);

  /// @brief Method float2, addr 0x6a3d02c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 float2(float_t v);

  /// @brief Method float2, addr 0x6a3d068, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 float2(int32_t v);

  /// @brief Method float2, addr 0x6a3d084, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 float2(uint32_t v);

  /// @brief Method float2, addr 0x6a3d024, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 float2(float_t x, float_t y);

  /// @brief Method float2, addr 0x6a3d028, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 float2(::Unity::Mathematics::float2 xy);

  /// @brief Method float2x2, addr 0x6a3d4b0, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 float2x2(::Unity::Mathematics::float2 c0, ::Unity::Mathematics::float2 c1);

  /// @brief Method float2x2, addr 0x6a3d4b4, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 float2x2(float_t m00, float_t m01, float_t m10, float_t m11);

  /// @brief Method float2x2, addr 0x6a3d4f4, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 float2x2(::Unity::Mathematics::bool2x2 v);

  /// @brief Method float2x2, addr 0x6a3d594, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 float2x2(::Unity::Mathematics::double2x2 v);

  /// @brief Method float2x2, addr 0x6a3d534, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 float2x2(::Unity::Mathematics::int2x2 v);

  /// @brief Method float2x2, addr 0x6a3d564, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 float2x2(::Unity::Mathematics::uint2x2 v);

  /// @brief Method float2x2, addr 0x6a3d4d4, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 float2x2(bool v);

  /// @brief Method float2x2, addr 0x6a3d580, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 float2x2(double_t v);

  /// @brief Method float2x2, addr 0x6a3d4c4, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 float2x2(float_t v);

  /// @brief Method float2x2, addr 0x6a3d520, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 float2x2(int32_t v);

  /// @brief Method float2x2, addr 0x6a3d550, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 float2x2(uint32_t v);

  /// @brief Method float2x3, addr 0x6a3d6ac, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 float2x3(::Unity::Mathematics::float2 c0, ::Unity::Mathematics::float2 c1, ::Unity::Mathematics::float2 c2);

  /// @brief Method float2x3, addr 0x6a3d6bc, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 float2x3(float_t m00, float_t m01, float_t m02, float_t m10, float_t m11, float_t m12);

  /// @brief Method float2x3, addr 0x6a3d6fc, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 float2x3(::Unity::Mathematics::bool2x3 v);

  /// @brief Method float2x3, addr 0x6a3d7e8, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 float2x3(::Unity::Mathematics::double2x3 v);

  /// @brief Method float2x3, addr 0x6a3d758, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 float2x3(::Unity::Mathematics::int2x3 v);

  /// @brief Method float2x3, addr 0x6a3d7a0, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 float2x3(::Unity::Mathematics::uint2x3 v);

  /// @brief Method float2x3, addr 0x6a3d6dc, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 float2x3(bool v);

  /// @brief Method float2x3, addr 0x6a3d7d4, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 float2x3(double_t v);

  /// @brief Method float2x3, addr 0x6a3d6cc, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 float2x3(float_t v);

  /// @brief Method float2x3, addr 0x6a3d744, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 float2x3(int32_t v);

  /// @brief Method float2x3, addr 0x6a3d78c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 float2x3(uint32_t v);

  /// @brief Method float2x4, addr 0x6a3d91c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x4 float2x4(::Unity::Mathematics::float2 c0, ::Unity::Mathematics::float2 c1, ::Unity::Mathematics::float2 c2, ::Unity::Mathematics::float2 c3);

  /// @brief Method float2x4, addr 0x6a3d930, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x4 float2x4(float_t m00, float_t m01, float_t m02, float_t m03, float_t m10, float_t m11, float_t m12, float_t m13);

  /// @brief Method float2x4, addr 0x6a3d974, size 0x5c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x4 float2x4(::Unity::Mathematics::bool2x4 v);

  /// @brief Method float2x4, addr 0x6a3da88, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x4 float2x4(::Unity::Mathematics::double2x4 v);

  /// @brief Method float2x4, addr 0x6a3d9e0, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x4 float2x4(::Unity::Mathematics::int2x4 v);

  /// @brief Method float2x4, addr 0x6a3da34, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x4 float2x4(::Unity::Mathematics::uint2x4 v);

  /// @brief Method float2x4, addr 0x6a3d950, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x4 float2x4(bool v);

  /// @brief Method float2x4, addr 0x6a3da78, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x4 float2x4(double_t v);

  /// @brief Method float2x4, addr 0x6a3d944, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x4 float2x4(float_t v);

  /// @brief Method float2x4, addr 0x6a3d9d0, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x4 float2x4(int32_t v);

  /// @brief Method float2x4, addr 0x6a3da24, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x4 float2x4(uint32_t v);

  /// @brief Method float3, addr 0x6a3dc2c, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 float3(::Unity::Mathematics::bool3 v);

  /// @brief Method float3, addr 0x6a3dddc, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 float3(::Unity::Mathematics::double3 v);

  /// @brief Method float3, addr 0x6a3dc98, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 float3(::Unity::Mathematics::half v);

  /// @brief Method float3, addr 0x6a3dcfc, size 0xd0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 float3(::Unity::Mathematics::half3 v);

  /// @brief Method float3, addr 0x6a3dc60, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 float3(::Unity::Mathematics::int3 v);

  /// @brief Method float3, addr 0x6a3dc84, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 float3(::Unity::Mathematics::uint3 v);

  /// @brief Method float3, addr 0x6a3dc10, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 float3(bool v);

  /// @brief Method float3, addr 0x6a3ddcc, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 float3(double_t v);

  /// @brief Method float3, addr 0x6a3dc04, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 float3(float_t v);

  /// @brief Method float3, addr 0x6a3dc50, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 float3(int32_t v);

  /// @brief Method float3, addr 0x6a3dc74, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 float3(uint32_t v);

  /// @brief Method float3, addr 0x6a3dbf4, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 float3(float_t x, float_t y, float_t z);

  /// @brief Method float3, addr 0x6a3dbf8, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 float3(float_t x, ::Unity::Mathematics::float2 yz);

  /// @brief Method float3, addr 0x6a3dbfc, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 float3(::Unity::Mathematics::float2 xy, float_t z);

  /// @brief Method float3, addr 0x6a3dc00, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 float3(::Unity::Mathematics::float3 xyz);

  /// @brief Method float3x2, addr 0x6a3e1a4, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x2 float3x2(::Unity::Mathematics::float3 c0, ::Unity::Mathematics::float3 c1);

  /// @brief Method float3x2, addr 0x6a3e1b4, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x2 float3x2(float_t m00, float_t m01, float_t m10, float_t m11, float_t m20, float_t m21);

  /// @brief Method float3x2, addr 0x6a3e1f4, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x2 float3x2(::Unity::Mathematics::bool3x2 v);

  /// @brief Method float3x2, addr 0x6a3e2e0, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x2 float3x2(::Unity::Mathematics::double3x2 v);

  /// @brief Method float3x2, addr 0x6a3e250, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x2 float3x2(::Unity::Mathematics::int3x2 v);

  /// @brief Method float3x2, addr 0x6a3e298, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x2 float3x2(::Unity::Mathematics::uint3x2 v);

  /// @brief Method float3x2, addr 0x6a3e1d4, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x2 float3x2(bool v);

  /// @brief Method float3x2, addr 0x6a3e2cc, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x2 float3x2(double_t v);

  /// @brief Method float3x2, addr 0x6a3e1c4, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x2 float3x2(float_t v);

  /// @brief Method float3x2, addr 0x6a3e23c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x2 float3x2(int32_t v);

  /// @brief Method float3x2, addr 0x6a3e284, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x2 float3x2(uint32_t v);

  /// @brief Method float3x3, addr 0x6a3e410, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 float3x3(::Unity::Mathematics::float3 c0, ::Unity::Mathematics::float3 c1, ::Unity::Mathematics::float3 c2);

  /// @brief Method float3x3, addr 0x6a59570, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 float3x3(::Unity::Mathematics::float4x4 f4x4);

  /// @brief Method float3x3, addr 0x6a3e434, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 float3x3(float_t m00, float_t m01, float_t m02, float_t m10, float_t m11, float_t m12, float_t m20, float_t m21, float_t m22);

  /// @brief Method float3x3, addr 0x6a595a0, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 float3x3(::Unity::Mathematics::quaternion rotation);

  /// @brief Method float3x3, addr 0x6a3e488, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 float3x3(::Unity::Mathematics::bool3x3 v);

  /// @brief Method float3x3, addr 0x6a3e5dc, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 float3x3(::Unity::Mathematics::double3x3 v);

  /// @brief Method float3x3, addr 0x6a3e514, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 float3x3(::Unity::Mathematics::int3x3 v);

  /// @brief Method float3x3, addr 0x6a3e578, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 float3x3(::Unity::Mathematics::uint3x3 v);

  /// @brief Method float3x3, addr 0x6a3e460, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 float3x3(bool v);

  /// @brief Method float3x3, addr 0x6a3e5c8, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 float3x3(double_t v);

  /// @brief Method float3x3, addr 0x6a3e450, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 float3x3(float_t v);

  /// @brief Method float3x3, addr 0x6a3e500, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 float3x3(int32_t v);

  /// @brief Method float3x3, addr 0x6a3e564, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 float3x3(uint32_t v);

  /// @brief Method float3x4, addr 0x6a3e890, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 float3x4(::Unity::Mathematics::float3 c0, ::Unity::Mathematics::float3 c1, ::Unity::Mathematics::float3 c2, ::Unity::Mathematics::float3 c3);

  /// @brief Method float3x4, addr 0x6a3e8c4, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 float3x4(float_t m00, float_t m01, float_t m02, float_t m03, float_t m10, float_t m11, float_t m12, float_t m13, float_t m20, float_t m21, float_t m22,
                                                        float_t m23);

  /// @brief Method float3x4, addr 0x6a36540, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 float3x4(::Unity::Mathematics::AffineTransform transform);

  /// @brief Method float3x4, addr 0x6a3e934, size 0x9c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 float3x4(::Unity::Mathematics::bool3x4 v);

  /// @brief Method float3x4, addr 0x6a3ead4, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 float3x4(::Unity::Mathematics::double3x4 v);

  /// @brief Method float3x4, addr 0x6a3e9e4, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 float3x4(::Unity::Mathematics::int3x4 v);

  /// @brief Method float3x4, addr 0x6a3ea5c, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 float3x4(::Unity::Mathematics::uint3x4 v);

  /// @brief Method float3x4, addr 0x6a3e908, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 float3x4(bool v);

  /// @brief Method float3x4, addr 0x6a3eac0, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 float3x4(double_t v);

  /// @brief Method float3x4, addr 0x6a3e8f8, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 float3x4(float_t v);

  /// @brief Method float3x4, addr 0x6a3e9d0, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 float3x4(int32_t v);

  /// @brief Method float3x4, addr 0x6a3ea48, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 float3x4(uint32_t v);

  /// @brief Method float4, addr 0x6a3ed98, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 float4(::Unity::Mathematics::bool4 v);

  /// @brief Method float4, addr 0x6a3ef60, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 float4(::Unity::Mathematics::double4 v);

  /// @brief Method float4, addr 0x6a3ee24, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 float4(::Unity::Mathematics::half v);

  /// @brief Method float4, addr 0x6a3ee8c, size 0xc0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 float4(::Unity::Mathematics::half4 v);

  /// @brief Method float4, addr 0x6a3edd8, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 float4(::Unity::Mathematics::int4 v);

  /// @brief Method float4, addr 0x6a3ee08, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 float4(::Unity::Mathematics::uint4 v);

  /// @brief Method float4, addr 0x6a3ed78, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 float4(bool v);

  /// @brief Method float4, addr 0x6a3ef4c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 float4(double_t v);

  /// @brief Method float4, addr 0x6a3ed68, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 float4(float_t v);

  /// @brief Method float4, addr 0x6a3edc4, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 float4(int32_t v);

  /// @brief Method float4, addr 0x6a3edf4, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 float4(uint32_t v);

  /// @brief Method float4, addr 0x6a3ed48, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 float4(float_t x, float_t y, float_t z, float_t w);

  /// @brief Method float4, addr 0x6a3ed4c, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 float4(float_t x, float_t y, ::Unity::Mathematics::float2 zw);

  /// @brief Method float4, addr 0x6a3ed50, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 float4(float_t x, ::Unity::Mathematics::float2 yz, float_t w);

  /// @brief Method float4, addr 0x6a3ed54, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 float4(float_t x, ::Unity::Mathematics::float3 yzw);

  /// @brief Method float4, addr 0x6a3ed58, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 float4(::Unity::Mathematics::float2 xy, float_t z, float_t w);

  /// @brief Method float4, addr 0x6a3ed5c, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 float4(::Unity::Mathematics::float2 xy, ::Unity::Mathematics::float2 zw);

  /// @brief Method float4, addr 0x6a3ed60, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 float4(::Unity::Mathematics::float3 xyz, float_t w);

  /// @brief Method float4, addr 0x6a3ed64, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 float4(::Unity::Mathematics::float4 xyzw);

  /// @brief Method float4x2, addr 0x6a3f3d8, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x2 float4x2(::Unity::Mathematics::float4 c0, ::Unity::Mathematics::float4 c1);

  /// @brief Method float4x2, addr 0x6a3f3ec, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x2 float4x2(float_t m00, float_t m01, float_t m10, float_t m11, float_t m20, float_t m21, float_t m30, float_t m31);

  /// @brief Method float4x2, addr 0x6a3f430, size 0x5c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x2 float4x2(::Unity::Mathematics::bool4x2 v);

  /// @brief Method float4x2, addr 0x6a3f544, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x2 float4x2(::Unity::Mathematics::double4x2 v);

  /// @brief Method float4x2, addr 0x6a3f49c, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x2 float4x2(::Unity::Mathematics::int4x2 v);

  /// @brief Method float4x2, addr 0x6a3f4f0, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x2 float4x2(::Unity::Mathematics::uint4x2 v);

  /// @brief Method float4x2, addr 0x6a3f40c, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x2 float4x2(bool v);

  /// @brief Method float4x2, addr 0x6a3f534, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x2 float4x2(double_t v);

  /// @brief Method float4x2, addr 0x6a3f400, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x2 float4x2(float_t v);

  /// @brief Method float4x2, addr 0x6a3f48c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x2 float4x2(int32_t v);

  /// @brief Method float4x2, addr 0x6a3f4e0, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x2 float4x2(uint32_t v);

  /// @brief Method float4x3, addr 0x6a3f6d0, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x3 float4x3(::Unity::Mathematics::float4 c0, ::Unity::Mathematics::float4 c1, ::Unity::Mathematics::float4 c2);

  /// @brief Method float4x3, addr 0x6a3f6ec, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x3 float4x3(float_t m00, float_t m01, float_t m02, float_t m10, float_t m11, float_t m12, float_t m20, float_t m21, float_t m22, float_t m30, float_t m31,
                                                        float_t m32);

  /// @brief Method float4x3, addr 0x6a3f75c, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x3 float4x3(::Unity::Mathematics::bool4x3 v);

  /// @brief Method float4x3, addr 0x6a3f8e4, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x3 float4x3(::Unity::Mathematics::double4x3 v);

  /// @brief Method float4x3, addr 0x6a3f7f4, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x3 float4x3(::Unity::Mathematics::int4x3 v);

  /// @brief Method float4x3, addr 0x6a3f86c, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x3 float4x3(::Unity::Mathematics::uint4x3 v);

  /// @brief Method float4x3, addr 0x6a3f730, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x3 float4x3(bool v);

  /// @brief Method float4x3, addr 0x6a3f8d0, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x3 float4x3(double_t v);

  /// @brief Method float4x3, addr 0x6a3f720, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x3 float4x3(float_t v);

  /// @brief Method float4x3, addr 0x6a3f7e0, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x3 float4x3(int32_t v);

  /// @brief Method float4x3, addr 0x6a3f858, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x3 float4x3(uint32_t v);

  /// @brief Method float4x4, addr 0x6a3fb14, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 float4x4(::Unity::Mathematics::float4 c0, ::Unity::Mathematics::float4 c1, ::Unity::Mathematics::float4 c2, ::Unity::Mathematics::float4 c3);

  /// @brief Method float4x4, addr 0x6a3fb38, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 float4x4(float_t m00, float_t m01, float_t m02, float_t m03, float_t m10, float_t m11, float_t m12, float_t m13, float_t m20, float_t m21, float_t m22,
                                                        float_t m23, float_t m30, float_t m31, float_t m32, float_t m33);

  /// @brief Method float4x4, addr 0x6a595b8, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 float4x4(::Unity::Mathematics::float3x3 rotation, ::Unity::Mathematics::float3 translation);

  /// @brief Method float4x4, addr 0x6a59608, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 float4x4(::Unity::Mathematics::quaternion rotation, ::Unity::Mathematics::float3 translation);

  /// @brief Method float4x4, addr 0x6a364e8, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 float4x4(::Unity::Mathematics::AffineTransform transform);

  /// @brief Method float4x4, addr 0x6a59620, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 float4x4(::Unity::Mathematics::RigidTransform transform);

  /// @brief Method float4x4, addr 0x6a3fbd0, size 0xac, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 float4x4(::Unity::Mathematics::bool4x4 v);

  /// @brief Method float4x4, addr 0x6a3fdc0, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 float4x4(::Unity::Mathematics::double4x4 v);

  /// @brief Method float4x4, addr 0x6a3fc90, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 float4x4(::Unity::Mathematics::int4x4 v);

  /// @brief Method float4x4, addr 0x6a3fd28, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 float4x4(::Unity::Mathematics::uint4x4 v);

  /// @brief Method float4x4, addr 0x6a3fb9c, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 float4x4(bool v);

  /// @brief Method float4x4, addr 0x6a3fdac, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 float4x4(double_t v);

  /// @brief Method float4x4, addr 0x6a3fb8c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 float4x4(float_t v);

  /// @brief Method float4x4, addr 0x6a3fc7c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 float4x4(int32_t v);

  /// @brief Method float4x4, addr 0x6a3fd14, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 float4x4(uint32_t v);

  /// @brief Method floor, addr 0x6a4b070, size 0x9c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 floor(::Unity::Mathematics::double2 x);

  /// @brief Method floor, addr 0x6a4b10c, size 0xe0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 floor(::Unity::Mathematics::double3 x);

  /// @brief Method floor, addr 0x6a4b1ec, size 0x11c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 floor(::Unity::Mathematics::double4 x);

  /// @brief Method floor, addr 0x6a4ad78, size 0x9c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 floor(::Unity::Mathematics::float2 x);

  /// @brief Method floor, addr 0x6a4ae14, size 0xe0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 floor(::Unity::Mathematics::float3 x);

  /// @brief Method floor, addr 0x6a4aef4, size 0x11c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 floor(::Unity::Mathematics::float4 x);

  /// @brief Method floor, addr 0x6a4b010, size 0x60, virtual false, abstract: false, final false
  static inline double_t floor(double_t x);

  /// @brief Method floor, addr 0x6a4ad18, size 0x60, virtual false, abstract: false, final false
  static inline float_t floor(float_t x);

  /// @brief Method floorlog2, addr 0x6a5694c, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 floorlog2(::Unity::Mathematics::int2 x);

  /// @brief Method floorlog2, addr 0x6a56b94, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 floorlog2(::Unity::Mathematics::uint2 x);

  /// @brief Method floorlog2, addr 0x6a569c4, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 floorlog2(::Unity::Mathematics::int3 x);

  /// @brief Method floorlog2, addr 0x6a56c0c, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 floorlog2(::Unity::Mathematics::uint3 x);

  /// @brief Method floorlog2, addr 0x6a56a74, size 0xe8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 floorlog2(::Unity::Mathematics::int4 x);

  /// @brief Method floorlog2, addr 0x6a56cbc, size 0xe8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 floorlog2(::Unity::Mathematics::uint4 x);

  /// @brief Method floorlog2, addr 0x6a56914, size 0x38, virtual false, abstract: false, final false
  static inline int32_t floorlog2(int32_t x);

  /// @brief Method floorlog2, addr 0x6a56b5c, size 0x38, virtual false, abstract: false, final false
  static inline int32_t floorlog2(uint32_t x);

  /// @brief Method fmod, addr 0x6a509d0, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 fmod(::Unity::Mathematics::double2 x, ::Unity::Mathematics::double2 y);

  /// @brief Method fmod, addr 0x6a50a14, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 fmod(::Unity::Mathematics::double3 x, ::Unity::Mathematics::double3 y);

  /// @brief Method fmod, addr 0x6a50a7c, size 0x8c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 fmod(::Unity::Mathematics::double4 x, ::Unity::Mathematics::double4 y);

  /// @brief Method fmod, addr 0x6a50894, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 fmod(::Unity::Mathematics::float2 x, ::Unity::Mathematics::float2 y);

  /// @brief Method fmod, addr 0x6a508d8, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 fmod(::Unity::Mathematics::float3 x, ::Unity::Mathematics::float3 y);

  /// @brief Method fmod, addr 0x6a50940, size 0x8c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 fmod(::Unity::Mathematics::float4 x, ::Unity::Mathematics::float4 y);

  /// @brief Method fmod, addr 0x6a509cc, size 0x4, virtual false, abstract: false, final false
  static inline double_t fmod(double_t x, double_t y);

  /// @brief Method fmod, addr 0x6a50890, size 0x4, virtual false, abstract: false, final false
  static inline float_t fmod(float_t x, float_t y);

  /// @brief Method fold_to_uint, addr 0x6a594ec, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 fold_to_uint(::Unity::Mathematics::double2 x);

  /// @brief Method fold_to_uint, addr 0x6a5950c, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 fold_to_uint(::Unity::Mathematics::double3 x);

  /// @brief Method fold_to_uint, addr 0x6a59538, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 fold_to_uint(::Unity::Mathematics::double4 x);

  /// @brief Method fold_to_uint, addr 0x6a594dc, size 0x10, virtual false, abstract: false, final false
  static inline uint32_t fold_to_uint(double_t x);

  /// @brief Method forward, addr 0x6a58134, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 forward();

  /// @brief Method forward, addr 0x6a6117c, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 forward(::Unity::Mathematics::quaternion q);

  /// @brief Method frac, addr 0x6a4d110, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 frac(::Unity::Mathematics::double2 x);

  /// @brief Method frac, addr 0x6a4d1b4, size 0xec, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 frac(::Unity::Mathematics::double3 x);

  /// @brief Method frac, addr 0x6a4d2a0, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 frac(::Unity::Mathematics::double4 x);

  /// @brief Method frac, addr 0x6a4ced8, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 frac(::Unity::Mathematics::float2 x);

  /// @brief Method frac, addr 0x6a4cf7c, size 0xec, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 frac(::Unity::Mathematics::float3 x);

  /// @brief Method frac, addr 0x6a4d068, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 frac(::Unity::Mathematics::float4 x);

  /// @brief Method frac, addr 0x6a4d0ac, size 0x64, virtual false, abstract: false, final false
  static inline double_t frac(double_t x);

  /// @brief Method frac, addr 0x6a4ce74, size 0x64, virtual false, abstract: false, final false
  static inline float_t frac(float_t x);

  /// @brief Method half, addr 0x6a40650, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half half(double_t v);

  /// @brief Method half, addr 0x6a405f4, size 0x5c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half half(float_t v);

  /// @brief Method half, addr 0x6a405f0, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half half(::Unity::Mathematics::half x);

  /// @brief Method half2, addr 0x6a40840, size 0x94, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half2 half2(::Unity::Mathematics::double2 v);

  /// @brief Method half2, addr 0x6a40744, size 0x94, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half2 half2(::Unity::Mathematics::float2 v);

  /// @brief Method half2, addr 0x6a406d8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half2 half2(::Unity::Mathematics::half v);

  /// @brief Method half2, addr 0x6a407d8, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half2 half2(double_t v);

  /// @brief Method half2, addr 0x6a406e0, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half2 half2(float_t v);

  /// @brief Method half2, addr 0x6a406cc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half2 half2(::Unity::Mathematics::half x, ::Unity::Mathematics::half y);

  /// @brief Method half2, addr 0x6a406d4, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half2 half2(::Unity::Mathematics::half2 xy);

  /// @brief Method half3, addr 0x6a40b44, size 0xec, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half3 half3(::Unity::Mathematics::double3 v);

  /// @brief Method half3, addr 0x6a409f4, size 0xe0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half3 half3(::Unity::Mathematics::float3 v);

  /// @brief Method half3, addr 0x6a40974, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half3 half3(::Unity::Mathematics::half v);

  /// @brief Method half3, addr 0x6a40ad4, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half3 half3(double_t v);

  /// @brief Method half3, addr 0x6a40988, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half3 half3(float_t v);

  /// @brief Method half3, addr 0x6a4094c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half3 half3(::Unity::Mathematics::half x, ::Unity::Mathematics::half y, ::Unity::Mathematics::half z);

  /// @brief Method half3, addr 0x6a40960, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half3 half3(::Unity::Mathematics::half x, ::Unity::Mathematics::half2 yz);

  /// @brief Method half3, addr 0x6a40968, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half3 half3(::Unity::Mathematics::half2 xy, ::Unity::Mathematics::half z);

  /// @brief Method half3, addr 0x6a40970, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half3 half3(::Unity::Mathematics::half3 xyz);

  /// @brief Method half4, addr 0x6a40f50, size 0x13c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half4 half4(::Unity::Mathematics::double4 v);

  /// @brief Method half4, addr 0x6a40db4, size 0x130, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half4 half4(::Unity::Mathematics::float4 v);

  /// @brief Method half4, addr 0x6a40d3c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half4 half4(::Unity::Mathematics::half v);

  /// @brief Method half4, addr 0x6a40ee4, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half4 half4(double_t v);

  /// @brief Method half4, addr 0x6a40d4c, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half4 half4(float_t v);

  /// @brief Method half4, addr 0x6a40ccc, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half4 half4(::Unity::Mathematics::half x, ::Unity::Mathematics::half y, ::Unity::Mathematics::half z, ::Unity::Mathematics::half w);

  /// @brief Method half4, addr 0x6a40ce8, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half4 half4(::Unity::Mathematics::half x, ::Unity::Mathematics::half y, ::Unity::Mathematics::half2 zw);

  /// @brief Method half4, addr 0x6a40cf8, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half4 half4(::Unity::Mathematics::half x, ::Unity::Mathematics::half2 yz, ::Unity::Mathematics::half w);

  /// @brief Method half4, addr 0x6a40d0c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half4 half4(::Unity::Mathematics::half x, ::Unity::Mathematics::half3 yzw);

  /// @brief Method half4, addr 0x6a40d14, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half4 half4(::Unity::Mathematics::half2 xy, ::Unity::Mathematics::half z, ::Unity::Mathematics::half w);

  /// @brief Method half4, addr 0x6a40d28, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half4 half4(::Unity::Mathematics::half2 xy, ::Unity::Mathematics::half2 zw);

  /// @brief Method half4, addr 0x6a40d30, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half4 half4(::Unity::Mathematics::half3 xyz, ::Unity::Mathematics::half w);

  /// @brief Method half4, addr 0x6a40d38, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half4 half4(::Unity::Mathematics::half4 xyzw);

  /// @brief Method hash, addr 0x6a36c00, size 0xc8, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::AffineTransform a);

  /// @brief Method hash, addr 0x6a58110, size 0x4, virtual false, abstract: false, final false
  static inline uint32_t hash(void* pBuffer, int32_t numBytes, uint32_t seed);

  /// @brief Method hash, addr 0x6a610b8, size 0x60, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::quaternion q);

  /// @brief Method hash, addr 0x6a616bc, size 0x9c, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::RigidTransform t);

  /// @brief Method hash, addr 0x6a36e10, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::bool2 v);

  /// @brief Method hash, addr 0x6a3717c, size 0x74, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::bool2x2 v);

  /// @brief Method hash, addr 0x6a37304, size 0xb0, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::bool2x3 v);

  /// @brief Method hash, addr 0x6a37508, size 0xbc, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::bool2x4 v);

  /// @brief Method hash, addr 0x6a37708, size 0x54, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::bool3 v);

  /// @brief Method hash, addr 0x6a37b14, size 0xac, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::bool3x2 v);

  /// @brief Method hash, addr 0x6a37d94, size 0x114, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::bool3x3 v);

  /// @brief Method hash, addr 0x6a3817c, size 0x16c, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::bool3x4 v);

  /// @brief Method hash, addr 0x6a38534, size 0x48, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::bool4 v);

  /// @brief Method hash, addr 0x6a389b8, size 0xc0, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::bool4x2 v);

  /// @brief Method hash, addr 0x6a38c70, size 0x158, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::bool4x3 v);

  /// @brief Method hash, addr 0x6a39070, size 0x160, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::bool4x4 v);

  /// @brief Method hash, addr 0x6a39494, size 0x44, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::double2 v);

  /// @brief Method hash, addr 0x6a39910, size 0x78, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::double2x2 v);

  /// @brief Method hash, addr 0x6a39b80, size 0xa4, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::double2x3 v);

  /// @brief Method hash, addr 0x6a39ea0, size 0xd0, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::double2x4 v);

  /// @brief Method hash, addr 0x6a3a25c, size 0x60, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::double3 v);

  /// @brief Method hash, addr 0x6a3a7bc, size 0xa0, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::double3x2 v);

  /// @brief Method hash, addr 0x6a3ac70, size 0xe4, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::double3x3 v);

  /// @brief Method hash, addr 0x6a3b198, size 0x11c, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::double3x4 v);

  /// @brief Method hash, addr 0x6a3b684, size 0x80, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::double4 v);

  /// @brief Method hash, addr 0x6a3bd08, size 0xd8, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::double4x2 v);

  /// @brief Method hash, addr 0x6a3c174, size 0x138, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::double4x3 v);

  /// @brief Method hash, addr 0x6a3cd18, size 0x188, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::double4x4 v);

  /// @brief Method hash, addr 0x6a3d198, size 0x34, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::float2 v);

  /// @brief Method hash, addr 0x6a3d5f4, size 0x58, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::float2x2 v);

  /// @brief Method hash, addr 0x6a3d82c, size 0x74, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::float2x3 v);

  /// @brief Method hash, addr 0x6a3dacc, size 0x90, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::float2x4 v);

  /// @brief Method hash, addr 0x6a3ddec, size 0x48, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::float3 v);

  /// @brief Method hash, addr 0x6a3e324, size 0x70, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::float3x2 v);

  /// @brief Method hash, addr 0x6a3e75c, size 0x84, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::float3x3 v);

  /// @brief Method hash, addr 0x6a3ebbc, size 0xb4, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::float3x4 v);

  /// @brief Method hash, addr 0x6a3ef74, size 0x60, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::float4 v);

  /// @brief Method hash, addr 0x6a3f588, size 0x9c, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::float4x2 v);

  /// @brief Method hash, addr 0x6a3f948, size 0xe0, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::float4x3 v);

  /// @brief Method hash, addr 0x6a403a0, size 0x124, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::float4x4 v);

  /// @brief Method hash, addr 0x6a406b0, size 0x1c, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::half v);

  /// @brief Method hash, addr 0x6a408d4, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::half2 v);

  /// @brief Method hash, addr 0x6a40c30, size 0x4c, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::half3 v);

  /// @brief Method hash, addr 0x6a4108c, size 0x68, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::half4 v);

  /// @brief Method hash, addr 0x6a4125c, size 0x30, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::int2 v);

  /// @brief Method hash, addr 0x6a41688, size 0x50, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::int2x2 v);

  /// @brief Method hash, addr 0x6a41990, size 0x74, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::int2x3 v);

  /// @brief Method hash, addr 0x6a41d44, size 0x90, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::int2x4 v);

  /// @brief Method hash, addr 0x6a41fb4, size 0x40, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::int3 v);

  /// @brief Method hash, addr 0x6a42570, size 0x7c, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::int3x2 v);

  /// @brief Method hash, addr 0x6a42a14, size 0xac, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::int3x3 v);

  /// @brief Method hash, addr 0x6a42fc0, size 0xdc, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::int3x4 v);

  /// @brief Method hash, addr 0x6a4333c, size 0x58, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::int4 v);

  /// @brief Method hash, addr 0x6a4395c, size 0x9c, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::int4x2 v);

  /// @brief Method hash, addr 0x6a43e28, size 0xd8, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::int4x3 v);

  /// @brief Method hash, addr 0x6a4452c, size 0x114, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::int4x4 v);

  /// @brief Method hash, addr 0x6a618ec, size 0x30, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::uint2 v);

  /// @brief Method hash, addr 0x6a61cd0, size 0x50, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::uint2x2 v);

  /// @brief Method hash, addr 0x6a61fb4, size 0x74, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::uint2x3 v);

  /// @brief Method hash, addr 0x6a62358, size 0x90, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::uint2x4 v);

  /// @brief Method hash, addr 0x6a625a8, size 0x40, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::uint3 v);

  /// @brief Method hash, addr 0x6a62b54, size 0x7c, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::uint3x2 v);

  /// @brief Method hash, addr 0x6a62fac, size 0xac, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::uint3x3 v);

  /// @brief Method hash, addr 0x6a63568, size 0xdc, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::uint3x4 v);

  /// @brief Method hash, addr 0x6a638b4, size 0x58, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::uint4 v);

  /// @brief Method hash, addr 0x6a63ec8, size 0x9c, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::uint4x2 v);

  /// @brief Method hash, addr 0x6a64398, size 0xd8, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::uint4x3 v);

  /// @brief Method hash, addr 0x6a649ec, size 0x114, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::uint4x4 v);

  /// @brief Method hash_with_unaligned_loads, addr 0x6a57de0, size 0x17c, virtual false, abstract: false, final false
  static inline uint32_t hash_with_unaligned_loads(void* pBuffer, int32_t numBytes, uint32_t seed);

  /// @brief Method hash_without_unaligned_loads, addr 0x6a57f5c, size 0x1b4, virtual false, abstract: false, final false
  static inline uint32_t hash_without_unaligned_loads(void* pBuffer, int32_t numBytes, uint32_t seed);

  /// @brief Method hashwide, addr 0x6a36e48, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::bool2 v);

  /// @brief Method hashwide, addr 0x6a371f0, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::bool2x2 v);

  /// @brief Method hashwide, addr 0x6a373b4, size 0x8c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::bool2x3 v);

  /// @brief Method hashwide, addr 0x6a375c4, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::bool2x4 v);

  /// @brief Method hashwide, addr 0x6a394d8, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::double2 v);

  /// @brief Method hashwide, addr 0x6a39988, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::double2x2 v);

  /// @brief Method hashwide, addr 0x6a39c24, size 0xa8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::double2x3 v);

  /// @brief Method hashwide, addr 0x6a39f70, size 0xd0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::double2x4 v);

  /// @brief Method hashwide, addr 0x6a3d1cc, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::float2 v);

  /// @brief Method hashwide, addr 0x6a3d64c, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::float2x2 v);

  /// @brief Method hashwide, addr 0x6a3d8a0, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::float2x3 v);

  /// @brief Method hashwide, addr 0x6a3db5c, size 0x98, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::float2x4 v);

  /// @brief Method hashwide, addr 0x6a4090c, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::half2 v);

  /// @brief Method hashwide, addr 0x6a4128c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::int2 v);

  /// @brief Method hashwide, addr 0x6a416d8, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::int2x2 v);

  /// @brief Method hashwide, addr 0x6a41a04, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::int2x3 v);

  /// @brief Method hashwide, addr 0x6a41dd4, size 0x98, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::int2x4 v);

  /// @brief Method hashwide, addr 0x6a6191c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::uint2 v);

  /// @brief Method hashwide, addr 0x6a61d20, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::uint2x2 v);

  /// @brief Method hashwide, addr 0x6a62028, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::uint2x3 v);

  /// @brief Method hashwide, addr 0x6a623e8, size 0x98, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::uint2x4 v);

  /// @brief Method hashwide, addr 0x6a3775c, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::bool3 v);

  /// @brief Method hashwide, addr 0x6a37bc0, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::bool3x2 v);

  /// @brief Method hashwide, addr 0x6a37ea8, size 0xfc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::bool3x3 v);

  /// @brief Method hashwide, addr 0x6a382e8, size 0x144, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::bool3x4 v);

  /// @brief Method hashwide, addr 0x6a3a2bc, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::double3 v);

  /// @brief Method hashwide, addr 0x6a3a85c, size 0xa0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::double3x2 v);

  /// @brief Method hashwide, addr 0x6a3ad54, size 0xe4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::double3x3 v);

  /// @brief Method hashwide, addr 0x6a3b2b4, size 0x128, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::double3x4 v);

  /// @brief Method hashwide, addr 0x6a3de34, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::float3 v);

  /// @brief Method hashwide, addr 0x6a3e394, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::float3x2 v);

  /// @brief Method hashwide, addr 0x6a3e7e0, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::float3x3 v);

  /// @brief Method hashwide, addr 0x6a3ec70, size 0xd8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::float3x4 v);

  /// @brief Method hashwide, addr 0x6a40c7c, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::half3 v);

  /// @brief Method hashwide, addr 0x6a41ff4, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::int3 v);

  /// @brief Method hashwide, addr 0x6a425ec, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::int3x2 v);

  /// @brief Method hashwide, addr 0x6a42ac0, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::int3x3 v);

  /// @brief Method hashwide, addr 0x6a4309c, size 0xe4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::int3x4 v);

  /// @brief Method hashwide, addr 0x6a625e8, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::uint3 v);

  /// @brief Method hashwide, addr 0x6a62bd0, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::uint3x2 v);

  /// @brief Method hashwide, addr 0x6a63058, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::uint3x3 v);

  /// @brief Method hashwide, addr 0x6a63644, size 0xe4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::uint3x4 v);

  /// @brief Method hashwide, addr 0x6a36cc8, size 0x110, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::AffineTransform a);

  /// @brief Method hashwide, addr 0x6a61118, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::quaternion q);

  /// @brief Method hashwide, addr 0x6a61758, size 0xc0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::RigidTransform t);

  /// @brief Method hashwide, addr 0x6a3857c, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::bool4 v);

  /// @brief Method hashwide, addr 0x6a38a78, size 0xd8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::bool4x2 v);

  /// @brief Method hashwide, addr 0x6a38dc8, size 0xf8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::bool4x3 v);

  /// @brief Method hashwide, addr 0x6a391d0, size 0x148, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::bool4x4 v);

  /// @brief Method hashwide, addr 0x6a3b704, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::double4 v);

  /// @brief Method hashwide, addr 0x6a3bde0, size 0xd8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::double4x2 v);

  /// @brief Method hashwide, addr 0x6a3c2ac, size 0x130, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::double4x3 v);

  /// @brief Method hashwide, addr 0x6a3cea0, size 0x184, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::double4x4 v);

  /// @brief Method hashwide, addr 0x6a3efd4, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::float4 v);

  /// @brief Method hashwide, addr 0x6a3f624, size 0xac, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::float4x2 v);

  /// @brief Method hashwide, addr 0x6a3fa28, size 0xec, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::float4x3 v);

  /// @brief Method hashwide, addr 0x6a404c4, size 0x12c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::float4x4 v);

  /// @brief Method hashwide, addr 0x6a410f4, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::half4 v);

  /// @brief Method hashwide, addr 0x6a43394, size 0x5c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::int4 v);

  /// @brief Method hashwide, addr 0x6a439f8, size 0x9c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::int4x2 v);

  /// @brief Method hashwide, addr 0x6a43f00, size 0xd8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::int4x3 v);

  /// @brief Method hashwide, addr 0x6a44640, size 0x114, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::int4x4 v);

  /// @brief Method hashwide, addr 0x6a6390c, size 0x5c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::uint4 v);

  /// @brief Method hashwide, addr 0x6a63f64, size 0x9c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::uint4x2 v);

  /// @brief Method hashwide, addr 0x6a64470, size 0xd8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::uint4x3 v);

  /// @brief Method hashwide, addr 0x6a64b00, size 0x4644, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::uint4x4 v);

  /// @brief Method int2, addr 0x6a41194, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 int2(::Unity::Mathematics::bool2 v);

  /// @brief Method int2, addr 0x6a41228, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 int2(::Unity::Mathematics::double2 v);

  /// @brief Method int2, addr 0x6a411d4, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 int2(::Unity::Mathematics::float2 v);

  /// @brief Method int2, addr 0x6a411b0, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 int2(::Unity::Mathematics::uint2 v);

  /// @brief Method int2, addr 0x6a4117c, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 int2(bool v);

  /// @brief Method int2, addr 0x6a41208, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 int2(double_t v);

  /// @brief Method int2, addr 0x6a411b4, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 int2(float_t v);

  /// @brief Method int2, addr 0x6a41170, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 int2(int32_t v);

  /// @brief Method int2, addr 0x6a411a4, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 int2(uint32_t v);

  /// @brief Method int2, addr 0x6a41160, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 int2(int32_t x, int32_t y);

  /// @brief Method int2, addr 0x6a4116c, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 int2(::Unity::Mathematics::int2 xy);

  /// @brief Method int2x2, addr 0x6a414f8, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x2 int2x2(::Unity::Mathematics::int2 c0, ::Unity::Mathematics::int2 c1);

  /// @brief Method int2x2, addr 0x6a414fc, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x2 int2x2(int32_t m00, int32_t m01, int32_t m10, int32_t m11);

  /// @brief Method int2x2, addr 0x6a41534, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x2 int2x2(::Unity::Mathematics::bool2x2 v);

  /// @brief Method int2x2, addr 0x6a41608, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x2 int2x2(::Unity::Mathematics::double2x2 v);

  /// @brief Method int2x2, addr 0x6a4158c, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x2 int2x2(::Unity::Mathematics::float2x2 v);

  /// @brief Method int2x2, addr 0x6a41564, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x2 int2x2(::Unity::Mathematics::uint2x2 v);

  /// @brief Method int2x2, addr 0x6a41520, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x2 int2x2(bool v);

  /// @brief Method int2x2, addr 0x6a415e4, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x2 int2x2(double_t v);

  /// @brief Method int2x2, addr 0x6a41568, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x2 int2x2(float_t v);

  /// @brief Method int2x2, addr 0x6a41510, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x2 int2x2(int32_t v);

  /// @brief Method int2x2, addr 0x6a41554, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x2 int2x2(uint32_t v);

  /// @brief Method int2x3, addr 0x6a41730, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x3 int2x3(::Unity::Mathematics::int2 c0, ::Unity::Mathematics::int2 c1, ::Unity::Mathematics::int2 c2);

  /// @brief Method int2x3, addr 0x6a4173c, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x3 int2x3(int32_t m00, int32_t m01, int32_t m02, int32_t m10, int32_t m11, int32_t m12);

  /// @brief Method int2x3, addr 0x6a4178c, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x3 int2x3(::Unity::Mathematics::bool2x3 v);

  /// @brief Method int2x3, addr 0x6a418dc, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x3 int2x3(::Unity::Mathematics::double2x3 v);

  /// @brief Method int2x3, addr 0x6a41828, size 0x8c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x3 int2x3(::Unity::Mathematics::float2x3 v);

  /// @brief Method int2x3, addr 0x6a417ec, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x3 int2x3(::Unity::Mathematics::uint2x3 v);

  /// @brief Method int2x3, addr 0x6a41774, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x3 int2x3(bool v);

  /// @brief Method int2x3, addr 0x6a418b4, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x3 int2x3(double_t v);

  /// @brief Method int2x3, addr 0x6a41800, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x3 int2x3(float_t v);

  /// @brief Method int2x3, addr 0x6a41760, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x3 int2x3(int32_t v);

  /// @brief Method int2x3, addr 0x6a417d8, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x3 int2x3(uint32_t v);

  /// @brief Method int2x4, addr 0x6a41a80, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x4 int2x4(::Unity::Mathematics::int2 c0, ::Unity::Mathematics::int2 c1, ::Unity::Mathematics::int2 c2, ::Unity::Mathematics::int2 c3);

  /// @brief Method int2x4, addr 0x6a41a8c, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x4 int2x4(int32_t m00, int32_t m01, int32_t m02, int32_t m03, int32_t m10, int32_t m11, int32_t m12, int32_t m13);

  /// @brief Method int2x4, addr 0x6a41ae4, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x4 int2x4(::Unity::Mathematics::bool2x4 v);

  /// @brief Method int2x4, addr 0x6a41c68, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x4 int2x4(::Unity::Mathematics::double2x4 v);

  /// @brief Method int2x4, addr 0x6a41ba0, size 0xa0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x4 int2x4(::Unity::Mathematics::float2x4 v);

  /// @brief Method int2x4, addr 0x6a41b6c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x4 int2x4(::Unity::Mathematics::uint2x4 v);

  /// @brief Method int2x4, addr 0x6a41acc, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x4 int2x4(bool v);

  /// @brief Method int2x4, addr 0x6a41c40, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x4 int2x4(double_t v);

  /// @brief Method int2x4, addr 0x6a41b78, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x4 int2x4(float_t v);

  /// @brief Method int2x4, addr 0x6a41ab8, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x4 int2x4(int32_t v);

  /// @brief Method int2x4, addr 0x6a41b58, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x4 int2x4(uint32_t v);

  /// @brief Method int3, addr 0x6a41ec8, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 int3(::Unity::Mathematics::bool3 v);

  /// @brief Method int3, addr 0x6a41f74, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 int3(::Unity::Mathematics::double3 v);

  /// @brief Method int3, addr 0x6a41f14, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 int3(::Unity::Mathematics::float3 v);

  /// @brief Method int3, addr 0x6a41eec, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 int3(::Unity::Mathematics::uint3 v);

  /// @brief Method int3, addr 0x6a41eac, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 int3(bool v);

  /// @brief Method int3, addr 0x6a41f54, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 int3(double_t v);

  /// @brief Method int3, addr 0x6a41ef4, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 int3(float_t v);

  /// @brief Method int3, addr 0x6a41ea0, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 int3(int32_t v);

  /// @brief Method int3, addr 0x6a41ee0, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 int3(uint32_t v);

  /// @brief Method int3, addr 0x6a41e6c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 int3(int32_t x, int32_t y, int32_t z);

  /// @brief Method int3, addr 0x6a41e7c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 int3(int32_t x, ::Unity::Mathematics::int2 yz);

  /// @brief Method int3, addr 0x6a41e90, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 int3(::Unity::Mathematics::int2 xy, int32_t z);

  /// @brief Method int3, addr 0x6a41e98, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 int3(::Unity::Mathematics::int3 xyz);

  /// @brief Method int3x2, addr 0x6a42308, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 int3x2(::Unity::Mathematics::int3 c0, ::Unity::Mathematics::int3 c1);

  /// @brief Method int3x2, addr 0x6a4231c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 int3x2(int32_t m00, int32_t m01, int32_t m10, int32_t m11, int32_t m20, int32_t m21);

  /// @brief Method int3x2, addr 0x6a42368, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 int3x2(::Unity::Mathematics::bool3x2 v);

  /// @brief Method int3x2, addr 0x6a424c0, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 int3x2(::Unity::Mathematics::double3x2 v);

  /// @brief Method int3x2, addr 0x6a42408, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 int3x2(::Unity::Mathematics::float3x2 v);

  /// @brief Method int3x2, addr 0x6a423b4, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 int3x2(::Unity::Mathematics::uint3x2 v);

  /// @brief Method int3x2, addr 0x6a42348, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 int3x2(bool v);

  /// @brief Method int3x2, addr 0x6a42490, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 int3x2(double_t v);

  /// @brief Method int3x2, addr 0x6a423d8, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 int3x2(float_t v);

  /// @brief Method int3x2, addr 0x6a4232c, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 int3x2(int32_t v);

  /// @brief Method int3x2, addr 0x6a42398, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 int3x2(uint32_t v);

  /// @brief Method int3x3, addr 0x6a42670, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x3 int3x3(::Unity::Mathematics::int3 c0, ::Unity::Mathematics::int3 c1, ::Unity::Mathematics::int3 c2);

  /// @brief Method int3x3, addr 0x6a4268c, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x3 int3x3(int32_t m00, int32_t m01, int32_t m02, int32_t m10, int32_t m11, int32_t m12, int32_t m20, int32_t m21, int32_t m22);

  /// @brief Method int3x3, addr 0x6a426f4, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x3 int3x3(::Unity::Mathematics::bool3x3 v);

  /// @brief Method int3x3, addr 0x6a428d4, size 0xc4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x3 int3x3(::Unity::Mathematics::double3x3 v);

  /// @brief Method int3x3, addr 0x6a427d8, size 0xc4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x3 int3x3(::Unity::Mathematics::float3x3 v);

  /// @brief Method int3x3, addr 0x6a4276c, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x3 int3x3(::Unity::Mathematics::uint3x3 v);

  /// @brief Method int3x3, addr 0x6a426cc, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x3 int3x3(bool v);

  /// @brief Method int3x3, addr 0x6a4289c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x3 int3x3(double_t v);

  /// @brief Method int3x3, addr 0x6a427a0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x3 int3x3(float_t v);

  /// @brief Method int3x3, addr 0x6a426a8, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x3 int3x3(int32_t v);

  /// @brief Method int3x3, addr 0x6a42748, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x3 int3x3(uint32_t v);

  /// @brief Method int3x4, addr 0x6a42b74, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 int3x4(::Unity::Mathematics::int3 c0, ::Unity::Mathematics::int3 c1, ::Unity::Mathematics::int3 c2, ::Unity::Mathematics::int3 c3);

  /// @brief Method int3x4, addr 0x6a42b98, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 int3x4(int32_t m00, int32_t m01, int32_t m02, int32_t m03, int32_t m10, int32_t m11, int32_t m12, int32_t m13, int32_t m20, int32_t m21, int32_t m22,
                                                    int32_t m23);

  /// @brief Method int3x4, addr 0x6a42c28, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 int3x4(::Unity::Mathematics::bool3x4 v);

  /// @brief Method int3x4, addr 0x6a42e88, size 0xfc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 int3x4(::Unity::Mathematics::double3x4 v);

  /// @brief Method int3x4, addr 0x6a42d4c, size 0xfc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 int3x4(::Unity::Mathematics::float3x4 v);

  /// @brief Method int3x4, addr 0x6a42cc8, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 int3x4(::Unity::Mathematics::uint3x4 v);

  /// @brief Method int3x4, addr 0x6a42bf8, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 int3x4(bool v);

  /// @brief Method int3x4, addr 0x6a42e48, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 int3x4(double_t v);

  /// @brief Method int3x4, addr 0x6a42d0c, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 int3x4(float_t v);

  /// @brief Method int3x4, addr 0x6a42bcc, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 int3x4(int32_t v);

  /// @brief Method int3x4, addr 0x6a42c9c, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 int3x4(uint32_t v);

  /// @brief Method int4, addr 0x6a43214, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 int4(::Unity::Mathematics::bool4 v);

  /// @brief Method int4, addr 0x6a432e8, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 int4(::Unity::Mathematics::double4 v);

  /// @brief Method int4, addr 0x6a4326c, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 int4(::Unity::Mathematics::float4 v);

  /// @brief Method int4, addr 0x6a43244, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 int4(::Unity::Mathematics::uint4 v);

  /// @brief Method int4, addr 0x6a431fc, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 int4(bool v);

  /// @brief Method int4, addr 0x6a432c4, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 int4(double_t v);

  /// @brief Method int4, addr 0x6a43248, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 int4(float_t v);

  /// @brief Method int4, addr 0x6a431ec, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 int4(int32_t v);

  /// @brief Method int4, addr 0x6a43234, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 int4(uint32_t v);

  /// @brief Method int4, addr 0x6a43180, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 int4(int32_t x, int32_t y, int32_t z, int32_t w);

  /// @brief Method int4, addr 0x6a43198, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 int4(int32_t x, int32_t y, ::Unity::Mathematics::int2 zw);

  /// @brief Method int4, addr 0x6a431a8, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 int4(int32_t x, ::Unity::Mathematics::int2 yz, int32_t w);

  /// @brief Method int4, addr 0x6a431bc, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 int4(int32_t x, ::Unity::Mathematics::int3 yzw);

  /// @brief Method int4, addr 0x6a431d0, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 int4(::Unity::Mathematics::int2 xy, int32_t z, int32_t w);

  /// @brief Method int4, addr 0x6a431dc, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 int4(::Unity::Mathematics::int2 xy, ::Unity::Mathematics::int2 zw);

  /// @brief Method int4, addr 0x6a431e0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 int4(::Unity::Mathematics::int3 xyz, int32_t w);

  /// @brief Method int4, addr 0x6a431e8, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 int4(::Unity::Mathematics::int4 xyzw);

  /// @brief Method int4x2, addr 0x6a436c4, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 int4x2(::Unity::Mathematics::int4 c0, ::Unity::Mathematics::int4 c1);

  /// @brief Method int4x2, addr 0x6a436d0, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 int4x2(int32_t m00, int32_t m01, int32_t m10, int32_t m11, int32_t m20, int32_t m21, int32_t m30, int32_t m31);

  /// @brief Method int4x2, addr 0x6a43710, size 0x5c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 int4x2(::Unity::Mathematics::bool4x2 v);

  /// @brief Method int4x2, addr 0x6a4387c, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 int4x2(::Unity::Mathematics::double4x2 v);

  /// @brief Method int4x2, addr 0x6a437b4, size 0xa0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 int4x2(::Unity::Mathematics::float4x2 v);

  /// @brief Method int4x2, addr 0x6a43780, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 int4x2(::Unity::Mathematics::uint4x2 v);

  /// @brief Method int4x2, addr 0x6a436f8, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 int4x2(bool v);

  /// @brief Method int4x2, addr 0x6a43854, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 int4x2(double_t v);

  /// @brief Method int4x2, addr 0x6a4378c, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 int4x2(float_t v);

  /// @brief Method int4x2, addr 0x6a436e4, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 int4x2(int32_t v);

  /// @brief Method int4x2, addr 0x6a4376c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 int4x2(uint32_t v);

  /// @brief Method int4x3, addr 0x6a43a94, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 int4x3(::Unity::Mathematics::int4 c0, ::Unity::Mathematics::int4 c1, ::Unity::Mathematics::int4 c2);

  /// @brief Method int4x3, addr 0x6a43aa4, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 int4x3(int32_t m00, int32_t m01, int32_t m02, int32_t m10, int32_t m11, int32_t m12, int32_t m20, int32_t m21, int32_t m22, int32_t m30, int32_t m31,
                                                    int32_t m32);

  /// @brief Method int4x3, addr 0x6a43b0c, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 int4x3(::Unity::Mathematics::bool4x3 v);

  /// @brief Method int4x3, addr 0x6a43cf0, size 0x104, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 int4x3(::Unity::Mathematics::double4x3 v);

  /// @brief Method int4x3, addr 0x6a43bdc, size 0xe8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 int4x3(::Unity::Mathematics::float4x3 v);

  /// @brief Method int4x3, addr 0x6a43b9c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 int4x3(::Unity::Mathematics::uint4x3 v);

  /// @brief Method int4x3, addr 0x6a43af0, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 int4x3(bool v);

  /// @brief Method int4x3, addr 0x6a43cc4, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 int4x3(double_t v);

  /// @brief Method int4x3, addr 0x6a43bb0, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 int4x3(float_t v);

  /// @brief Method int4x3, addr 0x6a43ad8, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 int4x3(int32_t v);

  /// @brief Method int4x3, addr 0x6a43b84, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 int4x3(uint32_t v);

  /// @brief Method int4x4, addr 0x6a43fd8, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 int4x4(::Unity::Mathematics::int4 c0, ::Unity::Mathematics::int4 c1, ::Unity::Mathematics::int4 c2, ::Unity::Mathematics::int4 c3);

  /// @brief Method int4x4, addr 0x6a43fec, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 int4x4(int32_t m00, int32_t m01, int32_t m02, int32_t m03, int32_t m10, int32_t m11, int32_t m12, int32_t m13, int32_t m20, int32_t m21, int32_t m22,
                                                    int32_t m23, int32_t m30, int32_t m31, int32_t m32, int32_t m33);

  /// @brief Method int4x4, addr 0x6a4407c, size 0x94, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 int4x4(::Unity::Mathematics::bool4x4 v);

  /// @brief Method int4x4, addr 0x6a442c8, size 0x15c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 int4x4(::Unity::Mathematics::double4x4 v);

  /// @brief Method int4x4, addr 0x6a44170, size 0x128, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 int4x4(::Unity::Mathematics::float4x4 v);

  /// @brief Method int4x4, addr 0x6a4412c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 int4x4(::Unity::Mathematics::uint4x4 v);

  /// @brief Method int4x4, addr 0x6a4405c, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 int4x4(bool v);

  /// @brief Method int4x4, addr 0x6a44298, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 int4x4(double_t v);

  /// @brief Method int4x4, addr 0x6a44140, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 int4x4(float_t v);

  /// @brief Method int4x4, addr 0x6a44040, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 int4x4(int32_t v);

  /// @brief Method int4x4, addr 0x6a44110, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 int4x4(uint32_t v);

  /// @brief Method inverse, addr 0x6a36a48, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::AffineTransform inverse(::Unity::Mathematics::AffineTransform a);

  /// @brief Method inverse, addr 0x6a612e8, size 0xe0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::RigidTransform inverse(::Unity::Mathematics::RigidTransform t);

  /// @brief Method inverse, addr 0x6a398d4, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 inverse(::Unity::Mathematics::double2x2 m);

  /// @brief Method inverse, addr 0x6a3ab48, size 0xd4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 inverse(::Unity::Mathematics::double3x3 m);

  /// @brief Method inverse, addr 0x6a3c844, size 0x354, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x4 inverse(::Unity::Mathematics::double4x4 m);

  /// @brief Method inverse, addr 0x6a3d5b8, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 inverse(::Unity::Mathematics::float2x2 m);

  /// @brief Method inverse, addr 0x6a3e638, size 0xd0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 inverse(::Unity::Mathematics::float3x3 m);

  /// @brief Method inverse, addr 0x6a3fee4, size 0x33c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 inverse(::Unity::Mathematics::float4x4 m);

  /// @brief Method inverse, addr 0x6a5fb38, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion inverse(::Unity::Mathematics::quaternion q);

  /// @brief Method isfinite, addr 0x6a449cc, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 isfinite(::Unity::Mathematics::double2 x);

  /// @brief Method isfinite, addr 0x6a44904, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 isfinite(::Unity::Mathematics::float2 x);

  /// @brief Method isfinite, addr 0x6a449f4, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 isfinite(::Unity::Mathematics::double3 x);

  /// @brief Method isfinite, addr 0x6a4492c, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 isfinite(::Unity::Mathematics::float3 x);

  /// @brief Method isfinite, addr 0x6a44a30, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 isfinite(::Unity::Mathematics::double4 x);

  /// @brief Method isfinite, addr 0x6a44968, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 isfinite(::Unity::Mathematics::float4 x);

  /// @brief Method isfinite, addr 0x6a449b4, size 0x18, virtual false, abstract: false, final false
  static inline bool isfinite(double_t x);

  /// @brief Method isfinite, addr 0x6a448ec, size 0x18, virtual false, abstract: false, final false
  static inline bool isfinite(float_t x);

  /// @brief Method isinf, addr 0x6a44b5c, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 isinf(::Unity::Mathematics::double2 x);

  /// @brief Method isinf, addr 0x6a44a94, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 isinf(::Unity::Mathematics::float2 x);

  /// @brief Method isinf, addr 0x6a44b84, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 isinf(::Unity::Mathematics::double3 x);

  /// @brief Method isinf, addr 0x6a44abc, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 isinf(::Unity::Mathematics::float3 x);

  /// @brief Method isinf, addr 0x6a44bc0, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 isinf(::Unity::Mathematics::double4 x);

  /// @brief Method isinf, addr 0x6a44af8, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 isinf(::Unity::Mathematics::float4 x);

  /// @brief Method isinf, addr 0x6a44b44, size 0x18, virtual false, abstract: false, final false
  static inline bool isinf(double_t x);

  /// @brief Method isinf, addr 0x6a44a7c, size 0x18, virtual false, abstract: false, final false
  static inline bool isinf(float_t x);

  /// @brief Method isnan, addr 0x6a44cfc, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 isnan(::Unity::Mathematics::double2 x);

  /// @brief Method isnan, addr 0x6a44c24, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 isnan(::Unity::Mathematics::float2 x);

  /// @brief Method isnan, addr 0x6a44d28, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 isnan(::Unity::Mathematics::double3 x);

  /// @brief Method isnan, addr 0x6a44c50, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 isnan(::Unity::Mathematics::float3 x);

  /// @brief Method isnan, addr 0x6a44d68, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 isnan(::Unity::Mathematics::double4 x);

  /// @brief Method isnan, addr 0x6a44c90, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 isnan(::Unity::Mathematics::float4 x);

  /// @brief Method isnan, addr 0x6a44ce4, size 0x18, virtual false, abstract: false, final false
  static inline bool isnan(double_t x);

  /// @brief Method isnan, addr 0x6a44c0c, size 0x18, virtual false, abstract: false, final false
  static inline bool isnan(float_t x);

  /// @brief Method ispow2, addr 0x6a44dd0, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 ispow2(::Unity::Mathematics::int2 x);

  /// @brief Method ispow2, addr 0x6a44ec0, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 ispow2(::Unity::Mathematics::uint2 x);

  /// @brief Method ispow2, addr 0x6a44e00, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 ispow2(::Unity::Mathematics::int3 x);

  /// @brief Method ispow2, addr 0x6a44eec, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 ispow2(::Unity::Mathematics::uint3 x);

  /// @brief Method ispow2, addr 0x6a44e48, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 ispow2(::Unity::Mathematics::int4 x);

  /// @brief Method ispow2, addr 0x6a44f2c, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 ispow2(::Unity::Mathematics::uint4 x);

  /// @brief Method ispow2, addr 0x6a44dbc, size 0x14, virtual false, abstract: false, final false
  static inline bool ispow2(int32_t x);

  /// @brief Method ispow2, addr 0x6a44eac, size 0x14, virtual false, abstract: false, final false
  static inline bool ispow2(uint32_t x);

  /// @brief Method left, addr 0x6a58154, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 left();

  /// @brief Method length, addr 0x6a522fc, size 0x70, virtual false, abstract: false, final false
  static inline double_t length(::Unity::Mathematics::double2 x);

  /// @brief Method length, addr 0x6a5236c, size 0x84, virtual false, abstract: false, final false
  static inline double_t length(::Unity::Mathematics::double3 x);

  /// @brief Method length, addr 0x6a523f0, size 0x90, virtual false, abstract: false, final false
  static inline double_t length(::Unity::Mathematics::double4 x);

  /// @brief Method length, addr 0x6a522f4, size 0x8, virtual false, abstract: false, final false
  static inline double_t length(double_t x);

  /// @brief Method length, addr 0x6a5fb90, size 0x90, virtual false, abstract: false, final false
  static inline float_t length(::Unity::Mathematics::quaternion q);

  /// @brief Method length, addr 0x6a52170, size 0x70, virtual false, abstract: false, final false
  static inline float_t length(::Unity::Mathematics::float2 x);

  /// @brief Method length, addr 0x6a521e0, size 0x84, virtual false, abstract: false, final false
  static inline float_t length(::Unity::Mathematics::float3 x);

  /// @brief Method length, addr 0x6a52264, size 0x90, virtual false, abstract: false, final false
  static inline float_t length(::Unity::Mathematics::float4 x);

  /// @brief Method length, addr 0x6a52168, size 0x8, virtual false, abstract: false, final false
  static inline float_t length(float_t x);

  /// @brief Method lengthsq, addr 0x6a524d8, size 0x10, virtual false, abstract: false, final false
  static inline double_t lengthsq(::Unity::Mathematics::double2 x);

  /// @brief Method lengthsq, addr 0x6a524e8, size 0x18, virtual false, abstract: false, final false
  static inline double_t lengthsq(::Unity::Mathematics::double3 x);

  /// @brief Method lengthsq, addr 0x6a52500, size 0x20, virtual false, abstract: false, final false
  static inline double_t lengthsq(::Unity::Mathematics::double4 x);

  /// @brief Method lengthsq, addr 0x6a524d0, size 0x8, virtual false, abstract: false, final false
  static inline double_t lengthsq(double_t x);

  /// @brief Method lengthsq, addr 0x6a5fc20, size 0x20, virtual false, abstract: false, final false
  static inline float_t lengthsq(::Unity::Mathematics::quaternion q);

  /// @brief Method lengthsq, addr 0x6a52488, size 0x10, virtual false, abstract: false, final false
  static inline float_t lengthsq(::Unity::Mathematics::float2 x);

  /// @brief Method lengthsq, addr 0x6a52498, size 0x18, virtual false, abstract: false, final false
  static inline float_t lengthsq(::Unity::Mathematics::float3 x);

  /// @brief Method lengthsq, addr 0x6a524b0, size 0x20, virtual false, abstract: false, final false
  static inline float_t lengthsq(::Unity::Mathematics::float4 x);

  /// @brief Method lengthsq, addr 0x6a52480, size 0x8, virtual false, abstract: false, final false
  static inline float_t lengthsq(float_t x);

  /// @brief Method lerp, addr 0x6a4574c, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 lerp(::Unity::Mathematics::double2 start, ::Unity::Mathematics::double2 end, ::Unity::Mathematics::double2 t);

  /// @brief Method lerp, addr 0x6a456d0, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 lerp(::Unity::Mathematics::double2 start, ::Unity::Mathematics::double2 end, double_t t);

  /// @brief Method lerp, addr 0x6a45768, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 lerp(::Unity::Mathematics::double3 start, ::Unity::Mathematics::double3 end, ::Unity::Mathematics::double3 t);

  /// @brief Method lerp, addr 0x6a456ec, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 lerp(::Unity::Mathematics::double3 start, ::Unity::Mathematics::double3 end, double_t t);

  /// @brief Method lerp, addr 0x6a45798, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 lerp(::Unity::Mathematics::double4 start, ::Unity::Mathematics::double4 end, ::Unity::Mathematics::double4 t);

  /// @brief Method lerp, addr 0x6a45714, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 lerp(::Unity::Mathematics::double4 start, ::Unity::Mathematics::double4 end, double_t t);

  /// @brief Method lerp, addr 0x6a45638, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 lerp(::Unity::Mathematics::float2 start, ::Unity::Mathematics::float2 end, ::Unity::Mathematics::float2 t);

  /// @brief Method lerp, addr 0x6a455bc, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 lerp(::Unity::Mathematics::float2 start, ::Unity::Mathematics::float2 end, float_t t);

  /// @brief Method lerp, addr 0x6a45654, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 lerp(::Unity::Mathematics::float3 start, ::Unity::Mathematics::float3 end, ::Unity::Mathematics::float3 t);

  /// @brief Method lerp, addr 0x6a455d8, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 lerp(::Unity::Mathematics::float3 start, ::Unity::Mathematics::float3 end, float_t t);

  /// @brief Method lerp, addr 0x6a45684, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 lerp(::Unity::Mathematics::float4 start, ::Unity::Mathematics::float4 end, ::Unity::Mathematics::float4 t);

  /// @brief Method lerp, addr 0x6a45600, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 lerp(::Unity::Mathematics::float4 start, ::Unity::Mathematics::float4 end, float_t t);

  /// @brief Method lerp, addr 0x6a456c0, size 0x10, virtual false, abstract: false, final false
  static inline double_t lerp(double_t start, double_t end, double_t t);

  /// @brief Method lerp, addr 0x6a455ac, size 0x10, virtual false, abstract: false, final false
  static inline float_t lerp(float_t start, float_t end, float_t t);

  /// @brief Method log, addr 0x6a4f750, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 log(::Unity::Mathematics::double2 x);

  /// @brief Method log, addr 0x6a4f800, size 0x100, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 log(::Unity::Mathematics::double3 x);

  /// @brief Method log, addr 0x6a4f900, size 0x148, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 log(::Unity::Mathematics::double4 x);

  /// @brief Method log, addr 0x6a4f3dc, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 log(::Unity::Mathematics::float2 x);

  /// @brief Method log, addr 0x6a4f494, size 0x108, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 log(::Unity::Mathematics::float3 x);

  /// @brief Method log, addr 0x6a4f59c, size 0x154, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 log(::Unity::Mathematics::float4 x);

  /// @brief Method log, addr 0x6a602cc, size 0x1cc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion log(::Unity::Mathematics::quaternion q);

  /// @brief Method log, addr 0x6a4f6f0, size 0x60, virtual false, abstract: false, final false
  static inline double_t log(double_t x);

  /// @brief Method log, addr 0x6a4f374, size 0x68, virtual false, abstract: false, final false
  static inline float_t log(float_t x);

  /// @brief Method log10, addr 0x6a50598, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 log10(::Unity::Mathematics::double2 x);

  /// @brief Method log10, addr 0x6a50648, size 0x100, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 log10(::Unity::Mathematics::double3 x);

  /// @brief Method log10, addr 0x6a50748, size 0x148, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 log10(::Unity::Mathematics::double4 x);

  /// @brief Method log10, addr 0x6a50224, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 log10(::Unity::Mathematics::float2 x);

  /// @brief Method log10, addr 0x6a502dc, size 0x108, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 log10(::Unity::Mathematics::float3 x);

  /// @brief Method log10, addr 0x6a503e4, size 0x154, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 log10(::Unity::Mathematics::float4 x);

  /// @brief Method log10, addr 0x6a50538, size 0x60, virtual false, abstract: false, final false
  static inline double_t log10(double_t x);

  /// @brief Method log10, addr 0x6a501bc, size 0x68, virtual false, abstract: false, final false
  static inline float_t log10(float_t x);

  /// @brief Method log2, addr 0x6a4fe7c, size 0xc0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 log2(::Unity::Mathematics::double2 x);

  /// @brief Method log2, addr 0x6a4ff3c, size 0x118, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 log2(::Unity::Mathematics::double3 x);

  /// @brief Method log2, addr 0x6a50054, size 0x168, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 log2(::Unity::Mathematics::double4 x);

  /// @brief Method log2, addr 0x6a4fab8, size 0xc8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 log2(::Unity::Mathematics::float2 x);

  /// @brief Method log2, addr 0x6a4fb80, size 0x120, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 log2(::Unity::Mathematics::float3 x);

  /// @brief Method log2, addr 0x6a4fca0, size 0x174, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 log2(::Unity::Mathematics::float4 x);

  /// @brief Method log2, addr 0x6a4fe14, size 0x68, virtual false, abstract: false, final false
  static inline double_t log2(double_t x);

  /// @brief Method log2, addr 0x6a4fa48, size 0x70, virtual false, abstract: false, final false
  static inline float_t log2(float_t x);

  /// @brief Method lzcnt, addr 0x6a54f80, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 lzcnt(::Unity::Mathematics::int2 x);

  /// @brief Method lzcnt, addr 0x6a551d0, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 lzcnt(::Unity::Mathematics::uint2 x);

  /// @brief Method lzcnt, addr 0x6a54ff8, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 lzcnt(::Unity::Mathematics::int3 x);

  /// @brief Method lzcnt, addr 0x6a55248, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 lzcnt(::Unity::Mathematics::uint3 x);

  /// @brief Method lzcnt, addr 0x6a550a8, size 0xec, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 lzcnt(::Unity::Mathematics::int4 x);

  /// @brief Method lzcnt, addr 0x6a552f8, size 0xec, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 lzcnt(::Unity::Mathematics::uint4 x);

  /// @brief Method lzcnt, addr 0x6a54f44, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t lzcnt(int32_t x);

  /// @brief Method lzcnt, addr 0x6a553e4, size 0x4c, virtual false, abstract: false, final false
  static inline int32_t lzcnt(int64_t x);

  /// @brief Method lzcnt, addr 0x6a55194, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t lzcnt(uint32_t x);

  /// @brief Method lzcnt, addr 0x6a55430, size 0x4c, virtual false, abstract: false, final false
  static inline int32_t lzcnt(uint64_t x);

  /// @brief Method mad, addr 0x6a45d1c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 mad(::Unity::Mathematics::double2 mulA, ::Unity::Mathematics::double2 mulB, ::Unity::Mathematics::double2 addC);

  /// @brief Method mad, addr 0x6a45d30, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 mad(::Unity::Mathematics::double3 mulA, ::Unity::Mathematics::double3 mulB, ::Unity::Mathematics::double3 addC);

  /// @brief Method mad, addr 0x6a45d54, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 mad(::Unity::Mathematics::double4 mulA, ::Unity::Mathematics::double4 mulB, ::Unity::Mathematics::double4 addC);

  /// @brief Method mad, addr 0x6a45cac, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 mad(::Unity::Mathematics::float2 mulA, ::Unity::Mathematics::float2 mulB, ::Unity::Mathematics::float2 addC);

  /// @brief Method mad, addr 0x6a45cc0, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 mad(::Unity::Mathematics::float3 mulA, ::Unity::Mathematics::float3 mulB, ::Unity::Mathematics::float3 addC);

  /// @brief Method mad, addr 0x6a45ce4, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 mad(::Unity::Mathematics::float4 mulA, ::Unity::Mathematics::float4 mulB, ::Unity::Mathematics::float4 addC);

  /// @brief Method mad, addr 0x6a45ba8, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 mad(::Unity::Mathematics::int2 mulA, ::Unity::Mathematics::int2 mulB, ::Unity::Mathematics::int2 addC);

  /// @brief Method mad, addr 0x6a45bc4, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 mad(::Unity::Mathematics::int3 mulA, ::Unity::Mathematics::int3 mulB, ::Unity::Mathematics::int3 addC);

  /// @brief Method mad, addr 0x6a45be4, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 mad(::Unity::Mathematics::int4 mulA, ::Unity::Mathematics::int4 mulB, ::Unity::Mathematics::int4 addC);

  /// @brief Method mad, addr 0x6a45c20, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 mad(::Unity::Mathematics::uint2 mulA, ::Unity::Mathematics::uint2 mulB, ::Unity::Mathematics::uint2 addC);

  /// @brief Method mad, addr 0x6a45c3c, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 mad(::Unity::Mathematics::uint3 mulA, ::Unity::Mathematics::uint3 mulB, ::Unity::Mathematics::uint3 addC);

  /// @brief Method mad, addr 0x6a45c5c, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 mad(::Unity::Mathematics::uint4 mulA, ::Unity::Mathematics::uint4 mulB, ::Unity::Mathematics::uint4 addC);

  /// @brief Method mad, addr 0x6a45d10, size 0xc, virtual false, abstract: false, final false
  static inline double_t mad(double_t mulA, double_t mulB, double_t addC);

  /// @brief Method mad, addr 0x6a45ca0, size 0xc, virtual false, abstract: false, final false
  static inline float_t mad(float_t mulA, float_t mulB, float_t addC);

  /// @brief Method mad, addr 0x6a45ba0, size 0x8, virtual false, abstract: false, final false
  static inline int32_t mad(int32_t mulA, int32_t mulB, int32_t addC);

  /// @brief Method mad, addr 0x6a45c90, size 0x8, virtual false, abstract: false, final false
  static inline int64_t mad(int64_t mulA, int64_t mulB, int64_t addC);

  /// @brief Method mad, addr 0x6a45c18, size 0x8, virtual false, abstract: false, final false
  static inline uint32_t mad(uint32_t mulA, uint32_t mulB, uint32_t addC);

  /// @brief Method mad, addr 0x6a45c98, size 0x8, virtual false, abstract: false, final false
  static inline uint64_t mad(uint64_t mulA, uint64_t mulB, uint64_t addC);

  /// @brief Method max, addr 0x6a454e0, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 max(::Unity::Mathematics::double2 x, ::Unity::Mathematics::double2 y);

  /// @brief Method max, addr 0x6a45510, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 max(::Unity::Mathematics::double3 x, ::Unity::Mathematics::double3 y);

  /// @brief Method max, addr 0x6a45554, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 max(::Unity::Mathematics::double4 x, ::Unity::Mathematics::double4 y);

  /// @brief Method max, addr 0x6a453f8, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 max(::Unity::Mathematics::float2 x, ::Unity::Mathematics::float2 y);

  /// @brief Method max, addr 0x6a45428, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 max(::Unity::Mathematics::float3 x, ::Unity::Mathematics::float3 y);

  /// @brief Method max, addr 0x6a4546c, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 max(::Unity::Mathematics::float4 x, ::Unity::Mathematics::float4 y);

  /// @brief Method max, addr 0x6a452b0, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 max(::Unity::Mathematics::int2 x, ::Unity::Mathematics::int2 y);

  /// @brief Method max, addr 0x6a452d0, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 max(::Unity::Mathematics::int3 x, ::Unity::Mathematics::int3 y);

  /// @brief Method max, addr 0x6a452f8, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 max(::Unity::Mathematics::int4 x, ::Unity::Mathematics::int4 y);

  /// @brief Method max, addr 0x6a45340, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 max(::Unity::Mathematics::uint2 x, ::Unity::Mathematics::uint2 y);

  /// @brief Method max, addr 0x6a45360, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 max(::Unity::Mathematics::uint3 x, ::Unity::Mathematics::uint3 y);

  /// @brief Method max, addr 0x6a45388, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 max(::Unity::Mathematics::uint4 x, ::Unity::Mathematics::uint4 y);

  /// @brief Method max, addr 0x6a454c4, size 0x1c, virtual false, abstract: false, final false
  static inline double_t max(double_t x, double_t y);

  /// @brief Method max, addr 0x6a453dc, size 0x1c, virtual false, abstract: false, final false
  static inline float_t max(float_t x, float_t y);

  /// @brief Method max, addr 0x6a452a4, size 0xc, virtual false, abstract: false, final false
  static inline int32_t max(int32_t x, int32_t y);

  /// @brief Method max, addr 0x6a453c4, size 0xc, virtual false, abstract: false, final false
  static inline int64_t max(int64_t x, int64_t y);

  /// @brief Method max, addr 0x6a45334, size 0xc, virtual false, abstract: false, final false
  static inline uint32_t max(uint32_t x, uint32_t y);

  /// @brief Method max, addr 0x6a453d0, size 0xc, virtual false, abstract: false, final false
  static inline uint64_t max(uint64_t x, uint64_t y);

  /// @brief Method min, addr 0x6a451d8, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 min(::Unity::Mathematics::double2 x, ::Unity::Mathematics::double2 y);

  /// @brief Method min, addr 0x6a45208, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 min(::Unity::Mathematics::double3 x, ::Unity::Mathematics::double3 y);

  /// @brief Method min, addr 0x6a4524c, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 min(::Unity::Mathematics::double4 x, ::Unity::Mathematics::double4 y);

  /// @brief Method min, addr 0x6a450f0, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 min(::Unity::Mathematics::float2 x, ::Unity::Mathematics::float2 y);

  /// @brief Method min, addr 0x6a45120, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 min(::Unity::Mathematics::float3 x, ::Unity::Mathematics::float3 y);

  /// @brief Method min, addr 0x6a45164, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 min(::Unity::Mathematics::float4 x, ::Unity::Mathematics::float4 y);

  /// @brief Method min, addr 0x6a44fa8, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 min(::Unity::Mathematics::int2 x, ::Unity::Mathematics::int2 y);

  /// @brief Method min, addr 0x6a44fc8, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 min(::Unity::Mathematics::int3 x, ::Unity::Mathematics::int3 y);

  /// @brief Method min, addr 0x6a44ff0, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 min(::Unity::Mathematics::int4 x, ::Unity::Mathematics::int4 y);

  /// @brief Method min, addr 0x6a45038, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 min(::Unity::Mathematics::uint2 x, ::Unity::Mathematics::uint2 y);

  /// @brief Method min, addr 0x6a45058, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 min(::Unity::Mathematics::uint3 x, ::Unity::Mathematics::uint3 y);

  /// @brief Method min, addr 0x6a45080, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 min(::Unity::Mathematics::uint4 x, ::Unity::Mathematics::uint4 y);

  /// @brief Method min, addr 0x6a451bc, size 0x1c, virtual false, abstract: false, final false
  static inline double_t min(double_t x, double_t y);

  /// @brief Method min, addr 0x6a450d4, size 0x1c, virtual false, abstract: false, final false
  static inline float_t min(float_t x, float_t y);

  /// @brief Method min, addr 0x6a44f9c, size 0xc, virtual false, abstract: false, final false
  static inline int32_t min(int32_t x, int32_t y);

  /// @brief Method min, addr 0x6a450bc, size 0xc, virtual false, abstract: false, final false
  static inline int64_t min(int64_t x, int64_t y);

  /// @brief Method min, addr 0x6a4502c, size 0xc, virtual false, abstract: false, final false
  static inline uint32_t min(uint32_t x, uint32_t y);

  /// @brief Method min, addr 0x6a450c8, size 0xc, virtual false, abstract: false, final false
  static inline uint64_t min(uint64_t x, uint64_t y);

  /// @brief Method modf, addr 0x6a50d88, size 0xd4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 modf(::Unity::Mathematics::double2 x, ::by_ref<::Unity::Mathematics::double2> i);

  /// @brief Method modf, addr 0x6a50e5c, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 modf(::Unity::Mathematics::double3 x, ::by_ref<::Unity::Mathematics::double3> i);

  /// @brief Method modf, addr 0x6a50eb0, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 modf(::Unity::Mathematics::double4 x, ::by_ref<::Unity::Mathematics::double4> i);

  /// @brief Method modf, addr 0x6a50b80, size 0xdc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 modf(::Unity::Mathematics::float2 x, ::by_ref<::Unity::Mathematics::float2> i);

  /// @brief Method modf, addr 0x6a50c5c, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 modf(::Unity::Mathematics::float3 x, ::by_ref<::Unity::Mathematics::float3> i);

  /// @brief Method modf, addr 0x6a50cb0, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 modf(::Unity::Mathematics::float4 x, ::by_ref<::Unity::Mathematics::float4> i);

  /// @brief Method modf, addr 0x6a50d10, size 0x78, virtual false, abstract: false, final false
  static inline double_t modf(double_t x, ::by_ref<double_t> i);

  /// @brief Method modf, addr 0x6a50b08, size 0x78, virtual false, abstract: false, final false
  static inline float_t modf(float_t x, ::by_ref<float_t> i);

  /// @brief Method movehl, addr 0x6a594d0, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 movehl(::Unity::Mathematics::double4 a, ::Unity::Mathematics::double4 b);

  /// @brief Method movehl, addr 0x6a594c4, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 movehl(::Unity::Mathematics::float4 a, ::Unity::Mathematics::float4 b);

  /// @brief Method movelh, addr 0x6a594b8, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 movelh(::Unity::Mathematics::double4 a, ::Unity::Mathematics::double4 b);

  /// @brief Method movelh, addr 0x6a594ac, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 movelh(::Unity::Mathematics::float4 a, ::Unity::Mathematics::float4 b);

  /// @brief Method mul, addr 0x6a36554, size 0x184, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::AffineTransform mul(::Unity::Mathematics::AffineTransform a, ::Unity::Mathematics::AffineTransform b);

  /// @brief Method mul, addr 0x6a36834, size 0x114, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::AffineTransform mul(::Unity::Mathematics::AffineTransform a, ::Unity::Mathematics::float3x3 b);

  /// @brief Method mul, addr 0x6a366d8, size 0x15c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::AffineTransform mul(::Unity::Mathematics::float3x3 a, ::Unity::Mathematics::AffineTransform b);

  /// @brief Method mul, addr 0x6a613c8, size 0x128, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::RigidTransform mul(::Unity::Mathematics::RigidTransform a, ::Unity::Mathematics::RigidTransform b);

  /// @brief Method mul, addr 0x6a5b090, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 mul(::Unity::Mathematics::double2 a, ::Unity::Mathematics::double2x2 b);

  /// @brief Method mul, addr 0x6a5b3b4, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 mul(::Unity::Mathematics::double2x2 a, ::Unity::Mathematics::double2 b);

  /// @brief Method mul, addr 0x6a5b4ec, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 mul(::Unity::Mathematics::double2x3 a, ::Unity::Mathematics::double3 b);

  /// @brief Method mul, addr 0x6a5b664, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 mul(::Unity::Mathematics::double2x4 a, ::Unity::Mathematics::double4 b);

  /// @brief Method mul, addr 0x6a5b13c, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 mul(::Unity::Mathematics::double3 a, ::Unity::Mathematics::double3x2 b);

  /// @brief Method mul, addr 0x6a5b264, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 mul(::Unity::Mathematics::double4 a, ::Unity::Mathematics::double4x2 b);

  /// @brief Method mul, addr 0x6a5b3d0, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 mul(::Unity::Mathematics::double2x2 a, ::Unity::Mathematics::double2x2 b);

  /// @brief Method mul, addr 0x6a5b510, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 mul(::Unity::Mathematics::double2x3 a, ::Unity::Mathematics::double3x2 b);

  /// @brief Method mul, addr 0x6a5b690, size 0x94, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 mul(::Unity::Mathematics::double2x4 a, ::Unity::Mathematics::double4x2 b);

  /// @brief Method mul, addr 0x6a5b404, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 mul(::Unity::Mathematics::double2x2 a, ::Unity::Mathematics::double2x3 b);

  /// @brief Method mul, addr 0x6a5b580, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 mul(::Unity::Mathematics::double2x3 a, ::Unity::Mathematics::double3x3 b);

  /// @brief Method mul, addr 0x6a5b724, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 mul(::Unity::Mathematics::double2x4 a, ::Unity::Mathematics::double4x3 b);

  /// @brief Method mul, addr 0x6a5b468, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 mul(::Unity::Mathematics::double2x2 a, ::Unity::Mathematics::double2x4 b);

  /// @brief Method mul, addr 0x6a5b5e4, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 mul(::Unity::Mathematics::double2x3 a, ::Unity::Mathematics::double3x4 b);

  /// @brief Method mul, addr 0x6a5b7a4, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 mul(::Unity::Mathematics::double2x4 a, ::Unity::Mathematics::double4x4 b);

  /// @brief Method mul, addr 0x6a5b0ac, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 mul(::Unity::Mathematics::double2 a, ::Unity::Mathematics::double2x3 b);

  /// @brief Method mul, addr 0x6a5b178, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 mul(::Unity::Mathematics::double3 a, ::Unity::Mathematics::double3x3 b);

  /// @brief Method mul, addr 0x6a5b848, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 mul(::Unity::Mathematics::double3x2 a, ::Unity::Mathematics::double2 b);

  /// @brief Method mul, addr 0x6a5ba30, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 mul(::Unity::Mathematics::double3x3 a, ::Unity::Mathematics::double3 b);

  /// @brief Method mul, addr 0x6a5bcc0, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 mul(::Unity::Mathematics::double3x4 a, ::Unity::Mathematics::double4 b);

  /// @brief Method mul, addr 0x6a5b2b0, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 mul(::Unity::Mathematics::double4 a, ::Unity::Mathematics::double4x3 b);

  /// @brief Method mul, addr 0x6a5b87c, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x2 mul(::Unity::Mathematics::double3x2 a, ::Unity::Mathematics::double2x2 b);

  /// @brief Method mul, addr 0x6a5ba84, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x2 mul(::Unity::Mathematics::double3x3 a, ::Unity::Mathematics::double3x2 b);

  /// @brief Method mul, addr 0x6a5bd30, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x2 mul(::Unity::Mathematics::double3x4 a, ::Unity::Mathematics::double4x2 b);

  /// @brief Method mul, addr 0x6a5b8d0, size 0x98, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 mul(::Unity::Mathematics::double3x2 a, ::Unity::Mathematics::double2x3 b);

  /// @brief Method mul, addr 0x6a5bb0c, size 0xc0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 mul(::Unity::Mathematics::double3x3 a, ::Unity::Mathematics::double3x3 b);

  /// @brief Method mul, addr 0x6a5bde4, size 0xfc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 mul(::Unity::Mathematics::double3x4 a, ::Unity::Mathematics::double4x3 b);

  /// @brief Method mul, addr 0x6a5b968, size 0xc8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 mul(::Unity::Mathematics::double3x2 a, ::Unity::Mathematics::double2x4 b);

  /// @brief Method mul, addr 0x6a5bbcc, size 0xf4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 mul(::Unity::Mathematics::double3x3 a, ::Unity::Mathematics::double3x4 b);

  /// @brief Method mul, addr 0x6a5bee0, size 0x144, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 mul(::Unity::Mathematics::double3x4 a, ::Unity::Mathematics::double4x4 b);

  /// @brief Method mul, addr 0x6a5b0e0, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 mul(::Unity::Mathematics::double2 a, ::Unity::Mathematics::double2x4 b);

  /// @brief Method mul, addr 0x6a5b1d0, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 mul(::Unity::Mathematics::double3 a, ::Unity::Mathematics::double3x4 b);

  /// @brief Method mul, addr 0x6a5b320, size 0x94, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 mul(::Unity::Mathematics::double4 a, ::Unity::Mathematics::double4x4 b);

  /// @brief Method mul, addr 0x6a5c024, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 mul(::Unity::Mathematics::double4x2 a, ::Unity::Mathematics::double2 b);

  /// @brief Method mul, addr 0x6a5c1bc, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 mul(::Unity::Mathematics::double4x3 a, ::Unity::Mathematics::double3 b);

  /// @brief Method mul, addr 0x6a5c43c, size 0x98, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 mul(::Unity::Mathematics::double4x4 a, ::Unity::Mathematics::double4 b);

  /// @brief Method mul, addr 0x6a5c068, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 mul(::Unity::Mathematics::double4x2 a, ::Unity::Mathematics::double2x2 b);

  /// @brief Method mul, addr 0x6a5c22c, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 mul(::Unity::Mathematics::double4x3 a, ::Unity::Mathematics::double3x2 b);

  /// @brief Method mul, addr 0x6a5c4d4, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 mul(::Unity::Mathematics::double4x4 a, ::Unity::Mathematics::double4x2 b);

  /// @brief Method mul, addr 0x6a5c0b0, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 mul(::Unity::Mathematics::double4x2 a, ::Unity::Mathematics::double2x3 b);

  /// @brief Method mul, addr 0x6a5c2a8, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 mul(::Unity::Mathematics::double4x3 a, ::Unity::Mathematics::double3x3 b);

  /// @brief Method mul, addr 0x6a5c578, size 0xec, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 mul(::Unity::Mathematics::double4x4 a, ::Unity::Mathematics::double4x3 b);

  /// @brief Method mul, addr 0x6a5c128, size 0x94, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x4 mul(::Unity::Mathematics::double4x2 a, ::Unity::Mathematics::double2x4 b);

  /// @brief Method mul, addr 0x6a5c35c, size 0xe0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x4 mul(::Unity::Mathematics::double4x3 a, ::Unity::Mathematics::double3x4 b);

  /// @brief Method mul, addr 0x6a5c664, size 0x12c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x4 mul(::Unity::Mathematics::double4x4 a, ::Unity::Mathematics::double4x4 b);

  /// @brief Method mul, addr 0x6a59ab8, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 mul(::Unity::Mathematics::float2 a, ::Unity::Mathematics::float2x2 b);

  /// @brief Method mul, addr 0x6a59ddc, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 mul(::Unity::Mathematics::float2x2 a, ::Unity::Mathematics::float2 b);

  /// @brief Method mul, addr 0x6a59ef4, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 mul(::Unity::Mathematics::float2x3 a, ::Unity::Mathematics::float3 b);

  /// @brief Method mul, addr 0x6a5a08c, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 mul(::Unity::Mathematics::float2x4 a, ::Unity::Mathematics::float4 b);

  /// @brief Method mul, addr 0x6a59b64, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 mul(::Unity::Mathematics::float3 a, ::Unity::Mathematics::float3x2 b);

  /// @brief Method mul, addr 0x6a59c8c, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 mul(::Unity::Mathematics::float4 a, ::Unity::Mathematics::float4x2 b);

  /// @brief Method mul, addr 0x6a59df8, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 mul(::Unity::Mathematics::float2x2 a, ::Unity::Mathematics::float2x2 b);

  /// @brief Method mul, addr 0x6a59f18, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 mul(::Unity::Mathematics::float2x3 a, ::Unity::Mathematics::float3x2 b);

  /// @brief Method mul, addr 0x6a5a0b8, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 mul(::Unity::Mathematics::float2x4 a, ::Unity::Mathematics::float4x2 b);

  /// @brief Method mul, addr 0x6a59e2c, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 mul(::Unity::Mathematics::float2x2 a, ::Unity::Mathematics::float2x3 b);

  /// @brief Method mul, addr 0x6a59f78, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 mul(::Unity::Mathematics::float2x3 a, ::Unity::Mathematics::float3x3 b);

  /// @brief Method mul, addr 0x6a5a134, size 0xac, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 mul(::Unity::Mathematics::float2x4 a, ::Unity::Mathematics::float4x3 b);

  /// @brief Method mul, addr 0x6a59e8c, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x4 mul(::Unity::Mathematics::float2x2 a, ::Unity::Mathematics::float2x4 b);

  /// @brief Method mul, addr 0x6a59ff4, size 0x98, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x4 mul(::Unity::Mathematics::float2x3 a, ::Unity::Mathematics::float3x4 b);

  /// @brief Method mul, addr 0x6a5a1e0, size 0xc8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x4 mul(::Unity::Mathematics::float2x4 a, ::Unity::Mathematics::float4x4 b);

  /// @brief Method mul, addr 0x6a59ad4, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 mul(::Unity::Mathematics::float2 a, ::Unity::Mathematics::float2x3 b);

  /// @brief Method mul, addr 0x6a59ba0, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 mul(::Unity::Mathematics::float3 a, ::Unity::Mathematics::float3x3 b);

  /// @brief Method mul, addr 0x6a5a2a8, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 mul(::Unity::Mathematics::float3x2 a, ::Unity::Mathematics::float2 b);

  /// @brief Method mul, addr 0x6a5a4cc, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 mul(::Unity::Mathematics::float3x3 a, ::Unity::Mathematics::float3 b);

  /// @brief Method mul, addr 0x6a5a814, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 mul(::Unity::Mathematics::float3x4 a, ::Unity::Mathematics::float4 b);

  /// @brief Method mul, addr 0x6a59cd8, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 mul(::Unity::Mathematics::float4 a, ::Unity::Mathematics::float4x3 b);

  /// @brief Method mul, addr 0x6a6050c, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 mul(::Unity::Mathematics::quaternion q, ::Unity::Mathematics::float3 v);

  /// @brief Method mul, addr 0x6a5a2d8, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x2 mul(::Unity::Mathematics::float3x2 a, ::Unity::Mathematics::float2x2 b);

  /// @brief Method mul, addr 0x6a5a514, size 0xa0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x2 mul(::Unity::Mathematics::float3x3 a, ::Unity::Mathematics::float3x2 b);

  /// @brief Method mul, addr 0x6a5a874, size 0xdc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x2 mul(::Unity::Mathematics::float3x4 a, ::Unity::Mathematics::float4x2 b);

  /// @brief Method mul, addr 0x6a5a344, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 mul(::Unity::Mathematics::float3x2 a, ::Unity::Mathematics::float2x3 b);

  /// @brief Method mul, addr 0x6a5a5b4, size 0x104, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 mul(::Unity::Mathematics::float3x3 a, ::Unity::Mathematics::float3x3 b);

  /// @brief Method mul, addr 0x6a5a950, size 0x168, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 mul(::Unity::Mathematics::float3x4 a, ::Unity::Mathematics::float4x3 b);

  /// @brief Method mul, addr 0x6a5a3f4, size 0xd8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 mul(::Unity::Mathematics::float3x2 a, ::Unity::Mathematics::float2x4 b);

  /// @brief Method mul, addr 0x6a5a6b8, size 0x15c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 mul(::Unity::Mathematics::float3x3 a, ::Unity::Mathematics::float3x4 b);

  /// @brief Method mul, addr 0x6a5aab8, size 0x1e4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 mul(::Unity::Mathematics::float3x4 a, ::Unity::Mathematics::float4x4 b);

  /// @brief Method mul, addr 0x6a36948, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 mul(::Unity::Mathematics::AffineTransform a, ::Unity::Mathematics::float4 pos);

  /// @brief Method mul, addr 0x6a614f0, size 0xa8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 mul(::Unity::Mathematics::RigidTransform a, ::Unity::Mathematics::float4 pos);

  /// @brief Method mul, addr 0x6a59b08, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 mul(::Unity::Mathematics::float2 a, ::Unity::Mathematics::float2x4 b);

  /// @brief Method mul, addr 0x6a59bf8, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 mul(::Unity::Mathematics::float3 a, ::Unity::Mathematics::float3x4 b);

  /// @brief Method mul, addr 0x6a59d48, size 0x94, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 mul(::Unity::Mathematics::float4 a, ::Unity::Mathematics::float4x4 b);

  /// @brief Method mul, addr 0x6a5ac9c, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 mul(::Unity::Mathematics::float4x2 a, ::Unity::Mathematics::float2 b);

  /// @brief Method mul, addr 0x6a5ad70, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 mul(::Unity::Mathematics::float4x3 a, ::Unity::Mathematics::float3 b);

  /// @brief Method mul, addr 0x6a5aec8, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 mul(::Unity::Mathematics::float4x4 a, ::Unity::Mathematics::float4 b);

  /// @brief Method mul, addr 0x6a5acbc, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x2 mul(::Unity::Mathematics::float4x2 a, ::Unity::Mathematics::float2x2 b);

  /// @brief Method mul, addr 0x6a5ad9c, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x2 mul(::Unity::Mathematics::float4x3 a, ::Unity::Mathematics::float3x2 b);

  /// @brief Method mul, addr 0x6a5aefc, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x2 mul(::Unity::Mathematics::float4x4 a, ::Unity::Mathematics::float4x2 b);

  /// @brief Method mul, addr 0x6a5ace0, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x3 mul(::Unity::Mathematics::float4x2 a, ::Unity::Mathematics::float2x3 b);

  /// @brief Method mul, addr 0x6a5ade4, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x3 mul(::Unity::Mathematics::float4x3 a, ::Unity::Mathematics::float3x3 b);

  /// @brief Method mul, addr 0x6a5af54, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x3 mul(::Unity::Mathematics::float4x4 a, ::Unity::Mathematics::float4x3 b);

  /// @brief Method mul, addr 0x6a5ad20, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 mul(::Unity::Mathematics::float4x2 a, ::Unity::Mathematics::float2x4 b);

  /// @brief Method mul, addr 0x6a5ae48, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 mul(::Unity::Mathematics::float4x3 a, ::Unity::Mathematics::float3x4 b);

  /// @brief Method mul, addr 0x6a5afd4, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 mul(::Unity::Mathematics::float4x4 a, ::Unity::Mathematics::float4x4 b);

  /// @brief Method mul, addr 0x6a5c7ac, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 mul(::Unity::Mathematics::int2 a, ::Unity::Mathematics::int2x2 b);

  /// @brief Method mul, addr 0x6a5ca5c, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 mul(::Unity::Mathematics::int2x2 a, ::Unity::Mathematics::int2 b);

  /// @brief Method mul, addr 0x6a5cb8c, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 mul(::Unity::Mathematics::int2x3 a, ::Unity::Mathematics::int3 b);

  /// @brief Method mul, addr 0x6a5cd38, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 mul(::Unity::Mathematics::int2x4 a, ::Unity::Mathematics::int4 b);

  /// @brief Method mul, addr 0x6a5c858, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 mul(::Unity::Mathematics::int3 a, ::Unity::Mathematics::int3x2 b);

  /// @brief Method mul, addr 0x6a5c950, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 mul(::Unity::Mathematics::int4 a, ::Unity::Mathematics::int4x2 b);

  /// @brief Method mul, addr 0x6a5ca80, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x2 mul(::Unity::Mathematics::int2x2 a, ::Unity::Mathematics::int2x2 b);

  /// @brief Method mul, addr 0x6a5cbbc, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x2 mul(::Unity::Mathematics::int2x3 a, ::Unity::Mathematics::int3x2 b);

  /// @brief Method mul, addr 0x6a5cd84, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x2 mul(::Unity::Mathematics::int2x4 a, ::Unity::Mathematics::int4x2 b);

  /// @brief Method mul, addr 0x6a5cabc, size 0x5c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x3 mul(::Unity::Mathematics::int2x2 a, ::Unity::Mathematics::int2x3 b);

  /// @brief Method mul, addr 0x6a5cc10, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x3 mul(::Unity::Mathematics::int2x3 a, ::Unity::Mathematics::int3x3 b);

  /// @brief Method mul, addr 0x6a5cdf0, size 0xa0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x3 mul(::Unity::Mathematics::int2x4 a, ::Unity::Mathematics::int4x3 b);

  /// @brief Method mul, addr 0x6a5cb18, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x4 mul(::Unity::Mathematics::int2x2 a, ::Unity::Mathematics::int2x4 b);

  /// @brief Method mul, addr 0x6a5cc90, size 0xa8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x4 mul(::Unity::Mathematics::int2x3 a, ::Unity::Mathematics::int3x4 b);

  /// @brief Method mul, addr 0x6a5ce90, size 0xcc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x4 mul(::Unity::Mathematics::int2x4 a, ::Unity::Mathematics::int4x4 b);

  /// @brief Method mul, addr 0x6a5c7d0, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 mul(::Unity::Mathematics::int2 a, ::Unity::Mathematics::int2x3 b);

  /// @brief Method mul, addr 0x6a5c88c, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 mul(::Unity::Mathematics::int3 a, ::Unity::Mathematics::int3x3 b);

  /// @brief Method mul, addr 0x6a5cf5c, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 mul(::Unity::Mathematics::int3x2 a, ::Unity::Mathematics::int2 b);

  /// @brief Method mul, addr 0x6a5d12c, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 mul(::Unity::Mathematics::int3x3 a, ::Unity::Mathematics::int3 b);

  /// @brief Method mul, addr 0x6a5d3b8, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 mul(::Unity::Mathematics::int3x4 a, ::Unity::Mathematics::int4 b);

  /// @brief Method mul, addr 0x6a5c990, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 mul(::Unity::Mathematics::int4 a, ::Unity::Mathematics::int4x3 b);

  /// @brief Method mul, addr 0x6a5cf8c, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 mul(::Unity::Mathematics::int3x2 a, ::Unity::Mathematics::int2x2 b);

  /// @brief Method mul, addr 0x6a5d170, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 mul(::Unity::Mathematics::int3x3 a, ::Unity::Mathematics::int3x2 b);

  /// @brief Method mul, addr 0x6a5d420, size 0xac, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 mul(::Unity::Mathematics::int3x4 a, ::Unity::Mathematics::int4x2 b);

  /// @brief Method mul, addr 0x6a5cfec, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x3 mul(::Unity::Mathematics::int3x2 a, ::Unity::Mathematics::int2x3 b);

  /// @brief Method mul, addr 0x6a5d1f4, size 0xc4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x3 mul(::Unity::Mathematics::int3x3 a, ::Unity::Mathematics::int3x3 b);

  /// @brief Method mul, addr 0x6a5d4cc, size 0xf8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x3 mul(::Unity::Mathematics::int3x4 a, ::Unity::Mathematics::int4x3 b);

  /// @brief Method mul, addr 0x6a5d074, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 mul(::Unity::Mathematics::int3x2 a, ::Unity::Mathematics::int2x4 b);

  /// @brief Method mul, addr 0x6a5d2b8, size 0x100, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 mul(::Unity::Mathematics::int3x3 a, ::Unity::Mathematics::int3x4 b);

  /// @brief Method mul, addr 0x6a5d5c4, size 0x14c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 mul(::Unity::Mathematics::int3x4 a, ::Unity::Mathematics::int4x4 b);

  /// @brief Method mul, addr 0x6a5c800, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 mul(::Unity::Mathematics::int2 a, ::Unity::Mathematics::int2x4 b);

  /// @brief Method mul, addr 0x6a5c8d0, size 0x5c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 mul(::Unity::Mathematics::int3 a, ::Unity::Mathematics::int3x4 b);

  /// @brief Method mul, addr 0x6a5c9e8, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 mul(::Unity::Mathematics::int4 a, ::Unity::Mathematics::int4x4 b);

  /// @brief Method mul, addr 0x6a5d710, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 mul(::Unity::Mathematics::int4x2 a, ::Unity::Mathematics::int2 b);

  /// @brief Method mul, addr 0x6a5d964, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 mul(::Unity::Mathematics::int4x3 a, ::Unity::Mathematics::int3 b);

  /// @brief Method mul, addr 0x6a5dcbc, size 0x8c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 mul(::Unity::Mathematics::int4x4 a, ::Unity::Mathematics::int4 b);

  /// @brief Method mul, addr 0x6a5d754, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 mul(::Unity::Mathematics::int4x2 a, ::Unity::Mathematics::int2x2 b);

  /// @brief Method mul, addr 0x6a5d9cc, size 0xa8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 mul(::Unity::Mathematics::int4x3 a, ::Unity::Mathematics::int3x2 b);

  /// @brief Method mul, addr 0x6a5dd48, size 0xe4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 mul(::Unity::Mathematics::int4x4 a, ::Unity::Mathematics::int4x2 b);

  /// @brief Method mul, addr 0x6a5d7cc, size 0xac, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 mul(::Unity::Mathematics::int4x2 a, ::Unity::Mathematics::int2x3 b);

  /// @brief Method mul, addr 0x6a5da74, size 0xfc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 mul(::Unity::Mathematics::int4x3 a, ::Unity::Mathematics::int3x3 b);

  /// @brief Method mul, addr 0x6a5de2c, size 0x148, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 mul(::Unity::Mathematics::int4x4 a, ::Unity::Mathematics::int4x3 b);

  /// @brief Method mul, addr 0x6a5d878, size 0xec, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 mul(::Unity::Mathematics::int4x2 a, ::Unity::Mathematics::int2x4 b);

  /// @brief Method mul, addr 0x6a5db70, size 0x14c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 mul(::Unity::Mathematics::int4x3 a, ::Unity::Mathematics::int3x4 b);

  /// @brief Method mul, addr 0x6a5df74, size 0x1a4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 mul(::Unity::Mathematics::int4x4 a, ::Unity::Mathematics::int4x4 b);

  /// @brief Method mul, addr 0x6a60498, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion mul(::Unity::Mathematics::quaternion a, ::Unity::Mathematics::quaternion b);

  /// @brief Method mul, addr 0x6a5e134, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 mul(::Unity::Mathematics::uint2 a, ::Unity::Mathematics::uint2x2 b);

  /// @brief Method mul, addr 0x6a5e3e4, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 mul(::Unity::Mathematics::uint2x2 a, ::Unity::Mathematics::uint2 b);

  /// @brief Method mul, addr 0x6a5e514, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 mul(::Unity::Mathematics::uint2x3 a, ::Unity::Mathematics::uint3 b);

  /// @brief Method mul, addr 0x6a5e6c0, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 mul(::Unity::Mathematics::uint2x4 a, ::Unity::Mathematics::uint4 b);

  /// @brief Method mul, addr 0x6a5e1e0, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 mul(::Unity::Mathematics::uint3 a, ::Unity::Mathematics::uint3x2 b);

  /// @brief Method mul, addr 0x6a5e2d8, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 mul(::Unity::Mathematics::uint4 a, ::Unity::Mathematics::uint4x2 b);

  /// @brief Method mul, addr 0x6a5e408, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 mul(::Unity::Mathematics::uint2x2 a, ::Unity::Mathematics::uint2x2 b);

  /// @brief Method mul, addr 0x6a5e544, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 mul(::Unity::Mathematics::uint2x3 a, ::Unity::Mathematics::uint3x2 b);

  /// @brief Method mul, addr 0x6a5e70c, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 mul(::Unity::Mathematics::uint2x4 a, ::Unity::Mathematics::uint4x2 b);

  /// @brief Method mul, addr 0x6a5e444, size 0x5c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x3 mul(::Unity::Mathematics::uint2x2 a, ::Unity::Mathematics::uint2x3 b);

  /// @brief Method mul, addr 0x6a5e598, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x3 mul(::Unity::Mathematics::uint2x3 a, ::Unity::Mathematics::uint3x3 b);

  /// @brief Method mul, addr 0x6a5e778, size 0xa0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x3 mul(::Unity::Mathematics::uint2x4 a, ::Unity::Mathematics::uint4x3 b);

  /// @brief Method mul, addr 0x6a5e4a0, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x4 mul(::Unity::Mathematics::uint2x2 a, ::Unity::Mathematics::uint2x4 b);

  /// @brief Method mul, addr 0x6a5e618, size 0xa8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x4 mul(::Unity::Mathematics::uint2x3 a, ::Unity::Mathematics::uint3x4 b);

  /// @brief Method mul, addr 0x6a5e818, size 0xcc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x4 mul(::Unity::Mathematics::uint2x4 a, ::Unity::Mathematics::uint4x4 b);

  /// @brief Method mul, addr 0x6a5e158, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 mul(::Unity::Mathematics::uint2 a, ::Unity::Mathematics::uint2x3 b);

  /// @brief Method mul, addr 0x6a5e214, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 mul(::Unity::Mathematics::uint3 a, ::Unity::Mathematics::uint3x3 b);

  /// @brief Method mul, addr 0x6a5e8e4, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 mul(::Unity::Mathematics::uint3x2 a, ::Unity::Mathematics::uint2 b);

  /// @brief Method mul, addr 0x6a5eab4, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 mul(::Unity::Mathematics::uint3x3 a, ::Unity::Mathematics::uint3 b);

  /// @brief Method mul, addr 0x6a5ed40, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 mul(::Unity::Mathematics::uint3x4 a, ::Unity::Mathematics::uint4 b);

  /// @brief Method mul, addr 0x6a5e318, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 mul(::Unity::Mathematics::uint4 a, ::Unity::Mathematics::uint4x3 b);

  /// @brief Method mul, addr 0x6a5e914, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 mul(::Unity::Mathematics::uint3x2 a, ::Unity::Mathematics::uint2x2 b);

  /// @brief Method mul, addr 0x6a5eaf8, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 mul(::Unity::Mathematics::uint3x3 a, ::Unity::Mathematics::uint3x2 b);

  /// @brief Method mul, addr 0x6a5eda8, size 0xac, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 mul(::Unity::Mathematics::uint3x4 a, ::Unity::Mathematics::uint4x2 b);

  /// @brief Method mul, addr 0x6a5e974, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x3 mul(::Unity::Mathematics::uint3x2 a, ::Unity::Mathematics::uint2x3 b);

  /// @brief Method mul, addr 0x6a5eb7c, size 0xc4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x3 mul(::Unity::Mathematics::uint3x3 a, ::Unity::Mathematics::uint3x3 b);

  /// @brief Method mul, addr 0x6a5ee54, size 0xf8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x3 mul(::Unity::Mathematics::uint3x4 a, ::Unity::Mathematics::uint4x3 b);

  /// @brief Method mul, addr 0x6a5e9fc, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 mul(::Unity::Mathematics::uint3x2 a, ::Unity::Mathematics::uint2x4 b);

  /// @brief Method mul, addr 0x6a5ec40, size 0x100, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 mul(::Unity::Mathematics::uint3x3 a, ::Unity::Mathematics::uint3x4 b);

  /// @brief Method mul, addr 0x6a5ef4c, size 0x14c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 mul(::Unity::Mathematics::uint3x4 a, ::Unity::Mathematics::uint4x4 b);

  /// @brief Method mul, addr 0x6a5e188, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 mul(::Unity::Mathematics::uint2 a, ::Unity::Mathematics::uint2x4 b);

  /// @brief Method mul, addr 0x6a5e258, size 0x5c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 mul(::Unity::Mathematics::uint3 a, ::Unity::Mathematics::uint3x4 b);

  /// @brief Method mul, addr 0x6a5e370, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 mul(::Unity::Mathematics::uint4 a, ::Unity::Mathematics::uint4x4 b);

  /// @brief Method mul, addr 0x6a5f098, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 mul(::Unity::Mathematics::uint4x2 a, ::Unity::Mathematics::uint2 b);

  /// @brief Method mul, addr 0x6a5f2ec, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 mul(::Unity::Mathematics::uint4x3 a, ::Unity::Mathematics::uint3 b);

  /// @brief Method mul, addr 0x6a5f644, size 0x8c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 mul(::Unity::Mathematics::uint4x4 a, ::Unity::Mathematics::uint4 b);

  /// @brief Method mul, addr 0x6a5f0dc, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x2 mul(::Unity::Mathematics::uint4x2 a, ::Unity::Mathematics::uint2x2 b);

  /// @brief Method mul, addr 0x6a5f354, size 0xa8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x2 mul(::Unity::Mathematics::uint4x3 a, ::Unity::Mathematics::uint3x2 b);

  /// @brief Method mul, addr 0x6a5f6d0, size 0xe4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x2 mul(::Unity::Mathematics::uint4x4 a, ::Unity::Mathematics::uint4x2 b);

  /// @brief Method mul, addr 0x6a5f154, size 0xac, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 mul(::Unity::Mathematics::uint4x2 a, ::Unity::Mathematics::uint2x3 b);

  /// @brief Method mul, addr 0x6a5f3fc, size 0xfc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 mul(::Unity::Mathematics::uint4x3 a, ::Unity::Mathematics::uint3x3 b);

  /// @brief Method mul, addr 0x6a5f7b4, size 0x148, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 mul(::Unity::Mathematics::uint4x4 a, ::Unity::Mathematics::uint4x3 b);

  /// @brief Method mul, addr 0x6a5f200, size 0xec, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x4 mul(::Unity::Mathematics::uint4x2 a, ::Unity::Mathematics::uint2x4 b);

  /// @brief Method mul, addr 0x6a5f4f8, size 0x14c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x4 mul(::Unity::Mathematics::uint4x3 a, ::Unity::Mathematics::uint3x4 b);

  /// @brief Method mul, addr 0x6a5f8fc, size 0x1a4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x4 mul(::Unity::Mathematics::uint4x4 a, ::Unity::Mathematics::uint4x4 b);

  /// @brief Method mul, addr 0x6a5b080, size 0x10, virtual false, abstract: false, final false
  static inline double_t mul(::Unity::Mathematics::double2 a, ::Unity::Mathematics::double2 b);

  /// @brief Method mul, addr 0x6a5b124, size 0x18, virtual false, abstract: false, final false
  static inline double_t mul(::Unity::Mathematics::double3 a, ::Unity::Mathematics::double3 b);

  /// @brief Method mul, addr 0x6a5b244, size 0x20, virtual false, abstract: false, final false
  static inline double_t mul(::Unity::Mathematics::double4 a, ::Unity::Mathematics::double4 b);

  /// @brief Method mul, addr 0x6a5b078, size 0x8, virtual false, abstract: false, final false
  static inline double_t mul(double_t a, double_t b);

  /// @brief Method mul, addr 0x6a59aa8, size 0x10, virtual false, abstract: false, final false
  static inline float_t mul(::Unity::Mathematics::float2 a, ::Unity::Mathematics::float2 b);

  /// @brief Method mul, addr 0x6a59b4c, size 0x18, virtual false, abstract: false, final false
  static inline float_t mul(::Unity::Mathematics::float3 a, ::Unity::Mathematics::float3 b);

  /// @brief Method mul, addr 0x6a59c6c, size 0x20, virtual false, abstract: false, final false
  static inline float_t mul(::Unity::Mathematics::float4 a, ::Unity::Mathematics::float4 b);

  /// @brief Method mul, addr 0x6a59aa0, size 0x8, virtual false, abstract: false, final false
  static inline float_t mul(float_t a, float_t b);

  /// @brief Method mul, addr 0x6a5c798, size 0x14, virtual false, abstract: false, final false
  static inline int32_t mul(::Unity::Mathematics::int2 a, ::Unity::Mathematics::int2 b);

  /// @brief Method mul, addr 0x6a5c840, size 0x18, virtual false, abstract: false, final false
  static inline int32_t mul(::Unity::Mathematics::int3 a, ::Unity::Mathematics::int3 b);

  /// @brief Method mul, addr 0x6a5c92c, size 0x24, virtual false, abstract: false, final false
  static inline int32_t mul(::Unity::Mathematics::int4 a, ::Unity::Mathematics::int4 b);

  /// @brief Method mul, addr 0x6a5c790, size 0x8, virtual false, abstract: false, final false
  static inline int32_t mul(int32_t a, int32_t b);

  /// @brief Method mul, addr 0x6a5e120, size 0x14, virtual false, abstract: false, final false
  static inline uint32_t mul(::Unity::Mathematics::uint2 a, ::Unity::Mathematics::uint2 b);

  /// @brief Method mul, addr 0x6a5e1c8, size 0x18, virtual false, abstract: false, final false
  static inline uint32_t mul(::Unity::Mathematics::uint3 a, ::Unity::Mathematics::uint3 b);

  /// @brief Method mul, addr 0x6a5e2b4, size 0x24, virtual false, abstract: false, final false
  static inline uint32_t mul(::Unity::Mathematics::uint4 a, ::Unity::Mathematics::uint4 b);

  /// @brief Method mul, addr 0x6a5e118, size 0x8, virtual false, abstract: false, final false
  static inline uint32_t mul(uint32_t a, uint32_t b);

  /// @brief Method mulScale, addr 0x6a593ec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 mulScale(::Unity::Mathematics::float3x3 m, ::Unity::Mathematics::float3 s);

  /// @brief Method nlerp, addr 0x6a60604, size 0x174, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion nlerp(::Unity::Mathematics::quaternion q1, ::Unity::Mathematics::quaternion q2, float_t t);

  /// @brief Method normalize, addr 0x6a51b10, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 normalize(::Unity::Mathematics::double2 x);

  /// @brief Method normalize, addr 0x6a51b90, size 0x98, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 normalize(::Unity::Mathematics::double3 x);

  /// @brief Method normalize, addr 0x6a51c28, size 0xa8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 normalize(::Unity::Mathematics::double4 x);

  /// @brief Method normalize, addr 0x6a51950, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 normalize(::Unity::Mathematics::float2 x);

  /// @brief Method normalize, addr 0x6a519d0, size 0x98, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 normalize(::Unity::Mathematics::float3 x);

  /// @brief Method normalize, addr 0x6a51a68, size 0xa8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 normalize(::Unity::Mathematics::float4 x);

  /// @brief Method normalize, addr 0x6a5fc40, size 0xa8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion normalize(::Unity::Mathematics::quaternion q);

  /// @brief Method normalizesafe, addr 0x6a51f1c, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 normalizesafe(::Unity::Mathematics::double2 x, ::Unity::Mathematics::double2 defaultvalue);

  /// @brief Method normalizesafe, addr 0x6a51fc0, size 0xc4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 normalizesafe(::Unity::Mathematics::double3 x, ::Unity::Mathematics::double3 defaultvalue);

  /// @brief Method normalizesafe, addr 0x6a52084, size 0xe4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 normalizesafe(::Unity::Mathematics::double4 x, ::Unity::Mathematics::double4 defaultvalue);

  /// @brief Method normalizesafe, addr 0x6a51cd0, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 normalizesafe(::Unity::Mathematics::float2 x, ::Unity::Mathematics::float2 defaultvalue);

  /// @brief Method normalizesafe, addr 0x6a51d74, size 0xc4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 normalizesafe(::Unity::Mathematics::float3 x, ::Unity::Mathematics::float3 defaultvalue);

  /// @brief Method normalizesafe, addr 0x6a51e38, size 0xe4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 normalizesafe(::Unity::Mathematics::float4 x, ::Unity::Mathematics::float4 defaultvalue);

  /// @brief Method normalizesafe, addr 0x6a5fce8, size 0x110, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion normalizesafe(::Unity::Mathematics::quaternion q);

  /// @brief Method normalizesafe, addr 0x6a5fdf8, size 0xe4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion normalizesafe(::Unity::Mathematics::quaternion q, ::Unity::Mathematics::quaternion defaultvalue);

  /// @brief Method orthonormal_basis, addr 0x6a57c74, size 0x5c, virtual false, abstract: false, final false
  static inline void orthonormal_basis(::Unity::Mathematics::double3 normal, ::by_ref<::Unity::Mathematics::double3> basis1, ::by_ref<::Unity::Mathematics::double3> basis2);

  /// @brief Method orthonormal_basis, addr 0x6a57c18, size 0x5c, virtual false, abstract: false, final false
  static inline void orthonormal_basis(::Unity::Mathematics::float3 normal, ::by_ref<::Unity::Mathematics::float3> basis1, ::by_ref<::Unity::Mathematics::float3> basis2);

  /// @brief Method orthonormalize, addr 0x6a59660, size 0x19c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 orthonormalize(::Unity::Mathematics::float3x3 i);

  /// @brief Method pow, addr 0x6a4da88, size 0xc8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 pow(::Unity::Mathematics::double2 x, ::Unity::Mathematics::double2 y);

  /// @brief Method pow, addr 0x6a4db50, size 0x120, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 pow(::Unity::Mathematics::double3 x, ::Unity::Mathematics::double3 y);

  /// @brief Method pow, addr 0x6a4dc70, size 0x178, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 pow(::Unity::Mathematics::double4 x, ::Unity::Mathematics::double4 y);

  /// @brief Method pow, addr 0x6a4d6a0, size 0xd0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 pow(::Unity::Mathematics::float2 x, ::Unity::Mathematics::float2 y);

  /// @brief Method pow, addr 0x6a4d770, size 0x128, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 pow(::Unity::Mathematics::float3 x, ::Unity::Mathematics::float3 y);

  /// @brief Method pow, addr 0x6a4d898, size 0x188, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 pow(::Unity::Mathematics::float4 x, ::Unity::Mathematics::float4 y);

  /// @brief Method pow, addr 0x6a4da20, size 0x68, virtual false, abstract: false, final false
  static inline double_t pow(double_t x, double_t y);

  /// @brief Method pow, addr 0x6a4d630, size 0x70, virtual false, abstract: false, final false
  static inline float_t pow(float_t x, float_t y);

  /// @brief Method project, addr 0x6a53fb4, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 project(::Unity::Mathematics::double2 a, ::Unity::Mathematics::double2 ontoB);

  /// @brief Method project, addr 0x6a53fdc, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 project(::Unity::Mathematics::double3 a, ::Unity::Mathematics::double3 ontoB);

  /// @brief Method project, addr 0x6a54018, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 project(::Unity::Mathematics::double4 a, ::Unity::Mathematics::double4 ontoB);

  /// @brief Method project, addr 0x6a53d40, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 project(::Unity::Mathematics::float2 a, ::Unity::Mathematics::float2 ontoB);

  /// @brief Method project, addr 0x6a53d68, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 project(::Unity::Mathematics::float3 a, ::Unity::Mathematics::float3 ontoB);

  /// @brief Method project, addr 0x6a53da4, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 project(::Unity::Mathematics::float4 a, ::Unity::Mathematics::float4 ontoB);

  /// @brief Method projectsafe, addr 0x6a54078, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 projectsafe(::Unity::Mathematics::double2 a, ::Unity::Mathematics::double2 ontoB, ::Unity::Mathematics::double2 defaultValue);

  /// @brief Method projectsafe, addr 0x6a540d0, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 projectsafe(::Unity::Mathematics::double3 a, ::Unity::Mathematics::double3 ontoB, ::Unity::Mathematics::double3 defaultValue);

  /// @brief Method projectsafe, addr 0x6a54160, size 0xc8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 projectsafe(::Unity::Mathematics::double4 a, ::Unity::Mathematics::double4 ontoB, ::Unity::Mathematics::double4 defaultValue);

  /// @brief Method projectsafe, addr 0x6a53e04, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 projectsafe(::Unity::Mathematics::float2 a, ::Unity::Mathematics::float2 ontoB, ::Unity::Mathematics::float2 defaultValue);

  /// @brief Method projectsafe, addr 0x6a53e5c, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 projectsafe(::Unity::Mathematics::float3 a, ::Unity::Mathematics::float3 ontoB, ::Unity::Mathematics::float3 defaultValue);

  /// @brief Method projectsafe, addr 0x6a53eec, size 0xc8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 projectsafe(::Unity::Mathematics::float4 a, ::Unity::Mathematics::float4 ontoB, ::Unity::Mathematics::float4 defaultValue);

  /// @brief Method pseudoinverse, addr 0x6a597fc, size 0x2a4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 pseudoinverse(::Unity::Mathematics::float3x3 m);

  /// @brief Method quaternion, addr 0x6a5faa8, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion quaternion(::Unity::Mathematics::float3x3 m);

  /// @brief Method quaternion, addr 0x6a5fae8, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion quaternion(::Unity::Mathematics::float4x4 m);

  /// @brief Method quaternion, addr 0x6a5faa4, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion quaternion(::Unity::Mathematics::float4 value);

  /// @brief Method quaternion, addr 0x6a5faa0, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion quaternion(float_t x, float_t y, float_t z, float_t w);

  /// @brief Method radians, addr 0x6a56e0c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 radians(::Unity::Mathematics::double2 x);

  /// @brief Method radians, addr 0x6a56e20, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 radians(::Unity::Mathematics::double3 x);

  /// @brief Method radians, addr 0x6a56e38, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 radians(::Unity::Mathematics::double4 x);

  /// @brief Method radians, addr 0x6a56db4, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 radians(::Unity::Mathematics::float2 x);

  /// @brief Method radians, addr 0x6a56dc8, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 radians(::Unity::Mathematics::float3 x);

  /// @brief Method radians, addr 0x6a56de0, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 radians(::Unity::Mathematics::float4 x);

  /// @brief Method radians, addr 0x6a56dfc, size 0x10, virtual false, abstract: false, final false
  static inline double_t radians(double_t x);

  /// @brief Method radians, addr 0x6a56da4, size 0x10, virtual false, abstract: false, final false
  static inline float_t radians(float_t x);

  /// @brief Method rcp, addr 0x6a4d338, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 rcp(::Unity::Mathematics::double2 x);

  /// @brief Method rcp, addr 0x6a4d348, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 rcp(::Unity::Mathematics::double3 x);

  /// @brief Method rcp, addr 0x6a4d35c, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 rcp(::Unity::Mathematics::double4 x);

  /// @brief Method rcp, addr 0x6a4d2f0, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 rcp(::Unity::Mathematics::float2 x);

  /// @brief Method rcp, addr 0x6a4d300, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 rcp(::Unity::Mathematics::float3 x);

  /// @brief Method rcp, addr 0x6a4d314, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 rcp(::Unity::Mathematics::float4 x);

  /// @brief Method rcp, addr 0x6a4d32c, size 0xc, virtual false, abstract: false, final false
  static inline double_t rcp(double_t x);

  /// @brief Method rcp, addr 0x6a4d2e4, size 0xc, virtual false, abstract: false, final false
  static inline float_t rcp(float_t x);

  /// @brief Method read32_little_endian, addr 0x6a57dd8, size 0x8, virtual false, abstract: false, final false
  static inline uint32_t read32_little_endian(void* pBuffer);

  /// @brief Method reflect, addr 0x6a5369c, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 reflect(::Unity::Mathematics::double2 i, ::Unity::Mathematics::double2 n);

  /// @brief Method reflect, addr 0x6a536c4, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 reflect(::Unity::Mathematics::double3 i, ::Unity::Mathematics::double3 n);

  /// @brief Method reflect, addr 0x6a53700, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 reflect(::Unity::Mathematics::double4 i, ::Unity::Mathematics::double4 n);

  /// @brief Method reflect, addr 0x6a535e8, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 reflect(::Unity::Mathematics::float2 i, ::Unity::Mathematics::float2 n);

  /// @brief Method reflect, addr 0x6a53610, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 reflect(::Unity::Mathematics::float3 i, ::Unity::Mathematics::float3 n);

  /// @brief Method reflect, addr 0x6a5364c, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 reflect(::Unity::Mathematics::float4 i, ::Unity::Mathematics::float4 n);

  /// @brief Method refract, addr 0x6a53a48, size 0xd4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 refract(::Unity::Mathematics::double2 i, ::Unity::Mathematics::double2 n, double_t indexOfRefraction);

  /// @brief Method refract, addr 0x6a53b1c, size 0xfc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 refract(::Unity::Mathematics::double3 i, ::Unity::Mathematics::double3 n, double_t indexOfRefraction);

  /// @brief Method refract, addr 0x6a53c18, size 0x128, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 refract(::Unity::Mathematics::double4 i, ::Unity::Mathematics::double4 n, double_t indexOfRefraction);

  /// @brief Method refract, addr 0x6a53750, size 0xd4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 refract(::Unity::Mathematics::float2 i, ::Unity::Mathematics::float2 n, float_t indexOfRefraction);

  /// @brief Method refract, addr 0x6a53824, size 0xfc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 refract(::Unity::Mathematics::float3 i, ::Unity::Mathematics::float3 n, float_t indexOfRefraction);

  /// @brief Method refract, addr 0x6a53920, size 0x128, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 refract(::Unity::Mathematics::float4 i, ::Unity::Mathematics::float4 n, float_t indexOfRefraction);

  /// @brief Method remap, addr 0x6a45a7c, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 remap(::Unity::Mathematics::double2 srcStart, ::Unity::Mathematics::double2 srcEnd, ::Unity::Mathematics::double2 dstStart,
                                                    ::Unity::Mathematics::double2 dstEnd, ::Unity::Mathematics::double2 x);

  /// @brief Method remap, addr 0x6a45ab8, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 remap(::Unity::Mathematics::double3 srcStart, ::Unity::Mathematics::double3 srcEnd, ::Unity::Mathematics::double3 dstStart,
                                                    ::Unity::Mathematics::double3 dstEnd, ::Unity::Mathematics::double3 x);

  /// @brief Method remap, addr 0x6a45b1c, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 remap(::Unity::Mathematics::double4 srcStart, ::Unity::Mathematics::double4 srcEnd, ::Unity::Mathematics::double4 dstStart,
                                                    ::Unity::Mathematics::double4 dstEnd, ::Unity::Mathematics::double4 x);

  /// @brief Method remap, addr 0x6a45938, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 remap(::Unity::Mathematics::float2 srcStart, ::Unity::Mathematics::float2 srcEnd, ::Unity::Mathematics::float2 dstStart,
                                                   ::Unity::Mathematics::float2 dstEnd, ::Unity::Mathematics::float2 x);

  /// @brief Method remap, addr 0x6a45974, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 remap(::Unity::Mathematics::float3 srcStart, ::Unity::Mathematics::float3 srcEnd, ::Unity::Mathematics::float3 dstStart,
                                                   ::Unity::Mathematics::float3 dstEnd, ::Unity::Mathematics::float3 x);

  /// @brief Method remap, addr 0x6a459dc, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 remap(::Unity::Mathematics::float4 srcStart, ::Unity::Mathematics::float4 srcEnd, ::Unity::Mathematics::float4 dstStart,
                                                   ::Unity::Mathematics::float4 dstEnd, ::Unity::Mathematics::float4 x);

  /// @brief Method remap, addr 0x6a45a60, size 0x1c, virtual false, abstract: false, final false
  static inline double_t remap(double_t srcStart, double_t srcEnd, double_t dstStart, double_t dstEnd, double_t x);

  /// @brief Method remap, addr 0x6a4591c, size 0x1c, virtual false, abstract: false, final false
  static inline float_t remap(float_t srcStart, float_t srcEnd, float_t dstStart, float_t dstEnd, float_t x);

  /// @brief Method reversebits, addr 0x6a55a34, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 reversebits(::Unity::Mathematics::int2 x);

  /// @brief Method reversebits, addr 0x6a55aa0, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 reversebits(::Unity::Mathematics::int3 x);

  /// @brief Method reversebits, addr 0x6a55b10, size 0xdc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 reversebits(::Unity::Mathematics::int4 x);

  /// @brief Method reversebits, addr 0x6a55bf4, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 reversebits(::Unity::Mathematics::uint2 x);

  /// @brief Method reversebits, addr 0x6a55c60, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 reversebits(::Unity::Mathematics::uint3 x);

  /// @brief Method reversebits, addr 0x6a55cd0, size 0xdc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 reversebits(::Unity::Mathematics::uint4 x);

  /// @brief Method reversebits, addr 0x6a55a2c, size 0x8, virtual false, abstract: false, final false
  static inline int32_t reversebits(int32_t x);

  /// @brief Method reversebits, addr 0x6a55dac, size 0x8, virtual false, abstract: false, final false
  static inline int64_t reversebits(int64_t x);

  /// @brief Method reversebits, addr 0x6a55bec, size 0x8, virtual false, abstract: false, final false
  static inline uint32_t reversebits(uint32_t x);

  /// @brief Method reversebits, addr 0x6a55db4, size 0x8, virtual false, abstract: false, final false
  static inline uint64_t reversebits(uint64_t x);

  /// @brief Method right, addr 0x6a58164, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 right();

  /// @brief Method rol, addr 0x6a55dc8, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 rol(::Unity::Mathematics::int2 x, int32_t n);

  /// @brief Method rol, addr 0x6a55de8, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 rol(::Unity::Mathematics::int3 x, int32_t n);

  /// @brief Method rol, addr 0x6a55e0c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 rol(::Unity::Mathematics::int4 x, int32_t n);

  /// @brief Method rol, addr 0x6a55e50, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 rol(::Unity::Mathematics::uint2 x, int32_t n);

  /// @brief Method rol, addr 0x6a55e70, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 rol(::Unity::Mathematics::uint3 x, int32_t n);

  /// @brief Method rol, addr 0x6a55e94, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 rol(::Unity::Mathematics::uint4 x, int32_t n);

  /// @brief Method rol, addr 0x6a55dbc, size 0xc, virtual false, abstract: false, final false
  static inline int32_t rol(int32_t x, int32_t n);

  /// @brief Method rol, addr 0x6a55ecc, size 0xc, virtual false, abstract: false, final false
  static inline int64_t rol(int64_t x, int32_t n);

  /// @brief Method rol, addr 0x6a55e44, size 0xc, virtual false, abstract: false, final false
  static inline uint32_t rol(uint32_t x, int32_t n);

  /// @brief Method rol, addr 0x6a55ed8, size 0xc, virtual false, abstract: false, final false
  static inline uint64_t rol(uint64_t x, int32_t n);

  /// @brief Method ror, addr 0x6a55eec, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 ror(::Unity::Mathematics::int2 x, int32_t n);

  /// @brief Method ror, addr 0x6a55f0c, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 ror(::Unity::Mathematics::int3 x, int32_t n);

  /// @brief Method ror, addr 0x6a55f30, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 ror(::Unity::Mathematics::int4 x, int32_t n);

  /// @brief Method ror, addr 0x6a55f70, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 ror(::Unity::Mathematics::uint2 x, int32_t n);

  /// @brief Method ror, addr 0x6a55f90, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 ror(::Unity::Mathematics::uint3 x, int32_t n);

  /// @brief Method ror, addr 0x6a55fb4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 ror(::Unity::Mathematics::uint4 x, int32_t n);

  /// @brief Method ror, addr 0x6a55ee4, size 0x8, virtual false, abstract: false, final false
  static inline int32_t ror(int32_t x, int32_t n);

  /// @brief Method ror, addr 0x6a55fec, size 0x8, virtual false, abstract: false, final false
  static inline int64_t ror(int64_t x, int32_t n);

  /// @brief Method ror, addr 0x6a55f68, size 0x8, virtual false, abstract: false, final false
  static inline uint32_t ror(uint32_t x, int32_t n);

  /// @brief Method ror, addr 0x6a55ff4, size 0x8, virtual false, abstract: false, final false
  static inline uint64_t ror(uint64_t x, int32_t n);

  /// @brief Method rotate, addr 0x6a3c73c, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 rotate(::Unity::Mathematics::double4x4 a, ::Unity::Mathematics::double3 b);

  /// @brief Method rotate, addr 0x6a369a8, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 rotate(::Unity::Mathematics::AffineTransform a, ::Unity::Mathematics::float3 dir);

  /// @brief Method rotate, addr 0x6a61598, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 rotate(::Unity::Mathematics::RigidTransform a, ::Unity::Mathematics::float3 dir);

  /// @brief Method rotate, addr 0x6a3fe00, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 rotate(::Unity::Mathematics::float4x4 a, ::Unity::Mathematics::float3 b);

  /// @brief Method rotate, addr 0x6a60588, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 rotate(::Unity::Mathematics::quaternion q, ::Unity::Mathematics::float3 v);

  /// @brief Method rotation, addr 0x6a60ca4, size 0x25c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion rotation(::Unity::Mathematics::float3x3 m);

  /// @brief Method round, addr 0x6a4c10c, size 0x170, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 round(::Unity::Mathematics::double2 x);

  /// @brief Method round, addr 0x6a4c27c, size 0x214, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 round(::Unity::Mathematics::double3 x);

  /// @brief Method round, addr 0x6a4c490, size 0x2c0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 round(::Unity::Mathematics::double4 x);

  /// @brief Method round, addr 0x6a4b9c4, size 0x17c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 round(::Unity::Mathematics::float2 x);

  /// @brief Method round, addr 0x6a4bb40, size 0x22c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 round(::Unity::Mathematics::float3 x);

  /// @brief Method round, addr 0x6a4bd6c, size 0x2d4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 round(::Unity::Mathematics::float4 x);

  /// @brief Method round, addr 0x6a4c040, size 0xcc, virtual false, abstract: false, final false
  static inline double_t round(double_t x);

  /// @brief Method round, addr 0x6a4b8f8, size 0xcc, virtual false, abstract: false, final false
  static inline float_t round(float_t x);

  /// @brief Method rsqrt, addr 0x6a51790, size 0xa8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 rsqrt(::Unity::Mathematics::double2 x);

  /// @brief Method rsqrt, addr 0x6a51838, size 0xf0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 rsqrt(::Unity::Mathematics::double3 x);

  /// @brief Method rsqrt, addr 0x6a51928, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 rsqrt(::Unity::Mathematics::double4 x);

  /// @brief Method rsqrt, addr 0x6a51568, size 0xa8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 rsqrt(::Unity::Mathematics::float2 x);

  /// @brief Method rsqrt, addr 0x6a51610, size 0xf0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 rsqrt(::Unity::Mathematics::float3 x);

  /// @brief Method rsqrt, addr 0x6a51700, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 rsqrt(::Unity::Mathematics::float4 x);

  /// @brief Method rsqrt, addr 0x6a51728, size 0x68, virtual false, abstract: false, final false
  static inline double_t rsqrt(double_t x);

  /// @brief Method rsqrt, addr 0x6a51500, size 0x68, virtual false, abstract: false, final false
  static inline float_t rsqrt(float_t x);

  /// @brief Method saturate, addr 0x6a46408, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 saturate(::Unity::Mathematics::double2 x);

  /// @brief Method saturate, addr 0x6a46448, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 saturate(::Unity::Mathematics::double3 x);

  /// @brief Method saturate, addr 0x6a464d0, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 saturate(::Unity::Mathematics::double4 x);

  /// @brief Method saturate, addr 0x6a462d0, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 saturate(::Unity::Mathematics::float2 x);

  /// @brief Method saturate, addr 0x6a46310, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 saturate(::Unity::Mathematics::float3 x);

  /// @brief Method saturate, addr 0x6a46380, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 saturate(::Unity::Mathematics::float4 x);

  /// @brief Method saturate, addr 0x6a463d0, size 0x38, virtual false, abstract: false, final false
  static inline double_t saturate(double_t x);

  /// @brief Method saturate, addr 0x6a46298, size 0x38, virtual false, abstract: false, final false
  static inline float_t saturate(float_t x);

  /// @brief Method scaleMul, addr 0x6a59424, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 scaleMul(::Unity::Mathematics::float3 s, ::Unity::Mathematics::float3x3 m);

  /// @brief Method select, addr 0x6a53494, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 select(::Unity::Mathematics::double2 falseValue, ::Unity::Mathematics::double2 trueValue, ::Unity::Mathematics::bool2 test);

  /// @brief Method select, addr 0x6a53458, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 select(::Unity::Mathematics::double2 falseValue, ::Unity::Mathematics::double2 trueValue, bool test);

  /// @brief Method select, addr 0x6a534a8, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 select(::Unity::Mathematics::double3 falseValue, ::Unity::Mathematics::double3 trueValue, ::Unity::Mathematics::bool3 test);

  /// @brief Method select, addr 0x6a53468, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 select(::Unity::Mathematics::double3 falseValue, ::Unity::Mathematics::double3 trueValue, bool test);

  /// @brief Method select, addr 0x6a534c4, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 select(::Unity::Mathematics::double4 falseValue, ::Unity::Mathematics::double4 trueValue, ::Unity::Mathematics::bool4 test);

  /// @brief Method select, addr 0x6a5347c, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 select(::Unity::Mathematics::double4 falseValue, ::Unity::Mathematics::double4 trueValue, bool test);

  /// @brief Method select, addr 0x6a533f8, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 select(::Unity::Mathematics::float2 falseValue, ::Unity::Mathematics::float2 trueValue, ::Unity::Mathematics::bool2 test);

  /// @brief Method select, addr 0x6a533bc, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 select(::Unity::Mathematics::float2 falseValue, ::Unity::Mathematics::float2 trueValue, bool test);

  /// @brief Method select, addr 0x6a5340c, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 select(::Unity::Mathematics::float3 falseValue, ::Unity::Mathematics::float3 trueValue, ::Unity::Mathematics::bool3 test);

  /// @brief Method select, addr 0x6a533cc, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 select(::Unity::Mathematics::float3 falseValue, ::Unity::Mathematics::float3 trueValue, bool test);

  /// @brief Method select, addr 0x6a53428, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 select(::Unity::Mathematics::float4 falseValue, ::Unity::Mathematics::float4 trueValue, ::Unity::Mathematics::bool4 test);

  /// @brief Method select, addr 0x6a533e0, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 select(::Unity::Mathematics::float4 falseValue, ::Unity::Mathematics::float4 trueValue, bool test);

  /// @brief Method select, addr 0x6a5328c, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 select(::Unity::Mathematics::int2 falseValue, ::Unity::Mathematics::int2 trueValue, ::Unity::Mathematics::bool2 test);

  /// @brief Method select, addr 0x6a5325c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 select(::Unity::Mathematics::int2 falseValue, ::Unity::Mathematics::int2 trueValue, bool test);

  /// @brief Method select, addr 0x6a532a4, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 select(::Unity::Mathematics::int3 falseValue, ::Unity::Mathematics::int3 trueValue, ::Unity::Mathematics::bool3 test);

  /// @brief Method select, addr 0x6a53268, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 select(::Unity::Mathematics::int3 falseValue, ::Unity::Mathematics::int3 trueValue, bool test);

  /// @brief Method select, addr 0x6a532c8, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 select(::Unity::Mathematics::int4 falseValue, ::Unity::Mathematics::int4 trueValue, ::Unity::Mathematics::bool4 test);

  /// @brief Method select, addr 0x6a5327c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 select(::Unity::Mathematics::int4 falseValue, ::Unity::Mathematics::int4 trueValue, bool test);

  /// @brief Method select, addr 0x6a53330, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 select(::Unity::Mathematics::uint2 falseValue, ::Unity::Mathematics::uint2 trueValue, ::Unity::Mathematics::bool2 test);

  /// @brief Method select, addr 0x6a53300, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 select(::Unity::Mathematics::uint2 falseValue, ::Unity::Mathematics::uint2 trueValue, bool test);

  /// @brief Method select, addr 0x6a53348, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 select(::Unity::Mathematics::uint3 falseValue, ::Unity::Mathematics::uint3 trueValue, ::Unity::Mathematics::bool3 test);

  /// @brief Method select, addr 0x6a5330c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 select(::Unity::Mathematics::uint3 falseValue, ::Unity::Mathematics::uint3 trueValue, bool test);

  /// @brief Method select, addr 0x6a5336c, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 select(::Unity::Mathematics::uint4 falseValue, ::Unity::Mathematics::uint4 trueValue, ::Unity::Mathematics::bool4 test);

  /// @brief Method select, addr 0x6a53320, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 select(::Unity::Mathematics::uint4 falseValue, ::Unity::Mathematics::uint4 trueValue, bool test);

  /// @brief Method select, addr 0x6a5344c, size 0xc, virtual false, abstract: false, final false
  static inline double_t select(double_t falseValue, double_t trueValue, bool test);

  /// @brief Method select, addr 0x6a533b0, size 0xc, virtual false, abstract: false, final false
  static inline float_t select(float_t falseValue, float_t trueValue, bool test);

  /// @brief Method select, addr 0x6a53250, size 0xc, virtual false, abstract: false, final false
  static inline int32_t select(int32_t falseValue, int32_t trueValue, bool test);

  /// @brief Method select, addr 0x6a53398, size 0xc, virtual false, abstract: false, final false
  static inline int64_t select(int64_t falseValue, int64_t trueValue, bool test);

  /// @brief Method select, addr 0x6a532f4, size 0xc, virtual false, abstract: false, final false
  static inline uint32_t select(uint32_t falseValue, uint32_t trueValue, bool test);

  /// @brief Method select, addr 0x6a533a4, size 0xc, virtual false, abstract: false, final false
  static inline uint64_t select(uint64_t falseValue, uint64_t trueValue, bool test);

  /// @brief Method select_shuffle_component, addr 0x6a3703c, size 0xdc, virtual false, abstract: false, final false
  static inline bool select_shuffle_component(::Unity::Mathematics::bool2 a, ::Unity::Mathematics::bool2 b, ::Unity::Mathematics::math_ShuffleComponent component);

  /// @brief Method select_shuffle_component, addr 0x6a37968, size 0xfc, virtual false, abstract: false, final false
  static inline bool select_shuffle_component(::Unity::Mathematics::bool3 a, ::Unity::Mathematics::bool3 b, ::Unity::Mathematics::math_ShuffleComponent component);

  /// @brief Method select_shuffle_component, addr 0x6a387a4, size 0x12c, virtual false, abstract: false, final false
  static inline bool select_shuffle_component(::Unity::Mathematics::bool4 a, ::Unity::Mathematics::bool4 b, ::Unity::Mathematics::math_ShuffleComponent component);

  /// @brief Method select_shuffle_component, addr 0x6a396f4, size 0xd8, virtual false, abstract: false, final false
  static inline double_t select_shuffle_component(::Unity::Mathematics::double2 a, ::Unity::Mathematics::double2 b, ::Unity::Mathematics::math_ShuffleComponent component);

  /// @brief Method select_shuffle_component, addr 0x6a3a550, size 0xf4, virtual false, abstract: false, final false
  static inline double_t select_shuffle_component(::Unity::Mathematics::double3 a, ::Unity::Mathematics::double3 b, ::Unity::Mathematics::math_ShuffleComponent component);

  /// @brief Method select_shuffle_component, addr 0x6a3ba0c, size 0x128, virtual false, abstract: false, final false
  static inline double_t select_shuffle_component(::Unity::Mathematics::double4 a, ::Unity::Mathematics::double4 b, ::Unity::Mathematics::math_ShuffleComponent component);

  /// @brief Method select_shuffle_component, addr 0x6a3d3d8, size 0xd8, virtual false, abstract: false, final false
  static inline float_t select_shuffle_component(::Unity::Mathematics::float2 a, ::Unity::Mathematics::float2 b, ::Unity::Mathematics::math_ShuffleComponent component);

  /// @brief Method select_shuffle_component, addr 0x6a3e0b0, size 0xf4, virtual false, abstract: false, final false
  static inline float_t select_shuffle_component(::Unity::Mathematics::float3 a, ::Unity::Mathematics::float3 b, ::Unity::Mathematics::math_ShuffleComponent component);

  /// @brief Method select_shuffle_component, addr 0x6a3f2b0, size 0x128, virtual false, abstract: false, final false
  static inline float_t select_shuffle_component(::Unity::Mathematics::float4 a, ::Unity::Mathematics::float4 b, ::Unity::Mathematics::math_ShuffleComponent component);

  /// @brief Method select_shuffle_component, addr 0x6a41428, size 0xd0, virtual false, abstract: false, final false
  static inline int32_t select_shuffle_component(::Unity::Mathematics::int2 a, ::Unity::Mathematics::int2 b, ::Unity::Mathematics::math_ShuffleComponent component);

  /// @brief Method select_shuffle_component, addr 0x6a4221c, size 0xec, virtual false, abstract: false, final false
  static inline int32_t select_shuffle_component(::Unity::Mathematics::int3 a, ::Unity::Mathematics::int3 b, ::Unity::Mathematics::math_ShuffleComponent component);

  /// @brief Method select_shuffle_component, addr 0x6a435b4, size 0x110, virtual false, abstract: false, final false
  static inline int32_t select_shuffle_component(::Unity::Mathematics::int4 a, ::Unity::Mathematics::int4 b, ::Unity::Mathematics::math_ShuffleComponent component);

  /// @brief Method select_shuffle_component, addr 0x6a61ab8, size 0xd0, virtual false, abstract: false, final false
  static inline uint32_t select_shuffle_component(::Unity::Mathematics::uint2 a, ::Unity::Mathematics::uint2 b, ::Unity::Mathematics::math_ShuffleComponent component);

  /// @brief Method select_shuffle_component, addr 0x6a62810, size 0xec, virtual false, abstract: false, final false
  static inline uint32_t select_shuffle_component(::Unity::Mathematics::uint3 a, ::Unity::Mathematics::uint3 b, ::Unity::Mathematics::math_ShuffleComponent component);

  /// @brief Method select_shuffle_component, addr 0x6a63b2c, size 0x110, virtual false, abstract: false, final false
  static inline uint32_t select_shuffle_component(::Unity::Mathematics::uint4 a, ::Unity::Mathematics::uint4 b, ::Unity::Mathematics::math_ShuffleComponent component);

  /// @brief Method shuffle, addr 0x6a36e90, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 shuffle(::Unity::Mathematics::bool2 left, ::Unity::Mathematics::bool2 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                    ::Unity::Mathematics::math_ShuffleComponent y);

  /// @brief Method shuffle, addr 0x6a377bc, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 shuffle(::Unity::Mathematics::bool3 left, ::Unity::Mathematics::bool3 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                    ::Unity::Mathematics::math_ShuffleComponent y);

  /// @brief Method shuffle, addr 0x6a385f8, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 shuffle(::Unity::Mathematics::bool4 left, ::Unity::Mathematics::bool4 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                    ::Unity::Mathematics::math_ShuffleComponent y);

  /// @brief Method shuffle, addr 0x6a36ef0, size 0x8c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 shuffle(::Unity::Mathematics::bool2 left, ::Unity::Mathematics::bool2 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                    ::Unity::Mathematics::math_ShuffleComponent y, ::Unity::Mathematics::math_ShuffleComponent z);

  /// @brief Method shuffle, addr 0x6a3781c, size 0x8c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 shuffle(::Unity::Mathematics::bool3 left, ::Unity::Mathematics::bool3 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                    ::Unity::Mathematics::math_ShuffleComponent y, ::Unity::Mathematics::math_ShuffleComponent z);

  /// @brief Method shuffle, addr 0x6a38658, size 0x8c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 shuffle(::Unity::Mathematics::bool4 left, ::Unity::Mathematics::bool4 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                    ::Unity::Mathematics::math_ShuffleComponent y, ::Unity::Mathematics::math_ShuffleComponent z);

  /// @brief Method shuffle, addr 0x6a36f7c, size 0xc0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 shuffle(::Unity::Mathematics::bool2 left, ::Unity::Mathematics::bool2 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                    ::Unity::Mathematics::math_ShuffleComponent y, ::Unity::Mathematics::math_ShuffleComponent z, ::Unity::Mathematics::math_ShuffleComponent w);

  /// @brief Method shuffle, addr 0x6a378a8, size 0xc0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 shuffle(::Unity::Mathematics::bool3 left, ::Unity::Mathematics::bool3 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                    ::Unity::Mathematics::math_ShuffleComponent y, ::Unity::Mathematics::math_ShuffleComponent z, ::Unity::Mathematics::math_ShuffleComponent w);

  /// @brief Method shuffle, addr 0x6a386e4, size 0xc0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 shuffle(::Unity::Mathematics::bool4 left, ::Unity::Mathematics::bool4 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                    ::Unity::Mathematics::math_ShuffleComponent y, ::Unity::Mathematics::math_ShuffleComponent z, ::Unity::Mathematics::math_ShuffleComponent w);

  /// @brief Method shuffle, addr 0x6a3952c, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 shuffle(::Unity::Mathematics::double2 left, ::Unity::Mathematics::double2 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                      ::Unity::Mathematics::math_ShuffleComponent y);

  /// @brief Method shuffle, addr 0x6a3a328, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 shuffle(::Unity::Mathematics::double3 left, ::Unity::Mathematics::double3 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                      ::Unity::Mathematics::math_ShuffleComponent y);

  /// @brief Method shuffle, addr 0x6a3b790, size 0x98, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 shuffle(::Unity::Mathematics::double4 left, ::Unity::Mathematics::double4 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                      ::Unity::Mathematics::math_ShuffleComponent y);

  /// @brief Method shuffle, addr 0x6a39594, size 0x98, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 shuffle(::Unity::Mathematics::double2 left, ::Unity::Mathematics::double2 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                      ::Unity::Mathematics::math_ShuffleComponent y, ::Unity::Mathematics::math_ShuffleComponent z);

  /// @brief Method shuffle, addr 0x6a3a3a8, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 shuffle(::Unity::Mathematics::double3 left, ::Unity::Mathematics::double3 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                      ::Unity::Mathematics::math_ShuffleComponent y, ::Unity::Mathematics::math_ShuffleComponent z);

  /// @brief Method shuffle, addr 0x6a3b828, size 0xd8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 shuffle(::Unity::Mathematics::double4 left, ::Unity::Mathematics::double4 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                      ::Unity::Mathematics::math_ShuffleComponent y, ::Unity::Mathematics::math_ShuffleComponent z);

  /// @brief Method shuffle, addr 0x6a3962c, size 0xc8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 shuffle(::Unity::Mathematics::double2 left, ::Unity::Mathematics::double2 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                      ::Unity::Mathematics::math_ShuffleComponent y, ::Unity::Mathematics::math_ShuffleComponent z, ::Unity::Mathematics::math_ShuffleComponent w);

  /// @brief Method shuffle, addr 0x6a3a460, size 0xf0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 shuffle(::Unity::Mathematics::double3 left, ::Unity::Mathematics::double3 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                      ::Unity::Mathematics::math_ShuffleComponent y, ::Unity::Mathematics::math_ShuffleComponent z, ::Unity::Mathematics::math_ShuffleComponent w);

  /// @brief Method shuffle, addr 0x6a3b900, size 0x10c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 shuffle(::Unity::Mathematics::double4 left, ::Unity::Mathematics::double4 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                      ::Unity::Mathematics::math_ShuffleComponent y, ::Unity::Mathematics::math_ShuffleComponent z, ::Unity::Mathematics::math_ShuffleComponent w);

  /// @brief Method shuffle, addr 0x6a3d210, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 shuffle(::Unity::Mathematics::float2 left, ::Unity::Mathematics::float2 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                     ::Unity::Mathematics::math_ShuffleComponent y);

  /// @brief Method shuffle, addr 0x6a3de88, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 shuffle(::Unity::Mathematics::float3 left, ::Unity::Mathematics::float3 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                     ::Unity::Mathematics::math_ShuffleComponent y);

  /// @brief Method shuffle, addr 0x6a3f040, size 0x98, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 shuffle(::Unity::Mathematics::float4 left, ::Unity::Mathematics::float4 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                     ::Unity::Mathematics::math_ShuffleComponent y);

  /// @brief Method shuffle, addr 0x6a3d278, size 0x98, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 shuffle(::Unity::Mathematics::float2 left, ::Unity::Mathematics::float2 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                     ::Unity::Mathematics::math_ShuffleComponent y, ::Unity::Mathematics::math_ShuffleComponent z);

  /// @brief Method shuffle, addr 0x6a3df08, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 shuffle(::Unity::Mathematics::float3 left, ::Unity::Mathematics::float3 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                     ::Unity::Mathematics::math_ShuffleComponent y, ::Unity::Mathematics::math_ShuffleComponent z);

  /// @brief Method shuffle, addr 0x6a3f0d8, size 0xcc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 shuffle(::Unity::Mathematics::float4 left, ::Unity::Mathematics::float4 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                     ::Unity::Mathematics::math_ShuffleComponent y, ::Unity::Mathematics::math_ShuffleComponent z);

  /// @brief Method shuffle, addr 0x6a3d310, size 0xc8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 shuffle(::Unity::Mathematics::float2 left, ::Unity::Mathematics::float2 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                     ::Unity::Mathematics::math_ShuffleComponent y, ::Unity::Mathematics::math_ShuffleComponent z, ::Unity::Mathematics::math_ShuffleComponent w);

  /// @brief Method shuffle, addr 0x6a3dfc0, size 0xf0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 shuffle(::Unity::Mathematics::float3 left, ::Unity::Mathematics::float3 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                     ::Unity::Mathematics::math_ShuffleComponent y, ::Unity::Mathematics::math_ShuffleComponent z, ::Unity::Mathematics::math_ShuffleComponent w);

  /// @brief Method shuffle, addr 0x6a3f1a4, size 0x10c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 shuffle(::Unity::Mathematics::float4 left, ::Unity::Mathematics::float4 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                     ::Unity::Mathematics::math_ShuffleComponent y, ::Unity::Mathematics::math_ShuffleComponent z, ::Unity::Mathematics::math_ShuffleComponent w);

  /// @brief Method shuffle, addr 0x6a412cc, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 shuffle(::Unity::Mathematics::int2 left, ::Unity::Mathematics::int2 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                   ::Unity::Mathematics::math_ShuffleComponent y);

  /// @brief Method shuffle, addr 0x6a42048, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 shuffle(::Unity::Mathematics::int3 left, ::Unity::Mathematics::int3 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                   ::Unity::Mathematics::math_ShuffleComponent y);

  /// @brief Method shuffle, addr 0x6a433f8, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 shuffle(::Unity::Mathematics::int4 left, ::Unity::Mathematics::int4 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                   ::Unity::Mathematics::math_ShuffleComponent y);

  /// @brief Method shuffle, addr 0x6a4131c, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 shuffle(::Unity::Mathematics::int2 left, ::Unity::Mathematics::int2 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                   ::Unity::Mathematics::math_ShuffleComponent y, ::Unity::Mathematics::math_ShuffleComponent z);

  /// @brief Method shuffle, addr 0x6a420b8, size 0x9c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 shuffle(::Unity::Mathematics::int3 left, ::Unity::Mathematics::int3 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                   ::Unity::Mathematics::math_ShuffleComponent y, ::Unity::Mathematics::math_ShuffleComponent z);

  /// @brief Method shuffle, addr 0x6a43460, size 0x94, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 shuffle(::Unity::Mathematics::int4 left, ::Unity::Mathematics::int4 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                   ::Unity::Mathematics::math_ShuffleComponent y, ::Unity::Mathematics::math_ShuffleComponent z);

  /// @brief Method shuffle, addr 0x6a41390, size 0x98, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 shuffle(::Unity::Mathematics::int2 left, ::Unity::Mathematics::int2 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                   ::Unity::Mathematics::math_ShuffleComponent y, ::Unity::Mathematics::math_ShuffleComponent z, ::Unity::Mathematics::math_ShuffleComponent w);

  /// @brief Method shuffle, addr 0x6a42154, size 0xc8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 shuffle(::Unity::Mathematics::int3 left, ::Unity::Mathematics::int3 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                   ::Unity::Mathematics::math_ShuffleComponent y, ::Unity::Mathematics::math_ShuffleComponent z, ::Unity::Mathematics::math_ShuffleComponent w);

  /// @brief Method shuffle, addr 0x6a434f4, size 0xc0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 shuffle(::Unity::Mathematics::int4 left, ::Unity::Mathematics::int4 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                   ::Unity::Mathematics::math_ShuffleComponent y, ::Unity::Mathematics::math_ShuffleComponent z, ::Unity::Mathematics::math_ShuffleComponent w);

  /// @brief Method shuffle, addr 0x6a6195c, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 shuffle(::Unity::Mathematics::uint2 left, ::Unity::Mathematics::uint2 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                    ::Unity::Mathematics::math_ShuffleComponent y);

  /// @brief Method shuffle, addr 0x6a6263c, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 shuffle(::Unity::Mathematics::uint3 left, ::Unity::Mathematics::uint3 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                    ::Unity::Mathematics::math_ShuffleComponent y);

  /// @brief Method shuffle, addr 0x6a63970, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 shuffle(::Unity::Mathematics::uint4 left, ::Unity::Mathematics::uint4 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                    ::Unity::Mathematics::math_ShuffleComponent y);

  /// @brief Method shuffle, addr 0x6a619ac, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 shuffle(::Unity::Mathematics::uint2 left, ::Unity::Mathematics::uint2 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                    ::Unity::Mathematics::math_ShuffleComponent y, ::Unity::Mathematics::math_ShuffleComponent z);

  /// @brief Method shuffle, addr 0x6a626ac, size 0x9c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 shuffle(::Unity::Mathematics::uint3 left, ::Unity::Mathematics::uint3 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                    ::Unity::Mathematics::math_ShuffleComponent y, ::Unity::Mathematics::math_ShuffleComponent z);

  /// @brief Method shuffle, addr 0x6a639d8, size 0x94, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 shuffle(::Unity::Mathematics::uint4 left, ::Unity::Mathematics::uint4 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                    ::Unity::Mathematics::math_ShuffleComponent y, ::Unity::Mathematics::math_ShuffleComponent z);

  /// @brief Method shuffle, addr 0x6a61a20, size 0x98, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 shuffle(::Unity::Mathematics::uint2 left, ::Unity::Mathematics::uint2 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                    ::Unity::Mathematics::math_ShuffleComponent y, ::Unity::Mathematics::math_ShuffleComponent z, ::Unity::Mathematics::math_ShuffleComponent w);

  /// @brief Method shuffle, addr 0x6a62748, size 0xc8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 shuffle(::Unity::Mathematics::uint3 left, ::Unity::Mathematics::uint3 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                    ::Unity::Mathematics::math_ShuffleComponent y, ::Unity::Mathematics::math_ShuffleComponent z, ::Unity::Mathematics::math_ShuffleComponent w);

  /// @brief Method shuffle, addr 0x6a63a6c, size 0xc0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 shuffle(::Unity::Mathematics::uint4 left, ::Unity::Mathematics::uint4 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                    ::Unity::Mathematics::math_ShuffleComponent y, ::Unity::Mathematics::math_ShuffleComponent z, ::Unity::Mathematics::math_ShuffleComponent w);

  /// @brief Method shuffle, addr 0x6a36e80, size 0x10, virtual false, abstract: false, final false
  static inline bool shuffle(::Unity::Mathematics::bool2 left, ::Unity::Mathematics::bool2 right, ::Unity::Mathematics::math_ShuffleComponent x);

  /// @brief Method shuffle, addr 0x6a377ac, size 0x10, virtual false, abstract: false, final false
  static inline bool shuffle(::Unity::Mathematics::bool3 left, ::Unity::Mathematics::bool3 right, ::Unity::Mathematics::math_ShuffleComponent x);

  /// @brief Method shuffle, addr 0x6a385e8, size 0x10, virtual false, abstract: false, final false
  static inline bool shuffle(::Unity::Mathematics::bool4 left, ::Unity::Mathematics::bool4 right, ::Unity::Mathematics::math_ShuffleComponent x);

  /// @brief Method shuffle, addr 0x6a39524, size 0x8, virtual false, abstract: false, final false
  static inline double_t shuffle(::Unity::Mathematics::double2 left, ::Unity::Mathematics::double2 right, ::Unity::Mathematics::math_ShuffleComponent x);

  /// @brief Method shuffle, addr 0x6a3a320, size 0x8, virtual false, abstract: false, final false
  static inline double_t shuffle(::Unity::Mathematics::double3 left, ::Unity::Mathematics::double3 right, ::Unity::Mathematics::math_ShuffleComponent x);

  /// @brief Method shuffle, addr 0x6a3b788, size 0x8, virtual false, abstract: false, final false
  static inline double_t shuffle(::Unity::Mathematics::double4 left, ::Unity::Mathematics::double4 right, ::Unity::Mathematics::math_ShuffleComponent x);

  /// @brief Method shuffle, addr 0x6a3d208, size 0x8, virtual false, abstract: false, final false
  static inline float_t shuffle(::Unity::Mathematics::float2 left, ::Unity::Mathematics::float2 right, ::Unity::Mathematics::math_ShuffleComponent x);

  /// @brief Method shuffle, addr 0x6a3de80, size 0x8, virtual false, abstract: false, final false
  static inline float_t shuffle(::Unity::Mathematics::float3 left, ::Unity::Mathematics::float3 right, ::Unity::Mathematics::math_ShuffleComponent x);

  /// @brief Method shuffle, addr 0x6a3f038, size 0x8, virtual false, abstract: false, final false
  static inline float_t shuffle(::Unity::Mathematics::float4 left, ::Unity::Mathematics::float4 right, ::Unity::Mathematics::math_ShuffleComponent x);

  /// @brief Method shuffle, addr 0x6a412c4, size 0x8, virtual false, abstract: false, final false
  static inline int32_t shuffle(::Unity::Mathematics::int2 left, ::Unity::Mathematics::int2 right, ::Unity::Mathematics::math_ShuffleComponent x);

  /// @brief Method shuffle, addr 0x6a42038, size 0x10, virtual false, abstract: false, final false
  static inline int32_t shuffle(::Unity::Mathematics::int3 left, ::Unity::Mathematics::int3 right, ::Unity::Mathematics::math_ShuffleComponent x);

  /// @brief Method shuffle, addr 0x6a433f0, size 0x8, virtual false, abstract: false, final false
  static inline int32_t shuffle(::Unity::Mathematics::int4 left, ::Unity::Mathematics::int4 right, ::Unity::Mathematics::math_ShuffleComponent x);

  /// @brief Method shuffle, addr 0x6a61954, size 0x8, virtual false, abstract: false, final false
  static inline uint32_t shuffle(::Unity::Mathematics::uint2 left, ::Unity::Mathematics::uint2 right, ::Unity::Mathematics::math_ShuffleComponent x);

  /// @brief Method shuffle, addr 0x6a6262c, size 0x10, virtual false, abstract: false, final false
  static inline uint32_t shuffle(::Unity::Mathematics::uint3 left, ::Unity::Mathematics::uint3 right, ::Unity::Mathematics::math_ShuffleComponent x);

  /// @brief Method shuffle, addr 0x6a63968, size 0x8, virtual false, abstract: false, final false
  static inline uint32_t shuffle(::Unity::Mathematics::uint4 left, ::Unity::Mathematics::uint4 right, ::Unity::Mathematics::math_ShuffleComponent x);

  /// @brief Method sign, addr 0x6a4d4fc, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 sign(::Unity::Mathematics::double2 x);

  /// @brief Method sign, addr 0x6a4d540, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 sign(::Unity::Mathematics::double3 x);

  /// @brief Method sign, addr 0x6a4d5a8, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 sign(::Unity::Mathematics::double4 x);

  /// @brief Method sign, addr 0x6a4d440, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 sign(::Unity::Mathematics::float2 x);

  /// @brief Method sign, addr 0x6a4d464, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 sign(::Unity::Mathematics::float3 x);

  /// @brief Method sign, addr 0x6a4d4a0, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 sign(::Unity::Mathematics::float4 x);

  /// @brief Method sign, addr 0x6a4d384, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 sign(::Unity::Mathematics::int2 x);

  /// @brief Method sign, addr 0x6a4d3a8, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 sign(::Unity::Mathematics::int3 x);

  /// @brief Method sign, addr 0x6a4d3d8, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 sign(::Unity::Mathematics::int4 x);

  /// @brief Method sign, addr 0x6a4d4d4, size 0x28, virtual false, abstract: false, final false
  static inline double_t sign(double_t x);

  /// @brief Method sign, addr 0x6a4d424, size 0x1c, virtual false, abstract: false, final false
  static inline float_t sign(float_t x);

  /// @brief Method sign, addr 0x6a4d374, size 0x10, virtual false, abstract: false, final false
  static inline int32_t sign(int32_t x);

  /// @brief Method sin, addr 0x6a49c78, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 sin(::Unity::Mathematics::double2 x);

  /// @brief Method sin, addr 0x6a49d28, size 0x100, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 sin(::Unity::Mathematics::double3 x);

  /// @brief Method sin, addr 0x6a49e28, size 0x148, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 sin(::Unity::Mathematics::double4 x);

  /// @brief Method sin, addr 0x6a49904, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 sin(::Unity::Mathematics::float2 x);

  /// @brief Method sin, addr 0x6a499bc, size 0x108, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 sin(::Unity::Mathematics::float3 x);

  /// @brief Method sin, addr 0x6a49ac4, size 0x154, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 sin(::Unity::Mathematics::float4 x);

  /// @brief Method sin, addr 0x6a49c18, size 0x60, virtual false, abstract: false, final false
  static inline double_t sin(double_t x);

  /// @brief Method sin, addr 0x6a4989c, size 0x68, virtual false, abstract: false, final false
  static inline float_t sin(float_t x);

  /// @brief Method sincos, addr 0x6a54734, size 0x148, virtual false, abstract: false, final false
  static inline void sincos(::Unity::Mathematics::double2 x, ::by_ref<::Unity::Mathematics::double2> s, ::by_ref<::Unity::Mathematics::double2> c);

  /// @brief Method sincos, addr 0x6a5487c, size 0x1dc, virtual false, abstract: false, final false
  static inline void sincos(::Unity::Mathematics::double3 x, ::by_ref<::Unity::Mathematics::double3> s, ::by_ref<::Unity::Mathematics::double3> c);

  /// @brief Method sincos, addr 0x6a54a58, size 0x6c, virtual false, abstract: false, final false
  static inline void sincos(::Unity::Mathematics::double4 x, ::by_ref<::Unity::Mathematics::double4> s, ::by_ref<::Unity::Mathematics::double4> c);

  /// @brief Method sincos, addr 0x6a54450, size 0x158, virtual false, abstract: false, final false
  static inline void sincos(::Unity::Mathematics::float2 x, ::by_ref<::Unity::Mathematics::float2> s, ::by_ref<::Unity::Mathematics::float2> c);

  /// @brief Method sincos, addr 0x6a545a8, size 0x64, virtual false, abstract: false, final false
  static inline void sincos(::Unity::Mathematics::float3 x, ::by_ref<::Unity::Mathematics::float3> s, ::by_ref<::Unity::Mathematics::float3> c);

  /// @brief Method sincos, addr 0x6a5460c, size 0x6c, virtual false, abstract: false, final false
  static inline void sincos(::Unity::Mathematics::float4 x, ::by_ref<::Unity::Mathematics::float4> s, ::by_ref<::Unity::Mathematics::float4> c);

  /// @brief Method sincos, addr 0x6a54678, size 0xbc, virtual false, abstract: false, final false
  static inline void sincos(double_t x, ::by_ref<double_t> s, ::by_ref<double_t> c);

  /// @brief Method sincos, addr 0x6a54388, size 0xc8, virtual false, abstract: false, final false
  static inline void sincos(float_t x, ::by_ref<float_t> s, ::by_ref<float_t> c);

  /// @brief Method sinh, addr 0x6a4a34c, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 sinh(::Unity::Mathematics::double2 x);

  /// @brief Method sinh, addr 0x6a4a3fc, size 0x100, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 sinh(::Unity::Mathematics::double3 x);

  /// @brief Method sinh, addr 0x6a4a4fc, size 0x148, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 sinh(::Unity::Mathematics::double4 x);

  /// @brief Method sinh, addr 0x6a49fd8, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 sinh(::Unity::Mathematics::float2 x);

  /// @brief Method sinh, addr 0x6a4a090, size 0x108, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 sinh(::Unity::Mathematics::float3 x);

  /// @brief Method sinh, addr 0x6a4a198, size 0x154, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 sinh(::Unity::Mathematics::float4 x);

  /// @brief Method sinh, addr 0x6a4a2ec, size 0x60, virtual false, abstract: false, final false
  static inline double_t sinh(double_t x);

  /// @brief Method sinh, addr 0x6a49f70, size 0x68, virtual false, abstract: false, final false
  static inline float_t sinh(float_t x);

  /// @brief Method slerp, addr 0x6a60778, size 0x374, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion slerp(::Unity::Mathematics::quaternion q1, ::Unity::Mathematics::quaternion q2, float_t t);

  /// @brief Method smoothstep, addr 0x6a52cbc, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 smoothstep(::Unity::Mathematics::double2 xMin, ::Unity::Mathematics::double2 xMax, ::Unity::Mathematics::double2 x);

  /// @brief Method smoothstep, addr 0x6a52d24, size 0xec, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 smoothstep(::Unity::Mathematics::double3 xMin, ::Unity::Mathematics::double3 xMax, ::Unity::Mathematics::double3 x);

  /// @brief Method smoothstep, addr 0x6a52e10, size 0x134, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 smoothstep(::Unity::Mathematics::double4 xMin, ::Unity::Mathematics::double4 xMax, ::Unity::Mathematics::double4 x);

  /// @brief Method smoothstep, addr 0x6a52aa0, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 smoothstep(::Unity::Mathematics::float2 xMin, ::Unity::Mathematics::float2 xMax, ::Unity::Mathematics::float2 x);

  /// @brief Method smoothstep, addr 0x6a52b08, size 0xc4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 smoothstep(::Unity::Mathematics::float3 xMin, ::Unity::Mathematics::float3 xMax, ::Unity::Mathematics::float3 x);

  /// @brief Method smoothstep, addr 0x6a52bcc, size 0x98, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 smoothstep(::Unity::Mathematics::float4 xMin, ::Unity::Mathematics::float4 xMax, ::Unity::Mathematics::float4 x);

  /// @brief Method smoothstep, addr 0x6a52c64, size 0x58, virtual false, abstract: false, final false
  static inline double_t smoothstep(double_t xMin, double_t xMax, double_t x);

  /// @brief Method smoothstep, addr 0x6a52a48, size 0x58, virtual false, abstract: false, final false
  static inline float_t smoothstep(float_t xMin, float_t xMax, float_t x);

  /// @brief Method sqrt, addr 0x6a51268, size 0x9c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 sqrt(::Unity::Mathematics::double2 x);

  /// @brief Method sqrt, addr 0x6a51304, size 0xe0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 sqrt(::Unity::Mathematics::double3 x);

  /// @brief Method sqrt, addr 0x6a513e4, size 0x11c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 sqrt(::Unity::Mathematics::double4 x);

  /// @brief Method sqrt, addr 0x6a50f70, size 0x9c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 sqrt(::Unity::Mathematics::float2 x);

  /// @brief Method sqrt, addr 0x6a5100c, size 0xe0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 sqrt(::Unity::Mathematics::float3 x);

  /// @brief Method sqrt, addr 0x6a510ec, size 0x11c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 sqrt(::Unity::Mathematics::float4 x);

  /// @brief Method sqrt, addr 0x6a51208, size 0x60, virtual false, abstract: false, final false
  static inline double_t sqrt(double_t x);

  /// @brief Method sqrt, addr 0x6a50f10, size 0x60, virtual false, abstract: false, final false
  static inline float_t sqrt(float_t x);

  /// @brief Method square, addr 0x6a57364, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 square(::Unity::Mathematics::double2 x);

  /// @brief Method square, addr 0x6a57370, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 square(::Unity::Mathematics::double3 x);

  /// @brief Method square, addr 0x6a57380, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 square(::Unity::Mathematics::double4 x);

  /// @brief Method square, addr 0x6a5732c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 square(::Unity::Mathematics::float2 x);

  /// @brief Method square, addr 0x6a57338, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 square(::Unity::Mathematics::float3 x);

  /// @brief Method square, addr 0x6a57348, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 square(::Unity::Mathematics::float4 x);

  /// @brief Method square, addr 0x6a5739c, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 square(::Unity::Mathematics::int2 x);

  /// @brief Method square, addr 0x6a573b4, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 square(::Unity::Mathematics::int3 x);

  /// @brief Method square, addr 0x6a573d0, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 square(::Unity::Mathematics::int4 x);

  /// @brief Method square, addr 0x6a57404, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 square(::Unity::Mathematics::uint2 x);

  /// @brief Method square, addr 0x6a5741c, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 square(::Unity::Mathematics::uint3 x);

  /// @brief Method square, addr 0x6a57438, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 square(::Unity::Mathematics::uint4 x);

  /// @brief Method square, addr 0x6a5735c, size 0x8, virtual false, abstract: false, final false
  static inline double_t square(double_t x);

  /// @brief Method square, addr 0x6a57324, size 0x8, virtual false, abstract: false, final false
  static inline float_t square(float_t x);

  /// @brief Method square, addr 0x6a57394, size 0x8, virtual false, abstract: false, final false
  static inline int32_t square(int32_t x);

  /// @brief Method square, addr 0x6a573fc, size 0x8, virtual false, abstract: false, final false
  static inline uint32_t square(uint32_t x);

  /// @brief Method step, addr 0x6a5357c, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 step(::Unity::Mathematics::double2 threshold, ::Unity::Mathematics::double2 x);

  /// @brief Method step, addr 0x6a53598, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 step(::Unity::Mathematics::double3 threshold, ::Unity::Mathematics::double3 x);

  /// @brief Method step, addr 0x6a535bc, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 step(::Unity::Mathematics::double4 threshold, ::Unity::Mathematics::double4 x);

  /// @brief Method step, addr 0x6a534fc, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 step(::Unity::Mathematics::float2 threshold, ::Unity::Mathematics::float2 x);

  /// @brief Method step, addr 0x6a53518, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 step(::Unity::Mathematics::float3 threshold, ::Unity::Mathematics::float3 x);

  /// @brief Method step, addr 0x6a5353c, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 step(::Unity::Mathematics::float4 threshold, ::Unity::Mathematics::float4 x);

  /// @brief Method step, addr 0x6a53568, size 0x14, virtual false, abstract: false, final false
  static inline double_t step(double_t threshold, double_t x);

  /// @brief Method step, addr 0x6a534e8, size 0x14, virtual false, abstract: false, final false
  static inline float_t step(float_t threshold, float_t x);

  /// @brief Method tan, addr 0x6a46bcc, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 tan(::Unity::Mathematics::double2 x);

  /// @brief Method tan, addr 0x6a46c7c, size 0x100, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 tan(::Unity::Mathematics::double3 x);

  /// @brief Method tan, addr 0x6a46d7c, size 0x148, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 tan(::Unity::Mathematics::double4 x);

  /// @brief Method tan, addr 0x6a46858, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 tan(::Unity::Mathematics::float2 x);

  /// @brief Method tan, addr 0x6a46910, size 0x108, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 tan(::Unity::Mathematics::float3 x);

  /// @brief Method tan, addr 0x6a46a18, size 0x154, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 tan(::Unity::Mathematics::float4 x);

  /// @brief Method tan, addr 0x6a46b6c, size 0x60, virtual false, abstract: false, final false
  static inline double_t tan(double_t x);

  /// @brief Method tan, addr 0x6a467f0, size 0x68, virtual false, abstract: false, final false
  static inline float_t tan(float_t x);

  /// @brief Method tanh, addr 0x6a472a0, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 tanh(::Unity::Mathematics::double2 x);

  /// @brief Method tanh, addr 0x6a47350, size 0x100, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 tanh(::Unity::Mathematics::double3 x);

  /// @brief Method tanh, addr 0x6a47450, size 0x148, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 tanh(::Unity::Mathematics::double4 x);

  /// @brief Method tanh, addr 0x6a46f2c, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 tanh(::Unity::Mathematics::float2 x);

  /// @brief Method tanh, addr 0x6a46fe4, size 0x108, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 tanh(::Unity::Mathematics::float3 x);

  /// @brief Method tanh, addr 0x6a470ec, size 0x154, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 tanh(::Unity::Mathematics::float4 x);

  /// @brief Method tanh, addr 0x6a47240, size 0x60, virtual false, abstract: false, final false
  static inline double_t tanh(double_t x);

  /// @brief Method tanh, addr 0x6a46ec4, size 0x68, virtual false, abstract: false, final false
  static inline float_t tanh(float_t x);

  /// @brief Method transform, addr 0x6a3c794, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 transform(::Unity::Mathematics::double4x4 a, ::Unity::Mathematics::double3 b);

  /// @brief Method transform, addr 0x6a369f0, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 transform(::Unity::Mathematics::AffineTransform a, ::Unity::Mathematics::float3 pos);

  /// @brief Method transform, addr 0x6a6161c, size 0xa0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 transform(::Unity::Mathematics::RigidTransform a, ::Unity::Mathematics::float3 pos);

  /// @brief Method transform, addr 0x6a3fe48, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 transform(::Unity::Mathematics::float4x4 a, ::Unity::Mathematics::float3 b);

  /// @brief Method transpose, addr 0x6a3715c, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 transpose(::Unity::Mathematics::bool2x2 v);

  /// @brief Method transpose, addr 0x6a37adc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 transpose(::Unity::Mathematics::bool3x2 v);

  /// @brief Method transpose, addr 0x6a38944, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 transpose(::Unity::Mathematics::bool4x2 v);

  /// @brief Method transpose, addr 0x6a372cc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 transpose(::Unity::Mathematics::bool2x3 v);

  /// @brief Method transpose, addr 0x6a37d54, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 transpose(::Unity::Mathematics::bool3x3 v);

  /// @brief Method transpose, addr 0x6a38c00, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 transpose(::Unity::Mathematics::bool4x3 v);

  /// @brief Method transpose, addr 0x6a374c0, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 transpose(::Unity::Mathematics::bool2x4 v);

  /// @brief Method transpose, addr 0x6a380d8, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 transpose(::Unity::Mathematics::bool3x4 v);

  /// @brief Method transpose, addr 0x6a38fac, size 0xc4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x4 transpose(::Unity::Mathematics::bool4x4 v);

  /// @brief Method transpose, addr 0x6a398c4, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 transpose(::Unity::Mathematics::double2x2 v);

  /// @brief Method transpose, addr 0x6a3a7a0, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 transpose(::Unity::Mathematics::double3x2 v);

  /// @brief Method transpose, addr 0x6a3bce4, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 transpose(::Unity::Mathematics::double4x2 v);

  /// @brief Method transpose, addr 0x6a39b64, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x2 transpose(::Unity::Mathematics::double2x3 v);

  /// @brief Method transpose, addr 0x6a3ab18, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 transpose(::Unity::Mathematics::double3x3 v);

  /// @brief Method transpose, addr 0x6a3c140, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 transpose(::Unity::Mathematics::double4x3 v);

  /// @brief Method transpose, addr 0x6a39e7c, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 transpose(::Unity::Mathematics::double2x4 v);

  /// @brief Method transpose, addr 0x6a3b0e0, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 transpose(::Unity::Mathematics::double3x4 v);

  /// @brief Method transpose, addr 0x6a3c800, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x4 transpose(::Unity::Mathematics::double4x4 v);

  /// @brief Method transpose, addr 0x6a3d5a8, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 transpose(::Unity::Mathematics::float2x2 v);

  /// @brief Method transpose, addr 0x6a3e300, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 transpose(::Unity::Mathematics::float3x2 v);

  /// @brief Method transpose, addr 0x6a3f564, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x4 transpose(::Unity::Mathematics::float4x2 v);

  /// @brief Method transpose, addr 0x6a3d808, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x2 transpose(::Unity::Mathematics::float2x3 v);

  /// @brief Method transpose, addr 0x6a3e608, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 transpose(::Unity::Mathematics::float3x3 v);

  /// @brief Method transpose, addr 0x6a3f914, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 transpose(::Unity::Mathematics::float4x3 v);

  /// @brief Method transpose, addr 0x6a3daa8, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x2 transpose(::Unity::Mathematics::float2x4 v);

  /// @brief Method transpose, addr 0x6a3eb04, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x3 transpose(::Unity::Mathematics::float3x4 v);

  /// @brief Method transpose, addr 0x6a3fea0, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 transpose(::Unity::Mathematics::float4x4 v);

  /// @brief Method transpose, addr 0x6a4165c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x2 transpose(::Unity::Mathematics::int2x2 v);

  /// @brief Method transpose, addr 0x6a42548, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x3 transpose(::Unity::Mathematics::int3x2 v);

  /// @brief Method transpose, addr 0x6a43930, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x4 transpose(::Unity::Mathematics::int4x2 v);

  /// @brief Method transpose, addr 0x6a4196c, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 transpose(::Unity::Mathematics::int2x3 v);

  /// @brief Method transpose, addr 0x6a42998, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x3 transpose(::Unity::Mathematics::int3x3 v);

  /// @brief Method transpose, addr 0x6a43df4, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 transpose(::Unity::Mathematics::int4x3 v);

  /// @brief Method transpose, addr 0x6a41d20, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 transpose(::Unity::Mathematics::int2x4 v);

  /// @brief Method transpose, addr 0x6a42f84, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 transpose(::Unity::Mathematics::int3x4 v);

  /// @brief Method transpose, addr 0x6a44424, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 transpose(::Unity::Mathematics::int4x4 v);

  /// @brief Method transpose, addr 0x6a61cbc, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 transpose(::Unity::Mathematics::uint2x2 v);

  /// @brief Method transpose, addr 0x6a62b2c, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x3 transpose(::Unity::Mathematics::uint3x2 v);

  /// @brief Method transpose, addr 0x6a63e9c, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x4 transpose(::Unity::Mathematics::uint4x2 v);

  /// @brief Method transpose, addr 0x6a61f90, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 transpose(::Unity::Mathematics::uint2x3 v);

  /// @brief Method transpose, addr 0x6a62f7c, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x3 transpose(::Unity::Mathematics::uint3x3 v);

  /// @brief Method transpose, addr 0x6a64364, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 transpose(::Unity::Mathematics::uint4x3 v);

  /// @brief Method transpose, addr 0x6a62334, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x2 transpose(::Unity::Mathematics::uint2x4 v);

  /// @brief Method transpose, addr 0x6a6352c, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 transpose(::Unity::Mathematics::uint3x4 v);

  /// @brief Method transpose, addr 0x6a649a8, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x4 transpose(::Unity::Mathematics::uint4x4 v);

  /// @brief Method trunc, addr 0x6a4cb58, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 trunc(::Unity::Mathematics::double2 x);

  /// @brief Method trunc, addr 0x6a4cc10, size 0x10c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 trunc(::Unity::Mathematics::double3 x);

  /// @brief Method trunc, addr 0x6a4cd1c, size 0x158, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 trunc(::Unity::Mathematics::double4 x);

  /// @brief Method trunc, addr 0x6a4c7bc, size 0xc0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 trunc(::Unity::Mathematics::float2 x);

  /// @brief Method trunc, addr 0x6a4c87c, size 0x114, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 trunc(::Unity::Mathematics::float3 x);

  /// @brief Method trunc, addr 0x6a4c990, size 0x164, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 trunc(::Unity::Mathematics::float4 x);

  /// @brief Method trunc, addr 0x6a4caf4, size 0x64, virtual false, abstract: false, final false
  static inline double_t trunc(double_t x);

  /// @brief Method trunc, addr 0x6a4c750, size 0x6c, virtual false, abstract: false, final false
  static inline float_t trunc(float_t x);

  /// @brief Method tzcnt, addr 0x6a554b8, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 tzcnt(::Unity::Mathematics::int2 x);

  /// @brief Method tzcnt, addr 0x6a5573c, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 tzcnt(::Unity::Mathematics::uint2 x);

  /// @brief Method tzcnt, addr 0x6a55540, size 0xc0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 tzcnt(::Unity::Mathematics::int3 x);

  /// @brief Method tzcnt, addr 0x6a557c4, size 0xc0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 tzcnt(::Unity::Mathematics::uint3 x);

  /// @brief Method tzcnt, addr 0x6a55600, size 0x100, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 tzcnt(::Unity::Mathematics::int4 x);

  /// @brief Method tzcnt, addr 0x6a55884, size 0x100, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 tzcnt(::Unity::Mathematics::uint4 x);

  /// @brief Method tzcnt, addr 0x6a5547c, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t tzcnt(int32_t x);

  /// @brief Method tzcnt, addr 0x6a55984, size 0x54, virtual false, abstract: false, final false
  static inline int32_t tzcnt(int64_t x);

  /// @brief Method tzcnt, addr 0x6a55700, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t tzcnt(uint32_t x);

  /// @brief Method tzcnt, addr 0x6a559d8, size 0x54, virtual false, abstract: false, final false
  static inline int32_t tzcnt(uint64_t x);

  /// @brief Method uint2, addr 0x6a6184c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 uint2(::Unity::Mathematics::bool2 v);

  /// @brief Method uint2, addr 0x6a618c4, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 uint2(::Unity::Mathematics::double2 v);

  /// @brief Method uint2, addr 0x6a61884, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 uint2(::Unity::Mathematics::float2 v);

  /// @brief Method uint2, addr 0x6a61868, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 uint2(::Unity::Mathematics::int2 v);

  /// @brief Method uint2, addr 0x6a61834, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 uint2(bool v);

  /// @brief Method uint2, addr 0x6a618ac, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 uint2(double_t v);

  /// @brief Method uint2, addr 0x6a6186c, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 uint2(float_t v);

  /// @brief Method uint2, addr 0x6a6185c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 uint2(int32_t v);

  /// @brief Method uint2, addr 0x6a61828, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 uint2(uint32_t v);

  /// @brief Method uint2, addr 0x6a61818, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 uint2(uint32_t x, uint32_t y);

  /// @brief Method uint2, addr 0x6a61824, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 uint2(::Unity::Mathematics::uint2 xy);

  /// @brief Method uint2x2, addr 0x6a61b88, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 uint2x2(::Unity::Mathematics::uint2 c0, ::Unity::Mathematics::uint2 c1);

  /// @brief Method uint2x2, addr 0x6a61b8c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 uint2x2(uint32_t m00, uint32_t m01, uint32_t m10, uint32_t m11);

  /// @brief Method uint2x2, addr 0x6a61bc4, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 uint2x2(::Unity::Mathematics::bool2x2 v);

  /// @brief Method uint2x2, addr 0x6a61c70, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 uint2x2(::Unity::Mathematics::double2x2 v);

  /// @brief Method uint2x2, addr 0x6a61c14, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 uint2x2(::Unity::Mathematics::float2x2 v);

  /// @brief Method uint2x2, addr 0x6a61bf4, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 uint2x2(::Unity::Mathematics::int2x2 v);

  /// @brief Method uint2x2, addr 0x6a61bb0, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 uint2x2(bool v);

  /// @brief Method uint2x2, addr 0x6a61c54, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 uint2x2(double_t v);

  /// @brief Method uint2x2, addr 0x6a61bf8, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 uint2x2(float_t v);

  /// @brief Method uint2x2, addr 0x6a61be4, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 uint2x2(int32_t v);

  /// @brief Method uint2x2, addr 0x6a61ba0, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 uint2x2(uint32_t v);

  /// @brief Method uint2x3, addr 0x6a61d78, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x3 uint2x3(::Unity::Mathematics::uint2 c0, ::Unity::Mathematics::uint2 c1, ::Unity::Mathematics::uint2 c2);

  /// @brief Method uint2x3, addr 0x6a61d84, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x3 uint2x3(uint32_t m00, uint32_t m01, uint32_t m02, uint32_t m10, uint32_t m11, uint32_t m12);

  /// @brief Method uint2x3, addr 0x6a61dd4, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x3 uint2x3(::Unity::Mathematics::bool2x3 v);

  /// @brief Method uint2x3, addr 0x6a61f0c, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x3 uint2x3(::Unity::Mathematics::double2x3 v);

  /// @brief Method uint2x3, addr 0x6a61e68, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x3 uint2x3(::Unity::Mathematics::float2x3 v);

  /// @brief Method uint2x3, addr 0x6a61e34, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x3 uint2x3(::Unity::Mathematics::int2x3 v);

  /// @brief Method uint2x3, addr 0x6a61dbc, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x3 uint2x3(bool v);

  /// @brief Method uint2x3, addr 0x6a61eec, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x3 uint2x3(double_t v);

  /// @brief Method uint2x3, addr 0x6a61e48, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x3 uint2x3(float_t v);

  /// @brief Method uint2x3, addr 0x6a61e20, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x3 uint2x3(int32_t v);

  /// @brief Method uint2x3, addr 0x6a61da8, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x3 uint2x3(uint32_t v);

  /// @brief Method uint2x4, addr 0x6a620a4, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x4 uint2x4(::Unity::Mathematics::uint2 c0, ::Unity::Mathematics::uint2 c1, ::Unity::Mathematics::uint2 c2, ::Unity::Mathematics::uint2 c3);

  /// @brief Method uint2x4, addr 0x6a620b0, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x4 uint2x4(uint32_t m00, uint32_t m01, uint32_t m02, uint32_t m03, uint32_t m10, uint32_t m11, uint32_t m12, uint32_t m13);

  /// @brief Method uint2x4, addr 0x6a62108, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x4 uint2x4(::Unity::Mathematics::bool2x4 v);

  /// @brief Method uint2x4, addr 0x6a62288, size 0xac, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x4 uint2x4(::Unity::Mathematics::double2x4 v);

  /// @brief Method uint2x4, addr 0x6a621bc, size 0xac, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x4 uint2x4(::Unity::Mathematics::float2x4 v);

  /// @brief Method uint2x4, addr 0x6a62190, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x4 uint2x4(::Unity::Mathematics::int2x4 v);

  /// @brief Method uint2x4, addr 0x6a620f0, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x4 uint2x4(bool v);

  /// @brief Method uint2x4, addr 0x6a62268, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x4 uint2x4(double_t v);

  /// @brief Method uint2x4, addr 0x6a6219c, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x4 uint2x4(float_t v);

  /// @brief Method uint2x4, addr 0x6a6217c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x4 uint2x4(int32_t v);

  /// @brief Method uint2x4, addr 0x6a620dc, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x4 uint2x4(uint32_t v);

  /// @brief Method uint3, addr 0x6a624dc, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 uint3(::Unity::Mathematics::bool3 v);

  /// @brief Method uint3, addr 0x6a62570, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 uint3(::Unity::Mathematics::double3 v);

  /// @brief Method uint3, addr 0x6a62520, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 uint3(::Unity::Mathematics::float3 v);

  /// @brief Method uint3, addr 0x6a62500, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 uint3(::Unity::Mathematics::int3 v);

  /// @brief Method uint3, addr 0x6a624c0, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 uint3(bool v);

  /// @brief Method uint3, addr 0x6a62558, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 uint3(double_t v);

  /// @brief Method uint3, addr 0x6a62508, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 uint3(float_t v);

  /// @brief Method uint3, addr 0x6a624f4, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 uint3(int32_t v);

  /// @brief Method uint3, addr 0x6a624b4, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 uint3(uint32_t v);

  /// @brief Method uint3, addr 0x6a62480, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 uint3(uint32_t x, uint32_t y, uint32_t z);

  /// @brief Method uint3, addr 0x6a62490, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 uint3(uint32_t x, ::Unity::Mathematics::uint2 yz);

  /// @brief Method uint3, addr 0x6a624a4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 uint3(::Unity::Mathematics::uint2 xy, uint32_t z);

  /// @brief Method uint3, addr 0x6a624ac, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 uint3(::Unity::Mathematics::uint3 xyz);

  /// @brief Method uint3x2, addr 0x6a628fc, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 uint3x2(::Unity::Mathematics::uint3 c0, ::Unity::Mathematics::uint3 c1);

  /// @brief Method uint3x2, addr 0x6a62910, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 uint3x2(uint32_t m00, uint32_t m01, uint32_t m10, uint32_t m11, uint32_t m20, uint32_t m21);

  /// @brief Method uint3x2, addr 0x6a6295c, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 uint3x2(::Unity::Mathematics::bool3x2 v);

  /// @brief Method uint3x2, addr 0x6a62aa4, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 uint3x2(::Unity::Mathematics::double3x2 v);

  /// @brief Method uint3x2, addr 0x6a629f4, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 uint3x2(::Unity::Mathematics::float3x2 v);

  /// @brief Method uint3x2, addr 0x6a629a8, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 uint3x2(::Unity::Mathematics::int3x2 v);

  /// @brief Method uint3x2, addr 0x6a6293c, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 uint3x2(bool v);

  /// @brief Method uint3x2, addr 0x6a62a7c, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 uint3x2(double_t v);

  /// @brief Method uint3x2, addr 0x6a629cc, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 uint3x2(float_t v);

  /// @brief Method uint3x2, addr 0x6a6298c, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 uint3x2(int32_t v);

  /// @brief Method uint3x2, addr 0x6a62920, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 uint3x2(uint32_t v);

  /// @brief Method uint3x3, addr 0x6a62c54, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x3 uint3x3(::Unity::Mathematics::uint3 c0, ::Unity::Mathematics::uint3 c1, ::Unity::Mathematics::uint3 c2);

  /// @brief Method uint3x3, addr 0x6a62c70, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x3 uint3x3(uint32_t m00, uint32_t m01, uint32_t m02, uint32_t m10, uint32_t m11, uint32_t m12, uint32_t m20, uint32_t m21, uint32_t m22);

  /// @brief Method uint3x3, addr 0x6a62cd8, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x3 uint3x3(::Unity::Mathematics::bool3x3 v);

  /// @brief Method uint3x3, addr 0x6a62eb0, size 0xcc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x3 uint3x3(::Unity::Mathematics::double3x3 v);

  /// @brief Method uint3x3, addr 0x6a62db4, size 0xcc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x3 uint3x3(::Unity::Mathematics::float3x3 v);

  /// @brief Method uint3x3, addr 0x6a62d50, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x3 uint3x3(::Unity::Mathematics::int3x3 v);

  /// @brief Method uint3x3, addr 0x6a62cb0, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x3 uint3x3(bool v);

  /// @brief Method uint3x3, addr 0x6a62e80, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x3 uint3x3(double_t v);

  /// @brief Method uint3x3, addr 0x6a62d84, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x3 uint3x3(float_t v);

  /// @brief Method uint3x3, addr 0x6a62d2c, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x3 uint3x3(int32_t v);

  /// @brief Method uint3x3, addr 0x6a62c8c, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x3 uint3x3(uint32_t v);

  /// @brief Method uint3x4, addr 0x6a6310c, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 uint3x4(::Unity::Mathematics::uint3 c0, ::Unity::Mathematics::uint3 c1, ::Unity::Mathematics::uint3 c2, ::Unity::Mathematics::uint3 c3);

  /// @brief Method uint3x4, addr 0x6a63130, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 uint3x4(uint32_t m00, uint32_t m01, uint32_t m02, uint32_t m03, uint32_t m10, uint32_t m11, uint32_t m12, uint32_t m13, uint32_t m20, uint32_t m21,
                                                      uint32_t m22, uint32_t m23);

  /// @brief Method uint3x4, addr 0x6a631c0, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 uint3x4(::Unity::Mathematics::bool3x4 v);

  /// @brief Method uint3x4, addr 0x6a63420, size 0x10c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 uint3x4(::Unity::Mathematics::double3x4 v);

  /// @brief Method uint3x4, addr 0x6a632dc, size 0x10c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 uint3x4(::Unity::Mathematics::float3x4 v);

  /// @brief Method uint3x4, addr 0x6a63260, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 uint3x4(::Unity::Mathematics::int3x4 v);

  /// @brief Method uint3x4, addr 0x6a63190, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 uint3x4(bool v);

  /// @brief Method uint3x4, addr 0x6a633e8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 uint3x4(double_t v);

  /// @brief Method uint3x4, addr 0x6a632a4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 uint3x4(float_t v);

  /// @brief Method uint3x4, addr 0x6a63234, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 uint3x4(int32_t v);

  /// @brief Method uint3x4, addr 0x6a63164, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 uint3x4(uint32_t v);

  /// @brief Method uint4, addr 0x6a637bc, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 uint4(::Unity::Mathematics::bool4 v);

  /// @brief Method uint4, addr 0x6a63868, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 uint4(::Unity::Mathematics::double4 v);

  /// @brief Method uint4, addr 0x6a6380c, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 uint4(::Unity::Mathematics::float4 v);

  /// @brief Method uint4, addr 0x6a637ec, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 uint4(::Unity::Mathematics::int4 v);

  /// @brief Method uint4, addr 0x6a637a4, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 uint4(bool v);

  /// @brief Method uint4, addr 0x6a6384c, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 uint4(double_t v);

  /// @brief Method uint4, addr 0x6a637f0, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 uint4(float_t v);

  /// @brief Method uint4, addr 0x6a637dc, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 uint4(int32_t v);

  /// @brief Method uint4, addr 0x6a63794, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 uint4(uint32_t v);

  /// @brief Method uint4, addr 0x6a63728, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 uint4(uint32_t x, uint32_t y, uint32_t z, uint32_t w);

  /// @brief Method uint4, addr 0x6a63740, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 uint4(uint32_t x, uint32_t y, ::Unity::Mathematics::uint2 zw);

  /// @brief Method uint4, addr 0x6a63750, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 uint4(uint32_t x, ::Unity::Mathematics::uint2 yz, uint32_t w);

  /// @brief Method uint4, addr 0x6a63764, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 uint4(uint32_t x, ::Unity::Mathematics::uint3 yzw);

  /// @brief Method uint4, addr 0x6a63778, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 uint4(::Unity::Mathematics::uint2 xy, uint32_t z, uint32_t w);

  /// @brief Method uint4, addr 0x6a63784, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 uint4(::Unity::Mathematics::uint2 xy, ::Unity::Mathematics::uint2 zw);

  /// @brief Method uint4, addr 0x6a63788, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 uint4(::Unity::Mathematics::uint3 xyz, uint32_t w);

  /// @brief Method uint4, addr 0x6a63790, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 uint4(::Unity::Mathematics::uint4 xyzw);

  /// @brief Method uint4x2, addr 0x6a63c3c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x2 uint4x2(::Unity::Mathematics::uint4 c0, ::Unity::Mathematics::uint4 c1);

  /// @brief Method uint4x2, addr 0x6a63c48, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x2 uint4x2(uint32_t m00, uint32_t m01, uint32_t m10, uint32_t m11, uint32_t m20, uint32_t m21, uint32_t m30, uint32_t m31);

  /// @brief Method uint4x2, addr 0x6a63c88, size 0x5c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x2 uint4x2(::Unity::Mathematics::bool4x2 v);

  /// @brief Method uint4x2, addr 0x6a63df0, size 0xac, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x2 uint4x2(::Unity::Mathematics::double4x2 v);

  /// @brief Method uint4x2, addr 0x6a63d24, size 0xac, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x2 uint4x2(::Unity::Mathematics::float4x2 v);

  /// @brief Method uint4x2, addr 0x6a63cf8, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x2 uint4x2(::Unity::Mathematics::int4x2 v);

  /// @brief Method uint4x2, addr 0x6a63c70, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x2 uint4x2(bool v);

  /// @brief Method uint4x2, addr 0x6a63dd0, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x2 uint4x2(double_t v);

  /// @brief Method uint4x2, addr 0x6a63d04, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x2 uint4x2(float_t v);

  /// @brief Method uint4x2, addr 0x6a63ce4, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x2 uint4x2(int32_t v);

  /// @brief Method uint4x2, addr 0x6a63c5c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x2 uint4x2(uint32_t v);

  /// @brief Method uint4x3, addr 0x6a64000, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 uint4x3(::Unity::Mathematics::uint4 c0, ::Unity::Mathematics::uint4 c1, ::Unity::Mathematics::uint4 c2);

  /// @brief Method uint4x3, addr 0x6a64010, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 uint4x3(uint32_t m00, uint32_t m01, uint32_t m02, uint32_t m10, uint32_t m11, uint32_t m12, uint32_t m20, uint32_t m21, uint32_t m22, uint32_t m30,
                                                      uint32_t m31, uint32_t m32);

  /// @brief Method uint4x3, addr 0x6a64078, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 uint4x3(::Unity::Mathematics::bool4x3 v);

  /// @brief Method uint4x3, addr 0x6a64264, size 0x100, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 uint4x3(::Unity::Mathematics::double4x3 v);

  /// @brief Method uint4x3, addr 0x6a64140, size 0x100, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 uint4x3(::Unity::Mathematics::float4x3 v);

  /// @brief Method uint4x3, addr 0x6a64108, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 uint4x3(::Unity::Mathematics::int4x3 v);

  /// @brief Method uint4x3, addr 0x6a6405c, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 uint4x3(bool v);

  /// @brief Method uint4x3, addr 0x6a64240, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 uint4x3(double_t v);

  /// @brief Method uint4x3, addr 0x6a6411c, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 uint4x3(float_t v);

  /// @brief Method uint4x3, addr 0x6a640f0, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 uint4x3(int32_t v);

  /// @brief Method uint4x3, addr 0x6a64044, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 uint4x3(uint32_t v);

  /// @brief Method uint4x4, addr 0x6a64548, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x4 uint4x4(::Unity::Mathematics::uint4 c0, ::Unity::Mathematics::uint4 c1, ::Unity::Mathematics::uint4 c2, ::Unity::Mathematics::uint4 c3);

  /// @brief Method uint4x4, addr 0x6a6455c, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x4 uint4x4(uint32_t m00, uint32_t m01, uint32_t m02, uint32_t m03, uint32_t m10, uint32_t m11, uint32_t m12, uint32_t m13, uint32_t m20, uint32_t m21,
                                                      uint32_t m22, uint32_t m23, uint32_t m30, uint32_t m31, uint32_t m32, uint32_t m33);

  /// @brief Method uint4x4, addr 0x6a645ec, size 0x94, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x4 uint4x4(::Unity::Mathematics::bool4x4 v);

  /// @brief Method uint4x4, addr 0x6a64854, size 0x154, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x4 uint4x4(::Unity::Mathematics::double4x4 v);

  /// @brief Method uint4x4, addr 0x6a646d8, size 0x154, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x4 uint4x4(::Unity::Mathematics::float4x4 v);

  /// @brief Method uint4x4, addr 0x6a6469c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x4 uint4x4(::Unity::Mathematics::int4x4 v);

  /// @brief Method uint4x4, addr 0x6a645cc, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x4 uint4x4(bool v);

  /// @brief Method uint4x4, addr 0x6a6482c, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x4 uint4x4(double_t v);

  /// @brief Method uint4x4, addr 0x6a646b0, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x4 uint4x4(float_t v);

  /// @brief Method uint4x4, addr 0x6a64680, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x4 uint4x4(int32_t v);

  /// @brief Method uint4x4, addr 0x6a645b0, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x4 uint4x4(uint32_t v);

  /// @brief Method unitexp, addr 0x6a5fedc, size 0x13c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion unitexp(::Unity::Mathematics::quaternion q);

  /// @brief Method unitlog, addr 0x6a601b8, size 0x114, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion unitlog(::Unity::Mathematics::quaternion q);

  /// @brief Method unlerp, addr 0x6a45888, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 unlerp(::Unity::Mathematics::double2 start, ::Unity::Mathematics::double2 end, ::Unity::Mathematics::double2 x);

  /// @brief Method unlerp, addr 0x6a458a4, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 unlerp(::Unity::Mathematics::double3 start, ::Unity::Mathematics::double3 end, ::Unity::Mathematics::double3 x);

  /// @brief Method unlerp, addr 0x6a458d8, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 unlerp(::Unity::Mathematics::double4 start, ::Unity::Mathematics::double4 end, ::Unity::Mathematics::double4 x);

  /// @brief Method unlerp, addr 0x6a457e4, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 unlerp(::Unity::Mathematics::float2 start, ::Unity::Mathematics::float2 end, ::Unity::Mathematics::float2 x);

  /// @brief Method unlerp, addr 0x6a45800, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 unlerp(::Unity::Mathematics::float3 start, ::Unity::Mathematics::float3 end, ::Unity::Mathematics::float3 x);

  /// @brief Method unlerp, addr 0x6a45834, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 unlerp(::Unity::Mathematics::float4 start, ::Unity::Mathematics::float4 end, ::Unity::Mathematics::float4 x);

  /// @brief Method unlerp, addr 0x6a45878, size 0x10, virtual false, abstract: false, final false
  static inline double_t unlerp(double_t start, double_t end, double_t x);

  /// @brief Method unlerp, addr 0x6a457d4, size 0x10, virtual false, abstract: false, final false
  static inline float_t unlerp(float_t start, float_t end, float_t x);

  /// @brief Method unpackhi, addr 0x6a59498, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 unpackhi(::Unity::Mathematics::double4 a, ::Unity::Mathematics::double4 b);

  /// @brief Method unpackhi, addr 0x6a59484, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 unpackhi(::Unity::Mathematics::float4 a, ::Unity::Mathematics::float4 b);

  /// @brief Method unpacklo, addr 0x6a59474, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 unpacklo(::Unity::Mathematics::double4 a, ::Unity::Mathematics::double4 b);

  /// @brief Method unpacklo, addr 0x6a59464, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 unpacklo(::Unity::Mathematics::float4 a, ::Unity::Mathematics::float4 b);

  /// @brief Method up, addr 0x6a58114, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 up();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr math();

public:
  // Ctor Parameters [CppParam { name: "", ty: "math", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  math(math&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "math", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  math(math const&) = delete;

  /// @brief Field DBL_MIN_NORMAL offset 0xffffffff size 0x8
  static constexpr double_t DBL_MIN_NORMAL{ static_cast<double_t>(2.2250738585072014e-308) };

  /// @brief Field E offset 0xffffffff size 0x4
  static constexpr float_t E{ static_cast<float_t>(2.7182817f) };

  /// @brief Field EPSILON offset 0xffffffff size 0x4
  static constexpr float_t EPSILON{ static_cast<float_t>(1.1920929e-7f) };

  /// @brief Field EPSILON_DBL offset 0xffffffff size 0x8
  static constexpr double_t EPSILON_DBL{ static_cast<double_t>(2.220446049250313e-16) };

  /// @brief Field E_DBL offset 0xffffffff size 0x8
  static constexpr double_t E_DBL{ static_cast<double_t>(2.718281828459045) };

  /// @brief Field FLT_MIN_NORMAL offset 0xffffffff size 0x4
  static constexpr float_t FLT_MIN_NORMAL{ static_cast<float_t>(1.1754944e-38f) };

  /// @brief Field INFINITY_DBL offset 0xffffffff size 0x8
  static constexpr double_t INFINITY_DBL{ INFINITY };

  /// @brief Field LN10 offset 0xffffffff size 0x4
  static constexpr float_t LN10{ static_cast<float_t>(2.3025851f) };

  /// @brief Field LN10_DBL offset 0xffffffff size 0x8
  static constexpr double_t LN10_DBL{ static_cast<double_t>(2.302585092994046) };

  /// @brief Field LN2 offset 0xffffffff size 0x4
  static constexpr float_t LN2{ static_cast<float_t>(0.6931472f) };

  /// @brief Field LN2_DBL offset 0xffffffff size 0x8
  static constexpr double_t LN2_DBL{ static_cast<double_t>(0.6931471805599453) };

  /// @brief Field LOG10E offset 0xffffffff size 0x4
  static constexpr float_t LOG10E{ static_cast<float_t>(0.4342945f) };

  /// @brief Field LOG10E_DBL offset 0xffffffff size 0x8
  static constexpr double_t LOG10E_DBL{ static_cast<double_t>(0.4342944819032518) };

  /// @brief Field LOG2E offset 0xffffffff size 0x4
  static constexpr float_t LOG2E{ static_cast<float_t>(1.442695f) };

  /// @brief Field LOG2E_DBL offset 0xffffffff size 0x8
  static constexpr double_t LOG2E_DBL{ static_cast<double_t>(1.4426950408889634) };

  /// @brief Field NAN_DBL offset 0xffffffff size 0x8
  static constexpr double_t NAN_DBL{ NAN };

  /// @brief Field PI offset 0xffffffff size 0x4
  static constexpr float_t PI{ static_cast<float_t>(3.1415927f) };

  /// @brief Field PI2 offset 0xffffffff size 0x4
  static constexpr float_t PI2{ static_cast<float_t>(6.2831855f) };

  /// @brief Field PI2_DBL offset 0xffffffff size 0x8
  static constexpr double_t PI2_DBL{ static_cast<double_t>(6.283185307179586) };

  /// @brief Field PIHALF offset 0xffffffff size 0x4
  static constexpr float_t PIHALF{ static_cast<float_t>(1.5707964f) };

  /// @brief Field PIHALF_DBL offset 0xffffffff size 0x8
  static constexpr double_t PIHALF_DBL{ static_cast<double_t>(1.5707963267948966) };

  /// @brief Field PI_DBL offset 0xffffffff size 0x8
  static constexpr double_t PI_DBL{ static_cast<double_t>(3.141592653589793) };

  /// @brief Field SQRT2 offset 0xffffffff size 0x4
  static constexpr float_t SQRT2{ static_cast<float_t>(1.4142135f) };

  /// @brief Field SQRT2_DBL offset 0xffffffff size 0x8
  static constexpr double_t SQRT2_DBL{ static_cast<double_t>(1.4142135623730951) };

  /// @brief Field TAU offset 0xffffffff size 0x4
  static constexpr float_t TAU{ static_cast<float_t>(6.2831855f) };

  /// @brief Field TAU_DBL offset 0xffffffff size 0x8
  static constexpr double_t TAU_DBL{ static_cast<double_t>(6.283185307179586) };

  /// @brief Field TODEGREES offset 0xffffffff size 0x4
  static constexpr float_t TODEGREES{ static_cast<float_t>(57.29578f) };

  /// @brief Field TODEGREES_DBL offset 0xffffffff size 0x8
  static constexpr double_t TODEGREES_DBL{ static_cast<double_t>(57.29577951308232) };

  /// @brief Field TORADIANS offset 0xffffffff size 0x4
  static constexpr float_t TORADIANS{ static_cast<float_t>(0.017453292f) };

  /// @brief Field TORADIANS_DBL offset 0xffffffff size 0x8
  static constexpr double_t TORADIANS_DBL{ static_cast<double_t>(0.017453292519943295) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13376 };

  /// @brief Field INFINITY offset 0xffffffff size 0x4
  static constexpr float_t _cordl_INFINITY{ INFINITY };

  /// @brief Field NAN offset 0xffffffff size 0x4
  static constexpr float_t _cordl_NAN{ NAN };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Mathematics::math) == 0x10, "Size mismatch!");

} // namespace Unity::Mathematics

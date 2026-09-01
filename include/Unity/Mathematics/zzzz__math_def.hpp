#pragma once
// IWYU pragma private; include "Unity\Mathematics\math.hpp"
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13124 };

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13125 };

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13126 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(sizeof(::Unity::Mathematics::math_LongDoubleUnion) == 0x8, "Size mismatch!");

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

  /// @brief Method AffineTransform, addr 0x65cc6c4, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::AffineTransform AffineTransform(::Unity::Mathematics::float3x4 m);

  /// @brief Method AffineTransform, addr 0x65cc684, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::AffineTransform AffineTransform(::Unity::Mathematics::float4x4 m);

  /// @brief Method AffineTransform, addr 0x65cc6e8, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::AffineTransform AffineTransform(::Unity::Mathematics::RigidTransform rigid);

  /// @brief Method AffineTransform, addr 0x65cc5f4, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::AffineTransform AffineTransform(::Unity::Mathematics::float3x3 rotationScale);

  /// @brief Method AffineTransform, addr 0x65cc4ac, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::AffineTransform AffineTransform(::Unity::Mathematics::float3 translation, ::Unity::Mathematics::quaternion rotation);

  /// @brief Method AffineTransform, addr 0x65cc520, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::AffineTransform AffineTransform(::Unity::Mathematics::float3 translation, ::Unity::Mathematics::quaternion rotation, ::Unity::Mathematics::float3 scale);

  /// @brief Method AffineTransform, addr 0x65cc5d8, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::AffineTransform AffineTransform(::Unity::Mathematics::float3 translation, ::Unity::Mathematics::float3x3 rotationScale);

  /// @brief Method Euler, addr 0x65ef4fc, size 0x154, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 Euler(::Unity::Mathematics::quaternion q, ::Unity::Mathematics::math_RotationOrder order);

  /// @brief Method EulerXYZ, addr 0x65ee3d8, size 0x2dc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 EulerXYZ(::Unity::Mathematics::quaternion q);

  /// @brief Method EulerXZY, addr 0x65ee6b4, size 0x2d8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 EulerXZY(::Unity::Mathematics::quaternion q);

  /// @brief Method EulerYXZ, addr 0x65ee98c, size 0x2d8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 EulerYXZ(::Unity::Mathematics::quaternion q);

  /// @brief Method EulerYZX, addr 0x65eec64, size 0x2e0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 EulerYZX(::Unity::Mathematics::quaternion q);

  /// @brief Method EulerZXY, addr 0x65eef44, size 0x2dc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 EulerZXY(::Unity::Mathematics::quaternion q);

  /// @brief Method EulerZYX, addr 0x65ef220, size 0x2dc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 EulerZYX(::Unity::Mathematics::quaternion q);

  /// @brief Method RigidTransform, addr 0x65f7458, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::RigidTransform RigidTransform(::Unity::Mathematics::quaternion rot, ::Unity::Mathematics::float3 pos);

  /// @brief Method RigidTransform, addr 0x65f746c, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::RigidTransform RigidTransform(::Unity::Mathematics::float3x3 rotation, ::Unity::Mathematics::float3 translation);

  /// @brief Method RigidTransform, addr 0x65f74e0, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::RigidTransform RigidTransform(::Unity::Mathematics::float4x4 transform);

  /// @brief Method abs, addr 0x65dc8d4, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 abs(::Unity::Mathematics::double2 x);

  /// @brief Method abs, addr 0x65dc8e0, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 abs(::Unity::Mathematics::double3 x);

  /// @brief Method abs, addr 0x65dc8f0, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 abs(::Unity::Mathematics::double4 x);

  /// @brief Method abs, addr 0x65dc89c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 abs(::Unity::Mathematics::float2 x);

  /// @brief Method abs, addr 0x65dc8a8, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 abs(::Unity::Mathematics::float3 x);

  /// @brief Method abs, addr 0x65dc8b8, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 abs(::Unity::Mathematics::float4 x);

  /// @brief Method abs, addr 0x65dc7f0, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 abs(::Unity::Mathematics::int2 x);

  /// @brief Method abs, addr 0x65dc818, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 abs(::Unity::Mathematics::int3 x);

  /// @brief Method abs, addr 0x65dc848, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 abs(::Unity::Mathematics::int4 x);

  /// @brief Method abs, addr 0x65dc8cc, size 0x8, virtual false, abstract: false, final false
  static inline double_t abs(double_t x);

  /// @brief Method abs, addr 0x65dc894, size 0x8, virtual false, abstract: false, final false
  static inline float_t abs(float_t x);

  /// @brief Method abs, addr 0x65dc7e4, size 0xc, virtual false, abstract: false, final false
  static inline int32_t abs(int32_t x);

  /// @brief Method abs, addr 0x65dc888, size 0xc, virtual false, abstract: false, final false
  static inline int64_t abs(int64_t x);

  /// @brief Method acos, addr 0x65df808, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 acos(::Unity::Mathematics::double2 x);

  /// @brief Method acos, addr 0x65df8b8, size 0x100, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 acos(::Unity::Mathematics::double3 x);

  /// @brief Method acos, addr 0x65df9b8, size 0x148, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 acos(::Unity::Mathematics::double4 x);

  /// @brief Method acos, addr 0x65df494, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 acos(::Unity::Mathematics::float2 x);

  /// @brief Method acos, addr 0x65df54c, size 0x108, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 acos(::Unity::Mathematics::float3 x);

  /// @brief Method acos, addr 0x65df654, size 0x154, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 acos(::Unity::Mathematics::float4 x);

  /// @brief Method acos, addr 0x65df7a8, size 0x60, virtual false, abstract: false, final false
  static inline double_t acos(double_t x);

  /// @brief Method acos, addr 0x65df42c, size 0x68, virtual false, abstract: false, final false
  static inline float_t acos(float_t x);

  /// @brief Method adj, addr 0x65f7164, size 0xcc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 adj(::Unity::Mathematics::float3x3 m, ::by_ref<float_t> det);

  /// @brief Method adjInverse, addr 0x65f7230, size 0xec, virtual false, abstract: false, final false
  static inline bool adjInverse(::Unity::Mathematics::float3x3 m, ::by_ref<::Unity::Mathematics::float3x3> i, float_t epsilon);

  /// @brief Method all, addr 0x65e9304, size 0x14, virtual false, abstract: false, final false
  static inline bool all(::Unity::Mathematics::bool2 x);

  /// @brief Method all, addr 0x65e9318, size 0x18, virtual false, abstract: false, final false
  static inline bool all(::Unity::Mathematics::bool3 x);

  /// @brief Method all, addr 0x65e9330, size 0x14, virtual false, abstract: false, final false
  static inline bool all(::Unity::Mathematics::bool4 x);

  /// @brief Method all, addr 0x65e9454, size 0x14, virtual false, abstract: false, final false
  static inline bool all(::Unity::Mathematics::double2 x);

  /// @brief Method all, addr 0x65e9468, size 0x24, virtual false, abstract: false, final false
  static inline bool all(::Unity::Mathematics::double3 x);

  /// @brief Method all, addr 0x65e948c, size 0x28, virtual false, abstract: false, final false
  static inline bool all(::Unity::Mathematics::double4 x);

  /// @brief Method all, addr 0x65e93f4, size 0x14, virtual false, abstract: false, final false
  static inline bool all(::Unity::Mathematics::float2 x);

  /// @brief Method all, addr 0x65e9408, size 0x24, virtual false, abstract: false, final false
  static inline bool all(::Unity::Mathematics::float3 x);

  /// @brief Method all, addr 0x65e942c, size 0x28, virtual false, abstract: false, final false
  static inline bool all(::Unity::Mathematics::float4 x);

  /// @brief Method all, addr 0x65e9344, size 0x14, virtual false, abstract: false, final false
  static inline bool all(::Unity::Mathematics::int2 x);

  /// @brief Method all, addr 0x65e9358, size 0x24, virtual false, abstract: false, final false
  static inline bool all(::Unity::Mathematics::int3 x);

  /// @brief Method all, addr 0x65e937c, size 0x20, virtual false, abstract: false, final false
  static inline bool all(::Unity::Mathematics::int4 x);

  /// @brief Method all, addr 0x65e939c, size 0x14, virtual false, abstract: false, final false
  static inline bool all(::Unity::Mathematics::uint2 x);

  /// @brief Method all, addr 0x65e93b0, size 0x24, virtual false, abstract: false, final false
  static inline bool all(::Unity::Mathematics::uint3 x);

  /// @brief Method all, addr 0x65e93d4, size 0x20, virtual false, abstract: false, final false
  static inline bool all(::Unity::Mathematics::uint4 x);

  /// @brief Method angle, addr 0x65f6d50, size 0x1b8, virtual false, abstract: false, final false
  static inline float_t angle(::Unity::Mathematics::quaternion q1, ::Unity::Mathematics::quaternion q2);

  /// @brief Method any, addr 0x65e91a8, size 0x10, virtual false, abstract: false, final false
  static inline bool any(::Unity::Mathematics::bool2 x);

  /// @brief Method any, addr 0x65e91b8, size 0x14, virtual false, abstract: false, final false
  static inline bool any(::Unity::Mathematics::bool3 x);

  /// @brief Method any, addr 0x65e91cc, size 0x10, virtual false, abstract: false, final false
  static inline bool any(::Unity::Mathematics::bool4 x);

  /// @brief Method any, addr 0x65e92a8, size 0x14, virtual false, abstract: false, final false
  static inline bool any(::Unity::Mathematics::double2 x);

  /// @brief Method any, addr 0x65e92bc, size 0x20, virtual false, abstract: false, final false
  static inline bool any(::Unity::Mathematics::double3 x);

  /// @brief Method any, addr 0x65e92dc, size 0x28, virtual false, abstract: false, final false
  static inline bool any(::Unity::Mathematics::double4 x);

  /// @brief Method any, addr 0x65e924c, size 0x14, virtual false, abstract: false, final false
  static inline bool any(::Unity::Mathematics::float2 x);

  /// @brief Method any, addr 0x65e9260, size 0x20, virtual false, abstract: false, final false
  static inline bool any(::Unity::Mathematics::float3 x);

  /// @brief Method any, addr 0x65e9280, size 0x28, virtual false, abstract: false, final false
  static inline bool any(::Unity::Mathematics::float4 x);

  /// @brief Method any, addr 0x65e91dc, size 0xc, virtual false, abstract: false, final false
  static inline bool any(::Unity::Mathematics::int2 x);

  /// @brief Method any, addr 0x65e91e8, size 0x14, virtual false, abstract: false, final false
  static inline bool any(::Unity::Mathematics::int3 x);

  /// @brief Method any, addr 0x65e91fc, size 0x18, virtual false, abstract: false, final false
  static inline bool any(::Unity::Mathematics::int4 x);

  /// @brief Method any, addr 0x65e9214, size 0xc, virtual false, abstract: false, final false
  static inline bool any(::Unity::Mathematics::uint2 x);

  /// @brief Method any, addr 0x65e9220, size 0x14, virtual false, abstract: false, final false
  static inline bool any(::Unity::Mathematics::uint3 x);

  /// @brief Method any, addr 0x65e9234, size 0x18, virtual false, abstract: false, final false
  static inline bool any(::Unity::Mathematics::uint4 x);

  /// @brief Method asdouble, addr 0x65dab40, size 0x8, virtual false, abstract: false, final false
  static inline double_t asdouble(int64_t x);

  /// @brief Method asdouble, addr 0x65dab48, size 0x8, virtual false, abstract: false, final false
  static inline double_t asdouble(uint64_t x);

  /// @brief Method asfloat, addr 0x65daa90, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 asfloat(::Unity::Mathematics::int2 x);

  /// @brief Method asfloat, addr 0x65daad8, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 asfloat(::Unity::Mathematics::uint2 x);

  /// @brief Method asfloat, addr 0x65daaa0, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 asfloat(::Unity::Mathematics::int3 x);

  /// @brief Method asfloat, addr 0x65daae8, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 asfloat(::Unity::Mathematics::uint3 x);

  /// @brief Method asfloat, addr 0x65daab4, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 asfloat(::Unity::Mathematics::int4 x);

  /// @brief Method asfloat, addr 0x65daafc, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 asfloat(::Unity::Mathematics::uint4 x);

  /// @brief Method asfloat, addr 0x65daa88, size 0x8, virtual false, abstract: false, final false
  static inline float_t asfloat(int32_t x);

  /// @brief Method asfloat, addr 0x65daad0, size 0x8, virtual false, abstract: false, final false
  static inline float_t asfloat(uint32_t x);

  /// @brief Method asin, addr 0x65e0c84, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 asin(::Unity::Mathematics::double2 x);

  /// @brief Method asin, addr 0x65e0d34, size 0x100, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 asin(::Unity::Mathematics::double3 x);

  /// @brief Method asin, addr 0x65e0e34, size 0x148, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 asin(::Unity::Mathematics::double4 x);

  /// @brief Method asin, addr 0x65e0910, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 asin(::Unity::Mathematics::float2 x);

  /// @brief Method asin, addr 0x65e09c8, size 0x108, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 asin(::Unity::Mathematics::float3 x);

  /// @brief Method asin, addr 0x65e0ad0, size 0x154, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 asin(::Unity::Mathematics::float4 x);

  /// @brief Method asin, addr 0x65e0c24, size 0x60, virtual false, abstract: false, final false
  static inline double_t asin(double_t x);

  /// @brief Method asin, addr 0x65e08a8, size 0x68, virtual false, abstract: false, final false
  static inline float_t asin(float_t x);

  /// @brief Method asint, addr 0x65da9d4, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 asint(::Unity::Mathematics::float2 x);

  /// @brief Method asint, addr 0x65da9bc, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 asint(::Unity::Mathematics::uint2 x);

  /// @brief Method asint, addr 0x65da9e4, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 asint(::Unity::Mathematics::float3 x);

  /// @brief Method asint, addr 0x65da9c0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 asint(::Unity::Mathematics::uint3 x);

  /// @brief Method asint, addr 0x65da9f8, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 asint(::Unity::Mathematics::float4 x);

  /// @brief Method asint, addr 0x65da9c8, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 asint(::Unity::Mathematics::uint4 x);

  /// @brief Method asint, addr 0x65da9cc, size 0x8, virtual false, abstract: false, final false
  static inline int32_t asint(float_t x);

  /// @brief Method asint, addr 0x65da9b8, size 0x4, virtual false, abstract: false, final false
  static inline int32_t asint(uint32_t x);

  /// @brief Method aslong, addr 0x65daa74, size 0x8, virtual false, abstract: false, final false
  static inline int64_t aslong(double_t x);

  /// @brief Method aslong, addr 0x65daa70, size 0x4, virtual false, abstract: false, final false
  static inline int64_t aslong(uint64_t x);

  /// @brief Method asuint, addr 0x65daa30, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 asuint(::Unity::Mathematics::float2 x);

  /// @brief Method asuint, addr 0x65daa18, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 asuint(::Unity::Mathematics::int2 x);

  /// @brief Method asuint, addr 0x65daa40, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 asuint(::Unity::Mathematics::float3 x);

  /// @brief Method asuint, addr 0x65daa1c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 asuint(::Unity::Mathematics::int3 x);

  /// @brief Method asuint, addr 0x65daa54, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 asuint(::Unity::Mathematics::float4 x);

  /// @brief Method asuint, addr 0x65daa24, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 asuint(::Unity::Mathematics::int4 x);

  /// @brief Method asuint, addr 0x65daa28, size 0x8, virtual false, abstract: false, final false
  static inline uint32_t asuint(float_t x);

  /// @brief Method asuint, addr 0x65daa14, size 0x4, virtual false, abstract: false, final false
  static inline uint32_t asuint(int32_t x);

  /// @brief Method asulong, addr 0x65daa80, size 0x8, virtual false, abstract: false, final false
  static inline uint64_t asulong(double_t x);

  /// @brief Method asulong, addr 0x65daa7c, size 0x4, virtual false, abstract: false, final false
  static inline uint64_t asulong(int64_t x);

  /// @brief Method atan, addr 0x65ddbd8, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 atan(::Unity::Mathematics::double2 x);

  /// @brief Method atan, addr 0x65ddc88, size 0x100, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 atan(::Unity::Mathematics::double3 x);

  /// @brief Method atan, addr 0x65ddd88, size 0x148, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 atan(::Unity::Mathematics::double4 x);

  /// @brief Method atan, addr 0x65dd864, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 atan(::Unity::Mathematics::float2 x);

  /// @brief Method atan, addr 0x65dd91c, size 0x108, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 atan(::Unity::Mathematics::float3 x);

  /// @brief Method atan, addr 0x65dda24, size 0x154, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 atan(::Unity::Mathematics::float4 x);

  /// @brief Method atan, addr 0x65ddb78, size 0x60, virtual false, abstract: false, final false
  static inline double_t atan(double_t x);

  /// @brief Method atan, addr 0x65dd7fc, size 0x68, virtual false, abstract: false, final false
  static inline float_t atan(float_t x);

  /// @brief Method atan2, addr 0x65de324, size 0xc8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 atan2(::Unity::Mathematics::double2 y, ::Unity::Mathematics::double2 x);

  /// @brief Method atan2, addr 0x65de3ec, size 0x120, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 atan2(::Unity::Mathematics::double3 y, ::Unity::Mathematics::double3 x);

  /// @brief Method atan2, addr 0x65de50c, size 0x178, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 atan2(::Unity::Mathematics::double4 y, ::Unity::Mathematics::double4 x);

  /// @brief Method atan2, addr 0x65ddf40, size 0xd0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 atan2(::Unity::Mathematics::float2 y, ::Unity::Mathematics::float2 x);

  /// @brief Method atan2, addr 0x65de010, size 0x128, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 atan2(::Unity::Mathematics::float3 y, ::Unity::Mathematics::float3 x);

  /// @brief Method atan2, addr 0x65de138, size 0x184, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 atan2(::Unity::Mathematics::float4 y, ::Unity::Mathematics::float4 x);

  /// @brief Method atan2, addr 0x65de2bc, size 0x68, virtual false, abstract: false, final false
  static inline double_t atan2(double_t y, double_t x);

  /// @brief Method atan2, addr 0x65dded0, size 0x70, virtual false, abstract: false, final false
  static inline float_t atan2(float_t y, float_t x);

  /// @brief Method back, addr 0x65ee3a8, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 back();

  /// @brief Method bitmask, addr 0x65dab18, size 0x28, virtual false, abstract: false, final false
  static inline int32_t bitmask(::Unity::Mathematics::bool4 value);

  /// @brief Method bool2, addr 0x65cd060, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 bool2(bool v);

  /// @brief Method bool2, addr 0x65cd03c, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 bool2(bool x, bool y);

  /// @brief Method bool2, addr 0x65cd054, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 bool2(::Unity::Mathematics::bool2 xy);

  /// @brief Method bool2x2, addr 0x65cd37c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 bool2x2(::Unity::Mathematics::bool2 c0, ::Unity::Mathematics::bool2 c1);

  /// @brief Method bool2x2, addr 0x65cd384, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 bool2x2(bool m00, bool m01, bool m10, bool m11);

  /// @brief Method bool2x2, addr 0x65cd3a8, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 bool2x2(bool v);

  /// @brief Method bool2x3, addr 0x65cd4c4, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 bool2x3(::Unity::Mathematics::bool2 c0, ::Unity::Mathematics::bool2 c1, ::Unity::Mathematics::bool2 c2);

  /// @brief Method bool2x3, addr 0x65cd4d8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 bool2x3(bool m00, bool m01, bool m02, bool m10, bool m11, bool m12);

  /// @brief Method bool2x3, addr 0x65cd510, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 bool2x3(bool v);

  /// @brief Method bool2x4, addr 0x65cd6a4, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 bool2x4(::Unity::Mathematics::bool2 c0, ::Unity::Mathematics::bool2 c1, ::Unity::Mathematics::bool2 c2, ::Unity::Mathematics::bool2 c3);

  /// @brief Method bool2x4, addr 0x65cd6c0, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 bool2x4(bool m00, bool m01, bool m02, bool m03, bool m10, bool m11, bool m12, bool m13);

  /// @brief Method bool2x4, addr 0x65cd708, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 bool2x4(bool v);

  /// @brief Method bool3, addr 0x65cd954, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 bool3(bool v);

  /// @brief Method bool3, addr 0x65cd8e4, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 bool3(bool x, bool y, bool z);

  /// @brief Method bool3, addr 0x65cd908, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 bool3(bool x, ::Unity::Mathematics::bool2 yz);

  /// @brief Method bool3, addr 0x65cd924, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 bool3(::Unity::Mathematics::bool2 xy, bool z);

  /// @brief Method bool3, addr 0x65cd944, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 bool3(::Unity::Mathematics::bool3 xyz);

  /// @brief Method bool3x2, addr 0x65cdcc8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 bool3x2(::Unity::Mathematics::bool3 c0, ::Unity::Mathematics::bool3 c1);

  /// @brief Method bool3x2, addr 0x65cdcd0, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 bool3x2(bool m00, bool m01, bool m10, bool m11, bool m20, bool m21);

  /// @brief Method bool3x2, addr 0x65cdd24, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 bool3x2(bool v);

  /// @brief Method bool3x3, addr 0x65cdec8, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 bool3x3(::Unity::Mathematics::bool3 c0, ::Unity::Mathematics::bool3 c1, ::Unity::Mathematics::bool3 c2);

  /// @brief Method bool3x3, addr 0x65cdefc, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 bool3x3(bool m00, bool m01, bool m02, bool m10, bool m11, bool m12, bool m20, bool m21, bool m22);

  /// @brief Method bool3x3, addr 0x65cdf78, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 bool3x3(bool v);

  /// @brief Method bool3x4, addr 0x65ce208, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 bool3x4(::Unity::Mathematics::bool3 c0, ::Unity::Mathematics::bool3 c1, ::Unity::Mathematics::bool3 c2, ::Unity::Mathematics::bool3 c3);

  /// @brief Method bool3x4, addr 0x65ce24c, size 0xa8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 bool3x4(bool m00, bool m01, bool m02, bool m03, bool m10, bool m11, bool m12, bool m13, bool m20, bool m21, bool m22, bool m23);

  /// @brief Method bool3x4, addr 0x65ce2f4, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 bool3x4(bool v);

  /// @brief Method bool4, addr 0x65ce788, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 bool4(bool v);

  /// @brief Method bool4, addr 0x65ce690, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 bool4(bool x, bool y, bool z, bool w);

  /// @brief Method bool4, addr 0x65ce6c4, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 bool4(bool x, bool y, ::Unity::Mathematics::bool2 zw);

  /// @brief Method bool4, addr 0x65ce6e4, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 bool4(bool x, ::Unity::Mathematics::bool2 yz, bool w);

  /// @brief Method bool4, addr 0x65ce708, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 bool4(bool x, ::Unity::Mathematics::bool3 yzw);

  /// @brief Method bool4, addr 0x65ce71c, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 bool4(::Unity::Mathematics::bool2 xy, bool z, bool w);

  /// @brief Method bool4, addr 0x65ce748, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 bool4(::Unity::Mathematics::bool2 xy, ::Unity::Mathematics::bool2 zw);

  /// @brief Method bool4, addr 0x65ce760, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 bool4(::Unity::Mathematics::bool3 xyz, bool w);

  /// @brief Method bool4, addr 0x65ce780, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 bool4(::Unity::Mathematics::bool4 xyzw);

  /// @brief Method bool4x2, addr 0x65ceb34, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 bool4x2(::Unity::Mathematics::bool4 c0, ::Unity::Mathematics::bool4 c1);

  /// @brief Method bool4x2, addr 0x65ceb3c, size 0x5c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 bool4x2(bool m00, bool m01, bool m10, bool m11, bool m20, bool m21, bool m30, bool m31);

  /// @brief Method bool4x2, addr 0x65ceb98, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 bool4x2(bool v);

  /// @brief Method bool4x3, addr 0x65cedb4, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 bool4x3(::Unity::Mathematics::bool4 c0, ::Unity::Mathematics::bool4 c1, ::Unity::Mathematics::bool4 c2);

  /// @brief Method bool4x3, addr 0x65cedc0, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 bool4x3(bool m00, bool m01, bool m02, bool m10, bool m11, bool m12, bool m20, bool m21, bool m22, bool m30, bool m31, bool m32);

  /// @brief Method bool4x3, addr 0x65cee50, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 bool4x3(bool v);

  /// @brief Method bool4x4, addr 0x65cf124, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x4 bool4x4(::Unity::Mathematics::bool4 c0, ::Unity::Mathematics::bool4 c1, ::Unity::Mathematics::bool4 c2, ::Unity::Mathematics::bool4 c3);

  /// @brief Method bool4x4, addr 0x65cf134, size 0xc8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x4 bool4x4(bool m00, bool m01, bool m02, bool m03, bool m10, bool m11, bool m12, bool m13, bool m20, bool m21, bool m22, bool m23, bool m30, bool m31,
                                                      bool m32, bool m33);

  /// @brief Method bool4x4, addr 0x65cf1fc, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x4 bool4x4(bool v);

  /// @brief Method ceil, addr 0x65e18c4, size 0x9c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 ceil(::Unity::Mathematics::double2 x);

  /// @brief Method ceil, addr 0x65e1960, size 0xe0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 ceil(::Unity::Mathematics::double3 x);

  /// @brief Method ceil, addr 0x65e1a40, size 0x11c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 ceil(::Unity::Mathematics::double4 x);

  /// @brief Method ceil, addr 0x65e15cc, size 0x9c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 ceil(::Unity::Mathematics::float2 x);

  /// @brief Method ceil, addr 0x65e1668, size 0xe0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 ceil(::Unity::Mathematics::float3 x);

  /// @brief Method ceil, addr 0x65e1748, size 0x11c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 ceil(::Unity::Mathematics::float4 x);

  /// @brief Method ceil, addr 0x65e1864, size 0x60, virtual false, abstract: false, final false
  static inline double_t ceil(double_t x);

  /// @brief Method ceil, addr 0x65e156c, size 0x60, virtual false, abstract: false, final false
  static inline float_t ceil(float_t x);

  /// @brief Method ceillog2, addr 0x65ec700, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 ceillog2(::Unity::Mathematics::int2 x);

  /// @brief Method ceillog2, addr 0x65ec958, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 ceillog2(::Unity::Mathematics::uint2 x);

  /// @brief Method ceillog2, addr 0x65ec77c, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 ceillog2(::Unity::Mathematics::int3 x);

  /// @brief Method ceillog2, addr 0x65ec9d4, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 ceillog2(::Unity::Mathematics::uint3 x);

  /// @brief Method ceillog2, addr 0x65ec830, size 0xf0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 ceillog2(::Unity::Mathematics::int4 x);

  /// @brief Method ceillog2, addr 0x65eca88, size 0xf0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 ceillog2(::Unity::Mathematics::uint4 x);

  /// @brief Method ceillog2, addr 0x65ec6c8, size 0x38, virtual false, abstract: false, final false
  static inline int32_t ceillog2(int32_t x);

  /// @brief Method ceillog2, addr 0x65ec920, size 0x38, virtual false, abstract: false, final false
  static inline int32_t ceillog2(uint32_t x);

  /// @brief Method ceilpow2, addr 0x65ec280, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 ceilpow2(::Unity::Mathematics::int2 x);

  /// @brief Method ceilpow2, addr 0x65ec308, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 ceilpow2(::Unity::Mathematics::int3 x);

  /// @brief Method ceilpow2, addr 0x65ec3ac, size 0x104, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 ceilpow2(::Unity::Mathematics::int4 x);

  /// @brief Method ceilpow2, addr 0x65ec4d0, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 ceilpow2(::Unity::Mathematics::uint2 x);

  /// @brief Method ceilpow2, addr 0x65ec53c, size 0x94, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 ceilpow2(::Unity::Mathematics::uint3 x);

  /// @brief Method ceilpow2, addr 0x65ec5d0, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 ceilpow2(::Unity::Mathematics::uint4 x);

  /// @brief Method ceilpow2, addr 0x65ec260, size 0x20, virtual false, abstract: false, final false
  static inline int32_t ceilpow2(int32_t x);

  /// @brief Method ceilpow2, addr 0x65ec680, size 0x24, virtual false, abstract: false, final false
  static inline int64_t ceilpow2(int64_t x);

  /// @brief Method ceilpow2, addr 0x65ec4b0, size 0x20, virtual false, abstract: false, final false
  static inline uint32_t ceilpow2(uint32_t x);

  /// @brief Method ceilpow2, addr 0x65ec6a4, size 0x24, virtual false, abstract: false, final false
  static inline uint64_t ceilpow2(uint64_t x);

  /// @brief Method chgsign, addr 0x65edf4c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 chgsign(::Unity::Mathematics::float2 x, ::Unity::Mathematics::float2 y);

  /// @brief Method chgsign, addr 0x65edf84, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 chgsign(::Unity::Mathematics::float3 x, ::Unity::Mathematics::float3 y);

  /// @brief Method chgsign, addr 0x65edfd0, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 chgsign(::Unity::Mathematics::float4 x, ::Unity::Mathematics::float4 y);

  /// @brief Method chgsign, addr 0x65edf34, size 0x18, virtual false, abstract: false, final false
  static inline float_t chgsign(float_t x, float_t y);

  /// @brief Method clamp, addr 0x65dc37c, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 clamp(::Unity::Mathematics::double2 valueToClamp, ::Unity::Mathematics::double2 lowerBound, ::Unity::Mathematics::double2 upperBound);

  /// @brief Method clamp, addr 0x65dc3c0, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 clamp(::Unity::Mathematics::double3 valueToClamp, ::Unity::Mathematics::double3 lowerBound, ::Unity::Mathematics::double3 upperBound);

  /// @brief Method clamp, addr 0x65dc448, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 clamp(::Unity::Mathematics::double4 valueToClamp, ::Unity::Mathematics::double4 lowerBound, ::Unity::Mathematics::double4 upperBound);

  /// @brief Method clamp, addr 0x65dc21c, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 clamp(::Unity::Mathematics::float2 valueToClamp, ::Unity::Mathematics::float2 lowerBound, ::Unity::Mathematics::float2 upperBound);

  /// @brief Method clamp, addr 0x65dc260, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 clamp(::Unity::Mathematics::float3 valueToClamp, ::Unity::Mathematics::float3 lowerBound, ::Unity::Mathematics::float3 upperBound);

  /// @brief Method clamp, addr 0x65dc2d8, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 clamp(::Unity::Mathematics::float4 valueToClamp, ::Unity::Mathematics::float4 lowerBound, ::Unity::Mathematics::float4 upperBound);

  /// @brief Method clamp, addr 0x65dbff8, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 clamp(::Unity::Mathematics::int2 valueToClamp, ::Unity::Mathematics::int2 lowerBound, ::Unity::Mathematics::int2 upperBound);

  /// @brief Method clamp, addr 0x65dc02c, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 clamp(::Unity::Mathematics::int3 valueToClamp, ::Unity::Mathematics::int3 lowerBound, ::Unity::Mathematics::int3 upperBound);

  /// @brief Method clamp, addr 0x65dc070, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 clamp(::Unity::Mathematics::int4 valueToClamp, ::Unity::Mathematics::int4 lowerBound, ::Unity::Mathematics::int4 upperBound);

  /// @brief Method clamp, addr 0x65dc0e8, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 clamp(::Unity::Mathematics::uint2 valueToClamp, ::Unity::Mathematics::uint2 lowerBound, ::Unity::Mathematics::uint2 upperBound);

  /// @brief Method clamp, addr 0x65dc11c, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 clamp(::Unity::Mathematics::uint3 valueToClamp, ::Unity::Mathematics::uint3 lowerBound, ::Unity::Mathematics::uint3 upperBound);

  /// @brief Method clamp, addr 0x65dc160, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 clamp(::Unity::Mathematics::uint4 valueToClamp, ::Unity::Mathematics::uint4 lowerBound, ::Unity::Mathematics::uint4 upperBound);

  /// @brief Method clamp, addr 0x65dc34c, size 0x30, virtual false, abstract: false, final false
  static inline double_t clamp(double_t valueToClamp, double_t lowerBound, double_t upperBound);

  /// @brief Method clamp, addr 0x65dc1ec, size 0x30, virtual false, abstract: false, final false
  static inline float_t clamp(float_t valueToClamp, float_t lowerBound, float_t upperBound);

  /// @brief Method clamp, addr 0x65dbfe4, size 0x14, virtual false, abstract: false, final false
  static inline int32_t clamp(int32_t valueToClamp, int32_t lowerBound, int32_t upperBound);

  /// @brief Method clamp, addr 0x65dc1c4, size 0x14, virtual false, abstract: false, final false
  static inline int64_t clamp(int64_t valueToClamp, int64_t lowerBound, int64_t upperBound);

  /// @brief Method clamp, addr 0x65dc0d4, size 0x14, virtual false, abstract: false, final false
  static inline uint32_t clamp(uint32_t valueToClamp, uint32_t lowerBound, uint32_t upperBound);

  /// @brief Method clamp, addr 0x65dc1d8, size 0x14, virtual false, abstract: false, final false
  static inline uint64_t clamp(uint64_t valueToClamp, uint64_t lowerBound, uint64_t upperBound);

  /// @brief Method cmax, addr 0x65ed448, size 0x1c, virtual false, abstract: false, final false
  static inline double_t cmax(::Unity::Mathematics::double2 x);

  /// @brief Method cmax, addr 0x65ed464, size 0x30, virtual false, abstract: false, final false
  static inline double_t cmax(::Unity::Mathematics::double3 x);

  /// @brief Method cmax, addr 0x65ed494, size 0x44, virtual false, abstract: false, final false
  static inline double_t cmax(::Unity::Mathematics::double4 x);

  /// @brief Method cmax, addr 0x65ed3b8, size 0x1c, virtual false, abstract: false, final false
  static inline float_t cmax(::Unity::Mathematics::float2 x);

  /// @brief Method cmax, addr 0x65ed3d4, size 0x30, virtual false, abstract: false, final false
  static inline float_t cmax(::Unity::Mathematics::float3 x);

  /// @brief Method cmax, addr 0x65ed404, size 0x44, virtual false, abstract: false, final false
  static inline float_t cmax(::Unity::Mathematics::float4 x);

  /// @brief Method cmax, addr 0x65ed320, size 0x10, virtual false, abstract: false, final false
  static inline int32_t cmax(::Unity::Mathematics::int2 x);

  /// @brief Method cmax, addr 0x65ed330, size 0x18, virtual false, abstract: false, final false
  static inline int32_t cmax(::Unity::Mathematics::int3 x);

  /// @brief Method cmax, addr 0x65ed348, size 0x24, virtual false, abstract: false, final false
  static inline int32_t cmax(::Unity::Mathematics::int4 x);

  /// @brief Method cmax, addr 0x65ed36c, size 0x10, virtual false, abstract: false, final false
  static inline uint32_t cmax(::Unity::Mathematics::uint2 x);

  /// @brief Method cmax, addr 0x65ed37c, size 0x18, virtual false, abstract: false, final false
  static inline uint32_t cmax(::Unity::Mathematics::uint3 x);

  /// @brief Method cmax, addr 0x65ed394, size 0x24, virtual false, abstract: false, final false
  static inline uint32_t cmax(::Unity::Mathematics::uint4 x);

  /// @brief Method cmin, addr 0x65ed290, size 0x1c, virtual false, abstract: false, final false
  static inline double_t cmin(::Unity::Mathematics::double2 x);

  /// @brief Method cmin, addr 0x65ed2ac, size 0x30, virtual false, abstract: false, final false
  static inline double_t cmin(::Unity::Mathematics::double3 x);

  /// @brief Method cmin, addr 0x65ed2dc, size 0x44, virtual false, abstract: false, final false
  static inline double_t cmin(::Unity::Mathematics::double4 x);

  /// @brief Method cmin, addr 0x65ed200, size 0x1c, virtual false, abstract: false, final false
  static inline float_t cmin(::Unity::Mathematics::float2 x);

  /// @brief Method cmin, addr 0x65ed21c, size 0x30, virtual false, abstract: false, final false
  static inline float_t cmin(::Unity::Mathematics::float3 x);

  /// @brief Method cmin, addr 0x65ed24c, size 0x44, virtual false, abstract: false, final false
  static inline float_t cmin(::Unity::Mathematics::float4 x);

  /// @brief Method cmin, addr 0x65ed168, size 0x10, virtual false, abstract: false, final false
  static inline int32_t cmin(::Unity::Mathematics::int2 x);

  /// @brief Method cmin, addr 0x65ed178, size 0x18, virtual false, abstract: false, final false
  static inline int32_t cmin(::Unity::Mathematics::int3 x);

  /// @brief Method cmin, addr 0x65ed190, size 0x24, virtual false, abstract: false, final false
  static inline int32_t cmin(::Unity::Mathematics::int4 x);

  /// @brief Method cmin, addr 0x65ed1b4, size 0x10, virtual false, abstract: false, final false
  static inline uint32_t cmin(::Unity::Mathematics::uint2 x);

  /// @brief Method cmin, addr 0x65ed1c4, size 0x18, virtual false, abstract: false, final false
  static inline uint32_t cmin(::Unity::Mathematics::uint3 x);

  /// @brief Method cmin, addr 0x65ed1dc, size 0x24, virtual false, abstract: false, final false
  static inline uint32_t cmin(::Unity::Mathematics::uint4 x);

  /// @brief Method compress, addr 0x65ed788, size 0x58, virtual false, abstract: false, final false
  static inline int32_t compress(float_t* output, int32_t index, ::Unity::Mathematics::float4 val, ::Unity::Mathematics::bool4 mask);

  /// @brief Method compress, addr 0x65ed6c8, size 0x60, virtual false, abstract: false, final false
  static inline int32_t compress(int32_t* output, int32_t index, ::Unity::Mathematics::int4 val, ::Unity::Mathematics::bool4 mask);

  /// @brief Method compress, addr 0x65ed728, size 0x60, virtual false, abstract: false, final false
  static inline int32_t compress(uint32_t* output, int32_t index, ::Unity::Mathematics::uint4 val, ::Unity::Mathematics::bool4 mask);

  /// @brief Method conjugate, addr 0x65f5d8c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion conjugate(::Unity::Mathematics::quaternion q);

  /// @brief Method cos, addr 0x65dea60, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 cos(::Unity::Mathematics::double2 x);

  /// @brief Method cos, addr 0x65deb10, size 0x100, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 cos(::Unity::Mathematics::double3 x);

  /// @brief Method cos, addr 0x65dec10, size 0x148, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 cos(::Unity::Mathematics::double4 x);

  /// @brief Method cos, addr 0x65de6ec, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 cos(::Unity::Mathematics::float2 x);

  /// @brief Method cos, addr 0x65de7a4, size 0x108, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 cos(::Unity::Mathematics::float3 x);

  /// @brief Method cos, addr 0x65de8ac, size 0x154, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 cos(::Unity::Mathematics::float4 x);

  /// @brief Method cos, addr 0x65dea00, size 0x60, virtual false, abstract: false, final false
  static inline double_t cos(double_t x);

  /// @brief Method cos, addr 0x65de684, size 0x68, virtual false, abstract: false, final false
  static inline float_t cos(float_t x);

  /// @brief Method cosh, addr 0x65df134, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 cosh(::Unity::Mathematics::double2 x);

  /// @brief Method cosh, addr 0x65df1e4, size 0x100, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 cosh(::Unity::Mathematics::double3 x);

  /// @brief Method cosh, addr 0x65df2e4, size 0x148, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 cosh(::Unity::Mathematics::double4 x);

  /// @brief Method cosh, addr 0x65dedc0, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 cosh(::Unity::Mathematics::float2 x);

  /// @brief Method cosh, addr 0x65dee78, size 0x108, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 cosh(::Unity::Mathematics::float3 x);

  /// @brief Method cosh, addr 0x65def80, size 0x154, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 cosh(::Unity::Mathematics::float4 x);

  /// @brief Method cosh, addr 0x65df0d4, size 0x60, virtual false, abstract: false, final false
  static inline double_t cosh(double_t x);

  /// @brief Method cosh, addr 0x65ded58, size 0x68, virtual false, abstract: false, final false
  static inline float_t cosh(float_t x);

  /// @brief Method countbits, addr 0x65ead3c, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 countbits(::Unity::Mathematics::int2 x);

  /// @brief Method countbits, addr 0x65eaf68, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 countbits(::Unity::Mathematics::uint2 x);

  /// @brief Method countbits, addr 0x65eadc4, size 0xac, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 countbits(::Unity::Mathematics::int3 x);

  /// @brief Method countbits, addr 0x65eaff0, size 0xac, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 countbits(::Unity::Mathematics::uint3 x);

  /// @brief Method countbits, addr 0x65eae70, size 0xe4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 countbits(::Unity::Mathematics::int4 x);

  /// @brief Method countbits, addr 0x65eb09c, size 0xe4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 countbits(::Unity::Mathematics::uint4 x);

  /// @brief Method countbits, addr 0x65ead28, size 0x14, virtual false, abstract: false, final false
  static inline int32_t countbits(int32_t x);

  /// @brief Method countbits, addr 0x65eb194, size 0x14, virtual false, abstract: false, final false
  static inline int32_t countbits(int64_t x);

  /// @brief Method countbits, addr 0x65eaf54, size 0x14, virtual false, abstract: false, final false
  static inline int32_t countbits(uint32_t x);

  /// @brief Method countbits, addr 0x65eb180, size 0x14, virtual false, abstract: false, final false
  static inline int32_t countbits(uint64_t x);

  /// @brief Method cross, addr 0x65e8c84, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 cross(::Unity::Mathematics::double3 x, ::Unity::Mathematics::double3 y);

  /// @brief Method cross, addr 0x65e8c5c, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 cross(::Unity::Mathematics::float3 x, ::Unity::Mathematics::float3 y);

  /// @brief Method csum, addr 0x65ed564, size 0x8, virtual false, abstract: false, final false
  static inline double_t csum(::Unity::Mathematics::double2 x);

  /// @brief Method csum, addr 0x65ed56c, size 0xc, virtual false, abstract: false, final false
  static inline double_t csum(::Unity::Mathematics::double3 x);

  /// @brief Method csum, addr 0x65ed578, size 0x10, virtual false, abstract: false, final false
  static inline double_t csum(::Unity::Mathematics::double4 x);

  /// @brief Method csum, addr 0x65ed540, size 0x8, virtual false, abstract: false, final false
  static inline float_t csum(::Unity::Mathematics::float2 x);

  /// @brief Method csum, addr 0x65ed548, size 0xc, virtual false, abstract: false, final false
  static inline float_t csum(::Unity::Mathematics::float3 x);

  /// @brief Method csum, addr 0x65ed554, size 0x10, virtual false, abstract: false, final false
  static inline float_t csum(::Unity::Mathematics::float4 x);

  /// @brief Method csum, addr 0x65ed4d8, size 0xc, virtual false, abstract: false, final false
  static inline int32_t csum(::Unity::Mathematics::int2 x);

  /// @brief Method csum, addr 0x65ed4e4, size 0x10, virtual false, abstract: false, final false
  static inline int32_t csum(::Unity::Mathematics::int3 x);

  /// @brief Method csum, addr 0x65ed4f4, size 0x18, virtual false, abstract: false, final false
  static inline int32_t csum(::Unity::Mathematics::int4 x);

  /// @brief Method csum, addr 0x65ed50c, size 0xc, virtual false, abstract: false, final false
  static inline uint32_t csum(::Unity::Mathematics::uint2 x);

  /// @brief Method csum, addr 0x65ed518, size 0x10, virtual false, abstract: false, final false
  static inline uint32_t csum(::Unity::Mathematics::uint3 x);

  /// @brief Method csum, addr 0x65ed528, size 0x18, virtual false, abstract: false, final false
  static inline uint32_t csum(::Unity::Mathematics::uint4 x);

  /// @brief Method decompose, addr 0x65ccd5c, size 0x108, virtual false, abstract: false, final false
  static inline void decompose(::Unity::Mathematics::AffineTransform a, ::by_ref<::Unity::Mathematics::float3> translation, ::by_ref<::Unity::Mathematics::quaternion> rotation,
                               ::by_ref<::Unity::Mathematics::float3> scale);

  /// @brief Method degrees, addr 0x65ed120, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 degrees(::Unity::Mathematics::double2 x);

  /// @brief Method degrees, addr 0x65ed134, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 degrees(::Unity::Mathematics::double3 x);

  /// @brief Method degrees, addr 0x65ed14c, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 degrees(::Unity::Mathematics::double4 x);

  /// @brief Method degrees, addr 0x65ed0c8, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 degrees(::Unity::Mathematics::float2 x);

  /// @brief Method degrees, addr 0x65ed0dc, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 degrees(::Unity::Mathematics::float3 x);

  /// @brief Method degrees, addr 0x65ed0f4, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 degrees(::Unity::Mathematics::float4 x);

  /// @brief Method degrees, addr 0x65ed110, size 0x10, virtual false, abstract: false, final false
  static inline double_t degrees(double_t x);

  /// @brief Method degrees, addr 0x65ed0b8, size 0x10, virtual false, abstract: false, final false
  static inline float_t degrees(float_t x);

  /// @brief Method determinant, addr 0x65cfb64, size 0x10, virtual false, abstract: false, final false
  static inline double_t determinant(::Unity::Mathematics::double2x2 m);

  /// @brief Method determinant, addr 0x65d0e80, size 0x54, virtual false, abstract: false, final false
  static inline double_t determinant(::Unity::Mathematics::double3x3 m);

  /// @brief Method determinant, addr 0x65d2e94, size 0xe8, virtual false, abstract: false, final false
  static inline double_t determinant(::Unity::Mathematics::double4x4 m);

  /// @brief Method determinant, addr 0x65d3848, size 0x10, virtual false, abstract: false, final false
  static inline float_t determinant(::Unity::Mathematics::float2x2 m);

  /// @brief Method determinant, addr 0x65d496c, size 0x54, virtual false, abstract: false, final false
  static inline float_t determinant(::Unity::Mathematics::float3x3 m);

  /// @brief Method determinant, addr 0x65d651c, size 0xe8, virtual false, abstract: false, final false
  static inline float_t determinant(::Unity::Mathematics::float4x4 m);

  /// @brief Method determinant, addr 0x65d78d4, size 0x18, virtual false, abstract: false, final false
  static inline int32_t determinant(::Unity::Mathematics::int2x2 m);

  /// @brief Method determinant, addr 0x65d8c2c, size 0x4c, virtual false, abstract: false, final false
  static inline int32_t determinant(::Unity::Mathematics::int3x3 m);

  /// @brief Method determinant, addr 0x65da6cc, size 0xc4, virtual false, abstract: false, final false
  static inline int32_t determinant(::Unity::Mathematics::int4x4 m);

  /// @brief Method distance, addr 0x65e8980, size 0x88, virtual false, abstract: false, final false
  static inline double_t distance(::Unity::Mathematics::double2 x, ::Unity::Mathematics::double2 y);

  /// @brief Method distance, addr 0x65e8a08, size 0xa4, virtual false, abstract: false, final false
  static inline double_t distance(::Unity::Mathematics::double3 x, ::Unity::Mathematics::double3 y);

  /// @brief Method distance, addr 0x65e8aac, size 0xc0, virtual false, abstract: false, final false
  static inline double_t distance(::Unity::Mathematics::double4 x, ::Unity::Mathematics::double4 y);

  /// @brief Method distance, addr 0x65e8978, size 0x8, virtual false, abstract: false, final false
  static inline double_t distance(double_t x, double_t y);

  /// @brief Method distance, addr 0x65e878c, size 0x88, virtual false, abstract: false, final false
  static inline float_t distance(::Unity::Mathematics::float2 x, ::Unity::Mathematics::float2 y);

  /// @brief Method distance, addr 0x65e8814, size 0xa4, virtual false, abstract: false, final false
  static inline float_t distance(::Unity::Mathematics::float3 x, ::Unity::Mathematics::float3 y);

  /// @brief Method distance, addr 0x65e88b8, size 0xc0, virtual false, abstract: false, final false
  static inline float_t distance(::Unity::Mathematics::float4 x, ::Unity::Mathematics::float4 y);

  /// @brief Method distance, addr 0x65e8784, size 0x8, virtual false, abstract: false, final false
  static inline float_t distance(float_t x, float_t y);

  /// @brief Method distancesq, addr 0x65e8bf0, size 0x18, virtual false, abstract: false, final false
  static inline double_t distancesq(::Unity::Mathematics::double2 x, ::Unity::Mathematics::double2 y);

  /// @brief Method distancesq, addr 0x65e8c08, size 0x24, virtual false, abstract: false, final false
  static inline double_t distancesq(::Unity::Mathematics::double3 x, ::Unity::Mathematics::double3 y);

  /// @brief Method distancesq, addr 0x65e8c2c, size 0x30, virtual false, abstract: false, final false
  static inline double_t distancesq(::Unity::Mathematics::double4 x, ::Unity::Mathematics::double4 y);

  /// @brief Method distancesq, addr 0x65e8be4, size 0xc, virtual false, abstract: false, final false
  static inline double_t distancesq(double_t x, double_t y);

  /// @brief Method distancesq, addr 0x65e8b78, size 0x18, virtual false, abstract: false, final false
  static inline float_t distancesq(::Unity::Mathematics::float2 x, ::Unity::Mathematics::float2 y);

  /// @brief Method distancesq, addr 0x65e8b90, size 0x24, virtual false, abstract: false, final false
  static inline float_t distancesq(::Unity::Mathematics::float3 x, ::Unity::Mathematics::float3 y);

  /// @brief Method distancesq, addr 0x65e8bb4, size 0x30, virtual false, abstract: false, final false
  static inline float_t distancesq(::Unity::Mathematics::float4 x, ::Unity::Mathematics::float4 y);

  /// @brief Method distancesq, addr 0x65e8b6c, size 0xc, virtual false, abstract: false, final false
  static inline float_t distancesq(float_t x, float_t y);

  /// @brief Method dot, addr 0x65dca0c, size 0x10, virtual false, abstract: false, final false
  static inline double_t dot(::Unity::Mathematics::double2 x, ::Unity::Mathematics::double2 y);

  /// @brief Method dot, addr 0x65dca1c, size 0x18, virtual false, abstract: false, final false
  static inline double_t dot(::Unity::Mathematics::double3 x, ::Unity::Mathematics::double3 y);

  /// @brief Method dot, addr 0x65dca34, size 0x20, virtual false, abstract: false, final false
  static inline double_t dot(::Unity::Mathematics::double4 x, ::Unity::Mathematics::double4 y);

  /// @brief Method dot, addr 0x65dca04, size 0x8, virtual false, abstract: false, final false
  static inline double_t dot(double_t x, double_t y);

  /// @brief Method dot, addr 0x65f5dd4, size 0x20, virtual false, abstract: false, final false
  static inline float_t dot(::Unity::Mathematics::quaternion a, ::Unity::Mathematics::quaternion b);

  /// @brief Method dot, addr 0x65dc9bc, size 0x10, virtual false, abstract: false, final false
  static inline float_t dot(::Unity::Mathematics::float2 x, ::Unity::Mathematics::float2 y);

  /// @brief Method dot, addr 0x65dc9cc, size 0x18, virtual false, abstract: false, final false
  static inline float_t dot(::Unity::Mathematics::float3 x, ::Unity::Mathematics::float3 y);

  /// @brief Method dot, addr 0x65dc9e4, size 0x20, virtual false, abstract: false, final false
  static inline float_t dot(::Unity::Mathematics::float4 x, ::Unity::Mathematics::float4 y);

  /// @brief Method dot, addr 0x65dc9b4, size 0x8, virtual false, abstract: false, final false
  static inline float_t dot(float_t x, float_t y);

  /// @brief Method dot, addr 0x65dc90c, size 0x14, virtual false, abstract: false, final false
  static inline int32_t dot(::Unity::Mathematics::int2 x, ::Unity::Mathematics::int2 y);

  /// @brief Method dot, addr 0x65dc920, size 0x18, virtual false, abstract: false, final false
  static inline int32_t dot(::Unity::Mathematics::int3 x, ::Unity::Mathematics::int3 y);

  /// @brief Method dot, addr 0x65dc938, size 0x24, virtual false, abstract: false, final false
  static inline int32_t dot(::Unity::Mathematics::int4 x, ::Unity::Mathematics::int4 y);

  /// @brief Method dot, addr 0x65dc904, size 0x8, virtual false, abstract: false, final false
  static inline int32_t dot(int32_t x, int32_t y);

  /// @brief Method dot, addr 0x65dc964, size 0x14, virtual false, abstract: false, final false
  static inline uint32_t dot(::Unity::Mathematics::uint2 x, ::Unity::Mathematics::uint2 y);

  /// @brief Method dot, addr 0x65dc978, size 0x18, virtual false, abstract: false, final false
  static inline uint32_t dot(::Unity::Mathematics::uint3 x, ::Unity::Mathematics::uint3 y);

  /// @brief Method dot, addr 0x65dc990, size 0x24, virtual false, abstract: false, final false
  static inline uint32_t dot(::Unity::Mathematics::uint4 x, ::Unity::Mathematics::uint4 y);

  /// @brief Method dot, addr 0x65dc95c, size 0x8, virtual false, abstract: false, final false
  static inline uint32_t dot(uint32_t x, uint32_t y);

  /// @brief Method double2, addr 0x65cf5a4, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 double2(::Unity::Mathematics::bool2 v);

  /// @brief Method double2, addr 0x65cf6ec, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 double2(::Unity::Mathematics::float2 v);

  /// @brief Method double2, addr 0x65cf5f8, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 double2(::Unity::Mathematics::half v);

  /// @brief Method double2, addr 0x65cf65c, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 double2(::Unity::Mathematics::half2 v);

  /// @brief Method double2, addr 0x65cf5cc, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 double2(::Unity::Mathematics::int2 v);

  /// @brief Method double2, addr 0x65cf5e8, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 double2(::Unity::Mathematics::uint2 v);

  /// @brief Method double2, addr 0x65cf58c, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 double2(bool v);

  /// @brief Method double2, addr 0x65cf584, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 double2(double_t v);

  /// @brief Method double2, addr 0x65cf6e0, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 double2(float_t v);

  /// @brief Method double2, addr 0x65cf5c0, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 double2(int32_t v);

  /// @brief Method double2, addr 0x65cf5dc, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 double2(uint32_t v);

  /// @brief Method double2, addr 0x65cf57c, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 double2(double_t x, double_t y);

  /// @brief Method double2, addr 0x65cf580, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 double2(::Unity::Mathematics::double2 xy);

  /// @brief Method double2x2, addr 0x65cfa30, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 double2x2(::Unity::Mathematics::double2 c0, ::Unity::Mathematics::double2 c1);

  /// @brief Method double2x2, addr 0x65cfa34, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 double2x2(double_t m00, double_t m01, double_t m10, double_t m11);

  /// @brief Method double2x2, addr 0x65cfa74, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 double2x2(::Unity::Mathematics::bool2x2 v);

  /// @brief Method double2x2, addr 0x65cfb14, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 double2x2(::Unity::Mathematics::float2x2 v);

  /// @brief Method double2x2, addr 0x65cfab4, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 double2x2(::Unity::Mathematics::int2x2 v);

  /// @brief Method double2x2, addr 0x65cfae4, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 double2x2(::Unity::Mathematics::uint2x2 v);

  /// @brief Method double2x2, addr 0x65cfa54, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 double2x2(bool v);

  /// @brief Method double2x2, addr 0x65cfa44, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 double2x2(double_t v);

  /// @brief Method double2x2, addr 0x65cfb00, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 double2x2(float_t v);

  /// @brief Method double2x2, addr 0x65cfaa0, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 double2x2(int32_t v);

  /// @brief Method double2x2, addr 0x65cfad0, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 double2x2(uint32_t v);

  /// @brief Method double2x3, addr 0x65cfc6c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 double2x3(::Unity::Mathematics::double2 c0, ::Unity::Mathematics::double2 c1, ::Unity::Mathematics::double2 c2);

  /// @brief Method double2x3, addr 0x65cfc7c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 double2x3(double_t m00, double_t m01, double_t m02, double_t m10, double_t m11, double_t m12);

  /// @brief Method double2x3, addr 0x65cfcbc, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 double2x3(::Unity::Mathematics::bool2x3 v);

  /// @brief Method double2x3, addr 0x65cfda8, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 double2x3(::Unity::Mathematics::float2x3 v);

  /// @brief Method double2x3, addr 0x65cfd18, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 double2x3(::Unity::Mathematics::int2x3 v);

  /// @brief Method double2x3, addr 0x65cfd60, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 double2x3(::Unity::Mathematics::uint2x3 v);

  /// @brief Method double2x3, addr 0x65cfc9c, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 double2x3(bool v);

  /// @brief Method double2x3, addr 0x65cfc8c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 double2x3(double_t v);

  /// @brief Method double2x3, addr 0x65cfd94, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 double2x3(float_t v);

  /// @brief Method double2x3, addr 0x65cfd04, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 double2x3(int32_t v);

  /// @brief Method double2x3, addr 0x65cfd4c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 double2x3(uint32_t v);

  /// @brief Method double2x4, addr 0x65cff30, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 double2x4(::Unity::Mathematics::double2 c0, ::Unity::Mathematics::double2 c1, ::Unity::Mathematics::double2 c2, ::Unity::Mathematics::double2 c3);

  /// @brief Method double2x4, addr 0x65cff44, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 double2x4(double_t m00, double_t m01, double_t m02, double_t m03, double_t m10, double_t m11, double_t m12, double_t m13);

  /// @brief Method double2x4, addr 0x65cff90, size 0x5c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 double2x4(::Unity::Mathematics::bool2x4 v);

  /// @brief Method double2x4, addr 0x65d00bc, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 double2x4(::Unity::Mathematics::float2x4 v);

  /// @brief Method double2x4, addr 0x65d0004, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 double2x4(::Unity::Mathematics::int2x4 v);

  /// @brief Method double2x4, addr 0x65d0060, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 double2x4(::Unity::Mathematics::uint2x4 v);

  /// @brief Method double2x4, addr 0x65cff6c, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 double2x4(bool v);

  /// @brief Method double2x4, addr 0x65cff58, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 double2x4(double_t v);

  /// @brief Method double2x4, addr 0x65d00a4, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 double2x4(float_t v);

  /// @brief Method double2x4, addr 0x65cffec, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 double2x4(int32_t v);

  /// @brief Method double2x4, addr 0x65d0048, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 double2x4(uint32_t v);

  /// @brief Method double3, addr 0x65d02dc, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 double3(::Unity::Mathematics::bool3 v);

  /// @brief Method double3, addr 0x65d04b0, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 double3(::Unity::Mathematics::float3 v);

  /// @brief Method double3, addr 0x65d0348, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 double3(::Unity::Mathematics::half v);

  /// @brief Method double3, addr 0x65d03b0, size 0xf0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 double3(::Unity::Mathematics::half3 v);

  /// @brief Method double3, addr 0x65d0310, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 double3(::Unity::Mathematics::int3 v);

  /// @brief Method double3, addr 0x65d0334, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 double3(::Unity::Mathematics::uint3 v);

  /// @brief Method double3, addr 0x65d02c0, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 double3(bool v);

  /// @brief Method double3, addr 0x65d02b4, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 double3(double_t v);

  /// @brief Method double3, addr 0x65d04a0, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 double3(float_t v);

  /// @brief Method double3, addr 0x65d0300, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 double3(int32_t v);

  /// @brief Method double3, addr 0x65d0324, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 double3(uint32_t v);

  /// @brief Method double3, addr 0x65d02a4, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 double3(double_t x, double_t y, double_t z);

  /// @brief Method double3, addr 0x65d02a8, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 double3(double_t x, ::Unity::Mathematics::double2 yz);

  /// @brief Method double3, addr 0x65d02ac, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 double3(::Unity::Mathematics::double2 xy, double_t z);

  /// @brief Method double3, addr 0x65d02b0, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 double3(::Unity::Mathematics::double3 xyz);

  /// @brief Method double3x2, addr 0x65d08a8, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x2 double3x2(::Unity::Mathematics::double3 c0, ::Unity::Mathematics::double3 c1);

  /// @brief Method double3x2, addr 0x65d08b8, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x2 double3x2(double_t m00, double_t m01, double_t m10, double_t m11, double_t m20, double_t m21);

  /// @brief Method double3x2, addr 0x65d08f8, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x2 double3x2(::Unity::Mathematics::bool3x2 v);

  /// @brief Method double3x2, addr 0x65d09e4, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x2 double3x2(::Unity::Mathematics::float3x2 v);

  /// @brief Method double3x2, addr 0x65d0954, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x2 double3x2(::Unity::Mathematics::int3x2 v);

  /// @brief Method double3x2, addr 0x65d099c, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x2 double3x2(::Unity::Mathematics::uint3x2 v);

  /// @brief Method double3x2, addr 0x65d08d8, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x2 double3x2(bool v);

  /// @brief Method double3x2, addr 0x65d08c8, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x2 double3x2(double_t v);

  /// @brief Method double3x2, addr 0x65d09d0, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x2 double3x2(float_t v);

  /// @brief Method double3x2, addr 0x65d0940, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x2 double3x2(int32_t v);

  /// @brief Method double3x2, addr 0x65d0988, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x2 double3x2(uint32_t v);

  /// @brief Method double3x3, addr 0x65d0b60, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 double3x3(::Unity::Mathematics::double3 c0, ::Unity::Mathematics::double3 c1, ::Unity::Mathematics::double3 c2);

  /// @brief Method double3x3, addr 0x65d0b84, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 double3x3(double_t m00, double_t m01, double_t m02, double_t m10, double_t m11, double_t m12, double_t m20, double_t m21, double_t m22);

  /// @brief Method double3x3, addr 0x65d0be0, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 double3x3(::Unity::Mathematics::bool3x3 v);

  /// @brief Method double3x3, addr 0x65d0d4c, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 double3x3(::Unity::Mathematics::float3x3 v);

  /// @brief Method double3x3, addr 0x65d0c74, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 double3x3(::Unity::Mathematics::int3x3 v);

  /// @brief Method double3x3, addr 0x65d0ce0, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 double3x3(::Unity::Mathematics::uint3x3 v);

  /// @brief Method double3x3, addr 0x65d0bb8, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 double3x3(bool v);

  /// @brief Method double3x3, addr 0x65d0ba0, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 double3x3(double_t v);

  /// @brief Method double3x3, addr 0x65d0d30, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 double3x3(float_t v);

  /// @brief Method double3x3, addr 0x65d0c58, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 double3x3(int32_t v);

  /// @brief Method double3x3, addr 0x65d0cc4, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 double3x3(uint32_t v);

  /// @brief Method double3x4, addr 0x65d109c, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 double3x4(::Unity::Mathematics::double3 c0, ::Unity::Mathematics::double3 c1, ::Unity::Mathematics::double3 c2, ::Unity::Mathematics::double3 c3);

  /// @brief Method double3x4, addr 0x65d10d0, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 double3x4(double_t m00, double_t m01, double_t m02, double_t m03, double_t m10, double_t m11, double_t m12, double_t m13, double_t m20, double_t m21,
                                                          double_t m22, double_t m23);

  /// @brief Method double3x4, addr 0x65d114c, size 0x9c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 double3x4(::Unity::Mathematics::bool3x4 v);

  /// @brief Method double3x4, addr 0x65d1310, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 double3x4(::Unity::Mathematics::float3x4 v);

  /// @brief Method double3x4, addr 0x65d1208, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 double3x4(::Unity::Mathematics::int3x4 v);

  /// @brief Method double3x4, addr 0x65d128c, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 double3x4(::Unity::Mathematics::uint3x4 v);

  /// @brief Method double3x4, addr 0x65d1120, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 double3x4(bool v);

  /// @brief Method double3x4, addr 0x65d1104, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 double3x4(double_t v);

  /// @brief Method double3x4, addr 0x65d12f0, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 double3x4(float_t v);

  /// @brief Method double3x4, addr 0x65d11e8, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 double3x4(int32_t v);

  /// @brief Method double3x4, addr 0x65d126c, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 double3x4(uint32_t v);

  /// @brief Method double4, addr 0x65d1690, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 double4(::Unity::Mathematics::bool4 v);

  /// @brief Method double4, addr 0x65d18d4, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 double4(::Unity::Mathematics::float4 v);

  /// @brief Method double4, addr 0x65d171c, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 double4(::Unity::Mathematics::half v);

  /// @brief Method double4, addr 0x65d1788, size 0x138, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 double4(::Unity::Mathematics::half4 v);

  /// @brief Method double4, addr 0x65d16d0, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 double4(::Unity::Mathematics::int4 v);

  /// @brief Method double4, addr 0x65d1700, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 double4(::Unity::Mathematics::uint4 v);

  /// @brief Method double4, addr 0x65d1670, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 double4(bool v);

  /// @brief Method double4, addr 0x65d1660, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 double4(double_t v);

  /// @brief Method double4, addr 0x65d18c0, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 double4(float_t v);

  /// @brief Method double4, addr 0x65d16bc, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 double4(int32_t v);

  /// @brief Method double4, addr 0x65d16ec, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 double4(uint32_t v);

  /// @brief Method double4, addr 0x65d1640, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 double4(double_t x, double_t y, double_t z, double_t w);

  /// @brief Method double4, addr 0x65d1644, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 double4(double_t x, double_t y, ::Unity::Mathematics::double2 zw);

  /// @brief Method double4, addr 0x65d1648, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 double4(double_t x, ::Unity::Mathematics::double2 yz, double_t w);

  /// @brief Method double4, addr 0x65d164c, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 double4(double_t x, ::Unity::Mathematics::double3 yzw);

  /// @brief Method double4, addr 0x65d1650, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 double4(::Unity::Mathematics::double2 xy, double_t z, double_t w);

  /// @brief Method double4, addr 0x65d1654, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 double4(::Unity::Mathematics::double2 xy, ::Unity::Mathematics::double2 zw);

  /// @brief Method double4, addr 0x65d1658, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 double4(::Unity::Mathematics::double3 xyz, double_t w);

  /// @brief Method double4, addr 0x65d165c, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 double4(::Unity::Mathematics::double4 xyzw);

  /// @brief Method double4x2, addr 0x65d1d98, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 double4x2(::Unity::Mathematics::double4 c0, ::Unity::Mathematics::double4 c1);

  /// @brief Method double4x2, addr 0x65d1dac, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 double4x2(double_t m00, double_t m01, double_t m10, double_t m11, double_t m20, double_t m21, double_t m30, double_t m31);

  /// @brief Method double4x2, addr 0x65d1df8, size 0x5c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 double4x2(::Unity::Mathematics::bool4x2 v);

  /// @brief Method double4x2, addr 0x65d1f24, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 double4x2(::Unity::Mathematics::float4x2 v);

  /// @brief Method double4x2, addr 0x65d1e6c, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 double4x2(::Unity::Mathematics::int4x2 v);

  /// @brief Method double4x2, addr 0x65d1ec8, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 double4x2(::Unity::Mathematics::uint4x2 v);

  /// @brief Method double4x2, addr 0x65d1dd4, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 double4x2(bool v);

  /// @brief Method double4x2, addr 0x65d1dc0, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 double4x2(double_t v);

  /// @brief Method double4x2, addr 0x65d1f0c, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 double4x2(float_t v);

  /// @brief Method double4x2, addr 0x65d1e54, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 double4x2(int32_t v);

  /// @brief Method double4x2, addr 0x65d1eb0, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 double4x2(uint32_t v);

  /// @brief Method double4x3, addr 0x65d211c, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 double4x3(::Unity::Mathematics::double4 c0, ::Unity::Mathematics::double4 c1, ::Unity::Mathematics::double4 c2);

  /// @brief Method double4x3, addr 0x65d2148, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 double4x3(double_t m00, double_t m01, double_t m02, double_t m10, double_t m11, double_t m12, double_t m20, double_t m21, double_t m22, double_t m30,
                                                          double_t m31, double_t m32);

  /// @brief Method double4x3, addr 0x65d21c4, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 double4x3(::Unity::Mathematics::bool4x3 v);

  /// @brief Method double4x3, addr 0x65d2370, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 double4x3(::Unity::Mathematics::float4x3 v);

  /// @brief Method double4x3, addr 0x65d2268, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 double4x3(::Unity::Mathematics::int4x3 v);

  /// @brief Method double4x3, addr 0x65d22ec, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 double4x3(::Unity::Mathematics::uint4x3 v);

  /// @brief Method double4x3, addr 0x65d2198, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 double4x3(bool v);

  /// @brief Method double4x3, addr 0x65d217c, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 double4x3(double_t v);

  /// @brief Method double4x3, addr 0x65d2350, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 double4x3(float_t v);

  /// @brief Method double4x3, addr 0x65d2248, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 double4x3(int32_t v);

  /// @brief Method double4x3, addr 0x65d22cc, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 double4x3(uint32_t v);

  /// @brief Method double4x4, addr 0x65d2640, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x4 double4x4(::Unity::Mathematics::double4 c0, ::Unity::Mathematics::double4 c1, ::Unity::Mathematics::double4 c2, ::Unity::Mathematics::double4 c3);

  /// @brief Method double4x4, addr 0x65d2684, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x4 double4x4(double_t m00, double_t m01, double_t m02, double_t m03, double_t m10, double_t m11, double_t m12, double_t m13, double_t m20, double_t m21,
                                                          double_t m22, double_t m23, double_t m30, double_t m31, double_t m32, double_t m33);

  /// @brief Method double4x4, addr 0x65d2730, size 0xac, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x4 double4x4(::Unity::Mathematics::bool4x4 v);

  /// @brief Method double4x4, addr 0x65d295c, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x4 double4x4(::Unity::Mathematics::float4x4 v);

  /// @brief Method double4x4, addr 0x65d2804, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x4 double4x4(::Unity::Mathematics::int4x4 v);

  /// @brief Method double4x4, addr 0x65d28b0, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x4 double4x4(::Unity::Mathematics::uint4x4 v);

  /// @brief Method double4x4, addr 0x65d26fc, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x4 double4x4(bool v);

  /// @brief Method double4x4, addr 0x65d26d8, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x4 double4x4(double_t v);

  /// @brief Method double4x4, addr 0x65d2934, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x4 double4x4(float_t v);

  /// @brief Method double4x4, addr 0x65d27dc, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x4 double4x4(int32_t v);

  /// @brief Method double4x4, addr 0x65d2888, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x4 double4x4(uint32_t v);

  /// @brief Method down, addr 0x65ee388, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 down();

  /// @brief Method exp, addr 0x65e4428, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 exp(::Unity::Mathematics::double2 x);

  /// @brief Method exp, addr 0x65e44d8, size 0x100, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 exp(::Unity::Mathematics::double3 x);

  /// @brief Method exp, addr 0x65e45d8, size 0x148, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 exp(::Unity::Mathematics::double4 x);

  /// @brief Method exp, addr 0x65e40b4, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 exp(::Unity::Mathematics::float2 x);

  /// @brief Method exp, addr 0x65e416c, size 0x108, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 exp(::Unity::Mathematics::float3 x);

  /// @brief Method exp, addr 0x65e4274, size 0x154, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 exp(::Unity::Mathematics::float4 x);

  /// @brief Method exp, addr 0x65f627c, size 0x1a0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion exp(::Unity::Mathematics::quaternion q);

  /// @brief Method exp, addr 0x65e43c8, size 0x60, virtual false, abstract: false, final false
  static inline double_t exp(double_t x);

  /// @brief Method exp, addr 0x65e404c, size 0x68, virtual false, abstract: false, final false
  static inline float_t exp(float_t x);

  /// @brief Method exp10, addr 0x65e52a0, size 0xc4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 exp10(::Unity::Mathematics::double2 x);

  /// @brief Method exp10, addr 0x65e5364, size 0x110, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 exp10(::Unity::Mathematics::double3 x);

  /// @brief Method exp10, addr 0x65e5474, size 0x164, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 exp10(::Unity::Mathematics::double4 x);

  /// @brief Method exp10, addr 0x65e4ef0, size 0xcc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 exp10(::Unity::Mathematics::float2 x);

  /// @brief Method exp10, addr 0x65e4fbc, size 0x114, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 exp10(::Unity::Mathematics::float3 x);

  /// @brief Method exp10, addr 0x65e50d0, size 0x168, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 exp10(::Unity::Mathematics::float4 x);

  /// @brief Method exp10, addr 0x65e5238, size 0x68, virtual false, abstract: false, final false
  static inline double_t exp10(double_t x);

  /// @brief Method exp10, addr 0x65e4e7c, size 0x74, virtual false, abstract: false, final false
  static inline float_t exp10(float_t x);

  /// @brief Method exp2, addr 0x65e4b44, size 0xc4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 exp2(::Unity::Mathematics::double2 x);

  /// @brief Method exp2, addr 0x65e4c08, size 0x110, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 exp2(::Unity::Mathematics::double3 x);

  /// @brief Method exp2, addr 0x65e4d18, size 0x164, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 exp2(::Unity::Mathematics::double4 x);

  /// @brief Method exp2, addr 0x65e4794, size 0xcc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 exp2(::Unity::Mathematics::float2 x);

  /// @brief Method exp2, addr 0x65e4860, size 0x114, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 exp2(::Unity::Mathematics::float3 x);

  /// @brief Method exp2, addr 0x65e4974, size 0x168, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 exp2(::Unity::Mathematics::float4 x);

  /// @brief Method exp2, addr 0x65e4adc, size 0x68, virtual false, abstract: false, final false
  static inline double_t exp2(double_t x);

  /// @brief Method exp2, addr 0x65e4720, size 0x74, virtual false, abstract: false, final false
  static inline float_t exp2(float_t x);

  /// @brief Method f16tof32, addr 0x65ed838, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 f16tof32(::Unity::Mathematics::uint2 x);

  /// @brief Method f16tof32, addr 0x65ed8e8, size 0xf4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 f16tof32(::Unity::Mathematics::uint3 x);

  /// @brief Method f16tof32, addr 0x65ed9dc, size 0x148, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 f16tof32(::Unity::Mathematics::uint4 x);

  /// @brief Method f16tof32, addr 0x65ed7e0, size 0x58, virtual false, abstract: false, final false
  static inline float_t f16tof32(uint32_t x);

  /// @brief Method f32tof16, addr 0x65edb80, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 f32tof16(::Unity::Mathematics::float2 x);

  /// @brief Method f32tof16, addr 0x65edc3c, size 0xfc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 f32tof16(::Unity::Mathematics::float3 x);

  /// @brief Method f32tof16, addr 0x65edd38, size 0x144, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 f32tof16(::Unity::Mathematics::float4 x);

  /// @brief Method f32tof16, addr 0x65edb24, size 0x5c, virtual false, abstract: false, final false
  static inline uint32_t f32tof16(float_t x);

  /// @brief Method faceforward, addr 0x65ea53c, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 faceforward(::Unity::Mathematics::double2 n, ::Unity::Mathematics::double2 i, ::Unity::Mathematics::double2 ng);

  /// @brief Method faceforward, addr 0x65ea560, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 faceforward(::Unity::Mathematics::double3 n, ::Unity::Mathematics::double3 i, ::Unity::Mathematics::double3 ng);

  /// @brief Method faceforward, addr 0x65ea59c, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 faceforward(::Unity::Mathematics::double4 n, ::Unity::Mathematics::double4 i, ::Unity::Mathematics::double4 ng);

  /// @brief Method faceforward, addr 0x65ea48c, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 faceforward(::Unity::Mathematics::float2 n, ::Unity::Mathematics::float2 i, ::Unity::Mathematics::float2 ng);

  /// @brief Method faceforward, addr 0x65ea4b0, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 faceforward(::Unity::Mathematics::float3 n, ::Unity::Mathematics::float3 i, ::Unity::Mathematics::float3 ng);

  /// @brief Method faceforward, addr 0x65ea4ec, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 faceforward(::Unity::Mathematics::float4 n, ::Unity::Mathematics::float4 i, ::Unity::Mathematics::float4 ng);

  /// @brief Method fastinverse, addr 0x65d1380, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 fastinverse(::Unity::Mathematics::double3x4 m);

  /// @brief Method fastinverse, addr 0x65d2dfc, size 0x98, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x4 fastinverse(::Unity::Mathematics::double4x4 m);

  /// @brief Method fastinverse, addr 0x65d4da4, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 fastinverse(::Unity::Mathematics::float3x4 m);

  /// @brief Method fastinverse, addr 0x65d6484, size 0x98, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 fastinverse(::Unity::Mathematics::float4x4 m);

  /// @brief Method float2, addr 0x65d32b0, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 float2(::Unity::Mathematics::bool2 v);

  /// @brief Method float2, addr 0x65d33f0, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 float2(::Unity::Mathematics::double2 v);

  /// @brief Method float2, addr 0x65d3304, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 float2(::Unity::Mathematics::half v);

  /// @brief Method float2, addr 0x65d3364, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 float2(::Unity::Mathematics::half2 v);

  /// @brief Method float2, addr 0x65d32d8, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 float2(::Unity::Mathematics::int2 v);

  /// @brief Method float2, addr 0x65d32f4, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 float2(::Unity::Mathematics::uint2 v);

  /// @brief Method float2, addr 0x65d3298, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 float2(bool v);

  /// @brief Method float2, addr 0x65d33e4, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 float2(double_t v);

  /// @brief Method float2, addr 0x65d3290, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 float2(float_t v);

  /// @brief Method float2, addr 0x65d32cc, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 float2(int32_t v);

  /// @brief Method float2, addr 0x65d32e8, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 float2(uint32_t v);

  /// @brief Method float2, addr 0x65d3288, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 float2(float_t x, float_t y);

  /// @brief Method float2, addr 0x65d328c, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 float2(::Unity::Mathematics::float2 xy);

  /// @brief Method float2x2, addr 0x65d3714, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 float2x2(::Unity::Mathematics::float2 c0, ::Unity::Mathematics::float2 c1);

  /// @brief Method float2x2, addr 0x65d3718, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 float2x2(float_t m00, float_t m01, float_t m10, float_t m11);

  /// @brief Method float2x2, addr 0x65d3758, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 float2x2(::Unity::Mathematics::bool2x2 v);

  /// @brief Method float2x2, addr 0x65d37f8, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 float2x2(::Unity::Mathematics::double2x2 v);

  /// @brief Method float2x2, addr 0x65d3798, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 float2x2(::Unity::Mathematics::int2x2 v);

  /// @brief Method float2x2, addr 0x65d37c8, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 float2x2(::Unity::Mathematics::uint2x2 v);

  /// @brief Method float2x2, addr 0x65d3738, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 float2x2(bool v);

  /// @brief Method float2x2, addr 0x65d37e4, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 float2x2(double_t v);

  /// @brief Method float2x2, addr 0x65d3728, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 float2x2(float_t v);

  /// @brief Method float2x2, addr 0x65d3784, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 float2x2(int32_t v);

  /// @brief Method float2x2, addr 0x65d37b4, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 float2x2(uint32_t v);

  /// @brief Method float2x3, addr 0x65d3910, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 float2x3(::Unity::Mathematics::float2 c0, ::Unity::Mathematics::float2 c1, ::Unity::Mathematics::float2 c2);

  /// @brief Method float2x3, addr 0x65d3920, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 float2x3(float_t m00, float_t m01, float_t m02, float_t m10, float_t m11, float_t m12);

  /// @brief Method float2x3, addr 0x65d3960, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 float2x3(::Unity::Mathematics::bool2x3 v);

  /// @brief Method float2x3, addr 0x65d3a4c, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 float2x3(::Unity::Mathematics::double2x3 v);

  /// @brief Method float2x3, addr 0x65d39bc, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 float2x3(::Unity::Mathematics::int2x3 v);

  /// @brief Method float2x3, addr 0x65d3a04, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 float2x3(::Unity::Mathematics::uint2x3 v);

  /// @brief Method float2x3, addr 0x65d3940, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 float2x3(bool v);

  /// @brief Method float2x3, addr 0x65d3a38, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 float2x3(double_t v);

  /// @brief Method float2x3, addr 0x65d3930, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 float2x3(float_t v);

  /// @brief Method float2x3, addr 0x65d39a8, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 float2x3(int32_t v);

  /// @brief Method float2x3, addr 0x65d39f0, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 float2x3(uint32_t v);

  /// @brief Method float2x4, addr 0x65d3b80, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x4 float2x4(::Unity::Mathematics::float2 c0, ::Unity::Mathematics::float2 c1, ::Unity::Mathematics::float2 c2, ::Unity::Mathematics::float2 c3);

  /// @brief Method float2x4, addr 0x65d3b94, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x4 float2x4(float_t m00, float_t m01, float_t m02, float_t m03, float_t m10, float_t m11, float_t m12, float_t m13);

  /// @brief Method float2x4, addr 0x65d3bd8, size 0x5c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x4 float2x4(::Unity::Mathematics::bool2x4 v);

  /// @brief Method float2x4, addr 0x65d3cec, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x4 float2x4(::Unity::Mathematics::double2x4 v);

  /// @brief Method float2x4, addr 0x65d3c44, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x4 float2x4(::Unity::Mathematics::int2x4 v);

  /// @brief Method float2x4, addr 0x65d3c98, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x4 float2x4(::Unity::Mathematics::uint2x4 v);

  /// @brief Method float2x4, addr 0x65d3bb4, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x4 float2x4(bool v);

  /// @brief Method float2x4, addr 0x65d3cdc, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x4 float2x4(double_t v);

  /// @brief Method float2x4, addr 0x65d3ba8, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x4 float2x4(float_t v);

  /// @brief Method float2x4, addr 0x65d3c34, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x4 float2x4(int32_t v);

  /// @brief Method float2x4, addr 0x65d3c88, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x4 float2x4(uint32_t v);

  /// @brief Method float3, addr 0x65d3e90, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 float3(::Unity::Mathematics::bool3 v);

  /// @brief Method float3, addr 0x65d4040, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 float3(::Unity::Mathematics::double3 v);

  /// @brief Method float3, addr 0x65d3efc, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 float3(::Unity::Mathematics::half v);

  /// @brief Method float3, addr 0x65d3f60, size 0xd0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 float3(::Unity::Mathematics::half3 v);

  /// @brief Method float3, addr 0x65d3ec4, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 float3(::Unity::Mathematics::int3 v);

  /// @brief Method float3, addr 0x65d3ee8, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 float3(::Unity::Mathematics::uint3 v);

  /// @brief Method float3, addr 0x65d3e74, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 float3(bool v);

  /// @brief Method float3, addr 0x65d4030, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 float3(double_t v);

  /// @brief Method float3, addr 0x65d3e68, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 float3(float_t v);

  /// @brief Method float3, addr 0x65d3eb4, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 float3(int32_t v);

  /// @brief Method float3, addr 0x65d3ed8, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 float3(uint32_t v);

  /// @brief Method float3, addr 0x65d3e58, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 float3(float_t x, float_t y, float_t z);

  /// @brief Method float3, addr 0x65d3e5c, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 float3(float_t x, ::Unity::Mathematics::float2 yz);

  /// @brief Method float3, addr 0x65d3e60, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 float3(::Unity::Mathematics::float2 xy, float_t z);

  /// @brief Method float3, addr 0x65d3e64, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 float3(::Unity::Mathematics::float3 xyz);

  /// @brief Method float3x2, addr 0x65d4408, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x2 float3x2(::Unity::Mathematics::float3 c0, ::Unity::Mathematics::float3 c1);

  /// @brief Method float3x2, addr 0x65d4418, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x2 float3x2(float_t m00, float_t m01, float_t m10, float_t m11, float_t m20, float_t m21);

  /// @brief Method float3x2, addr 0x65d4458, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x2 float3x2(::Unity::Mathematics::bool3x2 v);

  /// @brief Method float3x2, addr 0x65d4544, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x2 float3x2(::Unity::Mathematics::double3x2 v);

  /// @brief Method float3x2, addr 0x65d44b4, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x2 float3x2(::Unity::Mathematics::int3x2 v);

  /// @brief Method float3x2, addr 0x65d44fc, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x2 float3x2(::Unity::Mathematics::uint3x2 v);

  /// @brief Method float3x2, addr 0x65d4438, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x2 float3x2(bool v);

  /// @brief Method float3x2, addr 0x65d4530, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x2 float3x2(double_t v);

  /// @brief Method float3x2, addr 0x65d4428, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x2 float3x2(float_t v);

  /// @brief Method float3x2, addr 0x65d44a0, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x2 float3x2(int32_t v);

  /// @brief Method float3x2, addr 0x65d44e8, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x2 float3x2(uint32_t v);

  /// @brief Method float3x3, addr 0x65d4674, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 float3x3(::Unity::Mathematics::float3 c0, ::Unity::Mathematics::float3 c1, ::Unity::Mathematics::float3 c2);

  /// @brief Method float3x3, addr 0x65ef7d4, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 float3x3(::Unity::Mathematics::float4x4 f4x4);

  /// @brief Method float3x3, addr 0x65d4698, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 float3x3(float_t m00, float_t m01, float_t m02, float_t m10, float_t m11, float_t m12, float_t m20, float_t m21, float_t m22);

  /// @brief Method float3x3, addr 0x65ef804, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 float3x3(::Unity::Mathematics::quaternion rotation);

  /// @brief Method float3x3, addr 0x65d46ec, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 float3x3(::Unity::Mathematics::bool3x3 v);

  /// @brief Method float3x3, addr 0x65d4840, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 float3x3(::Unity::Mathematics::double3x3 v);

  /// @brief Method float3x3, addr 0x65d4778, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 float3x3(::Unity::Mathematics::int3x3 v);

  /// @brief Method float3x3, addr 0x65d47dc, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 float3x3(::Unity::Mathematics::uint3x3 v);

  /// @brief Method float3x3, addr 0x65d46c4, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 float3x3(bool v);

  /// @brief Method float3x3, addr 0x65d482c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 float3x3(double_t v);

  /// @brief Method float3x3, addr 0x65d46b4, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 float3x3(float_t v);

  /// @brief Method float3x3, addr 0x65d4764, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 float3x3(int32_t v);

  /// @brief Method float3x3, addr 0x65d47c8, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 float3x3(uint32_t v);

  /// @brief Method float3x4, addr 0x65d4af4, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 float3x4(::Unity::Mathematics::float3 c0, ::Unity::Mathematics::float3 c1, ::Unity::Mathematics::float3 c2, ::Unity::Mathematics::float3 c3);

  /// @brief Method float3x4, addr 0x65d4b28, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 float3x4(float_t m00, float_t m01, float_t m02, float_t m03, float_t m10, float_t m11, float_t m12, float_t m13, float_t m20, float_t m21, float_t m22,
                                                        float_t m23);

  /// @brief Method float3x4, addr 0x65cc7a4, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 float3x4(::Unity::Mathematics::AffineTransform transform);

  /// @brief Method float3x4, addr 0x65d4b98, size 0x9c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 float3x4(::Unity::Mathematics::bool3x4 v);

  /// @brief Method float3x4, addr 0x65d4d38, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 float3x4(::Unity::Mathematics::double3x4 v);

  /// @brief Method float3x4, addr 0x65d4c48, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 float3x4(::Unity::Mathematics::int3x4 v);

  /// @brief Method float3x4, addr 0x65d4cc0, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 float3x4(::Unity::Mathematics::uint3x4 v);

  /// @brief Method float3x4, addr 0x65d4b6c, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 float3x4(bool v);

  /// @brief Method float3x4, addr 0x65d4d24, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 float3x4(double_t v);

  /// @brief Method float3x4, addr 0x65d4b5c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 float3x4(float_t v);

  /// @brief Method float3x4, addr 0x65d4c34, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 float3x4(int32_t v);

  /// @brief Method float3x4, addr 0x65d4cac, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 float3x4(uint32_t v);

  /// @brief Method float4, addr 0x65d4ffc, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 float4(::Unity::Mathematics::bool4 v);

  /// @brief Method float4, addr 0x65d51c4, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 float4(::Unity::Mathematics::double4 v);

  /// @brief Method float4, addr 0x65d5088, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 float4(::Unity::Mathematics::half v);

  /// @brief Method float4, addr 0x65d50f0, size 0xc0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 float4(::Unity::Mathematics::half4 v);

  /// @brief Method float4, addr 0x65d503c, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 float4(::Unity::Mathematics::int4 v);

  /// @brief Method float4, addr 0x65d506c, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 float4(::Unity::Mathematics::uint4 v);

  /// @brief Method float4, addr 0x65d4fdc, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 float4(bool v);

  /// @brief Method float4, addr 0x65d51b0, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 float4(double_t v);

  /// @brief Method float4, addr 0x65d4fcc, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 float4(float_t v);

  /// @brief Method float4, addr 0x65d5028, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 float4(int32_t v);

  /// @brief Method float4, addr 0x65d5058, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 float4(uint32_t v);

  /// @brief Method float4, addr 0x65d4fac, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 float4(float_t x, float_t y, float_t z, float_t w);

  /// @brief Method float4, addr 0x65d4fb0, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 float4(float_t x, float_t y, ::Unity::Mathematics::float2 zw);

  /// @brief Method float4, addr 0x65d4fb4, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 float4(float_t x, ::Unity::Mathematics::float2 yz, float_t w);

  /// @brief Method float4, addr 0x65d4fb8, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 float4(float_t x, ::Unity::Mathematics::float3 yzw);

  /// @brief Method float4, addr 0x65d4fbc, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 float4(::Unity::Mathematics::float2 xy, float_t z, float_t w);

  /// @brief Method float4, addr 0x65d4fc0, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 float4(::Unity::Mathematics::float2 xy, ::Unity::Mathematics::float2 zw);

  /// @brief Method float4, addr 0x65d4fc4, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 float4(::Unity::Mathematics::float3 xyz, float_t w);

  /// @brief Method float4, addr 0x65d4fc8, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 float4(::Unity::Mathematics::float4 xyzw);

  /// @brief Method float4x2, addr 0x65d563c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x2 float4x2(::Unity::Mathematics::float4 c0, ::Unity::Mathematics::float4 c1);

  /// @brief Method float4x2, addr 0x65d5650, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x2 float4x2(float_t m00, float_t m01, float_t m10, float_t m11, float_t m20, float_t m21, float_t m30, float_t m31);

  /// @brief Method float4x2, addr 0x65d5694, size 0x5c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x2 float4x2(::Unity::Mathematics::bool4x2 v);

  /// @brief Method float4x2, addr 0x65d57a8, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x2 float4x2(::Unity::Mathematics::double4x2 v);

  /// @brief Method float4x2, addr 0x65d5700, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x2 float4x2(::Unity::Mathematics::int4x2 v);

  /// @brief Method float4x2, addr 0x65d5754, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x2 float4x2(::Unity::Mathematics::uint4x2 v);

  /// @brief Method float4x2, addr 0x65d5670, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x2 float4x2(bool v);

  /// @brief Method float4x2, addr 0x65d5798, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x2 float4x2(double_t v);

  /// @brief Method float4x2, addr 0x65d5664, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x2 float4x2(float_t v);

  /// @brief Method float4x2, addr 0x65d56f0, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x2 float4x2(int32_t v);

  /// @brief Method float4x2, addr 0x65d5744, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x2 float4x2(uint32_t v);

  /// @brief Method float4x3, addr 0x65d5934, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x3 float4x3(::Unity::Mathematics::float4 c0, ::Unity::Mathematics::float4 c1, ::Unity::Mathematics::float4 c2);

  /// @brief Method float4x3, addr 0x65d5950, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x3 float4x3(float_t m00, float_t m01, float_t m02, float_t m10, float_t m11, float_t m12, float_t m20, float_t m21, float_t m22, float_t m30, float_t m31,
                                                        float_t m32);

  /// @brief Method float4x3, addr 0x65d59c0, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x3 float4x3(::Unity::Mathematics::bool4x3 v);

  /// @brief Method float4x3, addr 0x65d5b48, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x3 float4x3(::Unity::Mathematics::double4x3 v);

  /// @brief Method float4x3, addr 0x65d5a58, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x3 float4x3(::Unity::Mathematics::int4x3 v);

  /// @brief Method float4x3, addr 0x65d5ad0, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x3 float4x3(::Unity::Mathematics::uint4x3 v);

  /// @brief Method float4x3, addr 0x65d5994, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x3 float4x3(bool v);

  /// @brief Method float4x3, addr 0x65d5b34, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x3 float4x3(double_t v);

  /// @brief Method float4x3, addr 0x65d5984, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x3 float4x3(float_t v);

  /// @brief Method float4x3, addr 0x65d5a44, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x3 float4x3(int32_t v);

  /// @brief Method float4x3, addr 0x65d5abc, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x3 float4x3(uint32_t v);

  /// @brief Method float4x4, addr 0x65d5d78, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 float4x4(::Unity::Mathematics::float4 c0, ::Unity::Mathematics::float4 c1, ::Unity::Mathematics::float4 c2, ::Unity::Mathematics::float4 c3);

  /// @brief Method float4x4, addr 0x65d5d9c, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 float4x4(float_t m00, float_t m01, float_t m02, float_t m03, float_t m10, float_t m11, float_t m12, float_t m13, float_t m20, float_t m21, float_t m22,
                                                        float_t m23, float_t m30, float_t m31, float_t m32, float_t m33);

  /// @brief Method float4x4, addr 0x65ef81c, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 float4x4(::Unity::Mathematics::float3x3 rotation, ::Unity::Mathematics::float3 translation);

  /// @brief Method float4x4, addr 0x65ef86c, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 float4x4(::Unity::Mathematics::quaternion rotation, ::Unity::Mathematics::float3 translation);

  /// @brief Method float4x4, addr 0x65cc74c, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 float4x4(::Unity::Mathematics::AffineTransform transform);

  /// @brief Method float4x4, addr 0x65ef884, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 float4x4(::Unity::Mathematics::RigidTransform transform);

  /// @brief Method float4x4, addr 0x65d5e34, size 0xac, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 float4x4(::Unity::Mathematics::bool4x4 v);

  /// @brief Method float4x4, addr 0x65d6024, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 float4x4(::Unity::Mathematics::double4x4 v);

  /// @brief Method float4x4, addr 0x65d5ef4, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 float4x4(::Unity::Mathematics::int4x4 v);

  /// @brief Method float4x4, addr 0x65d5f8c, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 float4x4(::Unity::Mathematics::uint4x4 v);

  /// @brief Method float4x4, addr 0x65d5e00, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 float4x4(bool v);

  /// @brief Method float4x4, addr 0x65d6010, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 float4x4(double_t v);

  /// @brief Method float4x4, addr 0x65d5df0, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 float4x4(float_t v);

  /// @brief Method float4x4, addr 0x65d5ee0, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 float4x4(int32_t v);

  /// @brief Method float4x4, addr 0x65d5f78, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 float4x4(uint32_t v);

  /// @brief Method floor, addr 0x65e12d4, size 0x9c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 floor(::Unity::Mathematics::double2 x);

  /// @brief Method floor, addr 0x65e1370, size 0xe0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 floor(::Unity::Mathematics::double3 x);

  /// @brief Method floor, addr 0x65e1450, size 0x11c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 floor(::Unity::Mathematics::double4 x);

  /// @brief Method floor, addr 0x65e0fdc, size 0x9c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 floor(::Unity::Mathematics::float2 x);

  /// @brief Method floor, addr 0x65e1078, size 0xe0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 floor(::Unity::Mathematics::float3 x);

  /// @brief Method floor, addr 0x65e1158, size 0x11c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 floor(::Unity::Mathematics::float4 x);

  /// @brief Method floor, addr 0x65e1274, size 0x60, virtual false, abstract: false, final false
  static inline double_t floor(double_t x);

  /// @brief Method floor, addr 0x65e0f7c, size 0x60, virtual false, abstract: false, final false
  static inline float_t floor(float_t x);

  /// @brief Method floorlog2, addr 0x65ecbb0, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 floorlog2(::Unity::Mathematics::int2 x);

  /// @brief Method floorlog2, addr 0x65ecdf8, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 floorlog2(::Unity::Mathematics::uint2 x);

  /// @brief Method floorlog2, addr 0x65ecc28, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 floorlog2(::Unity::Mathematics::int3 x);

  /// @brief Method floorlog2, addr 0x65ece70, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 floorlog2(::Unity::Mathematics::uint3 x);

  /// @brief Method floorlog2, addr 0x65eccd8, size 0xe8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 floorlog2(::Unity::Mathematics::int4 x);

  /// @brief Method floorlog2, addr 0x65ecf20, size 0xe8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 floorlog2(::Unity::Mathematics::uint4 x);

  /// @brief Method floorlog2, addr 0x65ecb78, size 0x38, virtual false, abstract: false, final false
  static inline int32_t floorlog2(int32_t x);

  /// @brief Method floorlog2, addr 0x65ecdc0, size 0x38, virtual false, abstract: false, final false
  static inline int32_t floorlog2(uint32_t x);

  /// @brief Method fmod, addr 0x65e6c34, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 fmod(::Unity::Mathematics::double2 x, ::Unity::Mathematics::double2 y);

  /// @brief Method fmod, addr 0x65e6c78, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 fmod(::Unity::Mathematics::double3 x, ::Unity::Mathematics::double3 y);

  /// @brief Method fmod, addr 0x65e6ce0, size 0x8c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 fmod(::Unity::Mathematics::double4 x, ::Unity::Mathematics::double4 y);

  /// @brief Method fmod, addr 0x65e6af8, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 fmod(::Unity::Mathematics::float2 x, ::Unity::Mathematics::float2 y);

  /// @brief Method fmod, addr 0x65e6b3c, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 fmod(::Unity::Mathematics::float3 x, ::Unity::Mathematics::float3 y);

  /// @brief Method fmod, addr 0x65e6ba4, size 0x8c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 fmod(::Unity::Mathematics::float4 x, ::Unity::Mathematics::float4 y);

  /// @brief Method fmod, addr 0x65e6c30, size 0x4, virtual false, abstract: false, final false
  static inline double_t fmod(double_t x, double_t y);

  /// @brief Method fmod, addr 0x65e6af4, size 0x4, virtual false, abstract: false, final false
  static inline float_t fmod(float_t x, float_t y);

  /// @brief Method fold_to_uint, addr 0x65ef750, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 fold_to_uint(::Unity::Mathematics::double2 x);

  /// @brief Method fold_to_uint, addr 0x65ef770, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 fold_to_uint(::Unity::Mathematics::double3 x);

  /// @brief Method fold_to_uint, addr 0x65ef79c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 fold_to_uint(::Unity::Mathematics::double4 x);

  /// @brief Method fold_to_uint, addr 0x65ef740, size 0x10, virtual false, abstract: false, final false
  static inline uint32_t fold_to_uint(double_t x);

  /// @brief Method forward, addr 0x65ee398, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 forward();

  /// @brief Method forward, addr 0x65f73e0, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 forward(::Unity::Mathematics::quaternion q);

  /// @brief Method frac, addr 0x65e3374, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 frac(::Unity::Mathematics::double2 x);

  /// @brief Method frac, addr 0x65e3418, size 0xec, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 frac(::Unity::Mathematics::double3 x);

  /// @brief Method frac, addr 0x65e3504, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 frac(::Unity::Mathematics::double4 x);

  /// @brief Method frac, addr 0x65e313c, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 frac(::Unity::Mathematics::float2 x);

  /// @brief Method frac, addr 0x65e31e0, size 0xec, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 frac(::Unity::Mathematics::float3 x);

  /// @brief Method frac, addr 0x65e32cc, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 frac(::Unity::Mathematics::float4 x);

  /// @brief Method frac, addr 0x65e3310, size 0x64, virtual false, abstract: false, final false
  static inline double_t frac(double_t x);

  /// @brief Method frac, addr 0x65e30d8, size 0x64, virtual false, abstract: false, final false
  static inline float_t frac(float_t x);

  /// @brief Method half, addr 0x65d68b4, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half half(double_t v);

  /// @brief Method half, addr 0x65d6858, size 0x5c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half half(float_t v);

  /// @brief Method half, addr 0x65d6854, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half half(::Unity::Mathematics::half x);

  /// @brief Method half2, addr 0x65d6aa4, size 0x94, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half2 half2(::Unity::Mathematics::double2 v);

  /// @brief Method half2, addr 0x65d69a8, size 0x94, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half2 half2(::Unity::Mathematics::float2 v);

  /// @brief Method half2, addr 0x65d693c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half2 half2(::Unity::Mathematics::half v);

  /// @brief Method half2, addr 0x65d6a3c, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half2 half2(double_t v);

  /// @brief Method half2, addr 0x65d6944, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half2 half2(float_t v);

  /// @brief Method half2, addr 0x65d6930, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half2 half2(::Unity::Mathematics::half x, ::Unity::Mathematics::half y);

  /// @brief Method half2, addr 0x65d6938, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half2 half2(::Unity::Mathematics::half2 xy);

  /// @brief Method half3, addr 0x65d6da8, size 0xec, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half3 half3(::Unity::Mathematics::double3 v);

  /// @brief Method half3, addr 0x65d6c58, size 0xe0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half3 half3(::Unity::Mathematics::float3 v);

  /// @brief Method half3, addr 0x65d6bd8, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half3 half3(::Unity::Mathematics::half v);

  /// @brief Method half3, addr 0x65d6d38, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half3 half3(double_t v);

  /// @brief Method half3, addr 0x65d6bec, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half3 half3(float_t v);

  /// @brief Method half3, addr 0x65d6bb0, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half3 half3(::Unity::Mathematics::half x, ::Unity::Mathematics::half y, ::Unity::Mathematics::half z);

  /// @brief Method half3, addr 0x65d6bc4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half3 half3(::Unity::Mathematics::half x, ::Unity::Mathematics::half2 yz);

  /// @brief Method half3, addr 0x65d6bcc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half3 half3(::Unity::Mathematics::half2 xy, ::Unity::Mathematics::half z);

  /// @brief Method half3, addr 0x65d6bd4, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half3 half3(::Unity::Mathematics::half3 xyz);

  /// @brief Method half4, addr 0x65d71b4, size 0x13c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half4 half4(::Unity::Mathematics::double4 v);

  /// @brief Method half4, addr 0x65d7018, size 0x130, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half4 half4(::Unity::Mathematics::float4 v);

  /// @brief Method half4, addr 0x65d6fa0, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half4 half4(::Unity::Mathematics::half v);

  /// @brief Method half4, addr 0x65d7148, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half4 half4(double_t v);

  /// @brief Method half4, addr 0x65d6fb0, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half4 half4(float_t v);

  /// @brief Method half4, addr 0x65d6f30, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half4 half4(::Unity::Mathematics::half x, ::Unity::Mathematics::half y, ::Unity::Mathematics::half z, ::Unity::Mathematics::half w);

  /// @brief Method half4, addr 0x65d6f4c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half4 half4(::Unity::Mathematics::half x, ::Unity::Mathematics::half y, ::Unity::Mathematics::half2 zw);

  /// @brief Method half4, addr 0x65d6f5c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half4 half4(::Unity::Mathematics::half x, ::Unity::Mathematics::half2 yz, ::Unity::Mathematics::half w);

  /// @brief Method half4, addr 0x65d6f70, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half4 half4(::Unity::Mathematics::half x, ::Unity::Mathematics::half3 yzw);

  /// @brief Method half4, addr 0x65d6f78, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half4 half4(::Unity::Mathematics::half2 xy, ::Unity::Mathematics::half z, ::Unity::Mathematics::half w);

  /// @brief Method half4, addr 0x65d6f8c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half4 half4(::Unity::Mathematics::half2 xy, ::Unity::Mathematics::half2 zw);

  /// @brief Method half4, addr 0x65d6f94, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half4 half4(::Unity::Mathematics::half3 xyz, ::Unity::Mathematics::half w);

  /// @brief Method half4, addr 0x65d6f9c, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half4 half4(::Unity::Mathematics::half4 xyzw);

  /// @brief Method hash, addr 0x65cce64, size 0xc8, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::AffineTransform a);

  /// @brief Method hash, addr 0x65ee374, size 0x4, virtual false, abstract: false, final false
  static inline uint32_t hash(void* pBuffer, int32_t numBytes, uint32_t seed);

  /// @brief Method hash, addr 0x65f731c, size 0x60, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::quaternion q);

  /// @brief Method hash, addr 0x65f7920, size 0x9c, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::RigidTransform t);

  /// @brief Method hash, addr 0x65cd074, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::bool2 v);

  /// @brief Method hash, addr 0x65cd3e0, size 0x74, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::bool2x2 v);

  /// @brief Method hash, addr 0x65cd568, size 0xb0, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::bool2x3 v);

  /// @brief Method hash, addr 0x65cd76c, size 0xbc, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::bool2x4 v);

  /// @brief Method hash, addr 0x65cd96c, size 0x54, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::bool3 v);

  /// @brief Method hash, addr 0x65cdd78, size 0xac, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::bool3x2 v);

  /// @brief Method hash, addr 0x65cdff8, size 0x114, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::bool3x3 v);

  /// @brief Method hash, addr 0x65ce3e0, size 0x16c, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::bool3x4 v);

  /// @brief Method hash, addr 0x65ce798, size 0x48, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::bool4 v);

  /// @brief Method hash, addr 0x65cec1c, size 0xc0, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::bool4x2 v);

  /// @brief Method hash, addr 0x65ceed4, size 0x158, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::bool4x3 v);

  /// @brief Method hash, addr 0x65cf2d4, size 0x160, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::bool4x4 v);

  /// @brief Method hash, addr 0x65cf6f8, size 0x44, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::double2 v);

  /// @brief Method hash, addr 0x65cfb74, size 0x78, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::double2x2 v);

  /// @brief Method hash, addr 0x65cfde4, size 0xa4, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::double2x3 v);

  /// @brief Method hash, addr 0x65d0104, size 0xd0, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::double2x4 v);

  /// @brief Method hash, addr 0x65d04c0, size 0x60, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::double3 v);

  /// @brief Method hash, addr 0x65d0a20, size 0xa0, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::double3x2 v);

  /// @brief Method hash, addr 0x65d0ed4, size 0xe4, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::double3x3 v);

  /// @brief Method hash, addr 0x65d13fc, size 0x11c, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::double3x4 v);

  /// @brief Method hash, addr 0x65d18e8, size 0x80, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::double4 v);

  /// @brief Method hash, addr 0x65d1f6c, size 0xd8, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::double4x2 v);

  /// @brief Method hash, addr 0x65d23d8, size 0x138, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::double4x3 v);

  /// @brief Method hash, addr 0x65d2f7c, size 0x188, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::double4x4 v);

  /// @brief Method hash, addr 0x65d33fc, size 0x34, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::float2 v);

  /// @brief Method hash, addr 0x65d3858, size 0x58, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::float2x2 v);

  /// @brief Method hash, addr 0x65d3a90, size 0x74, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::float2x3 v);

  /// @brief Method hash, addr 0x65d3d30, size 0x90, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::float2x4 v);

  /// @brief Method hash, addr 0x65d4050, size 0x48, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::float3 v);

  /// @brief Method hash, addr 0x65d4588, size 0x70, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::float3x2 v);

  /// @brief Method hash, addr 0x65d49c0, size 0x84, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::float3x3 v);

  /// @brief Method hash, addr 0x65d4e20, size 0xb4, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::float3x4 v);

  /// @brief Method hash, addr 0x65d51d8, size 0x60, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::float4 v);

  /// @brief Method hash, addr 0x65d57ec, size 0x9c, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::float4x2 v);

  /// @brief Method hash, addr 0x65d5bac, size 0xe0, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::float4x3 v);

  /// @brief Method hash, addr 0x65d6604, size 0x124, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::float4x4 v);

  /// @brief Method hash, addr 0x65d6914, size 0x1c, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::half v);

  /// @brief Method hash, addr 0x65d6b38, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::half2 v);

  /// @brief Method hash, addr 0x65d6e94, size 0x4c, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::half3 v);

  /// @brief Method hash, addr 0x65d72f0, size 0x68, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::half4 v);

  /// @brief Method hash, addr 0x65d74c0, size 0x30, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::int2 v);

  /// @brief Method hash, addr 0x65d78ec, size 0x50, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::int2x2 v);

  /// @brief Method hash, addr 0x65d7bf4, size 0x74, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::int2x3 v);

  /// @brief Method hash, addr 0x65d7fa8, size 0x90, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::int2x4 v);

  /// @brief Method hash, addr 0x65d8218, size 0x40, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::int3 v);

  /// @brief Method hash, addr 0x65d87d4, size 0x7c, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::int3x2 v);

  /// @brief Method hash, addr 0x65d8c78, size 0xac, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::int3x3 v);

  /// @brief Method hash, addr 0x65d9224, size 0xdc, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::int3x4 v);

  /// @brief Method hash, addr 0x65d95a0, size 0x58, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::int4 v);

  /// @brief Method hash, addr 0x65d9bc0, size 0x9c, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::int4x2 v);

  /// @brief Method hash, addr 0x65da08c, size 0xd8, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::int4x3 v);

  /// @brief Method hash, addr 0x65da790, size 0x114, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::int4x4 v);

  /// @brief Method hash, addr 0x65f7b50, size 0x30, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::uint2 v);

  /// @brief Method hash, addr 0x65f7f34, size 0x50, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::uint2x2 v);

  /// @brief Method hash, addr 0x65f8218, size 0x74, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::uint2x3 v);

  /// @brief Method hash, addr 0x65f85bc, size 0x90, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::uint2x4 v);

  /// @brief Method hash, addr 0x65f880c, size 0x40, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::uint3 v);

  /// @brief Method hash, addr 0x65f8db8, size 0x7c, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::uint3x2 v);

  /// @brief Method hash, addr 0x65f9210, size 0xac, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::uint3x3 v);

  /// @brief Method hash, addr 0x65f97cc, size 0xdc, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::uint3x4 v);

  /// @brief Method hash, addr 0x65f9b18, size 0x58, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::uint4 v);

  /// @brief Method hash, addr 0x65fa12c, size 0x9c, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::uint4x2 v);

  /// @brief Method hash, addr 0x65fa5fc, size 0xd8, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::uint4x3 v);

  /// @brief Method hash, addr 0x65fac50, size 0x114, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::uint4x4 v);

  /// @brief Method hash_with_unaligned_loads, addr 0x65ee044, size 0x17c, virtual false, abstract: false, final false
  static inline uint32_t hash_with_unaligned_loads(void* pBuffer, int32_t numBytes, uint32_t seed);

  /// @brief Method hash_without_unaligned_loads, addr 0x65ee1c0, size 0x1b4, virtual false, abstract: false, final false
  static inline uint32_t hash_without_unaligned_loads(void* pBuffer, int32_t numBytes, uint32_t seed);

  /// @brief Method hashwide, addr 0x65cd0ac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::bool2 v);

  /// @brief Method hashwide, addr 0x65cd454, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::bool2x2 v);

  /// @brief Method hashwide, addr 0x65cd618, size 0x8c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::bool2x3 v);

  /// @brief Method hashwide, addr 0x65cd828, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::bool2x4 v);

  /// @brief Method hashwide, addr 0x65cf73c, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::double2 v);

  /// @brief Method hashwide, addr 0x65cfbec, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::double2x2 v);

  /// @brief Method hashwide, addr 0x65cfe88, size 0xa8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::double2x3 v);

  /// @brief Method hashwide, addr 0x65d01d4, size 0xd0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::double2x4 v);

  /// @brief Method hashwide, addr 0x65d3430, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::float2 v);

  /// @brief Method hashwide, addr 0x65d38b0, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::float2x2 v);

  /// @brief Method hashwide, addr 0x65d3b04, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::float2x3 v);

  /// @brief Method hashwide, addr 0x65d3dc0, size 0x98, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::float2x4 v);

  /// @brief Method hashwide, addr 0x65d6b70, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::half2 v);

  /// @brief Method hashwide, addr 0x65d74f0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::int2 v);

  /// @brief Method hashwide, addr 0x65d793c, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::int2x2 v);

  /// @brief Method hashwide, addr 0x65d7c68, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::int2x3 v);

  /// @brief Method hashwide, addr 0x65d8038, size 0x98, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::int2x4 v);

  /// @brief Method hashwide, addr 0x65f7b80, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::uint2 v);

  /// @brief Method hashwide, addr 0x65f7f84, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::uint2x2 v);

  /// @brief Method hashwide, addr 0x65f828c, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::uint2x3 v);

  /// @brief Method hashwide, addr 0x65f864c, size 0x98, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::uint2x4 v);

  /// @brief Method hashwide, addr 0x65cd9c0, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::bool3 v);

  /// @brief Method hashwide, addr 0x65cde24, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::bool3x2 v);

  /// @brief Method hashwide, addr 0x65ce10c, size 0xfc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::bool3x3 v);

  /// @brief Method hashwide, addr 0x65ce54c, size 0x144, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::bool3x4 v);

  /// @brief Method hashwide, addr 0x65d0520, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::double3 v);

  /// @brief Method hashwide, addr 0x65d0ac0, size 0xa0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::double3x2 v);

  /// @brief Method hashwide, addr 0x65d0fb8, size 0xe4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::double3x3 v);

  /// @brief Method hashwide, addr 0x65d1518, size 0x128, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::double3x4 v);

  /// @brief Method hashwide, addr 0x65d4098, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::float3 v);

  /// @brief Method hashwide, addr 0x65d45f8, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::float3x2 v);

  /// @brief Method hashwide, addr 0x65d4a44, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::float3x3 v);

  /// @brief Method hashwide, addr 0x65d4ed4, size 0xd8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::float3x4 v);

  /// @brief Method hashwide, addr 0x65d6ee0, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::half3 v);

  /// @brief Method hashwide, addr 0x65d8258, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::int3 v);

  /// @brief Method hashwide, addr 0x65d8850, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::int3x2 v);

  /// @brief Method hashwide, addr 0x65d8d24, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::int3x3 v);

  /// @brief Method hashwide, addr 0x65d9300, size 0xe4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::int3x4 v);

  /// @brief Method hashwide, addr 0x65f884c, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::uint3 v);

  /// @brief Method hashwide, addr 0x65f8e34, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::uint3x2 v);

  /// @brief Method hashwide, addr 0x65f92bc, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::uint3x3 v);

  /// @brief Method hashwide, addr 0x65f98a8, size 0xe4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::uint3x4 v);

  /// @brief Method hashwide, addr 0x65ccf2c, size 0x110, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::AffineTransform a);

  /// @brief Method hashwide, addr 0x65f737c, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::quaternion q);

  /// @brief Method hashwide, addr 0x65f79bc, size 0xc0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::RigidTransform t);

  /// @brief Method hashwide, addr 0x65ce7e0, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::bool4 v);

  /// @brief Method hashwide, addr 0x65cecdc, size 0xd8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::bool4x2 v);

  /// @brief Method hashwide, addr 0x65cf02c, size 0xf8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::bool4x3 v);

  /// @brief Method hashwide, addr 0x65cf434, size 0x148, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::bool4x4 v);

  /// @brief Method hashwide, addr 0x65d1968, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::double4 v);

  /// @brief Method hashwide, addr 0x65d2044, size 0xd8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::double4x2 v);

  /// @brief Method hashwide, addr 0x65d2510, size 0x130, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::double4x3 v);

  /// @brief Method hashwide, addr 0x65d3104, size 0x184, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::double4x4 v);

  /// @brief Method hashwide, addr 0x65d5238, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::float4 v);

  /// @brief Method hashwide, addr 0x65d5888, size 0xac, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::float4x2 v);

  /// @brief Method hashwide, addr 0x65d5c8c, size 0xec, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::float4x3 v);

  /// @brief Method hashwide, addr 0x65d6728, size 0x12c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::float4x4 v);

  /// @brief Method hashwide, addr 0x65d7358, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::half4 v);

  /// @brief Method hashwide, addr 0x65d95f8, size 0x5c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::int4 v);

  /// @brief Method hashwide, addr 0x65d9c5c, size 0x9c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::int4x2 v);

  /// @brief Method hashwide, addr 0x65da164, size 0xd8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::int4x3 v);

  /// @brief Method hashwide, addr 0x65da8a4, size 0x114, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::int4x4 v);

  /// @brief Method hashwide, addr 0x65f9b70, size 0x5c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::uint4 v);

  /// @brief Method hashwide, addr 0x65fa1c8, size 0x9c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::uint4x2 v);

  /// @brief Method hashwide, addr 0x65fa6d4, size 0xd8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::uint4x3 v);

  /// @brief Method hashwide, addr 0x65fad64, size 0x4644, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::uint4x4 v);

  /// @brief Method int2, addr 0x65d73f8, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 int2(::Unity::Mathematics::bool2 v);

  /// @brief Method int2, addr 0x65d748c, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 int2(::Unity::Mathematics::double2 v);

  /// @brief Method int2, addr 0x65d7438, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 int2(::Unity::Mathematics::float2 v);

  /// @brief Method int2, addr 0x65d7414, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 int2(::Unity::Mathematics::uint2 v);

  /// @brief Method int2, addr 0x65d73e0, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 int2(bool v);

  /// @brief Method int2, addr 0x65d746c, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 int2(double_t v);

  /// @brief Method int2, addr 0x65d7418, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 int2(float_t v);

  /// @brief Method int2, addr 0x65d73d4, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 int2(int32_t v);

  /// @brief Method int2, addr 0x65d7408, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 int2(uint32_t v);

  /// @brief Method int2, addr 0x65d73c4, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 int2(int32_t x, int32_t y);

  /// @brief Method int2, addr 0x65d73d0, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 int2(::Unity::Mathematics::int2 xy);

  /// @brief Method int2x2, addr 0x65d775c, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x2 int2x2(::Unity::Mathematics::int2 c0, ::Unity::Mathematics::int2 c1);

  /// @brief Method int2x2, addr 0x65d7760, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x2 int2x2(int32_t m00, int32_t m01, int32_t m10, int32_t m11);

  /// @brief Method int2x2, addr 0x65d7798, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x2 int2x2(::Unity::Mathematics::bool2x2 v);

  /// @brief Method int2x2, addr 0x65d786c, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x2 int2x2(::Unity::Mathematics::double2x2 v);

  /// @brief Method int2x2, addr 0x65d77f0, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x2 int2x2(::Unity::Mathematics::float2x2 v);

  /// @brief Method int2x2, addr 0x65d77c8, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x2 int2x2(::Unity::Mathematics::uint2x2 v);

  /// @brief Method int2x2, addr 0x65d7784, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x2 int2x2(bool v);

  /// @brief Method int2x2, addr 0x65d7848, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x2 int2x2(double_t v);

  /// @brief Method int2x2, addr 0x65d77cc, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x2 int2x2(float_t v);

  /// @brief Method int2x2, addr 0x65d7774, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x2 int2x2(int32_t v);

  /// @brief Method int2x2, addr 0x65d77b8, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x2 int2x2(uint32_t v);

  /// @brief Method int2x3, addr 0x65d7994, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x3 int2x3(::Unity::Mathematics::int2 c0, ::Unity::Mathematics::int2 c1, ::Unity::Mathematics::int2 c2);

  /// @brief Method int2x3, addr 0x65d79a0, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x3 int2x3(int32_t m00, int32_t m01, int32_t m02, int32_t m10, int32_t m11, int32_t m12);

  /// @brief Method int2x3, addr 0x65d79f0, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x3 int2x3(::Unity::Mathematics::bool2x3 v);

  /// @brief Method int2x3, addr 0x65d7b40, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x3 int2x3(::Unity::Mathematics::double2x3 v);

  /// @brief Method int2x3, addr 0x65d7a8c, size 0x8c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x3 int2x3(::Unity::Mathematics::float2x3 v);

  /// @brief Method int2x3, addr 0x65d7a50, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x3 int2x3(::Unity::Mathematics::uint2x3 v);

  /// @brief Method int2x3, addr 0x65d79d8, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x3 int2x3(bool v);

  /// @brief Method int2x3, addr 0x65d7b18, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x3 int2x3(double_t v);

  /// @brief Method int2x3, addr 0x65d7a64, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x3 int2x3(float_t v);

  /// @brief Method int2x3, addr 0x65d79c4, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x3 int2x3(int32_t v);

  /// @brief Method int2x3, addr 0x65d7a3c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x3 int2x3(uint32_t v);

  /// @brief Method int2x4, addr 0x65d7ce4, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x4 int2x4(::Unity::Mathematics::int2 c0, ::Unity::Mathematics::int2 c1, ::Unity::Mathematics::int2 c2, ::Unity::Mathematics::int2 c3);

  /// @brief Method int2x4, addr 0x65d7cf0, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x4 int2x4(int32_t m00, int32_t m01, int32_t m02, int32_t m03, int32_t m10, int32_t m11, int32_t m12, int32_t m13);

  /// @brief Method int2x4, addr 0x65d7d48, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x4 int2x4(::Unity::Mathematics::bool2x4 v);

  /// @brief Method int2x4, addr 0x65d7ecc, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x4 int2x4(::Unity::Mathematics::double2x4 v);

  /// @brief Method int2x4, addr 0x65d7e04, size 0xa0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x4 int2x4(::Unity::Mathematics::float2x4 v);

  /// @brief Method int2x4, addr 0x65d7dd0, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x4 int2x4(::Unity::Mathematics::uint2x4 v);

  /// @brief Method int2x4, addr 0x65d7d30, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x4 int2x4(bool v);

  /// @brief Method int2x4, addr 0x65d7ea4, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x4 int2x4(double_t v);

  /// @brief Method int2x4, addr 0x65d7ddc, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x4 int2x4(float_t v);

  /// @brief Method int2x4, addr 0x65d7d1c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x4 int2x4(int32_t v);

  /// @brief Method int2x4, addr 0x65d7dbc, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x4 int2x4(uint32_t v);

  /// @brief Method int3, addr 0x65d812c, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 int3(::Unity::Mathematics::bool3 v);

  /// @brief Method int3, addr 0x65d81d8, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 int3(::Unity::Mathematics::double3 v);

  /// @brief Method int3, addr 0x65d8178, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 int3(::Unity::Mathematics::float3 v);

  /// @brief Method int3, addr 0x65d8150, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 int3(::Unity::Mathematics::uint3 v);

  /// @brief Method int3, addr 0x65d8110, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 int3(bool v);

  /// @brief Method int3, addr 0x65d81b8, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 int3(double_t v);

  /// @brief Method int3, addr 0x65d8158, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 int3(float_t v);

  /// @brief Method int3, addr 0x65d8104, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 int3(int32_t v);

  /// @brief Method int3, addr 0x65d8144, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 int3(uint32_t v);

  /// @brief Method int3, addr 0x65d80d0, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 int3(int32_t x, int32_t y, int32_t z);

  /// @brief Method int3, addr 0x65d80e0, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 int3(int32_t x, ::Unity::Mathematics::int2 yz);

  /// @brief Method int3, addr 0x65d80f4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 int3(::Unity::Mathematics::int2 xy, int32_t z);

  /// @brief Method int3, addr 0x65d80fc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 int3(::Unity::Mathematics::int3 xyz);

  /// @brief Method int3x2, addr 0x65d856c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 int3x2(::Unity::Mathematics::int3 c0, ::Unity::Mathematics::int3 c1);

  /// @brief Method int3x2, addr 0x65d8580, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 int3x2(int32_t m00, int32_t m01, int32_t m10, int32_t m11, int32_t m20, int32_t m21);

  /// @brief Method int3x2, addr 0x65d85cc, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 int3x2(::Unity::Mathematics::bool3x2 v);

  /// @brief Method int3x2, addr 0x65d8724, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 int3x2(::Unity::Mathematics::double3x2 v);

  /// @brief Method int3x2, addr 0x65d866c, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 int3x2(::Unity::Mathematics::float3x2 v);

  /// @brief Method int3x2, addr 0x65d8618, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 int3x2(::Unity::Mathematics::uint3x2 v);

  /// @brief Method int3x2, addr 0x65d85ac, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 int3x2(bool v);

  /// @brief Method int3x2, addr 0x65d86f4, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 int3x2(double_t v);

  /// @brief Method int3x2, addr 0x65d863c, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 int3x2(float_t v);

  /// @brief Method int3x2, addr 0x65d8590, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 int3x2(int32_t v);

  /// @brief Method int3x2, addr 0x65d85fc, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 int3x2(uint32_t v);

  /// @brief Method int3x3, addr 0x65d88d4, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x3 int3x3(::Unity::Mathematics::int3 c0, ::Unity::Mathematics::int3 c1, ::Unity::Mathematics::int3 c2);

  /// @brief Method int3x3, addr 0x65d88f0, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x3 int3x3(int32_t m00, int32_t m01, int32_t m02, int32_t m10, int32_t m11, int32_t m12, int32_t m20, int32_t m21, int32_t m22);

  /// @brief Method int3x3, addr 0x65d8958, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x3 int3x3(::Unity::Mathematics::bool3x3 v);

  /// @brief Method int3x3, addr 0x65d8b38, size 0xc4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x3 int3x3(::Unity::Mathematics::double3x3 v);

  /// @brief Method int3x3, addr 0x65d8a3c, size 0xc4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x3 int3x3(::Unity::Mathematics::float3x3 v);

  /// @brief Method int3x3, addr 0x65d89d0, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x3 int3x3(::Unity::Mathematics::uint3x3 v);

  /// @brief Method int3x3, addr 0x65d8930, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x3 int3x3(bool v);

  /// @brief Method int3x3, addr 0x65d8b00, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x3 int3x3(double_t v);

  /// @brief Method int3x3, addr 0x65d8a04, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x3 int3x3(float_t v);

  /// @brief Method int3x3, addr 0x65d890c, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x3 int3x3(int32_t v);

  /// @brief Method int3x3, addr 0x65d89ac, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x3 int3x3(uint32_t v);

  /// @brief Method int3x4, addr 0x65d8dd8, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 int3x4(::Unity::Mathematics::int3 c0, ::Unity::Mathematics::int3 c1, ::Unity::Mathematics::int3 c2, ::Unity::Mathematics::int3 c3);

  /// @brief Method int3x4, addr 0x65d8dfc, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 int3x4(int32_t m00, int32_t m01, int32_t m02, int32_t m03, int32_t m10, int32_t m11, int32_t m12, int32_t m13, int32_t m20, int32_t m21, int32_t m22,
                                                    int32_t m23);

  /// @brief Method int3x4, addr 0x65d8e8c, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 int3x4(::Unity::Mathematics::bool3x4 v);

  /// @brief Method int3x4, addr 0x65d90ec, size 0xfc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 int3x4(::Unity::Mathematics::double3x4 v);

  /// @brief Method int3x4, addr 0x65d8fb0, size 0xfc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 int3x4(::Unity::Mathematics::float3x4 v);

  /// @brief Method int3x4, addr 0x65d8f2c, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 int3x4(::Unity::Mathematics::uint3x4 v);

  /// @brief Method int3x4, addr 0x65d8e5c, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 int3x4(bool v);

  /// @brief Method int3x4, addr 0x65d90ac, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 int3x4(double_t v);

  /// @brief Method int3x4, addr 0x65d8f70, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 int3x4(float_t v);

  /// @brief Method int3x4, addr 0x65d8e30, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 int3x4(int32_t v);

  /// @brief Method int3x4, addr 0x65d8f00, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 int3x4(uint32_t v);

  /// @brief Method int4, addr 0x65d9478, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 int4(::Unity::Mathematics::bool4 v);

  /// @brief Method int4, addr 0x65d954c, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 int4(::Unity::Mathematics::double4 v);

  /// @brief Method int4, addr 0x65d94d0, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 int4(::Unity::Mathematics::float4 v);

  /// @brief Method int4, addr 0x65d94a8, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 int4(::Unity::Mathematics::uint4 v);

  /// @brief Method int4, addr 0x65d9460, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 int4(bool v);

  /// @brief Method int4, addr 0x65d9528, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 int4(double_t v);

  /// @brief Method int4, addr 0x65d94ac, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 int4(float_t v);

  /// @brief Method int4, addr 0x65d9450, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 int4(int32_t v);

  /// @brief Method int4, addr 0x65d9498, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 int4(uint32_t v);

  /// @brief Method int4, addr 0x65d93e4, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 int4(int32_t x, int32_t y, int32_t z, int32_t w);

  /// @brief Method int4, addr 0x65d93fc, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 int4(int32_t x, int32_t y, ::Unity::Mathematics::int2 zw);

  /// @brief Method int4, addr 0x65d940c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 int4(int32_t x, ::Unity::Mathematics::int2 yz, int32_t w);

  /// @brief Method int4, addr 0x65d9420, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 int4(int32_t x, ::Unity::Mathematics::int3 yzw);

  /// @brief Method int4, addr 0x65d9434, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 int4(::Unity::Mathematics::int2 xy, int32_t z, int32_t w);

  /// @brief Method int4, addr 0x65d9440, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 int4(::Unity::Mathematics::int2 xy, ::Unity::Mathematics::int2 zw);

  /// @brief Method int4, addr 0x65d9444, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 int4(::Unity::Mathematics::int3 xyz, int32_t w);

  /// @brief Method int4, addr 0x65d944c, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 int4(::Unity::Mathematics::int4 xyzw);

  /// @brief Method int4x2, addr 0x65d9928, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 int4x2(::Unity::Mathematics::int4 c0, ::Unity::Mathematics::int4 c1);

  /// @brief Method int4x2, addr 0x65d9934, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 int4x2(int32_t m00, int32_t m01, int32_t m10, int32_t m11, int32_t m20, int32_t m21, int32_t m30, int32_t m31);

  /// @brief Method int4x2, addr 0x65d9974, size 0x5c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 int4x2(::Unity::Mathematics::bool4x2 v);

  /// @brief Method int4x2, addr 0x65d9ae0, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 int4x2(::Unity::Mathematics::double4x2 v);

  /// @brief Method int4x2, addr 0x65d9a18, size 0xa0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 int4x2(::Unity::Mathematics::float4x2 v);

  /// @brief Method int4x2, addr 0x65d99e4, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 int4x2(::Unity::Mathematics::uint4x2 v);

  /// @brief Method int4x2, addr 0x65d995c, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 int4x2(bool v);

  /// @brief Method int4x2, addr 0x65d9ab8, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 int4x2(double_t v);

  /// @brief Method int4x2, addr 0x65d99f0, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 int4x2(float_t v);

  /// @brief Method int4x2, addr 0x65d9948, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 int4x2(int32_t v);

  /// @brief Method int4x2, addr 0x65d99d0, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 int4x2(uint32_t v);

  /// @brief Method int4x3, addr 0x65d9cf8, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 int4x3(::Unity::Mathematics::int4 c0, ::Unity::Mathematics::int4 c1, ::Unity::Mathematics::int4 c2);

  /// @brief Method int4x3, addr 0x65d9d08, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 int4x3(int32_t m00, int32_t m01, int32_t m02, int32_t m10, int32_t m11, int32_t m12, int32_t m20, int32_t m21, int32_t m22, int32_t m30, int32_t m31,
                                                    int32_t m32);

  /// @brief Method int4x3, addr 0x65d9d70, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 int4x3(::Unity::Mathematics::bool4x3 v);

  /// @brief Method int4x3, addr 0x65d9f54, size 0x104, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 int4x3(::Unity::Mathematics::double4x3 v);

  /// @brief Method int4x3, addr 0x65d9e40, size 0xe8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 int4x3(::Unity::Mathematics::float4x3 v);

  /// @brief Method int4x3, addr 0x65d9e00, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 int4x3(::Unity::Mathematics::uint4x3 v);

  /// @brief Method int4x3, addr 0x65d9d54, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 int4x3(bool v);

  /// @brief Method int4x3, addr 0x65d9f28, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 int4x3(double_t v);

  /// @brief Method int4x3, addr 0x65d9e14, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 int4x3(float_t v);

  /// @brief Method int4x3, addr 0x65d9d3c, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 int4x3(int32_t v);

  /// @brief Method int4x3, addr 0x65d9de8, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 int4x3(uint32_t v);

  /// @brief Method int4x4, addr 0x65da23c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 int4x4(::Unity::Mathematics::int4 c0, ::Unity::Mathematics::int4 c1, ::Unity::Mathematics::int4 c2, ::Unity::Mathematics::int4 c3);

  /// @brief Method int4x4, addr 0x65da250, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 int4x4(int32_t m00, int32_t m01, int32_t m02, int32_t m03, int32_t m10, int32_t m11, int32_t m12, int32_t m13, int32_t m20, int32_t m21, int32_t m22,
                                                    int32_t m23, int32_t m30, int32_t m31, int32_t m32, int32_t m33);

  /// @brief Method int4x4, addr 0x65da2e0, size 0x94, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 int4x4(::Unity::Mathematics::bool4x4 v);

  /// @brief Method int4x4, addr 0x65da52c, size 0x15c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 int4x4(::Unity::Mathematics::double4x4 v);

  /// @brief Method int4x4, addr 0x65da3d4, size 0x128, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 int4x4(::Unity::Mathematics::float4x4 v);

  /// @brief Method int4x4, addr 0x65da390, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 int4x4(::Unity::Mathematics::uint4x4 v);

  /// @brief Method int4x4, addr 0x65da2c0, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 int4x4(bool v);

  /// @brief Method int4x4, addr 0x65da4fc, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 int4x4(double_t v);

  /// @brief Method int4x4, addr 0x65da3a4, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 int4x4(float_t v);

  /// @brief Method int4x4, addr 0x65da2a4, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 int4x4(int32_t v);

  /// @brief Method int4x4, addr 0x65da374, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 int4x4(uint32_t v);

  /// @brief Method inverse, addr 0x65cccac, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::AffineTransform inverse(::Unity::Mathematics::AffineTransform a);

  /// @brief Method inverse, addr 0x65f754c, size 0xe0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::RigidTransform inverse(::Unity::Mathematics::RigidTransform t);

  /// @brief Method inverse, addr 0x65cfb38, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 inverse(::Unity::Mathematics::double2x2 m);

  /// @brief Method inverse, addr 0x65d0dac, size 0xd4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 inverse(::Unity::Mathematics::double3x3 m);

  /// @brief Method inverse, addr 0x65d2aa8, size 0x354, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x4 inverse(::Unity::Mathematics::double4x4 m);

  /// @brief Method inverse, addr 0x65d381c, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 inverse(::Unity::Mathematics::float2x2 m);

  /// @brief Method inverse, addr 0x65d489c, size 0xd0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 inverse(::Unity::Mathematics::float3x3 m);

  /// @brief Method inverse, addr 0x65d6148, size 0x33c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 inverse(::Unity::Mathematics::float4x4 m);

  /// @brief Method inverse, addr 0x65f5d9c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion inverse(::Unity::Mathematics::quaternion q);

  /// @brief Method isfinite, addr 0x65dac30, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 isfinite(::Unity::Mathematics::double2 x);

  /// @brief Method isfinite, addr 0x65dab68, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 isfinite(::Unity::Mathematics::float2 x);

  /// @brief Method isfinite, addr 0x65dac58, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 isfinite(::Unity::Mathematics::double3 x);

  /// @brief Method isfinite, addr 0x65dab90, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 isfinite(::Unity::Mathematics::float3 x);

  /// @brief Method isfinite, addr 0x65dac94, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 isfinite(::Unity::Mathematics::double4 x);

  /// @brief Method isfinite, addr 0x65dabcc, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 isfinite(::Unity::Mathematics::float4 x);

  /// @brief Method isfinite, addr 0x65dac18, size 0x18, virtual false, abstract: false, final false
  static inline bool isfinite(double_t x);

  /// @brief Method isfinite, addr 0x65dab50, size 0x18, virtual false, abstract: false, final false
  static inline bool isfinite(float_t x);

  /// @brief Method isinf, addr 0x65dadc0, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 isinf(::Unity::Mathematics::double2 x);

  /// @brief Method isinf, addr 0x65dacf8, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 isinf(::Unity::Mathematics::float2 x);

  /// @brief Method isinf, addr 0x65dade8, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 isinf(::Unity::Mathematics::double3 x);

  /// @brief Method isinf, addr 0x65dad20, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 isinf(::Unity::Mathematics::float3 x);

  /// @brief Method isinf, addr 0x65dae24, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 isinf(::Unity::Mathematics::double4 x);

  /// @brief Method isinf, addr 0x65dad5c, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 isinf(::Unity::Mathematics::float4 x);

  /// @brief Method isinf, addr 0x65dada8, size 0x18, virtual false, abstract: false, final false
  static inline bool isinf(double_t x);

  /// @brief Method isinf, addr 0x65dace0, size 0x18, virtual false, abstract: false, final false
  static inline bool isinf(float_t x);

  /// @brief Method isnan, addr 0x65daf60, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 isnan(::Unity::Mathematics::double2 x);

  /// @brief Method isnan, addr 0x65dae88, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 isnan(::Unity::Mathematics::float2 x);

  /// @brief Method isnan, addr 0x65daf8c, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 isnan(::Unity::Mathematics::double3 x);

  /// @brief Method isnan, addr 0x65daeb4, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 isnan(::Unity::Mathematics::float3 x);

  /// @brief Method isnan, addr 0x65dafcc, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 isnan(::Unity::Mathematics::double4 x);

  /// @brief Method isnan, addr 0x65daef4, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 isnan(::Unity::Mathematics::float4 x);

  /// @brief Method isnan, addr 0x65daf48, size 0x18, virtual false, abstract: false, final false
  static inline bool isnan(double_t x);

  /// @brief Method isnan, addr 0x65dae70, size 0x18, virtual false, abstract: false, final false
  static inline bool isnan(float_t x);

  /// @brief Method ispow2, addr 0x65db034, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 ispow2(::Unity::Mathematics::int2 x);

  /// @brief Method ispow2, addr 0x65db124, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 ispow2(::Unity::Mathematics::uint2 x);

  /// @brief Method ispow2, addr 0x65db064, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 ispow2(::Unity::Mathematics::int3 x);

  /// @brief Method ispow2, addr 0x65db150, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 ispow2(::Unity::Mathematics::uint3 x);

  /// @brief Method ispow2, addr 0x65db0ac, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 ispow2(::Unity::Mathematics::int4 x);

  /// @brief Method ispow2, addr 0x65db190, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 ispow2(::Unity::Mathematics::uint4 x);

  /// @brief Method ispow2, addr 0x65db020, size 0x14, virtual false, abstract: false, final false
  static inline bool ispow2(int32_t x);

  /// @brief Method ispow2, addr 0x65db110, size 0x14, virtual false, abstract: false, final false
  static inline bool ispow2(uint32_t x);

  /// @brief Method left, addr 0x65ee3b8, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 left();

  /// @brief Method length, addr 0x65e8560, size 0x70, virtual false, abstract: false, final false
  static inline double_t length(::Unity::Mathematics::double2 x);

  /// @brief Method length, addr 0x65e85d0, size 0x84, virtual false, abstract: false, final false
  static inline double_t length(::Unity::Mathematics::double3 x);

  /// @brief Method length, addr 0x65e8654, size 0x90, virtual false, abstract: false, final false
  static inline double_t length(::Unity::Mathematics::double4 x);

  /// @brief Method length, addr 0x65e8558, size 0x8, virtual false, abstract: false, final false
  static inline double_t length(double_t x);

  /// @brief Method length, addr 0x65f5df4, size 0x90, virtual false, abstract: false, final false
  static inline float_t length(::Unity::Mathematics::quaternion q);

  /// @brief Method length, addr 0x65e83d4, size 0x70, virtual false, abstract: false, final false
  static inline float_t length(::Unity::Mathematics::float2 x);

  /// @brief Method length, addr 0x65e8444, size 0x84, virtual false, abstract: false, final false
  static inline float_t length(::Unity::Mathematics::float3 x);

  /// @brief Method length, addr 0x65e84c8, size 0x90, virtual false, abstract: false, final false
  static inline float_t length(::Unity::Mathematics::float4 x);

  /// @brief Method length, addr 0x65e83cc, size 0x8, virtual false, abstract: false, final false
  static inline float_t length(float_t x);

  /// @brief Method lengthsq, addr 0x65e873c, size 0x10, virtual false, abstract: false, final false
  static inline double_t lengthsq(::Unity::Mathematics::double2 x);

  /// @brief Method lengthsq, addr 0x65e874c, size 0x18, virtual false, abstract: false, final false
  static inline double_t lengthsq(::Unity::Mathematics::double3 x);

  /// @brief Method lengthsq, addr 0x65e8764, size 0x20, virtual false, abstract: false, final false
  static inline double_t lengthsq(::Unity::Mathematics::double4 x);

  /// @brief Method lengthsq, addr 0x65e8734, size 0x8, virtual false, abstract: false, final false
  static inline double_t lengthsq(double_t x);

  /// @brief Method lengthsq, addr 0x65f5e84, size 0x20, virtual false, abstract: false, final false
  static inline float_t lengthsq(::Unity::Mathematics::quaternion q);

  /// @brief Method lengthsq, addr 0x65e86ec, size 0x10, virtual false, abstract: false, final false
  static inline float_t lengthsq(::Unity::Mathematics::float2 x);

  /// @brief Method lengthsq, addr 0x65e86fc, size 0x18, virtual false, abstract: false, final false
  static inline float_t lengthsq(::Unity::Mathematics::float3 x);

  /// @brief Method lengthsq, addr 0x65e8714, size 0x20, virtual false, abstract: false, final false
  static inline float_t lengthsq(::Unity::Mathematics::float4 x);

  /// @brief Method lengthsq, addr 0x65e86e4, size 0x8, virtual false, abstract: false, final false
  static inline float_t lengthsq(float_t x);

  /// @brief Method lerp, addr 0x65db9b0, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 lerp(::Unity::Mathematics::double2 start, ::Unity::Mathematics::double2 end, ::Unity::Mathematics::double2 t);

  /// @brief Method lerp, addr 0x65db934, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 lerp(::Unity::Mathematics::double2 start, ::Unity::Mathematics::double2 end, double_t t);

  /// @brief Method lerp, addr 0x65db9cc, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 lerp(::Unity::Mathematics::double3 start, ::Unity::Mathematics::double3 end, ::Unity::Mathematics::double3 t);

  /// @brief Method lerp, addr 0x65db950, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 lerp(::Unity::Mathematics::double3 start, ::Unity::Mathematics::double3 end, double_t t);

  /// @brief Method lerp, addr 0x65db9fc, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 lerp(::Unity::Mathematics::double4 start, ::Unity::Mathematics::double4 end, ::Unity::Mathematics::double4 t);

  /// @brief Method lerp, addr 0x65db978, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 lerp(::Unity::Mathematics::double4 start, ::Unity::Mathematics::double4 end, double_t t);

  /// @brief Method lerp, addr 0x65db89c, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 lerp(::Unity::Mathematics::float2 start, ::Unity::Mathematics::float2 end, ::Unity::Mathematics::float2 t);

  /// @brief Method lerp, addr 0x65db820, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 lerp(::Unity::Mathematics::float2 start, ::Unity::Mathematics::float2 end, float_t t);

  /// @brief Method lerp, addr 0x65db8b8, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 lerp(::Unity::Mathematics::float3 start, ::Unity::Mathematics::float3 end, ::Unity::Mathematics::float3 t);

  /// @brief Method lerp, addr 0x65db83c, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 lerp(::Unity::Mathematics::float3 start, ::Unity::Mathematics::float3 end, float_t t);

  /// @brief Method lerp, addr 0x65db8e8, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 lerp(::Unity::Mathematics::float4 start, ::Unity::Mathematics::float4 end, ::Unity::Mathematics::float4 t);

  /// @brief Method lerp, addr 0x65db864, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 lerp(::Unity::Mathematics::float4 start, ::Unity::Mathematics::float4 end, float_t t);

  /// @brief Method lerp, addr 0x65db924, size 0x10, virtual false, abstract: false, final false
  static inline double_t lerp(double_t start, double_t end, double_t t);

  /// @brief Method lerp, addr 0x65db810, size 0x10, virtual false, abstract: false, final false
  static inline float_t lerp(float_t start, float_t end, float_t t);

  /// @brief Method log, addr 0x65e59b4, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 log(::Unity::Mathematics::double2 x);

  /// @brief Method log, addr 0x65e5a64, size 0x100, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 log(::Unity::Mathematics::double3 x);

  /// @brief Method log, addr 0x65e5b64, size 0x148, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 log(::Unity::Mathematics::double4 x);

  /// @brief Method log, addr 0x65e5640, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 log(::Unity::Mathematics::float2 x);

  /// @brief Method log, addr 0x65e56f8, size 0x108, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 log(::Unity::Mathematics::float3 x);

  /// @brief Method log, addr 0x65e5800, size 0x154, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 log(::Unity::Mathematics::float4 x);

  /// @brief Method log, addr 0x65f6530, size 0x1cc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion log(::Unity::Mathematics::quaternion q);

  /// @brief Method log, addr 0x65e5954, size 0x60, virtual false, abstract: false, final false
  static inline double_t log(double_t x);

  /// @brief Method log, addr 0x65e55d8, size 0x68, virtual false, abstract: false, final false
  static inline float_t log(float_t x);

  /// @brief Method log10, addr 0x65e67fc, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 log10(::Unity::Mathematics::double2 x);

  /// @brief Method log10, addr 0x65e68ac, size 0x100, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 log10(::Unity::Mathematics::double3 x);

  /// @brief Method log10, addr 0x65e69ac, size 0x148, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 log10(::Unity::Mathematics::double4 x);

  /// @brief Method log10, addr 0x65e6488, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 log10(::Unity::Mathematics::float2 x);

  /// @brief Method log10, addr 0x65e6540, size 0x108, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 log10(::Unity::Mathematics::float3 x);

  /// @brief Method log10, addr 0x65e6648, size 0x154, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 log10(::Unity::Mathematics::float4 x);

  /// @brief Method log10, addr 0x65e679c, size 0x60, virtual false, abstract: false, final false
  static inline double_t log10(double_t x);

  /// @brief Method log10, addr 0x65e6420, size 0x68, virtual false, abstract: false, final false
  static inline float_t log10(float_t x);

  /// @brief Method log2, addr 0x65e60e0, size 0xc0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 log2(::Unity::Mathematics::double2 x);

  /// @brief Method log2, addr 0x65e61a0, size 0x118, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 log2(::Unity::Mathematics::double3 x);

  /// @brief Method log2, addr 0x65e62b8, size 0x168, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 log2(::Unity::Mathematics::double4 x);

  /// @brief Method log2, addr 0x65e5d1c, size 0xc8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 log2(::Unity::Mathematics::float2 x);

  /// @brief Method log2, addr 0x65e5de4, size 0x120, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 log2(::Unity::Mathematics::float3 x);

  /// @brief Method log2, addr 0x65e5f04, size 0x174, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 log2(::Unity::Mathematics::float4 x);

  /// @brief Method log2, addr 0x65e6078, size 0x68, virtual false, abstract: false, final false
  static inline double_t log2(double_t x);

  /// @brief Method log2, addr 0x65e5cac, size 0x70, virtual false, abstract: false, final false
  static inline float_t log2(float_t x);

  /// @brief Method lzcnt, addr 0x65eb1e4, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 lzcnt(::Unity::Mathematics::int2 x);

  /// @brief Method lzcnt, addr 0x65eb434, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 lzcnt(::Unity::Mathematics::uint2 x);

  /// @brief Method lzcnt, addr 0x65eb25c, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 lzcnt(::Unity::Mathematics::int3 x);

  /// @brief Method lzcnt, addr 0x65eb4ac, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 lzcnt(::Unity::Mathematics::uint3 x);

  /// @brief Method lzcnt, addr 0x65eb30c, size 0xec, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 lzcnt(::Unity::Mathematics::int4 x);

  /// @brief Method lzcnt, addr 0x65eb55c, size 0xec, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 lzcnt(::Unity::Mathematics::uint4 x);

  /// @brief Method lzcnt, addr 0x65eb1a8, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t lzcnt(int32_t x);

  /// @brief Method lzcnt, addr 0x65eb648, size 0x4c, virtual false, abstract: false, final false
  static inline int32_t lzcnt(int64_t x);

  /// @brief Method lzcnt, addr 0x65eb3f8, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t lzcnt(uint32_t x);

  /// @brief Method lzcnt, addr 0x65eb694, size 0x4c, virtual false, abstract: false, final false
  static inline int32_t lzcnt(uint64_t x);

  /// @brief Method mad, addr 0x65dbf80, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 mad(::Unity::Mathematics::double2 mulA, ::Unity::Mathematics::double2 mulB, ::Unity::Mathematics::double2 addC);

  /// @brief Method mad, addr 0x65dbf94, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 mad(::Unity::Mathematics::double3 mulA, ::Unity::Mathematics::double3 mulB, ::Unity::Mathematics::double3 addC);

  /// @brief Method mad, addr 0x65dbfb8, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 mad(::Unity::Mathematics::double4 mulA, ::Unity::Mathematics::double4 mulB, ::Unity::Mathematics::double4 addC);

  /// @brief Method mad, addr 0x65dbf10, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 mad(::Unity::Mathematics::float2 mulA, ::Unity::Mathematics::float2 mulB, ::Unity::Mathematics::float2 addC);

  /// @brief Method mad, addr 0x65dbf24, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 mad(::Unity::Mathematics::float3 mulA, ::Unity::Mathematics::float3 mulB, ::Unity::Mathematics::float3 addC);

  /// @brief Method mad, addr 0x65dbf48, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 mad(::Unity::Mathematics::float4 mulA, ::Unity::Mathematics::float4 mulB, ::Unity::Mathematics::float4 addC);

  /// @brief Method mad, addr 0x65dbe0c, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 mad(::Unity::Mathematics::int2 mulA, ::Unity::Mathematics::int2 mulB, ::Unity::Mathematics::int2 addC);

  /// @brief Method mad, addr 0x65dbe28, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 mad(::Unity::Mathematics::int3 mulA, ::Unity::Mathematics::int3 mulB, ::Unity::Mathematics::int3 addC);

  /// @brief Method mad, addr 0x65dbe48, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 mad(::Unity::Mathematics::int4 mulA, ::Unity::Mathematics::int4 mulB, ::Unity::Mathematics::int4 addC);

  /// @brief Method mad, addr 0x65dbe84, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 mad(::Unity::Mathematics::uint2 mulA, ::Unity::Mathematics::uint2 mulB, ::Unity::Mathematics::uint2 addC);

  /// @brief Method mad, addr 0x65dbea0, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 mad(::Unity::Mathematics::uint3 mulA, ::Unity::Mathematics::uint3 mulB, ::Unity::Mathematics::uint3 addC);

  /// @brief Method mad, addr 0x65dbec0, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 mad(::Unity::Mathematics::uint4 mulA, ::Unity::Mathematics::uint4 mulB, ::Unity::Mathematics::uint4 addC);

  /// @brief Method mad, addr 0x65dbf74, size 0xc, virtual false, abstract: false, final false
  static inline double_t mad(double_t mulA, double_t mulB, double_t addC);

  /// @brief Method mad, addr 0x65dbf04, size 0xc, virtual false, abstract: false, final false
  static inline float_t mad(float_t mulA, float_t mulB, float_t addC);

  /// @brief Method mad, addr 0x65dbe04, size 0x8, virtual false, abstract: false, final false
  static inline int32_t mad(int32_t mulA, int32_t mulB, int32_t addC);

  /// @brief Method mad, addr 0x65dbef4, size 0x8, virtual false, abstract: false, final false
  static inline int64_t mad(int64_t mulA, int64_t mulB, int64_t addC);

  /// @brief Method mad, addr 0x65dbe7c, size 0x8, virtual false, abstract: false, final false
  static inline uint32_t mad(uint32_t mulA, uint32_t mulB, uint32_t addC);

  /// @brief Method mad, addr 0x65dbefc, size 0x8, virtual false, abstract: false, final false
  static inline uint64_t mad(uint64_t mulA, uint64_t mulB, uint64_t addC);

  /// @brief Method max, addr 0x65db744, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 max(::Unity::Mathematics::double2 x, ::Unity::Mathematics::double2 y);

  /// @brief Method max, addr 0x65db774, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 max(::Unity::Mathematics::double3 x, ::Unity::Mathematics::double3 y);

  /// @brief Method max, addr 0x65db7b8, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 max(::Unity::Mathematics::double4 x, ::Unity::Mathematics::double4 y);

  /// @brief Method max, addr 0x65db65c, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 max(::Unity::Mathematics::float2 x, ::Unity::Mathematics::float2 y);

  /// @brief Method max, addr 0x65db68c, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 max(::Unity::Mathematics::float3 x, ::Unity::Mathematics::float3 y);

  /// @brief Method max, addr 0x65db6d0, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 max(::Unity::Mathematics::float4 x, ::Unity::Mathematics::float4 y);

  /// @brief Method max, addr 0x65db514, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 max(::Unity::Mathematics::int2 x, ::Unity::Mathematics::int2 y);

  /// @brief Method max, addr 0x65db534, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 max(::Unity::Mathematics::int3 x, ::Unity::Mathematics::int3 y);

  /// @brief Method max, addr 0x65db55c, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 max(::Unity::Mathematics::int4 x, ::Unity::Mathematics::int4 y);

  /// @brief Method max, addr 0x65db5a4, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 max(::Unity::Mathematics::uint2 x, ::Unity::Mathematics::uint2 y);

  /// @brief Method max, addr 0x65db5c4, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 max(::Unity::Mathematics::uint3 x, ::Unity::Mathematics::uint3 y);

  /// @brief Method max, addr 0x65db5ec, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 max(::Unity::Mathematics::uint4 x, ::Unity::Mathematics::uint4 y);

  /// @brief Method max, addr 0x65db728, size 0x1c, virtual false, abstract: false, final false
  static inline double_t max(double_t x, double_t y);

  /// @brief Method max, addr 0x65db640, size 0x1c, virtual false, abstract: false, final false
  static inline float_t max(float_t x, float_t y);

  /// @brief Method max, addr 0x65db508, size 0xc, virtual false, abstract: false, final false
  static inline int32_t max(int32_t x, int32_t y);

  /// @brief Method max, addr 0x65db628, size 0xc, virtual false, abstract: false, final false
  static inline int64_t max(int64_t x, int64_t y);

  /// @brief Method max, addr 0x65db598, size 0xc, virtual false, abstract: false, final false
  static inline uint32_t max(uint32_t x, uint32_t y);

  /// @brief Method max, addr 0x65db634, size 0xc, virtual false, abstract: false, final false
  static inline uint64_t max(uint64_t x, uint64_t y);

  /// @brief Method min, addr 0x65db43c, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 min(::Unity::Mathematics::double2 x, ::Unity::Mathematics::double2 y);

  /// @brief Method min, addr 0x65db46c, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 min(::Unity::Mathematics::double3 x, ::Unity::Mathematics::double3 y);

  /// @brief Method min, addr 0x65db4b0, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 min(::Unity::Mathematics::double4 x, ::Unity::Mathematics::double4 y);

  /// @brief Method min, addr 0x65db354, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 min(::Unity::Mathematics::float2 x, ::Unity::Mathematics::float2 y);

  /// @brief Method min, addr 0x65db384, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 min(::Unity::Mathematics::float3 x, ::Unity::Mathematics::float3 y);

  /// @brief Method min, addr 0x65db3c8, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 min(::Unity::Mathematics::float4 x, ::Unity::Mathematics::float4 y);

  /// @brief Method min, addr 0x65db20c, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 min(::Unity::Mathematics::int2 x, ::Unity::Mathematics::int2 y);

  /// @brief Method min, addr 0x65db22c, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 min(::Unity::Mathematics::int3 x, ::Unity::Mathematics::int3 y);

  /// @brief Method min, addr 0x65db254, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 min(::Unity::Mathematics::int4 x, ::Unity::Mathematics::int4 y);

  /// @brief Method min, addr 0x65db29c, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 min(::Unity::Mathematics::uint2 x, ::Unity::Mathematics::uint2 y);

  /// @brief Method min, addr 0x65db2bc, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 min(::Unity::Mathematics::uint3 x, ::Unity::Mathematics::uint3 y);

  /// @brief Method min, addr 0x65db2e4, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 min(::Unity::Mathematics::uint4 x, ::Unity::Mathematics::uint4 y);

  /// @brief Method min, addr 0x65db420, size 0x1c, virtual false, abstract: false, final false
  static inline double_t min(double_t x, double_t y);

  /// @brief Method min, addr 0x65db338, size 0x1c, virtual false, abstract: false, final false
  static inline float_t min(float_t x, float_t y);

  /// @brief Method min, addr 0x65db200, size 0xc, virtual false, abstract: false, final false
  static inline int32_t min(int32_t x, int32_t y);

  /// @brief Method min, addr 0x65db320, size 0xc, virtual false, abstract: false, final false
  static inline int64_t min(int64_t x, int64_t y);

  /// @brief Method min, addr 0x65db290, size 0xc, virtual false, abstract: false, final false
  static inline uint32_t min(uint32_t x, uint32_t y);

  /// @brief Method min, addr 0x65db32c, size 0xc, virtual false, abstract: false, final false
  static inline uint64_t min(uint64_t x, uint64_t y);

  /// @brief Method modf, addr 0x65e6fec, size 0xd4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 modf(::Unity::Mathematics::double2 x, ::by_ref<::Unity::Mathematics::double2> i);

  /// @brief Method modf, addr 0x65e70c0, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 modf(::Unity::Mathematics::double3 x, ::by_ref<::Unity::Mathematics::double3> i);

  /// @brief Method modf, addr 0x65e7114, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 modf(::Unity::Mathematics::double4 x, ::by_ref<::Unity::Mathematics::double4> i);

  /// @brief Method modf, addr 0x65e6de4, size 0xdc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 modf(::Unity::Mathematics::float2 x, ::by_ref<::Unity::Mathematics::float2> i);

  /// @brief Method modf, addr 0x65e6ec0, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 modf(::Unity::Mathematics::float3 x, ::by_ref<::Unity::Mathematics::float3> i);

  /// @brief Method modf, addr 0x65e6f14, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 modf(::Unity::Mathematics::float4 x, ::by_ref<::Unity::Mathematics::float4> i);

  /// @brief Method modf, addr 0x65e6f74, size 0x78, virtual false, abstract: false, final false
  static inline double_t modf(double_t x, ::by_ref<double_t> i);

  /// @brief Method modf, addr 0x65e6d6c, size 0x78, virtual false, abstract: false, final false
  static inline float_t modf(float_t x, ::by_ref<float_t> i);

  /// @brief Method movehl, addr 0x65ef734, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 movehl(::Unity::Mathematics::double4 a, ::Unity::Mathematics::double4 b);

  /// @brief Method movehl, addr 0x65ef728, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 movehl(::Unity::Mathematics::float4 a, ::Unity::Mathematics::float4 b);

  /// @brief Method movelh, addr 0x65ef71c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 movelh(::Unity::Mathematics::double4 a, ::Unity::Mathematics::double4 b);

  /// @brief Method movelh, addr 0x65ef710, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 movelh(::Unity::Mathematics::float4 a, ::Unity::Mathematics::float4 b);

  /// @brief Method mul, addr 0x65cc7b8, size 0x184, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::AffineTransform mul(::Unity::Mathematics::AffineTransform a, ::Unity::Mathematics::AffineTransform b);

  /// @brief Method mul, addr 0x65cca98, size 0x114, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::AffineTransform mul(::Unity::Mathematics::AffineTransform a, ::Unity::Mathematics::float3x3 b);

  /// @brief Method mul, addr 0x65cc93c, size 0x15c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::AffineTransform mul(::Unity::Mathematics::float3x3 a, ::Unity::Mathematics::AffineTransform b);

  /// @brief Method mul, addr 0x65f762c, size 0x128, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::RigidTransform mul(::Unity::Mathematics::RigidTransform a, ::Unity::Mathematics::RigidTransform b);

  /// @brief Method mul, addr 0x65f12f4, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 mul(::Unity::Mathematics::double2 a, ::Unity::Mathematics::double2x2 b);

  /// @brief Method mul, addr 0x65f1618, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 mul(::Unity::Mathematics::double2x2 a, ::Unity::Mathematics::double2 b);

  /// @brief Method mul, addr 0x65f1750, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 mul(::Unity::Mathematics::double2x3 a, ::Unity::Mathematics::double3 b);

  /// @brief Method mul, addr 0x65f18c8, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 mul(::Unity::Mathematics::double2x4 a, ::Unity::Mathematics::double4 b);

  /// @brief Method mul, addr 0x65f13a0, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 mul(::Unity::Mathematics::double3 a, ::Unity::Mathematics::double3x2 b);

  /// @brief Method mul, addr 0x65f14c8, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 mul(::Unity::Mathematics::double4 a, ::Unity::Mathematics::double4x2 b);

  /// @brief Method mul, addr 0x65f1634, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 mul(::Unity::Mathematics::double2x2 a, ::Unity::Mathematics::double2x2 b);

  /// @brief Method mul, addr 0x65f1774, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 mul(::Unity::Mathematics::double2x3 a, ::Unity::Mathematics::double3x2 b);

  /// @brief Method mul, addr 0x65f18f4, size 0x94, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 mul(::Unity::Mathematics::double2x4 a, ::Unity::Mathematics::double4x2 b);

  /// @brief Method mul, addr 0x65f1668, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 mul(::Unity::Mathematics::double2x2 a, ::Unity::Mathematics::double2x3 b);

  /// @brief Method mul, addr 0x65f17e4, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 mul(::Unity::Mathematics::double2x3 a, ::Unity::Mathematics::double3x3 b);

  /// @brief Method mul, addr 0x65f1988, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 mul(::Unity::Mathematics::double2x4 a, ::Unity::Mathematics::double4x3 b);

  /// @brief Method mul, addr 0x65f16cc, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 mul(::Unity::Mathematics::double2x2 a, ::Unity::Mathematics::double2x4 b);

  /// @brief Method mul, addr 0x65f1848, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 mul(::Unity::Mathematics::double2x3 a, ::Unity::Mathematics::double3x4 b);

  /// @brief Method mul, addr 0x65f1a08, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 mul(::Unity::Mathematics::double2x4 a, ::Unity::Mathematics::double4x4 b);

  /// @brief Method mul, addr 0x65f1310, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 mul(::Unity::Mathematics::double2 a, ::Unity::Mathematics::double2x3 b);

  /// @brief Method mul, addr 0x65f13dc, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 mul(::Unity::Mathematics::double3 a, ::Unity::Mathematics::double3x3 b);

  /// @brief Method mul, addr 0x65f1aac, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 mul(::Unity::Mathematics::double3x2 a, ::Unity::Mathematics::double2 b);

  /// @brief Method mul, addr 0x65f1c94, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 mul(::Unity::Mathematics::double3x3 a, ::Unity::Mathematics::double3 b);

  /// @brief Method mul, addr 0x65f1f24, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 mul(::Unity::Mathematics::double3x4 a, ::Unity::Mathematics::double4 b);

  /// @brief Method mul, addr 0x65f1514, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 mul(::Unity::Mathematics::double4 a, ::Unity::Mathematics::double4x3 b);

  /// @brief Method mul, addr 0x65f1ae0, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x2 mul(::Unity::Mathematics::double3x2 a, ::Unity::Mathematics::double2x2 b);

  /// @brief Method mul, addr 0x65f1ce8, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x2 mul(::Unity::Mathematics::double3x3 a, ::Unity::Mathematics::double3x2 b);

  /// @brief Method mul, addr 0x65f1f94, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x2 mul(::Unity::Mathematics::double3x4 a, ::Unity::Mathematics::double4x2 b);

  /// @brief Method mul, addr 0x65f1b34, size 0x98, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 mul(::Unity::Mathematics::double3x2 a, ::Unity::Mathematics::double2x3 b);

  /// @brief Method mul, addr 0x65f1d70, size 0xc0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 mul(::Unity::Mathematics::double3x3 a, ::Unity::Mathematics::double3x3 b);

  /// @brief Method mul, addr 0x65f2048, size 0xfc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 mul(::Unity::Mathematics::double3x4 a, ::Unity::Mathematics::double4x3 b);

  /// @brief Method mul, addr 0x65f1bcc, size 0xc8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 mul(::Unity::Mathematics::double3x2 a, ::Unity::Mathematics::double2x4 b);

  /// @brief Method mul, addr 0x65f1e30, size 0xf4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 mul(::Unity::Mathematics::double3x3 a, ::Unity::Mathematics::double3x4 b);

  /// @brief Method mul, addr 0x65f2144, size 0x144, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 mul(::Unity::Mathematics::double3x4 a, ::Unity::Mathematics::double4x4 b);

  /// @brief Method mul, addr 0x65f1344, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 mul(::Unity::Mathematics::double2 a, ::Unity::Mathematics::double2x4 b);

  /// @brief Method mul, addr 0x65f1434, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 mul(::Unity::Mathematics::double3 a, ::Unity::Mathematics::double3x4 b);

  /// @brief Method mul, addr 0x65f1584, size 0x94, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 mul(::Unity::Mathematics::double4 a, ::Unity::Mathematics::double4x4 b);

  /// @brief Method mul, addr 0x65f2288, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 mul(::Unity::Mathematics::double4x2 a, ::Unity::Mathematics::double2 b);

  /// @brief Method mul, addr 0x65f2420, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 mul(::Unity::Mathematics::double4x3 a, ::Unity::Mathematics::double3 b);

  /// @brief Method mul, addr 0x65f26a0, size 0x98, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 mul(::Unity::Mathematics::double4x4 a, ::Unity::Mathematics::double4 b);

  /// @brief Method mul, addr 0x65f22cc, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 mul(::Unity::Mathematics::double4x2 a, ::Unity::Mathematics::double2x2 b);

  /// @brief Method mul, addr 0x65f2490, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 mul(::Unity::Mathematics::double4x3 a, ::Unity::Mathematics::double3x2 b);

  /// @brief Method mul, addr 0x65f2738, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 mul(::Unity::Mathematics::double4x4 a, ::Unity::Mathematics::double4x2 b);

  /// @brief Method mul, addr 0x65f2314, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 mul(::Unity::Mathematics::double4x2 a, ::Unity::Mathematics::double2x3 b);

  /// @brief Method mul, addr 0x65f250c, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 mul(::Unity::Mathematics::double4x3 a, ::Unity::Mathematics::double3x3 b);

  /// @brief Method mul, addr 0x65f27dc, size 0xec, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 mul(::Unity::Mathematics::double4x4 a, ::Unity::Mathematics::double4x3 b);

  /// @brief Method mul, addr 0x65f238c, size 0x94, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x4 mul(::Unity::Mathematics::double4x2 a, ::Unity::Mathematics::double2x4 b);

  /// @brief Method mul, addr 0x65f25c0, size 0xe0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x4 mul(::Unity::Mathematics::double4x3 a, ::Unity::Mathematics::double3x4 b);

  /// @brief Method mul, addr 0x65f28c8, size 0x12c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x4 mul(::Unity::Mathematics::double4x4 a, ::Unity::Mathematics::double4x4 b);

  /// @brief Method mul, addr 0x65efd1c, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 mul(::Unity::Mathematics::float2 a, ::Unity::Mathematics::float2x2 b);

  /// @brief Method mul, addr 0x65f0040, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 mul(::Unity::Mathematics::float2x2 a, ::Unity::Mathematics::float2 b);

  /// @brief Method mul, addr 0x65f0158, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 mul(::Unity::Mathematics::float2x3 a, ::Unity::Mathematics::float3 b);

  /// @brief Method mul, addr 0x65f02f0, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 mul(::Unity::Mathematics::float2x4 a, ::Unity::Mathematics::float4 b);

  /// @brief Method mul, addr 0x65efdc8, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 mul(::Unity::Mathematics::float3 a, ::Unity::Mathematics::float3x2 b);

  /// @brief Method mul, addr 0x65efef0, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 mul(::Unity::Mathematics::float4 a, ::Unity::Mathematics::float4x2 b);

  /// @brief Method mul, addr 0x65f005c, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 mul(::Unity::Mathematics::float2x2 a, ::Unity::Mathematics::float2x2 b);

  /// @brief Method mul, addr 0x65f017c, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 mul(::Unity::Mathematics::float2x3 a, ::Unity::Mathematics::float3x2 b);

  /// @brief Method mul, addr 0x65f031c, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 mul(::Unity::Mathematics::float2x4 a, ::Unity::Mathematics::float4x2 b);

  /// @brief Method mul, addr 0x65f0090, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 mul(::Unity::Mathematics::float2x2 a, ::Unity::Mathematics::float2x3 b);

  /// @brief Method mul, addr 0x65f01dc, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 mul(::Unity::Mathematics::float2x3 a, ::Unity::Mathematics::float3x3 b);

  /// @brief Method mul, addr 0x65f0398, size 0xac, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 mul(::Unity::Mathematics::float2x4 a, ::Unity::Mathematics::float4x3 b);

  /// @brief Method mul, addr 0x65f00f0, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x4 mul(::Unity::Mathematics::float2x2 a, ::Unity::Mathematics::float2x4 b);

  /// @brief Method mul, addr 0x65f0258, size 0x98, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x4 mul(::Unity::Mathematics::float2x3 a, ::Unity::Mathematics::float3x4 b);

  /// @brief Method mul, addr 0x65f0444, size 0xc8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x4 mul(::Unity::Mathematics::float2x4 a, ::Unity::Mathematics::float4x4 b);

  /// @brief Method mul, addr 0x65efd38, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 mul(::Unity::Mathematics::float2 a, ::Unity::Mathematics::float2x3 b);

  /// @brief Method mul, addr 0x65efe04, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 mul(::Unity::Mathematics::float3 a, ::Unity::Mathematics::float3x3 b);

  /// @brief Method mul, addr 0x65f050c, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 mul(::Unity::Mathematics::float3x2 a, ::Unity::Mathematics::float2 b);

  /// @brief Method mul, addr 0x65f0730, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 mul(::Unity::Mathematics::float3x3 a, ::Unity::Mathematics::float3 b);

  /// @brief Method mul, addr 0x65f0a78, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 mul(::Unity::Mathematics::float3x4 a, ::Unity::Mathematics::float4 b);

  /// @brief Method mul, addr 0x65eff3c, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 mul(::Unity::Mathematics::float4 a, ::Unity::Mathematics::float4x3 b);

  /// @brief Method mul, addr 0x65f6770, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 mul(::Unity::Mathematics::quaternion q, ::Unity::Mathematics::float3 v);

  /// @brief Method mul, addr 0x65f053c, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x2 mul(::Unity::Mathematics::float3x2 a, ::Unity::Mathematics::float2x2 b);

  /// @brief Method mul, addr 0x65f0778, size 0xa0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x2 mul(::Unity::Mathematics::float3x3 a, ::Unity::Mathematics::float3x2 b);

  /// @brief Method mul, addr 0x65f0ad8, size 0xdc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x2 mul(::Unity::Mathematics::float3x4 a, ::Unity::Mathematics::float4x2 b);

  /// @brief Method mul, addr 0x65f05a8, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 mul(::Unity::Mathematics::float3x2 a, ::Unity::Mathematics::float2x3 b);

  /// @brief Method mul, addr 0x65f0818, size 0x104, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 mul(::Unity::Mathematics::float3x3 a, ::Unity::Mathematics::float3x3 b);

  /// @brief Method mul, addr 0x65f0bb4, size 0x168, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 mul(::Unity::Mathematics::float3x4 a, ::Unity::Mathematics::float4x3 b);

  /// @brief Method mul, addr 0x65f0658, size 0xd8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 mul(::Unity::Mathematics::float3x2 a, ::Unity::Mathematics::float2x4 b);

  /// @brief Method mul, addr 0x65f091c, size 0x15c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 mul(::Unity::Mathematics::float3x3 a, ::Unity::Mathematics::float3x4 b);

  /// @brief Method mul, addr 0x65f0d1c, size 0x1e4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 mul(::Unity::Mathematics::float3x4 a, ::Unity::Mathematics::float4x4 b);

  /// @brief Method mul, addr 0x65ccbac, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 mul(::Unity::Mathematics::AffineTransform a, ::Unity::Mathematics::float4 pos);

  /// @brief Method mul, addr 0x65f7754, size 0xa8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 mul(::Unity::Mathematics::RigidTransform a, ::Unity::Mathematics::float4 pos);

  /// @brief Method mul, addr 0x65efd6c, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 mul(::Unity::Mathematics::float2 a, ::Unity::Mathematics::float2x4 b);

  /// @brief Method mul, addr 0x65efe5c, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 mul(::Unity::Mathematics::float3 a, ::Unity::Mathematics::float3x4 b);

  /// @brief Method mul, addr 0x65effac, size 0x94, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 mul(::Unity::Mathematics::float4 a, ::Unity::Mathematics::float4x4 b);

  /// @brief Method mul, addr 0x65f0f00, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 mul(::Unity::Mathematics::float4x2 a, ::Unity::Mathematics::float2 b);

  /// @brief Method mul, addr 0x65f0fd4, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 mul(::Unity::Mathematics::float4x3 a, ::Unity::Mathematics::float3 b);

  /// @brief Method mul, addr 0x65f112c, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 mul(::Unity::Mathematics::float4x4 a, ::Unity::Mathematics::float4 b);

  /// @brief Method mul, addr 0x65f0f20, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x2 mul(::Unity::Mathematics::float4x2 a, ::Unity::Mathematics::float2x2 b);

  /// @brief Method mul, addr 0x65f1000, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x2 mul(::Unity::Mathematics::float4x3 a, ::Unity::Mathematics::float3x2 b);

  /// @brief Method mul, addr 0x65f1160, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x2 mul(::Unity::Mathematics::float4x4 a, ::Unity::Mathematics::float4x2 b);

  /// @brief Method mul, addr 0x65f0f44, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x3 mul(::Unity::Mathematics::float4x2 a, ::Unity::Mathematics::float2x3 b);

  /// @brief Method mul, addr 0x65f1048, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x3 mul(::Unity::Mathematics::float4x3 a, ::Unity::Mathematics::float3x3 b);

  /// @brief Method mul, addr 0x65f11b8, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x3 mul(::Unity::Mathematics::float4x4 a, ::Unity::Mathematics::float4x3 b);

  /// @brief Method mul, addr 0x65f0f84, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 mul(::Unity::Mathematics::float4x2 a, ::Unity::Mathematics::float2x4 b);

  /// @brief Method mul, addr 0x65f10ac, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 mul(::Unity::Mathematics::float4x3 a, ::Unity::Mathematics::float3x4 b);

  /// @brief Method mul, addr 0x65f1238, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 mul(::Unity::Mathematics::float4x4 a, ::Unity::Mathematics::float4x4 b);

  /// @brief Method mul, addr 0x65f2a10, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 mul(::Unity::Mathematics::int2 a, ::Unity::Mathematics::int2x2 b);

  /// @brief Method mul, addr 0x65f2cc0, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 mul(::Unity::Mathematics::int2x2 a, ::Unity::Mathematics::int2 b);

  /// @brief Method mul, addr 0x65f2df0, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 mul(::Unity::Mathematics::int2x3 a, ::Unity::Mathematics::int3 b);

  /// @brief Method mul, addr 0x65f2f9c, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 mul(::Unity::Mathematics::int2x4 a, ::Unity::Mathematics::int4 b);

  /// @brief Method mul, addr 0x65f2abc, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 mul(::Unity::Mathematics::int3 a, ::Unity::Mathematics::int3x2 b);

  /// @brief Method mul, addr 0x65f2bb4, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 mul(::Unity::Mathematics::int4 a, ::Unity::Mathematics::int4x2 b);

  /// @brief Method mul, addr 0x65f2ce4, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x2 mul(::Unity::Mathematics::int2x2 a, ::Unity::Mathematics::int2x2 b);

  /// @brief Method mul, addr 0x65f2e20, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x2 mul(::Unity::Mathematics::int2x3 a, ::Unity::Mathematics::int3x2 b);

  /// @brief Method mul, addr 0x65f2fe8, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x2 mul(::Unity::Mathematics::int2x4 a, ::Unity::Mathematics::int4x2 b);

  /// @brief Method mul, addr 0x65f2d20, size 0x5c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x3 mul(::Unity::Mathematics::int2x2 a, ::Unity::Mathematics::int2x3 b);

  /// @brief Method mul, addr 0x65f2e74, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x3 mul(::Unity::Mathematics::int2x3 a, ::Unity::Mathematics::int3x3 b);

  /// @brief Method mul, addr 0x65f3054, size 0xa0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x3 mul(::Unity::Mathematics::int2x4 a, ::Unity::Mathematics::int4x3 b);

  /// @brief Method mul, addr 0x65f2d7c, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x4 mul(::Unity::Mathematics::int2x2 a, ::Unity::Mathematics::int2x4 b);

  /// @brief Method mul, addr 0x65f2ef4, size 0xa8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x4 mul(::Unity::Mathematics::int2x3 a, ::Unity::Mathematics::int3x4 b);

  /// @brief Method mul, addr 0x65f30f4, size 0xcc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x4 mul(::Unity::Mathematics::int2x4 a, ::Unity::Mathematics::int4x4 b);

  /// @brief Method mul, addr 0x65f2a34, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 mul(::Unity::Mathematics::int2 a, ::Unity::Mathematics::int2x3 b);

  /// @brief Method mul, addr 0x65f2af0, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 mul(::Unity::Mathematics::int3 a, ::Unity::Mathematics::int3x3 b);

  /// @brief Method mul, addr 0x65f31c0, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 mul(::Unity::Mathematics::int3x2 a, ::Unity::Mathematics::int2 b);

  /// @brief Method mul, addr 0x65f3390, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 mul(::Unity::Mathematics::int3x3 a, ::Unity::Mathematics::int3 b);

  /// @brief Method mul, addr 0x65f361c, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 mul(::Unity::Mathematics::int3x4 a, ::Unity::Mathematics::int4 b);

  /// @brief Method mul, addr 0x65f2bf4, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 mul(::Unity::Mathematics::int4 a, ::Unity::Mathematics::int4x3 b);

  /// @brief Method mul, addr 0x65f31f0, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 mul(::Unity::Mathematics::int3x2 a, ::Unity::Mathematics::int2x2 b);

  /// @brief Method mul, addr 0x65f33d4, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 mul(::Unity::Mathematics::int3x3 a, ::Unity::Mathematics::int3x2 b);

  /// @brief Method mul, addr 0x65f3684, size 0xac, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 mul(::Unity::Mathematics::int3x4 a, ::Unity::Mathematics::int4x2 b);

  /// @brief Method mul, addr 0x65f3250, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x3 mul(::Unity::Mathematics::int3x2 a, ::Unity::Mathematics::int2x3 b);

  /// @brief Method mul, addr 0x65f3458, size 0xc4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x3 mul(::Unity::Mathematics::int3x3 a, ::Unity::Mathematics::int3x3 b);

  /// @brief Method mul, addr 0x65f3730, size 0xf8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x3 mul(::Unity::Mathematics::int3x4 a, ::Unity::Mathematics::int4x3 b);

  /// @brief Method mul, addr 0x65f32d8, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 mul(::Unity::Mathematics::int3x2 a, ::Unity::Mathematics::int2x4 b);

  /// @brief Method mul, addr 0x65f351c, size 0x100, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 mul(::Unity::Mathematics::int3x3 a, ::Unity::Mathematics::int3x4 b);

  /// @brief Method mul, addr 0x65f3828, size 0x14c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 mul(::Unity::Mathematics::int3x4 a, ::Unity::Mathematics::int4x4 b);

  /// @brief Method mul, addr 0x65f2a64, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 mul(::Unity::Mathematics::int2 a, ::Unity::Mathematics::int2x4 b);

  /// @brief Method mul, addr 0x65f2b34, size 0x5c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 mul(::Unity::Mathematics::int3 a, ::Unity::Mathematics::int3x4 b);

  /// @brief Method mul, addr 0x65f2c4c, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 mul(::Unity::Mathematics::int4 a, ::Unity::Mathematics::int4x4 b);

  /// @brief Method mul, addr 0x65f3974, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 mul(::Unity::Mathematics::int4x2 a, ::Unity::Mathematics::int2 b);

  /// @brief Method mul, addr 0x65f3bc8, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 mul(::Unity::Mathematics::int4x3 a, ::Unity::Mathematics::int3 b);

  /// @brief Method mul, addr 0x65f3f20, size 0x8c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 mul(::Unity::Mathematics::int4x4 a, ::Unity::Mathematics::int4 b);

  /// @brief Method mul, addr 0x65f39b8, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 mul(::Unity::Mathematics::int4x2 a, ::Unity::Mathematics::int2x2 b);

  /// @brief Method mul, addr 0x65f3c30, size 0xa8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 mul(::Unity::Mathematics::int4x3 a, ::Unity::Mathematics::int3x2 b);

  /// @brief Method mul, addr 0x65f3fac, size 0xe4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 mul(::Unity::Mathematics::int4x4 a, ::Unity::Mathematics::int4x2 b);

  /// @brief Method mul, addr 0x65f3a30, size 0xac, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 mul(::Unity::Mathematics::int4x2 a, ::Unity::Mathematics::int2x3 b);

  /// @brief Method mul, addr 0x65f3cd8, size 0xfc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 mul(::Unity::Mathematics::int4x3 a, ::Unity::Mathematics::int3x3 b);

  /// @brief Method mul, addr 0x65f4090, size 0x148, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 mul(::Unity::Mathematics::int4x4 a, ::Unity::Mathematics::int4x3 b);

  /// @brief Method mul, addr 0x65f3adc, size 0xec, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 mul(::Unity::Mathematics::int4x2 a, ::Unity::Mathematics::int2x4 b);

  /// @brief Method mul, addr 0x65f3dd4, size 0x14c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 mul(::Unity::Mathematics::int4x3 a, ::Unity::Mathematics::int3x4 b);

  /// @brief Method mul, addr 0x65f41d8, size 0x1a4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 mul(::Unity::Mathematics::int4x4 a, ::Unity::Mathematics::int4x4 b);

  /// @brief Method mul, addr 0x65f66fc, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion mul(::Unity::Mathematics::quaternion a, ::Unity::Mathematics::quaternion b);

  /// @brief Method mul, addr 0x65f4398, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 mul(::Unity::Mathematics::uint2 a, ::Unity::Mathematics::uint2x2 b);

  /// @brief Method mul, addr 0x65f4648, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 mul(::Unity::Mathematics::uint2x2 a, ::Unity::Mathematics::uint2 b);

  /// @brief Method mul, addr 0x65f4778, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 mul(::Unity::Mathematics::uint2x3 a, ::Unity::Mathematics::uint3 b);

  /// @brief Method mul, addr 0x65f4924, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 mul(::Unity::Mathematics::uint2x4 a, ::Unity::Mathematics::uint4 b);

  /// @brief Method mul, addr 0x65f4444, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 mul(::Unity::Mathematics::uint3 a, ::Unity::Mathematics::uint3x2 b);

  /// @brief Method mul, addr 0x65f453c, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 mul(::Unity::Mathematics::uint4 a, ::Unity::Mathematics::uint4x2 b);

  /// @brief Method mul, addr 0x65f466c, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 mul(::Unity::Mathematics::uint2x2 a, ::Unity::Mathematics::uint2x2 b);

  /// @brief Method mul, addr 0x65f47a8, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 mul(::Unity::Mathematics::uint2x3 a, ::Unity::Mathematics::uint3x2 b);

  /// @brief Method mul, addr 0x65f4970, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 mul(::Unity::Mathematics::uint2x4 a, ::Unity::Mathematics::uint4x2 b);

  /// @brief Method mul, addr 0x65f46a8, size 0x5c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x3 mul(::Unity::Mathematics::uint2x2 a, ::Unity::Mathematics::uint2x3 b);

  /// @brief Method mul, addr 0x65f47fc, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x3 mul(::Unity::Mathematics::uint2x3 a, ::Unity::Mathematics::uint3x3 b);

  /// @brief Method mul, addr 0x65f49dc, size 0xa0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x3 mul(::Unity::Mathematics::uint2x4 a, ::Unity::Mathematics::uint4x3 b);

  /// @brief Method mul, addr 0x65f4704, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x4 mul(::Unity::Mathematics::uint2x2 a, ::Unity::Mathematics::uint2x4 b);

  /// @brief Method mul, addr 0x65f487c, size 0xa8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x4 mul(::Unity::Mathematics::uint2x3 a, ::Unity::Mathematics::uint3x4 b);

  /// @brief Method mul, addr 0x65f4a7c, size 0xcc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x4 mul(::Unity::Mathematics::uint2x4 a, ::Unity::Mathematics::uint4x4 b);

  /// @brief Method mul, addr 0x65f43bc, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 mul(::Unity::Mathematics::uint2 a, ::Unity::Mathematics::uint2x3 b);

  /// @brief Method mul, addr 0x65f4478, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 mul(::Unity::Mathematics::uint3 a, ::Unity::Mathematics::uint3x3 b);

  /// @brief Method mul, addr 0x65f4b48, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 mul(::Unity::Mathematics::uint3x2 a, ::Unity::Mathematics::uint2 b);

  /// @brief Method mul, addr 0x65f4d18, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 mul(::Unity::Mathematics::uint3x3 a, ::Unity::Mathematics::uint3 b);

  /// @brief Method mul, addr 0x65f4fa4, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 mul(::Unity::Mathematics::uint3x4 a, ::Unity::Mathematics::uint4 b);

  /// @brief Method mul, addr 0x65f457c, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 mul(::Unity::Mathematics::uint4 a, ::Unity::Mathematics::uint4x3 b);

  /// @brief Method mul, addr 0x65f4b78, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 mul(::Unity::Mathematics::uint3x2 a, ::Unity::Mathematics::uint2x2 b);

  /// @brief Method mul, addr 0x65f4d5c, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 mul(::Unity::Mathematics::uint3x3 a, ::Unity::Mathematics::uint3x2 b);

  /// @brief Method mul, addr 0x65f500c, size 0xac, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 mul(::Unity::Mathematics::uint3x4 a, ::Unity::Mathematics::uint4x2 b);

  /// @brief Method mul, addr 0x65f4bd8, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x3 mul(::Unity::Mathematics::uint3x2 a, ::Unity::Mathematics::uint2x3 b);

  /// @brief Method mul, addr 0x65f4de0, size 0xc4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x3 mul(::Unity::Mathematics::uint3x3 a, ::Unity::Mathematics::uint3x3 b);

  /// @brief Method mul, addr 0x65f50b8, size 0xf8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x3 mul(::Unity::Mathematics::uint3x4 a, ::Unity::Mathematics::uint4x3 b);

  /// @brief Method mul, addr 0x65f4c60, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 mul(::Unity::Mathematics::uint3x2 a, ::Unity::Mathematics::uint2x4 b);

  /// @brief Method mul, addr 0x65f4ea4, size 0x100, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 mul(::Unity::Mathematics::uint3x3 a, ::Unity::Mathematics::uint3x4 b);

  /// @brief Method mul, addr 0x65f51b0, size 0x14c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 mul(::Unity::Mathematics::uint3x4 a, ::Unity::Mathematics::uint4x4 b);

  /// @brief Method mul, addr 0x65f43ec, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 mul(::Unity::Mathematics::uint2 a, ::Unity::Mathematics::uint2x4 b);

  /// @brief Method mul, addr 0x65f44bc, size 0x5c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 mul(::Unity::Mathematics::uint3 a, ::Unity::Mathematics::uint3x4 b);

  /// @brief Method mul, addr 0x65f45d4, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 mul(::Unity::Mathematics::uint4 a, ::Unity::Mathematics::uint4x4 b);

  /// @brief Method mul, addr 0x65f52fc, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 mul(::Unity::Mathematics::uint4x2 a, ::Unity::Mathematics::uint2 b);

  /// @brief Method mul, addr 0x65f5550, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 mul(::Unity::Mathematics::uint4x3 a, ::Unity::Mathematics::uint3 b);

  /// @brief Method mul, addr 0x65f58a8, size 0x8c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 mul(::Unity::Mathematics::uint4x4 a, ::Unity::Mathematics::uint4 b);

  /// @brief Method mul, addr 0x65f5340, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x2 mul(::Unity::Mathematics::uint4x2 a, ::Unity::Mathematics::uint2x2 b);

  /// @brief Method mul, addr 0x65f55b8, size 0xa8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x2 mul(::Unity::Mathematics::uint4x3 a, ::Unity::Mathematics::uint3x2 b);

  /// @brief Method mul, addr 0x65f5934, size 0xe4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x2 mul(::Unity::Mathematics::uint4x4 a, ::Unity::Mathematics::uint4x2 b);

  /// @brief Method mul, addr 0x65f53b8, size 0xac, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 mul(::Unity::Mathematics::uint4x2 a, ::Unity::Mathematics::uint2x3 b);

  /// @brief Method mul, addr 0x65f5660, size 0xfc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 mul(::Unity::Mathematics::uint4x3 a, ::Unity::Mathematics::uint3x3 b);

  /// @brief Method mul, addr 0x65f5a18, size 0x148, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 mul(::Unity::Mathematics::uint4x4 a, ::Unity::Mathematics::uint4x3 b);

  /// @brief Method mul, addr 0x65f5464, size 0xec, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x4 mul(::Unity::Mathematics::uint4x2 a, ::Unity::Mathematics::uint2x4 b);

  /// @brief Method mul, addr 0x65f575c, size 0x14c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x4 mul(::Unity::Mathematics::uint4x3 a, ::Unity::Mathematics::uint3x4 b);

  /// @brief Method mul, addr 0x65f5b60, size 0x1a4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x4 mul(::Unity::Mathematics::uint4x4 a, ::Unity::Mathematics::uint4x4 b);

  /// @brief Method mul, addr 0x65f12e4, size 0x10, virtual false, abstract: false, final false
  static inline double_t mul(::Unity::Mathematics::double2 a, ::Unity::Mathematics::double2 b);

  /// @brief Method mul, addr 0x65f1388, size 0x18, virtual false, abstract: false, final false
  static inline double_t mul(::Unity::Mathematics::double3 a, ::Unity::Mathematics::double3 b);

  /// @brief Method mul, addr 0x65f14a8, size 0x20, virtual false, abstract: false, final false
  static inline double_t mul(::Unity::Mathematics::double4 a, ::Unity::Mathematics::double4 b);

  /// @brief Method mul, addr 0x65f12dc, size 0x8, virtual false, abstract: false, final false
  static inline double_t mul(double_t a, double_t b);

  /// @brief Method mul, addr 0x65efd0c, size 0x10, virtual false, abstract: false, final false
  static inline float_t mul(::Unity::Mathematics::float2 a, ::Unity::Mathematics::float2 b);

  /// @brief Method mul, addr 0x65efdb0, size 0x18, virtual false, abstract: false, final false
  static inline float_t mul(::Unity::Mathematics::float3 a, ::Unity::Mathematics::float3 b);

  /// @brief Method mul, addr 0x65efed0, size 0x20, virtual false, abstract: false, final false
  static inline float_t mul(::Unity::Mathematics::float4 a, ::Unity::Mathematics::float4 b);

  /// @brief Method mul, addr 0x65efd04, size 0x8, virtual false, abstract: false, final false
  static inline float_t mul(float_t a, float_t b);

  /// @brief Method mul, addr 0x65f29fc, size 0x14, virtual false, abstract: false, final false
  static inline int32_t mul(::Unity::Mathematics::int2 a, ::Unity::Mathematics::int2 b);

  /// @brief Method mul, addr 0x65f2aa4, size 0x18, virtual false, abstract: false, final false
  static inline int32_t mul(::Unity::Mathematics::int3 a, ::Unity::Mathematics::int3 b);

  /// @brief Method mul, addr 0x65f2b90, size 0x24, virtual false, abstract: false, final false
  static inline int32_t mul(::Unity::Mathematics::int4 a, ::Unity::Mathematics::int4 b);

  /// @brief Method mul, addr 0x65f29f4, size 0x8, virtual false, abstract: false, final false
  static inline int32_t mul(int32_t a, int32_t b);

  /// @brief Method mul, addr 0x65f4384, size 0x14, virtual false, abstract: false, final false
  static inline uint32_t mul(::Unity::Mathematics::uint2 a, ::Unity::Mathematics::uint2 b);

  /// @brief Method mul, addr 0x65f442c, size 0x18, virtual false, abstract: false, final false
  static inline uint32_t mul(::Unity::Mathematics::uint3 a, ::Unity::Mathematics::uint3 b);

  /// @brief Method mul, addr 0x65f4518, size 0x24, virtual false, abstract: false, final false
  static inline uint32_t mul(::Unity::Mathematics::uint4 a, ::Unity::Mathematics::uint4 b);

  /// @brief Method mul, addr 0x65f437c, size 0x8, virtual false, abstract: false, final false
  static inline uint32_t mul(uint32_t a, uint32_t b);

  /// @brief Method mulScale, addr 0x65ef650, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 mulScale(::Unity::Mathematics::float3x3 m, ::Unity::Mathematics::float3 s);

  /// @brief Method nlerp, addr 0x65f6868, size 0x174, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion nlerp(::Unity::Mathematics::quaternion q1, ::Unity::Mathematics::quaternion q2, float_t t);

  /// @brief Method normalize, addr 0x65e7d74, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 normalize(::Unity::Mathematics::double2 x);

  /// @brief Method normalize, addr 0x65e7df4, size 0x98, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 normalize(::Unity::Mathematics::double3 x);

  /// @brief Method normalize, addr 0x65e7e8c, size 0xa8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 normalize(::Unity::Mathematics::double4 x);

  /// @brief Method normalize, addr 0x65e7bb4, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 normalize(::Unity::Mathematics::float2 x);

  /// @brief Method normalize, addr 0x65e7c34, size 0x98, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 normalize(::Unity::Mathematics::float3 x);

  /// @brief Method normalize, addr 0x65e7ccc, size 0xa8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 normalize(::Unity::Mathematics::float4 x);

  /// @brief Method normalize, addr 0x65f5ea4, size 0xa8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion normalize(::Unity::Mathematics::quaternion q);

  /// @brief Method normalizesafe, addr 0x65e8180, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 normalizesafe(::Unity::Mathematics::double2 x, ::Unity::Mathematics::double2 defaultvalue);

  /// @brief Method normalizesafe, addr 0x65e8224, size 0xc4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 normalizesafe(::Unity::Mathematics::double3 x, ::Unity::Mathematics::double3 defaultvalue);

  /// @brief Method normalizesafe, addr 0x65e82e8, size 0xe4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 normalizesafe(::Unity::Mathematics::double4 x, ::Unity::Mathematics::double4 defaultvalue);

  /// @brief Method normalizesafe, addr 0x65e7f34, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 normalizesafe(::Unity::Mathematics::float2 x, ::Unity::Mathematics::float2 defaultvalue);

  /// @brief Method normalizesafe, addr 0x65e7fd8, size 0xc4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 normalizesafe(::Unity::Mathematics::float3 x, ::Unity::Mathematics::float3 defaultvalue);

  /// @brief Method normalizesafe, addr 0x65e809c, size 0xe4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 normalizesafe(::Unity::Mathematics::float4 x, ::Unity::Mathematics::float4 defaultvalue);

  /// @brief Method normalizesafe, addr 0x65f5f4c, size 0x110, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion normalizesafe(::Unity::Mathematics::quaternion q);

  /// @brief Method normalizesafe, addr 0x65f605c, size 0xe4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion normalizesafe(::Unity::Mathematics::quaternion q, ::Unity::Mathematics::quaternion defaultvalue);

  /// @brief Method orthonormal_basis, addr 0x65eded8, size 0x5c, virtual false, abstract: false, final false
  static inline void orthonormal_basis(::Unity::Mathematics::double3 normal, ::by_ref<::Unity::Mathematics::double3> basis1, ::by_ref<::Unity::Mathematics::double3> basis2);

  /// @brief Method orthonormal_basis, addr 0x65ede7c, size 0x5c, virtual false, abstract: false, final false
  static inline void orthonormal_basis(::Unity::Mathematics::float3 normal, ::by_ref<::Unity::Mathematics::float3> basis1, ::by_ref<::Unity::Mathematics::float3> basis2);

  /// @brief Method orthonormalize, addr 0x65ef8c4, size 0x19c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 orthonormalize(::Unity::Mathematics::float3x3 i);

  /// @brief Method pow, addr 0x65e3cec, size 0xc8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 pow(::Unity::Mathematics::double2 x, ::Unity::Mathematics::double2 y);

  /// @brief Method pow, addr 0x65e3db4, size 0x120, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 pow(::Unity::Mathematics::double3 x, ::Unity::Mathematics::double3 y);

  /// @brief Method pow, addr 0x65e3ed4, size 0x178, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 pow(::Unity::Mathematics::double4 x, ::Unity::Mathematics::double4 y);

  /// @brief Method pow, addr 0x65e3904, size 0xd0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 pow(::Unity::Mathematics::float2 x, ::Unity::Mathematics::float2 y);

  /// @brief Method pow, addr 0x65e39d4, size 0x128, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 pow(::Unity::Mathematics::float3 x, ::Unity::Mathematics::float3 y);

  /// @brief Method pow, addr 0x65e3afc, size 0x188, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 pow(::Unity::Mathematics::float4 x, ::Unity::Mathematics::float4 y);

  /// @brief Method pow, addr 0x65e3c84, size 0x68, virtual false, abstract: false, final false
  static inline double_t pow(double_t x, double_t y);

  /// @brief Method pow, addr 0x65e3894, size 0x70, virtual false, abstract: false, final false
  static inline float_t pow(float_t x, float_t y);

  /// @brief Method project, addr 0x65ea218, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 project(::Unity::Mathematics::double2 a, ::Unity::Mathematics::double2 ontoB);

  /// @brief Method project, addr 0x65ea240, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 project(::Unity::Mathematics::double3 a, ::Unity::Mathematics::double3 ontoB);

  /// @brief Method project, addr 0x65ea27c, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 project(::Unity::Mathematics::double4 a, ::Unity::Mathematics::double4 ontoB);

  /// @brief Method project, addr 0x65e9fa4, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 project(::Unity::Mathematics::float2 a, ::Unity::Mathematics::float2 ontoB);

  /// @brief Method project, addr 0x65e9fcc, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 project(::Unity::Mathematics::float3 a, ::Unity::Mathematics::float3 ontoB);

  /// @brief Method project, addr 0x65ea008, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 project(::Unity::Mathematics::float4 a, ::Unity::Mathematics::float4 ontoB);

  /// @brief Method projectsafe, addr 0x65ea2dc, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 projectsafe(::Unity::Mathematics::double2 a, ::Unity::Mathematics::double2 ontoB, ::Unity::Mathematics::double2 defaultValue);

  /// @brief Method projectsafe, addr 0x65ea334, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 projectsafe(::Unity::Mathematics::double3 a, ::Unity::Mathematics::double3 ontoB, ::Unity::Mathematics::double3 defaultValue);

  /// @brief Method projectsafe, addr 0x65ea3c4, size 0xc8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 projectsafe(::Unity::Mathematics::double4 a, ::Unity::Mathematics::double4 ontoB, ::Unity::Mathematics::double4 defaultValue);

  /// @brief Method projectsafe, addr 0x65ea068, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 projectsafe(::Unity::Mathematics::float2 a, ::Unity::Mathematics::float2 ontoB, ::Unity::Mathematics::float2 defaultValue);

  /// @brief Method projectsafe, addr 0x65ea0c0, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 projectsafe(::Unity::Mathematics::float3 a, ::Unity::Mathematics::float3 ontoB, ::Unity::Mathematics::float3 defaultValue);

  /// @brief Method projectsafe, addr 0x65ea150, size 0xc8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 projectsafe(::Unity::Mathematics::float4 a, ::Unity::Mathematics::float4 ontoB, ::Unity::Mathematics::float4 defaultValue);

  /// @brief Method pseudoinverse, addr 0x65efa60, size 0x2a4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 pseudoinverse(::Unity::Mathematics::float3x3 m);

  /// @brief Method quaternion, addr 0x65f5d0c, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion quaternion(::Unity::Mathematics::float3x3 m);

  /// @brief Method quaternion, addr 0x65f5d4c, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion quaternion(::Unity::Mathematics::float4x4 m);

  /// @brief Method quaternion, addr 0x65f5d08, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion quaternion(::Unity::Mathematics::float4 value);

  /// @brief Method quaternion, addr 0x65f5d04, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion quaternion(float_t x, float_t y, float_t z, float_t w);

  /// @brief Method radians, addr 0x65ed070, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 radians(::Unity::Mathematics::double2 x);

  /// @brief Method radians, addr 0x65ed084, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 radians(::Unity::Mathematics::double3 x);

  /// @brief Method radians, addr 0x65ed09c, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 radians(::Unity::Mathematics::double4 x);

  /// @brief Method radians, addr 0x65ed018, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 radians(::Unity::Mathematics::float2 x);

  /// @brief Method radians, addr 0x65ed02c, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 radians(::Unity::Mathematics::float3 x);

  /// @brief Method radians, addr 0x65ed044, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 radians(::Unity::Mathematics::float4 x);

  /// @brief Method radians, addr 0x65ed060, size 0x10, virtual false, abstract: false, final false
  static inline double_t radians(double_t x);

  /// @brief Method radians, addr 0x65ed008, size 0x10, virtual false, abstract: false, final false
  static inline float_t radians(float_t x);

  /// @brief Method rcp, addr 0x65e359c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 rcp(::Unity::Mathematics::double2 x);

  /// @brief Method rcp, addr 0x65e35ac, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 rcp(::Unity::Mathematics::double3 x);

  /// @brief Method rcp, addr 0x65e35c0, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 rcp(::Unity::Mathematics::double4 x);

  /// @brief Method rcp, addr 0x65e3554, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 rcp(::Unity::Mathematics::float2 x);

  /// @brief Method rcp, addr 0x65e3564, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 rcp(::Unity::Mathematics::float3 x);

  /// @brief Method rcp, addr 0x65e3578, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 rcp(::Unity::Mathematics::float4 x);

  /// @brief Method rcp, addr 0x65e3590, size 0xc, virtual false, abstract: false, final false
  static inline double_t rcp(double_t x);

  /// @brief Method rcp, addr 0x65e3548, size 0xc, virtual false, abstract: false, final false
  static inline float_t rcp(float_t x);

  /// @brief Method read32_little_endian, addr 0x65ee03c, size 0x8, virtual false, abstract: false, final false
  static inline uint32_t read32_little_endian(void* pBuffer);

  /// @brief Method reflect, addr 0x65e9900, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 reflect(::Unity::Mathematics::double2 i, ::Unity::Mathematics::double2 n);

  /// @brief Method reflect, addr 0x65e9928, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 reflect(::Unity::Mathematics::double3 i, ::Unity::Mathematics::double3 n);

  /// @brief Method reflect, addr 0x65e9964, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 reflect(::Unity::Mathematics::double4 i, ::Unity::Mathematics::double4 n);

  /// @brief Method reflect, addr 0x65e984c, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 reflect(::Unity::Mathematics::float2 i, ::Unity::Mathematics::float2 n);

  /// @brief Method reflect, addr 0x65e9874, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 reflect(::Unity::Mathematics::float3 i, ::Unity::Mathematics::float3 n);

  /// @brief Method reflect, addr 0x65e98b0, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 reflect(::Unity::Mathematics::float4 i, ::Unity::Mathematics::float4 n);

  /// @brief Method refract, addr 0x65e9cac, size 0xd4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 refract(::Unity::Mathematics::double2 i, ::Unity::Mathematics::double2 n, double_t indexOfRefraction);

  /// @brief Method refract, addr 0x65e9d80, size 0xfc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 refract(::Unity::Mathematics::double3 i, ::Unity::Mathematics::double3 n, double_t indexOfRefraction);

  /// @brief Method refract, addr 0x65e9e7c, size 0x128, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 refract(::Unity::Mathematics::double4 i, ::Unity::Mathematics::double4 n, double_t indexOfRefraction);

  /// @brief Method refract, addr 0x65e99b4, size 0xd4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 refract(::Unity::Mathematics::float2 i, ::Unity::Mathematics::float2 n, float_t indexOfRefraction);

  /// @brief Method refract, addr 0x65e9a88, size 0xfc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 refract(::Unity::Mathematics::float3 i, ::Unity::Mathematics::float3 n, float_t indexOfRefraction);

  /// @brief Method refract, addr 0x65e9b84, size 0x128, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 refract(::Unity::Mathematics::float4 i, ::Unity::Mathematics::float4 n, float_t indexOfRefraction);

  /// @brief Method remap, addr 0x65dbce0, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 remap(::Unity::Mathematics::double2 srcStart, ::Unity::Mathematics::double2 srcEnd, ::Unity::Mathematics::double2 dstStart,
                                                    ::Unity::Mathematics::double2 dstEnd, ::Unity::Mathematics::double2 x);

  /// @brief Method remap, addr 0x65dbd1c, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 remap(::Unity::Mathematics::double3 srcStart, ::Unity::Mathematics::double3 srcEnd, ::Unity::Mathematics::double3 dstStart,
                                                    ::Unity::Mathematics::double3 dstEnd, ::Unity::Mathematics::double3 x);

  /// @brief Method remap, addr 0x65dbd80, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 remap(::Unity::Mathematics::double4 srcStart, ::Unity::Mathematics::double4 srcEnd, ::Unity::Mathematics::double4 dstStart,
                                                    ::Unity::Mathematics::double4 dstEnd, ::Unity::Mathematics::double4 x);

  /// @brief Method remap, addr 0x65dbb9c, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 remap(::Unity::Mathematics::float2 srcStart, ::Unity::Mathematics::float2 srcEnd, ::Unity::Mathematics::float2 dstStart,
                                                   ::Unity::Mathematics::float2 dstEnd, ::Unity::Mathematics::float2 x);

  /// @brief Method remap, addr 0x65dbbd8, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 remap(::Unity::Mathematics::float3 srcStart, ::Unity::Mathematics::float3 srcEnd, ::Unity::Mathematics::float3 dstStart,
                                                   ::Unity::Mathematics::float3 dstEnd, ::Unity::Mathematics::float3 x);

  /// @brief Method remap, addr 0x65dbc40, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 remap(::Unity::Mathematics::float4 srcStart, ::Unity::Mathematics::float4 srcEnd, ::Unity::Mathematics::float4 dstStart,
                                                   ::Unity::Mathematics::float4 dstEnd, ::Unity::Mathematics::float4 x);

  /// @brief Method remap, addr 0x65dbcc4, size 0x1c, virtual false, abstract: false, final false
  static inline double_t remap(double_t srcStart, double_t srcEnd, double_t dstStart, double_t dstEnd, double_t x);

  /// @brief Method remap, addr 0x65dbb80, size 0x1c, virtual false, abstract: false, final false
  static inline float_t remap(float_t srcStart, float_t srcEnd, float_t dstStart, float_t dstEnd, float_t x);

  /// @brief Method reversebits, addr 0x65ebc98, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 reversebits(::Unity::Mathematics::int2 x);

  /// @brief Method reversebits, addr 0x65ebd04, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 reversebits(::Unity::Mathematics::int3 x);

  /// @brief Method reversebits, addr 0x65ebd74, size 0xdc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 reversebits(::Unity::Mathematics::int4 x);

  /// @brief Method reversebits, addr 0x65ebe58, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 reversebits(::Unity::Mathematics::uint2 x);

  /// @brief Method reversebits, addr 0x65ebec4, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 reversebits(::Unity::Mathematics::uint3 x);

  /// @brief Method reversebits, addr 0x65ebf34, size 0xdc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 reversebits(::Unity::Mathematics::uint4 x);

  /// @brief Method reversebits, addr 0x65ebc90, size 0x8, virtual false, abstract: false, final false
  static inline int32_t reversebits(int32_t x);

  /// @brief Method reversebits, addr 0x65ec010, size 0x8, virtual false, abstract: false, final false
  static inline int64_t reversebits(int64_t x);

  /// @brief Method reversebits, addr 0x65ebe50, size 0x8, virtual false, abstract: false, final false
  static inline uint32_t reversebits(uint32_t x);

  /// @brief Method reversebits, addr 0x65ec018, size 0x8, virtual false, abstract: false, final false
  static inline uint64_t reversebits(uint64_t x);

  /// @brief Method right, addr 0x65ee3c8, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 right();

  /// @brief Method rol, addr 0x65ec02c, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 rol(::Unity::Mathematics::int2 x, int32_t n);

  /// @brief Method rol, addr 0x65ec04c, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 rol(::Unity::Mathematics::int3 x, int32_t n);

  /// @brief Method rol, addr 0x65ec070, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 rol(::Unity::Mathematics::int4 x, int32_t n);

  /// @brief Method rol, addr 0x65ec0b4, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 rol(::Unity::Mathematics::uint2 x, int32_t n);

  /// @brief Method rol, addr 0x65ec0d4, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 rol(::Unity::Mathematics::uint3 x, int32_t n);

  /// @brief Method rol, addr 0x65ec0f8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 rol(::Unity::Mathematics::uint4 x, int32_t n);

  /// @brief Method rol, addr 0x65ec020, size 0xc, virtual false, abstract: false, final false
  static inline int32_t rol(int32_t x, int32_t n);

  /// @brief Method rol, addr 0x65ec130, size 0xc, virtual false, abstract: false, final false
  static inline int64_t rol(int64_t x, int32_t n);

  /// @brief Method rol, addr 0x65ec0a8, size 0xc, virtual false, abstract: false, final false
  static inline uint32_t rol(uint32_t x, int32_t n);

  /// @brief Method rol, addr 0x65ec13c, size 0xc, virtual false, abstract: false, final false
  static inline uint64_t rol(uint64_t x, int32_t n);

  /// @brief Method ror, addr 0x65ec150, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 ror(::Unity::Mathematics::int2 x, int32_t n);

  /// @brief Method ror, addr 0x65ec170, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 ror(::Unity::Mathematics::int3 x, int32_t n);

  /// @brief Method ror, addr 0x65ec194, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 ror(::Unity::Mathematics::int4 x, int32_t n);

  /// @brief Method ror, addr 0x65ec1d4, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 ror(::Unity::Mathematics::uint2 x, int32_t n);

  /// @brief Method ror, addr 0x65ec1f4, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 ror(::Unity::Mathematics::uint3 x, int32_t n);

  /// @brief Method ror, addr 0x65ec218, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 ror(::Unity::Mathematics::uint4 x, int32_t n);

  /// @brief Method ror, addr 0x65ec148, size 0x8, virtual false, abstract: false, final false
  static inline int32_t ror(int32_t x, int32_t n);

  /// @brief Method ror, addr 0x65ec250, size 0x8, virtual false, abstract: false, final false
  static inline int64_t ror(int64_t x, int32_t n);

  /// @brief Method ror, addr 0x65ec1cc, size 0x8, virtual false, abstract: false, final false
  static inline uint32_t ror(uint32_t x, int32_t n);

  /// @brief Method ror, addr 0x65ec258, size 0x8, virtual false, abstract: false, final false
  static inline uint64_t ror(uint64_t x, int32_t n);

  /// @brief Method rotate, addr 0x65d29a0, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 rotate(::Unity::Mathematics::double4x4 a, ::Unity::Mathematics::double3 b);

  /// @brief Method rotate, addr 0x65ccc0c, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 rotate(::Unity::Mathematics::AffineTransform a, ::Unity::Mathematics::float3 dir);

  /// @brief Method rotate, addr 0x65f77fc, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 rotate(::Unity::Mathematics::RigidTransform a, ::Unity::Mathematics::float3 dir);

  /// @brief Method rotate, addr 0x65d6064, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 rotate(::Unity::Mathematics::float4x4 a, ::Unity::Mathematics::float3 b);

  /// @brief Method rotate, addr 0x65f67ec, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 rotate(::Unity::Mathematics::quaternion q, ::Unity::Mathematics::float3 v);

  /// @brief Method rotation, addr 0x65f6f08, size 0x25c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion rotation(::Unity::Mathematics::float3x3 m);

  /// @brief Method round, addr 0x65e2370, size 0x170, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 round(::Unity::Mathematics::double2 x);

  /// @brief Method round, addr 0x65e24e0, size 0x214, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 round(::Unity::Mathematics::double3 x);

  /// @brief Method round, addr 0x65e26f4, size 0x2c0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 round(::Unity::Mathematics::double4 x);

  /// @brief Method round, addr 0x65e1c28, size 0x17c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 round(::Unity::Mathematics::float2 x);

  /// @brief Method round, addr 0x65e1da4, size 0x22c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 round(::Unity::Mathematics::float3 x);

  /// @brief Method round, addr 0x65e1fd0, size 0x2d4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 round(::Unity::Mathematics::float4 x);

  /// @brief Method round, addr 0x65e22a4, size 0xcc, virtual false, abstract: false, final false
  static inline double_t round(double_t x);

  /// @brief Method round, addr 0x65e1b5c, size 0xcc, virtual false, abstract: false, final false
  static inline float_t round(float_t x);

  /// @brief Method rsqrt, addr 0x65e79f4, size 0xa8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 rsqrt(::Unity::Mathematics::double2 x);

  /// @brief Method rsqrt, addr 0x65e7a9c, size 0xf0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 rsqrt(::Unity::Mathematics::double3 x);

  /// @brief Method rsqrt, addr 0x65e7b8c, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 rsqrt(::Unity::Mathematics::double4 x);

  /// @brief Method rsqrt, addr 0x65e77cc, size 0xa8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 rsqrt(::Unity::Mathematics::float2 x);

  /// @brief Method rsqrt, addr 0x65e7874, size 0xf0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 rsqrt(::Unity::Mathematics::float3 x);

  /// @brief Method rsqrt, addr 0x65e7964, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 rsqrt(::Unity::Mathematics::float4 x);

  /// @brief Method rsqrt, addr 0x65e798c, size 0x68, virtual false, abstract: false, final false
  static inline double_t rsqrt(double_t x);

  /// @brief Method rsqrt, addr 0x65e7764, size 0x68, virtual false, abstract: false, final false
  static inline float_t rsqrt(float_t x);

  /// @brief Method saturate, addr 0x65dc66c, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 saturate(::Unity::Mathematics::double2 x);

  /// @brief Method saturate, addr 0x65dc6ac, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 saturate(::Unity::Mathematics::double3 x);

  /// @brief Method saturate, addr 0x65dc734, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 saturate(::Unity::Mathematics::double4 x);

  /// @brief Method saturate, addr 0x65dc534, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 saturate(::Unity::Mathematics::float2 x);

  /// @brief Method saturate, addr 0x65dc574, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 saturate(::Unity::Mathematics::float3 x);

  /// @brief Method saturate, addr 0x65dc5e4, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 saturate(::Unity::Mathematics::float4 x);

  /// @brief Method saturate, addr 0x65dc634, size 0x38, virtual false, abstract: false, final false
  static inline double_t saturate(double_t x);

  /// @brief Method saturate, addr 0x65dc4fc, size 0x38, virtual false, abstract: false, final false
  static inline float_t saturate(float_t x);

  /// @brief Method scaleMul, addr 0x65ef688, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 scaleMul(::Unity::Mathematics::float3 s, ::Unity::Mathematics::float3x3 m);

  /// @brief Method select, addr 0x65e96f8, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 select(::Unity::Mathematics::double2 falseValue, ::Unity::Mathematics::double2 trueValue, ::Unity::Mathematics::bool2 test);

  /// @brief Method select, addr 0x65e96bc, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 select(::Unity::Mathematics::double2 falseValue, ::Unity::Mathematics::double2 trueValue, bool test);

  /// @brief Method select, addr 0x65e970c, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 select(::Unity::Mathematics::double3 falseValue, ::Unity::Mathematics::double3 trueValue, ::Unity::Mathematics::bool3 test);

  /// @brief Method select, addr 0x65e96cc, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 select(::Unity::Mathematics::double3 falseValue, ::Unity::Mathematics::double3 trueValue, bool test);

  /// @brief Method select, addr 0x65e9728, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 select(::Unity::Mathematics::double4 falseValue, ::Unity::Mathematics::double4 trueValue, ::Unity::Mathematics::bool4 test);

  /// @brief Method select, addr 0x65e96e0, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 select(::Unity::Mathematics::double4 falseValue, ::Unity::Mathematics::double4 trueValue, bool test);

  /// @brief Method select, addr 0x65e965c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 select(::Unity::Mathematics::float2 falseValue, ::Unity::Mathematics::float2 trueValue, ::Unity::Mathematics::bool2 test);

  /// @brief Method select, addr 0x65e9620, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 select(::Unity::Mathematics::float2 falseValue, ::Unity::Mathematics::float2 trueValue, bool test);

  /// @brief Method select, addr 0x65e9670, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 select(::Unity::Mathematics::float3 falseValue, ::Unity::Mathematics::float3 trueValue, ::Unity::Mathematics::bool3 test);

  /// @brief Method select, addr 0x65e9630, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 select(::Unity::Mathematics::float3 falseValue, ::Unity::Mathematics::float3 trueValue, bool test);

  /// @brief Method select, addr 0x65e968c, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 select(::Unity::Mathematics::float4 falseValue, ::Unity::Mathematics::float4 trueValue, ::Unity::Mathematics::bool4 test);

  /// @brief Method select, addr 0x65e9644, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 select(::Unity::Mathematics::float4 falseValue, ::Unity::Mathematics::float4 trueValue, bool test);

  /// @brief Method select, addr 0x65e94f0, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 select(::Unity::Mathematics::int2 falseValue, ::Unity::Mathematics::int2 trueValue, ::Unity::Mathematics::bool2 test);

  /// @brief Method select, addr 0x65e94c0, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 select(::Unity::Mathematics::int2 falseValue, ::Unity::Mathematics::int2 trueValue, bool test);

  /// @brief Method select, addr 0x65e9508, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 select(::Unity::Mathematics::int3 falseValue, ::Unity::Mathematics::int3 trueValue, ::Unity::Mathematics::bool3 test);

  /// @brief Method select, addr 0x65e94cc, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 select(::Unity::Mathematics::int3 falseValue, ::Unity::Mathematics::int3 trueValue, bool test);

  /// @brief Method select, addr 0x65e952c, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 select(::Unity::Mathematics::int4 falseValue, ::Unity::Mathematics::int4 trueValue, ::Unity::Mathematics::bool4 test);

  /// @brief Method select, addr 0x65e94e0, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 select(::Unity::Mathematics::int4 falseValue, ::Unity::Mathematics::int4 trueValue, bool test);

  /// @brief Method select, addr 0x65e9594, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 select(::Unity::Mathematics::uint2 falseValue, ::Unity::Mathematics::uint2 trueValue, ::Unity::Mathematics::bool2 test);

  /// @brief Method select, addr 0x65e9564, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 select(::Unity::Mathematics::uint2 falseValue, ::Unity::Mathematics::uint2 trueValue, bool test);

  /// @brief Method select, addr 0x65e95ac, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 select(::Unity::Mathematics::uint3 falseValue, ::Unity::Mathematics::uint3 trueValue, ::Unity::Mathematics::bool3 test);

  /// @brief Method select, addr 0x65e9570, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 select(::Unity::Mathematics::uint3 falseValue, ::Unity::Mathematics::uint3 trueValue, bool test);

  /// @brief Method select, addr 0x65e95d0, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 select(::Unity::Mathematics::uint4 falseValue, ::Unity::Mathematics::uint4 trueValue, ::Unity::Mathematics::bool4 test);

  /// @brief Method select, addr 0x65e9584, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 select(::Unity::Mathematics::uint4 falseValue, ::Unity::Mathematics::uint4 trueValue, bool test);

  /// @brief Method select, addr 0x65e96b0, size 0xc, virtual false, abstract: false, final false
  static inline double_t select(double_t falseValue, double_t trueValue, bool test);

  /// @brief Method select, addr 0x65e9614, size 0xc, virtual false, abstract: false, final false
  static inline float_t select(float_t falseValue, float_t trueValue, bool test);

  /// @brief Method select, addr 0x65e94b4, size 0xc, virtual false, abstract: false, final false
  static inline int32_t select(int32_t falseValue, int32_t trueValue, bool test);

  /// @brief Method select, addr 0x65e95fc, size 0xc, virtual false, abstract: false, final false
  static inline int64_t select(int64_t falseValue, int64_t trueValue, bool test);

  /// @brief Method select, addr 0x65e9558, size 0xc, virtual false, abstract: false, final false
  static inline uint32_t select(uint32_t falseValue, uint32_t trueValue, bool test);

  /// @brief Method select, addr 0x65e9608, size 0xc, virtual false, abstract: false, final false
  static inline uint64_t select(uint64_t falseValue, uint64_t trueValue, bool test);

  /// @brief Method select_shuffle_component, addr 0x65cd2a0, size 0xdc, virtual false, abstract: false, final false
  static inline bool select_shuffle_component(::Unity::Mathematics::bool2 a, ::Unity::Mathematics::bool2 b, ::Unity::Mathematics::math_ShuffleComponent component);

  /// @brief Method select_shuffle_component, addr 0x65cdbcc, size 0xfc, virtual false, abstract: false, final false
  static inline bool select_shuffle_component(::Unity::Mathematics::bool3 a, ::Unity::Mathematics::bool3 b, ::Unity::Mathematics::math_ShuffleComponent component);

  /// @brief Method select_shuffle_component, addr 0x65cea08, size 0x12c, virtual false, abstract: false, final false
  static inline bool select_shuffle_component(::Unity::Mathematics::bool4 a, ::Unity::Mathematics::bool4 b, ::Unity::Mathematics::math_ShuffleComponent component);

  /// @brief Method select_shuffle_component, addr 0x65cf958, size 0xd8, virtual false, abstract: false, final false
  static inline double_t select_shuffle_component(::Unity::Mathematics::double2 a, ::Unity::Mathematics::double2 b, ::Unity::Mathematics::math_ShuffleComponent component);

  /// @brief Method select_shuffle_component, addr 0x65d07b4, size 0xf4, virtual false, abstract: false, final false
  static inline double_t select_shuffle_component(::Unity::Mathematics::double3 a, ::Unity::Mathematics::double3 b, ::Unity::Mathematics::math_ShuffleComponent component);

  /// @brief Method select_shuffle_component, addr 0x65d1c70, size 0x128, virtual false, abstract: false, final false
  static inline double_t select_shuffle_component(::Unity::Mathematics::double4 a, ::Unity::Mathematics::double4 b, ::Unity::Mathematics::math_ShuffleComponent component);

  /// @brief Method select_shuffle_component, addr 0x65d363c, size 0xd8, virtual false, abstract: false, final false
  static inline float_t select_shuffle_component(::Unity::Mathematics::float2 a, ::Unity::Mathematics::float2 b, ::Unity::Mathematics::math_ShuffleComponent component);

  /// @brief Method select_shuffle_component, addr 0x65d4314, size 0xf4, virtual false, abstract: false, final false
  static inline float_t select_shuffle_component(::Unity::Mathematics::float3 a, ::Unity::Mathematics::float3 b, ::Unity::Mathematics::math_ShuffleComponent component);

  /// @brief Method select_shuffle_component, addr 0x65d5514, size 0x128, virtual false, abstract: false, final false
  static inline float_t select_shuffle_component(::Unity::Mathematics::float4 a, ::Unity::Mathematics::float4 b, ::Unity::Mathematics::math_ShuffleComponent component);

  /// @brief Method select_shuffle_component, addr 0x65d768c, size 0xd0, virtual false, abstract: false, final false
  static inline int32_t select_shuffle_component(::Unity::Mathematics::int2 a, ::Unity::Mathematics::int2 b, ::Unity::Mathematics::math_ShuffleComponent component);

  /// @brief Method select_shuffle_component, addr 0x65d8480, size 0xec, virtual false, abstract: false, final false
  static inline int32_t select_shuffle_component(::Unity::Mathematics::int3 a, ::Unity::Mathematics::int3 b, ::Unity::Mathematics::math_ShuffleComponent component);

  /// @brief Method select_shuffle_component, addr 0x65d9818, size 0x110, virtual false, abstract: false, final false
  static inline int32_t select_shuffle_component(::Unity::Mathematics::int4 a, ::Unity::Mathematics::int4 b, ::Unity::Mathematics::math_ShuffleComponent component);

  /// @brief Method select_shuffle_component, addr 0x65f7d1c, size 0xd0, virtual false, abstract: false, final false
  static inline uint32_t select_shuffle_component(::Unity::Mathematics::uint2 a, ::Unity::Mathematics::uint2 b, ::Unity::Mathematics::math_ShuffleComponent component);

  /// @brief Method select_shuffle_component, addr 0x65f8a74, size 0xec, virtual false, abstract: false, final false
  static inline uint32_t select_shuffle_component(::Unity::Mathematics::uint3 a, ::Unity::Mathematics::uint3 b, ::Unity::Mathematics::math_ShuffleComponent component);

  /// @brief Method select_shuffle_component, addr 0x65f9d90, size 0x110, virtual false, abstract: false, final false
  static inline uint32_t select_shuffle_component(::Unity::Mathematics::uint4 a, ::Unity::Mathematics::uint4 b, ::Unity::Mathematics::math_ShuffleComponent component);

  /// @brief Method shuffle, addr 0x65cd0f4, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 shuffle(::Unity::Mathematics::bool2 left, ::Unity::Mathematics::bool2 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                    ::Unity::Mathematics::math_ShuffleComponent y);

  /// @brief Method shuffle, addr 0x65cda20, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 shuffle(::Unity::Mathematics::bool3 left, ::Unity::Mathematics::bool3 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                    ::Unity::Mathematics::math_ShuffleComponent y);

  /// @brief Method shuffle, addr 0x65ce85c, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 shuffle(::Unity::Mathematics::bool4 left, ::Unity::Mathematics::bool4 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                    ::Unity::Mathematics::math_ShuffleComponent y);

  /// @brief Method shuffle, addr 0x65cd154, size 0x8c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 shuffle(::Unity::Mathematics::bool2 left, ::Unity::Mathematics::bool2 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                    ::Unity::Mathematics::math_ShuffleComponent y, ::Unity::Mathematics::math_ShuffleComponent z);

  /// @brief Method shuffle, addr 0x65cda80, size 0x8c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 shuffle(::Unity::Mathematics::bool3 left, ::Unity::Mathematics::bool3 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                    ::Unity::Mathematics::math_ShuffleComponent y, ::Unity::Mathematics::math_ShuffleComponent z);

  /// @brief Method shuffle, addr 0x65ce8bc, size 0x8c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 shuffle(::Unity::Mathematics::bool4 left, ::Unity::Mathematics::bool4 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                    ::Unity::Mathematics::math_ShuffleComponent y, ::Unity::Mathematics::math_ShuffleComponent z);

  /// @brief Method shuffle, addr 0x65cd1e0, size 0xc0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 shuffle(::Unity::Mathematics::bool2 left, ::Unity::Mathematics::bool2 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                    ::Unity::Mathematics::math_ShuffleComponent y, ::Unity::Mathematics::math_ShuffleComponent z, ::Unity::Mathematics::math_ShuffleComponent w);

  /// @brief Method shuffle, addr 0x65cdb0c, size 0xc0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 shuffle(::Unity::Mathematics::bool3 left, ::Unity::Mathematics::bool3 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                    ::Unity::Mathematics::math_ShuffleComponent y, ::Unity::Mathematics::math_ShuffleComponent z, ::Unity::Mathematics::math_ShuffleComponent w);

  /// @brief Method shuffle, addr 0x65ce948, size 0xc0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 shuffle(::Unity::Mathematics::bool4 left, ::Unity::Mathematics::bool4 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                    ::Unity::Mathematics::math_ShuffleComponent y, ::Unity::Mathematics::math_ShuffleComponent z, ::Unity::Mathematics::math_ShuffleComponent w);

  /// @brief Method shuffle, addr 0x65cf790, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 shuffle(::Unity::Mathematics::double2 left, ::Unity::Mathematics::double2 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                      ::Unity::Mathematics::math_ShuffleComponent y);

  /// @brief Method shuffle, addr 0x65d058c, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 shuffle(::Unity::Mathematics::double3 left, ::Unity::Mathematics::double3 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                      ::Unity::Mathematics::math_ShuffleComponent y);

  /// @brief Method shuffle, addr 0x65d19f4, size 0x98, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 shuffle(::Unity::Mathematics::double4 left, ::Unity::Mathematics::double4 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                      ::Unity::Mathematics::math_ShuffleComponent y);

  /// @brief Method shuffle, addr 0x65cf7f8, size 0x98, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 shuffle(::Unity::Mathematics::double2 left, ::Unity::Mathematics::double2 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                      ::Unity::Mathematics::math_ShuffleComponent y, ::Unity::Mathematics::math_ShuffleComponent z);

  /// @brief Method shuffle, addr 0x65d060c, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 shuffle(::Unity::Mathematics::double3 left, ::Unity::Mathematics::double3 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                      ::Unity::Mathematics::math_ShuffleComponent y, ::Unity::Mathematics::math_ShuffleComponent z);

  /// @brief Method shuffle, addr 0x65d1a8c, size 0xd8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 shuffle(::Unity::Mathematics::double4 left, ::Unity::Mathematics::double4 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                      ::Unity::Mathematics::math_ShuffleComponent y, ::Unity::Mathematics::math_ShuffleComponent z);

  /// @brief Method shuffle, addr 0x65cf890, size 0xc8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 shuffle(::Unity::Mathematics::double2 left, ::Unity::Mathematics::double2 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                      ::Unity::Mathematics::math_ShuffleComponent y, ::Unity::Mathematics::math_ShuffleComponent z, ::Unity::Mathematics::math_ShuffleComponent w);

  /// @brief Method shuffle, addr 0x65d06c4, size 0xf0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 shuffle(::Unity::Mathematics::double3 left, ::Unity::Mathematics::double3 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                      ::Unity::Mathematics::math_ShuffleComponent y, ::Unity::Mathematics::math_ShuffleComponent z, ::Unity::Mathematics::math_ShuffleComponent w);

  /// @brief Method shuffle, addr 0x65d1b64, size 0x10c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 shuffle(::Unity::Mathematics::double4 left, ::Unity::Mathematics::double4 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                      ::Unity::Mathematics::math_ShuffleComponent y, ::Unity::Mathematics::math_ShuffleComponent z, ::Unity::Mathematics::math_ShuffleComponent w);

  /// @brief Method shuffle, addr 0x65d3474, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 shuffle(::Unity::Mathematics::float2 left, ::Unity::Mathematics::float2 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                     ::Unity::Mathematics::math_ShuffleComponent y);

  /// @brief Method shuffle, addr 0x65d40ec, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 shuffle(::Unity::Mathematics::float3 left, ::Unity::Mathematics::float3 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                     ::Unity::Mathematics::math_ShuffleComponent y);

  /// @brief Method shuffle, addr 0x65d52a4, size 0x98, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 shuffle(::Unity::Mathematics::float4 left, ::Unity::Mathematics::float4 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                     ::Unity::Mathematics::math_ShuffleComponent y);

  /// @brief Method shuffle, addr 0x65d34dc, size 0x98, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 shuffle(::Unity::Mathematics::float2 left, ::Unity::Mathematics::float2 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                     ::Unity::Mathematics::math_ShuffleComponent y, ::Unity::Mathematics::math_ShuffleComponent z);

  /// @brief Method shuffle, addr 0x65d416c, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 shuffle(::Unity::Mathematics::float3 left, ::Unity::Mathematics::float3 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                     ::Unity::Mathematics::math_ShuffleComponent y, ::Unity::Mathematics::math_ShuffleComponent z);

  /// @brief Method shuffle, addr 0x65d533c, size 0xcc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 shuffle(::Unity::Mathematics::float4 left, ::Unity::Mathematics::float4 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                     ::Unity::Mathematics::math_ShuffleComponent y, ::Unity::Mathematics::math_ShuffleComponent z);

  /// @brief Method shuffle, addr 0x65d3574, size 0xc8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 shuffle(::Unity::Mathematics::float2 left, ::Unity::Mathematics::float2 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                     ::Unity::Mathematics::math_ShuffleComponent y, ::Unity::Mathematics::math_ShuffleComponent z, ::Unity::Mathematics::math_ShuffleComponent w);

  /// @brief Method shuffle, addr 0x65d4224, size 0xf0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 shuffle(::Unity::Mathematics::float3 left, ::Unity::Mathematics::float3 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                     ::Unity::Mathematics::math_ShuffleComponent y, ::Unity::Mathematics::math_ShuffleComponent z, ::Unity::Mathematics::math_ShuffleComponent w);

  /// @brief Method shuffle, addr 0x65d5408, size 0x10c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 shuffle(::Unity::Mathematics::float4 left, ::Unity::Mathematics::float4 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                     ::Unity::Mathematics::math_ShuffleComponent y, ::Unity::Mathematics::math_ShuffleComponent z, ::Unity::Mathematics::math_ShuffleComponent w);

  /// @brief Method shuffle, addr 0x65d7530, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 shuffle(::Unity::Mathematics::int2 left, ::Unity::Mathematics::int2 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                   ::Unity::Mathematics::math_ShuffleComponent y);

  /// @brief Method shuffle, addr 0x65d82ac, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 shuffle(::Unity::Mathematics::int3 left, ::Unity::Mathematics::int3 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                   ::Unity::Mathematics::math_ShuffleComponent y);

  /// @brief Method shuffle, addr 0x65d965c, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 shuffle(::Unity::Mathematics::int4 left, ::Unity::Mathematics::int4 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                   ::Unity::Mathematics::math_ShuffleComponent y);

  /// @brief Method shuffle, addr 0x65d7580, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 shuffle(::Unity::Mathematics::int2 left, ::Unity::Mathematics::int2 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                   ::Unity::Mathematics::math_ShuffleComponent y, ::Unity::Mathematics::math_ShuffleComponent z);

  /// @brief Method shuffle, addr 0x65d831c, size 0x9c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 shuffle(::Unity::Mathematics::int3 left, ::Unity::Mathematics::int3 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                   ::Unity::Mathematics::math_ShuffleComponent y, ::Unity::Mathematics::math_ShuffleComponent z);

  /// @brief Method shuffle, addr 0x65d96c4, size 0x94, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 shuffle(::Unity::Mathematics::int4 left, ::Unity::Mathematics::int4 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                   ::Unity::Mathematics::math_ShuffleComponent y, ::Unity::Mathematics::math_ShuffleComponent z);

  /// @brief Method shuffle, addr 0x65d75f4, size 0x98, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 shuffle(::Unity::Mathematics::int2 left, ::Unity::Mathematics::int2 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                   ::Unity::Mathematics::math_ShuffleComponent y, ::Unity::Mathematics::math_ShuffleComponent z, ::Unity::Mathematics::math_ShuffleComponent w);

  /// @brief Method shuffle, addr 0x65d83b8, size 0xc8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 shuffle(::Unity::Mathematics::int3 left, ::Unity::Mathematics::int3 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                   ::Unity::Mathematics::math_ShuffleComponent y, ::Unity::Mathematics::math_ShuffleComponent z, ::Unity::Mathematics::math_ShuffleComponent w);

  /// @brief Method shuffle, addr 0x65d9758, size 0xc0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 shuffle(::Unity::Mathematics::int4 left, ::Unity::Mathematics::int4 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                   ::Unity::Mathematics::math_ShuffleComponent y, ::Unity::Mathematics::math_ShuffleComponent z, ::Unity::Mathematics::math_ShuffleComponent w);

  /// @brief Method shuffle, addr 0x65f7bc0, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 shuffle(::Unity::Mathematics::uint2 left, ::Unity::Mathematics::uint2 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                    ::Unity::Mathematics::math_ShuffleComponent y);

  /// @brief Method shuffle, addr 0x65f88a0, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 shuffle(::Unity::Mathematics::uint3 left, ::Unity::Mathematics::uint3 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                    ::Unity::Mathematics::math_ShuffleComponent y);

  /// @brief Method shuffle, addr 0x65f9bd4, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 shuffle(::Unity::Mathematics::uint4 left, ::Unity::Mathematics::uint4 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                    ::Unity::Mathematics::math_ShuffleComponent y);

  /// @brief Method shuffle, addr 0x65f7c10, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 shuffle(::Unity::Mathematics::uint2 left, ::Unity::Mathematics::uint2 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                    ::Unity::Mathematics::math_ShuffleComponent y, ::Unity::Mathematics::math_ShuffleComponent z);

  /// @brief Method shuffle, addr 0x65f8910, size 0x9c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 shuffle(::Unity::Mathematics::uint3 left, ::Unity::Mathematics::uint3 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                    ::Unity::Mathematics::math_ShuffleComponent y, ::Unity::Mathematics::math_ShuffleComponent z);

  /// @brief Method shuffle, addr 0x65f9c3c, size 0x94, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 shuffle(::Unity::Mathematics::uint4 left, ::Unity::Mathematics::uint4 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                    ::Unity::Mathematics::math_ShuffleComponent y, ::Unity::Mathematics::math_ShuffleComponent z);

  /// @brief Method shuffle, addr 0x65f7c84, size 0x98, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 shuffle(::Unity::Mathematics::uint2 left, ::Unity::Mathematics::uint2 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                    ::Unity::Mathematics::math_ShuffleComponent y, ::Unity::Mathematics::math_ShuffleComponent z, ::Unity::Mathematics::math_ShuffleComponent w);

  /// @brief Method shuffle, addr 0x65f89ac, size 0xc8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 shuffle(::Unity::Mathematics::uint3 left, ::Unity::Mathematics::uint3 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                    ::Unity::Mathematics::math_ShuffleComponent y, ::Unity::Mathematics::math_ShuffleComponent z, ::Unity::Mathematics::math_ShuffleComponent w);

  /// @brief Method shuffle, addr 0x65f9cd0, size 0xc0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 shuffle(::Unity::Mathematics::uint4 left, ::Unity::Mathematics::uint4 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                    ::Unity::Mathematics::math_ShuffleComponent y, ::Unity::Mathematics::math_ShuffleComponent z, ::Unity::Mathematics::math_ShuffleComponent w);

  /// @brief Method shuffle, addr 0x65cd0e4, size 0x10, virtual false, abstract: false, final false
  static inline bool shuffle(::Unity::Mathematics::bool2 left, ::Unity::Mathematics::bool2 right, ::Unity::Mathematics::math_ShuffleComponent x);

  /// @brief Method shuffle, addr 0x65cda10, size 0x10, virtual false, abstract: false, final false
  static inline bool shuffle(::Unity::Mathematics::bool3 left, ::Unity::Mathematics::bool3 right, ::Unity::Mathematics::math_ShuffleComponent x);

  /// @brief Method shuffle, addr 0x65ce84c, size 0x10, virtual false, abstract: false, final false
  static inline bool shuffle(::Unity::Mathematics::bool4 left, ::Unity::Mathematics::bool4 right, ::Unity::Mathematics::math_ShuffleComponent x);

  /// @brief Method shuffle, addr 0x65cf788, size 0x8, virtual false, abstract: false, final false
  static inline double_t shuffle(::Unity::Mathematics::double2 left, ::Unity::Mathematics::double2 right, ::Unity::Mathematics::math_ShuffleComponent x);

  /// @brief Method shuffle, addr 0x65d0584, size 0x8, virtual false, abstract: false, final false
  static inline double_t shuffle(::Unity::Mathematics::double3 left, ::Unity::Mathematics::double3 right, ::Unity::Mathematics::math_ShuffleComponent x);

  /// @brief Method shuffle, addr 0x65d19ec, size 0x8, virtual false, abstract: false, final false
  static inline double_t shuffle(::Unity::Mathematics::double4 left, ::Unity::Mathematics::double4 right, ::Unity::Mathematics::math_ShuffleComponent x);

  /// @brief Method shuffle, addr 0x65d346c, size 0x8, virtual false, abstract: false, final false
  static inline float_t shuffle(::Unity::Mathematics::float2 left, ::Unity::Mathematics::float2 right, ::Unity::Mathematics::math_ShuffleComponent x);

  /// @brief Method shuffle, addr 0x65d40e4, size 0x8, virtual false, abstract: false, final false
  static inline float_t shuffle(::Unity::Mathematics::float3 left, ::Unity::Mathematics::float3 right, ::Unity::Mathematics::math_ShuffleComponent x);

  /// @brief Method shuffle, addr 0x65d529c, size 0x8, virtual false, abstract: false, final false
  static inline float_t shuffle(::Unity::Mathematics::float4 left, ::Unity::Mathematics::float4 right, ::Unity::Mathematics::math_ShuffleComponent x);

  /// @brief Method shuffle, addr 0x65d7528, size 0x8, virtual false, abstract: false, final false
  static inline int32_t shuffle(::Unity::Mathematics::int2 left, ::Unity::Mathematics::int2 right, ::Unity::Mathematics::math_ShuffleComponent x);

  /// @brief Method shuffle, addr 0x65d829c, size 0x10, virtual false, abstract: false, final false
  static inline int32_t shuffle(::Unity::Mathematics::int3 left, ::Unity::Mathematics::int3 right, ::Unity::Mathematics::math_ShuffleComponent x);

  /// @brief Method shuffle, addr 0x65d9654, size 0x8, virtual false, abstract: false, final false
  static inline int32_t shuffle(::Unity::Mathematics::int4 left, ::Unity::Mathematics::int4 right, ::Unity::Mathematics::math_ShuffleComponent x);

  /// @brief Method shuffle, addr 0x65f7bb8, size 0x8, virtual false, abstract: false, final false
  static inline uint32_t shuffle(::Unity::Mathematics::uint2 left, ::Unity::Mathematics::uint2 right, ::Unity::Mathematics::math_ShuffleComponent x);

  /// @brief Method shuffle, addr 0x65f8890, size 0x10, virtual false, abstract: false, final false
  static inline uint32_t shuffle(::Unity::Mathematics::uint3 left, ::Unity::Mathematics::uint3 right, ::Unity::Mathematics::math_ShuffleComponent x);

  /// @brief Method shuffle, addr 0x65f9bcc, size 0x8, virtual false, abstract: false, final false
  static inline uint32_t shuffle(::Unity::Mathematics::uint4 left, ::Unity::Mathematics::uint4 right, ::Unity::Mathematics::math_ShuffleComponent x);

  /// @brief Method sign, addr 0x65e3760, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 sign(::Unity::Mathematics::double2 x);

  /// @brief Method sign, addr 0x65e37a4, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 sign(::Unity::Mathematics::double3 x);

  /// @brief Method sign, addr 0x65e380c, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 sign(::Unity::Mathematics::double4 x);

  /// @brief Method sign, addr 0x65e36a4, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 sign(::Unity::Mathematics::float2 x);

  /// @brief Method sign, addr 0x65e36c8, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 sign(::Unity::Mathematics::float3 x);

  /// @brief Method sign, addr 0x65e3704, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 sign(::Unity::Mathematics::float4 x);

  /// @brief Method sign, addr 0x65e35e8, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 sign(::Unity::Mathematics::int2 x);

  /// @brief Method sign, addr 0x65e360c, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 sign(::Unity::Mathematics::int3 x);

  /// @brief Method sign, addr 0x65e363c, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 sign(::Unity::Mathematics::int4 x);

  /// @brief Method sign, addr 0x65e3738, size 0x28, virtual false, abstract: false, final false
  static inline double_t sign(double_t x);

  /// @brief Method sign, addr 0x65e3688, size 0x1c, virtual false, abstract: false, final false
  static inline float_t sign(float_t x);

  /// @brief Method sign, addr 0x65e35d8, size 0x10, virtual false, abstract: false, final false
  static inline int32_t sign(int32_t x);

  /// @brief Method sin, addr 0x65dfedc, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 sin(::Unity::Mathematics::double2 x);

  /// @brief Method sin, addr 0x65dff8c, size 0x100, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 sin(::Unity::Mathematics::double3 x);

  /// @brief Method sin, addr 0x65e008c, size 0x148, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 sin(::Unity::Mathematics::double4 x);

  /// @brief Method sin, addr 0x65dfb68, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 sin(::Unity::Mathematics::float2 x);

  /// @brief Method sin, addr 0x65dfc20, size 0x108, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 sin(::Unity::Mathematics::float3 x);

  /// @brief Method sin, addr 0x65dfd28, size 0x154, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 sin(::Unity::Mathematics::float4 x);

  /// @brief Method sin, addr 0x65dfe7c, size 0x60, virtual false, abstract: false, final false
  static inline double_t sin(double_t x);

  /// @brief Method sin, addr 0x65dfb00, size 0x68, virtual false, abstract: false, final false
  static inline float_t sin(float_t x);

  /// @brief Method sincos, addr 0x65ea998, size 0x148, virtual false, abstract: false, final false
  static inline void sincos(::Unity::Mathematics::double2 x, ::by_ref<::Unity::Mathematics::double2> s, ::by_ref<::Unity::Mathematics::double2> c);

  /// @brief Method sincos, addr 0x65eaae0, size 0x1dc, virtual false, abstract: false, final false
  static inline void sincos(::Unity::Mathematics::double3 x, ::by_ref<::Unity::Mathematics::double3> s, ::by_ref<::Unity::Mathematics::double3> c);

  /// @brief Method sincos, addr 0x65eacbc, size 0x6c, virtual false, abstract: false, final false
  static inline void sincos(::Unity::Mathematics::double4 x, ::by_ref<::Unity::Mathematics::double4> s, ::by_ref<::Unity::Mathematics::double4> c);

  /// @brief Method sincos, addr 0x65ea6b4, size 0x158, virtual false, abstract: false, final false
  static inline void sincos(::Unity::Mathematics::float2 x, ::by_ref<::Unity::Mathematics::float2> s, ::by_ref<::Unity::Mathematics::float2> c);

  /// @brief Method sincos, addr 0x65ea80c, size 0x64, virtual false, abstract: false, final false
  static inline void sincos(::Unity::Mathematics::float3 x, ::by_ref<::Unity::Mathematics::float3> s, ::by_ref<::Unity::Mathematics::float3> c);

  /// @brief Method sincos, addr 0x65ea870, size 0x6c, virtual false, abstract: false, final false
  static inline void sincos(::Unity::Mathematics::float4 x, ::by_ref<::Unity::Mathematics::float4> s, ::by_ref<::Unity::Mathematics::float4> c);

  /// @brief Method sincos, addr 0x65ea8dc, size 0xbc, virtual false, abstract: false, final false
  static inline void sincos(double_t x, ::by_ref<double_t> s, ::by_ref<double_t> c);

  /// @brief Method sincos, addr 0x65ea5ec, size 0xc8, virtual false, abstract: false, final false
  static inline void sincos(float_t x, ::by_ref<float_t> s, ::by_ref<float_t> c);

  /// @brief Method sinh, addr 0x65e05b0, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 sinh(::Unity::Mathematics::double2 x);

  /// @brief Method sinh, addr 0x65e0660, size 0x100, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 sinh(::Unity::Mathematics::double3 x);

  /// @brief Method sinh, addr 0x65e0760, size 0x148, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 sinh(::Unity::Mathematics::double4 x);

  /// @brief Method sinh, addr 0x65e023c, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 sinh(::Unity::Mathematics::float2 x);

  /// @brief Method sinh, addr 0x65e02f4, size 0x108, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 sinh(::Unity::Mathematics::float3 x);

  /// @brief Method sinh, addr 0x65e03fc, size 0x154, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 sinh(::Unity::Mathematics::float4 x);

  /// @brief Method sinh, addr 0x65e0550, size 0x60, virtual false, abstract: false, final false
  static inline double_t sinh(double_t x);

  /// @brief Method sinh, addr 0x65e01d4, size 0x68, virtual false, abstract: false, final false
  static inline float_t sinh(float_t x);

  /// @brief Method slerp, addr 0x65f69dc, size 0x374, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion slerp(::Unity::Mathematics::quaternion q1, ::Unity::Mathematics::quaternion q2, float_t t);

  /// @brief Method smoothstep, addr 0x65e8f20, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 smoothstep(::Unity::Mathematics::double2 xMin, ::Unity::Mathematics::double2 xMax, ::Unity::Mathematics::double2 x);

  /// @brief Method smoothstep, addr 0x65e8f88, size 0xec, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 smoothstep(::Unity::Mathematics::double3 xMin, ::Unity::Mathematics::double3 xMax, ::Unity::Mathematics::double3 x);

  /// @brief Method smoothstep, addr 0x65e9074, size 0x134, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 smoothstep(::Unity::Mathematics::double4 xMin, ::Unity::Mathematics::double4 xMax, ::Unity::Mathematics::double4 x);

  /// @brief Method smoothstep, addr 0x65e8d04, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 smoothstep(::Unity::Mathematics::float2 xMin, ::Unity::Mathematics::float2 xMax, ::Unity::Mathematics::float2 x);

  /// @brief Method smoothstep, addr 0x65e8d6c, size 0xc4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 smoothstep(::Unity::Mathematics::float3 xMin, ::Unity::Mathematics::float3 xMax, ::Unity::Mathematics::float3 x);

  /// @brief Method smoothstep, addr 0x65e8e30, size 0x98, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 smoothstep(::Unity::Mathematics::float4 xMin, ::Unity::Mathematics::float4 xMax, ::Unity::Mathematics::float4 x);

  /// @brief Method smoothstep, addr 0x65e8ec8, size 0x58, virtual false, abstract: false, final false
  static inline double_t smoothstep(double_t xMin, double_t xMax, double_t x);

  /// @brief Method smoothstep, addr 0x65e8cac, size 0x58, virtual false, abstract: false, final false
  static inline float_t smoothstep(float_t xMin, float_t xMax, float_t x);

  /// @brief Method sqrt, addr 0x65e74cc, size 0x9c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 sqrt(::Unity::Mathematics::double2 x);

  /// @brief Method sqrt, addr 0x65e7568, size 0xe0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 sqrt(::Unity::Mathematics::double3 x);

  /// @brief Method sqrt, addr 0x65e7648, size 0x11c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 sqrt(::Unity::Mathematics::double4 x);

  /// @brief Method sqrt, addr 0x65e71d4, size 0x9c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 sqrt(::Unity::Mathematics::float2 x);

  /// @brief Method sqrt, addr 0x65e7270, size 0xe0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 sqrt(::Unity::Mathematics::float3 x);

  /// @brief Method sqrt, addr 0x65e7350, size 0x11c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 sqrt(::Unity::Mathematics::float4 x);

  /// @brief Method sqrt, addr 0x65e746c, size 0x60, virtual false, abstract: false, final false
  static inline double_t sqrt(double_t x);

  /// @brief Method sqrt, addr 0x65e7174, size 0x60, virtual false, abstract: false, final false
  static inline float_t sqrt(float_t x);

  /// @brief Method square, addr 0x65ed5c8, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 square(::Unity::Mathematics::double2 x);

  /// @brief Method square, addr 0x65ed5d4, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 square(::Unity::Mathematics::double3 x);

  /// @brief Method square, addr 0x65ed5e4, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 square(::Unity::Mathematics::double4 x);

  /// @brief Method square, addr 0x65ed590, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 square(::Unity::Mathematics::float2 x);

  /// @brief Method square, addr 0x65ed59c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 square(::Unity::Mathematics::float3 x);

  /// @brief Method square, addr 0x65ed5ac, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 square(::Unity::Mathematics::float4 x);

  /// @brief Method square, addr 0x65ed600, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 square(::Unity::Mathematics::int2 x);

  /// @brief Method square, addr 0x65ed618, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 square(::Unity::Mathematics::int3 x);

  /// @brief Method square, addr 0x65ed634, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 square(::Unity::Mathematics::int4 x);

  /// @brief Method square, addr 0x65ed668, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 square(::Unity::Mathematics::uint2 x);

  /// @brief Method square, addr 0x65ed680, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 square(::Unity::Mathematics::uint3 x);

  /// @brief Method square, addr 0x65ed69c, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 square(::Unity::Mathematics::uint4 x);

  /// @brief Method square, addr 0x65ed5c0, size 0x8, virtual false, abstract: false, final false
  static inline double_t square(double_t x);

  /// @brief Method square, addr 0x65ed588, size 0x8, virtual false, abstract: false, final false
  static inline float_t square(float_t x);

  /// @brief Method square, addr 0x65ed5f8, size 0x8, virtual false, abstract: false, final false
  static inline int32_t square(int32_t x);

  /// @brief Method square, addr 0x65ed660, size 0x8, virtual false, abstract: false, final false
  static inline uint32_t square(uint32_t x);

  /// @brief Method step, addr 0x65e97e0, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 step(::Unity::Mathematics::double2 threshold, ::Unity::Mathematics::double2 x);

  /// @brief Method step, addr 0x65e97fc, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 step(::Unity::Mathematics::double3 threshold, ::Unity::Mathematics::double3 x);

  /// @brief Method step, addr 0x65e9820, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 step(::Unity::Mathematics::double4 threshold, ::Unity::Mathematics::double4 x);

  /// @brief Method step, addr 0x65e9760, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 step(::Unity::Mathematics::float2 threshold, ::Unity::Mathematics::float2 x);

  /// @brief Method step, addr 0x65e977c, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 step(::Unity::Mathematics::float3 threshold, ::Unity::Mathematics::float3 x);

  /// @brief Method step, addr 0x65e97a0, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 step(::Unity::Mathematics::float4 threshold, ::Unity::Mathematics::float4 x);

  /// @brief Method step, addr 0x65e97cc, size 0x14, virtual false, abstract: false, final false
  static inline double_t step(double_t threshold, double_t x);

  /// @brief Method step, addr 0x65e974c, size 0x14, virtual false, abstract: false, final false
  static inline float_t step(float_t threshold, float_t x);

  /// @brief Method tan, addr 0x65dce30, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 tan(::Unity::Mathematics::double2 x);

  /// @brief Method tan, addr 0x65dcee0, size 0x100, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 tan(::Unity::Mathematics::double3 x);

  /// @brief Method tan, addr 0x65dcfe0, size 0x148, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 tan(::Unity::Mathematics::double4 x);

  /// @brief Method tan, addr 0x65dcabc, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 tan(::Unity::Mathematics::float2 x);

  /// @brief Method tan, addr 0x65dcb74, size 0x108, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 tan(::Unity::Mathematics::float3 x);

  /// @brief Method tan, addr 0x65dcc7c, size 0x154, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 tan(::Unity::Mathematics::float4 x);

  /// @brief Method tan, addr 0x65dcdd0, size 0x60, virtual false, abstract: false, final false
  static inline double_t tan(double_t x);

  /// @brief Method tan, addr 0x65dca54, size 0x68, virtual false, abstract: false, final false
  static inline float_t tan(float_t x);

  /// @brief Method tanh, addr 0x65dd504, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 tanh(::Unity::Mathematics::double2 x);

  /// @brief Method tanh, addr 0x65dd5b4, size 0x100, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 tanh(::Unity::Mathematics::double3 x);

  /// @brief Method tanh, addr 0x65dd6b4, size 0x148, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 tanh(::Unity::Mathematics::double4 x);

  /// @brief Method tanh, addr 0x65dd190, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 tanh(::Unity::Mathematics::float2 x);

  /// @brief Method tanh, addr 0x65dd248, size 0x108, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 tanh(::Unity::Mathematics::float3 x);

  /// @brief Method tanh, addr 0x65dd350, size 0x154, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 tanh(::Unity::Mathematics::float4 x);

  /// @brief Method tanh, addr 0x65dd4a4, size 0x60, virtual false, abstract: false, final false
  static inline double_t tanh(double_t x);

  /// @brief Method tanh, addr 0x65dd128, size 0x68, virtual false, abstract: false, final false
  static inline float_t tanh(float_t x);

  /// @brief Method transform, addr 0x65d29f8, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 transform(::Unity::Mathematics::double4x4 a, ::Unity::Mathematics::double3 b);

  /// @brief Method transform, addr 0x65ccc54, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 transform(::Unity::Mathematics::AffineTransform a, ::Unity::Mathematics::float3 pos);

  /// @brief Method transform, addr 0x65f7880, size 0xa0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 transform(::Unity::Mathematics::RigidTransform a, ::Unity::Mathematics::float3 pos);

  /// @brief Method transform, addr 0x65d60ac, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 transform(::Unity::Mathematics::float4x4 a, ::Unity::Mathematics::float3 b);

  /// @brief Method transpose, addr 0x65cd3c0, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 transpose(::Unity::Mathematics::bool2x2 v);

  /// @brief Method transpose, addr 0x65cdd40, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 transpose(::Unity::Mathematics::bool3x2 v);

  /// @brief Method transpose, addr 0x65ceba8, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 transpose(::Unity::Mathematics::bool4x2 v);

  /// @brief Method transpose, addr 0x65cd530, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 transpose(::Unity::Mathematics::bool2x3 v);

  /// @brief Method transpose, addr 0x65cdfb8, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 transpose(::Unity::Mathematics::bool3x3 v);

  /// @brief Method transpose, addr 0x65cee64, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 transpose(::Unity::Mathematics::bool4x3 v);

  /// @brief Method transpose, addr 0x65cd724, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 transpose(::Unity::Mathematics::bool2x4 v);

  /// @brief Method transpose, addr 0x65ce33c, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 transpose(::Unity::Mathematics::bool3x4 v);

  /// @brief Method transpose, addr 0x65cf210, size 0xc4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x4 transpose(::Unity::Mathematics::bool4x4 v);

  /// @brief Method transpose, addr 0x65cfb28, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 transpose(::Unity::Mathematics::double2x2 v);

  /// @brief Method transpose, addr 0x65d0a04, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 transpose(::Unity::Mathematics::double3x2 v);

  /// @brief Method transpose, addr 0x65d1f48, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 transpose(::Unity::Mathematics::double4x2 v);

  /// @brief Method transpose, addr 0x65cfdc8, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x2 transpose(::Unity::Mathematics::double2x3 v);

  /// @brief Method transpose, addr 0x65d0d7c, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 transpose(::Unity::Mathematics::double3x3 v);

  /// @brief Method transpose, addr 0x65d23a4, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 transpose(::Unity::Mathematics::double4x3 v);

  /// @brief Method transpose, addr 0x65d00e0, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 transpose(::Unity::Mathematics::double2x4 v);

  /// @brief Method transpose, addr 0x65d1344, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 transpose(::Unity::Mathematics::double3x4 v);

  /// @brief Method transpose, addr 0x65d2a64, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x4 transpose(::Unity::Mathematics::double4x4 v);

  /// @brief Method transpose, addr 0x65d380c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 transpose(::Unity::Mathematics::float2x2 v);

  /// @brief Method transpose, addr 0x65d4564, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 transpose(::Unity::Mathematics::float3x2 v);

  /// @brief Method transpose, addr 0x65d57c8, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x4 transpose(::Unity::Mathematics::float4x2 v);

  /// @brief Method transpose, addr 0x65d3a6c, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x2 transpose(::Unity::Mathematics::float2x3 v);

  /// @brief Method transpose, addr 0x65d486c, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 transpose(::Unity::Mathematics::float3x3 v);

  /// @brief Method transpose, addr 0x65d5b78, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 transpose(::Unity::Mathematics::float4x3 v);

  /// @brief Method transpose, addr 0x65d3d0c, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x2 transpose(::Unity::Mathematics::float2x4 v);

  /// @brief Method transpose, addr 0x65d4d68, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x3 transpose(::Unity::Mathematics::float3x4 v);

  /// @brief Method transpose, addr 0x65d6104, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 transpose(::Unity::Mathematics::float4x4 v);

  /// @brief Method transpose, addr 0x65d78c0, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x2 transpose(::Unity::Mathematics::int2x2 v);

  /// @brief Method transpose, addr 0x65d87ac, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x3 transpose(::Unity::Mathematics::int3x2 v);

  /// @brief Method transpose, addr 0x65d9b94, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x4 transpose(::Unity::Mathematics::int4x2 v);

  /// @brief Method transpose, addr 0x65d7bd0, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 transpose(::Unity::Mathematics::int2x3 v);

  /// @brief Method transpose, addr 0x65d8bfc, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x3 transpose(::Unity::Mathematics::int3x3 v);

  /// @brief Method transpose, addr 0x65da058, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 transpose(::Unity::Mathematics::int4x3 v);

  /// @brief Method transpose, addr 0x65d7f84, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 transpose(::Unity::Mathematics::int2x4 v);

  /// @brief Method transpose, addr 0x65d91e8, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 transpose(::Unity::Mathematics::int3x4 v);

  /// @brief Method transpose, addr 0x65da688, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 transpose(::Unity::Mathematics::int4x4 v);

  /// @brief Method transpose, addr 0x65f7f20, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 transpose(::Unity::Mathematics::uint2x2 v);

  /// @brief Method transpose, addr 0x65f8d90, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x3 transpose(::Unity::Mathematics::uint3x2 v);

  /// @brief Method transpose, addr 0x65fa100, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x4 transpose(::Unity::Mathematics::uint4x2 v);

  /// @brief Method transpose, addr 0x65f81f4, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 transpose(::Unity::Mathematics::uint2x3 v);

  /// @brief Method transpose, addr 0x65f91e0, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x3 transpose(::Unity::Mathematics::uint3x3 v);

  /// @brief Method transpose, addr 0x65fa5c8, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 transpose(::Unity::Mathematics::uint4x3 v);

  /// @brief Method transpose, addr 0x65f8598, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x2 transpose(::Unity::Mathematics::uint2x4 v);

  /// @brief Method transpose, addr 0x65f9790, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 transpose(::Unity::Mathematics::uint3x4 v);

  /// @brief Method transpose, addr 0x65fac0c, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x4 transpose(::Unity::Mathematics::uint4x4 v);

  /// @brief Method trunc, addr 0x65e2dbc, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 trunc(::Unity::Mathematics::double2 x);

  /// @brief Method trunc, addr 0x65e2e74, size 0x10c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 trunc(::Unity::Mathematics::double3 x);

  /// @brief Method trunc, addr 0x65e2f80, size 0x158, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 trunc(::Unity::Mathematics::double4 x);

  /// @brief Method trunc, addr 0x65e2a20, size 0xc0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 trunc(::Unity::Mathematics::float2 x);

  /// @brief Method trunc, addr 0x65e2ae0, size 0x114, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 trunc(::Unity::Mathematics::float3 x);

  /// @brief Method trunc, addr 0x65e2bf4, size 0x164, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 trunc(::Unity::Mathematics::float4 x);

  /// @brief Method trunc, addr 0x65e2d58, size 0x64, virtual false, abstract: false, final false
  static inline double_t trunc(double_t x);

  /// @brief Method trunc, addr 0x65e29b4, size 0x6c, virtual false, abstract: false, final false
  static inline float_t trunc(float_t x);

  /// @brief Method tzcnt, addr 0x65eb71c, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 tzcnt(::Unity::Mathematics::int2 x);

  /// @brief Method tzcnt, addr 0x65eb9a0, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 tzcnt(::Unity::Mathematics::uint2 x);

  /// @brief Method tzcnt, addr 0x65eb7a4, size 0xc0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 tzcnt(::Unity::Mathematics::int3 x);

  /// @brief Method tzcnt, addr 0x65eba28, size 0xc0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 tzcnt(::Unity::Mathematics::uint3 x);

  /// @brief Method tzcnt, addr 0x65eb864, size 0x100, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 tzcnt(::Unity::Mathematics::int4 x);

  /// @brief Method tzcnt, addr 0x65ebae8, size 0x100, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 tzcnt(::Unity::Mathematics::uint4 x);

  /// @brief Method tzcnt, addr 0x65eb6e0, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t tzcnt(int32_t x);

  /// @brief Method tzcnt, addr 0x65ebbe8, size 0x54, virtual false, abstract: false, final false
  static inline int32_t tzcnt(int64_t x);

  /// @brief Method tzcnt, addr 0x65eb964, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t tzcnt(uint32_t x);

  /// @brief Method tzcnt, addr 0x65ebc3c, size 0x54, virtual false, abstract: false, final false
  static inline int32_t tzcnt(uint64_t x);

  /// @brief Method uint2, addr 0x65f7ab0, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 uint2(::Unity::Mathematics::bool2 v);

  /// @brief Method uint2, addr 0x65f7b28, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 uint2(::Unity::Mathematics::double2 v);

  /// @brief Method uint2, addr 0x65f7ae8, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 uint2(::Unity::Mathematics::float2 v);

  /// @brief Method uint2, addr 0x65f7acc, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 uint2(::Unity::Mathematics::int2 v);

  /// @brief Method uint2, addr 0x65f7a98, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 uint2(bool v);

  /// @brief Method uint2, addr 0x65f7b10, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 uint2(double_t v);

  /// @brief Method uint2, addr 0x65f7ad0, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 uint2(float_t v);

  /// @brief Method uint2, addr 0x65f7ac0, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 uint2(int32_t v);

  /// @brief Method uint2, addr 0x65f7a8c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 uint2(uint32_t v);

  /// @brief Method uint2, addr 0x65f7a7c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 uint2(uint32_t x, uint32_t y);

  /// @brief Method uint2, addr 0x65f7a88, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 uint2(::Unity::Mathematics::uint2 xy);

  /// @brief Method uint2x2, addr 0x65f7dec, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 uint2x2(::Unity::Mathematics::uint2 c0, ::Unity::Mathematics::uint2 c1);

  /// @brief Method uint2x2, addr 0x65f7df0, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 uint2x2(uint32_t m00, uint32_t m01, uint32_t m10, uint32_t m11);

  /// @brief Method uint2x2, addr 0x65f7e28, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 uint2x2(::Unity::Mathematics::bool2x2 v);

  /// @brief Method uint2x2, addr 0x65f7ed4, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 uint2x2(::Unity::Mathematics::double2x2 v);

  /// @brief Method uint2x2, addr 0x65f7e78, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 uint2x2(::Unity::Mathematics::float2x2 v);

  /// @brief Method uint2x2, addr 0x65f7e58, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 uint2x2(::Unity::Mathematics::int2x2 v);

  /// @brief Method uint2x2, addr 0x65f7e14, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 uint2x2(bool v);

  /// @brief Method uint2x2, addr 0x65f7eb8, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 uint2x2(double_t v);

  /// @brief Method uint2x2, addr 0x65f7e5c, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 uint2x2(float_t v);

  /// @brief Method uint2x2, addr 0x65f7e48, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 uint2x2(int32_t v);

  /// @brief Method uint2x2, addr 0x65f7e04, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 uint2x2(uint32_t v);

  /// @brief Method uint2x3, addr 0x65f7fdc, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x3 uint2x3(::Unity::Mathematics::uint2 c0, ::Unity::Mathematics::uint2 c1, ::Unity::Mathematics::uint2 c2);

  /// @brief Method uint2x3, addr 0x65f7fe8, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x3 uint2x3(uint32_t m00, uint32_t m01, uint32_t m02, uint32_t m10, uint32_t m11, uint32_t m12);

  /// @brief Method uint2x3, addr 0x65f8038, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x3 uint2x3(::Unity::Mathematics::bool2x3 v);

  /// @brief Method uint2x3, addr 0x65f8170, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x3 uint2x3(::Unity::Mathematics::double2x3 v);

  /// @brief Method uint2x3, addr 0x65f80cc, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x3 uint2x3(::Unity::Mathematics::float2x3 v);

  /// @brief Method uint2x3, addr 0x65f8098, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x3 uint2x3(::Unity::Mathematics::int2x3 v);

  /// @brief Method uint2x3, addr 0x65f8020, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x3 uint2x3(bool v);

  /// @brief Method uint2x3, addr 0x65f8150, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x3 uint2x3(double_t v);

  /// @brief Method uint2x3, addr 0x65f80ac, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x3 uint2x3(float_t v);

  /// @brief Method uint2x3, addr 0x65f8084, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x3 uint2x3(int32_t v);

  /// @brief Method uint2x3, addr 0x65f800c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x3 uint2x3(uint32_t v);

  /// @brief Method uint2x4, addr 0x65f8308, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x4 uint2x4(::Unity::Mathematics::uint2 c0, ::Unity::Mathematics::uint2 c1, ::Unity::Mathematics::uint2 c2, ::Unity::Mathematics::uint2 c3);

  /// @brief Method uint2x4, addr 0x65f8314, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x4 uint2x4(uint32_t m00, uint32_t m01, uint32_t m02, uint32_t m03, uint32_t m10, uint32_t m11, uint32_t m12, uint32_t m13);

  /// @brief Method uint2x4, addr 0x65f836c, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x4 uint2x4(::Unity::Mathematics::bool2x4 v);

  /// @brief Method uint2x4, addr 0x65f84ec, size 0xac, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x4 uint2x4(::Unity::Mathematics::double2x4 v);

  /// @brief Method uint2x4, addr 0x65f8420, size 0xac, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x4 uint2x4(::Unity::Mathematics::float2x4 v);

  /// @brief Method uint2x4, addr 0x65f83f4, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x4 uint2x4(::Unity::Mathematics::int2x4 v);

  /// @brief Method uint2x4, addr 0x65f8354, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x4 uint2x4(bool v);

  /// @brief Method uint2x4, addr 0x65f84cc, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x4 uint2x4(double_t v);

  /// @brief Method uint2x4, addr 0x65f8400, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x4 uint2x4(float_t v);

  /// @brief Method uint2x4, addr 0x65f83e0, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x4 uint2x4(int32_t v);

  /// @brief Method uint2x4, addr 0x65f8340, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x4 uint2x4(uint32_t v);

  /// @brief Method uint3, addr 0x65f8740, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 uint3(::Unity::Mathematics::bool3 v);

  /// @brief Method uint3, addr 0x65f87d4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 uint3(::Unity::Mathematics::double3 v);

  /// @brief Method uint3, addr 0x65f8784, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 uint3(::Unity::Mathematics::float3 v);

  /// @brief Method uint3, addr 0x65f8764, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 uint3(::Unity::Mathematics::int3 v);

  /// @brief Method uint3, addr 0x65f8724, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 uint3(bool v);

  /// @brief Method uint3, addr 0x65f87bc, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 uint3(double_t v);

  /// @brief Method uint3, addr 0x65f876c, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 uint3(float_t v);

  /// @brief Method uint3, addr 0x65f8758, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 uint3(int32_t v);

  /// @brief Method uint3, addr 0x65f8718, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 uint3(uint32_t v);

  /// @brief Method uint3, addr 0x65f86e4, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 uint3(uint32_t x, uint32_t y, uint32_t z);

  /// @brief Method uint3, addr 0x65f86f4, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 uint3(uint32_t x, ::Unity::Mathematics::uint2 yz);

  /// @brief Method uint3, addr 0x65f8708, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 uint3(::Unity::Mathematics::uint2 xy, uint32_t z);

  /// @brief Method uint3, addr 0x65f8710, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 uint3(::Unity::Mathematics::uint3 xyz);

  /// @brief Method uint3x2, addr 0x65f8b60, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 uint3x2(::Unity::Mathematics::uint3 c0, ::Unity::Mathematics::uint3 c1);

  /// @brief Method uint3x2, addr 0x65f8b74, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 uint3x2(uint32_t m00, uint32_t m01, uint32_t m10, uint32_t m11, uint32_t m20, uint32_t m21);

  /// @brief Method uint3x2, addr 0x65f8bc0, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 uint3x2(::Unity::Mathematics::bool3x2 v);

  /// @brief Method uint3x2, addr 0x65f8d08, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 uint3x2(::Unity::Mathematics::double3x2 v);

  /// @brief Method uint3x2, addr 0x65f8c58, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 uint3x2(::Unity::Mathematics::float3x2 v);

  /// @brief Method uint3x2, addr 0x65f8c0c, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 uint3x2(::Unity::Mathematics::int3x2 v);

  /// @brief Method uint3x2, addr 0x65f8ba0, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 uint3x2(bool v);

  /// @brief Method uint3x2, addr 0x65f8ce0, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 uint3x2(double_t v);

  /// @brief Method uint3x2, addr 0x65f8c30, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 uint3x2(float_t v);

  /// @brief Method uint3x2, addr 0x65f8bf0, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 uint3x2(int32_t v);

  /// @brief Method uint3x2, addr 0x65f8b84, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 uint3x2(uint32_t v);

  /// @brief Method uint3x3, addr 0x65f8eb8, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x3 uint3x3(::Unity::Mathematics::uint3 c0, ::Unity::Mathematics::uint3 c1, ::Unity::Mathematics::uint3 c2);

  /// @brief Method uint3x3, addr 0x65f8ed4, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x3 uint3x3(uint32_t m00, uint32_t m01, uint32_t m02, uint32_t m10, uint32_t m11, uint32_t m12, uint32_t m20, uint32_t m21, uint32_t m22);

  /// @brief Method uint3x3, addr 0x65f8f3c, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x3 uint3x3(::Unity::Mathematics::bool3x3 v);

  /// @brief Method uint3x3, addr 0x65f9114, size 0xcc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x3 uint3x3(::Unity::Mathematics::double3x3 v);

  /// @brief Method uint3x3, addr 0x65f9018, size 0xcc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x3 uint3x3(::Unity::Mathematics::float3x3 v);

  /// @brief Method uint3x3, addr 0x65f8fb4, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x3 uint3x3(::Unity::Mathematics::int3x3 v);

  /// @brief Method uint3x3, addr 0x65f8f14, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x3 uint3x3(bool v);

  /// @brief Method uint3x3, addr 0x65f90e4, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x3 uint3x3(double_t v);

  /// @brief Method uint3x3, addr 0x65f8fe8, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x3 uint3x3(float_t v);

  /// @brief Method uint3x3, addr 0x65f8f90, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x3 uint3x3(int32_t v);

  /// @brief Method uint3x3, addr 0x65f8ef0, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x3 uint3x3(uint32_t v);

  /// @brief Method uint3x4, addr 0x65f9370, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 uint3x4(::Unity::Mathematics::uint3 c0, ::Unity::Mathematics::uint3 c1, ::Unity::Mathematics::uint3 c2, ::Unity::Mathematics::uint3 c3);

  /// @brief Method uint3x4, addr 0x65f9394, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 uint3x4(uint32_t m00, uint32_t m01, uint32_t m02, uint32_t m03, uint32_t m10, uint32_t m11, uint32_t m12, uint32_t m13, uint32_t m20, uint32_t m21,
                                                      uint32_t m22, uint32_t m23);

  /// @brief Method uint3x4, addr 0x65f9424, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 uint3x4(::Unity::Mathematics::bool3x4 v);

  /// @brief Method uint3x4, addr 0x65f9684, size 0x10c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 uint3x4(::Unity::Mathematics::double3x4 v);

  /// @brief Method uint3x4, addr 0x65f9540, size 0x10c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 uint3x4(::Unity::Mathematics::float3x4 v);

  /// @brief Method uint3x4, addr 0x65f94c4, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 uint3x4(::Unity::Mathematics::int3x4 v);

  /// @brief Method uint3x4, addr 0x65f93f4, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 uint3x4(bool v);

  /// @brief Method uint3x4, addr 0x65f964c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 uint3x4(double_t v);

  /// @brief Method uint3x4, addr 0x65f9508, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 uint3x4(float_t v);

  /// @brief Method uint3x4, addr 0x65f9498, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 uint3x4(int32_t v);

  /// @brief Method uint3x4, addr 0x65f93c8, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 uint3x4(uint32_t v);

  /// @brief Method uint4, addr 0x65f9a20, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 uint4(::Unity::Mathematics::bool4 v);

  /// @brief Method uint4, addr 0x65f9acc, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 uint4(::Unity::Mathematics::double4 v);

  /// @brief Method uint4, addr 0x65f9a70, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 uint4(::Unity::Mathematics::float4 v);

  /// @brief Method uint4, addr 0x65f9a50, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 uint4(::Unity::Mathematics::int4 v);

  /// @brief Method uint4, addr 0x65f9a08, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 uint4(bool v);

  /// @brief Method uint4, addr 0x65f9ab0, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 uint4(double_t v);

  /// @brief Method uint4, addr 0x65f9a54, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 uint4(float_t v);

  /// @brief Method uint4, addr 0x65f9a40, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 uint4(int32_t v);

  /// @brief Method uint4, addr 0x65f99f8, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 uint4(uint32_t v);

  /// @brief Method uint4, addr 0x65f998c, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 uint4(uint32_t x, uint32_t y, uint32_t z, uint32_t w);

  /// @brief Method uint4, addr 0x65f99a4, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 uint4(uint32_t x, uint32_t y, ::Unity::Mathematics::uint2 zw);

  /// @brief Method uint4, addr 0x65f99b4, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 uint4(uint32_t x, ::Unity::Mathematics::uint2 yz, uint32_t w);

  /// @brief Method uint4, addr 0x65f99c8, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 uint4(uint32_t x, ::Unity::Mathematics::uint3 yzw);

  /// @brief Method uint4, addr 0x65f99dc, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 uint4(::Unity::Mathematics::uint2 xy, uint32_t z, uint32_t w);

  /// @brief Method uint4, addr 0x65f99e8, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 uint4(::Unity::Mathematics::uint2 xy, ::Unity::Mathematics::uint2 zw);

  /// @brief Method uint4, addr 0x65f99ec, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 uint4(::Unity::Mathematics::uint3 xyz, uint32_t w);

  /// @brief Method uint4, addr 0x65f99f4, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 uint4(::Unity::Mathematics::uint4 xyzw);

  /// @brief Method uint4x2, addr 0x65f9ea0, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x2 uint4x2(::Unity::Mathematics::uint4 c0, ::Unity::Mathematics::uint4 c1);

  /// @brief Method uint4x2, addr 0x65f9eac, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x2 uint4x2(uint32_t m00, uint32_t m01, uint32_t m10, uint32_t m11, uint32_t m20, uint32_t m21, uint32_t m30, uint32_t m31);

  /// @brief Method uint4x2, addr 0x65f9eec, size 0x5c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x2 uint4x2(::Unity::Mathematics::bool4x2 v);

  /// @brief Method uint4x2, addr 0x65fa054, size 0xac, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x2 uint4x2(::Unity::Mathematics::double4x2 v);

  /// @brief Method uint4x2, addr 0x65f9f88, size 0xac, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x2 uint4x2(::Unity::Mathematics::float4x2 v);

  /// @brief Method uint4x2, addr 0x65f9f5c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x2 uint4x2(::Unity::Mathematics::int4x2 v);

  /// @brief Method uint4x2, addr 0x65f9ed4, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x2 uint4x2(bool v);

  /// @brief Method uint4x2, addr 0x65fa034, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x2 uint4x2(double_t v);

  /// @brief Method uint4x2, addr 0x65f9f68, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x2 uint4x2(float_t v);

  /// @brief Method uint4x2, addr 0x65f9f48, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x2 uint4x2(int32_t v);

  /// @brief Method uint4x2, addr 0x65f9ec0, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x2 uint4x2(uint32_t v);

  /// @brief Method uint4x3, addr 0x65fa264, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 uint4x3(::Unity::Mathematics::uint4 c0, ::Unity::Mathematics::uint4 c1, ::Unity::Mathematics::uint4 c2);

  /// @brief Method uint4x3, addr 0x65fa274, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 uint4x3(uint32_t m00, uint32_t m01, uint32_t m02, uint32_t m10, uint32_t m11, uint32_t m12, uint32_t m20, uint32_t m21, uint32_t m22, uint32_t m30,
                                                      uint32_t m31, uint32_t m32);

  /// @brief Method uint4x3, addr 0x65fa2dc, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 uint4x3(::Unity::Mathematics::bool4x3 v);

  /// @brief Method uint4x3, addr 0x65fa4c8, size 0x100, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 uint4x3(::Unity::Mathematics::double4x3 v);

  /// @brief Method uint4x3, addr 0x65fa3a4, size 0x100, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 uint4x3(::Unity::Mathematics::float4x3 v);

  /// @brief Method uint4x3, addr 0x65fa36c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 uint4x3(::Unity::Mathematics::int4x3 v);

  /// @brief Method uint4x3, addr 0x65fa2c0, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 uint4x3(bool v);

  /// @brief Method uint4x3, addr 0x65fa4a4, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 uint4x3(double_t v);

  /// @brief Method uint4x3, addr 0x65fa380, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 uint4x3(float_t v);

  /// @brief Method uint4x3, addr 0x65fa354, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 uint4x3(int32_t v);

  /// @brief Method uint4x3, addr 0x65fa2a8, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 uint4x3(uint32_t v);

  /// @brief Method uint4x4, addr 0x65fa7ac, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x4 uint4x4(::Unity::Mathematics::uint4 c0, ::Unity::Mathematics::uint4 c1, ::Unity::Mathematics::uint4 c2, ::Unity::Mathematics::uint4 c3);

  /// @brief Method uint4x4, addr 0x65fa7c0, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x4 uint4x4(uint32_t m00, uint32_t m01, uint32_t m02, uint32_t m03, uint32_t m10, uint32_t m11, uint32_t m12, uint32_t m13, uint32_t m20, uint32_t m21,
                                                      uint32_t m22, uint32_t m23, uint32_t m30, uint32_t m31, uint32_t m32, uint32_t m33);

  /// @brief Method uint4x4, addr 0x65fa850, size 0x94, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x4 uint4x4(::Unity::Mathematics::bool4x4 v);

  /// @brief Method uint4x4, addr 0x65faab8, size 0x154, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x4 uint4x4(::Unity::Mathematics::double4x4 v);

  /// @brief Method uint4x4, addr 0x65fa93c, size 0x154, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x4 uint4x4(::Unity::Mathematics::float4x4 v);

  /// @brief Method uint4x4, addr 0x65fa900, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x4 uint4x4(::Unity::Mathematics::int4x4 v);

  /// @brief Method uint4x4, addr 0x65fa830, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x4 uint4x4(bool v);

  /// @brief Method uint4x4, addr 0x65faa90, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x4 uint4x4(double_t v);

  /// @brief Method uint4x4, addr 0x65fa914, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x4 uint4x4(float_t v);

  /// @brief Method uint4x4, addr 0x65fa8e4, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x4 uint4x4(int32_t v);

  /// @brief Method uint4x4, addr 0x65fa814, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x4 uint4x4(uint32_t v);

  /// @brief Method unitexp, addr 0x65f6140, size 0x13c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion unitexp(::Unity::Mathematics::quaternion q);

  /// @brief Method unitlog, addr 0x65f641c, size 0x114, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion unitlog(::Unity::Mathematics::quaternion q);

  /// @brief Method unlerp, addr 0x65dbaec, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 unlerp(::Unity::Mathematics::double2 start, ::Unity::Mathematics::double2 end, ::Unity::Mathematics::double2 x);

  /// @brief Method unlerp, addr 0x65dbb08, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 unlerp(::Unity::Mathematics::double3 start, ::Unity::Mathematics::double3 end, ::Unity::Mathematics::double3 x);

  /// @brief Method unlerp, addr 0x65dbb3c, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 unlerp(::Unity::Mathematics::double4 start, ::Unity::Mathematics::double4 end, ::Unity::Mathematics::double4 x);

  /// @brief Method unlerp, addr 0x65dba48, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 unlerp(::Unity::Mathematics::float2 start, ::Unity::Mathematics::float2 end, ::Unity::Mathematics::float2 x);

  /// @brief Method unlerp, addr 0x65dba64, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 unlerp(::Unity::Mathematics::float3 start, ::Unity::Mathematics::float3 end, ::Unity::Mathematics::float3 x);

  /// @brief Method unlerp, addr 0x65dba98, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 unlerp(::Unity::Mathematics::float4 start, ::Unity::Mathematics::float4 end, ::Unity::Mathematics::float4 x);

  /// @brief Method unlerp, addr 0x65dbadc, size 0x10, virtual false, abstract: false, final false
  static inline double_t unlerp(double_t start, double_t end, double_t x);

  /// @brief Method unlerp, addr 0x65dba38, size 0x10, virtual false, abstract: false, final false
  static inline float_t unlerp(float_t start, float_t end, float_t x);

  /// @brief Method unpackhi, addr 0x65ef6fc, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 unpackhi(::Unity::Mathematics::double4 a, ::Unity::Mathematics::double4 b);

  /// @brief Method unpackhi, addr 0x65ef6e8, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 unpackhi(::Unity::Mathematics::float4 a, ::Unity::Mathematics::float4 b);

  /// @brief Method unpacklo, addr 0x65ef6d8, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 unpacklo(::Unity::Mathematics::double4 a, ::Unity::Mathematics::double4 b);

  /// @brief Method unpacklo, addr 0x65ef6c8, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 unpacklo(::Unity::Mathematics::float4 a, ::Unity::Mathematics::float4 b);

  /// @brief Method up, addr 0x65ee378, size 0x10, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13127 };

  /// @brief Field INFINITY offset 0xffffffff size 0x4
  static constexpr float_t _cordl_INFINITY{ INFINITY };

  /// @brief Field NAN offset 0xffffffff size 0x4
  static constexpr float_t _cordl_NAN{ NAN };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Mathematics::math) == 0x10, "Size mismatch!");

} // namespace Unity::Mathematics

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

  /// @brief Method AffineTransform, addr 0x6a35380, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::AffineTransform AffineTransform(::Unity::Mathematics::float3x4 m);

  /// @brief Method AffineTransform, addr 0x6a35340, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::AffineTransform AffineTransform(::Unity::Mathematics::float4x4 m);

  /// @brief Method AffineTransform, addr 0x6a353a4, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::AffineTransform AffineTransform(::Unity::Mathematics::RigidTransform rigid);

  /// @brief Method AffineTransform, addr 0x6a352b0, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::AffineTransform AffineTransform(::Unity::Mathematics::float3x3 rotationScale);

  /// @brief Method AffineTransform, addr 0x6a35168, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::AffineTransform AffineTransform(::Unity::Mathematics::float3 translation, ::Unity::Mathematics::quaternion rotation);

  /// @brief Method AffineTransform, addr 0x6a351dc, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::AffineTransform AffineTransform(::Unity::Mathematics::float3 translation, ::Unity::Mathematics::quaternion rotation, ::Unity::Mathematics::float3 scale);

  /// @brief Method AffineTransform, addr 0x6a35294, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::AffineTransform AffineTransform(::Unity::Mathematics::float3 translation, ::Unity::Mathematics::float3x3 rotationScale);

  /// @brief Method Euler, addr 0x6a581b8, size 0x154, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 Euler(::Unity::Mathematics::quaternion q, ::Unity::Mathematics::math_RotationOrder order);

  /// @brief Method EulerXYZ, addr 0x6a57094, size 0x2dc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 EulerXYZ(::Unity::Mathematics::quaternion q);

  /// @brief Method EulerXZY, addr 0x6a57370, size 0x2d8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 EulerXZY(::Unity::Mathematics::quaternion q);

  /// @brief Method EulerYXZ, addr 0x6a57648, size 0x2d8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 EulerYXZ(::Unity::Mathematics::quaternion q);

  /// @brief Method EulerYZX, addr 0x6a57920, size 0x2e0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 EulerYZX(::Unity::Mathematics::quaternion q);

  /// @brief Method EulerZXY, addr 0x6a57c00, size 0x2dc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 EulerZXY(::Unity::Mathematics::quaternion q);

  /// @brief Method EulerZYX, addr 0x6a57edc, size 0x2dc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 EulerZYX(::Unity::Mathematics::quaternion q);

  /// @brief Method RigidTransform, addr 0x6a60114, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::RigidTransform RigidTransform(::Unity::Mathematics::quaternion rot, ::Unity::Mathematics::float3 pos);

  /// @brief Method RigidTransform, addr 0x6a60128, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::RigidTransform RigidTransform(::Unity::Mathematics::float3x3 rotation, ::Unity::Mathematics::float3 translation);

  /// @brief Method RigidTransform, addr 0x6a6019c, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::RigidTransform RigidTransform(::Unity::Mathematics::float4x4 transform);

  /// @brief Method abs, addr 0x6a45590, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 abs(::Unity::Mathematics::double2 x);

  /// @brief Method abs, addr 0x6a4559c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 abs(::Unity::Mathematics::double3 x);

  /// @brief Method abs, addr 0x6a455ac, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 abs(::Unity::Mathematics::double4 x);

  /// @brief Method abs, addr 0x6a45558, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 abs(::Unity::Mathematics::float2 x);

  /// @brief Method abs, addr 0x6a45564, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 abs(::Unity::Mathematics::float3 x);

  /// @brief Method abs, addr 0x6a45574, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 abs(::Unity::Mathematics::float4 x);

  /// @brief Method abs, addr 0x6a454ac, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 abs(::Unity::Mathematics::int2 x);

  /// @brief Method abs, addr 0x6a454d4, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 abs(::Unity::Mathematics::int3 x);

  /// @brief Method abs, addr 0x6a45504, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 abs(::Unity::Mathematics::int4 x);

  /// @brief Method abs, addr 0x6a45588, size 0x8, virtual false, abstract: false, final false
  static inline double_t abs(double_t x);

  /// @brief Method abs, addr 0x6a45550, size 0x8, virtual false, abstract: false, final false
  static inline float_t abs(float_t x);

  /// @brief Method abs, addr 0x6a454a0, size 0xc, virtual false, abstract: false, final false
  static inline int32_t abs(int32_t x);

  /// @brief Method abs, addr 0x6a45544, size 0xc, virtual false, abstract: false, final false
  static inline int64_t abs(int64_t x);

  /// @brief Method acos, addr 0x6a484c4, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 acos(::Unity::Mathematics::double2 x);

  /// @brief Method acos, addr 0x6a48574, size 0x100, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 acos(::Unity::Mathematics::double3 x);

  /// @brief Method acos, addr 0x6a48674, size 0x148, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 acos(::Unity::Mathematics::double4 x);

  /// @brief Method acos, addr 0x6a48150, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 acos(::Unity::Mathematics::float2 x);

  /// @brief Method acos, addr 0x6a48208, size 0x108, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 acos(::Unity::Mathematics::float3 x);

  /// @brief Method acos, addr 0x6a48310, size 0x154, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 acos(::Unity::Mathematics::float4 x);

  /// @brief Method acos, addr 0x6a48464, size 0x60, virtual false, abstract: false, final false
  static inline double_t acos(double_t x);

  /// @brief Method acos, addr 0x6a480e8, size 0x68, virtual false, abstract: false, final false
  static inline float_t acos(float_t x);

  /// @brief Method adj, addr 0x6a5fe20, size 0xcc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 adj(::Unity::Mathematics::float3x3 m, ::by_ref<float_t> det);

  /// @brief Method adjInverse, addr 0x6a5feec, size 0xec, virtual false, abstract: false, final false
  static inline bool adjInverse(::Unity::Mathematics::float3x3 m, ::by_ref<::Unity::Mathematics::float3x3> i, float_t epsilon);

  /// @brief Method all, addr 0x6a51fc0, size 0x14, virtual false, abstract: false, final false
  static inline bool all(::Unity::Mathematics::bool2 x);

  /// @brief Method all, addr 0x6a51fd4, size 0x18, virtual false, abstract: false, final false
  static inline bool all(::Unity::Mathematics::bool3 x);

  /// @brief Method all, addr 0x6a51fec, size 0x14, virtual false, abstract: false, final false
  static inline bool all(::Unity::Mathematics::bool4 x);

  /// @brief Method all, addr 0x6a52110, size 0x14, virtual false, abstract: false, final false
  static inline bool all(::Unity::Mathematics::double2 x);

  /// @brief Method all, addr 0x6a52124, size 0x24, virtual false, abstract: false, final false
  static inline bool all(::Unity::Mathematics::double3 x);

  /// @brief Method all, addr 0x6a52148, size 0x28, virtual false, abstract: false, final false
  static inline bool all(::Unity::Mathematics::double4 x);

  /// @brief Method all, addr 0x6a520b0, size 0x14, virtual false, abstract: false, final false
  static inline bool all(::Unity::Mathematics::float2 x);

  /// @brief Method all, addr 0x6a520c4, size 0x24, virtual false, abstract: false, final false
  static inline bool all(::Unity::Mathematics::float3 x);

  /// @brief Method all, addr 0x6a520e8, size 0x28, virtual false, abstract: false, final false
  static inline bool all(::Unity::Mathematics::float4 x);

  /// @brief Method all, addr 0x6a52000, size 0x14, virtual false, abstract: false, final false
  static inline bool all(::Unity::Mathematics::int2 x);

  /// @brief Method all, addr 0x6a52014, size 0x24, virtual false, abstract: false, final false
  static inline bool all(::Unity::Mathematics::int3 x);

  /// @brief Method all, addr 0x6a52038, size 0x20, virtual false, abstract: false, final false
  static inline bool all(::Unity::Mathematics::int4 x);

  /// @brief Method all, addr 0x6a52058, size 0x14, virtual false, abstract: false, final false
  static inline bool all(::Unity::Mathematics::uint2 x);

  /// @brief Method all, addr 0x6a5206c, size 0x24, virtual false, abstract: false, final false
  static inline bool all(::Unity::Mathematics::uint3 x);

  /// @brief Method all, addr 0x6a52090, size 0x20, virtual false, abstract: false, final false
  static inline bool all(::Unity::Mathematics::uint4 x);

  /// @brief Method angle, addr 0x6a5fa0c, size 0x1b8, virtual false, abstract: false, final false
  static inline float_t angle(::Unity::Mathematics::quaternion q1, ::Unity::Mathematics::quaternion q2);

  /// @brief Method any, addr 0x6a51e64, size 0x10, virtual false, abstract: false, final false
  static inline bool any(::Unity::Mathematics::bool2 x);

  /// @brief Method any, addr 0x6a51e74, size 0x14, virtual false, abstract: false, final false
  static inline bool any(::Unity::Mathematics::bool3 x);

  /// @brief Method any, addr 0x6a51e88, size 0x10, virtual false, abstract: false, final false
  static inline bool any(::Unity::Mathematics::bool4 x);

  /// @brief Method any, addr 0x6a51f64, size 0x14, virtual false, abstract: false, final false
  static inline bool any(::Unity::Mathematics::double2 x);

  /// @brief Method any, addr 0x6a51f78, size 0x20, virtual false, abstract: false, final false
  static inline bool any(::Unity::Mathematics::double3 x);

  /// @brief Method any, addr 0x6a51f98, size 0x28, virtual false, abstract: false, final false
  static inline bool any(::Unity::Mathematics::double4 x);

  /// @brief Method any, addr 0x6a51f08, size 0x14, virtual false, abstract: false, final false
  static inline bool any(::Unity::Mathematics::float2 x);

  /// @brief Method any, addr 0x6a51f1c, size 0x20, virtual false, abstract: false, final false
  static inline bool any(::Unity::Mathematics::float3 x);

  /// @brief Method any, addr 0x6a51f3c, size 0x28, virtual false, abstract: false, final false
  static inline bool any(::Unity::Mathematics::float4 x);

  /// @brief Method any, addr 0x6a51e98, size 0xc, virtual false, abstract: false, final false
  static inline bool any(::Unity::Mathematics::int2 x);

  /// @brief Method any, addr 0x6a51ea4, size 0x14, virtual false, abstract: false, final false
  static inline bool any(::Unity::Mathematics::int3 x);

  /// @brief Method any, addr 0x6a51eb8, size 0x18, virtual false, abstract: false, final false
  static inline bool any(::Unity::Mathematics::int4 x);

  /// @brief Method any, addr 0x6a51ed0, size 0xc, virtual false, abstract: false, final false
  static inline bool any(::Unity::Mathematics::uint2 x);

  /// @brief Method any, addr 0x6a51edc, size 0x14, virtual false, abstract: false, final false
  static inline bool any(::Unity::Mathematics::uint3 x);

  /// @brief Method any, addr 0x6a51ef0, size 0x18, virtual false, abstract: false, final false
  static inline bool any(::Unity::Mathematics::uint4 x);

  /// @brief Method asdouble, addr 0x6a437fc, size 0x8, virtual false, abstract: false, final false
  static inline double_t asdouble(int64_t x);

  /// @brief Method asdouble, addr 0x6a43804, size 0x8, virtual false, abstract: false, final false
  static inline double_t asdouble(uint64_t x);

  /// @brief Method asfloat, addr 0x6a4374c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 asfloat(::Unity::Mathematics::int2 x);

  /// @brief Method asfloat, addr 0x6a43794, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 asfloat(::Unity::Mathematics::uint2 x);

  /// @brief Method asfloat, addr 0x6a4375c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 asfloat(::Unity::Mathematics::int3 x);

  /// @brief Method asfloat, addr 0x6a437a4, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 asfloat(::Unity::Mathematics::uint3 x);

  /// @brief Method asfloat, addr 0x6a43770, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 asfloat(::Unity::Mathematics::int4 x);

  /// @brief Method asfloat, addr 0x6a437b8, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 asfloat(::Unity::Mathematics::uint4 x);

  /// @brief Method asfloat, addr 0x6a43744, size 0x8, virtual false, abstract: false, final false
  static inline float_t asfloat(int32_t x);

  /// @brief Method asfloat, addr 0x6a4378c, size 0x8, virtual false, abstract: false, final false
  static inline float_t asfloat(uint32_t x);

  /// @brief Method asin, addr 0x6a49940, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 asin(::Unity::Mathematics::double2 x);

  /// @brief Method asin, addr 0x6a499f0, size 0x100, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 asin(::Unity::Mathematics::double3 x);

  /// @brief Method asin, addr 0x6a49af0, size 0x148, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 asin(::Unity::Mathematics::double4 x);

  /// @brief Method asin, addr 0x6a495cc, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 asin(::Unity::Mathematics::float2 x);

  /// @brief Method asin, addr 0x6a49684, size 0x108, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 asin(::Unity::Mathematics::float3 x);

  /// @brief Method asin, addr 0x6a4978c, size 0x154, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 asin(::Unity::Mathematics::float4 x);

  /// @brief Method asin, addr 0x6a498e0, size 0x60, virtual false, abstract: false, final false
  static inline double_t asin(double_t x);

  /// @brief Method asin, addr 0x6a49564, size 0x68, virtual false, abstract: false, final false
  static inline float_t asin(float_t x);

  /// @brief Method asint, addr 0x6a43690, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 asint(::Unity::Mathematics::float2 x);

  /// @brief Method asint, addr 0x6a43678, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 asint(::Unity::Mathematics::uint2 x);

  /// @brief Method asint, addr 0x6a436a0, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 asint(::Unity::Mathematics::float3 x);

  /// @brief Method asint, addr 0x6a4367c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 asint(::Unity::Mathematics::uint3 x);

  /// @brief Method asint, addr 0x6a436b4, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 asint(::Unity::Mathematics::float4 x);

  /// @brief Method asint, addr 0x6a43684, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 asint(::Unity::Mathematics::uint4 x);

  /// @brief Method asint, addr 0x6a43688, size 0x8, virtual false, abstract: false, final false
  static inline int32_t asint(float_t x);

  /// @brief Method asint, addr 0x6a43674, size 0x4, virtual false, abstract: false, final false
  static inline int32_t asint(uint32_t x);

  /// @brief Method aslong, addr 0x6a43730, size 0x8, virtual false, abstract: false, final false
  static inline int64_t aslong(double_t x);

  /// @brief Method aslong, addr 0x6a4372c, size 0x4, virtual false, abstract: false, final false
  static inline int64_t aslong(uint64_t x);

  /// @brief Method asuint, addr 0x6a436ec, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 asuint(::Unity::Mathematics::float2 x);

  /// @brief Method asuint, addr 0x6a436d4, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 asuint(::Unity::Mathematics::int2 x);

  /// @brief Method asuint, addr 0x6a436fc, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 asuint(::Unity::Mathematics::float3 x);

  /// @brief Method asuint, addr 0x6a436d8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 asuint(::Unity::Mathematics::int3 x);

  /// @brief Method asuint, addr 0x6a43710, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 asuint(::Unity::Mathematics::float4 x);

  /// @brief Method asuint, addr 0x6a436e0, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 asuint(::Unity::Mathematics::int4 x);

  /// @brief Method asuint, addr 0x6a436e4, size 0x8, virtual false, abstract: false, final false
  static inline uint32_t asuint(float_t x);

  /// @brief Method asuint, addr 0x6a436d0, size 0x4, virtual false, abstract: false, final false
  static inline uint32_t asuint(int32_t x);

  /// @brief Method asulong, addr 0x6a4373c, size 0x8, virtual false, abstract: false, final false
  static inline uint64_t asulong(double_t x);

  /// @brief Method asulong, addr 0x6a43738, size 0x4, virtual false, abstract: false, final false
  static inline uint64_t asulong(int64_t x);

  /// @brief Method atan, addr 0x6a46894, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 atan(::Unity::Mathematics::double2 x);

  /// @brief Method atan, addr 0x6a46944, size 0x100, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 atan(::Unity::Mathematics::double3 x);

  /// @brief Method atan, addr 0x6a46a44, size 0x148, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 atan(::Unity::Mathematics::double4 x);

  /// @brief Method atan, addr 0x6a46520, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 atan(::Unity::Mathematics::float2 x);

  /// @brief Method atan, addr 0x6a465d8, size 0x108, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 atan(::Unity::Mathematics::float3 x);

  /// @brief Method atan, addr 0x6a466e0, size 0x154, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 atan(::Unity::Mathematics::float4 x);

  /// @brief Method atan, addr 0x6a46834, size 0x60, virtual false, abstract: false, final false
  static inline double_t atan(double_t x);

  /// @brief Method atan, addr 0x6a464b8, size 0x68, virtual false, abstract: false, final false
  static inline float_t atan(float_t x);

  /// @brief Method atan2, addr 0x6a46fe0, size 0xc8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 atan2(::Unity::Mathematics::double2 y, ::Unity::Mathematics::double2 x);

  /// @brief Method atan2, addr 0x6a470a8, size 0x120, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 atan2(::Unity::Mathematics::double3 y, ::Unity::Mathematics::double3 x);

  /// @brief Method atan2, addr 0x6a471c8, size 0x178, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 atan2(::Unity::Mathematics::double4 y, ::Unity::Mathematics::double4 x);

  /// @brief Method atan2, addr 0x6a46bfc, size 0xd0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 atan2(::Unity::Mathematics::float2 y, ::Unity::Mathematics::float2 x);

  /// @brief Method atan2, addr 0x6a46ccc, size 0x128, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 atan2(::Unity::Mathematics::float3 y, ::Unity::Mathematics::float3 x);

  /// @brief Method atan2, addr 0x6a46df4, size 0x184, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 atan2(::Unity::Mathematics::float4 y, ::Unity::Mathematics::float4 x);

  /// @brief Method atan2, addr 0x6a46f78, size 0x68, virtual false, abstract: false, final false
  static inline double_t atan2(double_t y, double_t x);

  /// @brief Method atan2, addr 0x6a46b8c, size 0x70, virtual false, abstract: false, final false
  static inline float_t atan2(float_t y, float_t x);

  /// @brief Method back, addr 0x6a57064, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 back();

  /// @brief Method bitmask, addr 0x6a437d4, size 0x28, virtual false, abstract: false, final false
  static inline int32_t bitmask(::Unity::Mathematics::bool4 value);

  /// @brief Method bool2, addr 0x6a35d1c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 bool2(bool v);

  /// @brief Method bool2, addr 0x6a35cf8, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 bool2(bool x, bool y);

  /// @brief Method bool2, addr 0x6a35d10, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 bool2(::Unity::Mathematics::bool2 xy);

  /// @brief Method bool2x2, addr 0x6a36038, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 bool2x2(::Unity::Mathematics::bool2 c0, ::Unity::Mathematics::bool2 c1);

  /// @brief Method bool2x2, addr 0x6a36040, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 bool2x2(bool m00, bool m01, bool m10, bool m11);

  /// @brief Method bool2x2, addr 0x6a36064, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 bool2x2(bool v);

  /// @brief Method bool2x3, addr 0x6a36180, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 bool2x3(::Unity::Mathematics::bool2 c0, ::Unity::Mathematics::bool2 c1, ::Unity::Mathematics::bool2 c2);

  /// @brief Method bool2x3, addr 0x6a36194, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 bool2x3(bool m00, bool m01, bool m02, bool m10, bool m11, bool m12);

  /// @brief Method bool2x3, addr 0x6a361cc, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 bool2x3(bool v);

  /// @brief Method bool2x4, addr 0x6a36360, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 bool2x4(::Unity::Mathematics::bool2 c0, ::Unity::Mathematics::bool2 c1, ::Unity::Mathematics::bool2 c2, ::Unity::Mathematics::bool2 c3);

  /// @brief Method bool2x4, addr 0x6a3637c, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 bool2x4(bool m00, bool m01, bool m02, bool m03, bool m10, bool m11, bool m12, bool m13);

  /// @brief Method bool2x4, addr 0x6a363c4, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 bool2x4(bool v);

  /// @brief Method bool3, addr 0x6a36610, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 bool3(bool v);

  /// @brief Method bool3, addr 0x6a365a0, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 bool3(bool x, bool y, bool z);

  /// @brief Method bool3, addr 0x6a365c4, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 bool3(bool x, ::Unity::Mathematics::bool2 yz);

  /// @brief Method bool3, addr 0x6a365e0, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 bool3(::Unity::Mathematics::bool2 xy, bool z);

  /// @brief Method bool3, addr 0x6a36600, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 bool3(::Unity::Mathematics::bool3 xyz);

  /// @brief Method bool3x2, addr 0x6a36984, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 bool3x2(::Unity::Mathematics::bool3 c0, ::Unity::Mathematics::bool3 c1);

  /// @brief Method bool3x2, addr 0x6a3698c, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 bool3x2(bool m00, bool m01, bool m10, bool m11, bool m20, bool m21);

  /// @brief Method bool3x2, addr 0x6a369e0, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 bool3x2(bool v);

  /// @brief Method bool3x3, addr 0x6a36b84, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 bool3x3(::Unity::Mathematics::bool3 c0, ::Unity::Mathematics::bool3 c1, ::Unity::Mathematics::bool3 c2);

  /// @brief Method bool3x3, addr 0x6a36bb8, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 bool3x3(bool m00, bool m01, bool m02, bool m10, bool m11, bool m12, bool m20, bool m21, bool m22);

  /// @brief Method bool3x3, addr 0x6a36c34, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 bool3x3(bool v);

  /// @brief Method bool3x4, addr 0x6a36ec4, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 bool3x4(::Unity::Mathematics::bool3 c0, ::Unity::Mathematics::bool3 c1, ::Unity::Mathematics::bool3 c2, ::Unity::Mathematics::bool3 c3);

  /// @brief Method bool3x4, addr 0x6a36f08, size 0xa8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 bool3x4(bool m00, bool m01, bool m02, bool m03, bool m10, bool m11, bool m12, bool m13, bool m20, bool m21, bool m22, bool m23);

  /// @brief Method bool3x4, addr 0x6a36fb0, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 bool3x4(bool v);

  /// @brief Method bool4, addr 0x6a37444, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 bool4(bool v);

  /// @brief Method bool4, addr 0x6a3734c, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 bool4(bool x, bool y, bool z, bool w);

  /// @brief Method bool4, addr 0x6a37380, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 bool4(bool x, bool y, ::Unity::Mathematics::bool2 zw);

  /// @brief Method bool4, addr 0x6a373a0, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 bool4(bool x, ::Unity::Mathematics::bool2 yz, bool w);

  /// @brief Method bool4, addr 0x6a373c4, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 bool4(bool x, ::Unity::Mathematics::bool3 yzw);

  /// @brief Method bool4, addr 0x6a373d8, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 bool4(::Unity::Mathematics::bool2 xy, bool z, bool w);

  /// @brief Method bool4, addr 0x6a37404, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 bool4(::Unity::Mathematics::bool2 xy, ::Unity::Mathematics::bool2 zw);

  /// @brief Method bool4, addr 0x6a3741c, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 bool4(::Unity::Mathematics::bool3 xyz, bool w);

  /// @brief Method bool4, addr 0x6a3743c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 bool4(::Unity::Mathematics::bool4 xyzw);

  /// @brief Method bool4x2, addr 0x6a377f0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 bool4x2(::Unity::Mathematics::bool4 c0, ::Unity::Mathematics::bool4 c1);

  /// @brief Method bool4x2, addr 0x6a377f8, size 0x5c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 bool4x2(bool m00, bool m01, bool m10, bool m11, bool m20, bool m21, bool m30, bool m31);

  /// @brief Method bool4x2, addr 0x6a37854, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 bool4x2(bool v);

  /// @brief Method bool4x3, addr 0x6a37a70, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 bool4x3(::Unity::Mathematics::bool4 c0, ::Unity::Mathematics::bool4 c1, ::Unity::Mathematics::bool4 c2);

  /// @brief Method bool4x3, addr 0x6a37a7c, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 bool4x3(bool m00, bool m01, bool m02, bool m10, bool m11, bool m12, bool m20, bool m21, bool m22, bool m30, bool m31, bool m32);

  /// @brief Method bool4x3, addr 0x6a37b0c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 bool4x3(bool v);

  /// @brief Method bool4x4, addr 0x6a37de0, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x4 bool4x4(::Unity::Mathematics::bool4 c0, ::Unity::Mathematics::bool4 c1, ::Unity::Mathematics::bool4 c2, ::Unity::Mathematics::bool4 c3);

  /// @brief Method bool4x4, addr 0x6a37df0, size 0xc8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x4 bool4x4(bool m00, bool m01, bool m02, bool m03, bool m10, bool m11, bool m12, bool m13, bool m20, bool m21, bool m22, bool m23, bool m30, bool m31,
                                                      bool m32, bool m33);

  /// @brief Method bool4x4, addr 0x6a37eb8, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x4 bool4x4(bool v);

  /// @brief Method ceil, addr 0x6a4a580, size 0x9c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 ceil(::Unity::Mathematics::double2 x);

  /// @brief Method ceil, addr 0x6a4a61c, size 0xe0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 ceil(::Unity::Mathematics::double3 x);

  /// @brief Method ceil, addr 0x6a4a6fc, size 0x11c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 ceil(::Unity::Mathematics::double4 x);

  /// @brief Method ceil, addr 0x6a4a288, size 0x9c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 ceil(::Unity::Mathematics::float2 x);

  /// @brief Method ceil, addr 0x6a4a324, size 0xe0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 ceil(::Unity::Mathematics::float3 x);

  /// @brief Method ceil, addr 0x6a4a404, size 0x11c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 ceil(::Unity::Mathematics::float4 x);

  /// @brief Method ceil, addr 0x6a4a520, size 0x60, virtual false, abstract: false, final false
  static inline double_t ceil(double_t x);

  /// @brief Method ceil, addr 0x6a4a228, size 0x60, virtual false, abstract: false, final false
  static inline float_t ceil(float_t x);

  /// @brief Method ceillog2, addr 0x6a553bc, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 ceillog2(::Unity::Mathematics::int2 x);

  /// @brief Method ceillog2, addr 0x6a55614, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 ceillog2(::Unity::Mathematics::uint2 x);

  /// @brief Method ceillog2, addr 0x6a55438, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 ceillog2(::Unity::Mathematics::int3 x);

  /// @brief Method ceillog2, addr 0x6a55690, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 ceillog2(::Unity::Mathematics::uint3 x);

  /// @brief Method ceillog2, addr 0x6a554ec, size 0xf0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 ceillog2(::Unity::Mathematics::int4 x);

  /// @brief Method ceillog2, addr 0x6a55744, size 0xf0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 ceillog2(::Unity::Mathematics::uint4 x);

  /// @brief Method ceillog2, addr 0x6a55384, size 0x38, virtual false, abstract: false, final false
  static inline int32_t ceillog2(int32_t x);

  /// @brief Method ceillog2, addr 0x6a555dc, size 0x38, virtual false, abstract: false, final false
  static inline int32_t ceillog2(uint32_t x);

  /// @brief Method ceilpow2, addr 0x6a54f3c, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 ceilpow2(::Unity::Mathematics::int2 x);

  /// @brief Method ceilpow2, addr 0x6a54fc4, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 ceilpow2(::Unity::Mathematics::int3 x);

  /// @brief Method ceilpow2, addr 0x6a55068, size 0x104, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 ceilpow2(::Unity::Mathematics::int4 x);

  /// @brief Method ceilpow2, addr 0x6a5518c, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 ceilpow2(::Unity::Mathematics::uint2 x);

  /// @brief Method ceilpow2, addr 0x6a551f8, size 0x94, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 ceilpow2(::Unity::Mathematics::uint3 x);

  /// @brief Method ceilpow2, addr 0x6a5528c, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 ceilpow2(::Unity::Mathematics::uint4 x);

  /// @brief Method ceilpow2, addr 0x6a54f1c, size 0x20, virtual false, abstract: false, final false
  static inline int32_t ceilpow2(int32_t x);

  /// @brief Method ceilpow2, addr 0x6a5533c, size 0x24, virtual false, abstract: false, final false
  static inline int64_t ceilpow2(int64_t x);

  /// @brief Method ceilpow2, addr 0x6a5516c, size 0x20, virtual false, abstract: false, final false
  static inline uint32_t ceilpow2(uint32_t x);

  /// @brief Method ceilpow2, addr 0x6a55360, size 0x24, virtual false, abstract: false, final false
  static inline uint64_t ceilpow2(uint64_t x);

  /// @brief Method chgsign, addr 0x6a56c08, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 chgsign(::Unity::Mathematics::float2 x, ::Unity::Mathematics::float2 y);

  /// @brief Method chgsign, addr 0x6a56c40, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 chgsign(::Unity::Mathematics::float3 x, ::Unity::Mathematics::float3 y);

  /// @brief Method chgsign, addr 0x6a56c8c, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 chgsign(::Unity::Mathematics::float4 x, ::Unity::Mathematics::float4 y);

  /// @brief Method chgsign, addr 0x6a56bf0, size 0x18, virtual false, abstract: false, final false
  static inline float_t chgsign(float_t x, float_t y);

  /// @brief Method clamp, addr 0x6a45038, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 clamp(::Unity::Mathematics::double2 valueToClamp, ::Unity::Mathematics::double2 lowerBound, ::Unity::Mathematics::double2 upperBound);

  /// @brief Method clamp, addr 0x6a4507c, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 clamp(::Unity::Mathematics::double3 valueToClamp, ::Unity::Mathematics::double3 lowerBound, ::Unity::Mathematics::double3 upperBound);

  /// @brief Method clamp, addr 0x6a45104, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 clamp(::Unity::Mathematics::double4 valueToClamp, ::Unity::Mathematics::double4 lowerBound, ::Unity::Mathematics::double4 upperBound);

  /// @brief Method clamp, addr 0x6a44ed8, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 clamp(::Unity::Mathematics::float2 valueToClamp, ::Unity::Mathematics::float2 lowerBound, ::Unity::Mathematics::float2 upperBound);

  /// @brief Method clamp, addr 0x6a44f1c, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 clamp(::Unity::Mathematics::float3 valueToClamp, ::Unity::Mathematics::float3 lowerBound, ::Unity::Mathematics::float3 upperBound);

  /// @brief Method clamp, addr 0x6a44f94, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 clamp(::Unity::Mathematics::float4 valueToClamp, ::Unity::Mathematics::float4 lowerBound, ::Unity::Mathematics::float4 upperBound);

  /// @brief Method clamp, addr 0x6a44cb4, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 clamp(::Unity::Mathematics::int2 valueToClamp, ::Unity::Mathematics::int2 lowerBound, ::Unity::Mathematics::int2 upperBound);

  /// @brief Method clamp, addr 0x6a44ce8, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 clamp(::Unity::Mathematics::int3 valueToClamp, ::Unity::Mathematics::int3 lowerBound, ::Unity::Mathematics::int3 upperBound);

  /// @brief Method clamp, addr 0x6a44d2c, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 clamp(::Unity::Mathematics::int4 valueToClamp, ::Unity::Mathematics::int4 lowerBound, ::Unity::Mathematics::int4 upperBound);

  /// @brief Method clamp, addr 0x6a44da4, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 clamp(::Unity::Mathematics::uint2 valueToClamp, ::Unity::Mathematics::uint2 lowerBound, ::Unity::Mathematics::uint2 upperBound);

  /// @brief Method clamp, addr 0x6a44dd8, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 clamp(::Unity::Mathematics::uint3 valueToClamp, ::Unity::Mathematics::uint3 lowerBound, ::Unity::Mathematics::uint3 upperBound);

  /// @brief Method clamp, addr 0x6a44e1c, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 clamp(::Unity::Mathematics::uint4 valueToClamp, ::Unity::Mathematics::uint4 lowerBound, ::Unity::Mathematics::uint4 upperBound);

  /// @brief Method clamp, addr 0x6a45008, size 0x30, virtual false, abstract: false, final false
  static inline double_t clamp(double_t valueToClamp, double_t lowerBound, double_t upperBound);

  /// @brief Method clamp, addr 0x6a44ea8, size 0x30, virtual false, abstract: false, final false
  static inline float_t clamp(float_t valueToClamp, float_t lowerBound, float_t upperBound);

  /// @brief Method clamp, addr 0x6a44ca0, size 0x14, virtual false, abstract: false, final false
  static inline int32_t clamp(int32_t valueToClamp, int32_t lowerBound, int32_t upperBound);

  /// @brief Method clamp, addr 0x6a44e80, size 0x14, virtual false, abstract: false, final false
  static inline int64_t clamp(int64_t valueToClamp, int64_t lowerBound, int64_t upperBound);

  /// @brief Method clamp, addr 0x6a44d90, size 0x14, virtual false, abstract: false, final false
  static inline uint32_t clamp(uint32_t valueToClamp, uint32_t lowerBound, uint32_t upperBound);

  /// @brief Method clamp, addr 0x6a44e94, size 0x14, virtual false, abstract: false, final false
  static inline uint64_t clamp(uint64_t valueToClamp, uint64_t lowerBound, uint64_t upperBound);

  /// @brief Method cmax, addr 0x6a56104, size 0x1c, virtual false, abstract: false, final false
  static inline double_t cmax(::Unity::Mathematics::double2 x);

  /// @brief Method cmax, addr 0x6a56120, size 0x30, virtual false, abstract: false, final false
  static inline double_t cmax(::Unity::Mathematics::double3 x);

  /// @brief Method cmax, addr 0x6a56150, size 0x44, virtual false, abstract: false, final false
  static inline double_t cmax(::Unity::Mathematics::double4 x);

  /// @brief Method cmax, addr 0x6a56074, size 0x1c, virtual false, abstract: false, final false
  static inline float_t cmax(::Unity::Mathematics::float2 x);

  /// @brief Method cmax, addr 0x6a56090, size 0x30, virtual false, abstract: false, final false
  static inline float_t cmax(::Unity::Mathematics::float3 x);

  /// @brief Method cmax, addr 0x6a560c0, size 0x44, virtual false, abstract: false, final false
  static inline float_t cmax(::Unity::Mathematics::float4 x);

  /// @brief Method cmax, addr 0x6a55fdc, size 0x10, virtual false, abstract: false, final false
  static inline int32_t cmax(::Unity::Mathematics::int2 x);

  /// @brief Method cmax, addr 0x6a55fec, size 0x18, virtual false, abstract: false, final false
  static inline int32_t cmax(::Unity::Mathematics::int3 x);

  /// @brief Method cmax, addr 0x6a56004, size 0x24, virtual false, abstract: false, final false
  static inline int32_t cmax(::Unity::Mathematics::int4 x);

  /// @brief Method cmax, addr 0x6a56028, size 0x10, virtual false, abstract: false, final false
  static inline uint32_t cmax(::Unity::Mathematics::uint2 x);

  /// @brief Method cmax, addr 0x6a56038, size 0x18, virtual false, abstract: false, final false
  static inline uint32_t cmax(::Unity::Mathematics::uint3 x);

  /// @brief Method cmax, addr 0x6a56050, size 0x24, virtual false, abstract: false, final false
  static inline uint32_t cmax(::Unity::Mathematics::uint4 x);

  /// @brief Method cmin, addr 0x6a55f4c, size 0x1c, virtual false, abstract: false, final false
  static inline double_t cmin(::Unity::Mathematics::double2 x);

  /// @brief Method cmin, addr 0x6a55f68, size 0x30, virtual false, abstract: false, final false
  static inline double_t cmin(::Unity::Mathematics::double3 x);

  /// @brief Method cmin, addr 0x6a55f98, size 0x44, virtual false, abstract: false, final false
  static inline double_t cmin(::Unity::Mathematics::double4 x);

  /// @brief Method cmin, addr 0x6a55ebc, size 0x1c, virtual false, abstract: false, final false
  static inline float_t cmin(::Unity::Mathematics::float2 x);

  /// @brief Method cmin, addr 0x6a55ed8, size 0x30, virtual false, abstract: false, final false
  static inline float_t cmin(::Unity::Mathematics::float3 x);

  /// @brief Method cmin, addr 0x6a55f08, size 0x44, virtual false, abstract: false, final false
  static inline float_t cmin(::Unity::Mathematics::float4 x);

  /// @brief Method cmin, addr 0x6a55e24, size 0x10, virtual false, abstract: false, final false
  static inline int32_t cmin(::Unity::Mathematics::int2 x);

  /// @brief Method cmin, addr 0x6a55e34, size 0x18, virtual false, abstract: false, final false
  static inline int32_t cmin(::Unity::Mathematics::int3 x);

  /// @brief Method cmin, addr 0x6a55e4c, size 0x24, virtual false, abstract: false, final false
  static inline int32_t cmin(::Unity::Mathematics::int4 x);

  /// @brief Method cmin, addr 0x6a55e70, size 0x10, virtual false, abstract: false, final false
  static inline uint32_t cmin(::Unity::Mathematics::uint2 x);

  /// @brief Method cmin, addr 0x6a55e80, size 0x18, virtual false, abstract: false, final false
  static inline uint32_t cmin(::Unity::Mathematics::uint3 x);

  /// @brief Method cmin, addr 0x6a55e98, size 0x24, virtual false, abstract: false, final false
  static inline uint32_t cmin(::Unity::Mathematics::uint4 x);

  /// @brief Method compress, addr 0x6a56444, size 0x58, virtual false, abstract: false, final false
  static inline int32_t compress(float_t* output, int32_t index, ::Unity::Mathematics::float4 val, ::Unity::Mathematics::bool4 mask);

  /// @brief Method compress, addr 0x6a56384, size 0x60, virtual false, abstract: false, final false
  static inline int32_t compress(int32_t* output, int32_t index, ::Unity::Mathematics::int4 val, ::Unity::Mathematics::bool4 mask);

  /// @brief Method compress, addr 0x6a563e4, size 0x60, virtual false, abstract: false, final false
  static inline int32_t compress(uint32_t* output, int32_t index, ::Unity::Mathematics::uint4 val, ::Unity::Mathematics::bool4 mask);

  /// @brief Method conjugate, addr 0x6a5ea48, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion conjugate(::Unity::Mathematics::quaternion q);

  /// @brief Method cos, addr 0x6a4771c, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 cos(::Unity::Mathematics::double2 x);

  /// @brief Method cos, addr 0x6a477cc, size 0x100, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 cos(::Unity::Mathematics::double3 x);

  /// @brief Method cos, addr 0x6a478cc, size 0x148, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 cos(::Unity::Mathematics::double4 x);

  /// @brief Method cos, addr 0x6a473a8, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 cos(::Unity::Mathematics::float2 x);

  /// @brief Method cos, addr 0x6a47460, size 0x108, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 cos(::Unity::Mathematics::float3 x);

  /// @brief Method cos, addr 0x6a47568, size 0x154, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 cos(::Unity::Mathematics::float4 x);

  /// @brief Method cos, addr 0x6a476bc, size 0x60, virtual false, abstract: false, final false
  static inline double_t cos(double_t x);

  /// @brief Method cos, addr 0x6a47340, size 0x68, virtual false, abstract: false, final false
  static inline float_t cos(float_t x);

  /// @brief Method cosh, addr 0x6a47df0, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 cosh(::Unity::Mathematics::double2 x);

  /// @brief Method cosh, addr 0x6a47ea0, size 0x100, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 cosh(::Unity::Mathematics::double3 x);

  /// @brief Method cosh, addr 0x6a47fa0, size 0x148, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 cosh(::Unity::Mathematics::double4 x);

  /// @brief Method cosh, addr 0x6a47a7c, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 cosh(::Unity::Mathematics::float2 x);

  /// @brief Method cosh, addr 0x6a47b34, size 0x108, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 cosh(::Unity::Mathematics::float3 x);

  /// @brief Method cosh, addr 0x6a47c3c, size 0x154, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 cosh(::Unity::Mathematics::float4 x);

  /// @brief Method cosh, addr 0x6a47d90, size 0x60, virtual false, abstract: false, final false
  static inline double_t cosh(double_t x);

  /// @brief Method cosh, addr 0x6a47a14, size 0x68, virtual false, abstract: false, final false
  static inline float_t cosh(float_t x);

  /// @brief Method countbits, addr 0x6a539f8, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 countbits(::Unity::Mathematics::int2 x);

  /// @brief Method countbits, addr 0x6a53c24, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 countbits(::Unity::Mathematics::uint2 x);

  /// @brief Method countbits, addr 0x6a53a80, size 0xac, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 countbits(::Unity::Mathematics::int3 x);

  /// @brief Method countbits, addr 0x6a53cac, size 0xac, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 countbits(::Unity::Mathematics::uint3 x);

  /// @brief Method countbits, addr 0x6a53b2c, size 0xe4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 countbits(::Unity::Mathematics::int4 x);

  /// @brief Method countbits, addr 0x6a53d58, size 0xe4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 countbits(::Unity::Mathematics::uint4 x);

  /// @brief Method countbits, addr 0x6a539e4, size 0x14, virtual false, abstract: false, final false
  static inline int32_t countbits(int32_t x);

  /// @brief Method countbits, addr 0x6a53e50, size 0x14, virtual false, abstract: false, final false
  static inline int32_t countbits(int64_t x);

  /// @brief Method countbits, addr 0x6a53c10, size 0x14, virtual false, abstract: false, final false
  static inline int32_t countbits(uint32_t x);

  /// @brief Method countbits, addr 0x6a53e3c, size 0x14, virtual false, abstract: false, final false
  static inline int32_t countbits(uint64_t x);

  /// @brief Method cross, addr 0x6a51940, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 cross(::Unity::Mathematics::double3 x, ::Unity::Mathematics::double3 y);

  /// @brief Method cross, addr 0x6a51918, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 cross(::Unity::Mathematics::float3 x, ::Unity::Mathematics::float3 y);

  /// @brief Method csum, addr 0x6a56220, size 0x8, virtual false, abstract: false, final false
  static inline double_t csum(::Unity::Mathematics::double2 x);

  /// @brief Method csum, addr 0x6a56228, size 0xc, virtual false, abstract: false, final false
  static inline double_t csum(::Unity::Mathematics::double3 x);

  /// @brief Method csum, addr 0x6a56234, size 0x10, virtual false, abstract: false, final false
  static inline double_t csum(::Unity::Mathematics::double4 x);

  /// @brief Method csum, addr 0x6a561fc, size 0x8, virtual false, abstract: false, final false
  static inline float_t csum(::Unity::Mathematics::float2 x);

  /// @brief Method csum, addr 0x6a56204, size 0xc, virtual false, abstract: false, final false
  static inline float_t csum(::Unity::Mathematics::float3 x);

  /// @brief Method csum, addr 0x6a56210, size 0x10, virtual false, abstract: false, final false
  static inline float_t csum(::Unity::Mathematics::float4 x);

  /// @brief Method csum, addr 0x6a56194, size 0xc, virtual false, abstract: false, final false
  static inline int32_t csum(::Unity::Mathematics::int2 x);

  /// @brief Method csum, addr 0x6a561a0, size 0x10, virtual false, abstract: false, final false
  static inline int32_t csum(::Unity::Mathematics::int3 x);

  /// @brief Method csum, addr 0x6a561b0, size 0x18, virtual false, abstract: false, final false
  static inline int32_t csum(::Unity::Mathematics::int4 x);

  /// @brief Method csum, addr 0x6a561c8, size 0xc, virtual false, abstract: false, final false
  static inline uint32_t csum(::Unity::Mathematics::uint2 x);

  /// @brief Method csum, addr 0x6a561d4, size 0x10, virtual false, abstract: false, final false
  static inline uint32_t csum(::Unity::Mathematics::uint3 x);

  /// @brief Method csum, addr 0x6a561e4, size 0x18, virtual false, abstract: false, final false
  static inline uint32_t csum(::Unity::Mathematics::uint4 x);

  /// @brief Method decompose, addr 0x6a35a18, size 0x108, virtual false, abstract: false, final false
  static inline void decompose(::Unity::Mathematics::AffineTransform a, ::by_ref<::Unity::Mathematics::float3> translation, ::by_ref<::Unity::Mathematics::quaternion> rotation,
                               ::by_ref<::Unity::Mathematics::float3> scale);

  /// @brief Method degrees, addr 0x6a55ddc, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 degrees(::Unity::Mathematics::double2 x);

  /// @brief Method degrees, addr 0x6a55df0, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 degrees(::Unity::Mathematics::double3 x);

  /// @brief Method degrees, addr 0x6a55e08, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 degrees(::Unity::Mathematics::double4 x);

  /// @brief Method degrees, addr 0x6a55d84, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 degrees(::Unity::Mathematics::float2 x);

  /// @brief Method degrees, addr 0x6a55d98, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 degrees(::Unity::Mathematics::float3 x);

  /// @brief Method degrees, addr 0x6a55db0, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 degrees(::Unity::Mathematics::float4 x);

  /// @brief Method degrees, addr 0x6a55dcc, size 0x10, virtual false, abstract: false, final false
  static inline double_t degrees(double_t x);

  /// @brief Method degrees, addr 0x6a55d74, size 0x10, virtual false, abstract: false, final false
  static inline float_t degrees(float_t x);

  /// @brief Method determinant, addr 0x6a38820, size 0x10, virtual false, abstract: false, final false
  static inline double_t determinant(::Unity::Mathematics::double2x2 m);

  /// @brief Method determinant, addr 0x6a39b3c, size 0x54, virtual false, abstract: false, final false
  static inline double_t determinant(::Unity::Mathematics::double3x3 m);

  /// @brief Method determinant, addr 0x6a3bb50, size 0xe8, virtual false, abstract: false, final false
  static inline double_t determinant(::Unity::Mathematics::double4x4 m);

  /// @brief Method determinant, addr 0x6a3c504, size 0x10, virtual false, abstract: false, final false
  static inline float_t determinant(::Unity::Mathematics::float2x2 m);

  /// @brief Method determinant, addr 0x6a3d628, size 0x54, virtual false, abstract: false, final false
  static inline float_t determinant(::Unity::Mathematics::float3x3 m);

  /// @brief Method determinant, addr 0x6a3f1d8, size 0xe8, virtual false, abstract: false, final false
  static inline float_t determinant(::Unity::Mathematics::float4x4 m);

  /// @brief Method determinant, addr 0x6a40590, size 0x18, virtual false, abstract: false, final false
  static inline int32_t determinant(::Unity::Mathematics::int2x2 m);

  /// @brief Method determinant, addr 0x6a418e8, size 0x4c, virtual false, abstract: false, final false
  static inline int32_t determinant(::Unity::Mathematics::int3x3 m);

  /// @brief Method determinant, addr 0x6a43388, size 0xc4, virtual false, abstract: false, final false
  static inline int32_t determinant(::Unity::Mathematics::int4x4 m);

  /// @brief Method distance, addr 0x6a5163c, size 0x88, virtual false, abstract: false, final false
  static inline double_t distance(::Unity::Mathematics::double2 x, ::Unity::Mathematics::double2 y);

  /// @brief Method distance, addr 0x6a516c4, size 0xa4, virtual false, abstract: false, final false
  static inline double_t distance(::Unity::Mathematics::double3 x, ::Unity::Mathematics::double3 y);

  /// @brief Method distance, addr 0x6a51768, size 0xc0, virtual false, abstract: false, final false
  static inline double_t distance(::Unity::Mathematics::double4 x, ::Unity::Mathematics::double4 y);

  /// @brief Method distance, addr 0x6a51634, size 0x8, virtual false, abstract: false, final false
  static inline double_t distance(double_t x, double_t y);

  /// @brief Method distance, addr 0x6a51448, size 0x88, virtual false, abstract: false, final false
  static inline float_t distance(::Unity::Mathematics::float2 x, ::Unity::Mathematics::float2 y);

  /// @brief Method distance, addr 0x6a514d0, size 0xa4, virtual false, abstract: false, final false
  static inline float_t distance(::Unity::Mathematics::float3 x, ::Unity::Mathematics::float3 y);

  /// @brief Method distance, addr 0x6a51574, size 0xc0, virtual false, abstract: false, final false
  static inline float_t distance(::Unity::Mathematics::float4 x, ::Unity::Mathematics::float4 y);

  /// @brief Method distance, addr 0x6a51440, size 0x8, virtual false, abstract: false, final false
  static inline float_t distance(float_t x, float_t y);

  /// @brief Method distancesq, addr 0x6a518ac, size 0x18, virtual false, abstract: false, final false
  static inline double_t distancesq(::Unity::Mathematics::double2 x, ::Unity::Mathematics::double2 y);

  /// @brief Method distancesq, addr 0x6a518c4, size 0x24, virtual false, abstract: false, final false
  static inline double_t distancesq(::Unity::Mathematics::double3 x, ::Unity::Mathematics::double3 y);

  /// @brief Method distancesq, addr 0x6a518e8, size 0x30, virtual false, abstract: false, final false
  static inline double_t distancesq(::Unity::Mathematics::double4 x, ::Unity::Mathematics::double4 y);

  /// @brief Method distancesq, addr 0x6a518a0, size 0xc, virtual false, abstract: false, final false
  static inline double_t distancesq(double_t x, double_t y);

  /// @brief Method distancesq, addr 0x6a51834, size 0x18, virtual false, abstract: false, final false
  static inline float_t distancesq(::Unity::Mathematics::float2 x, ::Unity::Mathematics::float2 y);

  /// @brief Method distancesq, addr 0x6a5184c, size 0x24, virtual false, abstract: false, final false
  static inline float_t distancesq(::Unity::Mathematics::float3 x, ::Unity::Mathematics::float3 y);

  /// @brief Method distancesq, addr 0x6a51870, size 0x30, virtual false, abstract: false, final false
  static inline float_t distancesq(::Unity::Mathematics::float4 x, ::Unity::Mathematics::float4 y);

  /// @brief Method distancesq, addr 0x6a51828, size 0xc, virtual false, abstract: false, final false
  static inline float_t distancesq(float_t x, float_t y);

  /// @brief Method dot, addr 0x6a456c8, size 0x10, virtual false, abstract: false, final false
  static inline double_t dot(::Unity::Mathematics::double2 x, ::Unity::Mathematics::double2 y);

  /// @brief Method dot, addr 0x6a456d8, size 0x18, virtual false, abstract: false, final false
  static inline double_t dot(::Unity::Mathematics::double3 x, ::Unity::Mathematics::double3 y);

  /// @brief Method dot, addr 0x6a456f0, size 0x20, virtual false, abstract: false, final false
  static inline double_t dot(::Unity::Mathematics::double4 x, ::Unity::Mathematics::double4 y);

  /// @brief Method dot, addr 0x6a456c0, size 0x8, virtual false, abstract: false, final false
  static inline double_t dot(double_t x, double_t y);

  /// @brief Method dot, addr 0x6a5ea90, size 0x20, virtual false, abstract: false, final false
  static inline float_t dot(::Unity::Mathematics::quaternion a, ::Unity::Mathematics::quaternion b);

  /// @brief Method dot, addr 0x6a45678, size 0x10, virtual false, abstract: false, final false
  static inline float_t dot(::Unity::Mathematics::float2 x, ::Unity::Mathematics::float2 y);

  /// @brief Method dot, addr 0x6a45688, size 0x18, virtual false, abstract: false, final false
  static inline float_t dot(::Unity::Mathematics::float3 x, ::Unity::Mathematics::float3 y);

  /// @brief Method dot, addr 0x6a456a0, size 0x20, virtual false, abstract: false, final false
  static inline float_t dot(::Unity::Mathematics::float4 x, ::Unity::Mathematics::float4 y);

  /// @brief Method dot, addr 0x6a45670, size 0x8, virtual false, abstract: false, final false
  static inline float_t dot(float_t x, float_t y);

  /// @brief Method dot, addr 0x6a455c8, size 0x14, virtual false, abstract: false, final false
  static inline int32_t dot(::Unity::Mathematics::int2 x, ::Unity::Mathematics::int2 y);

  /// @brief Method dot, addr 0x6a455dc, size 0x18, virtual false, abstract: false, final false
  static inline int32_t dot(::Unity::Mathematics::int3 x, ::Unity::Mathematics::int3 y);

  /// @brief Method dot, addr 0x6a455f4, size 0x24, virtual false, abstract: false, final false
  static inline int32_t dot(::Unity::Mathematics::int4 x, ::Unity::Mathematics::int4 y);

  /// @brief Method dot, addr 0x6a455c0, size 0x8, virtual false, abstract: false, final false
  static inline int32_t dot(int32_t x, int32_t y);

  /// @brief Method dot, addr 0x6a45620, size 0x14, virtual false, abstract: false, final false
  static inline uint32_t dot(::Unity::Mathematics::uint2 x, ::Unity::Mathematics::uint2 y);

  /// @brief Method dot, addr 0x6a45634, size 0x18, virtual false, abstract: false, final false
  static inline uint32_t dot(::Unity::Mathematics::uint3 x, ::Unity::Mathematics::uint3 y);

  /// @brief Method dot, addr 0x6a4564c, size 0x24, virtual false, abstract: false, final false
  static inline uint32_t dot(::Unity::Mathematics::uint4 x, ::Unity::Mathematics::uint4 y);

  /// @brief Method dot, addr 0x6a45618, size 0x8, virtual false, abstract: false, final false
  static inline uint32_t dot(uint32_t x, uint32_t y);

  /// @brief Method double2, addr 0x6a38260, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 double2(::Unity::Mathematics::bool2 v);

  /// @brief Method double2, addr 0x6a383a8, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 double2(::Unity::Mathematics::float2 v);

  /// @brief Method double2, addr 0x6a382b4, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 double2(::Unity::Mathematics::half v);

  /// @brief Method double2, addr 0x6a38318, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 double2(::Unity::Mathematics::half2 v);

  /// @brief Method double2, addr 0x6a38288, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 double2(::Unity::Mathematics::int2 v);

  /// @brief Method double2, addr 0x6a382a4, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 double2(::Unity::Mathematics::uint2 v);

  /// @brief Method double2, addr 0x6a38248, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 double2(bool v);

  /// @brief Method double2, addr 0x6a38240, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 double2(double_t v);

  /// @brief Method double2, addr 0x6a3839c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 double2(float_t v);

  /// @brief Method double2, addr 0x6a3827c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 double2(int32_t v);

  /// @brief Method double2, addr 0x6a38298, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 double2(uint32_t v);

  /// @brief Method double2, addr 0x6a38238, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 double2(double_t x, double_t y);

  /// @brief Method double2, addr 0x6a3823c, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 double2(::Unity::Mathematics::double2 xy);

  /// @brief Method double2x2, addr 0x6a386ec, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 double2x2(::Unity::Mathematics::double2 c0, ::Unity::Mathematics::double2 c1);

  /// @brief Method double2x2, addr 0x6a386f0, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 double2x2(double_t m00, double_t m01, double_t m10, double_t m11);

  /// @brief Method double2x2, addr 0x6a38730, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 double2x2(::Unity::Mathematics::bool2x2 v);

  /// @brief Method double2x2, addr 0x6a387d0, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 double2x2(::Unity::Mathematics::float2x2 v);

  /// @brief Method double2x2, addr 0x6a38770, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 double2x2(::Unity::Mathematics::int2x2 v);

  /// @brief Method double2x2, addr 0x6a387a0, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 double2x2(::Unity::Mathematics::uint2x2 v);

  /// @brief Method double2x2, addr 0x6a38710, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 double2x2(bool v);

  /// @brief Method double2x2, addr 0x6a38700, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 double2x2(double_t v);

  /// @brief Method double2x2, addr 0x6a387bc, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 double2x2(float_t v);

  /// @brief Method double2x2, addr 0x6a3875c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 double2x2(int32_t v);

  /// @brief Method double2x2, addr 0x6a3878c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 double2x2(uint32_t v);

  /// @brief Method double2x3, addr 0x6a38928, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 double2x3(::Unity::Mathematics::double2 c0, ::Unity::Mathematics::double2 c1, ::Unity::Mathematics::double2 c2);

  /// @brief Method double2x3, addr 0x6a38938, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 double2x3(double_t m00, double_t m01, double_t m02, double_t m10, double_t m11, double_t m12);

  /// @brief Method double2x3, addr 0x6a38978, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 double2x3(::Unity::Mathematics::bool2x3 v);

  /// @brief Method double2x3, addr 0x6a38a64, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 double2x3(::Unity::Mathematics::float2x3 v);

  /// @brief Method double2x3, addr 0x6a389d4, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 double2x3(::Unity::Mathematics::int2x3 v);

  /// @brief Method double2x3, addr 0x6a38a1c, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 double2x3(::Unity::Mathematics::uint2x3 v);

  /// @brief Method double2x3, addr 0x6a38958, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 double2x3(bool v);

  /// @brief Method double2x3, addr 0x6a38948, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 double2x3(double_t v);

  /// @brief Method double2x3, addr 0x6a38a50, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 double2x3(float_t v);

  /// @brief Method double2x3, addr 0x6a389c0, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 double2x3(int32_t v);

  /// @brief Method double2x3, addr 0x6a38a08, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 double2x3(uint32_t v);

  /// @brief Method double2x4, addr 0x6a38bec, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 double2x4(::Unity::Mathematics::double2 c0, ::Unity::Mathematics::double2 c1, ::Unity::Mathematics::double2 c2, ::Unity::Mathematics::double2 c3);

  /// @brief Method double2x4, addr 0x6a38c00, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 double2x4(double_t m00, double_t m01, double_t m02, double_t m03, double_t m10, double_t m11, double_t m12, double_t m13);

  /// @brief Method double2x4, addr 0x6a38c4c, size 0x5c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 double2x4(::Unity::Mathematics::bool2x4 v);

  /// @brief Method double2x4, addr 0x6a38d78, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 double2x4(::Unity::Mathematics::float2x4 v);

  /// @brief Method double2x4, addr 0x6a38cc0, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 double2x4(::Unity::Mathematics::int2x4 v);

  /// @brief Method double2x4, addr 0x6a38d1c, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 double2x4(::Unity::Mathematics::uint2x4 v);

  /// @brief Method double2x4, addr 0x6a38c28, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 double2x4(bool v);

  /// @brief Method double2x4, addr 0x6a38c14, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 double2x4(double_t v);

  /// @brief Method double2x4, addr 0x6a38d60, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 double2x4(float_t v);

  /// @brief Method double2x4, addr 0x6a38ca8, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 double2x4(int32_t v);

  /// @brief Method double2x4, addr 0x6a38d04, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 double2x4(uint32_t v);

  /// @brief Method double3, addr 0x6a38f98, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 double3(::Unity::Mathematics::bool3 v);

  /// @brief Method double3, addr 0x6a3916c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 double3(::Unity::Mathematics::float3 v);

  /// @brief Method double3, addr 0x6a39004, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 double3(::Unity::Mathematics::half v);

  /// @brief Method double3, addr 0x6a3906c, size 0xf0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 double3(::Unity::Mathematics::half3 v);

  /// @brief Method double3, addr 0x6a38fcc, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 double3(::Unity::Mathematics::int3 v);

  /// @brief Method double3, addr 0x6a38ff0, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 double3(::Unity::Mathematics::uint3 v);

  /// @brief Method double3, addr 0x6a38f7c, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 double3(bool v);

  /// @brief Method double3, addr 0x6a38f70, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 double3(double_t v);

  /// @brief Method double3, addr 0x6a3915c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 double3(float_t v);

  /// @brief Method double3, addr 0x6a38fbc, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 double3(int32_t v);

  /// @brief Method double3, addr 0x6a38fe0, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 double3(uint32_t v);

  /// @brief Method double3, addr 0x6a38f60, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 double3(double_t x, double_t y, double_t z);

  /// @brief Method double3, addr 0x6a38f64, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 double3(double_t x, ::Unity::Mathematics::double2 yz);

  /// @brief Method double3, addr 0x6a38f68, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 double3(::Unity::Mathematics::double2 xy, double_t z);

  /// @brief Method double3, addr 0x6a38f6c, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 double3(::Unity::Mathematics::double3 xyz);

  /// @brief Method double3x2, addr 0x6a39564, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x2 double3x2(::Unity::Mathematics::double3 c0, ::Unity::Mathematics::double3 c1);

  /// @brief Method double3x2, addr 0x6a39574, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x2 double3x2(double_t m00, double_t m01, double_t m10, double_t m11, double_t m20, double_t m21);

  /// @brief Method double3x2, addr 0x6a395b4, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x2 double3x2(::Unity::Mathematics::bool3x2 v);

  /// @brief Method double3x2, addr 0x6a396a0, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x2 double3x2(::Unity::Mathematics::float3x2 v);

  /// @brief Method double3x2, addr 0x6a39610, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x2 double3x2(::Unity::Mathematics::int3x2 v);

  /// @brief Method double3x2, addr 0x6a39658, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x2 double3x2(::Unity::Mathematics::uint3x2 v);

  /// @brief Method double3x2, addr 0x6a39594, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x2 double3x2(bool v);

  /// @brief Method double3x2, addr 0x6a39584, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x2 double3x2(double_t v);

  /// @brief Method double3x2, addr 0x6a3968c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x2 double3x2(float_t v);

  /// @brief Method double3x2, addr 0x6a395fc, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x2 double3x2(int32_t v);

  /// @brief Method double3x2, addr 0x6a39644, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x2 double3x2(uint32_t v);

  /// @brief Method double3x3, addr 0x6a3981c, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 double3x3(::Unity::Mathematics::double3 c0, ::Unity::Mathematics::double3 c1, ::Unity::Mathematics::double3 c2);

  /// @brief Method double3x3, addr 0x6a39840, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 double3x3(double_t m00, double_t m01, double_t m02, double_t m10, double_t m11, double_t m12, double_t m20, double_t m21, double_t m22);

  /// @brief Method double3x3, addr 0x6a3989c, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 double3x3(::Unity::Mathematics::bool3x3 v);

  /// @brief Method double3x3, addr 0x6a39a08, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 double3x3(::Unity::Mathematics::float3x3 v);

  /// @brief Method double3x3, addr 0x6a39930, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 double3x3(::Unity::Mathematics::int3x3 v);

  /// @brief Method double3x3, addr 0x6a3999c, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 double3x3(::Unity::Mathematics::uint3x3 v);

  /// @brief Method double3x3, addr 0x6a39874, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 double3x3(bool v);

  /// @brief Method double3x3, addr 0x6a3985c, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 double3x3(double_t v);

  /// @brief Method double3x3, addr 0x6a399ec, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 double3x3(float_t v);

  /// @brief Method double3x3, addr 0x6a39914, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 double3x3(int32_t v);

  /// @brief Method double3x3, addr 0x6a39980, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 double3x3(uint32_t v);

  /// @brief Method double3x4, addr 0x6a39d58, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 double3x4(::Unity::Mathematics::double3 c0, ::Unity::Mathematics::double3 c1, ::Unity::Mathematics::double3 c2, ::Unity::Mathematics::double3 c3);

  /// @brief Method double3x4, addr 0x6a39d8c, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 double3x4(double_t m00, double_t m01, double_t m02, double_t m03, double_t m10, double_t m11, double_t m12, double_t m13, double_t m20, double_t m21,
                                                          double_t m22, double_t m23);

  /// @brief Method double3x4, addr 0x6a39e08, size 0x9c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 double3x4(::Unity::Mathematics::bool3x4 v);

  /// @brief Method double3x4, addr 0x6a39fcc, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 double3x4(::Unity::Mathematics::float3x4 v);

  /// @brief Method double3x4, addr 0x6a39ec4, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 double3x4(::Unity::Mathematics::int3x4 v);

  /// @brief Method double3x4, addr 0x6a39f48, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 double3x4(::Unity::Mathematics::uint3x4 v);

  /// @brief Method double3x4, addr 0x6a39ddc, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 double3x4(bool v);

  /// @brief Method double3x4, addr 0x6a39dc0, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 double3x4(double_t v);

  /// @brief Method double3x4, addr 0x6a39fac, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 double3x4(float_t v);

  /// @brief Method double3x4, addr 0x6a39ea4, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 double3x4(int32_t v);

  /// @brief Method double3x4, addr 0x6a39f28, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 double3x4(uint32_t v);

  /// @brief Method double4, addr 0x6a3a34c, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 double4(::Unity::Mathematics::bool4 v);

  /// @brief Method double4, addr 0x6a3a590, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 double4(::Unity::Mathematics::float4 v);

  /// @brief Method double4, addr 0x6a3a3d8, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 double4(::Unity::Mathematics::half v);

  /// @brief Method double4, addr 0x6a3a444, size 0x138, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 double4(::Unity::Mathematics::half4 v);

  /// @brief Method double4, addr 0x6a3a38c, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 double4(::Unity::Mathematics::int4 v);

  /// @brief Method double4, addr 0x6a3a3bc, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 double4(::Unity::Mathematics::uint4 v);

  /// @brief Method double4, addr 0x6a3a32c, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 double4(bool v);

  /// @brief Method double4, addr 0x6a3a31c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 double4(double_t v);

  /// @brief Method double4, addr 0x6a3a57c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 double4(float_t v);

  /// @brief Method double4, addr 0x6a3a378, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 double4(int32_t v);

  /// @brief Method double4, addr 0x6a3a3a8, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 double4(uint32_t v);

  /// @brief Method double4, addr 0x6a3a2fc, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 double4(double_t x, double_t y, double_t z, double_t w);

  /// @brief Method double4, addr 0x6a3a300, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 double4(double_t x, double_t y, ::Unity::Mathematics::double2 zw);

  /// @brief Method double4, addr 0x6a3a304, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 double4(double_t x, ::Unity::Mathematics::double2 yz, double_t w);

  /// @brief Method double4, addr 0x6a3a308, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 double4(double_t x, ::Unity::Mathematics::double3 yzw);

  /// @brief Method double4, addr 0x6a3a30c, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 double4(::Unity::Mathematics::double2 xy, double_t z, double_t w);

  /// @brief Method double4, addr 0x6a3a310, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 double4(::Unity::Mathematics::double2 xy, ::Unity::Mathematics::double2 zw);

  /// @brief Method double4, addr 0x6a3a314, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 double4(::Unity::Mathematics::double3 xyz, double_t w);

  /// @brief Method double4, addr 0x6a3a318, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 double4(::Unity::Mathematics::double4 xyzw);

  /// @brief Method double4x2, addr 0x6a3aa54, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 double4x2(::Unity::Mathematics::double4 c0, ::Unity::Mathematics::double4 c1);

  /// @brief Method double4x2, addr 0x6a3aa68, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 double4x2(double_t m00, double_t m01, double_t m10, double_t m11, double_t m20, double_t m21, double_t m30, double_t m31);

  /// @brief Method double4x2, addr 0x6a3aab4, size 0x5c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 double4x2(::Unity::Mathematics::bool4x2 v);

  /// @brief Method double4x2, addr 0x6a3abe0, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 double4x2(::Unity::Mathematics::float4x2 v);

  /// @brief Method double4x2, addr 0x6a3ab28, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 double4x2(::Unity::Mathematics::int4x2 v);

  /// @brief Method double4x2, addr 0x6a3ab84, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 double4x2(::Unity::Mathematics::uint4x2 v);

  /// @brief Method double4x2, addr 0x6a3aa90, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 double4x2(bool v);

  /// @brief Method double4x2, addr 0x6a3aa7c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 double4x2(double_t v);

  /// @brief Method double4x2, addr 0x6a3abc8, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 double4x2(float_t v);

  /// @brief Method double4x2, addr 0x6a3ab10, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 double4x2(int32_t v);

  /// @brief Method double4x2, addr 0x6a3ab6c, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 double4x2(uint32_t v);

  /// @brief Method double4x3, addr 0x6a3add8, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 double4x3(::Unity::Mathematics::double4 c0, ::Unity::Mathematics::double4 c1, ::Unity::Mathematics::double4 c2);

  /// @brief Method double4x3, addr 0x6a3ae04, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 double4x3(double_t m00, double_t m01, double_t m02, double_t m10, double_t m11, double_t m12, double_t m20, double_t m21, double_t m22, double_t m30,
                                                          double_t m31, double_t m32);

  /// @brief Method double4x3, addr 0x6a3ae80, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 double4x3(::Unity::Mathematics::bool4x3 v);

  /// @brief Method double4x3, addr 0x6a3b02c, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 double4x3(::Unity::Mathematics::float4x3 v);

  /// @brief Method double4x3, addr 0x6a3af24, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 double4x3(::Unity::Mathematics::int4x3 v);

  /// @brief Method double4x3, addr 0x6a3afa8, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 double4x3(::Unity::Mathematics::uint4x3 v);

  /// @brief Method double4x3, addr 0x6a3ae54, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 double4x3(bool v);

  /// @brief Method double4x3, addr 0x6a3ae38, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 double4x3(double_t v);

  /// @brief Method double4x3, addr 0x6a3b00c, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 double4x3(float_t v);

  /// @brief Method double4x3, addr 0x6a3af04, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 double4x3(int32_t v);

  /// @brief Method double4x3, addr 0x6a3af88, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 double4x3(uint32_t v);

  /// @brief Method double4x4, addr 0x6a3b2fc, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x4 double4x4(::Unity::Mathematics::double4 c0, ::Unity::Mathematics::double4 c1, ::Unity::Mathematics::double4 c2, ::Unity::Mathematics::double4 c3);

  /// @brief Method double4x4, addr 0x6a3b340, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x4 double4x4(double_t m00, double_t m01, double_t m02, double_t m03, double_t m10, double_t m11, double_t m12, double_t m13, double_t m20, double_t m21,
                                                          double_t m22, double_t m23, double_t m30, double_t m31, double_t m32, double_t m33);

  /// @brief Method double4x4, addr 0x6a3b3ec, size 0xac, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x4 double4x4(::Unity::Mathematics::bool4x4 v);

  /// @brief Method double4x4, addr 0x6a3b618, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x4 double4x4(::Unity::Mathematics::float4x4 v);

  /// @brief Method double4x4, addr 0x6a3b4c0, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x4 double4x4(::Unity::Mathematics::int4x4 v);

  /// @brief Method double4x4, addr 0x6a3b56c, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x4 double4x4(::Unity::Mathematics::uint4x4 v);

  /// @brief Method double4x4, addr 0x6a3b3b8, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x4 double4x4(bool v);

  /// @brief Method double4x4, addr 0x6a3b394, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x4 double4x4(double_t v);

  /// @brief Method double4x4, addr 0x6a3b5f0, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x4 double4x4(float_t v);

  /// @brief Method double4x4, addr 0x6a3b498, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x4 double4x4(int32_t v);

  /// @brief Method double4x4, addr 0x6a3b544, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x4 double4x4(uint32_t v);

  /// @brief Method down, addr 0x6a57044, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 down();

  /// @brief Method exp, addr 0x6a4d0e4, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 exp(::Unity::Mathematics::double2 x);

  /// @brief Method exp, addr 0x6a4d194, size 0x100, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 exp(::Unity::Mathematics::double3 x);

  /// @brief Method exp, addr 0x6a4d294, size 0x148, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 exp(::Unity::Mathematics::double4 x);

  /// @brief Method exp, addr 0x6a4cd70, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 exp(::Unity::Mathematics::float2 x);

  /// @brief Method exp, addr 0x6a4ce28, size 0x108, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 exp(::Unity::Mathematics::float3 x);

  /// @brief Method exp, addr 0x6a4cf30, size 0x154, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 exp(::Unity::Mathematics::float4 x);

  /// @brief Method exp, addr 0x6a5ef38, size 0x1a0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion exp(::Unity::Mathematics::quaternion q);

  /// @brief Method exp, addr 0x6a4d084, size 0x60, virtual false, abstract: false, final false
  static inline double_t exp(double_t x);

  /// @brief Method exp, addr 0x6a4cd08, size 0x68, virtual false, abstract: false, final false
  static inline float_t exp(float_t x);

  /// @brief Method exp10, addr 0x6a4df5c, size 0xc4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 exp10(::Unity::Mathematics::double2 x);

  /// @brief Method exp10, addr 0x6a4e020, size 0x110, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 exp10(::Unity::Mathematics::double3 x);

  /// @brief Method exp10, addr 0x6a4e130, size 0x164, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 exp10(::Unity::Mathematics::double4 x);

  /// @brief Method exp10, addr 0x6a4dbac, size 0xcc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 exp10(::Unity::Mathematics::float2 x);

  /// @brief Method exp10, addr 0x6a4dc78, size 0x114, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 exp10(::Unity::Mathematics::float3 x);

  /// @brief Method exp10, addr 0x6a4dd8c, size 0x168, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 exp10(::Unity::Mathematics::float4 x);

  /// @brief Method exp10, addr 0x6a4def4, size 0x68, virtual false, abstract: false, final false
  static inline double_t exp10(double_t x);

  /// @brief Method exp10, addr 0x6a4db38, size 0x74, virtual false, abstract: false, final false
  static inline float_t exp10(float_t x);

  /// @brief Method exp2, addr 0x6a4d800, size 0xc4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 exp2(::Unity::Mathematics::double2 x);

  /// @brief Method exp2, addr 0x6a4d8c4, size 0x110, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 exp2(::Unity::Mathematics::double3 x);

  /// @brief Method exp2, addr 0x6a4d9d4, size 0x164, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 exp2(::Unity::Mathematics::double4 x);

  /// @brief Method exp2, addr 0x6a4d450, size 0xcc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 exp2(::Unity::Mathematics::float2 x);

  /// @brief Method exp2, addr 0x6a4d51c, size 0x114, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 exp2(::Unity::Mathematics::float3 x);

  /// @brief Method exp2, addr 0x6a4d630, size 0x168, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 exp2(::Unity::Mathematics::float4 x);

  /// @brief Method exp2, addr 0x6a4d798, size 0x68, virtual false, abstract: false, final false
  static inline double_t exp2(double_t x);

  /// @brief Method exp2, addr 0x6a4d3dc, size 0x74, virtual false, abstract: false, final false
  static inline float_t exp2(float_t x);

  /// @brief Method f16tof32, addr 0x6a564f4, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 f16tof32(::Unity::Mathematics::uint2 x);

  /// @brief Method f16tof32, addr 0x6a565a4, size 0xf4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 f16tof32(::Unity::Mathematics::uint3 x);

  /// @brief Method f16tof32, addr 0x6a56698, size 0x148, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 f16tof32(::Unity::Mathematics::uint4 x);

  /// @brief Method f16tof32, addr 0x6a5649c, size 0x58, virtual false, abstract: false, final false
  static inline float_t f16tof32(uint32_t x);

  /// @brief Method f32tof16, addr 0x6a5683c, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 f32tof16(::Unity::Mathematics::float2 x);

  /// @brief Method f32tof16, addr 0x6a568f8, size 0xfc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 f32tof16(::Unity::Mathematics::float3 x);

  /// @brief Method f32tof16, addr 0x6a569f4, size 0x144, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 f32tof16(::Unity::Mathematics::float4 x);

  /// @brief Method f32tof16, addr 0x6a567e0, size 0x5c, virtual false, abstract: false, final false
  static inline uint32_t f32tof16(float_t x);

  /// @brief Method faceforward, addr 0x6a531f8, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 faceforward(::Unity::Mathematics::double2 n, ::Unity::Mathematics::double2 i, ::Unity::Mathematics::double2 ng);

  /// @brief Method faceforward, addr 0x6a5321c, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 faceforward(::Unity::Mathematics::double3 n, ::Unity::Mathematics::double3 i, ::Unity::Mathematics::double3 ng);

  /// @brief Method faceforward, addr 0x6a53258, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 faceforward(::Unity::Mathematics::double4 n, ::Unity::Mathematics::double4 i, ::Unity::Mathematics::double4 ng);

  /// @brief Method faceforward, addr 0x6a53148, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 faceforward(::Unity::Mathematics::float2 n, ::Unity::Mathematics::float2 i, ::Unity::Mathematics::float2 ng);

  /// @brief Method faceforward, addr 0x6a5316c, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 faceforward(::Unity::Mathematics::float3 n, ::Unity::Mathematics::float3 i, ::Unity::Mathematics::float3 ng);

  /// @brief Method faceforward, addr 0x6a531a8, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 faceforward(::Unity::Mathematics::float4 n, ::Unity::Mathematics::float4 i, ::Unity::Mathematics::float4 ng);

  /// @brief Method fastinverse, addr 0x6a3a03c, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 fastinverse(::Unity::Mathematics::double3x4 m);

  /// @brief Method fastinverse, addr 0x6a3bab8, size 0x98, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x4 fastinverse(::Unity::Mathematics::double4x4 m);

  /// @brief Method fastinverse, addr 0x6a3da60, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 fastinverse(::Unity::Mathematics::float3x4 m);

  /// @brief Method fastinverse, addr 0x6a3f140, size 0x98, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 fastinverse(::Unity::Mathematics::float4x4 m);

  /// @brief Method float2, addr 0x6a3bf6c, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 float2(::Unity::Mathematics::bool2 v);

  /// @brief Method float2, addr 0x6a3c0ac, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 float2(::Unity::Mathematics::double2 v);

  /// @brief Method float2, addr 0x6a3bfc0, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 float2(::Unity::Mathematics::half v);

  /// @brief Method float2, addr 0x6a3c020, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 float2(::Unity::Mathematics::half2 v);

  /// @brief Method float2, addr 0x6a3bf94, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 float2(::Unity::Mathematics::int2 v);

  /// @brief Method float2, addr 0x6a3bfb0, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 float2(::Unity::Mathematics::uint2 v);

  /// @brief Method float2, addr 0x6a3bf54, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 float2(bool v);

  /// @brief Method float2, addr 0x6a3c0a0, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 float2(double_t v);

  /// @brief Method float2, addr 0x6a3bf4c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 float2(float_t v);

  /// @brief Method float2, addr 0x6a3bf88, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 float2(int32_t v);

  /// @brief Method float2, addr 0x6a3bfa4, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 float2(uint32_t v);

  /// @brief Method float2, addr 0x6a3bf44, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 float2(float_t x, float_t y);

  /// @brief Method float2, addr 0x6a3bf48, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 float2(::Unity::Mathematics::float2 xy);

  /// @brief Method float2x2, addr 0x6a3c3d0, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 float2x2(::Unity::Mathematics::float2 c0, ::Unity::Mathematics::float2 c1);

  /// @brief Method float2x2, addr 0x6a3c3d4, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 float2x2(float_t m00, float_t m01, float_t m10, float_t m11);

  /// @brief Method float2x2, addr 0x6a3c414, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 float2x2(::Unity::Mathematics::bool2x2 v);

  /// @brief Method float2x2, addr 0x6a3c4b4, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 float2x2(::Unity::Mathematics::double2x2 v);

  /// @brief Method float2x2, addr 0x6a3c454, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 float2x2(::Unity::Mathematics::int2x2 v);

  /// @brief Method float2x2, addr 0x6a3c484, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 float2x2(::Unity::Mathematics::uint2x2 v);

  /// @brief Method float2x2, addr 0x6a3c3f4, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 float2x2(bool v);

  /// @brief Method float2x2, addr 0x6a3c4a0, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 float2x2(double_t v);

  /// @brief Method float2x2, addr 0x6a3c3e4, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 float2x2(float_t v);

  /// @brief Method float2x2, addr 0x6a3c440, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 float2x2(int32_t v);

  /// @brief Method float2x2, addr 0x6a3c470, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 float2x2(uint32_t v);

  /// @brief Method float2x3, addr 0x6a3c5cc, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 float2x3(::Unity::Mathematics::float2 c0, ::Unity::Mathematics::float2 c1, ::Unity::Mathematics::float2 c2);

  /// @brief Method float2x3, addr 0x6a3c5dc, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 float2x3(float_t m00, float_t m01, float_t m02, float_t m10, float_t m11, float_t m12);

  /// @brief Method float2x3, addr 0x6a3c61c, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 float2x3(::Unity::Mathematics::bool2x3 v);

  /// @brief Method float2x3, addr 0x6a3c708, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 float2x3(::Unity::Mathematics::double2x3 v);

  /// @brief Method float2x3, addr 0x6a3c678, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 float2x3(::Unity::Mathematics::int2x3 v);

  /// @brief Method float2x3, addr 0x6a3c6c0, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 float2x3(::Unity::Mathematics::uint2x3 v);

  /// @brief Method float2x3, addr 0x6a3c5fc, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 float2x3(bool v);

  /// @brief Method float2x3, addr 0x6a3c6f4, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 float2x3(double_t v);

  /// @brief Method float2x3, addr 0x6a3c5ec, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 float2x3(float_t v);

  /// @brief Method float2x3, addr 0x6a3c664, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 float2x3(int32_t v);

  /// @brief Method float2x3, addr 0x6a3c6ac, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 float2x3(uint32_t v);

  /// @brief Method float2x4, addr 0x6a3c83c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x4 float2x4(::Unity::Mathematics::float2 c0, ::Unity::Mathematics::float2 c1, ::Unity::Mathematics::float2 c2, ::Unity::Mathematics::float2 c3);

  /// @brief Method float2x4, addr 0x6a3c850, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x4 float2x4(float_t m00, float_t m01, float_t m02, float_t m03, float_t m10, float_t m11, float_t m12, float_t m13);

  /// @brief Method float2x4, addr 0x6a3c894, size 0x5c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x4 float2x4(::Unity::Mathematics::bool2x4 v);

  /// @brief Method float2x4, addr 0x6a3c9a8, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x4 float2x4(::Unity::Mathematics::double2x4 v);

  /// @brief Method float2x4, addr 0x6a3c900, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x4 float2x4(::Unity::Mathematics::int2x4 v);

  /// @brief Method float2x4, addr 0x6a3c954, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x4 float2x4(::Unity::Mathematics::uint2x4 v);

  /// @brief Method float2x4, addr 0x6a3c870, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x4 float2x4(bool v);

  /// @brief Method float2x4, addr 0x6a3c998, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x4 float2x4(double_t v);

  /// @brief Method float2x4, addr 0x6a3c864, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x4 float2x4(float_t v);

  /// @brief Method float2x4, addr 0x6a3c8f0, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x4 float2x4(int32_t v);

  /// @brief Method float2x4, addr 0x6a3c944, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x4 float2x4(uint32_t v);

  /// @brief Method float3, addr 0x6a3cb4c, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 float3(::Unity::Mathematics::bool3 v);

  /// @brief Method float3, addr 0x6a3ccfc, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 float3(::Unity::Mathematics::double3 v);

  /// @brief Method float3, addr 0x6a3cbb8, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 float3(::Unity::Mathematics::half v);

  /// @brief Method float3, addr 0x6a3cc1c, size 0xd0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 float3(::Unity::Mathematics::half3 v);

  /// @brief Method float3, addr 0x6a3cb80, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 float3(::Unity::Mathematics::int3 v);

  /// @brief Method float3, addr 0x6a3cba4, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 float3(::Unity::Mathematics::uint3 v);

  /// @brief Method float3, addr 0x6a3cb30, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 float3(bool v);

  /// @brief Method float3, addr 0x6a3ccec, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 float3(double_t v);

  /// @brief Method float3, addr 0x6a3cb24, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 float3(float_t v);

  /// @brief Method float3, addr 0x6a3cb70, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 float3(int32_t v);

  /// @brief Method float3, addr 0x6a3cb94, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 float3(uint32_t v);

  /// @brief Method float3, addr 0x6a3cb14, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 float3(float_t x, float_t y, float_t z);

  /// @brief Method float3, addr 0x6a3cb18, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 float3(float_t x, ::Unity::Mathematics::float2 yz);

  /// @brief Method float3, addr 0x6a3cb1c, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 float3(::Unity::Mathematics::float2 xy, float_t z);

  /// @brief Method float3, addr 0x6a3cb20, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 float3(::Unity::Mathematics::float3 xyz);

  /// @brief Method float3x2, addr 0x6a3d0c4, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x2 float3x2(::Unity::Mathematics::float3 c0, ::Unity::Mathematics::float3 c1);

  /// @brief Method float3x2, addr 0x6a3d0d4, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x2 float3x2(float_t m00, float_t m01, float_t m10, float_t m11, float_t m20, float_t m21);

  /// @brief Method float3x2, addr 0x6a3d114, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x2 float3x2(::Unity::Mathematics::bool3x2 v);

  /// @brief Method float3x2, addr 0x6a3d200, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x2 float3x2(::Unity::Mathematics::double3x2 v);

  /// @brief Method float3x2, addr 0x6a3d170, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x2 float3x2(::Unity::Mathematics::int3x2 v);

  /// @brief Method float3x2, addr 0x6a3d1b8, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x2 float3x2(::Unity::Mathematics::uint3x2 v);

  /// @brief Method float3x2, addr 0x6a3d0f4, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x2 float3x2(bool v);

  /// @brief Method float3x2, addr 0x6a3d1ec, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x2 float3x2(double_t v);

  /// @brief Method float3x2, addr 0x6a3d0e4, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x2 float3x2(float_t v);

  /// @brief Method float3x2, addr 0x6a3d15c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x2 float3x2(int32_t v);

  /// @brief Method float3x2, addr 0x6a3d1a4, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x2 float3x2(uint32_t v);

  /// @brief Method float3x3, addr 0x6a3d330, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 float3x3(::Unity::Mathematics::float3 c0, ::Unity::Mathematics::float3 c1, ::Unity::Mathematics::float3 c2);

  /// @brief Method float3x3, addr 0x6a58490, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 float3x3(::Unity::Mathematics::float4x4 f4x4);

  /// @brief Method float3x3, addr 0x6a3d354, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 float3x3(float_t m00, float_t m01, float_t m02, float_t m10, float_t m11, float_t m12, float_t m20, float_t m21, float_t m22);

  /// @brief Method float3x3, addr 0x6a584c0, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 float3x3(::Unity::Mathematics::quaternion rotation);

  /// @brief Method float3x3, addr 0x6a3d3a8, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 float3x3(::Unity::Mathematics::bool3x3 v);

  /// @brief Method float3x3, addr 0x6a3d4fc, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 float3x3(::Unity::Mathematics::double3x3 v);

  /// @brief Method float3x3, addr 0x6a3d434, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 float3x3(::Unity::Mathematics::int3x3 v);

  /// @brief Method float3x3, addr 0x6a3d498, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 float3x3(::Unity::Mathematics::uint3x3 v);

  /// @brief Method float3x3, addr 0x6a3d380, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 float3x3(bool v);

  /// @brief Method float3x3, addr 0x6a3d4e8, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 float3x3(double_t v);

  /// @brief Method float3x3, addr 0x6a3d370, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 float3x3(float_t v);

  /// @brief Method float3x3, addr 0x6a3d420, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 float3x3(int32_t v);

  /// @brief Method float3x3, addr 0x6a3d484, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 float3x3(uint32_t v);

  /// @brief Method float3x4, addr 0x6a3d7b0, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 float3x4(::Unity::Mathematics::float3 c0, ::Unity::Mathematics::float3 c1, ::Unity::Mathematics::float3 c2, ::Unity::Mathematics::float3 c3);

  /// @brief Method float3x4, addr 0x6a3d7e4, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 float3x4(float_t m00, float_t m01, float_t m02, float_t m03, float_t m10, float_t m11, float_t m12, float_t m13, float_t m20, float_t m21, float_t m22,
                                                        float_t m23);

  /// @brief Method float3x4, addr 0x6a35460, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 float3x4(::Unity::Mathematics::AffineTransform transform);

  /// @brief Method float3x4, addr 0x6a3d854, size 0x9c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 float3x4(::Unity::Mathematics::bool3x4 v);

  /// @brief Method float3x4, addr 0x6a3d9f4, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 float3x4(::Unity::Mathematics::double3x4 v);

  /// @brief Method float3x4, addr 0x6a3d904, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 float3x4(::Unity::Mathematics::int3x4 v);

  /// @brief Method float3x4, addr 0x6a3d97c, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 float3x4(::Unity::Mathematics::uint3x4 v);

  /// @brief Method float3x4, addr 0x6a3d828, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 float3x4(bool v);

  /// @brief Method float3x4, addr 0x6a3d9e0, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 float3x4(double_t v);

  /// @brief Method float3x4, addr 0x6a3d818, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 float3x4(float_t v);

  /// @brief Method float3x4, addr 0x6a3d8f0, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 float3x4(int32_t v);

  /// @brief Method float3x4, addr 0x6a3d968, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 float3x4(uint32_t v);

  /// @brief Method float4, addr 0x6a3dcb8, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 float4(::Unity::Mathematics::bool4 v);

  /// @brief Method float4, addr 0x6a3de80, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 float4(::Unity::Mathematics::double4 v);

  /// @brief Method float4, addr 0x6a3dd44, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 float4(::Unity::Mathematics::half v);

  /// @brief Method float4, addr 0x6a3ddac, size 0xc0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 float4(::Unity::Mathematics::half4 v);

  /// @brief Method float4, addr 0x6a3dcf8, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 float4(::Unity::Mathematics::int4 v);

  /// @brief Method float4, addr 0x6a3dd28, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 float4(::Unity::Mathematics::uint4 v);

  /// @brief Method float4, addr 0x6a3dc98, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 float4(bool v);

  /// @brief Method float4, addr 0x6a3de6c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 float4(double_t v);

  /// @brief Method float4, addr 0x6a3dc88, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 float4(float_t v);

  /// @brief Method float4, addr 0x6a3dce4, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 float4(int32_t v);

  /// @brief Method float4, addr 0x6a3dd14, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 float4(uint32_t v);

  /// @brief Method float4, addr 0x6a3dc68, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 float4(float_t x, float_t y, float_t z, float_t w);

  /// @brief Method float4, addr 0x6a3dc6c, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 float4(float_t x, float_t y, ::Unity::Mathematics::float2 zw);

  /// @brief Method float4, addr 0x6a3dc70, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 float4(float_t x, ::Unity::Mathematics::float2 yz, float_t w);

  /// @brief Method float4, addr 0x6a3dc74, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 float4(float_t x, ::Unity::Mathematics::float3 yzw);

  /// @brief Method float4, addr 0x6a3dc78, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 float4(::Unity::Mathematics::float2 xy, float_t z, float_t w);

  /// @brief Method float4, addr 0x6a3dc7c, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 float4(::Unity::Mathematics::float2 xy, ::Unity::Mathematics::float2 zw);

  /// @brief Method float4, addr 0x6a3dc80, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 float4(::Unity::Mathematics::float3 xyz, float_t w);

  /// @brief Method float4, addr 0x6a3dc84, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 float4(::Unity::Mathematics::float4 xyzw);

  /// @brief Method float4x2, addr 0x6a3e2f8, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x2 float4x2(::Unity::Mathematics::float4 c0, ::Unity::Mathematics::float4 c1);

  /// @brief Method float4x2, addr 0x6a3e30c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x2 float4x2(float_t m00, float_t m01, float_t m10, float_t m11, float_t m20, float_t m21, float_t m30, float_t m31);

  /// @brief Method float4x2, addr 0x6a3e350, size 0x5c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x2 float4x2(::Unity::Mathematics::bool4x2 v);

  /// @brief Method float4x2, addr 0x6a3e464, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x2 float4x2(::Unity::Mathematics::double4x2 v);

  /// @brief Method float4x2, addr 0x6a3e3bc, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x2 float4x2(::Unity::Mathematics::int4x2 v);

  /// @brief Method float4x2, addr 0x6a3e410, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x2 float4x2(::Unity::Mathematics::uint4x2 v);

  /// @brief Method float4x2, addr 0x6a3e32c, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x2 float4x2(bool v);

  /// @brief Method float4x2, addr 0x6a3e454, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x2 float4x2(double_t v);

  /// @brief Method float4x2, addr 0x6a3e320, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x2 float4x2(float_t v);

  /// @brief Method float4x2, addr 0x6a3e3ac, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x2 float4x2(int32_t v);

  /// @brief Method float4x2, addr 0x6a3e400, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x2 float4x2(uint32_t v);

  /// @brief Method float4x3, addr 0x6a3e5f0, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x3 float4x3(::Unity::Mathematics::float4 c0, ::Unity::Mathematics::float4 c1, ::Unity::Mathematics::float4 c2);

  /// @brief Method float4x3, addr 0x6a3e60c, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x3 float4x3(float_t m00, float_t m01, float_t m02, float_t m10, float_t m11, float_t m12, float_t m20, float_t m21, float_t m22, float_t m30, float_t m31,
                                                        float_t m32);

  /// @brief Method float4x3, addr 0x6a3e67c, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x3 float4x3(::Unity::Mathematics::bool4x3 v);

  /// @brief Method float4x3, addr 0x6a3e804, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x3 float4x3(::Unity::Mathematics::double4x3 v);

  /// @brief Method float4x3, addr 0x6a3e714, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x3 float4x3(::Unity::Mathematics::int4x3 v);

  /// @brief Method float4x3, addr 0x6a3e78c, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x3 float4x3(::Unity::Mathematics::uint4x3 v);

  /// @brief Method float4x3, addr 0x6a3e650, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x3 float4x3(bool v);

  /// @brief Method float4x3, addr 0x6a3e7f0, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x3 float4x3(double_t v);

  /// @brief Method float4x3, addr 0x6a3e640, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x3 float4x3(float_t v);

  /// @brief Method float4x3, addr 0x6a3e700, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x3 float4x3(int32_t v);

  /// @brief Method float4x3, addr 0x6a3e778, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x3 float4x3(uint32_t v);

  /// @brief Method float4x4, addr 0x6a3ea34, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 float4x4(::Unity::Mathematics::float4 c0, ::Unity::Mathematics::float4 c1, ::Unity::Mathematics::float4 c2, ::Unity::Mathematics::float4 c3);

  /// @brief Method float4x4, addr 0x6a3ea58, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 float4x4(float_t m00, float_t m01, float_t m02, float_t m03, float_t m10, float_t m11, float_t m12, float_t m13, float_t m20, float_t m21, float_t m22,
                                                        float_t m23, float_t m30, float_t m31, float_t m32, float_t m33);

  /// @brief Method float4x4, addr 0x6a584d8, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 float4x4(::Unity::Mathematics::float3x3 rotation, ::Unity::Mathematics::float3 translation);

  /// @brief Method float4x4, addr 0x6a58528, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 float4x4(::Unity::Mathematics::quaternion rotation, ::Unity::Mathematics::float3 translation);

  /// @brief Method float4x4, addr 0x6a35408, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 float4x4(::Unity::Mathematics::AffineTransform transform);

  /// @brief Method float4x4, addr 0x6a58540, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 float4x4(::Unity::Mathematics::RigidTransform transform);

  /// @brief Method float4x4, addr 0x6a3eaf0, size 0xac, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 float4x4(::Unity::Mathematics::bool4x4 v);

  /// @brief Method float4x4, addr 0x6a3ece0, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 float4x4(::Unity::Mathematics::double4x4 v);

  /// @brief Method float4x4, addr 0x6a3ebb0, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 float4x4(::Unity::Mathematics::int4x4 v);

  /// @brief Method float4x4, addr 0x6a3ec48, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 float4x4(::Unity::Mathematics::uint4x4 v);

  /// @brief Method float4x4, addr 0x6a3eabc, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 float4x4(bool v);

  /// @brief Method float4x4, addr 0x6a3eccc, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 float4x4(double_t v);

  /// @brief Method float4x4, addr 0x6a3eaac, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 float4x4(float_t v);

  /// @brief Method float4x4, addr 0x6a3eb9c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 float4x4(int32_t v);

  /// @brief Method float4x4, addr 0x6a3ec34, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 float4x4(uint32_t v);

  /// @brief Method floor, addr 0x6a49f90, size 0x9c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 floor(::Unity::Mathematics::double2 x);

  /// @brief Method floor, addr 0x6a4a02c, size 0xe0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 floor(::Unity::Mathematics::double3 x);

  /// @brief Method floor, addr 0x6a4a10c, size 0x11c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 floor(::Unity::Mathematics::double4 x);

  /// @brief Method floor, addr 0x6a49c98, size 0x9c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 floor(::Unity::Mathematics::float2 x);

  /// @brief Method floor, addr 0x6a49d34, size 0xe0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 floor(::Unity::Mathematics::float3 x);

  /// @brief Method floor, addr 0x6a49e14, size 0x11c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 floor(::Unity::Mathematics::float4 x);

  /// @brief Method floor, addr 0x6a49f30, size 0x60, virtual false, abstract: false, final false
  static inline double_t floor(double_t x);

  /// @brief Method floor, addr 0x6a49c38, size 0x60, virtual false, abstract: false, final false
  static inline float_t floor(float_t x);

  /// @brief Method floorlog2, addr 0x6a5586c, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 floorlog2(::Unity::Mathematics::int2 x);

  /// @brief Method floorlog2, addr 0x6a55ab4, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 floorlog2(::Unity::Mathematics::uint2 x);

  /// @brief Method floorlog2, addr 0x6a558e4, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 floorlog2(::Unity::Mathematics::int3 x);

  /// @brief Method floorlog2, addr 0x6a55b2c, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 floorlog2(::Unity::Mathematics::uint3 x);

  /// @brief Method floorlog2, addr 0x6a55994, size 0xe8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 floorlog2(::Unity::Mathematics::int4 x);

  /// @brief Method floorlog2, addr 0x6a55bdc, size 0xe8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 floorlog2(::Unity::Mathematics::uint4 x);

  /// @brief Method floorlog2, addr 0x6a55834, size 0x38, virtual false, abstract: false, final false
  static inline int32_t floorlog2(int32_t x);

  /// @brief Method floorlog2, addr 0x6a55a7c, size 0x38, virtual false, abstract: false, final false
  static inline int32_t floorlog2(uint32_t x);

  /// @brief Method fmod, addr 0x6a4f8f0, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 fmod(::Unity::Mathematics::double2 x, ::Unity::Mathematics::double2 y);

  /// @brief Method fmod, addr 0x6a4f934, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 fmod(::Unity::Mathematics::double3 x, ::Unity::Mathematics::double3 y);

  /// @brief Method fmod, addr 0x6a4f99c, size 0x8c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 fmod(::Unity::Mathematics::double4 x, ::Unity::Mathematics::double4 y);

  /// @brief Method fmod, addr 0x6a4f7b4, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 fmod(::Unity::Mathematics::float2 x, ::Unity::Mathematics::float2 y);

  /// @brief Method fmod, addr 0x6a4f7f8, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 fmod(::Unity::Mathematics::float3 x, ::Unity::Mathematics::float3 y);

  /// @brief Method fmod, addr 0x6a4f860, size 0x8c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 fmod(::Unity::Mathematics::float4 x, ::Unity::Mathematics::float4 y);

  /// @brief Method fmod, addr 0x6a4f8ec, size 0x4, virtual false, abstract: false, final false
  static inline double_t fmod(double_t x, double_t y);

  /// @brief Method fmod, addr 0x6a4f7b0, size 0x4, virtual false, abstract: false, final false
  static inline float_t fmod(float_t x, float_t y);

  /// @brief Method fold_to_uint, addr 0x6a5840c, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 fold_to_uint(::Unity::Mathematics::double2 x);

  /// @brief Method fold_to_uint, addr 0x6a5842c, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 fold_to_uint(::Unity::Mathematics::double3 x);

  /// @brief Method fold_to_uint, addr 0x6a58458, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 fold_to_uint(::Unity::Mathematics::double4 x);

  /// @brief Method fold_to_uint, addr 0x6a583fc, size 0x10, virtual false, abstract: false, final false
  static inline uint32_t fold_to_uint(double_t x);

  /// @brief Method forward, addr 0x6a57054, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 forward();

  /// @brief Method forward, addr 0x6a6009c, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 forward(::Unity::Mathematics::quaternion q);

  /// @brief Method frac, addr 0x6a4c030, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 frac(::Unity::Mathematics::double2 x);

  /// @brief Method frac, addr 0x6a4c0d4, size 0xec, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 frac(::Unity::Mathematics::double3 x);

  /// @brief Method frac, addr 0x6a4c1c0, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 frac(::Unity::Mathematics::double4 x);

  /// @brief Method frac, addr 0x6a4bdf8, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 frac(::Unity::Mathematics::float2 x);

  /// @brief Method frac, addr 0x6a4be9c, size 0xec, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 frac(::Unity::Mathematics::float3 x);

  /// @brief Method frac, addr 0x6a4bf88, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 frac(::Unity::Mathematics::float4 x);

  /// @brief Method frac, addr 0x6a4bfcc, size 0x64, virtual false, abstract: false, final false
  static inline double_t frac(double_t x);

  /// @brief Method frac, addr 0x6a4bd94, size 0x64, virtual false, abstract: false, final false
  static inline float_t frac(float_t x);

  /// @brief Method half, addr 0x6a3f570, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half half(double_t v);

  /// @brief Method half, addr 0x6a3f514, size 0x5c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half half(float_t v);

  /// @brief Method half, addr 0x6a3f510, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half half(::Unity::Mathematics::half x);

  /// @brief Method half2, addr 0x6a3f760, size 0x94, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half2 half2(::Unity::Mathematics::double2 v);

  /// @brief Method half2, addr 0x6a3f664, size 0x94, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half2 half2(::Unity::Mathematics::float2 v);

  /// @brief Method half2, addr 0x6a3f5f8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half2 half2(::Unity::Mathematics::half v);

  /// @brief Method half2, addr 0x6a3f6f8, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half2 half2(double_t v);

  /// @brief Method half2, addr 0x6a3f600, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half2 half2(float_t v);

  /// @brief Method half2, addr 0x6a3f5ec, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half2 half2(::Unity::Mathematics::half x, ::Unity::Mathematics::half y);

  /// @brief Method half2, addr 0x6a3f5f4, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half2 half2(::Unity::Mathematics::half2 xy);

  /// @brief Method half3, addr 0x6a3fa64, size 0xec, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half3 half3(::Unity::Mathematics::double3 v);

  /// @brief Method half3, addr 0x6a3f914, size 0xe0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half3 half3(::Unity::Mathematics::float3 v);

  /// @brief Method half3, addr 0x6a3f894, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half3 half3(::Unity::Mathematics::half v);

  /// @brief Method half3, addr 0x6a3f9f4, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half3 half3(double_t v);

  /// @brief Method half3, addr 0x6a3f8a8, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half3 half3(float_t v);

  /// @brief Method half3, addr 0x6a3f86c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half3 half3(::Unity::Mathematics::half x, ::Unity::Mathematics::half y, ::Unity::Mathematics::half z);

  /// @brief Method half3, addr 0x6a3f880, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half3 half3(::Unity::Mathematics::half x, ::Unity::Mathematics::half2 yz);

  /// @brief Method half3, addr 0x6a3f888, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half3 half3(::Unity::Mathematics::half2 xy, ::Unity::Mathematics::half z);

  /// @brief Method half3, addr 0x6a3f890, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half3 half3(::Unity::Mathematics::half3 xyz);

  /// @brief Method half4, addr 0x6a3fe70, size 0x13c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half4 half4(::Unity::Mathematics::double4 v);

  /// @brief Method half4, addr 0x6a3fcd4, size 0x130, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half4 half4(::Unity::Mathematics::float4 v);

  /// @brief Method half4, addr 0x6a3fc5c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half4 half4(::Unity::Mathematics::half v);

  /// @brief Method half4, addr 0x6a3fe04, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half4 half4(double_t v);

  /// @brief Method half4, addr 0x6a3fc6c, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half4 half4(float_t v);

  /// @brief Method half4, addr 0x6a3fbec, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half4 half4(::Unity::Mathematics::half x, ::Unity::Mathematics::half y, ::Unity::Mathematics::half z, ::Unity::Mathematics::half w);

  /// @brief Method half4, addr 0x6a3fc08, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half4 half4(::Unity::Mathematics::half x, ::Unity::Mathematics::half y, ::Unity::Mathematics::half2 zw);

  /// @brief Method half4, addr 0x6a3fc18, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half4 half4(::Unity::Mathematics::half x, ::Unity::Mathematics::half2 yz, ::Unity::Mathematics::half w);

  /// @brief Method half4, addr 0x6a3fc2c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half4 half4(::Unity::Mathematics::half x, ::Unity::Mathematics::half3 yzw);

  /// @brief Method half4, addr 0x6a3fc34, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half4 half4(::Unity::Mathematics::half2 xy, ::Unity::Mathematics::half z, ::Unity::Mathematics::half w);

  /// @brief Method half4, addr 0x6a3fc48, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half4 half4(::Unity::Mathematics::half2 xy, ::Unity::Mathematics::half2 zw);

  /// @brief Method half4, addr 0x6a3fc50, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half4 half4(::Unity::Mathematics::half3 xyz, ::Unity::Mathematics::half w);

  /// @brief Method half4, addr 0x6a3fc58, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half4 half4(::Unity::Mathematics::half4 xyzw);

  /// @brief Method hash, addr 0x6a35b20, size 0xc8, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::AffineTransform a);

  /// @brief Method hash, addr 0x6a57030, size 0x4, virtual false, abstract: false, final false
  static inline uint32_t hash(void* pBuffer, int32_t numBytes, uint32_t seed);

  /// @brief Method hash, addr 0x6a5ffd8, size 0x60, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::quaternion q);

  /// @brief Method hash, addr 0x6a605dc, size 0x9c, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::RigidTransform t);

  /// @brief Method hash, addr 0x6a35d30, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::bool2 v);

  /// @brief Method hash, addr 0x6a3609c, size 0x74, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::bool2x2 v);

  /// @brief Method hash, addr 0x6a36224, size 0xb0, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::bool2x3 v);

  /// @brief Method hash, addr 0x6a36428, size 0xbc, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::bool2x4 v);

  /// @brief Method hash, addr 0x6a36628, size 0x54, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::bool3 v);

  /// @brief Method hash, addr 0x6a36a34, size 0xac, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::bool3x2 v);

  /// @brief Method hash, addr 0x6a36cb4, size 0x114, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::bool3x3 v);

  /// @brief Method hash, addr 0x6a3709c, size 0x16c, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::bool3x4 v);

  /// @brief Method hash, addr 0x6a37454, size 0x48, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::bool4 v);

  /// @brief Method hash, addr 0x6a378d8, size 0xc0, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::bool4x2 v);

  /// @brief Method hash, addr 0x6a37b90, size 0x158, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::bool4x3 v);

  /// @brief Method hash, addr 0x6a37f90, size 0x160, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::bool4x4 v);

  /// @brief Method hash, addr 0x6a383b4, size 0x44, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::double2 v);

  /// @brief Method hash, addr 0x6a38830, size 0x78, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::double2x2 v);

  /// @brief Method hash, addr 0x6a38aa0, size 0xa4, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::double2x3 v);

  /// @brief Method hash, addr 0x6a38dc0, size 0xd0, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::double2x4 v);

  /// @brief Method hash, addr 0x6a3917c, size 0x60, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::double3 v);

  /// @brief Method hash, addr 0x6a396dc, size 0xa0, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::double3x2 v);

  /// @brief Method hash, addr 0x6a39b90, size 0xe4, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::double3x3 v);

  /// @brief Method hash, addr 0x6a3a0b8, size 0x11c, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::double3x4 v);

  /// @brief Method hash, addr 0x6a3a5a4, size 0x80, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::double4 v);

  /// @brief Method hash, addr 0x6a3ac28, size 0xd8, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::double4x2 v);

  /// @brief Method hash, addr 0x6a3b094, size 0x138, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::double4x3 v);

  /// @brief Method hash, addr 0x6a3bc38, size 0x188, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::double4x4 v);

  /// @brief Method hash, addr 0x6a3c0b8, size 0x34, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::float2 v);

  /// @brief Method hash, addr 0x6a3c514, size 0x58, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::float2x2 v);

  /// @brief Method hash, addr 0x6a3c74c, size 0x74, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::float2x3 v);

  /// @brief Method hash, addr 0x6a3c9ec, size 0x90, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::float2x4 v);

  /// @brief Method hash, addr 0x6a3cd0c, size 0x48, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::float3 v);

  /// @brief Method hash, addr 0x6a3d244, size 0x70, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::float3x2 v);

  /// @brief Method hash, addr 0x6a3d67c, size 0x84, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::float3x3 v);

  /// @brief Method hash, addr 0x6a3dadc, size 0xb4, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::float3x4 v);

  /// @brief Method hash, addr 0x6a3de94, size 0x60, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::float4 v);

  /// @brief Method hash, addr 0x6a3e4a8, size 0x9c, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::float4x2 v);

  /// @brief Method hash, addr 0x6a3e868, size 0xe0, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::float4x3 v);

  /// @brief Method hash, addr 0x6a3f2c0, size 0x124, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::float4x4 v);

  /// @brief Method hash, addr 0x6a3f5d0, size 0x1c, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::half v);

  /// @brief Method hash, addr 0x6a3f7f4, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::half2 v);

  /// @brief Method hash, addr 0x6a3fb50, size 0x4c, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::half3 v);

  /// @brief Method hash, addr 0x6a3ffac, size 0x68, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::half4 v);

  /// @brief Method hash, addr 0x6a4017c, size 0x30, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::int2 v);

  /// @brief Method hash, addr 0x6a405a8, size 0x50, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::int2x2 v);

  /// @brief Method hash, addr 0x6a408b0, size 0x74, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::int2x3 v);

  /// @brief Method hash, addr 0x6a40c64, size 0x90, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::int2x4 v);

  /// @brief Method hash, addr 0x6a40ed4, size 0x40, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::int3 v);

  /// @brief Method hash, addr 0x6a41490, size 0x7c, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::int3x2 v);

  /// @brief Method hash, addr 0x6a41934, size 0xac, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::int3x3 v);

  /// @brief Method hash, addr 0x6a41ee0, size 0xdc, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::int3x4 v);

  /// @brief Method hash, addr 0x6a4225c, size 0x58, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::int4 v);

  /// @brief Method hash, addr 0x6a4287c, size 0x9c, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::int4x2 v);

  /// @brief Method hash, addr 0x6a42d48, size 0xd8, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::int4x3 v);

  /// @brief Method hash, addr 0x6a4344c, size 0x114, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::int4x4 v);

  /// @brief Method hash, addr 0x6a6080c, size 0x30, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::uint2 v);

  /// @brief Method hash, addr 0x6a60bf0, size 0x50, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::uint2x2 v);

  /// @brief Method hash, addr 0x6a60ed4, size 0x74, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::uint2x3 v);

  /// @brief Method hash, addr 0x6a61278, size 0x90, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::uint2x4 v);

  /// @brief Method hash, addr 0x6a614c8, size 0x40, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::uint3 v);

  /// @brief Method hash, addr 0x6a61a74, size 0x7c, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::uint3x2 v);

  /// @brief Method hash, addr 0x6a61ecc, size 0xac, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::uint3x3 v);

  /// @brief Method hash, addr 0x6a62488, size 0xdc, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::uint3x4 v);

  /// @brief Method hash, addr 0x6a627d4, size 0x58, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::uint4 v);

  /// @brief Method hash, addr 0x6a62de8, size 0x9c, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::uint4x2 v);

  /// @brief Method hash, addr 0x6a632b8, size 0xd8, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::uint4x3 v);

  /// @brief Method hash, addr 0x6a6390c, size 0x114, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::uint4x4 v);

  /// @brief Method hash_with_unaligned_loads, addr 0x6a56d00, size 0x17c, virtual false, abstract: false, final false
  static inline uint32_t hash_with_unaligned_loads(void* pBuffer, int32_t numBytes, uint32_t seed);

  /// @brief Method hash_without_unaligned_loads, addr 0x6a56e7c, size 0x1b4, virtual false, abstract: false, final false
  static inline uint32_t hash_without_unaligned_loads(void* pBuffer, int32_t numBytes, uint32_t seed);

  /// @brief Method hashwide, addr 0x6a35d68, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::bool2 v);

  /// @brief Method hashwide, addr 0x6a36110, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::bool2x2 v);

  /// @brief Method hashwide, addr 0x6a362d4, size 0x8c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::bool2x3 v);

  /// @brief Method hashwide, addr 0x6a364e4, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::bool2x4 v);

  /// @brief Method hashwide, addr 0x6a383f8, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::double2 v);

  /// @brief Method hashwide, addr 0x6a388a8, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::double2x2 v);

  /// @brief Method hashwide, addr 0x6a38b44, size 0xa8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::double2x3 v);

  /// @brief Method hashwide, addr 0x6a38e90, size 0xd0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::double2x4 v);

  /// @brief Method hashwide, addr 0x6a3c0ec, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::float2 v);

  /// @brief Method hashwide, addr 0x6a3c56c, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::float2x2 v);

  /// @brief Method hashwide, addr 0x6a3c7c0, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::float2x3 v);

  /// @brief Method hashwide, addr 0x6a3ca7c, size 0x98, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::float2x4 v);

  /// @brief Method hashwide, addr 0x6a3f82c, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::half2 v);

  /// @brief Method hashwide, addr 0x6a401ac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::int2 v);

  /// @brief Method hashwide, addr 0x6a405f8, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::int2x2 v);

  /// @brief Method hashwide, addr 0x6a40924, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::int2x3 v);

  /// @brief Method hashwide, addr 0x6a40cf4, size 0x98, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::int2x4 v);

  /// @brief Method hashwide, addr 0x6a6083c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::uint2 v);

  /// @brief Method hashwide, addr 0x6a60c40, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::uint2x2 v);

  /// @brief Method hashwide, addr 0x6a60f48, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::uint2x3 v);

  /// @brief Method hashwide, addr 0x6a61308, size 0x98, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::uint2x4 v);

  /// @brief Method hashwide, addr 0x6a3667c, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::bool3 v);

  /// @brief Method hashwide, addr 0x6a36ae0, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::bool3x2 v);

  /// @brief Method hashwide, addr 0x6a36dc8, size 0xfc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::bool3x3 v);

  /// @brief Method hashwide, addr 0x6a37208, size 0x144, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::bool3x4 v);

  /// @brief Method hashwide, addr 0x6a391dc, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::double3 v);

  /// @brief Method hashwide, addr 0x6a3977c, size 0xa0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::double3x2 v);

  /// @brief Method hashwide, addr 0x6a39c74, size 0xe4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::double3x3 v);

  /// @brief Method hashwide, addr 0x6a3a1d4, size 0x128, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::double3x4 v);

  /// @brief Method hashwide, addr 0x6a3cd54, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::float3 v);

  /// @brief Method hashwide, addr 0x6a3d2b4, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::float3x2 v);

  /// @brief Method hashwide, addr 0x6a3d700, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::float3x3 v);

  /// @brief Method hashwide, addr 0x6a3db90, size 0xd8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::float3x4 v);

  /// @brief Method hashwide, addr 0x6a3fb9c, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::half3 v);

  /// @brief Method hashwide, addr 0x6a40f14, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::int3 v);

  /// @brief Method hashwide, addr 0x6a4150c, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::int3x2 v);

  /// @brief Method hashwide, addr 0x6a419e0, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::int3x3 v);

  /// @brief Method hashwide, addr 0x6a41fbc, size 0xe4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::int3x4 v);

  /// @brief Method hashwide, addr 0x6a61508, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::uint3 v);

  /// @brief Method hashwide, addr 0x6a61af0, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::uint3x2 v);

  /// @brief Method hashwide, addr 0x6a61f78, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::uint3x3 v);

  /// @brief Method hashwide, addr 0x6a62564, size 0xe4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::uint3x4 v);

  /// @brief Method hashwide, addr 0x6a35be8, size 0x110, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::AffineTransform a);

  /// @brief Method hashwide, addr 0x6a60038, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::quaternion q);

  /// @brief Method hashwide, addr 0x6a60678, size 0xc0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::RigidTransform t);

  /// @brief Method hashwide, addr 0x6a3749c, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::bool4 v);

  /// @brief Method hashwide, addr 0x6a37998, size 0xd8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::bool4x2 v);

  /// @brief Method hashwide, addr 0x6a37ce8, size 0xf8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::bool4x3 v);

  /// @brief Method hashwide, addr 0x6a380f0, size 0x148, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::bool4x4 v);

  /// @brief Method hashwide, addr 0x6a3a624, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::double4 v);

  /// @brief Method hashwide, addr 0x6a3ad00, size 0xd8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::double4x2 v);

  /// @brief Method hashwide, addr 0x6a3b1cc, size 0x130, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::double4x3 v);

  /// @brief Method hashwide, addr 0x6a3bdc0, size 0x184, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::double4x4 v);

  /// @brief Method hashwide, addr 0x6a3def4, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::float4 v);

  /// @brief Method hashwide, addr 0x6a3e544, size 0xac, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::float4x2 v);

  /// @brief Method hashwide, addr 0x6a3e948, size 0xec, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::float4x3 v);

  /// @brief Method hashwide, addr 0x6a3f3e4, size 0x12c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::float4x4 v);

  /// @brief Method hashwide, addr 0x6a40014, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::half4 v);

  /// @brief Method hashwide, addr 0x6a422b4, size 0x5c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::int4 v);

  /// @brief Method hashwide, addr 0x6a42918, size 0x9c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::int4x2 v);

  /// @brief Method hashwide, addr 0x6a42e20, size 0xd8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::int4x3 v);

  /// @brief Method hashwide, addr 0x6a43560, size 0x114, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::int4x4 v);

  /// @brief Method hashwide, addr 0x6a6282c, size 0x5c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::uint4 v);

  /// @brief Method hashwide, addr 0x6a62e84, size 0x9c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::uint4x2 v);

  /// @brief Method hashwide, addr 0x6a63390, size 0xd8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::uint4x3 v);

  /// @brief Method hashwide, addr 0x6a63a20, size 0x4644, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::uint4x4 v);

  /// @brief Method int2, addr 0x6a400b4, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 int2(::Unity::Mathematics::bool2 v);

  /// @brief Method int2, addr 0x6a40148, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 int2(::Unity::Mathematics::double2 v);

  /// @brief Method int2, addr 0x6a400f4, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 int2(::Unity::Mathematics::float2 v);

  /// @brief Method int2, addr 0x6a400d0, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 int2(::Unity::Mathematics::uint2 v);

  /// @brief Method int2, addr 0x6a4009c, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 int2(bool v);

  /// @brief Method int2, addr 0x6a40128, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 int2(double_t v);

  /// @brief Method int2, addr 0x6a400d4, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 int2(float_t v);

  /// @brief Method int2, addr 0x6a40090, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 int2(int32_t v);

  /// @brief Method int2, addr 0x6a400c4, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 int2(uint32_t v);

  /// @brief Method int2, addr 0x6a40080, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 int2(int32_t x, int32_t y);

  /// @brief Method int2, addr 0x6a4008c, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 int2(::Unity::Mathematics::int2 xy);

  /// @brief Method int2x2, addr 0x6a40418, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x2 int2x2(::Unity::Mathematics::int2 c0, ::Unity::Mathematics::int2 c1);

  /// @brief Method int2x2, addr 0x6a4041c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x2 int2x2(int32_t m00, int32_t m01, int32_t m10, int32_t m11);

  /// @brief Method int2x2, addr 0x6a40454, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x2 int2x2(::Unity::Mathematics::bool2x2 v);

  /// @brief Method int2x2, addr 0x6a40528, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x2 int2x2(::Unity::Mathematics::double2x2 v);

  /// @brief Method int2x2, addr 0x6a404ac, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x2 int2x2(::Unity::Mathematics::float2x2 v);

  /// @brief Method int2x2, addr 0x6a40484, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x2 int2x2(::Unity::Mathematics::uint2x2 v);

  /// @brief Method int2x2, addr 0x6a40440, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x2 int2x2(bool v);

  /// @brief Method int2x2, addr 0x6a40504, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x2 int2x2(double_t v);

  /// @brief Method int2x2, addr 0x6a40488, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x2 int2x2(float_t v);

  /// @brief Method int2x2, addr 0x6a40430, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x2 int2x2(int32_t v);

  /// @brief Method int2x2, addr 0x6a40474, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x2 int2x2(uint32_t v);

  /// @brief Method int2x3, addr 0x6a40650, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x3 int2x3(::Unity::Mathematics::int2 c0, ::Unity::Mathematics::int2 c1, ::Unity::Mathematics::int2 c2);

  /// @brief Method int2x3, addr 0x6a4065c, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x3 int2x3(int32_t m00, int32_t m01, int32_t m02, int32_t m10, int32_t m11, int32_t m12);

  /// @brief Method int2x3, addr 0x6a406ac, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x3 int2x3(::Unity::Mathematics::bool2x3 v);

  /// @brief Method int2x3, addr 0x6a407fc, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x3 int2x3(::Unity::Mathematics::double2x3 v);

  /// @brief Method int2x3, addr 0x6a40748, size 0x8c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x3 int2x3(::Unity::Mathematics::float2x3 v);

  /// @brief Method int2x3, addr 0x6a4070c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x3 int2x3(::Unity::Mathematics::uint2x3 v);

  /// @brief Method int2x3, addr 0x6a40694, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x3 int2x3(bool v);

  /// @brief Method int2x3, addr 0x6a407d4, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x3 int2x3(double_t v);

  /// @brief Method int2x3, addr 0x6a40720, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x3 int2x3(float_t v);

  /// @brief Method int2x3, addr 0x6a40680, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x3 int2x3(int32_t v);

  /// @brief Method int2x3, addr 0x6a406f8, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x3 int2x3(uint32_t v);

  /// @brief Method int2x4, addr 0x6a409a0, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x4 int2x4(::Unity::Mathematics::int2 c0, ::Unity::Mathematics::int2 c1, ::Unity::Mathematics::int2 c2, ::Unity::Mathematics::int2 c3);

  /// @brief Method int2x4, addr 0x6a409ac, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x4 int2x4(int32_t m00, int32_t m01, int32_t m02, int32_t m03, int32_t m10, int32_t m11, int32_t m12, int32_t m13);

  /// @brief Method int2x4, addr 0x6a40a04, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x4 int2x4(::Unity::Mathematics::bool2x4 v);

  /// @brief Method int2x4, addr 0x6a40b88, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x4 int2x4(::Unity::Mathematics::double2x4 v);

  /// @brief Method int2x4, addr 0x6a40ac0, size 0xa0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x4 int2x4(::Unity::Mathematics::float2x4 v);

  /// @brief Method int2x4, addr 0x6a40a8c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x4 int2x4(::Unity::Mathematics::uint2x4 v);

  /// @brief Method int2x4, addr 0x6a409ec, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x4 int2x4(bool v);

  /// @brief Method int2x4, addr 0x6a40b60, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x4 int2x4(double_t v);

  /// @brief Method int2x4, addr 0x6a40a98, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x4 int2x4(float_t v);

  /// @brief Method int2x4, addr 0x6a409d8, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x4 int2x4(int32_t v);

  /// @brief Method int2x4, addr 0x6a40a78, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x4 int2x4(uint32_t v);

  /// @brief Method int3, addr 0x6a40de8, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 int3(::Unity::Mathematics::bool3 v);

  /// @brief Method int3, addr 0x6a40e94, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 int3(::Unity::Mathematics::double3 v);

  /// @brief Method int3, addr 0x6a40e34, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 int3(::Unity::Mathematics::float3 v);

  /// @brief Method int3, addr 0x6a40e0c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 int3(::Unity::Mathematics::uint3 v);

  /// @brief Method int3, addr 0x6a40dcc, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 int3(bool v);

  /// @brief Method int3, addr 0x6a40e74, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 int3(double_t v);

  /// @brief Method int3, addr 0x6a40e14, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 int3(float_t v);

  /// @brief Method int3, addr 0x6a40dc0, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 int3(int32_t v);

  /// @brief Method int3, addr 0x6a40e00, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 int3(uint32_t v);

  /// @brief Method int3, addr 0x6a40d8c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 int3(int32_t x, int32_t y, int32_t z);

  /// @brief Method int3, addr 0x6a40d9c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 int3(int32_t x, ::Unity::Mathematics::int2 yz);

  /// @brief Method int3, addr 0x6a40db0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 int3(::Unity::Mathematics::int2 xy, int32_t z);

  /// @brief Method int3, addr 0x6a40db8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 int3(::Unity::Mathematics::int3 xyz);

  /// @brief Method int3x2, addr 0x6a41228, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 int3x2(::Unity::Mathematics::int3 c0, ::Unity::Mathematics::int3 c1);

  /// @brief Method int3x2, addr 0x6a4123c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 int3x2(int32_t m00, int32_t m01, int32_t m10, int32_t m11, int32_t m20, int32_t m21);

  /// @brief Method int3x2, addr 0x6a41288, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 int3x2(::Unity::Mathematics::bool3x2 v);

  /// @brief Method int3x2, addr 0x6a413e0, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 int3x2(::Unity::Mathematics::double3x2 v);

  /// @brief Method int3x2, addr 0x6a41328, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 int3x2(::Unity::Mathematics::float3x2 v);

  /// @brief Method int3x2, addr 0x6a412d4, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 int3x2(::Unity::Mathematics::uint3x2 v);

  /// @brief Method int3x2, addr 0x6a41268, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 int3x2(bool v);

  /// @brief Method int3x2, addr 0x6a413b0, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 int3x2(double_t v);

  /// @brief Method int3x2, addr 0x6a412f8, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 int3x2(float_t v);

  /// @brief Method int3x2, addr 0x6a4124c, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 int3x2(int32_t v);

  /// @brief Method int3x2, addr 0x6a412b8, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 int3x2(uint32_t v);

  /// @brief Method int3x3, addr 0x6a41590, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x3 int3x3(::Unity::Mathematics::int3 c0, ::Unity::Mathematics::int3 c1, ::Unity::Mathematics::int3 c2);

  /// @brief Method int3x3, addr 0x6a415ac, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x3 int3x3(int32_t m00, int32_t m01, int32_t m02, int32_t m10, int32_t m11, int32_t m12, int32_t m20, int32_t m21, int32_t m22);

  /// @brief Method int3x3, addr 0x6a41614, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x3 int3x3(::Unity::Mathematics::bool3x3 v);

  /// @brief Method int3x3, addr 0x6a417f4, size 0xc4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x3 int3x3(::Unity::Mathematics::double3x3 v);

  /// @brief Method int3x3, addr 0x6a416f8, size 0xc4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x3 int3x3(::Unity::Mathematics::float3x3 v);

  /// @brief Method int3x3, addr 0x6a4168c, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x3 int3x3(::Unity::Mathematics::uint3x3 v);

  /// @brief Method int3x3, addr 0x6a415ec, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x3 int3x3(bool v);

  /// @brief Method int3x3, addr 0x6a417bc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x3 int3x3(double_t v);

  /// @brief Method int3x3, addr 0x6a416c0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x3 int3x3(float_t v);

  /// @brief Method int3x3, addr 0x6a415c8, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x3 int3x3(int32_t v);

  /// @brief Method int3x3, addr 0x6a41668, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x3 int3x3(uint32_t v);

  /// @brief Method int3x4, addr 0x6a41a94, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 int3x4(::Unity::Mathematics::int3 c0, ::Unity::Mathematics::int3 c1, ::Unity::Mathematics::int3 c2, ::Unity::Mathematics::int3 c3);

  /// @brief Method int3x4, addr 0x6a41ab8, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 int3x4(int32_t m00, int32_t m01, int32_t m02, int32_t m03, int32_t m10, int32_t m11, int32_t m12, int32_t m13, int32_t m20, int32_t m21, int32_t m22,
                                                    int32_t m23);

  /// @brief Method int3x4, addr 0x6a41b48, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 int3x4(::Unity::Mathematics::bool3x4 v);

  /// @brief Method int3x4, addr 0x6a41da8, size 0xfc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 int3x4(::Unity::Mathematics::double3x4 v);

  /// @brief Method int3x4, addr 0x6a41c6c, size 0xfc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 int3x4(::Unity::Mathematics::float3x4 v);

  /// @brief Method int3x4, addr 0x6a41be8, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 int3x4(::Unity::Mathematics::uint3x4 v);

  /// @brief Method int3x4, addr 0x6a41b18, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 int3x4(bool v);

  /// @brief Method int3x4, addr 0x6a41d68, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 int3x4(double_t v);

  /// @brief Method int3x4, addr 0x6a41c2c, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 int3x4(float_t v);

  /// @brief Method int3x4, addr 0x6a41aec, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 int3x4(int32_t v);

  /// @brief Method int3x4, addr 0x6a41bbc, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 int3x4(uint32_t v);

  /// @brief Method int4, addr 0x6a42134, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 int4(::Unity::Mathematics::bool4 v);

  /// @brief Method int4, addr 0x6a42208, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 int4(::Unity::Mathematics::double4 v);

  /// @brief Method int4, addr 0x6a4218c, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 int4(::Unity::Mathematics::float4 v);

  /// @brief Method int4, addr 0x6a42164, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 int4(::Unity::Mathematics::uint4 v);

  /// @brief Method int4, addr 0x6a4211c, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 int4(bool v);

  /// @brief Method int4, addr 0x6a421e4, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 int4(double_t v);

  /// @brief Method int4, addr 0x6a42168, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 int4(float_t v);

  /// @brief Method int4, addr 0x6a4210c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 int4(int32_t v);

  /// @brief Method int4, addr 0x6a42154, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 int4(uint32_t v);

  /// @brief Method int4, addr 0x6a420a0, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 int4(int32_t x, int32_t y, int32_t z, int32_t w);

  /// @brief Method int4, addr 0x6a420b8, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 int4(int32_t x, int32_t y, ::Unity::Mathematics::int2 zw);

  /// @brief Method int4, addr 0x6a420c8, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 int4(int32_t x, ::Unity::Mathematics::int2 yz, int32_t w);

  /// @brief Method int4, addr 0x6a420dc, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 int4(int32_t x, ::Unity::Mathematics::int3 yzw);

  /// @brief Method int4, addr 0x6a420f0, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 int4(::Unity::Mathematics::int2 xy, int32_t z, int32_t w);

  /// @brief Method int4, addr 0x6a420fc, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 int4(::Unity::Mathematics::int2 xy, ::Unity::Mathematics::int2 zw);

  /// @brief Method int4, addr 0x6a42100, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 int4(::Unity::Mathematics::int3 xyz, int32_t w);

  /// @brief Method int4, addr 0x6a42108, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 int4(::Unity::Mathematics::int4 xyzw);

  /// @brief Method int4x2, addr 0x6a425e4, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 int4x2(::Unity::Mathematics::int4 c0, ::Unity::Mathematics::int4 c1);

  /// @brief Method int4x2, addr 0x6a425f0, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 int4x2(int32_t m00, int32_t m01, int32_t m10, int32_t m11, int32_t m20, int32_t m21, int32_t m30, int32_t m31);

  /// @brief Method int4x2, addr 0x6a42630, size 0x5c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 int4x2(::Unity::Mathematics::bool4x2 v);

  /// @brief Method int4x2, addr 0x6a4279c, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 int4x2(::Unity::Mathematics::double4x2 v);

  /// @brief Method int4x2, addr 0x6a426d4, size 0xa0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 int4x2(::Unity::Mathematics::float4x2 v);

  /// @brief Method int4x2, addr 0x6a426a0, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 int4x2(::Unity::Mathematics::uint4x2 v);

  /// @brief Method int4x2, addr 0x6a42618, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 int4x2(bool v);

  /// @brief Method int4x2, addr 0x6a42774, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 int4x2(double_t v);

  /// @brief Method int4x2, addr 0x6a426ac, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 int4x2(float_t v);

  /// @brief Method int4x2, addr 0x6a42604, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 int4x2(int32_t v);

  /// @brief Method int4x2, addr 0x6a4268c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 int4x2(uint32_t v);

  /// @brief Method int4x3, addr 0x6a429b4, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 int4x3(::Unity::Mathematics::int4 c0, ::Unity::Mathematics::int4 c1, ::Unity::Mathematics::int4 c2);

  /// @brief Method int4x3, addr 0x6a429c4, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 int4x3(int32_t m00, int32_t m01, int32_t m02, int32_t m10, int32_t m11, int32_t m12, int32_t m20, int32_t m21, int32_t m22, int32_t m30, int32_t m31,
                                                    int32_t m32);

  /// @brief Method int4x3, addr 0x6a42a2c, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 int4x3(::Unity::Mathematics::bool4x3 v);

  /// @brief Method int4x3, addr 0x6a42c10, size 0x104, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 int4x3(::Unity::Mathematics::double4x3 v);

  /// @brief Method int4x3, addr 0x6a42afc, size 0xe8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 int4x3(::Unity::Mathematics::float4x3 v);

  /// @brief Method int4x3, addr 0x6a42abc, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 int4x3(::Unity::Mathematics::uint4x3 v);

  /// @brief Method int4x3, addr 0x6a42a10, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 int4x3(bool v);

  /// @brief Method int4x3, addr 0x6a42be4, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 int4x3(double_t v);

  /// @brief Method int4x3, addr 0x6a42ad0, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 int4x3(float_t v);

  /// @brief Method int4x3, addr 0x6a429f8, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 int4x3(int32_t v);

  /// @brief Method int4x3, addr 0x6a42aa4, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 int4x3(uint32_t v);

  /// @brief Method int4x4, addr 0x6a42ef8, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 int4x4(::Unity::Mathematics::int4 c0, ::Unity::Mathematics::int4 c1, ::Unity::Mathematics::int4 c2, ::Unity::Mathematics::int4 c3);

  /// @brief Method int4x4, addr 0x6a42f0c, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 int4x4(int32_t m00, int32_t m01, int32_t m02, int32_t m03, int32_t m10, int32_t m11, int32_t m12, int32_t m13, int32_t m20, int32_t m21, int32_t m22,
                                                    int32_t m23, int32_t m30, int32_t m31, int32_t m32, int32_t m33);

  /// @brief Method int4x4, addr 0x6a42f9c, size 0x94, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 int4x4(::Unity::Mathematics::bool4x4 v);

  /// @brief Method int4x4, addr 0x6a431e8, size 0x15c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 int4x4(::Unity::Mathematics::double4x4 v);

  /// @brief Method int4x4, addr 0x6a43090, size 0x128, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 int4x4(::Unity::Mathematics::float4x4 v);

  /// @brief Method int4x4, addr 0x6a4304c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 int4x4(::Unity::Mathematics::uint4x4 v);

  /// @brief Method int4x4, addr 0x6a42f7c, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 int4x4(bool v);

  /// @brief Method int4x4, addr 0x6a431b8, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 int4x4(double_t v);

  /// @brief Method int4x4, addr 0x6a43060, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 int4x4(float_t v);

  /// @brief Method int4x4, addr 0x6a42f60, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 int4x4(int32_t v);

  /// @brief Method int4x4, addr 0x6a43030, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 int4x4(uint32_t v);

  /// @brief Method inverse, addr 0x6a35968, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::AffineTransform inverse(::Unity::Mathematics::AffineTransform a);

  /// @brief Method inverse, addr 0x6a60208, size 0xe0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::RigidTransform inverse(::Unity::Mathematics::RigidTransform t);

  /// @brief Method inverse, addr 0x6a387f4, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 inverse(::Unity::Mathematics::double2x2 m);

  /// @brief Method inverse, addr 0x6a39a68, size 0xd4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 inverse(::Unity::Mathematics::double3x3 m);

  /// @brief Method inverse, addr 0x6a3b764, size 0x354, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x4 inverse(::Unity::Mathematics::double4x4 m);

  /// @brief Method inverse, addr 0x6a3c4d8, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 inverse(::Unity::Mathematics::float2x2 m);

  /// @brief Method inverse, addr 0x6a3d558, size 0xd0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 inverse(::Unity::Mathematics::float3x3 m);

  /// @brief Method inverse, addr 0x6a3ee04, size 0x33c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 inverse(::Unity::Mathematics::float4x4 m);

  /// @brief Method inverse, addr 0x6a5ea58, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion inverse(::Unity::Mathematics::quaternion q);

  /// @brief Method isfinite, addr 0x6a438ec, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 isfinite(::Unity::Mathematics::double2 x);

  /// @brief Method isfinite, addr 0x6a43824, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 isfinite(::Unity::Mathematics::float2 x);

  /// @brief Method isfinite, addr 0x6a43914, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 isfinite(::Unity::Mathematics::double3 x);

  /// @brief Method isfinite, addr 0x6a4384c, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 isfinite(::Unity::Mathematics::float3 x);

  /// @brief Method isfinite, addr 0x6a43950, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 isfinite(::Unity::Mathematics::double4 x);

  /// @brief Method isfinite, addr 0x6a43888, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 isfinite(::Unity::Mathematics::float4 x);

  /// @brief Method isfinite, addr 0x6a438d4, size 0x18, virtual false, abstract: false, final false
  static inline bool isfinite(double_t x);

  /// @brief Method isfinite, addr 0x6a4380c, size 0x18, virtual false, abstract: false, final false
  static inline bool isfinite(float_t x);

  /// @brief Method isinf, addr 0x6a43a7c, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 isinf(::Unity::Mathematics::double2 x);

  /// @brief Method isinf, addr 0x6a439b4, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 isinf(::Unity::Mathematics::float2 x);

  /// @brief Method isinf, addr 0x6a43aa4, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 isinf(::Unity::Mathematics::double3 x);

  /// @brief Method isinf, addr 0x6a439dc, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 isinf(::Unity::Mathematics::float3 x);

  /// @brief Method isinf, addr 0x6a43ae0, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 isinf(::Unity::Mathematics::double4 x);

  /// @brief Method isinf, addr 0x6a43a18, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 isinf(::Unity::Mathematics::float4 x);

  /// @brief Method isinf, addr 0x6a43a64, size 0x18, virtual false, abstract: false, final false
  static inline bool isinf(double_t x);

  /// @brief Method isinf, addr 0x6a4399c, size 0x18, virtual false, abstract: false, final false
  static inline bool isinf(float_t x);

  /// @brief Method isnan, addr 0x6a43c1c, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 isnan(::Unity::Mathematics::double2 x);

  /// @brief Method isnan, addr 0x6a43b44, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 isnan(::Unity::Mathematics::float2 x);

  /// @brief Method isnan, addr 0x6a43c48, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 isnan(::Unity::Mathematics::double3 x);

  /// @brief Method isnan, addr 0x6a43b70, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 isnan(::Unity::Mathematics::float3 x);

  /// @brief Method isnan, addr 0x6a43c88, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 isnan(::Unity::Mathematics::double4 x);

  /// @brief Method isnan, addr 0x6a43bb0, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 isnan(::Unity::Mathematics::float4 x);

  /// @brief Method isnan, addr 0x6a43c04, size 0x18, virtual false, abstract: false, final false
  static inline bool isnan(double_t x);

  /// @brief Method isnan, addr 0x6a43b2c, size 0x18, virtual false, abstract: false, final false
  static inline bool isnan(float_t x);

  /// @brief Method ispow2, addr 0x6a43cf0, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 ispow2(::Unity::Mathematics::int2 x);

  /// @brief Method ispow2, addr 0x6a43de0, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 ispow2(::Unity::Mathematics::uint2 x);

  /// @brief Method ispow2, addr 0x6a43d20, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 ispow2(::Unity::Mathematics::int3 x);

  /// @brief Method ispow2, addr 0x6a43e0c, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 ispow2(::Unity::Mathematics::uint3 x);

  /// @brief Method ispow2, addr 0x6a43d68, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 ispow2(::Unity::Mathematics::int4 x);

  /// @brief Method ispow2, addr 0x6a43e4c, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 ispow2(::Unity::Mathematics::uint4 x);

  /// @brief Method ispow2, addr 0x6a43cdc, size 0x14, virtual false, abstract: false, final false
  static inline bool ispow2(int32_t x);

  /// @brief Method ispow2, addr 0x6a43dcc, size 0x14, virtual false, abstract: false, final false
  static inline bool ispow2(uint32_t x);

  /// @brief Method left, addr 0x6a57074, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 left();

  /// @brief Method length, addr 0x6a5121c, size 0x70, virtual false, abstract: false, final false
  static inline double_t length(::Unity::Mathematics::double2 x);

  /// @brief Method length, addr 0x6a5128c, size 0x84, virtual false, abstract: false, final false
  static inline double_t length(::Unity::Mathematics::double3 x);

  /// @brief Method length, addr 0x6a51310, size 0x90, virtual false, abstract: false, final false
  static inline double_t length(::Unity::Mathematics::double4 x);

  /// @brief Method length, addr 0x6a51214, size 0x8, virtual false, abstract: false, final false
  static inline double_t length(double_t x);

  /// @brief Method length, addr 0x6a5eab0, size 0x90, virtual false, abstract: false, final false
  static inline float_t length(::Unity::Mathematics::quaternion q);

  /// @brief Method length, addr 0x6a51090, size 0x70, virtual false, abstract: false, final false
  static inline float_t length(::Unity::Mathematics::float2 x);

  /// @brief Method length, addr 0x6a51100, size 0x84, virtual false, abstract: false, final false
  static inline float_t length(::Unity::Mathematics::float3 x);

  /// @brief Method length, addr 0x6a51184, size 0x90, virtual false, abstract: false, final false
  static inline float_t length(::Unity::Mathematics::float4 x);

  /// @brief Method length, addr 0x6a51088, size 0x8, virtual false, abstract: false, final false
  static inline float_t length(float_t x);

  /// @brief Method lengthsq, addr 0x6a513f8, size 0x10, virtual false, abstract: false, final false
  static inline double_t lengthsq(::Unity::Mathematics::double2 x);

  /// @brief Method lengthsq, addr 0x6a51408, size 0x18, virtual false, abstract: false, final false
  static inline double_t lengthsq(::Unity::Mathematics::double3 x);

  /// @brief Method lengthsq, addr 0x6a51420, size 0x20, virtual false, abstract: false, final false
  static inline double_t lengthsq(::Unity::Mathematics::double4 x);

  /// @brief Method lengthsq, addr 0x6a513f0, size 0x8, virtual false, abstract: false, final false
  static inline double_t lengthsq(double_t x);

  /// @brief Method lengthsq, addr 0x6a5eb40, size 0x20, virtual false, abstract: false, final false
  static inline float_t lengthsq(::Unity::Mathematics::quaternion q);

  /// @brief Method lengthsq, addr 0x6a513a8, size 0x10, virtual false, abstract: false, final false
  static inline float_t lengthsq(::Unity::Mathematics::float2 x);

  /// @brief Method lengthsq, addr 0x6a513b8, size 0x18, virtual false, abstract: false, final false
  static inline float_t lengthsq(::Unity::Mathematics::float3 x);

  /// @brief Method lengthsq, addr 0x6a513d0, size 0x20, virtual false, abstract: false, final false
  static inline float_t lengthsq(::Unity::Mathematics::float4 x);

  /// @brief Method lengthsq, addr 0x6a513a0, size 0x8, virtual false, abstract: false, final false
  static inline float_t lengthsq(float_t x);

  /// @brief Method lerp, addr 0x6a4466c, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 lerp(::Unity::Mathematics::double2 start, ::Unity::Mathematics::double2 end, ::Unity::Mathematics::double2 t);

  /// @brief Method lerp, addr 0x6a445f0, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 lerp(::Unity::Mathematics::double2 start, ::Unity::Mathematics::double2 end, double_t t);

  /// @brief Method lerp, addr 0x6a44688, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 lerp(::Unity::Mathematics::double3 start, ::Unity::Mathematics::double3 end, ::Unity::Mathematics::double3 t);

  /// @brief Method lerp, addr 0x6a4460c, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 lerp(::Unity::Mathematics::double3 start, ::Unity::Mathematics::double3 end, double_t t);

  /// @brief Method lerp, addr 0x6a446b8, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 lerp(::Unity::Mathematics::double4 start, ::Unity::Mathematics::double4 end, ::Unity::Mathematics::double4 t);

  /// @brief Method lerp, addr 0x6a44634, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 lerp(::Unity::Mathematics::double4 start, ::Unity::Mathematics::double4 end, double_t t);

  /// @brief Method lerp, addr 0x6a44558, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 lerp(::Unity::Mathematics::float2 start, ::Unity::Mathematics::float2 end, ::Unity::Mathematics::float2 t);

  /// @brief Method lerp, addr 0x6a444dc, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 lerp(::Unity::Mathematics::float2 start, ::Unity::Mathematics::float2 end, float_t t);

  /// @brief Method lerp, addr 0x6a44574, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 lerp(::Unity::Mathematics::float3 start, ::Unity::Mathematics::float3 end, ::Unity::Mathematics::float3 t);

  /// @brief Method lerp, addr 0x6a444f8, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 lerp(::Unity::Mathematics::float3 start, ::Unity::Mathematics::float3 end, float_t t);

  /// @brief Method lerp, addr 0x6a445a4, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 lerp(::Unity::Mathematics::float4 start, ::Unity::Mathematics::float4 end, ::Unity::Mathematics::float4 t);

  /// @brief Method lerp, addr 0x6a44520, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 lerp(::Unity::Mathematics::float4 start, ::Unity::Mathematics::float4 end, float_t t);

  /// @brief Method lerp, addr 0x6a445e0, size 0x10, virtual false, abstract: false, final false
  static inline double_t lerp(double_t start, double_t end, double_t t);

  /// @brief Method lerp, addr 0x6a444cc, size 0x10, virtual false, abstract: false, final false
  static inline float_t lerp(float_t start, float_t end, float_t t);

  /// @brief Method log, addr 0x6a4e670, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 log(::Unity::Mathematics::double2 x);

  /// @brief Method log, addr 0x6a4e720, size 0x100, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 log(::Unity::Mathematics::double3 x);

  /// @brief Method log, addr 0x6a4e820, size 0x148, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 log(::Unity::Mathematics::double4 x);

  /// @brief Method log, addr 0x6a4e2fc, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 log(::Unity::Mathematics::float2 x);

  /// @brief Method log, addr 0x6a4e3b4, size 0x108, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 log(::Unity::Mathematics::float3 x);

  /// @brief Method log, addr 0x6a4e4bc, size 0x154, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 log(::Unity::Mathematics::float4 x);

  /// @brief Method log, addr 0x6a5f1ec, size 0x1cc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion log(::Unity::Mathematics::quaternion q);

  /// @brief Method log, addr 0x6a4e610, size 0x60, virtual false, abstract: false, final false
  static inline double_t log(double_t x);

  /// @brief Method log, addr 0x6a4e294, size 0x68, virtual false, abstract: false, final false
  static inline float_t log(float_t x);

  /// @brief Method log10, addr 0x6a4f4b8, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 log10(::Unity::Mathematics::double2 x);

  /// @brief Method log10, addr 0x6a4f568, size 0x100, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 log10(::Unity::Mathematics::double3 x);

  /// @brief Method log10, addr 0x6a4f668, size 0x148, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 log10(::Unity::Mathematics::double4 x);

  /// @brief Method log10, addr 0x6a4f144, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 log10(::Unity::Mathematics::float2 x);

  /// @brief Method log10, addr 0x6a4f1fc, size 0x108, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 log10(::Unity::Mathematics::float3 x);

  /// @brief Method log10, addr 0x6a4f304, size 0x154, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 log10(::Unity::Mathematics::float4 x);

  /// @brief Method log10, addr 0x6a4f458, size 0x60, virtual false, abstract: false, final false
  static inline double_t log10(double_t x);

  /// @brief Method log10, addr 0x6a4f0dc, size 0x68, virtual false, abstract: false, final false
  static inline float_t log10(float_t x);

  /// @brief Method log2, addr 0x6a4ed9c, size 0xc0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 log2(::Unity::Mathematics::double2 x);

  /// @brief Method log2, addr 0x6a4ee5c, size 0x118, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 log2(::Unity::Mathematics::double3 x);

  /// @brief Method log2, addr 0x6a4ef74, size 0x168, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 log2(::Unity::Mathematics::double4 x);

  /// @brief Method log2, addr 0x6a4e9d8, size 0xc8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 log2(::Unity::Mathematics::float2 x);

  /// @brief Method log2, addr 0x6a4eaa0, size 0x120, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 log2(::Unity::Mathematics::float3 x);

  /// @brief Method log2, addr 0x6a4ebc0, size 0x174, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 log2(::Unity::Mathematics::float4 x);

  /// @brief Method log2, addr 0x6a4ed34, size 0x68, virtual false, abstract: false, final false
  static inline double_t log2(double_t x);

  /// @brief Method log2, addr 0x6a4e968, size 0x70, virtual false, abstract: false, final false
  static inline float_t log2(float_t x);

  /// @brief Method lzcnt, addr 0x6a53ea0, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 lzcnt(::Unity::Mathematics::int2 x);

  /// @brief Method lzcnt, addr 0x6a540f0, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 lzcnt(::Unity::Mathematics::uint2 x);

  /// @brief Method lzcnt, addr 0x6a53f18, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 lzcnt(::Unity::Mathematics::int3 x);

  /// @brief Method lzcnt, addr 0x6a54168, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 lzcnt(::Unity::Mathematics::uint3 x);

  /// @brief Method lzcnt, addr 0x6a53fc8, size 0xec, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 lzcnt(::Unity::Mathematics::int4 x);

  /// @brief Method lzcnt, addr 0x6a54218, size 0xec, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 lzcnt(::Unity::Mathematics::uint4 x);

  /// @brief Method lzcnt, addr 0x6a53e64, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t lzcnt(int32_t x);

  /// @brief Method lzcnt, addr 0x6a54304, size 0x4c, virtual false, abstract: false, final false
  static inline int32_t lzcnt(int64_t x);

  /// @brief Method lzcnt, addr 0x6a540b4, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t lzcnt(uint32_t x);

  /// @brief Method lzcnt, addr 0x6a54350, size 0x4c, virtual false, abstract: false, final false
  static inline int32_t lzcnt(uint64_t x);

  /// @brief Method mad, addr 0x6a44c3c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 mad(::Unity::Mathematics::double2 mulA, ::Unity::Mathematics::double2 mulB, ::Unity::Mathematics::double2 addC);

  /// @brief Method mad, addr 0x6a44c50, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 mad(::Unity::Mathematics::double3 mulA, ::Unity::Mathematics::double3 mulB, ::Unity::Mathematics::double3 addC);

  /// @brief Method mad, addr 0x6a44c74, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 mad(::Unity::Mathematics::double4 mulA, ::Unity::Mathematics::double4 mulB, ::Unity::Mathematics::double4 addC);

  /// @brief Method mad, addr 0x6a44bcc, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 mad(::Unity::Mathematics::float2 mulA, ::Unity::Mathematics::float2 mulB, ::Unity::Mathematics::float2 addC);

  /// @brief Method mad, addr 0x6a44be0, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 mad(::Unity::Mathematics::float3 mulA, ::Unity::Mathematics::float3 mulB, ::Unity::Mathematics::float3 addC);

  /// @brief Method mad, addr 0x6a44c04, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 mad(::Unity::Mathematics::float4 mulA, ::Unity::Mathematics::float4 mulB, ::Unity::Mathematics::float4 addC);

  /// @brief Method mad, addr 0x6a44ac8, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 mad(::Unity::Mathematics::int2 mulA, ::Unity::Mathematics::int2 mulB, ::Unity::Mathematics::int2 addC);

  /// @brief Method mad, addr 0x6a44ae4, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 mad(::Unity::Mathematics::int3 mulA, ::Unity::Mathematics::int3 mulB, ::Unity::Mathematics::int3 addC);

  /// @brief Method mad, addr 0x6a44b04, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 mad(::Unity::Mathematics::int4 mulA, ::Unity::Mathematics::int4 mulB, ::Unity::Mathematics::int4 addC);

  /// @brief Method mad, addr 0x6a44b40, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 mad(::Unity::Mathematics::uint2 mulA, ::Unity::Mathematics::uint2 mulB, ::Unity::Mathematics::uint2 addC);

  /// @brief Method mad, addr 0x6a44b5c, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 mad(::Unity::Mathematics::uint3 mulA, ::Unity::Mathematics::uint3 mulB, ::Unity::Mathematics::uint3 addC);

  /// @brief Method mad, addr 0x6a44b7c, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 mad(::Unity::Mathematics::uint4 mulA, ::Unity::Mathematics::uint4 mulB, ::Unity::Mathematics::uint4 addC);

  /// @brief Method mad, addr 0x6a44c30, size 0xc, virtual false, abstract: false, final false
  static inline double_t mad(double_t mulA, double_t mulB, double_t addC);

  /// @brief Method mad, addr 0x6a44bc0, size 0xc, virtual false, abstract: false, final false
  static inline float_t mad(float_t mulA, float_t mulB, float_t addC);

  /// @brief Method mad, addr 0x6a44ac0, size 0x8, virtual false, abstract: false, final false
  static inline int32_t mad(int32_t mulA, int32_t mulB, int32_t addC);

  /// @brief Method mad, addr 0x6a44bb0, size 0x8, virtual false, abstract: false, final false
  static inline int64_t mad(int64_t mulA, int64_t mulB, int64_t addC);

  /// @brief Method mad, addr 0x6a44b38, size 0x8, virtual false, abstract: false, final false
  static inline uint32_t mad(uint32_t mulA, uint32_t mulB, uint32_t addC);

  /// @brief Method mad, addr 0x6a44bb8, size 0x8, virtual false, abstract: false, final false
  static inline uint64_t mad(uint64_t mulA, uint64_t mulB, uint64_t addC);

  /// @brief Method max, addr 0x6a44400, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 max(::Unity::Mathematics::double2 x, ::Unity::Mathematics::double2 y);

  /// @brief Method max, addr 0x6a44430, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 max(::Unity::Mathematics::double3 x, ::Unity::Mathematics::double3 y);

  /// @brief Method max, addr 0x6a44474, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 max(::Unity::Mathematics::double4 x, ::Unity::Mathematics::double4 y);

  /// @brief Method max, addr 0x6a44318, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 max(::Unity::Mathematics::float2 x, ::Unity::Mathematics::float2 y);

  /// @brief Method max, addr 0x6a44348, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 max(::Unity::Mathematics::float3 x, ::Unity::Mathematics::float3 y);

  /// @brief Method max, addr 0x6a4438c, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 max(::Unity::Mathematics::float4 x, ::Unity::Mathematics::float4 y);

  /// @brief Method max, addr 0x6a441d0, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 max(::Unity::Mathematics::int2 x, ::Unity::Mathematics::int2 y);

  /// @brief Method max, addr 0x6a441f0, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 max(::Unity::Mathematics::int3 x, ::Unity::Mathematics::int3 y);

  /// @brief Method max, addr 0x6a44218, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 max(::Unity::Mathematics::int4 x, ::Unity::Mathematics::int4 y);

  /// @brief Method max, addr 0x6a44260, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 max(::Unity::Mathematics::uint2 x, ::Unity::Mathematics::uint2 y);

  /// @brief Method max, addr 0x6a44280, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 max(::Unity::Mathematics::uint3 x, ::Unity::Mathematics::uint3 y);

  /// @brief Method max, addr 0x6a442a8, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 max(::Unity::Mathematics::uint4 x, ::Unity::Mathematics::uint4 y);

  /// @brief Method max, addr 0x6a443e4, size 0x1c, virtual false, abstract: false, final false
  static inline double_t max(double_t x, double_t y);

  /// @brief Method max, addr 0x6a442fc, size 0x1c, virtual false, abstract: false, final false
  static inline float_t max(float_t x, float_t y);

  /// @brief Method max, addr 0x6a441c4, size 0xc, virtual false, abstract: false, final false
  static inline int32_t max(int32_t x, int32_t y);

  /// @brief Method max, addr 0x6a442e4, size 0xc, virtual false, abstract: false, final false
  static inline int64_t max(int64_t x, int64_t y);

  /// @brief Method max, addr 0x6a44254, size 0xc, virtual false, abstract: false, final false
  static inline uint32_t max(uint32_t x, uint32_t y);

  /// @brief Method max, addr 0x6a442f0, size 0xc, virtual false, abstract: false, final false
  static inline uint64_t max(uint64_t x, uint64_t y);

  /// @brief Method min, addr 0x6a440f8, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 min(::Unity::Mathematics::double2 x, ::Unity::Mathematics::double2 y);

  /// @brief Method min, addr 0x6a44128, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 min(::Unity::Mathematics::double3 x, ::Unity::Mathematics::double3 y);

  /// @brief Method min, addr 0x6a4416c, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 min(::Unity::Mathematics::double4 x, ::Unity::Mathematics::double4 y);

  /// @brief Method min, addr 0x6a44010, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 min(::Unity::Mathematics::float2 x, ::Unity::Mathematics::float2 y);

  /// @brief Method min, addr 0x6a44040, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 min(::Unity::Mathematics::float3 x, ::Unity::Mathematics::float3 y);

  /// @brief Method min, addr 0x6a44084, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 min(::Unity::Mathematics::float4 x, ::Unity::Mathematics::float4 y);

  /// @brief Method min, addr 0x6a43ec8, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 min(::Unity::Mathematics::int2 x, ::Unity::Mathematics::int2 y);

  /// @brief Method min, addr 0x6a43ee8, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 min(::Unity::Mathematics::int3 x, ::Unity::Mathematics::int3 y);

  /// @brief Method min, addr 0x6a43f10, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 min(::Unity::Mathematics::int4 x, ::Unity::Mathematics::int4 y);

  /// @brief Method min, addr 0x6a43f58, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 min(::Unity::Mathematics::uint2 x, ::Unity::Mathematics::uint2 y);

  /// @brief Method min, addr 0x6a43f78, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 min(::Unity::Mathematics::uint3 x, ::Unity::Mathematics::uint3 y);

  /// @brief Method min, addr 0x6a43fa0, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 min(::Unity::Mathematics::uint4 x, ::Unity::Mathematics::uint4 y);

  /// @brief Method min, addr 0x6a440dc, size 0x1c, virtual false, abstract: false, final false
  static inline double_t min(double_t x, double_t y);

  /// @brief Method min, addr 0x6a43ff4, size 0x1c, virtual false, abstract: false, final false
  static inline float_t min(float_t x, float_t y);

  /// @brief Method min, addr 0x6a43ebc, size 0xc, virtual false, abstract: false, final false
  static inline int32_t min(int32_t x, int32_t y);

  /// @brief Method min, addr 0x6a43fdc, size 0xc, virtual false, abstract: false, final false
  static inline int64_t min(int64_t x, int64_t y);

  /// @brief Method min, addr 0x6a43f4c, size 0xc, virtual false, abstract: false, final false
  static inline uint32_t min(uint32_t x, uint32_t y);

  /// @brief Method min, addr 0x6a43fe8, size 0xc, virtual false, abstract: false, final false
  static inline uint64_t min(uint64_t x, uint64_t y);

  /// @brief Method modf, addr 0x6a4fca8, size 0xd4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 modf(::Unity::Mathematics::double2 x, ::by_ref<::Unity::Mathematics::double2> i);

  /// @brief Method modf, addr 0x6a4fd7c, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 modf(::Unity::Mathematics::double3 x, ::by_ref<::Unity::Mathematics::double3> i);

  /// @brief Method modf, addr 0x6a4fdd0, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 modf(::Unity::Mathematics::double4 x, ::by_ref<::Unity::Mathematics::double4> i);

  /// @brief Method modf, addr 0x6a4faa0, size 0xdc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 modf(::Unity::Mathematics::float2 x, ::by_ref<::Unity::Mathematics::float2> i);

  /// @brief Method modf, addr 0x6a4fb7c, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 modf(::Unity::Mathematics::float3 x, ::by_ref<::Unity::Mathematics::float3> i);

  /// @brief Method modf, addr 0x6a4fbd0, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 modf(::Unity::Mathematics::float4 x, ::by_ref<::Unity::Mathematics::float4> i);

  /// @brief Method modf, addr 0x6a4fc30, size 0x78, virtual false, abstract: false, final false
  static inline double_t modf(double_t x, ::by_ref<double_t> i);

  /// @brief Method modf, addr 0x6a4fa28, size 0x78, virtual false, abstract: false, final false
  static inline float_t modf(float_t x, ::by_ref<float_t> i);

  /// @brief Method movehl, addr 0x6a583f0, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 movehl(::Unity::Mathematics::double4 a, ::Unity::Mathematics::double4 b);

  /// @brief Method movehl, addr 0x6a583e4, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 movehl(::Unity::Mathematics::float4 a, ::Unity::Mathematics::float4 b);

  /// @brief Method movelh, addr 0x6a583d8, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 movelh(::Unity::Mathematics::double4 a, ::Unity::Mathematics::double4 b);

  /// @brief Method movelh, addr 0x6a583cc, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 movelh(::Unity::Mathematics::float4 a, ::Unity::Mathematics::float4 b);

  /// @brief Method mul, addr 0x6a35474, size 0x184, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::AffineTransform mul(::Unity::Mathematics::AffineTransform a, ::Unity::Mathematics::AffineTransform b);

  /// @brief Method mul, addr 0x6a35754, size 0x114, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::AffineTransform mul(::Unity::Mathematics::AffineTransform a, ::Unity::Mathematics::float3x3 b);

  /// @brief Method mul, addr 0x6a355f8, size 0x15c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::AffineTransform mul(::Unity::Mathematics::float3x3 a, ::Unity::Mathematics::AffineTransform b);

  /// @brief Method mul, addr 0x6a602e8, size 0x128, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::RigidTransform mul(::Unity::Mathematics::RigidTransform a, ::Unity::Mathematics::RigidTransform b);

  /// @brief Method mul, addr 0x6a59fb0, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 mul(::Unity::Mathematics::double2 a, ::Unity::Mathematics::double2x2 b);

  /// @brief Method mul, addr 0x6a5a2d4, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 mul(::Unity::Mathematics::double2x2 a, ::Unity::Mathematics::double2 b);

  /// @brief Method mul, addr 0x6a5a40c, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 mul(::Unity::Mathematics::double2x3 a, ::Unity::Mathematics::double3 b);

  /// @brief Method mul, addr 0x6a5a584, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 mul(::Unity::Mathematics::double2x4 a, ::Unity::Mathematics::double4 b);

  /// @brief Method mul, addr 0x6a5a05c, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 mul(::Unity::Mathematics::double3 a, ::Unity::Mathematics::double3x2 b);

  /// @brief Method mul, addr 0x6a5a184, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 mul(::Unity::Mathematics::double4 a, ::Unity::Mathematics::double4x2 b);

  /// @brief Method mul, addr 0x6a5a2f0, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 mul(::Unity::Mathematics::double2x2 a, ::Unity::Mathematics::double2x2 b);

  /// @brief Method mul, addr 0x6a5a430, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 mul(::Unity::Mathematics::double2x3 a, ::Unity::Mathematics::double3x2 b);

  /// @brief Method mul, addr 0x6a5a5b0, size 0x94, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 mul(::Unity::Mathematics::double2x4 a, ::Unity::Mathematics::double4x2 b);

  /// @brief Method mul, addr 0x6a5a324, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 mul(::Unity::Mathematics::double2x2 a, ::Unity::Mathematics::double2x3 b);

  /// @brief Method mul, addr 0x6a5a4a0, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 mul(::Unity::Mathematics::double2x3 a, ::Unity::Mathematics::double3x3 b);

  /// @brief Method mul, addr 0x6a5a644, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 mul(::Unity::Mathematics::double2x4 a, ::Unity::Mathematics::double4x3 b);

  /// @brief Method mul, addr 0x6a5a388, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 mul(::Unity::Mathematics::double2x2 a, ::Unity::Mathematics::double2x4 b);

  /// @brief Method mul, addr 0x6a5a504, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 mul(::Unity::Mathematics::double2x3 a, ::Unity::Mathematics::double3x4 b);

  /// @brief Method mul, addr 0x6a5a6c4, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 mul(::Unity::Mathematics::double2x4 a, ::Unity::Mathematics::double4x4 b);

  /// @brief Method mul, addr 0x6a59fcc, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 mul(::Unity::Mathematics::double2 a, ::Unity::Mathematics::double2x3 b);

  /// @brief Method mul, addr 0x6a5a098, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 mul(::Unity::Mathematics::double3 a, ::Unity::Mathematics::double3x3 b);

  /// @brief Method mul, addr 0x6a5a768, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 mul(::Unity::Mathematics::double3x2 a, ::Unity::Mathematics::double2 b);

  /// @brief Method mul, addr 0x6a5a950, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 mul(::Unity::Mathematics::double3x3 a, ::Unity::Mathematics::double3 b);

  /// @brief Method mul, addr 0x6a5abe0, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 mul(::Unity::Mathematics::double3x4 a, ::Unity::Mathematics::double4 b);

  /// @brief Method mul, addr 0x6a5a1d0, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 mul(::Unity::Mathematics::double4 a, ::Unity::Mathematics::double4x3 b);

  /// @brief Method mul, addr 0x6a5a79c, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x2 mul(::Unity::Mathematics::double3x2 a, ::Unity::Mathematics::double2x2 b);

  /// @brief Method mul, addr 0x6a5a9a4, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x2 mul(::Unity::Mathematics::double3x3 a, ::Unity::Mathematics::double3x2 b);

  /// @brief Method mul, addr 0x6a5ac50, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x2 mul(::Unity::Mathematics::double3x4 a, ::Unity::Mathematics::double4x2 b);

  /// @brief Method mul, addr 0x6a5a7f0, size 0x98, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 mul(::Unity::Mathematics::double3x2 a, ::Unity::Mathematics::double2x3 b);

  /// @brief Method mul, addr 0x6a5aa2c, size 0xc0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 mul(::Unity::Mathematics::double3x3 a, ::Unity::Mathematics::double3x3 b);

  /// @brief Method mul, addr 0x6a5ad04, size 0xfc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 mul(::Unity::Mathematics::double3x4 a, ::Unity::Mathematics::double4x3 b);

  /// @brief Method mul, addr 0x6a5a888, size 0xc8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 mul(::Unity::Mathematics::double3x2 a, ::Unity::Mathematics::double2x4 b);

  /// @brief Method mul, addr 0x6a5aaec, size 0xf4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 mul(::Unity::Mathematics::double3x3 a, ::Unity::Mathematics::double3x4 b);

  /// @brief Method mul, addr 0x6a5ae00, size 0x144, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 mul(::Unity::Mathematics::double3x4 a, ::Unity::Mathematics::double4x4 b);

  /// @brief Method mul, addr 0x6a5a000, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 mul(::Unity::Mathematics::double2 a, ::Unity::Mathematics::double2x4 b);

  /// @brief Method mul, addr 0x6a5a0f0, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 mul(::Unity::Mathematics::double3 a, ::Unity::Mathematics::double3x4 b);

  /// @brief Method mul, addr 0x6a5a240, size 0x94, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 mul(::Unity::Mathematics::double4 a, ::Unity::Mathematics::double4x4 b);

  /// @brief Method mul, addr 0x6a5af44, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 mul(::Unity::Mathematics::double4x2 a, ::Unity::Mathematics::double2 b);

  /// @brief Method mul, addr 0x6a5b0dc, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 mul(::Unity::Mathematics::double4x3 a, ::Unity::Mathematics::double3 b);

  /// @brief Method mul, addr 0x6a5b35c, size 0x98, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 mul(::Unity::Mathematics::double4x4 a, ::Unity::Mathematics::double4 b);

  /// @brief Method mul, addr 0x6a5af88, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 mul(::Unity::Mathematics::double4x2 a, ::Unity::Mathematics::double2x2 b);

  /// @brief Method mul, addr 0x6a5b14c, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 mul(::Unity::Mathematics::double4x3 a, ::Unity::Mathematics::double3x2 b);

  /// @brief Method mul, addr 0x6a5b3f4, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 mul(::Unity::Mathematics::double4x4 a, ::Unity::Mathematics::double4x2 b);

  /// @brief Method mul, addr 0x6a5afd0, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 mul(::Unity::Mathematics::double4x2 a, ::Unity::Mathematics::double2x3 b);

  /// @brief Method mul, addr 0x6a5b1c8, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 mul(::Unity::Mathematics::double4x3 a, ::Unity::Mathematics::double3x3 b);

  /// @brief Method mul, addr 0x6a5b498, size 0xec, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 mul(::Unity::Mathematics::double4x4 a, ::Unity::Mathematics::double4x3 b);

  /// @brief Method mul, addr 0x6a5b048, size 0x94, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x4 mul(::Unity::Mathematics::double4x2 a, ::Unity::Mathematics::double2x4 b);

  /// @brief Method mul, addr 0x6a5b27c, size 0xe0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x4 mul(::Unity::Mathematics::double4x3 a, ::Unity::Mathematics::double3x4 b);

  /// @brief Method mul, addr 0x6a5b584, size 0x12c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x4 mul(::Unity::Mathematics::double4x4 a, ::Unity::Mathematics::double4x4 b);

  /// @brief Method mul, addr 0x6a589d8, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 mul(::Unity::Mathematics::float2 a, ::Unity::Mathematics::float2x2 b);

  /// @brief Method mul, addr 0x6a58cfc, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 mul(::Unity::Mathematics::float2x2 a, ::Unity::Mathematics::float2 b);

  /// @brief Method mul, addr 0x6a58e14, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 mul(::Unity::Mathematics::float2x3 a, ::Unity::Mathematics::float3 b);

  /// @brief Method mul, addr 0x6a58fac, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 mul(::Unity::Mathematics::float2x4 a, ::Unity::Mathematics::float4 b);

  /// @brief Method mul, addr 0x6a58a84, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 mul(::Unity::Mathematics::float3 a, ::Unity::Mathematics::float3x2 b);

  /// @brief Method mul, addr 0x6a58bac, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 mul(::Unity::Mathematics::float4 a, ::Unity::Mathematics::float4x2 b);

  /// @brief Method mul, addr 0x6a58d18, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 mul(::Unity::Mathematics::float2x2 a, ::Unity::Mathematics::float2x2 b);

  /// @brief Method mul, addr 0x6a58e38, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 mul(::Unity::Mathematics::float2x3 a, ::Unity::Mathematics::float3x2 b);

  /// @brief Method mul, addr 0x6a58fd8, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 mul(::Unity::Mathematics::float2x4 a, ::Unity::Mathematics::float4x2 b);

  /// @brief Method mul, addr 0x6a58d4c, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 mul(::Unity::Mathematics::float2x2 a, ::Unity::Mathematics::float2x3 b);

  /// @brief Method mul, addr 0x6a58e98, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 mul(::Unity::Mathematics::float2x3 a, ::Unity::Mathematics::float3x3 b);

  /// @brief Method mul, addr 0x6a59054, size 0xac, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 mul(::Unity::Mathematics::float2x4 a, ::Unity::Mathematics::float4x3 b);

  /// @brief Method mul, addr 0x6a58dac, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x4 mul(::Unity::Mathematics::float2x2 a, ::Unity::Mathematics::float2x4 b);

  /// @brief Method mul, addr 0x6a58f14, size 0x98, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x4 mul(::Unity::Mathematics::float2x3 a, ::Unity::Mathematics::float3x4 b);

  /// @brief Method mul, addr 0x6a59100, size 0xc8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x4 mul(::Unity::Mathematics::float2x4 a, ::Unity::Mathematics::float4x4 b);

  /// @brief Method mul, addr 0x6a589f4, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 mul(::Unity::Mathematics::float2 a, ::Unity::Mathematics::float2x3 b);

  /// @brief Method mul, addr 0x6a58ac0, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 mul(::Unity::Mathematics::float3 a, ::Unity::Mathematics::float3x3 b);

  /// @brief Method mul, addr 0x6a591c8, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 mul(::Unity::Mathematics::float3x2 a, ::Unity::Mathematics::float2 b);

  /// @brief Method mul, addr 0x6a593ec, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 mul(::Unity::Mathematics::float3x3 a, ::Unity::Mathematics::float3 b);

  /// @brief Method mul, addr 0x6a59734, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 mul(::Unity::Mathematics::float3x4 a, ::Unity::Mathematics::float4 b);

  /// @brief Method mul, addr 0x6a58bf8, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 mul(::Unity::Mathematics::float4 a, ::Unity::Mathematics::float4x3 b);

  /// @brief Method mul, addr 0x6a5f42c, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 mul(::Unity::Mathematics::quaternion q, ::Unity::Mathematics::float3 v);

  /// @brief Method mul, addr 0x6a591f8, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x2 mul(::Unity::Mathematics::float3x2 a, ::Unity::Mathematics::float2x2 b);

  /// @brief Method mul, addr 0x6a59434, size 0xa0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x2 mul(::Unity::Mathematics::float3x3 a, ::Unity::Mathematics::float3x2 b);

  /// @brief Method mul, addr 0x6a59794, size 0xdc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x2 mul(::Unity::Mathematics::float3x4 a, ::Unity::Mathematics::float4x2 b);

  /// @brief Method mul, addr 0x6a59264, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 mul(::Unity::Mathematics::float3x2 a, ::Unity::Mathematics::float2x3 b);

  /// @brief Method mul, addr 0x6a594d4, size 0x104, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 mul(::Unity::Mathematics::float3x3 a, ::Unity::Mathematics::float3x3 b);

  /// @brief Method mul, addr 0x6a59870, size 0x168, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 mul(::Unity::Mathematics::float3x4 a, ::Unity::Mathematics::float4x3 b);

  /// @brief Method mul, addr 0x6a59314, size 0xd8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 mul(::Unity::Mathematics::float3x2 a, ::Unity::Mathematics::float2x4 b);

  /// @brief Method mul, addr 0x6a595d8, size 0x15c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 mul(::Unity::Mathematics::float3x3 a, ::Unity::Mathematics::float3x4 b);

  /// @brief Method mul, addr 0x6a599d8, size 0x1e4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 mul(::Unity::Mathematics::float3x4 a, ::Unity::Mathematics::float4x4 b);

  /// @brief Method mul, addr 0x6a35868, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 mul(::Unity::Mathematics::AffineTransform a, ::Unity::Mathematics::float4 pos);

  /// @brief Method mul, addr 0x6a60410, size 0xa8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 mul(::Unity::Mathematics::RigidTransform a, ::Unity::Mathematics::float4 pos);

  /// @brief Method mul, addr 0x6a58a28, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 mul(::Unity::Mathematics::float2 a, ::Unity::Mathematics::float2x4 b);

  /// @brief Method mul, addr 0x6a58b18, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 mul(::Unity::Mathematics::float3 a, ::Unity::Mathematics::float3x4 b);

  /// @brief Method mul, addr 0x6a58c68, size 0x94, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 mul(::Unity::Mathematics::float4 a, ::Unity::Mathematics::float4x4 b);

  /// @brief Method mul, addr 0x6a59bbc, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 mul(::Unity::Mathematics::float4x2 a, ::Unity::Mathematics::float2 b);

  /// @brief Method mul, addr 0x6a59c90, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 mul(::Unity::Mathematics::float4x3 a, ::Unity::Mathematics::float3 b);

  /// @brief Method mul, addr 0x6a59de8, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 mul(::Unity::Mathematics::float4x4 a, ::Unity::Mathematics::float4 b);

  /// @brief Method mul, addr 0x6a59bdc, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x2 mul(::Unity::Mathematics::float4x2 a, ::Unity::Mathematics::float2x2 b);

  /// @brief Method mul, addr 0x6a59cbc, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x2 mul(::Unity::Mathematics::float4x3 a, ::Unity::Mathematics::float3x2 b);

  /// @brief Method mul, addr 0x6a59e1c, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x2 mul(::Unity::Mathematics::float4x4 a, ::Unity::Mathematics::float4x2 b);

  /// @brief Method mul, addr 0x6a59c00, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x3 mul(::Unity::Mathematics::float4x2 a, ::Unity::Mathematics::float2x3 b);

  /// @brief Method mul, addr 0x6a59d04, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x3 mul(::Unity::Mathematics::float4x3 a, ::Unity::Mathematics::float3x3 b);

  /// @brief Method mul, addr 0x6a59e74, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x3 mul(::Unity::Mathematics::float4x4 a, ::Unity::Mathematics::float4x3 b);

  /// @brief Method mul, addr 0x6a59c40, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 mul(::Unity::Mathematics::float4x2 a, ::Unity::Mathematics::float2x4 b);

  /// @brief Method mul, addr 0x6a59d68, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 mul(::Unity::Mathematics::float4x3 a, ::Unity::Mathematics::float3x4 b);

  /// @brief Method mul, addr 0x6a59ef4, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 mul(::Unity::Mathematics::float4x4 a, ::Unity::Mathematics::float4x4 b);

  /// @brief Method mul, addr 0x6a5b6cc, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 mul(::Unity::Mathematics::int2 a, ::Unity::Mathematics::int2x2 b);

  /// @brief Method mul, addr 0x6a5b97c, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 mul(::Unity::Mathematics::int2x2 a, ::Unity::Mathematics::int2 b);

  /// @brief Method mul, addr 0x6a5baac, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 mul(::Unity::Mathematics::int2x3 a, ::Unity::Mathematics::int3 b);

  /// @brief Method mul, addr 0x6a5bc58, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 mul(::Unity::Mathematics::int2x4 a, ::Unity::Mathematics::int4 b);

  /// @brief Method mul, addr 0x6a5b778, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 mul(::Unity::Mathematics::int3 a, ::Unity::Mathematics::int3x2 b);

  /// @brief Method mul, addr 0x6a5b870, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 mul(::Unity::Mathematics::int4 a, ::Unity::Mathematics::int4x2 b);

  /// @brief Method mul, addr 0x6a5b9a0, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x2 mul(::Unity::Mathematics::int2x2 a, ::Unity::Mathematics::int2x2 b);

  /// @brief Method mul, addr 0x6a5badc, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x2 mul(::Unity::Mathematics::int2x3 a, ::Unity::Mathematics::int3x2 b);

  /// @brief Method mul, addr 0x6a5bca4, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x2 mul(::Unity::Mathematics::int2x4 a, ::Unity::Mathematics::int4x2 b);

  /// @brief Method mul, addr 0x6a5b9dc, size 0x5c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x3 mul(::Unity::Mathematics::int2x2 a, ::Unity::Mathematics::int2x3 b);

  /// @brief Method mul, addr 0x6a5bb30, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x3 mul(::Unity::Mathematics::int2x3 a, ::Unity::Mathematics::int3x3 b);

  /// @brief Method mul, addr 0x6a5bd10, size 0xa0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x3 mul(::Unity::Mathematics::int2x4 a, ::Unity::Mathematics::int4x3 b);

  /// @brief Method mul, addr 0x6a5ba38, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x4 mul(::Unity::Mathematics::int2x2 a, ::Unity::Mathematics::int2x4 b);

  /// @brief Method mul, addr 0x6a5bbb0, size 0xa8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x4 mul(::Unity::Mathematics::int2x3 a, ::Unity::Mathematics::int3x4 b);

  /// @brief Method mul, addr 0x6a5bdb0, size 0xcc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x4 mul(::Unity::Mathematics::int2x4 a, ::Unity::Mathematics::int4x4 b);

  /// @brief Method mul, addr 0x6a5b6f0, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 mul(::Unity::Mathematics::int2 a, ::Unity::Mathematics::int2x3 b);

  /// @brief Method mul, addr 0x6a5b7ac, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 mul(::Unity::Mathematics::int3 a, ::Unity::Mathematics::int3x3 b);

  /// @brief Method mul, addr 0x6a5be7c, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 mul(::Unity::Mathematics::int3x2 a, ::Unity::Mathematics::int2 b);

  /// @brief Method mul, addr 0x6a5c04c, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 mul(::Unity::Mathematics::int3x3 a, ::Unity::Mathematics::int3 b);

  /// @brief Method mul, addr 0x6a5c2d8, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 mul(::Unity::Mathematics::int3x4 a, ::Unity::Mathematics::int4 b);

  /// @brief Method mul, addr 0x6a5b8b0, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 mul(::Unity::Mathematics::int4 a, ::Unity::Mathematics::int4x3 b);

  /// @brief Method mul, addr 0x6a5beac, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 mul(::Unity::Mathematics::int3x2 a, ::Unity::Mathematics::int2x2 b);

  /// @brief Method mul, addr 0x6a5c090, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 mul(::Unity::Mathematics::int3x3 a, ::Unity::Mathematics::int3x2 b);

  /// @brief Method mul, addr 0x6a5c340, size 0xac, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 mul(::Unity::Mathematics::int3x4 a, ::Unity::Mathematics::int4x2 b);

  /// @brief Method mul, addr 0x6a5bf0c, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x3 mul(::Unity::Mathematics::int3x2 a, ::Unity::Mathematics::int2x3 b);

  /// @brief Method mul, addr 0x6a5c114, size 0xc4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x3 mul(::Unity::Mathematics::int3x3 a, ::Unity::Mathematics::int3x3 b);

  /// @brief Method mul, addr 0x6a5c3ec, size 0xf8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x3 mul(::Unity::Mathematics::int3x4 a, ::Unity::Mathematics::int4x3 b);

  /// @brief Method mul, addr 0x6a5bf94, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 mul(::Unity::Mathematics::int3x2 a, ::Unity::Mathematics::int2x4 b);

  /// @brief Method mul, addr 0x6a5c1d8, size 0x100, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 mul(::Unity::Mathematics::int3x3 a, ::Unity::Mathematics::int3x4 b);

  /// @brief Method mul, addr 0x6a5c4e4, size 0x14c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 mul(::Unity::Mathematics::int3x4 a, ::Unity::Mathematics::int4x4 b);

  /// @brief Method mul, addr 0x6a5b720, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 mul(::Unity::Mathematics::int2 a, ::Unity::Mathematics::int2x4 b);

  /// @brief Method mul, addr 0x6a5b7f0, size 0x5c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 mul(::Unity::Mathematics::int3 a, ::Unity::Mathematics::int3x4 b);

  /// @brief Method mul, addr 0x6a5b908, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 mul(::Unity::Mathematics::int4 a, ::Unity::Mathematics::int4x4 b);

  /// @brief Method mul, addr 0x6a5c630, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 mul(::Unity::Mathematics::int4x2 a, ::Unity::Mathematics::int2 b);

  /// @brief Method mul, addr 0x6a5c884, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 mul(::Unity::Mathematics::int4x3 a, ::Unity::Mathematics::int3 b);

  /// @brief Method mul, addr 0x6a5cbdc, size 0x8c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 mul(::Unity::Mathematics::int4x4 a, ::Unity::Mathematics::int4 b);

  /// @brief Method mul, addr 0x6a5c674, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 mul(::Unity::Mathematics::int4x2 a, ::Unity::Mathematics::int2x2 b);

  /// @brief Method mul, addr 0x6a5c8ec, size 0xa8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 mul(::Unity::Mathematics::int4x3 a, ::Unity::Mathematics::int3x2 b);

  /// @brief Method mul, addr 0x6a5cc68, size 0xe4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 mul(::Unity::Mathematics::int4x4 a, ::Unity::Mathematics::int4x2 b);

  /// @brief Method mul, addr 0x6a5c6ec, size 0xac, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 mul(::Unity::Mathematics::int4x2 a, ::Unity::Mathematics::int2x3 b);

  /// @brief Method mul, addr 0x6a5c994, size 0xfc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 mul(::Unity::Mathematics::int4x3 a, ::Unity::Mathematics::int3x3 b);

  /// @brief Method mul, addr 0x6a5cd4c, size 0x148, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 mul(::Unity::Mathematics::int4x4 a, ::Unity::Mathematics::int4x3 b);

  /// @brief Method mul, addr 0x6a5c798, size 0xec, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 mul(::Unity::Mathematics::int4x2 a, ::Unity::Mathematics::int2x4 b);

  /// @brief Method mul, addr 0x6a5ca90, size 0x14c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 mul(::Unity::Mathematics::int4x3 a, ::Unity::Mathematics::int3x4 b);

  /// @brief Method mul, addr 0x6a5ce94, size 0x1a4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 mul(::Unity::Mathematics::int4x4 a, ::Unity::Mathematics::int4x4 b);

  /// @brief Method mul, addr 0x6a5f3b8, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion mul(::Unity::Mathematics::quaternion a, ::Unity::Mathematics::quaternion b);

  /// @brief Method mul, addr 0x6a5d054, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 mul(::Unity::Mathematics::uint2 a, ::Unity::Mathematics::uint2x2 b);

  /// @brief Method mul, addr 0x6a5d304, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 mul(::Unity::Mathematics::uint2x2 a, ::Unity::Mathematics::uint2 b);

  /// @brief Method mul, addr 0x6a5d434, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 mul(::Unity::Mathematics::uint2x3 a, ::Unity::Mathematics::uint3 b);

  /// @brief Method mul, addr 0x6a5d5e0, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 mul(::Unity::Mathematics::uint2x4 a, ::Unity::Mathematics::uint4 b);

  /// @brief Method mul, addr 0x6a5d100, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 mul(::Unity::Mathematics::uint3 a, ::Unity::Mathematics::uint3x2 b);

  /// @brief Method mul, addr 0x6a5d1f8, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 mul(::Unity::Mathematics::uint4 a, ::Unity::Mathematics::uint4x2 b);

  /// @brief Method mul, addr 0x6a5d328, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 mul(::Unity::Mathematics::uint2x2 a, ::Unity::Mathematics::uint2x2 b);

  /// @brief Method mul, addr 0x6a5d464, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 mul(::Unity::Mathematics::uint2x3 a, ::Unity::Mathematics::uint3x2 b);

  /// @brief Method mul, addr 0x6a5d62c, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 mul(::Unity::Mathematics::uint2x4 a, ::Unity::Mathematics::uint4x2 b);

  /// @brief Method mul, addr 0x6a5d364, size 0x5c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x3 mul(::Unity::Mathematics::uint2x2 a, ::Unity::Mathematics::uint2x3 b);

  /// @brief Method mul, addr 0x6a5d4b8, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x3 mul(::Unity::Mathematics::uint2x3 a, ::Unity::Mathematics::uint3x3 b);

  /// @brief Method mul, addr 0x6a5d698, size 0xa0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x3 mul(::Unity::Mathematics::uint2x4 a, ::Unity::Mathematics::uint4x3 b);

  /// @brief Method mul, addr 0x6a5d3c0, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x4 mul(::Unity::Mathematics::uint2x2 a, ::Unity::Mathematics::uint2x4 b);

  /// @brief Method mul, addr 0x6a5d538, size 0xa8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x4 mul(::Unity::Mathematics::uint2x3 a, ::Unity::Mathematics::uint3x4 b);

  /// @brief Method mul, addr 0x6a5d738, size 0xcc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x4 mul(::Unity::Mathematics::uint2x4 a, ::Unity::Mathematics::uint4x4 b);

  /// @brief Method mul, addr 0x6a5d078, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 mul(::Unity::Mathematics::uint2 a, ::Unity::Mathematics::uint2x3 b);

  /// @brief Method mul, addr 0x6a5d134, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 mul(::Unity::Mathematics::uint3 a, ::Unity::Mathematics::uint3x3 b);

  /// @brief Method mul, addr 0x6a5d804, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 mul(::Unity::Mathematics::uint3x2 a, ::Unity::Mathematics::uint2 b);

  /// @brief Method mul, addr 0x6a5d9d4, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 mul(::Unity::Mathematics::uint3x3 a, ::Unity::Mathematics::uint3 b);

  /// @brief Method mul, addr 0x6a5dc60, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 mul(::Unity::Mathematics::uint3x4 a, ::Unity::Mathematics::uint4 b);

  /// @brief Method mul, addr 0x6a5d238, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 mul(::Unity::Mathematics::uint4 a, ::Unity::Mathematics::uint4x3 b);

  /// @brief Method mul, addr 0x6a5d834, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 mul(::Unity::Mathematics::uint3x2 a, ::Unity::Mathematics::uint2x2 b);

  /// @brief Method mul, addr 0x6a5da18, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 mul(::Unity::Mathematics::uint3x3 a, ::Unity::Mathematics::uint3x2 b);

  /// @brief Method mul, addr 0x6a5dcc8, size 0xac, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 mul(::Unity::Mathematics::uint3x4 a, ::Unity::Mathematics::uint4x2 b);

  /// @brief Method mul, addr 0x6a5d894, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x3 mul(::Unity::Mathematics::uint3x2 a, ::Unity::Mathematics::uint2x3 b);

  /// @brief Method mul, addr 0x6a5da9c, size 0xc4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x3 mul(::Unity::Mathematics::uint3x3 a, ::Unity::Mathematics::uint3x3 b);

  /// @brief Method mul, addr 0x6a5dd74, size 0xf8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x3 mul(::Unity::Mathematics::uint3x4 a, ::Unity::Mathematics::uint4x3 b);

  /// @brief Method mul, addr 0x6a5d91c, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 mul(::Unity::Mathematics::uint3x2 a, ::Unity::Mathematics::uint2x4 b);

  /// @brief Method mul, addr 0x6a5db60, size 0x100, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 mul(::Unity::Mathematics::uint3x3 a, ::Unity::Mathematics::uint3x4 b);

  /// @brief Method mul, addr 0x6a5de6c, size 0x14c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 mul(::Unity::Mathematics::uint3x4 a, ::Unity::Mathematics::uint4x4 b);

  /// @brief Method mul, addr 0x6a5d0a8, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 mul(::Unity::Mathematics::uint2 a, ::Unity::Mathematics::uint2x4 b);

  /// @brief Method mul, addr 0x6a5d178, size 0x5c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 mul(::Unity::Mathematics::uint3 a, ::Unity::Mathematics::uint3x4 b);

  /// @brief Method mul, addr 0x6a5d290, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 mul(::Unity::Mathematics::uint4 a, ::Unity::Mathematics::uint4x4 b);

  /// @brief Method mul, addr 0x6a5dfb8, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 mul(::Unity::Mathematics::uint4x2 a, ::Unity::Mathematics::uint2 b);

  /// @brief Method mul, addr 0x6a5e20c, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 mul(::Unity::Mathematics::uint4x3 a, ::Unity::Mathematics::uint3 b);

  /// @brief Method mul, addr 0x6a5e564, size 0x8c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 mul(::Unity::Mathematics::uint4x4 a, ::Unity::Mathematics::uint4 b);

  /// @brief Method mul, addr 0x6a5dffc, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x2 mul(::Unity::Mathematics::uint4x2 a, ::Unity::Mathematics::uint2x2 b);

  /// @brief Method mul, addr 0x6a5e274, size 0xa8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x2 mul(::Unity::Mathematics::uint4x3 a, ::Unity::Mathematics::uint3x2 b);

  /// @brief Method mul, addr 0x6a5e5f0, size 0xe4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x2 mul(::Unity::Mathematics::uint4x4 a, ::Unity::Mathematics::uint4x2 b);

  /// @brief Method mul, addr 0x6a5e074, size 0xac, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 mul(::Unity::Mathematics::uint4x2 a, ::Unity::Mathematics::uint2x3 b);

  /// @brief Method mul, addr 0x6a5e31c, size 0xfc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 mul(::Unity::Mathematics::uint4x3 a, ::Unity::Mathematics::uint3x3 b);

  /// @brief Method mul, addr 0x6a5e6d4, size 0x148, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 mul(::Unity::Mathematics::uint4x4 a, ::Unity::Mathematics::uint4x3 b);

  /// @brief Method mul, addr 0x6a5e120, size 0xec, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x4 mul(::Unity::Mathematics::uint4x2 a, ::Unity::Mathematics::uint2x4 b);

  /// @brief Method mul, addr 0x6a5e418, size 0x14c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x4 mul(::Unity::Mathematics::uint4x3 a, ::Unity::Mathematics::uint3x4 b);

  /// @brief Method mul, addr 0x6a5e81c, size 0x1a4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x4 mul(::Unity::Mathematics::uint4x4 a, ::Unity::Mathematics::uint4x4 b);

  /// @brief Method mul, addr 0x6a59fa0, size 0x10, virtual false, abstract: false, final false
  static inline double_t mul(::Unity::Mathematics::double2 a, ::Unity::Mathematics::double2 b);

  /// @brief Method mul, addr 0x6a5a044, size 0x18, virtual false, abstract: false, final false
  static inline double_t mul(::Unity::Mathematics::double3 a, ::Unity::Mathematics::double3 b);

  /// @brief Method mul, addr 0x6a5a164, size 0x20, virtual false, abstract: false, final false
  static inline double_t mul(::Unity::Mathematics::double4 a, ::Unity::Mathematics::double4 b);

  /// @brief Method mul, addr 0x6a59f98, size 0x8, virtual false, abstract: false, final false
  static inline double_t mul(double_t a, double_t b);

  /// @brief Method mul, addr 0x6a589c8, size 0x10, virtual false, abstract: false, final false
  static inline float_t mul(::Unity::Mathematics::float2 a, ::Unity::Mathematics::float2 b);

  /// @brief Method mul, addr 0x6a58a6c, size 0x18, virtual false, abstract: false, final false
  static inline float_t mul(::Unity::Mathematics::float3 a, ::Unity::Mathematics::float3 b);

  /// @brief Method mul, addr 0x6a58b8c, size 0x20, virtual false, abstract: false, final false
  static inline float_t mul(::Unity::Mathematics::float4 a, ::Unity::Mathematics::float4 b);

  /// @brief Method mul, addr 0x6a589c0, size 0x8, virtual false, abstract: false, final false
  static inline float_t mul(float_t a, float_t b);

  /// @brief Method mul, addr 0x6a5b6b8, size 0x14, virtual false, abstract: false, final false
  static inline int32_t mul(::Unity::Mathematics::int2 a, ::Unity::Mathematics::int2 b);

  /// @brief Method mul, addr 0x6a5b760, size 0x18, virtual false, abstract: false, final false
  static inline int32_t mul(::Unity::Mathematics::int3 a, ::Unity::Mathematics::int3 b);

  /// @brief Method mul, addr 0x6a5b84c, size 0x24, virtual false, abstract: false, final false
  static inline int32_t mul(::Unity::Mathematics::int4 a, ::Unity::Mathematics::int4 b);

  /// @brief Method mul, addr 0x6a5b6b0, size 0x8, virtual false, abstract: false, final false
  static inline int32_t mul(int32_t a, int32_t b);

  /// @brief Method mul, addr 0x6a5d040, size 0x14, virtual false, abstract: false, final false
  static inline uint32_t mul(::Unity::Mathematics::uint2 a, ::Unity::Mathematics::uint2 b);

  /// @brief Method mul, addr 0x6a5d0e8, size 0x18, virtual false, abstract: false, final false
  static inline uint32_t mul(::Unity::Mathematics::uint3 a, ::Unity::Mathematics::uint3 b);

  /// @brief Method mul, addr 0x6a5d1d4, size 0x24, virtual false, abstract: false, final false
  static inline uint32_t mul(::Unity::Mathematics::uint4 a, ::Unity::Mathematics::uint4 b);

  /// @brief Method mul, addr 0x6a5d038, size 0x8, virtual false, abstract: false, final false
  static inline uint32_t mul(uint32_t a, uint32_t b);

  /// @brief Method mulScale, addr 0x6a5830c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 mulScale(::Unity::Mathematics::float3x3 m, ::Unity::Mathematics::float3 s);

  /// @brief Method nlerp, addr 0x6a5f524, size 0x174, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion nlerp(::Unity::Mathematics::quaternion q1, ::Unity::Mathematics::quaternion q2, float_t t);

  /// @brief Method normalize, addr 0x6a50a30, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 normalize(::Unity::Mathematics::double2 x);

  /// @brief Method normalize, addr 0x6a50ab0, size 0x98, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 normalize(::Unity::Mathematics::double3 x);

  /// @brief Method normalize, addr 0x6a50b48, size 0xa8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 normalize(::Unity::Mathematics::double4 x);

  /// @brief Method normalize, addr 0x6a50870, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 normalize(::Unity::Mathematics::float2 x);

  /// @brief Method normalize, addr 0x6a508f0, size 0x98, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 normalize(::Unity::Mathematics::float3 x);

  /// @brief Method normalize, addr 0x6a50988, size 0xa8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 normalize(::Unity::Mathematics::float4 x);

  /// @brief Method normalize, addr 0x6a5eb60, size 0xa8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion normalize(::Unity::Mathematics::quaternion q);

  /// @brief Method normalizesafe, addr 0x6a50e3c, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 normalizesafe(::Unity::Mathematics::double2 x, ::Unity::Mathematics::double2 defaultvalue);

  /// @brief Method normalizesafe, addr 0x6a50ee0, size 0xc4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 normalizesafe(::Unity::Mathematics::double3 x, ::Unity::Mathematics::double3 defaultvalue);

  /// @brief Method normalizesafe, addr 0x6a50fa4, size 0xe4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 normalizesafe(::Unity::Mathematics::double4 x, ::Unity::Mathematics::double4 defaultvalue);

  /// @brief Method normalizesafe, addr 0x6a50bf0, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 normalizesafe(::Unity::Mathematics::float2 x, ::Unity::Mathematics::float2 defaultvalue);

  /// @brief Method normalizesafe, addr 0x6a50c94, size 0xc4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 normalizesafe(::Unity::Mathematics::float3 x, ::Unity::Mathematics::float3 defaultvalue);

  /// @brief Method normalizesafe, addr 0x6a50d58, size 0xe4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 normalizesafe(::Unity::Mathematics::float4 x, ::Unity::Mathematics::float4 defaultvalue);

  /// @brief Method normalizesafe, addr 0x6a5ec08, size 0x110, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion normalizesafe(::Unity::Mathematics::quaternion q);

  /// @brief Method normalizesafe, addr 0x6a5ed18, size 0xe4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion normalizesafe(::Unity::Mathematics::quaternion q, ::Unity::Mathematics::quaternion defaultvalue);

  /// @brief Method orthonormal_basis, addr 0x6a56b94, size 0x5c, virtual false, abstract: false, final false
  static inline void orthonormal_basis(::Unity::Mathematics::double3 normal, ::by_ref<::Unity::Mathematics::double3> basis1, ::by_ref<::Unity::Mathematics::double3> basis2);

  /// @brief Method orthonormal_basis, addr 0x6a56b38, size 0x5c, virtual false, abstract: false, final false
  static inline void orthonormal_basis(::Unity::Mathematics::float3 normal, ::by_ref<::Unity::Mathematics::float3> basis1, ::by_ref<::Unity::Mathematics::float3> basis2);

  /// @brief Method orthonormalize, addr 0x6a58580, size 0x19c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 orthonormalize(::Unity::Mathematics::float3x3 i);

  /// @brief Method pow, addr 0x6a4c9a8, size 0xc8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 pow(::Unity::Mathematics::double2 x, ::Unity::Mathematics::double2 y);

  /// @brief Method pow, addr 0x6a4ca70, size 0x120, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 pow(::Unity::Mathematics::double3 x, ::Unity::Mathematics::double3 y);

  /// @brief Method pow, addr 0x6a4cb90, size 0x178, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 pow(::Unity::Mathematics::double4 x, ::Unity::Mathematics::double4 y);

  /// @brief Method pow, addr 0x6a4c5c0, size 0xd0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 pow(::Unity::Mathematics::float2 x, ::Unity::Mathematics::float2 y);

  /// @brief Method pow, addr 0x6a4c690, size 0x128, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 pow(::Unity::Mathematics::float3 x, ::Unity::Mathematics::float3 y);

  /// @brief Method pow, addr 0x6a4c7b8, size 0x188, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 pow(::Unity::Mathematics::float4 x, ::Unity::Mathematics::float4 y);

  /// @brief Method pow, addr 0x6a4c940, size 0x68, virtual false, abstract: false, final false
  static inline double_t pow(double_t x, double_t y);

  /// @brief Method pow, addr 0x6a4c550, size 0x70, virtual false, abstract: false, final false
  static inline float_t pow(float_t x, float_t y);

  /// @brief Method project, addr 0x6a52ed4, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 project(::Unity::Mathematics::double2 a, ::Unity::Mathematics::double2 ontoB);

  /// @brief Method project, addr 0x6a52efc, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 project(::Unity::Mathematics::double3 a, ::Unity::Mathematics::double3 ontoB);

  /// @brief Method project, addr 0x6a52f38, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 project(::Unity::Mathematics::double4 a, ::Unity::Mathematics::double4 ontoB);

  /// @brief Method project, addr 0x6a52c60, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 project(::Unity::Mathematics::float2 a, ::Unity::Mathematics::float2 ontoB);

  /// @brief Method project, addr 0x6a52c88, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 project(::Unity::Mathematics::float3 a, ::Unity::Mathematics::float3 ontoB);

  /// @brief Method project, addr 0x6a52cc4, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 project(::Unity::Mathematics::float4 a, ::Unity::Mathematics::float4 ontoB);

  /// @brief Method projectsafe, addr 0x6a52f98, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 projectsafe(::Unity::Mathematics::double2 a, ::Unity::Mathematics::double2 ontoB, ::Unity::Mathematics::double2 defaultValue);

  /// @brief Method projectsafe, addr 0x6a52ff0, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 projectsafe(::Unity::Mathematics::double3 a, ::Unity::Mathematics::double3 ontoB, ::Unity::Mathematics::double3 defaultValue);

  /// @brief Method projectsafe, addr 0x6a53080, size 0xc8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 projectsafe(::Unity::Mathematics::double4 a, ::Unity::Mathematics::double4 ontoB, ::Unity::Mathematics::double4 defaultValue);

  /// @brief Method projectsafe, addr 0x6a52d24, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 projectsafe(::Unity::Mathematics::float2 a, ::Unity::Mathematics::float2 ontoB, ::Unity::Mathematics::float2 defaultValue);

  /// @brief Method projectsafe, addr 0x6a52d7c, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 projectsafe(::Unity::Mathematics::float3 a, ::Unity::Mathematics::float3 ontoB, ::Unity::Mathematics::float3 defaultValue);

  /// @brief Method projectsafe, addr 0x6a52e0c, size 0xc8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 projectsafe(::Unity::Mathematics::float4 a, ::Unity::Mathematics::float4 ontoB, ::Unity::Mathematics::float4 defaultValue);

  /// @brief Method pseudoinverse, addr 0x6a5871c, size 0x2a4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 pseudoinverse(::Unity::Mathematics::float3x3 m);

  /// @brief Method quaternion, addr 0x6a5e9c8, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion quaternion(::Unity::Mathematics::float3x3 m);

  /// @brief Method quaternion, addr 0x6a5ea08, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion quaternion(::Unity::Mathematics::float4x4 m);

  /// @brief Method quaternion, addr 0x6a5e9c4, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion quaternion(::Unity::Mathematics::float4 value);

  /// @brief Method quaternion, addr 0x6a5e9c0, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion quaternion(float_t x, float_t y, float_t z, float_t w);

  /// @brief Method radians, addr 0x6a55d2c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 radians(::Unity::Mathematics::double2 x);

  /// @brief Method radians, addr 0x6a55d40, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 radians(::Unity::Mathematics::double3 x);

  /// @brief Method radians, addr 0x6a55d58, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 radians(::Unity::Mathematics::double4 x);

  /// @brief Method radians, addr 0x6a55cd4, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 radians(::Unity::Mathematics::float2 x);

  /// @brief Method radians, addr 0x6a55ce8, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 radians(::Unity::Mathematics::float3 x);

  /// @brief Method radians, addr 0x6a55d00, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 radians(::Unity::Mathematics::float4 x);

  /// @brief Method radians, addr 0x6a55d1c, size 0x10, virtual false, abstract: false, final false
  static inline double_t radians(double_t x);

  /// @brief Method radians, addr 0x6a55cc4, size 0x10, virtual false, abstract: false, final false
  static inline float_t radians(float_t x);

  /// @brief Method rcp, addr 0x6a4c258, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 rcp(::Unity::Mathematics::double2 x);

  /// @brief Method rcp, addr 0x6a4c268, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 rcp(::Unity::Mathematics::double3 x);

  /// @brief Method rcp, addr 0x6a4c27c, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 rcp(::Unity::Mathematics::double4 x);

  /// @brief Method rcp, addr 0x6a4c210, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 rcp(::Unity::Mathematics::float2 x);

  /// @brief Method rcp, addr 0x6a4c220, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 rcp(::Unity::Mathematics::float3 x);

  /// @brief Method rcp, addr 0x6a4c234, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 rcp(::Unity::Mathematics::float4 x);

  /// @brief Method rcp, addr 0x6a4c24c, size 0xc, virtual false, abstract: false, final false
  static inline double_t rcp(double_t x);

  /// @brief Method rcp, addr 0x6a4c204, size 0xc, virtual false, abstract: false, final false
  static inline float_t rcp(float_t x);

  /// @brief Method read32_little_endian, addr 0x6a56cf8, size 0x8, virtual false, abstract: false, final false
  static inline uint32_t read32_little_endian(void* pBuffer);

  /// @brief Method reflect, addr 0x6a525bc, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 reflect(::Unity::Mathematics::double2 i, ::Unity::Mathematics::double2 n);

  /// @brief Method reflect, addr 0x6a525e4, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 reflect(::Unity::Mathematics::double3 i, ::Unity::Mathematics::double3 n);

  /// @brief Method reflect, addr 0x6a52620, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 reflect(::Unity::Mathematics::double4 i, ::Unity::Mathematics::double4 n);

  /// @brief Method reflect, addr 0x6a52508, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 reflect(::Unity::Mathematics::float2 i, ::Unity::Mathematics::float2 n);

  /// @brief Method reflect, addr 0x6a52530, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 reflect(::Unity::Mathematics::float3 i, ::Unity::Mathematics::float3 n);

  /// @brief Method reflect, addr 0x6a5256c, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 reflect(::Unity::Mathematics::float4 i, ::Unity::Mathematics::float4 n);

  /// @brief Method refract, addr 0x6a52968, size 0xd4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 refract(::Unity::Mathematics::double2 i, ::Unity::Mathematics::double2 n, double_t indexOfRefraction);

  /// @brief Method refract, addr 0x6a52a3c, size 0xfc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 refract(::Unity::Mathematics::double3 i, ::Unity::Mathematics::double3 n, double_t indexOfRefraction);

  /// @brief Method refract, addr 0x6a52b38, size 0x128, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 refract(::Unity::Mathematics::double4 i, ::Unity::Mathematics::double4 n, double_t indexOfRefraction);

  /// @brief Method refract, addr 0x6a52670, size 0xd4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 refract(::Unity::Mathematics::float2 i, ::Unity::Mathematics::float2 n, float_t indexOfRefraction);

  /// @brief Method refract, addr 0x6a52744, size 0xfc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 refract(::Unity::Mathematics::float3 i, ::Unity::Mathematics::float3 n, float_t indexOfRefraction);

  /// @brief Method refract, addr 0x6a52840, size 0x128, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 refract(::Unity::Mathematics::float4 i, ::Unity::Mathematics::float4 n, float_t indexOfRefraction);

  /// @brief Method remap, addr 0x6a4499c, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 remap(::Unity::Mathematics::double2 srcStart, ::Unity::Mathematics::double2 srcEnd, ::Unity::Mathematics::double2 dstStart,
                                                    ::Unity::Mathematics::double2 dstEnd, ::Unity::Mathematics::double2 x);

  /// @brief Method remap, addr 0x6a449d8, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 remap(::Unity::Mathematics::double3 srcStart, ::Unity::Mathematics::double3 srcEnd, ::Unity::Mathematics::double3 dstStart,
                                                    ::Unity::Mathematics::double3 dstEnd, ::Unity::Mathematics::double3 x);

  /// @brief Method remap, addr 0x6a44a3c, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 remap(::Unity::Mathematics::double4 srcStart, ::Unity::Mathematics::double4 srcEnd, ::Unity::Mathematics::double4 dstStart,
                                                    ::Unity::Mathematics::double4 dstEnd, ::Unity::Mathematics::double4 x);

  /// @brief Method remap, addr 0x6a44858, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 remap(::Unity::Mathematics::float2 srcStart, ::Unity::Mathematics::float2 srcEnd, ::Unity::Mathematics::float2 dstStart,
                                                   ::Unity::Mathematics::float2 dstEnd, ::Unity::Mathematics::float2 x);

  /// @brief Method remap, addr 0x6a44894, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 remap(::Unity::Mathematics::float3 srcStart, ::Unity::Mathematics::float3 srcEnd, ::Unity::Mathematics::float3 dstStart,
                                                   ::Unity::Mathematics::float3 dstEnd, ::Unity::Mathematics::float3 x);

  /// @brief Method remap, addr 0x6a448fc, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 remap(::Unity::Mathematics::float4 srcStart, ::Unity::Mathematics::float4 srcEnd, ::Unity::Mathematics::float4 dstStart,
                                                   ::Unity::Mathematics::float4 dstEnd, ::Unity::Mathematics::float4 x);

  /// @brief Method remap, addr 0x6a44980, size 0x1c, virtual false, abstract: false, final false
  static inline double_t remap(double_t srcStart, double_t srcEnd, double_t dstStart, double_t dstEnd, double_t x);

  /// @brief Method remap, addr 0x6a4483c, size 0x1c, virtual false, abstract: false, final false
  static inline float_t remap(float_t srcStart, float_t srcEnd, float_t dstStart, float_t dstEnd, float_t x);

  /// @brief Method reversebits, addr 0x6a54954, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 reversebits(::Unity::Mathematics::int2 x);

  /// @brief Method reversebits, addr 0x6a549c0, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 reversebits(::Unity::Mathematics::int3 x);

  /// @brief Method reversebits, addr 0x6a54a30, size 0xdc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 reversebits(::Unity::Mathematics::int4 x);

  /// @brief Method reversebits, addr 0x6a54b14, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 reversebits(::Unity::Mathematics::uint2 x);

  /// @brief Method reversebits, addr 0x6a54b80, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 reversebits(::Unity::Mathematics::uint3 x);

  /// @brief Method reversebits, addr 0x6a54bf0, size 0xdc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 reversebits(::Unity::Mathematics::uint4 x);

  /// @brief Method reversebits, addr 0x6a5494c, size 0x8, virtual false, abstract: false, final false
  static inline int32_t reversebits(int32_t x);

  /// @brief Method reversebits, addr 0x6a54ccc, size 0x8, virtual false, abstract: false, final false
  static inline int64_t reversebits(int64_t x);

  /// @brief Method reversebits, addr 0x6a54b0c, size 0x8, virtual false, abstract: false, final false
  static inline uint32_t reversebits(uint32_t x);

  /// @brief Method reversebits, addr 0x6a54cd4, size 0x8, virtual false, abstract: false, final false
  static inline uint64_t reversebits(uint64_t x);

  /// @brief Method right, addr 0x6a57084, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 right();

  /// @brief Method rol, addr 0x6a54ce8, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 rol(::Unity::Mathematics::int2 x, int32_t n);

  /// @brief Method rol, addr 0x6a54d08, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 rol(::Unity::Mathematics::int3 x, int32_t n);

  /// @brief Method rol, addr 0x6a54d2c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 rol(::Unity::Mathematics::int4 x, int32_t n);

  /// @brief Method rol, addr 0x6a54d70, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 rol(::Unity::Mathematics::uint2 x, int32_t n);

  /// @brief Method rol, addr 0x6a54d90, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 rol(::Unity::Mathematics::uint3 x, int32_t n);

  /// @brief Method rol, addr 0x6a54db4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 rol(::Unity::Mathematics::uint4 x, int32_t n);

  /// @brief Method rol, addr 0x6a54cdc, size 0xc, virtual false, abstract: false, final false
  static inline int32_t rol(int32_t x, int32_t n);

  /// @brief Method rol, addr 0x6a54dec, size 0xc, virtual false, abstract: false, final false
  static inline int64_t rol(int64_t x, int32_t n);

  /// @brief Method rol, addr 0x6a54d64, size 0xc, virtual false, abstract: false, final false
  static inline uint32_t rol(uint32_t x, int32_t n);

  /// @brief Method rol, addr 0x6a54df8, size 0xc, virtual false, abstract: false, final false
  static inline uint64_t rol(uint64_t x, int32_t n);

  /// @brief Method ror, addr 0x6a54e0c, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 ror(::Unity::Mathematics::int2 x, int32_t n);

  /// @brief Method ror, addr 0x6a54e2c, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 ror(::Unity::Mathematics::int3 x, int32_t n);

  /// @brief Method ror, addr 0x6a54e50, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 ror(::Unity::Mathematics::int4 x, int32_t n);

  /// @brief Method ror, addr 0x6a54e90, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 ror(::Unity::Mathematics::uint2 x, int32_t n);

  /// @brief Method ror, addr 0x6a54eb0, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 ror(::Unity::Mathematics::uint3 x, int32_t n);

  /// @brief Method ror, addr 0x6a54ed4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 ror(::Unity::Mathematics::uint4 x, int32_t n);

  /// @brief Method ror, addr 0x6a54e04, size 0x8, virtual false, abstract: false, final false
  static inline int32_t ror(int32_t x, int32_t n);

  /// @brief Method ror, addr 0x6a54f0c, size 0x8, virtual false, abstract: false, final false
  static inline int64_t ror(int64_t x, int32_t n);

  /// @brief Method ror, addr 0x6a54e88, size 0x8, virtual false, abstract: false, final false
  static inline uint32_t ror(uint32_t x, int32_t n);

  /// @brief Method ror, addr 0x6a54f14, size 0x8, virtual false, abstract: false, final false
  static inline uint64_t ror(uint64_t x, int32_t n);

  /// @brief Method rotate, addr 0x6a3b65c, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 rotate(::Unity::Mathematics::double4x4 a, ::Unity::Mathematics::double3 b);

  /// @brief Method rotate, addr 0x6a358c8, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 rotate(::Unity::Mathematics::AffineTransform a, ::Unity::Mathematics::float3 dir);

  /// @brief Method rotate, addr 0x6a604b8, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 rotate(::Unity::Mathematics::RigidTransform a, ::Unity::Mathematics::float3 dir);

  /// @brief Method rotate, addr 0x6a3ed20, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 rotate(::Unity::Mathematics::float4x4 a, ::Unity::Mathematics::float3 b);

  /// @brief Method rotate, addr 0x6a5f4a8, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 rotate(::Unity::Mathematics::quaternion q, ::Unity::Mathematics::float3 v);

  /// @brief Method rotation, addr 0x6a5fbc4, size 0x25c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion rotation(::Unity::Mathematics::float3x3 m);

  /// @brief Method round, addr 0x6a4b02c, size 0x170, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 round(::Unity::Mathematics::double2 x);

  /// @brief Method round, addr 0x6a4b19c, size 0x214, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 round(::Unity::Mathematics::double3 x);

  /// @brief Method round, addr 0x6a4b3b0, size 0x2c0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 round(::Unity::Mathematics::double4 x);

  /// @brief Method round, addr 0x6a4a8e4, size 0x17c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 round(::Unity::Mathematics::float2 x);

  /// @brief Method round, addr 0x6a4aa60, size 0x22c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 round(::Unity::Mathematics::float3 x);

  /// @brief Method round, addr 0x6a4ac8c, size 0x2d4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 round(::Unity::Mathematics::float4 x);

  /// @brief Method round, addr 0x6a4af60, size 0xcc, virtual false, abstract: false, final false
  static inline double_t round(double_t x);

  /// @brief Method round, addr 0x6a4a818, size 0xcc, virtual false, abstract: false, final false
  static inline float_t round(float_t x);

  /// @brief Method rsqrt, addr 0x6a506b0, size 0xa8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 rsqrt(::Unity::Mathematics::double2 x);

  /// @brief Method rsqrt, addr 0x6a50758, size 0xf0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 rsqrt(::Unity::Mathematics::double3 x);

  /// @brief Method rsqrt, addr 0x6a50848, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 rsqrt(::Unity::Mathematics::double4 x);

  /// @brief Method rsqrt, addr 0x6a50488, size 0xa8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 rsqrt(::Unity::Mathematics::float2 x);

  /// @brief Method rsqrt, addr 0x6a50530, size 0xf0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 rsqrt(::Unity::Mathematics::float3 x);

  /// @brief Method rsqrt, addr 0x6a50620, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 rsqrt(::Unity::Mathematics::float4 x);

  /// @brief Method rsqrt, addr 0x6a50648, size 0x68, virtual false, abstract: false, final false
  static inline double_t rsqrt(double_t x);

  /// @brief Method rsqrt, addr 0x6a50420, size 0x68, virtual false, abstract: false, final false
  static inline float_t rsqrt(float_t x);

  /// @brief Method saturate, addr 0x6a45328, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 saturate(::Unity::Mathematics::double2 x);

  /// @brief Method saturate, addr 0x6a45368, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 saturate(::Unity::Mathematics::double3 x);

  /// @brief Method saturate, addr 0x6a453f0, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 saturate(::Unity::Mathematics::double4 x);

  /// @brief Method saturate, addr 0x6a451f0, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 saturate(::Unity::Mathematics::float2 x);

  /// @brief Method saturate, addr 0x6a45230, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 saturate(::Unity::Mathematics::float3 x);

  /// @brief Method saturate, addr 0x6a452a0, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 saturate(::Unity::Mathematics::float4 x);

  /// @brief Method saturate, addr 0x6a452f0, size 0x38, virtual false, abstract: false, final false
  static inline double_t saturate(double_t x);

  /// @brief Method saturate, addr 0x6a451b8, size 0x38, virtual false, abstract: false, final false
  static inline float_t saturate(float_t x);

  /// @brief Method scaleMul, addr 0x6a58344, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 scaleMul(::Unity::Mathematics::float3 s, ::Unity::Mathematics::float3x3 m);

  /// @brief Method select, addr 0x6a523b4, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 select(::Unity::Mathematics::double2 falseValue, ::Unity::Mathematics::double2 trueValue, ::Unity::Mathematics::bool2 test);

  /// @brief Method select, addr 0x6a52378, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 select(::Unity::Mathematics::double2 falseValue, ::Unity::Mathematics::double2 trueValue, bool test);

  /// @brief Method select, addr 0x6a523c8, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 select(::Unity::Mathematics::double3 falseValue, ::Unity::Mathematics::double3 trueValue, ::Unity::Mathematics::bool3 test);

  /// @brief Method select, addr 0x6a52388, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 select(::Unity::Mathematics::double3 falseValue, ::Unity::Mathematics::double3 trueValue, bool test);

  /// @brief Method select, addr 0x6a523e4, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 select(::Unity::Mathematics::double4 falseValue, ::Unity::Mathematics::double4 trueValue, ::Unity::Mathematics::bool4 test);

  /// @brief Method select, addr 0x6a5239c, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 select(::Unity::Mathematics::double4 falseValue, ::Unity::Mathematics::double4 trueValue, bool test);

  /// @brief Method select, addr 0x6a52318, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 select(::Unity::Mathematics::float2 falseValue, ::Unity::Mathematics::float2 trueValue, ::Unity::Mathematics::bool2 test);

  /// @brief Method select, addr 0x6a522dc, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 select(::Unity::Mathematics::float2 falseValue, ::Unity::Mathematics::float2 trueValue, bool test);

  /// @brief Method select, addr 0x6a5232c, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 select(::Unity::Mathematics::float3 falseValue, ::Unity::Mathematics::float3 trueValue, ::Unity::Mathematics::bool3 test);

  /// @brief Method select, addr 0x6a522ec, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 select(::Unity::Mathematics::float3 falseValue, ::Unity::Mathematics::float3 trueValue, bool test);

  /// @brief Method select, addr 0x6a52348, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 select(::Unity::Mathematics::float4 falseValue, ::Unity::Mathematics::float4 trueValue, ::Unity::Mathematics::bool4 test);

  /// @brief Method select, addr 0x6a52300, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 select(::Unity::Mathematics::float4 falseValue, ::Unity::Mathematics::float4 trueValue, bool test);

  /// @brief Method select, addr 0x6a521ac, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 select(::Unity::Mathematics::int2 falseValue, ::Unity::Mathematics::int2 trueValue, ::Unity::Mathematics::bool2 test);

  /// @brief Method select, addr 0x6a5217c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 select(::Unity::Mathematics::int2 falseValue, ::Unity::Mathematics::int2 trueValue, bool test);

  /// @brief Method select, addr 0x6a521c4, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 select(::Unity::Mathematics::int3 falseValue, ::Unity::Mathematics::int3 trueValue, ::Unity::Mathematics::bool3 test);

  /// @brief Method select, addr 0x6a52188, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 select(::Unity::Mathematics::int3 falseValue, ::Unity::Mathematics::int3 trueValue, bool test);

  /// @brief Method select, addr 0x6a521e8, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 select(::Unity::Mathematics::int4 falseValue, ::Unity::Mathematics::int4 trueValue, ::Unity::Mathematics::bool4 test);

  /// @brief Method select, addr 0x6a5219c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 select(::Unity::Mathematics::int4 falseValue, ::Unity::Mathematics::int4 trueValue, bool test);

  /// @brief Method select, addr 0x6a52250, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 select(::Unity::Mathematics::uint2 falseValue, ::Unity::Mathematics::uint2 trueValue, ::Unity::Mathematics::bool2 test);

  /// @brief Method select, addr 0x6a52220, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 select(::Unity::Mathematics::uint2 falseValue, ::Unity::Mathematics::uint2 trueValue, bool test);

  /// @brief Method select, addr 0x6a52268, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 select(::Unity::Mathematics::uint3 falseValue, ::Unity::Mathematics::uint3 trueValue, ::Unity::Mathematics::bool3 test);

  /// @brief Method select, addr 0x6a5222c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 select(::Unity::Mathematics::uint3 falseValue, ::Unity::Mathematics::uint3 trueValue, bool test);

  /// @brief Method select, addr 0x6a5228c, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 select(::Unity::Mathematics::uint4 falseValue, ::Unity::Mathematics::uint4 trueValue, ::Unity::Mathematics::bool4 test);

  /// @brief Method select, addr 0x6a52240, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 select(::Unity::Mathematics::uint4 falseValue, ::Unity::Mathematics::uint4 trueValue, bool test);

  /// @brief Method select, addr 0x6a5236c, size 0xc, virtual false, abstract: false, final false
  static inline double_t select(double_t falseValue, double_t trueValue, bool test);

  /// @brief Method select, addr 0x6a522d0, size 0xc, virtual false, abstract: false, final false
  static inline float_t select(float_t falseValue, float_t trueValue, bool test);

  /// @brief Method select, addr 0x6a52170, size 0xc, virtual false, abstract: false, final false
  static inline int32_t select(int32_t falseValue, int32_t trueValue, bool test);

  /// @brief Method select, addr 0x6a522b8, size 0xc, virtual false, abstract: false, final false
  static inline int64_t select(int64_t falseValue, int64_t trueValue, bool test);

  /// @brief Method select, addr 0x6a52214, size 0xc, virtual false, abstract: false, final false
  static inline uint32_t select(uint32_t falseValue, uint32_t trueValue, bool test);

  /// @brief Method select, addr 0x6a522c4, size 0xc, virtual false, abstract: false, final false
  static inline uint64_t select(uint64_t falseValue, uint64_t trueValue, bool test);

  /// @brief Method select_shuffle_component, addr 0x6a35f5c, size 0xdc, virtual false, abstract: false, final false
  static inline bool select_shuffle_component(::Unity::Mathematics::bool2 a, ::Unity::Mathematics::bool2 b, ::Unity::Mathematics::math_ShuffleComponent component);

  /// @brief Method select_shuffle_component, addr 0x6a36888, size 0xfc, virtual false, abstract: false, final false
  static inline bool select_shuffle_component(::Unity::Mathematics::bool3 a, ::Unity::Mathematics::bool3 b, ::Unity::Mathematics::math_ShuffleComponent component);

  /// @brief Method select_shuffle_component, addr 0x6a376c4, size 0x12c, virtual false, abstract: false, final false
  static inline bool select_shuffle_component(::Unity::Mathematics::bool4 a, ::Unity::Mathematics::bool4 b, ::Unity::Mathematics::math_ShuffleComponent component);

  /// @brief Method select_shuffle_component, addr 0x6a38614, size 0xd8, virtual false, abstract: false, final false
  static inline double_t select_shuffle_component(::Unity::Mathematics::double2 a, ::Unity::Mathematics::double2 b, ::Unity::Mathematics::math_ShuffleComponent component);

  /// @brief Method select_shuffle_component, addr 0x6a39470, size 0xf4, virtual false, abstract: false, final false
  static inline double_t select_shuffle_component(::Unity::Mathematics::double3 a, ::Unity::Mathematics::double3 b, ::Unity::Mathematics::math_ShuffleComponent component);

  /// @brief Method select_shuffle_component, addr 0x6a3a92c, size 0x128, virtual false, abstract: false, final false
  static inline double_t select_shuffle_component(::Unity::Mathematics::double4 a, ::Unity::Mathematics::double4 b, ::Unity::Mathematics::math_ShuffleComponent component);

  /// @brief Method select_shuffle_component, addr 0x6a3c2f8, size 0xd8, virtual false, abstract: false, final false
  static inline float_t select_shuffle_component(::Unity::Mathematics::float2 a, ::Unity::Mathematics::float2 b, ::Unity::Mathematics::math_ShuffleComponent component);

  /// @brief Method select_shuffle_component, addr 0x6a3cfd0, size 0xf4, virtual false, abstract: false, final false
  static inline float_t select_shuffle_component(::Unity::Mathematics::float3 a, ::Unity::Mathematics::float3 b, ::Unity::Mathematics::math_ShuffleComponent component);

  /// @brief Method select_shuffle_component, addr 0x6a3e1d0, size 0x128, virtual false, abstract: false, final false
  static inline float_t select_shuffle_component(::Unity::Mathematics::float4 a, ::Unity::Mathematics::float4 b, ::Unity::Mathematics::math_ShuffleComponent component);

  /// @brief Method select_shuffle_component, addr 0x6a40348, size 0xd0, virtual false, abstract: false, final false
  static inline int32_t select_shuffle_component(::Unity::Mathematics::int2 a, ::Unity::Mathematics::int2 b, ::Unity::Mathematics::math_ShuffleComponent component);

  /// @brief Method select_shuffle_component, addr 0x6a4113c, size 0xec, virtual false, abstract: false, final false
  static inline int32_t select_shuffle_component(::Unity::Mathematics::int3 a, ::Unity::Mathematics::int3 b, ::Unity::Mathematics::math_ShuffleComponent component);

  /// @brief Method select_shuffle_component, addr 0x6a424d4, size 0x110, virtual false, abstract: false, final false
  static inline int32_t select_shuffle_component(::Unity::Mathematics::int4 a, ::Unity::Mathematics::int4 b, ::Unity::Mathematics::math_ShuffleComponent component);

  /// @brief Method select_shuffle_component, addr 0x6a609d8, size 0xd0, virtual false, abstract: false, final false
  static inline uint32_t select_shuffle_component(::Unity::Mathematics::uint2 a, ::Unity::Mathematics::uint2 b, ::Unity::Mathematics::math_ShuffleComponent component);

  /// @brief Method select_shuffle_component, addr 0x6a61730, size 0xec, virtual false, abstract: false, final false
  static inline uint32_t select_shuffle_component(::Unity::Mathematics::uint3 a, ::Unity::Mathematics::uint3 b, ::Unity::Mathematics::math_ShuffleComponent component);

  /// @brief Method select_shuffle_component, addr 0x6a62a4c, size 0x110, virtual false, abstract: false, final false
  static inline uint32_t select_shuffle_component(::Unity::Mathematics::uint4 a, ::Unity::Mathematics::uint4 b, ::Unity::Mathematics::math_ShuffleComponent component);

  /// @brief Method shuffle, addr 0x6a35db0, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 shuffle(::Unity::Mathematics::bool2 left, ::Unity::Mathematics::bool2 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                    ::Unity::Mathematics::math_ShuffleComponent y);

  /// @brief Method shuffle, addr 0x6a366dc, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 shuffle(::Unity::Mathematics::bool3 left, ::Unity::Mathematics::bool3 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                    ::Unity::Mathematics::math_ShuffleComponent y);

  /// @brief Method shuffle, addr 0x6a37518, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 shuffle(::Unity::Mathematics::bool4 left, ::Unity::Mathematics::bool4 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                    ::Unity::Mathematics::math_ShuffleComponent y);

  /// @brief Method shuffle, addr 0x6a35e10, size 0x8c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 shuffle(::Unity::Mathematics::bool2 left, ::Unity::Mathematics::bool2 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                    ::Unity::Mathematics::math_ShuffleComponent y, ::Unity::Mathematics::math_ShuffleComponent z);

  /// @brief Method shuffle, addr 0x6a3673c, size 0x8c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 shuffle(::Unity::Mathematics::bool3 left, ::Unity::Mathematics::bool3 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                    ::Unity::Mathematics::math_ShuffleComponent y, ::Unity::Mathematics::math_ShuffleComponent z);

  /// @brief Method shuffle, addr 0x6a37578, size 0x8c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 shuffle(::Unity::Mathematics::bool4 left, ::Unity::Mathematics::bool4 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                    ::Unity::Mathematics::math_ShuffleComponent y, ::Unity::Mathematics::math_ShuffleComponent z);

  /// @brief Method shuffle, addr 0x6a35e9c, size 0xc0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 shuffle(::Unity::Mathematics::bool2 left, ::Unity::Mathematics::bool2 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                    ::Unity::Mathematics::math_ShuffleComponent y, ::Unity::Mathematics::math_ShuffleComponent z, ::Unity::Mathematics::math_ShuffleComponent w);

  /// @brief Method shuffle, addr 0x6a367c8, size 0xc0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 shuffle(::Unity::Mathematics::bool3 left, ::Unity::Mathematics::bool3 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                    ::Unity::Mathematics::math_ShuffleComponent y, ::Unity::Mathematics::math_ShuffleComponent z, ::Unity::Mathematics::math_ShuffleComponent w);

  /// @brief Method shuffle, addr 0x6a37604, size 0xc0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 shuffle(::Unity::Mathematics::bool4 left, ::Unity::Mathematics::bool4 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                    ::Unity::Mathematics::math_ShuffleComponent y, ::Unity::Mathematics::math_ShuffleComponent z, ::Unity::Mathematics::math_ShuffleComponent w);

  /// @brief Method shuffle, addr 0x6a3844c, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 shuffle(::Unity::Mathematics::double2 left, ::Unity::Mathematics::double2 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                      ::Unity::Mathematics::math_ShuffleComponent y);

  /// @brief Method shuffle, addr 0x6a39248, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 shuffle(::Unity::Mathematics::double3 left, ::Unity::Mathematics::double3 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                      ::Unity::Mathematics::math_ShuffleComponent y);

  /// @brief Method shuffle, addr 0x6a3a6b0, size 0x98, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 shuffle(::Unity::Mathematics::double4 left, ::Unity::Mathematics::double4 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                      ::Unity::Mathematics::math_ShuffleComponent y);

  /// @brief Method shuffle, addr 0x6a384b4, size 0x98, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 shuffle(::Unity::Mathematics::double2 left, ::Unity::Mathematics::double2 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                      ::Unity::Mathematics::math_ShuffleComponent y, ::Unity::Mathematics::math_ShuffleComponent z);

  /// @brief Method shuffle, addr 0x6a392c8, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 shuffle(::Unity::Mathematics::double3 left, ::Unity::Mathematics::double3 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                      ::Unity::Mathematics::math_ShuffleComponent y, ::Unity::Mathematics::math_ShuffleComponent z);

  /// @brief Method shuffle, addr 0x6a3a748, size 0xd8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 shuffle(::Unity::Mathematics::double4 left, ::Unity::Mathematics::double4 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                      ::Unity::Mathematics::math_ShuffleComponent y, ::Unity::Mathematics::math_ShuffleComponent z);

  /// @brief Method shuffle, addr 0x6a3854c, size 0xc8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 shuffle(::Unity::Mathematics::double2 left, ::Unity::Mathematics::double2 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                      ::Unity::Mathematics::math_ShuffleComponent y, ::Unity::Mathematics::math_ShuffleComponent z, ::Unity::Mathematics::math_ShuffleComponent w);

  /// @brief Method shuffle, addr 0x6a39380, size 0xf0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 shuffle(::Unity::Mathematics::double3 left, ::Unity::Mathematics::double3 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                      ::Unity::Mathematics::math_ShuffleComponent y, ::Unity::Mathematics::math_ShuffleComponent z, ::Unity::Mathematics::math_ShuffleComponent w);

  /// @brief Method shuffle, addr 0x6a3a820, size 0x10c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 shuffle(::Unity::Mathematics::double4 left, ::Unity::Mathematics::double4 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                      ::Unity::Mathematics::math_ShuffleComponent y, ::Unity::Mathematics::math_ShuffleComponent z, ::Unity::Mathematics::math_ShuffleComponent w);

  /// @brief Method shuffle, addr 0x6a3c130, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 shuffle(::Unity::Mathematics::float2 left, ::Unity::Mathematics::float2 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                     ::Unity::Mathematics::math_ShuffleComponent y);

  /// @brief Method shuffle, addr 0x6a3cda8, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 shuffle(::Unity::Mathematics::float3 left, ::Unity::Mathematics::float3 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                     ::Unity::Mathematics::math_ShuffleComponent y);

  /// @brief Method shuffle, addr 0x6a3df60, size 0x98, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 shuffle(::Unity::Mathematics::float4 left, ::Unity::Mathematics::float4 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                     ::Unity::Mathematics::math_ShuffleComponent y);

  /// @brief Method shuffle, addr 0x6a3c198, size 0x98, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 shuffle(::Unity::Mathematics::float2 left, ::Unity::Mathematics::float2 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                     ::Unity::Mathematics::math_ShuffleComponent y, ::Unity::Mathematics::math_ShuffleComponent z);

  /// @brief Method shuffle, addr 0x6a3ce28, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 shuffle(::Unity::Mathematics::float3 left, ::Unity::Mathematics::float3 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                     ::Unity::Mathematics::math_ShuffleComponent y, ::Unity::Mathematics::math_ShuffleComponent z);

  /// @brief Method shuffle, addr 0x6a3dff8, size 0xcc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 shuffle(::Unity::Mathematics::float4 left, ::Unity::Mathematics::float4 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                     ::Unity::Mathematics::math_ShuffleComponent y, ::Unity::Mathematics::math_ShuffleComponent z);

  /// @brief Method shuffle, addr 0x6a3c230, size 0xc8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 shuffle(::Unity::Mathematics::float2 left, ::Unity::Mathematics::float2 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                     ::Unity::Mathematics::math_ShuffleComponent y, ::Unity::Mathematics::math_ShuffleComponent z, ::Unity::Mathematics::math_ShuffleComponent w);

  /// @brief Method shuffle, addr 0x6a3cee0, size 0xf0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 shuffle(::Unity::Mathematics::float3 left, ::Unity::Mathematics::float3 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                     ::Unity::Mathematics::math_ShuffleComponent y, ::Unity::Mathematics::math_ShuffleComponent z, ::Unity::Mathematics::math_ShuffleComponent w);

  /// @brief Method shuffle, addr 0x6a3e0c4, size 0x10c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 shuffle(::Unity::Mathematics::float4 left, ::Unity::Mathematics::float4 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                     ::Unity::Mathematics::math_ShuffleComponent y, ::Unity::Mathematics::math_ShuffleComponent z, ::Unity::Mathematics::math_ShuffleComponent w);

  /// @brief Method shuffle, addr 0x6a401ec, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 shuffle(::Unity::Mathematics::int2 left, ::Unity::Mathematics::int2 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                   ::Unity::Mathematics::math_ShuffleComponent y);

  /// @brief Method shuffle, addr 0x6a40f68, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 shuffle(::Unity::Mathematics::int3 left, ::Unity::Mathematics::int3 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                   ::Unity::Mathematics::math_ShuffleComponent y);

  /// @brief Method shuffle, addr 0x6a42318, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 shuffle(::Unity::Mathematics::int4 left, ::Unity::Mathematics::int4 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                   ::Unity::Mathematics::math_ShuffleComponent y);

  /// @brief Method shuffle, addr 0x6a4023c, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 shuffle(::Unity::Mathematics::int2 left, ::Unity::Mathematics::int2 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                   ::Unity::Mathematics::math_ShuffleComponent y, ::Unity::Mathematics::math_ShuffleComponent z);

  /// @brief Method shuffle, addr 0x6a40fd8, size 0x9c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 shuffle(::Unity::Mathematics::int3 left, ::Unity::Mathematics::int3 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                   ::Unity::Mathematics::math_ShuffleComponent y, ::Unity::Mathematics::math_ShuffleComponent z);

  /// @brief Method shuffle, addr 0x6a42380, size 0x94, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 shuffle(::Unity::Mathematics::int4 left, ::Unity::Mathematics::int4 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                   ::Unity::Mathematics::math_ShuffleComponent y, ::Unity::Mathematics::math_ShuffleComponent z);

  /// @brief Method shuffle, addr 0x6a402b0, size 0x98, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 shuffle(::Unity::Mathematics::int2 left, ::Unity::Mathematics::int2 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                   ::Unity::Mathematics::math_ShuffleComponent y, ::Unity::Mathematics::math_ShuffleComponent z, ::Unity::Mathematics::math_ShuffleComponent w);

  /// @brief Method shuffle, addr 0x6a41074, size 0xc8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 shuffle(::Unity::Mathematics::int3 left, ::Unity::Mathematics::int3 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                   ::Unity::Mathematics::math_ShuffleComponent y, ::Unity::Mathematics::math_ShuffleComponent z, ::Unity::Mathematics::math_ShuffleComponent w);

  /// @brief Method shuffle, addr 0x6a42414, size 0xc0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 shuffle(::Unity::Mathematics::int4 left, ::Unity::Mathematics::int4 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                   ::Unity::Mathematics::math_ShuffleComponent y, ::Unity::Mathematics::math_ShuffleComponent z, ::Unity::Mathematics::math_ShuffleComponent w);

  /// @brief Method shuffle, addr 0x6a6087c, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 shuffle(::Unity::Mathematics::uint2 left, ::Unity::Mathematics::uint2 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                    ::Unity::Mathematics::math_ShuffleComponent y);

  /// @brief Method shuffle, addr 0x6a6155c, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 shuffle(::Unity::Mathematics::uint3 left, ::Unity::Mathematics::uint3 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                    ::Unity::Mathematics::math_ShuffleComponent y);

  /// @brief Method shuffle, addr 0x6a62890, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 shuffle(::Unity::Mathematics::uint4 left, ::Unity::Mathematics::uint4 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                    ::Unity::Mathematics::math_ShuffleComponent y);

  /// @brief Method shuffle, addr 0x6a608cc, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 shuffle(::Unity::Mathematics::uint2 left, ::Unity::Mathematics::uint2 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                    ::Unity::Mathematics::math_ShuffleComponent y, ::Unity::Mathematics::math_ShuffleComponent z);

  /// @brief Method shuffle, addr 0x6a615cc, size 0x9c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 shuffle(::Unity::Mathematics::uint3 left, ::Unity::Mathematics::uint3 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                    ::Unity::Mathematics::math_ShuffleComponent y, ::Unity::Mathematics::math_ShuffleComponent z);

  /// @brief Method shuffle, addr 0x6a628f8, size 0x94, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 shuffle(::Unity::Mathematics::uint4 left, ::Unity::Mathematics::uint4 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                    ::Unity::Mathematics::math_ShuffleComponent y, ::Unity::Mathematics::math_ShuffleComponent z);

  /// @brief Method shuffle, addr 0x6a60940, size 0x98, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 shuffle(::Unity::Mathematics::uint2 left, ::Unity::Mathematics::uint2 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                    ::Unity::Mathematics::math_ShuffleComponent y, ::Unity::Mathematics::math_ShuffleComponent z, ::Unity::Mathematics::math_ShuffleComponent w);

  /// @brief Method shuffle, addr 0x6a61668, size 0xc8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 shuffle(::Unity::Mathematics::uint3 left, ::Unity::Mathematics::uint3 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                    ::Unity::Mathematics::math_ShuffleComponent y, ::Unity::Mathematics::math_ShuffleComponent z, ::Unity::Mathematics::math_ShuffleComponent w);

  /// @brief Method shuffle, addr 0x6a6298c, size 0xc0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 shuffle(::Unity::Mathematics::uint4 left, ::Unity::Mathematics::uint4 right, ::Unity::Mathematics::math_ShuffleComponent x,
                                                    ::Unity::Mathematics::math_ShuffleComponent y, ::Unity::Mathematics::math_ShuffleComponent z, ::Unity::Mathematics::math_ShuffleComponent w);

  /// @brief Method shuffle, addr 0x6a35da0, size 0x10, virtual false, abstract: false, final false
  static inline bool shuffle(::Unity::Mathematics::bool2 left, ::Unity::Mathematics::bool2 right, ::Unity::Mathematics::math_ShuffleComponent x);

  /// @brief Method shuffle, addr 0x6a366cc, size 0x10, virtual false, abstract: false, final false
  static inline bool shuffle(::Unity::Mathematics::bool3 left, ::Unity::Mathematics::bool3 right, ::Unity::Mathematics::math_ShuffleComponent x);

  /// @brief Method shuffle, addr 0x6a37508, size 0x10, virtual false, abstract: false, final false
  static inline bool shuffle(::Unity::Mathematics::bool4 left, ::Unity::Mathematics::bool4 right, ::Unity::Mathematics::math_ShuffleComponent x);

  /// @brief Method shuffle, addr 0x6a38444, size 0x8, virtual false, abstract: false, final false
  static inline double_t shuffle(::Unity::Mathematics::double2 left, ::Unity::Mathematics::double2 right, ::Unity::Mathematics::math_ShuffleComponent x);

  /// @brief Method shuffle, addr 0x6a39240, size 0x8, virtual false, abstract: false, final false
  static inline double_t shuffle(::Unity::Mathematics::double3 left, ::Unity::Mathematics::double3 right, ::Unity::Mathematics::math_ShuffleComponent x);

  /// @brief Method shuffle, addr 0x6a3a6a8, size 0x8, virtual false, abstract: false, final false
  static inline double_t shuffle(::Unity::Mathematics::double4 left, ::Unity::Mathematics::double4 right, ::Unity::Mathematics::math_ShuffleComponent x);

  /// @brief Method shuffle, addr 0x6a3c128, size 0x8, virtual false, abstract: false, final false
  static inline float_t shuffle(::Unity::Mathematics::float2 left, ::Unity::Mathematics::float2 right, ::Unity::Mathematics::math_ShuffleComponent x);

  /// @brief Method shuffle, addr 0x6a3cda0, size 0x8, virtual false, abstract: false, final false
  static inline float_t shuffle(::Unity::Mathematics::float3 left, ::Unity::Mathematics::float3 right, ::Unity::Mathematics::math_ShuffleComponent x);

  /// @brief Method shuffle, addr 0x6a3df58, size 0x8, virtual false, abstract: false, final false
  static inline float_t shuffle(::Unity::Mathematics::float4 left, ::Unity::Mathematics::float4 right, ::Unity::Mathematics::math_ShuffleComponent x);

  /// @brief Method shuffle, addr 0x6a401e4, size 0x8, virtual false, abstract: false, final false
  static inline int32_t shuffle(::Unity::Mathematics::int2 left, ::Unity::Mathematics::int2 right, ::Unity::Mathematics::math_ShuffleComponent x);

  /// @brief Method shuffle, addr 0x6a40f58, size 0x10, virtual false, abstract: false, final false
  static inline int32_t shuffle(::Unity::Mathematics::int3 left, ::Unity::Mathematics::int3 right, ::Unity::Mathematics::math_ShuffleComponent x);

  /// @brief Method shuffle, addr 0x6a42310, size 0x8, virtual false, abstract: false, final false
  static inline int32_t shuffle(::Unity::Mathematics::int4 left, ::Unity::Mathematics::int4 right, ::Unity::Mathematics::math_ShuffleComponent x);

  /// @brief Method shuffle, addr 0x6a60874, size 0x8, virtual false, abstract: false, final false
  static inline uint32_t shuffle(::Unity::Mathematics::uint2 left, ::Unity::Mathematics::uint2 right, ::Unity::Mathematics::math_ShuffleComponent x);

  /// @brief Method shuffle, addr 0x6a6154c, size 0x10, virtual false, abstract: false, final false
  static inline uint32_t shuffle(::Unity::Mathematics::uint3 left, ::Unity::Mathematics::uint3 right, ::Unity::Mathematics::math_ShuffleComponent x);

  /// @brief Method shuffle, addr 0x6a62888, size 0x8, virtual false, abstract: false, final false
  static inline uint32_t shuffle(::Unity::Mathematics::uint4 left, ::Unity::Mathematics::uint4 right, ::Unity::Mathematics::math_ShuffleComponent x);

  /// @brief Method sign, addr 0x6a4c41c, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 sign(::Unity::Mathematics::double2 x);

  /// @brief Method sign, addr 0x6a4c460, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 sign(::Unity::Mathematics::double3 x);

  /// @brief Method sign, addr 0x6a4c4c8, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 sign(::Unity::Mathematics::double4 x);

  /// @brief Method sign, addr 0x6a4c360, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 sign(::Unity::Mathematics::float2 x);

  /// @brief Method sign, addr 0x6a4c384, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 sign(::Unity::Mathematics::float3 x);

  /// @brief Method sign, addr 0x6a4c3c0, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 sign(::Unity::Mathematics::float4 x);

  /// @brief Method sign, addr 0x6a4c2a4, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 sign(::Unity::Mathematics::int2 x);

  /// @brief Method sign, addr 0x6a4c2c8, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 sign(::Unity::Mathematics::int3 x);

  /// @brief Method sign, addr 0x6a4c2f8, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 sign(::Unity::Mathematics::int4 x);

  /// @brief Method sign, addr 0x6a4c3f4, size 0x28, virtual false, abstract: false, final false
  static inline double_t sign(double_t x);

  /// @brief Method sign, addr 0x6a4c344, size 0x1c, virtual false, abstract: false, final false
  static inline float_t sign(float_t x);

  /// @brief Method sign, addr 0x6a4c294, size 0x10, virtual false, abstract: false, final false
  static inline int32_t sign(int32_t x);

  /// @brief Method sin, addr 0x6a48b98, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 sin(::Unity::Mathematics::double2 x);

  /// @brief Method sin, addr 0x6a48c48, size 0x100, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 sin(::Unity::Mathematics::double3 x);

  /// @brief Method sin, addr 0x6a48d48, size 0x148, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 sin(::Unity::Mathematics::double4 x);

  /// @brief Method sin, addr 0x6a48824, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 sin(::Unity::Mathematics::float2 x);

  /// @brief Method sin, addr 0x6a488dc, size 0x108, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 sin(::Unity::Mathematics::float3 x);

  /// @brief Method sin, addr 0x6a489e4, size 0x154, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 sin(::Unity::Mathematics::float4 x);

  /// @brief Method sin, addr 0x6a48b38, size 0x60, virtual false, abstract: false, final false
  static inline double_t sin(double_t x);

  /// @brief Method sin, addr 0x6a487bc, size 0x68, virtual false, abstract: false, final false
  static inline float_t sin(float_t x);

  /// @brief Method sincos, addr 0x6a53654, size 0x148, virtual false, abstract: false, final false
  static inline void sincos(::Unity::Mathematics::double2 x, ::by_ref<::Unity::Mathematics::double2> s, ::by_ref<::Unity::Mathematics::double2> c);

  /// @brief Method sincos, addr 0x6a5379c, size 0x1dc, virtual false, abstract: false, final false
  static inline void sincos(::Unity::Mathematics::double3 x, ::by_ref<::Unity::Mathematics::double3> s, ::by_ref<::Unity::Mathematics::double3> c);

  /// @brief Method sincos, addr 0x6a53978, size 0x6c, virtual false, abstract: false, final false
  static inline void sincos(::Unity::Mathematics::double4 x, ::by_ref<::Unity::Mathematics::double4> s, ::by_ref<::Unity::Mathematics::double4> c);

  /// @brief Method sincos, addr 0x6a53370, size 0x158, virtual false, abstract: false, final false
  static inline void sincos(::Unity::Mathematics::float2 x, ::by_ref<::Unity::Mathematics::float2> s, ::by_ref<::Unity::Mathematics::float2> c);

  /// @brief Method sincos, addr 0x6a534c8, size 0x64, virtual false, abstract: false, final false
  static inline void sincos(::Unity::Mathematics::float3 x, ::by_ref<::Unity::Mathematics::float3> s, ::by_ref<::Unity::Mathematics::float3> c);

  /// @brief Method sincos, addr 0x6a5352c, size 0x6c, virtual false, abstract: false, final false
  static inline void sincos(::Unity::Mathematics::float4 x, ::by_ref<::Unity::Mathematics::float4> s, ::by_ref<::Unity::Mathematics::float4> c);

  /// @brief Method sincos, addr 0x6a53598, size 0xbc, virtual false, abstract: false, final false
  static inline void sincos(double_t x, ::by_ref<double_t> s, ::by_ref<double_t> c);

  /// @brief Method sincos, addr 0x6a532a8, size 0xc8, virtual false, abstract: false, final false
  static inline void sincos(float_t x, ::by_ref<float_t> s, ::by_ref<float_t> c);

  /// @brief Method sinh, addr 0x6a4926c, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 sinh(::Unity::Mathematics::double2 x);

  /// @brief Method sinh, addr 0x6a4931c, size 0x100, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 sinh(::Unity::Mathematics::double3 x);

  /// @brief Method sinh, addr 0x6a4941c, size 0x148, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 sinh(::Unity::Mathematics::double4 x);

  /// @brief Method sinh, addr 0x6a48ef8, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 sinh(::Unity::Mathematics::float2 x);

  /// @brief Method sinh, addr 0x6a48fb0, size 0x108, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 sinh(::Unity::Mathematics::float3 x);

  /// @brief Method sinh, addr 0x6a490b8, size 0x154, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 sinh(::Unity::Mathematics::float4 x);

  /// @brief Method sinh, addr 0x6a4920c, size 0x60, virtual false, abstract: false, final false
  static inline double_t sinh(double_t x);

  /// @brief Method sinh, addr 0x6a48e90, size 0x68, virtual false, abstract: false, final false
  static inline float_t sinh(float_t x);

  /// @brief Method slerp, addr 0x6a5f698, size 0x374, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion slerp(::Unity::Mathematics::quaternion q1, ::Unity::Mathematics::quaternion q2, float_t t);

  /// @brief Method smoothstep, addr 0x6a51bdc, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 smoothstep(::Unity::Mathematics::double2 xMin, ::Unity::Mathematics::double2 xMax, ::Unity::Mathematics::double2 x);

  /// @brief Method smoothstep, addr 0x6a51c44, size 0xec, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 smoothstep(::Unity::Mathematics::double3 xMin, ::Unity::Mathematics::double3 xMax, ::Unity::Mathematics::double3 x);

  /// @brief Method smoothstep, addr 0x6a51d30, size 0x134, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 smoothstep(::Unity::Mathematics::double4 xMin, ::Unity::Mathematics::double4 xMax, ::Unity::Mathematics::double4 x);

  /// @brief Method smoothstep, addr 0x6a519c0, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 smoothstep(::Unity::Mathematics::float2 xMin, ::Unity::Mathematics::float2 xMax, ::Unity::Mathematics::float2 x);

  /// @brief Method smoothstep, addr 0x6a51a28, size 0xc4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 smoothstep(::Unity::Mathematics::float3 xMin, ::Unity::Mathematics::float3 xMax, ::Unity::Mathematics::float3 x);

  /// @brief Method smoothstep, addr 0x6a51aec, size 0x98, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 smoothstep(::Unity::Mathematics::float4 xMin, ::Unity::Mathematics::float4 xMax, ::Unity::Mathematics::float4 x);

  /// @brief Method smoothstep, addr 0x6a51b84, size 0x58, virtual false, abstract: false, final false
  static inline double_t smoothstep(double_t xMin, double_t xMax, double_t x);

  /// @brief Method smoothstep, addr 0x6a51968, size 0x58, virtual false, abstract: false, final false
  static inline float_t smoothstep(float_t xMin, float_t xMax, float_t x);

  /// @brief Method sqrt, addr 0x6a50188, size 0x9c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 sqrt(::Unity::Mathematics::double2 x);

  /// @brief Method sqrt, addr 0x6a50224, size 0xe0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 sqrt(::Unity::Mathematics::double3 x);

  /// @brief Method sqrt, addr 0x6a50304, size 0x11c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 sqrt(::Unity::Mathematics::double4 x);

  /// @brief Method sqrt, addr 0x6a4fe90, size 0x9c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 sqrt(::Unity::Mathematics::float2 x);

  /// @brief Method sqrt, addr 0x6a4ff2c, size 0xe0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 sqrt(::Unity::Mathematics::float3 x);

  /// @brief Method sqrt, addr 0x6a5000c, size 0x11c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 sqrt(::Unity::Mathematics::float4 x);

  /// @brief Method sqrt, addr 0x6a50128, size 0x60, virtual false, abstract: false, final false
  static inline double_t sqrt(double_t x);

  /// @brief Method sqrt, addr 0x6a4fe30, size 0x60, virtual false, abstract: false, final false
  static inline float_t sqrt(float_t x);

  /// @brief Method square, addr 0x6a56284, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 square(::Unity::Mathematics::double2 x);

  /// @brief Method square, addr 0x6a56290, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 square(::Unity::Mathematics::double3 x);

  /// @brief Method square, addr 0x6a562a0, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 square(::Unity::Mathematics::double4 x);

  /// @brief Method square, addr 0x6a5624c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 square(::Unity::Mathematics::float2 x);

  /// @brief Method square, addr 0x6a56258, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 square(::Unity::Mathematics::float3 x);

  /// @brief Method square, addr 0x6a56268, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 square(::Unity::Mathematics::float4 x);

  /// @brief Method square, addr 0x6a562bc, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 square(::Unity::Mathematics::int2 x);

  /// @brief Method square, addr 0x6a562d4, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 square(::Unity::Mathematics::int3 x);

  /// @brief Method square, addr 0x6a562f0, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 square(::Unity::Mathematics::int4 x);

  /// @brief Method square, addr 0x6a56324, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 square(::Unity::Mathematics::uint2 x);

  /// @brief Method square, addr 0x6a5633c, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 square(::Unity::Mathematics::uint3 x);

  /// @brief Method square, addr 0x6a56358, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 square(::Unity::Mathematics::uint4 x);

  /// @brief Method square, addr 0x6a5627c, size 0x8, virtual false, abstract: false, final false
  static inline double_t square(double_t x);

  /// @brief Method square, addr 0x6a56244, size 0x8, virtual false, abstract: false, final false
  static inline float_t square(float_t x);

  /// @brief Method square, addr 0x6a562b4, size 0x8, virtual false, abstract: false, final false
  static inline int32_t square(int32_t x);

  /// @brief Method square, addr 0x6a5631c, size 0x8, virtual false, abstract: false, final false
  static inline uint32_t square(uint32_t x);

  /// @brief Method step, addr 0x6a5249c, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 step(::Unity::Mathematics::double2 threshold, ::Unity::Mathematics::double2 x);

  /// @brief Method step, addr 0x6a524b8, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 step(::Unity::Mathematics::double3 threshold, ::Unity::Mathematics::double3 x);

  /// @brief Method step, addr 0x6a524dc, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 step(::Unity::Mathematics::double4 threshold, ::Unity::Mathematics::double4 x);

  /// @brief Method step, addr 0x6a5241c, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 step(::Unity::Mathematics::float2 threshold, ::Unity::Mathematics::float2 x);

  /// @brief Method step, addr 0x6a52438, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 step(::Unity::Mathematics::float3 threshold, ::Unity::Mathematics::float3 x);

  /// @brief Method step, addr 0x6a5245c, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 step(::Unity::Mathematics::float4 threshold, ::Unity::Mathematics::float4 x);

  /// @brief Method step, addr 0x6a52488, size 0x14, virtual false, abstract: false, final false
  static inline double_t step(double_t threshold, double_t x);

  /// @brief Method step, addr 0x6a52408, size 0x14, virtual false, abstract: false, final false
  static inline float_t step(float_t threshold, float_t x);

  /// @brief Method tan, addr 0x6a45aec, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 tan(::Unity::Mathematics::double2 x);

  /// @brief Method tan, addr 0x6a45b9c, size 0x100, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 tan(::Unity::Mathematics::double3 x);

  /// @brief Method tan, addr 0x6a45c9c, size 0x148, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 tan(::Unity::Mathematics::double4 x);

  /// @brief Method tan, addr 0x6a45778, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 tan(::Unity::Mathematics::float2 x);

  /// @brief Method tan, addr 0x6a45830, size 0x108, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 tan(::Unity::Mathematics::float3 x);

  /// @brief Method tan, addr 0x6a45938, size 0x154, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 tan(::Unity::Mathematics::float4 x);

  /// @brief Method tan, addr 0x6a45a8c, size 0x60, virtual false, abstract: false, final false
  static inline double_t tan(double_t x);

  /// @brief Method tan, addr 0x6a45710, size 0x68, virtual false, abstract: false, final false
  static inline float_t tan(float_t x);

  /// @brief Method tanh, addr 0x6a461c0, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 tanh(::Unity::Mathematics::double2 x);

  /// @brief Method tanh, addr 0x6a46270, size 0x100, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 tanh(::Unity::Mathematics::double3 x);

  /// @brief Method tanh, addr 0x6a46370, size 0x148, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 tanh(::Unity::Mathematics::double4 x);

  /// @brief Method tanh, addr 0x6a45e4c, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 tanh(::Unity::Mathematics::float2 x);

  /// @brief Method tanh, addr 0x6a45f04, size 0x108, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 tanh(::Unity::Mathematics::float3 x);

  /// @brief Method tanh, addr 0x6a4600c, size 0x154, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 tanh(::Unity::Mathematics::float4 x);

  /// @brief Method tanh, addr 0x6a46160, size 0x60, virtual false, abstract: false, final false
  static inline double_t tanh(double_t x);

  /// @brief Method tanh, addr 0x6a45de4, size 0x68, virtual false, abstract: false, final false
  static inline float_t tanh(float_t x);

  /// @brief Method transform, addr 0x6a3b6b4, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 transform(::Unity::Mathematics::double4x4 a, ::Unity::Mathematics::double3 b);

  /// @brief Method transform, addr 0x6a35910, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 transform(::Unity::Mathematics::AffineTransform a, ::Unity::Mathematics::float3 pos);

  /// @brief Method transform, addr 0x6a6053c, size 0xa0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 transform(::Unity::Mathematics::RigidTransform a, ::Unity::Mathematics::float3 pos);

  /// @brief Method transform, addr 0x6a3ed68, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 transform(::Unity::Mathematics::float4x4 a, ::Unity::Mathematics::float3 b);

  /// @brief Method transpose, addr 0x6a3607c, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 transpose(::Unity::Mathematics::bool2x2 v);

  /// @brief Method transpose, addr 0x6a369fc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 transpose(::Unity::Mathematics::bool3x2 v);

  /// @brief Method transpose, addr 0x6a37864, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 transpose(::Unity::Mathematics::bool4x2 v);

  /// @brief Method transpose, addr 0x6a361ec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 transpose(::Unity::Mathematics::bool2x3 v);

  /// @brief Method transpose, addr 0x6a36c74, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 transpose(::Unity::Mathematics::bool3x3 v);

  /// @brief Method transpose, addr 0x6a37b20, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 transpose(::Unity::Mathematics::bool4x3 v);

  /// @brief Method transpose, addr 0x6a363e0, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 transpose(::Unity::Mathematics::bool2x4 v);

  /// @brief Method transpose, addr 0x6a36ff8, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 transpose(::Unity::Mathematics::bool3x4 v);

  /// @brief Method transpose, addr 0x6a37ecc, size 0xc4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x4 transpose(::Unity::Mathematics::bool4x4 v);

  /// @brief Method transpose, addr 0x6a387e4, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 transpose(::Unity::Mathematics::double2x2 v);

  /// @brief Method transpose, addr 0x6a396c0, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 transpose(::Unity::Mathematics::double3x2 v);

  /// @brief Method transpose, addr 0x6a3ac04, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 transpose(::Unity::Mathematics::double4x2 v);

  /// @brief Method transpose, addr 0x6a38a84, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x2 transpose(::Unity::Mathematics::double2x3 v);

  /// @brief Method transpose, addr 0x6a39a38, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 transpose(::Unity::Mathematics::double3x3 v);

  /// @brief Method transpose, addr 0x6a3b060, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 transpose(::Unity::Mathematics::double4x3 v);

  /// @brief Method transpose, addr 0x6a38d9c, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 transpose(::Unity::Mathematics::double2x4 v);

  /// @brief Method transpose, addr 0x6a3a000, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 transpose(::Unity::Mathematics::double3x4 v);

  /// @brief Method transpose, addr 0x6a3b720, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x4 transpose(::Unity::Mathematics::double4x4 v);

  /// @brief Method transpose, addr 0x6a3c4c8, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 transpose(::Unity::Mathematics::float2x2 v);

  /// @brief Method transpose, addr 0x6a3d220, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 transpose(::Unity::Mathematics::float3x2 v);

  /// @brief Method transpose, addr 0x6a3e484, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x4 transpose(::Unity::Mathematics::float4x2 v);

  /// @brief Method transpose, addr 0x6a3c728, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x2 transpose(::Unity::Mathematics::float2x3 v);

  /// @brief Method transpose, addr 0x6a3d528, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 transpose(::Unity::Mathematics::float3x3 v);

  /// @brief Method transpose, addr 0x6a3e834, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 transpose(::Unity::Mathematics::float4x3 v);

  /// @brief Method transpose, addr 0x6a3c9c8, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x2 transpose(::Unity::Mathematics::float2x4 v);

  /// @brief Method transpose, addr 0x6a3da24, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x3 transpose(::Unity::Mathematics::float3x4 v);

  /// @brief Method transpose, addr 0x6a3edc0, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 transpose(::Unity::Mathematics::float4x4 v);

  /// @brief Method transpose, addr 0x6a4057c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x2 transpose(::Unity::Mathematics::int2x2 v);

  /// @brief Method transpose, addr 0x6a41468, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x3 transpose(::Unity::Mathematics::int3x2 v);

  /// @brief Method transpose, addr 0x6a42850, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x4 transpose(::Unity::Mathematics::int4x2 v);

  /// @brief Method transpose, addr 0x6a4088c, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 transpose(::Unity::Mathematics::int2x3 v);

  /// @brief Method transpose, addr 0x6a418b8, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x3 transpose(::Unity::Mathematics::int3x3 v);

  /// @brief Method transpose, addr 0x6a42d14, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 transpose(::Unity::Mathematics::int4x3 v);

  /// @brief Method transpose, addr 0x6a40c40, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 transpose(::Unity::Mathematics::int2x4 v);

  /// @brief Method transpose, addr 0x6a41ea4, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 transpose(::Unity::Mathematics::int3x4 v);

  /// @brief Method transpose, addr 0x6a43344, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 transpose(::Unity::Mathematics::int4x4 v);

  /// @brief Method transpose, addr 0x6a60bdc, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 transpose(::Unity::Mathematics::uint2x2 v);

  /// @brief Method transpose, addr 0x6a61a4c, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x3 transpose(::Unity::Mathematics::uint3x2 v);

  /// @brief Method transpose, addr 0x6a62dbc, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x4 transpose(::Unity::Mathematics::uint4x2 v);

  /// @brief Method transpose, addr 0x6a60eb0, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 transpose(::Unity::Mathematics::uint2x3 v);

  /// @brief Method transpose, addr 0x6a61e9c, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x3 transpose(::Unity::Mathematics::uint3x3 v);

  /// @brief Method transpose, addr 0x6a63284, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 transpose(::Unity::Mathematics::uint4x3 v);

  /// @brief Method transpose, addr 0x6a61254, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x2 transpose(::Unity::Mathematics::uint2x4 v);

  /// @brief Method transpose, addr 0x6a6244c, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 transpose(::Unity::Mathematics::uint3x4 v);

  /// @brief Method transpose, addr 0x6a638c8, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x4 transpose(::Unity::Mathematics::uint4x4 v);

  /// @brief Method trunc, addr 0x6a4ba78, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 trunc(::Unity::Mathematics::double2 x);

  /// @brief Method trunc, addr 0x6a4bb30, size 0x10c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 trunc(::Unity::Mathematics::double3 x);

  /// @brief Method trunc, addr 0x6a4bc3c, size 0x158, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 trunc(::Unity::Mathematics::double4 x);

  /// @brief Method trunc, addr 0x6a4b6dc, size 0xc0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 trunc(::Unity::Mathematics::float2 x);

  /// @brief Method trunc, addr 0x6a4b79c, size 0x114, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 trunc(::Unity::Mathematics::float3 x);

  /// @brief Method trunc, addr 0x6a4b8b0, size 0x164, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 trunc(::Unity::Mathematics::float4 x);

  /// @brief Method trunc, addr 0x6a4ba14, size 0x64, virtual false, abstract: false, final false
  static inline double_t trunc(double_t x);

  /// @brief Method trunc, addr 0x6a4b670, size 0x6c, virtual false, abstract: false, final false
  static inline float_t trunc(float_t x);

  /// @brief Method tzcnt, addr 0x6a543d8, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 tzcnt(::Unity::Mathematics::int2 x);

  /// @brief Method tzcnt, addr 0x6a5465c, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 tzcnt(::Unity::Mathematics::uint2 x);

  /// @brief Method tzcnt, addr 0x6a54460, size 0xc0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 tzcnt(::Unity::Mathematics::int3 x);

  /// @brief Method tzcnt, addr 0x6a546e4, size 0xc0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 tzcnt(::Unity::Mathematics::uint3 x);

  /// @brief Method tzcnt, addr 0x6a54520, size 0x100, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 tzcnt(::Unity::Mathematics::int4 x);

  /// @brief Method tzcnt, addr 0x6a547a4, size 0x100, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 tzcnt(::Unity::Mathematics::uint4 x);

  /// @brief Method tzcnt, addr 0x6a5439c, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t tzcnt(int32_t x);

  /// @brief Method tzcnt, addr 0x6a548a4, size 0x54, virtual false, abstract: false, final false
  static inline int32_t tzcnt(int64_t x);

  /// @brief Method tzcnt, addr 0x6a54620, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t tzcnt(uint32_t x);

  /// @brief Method tzcnt, addr 0x6a548f8, size 0x54, virtual false, abstract: false, final false
  static inline int32_t tzcnt(uint64_t x);

  /// @brief Method uint2, addr 0x6a6076c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 uint2(::Unity::Mathematics::bool2 v);

  /// @brief Method uint2, addr 0x6a607e4, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 uint2(::Unity::Mathematics::double2 v);

  /// @brief Method uint2, addr 0x6a607a4, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 uint2(::Unity::Mathematics::float2 v);

  /// @brief Method uint2, addr 0x6a60788, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 uint2(::Unity::Mathematics::int2 v);

  /// @brief Method uint2, addr 0x6a60754, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 uint2(bool v);

  /// @brief Method uint2, addr 0x6a607cc, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 uint2(double_t v);

  /// @brief Method uint2, addr 0x6a6078c, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 uint2(float_t v);

  /// @brief Method uint2, addr 0x6a6077c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 uint2(int32_t v);

  /// @brief Method uint2, addr 0x6a60748, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 uint2(uint32_t v);

  /// @brief Method uint2, addr 0x6a60738, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 uint2(uint32_t x, uint32_t y);

  /// @brief Method uint2, addr 0x6a60744, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 uint2(::Unity::Mathematics::uint2 xy);

  /// @brief Method uint2x2, addr 0x6a60aa8, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 uint2x2(::Unity::Mathematics::uint2 c0, ::Unity::Mathematics::uint2 c1);

  /// @brief Method uint2x2, addr 0x6a60aac, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 uint2x2(uint32_t m00, uint32_t m01, uint32_t m10, uint32_t m11);

  /// @brief Method uint2x2, addr 0x6a60ae4, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 uint2x2(::Unity::Mathematics::bool2x2 v);

  /// @brief Method uint2x2, addr 0x6a60b90, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 uint2x2(::Unity::Mathematics::double2x2 v);

  /// @brief Method uint2x2, addr 0x6a60b34, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 uint2x2(::Unity::Mathematics::float2x2 v);

  /// @brief Method uint2x2, addr 0x6a60b14, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 uint2x2(::Unity::Mathematics::int2x2 v);

  /// @brief Method uint2x2, addr 0x6a60ad0, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 uint2x2(bool v);

  /// @brief Method uint2x2, addr 0x6a60b74, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 uint2x2(double_t v);

  /// @brief Method uint2x2, addr 0x6a60b18, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 uint2x2(float_t v);

  /// @brief Method uint2x2, addr 0x6a60b04, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 uint2x2(int32_t v);

  /// @brief Method uint2x2, addr 0x6a60ac0, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 uint2x2(uint32_t v);

  /// @brief Method uint2x3, addr 0x6a60c98, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x3 uint2x3(::Unity::Mathematics::uint2 c0, ::Unity::Mathematics::uint2 c1, ::Unity::Mathematics::uint2 c2);

  /// @brief Method uint2x3, addr 0x6a60ca4, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x3 uint2x3(uint32_t m00, uint32_t m01, uint32_t m02, uint32_t m10, uint32_t m11, uint32_t m12);

  /// @brief Method uint2x3, addr 0x6a60cf4, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x3 uint2x3(::Unity::Mathematics::bool2x3 v);

  /// @brief Method uint2x3, addr 0x6a60e2c, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x3 uint2x3(::Unity::Mathematics::double2x3 v);

  /// @brief Method uint2x3, addr 0x6a60d88, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x3 uint2x3(::Unity::Mathematics::float2x3 v);

  /// @brief Method uint2x3, addr 0x6a60d54, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x3 uint2x3(::Unity::Mathematics::int2x3 v);

  /// @brief Method uint2x3, addr 0x6a60cdc, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x3 uint2x3(bool v);

  /// @brief Method uint2x3, addr 0x6a60e0c, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x3 uint2x3(double_t v);

  /// @brief Method uint2x3, addr 0x6a60d68, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x3 uint2x3(float_t v);

  /// @brief Method uint2x3, addr 0x6a60d40, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x3 uint2x3(int32_t v);

  /// @brief Method uint2x3, addr 0x6a60cc8, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x3 uint2x3(uint32_t v);

  /// @brief Method uint2x4, addr 0x6a60fc4, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x4 uint2x4(::Unity::Mathematics::uint2 c0, ::Unity::Mathematics::uint2 c1, ::Unity::Mathematics::uint2 c2, ::Unity::Mathematics::uint2 c3);

  /// @brief Method uint2x4, addr 0x6a60fd0, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x4 uint2x4(uint32_t m00, uint32_t m01, uint32_t m02, uint32_t m03, uint32_t m10, uint32_t m11, uint32_t m12, uint32_t m13);

  /// @brief Method uint2x4, addr 0x6a61028, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x4 uint2x4(::Unity::Mathematics::bool2x4 v);

  /// @brief Method uint2x4, addr 0x6a611a8, size 0xac, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x4 uint2x4(::Unity::Mathematics::double2x4 v);

  /// @brief Method uint2x4, addr 0x6a610dc, size 0xac, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x4 uint2x4(::Unity::Mathematics::float2x4 v);

  /// @brief Method uint2x4, addr 0x6a610b0, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x4 uint2x4(::Unity::Mathematics::int2x4 v);

  /// @brief Method uint2x4, addr 0x6a61010, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x4 uint2x4(bool v);

  /// @brief Method uint2x4, addr 0x6a61188, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x4 uint2x4(double_t v);

  /// @brief Method uint2x4, addr 0x6a610bc, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x4 uint2x4(float_t v);

  /// @brief Method uint2x4, addr 0x6a6109c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x4 uint2x4(int32_t v);

  /// @brief Method uint2x4, addr 0x6a60ffc, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x4 uint2x4(uint32_t v);

  /// @brief Method uint3, addr 0x6a613fc, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 uint3(::Unity::Mathematics::bool3 v);

  /// @brief Method uint3, addr 0x6a61490, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 uint3(::Unity::Mathematics::double3 v);

  /// @brief Method uint3, addr 0x6a61440, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 uint3(::Unity::Mathematics::float3 v);

  /// @brief Method uint3, addr 0x6a61420, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 uint3(::Unity::Mathematics::int3 v);

  /// @brief Method uint3, addr 0x6a613e0, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 uint3(bool v);

  /// @brief Method uint3, addr 0x6a61478, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 uint3(double_t v);

  /// @brief Method uint3, addr 0x6a61428, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 uint3(float_t v);

  /// @brief Method uint3, addr 0x6a61414, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 uint3(int32_t v);

  /// @brief Method uint3, addr 0x6a613d4, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 uint3(uint32_t v);

  /// @brief Method uint3, addr 0x6a613a0, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 uint3(uint32_t x, uint32_t y, uint32_t z);

  /// @brief Method uint3, addr 0x6a613b0, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 uint3(uint32_t x, ::Unity::Mathematics::uint2 yz);

  /// @brief Method uint3, addr 0x6a613c4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 uint3(::Unity::Mathematics::uint2 xy, uint32_t z);

  /// @brief Method uint3, addr 0x6a613cc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 uint3(::Unity::Mathematics::uint3 xyz);

  /// @brief Method uint3x2, addr 0x6a6181c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 uint3x2(::Unity::Mathematics::uint3 c0, ::Unity::Mathematics::uint3 c1);

  /// @brief Method uint3x2, addr 0x6a61830, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 uint3x2(uint32_t m00, uint32_t m01, uint32_t m10, uint32_t m11, uint32_t m20, uint32_t m21);

  /// @brief Method uint3x2, addr 0x6a6187c, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 uint3x2(::Unity::Mathematics::bool3x2 v);

  /// @brief Method uint3x2, addr 0x6a619c4, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 uint3x2(::Unity::Mathematics::double3x2 v);

  /// @brief Method uint3x2, addr 0x6a61914, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 uint3x2(::Unity::Mathematics::float3x2 v);

  /// @brief Method uint3x2, addr 0x6a618c8, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 uint3x2(::Unity::Mathematics::int3x2 v);

  /// @brief Method uint3x2, addr 0x6a6185c, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 uint3x2(bool v);

  /// @brief Method uint3x2, addr 0x6a6199c, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 uint3x2(double_t v);

  /// @brief Method uint3x2, addr 0x6a618ec, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 uint3x2(float_t v);

  /// @brief Method uint3x2, addr 0x6a618ac, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 uint3x2(int32_t v);

  /// @brief Method uint3x2, addr 0x6a61840, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 uint3x2(uint32_t v);

  /// @brief Method uint3x3, addr 0x6a61b74, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x3 uint3x3(::Unity::Mathematics::uint3 c0, ::Unity::Mathematics::uint3 c1, ::Unity::Mathematics::uint3 c2);

  /// @brief Method uint3x3, addr 0x6a61b90, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x3 uint3x3(uint32_t m00, uint32_t m01, uint32_t m02, uint32_t m10, uint32_t m11, uint32_t m12, uint32_t m20, uint32_t m21, uint32_t m22);

  /// @brief Method uint3x3, addr 0x6a61bf8, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x3 uint3x3(::Unity::Mathematics::bool3x3 v);

  /// @brief Method uint3x3, addr 0x6a61dd0, size 0xcc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x3 uint3x3(::Unity::Mathematics::double3x3 v);

  /// @brief Method uint3x3, addr 0x6a61cd4, size 0xcc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x3 uint3x3(::Unity::Mathematics::float3x3 v);

  /// @brief Method uint3x3, addr 0x6a61c70, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x3 uint3x3(::Unity::Mathematics::int3x3 v);

  /// @brief Method uint3x3, addr 0x6a61bd0, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x3 uint3x3(bool v);

  /// @brief Method uint3x3, addr 0x6a61da0, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x3 uint3x3(double_t v);

  /// @brief Method uint3x3, addr 0x6a61ca4, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x3 uint3x3(float_t v);

  /// @brief Method uint3x3, addr 0x6a61c4c, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x3 uint3x3(int32_t v);

  /// @brief Method uint3x3, addr 0x6a61bac, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x3 uint3x3(uint32_t v);

  /// @brief Method uint3x4, addr 0x6a6202c, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 uint3x4(::Unity::Mathematics::uint3 c0, ::Unity::Mathematics::uint3 c1, ::Unity::Mathematics::uint3 c2, ::Unity::Mathematics::uint3 c3);

  /// @brief Method uint3x4, addr 0x6a62050, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 uint3x4(uint32_t m00, uint32_t m01, uint32_t m02, uint32_t m03, uint32_t m10, uint32_t m11, uint32_t m12, uint32_t m13, uint32_t m20, uint32_t m21,
                                                      uint32_t m22, uint32_t m23);

  /// @brief Method uint3x4, addr 0x6a620e0, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 uint3x4(::Unity::Mathematics::bool3x4 v);

  /// @brief Method uint3x4, addr 0x6a62340, size 0x10c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 uint3x4(::Unity::Mathematics::double3x4 v);

  /// @brief Method uint3x4, addr 0x6a621fc, size 0x10c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 uint3x4(::Unity::Mathematics::float3x4 v);

  /// @brief Method uint3x4, addr 0x6a62180, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 uint3x4(::Unity::Mathematics::int3x4 v);

  /// @brief Method uint3x4, addr 0x6a620b0, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 uint3x4(bool v);

  /// @brief Method uint3x4, addr 0x6a62308, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 uint3x4(double_t v);

  /// @brief Method uint3x4, addr 0x6a621c4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 uint3x4(float_t v);

  /// @brief Method uint3x4, addr 0x6a62154, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 uint3x4(int32_t v);

  /// @brief Method uint3x4, addr 0x6a62084, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 uint3x4(uint32_t v);

  /// @brief Method uint4, addr 0x6a626dc, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 uint4(::Unity::Mathematics::bool4 v);

  /// @brief Method uint4, addr 0x6a62788, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 uint4(::Unity::Mathematics::double4 v);

  /// @brief Method uint4, addr 0x6a6272c, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 uint4(::Unity::Mathematics::float4 v);

  /// @brief Method uint4, addr 0x6a6270c, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 uint4(::Unity::Mathematics::int4 v);

  /// @brief Method uint4, addr 0x6a626c4, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 uint4(bool v);

  /// @brief Method uint4, addr 0x6a6276c, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 uint4(double_t v);

  /// @brief Method uint4, addr 0x6a62710, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 uint4(float_t v);

  /// @brief Method uint4, addr 0x6a626fc, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 uint4(int32_t v);

  /// @brief Method uint4, addr 0x6a626b4, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 uint4(uint32_t v);

  /// @brief Method uint4, addr 0x6a62648, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 uint4(uint32_t x, uint32_t y, uint32_t z, uint32_t w);

  /// @brief Method uint4, addr 0x6a62660, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 uint4(uint32_t x, uint32_t y, ::Unity::Mathematics::uint2 zw);

  /// @brief Method uint4, addr 0x6a62670, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 uint4(uint32_t x, ::Unity::Mathematics::uint2 yz, uint32_t w);

  /// @brief Method uint4, addr 0x6a62684, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 uint4(uint32_t x, ::Unity::Mathematics::uint3 yzw);

  /// @brief Method uint4, addr 0x6a62698, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 uint4(::Unity::Mathematics::uint2 xy, uint32_t z, uint32_t w);

  /// @brief Method uint4, addr 0x6a626a4, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 uint4(::Unity::Mathematics::uint2 xy, ::Unity::Mathematics::uint2 zw);

  /// @brief Method uint4, addr 0x6a626a8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 uint4(::Unity::Mathematics::uint3 xyz, uint32_t w);

  /// @brief Method uint4, addr 0x6a626b0, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 uint4(::Unity::Mathematics::uint4 xyzw);

  /// @brief Method uint4x2, addr 0x6a62b5c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x2 uint4x2(::Unity::Mathematics::uint4 c0, ::Unity::Mathematics::uint4 c1);

  /// @brief Method uint4x2, addr 0x6a62b68, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x2 uint4x2(uint32_t m00, uint32_t m01, uint32_t m10, uint32_t m11, uint32_t m20, uint32_t m21, uint32_t m30, uint32_t m31);

  /// @brief Method uint4x2, addr 0x6a62ba8, size 0x5c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x2 uint4x2(::Unity::Mathematics::bool4x2 v);

  /// @brief Method uint4x2, addr 0x6a62d10, size 0xac, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x2 uint4x2(::Unity::Mathematics::double4x2 v);

  /// @brief Method uint4x2, addr 0x6a62c44, size 0xac, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x2 uint4x2(::Unity::Mathematics::float4x2 v);

  /// @brief Method uint4x2, addr 0x6a62c18, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x2 uint4x2(::Unity::Mathematics::int4x2 v);

  /// @brief Method uint4x2, addr 0x6a62b90, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x2 uint4x2(bool v);

  /// @brief Method uint4x2, addr 0x6a62cf0, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x2 uint4x2(double_t v);

  /// @brief Method uint4x2, addr 0x6a62c24, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x2 uint4x2(float_t v);

  /// @brief Method uint4x2, addr 0x6a62c04, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x2 uint4x2(int32_t v);

  /// @brief Method uint4x2, addr 0x6a62b7c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x2 uint4x2(uint32_t v);

  /// @brief Method uint4x3, addr 0x6a62f20, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 uint4x3(::Unity::Mathematics::uint4 c0, ::Unity::Mathematics::uint4 c1, ::Unity::Mathematics::uint4 c2);

  /// @brief Method uint4x3, addr 0x6a62f30, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 uint4x3(uint32_t m00, uint32_t m01, uint32_t m02, uint32_t m10, uint32_t m11, uint32_t m12, uint32_t m20, uint32_t m21, uint32_t m22, uint32_t m30,
                                                      uint32_t m31, uint32_t m32);

  /// @brief Method uint4x3, addr 0x6a62f98, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 uint4x3(::Unity::Mathematics::bool4x3 v);

  /// @brief Method uint4x3, addr 0x6a63184, size 0x100, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 uint4x3(::Unity::Mathematics::double4x3 v);

  /// @brief Method uint4x3, addr 0x6a63060, size 0x100, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 uint4x3(::Unity::Mathematics::float4x3 v);

  /// @brief Method uint4x3, addr 0x6a63028, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 uint4x3(::Unity::Mathematics::int4x3 v);

  /// @brief Method uint4x3, addr 0x6a62f7c, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 uint4x3(bool v);

  /// @brief Method uint4x3, addr 0x6a63160, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 uint4x3(double_t v);

  /// @brief Method uint4x3, addr 0x6a6303c, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 uint4x3(float_t v);

  /// @brief Method uint4x3, addr 0x6a63010, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 uint4x3(int32_t v);

  /// @brief Method uint4x3, addr 0x6a62f64, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 uint4x3(uint32_t v);

  /// @brief Method uint4x4, addr 0x6a63468, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x4 uint4x4(::Unity::Mathematics::uint4 c0, ::Unity::Mathematics::uint4 c1, ::Unity::Mathematics::uint4 c2, ::Unity::Mathematics::uint4 c3);

  /// @brief Method uint4x4, addr 0x6a6347c, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x4 uint4x4(uint32_t m00, uint32_t m01, uint32_t m02, uint32_t m03, uint32_t m10, uint32_t m11, uint32_t m12, uint32_t m13, uint32_t m20, uint32_t m21,
                                                      uint32_t m22, uint32_t m23, uint32_t m30, uint32_t m31, uint32_t m32, uint32_t m33);

  /// @brief Method uint4x4, addr 0x6a6350c, size 0x94, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x4 uint4x4(::Unity::Mathematics::bool4x4 v);

  /// @brief Method uint4x4, addr 0x6a63774, size 0x154, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x4 uint4x4(::Unity::Mathematics::double4x4 v);

  /// @brief Method uint4x4, addr 0x6a635f8, size 0x154, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x4 uint4x4(::Unity::Mathematics::float4x4 v);

  /// @brief Method uint4x4, addr 0x6a635bc, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x4 uint4x4(::Unity::Mathematics::int4x4 v);

  /// @brief Method uint4x4, addr 0x6a634ec, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x4 uint4x4(bool v);

  /// @brief Method uint4x4, addr 0x6a6374c, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x4 uint4x4(double_t v);

  /// @brief Method uint4x4, addr 0x6a635d0, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x4 uint4x4(float_t v);

  /// @brief Method uint4x4, addr 0x6a635a0, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x4 uint4x4(int32_t v);

  /// @brief Method uint4x4, addr 0x6a634d0, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x4 uint4x4(uint32_t v);

  /// @brief Method unitexp, addr 0x6a5edfc, size 0x13c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion unitexp(::Unity::Mathematics::quaternion q);

  /// @brief Method unitlog, addr 0x6a5f0d8, size 0x114, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion unitlog(::Unity::Mathematics::quaternion q);

  /// @brief Method unlerp, addr 0x6a447a8, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 unlerp(::Unity::Mathematics::double2 start, ::Unity::Mathematics::double2 end, ::Unity::Mathematics::double2 x);

  /// @brief Method unlerp, addr 0x6a447c4, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 unlerp(::Unity::Mathematics::double3 start, ::Unity::Mathematics::double3 end, ::Unity::Mathematics::double3 x);

  /// @brief Method unlerp, addr 0x6a447f8, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 unlerp(::Unity::Mathematics::double4 start, ::Unity::Mathematics::double4 end, ::Unity::Mathematics::double4 x);

  /// @brief Method unlerp, addr 0x6a44704, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 unlerp(::Unity::Mathematics::float2 start, ::Unity::Mathematics::float2 end, ::Unity::Mathematics::float2 x);

  /// @brief Method unlerp, addr 0x6a44720, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 unlerp(::Unity::Mathematics::float3 start, ::Unity::Mathematics::float3 end, ::Unity::Mathematics::float3 x);

  /// @brief Method unlerp, addr 0x6a44754, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 unlerp(::Unity::Mathematics::float4 start, ::Unity::Mathematics::float4 end, ::Unity::Mathematics::float4 x);

  /// @brief Method unlerp, addr 0x6a44798, size 0x10, virtual false, abstract: false, final false
  static inline double_t unlerp(double_t start, double_t end, double_t x);

  /// @brief Method unlerp, addr 0x6a446f4, size 0x10, virtual false, abstract: false, final false
  static inline float_t unlerp(float_t start, float_t end, float_t x);

  /// @brief Method unpackhi, addr 0x6a583b8, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 unpackhi(::Unity::Mathematics::double4 a, ::Unity::Mathematics::double4 b);

  /// @brief Method unpackhi, addr 0x6a583a4, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 unpackhi(::Unity::Mathematics::float4 a, ::Unity::Mathematics::float4 b);

  /// @brief Method unpacklo, addr 0x6a58394, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 unpacklo(::Unity::Mathematics::double4 a, ::Unity::Mathematics::double4 b);

  /// @brief Method unpacklo, addr 0x6a58384, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 unpacklo(::Unity::Mathematics::float4 a, ::Unity::Mathematics::float4 b);

  /// @brief Method up, addr 0x6a57034, size 0x10, virtual false, abstract: false, final false
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

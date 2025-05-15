#pragma once
// IWYU pragma private; include "Unity/Mathematics/math.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(math)
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
struct math_IntFloatUnion;
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
struct math_IntFloatUnion;
}
namespace Unity::Mathematics {
struct math_LongDoubleUnion;
}
// Write type traits
MARK_VAL_T(::Unity::Mathematics::math_RotationOrder);
MARK_VAL_T(::Unity::Mathematics::math_ShuffleComponent);
MARK_REF_PTR_T(::Unity::Mathematics::math);
MARK_VAL_T(::Unity::Mathematics::math_IntFloatUnion);
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

  // Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "",
  // def_value: None }]
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{9941};

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{0x1};

  /// @brief Field value__, offset: 0x0, size: 0x1, def value: None
  uint8_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::math_RotationOrder, value__) ==
                  0x0,
              "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<
                  ::Unity::Mathematics::math_RotationOrder, 0x1>,
              "Size mismatch!");

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

  // Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "",
  // def_value: None }]
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{9942};

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{0x1};

  /// @brief Field value__, offset: 0x0, size: 0x1, def value: None
  uint8_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::math_ShuffleComponent, value__) ==
                  0x0,
              "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<
                  ::Unity::Mathematics::math_ShuffleComponent, 0x1>,
              "Size mismatch!");

} // namespace Unity::Mathematics
// Dependencies
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.math/IntFloatUnion
struct CORDL_TYPE math_IntFloatUnion {
public:
  // Declarations
  /// @brief Field floatValue, offset 0x0, size 0x4
  __declspec(property(get = __cordl_internal_get_floatValue,
                      put =
                          __cordl_internal_set_floatValue)) float_t floatValue;

  /// @brief Field intValue, offset 0x0, size 0x4
  __declspec(property(get = __cordl_internal_get_intValue,
                      put = __cordl_internal_set_intValue)) int32_t intValue;

  constexpr float_t const &__cordl_internal_get_floatValue() const;

  constexpr float_t &__cordl_internal_get_floatValue();

  constexpr int32_t const &__cordl_internal_get_intValue() const;

  constexpr int32_t &__cordl_internal_get_intValue();

  constexpr void __cordl_internal_set_floatValue(float_t value);

  constexpr void __cordl_internal_set_intValue(int32_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr math_IntFloatUnion();

  // Ctor Parameters [CppParam { name: "intValue", ty: "int32_t", modifiers: "",
  // def_value: None }, CppParam { name: "floatValue", ty: "float_t", modifiers:
  // "", def_value: None }]
  constexpr math_IntFloatUnion(int32_t intValue, float_t floatValue) noexcept;

private:
  /// @brief Explicitly laid out type with union based offsets
  union {
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___intValue_padding[0x0];
      /// @brief Field intValue, offset: 0x0, size: 0x4, def value: None
      int32_t ___intValue;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___intValue_padding_forAlignment[0x0];
      /// @brief Field intValue, offset: 0x0, size: 0x4, def value: None
      int32_t ___intValue_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___floatValue_padding[0x0];
      /// @brief Field floatValue, offset: 0x0, size: 0x4, def value: None
      float_t ___floatValue;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___floatValue_padding_forAlignment[0x0];
      /// @brief Field floatValue, offset: 0x0, size: 0x4, def value: None
      float_t ___floatValue_forAlignment;
    };
  };

public:
  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{9943};

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{0x4};

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<
                  ::Unity::Mathematics::math_IntFloatUnion, 0x4>,
              "Size mismatch!");

} // namespace Unity::Mathematics
// Dependencies
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.math/LongDoubleUnion
struct CORDL_TYPE math_LongDoubleUnion {
public:
  // Declarations
  /// @brief Field doubleValue, offset 0x0, size 0x8
  __declspec(property(
      get = __cordl_internal_get_doubleValue,
      put = __cordl_internal_set_doubleValue)) double_t doubleValue;

  /// @brief Field longValue, offset 0x0, size 0x8
  __declspec(property(get = __cordl_internal_get_longValue,
                      put = __cordl_internal_set_longValue)) int64_t longValue;

  constexpr double_t const &__cordl_internal_get_doubleValue() const;

  constexpr double_t &__cordl_internal_get_doubleValue();

  constexpr int64_t const &__cordl_internal_get_longValue() const;

  constexpr int64_t &__cordl_internal_get_longValue();

  constexpr void __cordl_internal_set_doubleValue(double_t value);

  constexpr void __cordl_internal_set_longValue(int64_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr math_LongDoubleUnion();

  // Ctor Parameters [CppParam { name: "longValue", ty: "int64_t", modifiers:
  // "", def_value: None }, CppParam { name: "doubleValue", ty: "double_t",
  // modifiers: "", def_value: None }]
  constexpr math_LongDoubleUnion(int64_t longValue,
                                 double_t doubleValue) noexcept;

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{9944};

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{0x8};

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<
                  ::Unity::Mathematics::math_LongDoubleUnion, 0x8>,
              "Size mismatch!");

} // namespace Unity::Mathematics
// Dependencies System.Object
namespace Unity::Mathematics {
// Is value type: false
// CS Name: Unity.Mathematics.math
class CORDL_TYPE math : public ::System::Object {
public:
  // Declarations
  using IntFloatUnion = ::Unity::Mathematics::math_IntFloatUnion;

  using LongDoubleUnion = ::Unity::Mathematics::math_LongDoubleUnion;

  using RotationOrder = ::Unity::Mathematics::math_RotationOrder;

  using ShuffleComponent = ::Unity::Mathematics::math_ShuffleComponent;

  /// @brief Method RigidTransform, addr 0x464ffa8, size 0x14, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::RigidTransform
  RigidTransform(::Unity::Mathematics::quaternion rot,
                 ::Unity::Mathematics::float3 pos);

  /// @brief Method RigidTransform, addr 0x464ffbc, size 0x74, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::RigidTransform
  RigidTransform(::Unity::Mathematics::float3x3 rotation,
                 ::Unity::Mathematics::float3 translation);

  /// @brief Method RigidTransform, addr 0x4650030, size 0x74, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::RigidTransform
  RigidTransform(::Unity::Mathematics::float4x4 transform);

  /// @brief Method abs, addr 0x4636fac, size 0xc, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double2
  abs(::Unity::Mathematics::double2 x);

  /// @brief Method abs, addr 0x4636fb8, size 0x10, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double3
  abs(::Unity::Mathematics::double3 x);

  /// @brief Method abs, addr 0x4636fc8, size 0x14, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double4
  abs(::Unity::Mathematics::double4 x);

  /// @brief Method abs, addr 0x4636f74, size 0xc, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float2
  abs(::Unity::Mathematics::float2 x);

  /// @brief Method abs, addr 0x4636f80, size 0x10, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float3
  abs(::Unity::Mathematics::float3 x);

  /// @brief Method abs, addr 0x4636f90, size 0x14, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float4
  abs(::Unity::Mathematics::float4 x);

  /// @brief Method abs, addr 0x4636e8c, size 0x2c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int2 abs(::Unity::Mathematics::int2 x);

  /// @brief Method abs, addr 0x4636eb8, size 0x3c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int3 abs(::Unity::Mathematics::int3 x);

  /// @brief Method abs, addr 0x4636ef4, size 0x68, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int4 abs(::Unity::Mathematics::int4 x);

  /// @brief Method abs, addr 0x4636fa4, size 0x8, virtual false, abstract:
  /// false, final false
  static inline double_t abs(double_t x);

  /// @brief Method abs, addr 0x4636f6c, size 0x8, virtual false, abstract:
  /// false, final false
  static inline float_t abs(float_t x);

  /// @brief Method abs, addr 0x4636e7c, size 0x10, virtual false, abstract:
  /// false, final false
  static inline int32_t abs(int32_t x);

  /// @brief Method abs, addr 0x4636f5c, size 0x10, virtual false, abstract:
  /// false, final false
  static inline int64_t abs(int64_t x);

  /// @brief Method acos, addr 0x4639ad8, size 0xa4, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double2
  acos(::Unity::Mathematics::double2 x);

  /// @brief Method acos, addr 0x4639b7c, size 0xec, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double3
  acos(::Unity::Mathematics::double3 x);

  /// @brief Method acos, addr 0x4639c68, size 0x12c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double4
  acos(::Unity::Mathematics::double4 x);

  /// @brief Method acos, addr 0x46397c0, size 0xa4, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float2
  acos(::Unity::Mathematics::float2 x);

  /// @brief Method acos, addr 0x4639864, size 0xec, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float3
  acos(::Unity::Mathematics::float3 x);

  /// @brief Method acos, addr 0x4639950, size 0x12c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float4
  acos(::Unity::Mathematics::float4 x);

  /// @brief Method acos, addr 0x4639a7c, size 0x5c, virtual false, abstract:
  /// false, final false
  static inline double_t acos(double_t x);

  /// @brief Method acos, addr 0x463975c, size 0x64, virtual false, abstract:
  /// false, final false
  static inline float_t acos(float_t x);

  /// @brief Method all, addr 0x46428fc, size 0x14, virtual false, abstract:
  /// false, final false
  static inline bool all(::Unity::Mathematics::bool2 x);

  /// @brief Method all, addr 0x4642910, size 0x18, virtual false, abstract:
  /// false, final false
  static inline bool all(::Unity::Mathematics::bool3 x);

  /// @brief Method all, addr 0x4642928, size 0x14, virtual false, abstract:
  /// false, final false
  static inline bool all(::Unity::Mathematics::bool4 x);

  /// @brief Method all, addr 0x4642a84, size 0x18, virtual false, abstract:
  /// false, final false
  static inline bool all(::Unity::Mathematics::double2 x);

  /// @brief Method all, addr 0x4642a9c, size 0x20, virtual false, abstract:
  /// false, final false
  static inline bool all(::Unity::Mathematics::double3 x);

  /// @brief Method all, addr 0x4642abc, size 0x28, virtual false, abstract:
  /// false, final false
  static inline bool all(::Unity::Mathematics::double4 x);

  /// @brief Method all, addr 0x4642a24, size 0x18, virtual false, abstract:
  /// false, final false
  static inline bool all(::Unity::Mathematics::float2 x);

  /// @brief Method all, addr 0x4642a3c, size 0x20, virtual false, abstract:
  /// false, final false
  static inline bool all(::Unity::Mathematics::float3 x);

  /// @brief Method all, addr 0x4642a5c, size 0x28, virtual false, abstract:
  /// false, final false
  static inline bool all(::Unity::Mathematics::float4 x);

  /// @brief Method all, addr 0x464293c, size 0x1c, virtual false, abstract:
  /// false, final false
  static inline bool all(::Unity::Mathematics::int2 x);

  /// @brief Method all, addr 0x4642958, size 0x20, virtual false, abstract:
  /// false, final false
  static inline bool all(::Unity::Mathematics::int3 x);

  /// @brief Method all, addr 0x4642978, size 0x38, virtual false, abstract:
  /// false, final false
  static inline bool all(::Unity::Mathematics::int4 x);

  /// @brief Method all, addr 0x46429b0, size 0x1c, virtual false, abstract:
  /// false, final false
  static inline bool all(::Unity::Mathematics::uint2 x);

  /// @brief Method all, addr 0x46429cc, size 0x20, virtual false, abstract:
  /// false, final false
  static inline bool all(::Unity::Mathematics::uint3 x);

  /// @brief Method all, addr 0x46429ec, size 0x38, virtual false, abstract:
  /// false, final false
  static inline bool all(::Unity::Mathematics::uint4 x);

  /// @brief Method any, addr 0x4642750, size 0x10, virtual false, abstract:
  /// false, final false
  static inline bool any(::Unity::Mathematics::bool2 x);

  /// @brief Method any, addr 0x4642760, size 0x14, virtual false, abstract:
  /// false, final false
  static inline bool any(::Unity::Mathematics::bool3 x);

  /// @brief Method any, addr 0x4642774, size 0x10, virtual false, abstract:
  /// false, final false
  static inline bool any(::Unity::Mathematics::bool4 x);

  /// @brief Method any, addr 0x464289c, size 0x18, virtual false, abstract:
  /// false, final false
  static inline bool any(::Unity::Mathematics::double2 x);

  /// @brief Method any, addr 0x46428b4, size 0x20, virtual false, abstract:
  /// false, final false
  static inline bool any(::Unity::Mathematics::double3 x);

  /// @brief Method any, addr 0x46428d4, size 0x28, virtual false, abstract:
  /// false, final false
  static inline bool any(::Unity::Mathematics::double4 x);

  /// @brief Method any, addr 0x464283c, size 0x18, virtual false, abstract:
  /// false, final false
  static inline bool any(::Unity::Mathematics::float2 x);

  /// @brief Method any, addr 0x4642854, size 0x20, virtual false, abstract:
  /// false, final false
  static inline bool any(::Unity::Mathematics::float3 x);

  /// @brief Method any, addr 0x4642874, size 0x28, virtual false, abstract:
  /// false, final false
  static inline bool any(::Unity::Mathematics::float4 x);

  /// @brief Method any, addr 0x4642784, size 0x1c, virtual false, abstract:
  /// false, final false
  static inline bool any(::Unity::Mathematics::int2 x);

  /// @brief Method any, addr 0x46427a0, size 0x20, virtual false, abstract:
  /// false, final false
  static inline bool any(::Unity::Mathematics::int3 x);

  /// @brief Method any, addr 0x46427c0, size 0x20, virtual false, abstract:
  /// false, final false
  static inline bool any(::Unity::Mathematics::int4 x);

  /// @brief Method any, addr 0x46427e0, size 0x1c, virtual false, abstract:
  /// false, final false
  static inline bool any(::Unity::Mathematics::uint2 x);

  /// @brief Method any, addr 0x46427fc, size 0x20, virtual false, abstract:
  /// false, final false
  static inline bool any(::Unity::Mathematics::uint3 x);

  /// @brief Method any, addr 0x464281c, size 0x20, virtual false, abstract:
  /// false, final false
  static inline bool any(::Unity::Mathematics::uint4 x);

  /// @brief Method asdouble, addr 0x4635060, size 0x8, virtual false, abstract:
  /// false, final false
  static inline double_t asdouble(int64_t x);

  /// @brief Method asdouble, addr 0x4635068, size 0x8, virtual false, abstract:
  /// false, final false
  static inline double_t asdouble(uint64_t x);

  /// @brief Method asfloat, addr 0x4634fb0, size 0x10, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float2
  asfloat(::Unity::Mathematics::int2 x);

  /// @brief Method asfloat, addr 0x4634ff8, size 0x10, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float2
  asfloat(::Unity::Mathematics::uint2 x);

  /// @brief Method asfloat, addr 0x4634fc0, size 0x14, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float3
  asfloat(::Unity::Mathematics::int3 x);

  /// @brief Method asfloat, addr 0x4635008, size 0x14, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float3
  asfloat(::Unity::Mathematics::uint3 x);

  /// @brief Method asfloat, addr 0x4634fd4, size 0x1c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float4
  asfloat(::Unity::Mathematics::int4 x);

  /// @brief Method asfloat, addr 0x463501c, size 0x1c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float4
  asfloat(::Unity::Mathematics::uint4 x);

  /// @brief Method asfloat, addr 0x4634fa8, size 0x8, virtual false, abstract:
  /// false, final false
  static inline float_t asfloat(int32_t x);

  /// @brief Method asfloat, addr 0x4634ff0, size 0x8, virtual false, abstract:
  /// false, final false
  static inline float_t asfloat(uint32_t x);

  /// @brief Method asin, addr 0x463ad80, size 0xa4, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double2
  asin(::Unity::Mathematics::double2 x);

  /// @brief Method asin, addr 0x463ae24, size 0xec, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double3
  asin(::Unity::Mathematics::double3 x);

  /// @brief Method asin, addr 0x463af10, size 0x12c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double4
  asin(::Unity::Mathematics::double4 x);

  /// @brief Method asin, addr 0x463aa68, size 0xa4, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float2
  asin(::Unity::Mathematics::float2 x);

  /// @brief Method asin, addr 0x463ab0c, size 0xec, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float3
  asin(::Unity::Mathematics::float3 x);

  /// @brief Method asin, addr 0x463abf8, size 0x12c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float4
  asin(::Unity::Mathematics::float4 x);

  /// @brief Method asin, addr 0x463ad24, size 0x5c, virtual false, abstract:
  /// false, final false
  static inline double_t asin(double_t x);

  /// @brief Method asin, addr 0x463aa04, size 0x64, virtual false, abstract:
  /// false, final false
  static inline float_t asin(float_t x);

  /// @brief Method asint, addr 0x4634ef4, size 0x10, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int2
  asint(::Unity::Mathematics::float2 x);

  /// @brief Method asint, addr 0x4634edc, size 0x4, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int2 asint(::Unity::Mathematics::uint2 x);

  /// @brief Method asint, addr 0x4634f04, size 0x14, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int3
  asint(::Unity::Mathematics::float3 x);

  /// @brief Method asint, addr 0x4634ee0, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int3 asint(::Unity::Mathematics::uint3 x);

  /// @brief Method asint, addr 0x4634f18, size 0x1c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int4
  asint(::Unity::Mathematics::float4 x);

  /// @brief Method asint, addr 0x4634ee8, size 0x4, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int4 asint(::Unity::Mathematics::uint4 x);

  /// @brief Method asint, addr 0x4634eec, size 0x8, virtual false, abstract:
  /// false, final false
  static inline int32_t asint(float_t x);

  /// @brief Method asint, addr 0x4634ed8, size 0x4, virtual false, abstract:
  /// false, final false
  static inline int32_t asint(uint32_t x);

  /// @brief Method aslong, addr 0x4634f94, size 0x8, virtual false, abstract:
  /// false, final false
  static inline int64_t aslong(double_t x);

  /// @brief Method aslong, addr 0x4634f90, size 0x4, virtual false, abstract:
  /// false, final false
  static inline int64_t aslong(uint64_t x);

  /// @brief Method asuint, addr 0x4634f50, size 0x10, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint2
  asuint(::Unity::Mathematics::float2 x);

  /// @brief Method asuint, addr 0x4634f38, size 0x4, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint2
  asuint(::Unity::Mathematics::int2 x);

  /// @brief Method asuint, addr 0x4634f60, size 0x14, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint3
  asuint(::Unity::Mathematics::float3 x);

  /// @brief Method asuint, addr 0x4634f3c, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint3
  asuint(::Unity::Mathematics::int3 x);

  /// @brief Method asuint, addr 0x4634f74, size 0x1c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint4
  asuint(::Unity::Mathematics::float4 x);

  /// @brief Method asuint, addr 0x4634f44, size 0x4, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint4
  asuint(::Unity::Mathematics::int4 x);

  /// @brief Method asuint, addr 0x4634f48, size 0x8, virtual false, abstract:
  /// false, final false
  static inline uint32_t asuint(float_t x);

  /// @brief Method asuint, addr 0x4634f34, size 0x4, virtual false, abstract:
  /// false, final false
  static inline uint32_t asuint(int32_t x);

  /// @brief Method asulong, addr 0x4634fa0, size 0x8, virtual false, abstract:
  /// false, final false
  static inline uint64_t asulong(double_t x);

  /// @brief Method asulong, addr 0x4634f9c, size 0x4, virtual false, abstract:
  /// false, final false
  static inline uint64_t asulong(int64_t x);

  /// @brief Method atan, addr 0x4638118, size 0xa4, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double2
  atan(::Unity::Mathematics::double2 x);

  /// @brief Method atan, addr 0x46381bc, size 0xec, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double3
  atan(::Unity::Mathematics::double3 x);

  /// @brief Method atan, addr 0x46382a8, size 0x12c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double4
  atan(::Unity::Mathematics::double4 x);

  /// @brief Method atan, addr 0x4637e00, size 0xa4, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float2
  atan(::Unity::Mathematics::float2 x);

  /// @brief Method atan, addr 0x4637ea4, size 0xec, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float3
  atan(::Unity::Mathematics::float3 x);

  /// @brief Method atan, addr 0x4637f90, size 0x12c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float4
  atan(::Unity::Mathematics::float4 x);

  /// @brief Method atan, addr 0x46380bc, size 0x5c, virtual false, abstract:
  /// false, final false
  static inline double_t atan(double_t x);

  /// @brief Method atan, addr 0x4637d9c, size 0x64, virtual false, abstract:
  /// false, final false
  static inline float_t atan(float_t x);

  /// @brief Method atan2, addr 0x46387c8, size 0xbc, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double2
  atan2(::Unity::Mathematics::double2 y, ::Unity::Mathematics::double2 x);

  /// @brief Method atan2, addr 0x4638884, size 0x10c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double3
  atan2(::Unity::Mathematics::double3 y, ::Unity::Mathematics::double3 x);

  /// @brief Method atan2, addr 0x4638990, size 0x15c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double4
  atan2(::Unity::Mathematics::double4 y, ::Unity::Mathematics::double4 x);

  /// @brief Method atan2, addr 0x4638440, size 0xbc, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float2
  atan2(::Unity::Mathematics::float2 y, ::Unity::Mathematics::float2 x);

  /// @brief Method atan2, addr 0x46384fc, size 0x10c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float3
  atan2(::Unity::Mathematics::float3 y, ::Unity::Mathematics::float3 x);

  /// @brief Method atan2, addr 0x4638608, size 0x15c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float4
  atan2(::Unity::Mathematics::float4 y, ::Unity::Mathematics::float4 x);

  /// @brief Method atan2, addr 0x4638764, size 0x64, virtual false, abstract:
  /// false, final false
  static inline double_t atan2(double_t y, double_t x);

  /// @brief Method atan2, addr 0x46383d4, size 0x6c, virtual false, abstract:
  /// false, final false
  static inline float_t atan2(float_t y, float_t x);

  /// @brief Method back, addr 0x46478f4, size 0x10, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float3 back();

  /// @brief Method bitmask, addr 0x4635038, size 0x28, virtual false, abstract:
  /// false, final false
  static inline int32_t bitmask(::Unity::Mathematics::bool4 value);

  /// @brief Method bool2, addr 0x4627598, size 0x18, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::bool2 bool2(bool v);

  /// @brief Method bool2, addr 0x4627574, size 0x18, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::bool2 bool2(bool x, bool y);

  /// @brief Method bool2, addr 0x462758c, size 0xc, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::bool2
  bool2(::Unity::Mathematics::bool2 xy);

  /// @brief Method bool2x2, addr 0x46278b8, size 0x10, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::bool2x2
  bool2x2(::Unity::Mathematics::bool2 c0, ::Unity::Mathematics::bool2 c1);

  /// @brief Method bool2x2, addr 0x46278c8, size 0x24, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::bool2x2 bool2x2(bool m00, bool m01,
                                                      bool m10, bool m11);

  /// @brief Method bool2x2, addr 0x46278ec, size 0x18, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::bool2x2 bool2x2(bool v);

  /// @brief Method bool2x3, addr 0x4627a1c, size 0x14, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::bool2x3
  bool2x3(::Unity::Mathematics::bool2 c0, ::Unity::Mathematics::bool2 c1,
          ::Unity::Mathematics::bool2 c2);

  /// @brief Method bool2x3, addr 0x4627a30, size 0x34, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::bool2x3
  bool2x3(bool m00, bool m01, bool m02, bool m10, bool m11, bool m12);

  /// @brief Method bool2x3, addr 0x4627a64, size 0x1c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::bool2x3 bool2x3(bool v);

  /// @brief Method bool2x4, addr 0x4627c2c, size 0x18, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::bool2x4
  bool2x4(::Unity::Mathematics::bool2 c0, ::Unity::Mathematics::bool2 c1,
          ::Unity::Mathematics::bool2 c2, ::Unity::Mathematics::bool2 c3);

  /// @brief Method bool2x4, addr 0x4627c44, size 0x44, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::bool2x4 bool2x4(bool m00, bool m01,
                                                      bool m02, bool m03,
                                                      bool m10, bool m11,
                                                      bool m12, bool m13);

  /// @brief Method bool2x4, addr 0x4627c88, size 0x20, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::bool2x4 bool2x4(bool v);

  /// @brief Method bool3, addr 0x4627f3c, size 0x1c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::bool3 bool3(bool v);

  /// @brief Method bool3, addr 0x4627ed8, size 0x24, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::bool3 bool3(bool x, bool y, bool z);

  /// @brief Method bool3, addr 0x4627efc, size 0x14, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::bool3
  bool3(bool x, ::Unity::Mathematics::bool2 yz);

  /// @brief Method bool3, addr 0x4627f10, size 0x1c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::bool3
  bool3(::Unity::Mathematics::bool2 xy, bool z);

  /// @brief Method bool3, addr 0x4627f2c, size 0x10, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::bool3
  bool3(::Unity::Mathematics::bool3 xyz);

  /// @brief Method bool3x2, addr 0x46282a4, size 0xc, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::bool3x2
  bool3x2(::Unity::Mathematics::bool3 c0, ::Unity::Mathematics::bool3 c1);

  /// @brief Method bool3x2, addr 0x46282b0, size 0x54, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::bool3x2
  bool3x2(bool m00, bool m01, bool m10, bool m11, bool m20, bool m21);

  /// @brief Method bool3x2, addr 0x4628304, size 0x1c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::bool3x2 bool3x2(bool v);

  /// @brief Method bool3x3, addr 0x46284ac, size 0x34, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::bool3x3
  bool3x3(::Unity::Mathematics::bool3 c0, ::Unity::Mathematics::bool3 c1,
          ::Unity::Mathematics::bool3 c2);

  /// @brief Method bool3x3, addr 0x46284e0, size 0x7c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::bool3x3
  bool3x3(bool m00, bool m01, bool m02, bool m10, bool m11, bool m12, bool m20,
          bool m21, bool m22);

  /// @brief Method bool3x3, addr 0x462855c, size 0x40, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::bool3x3 bool3x3(bool v);

  /// @brief Method bool3x4, addr 0x4628824, size 0x40, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::bool3x4
  bool3x4(::Unity::Mathematics::bool3 c0, ::Unity::Mathematics::bool3 c1,
          ::Unity::Mathematics::bool3 c2, ::Unity::Mathematics::bool3 c3);

  /// @brief Method bool3x4, addr 0x4628864, size 0xac, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::bool3x4
  bool3x4(bool m00, bool m01, bool m02, bool m03, bool m10, bool m11, bool m12,
          bool m13, bool m20, bool m21, bool m22, bool m23);

  /// @brief Method bool3x4, addr 0x4628910, size 0x48, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::bool3x4 bool3x4(bool v);

  /// @brief Method bool4, addr 0x4628db0, size 0x10, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::bool4 bool4(bool v);

  /// @brief Method bool4, addr 0x4628ca8, size 0x34, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::bool4 bool4(bool x, bool y, bool z,
                                                  bool w);

  /// @brief Method bool4, addr 0x4628cdc, size 0x24, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::bool4
  bool4(bool x, bool y, ::Unity::Mathematics::bool2 zw);

  /// @brief Method bool4, addr 0x4628d00, size 0x24, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::bool4
  bool4(bool x, ::Unity::Mathematics::bool2 yz, bool w);

  /// @brief Method bool4, addr 0x4628d24, size 0x1c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::bool4
  bool4(bool x, ::Unity::Mathematics::bool3 yzw);

  /// @brief Method bool4, addr 0x4628d40, size 0x2c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::bool4
  bool4(::Unity::Mathematics::bool2 xy, bool z, bool w);

  /// @brief Method bool4, addr 0x4628d6c, size 0x18, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::bool4
  bool4(::Unity::Mathematics::bool2 xy, ::Unity::Mathematics::bool2 zw);

  /// @brief Method bool4, addr 0x4628d84, size 0x20, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::bool4
  bool4(::Unity::Mathematics::bool3 xyz, bool w);

  /// @brief Method bool4, addr 0x4628da4, size 0xc, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::bool4
  bool4(::Unity::Mathematics::bool4 xyzw);

  /// @brief Method bool4x2, addr 0x4629120, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::bool4x2
  bool4x2(::Unity::Mathematics::bool4 c0, ::Unity::Mathematics::bool4 c1);

  /// @brief Method bool4x2, addr 0x4629128, size 0x5c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::bool4x2 bool4x2(bool m00, bool m01,
                                                      bool m10, bool m11,
                                                      bool m20, bool m21,
                                                      bool m30, bool m31);

  /// @brief Method bool4x2, addr 0x4629184, size 0x14, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::bool4x2 bool4x2(bool v);

  /// @brief Method bool4x3, addr 0x4629394, size 0x10, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::bool4x3
  bool4x3(::Unity::Mathematics::bool4 c0, ::Unity::Mathematics::bool4 c1,
          ::Unity::Mathematics::bool4 c2);

  /// @brief Method bool4x3, addr 0x46293a4, size 0x90, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::bool4x3
  bool4x3(bool m00, bool m01, bool m02, bool m10, bool m11, bool m12, bool m20,
          bool m21, bool m22, bool m30, bool m31, bool m32);

  /// @brief Method bool4x3, addr 0x4629434, size 0x14, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::bool4x3 bool4x3(bool v);

  /// @brief Method bool4x4, addr 0x4629750, size 0x10, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::bool4x4
  bool4x4(::Unity::Mathematics::bool4 c0, ::Unity::Mathematics::bool4 c1,
          ::Unity::Mathematics::bool4 c2, ::Unity::Mathematics::bool4 c3);

  /// @brief Method bool4x4, addr 0x4629760, size 0xd0, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::bool4x4
  bool4x4(bool m00, bool m01, bool m02, bool m03, bool m10, bool m11, bool m12,
          bool m13, bool m20, bool m21, bool m22, bool m23, bool m30, bool m31,
          bool m32, bool m33);

  /// @brief Method bool4x4, addr 0x4629830, size 0x18, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::bool4x4 bool4x4(bool v);

  /// @brief Method ceil, addr 0x463b8c0, size 0x90, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double2
  ceil(::Unity::Mathematics::double2 x);

  /// @brief Method ceil, addr 0x463b950, size 0xcc, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double3
  ceil(::Unity::Mathematics::double3 x);

  /// @brief Method ceil, addr 0x463ba1c, size 0x100, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double4
  ceil(::Unity::Mathematics::double4 x);

  /// @brief Method ceil, addr 0x463b608, size 0x90, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float2
  ceil(::Unity::Mathematics::float2 x);

  /// @brief Method ceil, addr 0x463b698, size 0xcc, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float3
  ceil(::Unity::Mathematics::float3 x);

  /// @brief Method ceil, addr 0x463b764, size 0x100, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float4
  ceil(::Unity::Mathematics::float4 x);

  /// @brief Method ceil, addr 0x463b864, size 0x5c, virtual false, abstract:
  /// false, final false
  static inline double_t ceil(double_t x);

  /// @brief Method ceil, addr 0x463b5ac, size 0x5c, virtual false, abstract:
  /// false, final false
  static inline float_t ceil(float_t x);

  /// @brief Method ceillog2, addr 0x4646084, size 0x84, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::int2
  ceillog2(::Unity::Mathematics::int2 x);

  /// @brief Method ceillog2, addr 0x4646304, size 0x84, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::int2
  ceillog2(::Unity::Mathematics::uint2 x);

  /// @brief Method ceillog2, addr 0x4646108, size 0xc0, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::int3
  ceillog2(::Unity::Mathematics::int3 x);

  /// @brief Method ceillog2, addr 0x4646388, size 0xc0, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::int3
  ceillog2(::Unity::Mathematics::uint3 x);

  /// @brief Method ceillog2, addr 0x46461c8, size 0x100, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::int4
  ceillog2(::Unity::Mathematics::int4 x);

  /// @brief Method ceillog2, addr 0x4646448, size 0x100, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::int4
  ceillog2(::Unity::Mathematics::uint4 x);

  /// @brief Method ceillog2, addr 0x4646048, size 0x3c, virtual false,
  /// abstract: false, final false
  static inline int32_t ceillog2(int32_t x);

  /// @brief Method ceillog2, addr 0x46462c8, size 0x3c, virtual false,
  /// abstract: false, final false
  static inline int32_t ceillog2(uint32_t x);

  /// @brief Method ceilpow2, addr 0x4645b30, size 0x90, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::int2
  ceilpow2(::Unity::Mathematics::int2 x);

  /// @brief Method ceilpow2, addr 0x4645bc0, size 0xac, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::int3
  ceilpow2(::Unity::Mathematics::int3 x);

  /// @brief Method ceilpow2, addr 0x4645c6c, size 0x114, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::int4
  ceilpow2(::Unity::Mathematics::int4 x);

  /// @brief Method ceilpow2, addr 0x4645da0, size 0x90, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::uint2
  ceilpow2(::Unity::Mathematics::uint2 x);

  /// @brief Method ceilpow2, addr 0x4645e30, size 0xb4, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::uint3
  ceilpow2(::Unity::Mathematics::uint3 x);

  /// @brief Method ceilpow2, addr 0x4645ee4, size 0x11c, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::uint4
  ceilpow2(::Unity::Mathematics::uint4 x);

  /// @brief Method ceilpow2, addr 0x4645b10, size 0x20, virtual false,
  /// abstract: false, final false
  static inline int32_t ceilpow2(int32_t x);

  /// @brief Method ceilpow2, addr 0x4646000, size 0x24, virtual false,
  /// abstract: false, final false
  static inline int64_t ceilpow2(int64_t x);

  /// @brief Method ceilpow2, addr 0x4645d80, size 0x20, virtual false,
  /// abstract: false, final false
  static inline uint32_t ceilpow2(uint32_t x);

  /// @brief Method ceilpow2, addr 0x4646024, size 0x24, virtual false,
  /// abstract: false, final false
  static inline uint64_t ceilpow2(uint64_t x);

  /// @brief Method clamp, addr 0x463694c, size 0x58, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double2
  clamp(::Unity::Mathematics::double2 x, ::Unity::Mathematics::double2 a,
        ::Unity::Mathematics::double2 b);

  /// @brief Method clamp, addr 0x46369a4, size 0x88, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double3
  clamp(::Unity::Mathematics::double3 x, ::Unity::Mathematics::double3 a,
        ::Unity::Mathematics::double3 b);

  /// @brief Method clamp, addr 0x4636a2c, size 0xb0, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double4
  clamp(::Unity::Mathematics::double4 x, ::Unity::Mathematics::double4 a,
        ::Unity::Mathematics::double4 b);

  /// @brief Method clamp, addr 0x463678c, size 0x58, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float2
  clamp(::Unity::Mathematics::float2 x, ::Unity::Mathematics::float2 a,
        ::Unity::Mathematics::float2 b);

  /// @brief Method clamp, addr 0x46367e4, size 0x88, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float3
  clamp(::Unity::Mathematics::float3 x, ::Unity::Mathematics::float3 a,
        ::Unity::Mathematics::float3 b);

  /// @brief Method clamp, addr 0x463686c, size 0xb0, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float4
  clamp(::Unity::Mathematics::float4 x, ::Unity::Mathematics::float4 a,
        ::Unity::Mathematics::float4 b);

  /// @brief Method clamp, addr 0x4636560, size 0x34, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int2 clamp(::Unity::Mathematics::int2 x,
                                                 ::Unity::Mathematics::int2 a,
                                                 ::Unity::Mathematics::int2 b);

  /// @brief Method clamp, addr 0x4636594, size 0x48, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int3 clamp(::Unity::Mathematics::int3 x,
                                                 ::Unity::Mathematics::int3 a,
                                                 ::Unity::Mathematics::int3 b);

  /// @brief Method clamp, addr 0x46365dc, size 0x64, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int4 clamp(::Unity::Mathematics::int4 x,
                                                 ::Unity::Mathematics::int4 a,
                                                 ::Unity::Mathematics::int4 b);

  /// @brief Method clamp, addr 0x4636654, size 0x34, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint2
  clamp(::Unity::Mathematics::uint2 x, ::Unity::Mathematics::uint2 a,
        ::Unity::Mathematics::uint2 b);

  /// @brief Method clamp, addr 0x4636688, size 0x48, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint3
  clamp(::Unity::Mathematics::uint3 x, ::Unity::Mathematics::uint3 a,
        ::Unity::Mathematics::uint3 b);

  /// @brief Method clamp, addr 0x46366d0, size 0x64, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint4
  clamp(::Unity::Mathematics::uint4 x, ::Unity::Mathematics::uint4 a,
        ::Unity::Mathematics::uint4 b);

  /// @brief Method clamp, addr 0x463691c, size 0x30, virtual false, abstract:
  /// false, final false
  static inline double_t clamp(double_t x, double_t a, double_t b);

  /// @brief Method clamp, addr 0x463675c, size 0x30, virtual false, abstract:
  /// false, final false
  static inline float_t clamp(float_t x, float_t a, float_t b);

  /// @brief Method clamp, addr 0x463654c, size 0x14, virtual false, abstract:
  /// false, final false
  static inline int32_t clamp(int32_t x, int32_t a, int32_t b);

  /// @brief Method clamp, addr 0x4636734, size 0x14, virtual false, abstract:
  /// false, final false
  static inline int64_t clamp(int64_t x, int64_t a, int64_t b);

  /// @brief Method clamp, addr 0x4636640, size 0x14, virtual false, abstract:
  /// false, final false
  static inline uint32_t clamp(uint32_t x, uint32_t a, uint32_t b);

  /// @brief Method clamp, addr 0x4636748, size 0x14, virtual false, abstract:
  /// false, final false
  static inline uint64_t clamp(uint64_t x, uint64_t a, uint64_t b);

  /// @brief Method cmax, addr 0x4646df0, size 0x1c, virtual false, abstract:
  /// false, final false
  static inline double_t cmax(::Unity::Mathematics::double2 x);

  /// @brief Method cmax, addr 0x4646e0c, size 0x30, virtual false, abstract:
  /// false, final false
  static inline double_t cmax(::Unity::Mathematics::double3 x);

  /// @brief Method cmax, addr 0x4646e3c, size 0x44, virtual false, abstract:
  /// false, final false
  static inline double_t cmax(::Unity::Mathematics::double4 x);

  /// @brief Method cmax, addr 0x4646d60, size 0x1c, virtual false, abstract:
  /// false, final false
  static inline float_t cmax(::Unity::Mathematics::float2 x);

  /// @brief Method cmax, addr 0x4646d7c, size 0x30, virtual false, abstract:
  /// false, final false
  static inline float_t cmax(::Unity::Mathematics::float3 x);

  /// @brief Method cmax, addr 0x4646dac, size 0x44, virtual false, abstract:
  /// false, final false
  static inline float_t cmax(::Unity::Mathematics::float4 x);

  /// @brief Method cmax, addr 0x4646cc8, size 0x10, virtual false, abstract:
  /// false, final false
  static inline int32_t cmax(::Unity::Mathematics::int2 x);

  /// @brief Method cmax, addr 0x4646cd8, size 0x18, virtual false, abstract:
  /// false, final false
  static inline int32_t cmax(::Unity::Mathematics::int3 x);

  /// @brief Method cmax, addr 0x4646cf0, size 0x24, virtual false, abstract:
  /// false, final false
  static inline int32_t cmax(::Unity::Mathematics::int4 x);

  /// @brief Method cmax, addr 0x4646d14, size 0x10, virtual false, abstract:
  /// false, final false
  static inline uint32_t cmax(::Unity::Mathematics::uint2 x);

  /// @brief Method cmax, addr 0x4646d24, size 0x18, virtual false, abstract:
  /// false, final false
  static inline uint32_t cmax(::Unity::Mathematics::uint3 x);

  /// @brief Method cmax, addr 0x4646d3c, size 0x24, virtual false, abstract:
  /// false, final false
  static inline uint32_t cmax(::Unity::Mathematics::uint4 x);

  /// @brief Method cmin, addr 0x4646c38, size 0x1c, virtual false, abstract:
  /// false, final false
  static inline double_t cmin(::Unity::Mathematics::double2 x);

  /// @brief Method cmin, addr 0x4646c54, size 0x30, virtual false, abstract:
  /// false, final false
  static inline double_t cmin(::Unity::Mathematics::double3 x);

  /// @brief Method cmin, addr 0x4646c84, size 0x44, virtual false, abstract:
  /// false, final false
  static inline double_t cmin(::Unity::Mathematics::double4 x);

  /// @brief Method cmin, addr 0x4646ba8, size 0x1c, virtual false, abstract:
  /// false, final false
  static inline float_t cmin(::Unity::Mathematics::float2 x);

  /// @brief Method cmin, addr 0x4646bc4, size 0x30, virtual false, abstract:
  /// false, final false
  static inline float_t cmin(::Unity::Mathematics::float3 x);

  /// @brief Method cmin, addr 0x4646bf4, size 0x44, virtual false, abstract:
  /// false, final false
  static inline float_t cmin(::Unity::Mathematics::float4 x);

  /// @brief Method cmin, addr 0x4646b10, size 0x10, virtual false, abstract:
  /// false, final false
  static inline int32_t cmin(::Unity::Mathematics::int2 x);

  /// @brief Method cmin, addr 0x4646b20, size 0x18, virtual false, abstract:
  /// false, final false
  static inline int32_t cmin(::Unity::Mathematics::int3 x);

  /// @brief Method cmin, addr 0x4646b38, size 0x24, virtual false, abstract:
  /// false, final false
  static inline int32_t cmin(::Unity::Mathematics::int4 x);

  /// @brief Method cmin, addr 0x4646b5c, size 0x10, virtual false, abstract:
  /// false, final false
  static inline uint32_t cmin(::Unity::Mathematics::uint2 x);

  /// @brief Method cmin, addr 0x4646b6c, size 0x18, virtual false, abstract:
  /// false, final false
  static inline uint32_t cmin(::Unity::Mathematics::uint3 x);

  /// @brief Method cmin, addr 0x4646b84, size 0x24, virtual false, abstract:
  /// false, final false
  static inline uint32_t cmin(::Unity::Mathematics::uint4 x);

  /// @brief Method compress, addr 0x4646ff0, size 0x58, virtual false,
  /// abstract: false, final false
  static inline int32_t compress(::cordl_internals::Ptr<float_t> output,
                                 int32_t index,
                                 ::Unity::Mathematics::float4 val,
                                 ::Unity::Mathematics::bool4 mask);

  /// @brief Method compress, addr 0x4646f30, size 0x60, virtual false,
  /// abstract: false, final false
  static inline int32_t compress(::cordl_internals::Ptr<int32_t> output,
                                 int32_t index, ::Unity::Mathematics::int4 val,
                                 ::Unity::Mathematics::bool4 mask);

  /// @brief Method compress, addr 0x4646f90, size 0x60, virtual false,
  /// abstract: false, final false
  static inline int32_t compress(::cordl_internals::Ptr<uint32_t> output,
                                 int32_t index, ::Unity::Mathematics::uint4 val,
                                 ::Unity::Mathematics::bool4 mask);

  /// @brief Method conjugate, addr 0x464ef9c, size 0x10, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::quaternion
  conjugate(::Unity::Mathematics::quaternion q);

  /// @brief Method cos, addr 0x4638e68, size 0xa4, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double2
  cos(::Unity::Mathematics::double2 x);

  /// @brief Method cos, addr 0x4638f0c, size 0xec, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double3
  cos(::Unity::Mathematics::double3 x);

  /// @brief Method cos, addr 0x4638ff8, size 0x12c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double4
  cos(::Unity::Mathematics::double4 x);

  /// @brief Method cos, addr 0x4638b50, size 0xa4, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float2
  cos(::Unity::Mathematics::float2 x);

  /// @brief Method cos, addr 0x4638bf4, size 0xec, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float3
  cos(::Unity::Mathematics::float3 x);

  /// @brief Method cos, addr 0x4638ce0, size 0x12c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float4
  cos(::Unity::Mathematics::float4 x);

  /// @brief Method cos, addr 0x4638e0c, size 0x5c, virtual false, abstract:
  /// false, final false
  static inline double_t cos(double_t x);

  /// @brief Method cos, addr 0x4638aec, size 0x64, virtual false, abstract:
  /// false, final false
  static inline float_t cos(float_t x);

  /// @brief Method cosh, addr 0x46394a0, size 0xa4, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double2
  cosh(::Unity::Mathematics::double2 x);

  /// @brief Method cosh, addr 0x4639544, size 0xec, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double3
  cosh(::Unity::Mathematics::double3 x);

  /// @brief Method cosh, addr 0x4639630, size 0x12c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double4
  cosh(::Unity::Mathematics::double4 x);

  /// @brief Method cosh, addr 0x4639188, size 0xa4, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float2
  cosh(::Unity::Mathematics::float2 x);

  /// @brief Method cosh, addr 0x463922c, size 0xec, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float3
  cosh(::Unity::Mathematics::float3 x);

  /// @brief Method cosh, addr 0x4639318, size 0x12c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float4
  cosh(::Unity::Mathematics::float4 x);

  /// @brief Method cosh, addr 0x4639444, size 0x5c, virtual false, abstract:
  /// false, final false
  static inline double_t cosh(double_t x);

  /// @brief Method cosh, addr 0x4639124, size 0x64, virtual false, abstract:
  /// false, final false
  static inline float_t cosh(float_t x);

  /// @brief Method countbits, addr 0x464419c, size 0x90, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::int2
  countbits(::Unity::Mathematics::int2 x);

  /// @brief Method countbits, addr 0x464440c, size 0x90, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::int2
  countbits(::Unity::Mathematics::uint2 x);

  /// @brief Method countbits, addr 0x464422c, size 0xbc, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::int3
  countbits(::Unity::Mathematics::int3 x);

  /// @brief Method countbits, addr 0x464449c, size 0xb8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::int3
  countbits(::Unity::Mathematics::uint3 x);

  /// @brief Method countbits, addr 0x46442e8, size 0xf0, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::int4
  countbits(::Unity::Mathematics::int4 x);

  /// @brief Method countbits, addr 0x4644554, size 0xf0, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::int4
  countbits(::Unity::Mathematics::uint4 x);

  /// @brief Method countbits, addr 0x4644168, size 0x34, virtual false,
  /// abstract: false, final false
  static inline int32_t countbits(int32_t x);

  /// @brief Method countbits, addr 0x4644678, size 0x34, virtual false,
  /// abstract: false, final false
  static inline int32_t countbits(int64_t x);

  /// @brief Method countbits, addr 0x46443d8, size 0x34, virtual false,
  /// abstract: false, final false
  static inline int32_t countbits(uint32_t x);

  /// @brief Method countbits, addr 0x4644644, size 0x34, virtual false,
  /// abstract: false, final false
  static inline int32_t countbits(uint64_t x);

  /// @brief Method cross, addr 0x4642218, size 0x28, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double3
  cross(::Unity::Mathematics::double3 x, ::Unity::Mathematics::double3 y);

  /// @brief Method cross, addr 0x46421f0, size 0x28, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float3
  cross(::Unity::Mathematics::float3 x, ::Unity::Mathematics::float3 y);

  /// @brief Method csum, addr 0x4646f0c, size 0x8, virtual false, abstract:
  /// false, final false
  static inline double_t csum(::Unity::Mathematics::double2 x);

  /// @brief Method csum, addr 0x4646f14, size 0xc, virtual false, abstract:
  /// false, final false
  static inline double_t csum(::Unity::Mathematics::double3 x);

  /// @brief Method csum, addr 0x4646f20, size 0x10, virtual false, abstract:
  /// false, final false
  static inline double_t csum(::Unity::Mathematics::double4 x);

  /// @brief Method csum, addr 0x4646ee8, size 0x8, virtual false, abstract:
  /// false, final false
  static inline float_t csum(::Unity::Mathematics::float2 x);

  /// @brief Method csum, addr 0x4646ef0, size 0xc, virtual false, abstract:
  /// false, final false
  static inline float_t csum(::Unity::Mathematics::float3 x);

  /// @brief Method csum, addr 0x4646efc, size 0x10, virtual false, abstract:
  /// false, final false
  static inline float_t csum(::Unity::Mathematics::float4 x);

  /// @brief Method csum, addr 0x4646e80, size 0xc, virtual false, abstract:
  /// false, final false
  static inline int32_t csum(::Unity::Mathematics::int2 x);

  /// @brief Method csum, addr 0x4646e8c, size 0x10, virtual false, abstract:
  /// false, final false
  static inline int32_t csum(::Unity::Mathematics::int3 x);

  /// @brief Method csum, addr 0x4646e9c, size 0x18, virtual false, abstract:
  /// false, final false
  static inline int32_t csum(::Unity::Mathematics::int4 x);

  /// @brief Method csum, addr 0x4646eb4, size 0xc, virtual false, abstract:
  /// false, final false
  static inline uint32_t csum(::Unity::Mathematics::uint2 x);

  /// @brief Method csum, addr 0x4646ec0, size 0x10, virtual false, abstract:
  /// false, final false
  static inline uint32_t csum(::Unity::Mathematics::uint3 x);

  /// @brief Method csum, addr 0x4646ed0, size 0x18, virtual false, abstract:
  /// false, final false
  static inline uint32_t csum(::Unity::Mathematics::uint4 x);

  /// @brief Method degrees, addr 0x4646ac8, size 0x14, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double2
  degrees(::Unity::Mathematics::double2 x);

  /// @brief Method degrees, addr 0x4646adc, size 0x18, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double3
  degrees(::Unity::Mathematics::double3 x);

  /// @brief Method degrees, addr 0x4646af4, size 0x1c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double4
  degrees(::Unity::Mathematics::double4 x);

  /// @brief Method degrees, addr 0x4646a70, size 0x14, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float2
  degrees(::Unity::Mathematics::float2 x);

  /// @brief Method degrees, addr 0x4646a84, size 0x18, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float3
  degrees(::Unity::Mathematics::float3 x);

  /// @brief Method degrees, addr 0x4646a9c, size 0x1c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float4
  degrees(::Unity::Mathematics::float4 x);

  /// @brief Method degrees, addr 0x4646ab8, size 0x10, virtual false, abstract:
  /// false, final false
  static inline double_t degrees(double_t x);

  /// @brief Method degrees, addr 0x4646a60, size 0x10, virtual false, abstract:
  /// false, final false
  static inline float_t degrees(float_t x);

  /// @brief Method determinant, addr 0x462a1fc, size 0x10, virtual false,
  /// abstract: false, final false
  static inline double_t determinant(::Unity::Mathematics::double2x2 m);

  /// @brief Method determinant, addr 0x462b500, size 0x50, virtual false,
  /// abstract: false, final false
  static inline double_t determinant(::Unity::Mathematics::double3x3 m);

  /// @brief Method determinant, addr 0x462d45c, size 0xd8, virtual false,
  /// abstract: false, final false
  static inline double_t determinant(::Unity::Mathematics::double4x4 m);

  /// @brief Method determinant, addr 0x462de08, size 0x10, virtual false,
  /// abstract: false, final false
  static inline float_t determinant(::Unity::Mathematics::float2x2 m);

  /// @brief Method determinant, addr 0x462ef00, size 0x50, virtual false,
  /// abstract: false, final false
  static inline float_t determinant(::Unity::Mathematics::float3x3 m);

  /// @brief Method determinant, addr 0x4630a04, size 0xd8, virtual false,
  /// abstract: false, final false
  static inline float_t determinant(::Unity::Mathematics::float4x4 m);

  /// @brief Method determinant, addr 0x4631e24, size 0x18, virtual false,
  /// abstract: false, final false
  static inline int32_t determinant(::Unity::Mathematics::int2x2 m);

  /// @brief Method determinant, addr 0x4633154, size 0x48, virtual false,
  /// abstract: false, final false
  static inline int32_t determinant(::Unity::Mathematics::int3x3 m);

  /// @brief Method determinant, addr 0x4634be4, size 0xc4, virtual false,
  /// abstract: false, final false
  static inline int32_t determinant(::Unity::Mathematics::int4x4 m);

  /// @brief Method distance, addr 0x4641f38, size 0x7c, virtual false,
  /// abstract: false, final false
  static inline double_t distance(::Unity::Mathematics::double2 x,
                                  ::Unity::Mathematics::double2 y);

  /// @brief Method distance, addr 0x4641fb4, size 0x98, virtual false,
  /// abstract: false, final false
  static inline double_t distance(::Unity::Mathematics::double3 x,
                                  ::Unity::Mathematics::double3 y);

  /// @brief Method distance, addr 0x464204c, size 0xb4, virtual false,
  /// abstract: false, final false
  static inline double_t distance(::Unity::Mathematics::double4 x,
                                  ::Unity::Mathematics::double4 y);

  /// @brief Method distance, addr 0x4641f30, size 0x8, virtual false, abstract:
  /// false, final false
  static inline double_t distance(double_t x, double_t y);

  /// @brief Method distance, addr 0x4641d68, size 0x7c, virtual false,
  /// abstract: false, final false
  static inline float_t distance(::Unity::Mathematics::float2 x,
                                 ::Unity::Mathematics::float2 y);

  /// @brief Method distance, addr 0x4641de4, size 0x98, virtual false,
  /// abstract: false, final false
  static inline float_t distance(::Unity::Mathematics::float3 x,
                                 ::Unity::Mathematics::float3 y);

  /// @brief Method distance, addr 0x4641e7c, size 0xb4, virtual false,
  /// abstract: false, final false
  static inline float_t distance(::Unity::Mathematics::float4 x,
                                 ::Unity::Mathematics::float4 y);

  /// @brief Method distance, addr 0x4641d60, size 0x8, virtual false, abstract:
  /// false, final false
  static inline float_t distance(float_t x, float_t y);

  /// @brief Method distancesq, addr 0x4642184, size 0x18, virtual false,
  /// abstract: false, final false
  static inline double_t distancesq(::Unity::Mathematics::double2 x,
                                    ::Unity::Mathematics::double2 y);

  /// @brief Method distancesq, addr 0x464219c, size 0x24, virtual false,
  /// abstract: false, final false
  static inline double_t distancesq(::Unity::Mathematics::double3 x,
                                    ::Unity::Mathematics::double3 y);

  /// @brief Method distancesq, addr 0x46421c0, size 0x30, virtual false,
  /// abstract: false, final false
  static inline double_t distancesq(::Unity::Mathematics::double4 x,
                                    ::Unity::Mathematics::double4 y);

  /// @brief Method distancesq, addr 0x4642178, size 0xc, virtual false,
  /// abstract: false, final false
  static inline double_t distancesq(double_t x, double_t y);

  /// @brief Method distancesq, addr 0x464210c, size 0x18, virtual false,
  /// abstract: false, final false
  static inline float_t distancesq(::Unity::Mathematics::float2 x,
                                   ::Unity::Mathematics::float2 y);

  /// @brief Method distancesq, addr 0x4642124, size 0x24, virtual false,
  /// abstract: false, final false
  static inline float_t distancesq(::Unity::Mathematics::float3 x,
                                   ::Unity::Mathematics::float3 y);

  /// @brief Method distancesq, addr 0x4642148, size 0x30, virtual false,
  /// abstract: false, final false
  static inline float_t distancesq(::Unity::Mathematics::float4 x,
                                   ::Unity::Mathematics::float4 y);

  /// @brief Method distancesq, addr 0x4642100, size 0xc, virtual false,
  /// abstract: false, final false
  static inline float_t distancesq(float_t x, float_t y);

  /// @brief Method dot, addr 0x46370e4, size 0x10, virtual false, abstract:
  /// false, final false
  static inline double_t dot(::Unity::Mathematics::double2 x,
                             ::Unity::Mathematics::double2 y);

  /// @brief Method dot, addr 0x46370f4, size 0x18, virtual false, abstract:
  /// false, final false
  static inline double_t dot(::Unity::Mathematics::double3 x,
                             ::Unity::Mathematics::double3 y);

  /// @brief Method dot, addr 0x463710c, size 0x20, virtual false, abstract:
  /// false, final false
  static inline double_t dot(::Unity::Mathematics::double4 x,
                             ::Unity::Mathematics::double4 y);

  /// @brief Method dot, addr 0x46370dc, size 0x8, virtual false, abstract:
  /// false, final false
  static inline double_t dot(double_t x, double_t y);

  /// @brief Method dot, addr 0x464eff0, size 0x20, virtual false, abstract:
  /// false, final false
  static inline float_t dot(::Unity::Mathematics::quaternion a,
                            ::Unity::Mathematics::quaternion b);

  /// @brief Method dot, addr 0x4637094, size 0x10, virtual false, abstract:
  /// false, final false
  static inline float_t dot(::Unity::Mathematics::float2 x,
                            ::Unity::Mathematics::float2 y);

  /// @brief Method dot, addr 0x46370a4, size 0x18, virtual false, abstract:
  /// false, final false
  static inline float_t dot(::Unity::Mathematics::float3 x,
                            ::Unity::Mathematics::float3 y);

  /// @brief Method dot, addr 0x46370bc, size 0x20, virtual false, abstract:
  /// false, final false
  static inline float_t dot(::Unity::Mathematics::float4 x,
                            ::Unity::Mathematics::float4 y);

  /// @brief Method dot, addr 0x463708c, size 0x8, virtual false, abstract:
  /// false, final false
  static inline float_t dot(float_t x, float_t y);

  /// @brief Method dot, addr 0x4636fe4, size 0x14, virtual false, abstract:
  /// false, final false
  static inline int32_t dot(::Unity::Mathematics::int2 x,
                            ::Unity::Mathematics::int2 y);

  /// @brief Method dot, addr 0x4636ff8, size 0x18, virtual false, abstract:
  /// false, final false
  static inline int32_t dot(::Unity::Mathematics::int3 x,
                            ::Unity::Mathematics::int3 y);

  /// @brief Method dot, addr 0x4637010, size 0x24, virtual false, abstract:
  /// false, final false
  static inline int32_t dot(::Unity::Mathematics::int4 x,
                            ::Unity::Mathematics::int4 y);

  /// @brief Method dot, addr 0x4636fdc, size 0x8, virtual false, abstract:
  /// false, final false
  static inline int32_t dot(int32_t x, int32_t y);

  /// @brief Method dot, addr 0x463703c, size 0x14, virtual false, abstract:
  /// false, final false
  static inline uint32_t dot(::Unity::Mathematics::uint2 x,
                             ::Unity::Mathematics::uint2 y);

  /// @brief Method dot, addr 0x4637050, size 0x18, virtual false, abstract:
  /// false, final false
  static inline uint32_t dot(::Unity::Mathematics::uint3 x,
                             ::Unity::Mathematics::uint3 y);

  /// @brief Method dot, addr 0x4637068, size 0x24, virtual false, abstract:
  /// false, final false
  static inline uint32_t dot(::Unity::Mathematics::uint4 x,
                             ::Unity::Mathematics::uint4 y);

  /// @brief Method dot, addr 0x4637034, size 0x8, virtual false, abstract:
  /// false, final false
  static inline uint32_t dot(uint32_t x, uint32_t y);

  /// @brief Method double2, addr 0x4629c38, size 0x1c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double2
  double2(::Unity::Mathematics::bool2 v);

  /// @brief Method double2, addr 0x4629d80, size 0xc, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double2
  double2(::Unity::Mathematics::float2 v);

  /// @brief Method double2, addr 0x4629c8c, size 0x68, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double2
  double2(::Unity::Mathematics::half v);

  /// @brief Method double2, addr 0x4629cf4, size 0x80, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double2
  double2(::Unity::Mathematics::half2 v);

  /// @brief Method double2, addr 0x4629c60, size 0x10, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double2
  double2(::Unity::Mathematics::int2 v);

  /// @brief Method double2, addr 0x4629c7c, size 0x10, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double2
  double2(::Unity::Mathematics::uint2 v);

  /// @brief Method double2, addr 0x4629c20, size 0x18, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double2 double2(bool v);

  /// @brief Method double2, addr 0x4629c18, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double2 double2(double_t v);

  /// @brief Method double2, addr 0x4629d74, size 0xc, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double2 double2(float_t v);

  /// @brief Method double2, addr 0x4629c54, size 0xc, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double2 double2(int32_t v);

  /// @brief Method double2, addr 0x4629c70, size 0xc, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double2 double2(uint32_t v);

  /// @brief Method double2, addr 0x4629c10, size 0x4, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double2 double2(double_t x, double_t y);

  /// @brief Method double2, addr 0x4629c14, size 0x4, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double2
  double2(::Unity::Mathematics::double2 xy);

  /// @brief Method double2x2, addr 0x462a0c0, size 0x4, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double2x2
  double2x2(::Unity::Mathematics::double2 c0, ::Unity::Mathematics::double2 c1);

  /// @brief Method double2x2, addr 0x462a0c4, size 0x10, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double2x2
  double2x2(double_t m00, double_t m01, double_t m10, double_t m11);

  /// @brief Method double2x2, addr 0x462a104, size 0x2c, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double2x2
  double2x2(::Unity::Mathematics::bool2x2 v);

  /// @brief Method double2x2, addr 0x462a1a4, size 0x14, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double2x2
  double2x2(::Unity::Mathematics::float2x2 v);

  /// @brief Method double2x2, addr 0x462a144, size 0x1c, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double2x2
  double2x2(::Unity::Mathematics::int2x2 v);

  /// @brief Method double2x2, addr 0x462a174, size 0x1c, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double2x2
  double2x2(::Unity::Mathematics::uint2x2 v);

  /// @brief Method double2x2, addr 0x462a0e4, size 0x20, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 double2x2(bool v);

  /// @brief Method double2x2, addr 0x462a0d4, size 0x10, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 double2x2(double_t v);

  /// @brief Method double2x2, addr 0x462a190, size 0x14, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 double2x2(float_t v);

  /// @brief Method double2x2, addr 0x462a130, size 0x14, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 double2x2(int32_t v);

  /// @brief Method double2x2, addr 0x462a160, size 0x14, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 double2x2(uint32_t v);

  /// @brief Method double2x3, addr 0x462a304, size 0x10, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double2x3
  double2x3(::Unity::Mathematics::double2 c0, ::Unity::Mathematics::double2 c1,
            ::Unity::Mathematics::double2 c2);

  /// @brief Method double2x3, addr 0x462a314, size 0x10, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double2x3
  double2x3(double_t m00, double_t m01, double_t m02, double_t m10,
            double_t m11, double_t m12);

  /// @brief Method double2x3, addr 0x462a354, size 0x48, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double2x3
  double2x3(::Unity::Mathematics::bool2x3 v);

  /// @brief Method double2x3, addr 0x462a440, size 0x20, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double2x3
  double2x3(::Unity::Mathematics::float2x3 v);

  /// @brief Method double2x3, addr 0x462a3b0, size 0x34, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double2x3
  double2x3(::Unity::Mathematics::int2x3 v);

  /// @brief Method double2x3, addr 0x462a3f8, size 0x34, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double2x3
  double2x3(::Unity::Mathematics::uint2x3 v);

  /// @brief Method double2x3, addr 0x462a334, size 0x20, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 double2x3(bool v);

  /// @brief Method double2x3, addr 0x462a324, size 0x10, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 double2x3(double_t v);

  /// @brief Method double2x3, addr 0x462a42c, size 0x14, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 double2x3(float_t v);

  /// @brief Method double2x3, addr 0x462a39c, size 0x14, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 double2x3(int32_t v);

  /// @brief Method double2x3, addr 0x462a3e4, size 0x14, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 double2x3(uint32_t v);

  /// @brief Method double2x4, addr 0x462a5bc, size 0x14, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double2x4
  double2x4(::Unity::Mathematics::double2 c0, ::Unity::Mathematics::double2 c1,
            ::Unity::Mathematics::double2 c2, ::Unity::Mathematics::double2 c3);

  /// @brief Method double2x4, addr 0x462a5d0, size 0x14, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double2x4
  double2x4(double_t m00, double_t m01, double_t m02, double_t m03,
            double_t m10, double_t m11, double_t m12, double_t m13);

  /// @brief Method double2x4, addr 0x462a61c, size 0x5c, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double2x4
  double2x4(::Unity::Mathematics::bool2x4 v);

  /// @brief Method double2x4, addr 0x462a748, size 0x24, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double2x4
  double2x4(::Unity::Mathematics::float2x4 v);

  /// @brief Method double2x4, addr 0x462a690, size 0x44, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double2x4
  double2x4(::Unity::Mathematics::int2x4 v);

  /// @brief Method double2x4, addr 0x462a6ec, size 0x44, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double2x4
  double2x4(::Unity::Mathematics::uint2x4 v);

  /// @brief Method double2x4, addr 0x462a5f8, size 0x24, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 double2x4(bool v);

  /// @brief Method double2x4, addr 0x462a5e4, size 0x14, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 double2x4(double_t v);

  /// @brief Method double2x4, addr 0x462a730, size 0x18, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 double2x4(float_t v);

  /// @brief Method double2x4, addr 0x462a678, size 0x18, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 double2x4(int32_t v);

  /// @brief Method double2x4, addr 0x462a6d4, size 0x18, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 double2x4(uint32_t v);

  /// @brief Method double3, addr 0x462a964, size 0x24, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double3
  double3(::Unity::Mathematics::bool3 v);

  /// @brief Method double3, addr 0x462ab44, size 0x10, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double3
  double3(::Unity::Mathematics::float3 v);

  /// @brief Method double3, addr 0x462a9d0, size 0x6c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double3
  double3(::Unity::Mathematics::half v);

  /// @brief Method double3, addr 0x462aa3c, size 0xf8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double3
  double3(::Unity::Mathematics::half3 v);

  /// @brief Method double3, addr 0x462a998, size 0x14, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double3
  double3(::Unity::Mathematics::int3 v);

  /// @brief Method double3, addr 0x462a9bc, size 0x14, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double3
  double3(::Unity::Mathematics::uint3 v);

  /// @brief Method double3, addr 0x462a948, size 0x1c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double3 double3(bool v);

  /// @brief Method double3, addr 0x462a93c, size 0xc, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double3 double3(double_t v);

  /// @brief Method double3, addr 0x462ab34, size 0x10, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double3 double3(float_t v);

  /// @brief Method double3, addr 0x462a988, size 0x10, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double3 double3(int32_t v);

  /// @brief Method double3, addr 0x462a9ac, size 0x10, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double3 double3(uint32_t v);

  /// @brief Method double3, addr 0x462a92c, size 0x4, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double3 double3(double_t x, double_t y,
                                                      double_t z);

  /// @brief Method double3, addr 0x462a930, size 0x4, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double3
  double3(double_t x, ::Unity::Mathematics::double2 yz);

  /// @brief Method double3, addr 0x462a934, size 0x4, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double3
  double3(::Unity::Mathematics::double2 xy, double_t z);

  /// @brief Method double3, addr 0x462a938, size 0x4, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double3
  double3(::Unity::Mathematics::double3 xyz);

  /// @brief Method double3x2, addr 0x462af2c, size 0x10, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double3x2
  double3x2(::Unity::Mathematics::double3 c0, ::Unity::Mathematics::double3 c1);

  /// @brief Method double3x2, addr 0x462af3c, size 0x10, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double3x2
  double3x2(double_t m00, double_t m01, double_t m10, double_t m11,
            double_t m20, double_t m21);

  /// @brief Method double3x2, addr 0x462af7c, size 0x48, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double3x2
  double3x2(::Unity::Mathematics::bool3x2 v);

  /// @brief Method double3x2, addr 0x462b068, size 0x20, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double3x2
  double3x2(::Unity::Mathematics::float3x2 v);

  /// @brief Method double3x2, addr 0x462afd8, size 0x34, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double3x2
  double3x2(::Unity::Mathematics::int3x2 v);

  /// @brief Method double3x2, addr 0x462b020, size 0x34, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double3x2
  double3x2(::Unity::Mathematics::uint3x2 v);

  /// @brief Method double3x2, addr 0x462af5c, size 0x20, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double3x2 double3x2(bool v);

  /// @brief Method double3x2, addr 0x462af4c, size 0x10, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double3x2 double3x2(double_t v);

  /// @brief Method double3x2, addr 0x462b054, size 0x14, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double3x2 double3x2(float_t v);

  /// @brief Method double3x2, addr 0x462afc4, size 0x14, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double3x2 double3x2(int32_t v);

  /// @brief Method double3x2, addr 0x462b00c, size 0x14, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double3x2 double3x2(uint32_t v);

  /// @brief Method double3x3, addr 0x462b1dc, size 0x20, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double3x3
  double3x3(::Unity::Mathematics::double3 c0, ::Unity::Mathematics::double3 c1,
            ::Unity::Mathematics::double3 c2);

  /// @brief Method double3x3, addr 0x462b1fc, size 0x1c, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double3x3
  double3x3(double_t m00, double_t m01, double_t m02, double_t m10,
            double_t m11, double_t m12, double_t m20, double_t m21,
            double_t m22);

  /// @brief Method double3x3, addr 0x462b258, size 0x80, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double3x3
  double3x3(::Unity::Mathematics::bool3x3 v);

  /// @brief Method double3x3, addr 0x462b3cc, size 0x30, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double3x3
  double3x3(::Unity::Mathematics::float3x3 v);

  /// @brief Method double3x3, addr 0x462b2f4, size 0x50, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double3x3
  double3x3(::Unity::Mathematics::int3x3 v);

  /// @brief Method double3x3, addr 0x462b360, size 0x50, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double3x3
  double3x3(::Unity::Mathematics::uint3x3 v);

  /// @brief Method double3x3, addr 0x462b230, size 0x28, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 double3x3(bool v);

  /// @brief Method double3x3, addr 0x462b218, size 0x18, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 double3x3(double_t v);

  /// @brief Method double3x3, addr 0x462b3b0, size 0x1c, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 double3x3(float_t v);

  /// @brief Method double3x3, addr 0x462b2d8, size 0x1c, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 double3x3(int32_t v);

  /// @brief Method double3x3, addr 0x462b344, size 0x1c, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 double3x3(uint32_t v);

  /// @brief Method double3x4, addr 0x462b70c, size 0x30, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double3x4
  double3x4(::Unity::Mathematics::double3 c0, ::Unity::Mathematics::double3 c1,
            ::Unity::Mathematics::double3 c2, ::Unity::Mathematics::double3 c3);

  /// @brief Method double3x4, addr 0x462b73c, size 0x24, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double3x4
  double3x4(double_t m00, double_t m01, double_t m02, double_t m03,
            double_t m10, double_t m11, double_t m12, double_t m13,
            double_t m20, double_t m21, double_t m22, double_t m23);

  /// @brief Method double3x4, addr 0x462b7a8, size 0x9c, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double3x4
  double3x4(::Unity::Mathematics::bool3x4 v);

  /// @brief Method double3x4, addr 0x462b96c, size 0x34, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double3x4
  double3x4(::Unity::Mathematics::float3x4 v);

  /// @brief Method double3x4, addr 0x462b864, size 0x64, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double3x4
  double3x4(::Unity::Mathematics::int3x4 v);

  /// @brief Method double3x4, addr 0x462b8e8, size 0x64, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double3x4
  double3x4(::Unity::Mathematics::uint3x4 v);

  /// @brief Method double3x4, addr 0x462b77c, size 0x2c, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 double3x4(bool v);

  /// @brief Method double3x4, addr 0x462b760, size 0x1c, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 double3x4(double_t v);

  /// @brief Method double3x4, addr 0x462b94c, size 0x20, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 double3x4(float_t v);

  /// @brief Method double3x4, addr 0x462b844, size 0x20, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 double3x4(int32_t v);

  /// @brief Method double3x4, addr 0x462b8c8, size 0x20, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 double3x4(uint32_t v);

  /// @brief Method double4, addr 0x462bce4, size 0x2c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double4
  double4(::Unity::Mathematics::bool4 v);

  /// @brief Method double4, addr 0x462bf38, size 0x14, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double4
  double4(::Unity::Mathematics::float4 v);

  /// @brief Method double4, addr 0x462bd70, size 0x70, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double4
  double4(::Unity::Mathematics::half v);

  /// @brief Method double4, addr 0x462bde0, size 0x144, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double4
  double4(::Unity::Mathematics::half4 v);

  /// @brief Method double4, addr 0x462bd24, size 0x1c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double4
  double4(::Unity::Mathematics::int4 v);

  /// @brief Method double4, addr 0x462bd54, size 0x1c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double4
  double4(::Unity::Mathematics::uint4 v);

  /// @brief Method double4, addr 0x462bcc4, size 0x20, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double4 double4(bool v);

  /// @brief Method double4, addr 0x462bcb4, size 0x10, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double4 double4(double_t v);

  /// @brief Method double4, addr 0x462bf24, size 0x14, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double4 double4(float_t v);

  /// @brief Method double4, addr 0x462bd10, size 0x14, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double4 double4(int32_t v);

  /// @brief Method double4, addr 0x462bd40, size 0x14, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double4 double4(uint32_t v);

  /// @brief Method double4, addr 0x462bc94, size 0x4, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double4 double4(double_t x, double_t y,
                                                      double_t z, double_t w);

  /// @brief Method double4, addr 0x462bc98, size 0x4, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double4
  double4(double_t x, double_t y, ::Unity::Mathematics::double2 zw);

  /// @brief Method double4, addr 0x462bc9c, size 0x4, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double4
  double4(double_t x, ::Unity::Mathematics::double2 yz, double_t w);

  /// @brief Method double4, addr 0x462bca0, size 0x4, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double4
  double4(double_t x, ::Unity::Mathematics::double3 yzw);

  /// @brief Method double4, addr 0x462bca4, size 0x4, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double4
  double4(::Unity::Mathematics::double2 xy, double_t z, double_t w);

  /// @brief Method double4, addr 0x462bca8, size 0x4, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double4
  double4(::Unity::Mathematics::double2 xy, ::Unity::Mathematics::double2 zw);

  /// @brief Method double4, addr 0x462bcac, size 0x4, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double4
  double4(::Unity::Mathematics::double3 xyz, double_t w);

  /// @brief Method double4, addr 0x462bcb0, size 0x4, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double4
  double4(::Unity::Mathematics::double4 xyzw);

  /// @brief Method double4x2, addr 0x462c3c8, size 0x14, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double4x2
  double4x2(::Unity::Mathematics::double4 c0, ::Unity::Mathematics::double4 c1);

  /// @brief Method double4x2, addr 0x462c3dc, size 0x14, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double4x2
  double4x2(double_t m00, double_t m01, double_t m10, double_t m11,
            double_t m20, double_t m21, double_t m30, double_t m31);

  /// @brief Method double4x2, addr 0x462c428, size 0x5c, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double4x2
  double4x2(::Unity::Mathematics::bool4x2 v);

  /// @brief Method double4x2, addr 0x462c554, size 0x24, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double4x2
  double4x2(::Unity::Mathematics::float4x2 v);

  /// @brief Method double4x2, addr 0x462c49c, size 0x44, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double4x2
  double4x2(::Unity::Mathematics::int4x2 v);

  /// @brief Method double4x2, addr 0x462c4f8, size 0x44, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double4x2
  double4x2(::Unity::Mathematics::uint4x2 v);

  /// @brief Method double4x2, addr 0x462c404, size 0x24, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 double4x2(bool v);

  /// @brief Method double4x2, addr 0x462c3f0, size 0x14, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 double4x2(double_t v);

  /// @brief Method double4x2, addr 0x462c53c, size 0x18, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 double4x2(float_t v);

  /// @brief Method double4x2, addr 0x462c484, size 0x18, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 double4x2(int32_t v);

  /// @brief Method double4x2, addr 0x462c4e0, size 0x18, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 double4x2(uint32_t v);

  /// @brief Method double4x3, addr 0x462c744, size 0x24, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double4x3
  double4x3(::Unity::Mathematics::double4 c0, ::Unity::Mathematics::double4 c1,
            ::Unity::Mathematics::double4 c2);

  /// @brief Method double4x3, addr 0x462c768, size 0x24, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double4x3
  double4x3(double_t m00, double_t m01, double_t m02, double_t m10,
            double_t m11, double_t m12, double_t m20, double_t m21,
            double_t m22, double_t m30, double_t m31, double_t m32);

  /// @brief Method double4x3, addr 0x462c7d4, size 0x84, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double4x3
  double4x3(::Unity::Mathematics::bool4x3 v);

  /// @brief Method double4x3, addr 0x462c980, size 0x34, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double4x3
  double4x3(::Unity::Mathematics::float4x3 v);

  /// @brief Method double4x3, addr 0x462c878, size 0x64, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double4x3
  double4x3(::Unity::Mathematics::int4x3 v);

  /// @brief Method double4x3, addr 0x462c8fc, size 0x64, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double4x3
  double4x3(::Unity::Mathematics::uint4x3 v);

  /// @brief Method double4x3, addr 0x462c7a8, size 0x2c, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 double4x3(bool v);

  /// @brief Method double4x3, addr 0x462c78c, size 0x1c, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 double4x3(double_t v);

  /// @brief Method double4x3, addr 0x462c960, size 0x20, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 double4x3(float_t v);

  /// @brief Method double4x3, addr 0x462c858, size 0x20, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 double4x3(int32_t v);

  /// @brief Method double4x3, addr 0x462c8dc, size 0x20, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 double4x3(uint32_t v);

  /// @brief Method double4x4, addr 0x462cc4c, size 0x34, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double4x4
  double4x4(::Unity::Mathematics::double4 c0, ::Unity::Mathematics::double4 c1,
            ::Unity::Mathematics::double4 c2, ::Unity::Mathematics::double4 c3);

  /// @brief Method double4x4, addr 0x462cc80, size 0x34, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double4x4
  double4x4(double_t m00, double_t m01, double_t m02, double_t m03,
            double_t m10, double_t m11, double_t m12, double_t m13,
            double_t m20, double_t m21, double_t m22, double_t m23,
            double_t m30, double_t m31, double_t m32, double_t m33);

  /// @brief Method double4x4, addr 0x462cd0c, size 0xac, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double4x4
  double4x4(::Unity::Mathematics::bool4x4 v);

  /// @brief Method double4x4, addr 0x462cf38, size 0x44, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double4x4
  double4x4(::Unity::Mathematics::float4x4 v);

  /// @brief Method double4x4, addr 0x462cde0, size 0x84, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double4x4
  double4x4(::Unity::Mathematics::int4x4 v);

  /// @brief Method double4x4, addr 0x462ce8c, size 0x84, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double4x4
  double4x4(::Unity::Mathematics::uint4x4 v);

  /// @brief Method double4x4, addr 0x462ccd8, size 0x34, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double4x4 double4x4(bool v);

  /// @brief Method double4x4, addr 0x462ccb4, size 0x24, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double4x4 double4x4(double_t v);

  /// @brief Method double4x4, addr 0x462cf10, size 0x28, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double4x4 double4x4(float_t v);

  /// @brief Method double4x4, addr 0x462cdb8, size 0x28, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double4x4 double4x4(int32_t v);

  /// @brief Method double4x4, addr 0x462ce64, size 0x28, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double4x4 double4x4(uint32_t v);

  /// @brief Method down, addr 0x46478d4, size 0x10, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float3 down();

  /// @brief Method exp, addr 0x463e038, size 0xa4, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double2
  exp(::Unity::Mathematics::double2 x);

  /// @brief Method exp, addr 0x463e0dc, size 0xec, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double3
  exp(::Unity::Mathematics::double3 x);

  /// @brief Method exp, addr 0x463e1c8, size 0x12c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double4
  exp(::Unity::Mathematics::double4 x);

  /// @brief Method exp, addr 0x463dd20, size 0xa4, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float2
  exp(::Unity::Mathematics::float2 x);

  /// @brief Method exp, addr 0x463ddc4, size 0xec, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float3
  exp(::Unity::Mathematics::float3 x);

  /// @brief Method exp, addr 0x463deb0, size 0x12c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float4
  exp(::Unity::Mathematics::float4 x);

  /// @brief Method exp, addr 0x464f49c, size 0x184, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::quaternion
  exp(::Unity::Mathematics::quaternion q);

  /// @brief Method exp, addr 0x463dfdc, size 0x5c, virtual false, abstract:
  /// false, final false
  static inline double_t exp(double_t x);

  /// @brief Method exp, addr 0x463dcbc, size 0x64, virtual false, abstract:
  /// false, final false
  static inline float_t exp(float_t x);

  /// @brief Method exp10, addr 0x463ed90, size 0xb4, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double2
  exp10(::Unity::Mathematics::double2 x);

  /// @brief Method exp10, addr 0x463ee44, size 0xf4, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double3
  exp10(::Unity::Mathematics::double3 x);

  /// @brief Method exp10, addr 0x463ef38, size 0x13c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double4
  exp10(::Unity::Mathematics::double4 x);

  /// @brief Method exp10, addr 0x463ea24, size 0xbc, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float2
  exp10(::Unity::Mathematics::float2 x);

  /// @brief Method exp10, addr 0x463eae0, size 0x100, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float3
  exp10(::Unity::Mathematics::float3 x);

  /// @brief Method exp10, addr 0x463ebe0, size 0x14c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float4
  exp10(::Unity::Mathematics::float4 x);

  /// @brief Method exp10, addr 0x463ed2c, size 0x64, virtual false, abstract:
  /// false, final false
  static inline double_t exp10(double_t x);

  /// @brief Method exp10, addr 0x463e9b4, size 0x70, virtual false, abstract:
  /// false, final false
  static inline float_t exp10(float_t x);

  /// @brief Method exp2, addr 0x463e6d0, size 0xb4, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double2
  exp2(::Unity::Mathematics::double2 x);

  /// @brief Method exp2, addr 0x463e784, size 0xf4, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double3
  exp2(::Unity::Mathematics::double3 x);

  /// @brief Method exp2, addr 0x463e878, size 0x13c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double4
  exp2(::Unity::Mathematics::double4 x);

  /// @brief Method exp2, addr 0x463e364, size 0xbc, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float2
  exp2(::Unity::Mathematics::float2 x);

  /// @brief Method exp2, addr 0x463e420, size 0x100, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float3
  exp2(::Unity::Mathematics::float3 x);

  /// @brief Method exp2, addr 0x463e520, size 0x14c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float4
  exp2(::Unity::Mathematics::float4 x);

  /// @brief Method exp2, addr 0x463e66c, size 0x64, virtual false, abstract:
  /// false, final false
  static inline double_t exp2(double_t x);

  /// @brief Method exp2, addr 0x463e2f4, size 0x70, virtual false, abstract:
  /// false, final false
  static inline float_t exp2(float_t x);

  /// @brief Method f16tof32, addr 0x46470a4, size 0xb8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float2
  f16tof32(::Unity::Mathematics::uint2 x);

  /// @brief Method f16tof32, addr 0x464715c, size 0x100, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float3
  f16tof32(::Unity::Mathematics::uint3 x);

  /// @brief Method f16tof32, addr 0x464725c, size 0x158, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float4
  f16tof32(::Unity::Mathematics::uint4 x);

  /// @brief Method f16tof32, addr 0x4647048, size 0x5c, virtual false,
  /// abstract: false, final false
  static inline float_t f16tof32(uint32_t x);

  /// @brief Method f32tof16, addr 0x4647414, size 0xbc, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::uint2
  f32tof16(::Unity::Mathematics::float2 x);

  /// @brief Method f32tof16, addr 0x46474d0, size 0xfc, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::uint3
  f32tof16(::Unity::Mathematics::float3 x);

  /// @brief Method f32tof16, addr 0x46475cc, size 0x148, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::uint4
  f32tof16(::Unity::Mathematics::float4 x);

  /// @brief Method f32tof16, addr 0x46473b4, size 0x60, virtual false,
  /// abstract: false, final false
  static inline uint32_t f32tof16(float_t x);

  /// @brief Method faceforward, addr 0x4643b58, size 0x24, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double2
  faceforward(::Unity::Mathematics::double2 n, ::Unity::Mathematics::double2 i,
              ::Unity::Mathematics::double2 ng);

  /// @brief Method faceforward, addr 0x4643b7c, size 0x3c, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double3
  faceforward(::Unity::Mathematics::double3 n, ::Unity::Mathematics::double3 i,
              ::Unity::Mathematics::double3 ng);

  /// @brief Method faceforward, addr 0x4643bb8, size 0x4c, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double4
  faceforward(::Unity::Mathematics::double4 n, ::Unity::Mathematics::double4 i,
              ::Unity::Mathematics::double4 ng);

  /// @brief Method faceforward, addr 0x4643aac, size 0x24, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float2
  faceforward(::Unity::Mathematics::float2 n, ::Unity::Mathematics::float2 i,
              ::Unity::Mathematics::float2 ng);

  /// @brief Method faceforward, addr 0x4643ad0, size 0x3c, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float3
  faceforward(::Unity::Mathematics::float3 n, ::Unity::Mathematics::float3 i,
              ::Unity::Mathematics::float3 ng);

  /// @brief Method faceforward, addr 0x4643b0c, size 0x4c, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float4
  faceforward(::Unity::Mathematics::float4 n, ::Unity::Mathematics::float4 i,
              ::Unity::Mathematics::float4 ng);

  /// @brief Method fastinverse, addr 0x462b9d4, size 0x7c, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double3x4
  fastinverse(::Unity::Mathematics::double3x4 m);

  /// @brief Method fastinverse, addr 0x462d3bc, size 0xa0, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double4x4
  fastinverse(::Unity::Mathematics::double4x4 m);

  /// @brief Method fastinverse, addr 0x462f32c, size 0x7c, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float3x4
  fastinverse(::Unity::Mathematics::float3x4 m);

  /// @brief Method fastinverse, addr 0x4630964, size 0xa0, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float4x4
  fastinverse(::Unity::Mathematics::float4x4 m);

  /// @brief Method float2, addr 0x462d86c, size 0x1c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float2
  float2(::Unity::Mathematics::bool2 v);

  /// @brief Method float2, addr 0x462d9ac, size 0xc, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float2
  float2(::Unity::Mathematics::double2 v);

  /// @brief Method float2, addr 0x462d8c0, size 0x64, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float2
  float2(::Unity::Mathematics::half v);

  /// @brief Method float2, addr 0x462d924, size 0x7c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float2
  float2(::Unity::Mathematics::half2 v);

  /// @brief Method float2, addr 0x462d894, size 0x10, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float2
  float2(::Unity::Mathematics::int2 v);

  /// @brief Method float2, addr 0x462d8b0, size 0x10, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float2
  float2(::Unity::Mathematics::uint2 v);

  /// @brief Method float2, addr 0x462d854, size 0x18, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float2 float2(bool v);

  /// @brief Method float2, addr 0x462d9a0, size 0xc, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float2 float2(double_t v);

  /// @brief Method float2, addr 0x462d84c, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float2 float2(float_t v);

  /// @brief Method float2, addr 0x462d888, size 0xc, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float2 float2(int32_t v);

  /// @brief Method float2, addr 0x462d8a4, size 0xc, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float2 float2(uint32_t v);

  /// @brief Method float2, addr 0x462d844, size 0x4, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float2 float2(float_t x, float_t y);

  /// @brief Method float2, addr 0x462d848, size 0x4, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float2
  float2(::Unity::Mathematics::float2 xy);

  /// @brief Method float2x2, addr 0x462dccc, size 0x4, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float2x2
  float2x2(::Unity::Mathematics::float2 c0, ::Unity::Mathematics::float2 c1);

  /// @brief Method float2x2, addr 0x462dcd0, size 0x10, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float2x2
  float2x2(float_t m00, float_t m01, float_t m10, float_t m11);

  /// @brief Method float2x2, addr 0x462dd10, size 0x2c, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float2x2
  float2x2(::Unity::Mathematics::bool2x2 v);

  /// @brief Method float2x2, addr 0x462ddb0, size 0x14, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float2x2
  float2x2(::Unity::Mathematics::double2x2 v);

  /// @brief Method float2x2, addr 0x462dd50, size 0x1c, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float2x2
  float2x2(::Unity::Mathematics::int2x2 v);

  /// @brief Method float2x2, addr 0x462dd80, size 0x1c, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float2x2
  float2x2(::Unity::Mathematics::uint2x2 v);

  /// @brief Method float2x2, addr 0x462dcf0, size 0x20, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 float2x2(bool v);

  /// @brief Method float2x2, addr 0x462dd9c, size 0x14, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 float2x2(double_t v);

  /// @brief Method float2x2, addr 0x462dce0, size 0x10, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 float2x2(float_t v);

  /// @brief Method float2x2, addr 0x462dd3c, size 0x14, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 float2x2(int32_t v);

  /// @brief Method float2x2, addr 0x462dd6c, size 0x14, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 float2x2(uint32_t v);

  /// @brief Method float2x3, addr 0x462ded0, size 0x10, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float2x3
  float2x3(::Unity::Mathematics::float2 c0, ::Unity::Mathematics::float2 c1,
           ::Unity::Mathematics::float2 c2);

  /// @brief Method float2x3, addr 0x462dee0, size 0x10, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float2x3
  float2x3(float_t m00, float_t m01, float_t m02, float_t m10, float_t m11,
           float_t m12);

  /// @brief Method float2x3, addr 0x462df20, size 0x48, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float2x3
  float2x3(::Unity::Mathematics::bool2x3 v);

  /// @brief Method float2x3, addr 0x462e00c, size 0x20, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float2x3
  float2x3(::Unity::Mathematics::double2x3 v);

  /// @brief Method float2x3, addr 0x462df7c, size 0x34, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float2x3
  float2x3(::Unity::Mathematics::int2x3 v);

  /// @brief Method float2x3, addr 0x462dfc4, size 0x34, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float2x3
  float2x3(::Unity::Mathematics::uint2x3 v);

  /// @brief Method float2x3, addr 0x462df00, size 0x20, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 float2x3(bool v);

  /// @brief Method float2x3, addr 0x462dff8, size 0x14, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 float2x3(double_t v);

  /// @brief Method float2x3, addr 0x462def0, size 0x10, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 float2x3(float_t v);

  /// @brief Method float2x3, addr 0x462df68, size 0x14, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 float2x3(int32_t v);

  /// @brief Method float2x3, addr 0x462dfb0, size 0x14, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 float2x3(uint32_t v);

  /// @brief Method float2x4, addr 0x462e130, size 0x14, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float2x4
  float2x4(::Unity::Mathematics::float2 c0, ::Unity::Mathematics::float2 c1,
           ::Unity::Mathematics::float2 c2, ::Unity::Mathematics::float2 c3);

  /// @brief Method float2x4, addr 0x462e144, size 0x14, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float2x4
  float2x4(float_t m00, float_t m01, float_t m02, float_t m03, float_t m10,
           float_t m11, float_t m12, float_t m13);

  /// @brief Method float2x4, addr 0x462e188, size 0x5c, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float2x4
  float2x4(::Unity::Mathematics::bool2x4 v);

  /// @brief Method float2x4, addr 0x462e29c, size 0x20, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float2x4
  float2x4(::Unity::Mathematics::double2x4 v);

  /// @brief Method float2x4, addr 0x462e1f4, size 0x44, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float2x4
  float2x4(::Unity::Mathematics::int2x4 v);

  /// @brief Method float2x4, addr 0x462e248, size 0x44, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float2x4
  float2x4(::Unity::Mathematics::uint2x4 v);

  /// @brief Method float2x4, addr 0x462e164, size 0x24, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float2x4 float2x4(bool v);

  /// @brief Method float2x4, addr 0x462e28c, size 0x10, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float2x4 float2x4(double_t v);

  /// @brief Method float2x4, addr 0x462e158, size 0xc, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float2x4 float2x4(float_t v);

  /// @brief Method float2x4, addr 0x462e1e4, size 0x10, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float2x4 float2x4(int32_t v);

  /// @brief Method float2x4, addr 0x462e238, size 0x10, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float2x4 float2x4(uint32_t v);

  /// @brief Method float3, addr 0x462e430, size 0x24, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float3
  float3(::Unity::Mathematics::bool3 v);

  /// @brief Method float3, addr 0x462e5e0, size 0x10, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float3
  float3(::Unity::Mathematics::double3 v);

  /// @brief Method float3, addr 0x462e49c, size 0x68, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float3
  float3(::Unity::Mathematics::half v);

  /// @brief Method float3, addr 0x462e504, size 0xcc, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float3
  float3(::Unity::Mathematics::half3 v);

  /// @brief Method float3, addr 0x462e464, size 0x14, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float3
  float3(::Unity::Mathematics::int3 v);

  /// @brief Method float3, addr 0x462e488, size 0x14, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float3
  float3(::Unity::Mathematics::uint3 v);

  /// @brief Method float3, addr 0x462e414, size 0x1c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float3 float3(bool v);

  /// @brief Method float3, addr 0x462e5d0, size 0x10, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float3 float3(double_t v);

  /// @brief Method float3, addr 0x462e408, size 0xc, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float3 float3(float_t v);

  /// @brief Method float3, addr 0x462e454, size 0x10, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float3 float3(int32_t v);

  /// @brief Method float3, addr 0x462e478, size 0x10, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float3 float3(uint32_t v);

  /// @brief Method float3, addr 0x462e3f8, size 0x4, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float3 float3(float_t x, float_t y,
                                                    float_t z);

  /// @brief Method float3, addr 0x462e3fc, size 0x4, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float3
  float3(float_t x, ::Unity::Mathematics::float2 yz);

  /// @brief Method float3, addr 0x462e400, size 0x4, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float3
  float3(::Unity::Mathematics::float2 xy, float_t z);

  /// @brief Method float3, addr 0x462e404, size 0x4, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float3
  float3(::Unity::Mathematics::float3 xyz);

  /// @brief Method float3x2, addr 0x462e998, size 0x10, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float3x2
  float3x2(::Unity::Mathematics::float3 c0, ::Unity::Mathematics::float3 c1);

  /// @brief Method float3x2, addr 0x462e9a8, size 0x10, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float3x2
  float3x2(float_t m00, float_t m01, float_t m10, float_t m11, float_t m20,
           float_t m21);

  /// @brief Method float3x2, addr 0x462e9e8, size 0x48, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float3x2
  float3x2(::Unity::Mathematics::bool3x2 v);

  /// @brief Method float3x2, addr 0x462ead4, size 0x20, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float3x2
  float3x2(::Unity::Mathematics::double3x2 v);

  /// @brief Method float3x2, addr 0x462ea44, size 0x34, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float3x2
  float3x2(::Unity::Mathematics::int3x2 v);

  /// @brief Method float3x2, addr 0x462ea8c, size 0x34, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float3x2
  float3x2(::Unity::Mathematics::uint3x2 v);

  /// @brief Method float3x2, addr 0x462e9c8, size 0x20, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float3x2 float3x2(bool v);

  /// @brief Method float3x2, addr 0x462eac0, size 0x14, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float3x2 float3x2(double_t v);

  /// @brief Method float3x2, addr 0x462e9b8, size 0x10, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float3x2 float3x2(float_t v);

  /// @brief Method float3x2, addr 0x462ea30, size 0x14, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float3x2 float3x2(int32_t v);

  /// @brief Method float3x2, addr 0x462ea78, size 0x14, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float3x2 float3x2(uint32_t v);

  /// @brief Method float3x3, addr 0x462ec00, size 0x20, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float3x3
  float3x3(::Unity::Mathematics::float3 c0, ::Unity::Mathematics::float3 c1,
           ::Unity::Mathematics::float3 c2);

  /// @brief Method float3x3, addr 0x4647a34, size 0x40, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float3x3
  float3x3(::Unity::Mathematics::float4x4 f4x4);

  /// @brief Method float3x3, addr 0x462ec20, size 0x1c, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float3x3
  float3x3(float_t m00, float_t m01, float_t m02, float_t m10, float_t m11,
           float_t m12, float_t m20, float_t m21, float_t m22);

  /// @brief Method float3x3, addr 0x4647a74, size 0x18, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float3x3
  float3x3(::Unity::Mathematics::quaternion rotation);

  /// @brief Method float3x3, addr 0x462ec74, size 0x80, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float3x3
  float3x3(::Unity::Mathematics::bool3x3 v);

  /// @brief Method float3x3, addr 0x462edd0, size 0x2c, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float3x3
  float3x3(::Unity::Mathematics::double3x3 v);

  /// @brief Method float3x3, addr 0x462ed08, size 0x50, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float3x3
  float3x3(::Unity::Mathematics::int3x3 v);

  /// @brief Method float3x3, addr 0x462ed6c, size 0x50, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float3x3
  float3x3(::Unity::Mathematics::uint3x3 v);

  /// @brief Method float3x3, addr 0x462ec4c, size 0x28, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 float3x3(bool v);

  /// @brief Method float3x3, addr 0x462edbc, size 0x14, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 float3x3(double_t v);

  /// @brief Method float3x3, addr 0x462ec3c, size 0x10, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 float3x3(float_t v);

  /// @brief Method float3x3, addr 0x462ecf4, size 0x14, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 float3x3(int32_t v);

  /// @brief Method float3x3, addr 0x462ed58, size 0x14, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 float3x3(uint32_t v);

  /// @brief Method float3x4, addr 0x462f090, size 0x30, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float3x4
  float3x4(::Unity::Mathematics::float3 c0, ::Unity::Mathematics::float3 c1,
           ::Unity::Mathematics::float3 c2, ::Unity::Mathematics::float3 c3);

  /// @brief Method float3x4, addr 0x462f0c0, size 0x2c, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float3x4
  float3x4(float_t m00, float_t m01, float_t m02, float_t m03, float_t m10,
           float_t m11, float_t m12, float_t m13, float_t m20, float_t m21,
           float_t m22, float_t m23);

  /// @brief Method float3x4, addr 0x462f128, size 0x9c, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float3x4
  float3x4(::Unity::Mathematics::bool3x4 v);

  /// @brief Method float3x4, addr 0x462f2c8, size 0x30, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float3x4
  float3x4(::Unity::Mathematics::double3x4 v);

  /// @brief Method float3x4, addr 0x462f1d8, size 0x64, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float3x4
  float3x4(::Unity::Mathematics::int3x4 v);

  /// @brief Method float3x4, addr 0x462f250, size 0x64, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float3x4
  float3x4(::Unity::Mathematics::uint3x4 v);

  /// @brief Method float3x4, addr 0x462f0fc, size 0x2c, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 float3x4(bool v);

  /// @brief Method float3x4, addr 0x462f2b4, size 0x14, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 float3x4(double_t v);

  /// @brief Method float3x4, addr 0x462f0ec, size 0x10, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 float3x4(float_t v);

  /// @brief Method float3x4, addr 0x462f1c4, size 0x14, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 float3x4(int32_t v);

  /// @brief Method float3x4, addr 0x462f23c, size 0x14, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 float3x4(uint32_t v);

  /// @brief Method float4, addr 0x462f588, size 0x2c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float4
  float4(::Unity::Mathematics::bool4 v);

  /// @brief Method float4, addr 0x462f74c, size 0x14, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float4
  float4(::Unity::Mathematics::double4 v);

  /// @brief Method float4, addr 0x462f614, size 0x6c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float4
  float4(::Unity::Mathematics::half v);

  /// @brief Method float4, addr 0x462f680, size 0xb8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float4
  float4(::Unity::Mathematics::half4 v);

  /// @brief Method float4, addr 0x462f5c8, size 0x1c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float4
  float4(::Unity::Mathematics::int4 v);

  /// @brief Method float4, addr 0x462f5f8, size 0x1c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float4
  float4(::Unity::Mathematics::uint4 v);

  /// @brief Method float4, addr 0x462f568, size 0x20, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float4 float4(bool v);

  /// @brief Method float4, addr 0x462f738, size 0x14, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float4 float4(double_t v);

  /// @brief Method float4, addr 0x462f558, size 0x10, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float4 float4(float_t v);

  /// @brief Method float4, addr 0x462f5b4, size 0x14, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float4 float4(int32_t v);

  /// @brief Method float4, addr 0x462f5e4, size 0x14, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float4 float4(uint32_t v);

  /// @brief Method float4, addr 0x462f538, size 0x4, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float4 float4(float_t x, float_t y,
                                                    float_t z, float_t w);

  /// @brief Method float4, addr 0x462f53c, size 0x4, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float4
  float4(float_t x, float_t y, ::Unity::Mathematics::float2 zw);

  /// @brief Method float4, addr 0x462f540, size 0x4, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float4
  float4(float_t x, ::Unity::Mathematics::float2 yz, float_t w);

  /// @brief Method float4, addr 0x462f544, size 0x4, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float4
  float4(float_t x, ::Unity::Mathematics::float3 yzw);

  /// @brief Method float4, addr 0x462f548, size 0x4, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float4
  float4(::Unity::Mathematics::float2 xy, float_t z, float_t w);

  /// @brief Method float4, addr 0x462f54c, size 0x4, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float4
  float4(::Unity::Mathematics::float2 xy, ::Unity::Mathematics::float2 zw);

  /// @brief Method float4, addr 0x462f550, size 0x4, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float4
  float4(::Unity::Mathematics::float3 xyz, float_t w);

  /// @brief Method float4, addr 0x462f554, size 0x4, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float4
  float4(::Unity::Mathematics::float4 xyzw);

  /// @brief Method float4x2, addr 0x462fb90, size 0x14, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float4x2
  float4x2(::Unity::Mathematics::float4 c0, ::Unity::Mathematics::float4 c1);

  /// @brief Method float4x2, addr 0x462fba4, size 0x14, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float4x2
  float4x2(float_t m00, float_t m01, float_t m10, float_t m11, float_t m20,
           float_t m21, float_t m30, float_t m31);

  /// @brief Method float4x2, addr 0x462fbe8, size 0x5c, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float4x2
  float4x2(::Unity::Mathematics::bool4x2 v);

  /// @brief Method float4x2, addr 0x462fcfc, size 0x20, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float4x2
  float4x2(::Unity::Mathematics::double4x2 v);

  /// @brief Method float4x2, addr 0x462fc54, size 0x44, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float4x2
  float4x2(::Unity::Mathematics::int4x2 v);

  /// @brief Method float4x2, addr 0x462fca8, size 0x44, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float4x2
  float4x2(::Unity::Mathematics::uint4x2 v);

  /// @brief Method float4x2, addr 0x462fbc4, size 0x24, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float4x2 float4x2(bool v);

  /// @brief Method float4x2, addr 0x462fcec, size 0x10, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float4x2 float4x2(double_t v);

  /// @brief Method float4x2, addr 0x462fbb8, size 0xc, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float4x2 float4x2(float_t v);

  /// @brief Method float4x2, addr 0x462fc44, size 0x10, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float4x2 float4x2(int32_t v);

  /// @brief Method float4x2, addr 0x462fc98, size 0x10, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float4x2 float4x2(uint32_t v);

  /// @brief Method float4x3, addr 0x462fe68, size 0x1c, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float4x3
  float4x3(::Unity::Mathematics::float4 c0, ::Unity::Mathematics::float4 c1,
           ::Unity::Mathematics::float4 c2);

  /// @brief Method float4x3, addr 0x462fe84, size 0x2c, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float4x3
  float4x3(float_t m00, float_t m01, float_t m02, float_t m10, float_t m11,
           float_t m12, float_t m20, float_t m21, float_t m22, float_t m30,
           float_t m31, float_t m32);

  /// @brief Method float4x3, addr 0x462feec, size 0x84, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float4x3
  float4x3(::Unity::Mathematics::bool4x3 v);

  /// @brief Method float4x3, addr 0x4630074, size 0x30, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float4x3
  float4x3(::Unity::Mathematics::double4x3 v);

  /// @brief Method float4x3, addr 0x462ff84, size 0x64, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float4x3
  float4x3(::Unity::Mathematics::int4x3 v);

  /// @brief Method float4x3, addr 0x462fffc, size 0x64, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float4x3
  float4x3(::Unity::Mathematics::uint4x3 v);

  /// @brief Method float4x3, addr 0x462fec0, size 0x2c, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float4x3 float4x3(bool v);

  /// @brief Method float4x3, addr 0x4630060, size 0x14, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float4x3 float4x3(double_t v);

  /// @brief Method float4x3, addr 0x462feb0, size 0x10, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float4x3 float4x3(float_t v);

  /// @brief Method float4x3, addr 0x462ff70, size 0x14, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float4x3 float4x3(int32_t v);

  /// @brief Method float4x3, addr 0x462ffe8, size 0x14, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float4x3 float4x3(uint32_t v);

  /// @brief Method float4x4, addr 0x4630278, size 0x1c, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float4x4
  float4x4(::Unity::Mathematics::float4 c0, ::Unity::Mathematics::float4 c1,
           ::Unity::Mathematics::float4 c2, ::Unity::Mathematics::float4 c3);

  /// @brief Method float4x4, addr 0x4630294, size 0x44, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float4x4
  float4x4(float_t m00, float_t m01, float_t m02, float_t m03, float_t m10,
           float_t m11, float_t m12, float_t m13, float_t m20, float_t m21,
           float_t m22, float_t m23, float_t m30, float_t m31, float_t m32,
           float_t m33);

  /// @brief Method float4x4, addr 0x4647a8c, size 0x40, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float4x4
  float4x4(::Unity::Mathematics::float3x3 rotation,
           ::Unity::Mathematics::float3 translation);

  /// @brief Method float4x4, addr 0x4647acc, size 0x18, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float4x4
  float4x4(::Unity::Mathematics::quaternion rotation,
           ::Unity::Mathematics::float3 translation);

  /// @brief Method float4x4, addr 0x4647ae4, size 0x40, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float4x4
  float4x4(::Unity::Mathematics::RigidTransform transform);

  /// @brief Method float4x4, addr 0x463031c, size 0xac, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float4x4
  float4x4(::Unity::Mathematics::bool4x4 v);

  /// @brief Method float4x4, addr 0x463050c, size 0x3c, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float4x4
  float4x4(::Unity::Mathematics::double4x4 v);

  /// @brief Method float4x4, addr 0x46303dc, size 0x84, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float4x4
  float4x4(::Unity::Mathematics::int4x4 v);

  /// @brief Method float4x4, addr 0x4630474, size 0x84, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float4x4
  float4x4(::Unity::Mathematics::uint4x4 v);

  /// @brief Method float4x4, addr 0x46302e8, size 0x34, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 float4x4(bool v);

  /// @brief Method float4x4, addr 0x46304f8, size 0x14, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 float4x4(double_t v);

  /// @brief Method float4x4, addr 0x46302d8, size 0x10, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 float4x4(float_t v);

  /// @brief Method float4x4, addr 0x46303c8, size 0x14, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 float4x4(int32_t v);

  /// @brief Method float4x4, addr 0x4630460, size 0x14, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 float4x4(uint32_t v);

  /// @brief Method floor, addr 0x463b350, size 0x90, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double2
  floor(::Unity::Mathematics::double2 x);

  /// @brief Method floor, addr 0x463b3e0, size 0xcc, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double3
  floor(::Unity::Mathematics::double3 x);

  /// @brief Method floor, addr 0x463b4ac, size 0x100, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double4
  floor(::Unity::Mathematics::double4 x);

  /// @brief Method floor, addr 0x463b098, size 0x90, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float2
  floor(::Unity::Mathematics::float2 x);

  /// @brief Method floor, addr 0x463b128, size 0xcc, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float3
  floor(::Unity::Mathematics::float3 x);

  /// @brief Method floor, addr 0x463b1f4, size 0x100, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float4
  floor(::Unity::Mathematics::float4 x);

  /// @brief Method floor, addr 0x463b2f4, size 0x5c, virtual false, abstract:
  /// false, final false
  static inline double_t floor(double_t x);

  /// @brief Method floor, addr 0x463b03c, size 0x5c, virtual false, abstract:
  /// false, final false
  static inline float_t floor(float_t x);

  /// @brief Method floorlog2, addr 0x4646580, size 0x74, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::int2
  floorlog2(::Unity::Mathematics::int2 x);

  /// @brief Method floorlog2, addr 0x46467b4, size 0x74, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::int2
  floorlog2(::Unity::Mathematics::uint2 x);

  /// @brief Method floorlog2, addr 0x46465f4, size 0xa8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::int3
  floorlog2(::Unity::Mathematics::int3 x);

  /// @brief Method floorlog2, addr 0x4646828, size 0xa8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::int3
  floorlog2(::Unity::Mathematics::uint3 x);

  /// @brief Method floorlog2, addr 0x464669c, size 0xe0, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::int4
  floorlog2(::Unity::Mathematics::int4 x);

  /// @brief Method floorlog2, addr 0x46468d0, size 0xe0, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::int4
  floorlog2(::Unity::Mathematics::uint4 x);

  /// @brief Method floorlog2, addr 0x4646548, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int32_t floorlog2(int32_t x);

  /// @brief Method floorlog2, addr 0x464677c, size 0x38, virtual false,
  /// abstract: false, final false
  static inline int32_t floorlog2(uint32_t x);

  /// @brief Method fmod, addr 0x4640514, size 0x44, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double2
  fmod(::Unity::Mathematics::double2 x, ::Unity::Mathematics::double2 y);

  /// @brief Method fmod, addr 0x4640558, size 0x68, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double3
  fmod(::Unity::Mathematics::double3 x, ::Unity::Mathematics::double3 y);

  /// @brief Method fmod, addr 0x46405c0, size 0x8c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double4
  fmod(::Unity::Mathematics::double4 x, ::Unity::Mathematics::double4 y);

  /// @brief Method fmod, addr 0x46403d8, size 0x44, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float2
  fmod(::Unity::Mathematics::float2 x, ::Unity::Mathematics::float2 y);

  /// @brief Method fmod, addr 0x464041c, size 0x68, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float3
  fmod(::Unity::Mathematics::float3 x, ::Unity::Mathematics::float3 y);

  /// @brief Method fmod, addr 0x4640484, size 0x8c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float4
  fmod(::Unity::Mathematics::float4 x, ::Unity::Mathematics::float4 y);

  /// @brief Method fmod, addr 0x4640510, size 0x4, virtual false, abstract:
  /// false, final false
  static inline double_t fmod(double_t x, double_t y);

  /// @brief Method fmod, addr 0x46403d4, size 0x4, virtual false, abstract:
  /// false, final false
  static inline float_t fmod(float_t x, float_t y);

  /// @brief Method fold_to_uint, addr 0x46479ac, size 0x20, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::uint2
  fold_to_uint(::Unity::Mathematics::double2 x);

  /// @brief Method fold_to_uint, addr 0x46479cc, size 0x2c, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::uint3
  fold_to_uint(::Unity::Mathematics::double3 x);

  /// @brief Method fold_to_uint, addr 0x46479f8, size 0x3c, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::uint4
  fold_to_uint(::Unity::Mathematics::double4 x);

  /// @brief Method fold_to_uint, addr 0x464799c, size 0x10, virtual false,
  /// abstract: false, final false
  static inline uint32_t fold_to_uint(double_t x);

  /// @brief Method forward, addr 0x46478e4, size 0x10, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float3 forward();

  /// @brief Method forward, addr 0x464ff30, size 0x78, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float3
  forward(::Unity::Mathematics::quaternion q);

  /// @brief Method frac, addr 0x463d15c, size 0x98, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double2
  frac(::Unity::Mathematics::double2 x);

  /// @brief Method frac, addr 0x463d1f4, size 0x3c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double3
  frac(::Unity::Mathematics::double3 x);

  /// @brief Method frac, addr 0x463d230, size 0x44, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double4
  frac(::Unity::Mathematics::double4 x);

  /// @brief Method frac, addr 0x463cfec, size 0x98, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float2
  frac(::Unity::Mathematics::float2 x);

  /// @brief Method frac, addr 0x463d084, size 0x3c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float3
  frac(::Unity::Mathematics::float3 x);

  /// @brief Method frac, addr 0x463d0c0, size 0x44, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float4
  frac(::Unity::Mathematics::float4 x);

  /// @brief Method frac, addr 0x463d104, size 0x58, virtual false, abstract:
  /// false, final false
  static inline double_t frac(double_t x);

  /// @brief Method frac, addr 0x463cf94, size 0x58, virtual false, abstract:
  /// false, final false
  static inline float_t frac(float_t x);

  /// @brief Method half, addr 0x4630d60, size 0x68, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::half half(double_t v);

  /// @brief Method half, addr 0x4630cfc, size 0x64, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::half half(float_t v);

  /// @brief Method half, addr 0x4630cf4, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::half half(::Unity::Mathematics::half x);

  /// @brief Method half2, addr 0x4630f6c, size 0x94, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::half2
  half2(::Unity::Mathematics::double2 v);

  /// @brief Method half2, addr 0x4630e70, size 0x90, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::half2
  half2(::Unity::Mathematics::float2 v);

  /// @brief Method half2, addr 0x4630dfc, size 0xc, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::half2 half2(::Unity::Mathematics::half v);

  /// @brief Method half2, addr 0x4630f00, size 0x6c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::half2 half2(double_t v);

  /// @brief Method half2, addr 0x4630e08, size 0x68, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::half2 half2(float_t v);

  /// @brief Method half2, addr 0x4630de4, size 0x10, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::half2 half2(::Unity::Mathematics::half x,
                                                  ::Unity::Mathematics::half y);

  /// @brief Method half2, addr 0x4630df4, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::half2
  half2(::Unity::Mathematics::half2 xy);

  /// @brief Method half3, addr 0x4631298, size 0xf8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::half3
  half3(::Unity::Mathematics::double3 v);

  /// @brief Method half3, addr 0x4631138, size 0xec, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::half3
  half3(::Unity::Mathematics::float3 v);

  /// @brief Method half3, addr 0x46310b4, size 0x14, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::half3 half3(::Unity::Mathematics::half v);

  /// @brief Method half3, addr 0x4631224, size 0x74, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::half3 half3(double_t v);

  /// @brief Method half3, addr 0x46310c8, size 0x70, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::half3 half3(float_t v);

  /// @brief Method half3, addr 0x4631078, size 0x14, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::half3 half3(::Unity::Mathematics::half x,
                                                  ::Unity::Mathematics::half y,
                                                  ::Unity::Mathematics::half z);

  /// @brief Method half3, addr 0x463108c, size 0x14, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::half3
  half3(::Unity::Mathematics::half x, ::Unity::Mathematics::half2 yz);

  /// @brief Method half3, addr 0x46310a0, size 0xc, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::half3
  half3(::Unity::Mathematics::half2 xy, ::Unity::Mathematics::half z);

  /// @brief Method half3, addr 0x46310ac, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::half3
  half3(::Unity::Mathematics::half3 xyz);

  /// @brief Method half4, addr 0x46316f4, size 0x140, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::half4
  half4(::Unity::Mathematics::double4 v);

  /// @brief Method half4, addr 0x4631548, size 0x134, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::half4
  half4(::Unity::Mathematics::float4 v);

  /// @brief Method half4, addr 0x46314bc, size 0x18, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::half4 half4(::Unity::Mathematics::half v);

  /// @brief Method half4, addr 0x463167c, size 0x78, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::half4 half4(double_t v);

  /// @brief Method half4, addr 0x46314d4, size 0x74, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::half4 half4(float_t v);

  /// @brief Method half4, addr 0x463142c, size 0x18, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::half4 half4(::Unity::Mathematics::half x,
                                                  ::Unity::Mathematics::half y,
                                                  ::Unity::Mathematics::half z,
                                                  ::Unity::Mathematics::half w);

  /// @brief Method half4, addr 0x4631444, size 0x1c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::half4
  half4(::Unity::Mathematics::half x, ::Unity::Mathematics::half y,
        ::Unity::Mathematics::half2 zw);

  /// @brief Method half4, addr 0x4631460, size 0x18, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::half4
  half4(::Unity::Mathematics::half x, ::Unity::Mathematics::half2 yz,
        ::Unity::Mathematics::half w);

  /// @brief Method half4, addr 0x4631478, size 0x1c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::half4
  half4(::Unity::Mathematics::half x, ::Unity::Mathematics::half3 yzw);

  /// @brief Method half4, addr 0x4631494, size 0xc, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::half4
  half4(::Unity::Mathematics::half2 xy, ::Unity::Mathematics::half z,
        ::Unity::Mathematics::half w);

  /// @brief Method half4, addr 0x46314a0, size 0x10, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::half4
  half4(::Unity::Mathematics::half2 xy, ::Unity::Mathematics::half2 zw);

  /// @brief Method half4, addr 0x46314b0, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::half4
  half4(::Unity::Mathematics::half3 xyz, ::Unity::Mathematics::half w);

  /// @brief Method half4, addr 0x46314b8, size 0x4, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::half4
  half4(::Unity::Mathematics::half4 xyzw);

  /// @brief Method hash, addr 0x4647714, size 0x1b0, virtual false, abstract:
  /// false, final false
  static inline uint32_t hash(::cordl_internals::Ptr<void> pBuffer,
                              int32_t numBytes, uint32_t seed);

  /// @brief Method hash, addr 0x464fe6c, size 0x60, virtual false, abstract:
  /// false, final false
  static inline uint32_t hash(::Unity::Mathematics::quaternion q);

  /// @brief Method hash, addr 0x4650460, size 0x98, virtual false, abstract:
  /// false, final false
  static inline uint32_t hash(::Unity::Mathematics::RigidTransform t);

  /// @brief Method hash, addr 0x46275b0, size 0x38, virtual false, abstract:
  /// false, final false
  static inline uint32_t hash(::Unity::Mathematics::bool2 v);

  /// @brief Method hash, addr 0x462792c, size 0x78, virtual false, abstract:
  /// false, final false
  static inline uint32_t hash(::Unity::Mathematics::bool2x2 v);

  /// @brief Method hash, addr 0x4627abc, size 0xb8, virtual false, abstract:
  /// false, final false
  static inline uint32_t hash(::Unity::Mathematics::bool2x3 v);

  /// @brief Method hash, addr 0x4627cf4, size 0xf4, virtual false, abstract:
  /// false, final false
  static inline uint32_t hash(::Unity::Mathematics::bool2x4 v);

  /// @brief Method hash, addr 0x4627f58, size 0x54, virtual false, abstract:
  /// false, final false
  static inline uint32_t hash(::Unity::Mathematics::bool3 v);

  /// @brief Method hash, addr 0x4628350, size 0xb0, virtual false, abstract:
  /// false, final false
  static inline uint32_t hash(::Unity::Mathematics::bool3x2 v);

  /// @brief Method hash, addr 0x46285dc, size 0x124, virtual false, abstract:
  /// false, final false
  static inline uint32_t hash(::Unity::Mathematics::bool3x3 v);

  /// @brief Method hash, addr 0x46289b8, size 0x17c, virtual false, abstract:
  /// false, final false
  static inline uint32_t hash(::Unity::Mathematics::bool3x4 v);

  /// @brief Method hash, addr 0x4628dc0, size 0x4c, virtual false, abstract:
  /// false, final false
  static inline uint32_t hash(::Unity::Mathematics::bool4 v);

  /// @brief Method hash, addr 0x46291d8, size 0xf0, virtual false, abstract:
  /// false, final false
  static inline uint32_t hash(::Unity::Mathematics::bool4x2 v);

  /// @brief Method hash, addr 0x46294b8, size 0x170, virtual false, abstract:
  /// false, final false
  static inline uint32_t hash(::Unity::Mathematics::bool4x3 v);

  /// @brief Method hash, addr 0x46298d8, size 0x1c0, virtual false, abstract:
  /// false, final false
  static inline uint32_t hash(::Unity::Mathematics::bool4x4 v);

  /// @brief Method hash, addr 0x4629d8c, size 0x44, virtual false, abstract:
  /// false, final false
  static inline uint32_t hash(::Unity::Mathematics::double2 v);

  /// @brief Method hash, addr 0x462a20c, size 0x78, virtual false, abstract:
  /// false, final false
  static inline uint32_t hash(::Unity::Mathematics::double2x2 v);

  /// @brief Method hash, addr 0x462a47c, size 0x9c, virtual false, abstract:
  /// false, final false
  static inline uint32_t hash(::Unity::Mathematics::double2x3 v);

  /// @brief Method hash, addr 0x462a790, size 0xc8, virtual false, abstract:
  /// false, final false
  static inline uint32_t hash(::Unity::Mathematics::double2x4 v);

  /// @brief Method hash, addr 0x462ab54, size 0x60, virtual false, abstract:
  /// false, final false
  static inline uint32_t hash(::Unity::Mathematics::double3 v);

  /// @brief Method hash, addr 0x462b0a4, size 0x9c, virtual false, abstract:
  /// false, final false
  static inline uint32_t hash(::Unity::Mathematics::double3x2 v);

  /// @brief Method hash, addr 0x462b550, size 0xdc, virtual false, abstract:
  /// false, final false
  static inline uint32_t hash(::Unity::Mathematics::double3x3 v);

  /// @brief Method hash, addr 0x462ba50, size 0x11c, virtual false, abstract:
  /// false, final false
  static inline uint32_t hash(::Unity::Mathematics::double3x4 v);

  /// @brief Method hash, addr 0x462bf4c, size 0x80, virtual false, abstract:
  /// false, final false
  static inline uint32_t hash(::Unity::Mathematics::double4 v);

  /// @brief Method hash, addr 0x462c59c, size 0xd4, virtual false, abstract:
  /// false, final false
  static inline uint32_t hash(::Unity::Mathematics::double4x2 v);

  /// @brief Method hash, addr 0x462c9e8, size 0x12c, virtual false, abstract:
  /// false, final false
  static inline uint32_t hash(::Unity::Mathematics::double4x3 v);

  /// @brief Method hash, addr 0x462d534, size 0x184, virtual false, abstract:
  /// false, final false
  static inline uint32_t hash(::Unity::Mathematics::double4x4 v);

  /// @brief Method hash, addr 0x462d9b8, size 0x34, virtual false, abstract:
  /// false, final false
  static inline uint32_t hash(::Unity::Mathematics::float2 v);

  /// @brief Method hash, addr 0x462de18, size 0x58, virtual false, abstract:
  /// false, final false
  static inline uint32_t hash(::Unity::Mathematics::float2x2 v);

  /// @brief Method hash, addr 0x462e050, size 0x6c, virtual false, abstract:
  /// false, final false
  static inline uint32_t hash(::Unity::Mathematics::float2x3 v);

  /// @brief Method hash, addr 0x462e2e0, size 0x88, virtual false, abstract:
  /// false, final false
  static inline uint32_t hash(::Unity::Mathematics::float2x4 v);

  /// @brief Method hash, addr 0x462e5f0, size 0x48, virtual false, abstract:
  /// false, final false
  static inline uint32_t hash(::Unity::Mathematics::float3 v);

  /// @brief Method hash, addr 0x462eb18, size 0x70, virtual false, abstract:
  /// false, final false
  static inline uint32_t hash(::Unity::Mathematics::float3x2 v);

  /// @brief Method hash, addr 0x462ef50, size 0x9c, virtual false, abstract:
  /// false, final false
  static inline uint32_t hash(::Unity::Mathematics::float3x3 v);

  /// @brief Method hash, addr 0x462f3a8, size 0xc4, virtual false, abstract:
  /// false, final false
  static inline uint32_t hash(::Unity::Mathematics::float3x4 v);

  /// @brief Method hash, addr 0x462f760, size 0x60, virtual false, abstract:
  /// false, final false
  static inline uint32_t hash(::Unity::Mathematics::float4 v);

  /// @brief Method hash, addr 0x462fd40, size 0x94, virtual false, abstract:
  /// false, final false
  static inline uint32_t hash(::Unity::Mathematics::float4x2 v);

  /// @brief Method hash, addr 0x46300d8, size 0xcc, virtual false, abstract:
  /// false, final false
  static inline uint32_t hash(::Unity::Mathematics::float4x3 v);

  /// @brief Method hash, addr 0x4630adc, size 0x108, virtual false, abstract:
  /// false, final false
  static inline uint32_t hash(::Unity::Mathematics::float4x4 v);

  /// @brief Method hash, addr 0x4630dc8, size 0x1c, virtual false, abstract:
  /// false, final false
  static inline uint32_t hash(::Unity::Mathematics::half v);

  /// @brief Method hash, addr 0x4631000, size 0x38, virtual false, abstract:
  /// false, final false
  static inline uint32_t hash(::Unity::Mathematics::half2 v);

  /// @brief Method hash, addr 0x4631390, size 0x4c, virtual false, abstract:
  /// false, final false
  static inline uint32_t hash(::Unity::Mathematics::half3 v);

  /// @brief Method hash, addr 0x4631834, size 0x68, virtual false, abstract:
  /// false, final false
  static inline uint32_t hash(::Unity::Mathematics::half4 v);

  /// @brief Method hash, addr 0x4631a04, size 0x30, virtual false, abstract:
  /// false, final false
  static inline uint32_t hash(::Unity::Mathematics::int2 v);

  /// @brief Method hash, addr 0x4631e3c, size 0x50, virtual false, abstract:
  /// false, final false
  static inline uint32_t hash(::Unity::Mathematics::int2x2 v);

  /// @brief Method hash, addr 0x4632118, size 0x74, virtual false, abstract:
  /// false, final false
  static inline uint32_t hash(::Unity::Mathematics::int2x3 v);

  /// @brief Method hash, addr 0x46324bc, size 0x90, virtual false, abstract:
  /// false, final false
  static inline uint32_t hash(::Unity::Mathematics::int2x4 v);

  /// @brief Method hash, addr 0x463273c, size 0x40, virtual false, abstract:
  /// false, final false
  static inline uint32_t hash(::Unity::Mathematics::int3 v);

  /// @brief Method hash, addr 0x4632cf4, size 0x7c, virtual false, abstract:
  /// false, final false
  static inline uint32_t hash(::Unity::Mathematics::int3x2 v);

  /// @brief Method hash, addr 0x463319c, size 0xac, virtual false, abstract:
  /// false, final false
  static inline uint32_t hash(::Unity::Mathematics::int3x3 v);

  /// @brief Method hash, addr 0x463373c, size 0xdc, virtual false, abstract:
  /// false, final false
  static inline uint32_t hash(::Unity::Mathematics::int3x4 v);

  /// @brief Method hash, addr 0x4633ab4, size 0x58, virtual false, abstract:
  /// false, final false
  static inline uint32_t hash(::Unity::Mathematics::int4 v);

  /// @brief Method hash, addr 0x46340cc, size 0x9c, virtual false, abstract:
  /// false, final false
  static inline uint32_t hash(::Unity::Mathematics::int4x2 v);

  /// @brief Method hash, addr 0x46345a0, size 0xd8, virtual false, abstract:
  /// false, final false
  static inline uint32_t hash(::Unity::Mathematics::int4x3 v);

  /// @brief Method hash, addr 0x4634ca8, size 0x114, virtual false, abstract:
  /// false, final false
  static inline uint32_t hash(::Unity::Mathematics::int4x4 v);

  /// @brief Method hash, addr 0x4650680, size 0x30, virtual false, abstract:
  /// false, final false
  static inline uint32_t hash(::Unity::Mathematics::uint2 v);

  /// @brief Method hash, addr 0x4650a80, size 0x50, virtual false, abstract:
  /// false, final false
  static inline uint32_t hash(::Unity::Mathematics::uint2x2 v);

  /// @brief Method hash, addr 0x4650d44, size 0x74, virtual false, abstract:
  /// false, final false
  static inline uint32_t hash(::Unity::Mathematics::uint2x3 v);

  /// @brief Method hash, addr 0x46510d8, size 0x90, virtual false, abstract:
  /// false, final false
  static inline uint32_t hash(::Unity::Mathematics::uint2x4 v);

  /// @brief Method hash, addr 0x4651338, size 0x40, virtual false, abstract:
  /// false, final false
  static inline uint32_t hash(::Unity::Mathematics::uint3 v);

  /// @brief Method hash, addr 0x46518e0, size 0x7c, virtual false, abstract:
  /// false, final false
  static inline uint32_t hash(::Unity::Mathematics::uint3x2 v);

  /// @brief Method hash, addr 0x4651d40, size 0xac, virtual false, abstract:
  /// false, final false
  static inline uint32_t hash(::Unity::Mathematics::uint3x3 v);

  /// @brief Method hash, addr 0x46522f0, size 0xdc, virtual false, abstract:
  /// false, final false
  static inline uint32_t hash(::Unity::Mathematics::uint3x4 v);

  /// @brief Method hash, addr 0x4652648, size 0x58, virtual false, abstract:
  /// false, final false
  static inline uint32_t hash(::Unity::Mathematics::uint4 v);

  /// @brief Method hash, addr 0x4652c50, size 0x9c, virtual false, abstract:
  /// false, final false
  static inline uint32_t hash(::Unity::Mathematics::uint4x2 v);

  /// @brief Method hash, addr 0x4653124, size 0xd8, virtual false, abstract:
  /// false, final false
  static inline uint32_t hash(::Unity::Mathematics::uint4x3 v);

  /// @brief Method hash, addr 0x4653778, size 0x114, virtual false, abstract:
  /// false, final false
  static inline uint32_t hash(::Unity::Mathematics::uint4x4 v);

  /// @brief Method hashwide, addr 0x46275e8, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::uint2
  hashwide(::Unity::Mathematics::bool2 v);

  /// @brief Method hashwide, addr 0x46279a4, size 0x78, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::uint2
  hashwide(::Unity::Mathematics::bool2x2 v);

  /// @brief Method hashwide, addr 0x4627b74, size 0xb8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::uint2
  hashwide(::Unity::Mathematics::bool2x3 v);

  /// @brief Method hashwide, addr 0x4627de8, size 0xf0, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::uint2
  hashwide(::Unity::Mathematics::bool2x4 v);

  /// @brief Method hashwide, addr 0x4629dd0, size 0x4c, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::uint2
  hashwide(::Unity::Mathematics::double2 v);

  /// @brief Method hashwide, addr 0x462a284, size 0x80, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::uint2
  hashwide(::Unity::Mathematics::double2x2 v);

  /// @brief Method hashwide, addr 0x462a518, size 0xa4, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::uint2
  hashwide(::Unity::Mathematics::double2x3 v);

  /// @brief Method hashwide, addr 0x462a858, size 0xd4, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::uint2
  hashwide(::Unity::Mathematics::double2x4 v);

  /// @brief Method hashwide, addr 0x462d9ec, size 0x3c, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::uint2
  hashwide(::Unity::Mathematics::float2 v);

  /// @brief Method hashwide, addr 0x462de70, size 0x60, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::uint2
  hashwide(::Unity::Mathematics::float2x2 v);

  /// @brief Method hashwide, addr 0x462e0bc, size 0x74, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::uint2
  hashwide(::Unity::Mathematics::float2x3 v);

  /// @brief Method hashwide, addr 0x462e368, size 0x90, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::uint2
  hashwide(::Unity::Mathematics::float2x4 v);

  /// @brief Method hashwide, addr 0x4631038, size 0x40, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::uint2
  hashwide(::Unity::Mathematics::half2 v);

  /// @brief Method hashwide, addr 0x4631a34, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::uint2
  hashwide(::Unity::Mathematics::int2 v);

  /// @brief Method hashwide, addr 0x4631e8c, size 0x58, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::uint2
  hashwide(::Unity::Mathematics::int2x2 v);

  /// @brief Method hashwide, addr 0x463218c, size 0x7c, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::uint2
  hashwide(::Unity::Mathematics::int2x3 v);

  /// @brief Method hashwide, addr 0x463254c, size 0x98, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::uint2
  hashwide(::Unity::Mathematics::int2x4 v);

  /// @brief Method hashwide, addr 0x46506b0, size 0x38, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::uint2
  hashwide(::Unity::Mathematics::uint2 v);

  /// @brief Method hashwide, addr 0x4650ad0, size 0x58, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::uint2
  hashwide(::Unity::Mathematics::uint2x2 v);

  /// @brief Method hashwide, addr 0x4650db8, size 0x7c, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::uint2
  hashwide(::Unity::Mathematics::uint2x3 v);

  /// @brief Method hashwide, addr 0x4651168, size 0x98, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::uint2
  hashwide(::Unity::Mathematics::uint2x4 v);

  /// @brief Method hashwide, addr 0x4627fac, size 0x50, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::uint3
  hashwide(::Unity::Mathematics::bool3 v);

  /// @brief Method hashwide, addr 0x4628400, size 0xac, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::uint3
  hashwide(::Unity::Mathematics::bool3x2 v);

  /// @brief Method hashwide, addr 0x4628700, size 0x124, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::uint3
  hashwide(::Unity::Mathematics::bool3x3 v);

  /// @brief Method hashwide, addr 0x4628b34, size 0x174, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::uint3
  hashwide(::Unity::Mathematics::bool3x4 v);

  /// @brief Method hashwide, addr 0x462abb4, size 0x64, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::uint3
  hashwide(::Unity::Mathematics::double3 v);

  /// @brief Method hashwide, addr 0x462b140, size 0x9c, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::uint3
  hashwide(::Unity::Mathematics::double3x2 v);

  /// @brief Method hashwide, addr 0x462b62c, size 0xe0, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::uint3
  hashwide(::Unity::Mathematics::double3x3 v);

  /// @brief Method hashwide, addr 0x462bb6c, size 0x128, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::uint3
  hashwide(::Unity::Mathematics::double3x4 v);

  /// @brief Method hashwide, addr 0x462e638, size 0x4c, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::uint3
  hashwide(::Unity::Mathematics::float3 v);

  /// @brief Method hashwide, addr 0x462eb88, size 0x78, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::uint3
  hashwide(::Unity::Mathematics::float3x2 v);

  /// @brief Method hashwide, addr 0x462efec, size 0xa4, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::uint3
  hashwide(::Unity::Mathematics::float3x3 v);

  /// @brief Method hashwide, addr 0x462f46c, size 0xcc, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::uint3
  hashwide(::Unity::Mathematics::float3x4 v);

  /// @brief Method hashwide, addr 0x46313dc, size 0x50, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::uint3
  hashwide(::Unity::Mathematics::half3 v);

  /// @brief Method hashwide, addr 0x463277c, size 0x44, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::uint3
  hashwide(::Unity::Mathematics::int3 v);

  /// @brief Method hashwide, addr 0x4632d70, size 0x84, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::uint3
  hashwide(::Unity::Mathematics::int3x2 v);

  /// @brief Method hashwide, addr 0x4633248, size 0xb4, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::uint3
  hashwide(::Unity::Mathematics::int3x3 v);

  /// @brief Method hashwide, addr 0x4633818, size 0xe4, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::uint3
  hashwide(::Unity::Mathematics::int3x4 v);

  /// @brief Method hashwide, addr 0x4651378, size 0x44, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::uint3
  hashwide(::Unity::Mathematics::uint3 v);

  /// @brief Method hashwide, addr 0x465195c, size 0x84, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::uint3
  hashwide(::Unity::Mathematics::uint3x2 v);

  /// @brief Method hashwide, addr 0x4651dec, size 0xb4, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::uint3
  hashwide(::Unity::Mathematics::uint3x3 v);

  /// @brief Method hashwide, addr 0x46523cc, size 0xe4, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::uint3
  hashwide(::Unity::Mathematics::uint3x4 v);

  /// @brief Method hashwide, addr 0x464fecc, size 0x64, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::uint4
  hashwide(::Unity::Mathematics::quaternion q);

  /// @brief Method hashwide, addr 0x46504f8, size 0xb4, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::uint4
  hashwide(::Unity::Mathematics::RigidTransform t);

  /// @brief Method hashwide, addr 0x4628e0c, size 0x5c, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::uint4
  hashwide(::Unity::Mathematics::bool4 v);

  /// @brief Method hashwide, addr 0x46292c8, size 0xcc, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::uint4
  hashwide(::Unity::Mathematics::bool4x2 v);

  /// @brief Method hashwide, addr 0x4629628, size 0x128, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::uint4
  hashwide(::Unity::Mathematics::bool4x3 v);

  /// @brief Method hashwide, addr 0x4629a98, size 0x178, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::uint4
  hashwide(::Unity::Mathematics::bool4x4 v);

  /// @brief Method hashwide, addr 0x462bfcc, size 0x84, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::uint4
  hashwide(::Unity::Mathematics::double4 v);

  /// @brief Method hashwide, addr 0x462c670, size 0xd4, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::uint4
  hashwide(::Unity::Mathematics::double4x2 v);

  /// @brief Method hashwide, addr 0x462cb14, size 0x138, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::uint4
  hashwide(::Unity::Mathematics::double4x3 v);

  /// @brief Method hashwide, addr 0x462d6b8, size 0x18c, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::uint4
  hashwide(::Unity::Mathematics::double4x4 v);

  /// @brief Method hashwide, addr 0x462f7c0, size 0x64, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::uint4
  hashwide(::Unity::Mathematics::float4 v);

  /// @brief Method hashwide, addr 0x462fdd4, size 0x94, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::uint4
  hashwide(::Unity::Mathematics::float4x2 v);

  /// @brief Method hashwide, addr 0x46301a4, size 0xd4, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::uint4
  hashwide(::Unity::Mathematics::float4x3 v);

  /// @brief Method hashwide, addr 0x4630be4, size 0x110, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::uint4
  hashwide(::Unity::Mathematics::float4x4 v);

  /// @brief Method hashwide, addr 0x463189c, size 0x6c, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::uint4
  hashwide(::Unity::Mathematics::half4 v);

  /// @brief Method hashwide, addr 0x4633b0c, size 0x5c, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::uint4
  hashwide(::Unity::Mathematics::int4 v);

  /// @brief Method hashwide, addr 0x4634168, size 0x9c, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::uint4
  hashwide(::Unity::Mathematics::int4x2 v);

  /// @brief Method hashwide, addr 0x4634678, size 0xe0, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::uint4
  hashwide(::Unity::Mathematics::int4x3 v);

  /// @brief Method hashwide, addr 0x4634dbc, size 0x11c, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::uint4
  hashwide(::Unity::Mathematics::int4x4 v);

  /// @brief Method hashwide, addr 0x46526a0, size 0x5c, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::uint4
  hashwide(::Unity::Mathematics::uint4 v);

  /// @brief Method hashwide, addr 0x4652cec, size 0x9c, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::uint4
  hashwide(::Unity::Mathematics::uint4x2 v);

  /// @brief Method hashwide, addr 0x46531fc, size 0xe0, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::uint4
  hashwide(::Unity::Mathematics::uint4x3 v);

  /// @brief Method hashwide, addr 0x465388c, size 0x2404, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::uint4
  hashwide(::Unity::Mathematics::uint4x4 v);

  /// @brief Method int2, addr 0x463193c, size 0x10, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int2 int2(::Unity::Mathematics::bool2 v);

  /// @brief Method int2, addr 0x46319d0, size 0x34, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int2
  int2(::Unity::Mathematics::double2 v);

  /// @brief Method int2, addr 0x463197c, size 0x34, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int2 int2(::Unity::Mathematics::float2 v);

  /// @brief Method int2, addr 0x4631958, size 0x4, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int2 int2(::Unity::Mathematics::uint2 v);

  /// @brief Method int2, addr 0x4631924, size 0x18, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int2 int2(bool v);

  /// @brief Method int2, addr 0x46319b0, size 0x20, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int2 int2(double_t v);

  /// @brief Method int2, addr 0x463195c, size 0x20, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int2 int2(float_t v);

  /// @brief Method int2, addr 0x4631918, size 0xc, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int2 int2(int32_t v);

  /// @brief Method int2, addr 0x463194c, size 0xc, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int2 int2(uint32_t v);

  /// @brief Method int2, addr 0x4631908, size 0xc, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int2 int2(int32_t x, int32_t y);

  /// @brief Method int2, addr 0x4631914, size 0x4, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int2 int2(::Unity::Mathematics::int2 xy);

  /// @brief Method int2x2, addr 0x4631cac, size 0x4, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int2x2
  int2x2(::Unity::Mathematics::int2 c0, ::Unity::Mathematics::int2 c1);

  /// @brief Method int2x2, addr 0x4631cb0, size 0x14, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int2x2 int2x2(int32_t m00, int32_t m01,
                                                    int32_t m10, int32_t m11);

  /// @brief Method int2x2, addr 0x4631ce8, size 0x24, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int2x2
  int2x2(::Unity::Mathematics::bool2x2 v);

  /// @brief Method int2x2, addr 0x4631dbc, size 0x54, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int2x2
  int2x2(::Unity::Mathematics::double2x2 v);

  /// @brief Method int2x2, addr 0x4631d44, size 0x54, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int2x2
  int2x2(::Unity::Mathematics::float2x2 v);

  /// @brief Method int2x2, addr 0x4631d1c, size 0x4, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int2x2
  int2x2(::Unity::Mathematics::uint2x2 v);

  /// @brief Method int2x2, addr 0x4631cd4, size 0x14, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int2x2 int2x2(bool v);

  /// @brief Method int2x2, addr 0x4631d98, size 0x24, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int2x2 int2x2(double_t v);

  /// @brief Method int2x2, addr 0x4631d20, size 0x24, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int2x2 int2x2(float_t v);

  /// @brief Method int2x2, addr 0x4631cc4, size 0x10, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int2x2 int2x2(int32_t v);

  /// @brief Method int2x2, addr 0x4631d0c, size 0x10, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int2x2 int2x2(uint32_t v);

  /// @brief Method int2x3, addr 0x4631ee4, size 0xc, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int2x3
  int2x3(::Unity::Mathematics::int2 c0, ::Unity::Mathematics::int2 c1,
         ::Unity::Mathematics::int2 c2);

  /// @brief Method int2x3, addr 0x4631ef0, size 0x24, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int2x3 int2x3(int32_t m00, int32_t m01,
                                                    int32_t m02, int32_t m10,
                                                    int32_t m11, int32_t m12);

  /// @brief Method int2x3, addr 0x4631f40, size 0x2c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int2x3
  int2x3(::Unity::Mathematics::bool2x3 v);

  /// @brief Method int2x3, addr 0x463206c, size 0x88, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int2x3
  int2x3(::Unity::Mathematics::double2x3 v);

  /// @brief Method int2x3, addr 0x4631fbc, size 0x88, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int2x3
  int2x3(::Unity::Mathematics::float2x3 v);

  /// @brief Method int2x3, addr 0x4631f80, size 0x14, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int2x3
  int2x3(::Unity::Mathematics::uint2x3 v);

  /// @brief Method int2x3, addr 0x4631f28, size 0x18, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int2x3 int2x3(bool v);

  /// @brief Method int2x3, addr 0x4632044, size 0x28, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int2x3 int2x3(double_t v);

  /// @brief Method int2x3, addr 0x4631f94, size 0x28, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int2x3 int2x3(float_t v);

  /// @brief Method int2x3, addr 0x4631f14, size 0x14, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int2x3 int2x3(int32_t v);

  /// @brief Method int2x3, addr 0x4631f6c, size 0x14, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int2x3 int2x3(uint32_t v);

  /// @brief Method int2x4, addr 0x4632208, size 0xc, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int2x4
  int2x4(::Unity::Mathematics::int2 c0, ::Unity::Mathematics::int2 c1,
         ::Unity::Mathematics::int2 c2, ::Unity::Mathematics::int2 c3);

  /// @brief Method int2x4, addr 0x4632214, size 0x2c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int2x4 int2x4(int32_t m00, int32_t m01,
                                                    int32_t m02, int32_t m03,
                                                    int32_t m10, int32_t m11,
                                                    int32_t m12, int32_t m13);

  /// @brief Method int2x4, addr 0x463226c, size 0x64, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int2x4
  int2x4(::Unity::Mathematics::bool2x4 v);

  /// @brief Method int2x4, addr 0x46323ec, size 0xac, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int2x4
  int2x4(::Unity::Mathematics::double2x4 v);

  /// @brief Method int2x4, addr 0x4632318, size 0xac, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int2x4
  int2x4(::Unity::Mathematics::float2x4 v);

  /// @brief Method int2x4, addr 0x46322e4, size 0xc, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int2x4
  int2x4(::Unity::Mathematics::uint2x4 v);

  /// @brief Method int2x4, addr 0x4632254, size 0x18, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int2x4 int2x4(bool v);

  /// @brief Method int2x4, addr 0x46323c4, size 0x28, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int2x4 int2x4(double_t v);

  /// @brief Method int2x4, addr 0x46322f0, size 0x28, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int2x4 int2x4(float_t v);

  /// @brief Method int2x4, addr 0x4632240, size 0x14, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int2x4 int2x4(int32_t v);

  /// @brief Method int2x4, addr 0x46322d0, size 0x14, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int2x4 int2x4(uint32_t v);

  /// @brief Method int3, addr 0x4632644, size 0x18, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int3 int3(::Unity::Mathematics::bool3 v);

  /// @brief Method int3, addr 0x46326fc, size 0x40, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int3
  int3(::Unity::Mathematics::double3 v);

  /// @brief Method int3, addr 0x4632698, size 0x40, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int3 int3(::Unity::Mathematics::float3 v);

  /// @brief Method int3, addr 0x463266c, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int3 int3(::Unity::Mathematics::uint3 v);

  /// @brief Method int3, addr 0x4632628, size 0x1c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int3 int3(bool v);

  /// @brief Method int3, addr 0x46326d8, size 0x24, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int3 int3(double_t v);

  /// @brief Method int3, addr 0x4632674, size 0x24, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int3 int3(float_t v);

  /// @brief Method int3, addr 0x4632618, size 0x10, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int3 int3(int32_t v);

  /// @brief Method int3, addr 0x463265c, size 0x10, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int3 int3(uint32_t v);

  /// @brief Method int3, addr 0x46325e4, size 0x10, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int3 int3(int32_t x, int32_t y,
                                                int32_t z);

  /// @brief Method int3, addr 0x46325f4, size 0x14, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int3 int3(int32_t x,
                                                ::Unity::Mathematics::int2 yz);

  /// @brief Method int3, addr 0x4632608, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int3 int3(::Unity::Mathematics::int2 xy,
                                                int32_t z);

  /// @brief Method int3, addr 0x4632610, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int3 int3(::Unity::Mathematics::int3 xyz);

  /// @brief Method int3x2, addr 0x4632a90, size 0x14, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int3x2
  int3x2(::Unity::Mathematics::int3 c0, ::Unity::Mathematics::int3 c1);

  /// @brief Method int3x2, addr 0x4632aa4, size 0x10, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int3x2 int3x2(int32_t m00, int32_t m01,
                                                    int32_t m10, int32_t m11,
                                                    int32_t m20, int32_t m21);

  /// @brief Method int3x2, addr 0x4632af0, size 0x30, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int3x2
  int3x2(::Unity::Mathematics::bool3x2 v);

  /// @brief Method int3x2, addr 0x4632c48, size 0x88, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int3x2
  int3x2(::Unity::Mathematics::double3x2 v);

  /// @brief Method int3x2, addr 0x4632b90, size 0x88, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int3x2
  int3x2(::Unity::Mathematics::float3x2 v);

  /// @brief Method int3x2, addr 0x4632b3c, size 0x24, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int3x2
  int3x2(::Unity::Mathematics::uint3x2 v);

  /// @brief Method int3x2, addr 0x4632ad0, size 0x20, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int3x2 int3x2(bool v);

  /// @brief Method int3x2, addr 0x4632c18, size 0x30, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int3x2 int3x2(double_t v);

  /// @brief Method int3x2, addr 0x4632b60, size 0x30, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int3x2 int3x2(float_t v);

  /// @brief Method int3x2, addr 0x4632ab4, size 0x1c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int3x2 int3x2(int32_t v);

  /// @brief Method int3x2, addr 0x4632b20, size 0x1c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int3x2 int3x2(uint32_t v);

  /// @brief Method int3x3, addr 0x4632df4, size 0x1c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int3x3
  int3x3(::Unity::Mathematics::int3 c0, ::Unity::Mathematics::int3 c1,
         ::Unity::Mathematics::int3 c2);

  /// @brief Method int3x3, addr 0x4632e10, size 0x1c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int3x3
  int3x3(int32_t m00, int32_t m01, int32_t m02, int32_t m10, int32_t m11,
         int32_t m12, int32_t m20, int32_t m21, int32_t m22);

  /// @brief Method int3x3, addr 0x4632e78, size 0x60, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int3x3
  int3x3(::Unity::Mathematics::bool3x3 v);

  /// @brief Method int3x3, addr 0x4633064, size 0xc4, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int3x3
  int3x3(::Unity::Mathematics::double3x3 v);

  /// @brief Method int3x3, addr 0x4632f68, size 0xc4, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int3x3
  int3x3(::Unity::Mathematics::float3x3 v);

  /// @brief Method int3x3, addr 0x4632efc, size 0x34, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int3x3
  int3x3(::Unity::Mathematics::uint3x3 v);

  /// @brief Method int3x3, addr 0x4632e50, size 0x28, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int3x3 int3x3(bool v);

  /// @brief Method int3x3, addr 0x463302c, size 0x38, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int3x3 int3x3(double_t v);

  /// @brief Method int3x3, addr 0x4632f30, size 0x38, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int3x3 int3x3(float_t v);

  /// @brief Method int3x3, addr 0x4632e2c, size 0x24, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int3x3 int3x3(int32_t v);

  /// @brief Method int3x3, addr 0x4632ed8, size 0x24, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int3x3 int3x3(uint32_t v);

  /// @brief Method int3x4, addr 0x46332fc, size 0x24, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int3x4
  int3x4(::Unity::Mathematics::int3 c0, ::Unity::Mathematics::int3 c1,
         ::Unity::Mathematics::int3 c2, ::Unity::Mathematics::int3 c3);

  /// @brief Method int3x4, addr 0x4633320, size 0x2c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int3x4
  int3x4(int32_t m00, int32_t m01, int32_t m02, int32_t m03, int32_t m10,
         int32_t m11, int32_t m12, int32_t m13, int32_t m20, int32_t m21,
         int32_t m22, int32_t m23);

  /// @brief Method int3x4, addr 0x46333a8, size 0x78, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int3x4
  int3x4(::Unity::Mathematics::bool3x4 v);

  /// @brief Method int3x4, addr 0x463360c, size 0xfc, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int3x4
  int3x4(::Unity::Mathematics::double3x4 v);

  /// @brief Method int3x4, addr 0x46334d0, size 0xfc, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int3x4
  int3x4(::Unity::Mathematics::float3x4 v);

  /// @brief Method int3x4, addr 0x463344c, size 0x44, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int3x4
  int3x4(::Unity::Mathematics::uint3x4 v);

  /// @brief Method int3x4, addr 0x4633378, size 0x30, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int3x4 int3x4(bool v);

  /// @brief Method int3x4, addr 0x46335cc, size 0x40, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int3x4 int3x4(double_t v);

  /// @brief Method int3x4, addr 0x4633490, size 0x40, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int3x4 int3x4(float_t v);

  /// @brief Method int3x4, addr 0x463334c, size 0x2c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int3x4 int3x4(int32_t v);

  /// @brief Method int3x4, addr 0x4633420, size 0x2c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int3x4 int3x4(uint32_t v);

  /// @brief Method int4, addr 0x4633990, size 0x20, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int4 int4(::Unity::Mathematics::bool4 v);

  /// @brief Method int4, addr 0x4633a60, size 0x54, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int4
  int4(::Unity::Mathematics::double4 v);

  /// @brief Method int4, addr 0x46339e8, size 0x54, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int4 int4(::Unity::Mathematics::float4 v);

  /// @brief Method int4, addr 0x46339c0, size 0x4, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int4 int4(::Unity::Mathematics::uint4 v);

  /// @brief Method int4, addr 0x4633978, size 0x18, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int4 int4(bool v);

  /// @brief Method int4, addr 0x4633a3c, size 0x24, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int4 int4(double_t v);

  /// @brief Method int4, addr 0x46339c4, size 0x24, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int4 int4(float_t v);

  /// @brief Method int4, addr 0x4633968, size 0x10, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int4 int4(int32_t v);

  /// @brief Method int4, addr 0x46339b0, size 0x10, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int4 int4(uint32_t v);

  /// @brief Method int4, addr 0x46338fc, size 0x18, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int4 int4(int32_t x, int32_t y, int32_t z,
                                                int32_t w);

  /// @brief Method int4, addr 0x4633914, size 0x10, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int4 int4(int32_t x, int32_t y,
                                                ::Unity::Mathematics::int2 zw);

  /// @brief Method int4, addr 0x4633924, size 0x14, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int4
  int4(int32_t x, ::Unity::Mathematics::int2 yz, int32_t w);

  /// @brief Method int4, addr 0x4633938, size 0x14, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int4 int4(int32_t x,
                                                ::Unity::Mathematics::int3 yzw);

  /// @brief Method int4, addr 0x463394c, size 0xc, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int4 int4(::Unity::Mathematics::int2 xy,
                                                int32_t z, int32_t w);

  /// @brief Method int4, addr 0x4633958, size 0x4, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int4 int4(::Unity::Mathematics::int2 xy,
                                                ::Unity::Mathematics::int2 zw);

  /// @brief Method int4, addr 0x463395c, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int4 int4(::Unity::Mathematics::int3 xyz,
                                                int32_t w);

  /// @brief Method int4, addr 0x4633964, size 0x4, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int4
  int4(::Unity::Mathematics::int4 xyzw);

  /// @brief Method int4x2, addr 0x4633e28, size 0xc, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int4x2
  int4x2(::Unity::Mathematics::int4 c0, ::Unity::Mathematics::int4 c1);

  /// @brief Method int4x2, addr 0x4633e34, size 0x14, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int4x2 int4x2(int32_t m00, int32_t m01,
                                                    int32_t m10, int32_t m11,
                                                    int32_t m20, int32_t m21,
                                                    int32_t m30, int32_t m31);

  /// @brief Method int4x2, addr 0x4633e74, size 0x64, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int4x2
  int4x2(::Unity::Mathematics::bool4x2 v);

  /// @brief Method int4x2, addr 0x4633ff4, size 0xac, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int4x2
  int4x2(::Unity::Mathematics::double4x2 v);

  /// @brief Method int4x2, addr 0x4633f20, size 0xac, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int4x2
  int4x2(::Unity::Mathematics::float4x2 v);

  /// @brief Method int4x2, addr 0x4633eec, size 0xc, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int4x2
  int4x2(::Unity::Mathematics::uint4x2 v);

  /// @brief Method int4x2, addr 0x4633e5c, size 0x18, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int4x2 int4x2(bool v);

  /// @brief Method int4x2, addr 0x4633fcc, size 0x28, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int4x2 int4x2(double_t v);

  /// @brief Method int4x2, addr 0x4633ef8, size 0x28, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int4x2 int4x2(float_t v);

  /// @brief Method int4x2, addr 0x4633e48, size 0x14, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int4x2 int4x2(int32_t v);

  /// @brief Method int4x2, addr 0x4633ed8, size 0x14, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int4x2 int4x2(uint32_t v);

  /// @brief Method int4x3, addr 0x4634204, size 0x10, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int4x3
  int4x3(::Unity::Mathematics::int4 c0, ::Unity::Mathematics::int4 c1,
         ::Unity::Mathematics::int4 c2);

  /// @brief Method int4x3, addr 0x4634214, size 0x2c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int4x3
  int4x3(int32_t m00, int32_t m01, int32_t m02, int32_t m10, int32_t m11,
         int32_t m12, int32_t m20, int32_t m21, int32_t m22, int32_t m30,
         int32_t m31, int32_t m32);

  /// @brief Method int4x3, addr 0x4634274, size 0x84, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int4x3
  int4x3(::Unity::Mathematics::bool4x3 v);

  /// @brief Method int4x3, addr 0x4634474, size 0xf8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int4x3
  int4x3(::Unity::Mathematics::double4x3 v);

  /// @brief Method int4x3, addr 0x4634350, size 0xf8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int4x3
  int4x3(::Unity::Mathematics::float4x3 v);

  /// @brief Method int4x3, addr 0x4634310, size 0x14, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int4x3
  int4x3(::Unity::Mathematics::uint4x3 v);

  /// @brief Method int4x3, addr 0x4634258, size 0x1c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int4x3 int4x3(bool v);

  /// @brief Method int4x3, addr 0x4634448, size 0x2c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int4x3 int4x3(double_t v);

  /// @brief Method int4x3, addr 0x4634324, size 0x2c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int4x3 int4x3(float_t v);

  /// @brief Method int4x3, addr 0x4634240, size 0x18, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int4x3 int4x3(int32_t v);

  /// @brief Method int4x3, addr 0x46342f8, size 0x18, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int4x3 int4x3(uint32_t v);

  /// @brief Method int4x4, addr 0x4634758, size 0x14, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int4x4
  int4x4(::Unity::Mathematics::int4 c0, ::Unity::Mathematics::int4 c1,
         ::Unity::Mathematics::int4 c2, ::Unity::Mathematics::int4 c3);

  /// @brief Method int4x4, addr 0x463476c, size 0x44, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int4x4
  int4x4(int32_t m00, int32_t m01, int32_t m02, int32_t m03, int32_t m10,
         int32_t m11, int32_t m12, int32_t m13, int32_t m20, int32_t m21,
         int32_t m22, int32_t m23, int32_t m30, int32_t m31, int32_t m32,
         int32_t m33);

  /// @brief Method int4x4, addr 0x46347ec, size 0x9c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int4x4
  int4x4(::Unity::Mathematics::bool4x4 v);

  /// @brief Method int4x4, addr 0x4634a5c, size 0x144, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int4x4
  int4x4(::Unity::Mathematics::double4x4 v);

  /// @brief Method int4x4, addr 0x46348e8, size 0x144, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int4x4
  int4x4(::Unity::Mathematics::float4x4 v);

  /// @brief Method int4x4, addr 0x46348a4, size 0x14, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int4x4
  int4x4(::Unity::Mathematics::uint4x4 v);

  /// @brief Method int4x4, addr 0x46347cc, size 0x20, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int4x4 int4x4(bool v);

  /// @brief Method int4x4, addr 0x4634a2c, size 0x30, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int4x4 int4x4(double_t v);

  /// @brief Method int4x4, addr 0x46348b8, size 0x30, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int4x4 int4x4(float_t v);

  /// @brief Method int4x4, addr 0x46347b0, size 0x1c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int4x4 int4x4(int32_t v);

  /// @brief Method int4x4, addr 0x4634888, size 0x1c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int4x4 int4x4(uint32_t v);

  /// @brief Method inverse, addr 0x46500a4, size 0xdc, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::RigidTransform
  inverse(::Unity::Mathematics::RigidTransform t);

  /// @brief Method inverse, addr 0x462a1c8, size 0x34, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double2x2
  inverse(::Unity::Mathematics::double2x2 m);

  /// @brief Method inverse, addr 0x462b428, size 0xd8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double3x3
  inverse(::Unity::Mathematics::double3x3 m);

  /// @brief Method inverse, addr 0x462d084, size 0x338, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double4x4
  inverse(::Unity::Mathematics::double4x4 m);

  /// @brief Method inverse, addr 0x462ddd4, size 0x34, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float2x2
  inverse(::Unity::Mathematics::float2x2 m);

  /// @brief Method inverse, addr 0x462ee28, size 0xd8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float3x3
  inverse(::Unity::Mathematics::float3x3 m);

  /// @brief Method inverse, addr 0x463062c, size 0x338, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float4x4
  inverse(::Unity::Mathematics::float4x4 m);

  /// @brief Method inverse, addr 0x464efac, size 0x44, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::quaternion
  inverse(::Unity::Mathematics::quaternion q);

  /// @brief Method isfinite, addr 0x4635150, size 0x28, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::bool2
  isfinite(::Unity::Mathematics::double2 x);

  /// @brief Method isfinite, addr 0x4635088, size 0x28, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::bool2
  isfinite(::Unity::Mathematics::float2 x);

  /// @brief Method isfinite, addr 0x4635178, size 0x3c, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::bool3
  isfinite(::Unity::Mathematics::double3 x);

  /// @brief Method isfinite, addr 0x46350b0, size 0x3c, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::bool3
  isfinite(::Unity::Mathematics::float3 x);

  /// @brief Method isfinite, addr 0x46351b4, size 0x4c, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::bool4
  isfinite(::Unity::Mathematics::double4 x);

  /// @brief Method isfinite, addr 0x46350ec, size 0x4c, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::bool4
  isfinite(::Unity::Mathematics::float4 x);

  /// @brief Method isfinite, addr 0x4635138, size 0x18, virtual false,
  /// abstract: false, final false
  static inline bool isfinite(double_t x);

  /// @brief Method isfinite, addr 0x4635070, size 0x18, virtual false,
  /// abstract: false, final false
  static inline bool isfinite(float_t x);

  /// @brief Method isinf, addr 0x46352e0, size 0x28, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::bool2
  isinf(::Unity::Mathematics::double2 x);

  /// @brief Method isinf, addr 0x4635218, size 0x28, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::bool2
  isinf(::Unity::Mathematics::float2 x);

  /// @brief Method isinf, addr 0x4635308, size 0x3c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::bool3
  isinf(::Unity::Mathematics::double3 x);

  /// @brief Method isinf, addr 0x4635240, size 0x3c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::bool3
  isinf(::Unity::Mathematics::float3 x);

  /// @brief Method isinf, addr 0x4635344, size 0x4c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::bool4
  isinf(::Unity::Mathematics::double4 x);

  /// @brief Method isinf, addr 0x463527c, size 0x4c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::bool4
  isinf(::Unity::Mathematics::float4 x);

  /// @brief Method isinf, addr 0x46352c8, size 0x18, virtual false, abstract:
  /// false, final false
  static inline bool isinf(double_t x);

  /// @brief Method isinf, addr 0x4635200, size 0x18, virtual false, abstract:
  /// false, final false
  static inline bool isinf(float_t x);

  /// @brief Method isnan, addr 0x4635480, size 0x2c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::bool2
  isnan(::Unity::Mathematics::double2 x);

  /// @brief Method isnan, addr 0x46353a8, size 0x2c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::bool2
  isnan(::Unity::Mathematics::float2 x);

  /// @brief Method isnan, addr 0x46354ac, size 0x40, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::bool3
  isnan(::Unity::Mathematics::double3 x);

  /// @brief Method isnan, addr 0x46353d4, size 0x40, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::bool3
  isnan(::Unity::Mathematics::float3 x);

  /// @brief Method isnan, addr 0x46354ec, size 0x54, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::bool4
  isnan(::Unity::Mathematics::double4 x);

  /// @brief Method isnan, addr 0x4635414, size 0x54, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::bool4
  isnan(::Unity::Mathematics::float4 x);

  /// @brief Method isnan, addr 0x4635468, size 0x18, virtual false, abstract:
  /// false, final false
  static inline bool isnan(double_t x);

  /// @brief Method isnan, addr 0x4635390, size 0x18, virtual false, abstract:
  /// false, final false
  static inline bool isnan(float_t x);

  /// @brief Method ispow2, addr 0x463555c, size 0x38, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::bool2
  ispow2(::Unity::Mathematics::int2 x);

  /// @brief Method ispow2, addr 0x4635670, size 0x40, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::bool2
  ispow2(::Unity::Mathematics::uint2 x);

  /// @brief Method ispow2, addr 0x4635594, size 0x50, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::bool3
  ispow2(::Unity::Mathematics::int3 x);

  /// @brief Method ispow2, addr 0x46356b0, size 0x60, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::bool3
  ispow2(::Unity::Mathematics::uint3 x);

  /// @brief Method ispow2, addr 0x46355e4, size 0x6c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::bool4
  ispow2(::Unity::Mathematics::int4 x);

  /// @brief Method ispow2, addr 0x4635710, size 0x80, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::bool4
  ispow2(::Unity::Mathematics::uint4 x);

  /// @brief Method ispow2, addr 0x4635540, size 0x1c, virtual false, abstract:
  /// false, final false
  static inline bool ispow2(int32_t x);

  /// @brief Method ispow2, addr 0x4635650, size 0x20, virtual false, abstract:
  /// false, final false
  static inline bool ispow2(uint32_t x);

  /// @brief Method left, addr 0x4647904, size 0x10, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float3 left();

  /// @brief Method length, addr 0x4641b60, size 0x64, virtual false, abstract:
  /// false, final false
  static inline double_t length(::Unity::Mathematics::double2 x);

  /// @brief Method length, addr 0x4641bc4, size 0x78, virtual false, abstract:
  /// false, final false
  static inline double_t length(::Unity::Mathematics::double3 x);

  /// @brief Method length, addr 0x4641c3c, size 0x84, virtual false, abstract:
  /// false, final false
  static inline double_t length(::Unity::Mathematics::double4 x);

  /// @brief Method length, addr 0x4641b58, size 0x8, virtual false, abstract:
  /// false, final false
  static inline double_t length(double_t x);

  /// @brief Method length, addr 0x464f010, size 0x84, virtual false, abstract:
  /// false, final false
  static inline float_t length(::Unity::Mathematics::quaternion q);

  /// @brief Method length, addr 0x46419f8, size 0x64, virtual false, abstract:
  /// false, final false
  static inline float_t length(::Unity::Mathematics::float2 x);

  /// @brief Method length, addr 0x4641a5c, size 0x78, virtual false, abstract:
  /// false, final false
  static inline float_t length(::Unity::Mathematics::float3 x);

  /// @brief Method length, addr 0x4641ad4, size 0x84, virtual false, abstract:
  /// false, final false
  static inline float_t length(::Unity::Mathematics::float4 x);

  /// @brief Method length, addr 0x46419f0, size 0x8, virtual false, abstract:
  /// false, final false
  static inline float_t length(float_t x);

  /// @brief Method lengthsq, addr 0x4641d18, size 0x10, virtual false,
  /// abstract: false, final false
  static inline double_t lengthsq(::Unity::Mathematics::double2 x);

  /// @brief Method lengthsq, addr 0x4641d28, size 0x18, virtual false,
  /// abstract: false, final false
  static inline double_t lengthsq(::Unity::Mathematics::double3 x);

  /// @brief Method lengthsq, addr 0x4641d40, size 0x20, virtual false,
  /// abstract: false, final false
  static inline double_t lengthsq(::Unity::Mathematics::double4 x);

  /// @brief Method lengthsq, addr 0x4641d10, size 0x8, virtual false, abstract:
  /// false, final false
  static inline double_t lengthsq(double_t x);

  /// @brief Method lengthsq, addr 0x464f094, size 0x20, virtual false,
  /// abstract: false, final false
  static inline float_t lengthsq(::Unity::Mathematics::quaternion q);

  /// @brief Method lengthsq, addr 0x4641cc8, size 0x10, virtual false,
  /// abstract: false, final false
  static inline float_t lengthsq(::Unity::Mathematics::float2 x);

  /// @brief Method lengthsq, addr 0x4641cd8, size 0x18, virtual false,
  /// abstract: false, final false
  static inline float_t lengthsq(::Unity::Mathematics::float3 x);

  /// @brief Method lengthsq, addr 0x4641cf0, size 0x20, virtual false,
  /// abstract: false, final false
  static inline float_t lengthsq(::Unity::Mathematics::float4 x);

  /// @brief Method lengthsq, addr 0x4641cc0, size 0x8, virtual false, abstract:
  /// false, final false
  static inline float_t lengthsq(float_t x);

  /// @brief Method lerp, addr 0x4635f50, size 0x1c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double2
  lerp(::Unity::Mathematics::double2 x, ::Unity::Mathematics::double2 y,
       ::Unity::Mathematics::double2 s);

  /// @brief Method lerp, addr 0x4635ed4, size 0x1c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double2
  lerp(::Unity::Mathematics::double2 x, ::Unity::Mathematics::double2 y,
       double_t s);

  /// @brief Method lerp, addr 0x4635f6c, size 0x30, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double3
  lerp(::Unity::Mathematics::double3 x, ::Unity::Mathematics::double3 y,
       ::Unity::Mathematics::double3 s);

  /// @brief Method lerp, addr 0x4635ef0, size 0x28, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double3
  lerp(::Unity::Mathematics::double3 x, ::Unity::Mathematics::double3 y,
       double_t s);

  /// @brief Method lerp, addr 0x4635f9c, size 0x3c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double4
  lerp(::Unity::Mathematics::double4 x, ::Unity::Mathematics::double4 y,
       ::Unity::Mathematics::double4 s);

  /// @brief Method lerp, addr 0x4635f18, size 0x38, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double4
  lerp(::Unity::Mathematics::double4 x, ::Unity::Mathematics::double4 y,
       double_t s);

  /// @brief Method lerp, addr 0x4635e3c, size 0x1c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float2
  lerp(::Unity::Mathematics::float2 x, ::Unity::Mathematics::float2 y,
       ::Unity::Mathematics::float2 s);

  /// @brief Method lerp, addr 0x4635dc0, size 0x1c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float2
  lerp(::Unity::Mathematics::float2 x, ::Unity::Mathematics::float2 y,
       float_t s);

  /// @brief Method lerp, addr 0x4635e58, size 0x30, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float3
  lerp(::Unity::Mathematics::float3 x, ::Unity::Mathematics::float3 y,
       ::Unity::Mathematics::float3 s);

  /// @brief Method lerp, addr 0x4635ddc, size 0x28, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float3
  lerp(::Unity::Mathematics::float3 x, ::Unity::Mathematics::float3 y,
       float_t s);

  /// @brief Method lerp, addr 0x4635e88, size 0x3c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float4
  lerp(::Unity::Mathematics::float4 x, ::Unity::Mathematics::float4 y,
       ::Unity::Mathematics::float4 s);

  /// @brief Method lerp, addr 0x4635e04, size 0x38, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float4
  lerp(::Unity::Mathematics::float4 x, ::Unity::Mathematics::float4 y,
       float_t s);

  /// @brief Method lerp, addr 0x4635ec4, size 0x10, virtual false, abstract:
  /// false, final false
  static inline double_t lerp(double_t x, double_t y, double_t s);

  /// @brief Method lerp, addr 0x4635db0, size 0x10, virtual false, abstract:
  /// false, final false
  static inline float_t lerp(float_t x, float_t y, float_t s);

  /// @brief Method log, addr 0x463f3f0, size 0xa4, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double2
  log(::Unity::Mathematics::double2 x);

  /// @brief Method log, addr 0x463f494, size 0xec, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double3
  log(::Unity::Mathematics::double3 x);

  /// @brief Method log, addr 0x463f580, size 0x12c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double4
  log(::Unity::Mathematics::double4 x);

  /// @brief Method log, addr 0x463f0d8, size 0xa4, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float2
  log(::Unity::Mathematics::float2 x);

  /// @brief Method log, addr 0x463f17c, size 0xec, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float3
  log(::Unity::Mathematics::float3 x);

  /// @brief Method log, addr 0x463f268, size 0x12c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float4
  log(::Unity::Mathematics::float4 x);

  /// @brief Method log, addr 0x464f728, size 0x1c4, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::quaternion
  log(::Unity::Mathematics::quaternion q);

  /// @brief Method log, addr 0x463f394, size 0x5c, virtual false, abstract:
  /// false, final false
  static inline double_t log(double_t x);

  /// @brief Method log, addr 0x463f074, size 0x64, virtual false, abstract:
  /// false, final false
  static inline float_t log(float_t x);

  /// @brief Method log10, addr 0x4640118, size 0xa4, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double2
  log10(::Unity::Mathematics::double2 x);

  /// @brief Method log10, addr 0x46401bc, size 0xec, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double3
  log10(::Unity::Mathematics::double3 x);

  /// @brief Method log10, addr 0x46402a8, size 0x12c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double4
  log10(::Unity::Mathematics::double4 x);

  /// @brief Method log10, addr 0x463fe00, size 0xa4, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float2
  log10(::Unity::Mathematics::float2 x);

  /// @brief Method log10, addr 0x463fea4, size 0xec, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float3
  log10(::Unity::Mathematics::float3 x);

  /// @brief Method log10, addr 0x463ff90, size 0x12c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float4
  log10(::Unity::Mathematics::float4 x);

  /// @brief Method log10, addr 0x46400bc, size 0x5c, virtual false, abstract:
  /// false, final false
  static inline double_t log10(double_t x);

  /// @brief Method log10, addr 0x463fd9c, size 0x64, virtual false, abstract:
  /// false, final false
  static inline float_t log10(float_t x);

  /// @brief Method log2, addr 0x463fa98, size 0xb4, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double2
  log2(::Unity::Mathematics::double2 x);

  /// @brief Method log2, addr 0x463fb4c, size 0x104, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double3
  log2(::Unity::Mathematics::double3 x);

  /// @brief Method log2, addr 0x463fc50, size 0x14c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double4
  log2(::Unity::Mathematics::double4 x);

  /// @brief Method log2, addr 0x463f718, size 0xb8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float2
  log2(::Unity::Mathematics::float2 x);

  /// @brief Method log2, addr 0x463f7d0, size 0x10c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float3
  log2(::Unity::Mathematics::float3 x);

  /// @brief Method log2, addr 0x463f8dc, size 0x158, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float4
  log2(::Unity::Mathematics::float4 x);

  /// @brief Method log2, addr 0x463fa34, size 0x64, virtual false, abstract:
  /// false, final false
  static inline double_t log2(double_t x);

  /// @brief Method log2, addr 0x463f6ac, size 0x6c, virtual false, abstract:
  /// false, final false
  static inline float_t log2(float_t x);

  /// @brief Method lzcnt, addr 0x46446e8, size 0x78, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int2 lzcnt(::Unity::Mathematics::int2 x);

  /// @brief Method lzcnt, addr 0x4644934, size 0x78, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int2 lzcnt(::Unity::Mathematics::uint2 x);

  /// @brief Method lzcnt, addr 0x4644760, size 0xac, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int3 lzcnt(::Unity::Mathematics::int3 x);

  /// @brief Method lzcnt, addr 0x46449ac, size 0xac, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int3 lzcnt(::Unity::Mathematics::uint3 x);

  /// @brief Method lzcnt, addr 0x464480c, size 0xec, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int4 lzcnt(::Unity::Mathematics::int4 x);

  /// @brief Method lzcnt, addr 0x4644a58, size 0xec, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int4 lzcnt(::Unity::Mathematics::uint4 x);

  /// @brief Method lzcnt, addr 0x46446ac, size 0x3c, virtual false, abstract:
  /// false, final false
  static inline int32_t lzcnt(int32_t x);

  /// @brief Method lzcnt, addr 0x4644b44, size 0x4c, virtual false, abstract:
  /// false, final false
  static inline int32_t lzcnt(int64_t x);

  /// @brief Method lzcnt, addr 0x46448f8, size 0x3c, virtual false, abstract:
  /// false, final false
  static inline int32_t lzcnt(uint32_t x);

  /// @brief Method lzcnt, addr 0x4644b90, size 0x4c, virtual false, abstract:
  /// false, final false
  static inline int32_t lzcnt(uint64_t x);

  /// @brief Method mad, addr 0x46364e8, size 0x14, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double2
  mad(::Unity::Mathematics::double2 a, ::Unity::Mathematics::double2 b,
      ::Unity::Mathematics::double2 c);

  /// @brief Method mad, addr 0x46364fc, size 0x24, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double3
  mad(::Unity::Mathematics::double3 a, ::Unity::Mathematics::double3 b,
      ::Unity::Mathematics::double3 c);

  /// @brief Method mad, addr 0x4636520, size 0x2c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double4
  mad(::Unity::Mathematics::double4 a, ::Unity::Mathematics::double4 b,
      ::Unity::Mathematics::double4 c);

  /// @brief Method mad, addr 0x4636478, size 0x14, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float2
  mad(::Unity::Mathematics::float2 a, ::Unity::Mathematics::float2 b,
      ::Unity::Mathematics::float2 c);

  /// @brief Method mad, addr 0x463648c, size 0x24, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float3
  mad(::Unity::Mathematics::float3 a, ::Unity::Mathematics::float3 b,
      ::Unity::Mathematics::float3 c);

  /// @brief Method mad, addr 0x46364b0, size 0x2c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float4
  mad(::Unity::Mathematics::float4 a, ::Unity::Mathematics::float4 b,
      ::Unity::Mathematics::float4 c);

  /// @brief Method mad, addr 0x4636374, size 0x1c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int2 mad(::Unity::Mathematics::int2 a,
                                               ::Unity::Mathematics::int2 b,
                                               ::Unity::Mathematics::int2 c);

  /// @brief Method mad, addr 0x4636390, size 0x20, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int3 mad(::Unity::Mathematics::int3 a,
                                               ::Unity::Mathematics::int3 b,
                                               ::Unity::Mathematics::int3 c);

  /// @brief Method mad, addr 0x46363b0, size 0x34, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int4 mad(::Unity::Mathematics::int4 a,
                                               ::Unity::Mathematics::int4 b,
                                               ::Unity::Mathematics::int4 c);

  /// @brief Method mad, addr 0x46363ec, size 0x1c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint2 mad(::Unity::Mathematics::uint2 a,
                                                ::Unity::Mathematics::uint2 b,
                                                ::Unity::Mathematics::uint2 c);

  /// @brief Method mad, addr 0x4636408, size 0x20, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint3 mad(::Unity::Mathematics::uint3 a,
                                                ::Unity::Mathematics::uint3 b,
                                                ::Unity::Mathematics::uint3 c);

  /// @brief Method mad, addr 0x4636428, size 0x34, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint4 mad(::Unity::Mathematics::uint4 a,
                                                ::Unity::Mathematics::uint4 b,
                                                ::Unity::Mathematics::uint4 c);

  /// @brief Method mad, addr 0x46364dc, size 0xc, virtual false, abstract:
  /// false, final false
  static inline double_t mad(double_t a, double_t b, double_t c);

  /// @brief Method mad, addr 0x463646c, size 0xc, virtual false, abstract:
  /// false, final false
  static inline float_t mad(float_t a, float_t b, float_t c);

  /// @brief Method mad, addr 0x463636c, size 0x8, virtual false, abstract:
  /// false, final false
  static inline int32_t mad(int32_t a, int32_t b, int32_t c);

  /// @brief Method mad, addr 0x463645c, size 0x8, virtual false, abstract:
  /// false, final false
  static inline int64_t mad(int64_t a, int64_t b, int64_t c);

  /// @brief Method mad, addr 0x46363e4, size 0x8, virtual false, abstract:
  /// false, final false
  static inline uint32_t mad(uint32_t a, uint32_t b, uint32_t c);

  /// @brief Method mad, addr 0x4636464, size 0x8, virtual false, abstract:
  /// false, final false
  static inline uint64_t mad(uint64_t a, uint64_t b, uint64_t c);

  /// @brief Method max, addr 0x4635ce4, size 0x30, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double2
  max(::Unity::Mathematics::double2 x, ::Unity::Mathematics::double2 y);

  /// @brief Method max, addr 0x4635d14, size 0x44, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double3
  max(::Unity::Mathematics::double3 x, ::Unity::Mathematics::double3 y);

  /// @brief Method max, addr 0x4635d58, size 0x58, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double4
  max(::Unity::Mathematics::double4 x, ::Unity::Mathematics::double4 y);

  /// @brief Method max, addr 0x4635bfc, size 0x30, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float2
  max(::Unity::Mathematics::float2 x, ::Unity::Mathematics::float2 y);

  /// @brief Method max, addr 0x4635c2c, size 0x44, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float3
  max(::Unity::Mathematics::float3 x, ::Unity::Mathematics::float3 y);

  /// @brief Method max, addr 0x4635c70, size 0x58, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float4
  max(::Unity::Mathematics::float4 x, ::Unity::Mathematics::float4 y);

  /// @brief Method max, addr 0x4635aac, size 0x20, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int2 max(::Unity::Mathematics::int2 x,
                                               ::Unity::Mathematics::int2 y);

  /// @brief Method max, addr 0x4635acc, size 0x2c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int3 max(::Unity::Mathematics::int3 x,
                                               ::Unity::Mathematics::int3 y);

  /// @brief Method max, addr 0x4635af8, size 0x3c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int4 max(::Unity::Mathematics::int4 x,
                                               ::Unity::Mathematics::int4 y);

  /// @brief Method max, addr 0x4635b40, size 0x20, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint2 max(::Unity::Mathematics::uint2 x,
                                                ::Unity::Mathematics::uint2 y);

  /// @brief Method max, addr 0x4635b60, size 0x2c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint3 max(::Unity::Mathematics::uint3 x,
                                                ::Unity::Mathematics::uint3 y);

  /// @brief Method max, addr 0x4635b8c, size 0x3c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint4 max(::Unity::Mathematics::uint4 x,
                                                ::Unity::Mathematics::uint4 y);

  /// @brief Method max, addr 0x4635cc8, size 0x1c, virtual false, abstract:
  /// false, final false
  static inline double_t max(double_t x, double_t y);

  /// @brief Method max, addr 0x4635be0, size 0x1c, virtual false, abstract:
  /// false, final false
  static inline float_t max(float_t x, float_t y);

  /// @brief Method max, addr 0x4635aa0, size 0xc, virtual false, abstract:
  /// false, final false
  static inline int32_t max(int32_t x, int32_t y);

  /// @brief Method max, addr 0x4635bc8, size 0xc, virtual false, abstract:
  /// false, final false
  static inline int64_t max(int64_t x, int64_t y);

  /// @brief Method max, addr 0x4635b34, size 0xc, virtual false, abstract:
  /// false, final false
  static inline uint32_t max(uint32_t x, uint32_t y);

  /// @brief Method max, addr 0x4635bd4, size 0xc, virtual false, abstract:
  /// false, final false
  static inline uint64_t max(uint64_t x, uint64_t y);

  /// @brief Method min, addr 0x46359d4, size 0x30, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double2
  min(::Unity::Mathematics::double2 x, ::Unity::Mathematics::double2 y);

  /// @brief Method min, addr 0x4635a04, size 0x44, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double3
  min(::Unity::Mathematics::double3 x, ::Unity::Mathematics::double3 y);

  /// @brief Method min, addr 0x4635a48, size 0x58, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double4
  min(::Unity::Mathematics::double4 x, ::Unity::Mathematics::double4 y);

  /// @brief Method min, addr 0x46358ec, size 0x30, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float2
  min(::Unity::Mathematics::float2 x, ::Unity::Mathematics::float2 y);

  /// @brief Method min, addr 0x463591c, size 0x44, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float3
  min(::Unity::Mathematics::float3 x, ::Unity::Mathematics::float3 y);

  /// @brief Method min, addr 0x4635960, size 0x58, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float4
  min(::Unity::Mathematics::float4 x, ::Unity::Mathematics::float4 y);

  /// @brief Method min, addr 0x463579c, size 0x20, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int2 min(::Unity::Mathematics::int2 x,
                                               ::Unity::Mathematics::int2 y);

  /// @brief Method min, addr 0x46357bc, size 0x2c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int3 min(::Unity::Mathematics::int3 x,
                                               ::Unity::Mathematics::int3 y);

  /// @brief Method min, addr 0x46357e8, size 0x3c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int4 min(::Unity::Mathematics::int4 x,
                                               ::Unity::Mathematics::int4 y);

  /// @brief Method min, addr 0x4635830, size 0x20, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint2 min(::Unity::Mathematics::uint2 x,
                                                ::Unity::Mathematics::uint2 y);

  /// @brief Method min, addr 0x4635850, size 0x2c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint3 min(::Unity::Mathematics::uint3 x,
                                                ::Unity::Mathematics::uint3 y);

  /// @brief Method min, addr 0x463587c, size 0x3c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint4 min(::Unity::Mathematics::uint4 x,
                                                ::Unity::Mathematics::uint4 y);

  /// @brief Method min, addr 0x46359b8, size 0x1c, virtual false, abstract:
  /// false, final false
  static inline double_t min(double_t x, double_t y);

  /// @brief Method min, addr 0x46358d0, size 0x1c, virtual false, abstract:
  /// false, final false
  static inline float_t min(float_t x, float_t y);

  /// @brief Method min, addr 0x4635790, size 0xc, virtual false, abstract:
  /// false, final false
  static inline int32_t min(int32_t x, int32_t y);

  /// @brief Method min, addr 0x46358b8, size 0xc, virtual false, abstract:
  /// false, final false
  static inline int64_t min(int64_t x, int64_t y);

  /// @brief Method min, addr 0x4635824, size 0xc, virtual false, abstract:
  /// false, final false
  static inline uint32_t min(uint32_t x, uint32_t y);

  /// @brief Method min, addr 0x46358c4, size 0xc, virtual false, abstract:
  /// false, final false
  static inline uint64_t min(uint64_t x, uint64_t y);

  /// @brief Method modf, addr 0x464089c, size 0xc0, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double2
  modf(::Unity::Mathematics::double2 x,
       ::ByRef<::Unity::Mathematics::double2> i);

  /// @brief Method modf, addr 0x464095c, size 0x4c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double3
  modf(::Unity::Mathematics::double3 x,
       ::ByRef<::Unity::Mathematics::double3> i);

  /// @brief Method modf, addr 0x46409a8, size 0x58, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double4
  modf(::Unity::Mathematics::double4 x,
       ::ByRef<::Unity::Mathematics::double4> i);

  /// @brief Method modf, addr 0x46406c0, size 0xc4, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float2
  modf(::Unity::Mathematics::float2 x, ::ByRef<::Unity::Mathematics::float2> i);

  /// @brief Method modf, addr 0x4640784, size 0x4c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float3
  modf(::Unity::Mathematics::float3 x, ::ByRef<::Unity::Mathematics::float3> i);

  /// @brief Method modf, addr 0x46407d0, size 0x58, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float4
  modf(::Unity::Mathematics::float4 x, ::ByRef<::Unity::Mathematics::float4> i);

  /// @brief Method modf, addr 0x4640828, size 0x74, virtual false, abstract:
  /// false, final false
  static inline double_t modf(double_t x, ::ByRef<double_t> i);

  /// @brief Method modf, addr 0x464064c, size 0x74, virtual false, abstract:
  /// false, final false
  static inline float_t modf(float_t x, ::ByRef<float_t> i);

  /// @brief Method movehl, addr 0x4647990, size 0xc, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double4
  movehl(::Unity::Mathematics::double4 a, ::Unity::Mathematics::double4 b);

  /// @brief Method movehl, addr 0x4647984, size 0xc, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float4
  movehl(::Unity::Mathematics::float4 a, ::Unity::Mathematics::float4 b);

  /// @brief Method movelh, addr 0x4647978, size 0xc, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double4
  movelh(::Unity::Mathematics::double4 a, ::Unity::Mathematics::double4 b);

  /// @brief Method movelh, addr 0x464796c, size 0xc, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float4
  movelh(::Unity::Mathematics::float4 a, ::Unity::Mathematics::float4 b);

  /// @brief Method mul, addr 0x4650180, size 0x120, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::RigidTransform
  mul(::Unity::Mathematics::RigidTransform a,
      ::Unity::Mathematics::RigidTransform b);

  /// @brief Method mul, addr 0x46491c8, size 0x1c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double2
  mul(::Unity::Mathematics::double2 a, ::Unity::Mathematics::double2x2 b);

  /// @brief Method mul, addr 0x46494dc, size 0x1c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double2
  mul(::Unity::Mathematics::double2x2 a, ::Unity::Mathematics::double2 b);

  /// @brief Method mul, addr 0x4649614, size 0x24, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double2
  mul(::Unity::Mathematics::double2x3 a, ::Unity::Mathematics::double3 b);

  /// @brief Method mul, addr 0x46497c4, size 0x2c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double2
  mul(::Unity::Mathematics::double2x4 a, ::Unity::Mathematics::double4 b);

  /// @brief Method mul, addr 0x4649274, size 0x38, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double2
  mul(::Unity::Mathematics::double3 a, ::Unity::Mathematics::double3x2 b);

  /// @brief Method mul, addr 0x464938c, size 0x4c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double2
  mul(::Unity::Mathematics::double4 a, ::Unity::Mathematics::double4x2 b);

  /// @brief Method mul, addr 0x46494f8, size 0x34, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double2x2
  mul(::Unity::Mathematics::double2x2 a, ::Unity::Mathematics::double2x2 b);

  /// @brief Method mul, addr 0x4649638, size 0x6c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double2x2
  mul(::Unity::Mathematics::double2x3 a, ::Unity::Mathematics::double3x2 b);

  /// @brief Method mul, addr 0x46497f0, size 0x94, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double2x2
  mul(::Unity::Mathematics::double2x4 a, ::Unity::Mathematics::double4x2 b);

  /// @brief Method mul, addr 0x464952c, size 0x64, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double2x3
  mul(::Unity::Mathematics::double2x2 a, ::Unity::Mathematics::double2x3 b);

  /// @brief Method mul, addr 0x46496a4, size 0x78, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double2x3
  mul(::Unity::Mathematics::double2x3 a, ::Unity::Mathematics::double3x3 b);

  /// @brief Method mul, addr 0x4649884, size 0x9c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double2x3
  mul(::Unity::Mathematics::double2x4 a, ::Unity::Mathematics::double4x3 b);

  /// @brief Method mul, addr 0x4649590, size 0x84, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double2x4
  mul(::Unity::Mathematics::double2x2 a, ::Unity::Mathematics::double2x4 b);

  /// @brief Method mul, addr 0x464971c, size 0xa8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double2x4
  mul(::Unity::Mathematics::double2x3 a, ::Unity::Mathematics::double3x4 b);

  /// @brief Method mul, addr 0x4649920, size 0xe8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double2x4
  mul(::Unity::Mathematics::double2x4 a, ::Unity::Mathematics::double4x4 b);

  /// @brief Method mul, addr 0x46491e4, size 0x34, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double3
  mul(::Unity::Mathematics::double2 a, ::Unity::Mathematics::double2x3 b);

  /// @brief Method mul, addr 0x46492ac, size 0x54, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double3
  mul(::Unity::Mathematics::double3 a, ::Unity::Mathematics::double3x3 b);

  /// @brief Method mul, addr 0x4649a08, size 0x34, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double3
  mul(::Unity::Mathematics::double3x2 a, ::Unity::Mathematics::double2 b);

  /// @brief Method mul, addr 0x4649bb4, size 0x54, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double3
  mul(::Unity::Mathematics::double3x3 a, ::Unity::Mathematics::double3 b);

  /// @brief Method mul, addr 0x4649e4c, size 0x70, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double3
  mul(::Unity::Mathematics::double3x4 a, ::Unity::Mathematics::double4 b);

  /// @brief Method mul, addr 0x46493d8, size 0x70, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double3
  mul(::Unity::Mathematics::double4 a, ::Unity::Mathematics::double4x3 b);

  /// @brief Method mul, addr 0x4649a3c, size 0x54, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double3x2
  mul(::Unity::Mathematics::double3x2 a, ::Unity::Mathematics::double2x2 b);

  /// @brief Method mul, addr 0x4649c08, size 0x88, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double3x2
  mul(::Unity::Mathematics::double3x3 a, ::Unity::Mathematics::double3x2 b);

  /// @brief Method mul, addr 0x4649ebc, size 0xb4, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double3x2
  mul(::Unity::Mathematics::double3x4 a, ::Unity::Mathematics::double4x2 b);

  /// @brief Method mul, addr 0x4649a90, size 0x80, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double3x3
  mul(::Unity::Mathematics::double3x2 a, ::Unity::Mathematics::double2x3 b);

  /// @brief Method mul, addr 0x4649c90, size 0xc0, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double3x3
  mul(::Unity::Mathematics::double3x3 a, ::Unity::Mathematics::double3x3 b);

  /// @brief Method mul, addr 0x4649f70, size 0x104, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double3x3
  mul(::Unity::Mathematics::double3x4 a, ::Unity::Mathematics::double4x3 b);

  /// @brief Method mul, addr 0x4649b10, size 0xa4, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double3x4
  mul(::Unity::Mathematics::double3x2 a, ::Unity::Mathematics::double2x4 b);

  /// @brief Method mul, addr 0x4649d50, size 0xfc, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double3x4
  mul(::Unity::Mathematics::double3x3 a, ::Unity::Mathematics::double3x4 b);

  /// @brief Method mul, addr 0x464a074, size 0x174, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double3x4
  mul(::Unity::Mathematics::double3x4 a, ::Unity::Mathematics::double4x4 b);

  /// @brief Method mul, addr 0x4649218, size 0x44, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double4
  mul(::Unity::Mathematics::double2 a, ::Unity::Mathematics::double2x4 b);

  /// @brief Method mul, addr 0x4649300, size 0x6c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double4
  mul(::Unity::Mathematics::double3 a, ::Unity::Mathematics::double3x4 b);

  /// @brief Method mul, addr 0x4649448, size 0x94, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double4
  mul(::Unity::Mathematics::double4 a, ::Unity::Mathematics::double4x4 b);

  /// @brief Method mul, addr 0x464a1e8, size 0x44, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double4
  mul(::Unity::Mathematics::double4x2 a, ::Unity::Mathematics::double2 b);

  /// @brief Method mul, addr 0x464a378, size 0x6c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double4
  mul(::Unity::Mathematics::double4x3 a, ::Unity::Mathematics::double3 b);

  /// @brief Method mul, addr 0x464a5f0, size 0x94, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double4
  mul(::Unity::Mathematics::double4x4 a, ::Unity::Mathematics::double4 b);

  /// @brief Method mul, addr 0x464a22c, size 0x44, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double4x2
  mul(::Unity::Mathematics::double4x2 a, ::Unity::Mathematics::double2x2 b);

  /// @brief Method mul, addr 0x464a3e4, size 0x7c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double4x2
  mul(::Unity::Mathematics::double4x3 a, ::Unity::Mathematics::double3x2 b);

  /// @brief Method mul, addr 0x464a684, size 0xa4, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double4x2
  mul(::Unity::Mathematics::double4x4 a, ::Unity::Mathematics::double4x2 b);

  /// @brief Method mul, addr 0x464a270, size 0x74, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double4x3
  mul(::Unity::Mathematics::double4x2 a, ::Unity::Mathematics::double2x3 b);

  /// @brief Method mul, addr 0x464a460, size 0xb0, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double4x3
  mul(::Unity::Mathematics::double4x3 a, ::Unity::Mathematics::double3x3 b);

  /// @brief Method mul, addr 0x464a728, size 0xe8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double4x3
  mul(::Unity::Mathematics::double4x4 a, ::Unity::Mathematics::double4x3 b);

  /// @brief Method mul, addr 0x464a2e4, size 0x94, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double4x4
  mul(::Unity::Mathematics::double4x2 a, ::Unity::Mathematics::double2x4 b);

  /// @brief Method mul, addr 0x464a510, size 0xe0, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double4x4
  mul(::Unity::Mathematics::double4x3 a, ::Unity::Mathematics::double3x4 b);

  /// @brief Method mul, addr 0x464a810, size 0x144, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double4x4
  mul(::Unity::Mathematics::double4x4 a, ::Unity::Mathematics::double4x4 b);

  /// @brief Method mul, addr 0x4647cf0, size 0x1c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float2
  mul(::Unity::Mathematics::float2 a, ::Unity::Mathematics::float2x2 b);

  /// @brief Method mul, addr 0x4648004, size 0x1c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float2
  mul(::Unity::Mathematics::float2x2 a, ::Unity::Mathematics::float2 b);

  /// @brief Method mul, addr 0x46480fc, size 0x24, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float2
  mul(::Unity::Mathematics::float2x3 a, ::Unity::Mathematics::float3 b);

  /// @brief Method mul, addr 0x46482ac, size 0x2c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float2
  mul(::Unity::Mathematics::float2x4 a, ::Unity::Mathematics::float4 b);

  /// @brief Method mul, addr 0x4647d9c, size 0x38, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float2
  mul(::Unity::Mathematics::float3 a, ::Unity::Mathematics::float3x2 b);

  /// @brief Method mul, addr 0x4647eb4, size 0x4c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float2
  mul(::Unity::Mathematics::float4 a, ::Unity::Mathematics::float4x2 b);

  /// @brief Method mul, addr 0x4648020, size 0x34, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float2x2
  mul(::Unity::Mathematics::float2x2 a, ::Unity::Mathematics::float2x2 b);

  /// @brief Method mul, addr 0x4648120, size 0x6c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float2x2
  mul(::Unity::Mathematics::float2x3 a, ::Unity::Mathematics::float3x2 b);

  /// @brief Method mul, addr 0x46482d8, size 0x78, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float2x2
  mul(::Unity::Mathematics::float2x4 a, ::Unity::Mathematics::float4x2 b);

  /// @brief Method mul, addr 0x4648054, size 0x5c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float2x3
  mul(::Unity::Mathematics::float2x2 a, ::Unity::Mathematics::float2x3 b);

  /// @brief Method mul, addr 0x464818c, size 0x78, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float2x3
  mul(::Unity::Mathematics::float2x3 a, ::Unity::Mathematics::float3x3 b);

  /// @brief Method mul, addr 0x4648350, size 0x9c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float2x3
  mul(::Unity::Mathematics::float2x4 a, ::Unity::Mathematics::float4x3 b);

  /// @brief Method mul, addr 0x46480b0, size 0x4c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float2x4
  mul(::Unity::Mathematics::float2x2 a, ::Unity::Mathematics::float2x4 b);

  /// @brief Method mul, addr 0x4648204, size 0xa8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float2x4
  mul(::Unity::Mathematics::float2x3 a, ::Unity::Mathematics::float3x4 b);

  /// @brief Method mul, addr 0x46483ec, size 0xe8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float2x4
  mul(::Unity::Mathematics::float2x4 a, ::Unity::Mathematics::float4x4 b);

  /// @brief Method mul, addr 0x4647d0c, size 0x34, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float3
  mul(::Unity::Mathematics::float2 a, ::Unity::Mathematics::float2x3 b);

  /// @brief Method mul, addr 0x4647dd4, size 0x54, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float3
  mul(::Unity::Mathematics::float3 a, ::Unity::Mathematics::float3x3 b);

  /// @brief Method mul, addr 0x46484d4, size 0x30, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float3
  mul(::Unity::Mathematics::float3x2 a, ::Unity::Mathematics::float2 b);

  /// @brief Method mul, addr 0x464867c, size 0x48, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float3
  mul(::Unity::Mathematics::float3x3 a, ::Unity::Mathematics::float3 b);

  /// @brief Method mul, addr 0x4648908, size 0x60, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float3
  mul(::Unity::Mathematics::float3x4 a, ::Unity::Mathematics::float4 b);

  /// @brief Method mul, addr 0x4647f00, size 0x70, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float3
  mul(::Unity::Mathematics::float4 a, ::Unity::Mathematics::float4x3 b);

  /// @brief Method mul, addr 0x464f960, size 0x7c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float3
  mul(::Unity::Mathematics::quaternion q, ::Unity::Mathematics::float3 v);

  /// @brief Method mul, addr 0x4648504, size 0x54, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float3x2
  mul(::Unity::Mathematics::float3x2 a, ::Unity::Mathematics::float2x2 b);

  /// @brief Method mul, addr 0x46486c4, size 0x88, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float3x2
  mul(::Unity::Mathematics::float3x3 a, ::Unity::Mathematics::float3x2 b);

  /// @brief Method mul, addr 0x4648968, size 0xb4, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float3x2
  mul(::Unity::Mathematics::float3x4 a, ::Unity::Mathematics::float4x2 b);

  /// @brief Method mul, addr 0x4648558, size 0x80, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float3x3
  mul(::Unity::Mathematics::float3x2 a, ::Unity::Mathematics::float2x3 b);

  /// @brief Method mul, addr 0x464874c, size 0xc0, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float3x3
  mul(::Unity::Mathematics::float3x3 a, ::Unity::Mathematics::float3x3 b);

  /// @brief Method mul, addr 0x4648a1c, size 0x104, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float3x3
  mul(::Unity::Mathematics::float3x4 a, ::Unity::Mathematics::float4x3 b);

  /// @brief Method mul, addr 0x46485d8, size 0xa4, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float3x4
  mul(::Unity::Mathematics::float3x2 a, ::Unity::Mathematics::float2x4 b);

  /// @brief Method mul, addr 0x464880c, size 0xfc, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float3x4
  mul(::Unity::Mathematics::float3x3 a, ::Unity::Mathematics::float3x4 b);

  /// @brief Method mul, addr 0x4648b20, size 0x174, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float3x4
  mul(::Unity::Mathematics::float3x4 a, ::Unity::Mathematics::float4x4 b);

  /// @brief Method mul, addr 0x46502a0, size 0xa4, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float4
  mul(::Unity::Mathematics::RigidTransform a, ::Unity::Mathematics::float4 pos);

  /// @brief Method mul, addr 0x4647d40, size 0x44, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float4
  mul(::Unity::Mathematics::float2 a, ::Unity::Mathematics::float2x4 b);

  /// @brief Method mul, addr 0x4647e28, size 0x6c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float4
  mul(::Unity::Mathematics::float3 a, ::Unity::Mathematics::float3x4 b);

  /// @brief Method mul, addr 0x4647f70, size 0x94, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float4
  mul(::Unity::Mathematics::float4 a, ::Unity::Mathematics::float4x4 b);

  /// @brief Method mul, addr 0x4648c94, size 0x20, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float4
  mul(::Unity::Mathematics::float4x2 a, ::Unity::Mathematics::float2 b);

  /// @brief Method mul, addr 0x4648db0, size 0x2c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float4
  mul(::Unity::Mathematics::float4x3 a, ::Unity::Mathematics::float3 b);

  /// @brief Method mul, addr 0x4648f70, size 0x34, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float4
  mul(::Unity::Mathematics::float4x4 a, ::Unity::Mathematics::float4 b);

  /// @brief Method mul, addr 0x4648cb4, size 0x24, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float4x2
  mul(::Unity::Mathematics::float4x2 a, ::Unity::Mathematics::float2x2 b);

  /// @brief Method mul, addr 0x4648ddc, size 0x4c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float4x2
  mul(::Unity::Mathematics::float4x3 a, ::Unity::Mathematics::float3x2 b);

  /// @brief Method mul, addr 0x4648fa4, size 0x60, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float4x2
  mul(::Unity::Mathematics::float4x4 a, ::Unity::Mathematics::float4x2 b);

  /// @brief Method mul, addr 0x4648cd8, size 0x5c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float4x3
  mul(::Unity::Mathematics::float4x2 a, ::Unity::Mathematics::float2x3 b);

  /// @brief Method mul, addr 0x4648e28, size 0x8c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float4x3
  mul(::Unity::Mathematics::float4x3 a, ::Unity::Mathematics::float3x3 b);

  /// @brief Method mul, addr 0x4649004, size 0xb4, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float4x3
  mul(::Unity::Mathematics::float4x4 a, ::Unity::Mathematics::float4x3 b);

  /// @brief Method mul, addr 0x4648d34, size 0x7c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float4x4
  mul(::Unity::Mathematics::float4x2 a, ::Unity::Mathematics::float2x4 b);

  /// @brief Method mul, addr 0x4648eb4, size 0xbc, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float4x4
  mul(::Unity::Mathematics::float4x3 a, ::Unity::Mathematics::float3x4 b);

  /// @brief Method mul, addr 0x46490b8, size 0xf8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float4x4
  mul(::Unity::Mathematics::float4x4 a, ::Unity::Mathematics::float4x4 b);

  /// @brief Method mul, addr 0x464a970, size 0x24, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int2 mul(::Unity::Mathematics::int2 a,
                                               ::Unity::Mathematics::int2x2 b);

  /// @brief Method mul, addr 0x464ac24, size 0x24, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int2 mul(::Unity::Mathematics::int2x2 a,
                                               ::Unity::Mathematics::int2 b);

  /// @brief Method mul, addr 0x464ada8, size 0x38, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int2 mul(::Unity::Mathematics::int2x3 a,
                                               ::Unity::Mathematics::int3 b);

  /// @brief Method mul, addr 0x464b004, size 0x50, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int2 mul(::Unity::Mathematics::int2x4 a,
                                               ::Unity::Mathematics::int4 b);

  /// @brief Method mul, addr 0x464aa1c, size 0x30, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int2 mul(::Unity::Mathematics::int3 a,
                                               ::Unity::Mathematics::int3x2 b);

  /// @brief Method mul, addr 0x464ab10, size 0x40, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int2 mul(::Unity::Mathematics::int4 a,
                                               ::Unity::Mathematics::int4x2 b);

  /// @brief Method mul, addr 0x464ac48, size 0x3c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int2x2
  mul(::Unity::Mathematics::int2x2 a, ::Unity::Mathematics::int2x2 b);

  /// @brief Method mul, addr 0x464ade0, size 0x74, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int2x2
  mul(::Unity::Mathematics::int2x3 a, ::Unity::Mathematics::int3x2 b);

  /// @brief Method mul, addr 0x464b054, size 0x94, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int2x2
  mul(::Unity::Mathematics::int2x4 a, ::Unity::Mathematics::int4x2 b);

  /// @brief Method mul, addr 0x464ac84, size 0x80, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int2x3
  mul(::Unity::Mathematics::int2x2 a, ::Unity::Mathematics::int2x3 b);

  /// @brief Method mul, addr 0x464ae54, size 0xb8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int2x3
  mul(::Unity::Mathematics::int2x3 a, ::Unity::Mathematics::int3x3 b);

  /// @brief Method mul, addr 0x464b0e8, size 0xec, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int2x3
  mul(::Unity::Mathematics::int2x4 a, ::Unity::Mathematics::int4x3 b);

  /// @brief Method mul, addr 0x464ad04, size 0xa4, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int2x4
  mul(::Unity::Mathematics::int2x2 a, ::Unity::Mathematics::int2x4 b);

  /// @brief Method mul, addr 0x464af0c, size 0xf8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int2x4
  mul(::Unity::Mathematics::int2x3 a, ::Unity::Mathematics::int3x4 b);

  /// @brief Method mul, addr 0x464b1d4, size 0x144, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int2x4
  mul(::Unity::Mathematics::int2x4 a, ::Unity::Mathematics::int4x4 b);

  /// @brief Method mul, addr 0x464a994, size 0x30, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int3 mul(::Unity::Mathematics::int2 a,
                                               ::Unity::Mathematics::int2x3 b);

  /// @brief Method mul, addr 0x464aa4c, size 0x44, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int3 mul(::Unity::Mathematics::int3 a,
                                               ::Unity::Mathematics::int3x3 b);

  /// @brief Method mul, addr 0x464b318, size 0x30, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int3 mul(::Unity::Mathematics::int3x2 a,
                                               ::Unity::Mathematics::int2 b);

  /// @brief Method mul, addr 0x464b544, size 0x4c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int3 mul(::Unity::Mathematics::int3x3 a,
                                               ::Unity::Mathematics::int3 b);

  /// @brief Method mul, addr 0x464b890, size 0x6c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int3 mul(::Unity::Mathematics::int3x4 a,
                                               ::Unity::Mathematics::int4 b);

  /// @brief Method mul, addr 0x464ab50, size 0x58, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int3 mul(::Unity::Mathematics::int4 a,
                                               ::Unity::Mathematics::int4x3 b);

  /// @brief Method mul, addr 0x464b348, size 0x60, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int3x2
  mul(::Unity::Mathematics::int3x2 a, ::Unity::Mathematics::int2x2 b);

  /// @brief Method mul, addr 0x464b590, size 0xa4, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int3x2
  mul(::Unity::Mathematics::int3x3 a, ::Unity::Mathematics::int3x2 b);

  /// @brief Method mul, addr 0x464b8fc, size 0xd4, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int3x2
  mul(::Unity::Mathematics::int3x4 a, ::Unity::Mathematics::int4x2 b);

  /// @brief Method mul, addr 0x464b3a8, size 0xac, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int3x3
  mul(::Unity::Mathematics::int3x2 a, ::Unity::Mathematics::int2x3 b);

  /// @brief Method mul, addr 0x464b634, size 0xfc, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int3x3
  mul(::Unity::Mathematics::int3x3 a, ::Unity::Mathematics::int3x3 b);

  /// @brief Method mul, addr 0x464b9d0, size 0x144, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int3x3
  mul(::Unity::Mathematics::int3x4 a, ::Unity::Mathematics::int4x3 b);

  /// @brief Method mul, addr 0x464b454, size 0xf0, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int3x4
  mul(::Unity::Mathematics::int3x2 a, ::Unity::Mathematics::int2x4 b);

  /// @brief Method mul, addr 0x464b730, size 0x160, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int3x4
  mul(::Unity::Mathematics::int3x3 a, ::Unity::Mathematics::int3x4 b);

  /// @brief Method mul, addr 0x464bb14, size 0x1dc, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int3x4
  mul(::Unity::Mathematics::int3x4 a, ::Unity::Mathematics::int4x4 b);

  /// @brief Method mul, addr 0x464a9c4, size 0x40, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int4 mul(::Unity::Mathematics::int2 a,
                                               ::Unity::Mathematics::int2x4 b);

  /// @brief Method mul, addr 0x464aa90, size 0x5c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int4 mul(::Unity::Mathematics::int3 a,
                                               ::Unity::Mathematics::int3x4 b);

  /// @brief Method mul, addr 0x464aba8, size 0x7c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int4 mul(::Unity::Mathematics::int4 a,
                                               ::Unity::Mathematics::int4x4 b);

  /// @brief Method mul, addr 0x464bcf0, size 0x40, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int4 mul(::Unity::Mathematics::int4x2 a,
                                               ::Unity::Mathematics::int2 b);

  /// @brief Method mul, addr 0x464c04c, size 0x68, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int4 mul(::Unity::Mathematics::int4x3 a,
                                               ::Unity::Mathematics::int3 b);

  /// @brief Method mul, addr 0x464c588, size 0x8c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int4 mul(::Unity::Mathematics::int4x4 a,
                                               ::Unity::Mathematics::int4 b);

  /// @brief Method mul, addr 0x464bd30, size 0x74, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int4x2
  mul(::Unity::Mathematics::int4x2 a, ::Unity::Mathematics::int2x2 b);

  /// @brief Method mul, addr 0x464c0b4, size 0xf0, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int4x2
  mul(::Unity::Mathematics::int4x3 a, ::Unity::Mathematics::int3x2 b);

  /// @brief Method mul, addr 0x464c614, size 0x13c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int4x2
  mul(::Unity::Mathematics::int4x4 a, ::Unity::Mathematics::int4x2 b);

  /// @brief Method mul, addr 0x464bda4, size 0x10c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int4x3
  mul(::Unity::Mathematics::int4x2 a, ::Unity::Mathematics::int2x3 b);

  /// @brief Method mul, addr 0x464c1a4, size 0x190, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int4x3
  mul(::Unity::Mathematics::int4x3 a, ::Unity::Mathematics::int3x3 b);

  /// @brief Method mul, addr 0x464c750, size 0x1fc, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int4x3
  mul(::Unity::Mathematics::int4x4 a, ::Unity::Mathematics::int4x3 b);

  /// @brief Method mul, addr 0x464beb0, size 0x19c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int4x4
  mul(::Unity::Mathematics::int4x2 a, ::Unity::Mathematics::int2x4 b);

  /// @brief Method mul, addr 0x464c334, size 0x254, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int4x4
  mul(::Unity::Mathematics::int4x3 a, ::Unity::Mathematics::int3x4 b);

  /// @brief Method mul, addr 0x464c94c, size 0x2e8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int4x4
  mul(::Unity::Mathematics::int4x4 a, ::Unity::Mathematics::int4x4 b);

  /// @brief Method mul, addr 0x464f8ec, size 0x74, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::quaternion
  mul(::Unity::Mathematics::quaternion a, ::Unity::Mathematics::quaternion b);

  /// @brief Method mul, addr 0x464cc50, size 0x24, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint2
  mul(::Unity::Mathematics::uint2 a, ::Unity::Mathematics::uint2x2 b);

  /// @brief Method mul, addr 0x464cf04, size 0x24, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint2 mul(::Unity::Mathematics::uint2x2 a,
                                                ::Unity::Mathematics::uint2 b);

  /// @brief Method mul, addr 0x464d088, size 0x38, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint2 mul(::Unity::Mathematics::uint2x3 a,
                                                ::Unity::Mathematics::uint3 b);

  /// @brief Method mul, addr 0x464d2e4, size 0x50, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint2 mul(::Unity::Mathematics::uint2x4 a,
                                                ::Unity::Mathematics::uint4 b);

  /// @brief Method mul, addr 0x464ccfc, size 0x30, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint2
  mul(::Unity::Mathematics::uint3 a, ::Unity::Mathematics::uint3x2 b);

  /// @brief Method mul, addr 0x464cdf0, size 0x40, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint2
  mul(::Unity::Mathematics::uint4 a, ::Unity::Mathematics::uint4x2 b);

  /// @brief Method mul, addr 0x464cf28, size 0x3c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint2x2
  mul(::Unity::Mathematics::uint2x2 a, ::Unity::Mathematics::uint2x2 b);

  /// @brief Method mul, addr 0x464d0c0, size 0x74, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint2x2
  mul(::Unity::Mathematics::uint2x3 a, ::Unity::Mathematics::uint3x2 b);

  /// @brief Method mul, addr 0x464d334, size 0x94, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint2x2
  mul(::Unity::Mathematics::uint2x4 a, ::Unity::Mathematics::uint4x2 b);

  /// @brief Method mul, addr 0x464cf64, size 0x80, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint2x3
  mul(::Unity::Mathematics::uint2x2 a, ::Unity::Mathematics::uint2x3 b);

  /// @brief Method mul, addr 0x464d134, size 0xb8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint2x3
  mul(::Unity::Mathematics::uint2x3 a, ::Unity::Mathematics::uint3x3 b);

  /// @brief Method mul, addr 0x464d3c8, size 0xec, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint2x3
  mul(::Unity::Mathematics::uint2x4 a, ::Unity::Mathematics::uint4x3 b);

  /// @brief Method mul, addr 0x464cfe4, size 0xa4, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint2x4
  mul(::Unity::Mathematics::uint2x2 a, ::Unity::Mathematics::uint2x4 b);

  /// @brief Method mul, addr 0x464d1ec, size 0xf8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint2x4
  mul(::Unity::Mathematics::uint2x3 a, ::Unity::Mathematics::uint3x4 b);

  /// @brief Method mul, addr 0x464d4b4, size 0x144, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint2x4
  mul(::Unity::Mathematics::uint2x4 a, ::Unity::Mathematics::uint4x4 b);

  /// @brief Method mul, addr 0x464cc74, size 0x30, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint3
  mul(::Unity::Mathematics::uint2 a, ::Unity::Mathematics::uint2x3 b);

  /// @brief Method mul, addr 0x464cd2c, size 0x44, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint3
  mul(::Unity::Mathematics::uint3 a, ::Unity::Mathematics::uint3x3 b);

  /// @brief Method mul, addr 0x464d5f8, size 0x30, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint3 mul(::Unity::Mathematics::uint3x2 a,
                                                ::Unity::Mathematics::uint2 b);

  /// @brief Method mul, addr 0x464d824, size 0x4c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint3 mul(::Unity::Mathematics::uint3x3 a,
                                                ::Unity::Mathematics::uint3 b);

  /// @brief Method mul, addr 0x464db70, size 0x6c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint3 mul(::Unity::Mathematics::uint3x4 a,
                                                ::Unity::Mathematics::uint4 b);

  /// @brief Method mul, addr 0x464ce30, size 0x58, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint3
  mul(::Unity::Mathematics::uint4 a, ::Unity::Mathematics::uint4x3 b);

  /// @brief Method mul, addr 0x464d628, size 0x60, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint3x2
  mul(::Unity::Mathematics::uint3x2 a, ::Unity::Mathematics::uint2x2 b);

  /// @brief Method mul, addr 0x464d870, size 0xa4, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint3x2
  mul(::Unity::Mathematics::uint3x3 a, ::Unity::Mathematics::uint3x2 b);

  /// @brief Method mul, addr 0x464dbdc, size 0xd4, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint3x2
  mul(::Unity::Mathematics::uint3x4 a, ::Unity::Mathematics::uint4x2 b);

  /// @brief Method mul, addr 0x464d688, size 0xac, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint3x3
  mul(::Unity::Mathematics::uint3x2 a, ::Unity::Mathematics::uint2x3 b);

  /// @brief Method mul, addr 0x464d914, size 0xfc, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint3x3
  mul(::Unity::Mathematics::uint3x3 a, ::Unity::Mathematics::uint3x3 b);

  /// @brief Method mul, addr 0x464dcb0, size 0x144, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint3x3
  mul(::Unity::Mathematics::uint3x4 a, ::Unity::Mathematics::uint4x3 b);

  /// @brief Method mul, addr 0x464d734, size 0xf0, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint3x4
  mul(::Unity::Mathematics::uint3x2 a, ::Unity::Mathematics::uint2x4 b);

  /// @brief Method mul, addr 0x464da10, size 0x160, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint3x4
  mul(::Unity::Mathematics::uint3x3 a, ::Unity::Mathematics::uint3x4 b);

  /// @brief Method mul, addr 0x464ddf4, size 0x1dc, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint3x4
  mul(::Unity::Mathematics::uint3x4 a, ::Unity::Mathematics::uint4x4 b);

  /// @brief Method mul, addr 0x464cca4, size 0x40, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint4
  mul(::Unity::Mathematics::uint2 a, ::Unity::Mathematics::uint2x4 b);

  /// @brief Method mul, addr 0x464cd70, size 0x5c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint4
  mul(::Unity::Mathematics::uint3 a, ::Unity::Mathematics::uint3x4 b);

  /// @brief Method mul, addr 0x464ce88, size 0x7c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint4
  mul(::Unity::Mathematics::uint4 a, ::Unity::Mathematics::uint4x4 b);

  /// @brief Method mul, addr 0x464dfd0, size 0x40, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint4 mul(::Unity::Mathematics::uint4x2 a,
                                                ::Unity::Mathematics::uint2 b);

  /// @brief Method mul, addr 0x464e32c, size 0x68, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint4 mul(::Unity::Mathematics::uint4x3 a,
                                                ::Unity::Mathematics::uint3 b);

  /// @brief Method mul, addr 0x464e868, size 0x8c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint4 mul(::Unity::Mathematics::uint4x4 a,
                                                ::Unity::Mathematics::uint4 b);

  /// @brief Method mul, addr 0x464e010, size 0x74, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint4x2
  mul(::Unity::Mathematics::uint4x2 a, ::Unity::Mathematics::uint2x2 b);

  /// @brief Method mul, addr 0x464e394, size 0xf0, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint4x2
  mul(::Unity::Mathematics::uint4x3 a, ::Unity::Mathematics::uint3x2 b);

  /// @brief Method mul, addr 0x464e8f4, size 0x13c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint4x2
  mul(::Unity::Mathematics::uint4x4 a, ::Unity::Mathematics::uint4x2 b);

  /// @brief Method mul, addr 0x464e084, size 0x10c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint4x3
  mul(::Unity::Mathematics::uint4x2 a, ::Unity::Mathematics::uint2x3 b);

  /// @brief Method mul, addr 0x464e484, size 0x190, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint4x3
  mul(::Unity::Mathematics::uint4x3 a, ::Unity::Mathematics::uint3x3 b);

  /// @brief Method mul, addr 0x464ea30, size 0x1fc, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint4x3
  mul(::Unity::Mathematics::uint4x4 a, ::Unity::Mathematics::uint4x3 b);

  /// @brief Method mul, addr 0x464e190, size 0x19c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint4x4
  mul(::Unity::Mathematics::uint4x2 a, ::Unity::Mathematics::uint2x4 b);

  /// @brief Method mul, addr 0x464e614, size 0x254, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint4x4
  mul(::Unity::Mathematics::uint4x3 a, ::Unity::Mathematics::uint3x4 b);

  /// @brief Method mul, addr 0x464ec2c, size 0x2e8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint4x4
  mul(::Unity::Mathematics::uint4x4 a, ::Unity::Mathematics::uint4x4 b);

  /// @brief Method mul, addr 0x46491b8, size 0x10, virtual false, abstract:
  /// false, final false
  static inline double_t mul(::Unity::Mathematics::double2 a,
                             ::Unity::Mathematics::double2 b);

  /// @brief Method mul, addr 0x464925c, size 0x18, virtual false, abstract:
  /// false, final false
  static inline double_t mul(::Unity::Mathematics::double3 a,
                             ::Unity::Mathematics::double3 b);

  /// @brief Method mul, addr 0x464936c, size 0x20, virtual false, abstract:
  /// false, final false
  static inline double_t mul(::Unity::Mathematics::double4 a,
                             ::Unity::Mathematics::double4 b);

  /// @brief Method mul, addr 0x46491b0, size 0x8, virtual false, abstract:
  /// false, final false
  static inline double_t mul(double_t a, double_t b);

  /// @brief Method mul, addr 0x4647ce0, size 0x10, virtual false, abstract:
  /// false, final false
  static inline float_t mul(::Unity::Mathematics::float2 a,
                            ::Unity::Mathematics::float2 b);

  /// @brief Method mul, addr 0x4647d84, size 0x18, virtual false, abstract:
  /// false, final false
  static inline float_t mul(::Unity::Mathematics::float3 a,
                            ::Unity::Mathematics::float3 b);

  /// @brief Method mul, addr 0x4647e94, size 0x20, virtual false, abstract:
  /// false, final false
  static inline float_t mul(::Unity::Mathematics::float4 a,
                            ::Unity::Mathematics::float4 b);

  /// @brief Method mul, addr 0x4647cd8, size 0x8, virtual false, abstract:
  /// false, final false
  static inline float_t mul(float_t a, float_t b);

  /// @brief Method mul, addr 0x464a95c, size 0x14, virtual false, abstract:
  /// false, final false
  static inline int32_t mul(::Unity::Mathematics::int2 a,
                            ::Unity::Mathematics::int2 b);

  /// @brief Method mul, addr 0x464aa04, size 0x18, virtual false, abstract:
  /// false, final false
  static inline int32_t mul(::Unity::Mathematics::int3 a,
                            ::Unity::Mathematics::int3 b);

  /// @brief Method mul, addr 0x464aaec, size 0x24, virtual false, abstract:
  /// false, final false
  static inline int32_t mul(::Unity::Mathematics::int4 a,
                            ::Unity::Mathematics::int4 b);

  /// @brief Method mul, addr 0x464a954, size 0x8, virtual false, abstract:
  /// false, final false
  static inline int32_t mul(int32_t a, int32_t b);

  /// @brief Method mul, addr 0x464cc3c, size 0x14, virtual false, abstract:
  /// false, final false
  static inline uint32_t mul(::Unity::Mathematics::uint2 a,
                             ::Unity::Mathematics::uint2 b);

  /// @brief Method mul, addr 0x464cce4, size 0x18, virtual false, abstract:
  /// false, final false
  static inline uint32_t mul(::Unity::Mathematics::uint3 a,
                             ::Unity::Mathematics::uint3 b);

  /// @brief Method mul, addr 0x464cdcc, size 0x24, virtual false, abstract:
  /// false, final false
  static inline uint32_t mul(::Unity::Mathematics::uint4 a,
                             ::Unity::Mathematics::uint4 b);

  /// @brief Method mul, addr 0x464cc34, size 0x8, virtual false, abstract:
  /// false, final false
  static inline uint32_t mul(uint32_t a, uint32_t b);

  /// @brief Method nlerp, addr 0x464fa58, size 0x114, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::quaternion
  nlerp(::Unity::Mathematics::quaternion q1,
        ::Unity::Mathematics::quaternion q2, float_t t);

  /// @brief Method normalize, addr 0x4641394, size 0x74, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double2
  normalize(::Unity::Mathematics::double2 x);

  /// @brief Method normalize, addr 0x4641408, size 0x8c, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double3
  normalize(::Unity::Mathematics::double3 x);

  /// @brief Method normalize, addr 0x4641494, size 0x9c, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double4
  normalize(::Unity::Mathematics::double4 x);

  /// @brief Method normalize, addr 0x46411f8, size 0x74, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float2
  normalize(::Unity::Mathematics::float2 x);

  /// @brief Method normalize, addr 0x464126c, size 0x8c, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float3
  normalize(::Unity::Mathematics::float3 x);

  /// @brief Method normalize, addr 0x46412f8, size 0x9c, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float4
  normalize(::Unity::Mathematics::float4 x);

  /// @brief Method normalize, addr 0x464f0b4, size 0x9c, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::quaternion
  normalize(::Unity::Mathematics::quaternion q);

  /// @brief Method normalizesafe, addr 0x4641790, size 0xa0, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double2
  normalizesafe(::Unity::Mathematics::double2 x,
                ::Unity::Mathematics::double2 defaultvalue);

  /// @brief Method normalizesafe, addr 0x4641830, size 0xc0, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double3
  normalizesafe(::Unity::Mathematics::double3 x,
                ::Unity::Mathematics::double3 defaultvalue);

  /// @brief Method normalizesafe, addr 0x46418f0, size 0x100, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double4
  normalizesafe(::Unity::Mathematics::double4 x,
                ::Unity::Mathematics::double4 defaultvalue);

  /// @brief Method normalizesafe, addr 0x4641530, size 0xa0, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float2
  normalizesafe(::Unity::Mathematics::float2 x,
                ::Unity::Mathematics::float2 defaultvalue);

  /// @brief Method normalizesafe, addr 0x46415d0, size 0xc0, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float3
  normalizesafe(::Unity::Mathematics::float3 x,
                ::Unity::Mathematics::float3 defaultvalue);

  /// @brief Method normalizesafe, addr 0x4641690, size 0x100, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float4
  normalizesafe(::Unity::Mathematics::float4 x,
                ::Unity::Mathematics::float4 defaultvalue);

  /// @brief Method normalizesafe, addr 0x464f150, size 0x120, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::quaternion
  normalizesafe(::Unity::Mathematics::quaternion q);

  /// @brief Method normalizesafe, addr 0x464f270, size 0x100, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::quaternion
  normalizesafe(::Unity::Mathematics::quaternion q,
                ::Unity::Mathematics::quaternion defaultvalue);

  /// @brief Method orthonormalize, addr 0x4647b24, size 0x1b4, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float3x3
  orthonormalize(::Unity::Mathematics::float3x3 i);

  /// @brief Method pow, addr 0x463d974, size 0xc4, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double2
  pow(::Unity::Mathematics::double2 x, ::Unity::Mathematics::double2 y);

  /// @brief Method pow, addr 0x463da38, size 0x118, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double3
  pow(::Unity::Mathematics::double3 x, ::Unity::Mathematics::double3 y);

  /// @brief Method pow, addr 0x463db50, size 0x16c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double4
  pow(::Unity::Mathematics::double4 x, ::Unity::Mathematics::double4 y);

  /// @brief Method pow, addr 0x463d5ac, size 0xc8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float2
  pow(::Unity::Mathematics::float2 x, ::Unity::Mathematics::float2 y);

  /// @brief Method pow, addr 0x463d674, size 0x120, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float3
  pow(::Unity::Mathematics::float3 x, ::Unity::Mathematics::float3 y);

  /// @brief Method pow, addr 0x463d794, size 0x178, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float4
  pow(::Unity::Mathematics::float4 x, ::Unity::Mathematics::float4 y);

  /// @brief Method pow, addr 0x463d90c, size 0x68, virtual false, abstract:
  /// false, final false
  static inline double_t pow(double_t x, double_t y);

  /// @brief Method pow, addr 0x463d53c, size 0x70, virtual false, abstract:
  /// false, final false
  static inline float_t pow(float_t x, float_t y);

  /// @brief Method project, addr 0x4643854, size 0x28, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double2
  project(::Unity::Mathematics::double2 a, ::Unity::Mathematics::double2 b);

  /// @brief Method project, addr 0x464387c, size 0x3c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double3
  project(::Unity::Mathematics::double3 a, ::Unity::Mathematics::double3 b);

  /// @brief Method project, addr 0x46438b8, size 0x50, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double4
  project(::Unity::Mathematics::double4 a, ::Unity::Mathematics::double4 b);

  /// @brief Method project, addr 0x46435fc, size 0x28, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float2
  project(::Unity::Mathematics::float2 a, ::Unity::Mathematics::float2 b);

  /// @brief Method project, addr 0x4643624, size 0x3c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float3
  project(::Unity::Mathematics::float3 a, ::Unity::Mathematics::float3 b);

  /// @brief Method project, addr 0x4643660, size 0x50, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float4
  project(::Unity::Mathematics::float4 a, ::Unity::Mathematics::float4 b);

  /// @brief Method projectsafe, addr 0x4643908, size 0x58, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double2
  projectsafe(::Unity::Mathematics::double2 a, ::Unity::Mathematics::double2 b,
              ::Unity::Mathematics::double2 defaultValue);

  /// @brief Method projectsafe, addr 0x4643960, size 0x94, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double3
  projectsafe(::Unity::Mathematics::double3 a, ::Unity::Mathematics::double3 b,
              ::Unity::Mathematics::double3 defaultValue);

  /// @brief Method projectsafe, addr 0x46439f4, size 0xb8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double4
  projectsafe(::Unity::Mathematics::double4 a, ::Unity::Mathematics::double4 b,
              ::Unity::Mathematics::double4 defaultValue);

  /// @brief Method projectsafe, addr 0x46436b0, size 0x58, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float2
  projectsafe(::Unity::Mathematics::float2 a, ::Unity::Mathematics::float2 b,
              ::Unity::Mathematics::float2 defaultValue);

  /// @brief Method projectsafe, addr 0x4643708, size 0x94, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float3
  projectsafe(::Unity::Mathematics::float3 a, ::Unity::Mathematics::float3 b,
              ::Unity::Mathematics::float3 defaultValue);

  /// @brief Method projectsafe, addr 0x464379c, size 0xb8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float4
  projectsafe(::Unity::Mathematics::float4 a, ::Unity::Mathematics::float4 b,
              ::Unity::Mathematics::float4 defaultValue);

  /// @brief Method quaternion, addr 0x464ef1c, size 0x40, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::quaternion
  quaternion(::Unity::Mathematics::float3x3 m);

  /// @brief Method quaternion, addr 0x464ef5c, size 0x40, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::quaternion
  quaternion(::Unity::Mathematics::float4x4 m);

  /// @brief Method quaternion, addr 0x464ef18, size 0x4, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::quaternion
  quaternion(::Unity::Mathematics::float4 value);

  /// @brief Method quaternion, addr 0x464ef14, size 0x4, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::quaternion
  quaternion(float_t x, float_t y, float_t z, float_t w);

  /// @brief Method radians, addr 0x4646a18, size 0x14, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double2
  radians(::Unity::Mathematics::double2 x);

  /// @brief Method radians, addr 0x4646a2c, size 0x18, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double3
  radians(::Unity::Mathematics::double3 x);

  /// @brief Method radians, addr 0x4646a44, size 0x1c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double4
  radians(::Unity::Mathematics::double4 x);

  /// @brief Method radians, addr 0x46469c0, size 0x14, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float2
  radians(::Unity::Mathematics::float2 x);

  /// @brief Method radians, addr 0x46469d4, size 0x18, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float3
  radians(::Unity::Mathematics::float3 x);

  /// @brief Method radians, addr 0x46469ec, size 0x1c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float4
  radians(::Unity::Mathematics::float4 x);

  /// @brief Method radians, addr 0x4646a08, size 0x10, virtual false, abstract:
  /// false, final false
  static inline double_t radians(double_t x);

  /// @brief Method radians, addr 0x46469b0, size 0x10, virtual false, abstract:
  /// false, final false
  static inline float_t radians(float_t x);

  /// @brief Method rcp, addr 0x463d2c8, size 0x10, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double2
  rcp(::Unity::Mathematics::double2 x);

  /// @brief Method rcp, addr 0x463d2d8, size 0x14, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double3
  rcp(::Unity::Mathematics::double3 x);

  /// @brief Method rcp, addr 0x463d2ec, size 0x18, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double4
  rcp(::Unity::Mathematics::double4 x);

  /// @brief Method rcp, addr 0x463d280, size 0x10, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float2
  rcp(::Unity::Mathematics::float2 x);

  /// @brief Method rcp, addr 0x463d290, size 0x14, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float3
  rcp(::Unity::Mathematics::float3 x);

  /// @brief Method rcp, addr 0x463d2a4, size 0x18, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float4
  rcp(::Unity::Mathematics::float4 x);

  /// @brief Method rcp, addr 0x463d2bc, size 0xc, virtual false, abstract:
  /// false, final false
  static inline double_t rcp(double_t x);

  /// @brief Method rcp, addr 0x463d274, size 0xc, virtual false, abstract:
  /// false, final false
  static inline float_t rcp(float_t x);

  /// @brief Method reflect, addr 0x4642f30, size 0x28, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double2
  reflect(::Unity::Mathematics::double2 i, ::Unity::Mathematics::double2 n);

  /// @brief Method reflect, addr 0x4642f58, size 0x3c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double3
  reflect(::Unity::Mathematics::double3 i, ::Unity::Mathematics::double3 n);

  /// @brief Method reflect, addr 0x4642f94, size 0x50, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double4
  reflect(::Unity::Mathematics::double4 i, ::Unity::Mathematics::double4 n);

  /// @brief Method reflect, addr 0x4642e7c, size 0x28, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float2
  reflect(::Unity::Mathematics::float2 i, ::Unity::Mathematics::float2 n);

  /// @brief Method reflect, addr 0x4642ea4, size 0x3c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float3
  reflect(::Unity::Mathematics::float3 i, ::Unity::Mathematics::float3 n);

  /// @brief Method reflect, addr 0x4642ee0, size 0x50, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float4
  reflect(::Unity::Mathematics::float4 i, ::Unity::Mathematics::float4 n);

  /// @brief Method refract, addr 0x46432f0, size 0xd0, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double2
  refract(::Unity::Mathematics::double2 i, ::Unity::Mathematics::double2 n,
          double_t eta);

  /// @brief Method refract, addr 0x46433c0, size 0x108, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double3
  refract(::Unity::Mathematics::double3 i, ::Unity::Mathematics::double3 n,
          double_t eta);

  /// @brief Method refract, addr 0x46434c8, size 0x134, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double4
  refract(::Unity::Mathematics::double4 i, ::Unity::Mathematics::double4 n,
          double_t eta);

  /// @brief Method refract, addr 0x4642fe4, size 0xd0, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float2
  refract(::Unity::Mathematics::float2 i, ::Unity::Mathematics::float2 n,
          float_t eta);

  /// @brief Method refract, addr 0x46430b4, size 0x108, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float3
  refract(::Unity::Mathematics::float3 i, ::Unity::Mathematics::float3 n,
          float_t eta);

  /// @brief Method refract, addr 0x46431bc, size 0x134, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float4
  refract(::Unity::Mathematics::float4 i, ::Unity::Mathematics::float4 n,
          float_t eta);

  /// @brief Method remap, addr 0x4636258, size 0x38, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double2
  remap(::Unity::Mathematics::double2 a, ::Unity::Mathematics::double2 b,
        ::Unity::Mathematics::double2 c, ::Unity::Mathematics::double2 d,
        ::Unity::Mathematics::double2 x);

  /// @brief Method remap, addr 0x4636290, size 0x60, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double3
  remap(::Unity::Mathematics::double3 a, ::Unity::Mathematics::double3 b,
        ::Unity::Mathematics::double3 c, ::Unity::Mathematics::double3 d,
        ::Unity::Mathematics::double3 x);

  /// @brief Method remap, addr 0x46362f0, size 0x7c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double4
  remap(::Unity::Mathematics::double4 a, ::Unity::Mathematics::double4 b,
        ::Unity::Mathematics::double4 c, ::Unity::Mathematics::double4 d,
        ::Unity::Mathematics::double4 x);

  /// @brief Method remap, addr 0x4636124, size 0x38, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float2
  remap(::Unity::Mathematics::float2 a, ::Unity::Mathematics::float2 b,
        ::Unity::Mathematics::float2 c, ::Unity::Mathematics::float2 d,
        ::Unity::Mathematics::float2 x);

  /// @brief Method remap, addr 0x463615c, size 0x64, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float3
  remap(::Unity::Mathematics::float3 a, ::Unity::Mathematics::float3 b,
        ::Unity::Mathematics::float3 c, ::Unity::Mathematics::float3 d,
        ::Unity::Mathematics::float3 x);

  /// @brief Method remap, addr 0x46361c0, size 0x7c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float4
  remap(::Unity::Mathematics::float4 a, ::Unity::Mathematics::float4 b,
        ::Unity::Mathematics::float4 c, ::Unity::Mathematics::float4 d,
        ::Unity::Mathematics::float4 x);

  /// @brief Method remap, addr 0x463623c, size 0x1c, virtual false, abstract:
  /// false, final false
  static inline double_t remap(double_t a, double_t b, double_t c, double_t d,
                               double_t x);

  /// @brief Method remap, addr 0x4636108, size 0x1c, virtual false, abstract:
  /// false, final false
  static inline float_t remap(float_t a, float_t b, float_t c, float_t d,
                              float_t x);

  /// @brief Method reversebits, addr 0x46451c8, size 0xe8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::int2
  reversebits(::Unity::Mathematics::int2 x);

  /// @brief Method reversebits, addr 0x46452b0, size 0x144, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::int3
  reversebits(::Unity::Mathematics::int3 x);

  /// @brief Method reversebits, addr 0x46453f4, size 0x8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::int4
  reversebits(::Unity::Mathematics::int4 x);

  /// @brief Method reversebits, addr 0x4645440, size 0xec, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::uint2
  reversebits(::Unity::Mathematics::uint2 x);

  /// @brief Method reversebits, addr 0x464552c, size 0x144, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::uint3
  reversebits(::Unity::Mathematics::uint3 x);

  /// @brief Method reversebits, addr 0x4645670, size 0x168, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::uint4
  reversebits(::Unity::Mathematics::uint4 x);

  /// @brief Method reversebits, addr 0x4645184, size 0x44, virtual false,
  /// abstract: false, final false
  static inline int32_t reversebits(int32_t x);

  /// @brief Method reversebits, addr 0x46457d8, size 0x6c, virtual false,
  /// abstract: false, final false
  static inline int64_t reversebits(int64_t x);

  /// @brief Method reversebits, addr 0x46453fc, size 0x44, virtual false,
  /// abstract: false, final false
  static inline uint32_t reversebits(uint32_t x);

  /// @brief Method reversebits, addr 0x4645844, size 0x6c, virtual false,
  /// abstract: false, final false
  static inline uint64_t reversebits(uint64_t x);

  /// @brief Method right, addr 0x4647914, size 0x10, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float3 right();

  /// @brief Method rol, addr 0x46458bc, size 0x20, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int2 rol(::Unity::Mathematics::int2 x,
                                               int32_t n);

  /// @brief Method rol, addr 0x46458dc, size 0x2c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int3 rol(::Unity::Mathematics::int3 x,
                                               int32_t n);

  /// @brief Method rol, addr 0x4645908, size 0x40, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int4 rol(::Unity::Mathematics::int4 x,
                                               int32_t n);

  /// @brief Method rol, addr 0x4645954, size 0x20, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint2 rol(::Unity::Mathematics::uint2 x,
                                                int32_t n);

  /// @brief Method rol, addr 0x4645974, size 0x2c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint3 rol(::Unity::Mathematics::uint3 x,
                                                int32_t n);

  /// @brief Method rol, addr 0x46459a0, size 0x40, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint4 rol(::Unity::Mathematics::uint4 x,
                                                int32_t n);

  /// @brief Method rol, addr 0x46458b0, size 0xc, virtual false, abstract:
  /// false, final false
  static inline int32_t rol(int32_t x, int32_t n);

  /// @brief Method rol, addr 0x46459e0, size 0xc, virtual false, abstract:
  /// false, final false
  static inline int64_t rol(int64_t x, int32_t n);

  /// @brief Method rol, addr 0x4645948, size 0xc, virtual false, abstract:
  /// false, final false
  static inline uint32_t rol(uint32_t x, int32_t n);

  /// @brief Method rol, addr 0x46459ec, size 0xc, virtual false, abstract:
  /// false, final false
  static inline uint64_t rol(uint64_t x, int32_t n);

  /// @brief Method ror, addr 0x4645a00, size 0x20, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int2 ror(::Unity::Mathematics::int2 x,
                                               int32_t n);

  /// @brief Method ror, addr 0x4645a20, size 0x24, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int3 ror(::Unity::Mathematics::int3 x,
                                               int32_t n);

  /// @brief Method ror, addr 0x4645a44, size 0x38, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int4 ror(::Unity::Mathematics::int4 x,
                                               int32_t n);

  /// @brief Method ror, addr 0x4645a84, size 0x20, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint2 ror(::Unity::Mathematics::uint2 x,
                                                int32_t n);

  /// @brief Method ror, addr 0x4645aa4, size 0x24, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint3 ror(::Unity::Mathematics::uint3 x,
                                                int32_t n);

  /// @brief Method ror, addr 0x4645ac8, size 0x38, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint4 ror(::Unity::Mathematics::uint4 x,
                                                int32_t n);

  /// @brief Method ror, addr 0x46459f8, size 0x8, virtual false, abstract:
  /// false, final false
  static inline int32_t ror(int32_t x, int32_t n);

  /// @brief Method ror, addr 0x4645b00, size 0x8, virtual false, abstract:
  /// false, final false
  static inline int64_t ror(int64_t x, int32_t n);

  /// @brief Method ror, addr 0x4645a7c, size 0x8, virtual false, abstract:
  /// false, final false
  static inline uint32_t ror(uint32_t x, int32_t n);

  /// @brief Method ror, addr 0x4645b08, size 0x8, virtual false, abstract:
  /// false, final false
  static inline uint64_t ror(uint64_t x, int32_t n);

  /// @brief Method rotate, addr 0x462cf7c, size 0x58, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double3
  rotate(::Unity::Mathematics::double4x4 a, ::Unity::Mathematics::double3 b);

  /// @brief Method rotate, addr 0x4650344, size 0x84, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float3
  rotate(::Unity::Mathematics::RigidTransform a,
         ::Unity::Mathematics::float3 dir);

  /// @brief Method rotate, addr 0x4630548, size 0x48, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float3
  rotate(::Unity::Mathematics::float4x4 a, ::Unity::Mathematics::float3 b);

  /// @brief Method rotate, addr 0x464f9dc, size 0x7c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float3
  rotate(::Unity::Mathematics::quaternion q, ::Unity::Mathematics::float3 v);

  /// @brief Method round, addr 0x463c2f4, size 0x15c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double2
  round(::Unity::Mathematics::double2 x);

  /// @brief Method round, addr 0x463c450, size 0x208, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double3
  round(::Unity::Mathematics::double3 x);

  /// @brief Method round, addr 0x463c658, size 0x29c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double4
  round(::Unity::Mathematics::double4 x);

  /// @brief Method round, addr 0x463bbe4, size 0x178, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float2
  round(::Unity::Mathematics::float2 x);

  /// @brief Method round, addr 0x463bd5c, size 0x210, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float3
  round(::Unity::Mathematics::float3 x);

  /// @brief Method round, addr 0x463bf6c, size 0x2c0, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float4
  round(::Unity::Mathematics::float4 x);

  /// @brief Method round, addr 0x463c22c, size 0xc8, virtual false, abstract:
  /// false, final false
  static inline double_t round(double_t x);

  /// @brief Method round, addr 0x463bb1c, size 0xc8, virtual false, abstract:
  /// false, final false
  static inline float_t round(float_t x);

  /// @brief Method rsqrt, addr 0x4641110, size 0x9c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double2
  rsqrt(::Unity::Mathematics::double2 x);

  /// @brief Method rsqrt, addr 0x46411ac, size 0x24, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double3
  rsqrt(::Unity::Mathematics::double3 x);

  /// @brief Method rsqrt, addr 0x46411d0, size 0x28, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double4
  rsqrt(::Unity::Mathematics::double4 x);

  /// @brief Method rsqrt, addr 0x4640fcc, size 0x9c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float2
  rsqrt(::Unity::Mathematics::float2 x);

  /// @brief Method rsqrt, addr 0x4641068, size 0x24, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float3
  rsqrt(::Unity::Mathematics::float3 x);

  /// @brief Method rsqrt, addr 0x464108c, size 0x28, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float4
  rsqrt(::Unity::Mathematics::float4 x);

  /// @brief Method rsqrt, addr 0x46410b4, size 0x5c, virtual false, abstract:
  /// false, final false
  static inline double_t rsqrt(double_t x);

  /// @brief Method rsqrt, addr 0x4640f70, size 0x5c, virtual false, abstract:
  /// false, final false
  static inline float_t rsqrt(float_t x);

  /// @brief Method saturate, addr 0x4636ce4, size 0x60, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double2
  saturate(::Unity::Mathematics::double2 x);

  /// @brief Method saturate, addr 0x4636d44, size 0x88, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double3
  saturate(::Unity::Mathematics::double3 x);

  /// @brief Method saturate, addr 0x4636dcc, size 0xb0, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double4
  saturate(::Unity::Mathematics::double4 x);

  /// @brief Method saturate, addr 0x4636b14, size 0x60, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float2
  saturate(::Unity::Mathematics::float2 x);

  /// @brief Method saturate, addr 0x4636b74, size 0x88, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float3
  saturate(::Unity::Mathematics::float3 x);

  /// @brief Method saturate, addr 0x4636bfc, size 0xb0, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float4
  saturate(::Unity::Mathematics::float4 x);

  /// @brief Method saturate, addr 0x4636cac, size 0x38, virtual false,
  /// abstract: false, final false
  static inline double_t saturate(double_t x);

  /// @brief Method saturate, addr 0x4636adc, size 0x38, virtual false,
  /// abstract: false, final false
  static inline float_t saturate(float_t x);

  /// @brief Method select, addr 0x4642d28, size 0x14, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double2
  select(::Unity::Mathematics::double2 a, ::Unity::Mathematics::double2 b,
         ::Unity::Mathematics::bool2 c);

  /// @brief Method select, addr 0x4642cec, size 0x10, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double2
  select(::Unity::Mathematics::double2 a, ::Unity::Mathematics::double2 b,
         bool c);

  /// @brief Method select, addr 0x4642d3c, size 0x1c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double3
  select(::Unity::Mathematics::double3 a, ::Unity::Mathematics::double3 b,
         ::Unity::Mathematics::bool3 c);

  /// @brief Method select, addr 0x4642cfc, size 0x14, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double3
  select(::Unity::Mathematics::double3 a, ::Unity::Mathematics::double3 b,
         bool c);

  /// @brief Method select, addr 0x4642d58, size 0x24, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double4
  select(::Unity::Mathematics::double4 a, ::Unity::Mathematics::double4 b,
         ::Unity::Mathematics::bool4 c);

  /// @brief Method select, addr 0x4642d10, size 0x18, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double4
  select(::Unity::Mathematics::double4 a, ::Unity::Mathematics::double4 b,
         bool c);

  /// @brief Method select, addr 0x4642c8c, size 0x14, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float2
  select(::Unity::Mathematics::float2 a, ::Unity::Mathematics::float2 b,
         ::Unity::Mathematics::bool2 c);

  /// @brief Method select, addr 0x4642c50, size 0x10, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float2
  select(::Unity::Mathematics::float2 a, ::Unity::Mathematics::float2 b,
         bool c);

  /// @brief Method select, addr 0x4642ca0, size 0x1c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float3
  select(::Unity::Mathematics::float3 a, ::Unity::Mathematics::float3 b,
         ::Unity::Mathematics::bool3 c);

  /// @brief Method select, addr 0x4642c60, size 0x14, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float3
  select(::Unity::Mathematics::float3 a, ::Unity::Mathematics::float3 b,
         bool c);

  /// @brief Method select, addr 0x4642cbc, size 0x24, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float4
  select(::Unity::Mathematics::float4 a, ::Unity::Mathematics::float4 b,
         ::Unity::Mathematics::bool4 c);

  /// @brief Method select, addr 0x4642c74, size 0x18, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float4
  select(::Unity::Mathematics::float4 a, ::Unity::Mathematics::float4 b,
         bool c);

  /// @brief Method select, addr 0x4642b20, size 0x18, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int2
  select(::Unity::Mathematics::int2 a, ::Unity::Mathematics::int2 b,
         ::Unity::Mathematics::bool2 c);

  /// @brief Method select, addr 0x4642af0, size 0xc, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int2
  select(::Unity::Mathematics::int2 a, ::Unity::Mathematics::int2 b, bool c);

  /// @brief Method select, addr 0x4642b38, size 0x24, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int3
  select(::Unity::Mathematics::int3 a, ::Unity::Mathematics::int3 b,
         ::Unity::Mathematics::bool3 c);

  /// @brief Method select, addr 0x4642afc, size 0x14, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int3
  select(::Unity::Mathematics::int3 a, ::Unity::Mathematics::int3 b, bool c);

  /// @brief Method select, addr 0x4642b5c, size 0x2c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int4
  select(::Unity::Mathematics::int4 a, ::Unity::Mathematics::int4 b,
         ::Unity::Mathematics::bool4 c);

  /// @brief Method select, addr 0x4642b10, size 0x10, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int4
  select(::Unity::Mathematics::int4 a, ::Unity::Mathematics::int4 b, bool c);

  /// @brief Method select, addr 0x4642bc4, size 0x18, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint2
  select(::Unity::Mathematics::uint2 a, ::Unity::Mathematics::uint2 b,
         ::Unity::Mathematics::bool2 c);

  /// @brief Method select, addr 0x4642b94, size 0xc, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint2
  select(::Unity::Mathematics::uint2 a, ::Unity::Mathematics::uint2 b, bool c);

  /// @brief Method select, addr 0x4642bdc, size 0x24, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint3
  select(::Unity::Mathematics::uint3 a, ::Unity::Mathematics::uint3 b,
         ::Unity::Mathematics::bool3 c);

  /// @brief Method select, addr 0x4642ba0, size 0x14, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint3
  select(::Unity::Mathematics::uint3 a, ::Unity::Mathematics::uint3 b, bool c);

  /// @brief Method select, addr 0x4642c00, size 0x2c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint4
  select(::Unity::Mathematics::uint4 a, ::Unity::Mathematics::uint4 b,
         ::Unity::Mathematics::bool4 c);

  /// @brief Method select, addr 0x4642bb4, size 0x10, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint4
  select(::Unity::Mathematics::uint4 a, ::Unity::Mathematics::uint4 b, bool c);

  /// @brief Method select, addr 0x4642ce0, size 0xc, virtual false, abstract:
  /// false, final false
  static inline double_t select(double_t a, double_t b, bool c);

  /// @brief Method select, addr 0x4642c44, size 0xc, virtual false, abstract:
  /// false, final false
  static inline float_t select(float_t a, float_t b, bool c);

  /// @brief Method select, addr 0x4642ae4, size 0xc, virtual false, abstract:
  /// false, final false
  static inline int32_t select(int32_t a, int32_t b, bool c);

  /// @brief Method select, addr 0x4642c2c, size 0xc, virtual false, abstract:
  /// false, final false
  static inline int64_t select(int64_t a, int64_t b, bool c);

  /// @brief Method select, addr 0x4642b88, size 0xc, virtual false, abstract:
  /// false, final false
  static inline uint32_t select(uint32_t a, uint32_t b, bool c);

  /// @brief Method select, addr 0x4642c38, size 0xc, virtual false, abstract:
  /// false, final false
  static inline uint64_t select(uint64_t a, uint64_t b, bool c);

  /// @brief Method select_shuffle_component, addr 0x46277dc, size 0xdc, virtual
  /// false, abstract: false, final false
  static inline bool select_shuffle_component(
      ::Unity::Mathematics::bool2 a, ::Unity::Mathematics::bool2 b,
      ::Unity::Mathematics::math_ShuffleComponent component);

  /// @brief Method select_shuffle_component, addr 0x46281b8, size 0xec, virtual
  /// false, abstract: false, final false
  static inline bool select_shuffle_component(
      ::Unity::Mathematics::bool3 a, ::Unity::Mathematics::bool3 b,
      ::Unity::Mathematics::math_ShuffleComponent component);

  /// @brief Method select_shuffle_component, addr 0x4629024, size 0xfc, virtual
  /// false, abstract: false, final false
  static inline bool select_shuffle_component(
      ::Unity::Mathematics::bool4 a, ::Unity::Mathematics::bool4 b,
      ::Unity::Mathematics::math_ShuffleComponent component);

  /// @brief Method select_shuffle_component, addr 0x4629fec, size 0xd4, virtual
  /// false, abstract: false, final false
  static inline double_t select_shuffle_component(
      ::Unity::Mathematics::double2 a, ::Unity::Mathematics::double2 b,
      ::Unity::Mathematics::math_ShuffleComponent component);

  /// @brief Method select_shuffle_component, addr 0x462ae48, size 0xe4, virtual
  /// false, abstract: false, final false
  static inline double_t select_shuffle_component(
      ::Unity::Mathematics::double3 a, ::Unity::Mathematics::double3 b,
      ::Unity::Mathematics::math_ShuffleComponent component);

  /// @brief Method select_shuffle_component, addr 0x462c2d4, size 0xf4, virtual
  /// false, abstract: false, final false
  static inline double_t select_shuffle_component(
      ::Unity::Mathematics::double4 a, ::Unity::Mathematics::double4 b,
      ::Unity::Mathematics::math_ShuffleComponent component);

  /// @brief Method select_shuffle_component, addr 0x462dbf8, size 0xd4, virtual
  /// false, abstract: false, final false
  static inline float_t select_shuffle_component(
      ::Unity::Mathematics::float2 a, ::Unity::Mathematics::float2 b,
      ::Unity::Mathematics::math_ShuffleComponent component);

  /// @brief Method select_shuffle_component, addr 0x462e8b4, size 0xe4, virtual
  /// false, abstract: false, final false
  static inline float_t select_shuffle_component(
      ::Unity::Mathematics::float3 a, ::Unity::Mathematics::float3 b,
      ::Unity::Mathematics::math_ShuffleComponent component);

  /// @brief Method select_shuffle_component, addr 0x462fa9c, size 0xf4, virtual
  /// false, abstract: false, final false
  static inline float_t select_shuffle_component(
      ::Unity::Mathematics::float4 a, ::Unity::Mathematics::float4 b,
      ::Unity::Mathematics::math_ShuffleComponent component);

  /// @brief Method select_shuffle_component, addr 0x4631bd8, size 0xd4, virtual
  /// false, abstract: false, final false
  static inline int32_t select_shuffle_component(
      ::Unity::Mathematics::int2 a, ::Unity::Mathematics::int2 b,
      ::Unity::Mathematics::math_ShuffleComponent component);

  /// @brief Method select_shuffle_component, addr 0x46329ac, size 0xe4, virtual
  /// false, abstract: false, final false
  static inline int32_t select_shuffle_component(
      ::Unity::Mathematics::int3 a, ::Unity::Mathematics::int3 b,
      ::Unity::Mathematics::math_ShuffleComponent component);

  /// @brief Method select_shuffle_component, addr 0x4633d34, size 0xf4, virtual
  /// false, abstract: false, final false
  static inline int32_t select_shuffle_component(
      ::Unity::Mathematics::int4 a, ::Unity::Mathematics::int4 b,
      ::Unity::Mathematics::math_ShuffleComponent component);

  /// @brief Method select_shuffle_component, addr 0x4650854, size 0xd4, virtual
  /// false, abstract: false, final false
  static inline uint32_t select_shuffle_component(
      ::Unity::Mathematics::uint2 a, ::Unity::Mathematics::uint2 b,
      ::Unity::Mathematics::math_ShuffleComponent component);

  /// @brief Method select_shuffle_component, addr 0x46515a8, size 0xe4, virtual
  /// false, abstract: false, final false
  static inline uint32_t select_shuffle_component(
      ::Unity::Mathematics::uint3 a, ::Unity::Mathematics::uint3 b,
      ::Unity::Mathematics::math_ShuffleComponent component);

  /// @brief Method select_shuffle_component, addr 0x46528c8, size 0xf4, virtual
  /// false, abstract: false, final false
  static inline uint32_t select_shuffle_component(
      ::Unity::Mathematics::uint4 a, ::Unity::Mathematics::uint4 b,
      ::Unity::Mathematics::math_ShuffleComponent component);

  /// @brief Method shuffle, addr 0x4627630, size 0x60, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::bool2
  shuffle(::Unity::Mathematics::bool2 left, ::Unity::Mathematics::bool2 right,
          ::Unity::Mathematics::math_ShuffleComponent x,
          ::Unity::Mathematics::math_ShuffleComponent y);

  /// @brief Method shuffle, addr 0x462800c, size 0x60, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::bool2
  shuffle(::Unity::Mathematics::bool3 left, ::Unity::Mathematics::bool3 right,
          ::Unity::Mathematics::math_ShuffleComponent x,
          ::Unity::Mathematics::math_ShuffleComponent y);

  /// @brief Method shuffle, addr 0x4628e78, size 0x60, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::bool2
  shuffle(::Unity::Mathematics::bool4 left, ::Unity::Mathematics::bool4 right,
          ::Unity::Mathematics::math_ShuffleComponent x,
          ::Unity::Mathematics::math_ShuffleComponent y);

  /// @brief Method shuffle, addr 0x4627690, size 0x8c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::bool3
  shuffle(::Unity::Mathematics::bool2 left, ::Unity::Mathematics::bool2 right,
          ::Unity::Mathematics::math_ShuffleComponent x,
          ::Unity::Mathematics::math_ShuffleComponent y,
          ::Unity::Mathematics::math_ShuffleComponent z);

  /// @brief Method shuffle, addr 0x462806c, size 0x8c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::bool3
  shuffle(::Unity::Mathematics::bool3 left, ::Unity::Mathematics::bool3 right,
          ::Unity::Mathematics::math_ShuffleComponent x,
          ::Unity::Mathematics::math_ShuffleComponent y,
          ::Unity::Mathematics::math_ShuffleComponent z);

  /// @brief Method shuffle, addr 0x4628ed8, size 0x8c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::bool3
  shuffle(::Unity::Mathematics::bool4 left, ::Unity::Mathematics::bool4 right,
          ::Unity::Mathematics::math_ShuffleComponent x,
          ::Unity::Mathematics::math_ShuffleComponent y,
          ::Unity::Mathematics::math_ShuffleComponent z);

  /// @brief Method shuffle, addr 0x462771c, size 0xc0, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::bool4
  shuffle(::Unity::Mathematics::bool2 left, ::Unity::Mathematics::bool2 right,
          ::Unity::Mathematics::math_ShuffleComponent x,
          ::Unity::Mathematics::math_ShuffleComponent y,
          ::Unity::Mathematics::math_ShuffleComponent z,
          ::Unity::Mathematics::math_ShuffleComponent w);

  /// @brief Method shuffle, addr 0x46280f8, size 0xc0, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::bool4
  shuffle(::Unity::Mathematics::bool3 left, ::Unity::Mathematics::bool3 right,
          ::Unity::Mathematics::math_ShuffleComponent x,
          ::Unity::Mathematics::math_ShuffleComponent y,
          ::Unity::Mathematics::math_ShuffleComponent z,
          ::Unity::Mathematics::math_ShuffleComponent w);

  /// @brief Method shuffle, addr 0x4628f64, size 0xc0, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::bool4
  shuffle(::Unity::Mathematics::bool4 left, ::Unity::Mathematics::bool4 right,
          ::Unity::Mathematics::math_ShuffleComponent x,
          ::Unity::Mathematics::math_ShuffleComponent y,
          ::Unity::Mathematics::math_ShuffleComponent z,
          ::Unity::Mathematics::math_ShuffleComponent w);

  /// @brief Method shuffle, addr 0x4629e24, size 0x68, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double2
  shuffle(::Unity::Mathematics::double2 left,
          ::Unity::Mathematics::double2 right,
          ::Unity::Mathematics::math_ShuffleComponent x,
          ::Unity::Mathematics::math_ShuffleComponent y);

  /// @brief Method shuffle, addr 0x462ac20, size 0x80, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double2
  shuffle(::Unity::Mathematics::double3 left,
          ::Unity::Mathematics::double3 right,
          ::Unity::Mathematics::math_ShuffleComponent x,
          ::Unity::Mathematics::math_ShuffleComponent y);

  /// @brief Method shuffle, addr 0x462c058, size 0x98, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double2
  shuffle(::Unity::Mathematics::double4 left,
          ::Unity::Mathematics::double4 right,
          ::Unity::Mathematics::math_ShuffleComponent x,
          ::Unity::Mathematics::math_ShuffleComponent y);

  /// @brief Method shuffle, addr 0x4629e8c, size 0x98, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double3
  shuffle(::Unity::Mathematics::double2 left,
          ::Unity::Mathematics::double2 right,
          ::Unity::Mathematics::math_ShuffleComponent x,
          ::Unity::Mathematics::math_ShuffleComponent y,
          ::Unity::Mathematics::math_ShuffleComponent z);

  /// @brief Method shuffle, addr 0x462aca0, size 0xb8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double3
  shuffle(::Unity::Mathematics::double3 left,
          ::Unity::Mathematics::double3 right,
          ::Unity::Mathematics::math_ShuffleComponent x,
          ::Unity::Mathematics::math_ShuffleComponent y,
          ::Unity::Mathematics::math_ShuffleComponent z);

  /// @brief Method shuffle, addr 0x462c0f0, size 0xd8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double3
  shuffle(::Unity::Mathematics::double4 left,
          ::Unity::Mathematics::double4 right,
          ::Unity::Mathematics::math_ShuffleComponent x,
          ::Unity::Mathematics::math_ShuffleComponent y,
          ::Unity::Mathematics::math_ShuffleComponent z);

  /// @brief Method shuffle, addr 0x4629f24, size 0xc8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double4
  shuffle(::Unity::Mathematics::double2 left,
          ::Unity::Mathematics::double2 right,
          ::Unity::Mathematics::math_ShuffleComponent x,
          ::Unity::Mathematics::math_ShuffleComponent y,
          ::Unity::Mathematics::math_ShuffleComponent z,
          ::Unity::Mathematics::math_ShuffleComponent w);

  /// @brief Method shuffle, addr 0x462ad58, size 0xf0, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double4
  shuffle(::Unity::Mathematics::double3 left,
          ::Unity::Mathematics::double3 right,
          ::Unity::Mathematics::math_ShuffleComponent x,
          ::Unity::Mathematics::math_ShuffleComponent y,
          ::Unity::Mathematics::math_ShuffleComponent z,
          ::Unity::Mathematics::math_ShuffleComponent w);

  /// @brief Method shuffle, addr 0x462c1c8, size 0x10c, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double4
  shuffle(::Unity::Mathematics::double4 left,
          ::Unity::Mathematics::double4 right,
          ::Unity::Mathematics::math_ShuffleComponent x,
          ::Unity::Mathematics::math_ShuffleComponent y,
          ::Unity::Mathematics::math_ShuffleComponent z,
          ::Unity::Mathematics::math_ShuffleComponent w);

  /// @brief Method shuffle, addr 0x462da30, size 0x68, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float2
  shuffle(::Unity::Mathematics::float2 left, ::Unity::Mathematics::float2 right,
          ::Unity::Mathematics::math_ShuffleComponent x,
          ::Unity::Mathematics::math_ShuffleComponent y);

  /// @brief Method shuffle, addr 0x462e68c, size 0x80, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float2
  shuffle(::Unity::Mathematics::float3 left, ::Unity::Mathematics::float3 right,
          ::Unity::Mathematics::math_ShuffleComponent x,
          ::Unity::Mathematics::math_ShuffleComponent y);

  /// @brief Method shuffle, addr 0x462f82c, size 0x98, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float2
  shuffle(::Unity::Mathematics::float4 left, ::Unity::Mathematics::float4 right,
          ::Unity::Mathematics::math_ShuffleComponent x,
          ::Unity::Mathematics::math_ShuffleComponent y);

  /// @brief Method shuffle, addr 0x462da98, size 0x98, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float3
  shuffle(::Unity::Mathematics::float2 left, ::Unity::Mathematics::float2 right,
          ::Unity::Mathematics::math_ShuffleComponent x,
          ::Unity::Mathematics::math_ShuffleComponent y,
          ::Unity::Mathematics::math_ShuffleComponent z);

  /// @brief Method shuffle, addr 0x462e70c, size 0xb8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float3
  shuffle(::Unity::Mathematics::float3 left, ::Unity::Mathematics::float3 right,
          ::Unity::Mathematics::math_ShuffleComponent x,
          ::Unity::Mathematics::math_ShuffleComponent y,
          ::Unity::Mathematics::math_ShuffleComponent z);

  /// @brief Method shuffle, addr 0x462f8c4, size 0xcc, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float3
  shuffle(::Unity::Mathematics::float4 left, ::Unity::Mathematics::float4 right,
          ::Unity::Mathematics::math_ShuffleComponent x,
          ::Unity::Mathematics::math_ShuffleComponent y,
          ::Unity::Mathematics::math_ShuffleComponent z);

  /// @brief Method shuffle, addr 0x462db30, size 0xc8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float4
  shuffle(::Unity::Mathematics::float2 left, ::Unity::Mathematics::float2 right,
          ::Unity::Mathematics::math_ShuffleComponent x,
          ::Unity::Mathematics::math_ShuffleComponent y,
          ::Unity::Mathematics::math_ShuffleComponent z,
          ::Unity::Mathematics::math_ShuffleComponent w);

  /// @brief Method shuffle, addr 0x462e7c4, size 0xf0, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float4
  shuffle(::Unity::Mathematics::float3 left, ::Unity::Mathematics::float3 right,
          ::Unity::Mathematics::math_ShuffleComponent x,
          ::Unity::Mathematics::math_ShuffleComponent y,
          ::Unity::Mathematics::math_ShuffleComponent z,
          ::Unity::Mathematics::math_ShuffleComponent w);

  /// @brief Method shuffle, addr 0x462f990, size 0x10c, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float4
  shuffle(::Unity::Mathematics::float4 left, ::Unity::Mathematics::float4 right,
          ::Unity::Mathematics::math_ShuffleComponent x,
          ::Unity::Mathematics::math_ShuffleComponent y,
          ::Unity::Mathematics::math_ShuffleComponent z,
          ::Unity::Mathematics::math_ShuffleComponent w);

  /// @brief Method shuffle, addr 0x4631a74, size 0x54, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int2
  shuffle(::Unity::Mathematics::int2 left, ::Unity::Mathematics::int2 right,
          ::Unity::Mathematics::math_ShuffleComponent x,
          ::Unity::Mathematics::math_ShuffleComponent y);

  /// @brief Method shuffle, addr 0x46327d0, size 0x74, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int2
  shuffle(::Unity::Mathematics::int3 left, ::Unity::Mathematics::int3 right,
          ::Unity::Mathematics::math_ShuffleComponent x,
          ::Unity::Mathematics::math_ShuffleComponent y);

  /// @brief Method shuffle, addr 0x4633b70, size 0x6c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int2
  shuffle(::Unity::Mathematics::int4 left, ::Unity::Mathematics::int4 right,
          ::Unity::Mathematics::math_ShuffleComponent x,
          ::Unity::Mathematics::math_ShuffleComponent y);

  /// @brief Method shuffle, addr 0x4631ac8, size 0x74, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int3
  shuffle(::Unity::Mathematics::int2 left, ::Unity::Mathematics::int2 right,
          ::Unity::Mathematics::math_ShuffleComponent x,
          ::Unity::Mathematics::math_ShuffleComponent y,
          ::Unity::Mathematics::math_ShuffleComponent z);

  /// @brief Method shuffle, addr 0x4632844, size 0x9c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int3
  shuffle(::Unity::Mathematics::int3 left, ::Unity::Mathematics::int3 right,
          ::Unity::Mathematics::math_ShuffleComponent x,
          ::Unity::Mathematics::math_ShuffleComponent y,
          ::Unity::Mathematics::math_ShuffleComponent z);

  /// @brief Method shuffle, addr 0x4633bdc, size 0x94, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int3
  shuffle(::Unity::Mathematics::int4 left, ::Unity::Mathematics::int4 right,
          ::Unity::Mathematics::math_ShuffleComponent x,
          ::Unity::Mathematics::math_ShuffleComponent y,
          ::Unity::Mathematics::math_ShuffleComponent z);

  /// @brief Method shuffle, addr 0x4631b3c, size 0x9c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int4
  shuffle(::Unity::Mathematics::int2 left, ::Unity::Mathematics::int2 right,
          ::Unity::Mathematics::math_ShuffleComponent x,
          ::Unity::Mathematics::math_ShuffleComponent y,
          ::Unity::Mathematics::math_ShuffleComponent z,
          ::Unity::Mathematics::math_ShuffleComponent w);

  /// @brief Method shuffle, addr 0x46328e0, size 0xcc, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int4
  shuffle(::Unity::Mathematics::int3 left, ::Unity::Mathematics::int3 right,
          ::Unity::Mathematics::math_ShuffleComponent x,
          ::Unity::Mathematics::math_ShuffleComponent y,
          ::Unity::Mathematics::math_ShuffleComponent z,
          ::Unity::Mathematics::math_ShuffleComponent w);

  /// @brief Method shuffle, addr 0x4633c70, size 0xc4, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int4
  shuffle(::Unity::Mathematics::int4 left, ::Unity::Mathematics::int4 right,
          ::Unity::Mathematics::math_ShuffleComponent x,
          ::Unity::Mathematics::math_ShuffleComponent y,
          ::Unity::Mathematics::math_ShuffleComponent z,
          ::Unity::Mathematics::math_ShuffleComponent w);

  /// @brief Method shuffle, addr 0x46506f0, size 0x54, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint2
  shuffle(::Unity::Mathematics::uint2 left, ::Unity::Mathematics::uint2 right,
          ::Unity::Mathematics::math_ShuffleComponent x,
          ::Unity::Mathematics::math_ShuffleComponent y);

  /// @brief Method shuffle, addr 0x46513cc, size 0x74, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint2
  shuffle(::Unity::Mathematics::uint3 left, ::Unity::Mathematics::uint3 right,
          ::Unity::Mathematics::math_ShuffleComponent x,
          ::Unity::Mathematics::math_ShuffleComponent y);

  /// @brief Method shuffle, addr 0x4652704, size 0x6c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint2
  shuffle(::Unity::Mathematics::uint4 left, ::Unity::Mathematics::uint4 right,
          ::Unity::Mathematics::math_ShuffleComponent x,
          ::Unity::Mathematics::math_ShuffleComponent y);

  /// @brief Method shuffle, addr 0x4650744, size 0x74, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint3
  shuffle(::Unity::Mathematics::uint2 left, ::Unity::Mathematics::uint2 right,
          ::Unity::Mathematics::math_ShuffleComponent x,
          ::Unity::Mathematics::math_ShuffleComponent y,
          ::Unity::Mathematics::math_ShuffleComponent z);

  /// @brief Method shuffle, addr 0x4651440, size 0x9c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint3
  shuffle(::Unity::Mathematics::uint3 left, ::Unity::Mathematics::uint3 right,
          ::Unity::Mathematics::math_ShuffleComponent x,
          ::Unity::Mathematics::math_ShuffleComponent y,
          ::Unity::Mathematics::math_ShuffleComponent z);

  /// @brief Method shuffle, addr 0x4652770, size 0x94, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint3
  shuffle(::Unity::Mathematics::uint4 left, ::Unity::Mathematics::uint4 right,
          ::Unity::Mathematics::math_ShuffleComponent x,
          ::Unity::Mathematics::math_ShuffleComponent y,
          ::Unity::Mathematics::math_ShuffleComponent z);

  /// @brief Method shuffle, addr 0x46507b8, size 0x9c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint4
  shuffle(::Unity::Mathematics::uint2 left, ::Unity::Mathematics::uint2 right,
          ::Unity::Mathematics::math_ShuffleComponent x,
          ::Unity::Mathematics::math_ShuffleComponent y,
          ::Unity::Mathematics::math_ShuffleComponent z,
          ::Unity::Mathematics::math_ShuffleComponent w);

  /// @brief Method shuffle, addr 0x46514dc, size 0xcc, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint4
  shuffle(::Unity::Mathematics::uint3 left, ::Unity::Mathematics::uint3 right,
          ::Unity::Mathematics::math_ShuffleComponent x,
          ::Unity::Mathematics::math_ShuffleComponent y,
          ::Unity::Mathematics::math_ShuffleComponent z,
          ::Unity::Mathematics::math_ShuffleComponent w);

  /// @brief Method shuffle, addr 0x4652804, size 0xc4, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint4
  shuffle(::Unity::Mathematics::uint4 left, ::Unity::Mathematics::uint4 right,
          ::Unity::Mathematics::math_ShuffleComponent x,
          ::Unity::Mathematics::math_ShuffleComponent y,
          ::Unity::Mathematics::math_ShuffleComponent z,
          ::Unity::Mathematics::math_ShuffleComponent w);

  /// @brief Method shuffle, addr 0x4627620, size 0x10, virtual false, abstract:
  /// false, final false
  static inline bool shuffle(::Unity::Mathematics::bool2 left,
                             ::Unity::Mathematics::bool2 right,
                             ::Unity::Mathematics::math_ShuffleComponent x);

  /// @brief Method shuffle, addr 0x4627ffc, size 0x10, virtual false, abstract:
  /// false, final false
  static inline bool shuffle(::Unity::Mathematics::bool3 left,
                             ::Unity::Mathematics::bool3 right,
                             ::Unity::Mathematics::math_ShuffleComponent x);

  /// @brief Method shuffle, addr 0x4628e68, size 0x10, virtual false, abstract:
  /// false, final false
  static inline bool shuffle(::Unity::Mathematics::bool4 left,
                             ::Unity::Mathematics::bool4 right,
                             ::Unity::Mathematics::math_ShuffleComponent x);

  /// @brief Method shuffle, addr 0x4629e1c, size 0x8, virtual false, abstract:
  /// false, final false
  static inline double_t shuffle(::Unity::Mathematics::double2 left,
                                 ::Unity::Mathematics::double2 right,
                                 ::Unity::Mathematics::math_ShuffleComponent x);

  /// @brief Method shuffle, addr 0x462ac18, size 0x8, virtual false, abstract:
  /// false, final false
  static inline double_t shuffle(::Unity::Mathematics::double3 left,
                                 ::Unity::Mathematics::double3 right,
                                 ::Unity::Mathematics::math_ShuffleComponent x);

  /// @brief Method shuffle, addr 0x462c050, size 0x8, virtual false, abstract:
  /// false, final false
  static inline double_t shuffle(::Unity::Mathematics::double4 left,
                                 ::Unity::Mathematics::double4 right,
                                 ::Unity::Mathematics::math_ShuffleComponent x);

  /// @brief Method shuffle, addr 0x462da28, size 0x8, virtual false, abstract:
  /// false, final false
  static inline float_t shuffle(::Unity::Mathematics::float2 left,
                                ::Unity::Mathematics::float2 right,
                                ::Unity::Mathematics::math_ShuffleComponent x);

  /// @brief Method shuffle, addr 0x462e684, size 0x8, virtual false, abstract:
  /// false, final false
  static inline float_t shuffle(::Unity::Mathematics::float3 left,
                                ::Unity::Mathematics::float3 right,
                                ::Unity::Mathematics::math_ShuffleComponent x);

  /// @brief Method shuffle, addr 0x462f824, size 0x8, virtual false, abstract:
  /// false, final false
  static inline float_t shuffle(::Unity::Mathematics::float4 left,
                                ::Unity::Mathematics::float4 right,
                                ::Unity::Mathematics::math_ShuffleComponent x);

  /// @brief Method shuffle, addr 0x4631a6c, size 0x8, virtual false, abstract:
  /// false, final false
  static inline int32_t shuffle(::Unity::Mathematics::int2 left,
                                ::Unity::Mathematics::int2 right,
                                ::Unity::Mathematics::math_ShuffleComponent x);

  /// @brief Method shuffle, addr 0x46327c0, size 0x10, virtual false, abstract:
  /// false, final false
  static inline int32_t shuffle(::Unity::Mathematics::int3 left,
                                ::Unity::Mathematics::int3 right,
                                ::Unity::Mathematics::math_ShuffleComponent x);

  /// @brief Method shuffle, addr 0x4633b68, size 0x8, virtual false, abstract:
  /// false, final false
  static inline int32_t shuffle(::Unity::Mathematics::int4 left,
                                ::Unity::Mathematics::int4 right,
                                ::Unity::Mathematics::math_ShuffleComponent x);

  /// @brief Method shuffle, addr 0x46506e8, size 0x8, virtual false, abstract:
  /// false, final false
  static inline uint32_t shuffle(::Unity::Mathematics::uint2 left,
                                 ::Unity::Mathematics::uint2 right,
                                 ::Unity::Mathematics::math_ShuffleComponent x);

  /// @brief Method shuffle, addr 0x46513bc, size 0x10, virtual false, abstract:
  /// false, final false
  static inline uint32_t shuffle(::Unity::Mathematics::uint3 left,
                                 ::Unity::Mathematics::uint3 right,
                                 ::Unity::Mathematics::math_ShuffleComponent x);

  /// @brief Method shuffle, addr 0x46526fc, size 0x8, virtual false, abstract:
  /// false, final false
  static inline uint32_t shuffle(::Unity::Mathematics::uint4 left,
                                 ::Unity::Mathematics::uint4 right,
                                 ::Unity::Mathematics::math_ShuffleComponent x);

  /// @brief Method sign, addr 0x463d3fc, size 0x48, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double2
  sign(::Unity::Mathematics::double2 x);

  /// @brief Method sign, addr 0x463d444, size 0x6c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double3
  sign(::Unity::Mathematics::double3 x);

  /// @brief Method sign, addr 0x463d4b0, size 0x8c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double4
  sign(::Unity::Mathematics::double4 x);

  /// @brief Method sign, addr 0x463d320, size 0x2c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float2
  sign(::Unity::Mathematics::float2 x);

  /// @brief Method sign, addr 0x463d34c, size 0x3c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float3
  sign(::Unity::Mathematics::float3 x);

  /// @brief Method sign, addr 0x463d388, size 0x4c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float4
  sign(::Unity::Mathematics::float4 x);

  /// @brief Method sign, addr 0x463d3d4, size 0x28, virtual false, abstract:
  /// false, final false
  static inline double_t sign(double_t x);

  /// @brief Method sign, addr 0x463d304, size 0x1c, virtual false, abstract:
  /// false, final false
  static inline float_t sign(float_t x);

  /// @brief Method sin, addr 0x463a110, size 0xa4, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double2
  sin(::Unity::Mathematics::double2 x);

  /// @brief Method sin, addr 0x463a1b4, size 0xec, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double3
  sin(::Unity::Mathematics::double3 x);

  /// @brief Method sin, addr 0x463a2a0, size 0x12c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double4
  sin(::Unity::Mathematics::double4 x);

  /// @brief Method sin, addr 0x4639df8, size 0xa4, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float2
  sin(::Unity::Mathematics::float2 x);

  /// @brief Method sin, addr 0x4639e9c, size 0xec, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float3
  sin(::Unity::Mathematics::float3 x);

  /// @brief Method sin, addr 0x4639f88, size 0x12c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float4
  sin(::Unity::Mathematics::float4 x);

  /// @brief Method sin, addr 0x463a0b4, size 0x5c, virtual false, abstract:
  /// false, final false
  static inline double_t sin(double_t x);

  /// @brief Method sin, addr 0x4639d94, size 0x64, virtual false, abstract:
  /// false, final false
  static inline float_t sin(float_t x);

  /// @brief Method sincos, addr 0x4643f6c, size 0x12c, virtual false, abstract:
  /// false, final false
  static inline void sincos(::Unity::Mathematics::double2 x,
                            ::ByRef<::Unity::Mathematics::double2> s,
                            ::ByRef<::Unity::Mathematics::double2> c);

  /// @brief Method sincos, addr 0x4644098, size 0x64, virtual false, abstract:
  /// false, final false
  static inline void sincos(::Unity::Mathematics::double3 x,
                            ::ByRef<::Unity::Mathematics::double3> s,
                            ::ByRef<::Unity::Mathematics::double3> c);

  /// @brief Method sincos, addr 0x46440fc, size 0x6c, virtual false, abstract:
  /// false, final false
  static inline void sincos(::Unity::Mathematics::double4 x,
                            ::ByRef<::Unity::Mathematics::double4> s,
                            ::ByRef<::Unity::Mathematics::double4> c);

  /// @brief Method sincos, addr 0x4643cb8, size 0x13c, virtual false, abstract:
  /// false, final false
  static inline void sincos(::Unity::Mathematics::float2 x,
                            ::ByRef<::Unity::Mathematics::float2> s,
                            ::ByRef<::Unity::Mathematics::float2> c);

  /// @brief Method sincos, addr 0x4643df4, size 0x64, virtual false, abstract:
  /// false, final false
  static inline void sincos(::Unity::Mathematics::float3 x,
                            ::ByRef<::Unity::Mathematics::float3> s,
                            ::ByRef<::Unity::Mathematics::float3> c);

  /// @brief Method sincos, addr 0x4643e58, size 0x6c, virtual false, abstract:
  /// false, final false
  static inline void sincos(::Unity::Mathematics::float4 x,
                            ::ByRef<::Unity::Mathematics::float4> s,
                            ::ByRef<::Unity::Mathematics::float4> c);

  /// @brief Method sincos, addr 0x4643ec4, size 0xa8, virtual false, abstract:
  /// false, final false
  static inline void sincos(double_t x, ::ByRef<double_t> s,
                            ::ByRef<double_t> c);

  /// @brief Method sincos, addr 0x4643c04, size 0xb4, virtual false, abstract:
  /// false, final false
  static inline void sincos(float_t x, ::ByRef<float_t> s, ::ByRef<float_t> c);

  /// @brief Method sinh, addr 0x463a748, size 0xa4, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double2
  sinh(::Unity::Mathematics::double2 x);

  /// @brief Method sinh, addr 0x463a7ec, size 0xec, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double3
  sinh(::Unity::Mathematics::double3 x);

  /// @brief Method sinh, addr 0x463a8d8, size 0x12c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double4
  sinh(::Unity::Mathematics::double4 x);

  /// @brief Method sinh, addr 0x463a430, size 0xa4, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float2
  sinh(::Unity::Mathematics::float2 x);

  /// @brief Method sinh, addr 0x463a4d4, size 0xec, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float3
  sinh(::Unity::Mathematics::float3 x);

  /// @brief Method sinh, addr 0x463a5c0, size 0x12c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float4
  sinh(::Unity::Mathematics::float4 x);

  /// @brief Method sinh, addr 0x463a6ec, size 0x5c, virtual false, abstract:
  /// false, final false
  static inline double_t sinh(double_t x);

  /// @brief Method sinh, addr 0x463a3cc, size 0x64, virtual false, abstract:
  /// false, final false
  static inline float_t sinh(float_t x);

  /// @brief Method slerp, addr 0x464fb6c, size 0x300, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::quaternion
  slerp(::Unity::Mathematics::quaternion q1,
        ::Unity::Mathematics::quaternion q2, float_t t);

  /// @brief Method smoothstep, addr 0x46424cc, size 0x70, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double2
  smoothstep(::Unity::Mathematics::double2 a, ::Unity::Mathematics::double2 b,
             ::Unity::Mathematics::double2 x);

  /// @brief Method smoothstep, addr 0x464253c, size 0xe8, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double3
  smoothstep(::Unity::Mathematics::double3 a, ::Unity::Mathematics::double3 b,
             ::Unity::Mathematics::double3 x);

  /// @brief Method smoothstep, addr 0x4642624, size 0x12c, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double4
  smoothstep(::Unity::Mathematics::double4 a, ::Unity::Mathematics::double4 b,
             ::Unity::Mathematics::double4 x);

  /// @brief Method smoothstep, addr 0x4642298, size 0x70, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float2
  smoothstep(::Unity::Mathematics::float2 a, ::Unity::Mathematics::float2 b,
             ::Unity::Mathematics::float2 x);

  /// @brief Method smoothstep, addr 0x4642308, size 0xcc, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float3
  smoothstep(::Unity::Mathematics::float3 a, ::Unity::Mathematics::float3 b,
             ::Unity::Mathematics::float3 x);

  /// @brief Method smoothstep, addr 0x46423d4, size 0xa0, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float4
  smoothstep(::Unity::Mathematics::float4 a, ::Unity::Mathematics::float4 b,
             ::Unity::Mathematics::float4 x);

  /// @brief Method smoothstep, addr 0x4642474, size 0x58, virtual false,
  /// abstract: false, final false
  static inline double_t smoothstep(double_t a, double_t b, double_t x);

  /// @brief Method smoothstep, addr 0x4642240, size 0x58, virtual false,
  /// abstract: false, final false
  static inline float_t smoothstep(float_t a, float_t b, float_t x);

  /// @brief Method sqrt, addr 0x4640d14, size 0x90, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double2
  sqrt(::Unity::Mathematics::double2 x);

  /// @brief Method sqrt, addr 0x4640da4, size 0xcc, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double3
  sqrt(::Unity::Mathematics::double3 x);

  /// @brief Method sqrt, addr 0x4640e70, size 0x100, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double4
  sqrt(::Unity::Mathematics::double4 x);

  /// @brief Method sqrt, addr 0x4640a5c, size 0x90, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float2
  sqrt(::Unity::Mathematics::float2 x);

  /// @brief Method sqrt, addr 0x4640aec, size 0xcc, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float3
  sqrt(::Unity::Mathematics::float3 x);

  /// @brief Method sqrt, addr 0x4640bb8, size 0x100, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float4
  sqrt(::Unity::Mathematics::float4 x);

  /// @brief Method sqrt, addr 0x4640cb8, size 0x5c, virtual false, abstract:
  /// false, final false
  static inline double_t sqrt(double_t x);

  /// @brief Method sqrt, addr 0x4640a00, size 0x5c, virtual false, abstract:
  /// false, final false
  static inline float_t sqrt(float_t x);

  /// @brief Method step, addr 0x4642e10, size 0x1c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double2
  step(::Unity::Mathematics::double2 y, ::Unity::Mathematics::double2 x);

  /// @brief Method step, addr 0x4642e2c, size 0x24, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double3
  step(::Unity::Mathematics::double3 y, ::Unity::Mathematics::double3 x);

  /// @brief Method step, addr 0x4642e50, size 0x2c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double4
  step(::Unity::Mathematics::double4 y, ::Unity::Mathematics::double4 x);

  /// @brief Method step, addr 0x4642d90, size 0x1c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float2
  step(::Unity::Mathematics::float2 y, ::Unity::Mathematics::float2 x);

  /// @brief Method step, addr 0x4642dac, size 0x24, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float3
  step(::Unity::Mathematics::float3 y, ::Unity::Mathematics::float3 x);

  /// @brief Method step, addr 0x4642dd0, size 0x2c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float4
  step(::Unity::Mathematics::float4 y, ::Unity::Mathematics::float4 x);

  /// @brief Method step, addr 0x4642dfc, size 0x14, virtual false, abstract:
  /// false, final false
  static inline double_t step(double_t y, double_t x);

  /// @brief Method step, addr 0x4642d7c, size 0x14, virtual false, abstract:
  /// false, final false
  static inline float_t step(float_t y, float_t x);

  /// @brief Method tan, addr 0x46374a8, size 0xa4, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double2
  tan(::Unity::Mathematics::double2 x);

  /// @brief Method tan, addr 0x463754c, size 0xec, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double3
  tan(::Unity::Mathematics::double3 x);

  /// @brief Method tan, addr 0x4637638, size 0x12c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double4
  tan(::Unity::Mathematics::double4 x);

  /// @brief Method tan, addr 0x4637190, size 0xa4, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float2
  tan(::Unity::Mathematics::float2 x);

  /// @brief Method tan, addr 0x4637234, size 0xec, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float3
  tan(::Unity::Mathematics::float3 x);

  /// @brief Method tan, addr 0x4637320, size 0x12c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float4
  tan(::Unity::Mathematics::float4 x);

  /// @brief Method tan, addr 0x463744c, size 0x5c, virtual false, abstract:
  /// false, final false
  static inline double_t tan(double_t x);

  /// @brief Method tan, addr 0x463712c, size 0x64, virtual false, abstract:
  /// false, final false
  static inline float_t tan(float_t x);

  /// @brief Method tanh, addr 0x4637ae0, size 0xa4, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double2
  tanh(::Unity::Mathematics::double2 x);

  /// @brief Method tanh, addr 0x4637b84, size 0xec, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double3
  tanh(::Unity::Mathematics::double3 x);

  /// @brief Method tanh, addr 0x4637c70, size 0x12c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double4
  tanh(::Unity::Mathematics::double4 x);

  /// @brief Method tanh, addr 0x46377c8, size 0xa4, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float2
  tanh(::Unity::Mathematics::float2 x);

  /// @brief Method tanh, addr 0x463786c, size 0xec, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float3
  tanh(::Unity::Mathematics::float3 x);

  /// @brief Method tanh, addr 0x4637958, size 0x12c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float4
  tanh(::Unity::Mathematics::float4 x);

  /// @brief Method tanh, addr 0x4637a84, size 0x5c, virtual false, abstract:
  /// false, final false
  static inline double_t tanh(double_t x);

  /// @brief Method tanh, addr 0x4637764, size 0x64, virtual false, abstract:
  /// false, final false
  static inline float_t tanh(float_t x);

  /// @brief Method transform, addr 0x462cfd4, size 0x6c, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double3
  transform(::Unity::Mathematics::double4x4 a, ::Unity::Mathematics::double3 b);

  /// @brief Method transform, addr 0x46503c8, size 0x98, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float3
  transform(::Unity::Mathematics::RigidTransform a,
            ::Unity::Mathematics::float3 pos);

  /// @brief Method transform, addr 0x4630590, size 0x58, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float3
  transform(::Unity::Mathematics::float4x4 a, ::Unity::Mathematics::float3 b);

  /// @brief Method transpose, addr 0x4627904, size 0x28, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2
  transpose(::Unity::Mathematics::bool2x2 v);

  /// @brief Method transpose, addr 0x4628320, size 0x30, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3
  transpose(::Unity::Mathematics::bool3x2 v);

  /// @brief Method transpose, addr 0x4629198, size 0x40, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4
  transpose(::Unity::Mathematics::bool4x2 v);

  /// @brief Method transpose, addr 0x4627a80, size 0x3c, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2
  transpose(::Unity::Mathematics::bool2x3 v);

  /// @brief Method transpose, addr 0x462859c, size 0x40, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3
  transpose(::Unity::Mathematics::bool3x3 v);

  /// @brief Method transpose, addr 0x4629448, size 0x70, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4
  transpose(::Unity::Mathematics::bool4x3 v);

  /// @brief Method transpose, addr 0x4627ca8, size 0x4c, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2
  transpose(::Unity::Mathematics::bool2x4 v);

  /// @brief Method transpose, addr 0x4628958, size 0x60, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3
  transpose(::Unity::Mathematics::bool3x4 v);

  /// @brief Method transpose, addr 0x4629848, size 0x90, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::bool4x4
  transpose(::Unity::Mathematics::bool4x4 v);

  /// @brief Method transpose, addr 0x462a1b8, size 0x10, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double2x2
  transpose(::Unity::Mathematics::double2x2 v);

  /// @brief Method transpose, addr 0x462b088, size 0x1c, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double2x3
  transpose(::Unity::Mathematics::double3x2 v);

  /// @brief Method transpose, addr 0x462c578, size 0x24, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double2x4
  transpose(::Unity::Mathematics::double4x2 v);

  /// @brief Method transpose, addr 0x462a460, size 0x1c, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double3x2
  transpose(::Unity::Mathematics::double2x3 v);

  /// @brief Method transpose, addr 0x462b3fc, size 0x2c, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double3x3
  transpose(::Unity::Mathematics::double3x3 v);

  /// @brief Method transpose, addr 0x462c9b4, size 0x34, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double3x4
  transpose(::Unity::Mathematics::double4x3 v);

  /// @brief Method transpose, addr 0x462a76c, size 0x24, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double4x2
  transpose(::Unity::Mathematics::double2x4 v);

  /// @brief Method transpose, addr 0x462b9a0, size 0x34, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double4x3
  transpose(::Unity::Mathematics::double3x4 v);

  /// @brief Method transpose, addr 0x462d040, size 0x44, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double4x4
  transpose(::Unity::Mathematics::double4x4 v);

  /// @brief Method transpose, addr 0x462ddc4, size 0x10, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float2x2
  transpose(::Unity::Mathematics::float2x2 v);

  /// @brief Method transpose, addr 0x462eaf4, size 0x24, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float2x3
  transpose(::Unity::Mathematics::float3x2 v);

  /// @brief Method transpose, addr 0x462fd1c, size 0x24, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float2x4
  transpose(::Unity::Mathematics::float4x2 v);

  /// @brief Method transpose, addr 0x462e02c, size 0x24, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float3x2
  transpose(::Unity::Mathematics::float2x3 v);

  /// @brief Method transpose, addr 0x462edfc, size 0x2c, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float3x3
  transpose(::Unity::Mathematics::float3x3 v);

  /// @brief Method transpose, addr 0x46300a4, size 0x34, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float3x4
  transpose(::Unity::Mathematics::float4x3 v);

  /// @brief Method transpose, addr 0x462e2bc, size 0x24, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float4x2
  transpose(::Unity::Mathematics::float2x4 v);

  /// @brief Method transpose, addr 0x462f2f8, size 0x34, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float4x3
  transpose(::Unity::Mathematics::float3x4 v);

  /// @brief Method transpose, addr 0x46305e8, size 0x44, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float4x4
  transpose(::Unity::Mathematics::float4x4 v);

  /// @brief Method transpose, addr 0x4631e10, size 0x14, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::int2x2
  transpose(::Unity::Mathematics::int2x2 v);

  /// @brief Method transpose, addr 0x4632cd0, size 0x24, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::int2x3
  transpose(::Unity::Mathematics::int3x2 v);

  /// @brief Method transpose, addr 0x46340a0, size 0x2c, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::int2x4
  transpose(::Unity::Mathematics::int4x2 v);

  /// @brief Method transpose, addr 0x46320f4, size 0x24, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::int3x2
  transpose(::Unity::Mathematics::int2x3 v);

  /// @brief Method transpose, addr 0x4633128, size 0x2c, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::int3x3
  transpose(::Unity::Mathematics::int3x3 v);

  /// @brief Method transpose, addr 0x463456c, size 0x34, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::int3x4
  transpose(::Unity::Mathematics::int4x3 v);

  /// @brief Method transpose, addr 0x4632498, size 0x24, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::int4x2
  transpose(::Unity::Mathematics::int2x4 v);

  /// @brief Method transpose, addr 0x4633708, size 0x34, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::int4x3
  transpose(::Unity::Mathematics::int3x4 v);

  /// @brief Method transpose, addr 0x4634ba0, size 0x44, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::int4x4
  transpose(::Unity::Mathematics::int4x4 v);

  /// @brief Method transpose, addr 0x4650a6c, size 0x14, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2
  transpose(::Unity::Mathematics::uint2x2 v);

  /// @brief Method transpose, addr 0x46518bc, size 0x24, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::uint2x3
  transpose(::Unity::Mathematics::uint3x2 v);

  /// @brief Method transpose, addr 0x4652c24, size 0x2c, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::uint2x4
  transpose(::Unity::Mathematics::uint4x2 v);

  /// @brief Method transpose, addr 0x4650d20, size 0x24, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2
  transpose(::Unity::Mathematics::uint2x3 v);

  /// @brief Method transpose, addr 0x4651d14, size 0x2c, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::uint3x3
  transpose(::Unity::Mathematics::uint3x3 v);

  /// @brief Method transpose, addr 0x46530f0, size 0x34, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4
  transpose(::Unity::Mathematics::uint4x3 v);

  /// @brief Method transpose, addr 0x46510b4, size 0x24, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::uint4x2
  transpose(::Unity::Mathematics::uint2x4 v);

  /// @brief Method transpose, addr 0x46522bc, size 0x34, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3
  transpose(::Unity::Mathematics::uint3x4 v);

  /// @brief Method transpose, addr 0x4653734, size 0x44, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::uint4x4
  transpose(::Unity::Mathematics::uint4x4 v);

  /// @brief Method trunc, addr 0x463ccb4, size 0xac, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double2
  trunc(::Unity::Mathematics::double2 x);

  /// @brief Method trunc, addr 0x463cd60, size 0xf8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double3
  trunc(::Unity::Mathematics::double3 x);

  /// @brief Method trunc, addr 0x463ce58, size 0x13c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double4
  trunc(::Unity::Mathematics::double4 x);

  /// @brief Method trunc, addr 0x463c95c, size 0xb0, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float2
  trunc(::Unity::Mathematics::float2 x);

  /// @brief Method trunc, addr 0x463ca0c, size 0x100, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float3
  trunc(::Unity::Mathematics::float3 x);

  /// @brief Method trunc, addr 0x463cb0c, size 0x148, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float4
  trunc(::Unity::Mathematics::float4 x);

  /// @brief Method trunc, addr 0x463cc54, size 0x60, virtual false, abstract:
  /// false, final false
  static inline double_t trunc(double_t x);

  /// @brief Method trunc, addr 0x463c8f4, size 0x68, virtual false, abstract:
  /// false, final false
  static inline float_t trunc(float_t x);

  /// @brief Method tzcnt, addr 0x4644c18, size 0x84, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int2 tzcnt(::Unity::Mathematics::int2 x);

  /// @brief Method tzcnt, addr 0x4644e98, size 0x84, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int2 tzcnt(::Unity::Mathematics::uint2 x);

  /// @brief Method tzcnt, addr 0x4644c9c, size 0xc0, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int3 tzcnt(::Unity::Mathematics::int3 x);

  /// @brief Method tzcnt, addr 0x4644f1c, size 0xc0, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int3 tzcnt(::Unity::Mathematics::uint3 x);

  /// @brief Method tzcnt, addr 0x4644d5c, size 0x100, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int4 tzcnt(::Unity::Mathematics::int4 x);

  /// @brief Method tzcnt, addr 0x4644fdc, size 0x100, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::int4 tzcnt(::Unity::Mathematics::uint4 x);

  /// @brief Method tzcnt, addr 0x4644bdc, size 0x3c, virtual false, abstract:
  /// false, final false
  static inline int32_t tzcnt(int32_t x);

  /// @brief Method tzcnt, addr 0x46450dc, size 0x54, virtual false, abstract:
  /// false, final false
  static inline int32_t tzcnt(int64_t x);

  /// @brief Method tzcnt, addr 0x4644e5c, size 0x3c, virtual false, abstract:
  /// false, final false
  static inline int32_t tzcnt(uint32_t x);

  /// @brief Method tzcnt, addr 0x4645130, size 0x54, virtual false, abstract:
  /// false, final false
  static inline int32_t tzcnt(uint64_t x);

  /// @brief Method uint2, addr 0x46505e0, size 0x10, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint2
  uint2(::Unity::Mathematics::bool2 v);

  /// @brief Method uint2, addr 0x4650658, size 0x28, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint2
  uint2(::Unity::Mathematics::double2 v);

  /// @brief Method uint2, addr 0x4650618, size 0x28, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint2
  uint2(::Unity::Mathematics::float2 v);

  /// @brief Method uint2, addr 0x46505fc, size 0x4, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint2 uint2(::Unity::Mathematics::int2 v);

  /// @brief Method uint2, addr 0x46505c8, size 0x18, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint2 uint2(bool v);

  /// @brief Method uint2, addr 0x4650640, size 0x18, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint2 uint2(double_t v);

  /// @brief Method uint2, addr 0x4650600, size 0x18, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint2 uint2(float_t v);

  /// @brief Method uint2, addr 0x46505f0, size 0xc, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint2 uint2(int32_t v);

  /// @brief Method uint2, addr 0x46505bc, size 0xc, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint2 uint2(uint32_t v);

  /// @brief Method uint2, addr 0x46505ac, size 0xc, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint2 uint2(uint32_t x, uint32_t y);

  /// @brief Method uint2, addr 0x46505b8, size 0x4, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint2
  uint2(::Unity::Mathematics::uint2 xy);

  /// @brief Method uint2x2, addr 0x4650928, size 0x4, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint2x2
  uint2x2(::Unity::Mathematics::uint2 c0, ::Unity::Mathematics::uint2 c1);

  /// @brief Method uint2x2, addr 0x465092c, size 0x14, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint2x2
  uint2x2(uint32_t m00, uint32_t m01, uint32_t m10, uint32_t m11);

  /// @brief Method uint2x2, addr 0x4650964, size 0x24, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint2x2
  uint2x2(::Unity::Mathematics::bool2x2 v);

  /// @brief Method uint2x2, addr 0x4650a20, size 0x4c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint2x2
  uint2x2(::Unity::Mathematics::double2x2 v);

  /// @brief Method uint2x2, addr 0x46509b8, size 0x4c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint2x2
  uint2x2(::Unity::Mathematics::float2x2 v);

  /// @brief Method uint2x2, addr 0x4650998, size 0x4, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint2x2
  uint2x2(::Unity::Mathematics::int2x2 v);

  /// @brief Method uint2x2, addr 0x4650950, size 0x14, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint2x2 uint2x2(bool v);

  /// @brief Method uint2x2, addr 0x4650a04, size 0x1c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint2x2 uint2x2(double_t v);

  /// @brief Method uint2x2, addr 0x465099c, size 0x1c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint2x2 uint2x2(float_t v);

  /// @brief Method uint2x2, addr 0x4650988, size 0x10, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint2x2 uint2x2(int32_t v);

  /// @brief Method uint2x2, addr 0x4650940, size 0x10, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint2x2 uint2x2(uint32_t v);

  /// @brief Method uint2x3, addr 0x4650b28, size 0xc, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint2x3
  uint2x3(::Unity::Mathematics::uint2 c0, ::Unity::Mathematics::uint2 c1,
          ::Unity::Mathematics::uint2 c2);

  /// @brief Method uint2x3, addr 0x4650b34, size 0x24, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint2x3
  uint2x3(uint32_t m00, uint32_t m01, uint32_t m02, uint32_t m10, uint32_t m11,
          uint32_t m12);

  /// @brief Method uint2x3, addr 0x4650b84, size 0x2c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint2x3
  uint2x3(::Unity::Mathematics::bool2x3 v);

  /// @brief Method uint2x3, addr 0x4650c9c, size 0x84, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint2x3
  uint2x3(::Unity::Mathematics::double2x3 v);

  /// @brief Method uint2x3, addr 0x4650bf8, size 0x84, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint2x3
  uint2x3(::Unity::Mathematics::float2x3 v);

  /// @brief Method uint2x3, addr 0x4650bc4, size 0x14, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint2x3
  uint2x3(::Unity::Mathematics::int2x3 v);

  /// @brief Method uint2x3, addr 0x4650b6c, size 0x18, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint2x3 uint2x3(bool v);

  /// @brief Method uint2x3, addr 0x4650c7c, size 0x20, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint2x3 uint2x3(double_t v);

  /// @brief Method uint2x3, addr 0x4650bd8, size 0x20, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint2x3 uint2x3(float_t v);

  /// @brief Method uint2x3, addr 0x4650bb0, size 0x14, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint2x3 uint2x3(int32_t v);

  /// @brief Method uint2x3, addr 0x4650b58, size 0x14, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint2x3 uint2x3(uint32_t v);

  /// @brief Method uint2x4, addr 0x4650e34, size 0xc, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint2x4
  uint2x4(::Unity::Mathematics::uint2 c0, ::Unity::Mathematics::uint2 c1,
          ::Unity::Mathematics::uint2 c2, ::Unity::Mathematics::uint2 c3);

  /// @brief Method uint2x4, addr 0x4650e40, size 0x2c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint2x4
  uint2x4(uint32_t m00, uint32_t m01, uint32_t m02, uint32_t m03, uint32_t m10,
          uint32_t m11, uint32_t m12, uint32_t m13);

  /// @brief Method uint2x4, addr 0x4650e98, size 0x64, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint2x4
  uint2x4(::Unity::Mathematics::bool2x4 v);

  /// @brief Method uint2x4, addr 0x4651008, size 0xac, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint2x4
  uint2x4(::Unity::Mathematics::double2x4 v);

  /// @brief Method uint2x4, addr 0x4650f3c, size 0xac, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint2x4
  uint2x4(::Unity::Mathematics::float2x4 v);

  /// @brief Method uint2x4, addr 0x4650f10, size 0xc, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint2x4
  uint2x4(::Unity::Mathematics::int2x4 v);

  /// @brief Method uint2x4, addr 0x4650e80, size 0x18, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint2x4 uint2x4(bool v);

  /// @brief Method uint2x4, addr 0x4650fe8, size 0x20, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint2x4 uint2x4(double_t v);

  /// @brief Method uint2x4, addr 0x4650f1c, size 0x20, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint2x4 uint2x4(float_t v);

  /// @brief Method uint2x4, addr 0x4650efc, size 0x14, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint2x4 uint2x4(int32_t v);

  /// @brief Method uint2x4, addr 0x4650e6c, size 0x14, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint2x4 uint2x4(uint32_t v);

  /// @brief Method uint3, addr 0x4651260, size 0x18, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint3
  uint3(::Unity::Mathematics::bool3 v);

  /// @brief Method uint3, addr 0x4651300, size 0x38, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint3
  uint3(::Unity::Mathematics::double3 v);

  /// @brief Method uint3, addr 0x46512ac, size 0x38, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint3
  uint3(::Unity::Mathematics::float3 v);

  /// @brief Method uint3, addr 0x4651288, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint3 uint3(::Unity::Mathematics::int3 v);

  /// @brief Method uint3, addr 0x4651244, size 0x1c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint3 uint3(bool v);

  /// @brief Method uint3, addr 0x46512e4, size 0x1c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint3 uint3(double_t v);

  /// @brief Method uint3, addr 0x4651290, size 0x1c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint3 uint3(float_t v);

  /// @brief Method uint3, addr 0x4651278, size 0x10, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint3 uint3(int32_t v);

  /// @brief Method uint3, addr 0x4651234, size 0x10, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint3 uint3(uint32_t v);

  /// @brief Method uint3, addr 0x4651200, size 0x10, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint3 uint3(uint32_t x, uint32_t y,
                                                  uint32_t z);

  /// @brief Method uint3, addr 0x4651210, size 0x14, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint3
  uint3(uint32_t x, ::Unity::Mathematics::uint2 yz);

  /// @brief Method uint3, addr 0x4651224, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint3
  uint3(::Unity::Mathematics::uint2 xy, uint32_t z);

  /// @brief Method uint3, addr 0x465122c, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint3
  uint3(::Unity::Mathematics::uint3 xyz);

  /// @brief Method uint3x2, addr 0x465168c, size 0x14, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint3x2
  uint3x2(::Unity::Mathematics::uint3 c0, ::Unity::Mathematics::uint3 c1);

  /// @brief Method uint3x2, addr 0x46516a0, size 0x10, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint3x2
  uint3x2(uint32_t m00, uint32_t m01, uint32_t m10, uint32_t m11, uint32_t m20,
          uint32_t m21);

  /// @brief Method uint3x2, addr 0x46516ec, size 0x30, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint3x2
  uint3x2(::Unity::Mathematics::bool3x2 v);

  /// @brief Method uint3x2, addr 0x4651834, size 0x88, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint3x2
  uint3x2(::Unity::Mathematics::double3x2 v);

  /// @brief Method uint3x2, addr 0x4651784, size 0x88, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint3x2
  uint3x2(::Unity::Mathematics::float3x2 v);

  /// @brief Method uint3x2, addr 0x4651738, size 0x24, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint3x2
  uint3x2(::Unity::Mathematics::int3x2 v);

  /// @brief Method uint3x2, addr 0x46516cc, size 0x20, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint3x2 uint3x2(bool v);

  /// @brief Method uint3x2, addr 0x465180c, size 0x28, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint3x2 uint3x2(double_t v);

  /// @brief Method uint3x2, addr 0x465175c, size 0x28, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint3x2 uint3x2(float_t v);

  /// @brief Method uint3x2, addr 0x465171c, size 0x1c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint3x2 uint3x2(int32_t v);

  /// @brief Method uint3x2, addr 0x46516b0, size 0x1c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint3x2 uint3x2(uint32_t v);

  /// @brief Method uint3x3, addr 0x46519e0, size 0x1c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint3x3
  uint3x3(::Unity::Mathematics::uint3 c0, ::Unity::Mathematics::uint3 c1,
          ::Unity::Mathematics::uint3 c2);

  /// @brief Method uint3x3, addr 0x46519fc, size 0x1c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint3x3
  uint3x3(uint32_t m00, uint32_t m01, uint32_t m02, uint32_t m10, uint32_t m11,
          uint32_t m12, uint32_t m20, uint32_t m21, uint32_t m22);

  /// @brief Method uint3x3, addr 0x4651a64, size 0x60, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint3x3
  uint3x3(::Unity::Mathematics::bool3x3 v);

  /// @brief Method uint3x3, addr 0x4651c48, size 0xcc, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint3x3
  uint3x3(::Unity::Mathematics::double3x3 v);

  /// @brief Method uint3x3, addr 0x4651b4c, size 0xcc, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint3x3
  uint3x3(::Unity::Mathematics::float3x3 v);

  /// @brief Method uint3x3, addr 0x4651ae8, size 0x34, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint3x3
  uint3x3(::Unity::Mathematics::int3x3 v);

  /// @brief Method uint3x3, addr 0x4651a3c, size 0x28, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint3x3 uint3x3(bool v);

  /// @brief Method uint3x3, addr 0x4651c18, size 0x30, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint3x3 uint3x3(double_t v);

  /// @brief Method uint3x3, addr 0x4651b1c, size 0x30, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint3x3 uint3x3(float_t v);

  /// @brief Method uint3x3, addr 0x4651ac4, size 0x24, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint3x3 uint3x3(int32_t v);

  /// @brief Method uint3x3, addr 0x4651a18, size 0x24, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint3x3 uint3x3(uint32_t v);

  /// @brief Method uint3x4, addr 0x4651ea0, size 0x24, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint3x4
  uint3x4(::Unity::Mathematics::uint3 c0, ::Unity::Mathematics::uint3 c1,
          ::Unity::Mathematics::uint3 c2, ::Unity::Mathematics::uint3 c3);

  /// @brief Method uint3x4, addr 0x4651ec4, size 0x2c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint3x4
  uint3x4(uint32_t m00, uint32_t m01, uint32_t m02, uint32_t m03, uint32_t m10,
          uint32_t m11, uint32_t m12, uint32_t m13, uint32_t m20, uint32_t m21,
          uint32_t m22, uint32_t m23);

  /// @brief Method uint3x4, addr 0x4651f4c, size 0x78, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint3x4
  uint3x4(::Unity::Mathematics::bool3x4 v);

  /// @brief Method uint3x4, addr 0x46521b0, size 0x10c, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4
  uint3x4(::Unity::Mathematics::double3x4 v);

  /// @brief Method uint3x4, addr 0x465206c, size 0x10c, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4
  uint3x4(::Unity::Mathematics::float3x4 v);

  /// @brief Method uint3x4, addr 0x4651ff0, size 0x44, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint3x4
  uint3x4(::Unity::Mathematics::int3x4 v);

  /// @brief Method uint3x4, addr 0x4651f1c, size 0x30, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint3x4 uint3x4(bool v);

  /// @brief Method uint3x4, addr 0x4652178, size 0x38, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint3x4 uint3x4(double_t v);

  /// @brief Method uint3x4, addr 0x4652034, size 0x38, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint3x4 uint3x4(float_t v);

  /// @brief Method uint3x4, addr 0x4651fc4, size 0x2c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint3x4 uint3x4(int32_t v);

  /// @brief Method uint3x4, addr 0x4651ef0, size 0x2c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint3x4 uint3x4(uint32_t v);

  /// @brief Method uint4, addr 0x4652544, size 0x20, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint4
  uint4(::Unity::Mathematics::bool4 v);

  /// @brief Method uint4, addr 0x46525fc, size 0x4c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint4
  uint4(::Unity::Mathematics::double4 v);

  /// @brief Method uint4, addr 0x4652594, size 0x4c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint4
  uint4(::Unity::Mathematics::float4 v);

  /// @brief Method uint4, addr 0x4652574, size 0x4, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint4 uint4(::Unity::Mathematics::int4 v);

  /// @brief Method uint4, addr 0x465252c, size 0x18, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint4 uint4(bool v);

  /// @brief Method uint4, addr 0x46525e0, size 0x1c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint4 uint4(double_t v);

  /// @brief Method uint4, addr 0x4652578, size 0x1c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint4 uint4(float_t v);

  /// @brief Method uint4, addr 0x4652564, size 0x10, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint4 uint4(int32_t v);

  /// @brief Method uint4, addr 0x465251c, size 0x10, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint4 uint4(uint32_t v);

  /// @brief Method uint4, addr 0x46524b0, size 0x18, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint4 uint4(uint32_t x, uint32_t y,
                                                  uint32_t z, uint32_t w);

  /// @brief Method uint4, addr 0x46524c8, size 0x10, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint4
  uint4(uint32_t x, uint32_t y, ::Unity::Mathematics::uint2 zw);

  /// @brief Method uint4, addr 0x46524d8, size 0x14, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint4
  uint4(uint32_t x, ::Unity::Mathematics::uint2 yz, uint32_t w);

  /// @brief Method uint4, addr 0x46524ec, size 0x14, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint4
  uint4(uint32_t x, ::Unity::Mathematics::uint3 yzw);

  /// @brief Method uint4, addr 0x4652500, size 0xc, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint4
  uint4(::Unity::Mathematics::uint2 xy, uint32_t z, uint32_t w);

  /// @brief Method uint4, addr 0x465250c, size 0x4, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint4
  uint4(::Unity::Mathematics::uint2 xy, ::Unity::Mathematics::uint2 zw);

  /// @brief Method uint4, addr 0x4652510, size 0x8, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint4
  uint4(::Unity::Mathematics::uint3 xyz, uint32_t w);

  /// @brief Method uint4, addr 0x4652518, size 0x4, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint4
  uint4(::Unity::Mathematics::uint4 xyzw);

  /// @brief Method uint4x2, addr 0x46529bc, size 0xc, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint4x2
  uint4x2(::Unity::Mathematics::uint4 c0, ::Unity::Mathematics::uint4 c1);

  /// @brief Method uint4x2, addr 0x46529c8, size 0x14, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint4x2
  uint4x2(uint32_t m00, uint32_t m01, uint32_t m10, uint32_t m11, uint32_t m20,
          uint32_t m21, uint32_t m30, uint32_t m31);

  /// @brief Method uint4x2, addr 0x4652a08, size 0x64, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint4x2
  uint4x2(::Unity::Mathematics::bool4x2 v);

  /// @brief Method uint4x2, addr 0x4652b78, size 0xac, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint4x2
  uint4x2(::Unity::Mathematics::double4x2 v);

  /// @brief Method uint4x2, addr 0x4652aac, size 0xac, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint4x2
  uint4x2(::Unity::Mathematics::float4x2 v);

  /// @brief Method uint4x2, addr 0x4652a80, size 0xc, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint4x2
  uint4x2(::Unity::Mathematics::int4x2 v);

  /// @brief Method uint4x2, addr 0x46529f0, size 0x18, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint4x2 uint4x2(bool v);

  /// @brief Method uint4x2, addr 0x4652b58, size 0x20, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint4x2 uint4x2(double_t v);

  /// @brief Method uint4x2, addr 0x4652a8c, size 0x20, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint4x2 uint4x2(float_t v);

  /// @brief Method uint4x2, addr 0x4652a6c, size 0x14, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint4x2 uint4x2(int32_t v);

  /// @brief Method uint4x2, addr 0x46529dc, size 0x14, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint4x2 uint4x2(uint32_t v);

  /// @brief Method uint4x3, addr 0x4652d88, size 0x10, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint4x3
  uint4x3(::Unity::Mathematics::uint4 c0, ::Unity::Mathematics::uint4 c1,
          ::Unity::Mathematics::uint4 c2);

  /// @brief Method uint4x3, addr 0x4652d98, size 0x2c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint4x3
  uint4x3(uint32_t m00, uint32_t m01, uint32_t m02, uint32_t m10, uint32_t m11,
          uint32_t m12, uint32_t m20, uint32_t m21, uint32_t m22, uint32_t m30,
          uint32_t m31, uint32_t m32);

  /// @brief Method uint4x3, addr 0x4652df8, size 0x84, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint4x3
  uint4x3(::Unity::Mathematics::bool4x3 v);

  /// @brief Method uint4x3, addr 0x4652ff0, size 0x100, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3
  uint4x3(::Unity::Mathematics::double4x3 v);

  /// @brief Method uint4x3, addr 0x4652ecc, size 0x100, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3
  uint4x3(::Unity::Mathematics::float4x3 v);

  /// @brief Method uint4x3, addr 0x4652e94, size 0x14, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint4x3
  uint4x3(::Unity::Mathematics::int4x3 v);

  /// @brief Method uint4x3, addr 0x4652ddc, size 0x1c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint4x3 uint4x3(bool v);

  /// @brief Method uint4x3, addr 0x4652fcc, size 0x24, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint4x3 uint4x3(double_t v);

  /// @brief Method uint4x3, addr 0x4652ea8, size 0x24, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint4x3 uint4x3(float_t v);

  /// @brief Method uint4x3, addr 0x4652e7c, size 0x18, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint4x3 uint4x3(int32_t v);

  /// @brief Method uint4x3, addr 0x4652dc4, size 0x18, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint4x3 uint4x3(uint32_t v);

  /// @brief Method uint4x4, addr 0x46532dc, size 0x14, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint4x4
  uint4x4(::Unity::Mathematics::uint4 c0, ::Unity::Mathematics::uint4 c1,
          ::Unity::Mathematics::uint4 c2, ::Unity::Mathematics::uint4 c3);

  /// @brief Method uint4x4, addr 0x46532f0, size 0x44, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint4x4
  uint4x4(uint32_t m00, uint32_t m01, uint32_t m02, uint32_t m03, uint32_t m10,
          uint32_t m11, uint32_t m12, uint32_t m13, uint32_t m20, uint32_t m21,
          uint32_t m22, uint32_t m23, uint32_t m30, uint32_t m31, uint32_t m32,
          uint32_t m33);

  /// @brief Method uint4x4, addr 0x4653370, size 0x9c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint4x4
  uint4x4(::Unity::Mathematics::bool4x4 v);

  /// @brief Method uint4x4, addr 0x46535e0, size 0x154, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::uint4x4
  uint4x4(::Unity::Mathematics::double4x4 v);

  /// @brief Method uint4x4, addr 0x4653464, size 0x154, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::uint4x4
  uint4x4(::Unity::Mathematics::float4x4 v);

  /// @brief Method uint4x4, addr 0x4653428, size 0x14, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint4x4
  uint4x4(::Unity::Mathematics::int4x4 v);

  /// @brief Method uint4x4, addr 0x4653350, size 0x20, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint4x4 uint4x4(bool v);

  /// @brief Method uint4x4, addr 0x46535b8, size 0x28, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint4x4 uint4x4(double_t v);

  /// @brief Method uint4x4, addr 0x465343c, size 0x28, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint4x4 uint4x4(float_t v);

  /// @brief Method uint4x4, addr 0x465340c, size 0x1c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint4x4 uint4x4(int32_t v);

  /// @brief Method uint4x4, addr 0x4653334, size 0x1c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::uint4x4 uint4x4(uint32_t v);

  /// @brief Method unitexp, addr 0x464f370, size 0x12c, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::quaternion
  unitexp(::Unity::Mathematics::quaternion q);

  /// @brief Method unitlog, addr 0x464f620, size 0x108, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::quaternion
  unitlog(::Unity::Mathematics::quaternion q);

  /// @brief Method unlerp, addr 0x4636080, size 0x1c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double2
  unlerp(::Unity::Mathematics::double2 a, ::Unity::Mathematics::double2 b,
         ::Unity::Mathematics::double2 x);

  /// @brief Method unlerp, addr 0x463609c, size 0x30, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double3
  unlerp(::Unity::Mathematics::double3 a, ::Unity::Mathematics::double3 b,
         ::Unity::Mathematics::double3 x);

  /// @brief Method unlerp, addr 0x46360cc, size 0x3c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::double4
  unlerp(::Unity::Mathematics::double4 a, ::Unity::Mathematics::double4 b,
         ::Unity::Mathematics::double4 x);

  /// @brief Method unlerp, addr 0x4635fe8, size 0x1c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float2
  unlerp(::Unity::Mathematics::float2 a, ::Unity::Mathematics::float2 b,
         ::Unity::Mathematics::float2 x);

  /// @brief Method unlerp, addr 0x4636004, size 0x30, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float3
  unlerp(::Unity::Mathematics::float3 a, ::Unity::Mathematics::float3 b,
         ::Unity::Mathematics::float3 x);

  /// @brief Method unlerp, addr 0x4636034, size 0x3c, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float4
  unlerp(::Unity::Mathematics::float4 a, ::Unity::Mathematics::float4 b,
         ::Unity::Mathematics::float4 x);

  /// @brief Method unlerp, addr 0x4636070, size 0x10, virtual false, abstract:
  /// false, final false
  static inline double_t unlerp(double_t a, double_t b, double_t x);

  /// @brief Method unlerp, addr 0x4635fd8, size 0x10, virtual false, abstract:
  /// false, final false
  static inline float_t unlerp(float_t a, float_t b, float_t x);

  /// @brief Method unpackhi, addr 0x4647958, size 0x14, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double4
  unpackhi(::Unity::Mathematics::double4 a, ::Unity::Mathematics::double4 b);

  /// @brief Method unpackhi, addr 0x4647944, size 0x14, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float4
  unpackhi(::Unity::Mathematics::float4 a, ::Unity::Mathematics::float4 b);

  /// @brief Method unpacklo, addr 0x4647934, size 0x10, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::double4
  unpacklo(::Unity::Mathematics::double4 a, ::Unity::Mathematics::double4 b);

  /// @brief Method unpacklo, addr 0x4647924, size 0x10, virtual false,
  /// abstract: false, final false
  static inline ::Unity::Mathematics::float4
  unpacklo(::Unity::Mathematics::float4 a, ::Unity::Mathematics::float4 b);

  /// @brief Method up, addr 0x46478c4, size 0x10, virtual false, abstract:
  /// false, final false
  static inline ::Unity::Mathematics::float3 up();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr math();

public:
  // Ctor Parameters [CppParam { name: "", ty: "math", modifiers: "&&",
  // def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  math(math &&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "math", modifiers: "const&",
  // def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  math(math const &) = delete;

  /// @brief Field DBL_MIN_NORMAL offset 0xffffffff size 0x8
  static constexpr double_t DBL_MIN_NORMAL{static_cast<double_t>(0.0)};

  /// @brief Field E offset 0xffffffff size 0x4
  static constexpr float_t E{static_cast<float_t>(2.7182817f)};

  /// @brief Field EPSILON offset 0xffffffff size 0x4
  static constexpr float_t EPSILON{static_cast<float_t>(1.1920929e-7f)};

  /// @brief Field EPSILON_DBL offset 0xffffffff size 0x8
  static constexpr double_t EPSILON_DBL{static_cast<double_t>(0.0)};

  /// @brief Field E_DBL offset 0xffffffff size 0x8
  static constexpr double_t E_DBL{static_cast<double_t>(2.7)};

  /// @brief Field FLT_MIN_NORMAL offset 0xffffffff size 0x4
  static constexpr float_t FLT_MIN_NORMAL{static_cast<float_t>(1.1754944e-38f)};

  /// @brief Field INFINITY_DBL offset 0xffffffff size 0x8
  static constexpr double_t INFINITY_DBL{INFINITY};

  /// @brief Field LN10 offset 0xffffffff size 0x4
  static constexpr float_t LN10{static_cast<float_t>(2.3025851f)};

  /// @brief Field LN10_DBL offset 0xffffffff size 0x8
  static constexpr double_t LN10_DBL{static_cast<double_t>(2.3)};

  /// @brief Field LN2 offset 0xffffffff size 0x4
  static constexpr float_t LN2{static_cast<float_t>(0.6931472f)};

  /// @brief Field LN2_DBL offset 0xffffffff size 0x8
  static constexpr double_t LN2_DBL{static_cast<double_t>(0.7)};

  /// @brief Field LOG10E offset 0xffffffff size 0x4
  static constexpr float_t LOG10E{static_cast<float_t>(0.4342945f)};

  /// @brief Field LOG10E_DBL offset 0xffffffff size 0x8
  static constexpr double_t LOG10E_DBL{static_cast<double_t>(0.4)};

  /// @brief Field LOG2E offset 0xffffffff size 0x4
  static constexpr float_t LOG2E{static_cast<float_t>(1.442695f)};

  /// @brief Field LOG2E_DBL offset 0xffffffff size 0x8
  static constexpr double_t LOG2E_DBL{static_cast<double_t>(1.4)};

  /// @brief Field NAN_DBL offset 0xffffffff size 0x8
  static constexpr double_t NAN_DBL{NAN};

  /// @brief Field PI offset 0xffffffff size 0x4
  static constexpr float_t PI{static_cast<float_t>(3.1415927f)};

  /// @brief Field PI_DBL offset 0xffffffff size 0x8
  static constexpr double_t PI_DBL{static_cast<double_t>(3.1)};

  /// @brief Field SQRT2 offset 0xffffffff size 0x4
  static constexpr float_t SQRT2{static_cast<float_t>(1.4142135f)};

  /// @brief Field SQRT2_DBL offset 0xffffffff size 0x8
  static constexpr double_t SQRT2_DBL{static_cast<double_t>(1.4)};

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{9945};

  /// @brief Field INFINITY offset 0xffffffff size 0x4
  static constexpr float_t _cordl_INFINITY{INFINITY};

  /// @brief Field NAN offset 0xffffffff size 0x4
  static constexpr float_t _cordl_NAN{NAN};

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::math, 0x10>,
              "Size mismatch!");

} // namespace Unity::Mathematics
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::math_RotationOrder,
                       "Unity.Mathematics", "math/RotationOrder");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::math_ShuffleComponent,
                       "Unity.Mathematics", "math/ShuffleComponent");
NEED_NO_BOX(::Unity::Mathematics::math);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::math *, "Unity.Mathematics",
                       "math");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::math_IntFloatUnion,
                       "Unity.Mathematics", "math/IntFloatUnion");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::math_LongDoubleUnion,
                       "Unity.Mathematics", "math/LongDoubleUnion");

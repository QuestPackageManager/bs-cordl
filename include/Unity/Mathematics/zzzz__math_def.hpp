#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(math)
namespace Unity::Mathematics {
struct RigidTransform;
}
namespace Unity::Mathematics {
struct __math__IntFloatUnion;
}
namespace Unity::Mathematics {
struct __math__LongDoubleUnion;
}
namespace Unity::Mathematics {
struct __math__RotationOrder;
}
namespace Unity::Mathematics {
struct __math__ShuffleComponent;
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
struct __math__RotationOrder;
}
namespace Unity::Mathematics {
struct __math__ShuffleComponent;
}
namespace Unity::Mathematics {
class math;
}
namespace Unity::Mathematics {
struct __math__IntFloatUnion;
}
namespace Unity::Mathematics {
struct __math__LongDoubleUnion;
}
// Write type traits
MARK_VAL_T(::Unity::Mathematics::__math__RotationOrder);
MARK_VAL_T(::Unity::Mathematics::__math__ShuffleComponent);
MARK_REF_PTR_T(::Unity::Mathematics::math);
MARK_VAL_T(::Unity::Mathematics::__math__IntFloatUnion);
MARK_VAL_T(::Unity::Mathematics::__math__LongDoubleUnion);
// Type: ::RotationOrder
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 1, calculated_native_size: 17, minimum_alignment: 1, natural_alignment: 1, packing: None, specified_packing: None }
namespace Unity::Mathematics {
// Is value type: true
// CS Name: ::math::RotationOrder
struct CORDL_TYPE __math__RotationOrder {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint8_t;

  /// @brief Nested struct ____math__RotationOrder_Unwrapped
  enum struct ____math__RotationOrder_Unwrapped : uint8_t {
    __E_XYZ = static_cast<uint8_t>(0x0u),
    __E_XZY = static_cast<uint8_t>(0x1u),
    __E_YXZ = static_cast<uint8_t>(0x2u),
    __E_YZX = static_cast<uint8_t>(0x3u),
    __E_ZXY = static_cast<uint8_t>(0x4u),
    __E_ZYX = static_cast<uint8_t>(0x5u),
    __E_Default = static_cast<uint8_t>(0x4u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____math__RotationOrder_Unwrapped() const noexcept {
    return static_cast<____math__RotationOrder_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint8_t() const noexcept {
    return static_cast<uint8_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __math__RotationOrder();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr __math__RotationOrder(uint8_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x1, def value: None
  uint8_t value__;

  /// @brief Field Default value: static_cast<uint8_t>(0x4u)
  static ::Unity::Mathematics::__math__RotationOrder const Default;

  /// @brief Field XYZ value: static_cast<uint8_t>(0x0u)
  static ::Unity::Mathematics::__math__RotationOrder const XYZ;

  /// @brief Field XZY value: static_cast<uint8_t>(0x1u)
  static ::Unity::Mathematics::__math__RotationOrder const XZY;

  /// @brief Field YXZ value: static_cast<uint8_t>(0x2u)
  static ::Unity::Mathematics::__math__RotationOrder const YXZ;

  /// @brief Field YZX value: static_cast<uint8_t>(0x3u)
  static ::Unity::Mathematics::__math__RotationOrder const YZX;

  /// @brief Field ZXY value: static_cast<uint8_t>(0x4u)
  static ::Unity::Mathematics::__math__RotationOrder const ZXY;

  /// @brief Field ZYX value: static_cast<uint8_t>(0x5u)
  static ::Unity::Mathematics::__math__RotationOrder const ZYX;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::__math__RotationOrder, 0x1>, "Size mismatch!");

static_assert(offsetof(::Unity::Mathematics::__math__RotationOrder, value__) == 0x0, "Offset mismatch!");

} // namespace Unity::Mathematics
// Type: ::ShuffleComponent
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 1, calculated_native_size: 17, minimum_alignment: 1, natural_alignment: 1, packing: None, specified_packing: None }
namespace Unity::Mathematics {
// Is value type: true
// CS Name: ::math::ShuffleComponent
struct CORDL_TYPE __math__ShuffleComponent {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint8_t;

  /// @brief Nested struct ____math__ShuffleComponent_Unwrapped
  enum struct ____math__ShuffleComponent_Unwrapped : uint8_t {
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
  constexpr operator ____math__ShuffleComponent_Unwrapped() const noexcept {
    return static_cast<____math__ShuffleComponent_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint8_t() const noexcept {
    return static_cast<uint8_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __math__ShuffleComponent();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr __math__ShuffleComponent(uint8_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x1, def value: None
  uint8_t value__;

  /// @brief Field LeftW value: static_cast<uint8_t>(0x3u)
  static ::Unity::Mathematics::__math__ShuffleComponent const LeftW;

  /// @brief Field LeftX value: static_cast<uint8_t>(0x0u)
  static ::Unity::Mathematics::__math__ShuffleComponent const LeftX;

  /// @brief Field LeftY value: static_cast<uint8_t>(0x1u)
  static ::Unity::Mathematics::__math__ShuffleComponent const LeftY;

  /// @brief Field LeftZ value: static_cast<uint8_t>(0x2u)
  static ::Unity::Mathematics::__math__ShuffleComponent const LeftZ;

  /// @brief Field RightW value: static_cast<uint8_t>(0x7u)
  static ::Unity::Mathematics::__math__ShuffleComponent const RightW;

  /// @brief Field RightX value: static_cast<uint8_t>(0x4u)
  static ::Unity::Mathematics::__math__ShuffleComponent const RightX;

  /// @brief Field RightY value: static_cast<uint8_t>(0x5u)
  static ::Unity::Mathematics::__math__ShuffleComponent const RightY;

  /// @brief Field RightZ value: static_cast<uint8_t>(0x6u)
  static ::Unity::Mathematics::__math__ShuffleComponent const RightZ;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::__math__ShuffleComponent, 0x1>, "Size mismatch!");

static_assert(offsetof(::Unity::Mathematics::__math__ShuffleComponent, value__) == 0x0, "Offset mismatch!");

} // namespace Unity::Mathematics
// Type: ::IntFloatUnion
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 1, natural_alignment: 4, packing: Some(1), specified_packing: None }
namespace Unity::Mathematics {
// Is value type: true
// CS Name: ::math::IntFloatUnion
struct CORDL_TYPE __math__IntFloatUnion {
public:
  // Declarations
  /// @brief Field floatValue, offset 0x0, size 0x4
  __declspec(property(get = __cordl_internal_get_floatValue, put = __cordl_internal_set_floatValue)) float_t floatValue;

  /// @brief Field intValue, offset 0x0, size 0x4
  __declspec(property(get = __cordl_internal_get_intValue, put = __cordl_internal_set_intValue)) int32_t intValue;

  constexpr float_t const& __cordl_internal_get_floatValue() const;

  constexpr float_t& __cordl_internal_get_floatValue();

  constexpr int32_t const& __cordl_internal_get_intValue() const;

  constexpr int32_t& __cordl_internal_get_intValue();

  constexpr void __cordl_internal_set_floatValue(float_t value);

  constexpr void __cordl_internal_set_intValue(int32_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __math__IntFloatUnion();

  // Ctor Parameters [CppParam { name: "intValue", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "floatValue", ty: "float_t", modifiers: "", def_value: None }]
  constexpr __math__IntFloatUnion(int32_t intValue, float_t floatValue) noexcept;

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
  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::__math__IntFloatUnion, 0x4>, "Size mismatch!");

} // namespace Unity::Mathematics
// Type: ::LongDoubleUnion
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 1, natural_alignment: 8, packing: Some(1), specified_packing: None }
namespace Unity::Mathematics {
// Is value type: true
// CS Name: ::math::LongDoubleUnion
struct CORDL_TYPE __math__LongDoubleUnion {
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
  constexpr __math__LongDoubleUnion();

  // Ctor Parameters [CppParam { name: "longValue", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "doubleValue", ty: "double_t", modifiers: "", def_value: None }]
  constexpr __math__LongDoubleUnion(int64_t longValue, double_t doubleValue) noexcept;

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
  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::__math__LongDoubleUnion, 0x8>, "Size mismatch!");

} // namespace Unity::Mathematics
// Type: Unity.Mathematics::math
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Mathematics {
// Is value type: false
// CS Name: ::Unity.Mathematics::math*
class CORDL_TYPE math : public ::System::Object {
public:
  // Declarations
  using IntFloatUnion = ::Unity::Mathematics::__math__IntFloatUnion;

  using LongDoubleUnion = ::Unity::Mathematics::__math__LongDoubleUnion;

  using RotationOrder = ::Unity::Mathematics::__math__RotationOrder;

  using ShuffleComponent = ::Unity::Mathematics::__math__ShuffleComponent;

  /// @brief Method RigidTransform, addr 0x31bb2c4, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::RigidTransform RigidTransform(::Unity::Mathematics::quaternion rot, ::Unity::Mathematics::float3 pos);

  /// @brief Method RigidTransform, addr 0x31bb2d8, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::RigidTransform RigidTransform(::Unity::Mathematics::float3x3 rotation, ::Unity::Mathematics::float3 translation);

  /// @brief Method RigidTransform, addr 0x31bb34c, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::RigidTransform RigidTransform(::Unity::Mathematics::float4x4 transform);

  /// @brief Method abs, addr 0x319d758, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 abs(::Unity::Mathematics::double2 x);

  /// @brief Method abs, addr 0x319d764, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 abs(::Unity::Mathematics::double3 x);

  /// @brief Method abs, addr 0x319d774, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 abs(::Unity::Mathematics::double4 x);

  /// @brief Method abs, addr 0x319d720, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 abs(::Unity::Mathematics::float2 x);

  /// @brief Method abs, addr 0x319d72c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 abs(::Unity::Mathematics::float3 x);

  /// @brief Method abs, addr 0x319d73c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 abs(::Unity::Mathematics::float4 x);

  /// @brief Method abs, addr 0x319d64c, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 abs(::Unity::Mathematics::int2 x);

  /// @brief Method abs, addr 0x319d678, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 abs(::Unity::Mathematics::int3 x);

  /// @brief Method abs, addr 0x319d6b4, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 abs(::Unity::Mathematics::int4 x);

  /// @brief Method abs, addr 0x319d750, size 0x8, virtual false, abstract: false, final false
  static inline double_t abs(double_t x);

  /// @brief Method abs, addr 0x319d718, size 0x8, virtual false, abstract: false, final false
  static inline float_t abs(float_t x);

  /// @brief Method abs, addr 0x319d63c, size 0x10, virtual false, abstract: false, final false
  static inline int32_t abs(int32_t x);

  /// @brief Method abs, addr 0x319d708, size 0x10, virtual false, abstract: false, final false
  static inline int64_t abs(int64_t x);

  /// @brief Method acos, addr 0x31a0834, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 acos(::Unity::Mathematics::double2 x);

  /// @brief Method acos, addr 0x31a08e8, size 0x10c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 acos(::Unity::Mathematics::double3 x);

  /// @brief Method acos, addr 0x31a09f4, size 0x15c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 acos(::Unity::Mathematics::double4 x);

  /// @brief Method acos, addr 0x31a049c, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 acos(::Unity::Mathematics::float2 x);

  /// @brief Method acos, addr 0x31a0554, size 0x114, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 acos(::Unity::Mathematics::float3 x);

  /// @brief Method acos, addr 0x31a0668, size 0x170, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 acos(::Unity::Mathematics::float4 x);

  /// @brief Method acos, addr 0x31a07d8, size 0x5c, virtual false, abstract: false, final false
  static inline double_t acos(double_t x);

  /// @brief Method acos, addr 0x31a0438, size 0x64, virtual false, abstract: false, final false
  static inline float_t acos(float_t x);

  /// @brief Method all, addr 0x31ab844, size 0x14, virtual false, abstract: false, final false
  static inline bool all(::Unity::Mathematics::bool2 x);

  /// @brief Method all, addr 0x31ab858, size 0x18, virtual false, abstract: false, final false
  static inline bool all(::Unity::Mathematics::bool3 x);

  /// @brief Method all, addr 0x31ab870, size 0x24, virtual false, abstract: false, final false
  static inline bool all(::Unity::Mathematics::bool4 x);

  /// @brief Method all, addr 0x31ab9dc, size 0x18, virtual false, abstract: false, final false
  static inline bool all(::Unity::Mathematics::double2 x);

  /// @brief Method all, addr 0x31ab9f4, size 0x28, virtual false, abstract: false, final false
  static inline bool all(::Unity::Mathematics::double3 x);

  /// @brief Method all, addr 0x31aba1c, size 0x30, virtual false, abstract: false, final false
  static inline bool all(::Unity::Mathematics::double4 x);

  /// @brief Method all, addr 0x31ab96c, size 0x18, virtual false, abstract: false, final false
  static inline bool all(::Unity::Mathematics::float2 x);

  /// @brief Method all, addr 0x31ab984, size 0x28, virtual false, abstract: false, final false
  static inline bool all(::Unity::Mathematics::float3 x);

  /// @brief Method all, addr 0x31ab9ac, size 0x30, virtual false, abstract: false, final false
  static inline bool all(::Unity::Mathematics::float4 x);

  /// @brief Method all, addr 0x31ab894, size 0x1c, virtual false, abstract: false, final false
  static inline bool all(::Unity::Mathematics::int2 x);

  /// @brief Method all, addr 0x31ab8b0, size 0x20, virtual false, abstract: false, final false
  static inline bool all(::Unity::Mathematics::int3 x);

  /// @brief Method all, addr 0x31ab8d0, size 0x30, virtual false, abstract: false, final false
  static inline bool all(::Unity::Mathematics::int4 x);

  /// @brief Method all, addr 0x31ab900, size 0x1c, virtual false, abstract: false, final false
  static inline bool all(::Unity::Mathematics::uint2 x);

  /// @brief Method all, addr 0x31ab91c, size 0x20, virtual false, abstract: false, final false
  static inline bool all(::Unity::Mathematics::uint3 x);

  /// @brief Method all, addr 0x31ab93c, size 0x30, virtual false, abstract: false, final false
  static inline bool all(::Unity::Mathematics::uint4 x);

  /// @brief Method any, addr 0x31ab630, size 0x10, virtual false, abstract: false, final false
  static inline bool any(::Unity::Mathematics::bool2 x);

  /// @brief Method any, addr 0x31ab640, size 0x18, virtual false, abstract: false, final false
  static inline bool any(::Unity::Mathematics::bool3 x);

  /// @brief Method any, addr 0x31ab658, size 0x24, virtual false, abstract: false, final false
  static inline bool any(::Unity::Mathematics::bool4 x);

  /// @brief Method any, addr 0x31ab7d4, size 0x18, virtual false, abstract: false, final false
  static inline bool any(::Unity::Mathematics::double2 x);

  /// @brief Method any, addr 0x31ab7ec, size 0x28, virtual false, abstract: false, final false
  static inline bool any(::Unity::Mathematics::double3 x);

  /// @brief Method any, addr 0x31ab814, size 0x30, virtual false, abstract: false, final false
  static inline bool any(::Unity::Mathematics::double4 x);

  /// @brief Method any, addr 0x31ab764, size 0x18, virtual false, abstract: false, final false
  static inline bool any(::Unity::Mathematics::float2 x);

  /// @brief Method any, addr 0x31ab77c, size 0x28, virtual false, abstract: false, final false
  static inline bool any(::Unity::Mathematics::float3 x);

  /// @brief Method any, addr 0x31ab7a4, size 0x30, virtual false, abstract: false, final false
  static inline bool any(::Unity::Mathematics::float4 x);

  /// @brief Method any, addr 0x31ab67c, size 0x1c, virtual false, abstract: false, final false
  static inline bool any(::Unity::Mathematics::int2 x);

  /// @brief Method any, addr 0x31ab698, size 0x28, virtual false, abstract: false, final false
  static inline bool any(::Unity::Mathematics::int3 x);

  /// @brief Method any, addr 0x31ab6c0, size 0x30, virtual false, abstract: false, final false
  static inline bool any(::Unity::Mathematics::int4 x);

  /// @brief Method any, addr 0x31ab6f0, size 0x1c, virtual false, abstract: false, final false
  static inline bool any(::Unity::Mathematics::uint2 x);

  /// @brief Method any, addr 0x31ab70c, size 0x28, virtual false, abstract: false, final false
  static inline bool any(::Unity::Mathematics::uint3 x);

  /// @brief Method any, addr 0x31ab734, size 0x30, virtual false, abstract: false, final false
  static inline bool any(::Unity::Mathematics::uint4 x);

  /// @brief Method asdouble, addr 0x31991b4, size 0x8, virtual false, abstract: false, final false
  static inline double_t asdouble(int64_t x);

  /// @brief Method asdouble, addr 0x31991bc, size 0x8, virtual false, abstract: false, final false
  static inline double_t asdouble(uint64_t x);

  /// @brief Method asfloat, addr 0x3199104, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 asfloat(::Unity::Mathematics::int2 x);

  /// @brief Method asfloat, addr 0x319914c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 asfloat(::Unity::Mathematics::uint2 x);

  /// @brief Method asfloat, addr 0x3199114, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 asfloat(::Unity::Mathematics::int3 x);

  /// @brief Method asfloat, addr 0x319915c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 asfloat(::Unity::Mathematics::uint3 x);

  /// @brief Method asfloat, addr 0x3199128, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 asfloat(::Unity::Mathematics::int4 x);

  /// @brief Method asfloat, addr 0x3199170, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 asfloat(::Unity::Mathematics::uint4 x);

  /// @brief Method asfloat, addr 0x31990fc, size 0x8, virtual false, abstract: false, final false
  static inline float_t asfloat(int32_t x);

  /// @brief Method asfloat, addr 0x3199144, size 0x8, virtual false, abstract: false, final false
  static inline float_t asfloat(uint32_t x);

  /// @brief Method asin, addr 0x31a1d5c, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 asin(::Unity::Mathematics::double2 x);

  /// @brief Method asin, addr 0x31a1e10, size 0x10c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 asin(::Unity::Mathematics::double3 x);

  /// @brief Method asin, addr 0x31a1f1c, size 0x15c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 asin(::Unity::Mathematics::double4 x);

  /// @brief Method asin, addr 0x31a19c4, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 asin(::Unity::Mathematics::float2 x);

  /// @brief Method asin, addr 0x31a1a7c, size 0x114, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 asin(::Unity::Mathematics::float3 x);

  /// @brief Method asin, addr 0x31a1b90, size 0x170, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 asin(::Unity::Mathematics::float4 x);

  /// @brief Method asin, addr 0x31a1d00, size 0x5c, virtual false, abstract: false, final false
  static inline double_t asin(double_t x);

  /// @brief Method asin, addr 0x31a1960, size 0x64, virtual false, abstract: false, final false
  static inline float_t asin(float_t x);

  /// @brief Method asint, addr 0x3199048, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 asint(::Unity::Mathematics::float2 x);

  /// @brief Method asint, addr 0x3199030, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 asint(::Unity::Mathematics::uint2 x);

  /// @brief Method asint, addr 0x3199058, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 asint(::Unity::Mathematics::float3 x);

  /// @brief Method asint, addr 0x3199034, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 asint(::Unity::Mathematics::uint3 x);

  /// @brief Method asint, addr 0x319906c, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 asint(::Unity::Mathematics::float4 x);

  /// @brief Method asint, addr 0x319903c, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 asint(::Unity::Mathematics::uint4 x);

  /// @brief Method asint, addr 0x3199040, size 0x8, virtual false, abstract: false, final false
  static inline int32_t asint(float_t x);

  /// @brief Method asint, addr 0x319902c, size 0x4, virtual false, abstract: false, final false
  static inline int32_t asint(uint32_t x);

  /// @brief Method aslong, addr 0x31990e8, size 0x8, virtual false, abstract: false, final false
  static inline int64_t aslong(double_t x);

  /// @brief Method aslong, addr 0x31990e4, size 0x4, virtual false, abstract: false, final false
  static inline int64_t aslong(uint64_t x);

  /// @brief Method asuint, addr 0x31990a4, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 asuint(::Unity::Mathematics::float2 x);

  /// @brief Method asuint, addr 0x319908c, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 asuint(::Unity::Mathematics::int2 x);

  /// @brief Method asuint, addr 0x31990b4, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 asuint(::Unity::Mathematics::float3 x);

  /// @brief Method asuint, addr 0x3199090, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 asuint(::Unity::Mathematics::int3 x);

  /// @brief Method asuint, addr 0x31990c8, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 asuint(::Unity::Mathematics::float4 x);

  /// @brief Method asuint, addr 0x3199098, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 asuint(::Unity::Mathematics::int4 x);

  /// @brief Method asuint, addr 0x319909c, size 0x8, virtual false, abstract: false, final false
  static inline uint32_t asuint(float_t x);

  /// @brief Method asuint, addr 0x3199088, size 0x4, virtual false, abstract: false, final false
  static inline uint32_t asuint(int32_t x);

  /// @brief Method asulong, addr 0x31990f4, size 0x8, virtual false, abstract: false, final false
  static inline uint64_t asulong(double_t x);

  /// @brief Method asulong, addr 0x31990f0, size 0x4, virtual false, abstract: false, final false
  static inline uint64_t asulong(int64_t x);

  /// @brief Method atan, addr 0x319eb04, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 atan(::Unity::Mathematics::double2 x);

  /// @brief Method atan, addr 0x319ebb8, size 0x10c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 atan(::Unity::Mathematics::double3 x);

  /// @brief Method atan, addr 0x319ecc4, size 0x15c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 atan(::Unity::Mathematics::double4 x);

  /// @brief Method atan, addr 0x319e76c, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 atan(::Unity::Mathematics::float2 x);

  /// @brief Method atan, addr 0x319e824, size 0x114, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 atan(::Unity::Mathematics::float3 x);

  /// @brief Method atan, addr 0x319e938, size 0x170, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 atan(::Unity::Mathematics::float4 x);

  /// @brief Method atan, addr 0x319eaa8, size 0x5c, virtual false, abstract: false, final false
  static inline double_t atan(double_t x);

  /// @brief Method atan, addr 0x319e708, size 0x64, virtual false, abstract: false, final false
  static inline float_t atan(float_t x);

  /// @brief Method atan2, addr 0x319f28c, size 0xd0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 atan2(::Unity::Mathematics::double2 y, ::Unity::Mathematics::double2 x);

  /// @brief Method atan2, addr 0x319f35c, size 0x134, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 atan2(::Unity::Mathematics::double3 y, ::Unity::Mathematics::double3 x);

  /// @brief Method atan2, addr 0x319f490, size 0x198, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 atan2(::Unity::Mathematics::double4 y, ::Unity::Mathematics::double4 x);

  /// @brief Method atan2, addr 0x319ee8c, size 0xd0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 atan2(::Unity::Mathematics::float2 y, ::Unity::Mathematics::float2 x);

  /// @brief Method atan2, addr 0x319ef5c, size 0x134, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 atan2(::Unity::Mathematics::float3 y, ::Unity::Mathematics::float3 x);

  /// @brief Method atan2, addr 0x319f090, size 0x198, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 atan2(::Unity::Mathematics::float4 y, ::Unity::Mathematics::float4 x);

  /// @brief Method atan2, addr 0x319f228, size 0x64, virtual false, abstract: false, final false
  static inline double_t atan2(double_t y, double_t x);

  /// @brief Method atan2, addr 0x319ee20, size 0x6c, virtual false, abstract: false, final false
  static inline float_t atan2(float_t y, float_t x);

  /// @brief Method back, addr 0x31b1b64, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 back();

  /// @brief Method bitmask, addr 0x319918c, size 0x28, virtual false, abstract: false, final false
  static inline int32_t bitmask(::Unity::Mathematics::bool4 value);

  /// @brief Method bool2, addr 0x3186a48, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 bool2(bool v);

  /// @brief Method bool2, addr 0x3186a2c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 bool2(bool x, bool y);

  /// @brief Method bool2, addr 0x3186a3c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 bool2(::Unity::Mathematics::bool2 xy);

  /// @brief Method bool2x2, addr 0x318719c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 bool2x2(::Unity::Mathematics::bool2 c0, ::Unity::Mathematics::bool2 c1);

  /// @brief Method bool2x2, addr 0x31871ac, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 bool2x2(bool m00, bool m01, bool m10, bool m11);

  /// @brief Method bool2x2, addr 0x31871cc, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 bool2x2(bool v);

  /// @brief Method bool2x3, addr 0x31872f4, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 bool2x3(::Unity::Mathematics::bool2 c0, ::Unity::Mathematics::bool2 c1, ::Unity::Mathematics::bool2 c2);

  /// @brief Method bool2x3, addr 0x3187308, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 bool2x3(bool m00, bool m01, bool m02, bool m10, bool m11, bool m12);

  /// @brief Method bool2x3, addr 0x3187338, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 bool2x3(bool v);

  /// @brief Method bool2x4, addr 0x3187500, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 bool2x4(::Unity::Mathematics::bool2 c0, ::Unity::Mathematics::bool2 c1, ::Unity::Mathematics::bool2 c2, ::Unity::Mathematics::bool2 c3);

  /// @brief Method bool2x4, addr 0x3187518, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 bool2x4(bool m00, bool m01, bool m02, bool m03, bool m10, bool m11, bool m12, bool m13);

  /// @brief Method bool2x4, addr 0x3187558, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 bool2x4(bool v);

  /// @brief Method bool3, addr 0x31877fc, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 bool3(bool v);

  /// @brief Method bool3, addr 0x31877ac, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 bool3(bool x, bool y, bool z);

  /// @brief Method bool3, addr 0x31877c4, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 bool3(bool x, ::Unity::Mathematics::bool2 yz);

  /// @brief Method bool3, addr 0x31877d8, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 bool3(::Unity::Mathematics::bool2 xy, bool z);

  /// @brief Method bool3, addr 0x31877ec, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 bool3(::Unity::Mathematics::bool3 xyz);

  /// @brief Method bool3x2, addr 0x3188008, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 bool3x2(::Unity::Mathematics::bool3 c0, ::Unity::Mathematics::bool3 c1);

  /// @brief Method bool3x2, addr 0x3188014, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 bool3x2(bool m00, bool m01, bool m10, bool m11, bool m20, bool m21);

  /// @brief Method bool3x2, addr 0x3188044, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 bool3x2(bool v);

  /// @brief Method bool3x3, addr 0x31881f4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 bool3x3(::Unity::Mathematics::bool3 c0, ::Unity::Mathematics::bool3 c1, ::Unity::Mathematics::bool3 c2);

  /// @brief Method bool3x3, addr 0x318822c, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 bool3x3(bool m00, bool m01, bool m02, bool m10, bool m11, bool m12, bool m20, bool m21, bool m22);

  /// @brief Method bool3x3, addr 0x3188274, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 bool3x3(bool v);

  /// @brief Method bool3x4, addr 0x3188544, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 bool3x4(::Unity::Mathematics::bool3 c0, ::Unity::Mathematics::bool3 c1, ::Unity::Mathematics::bool3 c2, ::Unity::Mathematics::bool3 c3);

  /// @brief Method bool3x4, addr 0x3188588, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 bool3x4(bool m00, bool m01, bool m02, bool m03, bool m10, bool m11, bool m12, bool m13, bool m20, bool m21, bool m22, bool m23);

  /// @brief Method bool3x4, addr 0x31885f4, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 bool3x4(bool v);

  /// @brief Method bool4, addr 0x3188a84, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 bool4(bool v);

  /// @brief Method bool4, addr 0x31889b8, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 bool4(bool x, bool y, bool z, bool w);

  /// @brief Method bool4, addr 0x31889d8, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 bool4(bool x, bool y, ::Unity::Mathematics::bool2 zw);

  /// @brief Method bool4, addr 0x31889f4, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 bool4(bool x, ::Unity::Mathematics::bool2 yz, bool w);

  /// @brief Method bool4, addr 0x3188a10, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 bool4(bool x, ::Unity::Mathematics::bool3 yzw);

  /// @brief Method bool4, addr 0x3188a2c, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 bool4(::Unity::Mathematics::bool2 xy, bool z, bool w);

  /// @brief Method bool4, addr 0x3188a48, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 bool4(::Unity::Mathematics::bool2 xy, ::Unity::Mathematics::bool2 zw);

  /// @brief Method bool4, addr 0x3188a60, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 bool4(::Unity::Mathematics::bool3 xyz, bool w);

  /// @brief Method bool4, addr 0x3188a78, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 bool4(::Unity::Mathematics::bool4 xyzw);

  /// @brief Method bool4x2, addr 0x318938c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 bool4x2(::Unity::Mathematics::bool4 c0, ::Unity::Mathematics::bool4 c1);

  /// @brief Method bool4x2, addr 0x3189394, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 bool4x2(bool m00, bool m01, bool m10, bool m11, bool m20, bool m21, bool m30, bool m31);

  /// @brief Method bool4x2, addr 0x31893d4, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 bool4x2(bool v);

  /// @brief Method bool4x3, addr 0x318960c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 bool4x3(::Unity::Mathematics::bool4 c0, ::Unity::Mathematics::bool4 c1, ::Unity::Mathematics::bool4 c2);

  /// @brief Method bool4x3, addr 0x318961c, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 bool4x3(bool m00, bool m01, bool m02, bool m10, bool m11, bool m12, bool m20, bool m21, bool m22, bool m30, bool m31, bool m32);

  /// @brief Method bool4x3, addr 0x3189688, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 bool4x3(bool v);

  /// @brief Method bool4x4, addr 0x3189a00, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x4 bool4x4(::Unity::Mathematics::bool4 c0, ::Unity::Mathematics::bool4 c1, ::Unity::Mathematics::bool4 c2, ::Unity::Mathematics::bool4 c3);

  /// @brief Method bool4x4, addr 0x3189a10, size 0x9c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x4 bool4x4(bool m00, bool m01, bool m02, bool m03, bool m10, bool m11, bool m12, bool m13, bool m20, bool m21, bool m22, bool m23, bool m30, bool m31,
                                                      bool m32, bool m33);

  /// @brief Method bool4x4, addr 0x3189aac, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x4 bool4x4(bool v);

  /// @brief Method ceil, addr 0x31a29d4, size 0x9c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 ceil(::Unity::Mathematics::double2 x);

  /// @brief Method ceil, addr 0x31a2a70, size 0xe4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 ceil(::Unity::Mathematics::double3 x);

  /// @brief Method ceil, addr 0x31a2b54, size 0x124, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 ceil(::Unity::Mathematics::double4 x);

  /// @brief Method ceil, addr 0x31a26d4, size 0x9c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 ceil(::Unity::Mathematics::float2 x);

  /// @brief Method ceil, addr 0x31a2770, size 0xe4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 ceil(::Unity::Mathematics::float3 x);

  /// @brief Method ceil, addr 0x31a2854, size 0x124, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 ceil(::Unity::Mathematics::float4 x);

  /// @brief Method ceil, addr 0x31a2978, size 0x5c, virtual false, abstract: false, final false
  static inline double_t ceil(double_t x);

  /// @brief Method ceil, addr 0x31a2678, size 0x5c, virtual false, abstract: false, final false
  static inline float_t ceil(float_t x);

  /// @brief Method ceillog2, addr 0x31af7e8, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 ceillog2(::Unity::Mathematics::int2 x);

  /// @brief Method ceillog2, addr 0x31afa68, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 ceillog2(::Unity::Mathematics::uint2 x);

  /// @brief Method ceillog2, addr 0x31af86c, size 0xc0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 ceillog2(::Unity::Mathematics::int3 x);

  /// @brief Method ceillog2, addr 0x31afaec, size 0xc0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 ceillog2(::Unity::Mathematics::uint3 x);

  /// @brief Method ceillog2, addr 0x31af92c, size 0x100, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 ceillog2(::Unity::Mathematics::int4 x);

  /// @brief Method ceillog2, addr 0x31afbac, size 0x100, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 ceillog2(::Unity::Mathematics::uint4 x);

  /// @brief Method ceillog2, addr 0x31af7ac, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t ceillog2(int32_t x);

  /// @brief Method ceillog2, addr 0x31afa2c, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t ceillog2(uint32_t x);

  /// @brief Method ceilpow2, addr 0x31af290, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 ceilpow2(::Unity::Mathematics::int2 x);

  /// @brief Method ceilpow2, addr 0x31af320, size 0xac, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 ceilpow2(::Unity::Mathematics::int3 x);

  /// @brief Method ceilpow2, addr 0x31af3cc, size 0x114, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 ceilpow2(::Unity::Mathematics::int4 x);

  /// @brief Method ceilpow2, addr 0x31af500, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 ceilpow2(::Unity::Mathematics::uint2 x);

  /// @brief Method ceilpow2, addr 0x31af590, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 ceilpow2(::Unity::Mathematics::uint3 x);

  /// @brief Method ceilpow2, addr 0x31af644, size 0x120, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 ceilpow2(::Unity::Mathematics::uint4 x);

  /// @brief Method ceilpow2, addr 0x31af270, size 0x20, virtual false, abstract: false, final false
  static inline int32_t ceilpow2(int32_t x);

  /// @brief Method ceilpow2, addr 0x31af764, size 0x24, virtual false, abstract: false, final false
  static inline int64_t ceilpow2(int64_t x);

  /// @brief Method ceilpow2, addr 0x31af4e0, size 0x20, virtual false, abstract: false, final false
  static inline uint32_t ceilpow2(uint32_t x);

  /// @brief Method ceilpow2, addr 0x31af788, size 0x24, virtual false, abstract: false, final false
  static inline uint64_t ceilpow2(uint64_t x);

  /// @brief Method clamp, addr 0x319bf24, size 0x19c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 clamp(::Unity::Mathematics::double2 x, ::Unity::Mathematics::double2 a, ::Unity::Mathematics::double2 b);

  /// @brief Method clamp, addr 0x319c0c0, size 0x264, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 clamp(::Unity::Mathematics::double3 x, ::Unity::Mathematics::double3 a, ::Unity::Mathematics::double3 b);

  /// @brief Method clamp, addr 0x319c324, size 0x330, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 clamp(::Unity::Mathematics::double4 x, ::Unity::Mathematics::double4 a, ::Unity::Mathematics::double4 b);

  /// @brief Method clamp, addr 0x319b720, size 0x19c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 clamp(::Unity::Mathematics::float2 x, ::Unity::Mathematics::float2 a, ::Unity::Mathematics::float2 b);

  /// @brief Method clamp, addr 0x319b8bc, size 0x264, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 clamp(::Unity::Mathematics::float3 x, ::Unity::Mathematics::float3 a, ::Unity::Mathematics::float3 b);

  /// @brief Method clamp, addr 0x319bb20, size 0x330, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 clamp(::Unity::Mathematics::float4 x, ::Unity::Mathematics::float4 a, ::Unity::Mathematics::float4 b);

  /// @brief Method clamp, addr 0x319b450, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 clamp(::Unity::Mathematics::int2 x, ::Unity::Mathematics::int2 a, ::Unity::Mathematics::int2 b);

  /// @brief Method clamp, addr 0x319b484, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 clamp(::Unity::Mathematics::int3 x, ::Unity::Mathematics::int3 a, ::Unity::Mathematics::int3 b);

  /// @brief Method clamp, addr 0x319b4cc, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 clamp(::Unity::Mathematics::int4 x, ::Unity::Mathematics::int4 a, ::Unity::Mathematics::int4 b);

  /// @brief Method clamp, addr 0x319b544, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 clamp(::Unity::Mathematics::uint2 x, ::Unity::Mathematics::uint2 a, ::Unity::Mathematics::uint2 b);

  /// @brief Method clamp, addr 0x319b578, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 clamp(::Unity::Mathematics::uint3 x, ::Unity::Mathematics::uint3 a, ::Unity::Mathematics::uint3 b);

  /// @brief Method clamp, addr 0x319b5c0, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 clamp(::Unity::Mathematics::uint4 x, ::Unity::Mathematics::uint4 a, ::Unity::Mathematics::uint4 b);

  /// @brief Method clamp, addr 0x319be50, size 0xd4, virtual false, abstract: false, final false
  static inline double_t clamp(double_t x, double_t a, double_t b);

  /// @brief Method clamp, addr 0x319b64c, size 0xd4, virtual false, abstract: false, final false
  static inline float_t clamp(float_t x, float_t a, float_t b);

  /// @brief Method clamp, addr 0x319b43c, size 0x14, virtual false, abstract: false, final false
  static inline int32_t clamp(int32_t x, int32_t a, int32_t b);

  /// @brief Method clamp, addr 0x319b624, size 0x14, virtual false, abstract: false, final false
  static inline int64_t clamp(int64_t x, int64_t a, int64_t b);

  /// @brief Method clamp, addr 0x319b530, size 0x14, virtual false, abstract: false, final false
  static inline uint32_t clamp(uint32_t x, uint32_t a, uint32_t b);

  /// @brief Method clamp, addr 0x319b638, size 0x14, virtual false, abstract: false, final false
  static inline uint64_t clamp(uint64_t x, uint64_t a, uint64_t b);

  /// @brief Method cmax, addr 0x31b0ae8, size 0x70, virtual false, abstract: false, final false
  static inline double_t cmax(::Unity::Mathematics::double2 x);

  /// @brief Method cmax, addr 0x31b0b58, size 0xd4, virtual false, abstract: false, final false
  static inline double_t cmax(::Unity::Mathematics::double3 x);

  /// @brief Method cmax, addr 0x31b0c2c, size 0x128, virtual false, abstract: false, final false
  static inline double_t cmax(::Unity::Mathematics::double4 x);

  /// @brief Method cmax, addr 0x31b087c, size 0x70, virtual false, abstract: false, final false
  static inline float_t cmax(::Unity::Mathematics::float2 x);

  /// @brief Method cmax, addr 0x31b08ec, size 0xd4, virtual false, abstract: false, final false
  static inline float_t cmax(::Unity::Mathematics::float3 x);

  /// @brief Method cmax, addr 0x31b09c0, size 0x128, virtual false, abstract: false, final false
  static inline float_t cmax(::Unity::Mathematics::float4 x);

  /// @brief Method cmax, addr 0x31b07e4, size 0x10, virtual false, abstract: false, final false
  static inline int32_t cmax(::Unity::Mathematics::int2 x);

  /// @brief Method cmax, addr 0x31b07f4, size 0x18, virtual false, abstract: false, final false
  static inline int32_t cmax(::Unity::Mathematics::int3 x);

  /// @brief Method cmax, addr 0x31b080c, size 0x24, virtual false, abstract: false, final false
  static inline int32_t cmax(::Unity::Mathematics::int4 x);

  /// @brief Method cmax, addr 0x31b0830, size 0x10, virtual false, abstract: false, final false
  static inline uint32_t cmax(::Unity::Mathematics::uint2 x);

  /// @brief Method cmax, addr 0x31b0840, size 0x18, virtual false, abstract: false, final false
  static inline uint32_t cmax(::Unity::Mathematics::uint3 x);

  /// @brief Method cmax, addr 0x31b0858, size 0x24, virtual false, abstract: false, final false
  static inline uint32_t cmax(::Unity::Mathematics::uint4 x);

  /// @brief Method cmin, addr 0x31b0578, size 0x70, virtual false, abstract: false, final false
  static inline double_t cmin(::Unity::Mathematics::double2 x);

  /// @brief Method cmin, addr 0x31b05e8, size 0xd4, virtual false, abstract: false, final false
  static inline double_t cmin(::Unity::Mathematics::double3 x);

  /// @brief Method cmin, addr 0x31b06bc, size 0x128, virtual false, abstract: false, final false
  static inline double_t cmin(::Unity::Mathematics::double4 x);

  /// @brief Method cmin, addr 0x31b030c, size 0x70, virtual false, abstract: false, final false
  static inline float_t cmin(::Unity::Mathematics::float2 x);

  /// @brief Method cmin, addr 0x31b037c, size 0xd4, virtual false, abstract: false, final false
  static inline float_t cmin(::Unity::Mathematics::float3 x);

  /// @brief Method cmin, addr 0x31b0450, size 0x128, virtual false, abstract: false, final false
  static inline float_t cmin(::Unity::Mathematics::float4 x);

  /// @brief Method cmin, addr 0x31b0274, size 0x10, virtual false, abstract: false, final false
  static inline int32_t cmin(::Unity::Mathematics::int2 x);

  /// @brief Method cmin, addr 0x31b0284, size 0x18, virtual false, abstract: false, final false
  static inline int32_t cmin(::Unity::Mathematics::int3 x);

  /// @brief Method cmin, addr 0x31b029c, size 0x24, virtual false, abstract: false, final false
  static inline int32_t cmin(::Unity::Mathematics::int4 x);

  /// @brief Method cmin, addr 0x31b02c0, size 0x10, virtual false, abstract: false, final false
  static inline uint32_t cmin(::Unity::Mathematics::uint2 x);

  /// @brief Method cmin, addr 0x31b02d0, size 0x18, virtual false, abstract: false, final false
  static inline uint32_t cmin(::Unity::Mathematics::uint3 x);

  /// @brief Method cmin, addr 0x31b02e8, size 0x24, virtual false, abstract: false, final false
  static inline uint32_t cmin(::Unity::Mathematics::uint4 x);

  /// @brief Method compress, addr 0x31b0ec4, size 0x58, virtual false, abstract: false, final false
  static inline int32_t compress(::cordl_internals::Ptr<float_t> output, int32_t index, ::Unity::Mathematics::float4 val, ::Unity::Mathematics::bool4 mask);

  /// @brief Method compress, addr 0x31b0e04, size 0x60, virtual false, abstract: false, final false
  static inline int32_t compress(::cordl_internals::Ptr<int32_t> output, int32_t index, ::Unity::Mathematics::int4 val, ::Unity::Mathematics::bool4 mask);

  /// @brief Method compress, addr 0x31b0e64, size 0x60, virtual false, abstract: false, final false
  static inline int32_t compress(::cordl_internals::Ptr<uint32_t> output, int32_t index, ::Unity::Mathematics::uint4 val, ::Unity::Mathematics::bool4 mask);

  /// @brief Method conjugate, addr 0x31ba204, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion conjugate(::Unity::Mathematics::quaternion q);

  /// @brief Method cos, addr 0x319fa04, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 cos(::Unity::Mathematics::double2 x);

  /// @brief Method cos, addr 0x319fab8, size 0x10c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 cos(::Unity::Mathematics::double3 x);

  /// @brief Method cos, addr 0x319fbc4, size 0x15c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 cos(::Unity::Mathematics::double4 x);

  /// @brief Method cos, addr 0x319f68c, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 cos(::Unity::Mathematics::float2 x);

  /// @brief Method cos, addr 0x319f740, size 0x10c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 cos(::Unity::Mathematics::float3 x);

  /// @brief Method cos, addr 0x319f84c, size 0x15c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 cos(::Unity::Mathematics::float4 x);

  /// @brief Method cos, addr 0x319f9a8, size 0x5c, virtual false, abstract: false, final false
  static inline double_t cos(double_t x);

  /// @brief Method cos, addr 0x319f628, size 0x64, virtual false, abstract: false, final false
  static inline float_t cos(float_t x);

  /// @brief Method cosh, addr 0x31a011c, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 cosh(::Unity::Mathematics::double2 x);

  /// @brief Method cosh, addr 0x31a01d0, size 0x10c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 cosh(::Unity::Mathematics::double3 x);

  /// @brief Method cosh, addr 0x31a02dc, size 0x15c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 cosh(::Unity::Mathematics::double4 x);

  /// @brief Method cosh, addr 0x319fd84, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 cosh(::Unity::Mathematics::float2 x);

  /// @brief Method cosh, addr 0x319fe3c, size 0x114, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 cosh(::Unity::Mathematics::float3 x);

  /// @brief Method cosh, addr 0x319ff50, size 0x170, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 cosh(::Unity::Mathematics::float4 x);

  /// @brief Method cosh, addr 0x31a00c0, size 0x5c, virtual false, abstract: false, final false
  static inline double_t cosh(double_t x);

  /// @brief Method cosh, addr 0x319fd20, size 0x64, virtual false, abstract: false, final false
  static inline float_t cosh(float_t x);

  /// @brief Method countbits, addr 0x31ad8d0, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 countbits(::Unity::Mathematics::int2 x);

  /// @brief Method countbits, addr 0x31adb68, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 countbits(::Unity::Mathematics::uint2 x);

  /// @brief Method countbits, addr 0x31ad960, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 countbits(::Unity::Mathematics::int3 x);

  /// @brief Method countbits, addr 0x31adbf8, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 countbits(::Unity::Mathematics::uint3 x);

  /// @brief Method countbits, addr 0x31ada1c, size 0x118, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 countbits(::Unity::Mathematics::int4 x);

  /// @brief Method countbits, addr 0x31adcb0, size 0x118, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 countbits(::Unity::Mathematics::uint4 x);

  /// @brief Method countbits, addr 0x31ad89c, size 0x34, virtual false, abstract: false, final false
  static inline int32_t countbits(int32_t x);

  /// @brief Method countbits, addr 0x31addfc, size 0x34, virtual false, abstract: false, final false
  static inline int32_t countbits(int64_t x);

  /// @brief Method countbits, addr 0x31adb34, size 0x34, virtual false, abstract: false, final false
  static inline int32_t countbits(uint32_t x);

  /// @brief Method countbits, addr 0x31addc8, size 0x34, virtual false, abstract: false, final false
  static inline int32_t countbits(uint64_t x);

  /// @brief Method cross, addr 0x31aa2c0, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 cross(::Unity::Mathematics::double3 x, ::Unity::Mathematics::double3 y);

  /// @brief Method cross, addr 0x31aa298, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 cross(::Unity::Mathematics::float3 x, ::Unity::Mathematics::float3 y);

  /// @brief Method csum, addr 0x31b0de0, size 0x8, virtual false, abstract: false, final false
  static inline double_t csum(::Unity::Mathematics::double2 x);

  /// @brief Method csum, addr 0x31b0de8, size 0xc, virtual false, abstract: false, final false
  static inline double_t csum(::Unity::Mathematics::double3 x);

  /// @brief Method csum, addr 0x31b0df4, size 0x10, virtual false, abstract: false, final false
  static inline double_t csum(::Unity::Mathematics::double4 x);

  /// @brief Method csum, addr 0x31b0dbc, size 0x8, virtual false, abstract: false, final false
  static inline float_t csum(::Unity::Mathematics::float2 x);

  /// @brief Method csum, addr 0x31b0dc4, size 0xc, virtual false, abstract: false, final false
  static inline float_t csum(::Unity::Mathematics::float3 x);

  /// @brief Method csum, addr 0x31b0dd0, size 0x10, virtual false, abstract: false, final false
  static inline float_t csum(::Unity::Mathematics::float4 x);

  /// @brief Method csum, addr 0x31b0d54, size 0xc, virtual false, abstract: false, final false
  static inline int32_t csum(::Unity::Mathematics::int2 x);

  /// @brief Method csum, addr 0x31b0d60, size 0x10, virtual false, abstract: false, final false
  static inline int32_t csum(::Unity::Mathematics::int3 x);

  /// @brief Method csum, addr 0x31b0d70, size 0x18, virtual false, abstract: false, final false
  static inline int32_t csum(::Unity::Mathematics::int4 x);

  /// @brief Method csum, addr 0x31b0d88, size 0xc, virtual false, abstract: false, final false
  static inline uint32_t csum(::Unity::Mathematics::uint2 x);

  /// @brief Method csum, addr 0x31b0d94, size 0x10, virtual false, abstract: false, final false
  static inline uint32_t csum(::Unity::Mathematics::uint3 x);

  /// @brief Method csum, addr 0x31b0da4, size 0x18, virtual false, abstract: false, final false
  static inline uint32_t csum(::Unity::Mathematics::uint4 x);

  /// @brief Method degrees, addr 0x31b022c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 degrees(::Unity::Mathematics::double2 x);

  /// @brief Method degrees, addr 0x31b0240, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 degrees(::Unity::Mathematics::double3 x);

  /// @brief Method degrees, addr 0x31b0258, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 degrees(::Unity::Mathematics::double4 x);

  /// @brief Method degrees, addr 0x31b01d4, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 degrees(::Unity::Mathematics::float2 x);

  /// @brief Method degrees, addr 0x31b01e8, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 degrees(::Unity::Mathematics::float3 x);

  /// @brief Method degrees, addr 0x31b0200, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 degrees(::Unity::Mathematics::float4 x);

  /// @brief Method degrees, addr 0x31b021c, size 0x10, virtual false, abstract: false, final false
  static inline double_t degrees(double_t x);

  /// @brief Method degrees, addr 0x31b01c4, size 0x10, virtual false, abstract: false, final false
  static inline float_t degrees(float_t x);

  /// @brief Method determinant, addr 0x318a904, size 0x10, virtual false, abstract: false, final false
  static inline double_t determinant(::Unity::Mathematics::double2x2 m);

  /// @brief Method determinant, addr 0x318c0f4, size 0x50, virtual false, abstract: false, final false
  static inline double_t determinant(::Unity::Mathematics::double3x3 m);

  /// @brief Method determinant, addr 0x318e630, size 0xd8, virtual false, abstract: false, final false
  static inline double_t determinant(::Unity::Mathematics::double4x4 m);

  /// @brief Method determinant, addr 0x318f4a0, size 0x10, virtual false, abstract: false, final false
  static inline float_t determinant(::Unity::Mathematics::float2x2 m);

  /// @brief Method determinant, addr 0x3190b38, size 0x50, virtual false, abstract: false, final false
  static inline float_t determinant(::Unity::Mathematics::float3x3 m);

  /// @brief Method determinant, addr 0x3192d5c, size 0xd8, virtual false, abstract: false, final false
  static inline float_t determinant(::Unity::Mathematics::float4x4 m);

  /// @brief Method determinant, addr 0x3195230, size 0x18, virtual false, abstract: false, final false
  static inline int32_t determinant(::Unity::Mathematics::int2x2 m);

  /// @brief Method determinant, addr 0x3196a88, size 0x48, virtual false, abstract: false, final false
  static inline int32_t determinant(::Unity::Mathematics::int3x3 m);

  /// @brief Method determinant, addr 0x3198c10, size 0xbc, virtual false, abstract: false, final false
  static inline int32_t determinant(::Unity::Mathematics::int4x4 m);

  /// @brief Method distance, addr 0x31aa058, size 0x64, virtual false, abstract: false, final false
  static inline double_t distance(::Unity::Mathematics::double2 x, ::Unity::Mathematics::double2 y);

  /// @brief Method distance, addr 0x31aa0bc, size 0x70, virtual false, abstract: false, final false
  static inline double_t distance(::Unity::Mathematics::double3 x, ::Unity::Mathematics::double3 y);

  /// @brief Method distance, addr 0x31aa12c, size 0x7c, virtual false, abstract: false, final false
  static inline double_t distance(::Unity::Mathematics::double4 x, ::Unity::Mathematics::double4 y);

  /// @brief Method distance, addr 0x31aa050, size 0x8, virtual false, abstract: false, final false
  static inline double_t distance(double_t x, double_t y);

  /// @brief Method distance, addr 0x31a9f00, size 0x64, virtual false, abstract: false, final false
  static inline float_t distance(::Unity::Mathematics::float2 x, ::Unity::Mathematics::float2 y);

  /// @brief Method distance, addr 0x31a9f64, size 0x70, virtual false, abstract: false, final false
  static inline float_t distance(::Unity::Mathematics::float3 x, ::Unity::Mathematics::float3 y);

  /// @brief Method distance, addr 0x31a9fd4, size 0x7c, virtual false, abstract: false, final false
  static inline float_t distance(::Unity::Mathematics::float4 x, ::Unity::Mathematics::float4 y);

  /// @brief Method distance, addr 0x31a9ef8, size 0x8, virtual false, abstract: false, final false
  static inline float_t distance(float_t x, float_t y);

  /// @brief Method distancesq, addr 0x31aa22c, size 0x18, virtual false, abstract: false, final false
  static inline double_t distancesq(::Unity::Mathematics::double2 x, ::Unity::Mathematics::double2 y);

  /// @brief Method distancesq, addr 0x31aa244, size 0x24, virtual false, abstract: false, final false
  static inline double_t distancesq(::Unity::Mathematics::double3 x, ::Unity::Mathematics::double3 y);

  /// @brief Method distancesq, addr 0x31aa268, size 0x30, virtual false, abstract: false, final false
  static inline double_t distancesq(::Unity::Mathematics::double4 x, ::Unity::Mathematics::double4 y);

  /// @brief Method distancesq, addr 0x31aa220, size 0xc, virtual false, abstract: false, final false
  static inline double_t distancesq(double_t x, double_t y);

  /// @brief Method distancesq, addr 0x31aa1b4, size 0x18, virtual false, abstract: false, final false
  static inline float_t distancesq(::Unity::Mathematics::float2 x, ::Unity::Mathematics::float2 y);

  /// @brief Method distancesq, addr 0x31aa1cc, size 0x24, virtual false, abstract: false, final false
  static inline float_t distancesq(::Unity::Mathematics::float3 x, ::Unity::Mathematics::float3 y);

  /// @brief Method distancesq, addr 0x31aa1f0, size 0x30, virtual false, abstract: false, final false
  static inline float_t distancesq(::Unity::Mathematics::float4 x, ::Unity::Mathematics::float4 y);

  /// @brief Method distancesq, addr 0x31aa1a8, size 0xc, virtual false, abstract: false, final false
  static inline float_t distancesq(float_t x, float_t y);

  /// @brief Method dot, addr 0x319d890, size 0x10, virtual false, abstract: false, final false
  static inline double_t dot(::Unity::Mathematics::double2 x, ::Unity::Mathematics::double2 y);

  /// @brief Method dot, addr 0x319d8a0, size 0x18, virtual false, abstract: false, final false
  static inline double_t dot(::Unity::Mathematics::double3 x, ::Unity::Mathematics::double3 y);

  /// @brief Method dot, addr 0x319d8b8, size 0x20, virtual false, abstract: false, final false
  static inline double_t dot(::Unity::Mathematics::double4 x, ::Unity::Mathematics::double4 y);

  /// @brief Method dot, addr 0x319d888, size 0x8, virtual false, abstract: false, final false
  static inline double_t dot(double_t x, double_t y);

  /// @brief Method dot, addr 0x31ba24c, size 0x20, virtual false, abstract: false, final false
  static inline float_t dot(::Unity::Mathematics::quaternion a, ::Unity::Mathematics::quaternion b);

  /// @brief Method dot, addr 0x319d840, size 0x10, virtual false, abstract: false, final false
  static inline float_t dot(::Unity::Mathematics::float2 x, ::Unity::Mathematics::float2 y);

  /// @brief Method dot, addr 0x319d850, size 0x18, virtual false, abstract: false, final false
  static inline float_t dot(::Unity::Mathematics::float3 x, ::Unity::Mathematics::float3 y);

  /// @brief Method dot, addr 0x319d868, size 0x20, virtual false, abstract: false, final false
  static inline float_t dot(::Unity::Mathematics::float4 x, ::Unity::Mathematics::float4 y);

  /// @brief Method dot, addr 0x319d838, size 0x8, virtual false, abstract: false, final false
  static inline float_t dot(float_t x, float_t y);

  /// @brief Method dot, addr 0x319d790, size 0x14, virtual false, abstract: false, final false
  static inline int32_t dot(::Unity::Mathematics::int2 x, ::Unity::Mathematics::int2 y);

  /// @brief Method dot, addr 0x319d7a4, size 0x18, virtual false, abstract: false, final false
  static inline int32_t dot(::Unity::Mathematics::int3 x, ::Unity::Mathematics::int3 y);

  /// @brief Method dot, addr 0x319d7bc, size 0x24, virtual false, abstract: false, final false
  static inline int32_t dot(::Unity::Mathematics::int4 x, ::Unity::Mathematics::int4 y);

  /// @brief Method dot, addr 0x319d788, size 0x8, virtual false, abstract: false, final false
  static inline int32_t dot(int32_t x, int32_t y);

  /// @brief Method dot, addr 0x319d7e8, size 0x14, virtual false, abstract: false, final false
  static inline uint32_t dot(::Unity::Mathematics::uint2 x, ::Unity::Mathematics::uint2 y);

  /// @brief Method dot, addr 0x319d7fc, size 0x18, virtual false, abstract: false, final false
  static inline uint32_t dot(::Unity::Mathematics::uint3 x, ::Unity::Mathematics::uint3 y);

  /// @brief Method dot, addr 0x319d814, size 0x24, virtual false, abstract: false, final false
  static inline uint32_t dot(::Unity::Mathematics::uint4 x, ::Unity::Mathematics::uint4 y);

  /// @brief Method dot, addr 0x319d7e0, size 0x8, virtual false, abstract: false, final false
  static inline uint32_t dot(uint32_t x, uint32_t y);

  /// @brief Method double2, addr 0x3189f68, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 double2(::Unity::Mathematics::bool2 v);

  /// @brief Method double2, addr 0x318a0d0, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 double2(::Unity::Mathematics::float2 v);

  /// @brief Method double2, addr 0x3189fbc, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 double2(::Unity::Mathematics::half v);

  /// @brief Method double2, addr 0x318a020, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 double2(::Unity::Mathematics::half2 v);

  /// @brief Method double2, addr 0x3189f90, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 double2(::Unity::Mathematics::int2 v);

  /// @brief Method double2, addr 0x3189fac, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 double2(::Unity::Mathematics::uint2 v);

  /// @brief Method double2, addr 0x3189f50, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 double2(bool v);

  /// @brief Method double2, addr 0x3189f48, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 double2(double_t v);

  /// @brief Method double2, addr 0x318a0c4, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 double2(float_t v);

  /// @brief Method double2, addr 0x3189f84, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 double2(int32_t v);

  /// @brief Method double2, addr 0x3189fa0, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 double2(uint32_t v);

  /// @brief Method double2, addr 0x3189f40, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 double2(double_t x, double_t y);

  /// @brief Method double2, addr 0x3189f44, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 double2(::Unity::Mathematics::double2 xy);

  /// @brief Method double2x2, addr 0x318a7d0, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 double2x2(::Unity::Mathematics::double2 c0, ::Unity::Mathematics::double2 c1);

  /// @brief Method double2x2, addr 0x318a7d4, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 double2x2(double_t m00, double_t m01, double_t m10, double_t m11);

  /// @brief Method double2x2, addr 0x318a814, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 double2x2(::Unity::Mathematics::bool2x2 v);

  /// @brief Method double2x2, addr 0x318a8b4, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 double2x2(::Unity::Mathematics::float2x2 v);

  /// @brief Method double2x2, addr 0x318a854, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 double2x2(::Unity::Mathematics::int2x2 v);

  /// @brief Method double2x2, addr 0x318a884, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 double2x2(::Unity::Mathematics::uint2x2 v);

  /// @brief Method double2x2, addr 0x318a7f4, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 double2x2(bool v);

  /// @brief Method double2x2, addr 0x318a7e4, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 double2x2(double_t v);

  /// @brief Method double2x2, addr 0x318a8a0, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 double2x2(float_t v);

  /// @brief Method double2x2, addr 0x318a840, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 double2x2(int32_t v);

  /// @brief Method double2x2, addr 0x318a870, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 double2x2(uint32_t v);

  /// @brief Method double2x3, addr 0x318aa30, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 double2x3(::Unity::Mathematics::double2 c0, ::Unity::Mathematics::double2 c1, ::Unity::Mathematics::double2 c2);

  /// @brief Method double2x3, addr 0x318aa40, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 double2x3(double_t m00, double_t m01, double_t m02, double_t m10, double_t m11, double_t m12);

  /// @brief Method double2x3, addr 0x318aa80, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 double2x3(::Unity::Mathematics::bool2x3 v);

  /// @brief Method double2x3, addr 0x318ab6c, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 double2x3(::Unity::Mathematics::float2x3 v);

  /// @brief Method double2x3, addr 0x318aadc, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 double2x3(::Unity::Mathematics::int2x3 v);

  /// @brief Method double2x3, addr 0x318ab24, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 double2x3(::Unity::Mathematics::uint2x3 v);

  /// @brief Method double2x3, addr 0x318aa60, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 double2x3(bool v);

  /// @brief Method double2x3, addr 0x318aa50, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 double2x3(double_t v);

  /// @brief Method double2x3, addr 0x318ab58, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 double2x3(float_t v);

  /// @brief Method double2x3, addr 0x318aac8, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 double2x3(int32_t v);

  /// @brief Method double2x3, addr 0x318ab10, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 double2x3(uint32_t v);

  /// @brief Method double2x4, addr 0x318ad2c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 double2x4(::Unity::Mathematics::double2 c0, ::Unity::Mathematics::double2 c1, ::Unity::Mathematics::double2 c2, ::Unity::Mathematics::double2 c3);

  /// @brief Method double2x4, addr 0x318ad40, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 double2x4(double_t m00, double_t m01, double_t m02, double_t m03, double_t m10, double_t m11, double_t m12, double_t m13);

  /// @brief Method double2x4, addr 0x318ad8c, size 0x5c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 double2x4(::Unity::Mathematics::bool2x4 v);

  /// @brief Method double2x4, addr 0x318aeb8, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 double2x4(::Unity::Mathematics::float2x4 v);

  /// @brief Method double2x4, addr 0x318ae00, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 double2x4(::Unity::Mathematics::int2x4 v);

  /// @brief Method double2x4, addr 0x318ae5c, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 double2x4(::Unity::Mathematics::uint2x4 v);

  /// @brief Method double2x4, addr 0x318ad68, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 double2x4(bool v);

  /// @brief Method double2x4, addr 0x318ad54, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 double2x4(double_t v);

  /// @brief Method double2x4, addr 0x318aea0, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 double2x4(float_t v);

  /// @brief Method double2x4, addr 0x318ade8, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 double2x4(int32_t v);

  /// @brief Method double2x4, addr 0x318ae44, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 double2x4(uint32_t v);

  /// @brief Method double3, addr 0x318b134, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 double3(::Unity::Mathematics::bool3 v);

  /// @brief Method double3, addr 0x318b308, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 double3(::Unity::Mathematics::float3 v);

  /// @brief Method double3, addr 0x318b1a0, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 double3(::Unity::Mathematics::half v);

  /// @brief Method double3, addr 0x318b208, size 0xf0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 double3(::Unity::Mathematics::half3 v);

  /// @brief Method double3, addr 0x318b168, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 double3(::Unity::Mathematics::int3 v);

  /// @brief Method double3, addr 0x318b18c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 double3(::Unity::Mathematics::uint3 v);

  /// @brief Method double3, addr 0x318b118, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 double3(bool v);

  /// @brief Method double3, addr 0x318b10c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 double3(double_t v);

  /// @brief Method double3, addr 0x318b2f8, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 double3(float_t v);

  /// @brief Method double3, addr 0x318b158, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 double3(int32_t v);

  /// @brief Method double3, addr 0x318b17c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 double3(uint32_t v);

  /// @brief Method double3, addr 0x318b0fc, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 double3(double_t x, double_t y, double_t z);

  /// @brief Method double3, addr 0x318b100, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 double3(double_t x, ::Unity::Mathematics::double2 yz);

  /// @brief Method double3, addr 0x318b104, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 double3(::Unity::Mathematics::double2 xy, double_t z);

  /// @brief Method double3, addr 0x318b108, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 double3(::Unity::Mathematics::double3 xyz);

  /// @brief Method double3x2, addr 0x318baf0, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x2 double3x2(::Unity::Mathematics::double3 c0, ::Unity::Mathematics::double3 c1);

  /// @brief Method double3x2, addr 0x318bb00, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x2 double3x2(double_t m00, double_t m01, double_t m10, double_t m11, double_t m20, double_t m21);

  /// @brief Method double3x2, addr 0x318bb40, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x2 double3x2(::Unity::Mathematics::bool3x2 v);

  /// @brief Method double3x2, addr 0x318bc30, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x2 double3x2(::Unity::Mathematics::float3x2 v);

  /// @brief Method double3x2, addr 0x318bba0, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x2 double3x2(::Unity::Mathematics::int3x2 v);

  /// @brief Method double3x2, addr 0x318bbe8, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x2 double3x2(::Unity::Mathematics::uint3x2 v);

  /// @brief Method double3x2, addr 0x318bb20, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x2 double3x2(bool v);

  /// @brief Method double3x2, addr 0x318bb10, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x2 double3x2(double_t v);

  /// @brief Method double3x2, addr 0x318bc1c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x2 double3x2(float_t v);

  /// @brief Method double3x2, addr 0x318bb8c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x2 double3x2(int32_t v);

  /// @brief Method double3x2, addr 0x318bbd4, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x2 double3x2(uint32_t v);

  /// @brief Method double3x3, addr 0x318bdcc, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 double3x3(::Unity::Mathematics::double3 c0, ::Unity::Mathematics::double3 c1, ::Unity::Mathematics::double3 c2);

  /// @brief Method double3x3, addr 0x318bdec, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 double3x3(double_t m00, double_t m01, double_t m02, double_t m10, double_t m11, double_t m12, double_t m20, double_t m21, double_t m22);

  /// @brief Method double3x3, addr 0x318be48, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 double3x3(::Unity::Mathematics::bool3x3 v);

  /// @brief Method double3x3, addr 0x318bfc0, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 double3x3(::Unity::Mathematics::float3x3 v);

  /// @brief Method double3x3, addr 0x318bee8, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 double3x3(::Unity::Mathematics::int3x3 v);

  /// @brief Method double3x3, addr 0x318bf54, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 double3x3(::Unity::Mathematics::uint3x3 v);

  /// @brief Method double3x3, addr 0x318be20, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 double3x3(bool v);

  /// @brief Method double3x3, addr 0x318be08, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 double3x3(double_t v);

  /// @brief Method double3x3, addr 0x318bfa4, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 double3x3(float_t v);

  /// @brief Method double3x3, addr 0x318becc, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 double3x3(int32_t v);

  /// @brief Method double3x3, addr 0x318bf38, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 double3x3(uint32_t v);

  /// @brief Method double3x4, addr 0x318c344, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 double3x4(::Unity::Mathematics::double3 c0, ::Unity::Mathematics::double3 c1, ::Unity::Mathematics::double3 c2, ::Unity::Mathematics::double3 c3);

  /// @brief Method double3x4, addr 0x318c374, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 double3x4(double_t m00, double_t m01, double_t m02, double_t m03, double_t m10, double_t m11, double_t m12, double_t m13, double_t m20, double_t m21,
                                                          double_t m22, double_t m23);

  /// @brief Method double3x4, addr 0x318c3e0, size 0xac, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 double3x4(::Unity::Mathematics::bool3x4 v);

  /// @brief Method double3x4, addr 0x318c5b4, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 double3x4(::Unity::Mathematics::float3x4 v);

  /// @brief Method double3x4, addr 0x318c4ac, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 double3x4(::Unity::Mathematics::int3x4 v);

  /// @brief Method double3x4, addr 0x318c530, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 double3x4(::Unity::Mathematics::uint3x4 v);

  /// @brief Method double3x4, addr 0x318c3b4, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 double3x4(bool v);

  /// @brief Method double3x4, addr 0x318c398, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 double3x4(double_t v);

  /// @brief Method double3x4, addr 0x318c594, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 double3x4(float_t v);

  /// @brief Method double3x4, addr 0x318c48c, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 double3x4(int32_t v);

  /// @brief Method double3x4, addr 0x318c510, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 double3x4(uint32_t v);

  /// @brief Method double4, addr 0x318c984, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 double4(::Unity::Mathematics::bool4 v);

  /// @brief Method double4, addr 0x318cbc8, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 double4(::Unity::Mathematics::float4 v);

  /// @brief Method double4, addr 0x318ca10, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 double4(::Unity::Mathematics::half v);

  /// @brief Method double4, addr 0x318ca7c, size 0x138, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 double4(::Unity::Mathematics::half4 v);

  /// @brief Method double4, addr 0x318c9c4, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 double4(::Unity::Mathematics::int4 v);

  /// @brief Method double4, addr 0x318c9f4, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 double4(::Unity::Mathematics::uint4 v);

  /// @brief Method double4, addr 0x318c964, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 double4(bool v);

  /// @brief Method double4, addr 0x318c954, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 double4(double_t v);

  /// @brief Method double4, addr 0x318cbb4, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 double4(float_t v);

  /// @brief Method double4, addr 0x318c9b0, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 double4(int32_t v);

  /// @brief Method double4, addr 0x318c9e0, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 double4(uint32_t v);

  /// @brief Method double4, addr 0x318c934, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 double4(double_t x, double_t y, double_t z, double_t w);

  /// @brief Method double4, addr 0x318c938, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 double4(double_t x, double_t y, ::Unity::Mathematics::double2 zw);

  /// @brief Method double4, addr 0x318c93c, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 double4(double_t x, ::Unity::Mathematics::double2 yz, double_t w);

  /// @brief Method double4, addr 0x318c940, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 double4(double_t x, ::Unity::Mathematics::double3 yzw);

  /// @brief Method double4, addr 0x318c944, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 double4(::Unity::Mathematics::double2 xy, double_t z, double_t w);

  /// @brief Method double4, addr 0x318c948, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 double4(::Unity::Mathematics::double2 xy, ::Unity::Mathematics::double2 zw);

  /// @brief Method double4, addr 0x318c94c, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 double4(::Unity::Mathematics::double3 xyz, double_t w);

  /// @brief Method double4, addr 0x318c950, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 double4(::Unity::Mathematics::double4 xyzw);

  /// @brief Method double4x2, addr 0x318d4a4, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 double4x2(::Unity::Mathematics::double4 c0, ::Unity::Mathematics::double4 c1);

  /// @brief Method double4x2, addr 0x318d4b8, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 double4x2(double_t m00, double_t m01, double_t m10, double_t m11, double_t m20, double_t m21, double_t m30, double_t m31);

  /// @brief Method double4x2, addr 0x318d504, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 double4x2(::Unity::Mathematics::bool4x2 v);

  /// @brief Method double4x2, addr 0x318d634, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 double4x2(::Unity::Mathematics::float4x2 v);

  /// @brief Method double4x2, addr 0x318d57c, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 double4x2(::Unity::Mathematics::int4x2 v);

  /// @brief Method double4x2, addr 0x318d5d8, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 double4x2(::Unity::Mathematics::uint4x2 v);

  /// @brief Method double4x2, addr 0x318d4e0, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 double4x2(bool v);

  /// @brief Method double4x2, addr 0x318d4cc, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 double4x2(double_t v);

  /// @brief Method double4x2, addr 0x318d61c, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 double4x2(float_t v);

  /// @brief Method double4x2, addr 0x318d564, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 double4x2(int32_t v);

  /// @brief Method double4x2, addr 0x318d5c0, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 double4x2(uint32_t v);

  /// @brief Method double4x3, addr 0x318d874, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 double4x3(::Unity::Mathematics::double4 c0, ::Unity::Mathematics::double4 c1, ::Unity::Mathematics::double4 c2);

  /// @brief Method double4x3, addr 0x318d898, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 double4x3(double_t m00, double_t m01, double_t m02, double_t m10, double_t m11, double_t m12, double_t m20, double_t m21, double_t m22, double_t m30,
                                                          double_t m31, double_t m32);

  /// @brief Method double4x3, addr 0x318d904, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 double4x3(::Unity::Mathematics::bool4x3 v);

  /// @brief Method double4x3, addr 0x318dab4, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 double4x3(::Unity::Mathematics::float4x3 v);

  /// @brief Method double4x3, addr 0x318d9ac, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 double4x3(::Unity::Mathematics::int4x3 v);

  /// @brief Method double4x3, addr 0x318da30, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 double4x3(::Unity::Mathematics::uint4x3 v);

  /// @brief Method double4x3, addr 0x318d8d8, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 double4x3(bool v);

  /// @brief Method double4x3, addr 0x318d8bc, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 double4x3(double_t v);

  /// @brief Method double4x3, addr 0x318da94, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 double4x3(float_t v);

  /// @brief Method double4x3, addr 0x318d98c, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 double4x3(int32_t v);

  /// @brief Method double4x3, addr 0x318da10, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 double4x3(uint32_t v);

  /// @brief Method double4x4, addr 0x318de14, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x4 double4x4(::Unity::Mathematics::double4 c0, ::Unity::Mathematics::double4 c1, ::Unity::Mathematics::double4 c2, ::Unity::Mathematics::double4 c3);

  /// @brief Method double4x4, addr 0x318de48, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x4 double4x4(double_t m00, double_t m01, double_t m02, double_t m03, double_t m10, double_t m11, double_t m12, double_t m13, double_t m20, double_t m21,
                                                          double_t m22, double_t m23, double_t m30, double_t m31, double_t m32, double_t m33);

  /// @brief Method double4x4, addr 0x318ded4, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x4 double4x4(::Unity::Mathematics::bool4x4 v);

  /// @brief Method double4x4, addr 0x318e108, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x4 double4x4(::Unity::Mathematics::float4x4 v);

  /// @brief Method double4x4, addr 0x318dfb0, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x4 double4x4(::Unity::Mathematics::int4x4 v);

  /// @brief Method double4x4, addr 0x318e05c, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x4 double4x4(::Unity::Mathematics::uint4x4 v);

  /// @brief Method double4x4, addr 0x318dea0, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x4 double4x4(bool v);

  /// @brief Method double4x4, addr 0x318de7c, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x4 double4x4(double_t v);

  /// @brief Method double4x4, addr 0x318e0e0, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x4 double4x4(float_t v);

  /// @brief Method double4x4, addr 0x318df88, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x4 double4x4(int32_t v);

  /// @brief Method double4x4, addr 0x318e034, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x4 double4x4(uint32_t v);

  /// @brief Method down, addr 0x31b1b44, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 down();

  /// @brief Method exp, addr 0x31a55b4, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 exp(::Unity::Mathematics::double2 x);

  /// @brief Method exp, addr 0x31a5668, size 0x10c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 exp(::Unity::Mathematics::double3 x);

  /// @brief Method exp, addr 0x31a5774, size 0x15c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 exp(::Unity::Mathematics::double4 x);

  /// @brief Method exp, addr 0x31a523c, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 exp(::Unity::Mathematics::float2 x);

  /// @brief Method exp, addr 0x31a52f0, size 0x10c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 exp(::Unity::Mathematics::float3 x);

  /// @brief Method exp, addr 0x31a53fc, size 0x15c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 exp(::Unity::Mathematics::float4 x);

  /// @brief Method exp, addr 0x31ba6e8, size 0x188, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion exp(::Unity::Mathematics::quaternion q);

  /// @brief Method exp, addr 0x31a5558, size 0x5c, virtual false, abstract: false, final false
  static inline double_t exp(double_t x);

  /// @brief Method exp, addr 0x31a51d8, size 0x64, virtual false, abstract: false, final false
  static inline float_t exp(float_t x);

  /// @brief Method exp10, addr 0x31a6564, size 0xcc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 exp10(::Unity::Mathematics::double2 x);

  /// @brief Method exp10, addr 0x31a6630, size 0x12c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 exp10(::Unity::Mathematics::double3 x);

  /// @brief Method exp10, addr 0x31a675c, size 0x184, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 exp10(::Unity::Mathematics::double4 x);

  /// @brief Method exp10, addr 0x31a6148, size 0xd8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 exp10(::Unity::Mathematics::float2 x);

  /// @brief Method exp10, addr 0x31a6220, size 0x140, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 exp10(::Unity::Mathematics::float3 x);

  /// @brief Method exp10, addr 0x31a6360, size 0x1a0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 exp10(::Unity::Mathematics::float4 x);

  /// @brief Method exp10, addr 0x31a6500, size 0x64, virtual false, abstract: false, final false
  static inline double_t exp10(double_t x);

  /// @brief Method exp10, addr 0x31a60d8, size 0x70, virtual false, abstract: false, final false
  static inline float_t exp10(float_t x);

  /// @brief Method exp2, addr 0x31a5d5c, size 0xcc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 exp2(::Unity::Mathematics::double2 x);

  /// @brief Method exp2, addr 0x31a5e28, size 0x12c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 exp2(::Unity::Mathematics::double3 x);

  /// @brief Method exp2, addr 0x31a5f54, size 0x184, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 exp2(::Unity::Mathematics::double4 x);

  /// @brief Method exp2, addr 0x31a5940, size 0xd8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 exp2(::Unity::Mathematics::float2 x);

  /// @brief Method exp2, addr 0x31a5a18, size 0x140, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 exp2(::Unity::Mathematics::float3 x);

  /// @brief Method exp2, addr 0x31a5b58, size 0x1a0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 exp2(::Unity::Mathematics::float4 x);

  /// @brief Method exp2, addr 0x31a5cf8, size 0x64, virtual false, abstract: false, final false
  static inline double_t exp2(double_t x);

  /// @brief Method exp2, addr 0x31a58d0, size 0x70, virtual false, abstract: false, final false
  static inline float_t exp2(float_t x);

  /// @brief Method f16tof32, addr 0x31b0f78, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 f16tof32(::Unity::Mathematics::uint2 x);

  /// @brief Method f16tof32, addr 0x31b102c, size 0x12c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 f16tof32(::Unity::Mathematics::uint3 x);

  /// @brief Method f16tof32, addr 0x31b1158, size 0x150, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 f16tof32(::Unity::Mathematics::uint4 x);

  /// @brief Method f16tof32, addr 0x31b0f1c, size 0x5c, virtual false, abstract: false, final false
  static inline float_t f16tof32(uint32_t x);

  /// @brief Method f32tof16, addr 0x31b1358, size 0x15c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 f32tof16(::Unity::Mathematics::float2 x);

  /// @brief Method f32tof16, addr 0x31b14b4, size 0x20c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 f32tof16(::Unity::Mathematics::float3 x);

  /// @brief Method f32tof16, addr 0x31b16c0, size 0x280, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 f32tof16(::Unity::Mathematics::float4 x);

  /// @brief Method f32tof16, addr 0x31b12a8, size 0xb0, virtual false, abstract: false, final false
  static inline uint32_t f32tof16(float_t x);

  /// @brief Method faceforward, addr 0x31acac8, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 faceforward(::Unity::Mathematics::double2 n, ::Unity::Mathematics::double2 i, ::Unity::Mathematics::double2 ng);

  /// @brief Method faceforward, addr 0x31acaec, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 faceforward(::Unity::Mathematics::double3 n, ::Unity::Mathematics::double3 i, ::Unity::Mathematics::double3 ng);

  /// @brief Method faceforward, addr 0x31acb28, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 faceforward(::Unity::Mathematics::double4 n, ::Unity::Mathematics::double4 i, ::Unity::Mathematics::double4 ng);

  /// @brief Method faceforward, addr 0x31aca1c, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 faceforward(::Unity::Mathematics::float2 n, ::Unity::Mathematics::float2 i, ::Unity::Mathematics::float2 ng);

  /// @brief Method faceforward, addr 0x31aca40, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 faceforward(::Unity::Mathematics::float3 n, ::Unity::Mathematics::float3 i, ::Unity::Mathematics::float3 ng);

  /// @brief Method faceforward, addr 0x31aca7c, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 faceforward(::Unity::Mathematics::float4 n, ::Unity::Mathematics::float4 i, ::Unity::Mathematics::float4 ng);

  /// @brief Method fastinverse, addr 0x318c61c, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 fastinverse(::Unity::Mathematics::double3x4 m);

  /// @brief Method fastinverse, addr 0x318e59c, size 0x94, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x4 fastinverse(::Unity::Mathematics::double4x4 m);

  /// @brief Method fastinverse, addr 0x3190fe0, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 fastinverse(::Unity::Mathematics::float3x4 m);

  /// @brief Method fastinverse, addr 0x3192cc8, size 0x94, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 fastinverse(::Unity::Mathematics::float4x4 m);

  /// @brief Method float2, addr 0x318eb10, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 float2(::Unity::Mathematics::bool2 v);

  /// @brief Method float2, addr 0x318ec78, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 float2(::Unity::Mathematics::double2 v);

  /// @brief Method float2, addr 0x318eb70, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 float2(::Unity::Mathematics::half v);

  /// @brief Method float2, addr 0x318ebd0, size 0x9c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 float2(::Unity::Mathematics::half2 v);

  /// @brief Method float2, addr 0x318eb38, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 float2(::Unity::Mathematics::int2 v);

  /// @brief Method float2, addr 0x318eb58, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 float2(::Unity::Mathematics::uint2 v);

  /// @brief Method float2, addr 0x318eaf8, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 float2(bool v);

  /// @brief Method float2, addr 0x318ec6c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 float2(double_t v);

  /// @brief Method float2, addr 0x318eaf0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 float2(float_t v);

  /// @brief Method float2, addr 0x318eb2c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 float2(int32_t v);

  /// @brief Method float2, addr 0x318eb48, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 float2(uint32_t v);

  /// @brief Method float2, addr 0x318eae8, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 float2(float_t x, float_t y);

  /// @brief Method float2, addr 0x318eaec, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 float2(::Unity::Mathematics::float2 xy);

  /// @brief Method float2x2, addr 0x318f358, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 float2x2(::Unity::Mathematics::float2 c0, ::Unity::Mathematics::float2 c1);

  /// @brief Method float2x2, addr 0x318f35c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 float2x2(float_t m00, float_t m01, float_t m10, float_t m11);

  /// @brief Method float2x2, addr 0x318f39c, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 float2x2(::Unity::Mathematics::bool2x2 v);

  /// @brief Method float2x2, addr 0x318f450, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 float2x2(::Unity::Mathematics::double2x2 v);

  /// @brief Method float2x2, addr 0x318f3dc, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 float2x2(::Unity::Mathematics::int2x2 v);

  /// @brief Method float2x2, addr 0x318f410, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 float2x2(::Unity::Mathematics::uint2x2 v);

  /// @brief Method float2x2, addr 0x318f37c, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 float2x2(bool v);

  /// @brief Method float2x2, addr 0x318f43c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 float2x2(double_t v);

  /// @brief Method float2x2, addr 0x318f36c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 float2x2(float_t v);

  /// @brief Method float2x2, addr 0x318f3c8, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 float2x2(int32_t v);

  /// @brief Method float2x2, addr 0x318f3f8, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 float2x2(uint32_t v);

  /// @brief Method float2x3, addr 0x318f58c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 float2x3(::Unity::Mathematics::float2 c0, ::Unity::Mathematics::float2 c1, ::Unity::Mathematics::float2 c2);

  /// @brief Method float2x3, addr 0x318f59c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 float2x3(float_t m00, float_t m01, float_t m02, float_t m10, float_t m11, float_t m12);

  /// @brief Method float2x3, addr 0x318f5dc, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 float2x3(::Unity::Mathematics::bool2x3 v);

  /// @brief Method float2x3, addr 0x318f6e4, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 float2x3(::Unity::Mathematics::double2x3 v);

  /// @brief Method float2x3, addr 0x318f638, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 float2x3(::Unity::Mathematics::int2x3 v);

  /// @brief Method float2x3, addr 0x318f684, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 float2x3(::Unity::Mathematics::uint2x3 v);

  /// @brief Method float2x3, addr 0x318f5bc, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 float2x3(bool v);

  /// @brief Method float2x3, addr 0x318f6d0, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 float2x3(double_t v);

  /// @brief Method float2x3, addr 0x318f5ac, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 float2x3(float_t v);

  /// @brief Method float2x3, addr 0x318f624, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 float2x3(int32_t v);

  /// @brief Method float2x3, addr 0x318f66c, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 float2x3(uint32_t v);

  /// @brief Method float2x4, addr 0x318f850, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x4 float2x4(::Unity::Mathematics::float2 c0, ::Unity::Mathematics::float2 c1, ::Unity::Mathematics::float2 c2, ::Unity::Mathematics::float2 c3);

  /// @brief Method float2x4, addr 0x318f864, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x4 float2x4(float_t m00, float_t m01, float_t m02, float_t m03, float_t m10, float_t m11, float_t m12, float_t m13);

  /// @brief Method float2x4, addr 0x318f8a0, size 0x5c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x4 float2x4(::Unity::Mathematics::bool2x4 v);

  /// @brief Method float2x4, addr 0x318f9d8, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x4 float2x4(::Unity::Mathematics::double2x4 v);

  /// @brief Method float2x4, addr 0x318f90c, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x4 float2x4(::Unity::Mathematics::int2x4 v);

  /// @brief Method float2x4, addr 0x318f964, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x4 float2x4(::Unity::Mathematics::uint2x4 v);

  /// @brief Method float2x4, addr 0x318f884, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x4 float2x4(bool v);

  /// @brief Method float2x4, addr 0x318f9c8, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x4 float2x4(double_t v);

  /// @brief Method float2x4, addr 0x318f878, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x4 float2x4(float_t v);

  /// @brief Method float2x4, addr 0x318f8fc, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x4 float2x4(int32_t v);

  /// @brief Method float2x4, addr 0x318f950, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x4 float2x4(uint32_t v);

  /// @brief Method float3, addr 0x318fbd8, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 float3(::Unity::Mathematics::bool3 v);

  /// @brief Method float3, addr 0x318fdac, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 float3(::Unity::Mathematics::double3 v);

  /// @brief Method float3, addr 0x318fc54, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 float3(::Unity::Mathematics::half v);

  /// @brief Method float3, addr 0x318fcb8, size 0xe4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 float3(::Unity::Mathematics::half3 v);

  /// @brief Method float3, addr 0x318fc0c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 float3(::Unity::Mathematics::int3 v);

  /// @brief Method float3, addr 0x318fc34, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 float3(::Unity::Mathematics::uint3 v);

  /// @brief Method float3, addr 0x318fbbc, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 float3(bool v);

  /// @brief Method float3, addr 0x318fd9c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 float3(double_t v);

  /// @brief Method float3, addr 0x318fbb0, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 float3(float_t v);

  /// @brief Method float3, addr 0x318fbfc, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 float3(int32_t v);

  /// @brief Method float3, addr 0x318fc20, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 float3(uint32_t v);

  /// @brief Method float3, addr 0x318fba0, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 float3(float_t x, float_t y, float_t z);

  /// @brief Method float3, addr 0x318fba4, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 float3(float_t x, ::Unity::Mathematics::float2 yz);

  /// @brief Method float3, addr 0x318fba8, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 float3(::Unity::Mathematics::float2 xy, float_t z);

  /// @brief Method float3, addr 0x318fbac, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 float3(::Unity::Mathematics::float3 xyz);

  /// @brief Method float3x2, addr 0x3190564, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x2 float3x2(::Unity::Mathematics::float3 c0, ::Unity::Mathematics::float3 c1);

  /// @brief Method float3x2, addr 0x3190574, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x2 float3x2(float_t m00, float_t m01, float_t m10, float_t m11, float_t m20, float_t m21);

  /// @brief Method float3x2, addr 0x31905b4, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x2 float3x2(::Unity::Mathematics::bool3x2 v);

  /// @brief Method float3x2, addr 0x31906c0, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x2 float3x2(::Unity::Mathematics::double3x2 v);

  /// @brief Method float3x2, addr 0x3190614, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x2 float3x2(::Unity::Mathematics::int3x2 v);

  /// @brief Method float3x2, addr 0x3190660, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x2 float3x2(::Unity::Mathematics::uint3x2 v);

  /// @brief Method float3x2, addr 0x3190594, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x2 float3x2(bool v);

  /// @brief Method float3x2, addr 0x31906ac, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x2 float3x2(double_t v);

  /// @brief Method float3x2, addr 0x3190584, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x2 float3x2(float_t v);

  /// @brief Method float3x2, addr 0x3190600, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x2 float3x2(int32_t v);

  /// @brief Method float3x2, addr 0x3190648, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x2 float3x2(uint32_t v);

  /// @brief Method float3x3, addr 0x3190814, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 float3x3(::Unity::Mathematics::float3 c0, ::Unity::Mathematics::float3 c1, ::Unity::Mathematics::float3 c2);

  /// @brief Method float3x3, addr 0x31b1ca4, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 float3x3(::Unity::Mathematics::float4x4 f4x4);

  /// @brief Method float3x3, addr 0x3190834, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 float3x3(float_t m00, float_t m01, float_t m02, float_t m10, float_t m11, float_t m12, float_t m20, float_t m21, float_t m22);

  /// @brief Method float3x3, addr 0x31b1ce4, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 float3x3(::Unity::Mathematics::quaternion rotation);

  /// @brief Method float3x3, addr 0x3190880, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 float3x3(::Unity::Mathematics::bool3x3 v);

  /// @brief Method float3x3, addr 0x3190a08, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 float3x3(::Unity::Mathematics::double3x3 v);

  /// @brief Method float3x3, addr 0x3190918, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 float3x3(::Unity::Mathematics::int3x3 v);

  /// @brief Method float3x3, addr 0x3190980, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 float3x3(::Unity::Mathematics::uint3x3 v);

  /// @brief Method float3x3, addr 0x3190860, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 float3x3(bool v);

  /// @brief Method float3x3, addr 0x31909f4, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 float3x3(double_t v);

  /// @brief Method float3x3, addr 0x3190850, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 float3x3(float_t v);

  /// @brief Method float3x3, addr 0x3190904, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 float3x3(int32_t v);

  /// @brief Method float3x3, addr 0x3190968, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 float3x3(uint32_t v);

  /// @brief Method float3x4, addr 0x3190d0c, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 float3x4(::Unity::Mathematics::float3 c0, ::Unity::Mathematics::float3 c1, ::Unity::Mathematics::float3 c2, ::Unity::Mathematics::float3 c3);

  /// @brief Method float3x4, addr 0x3190d3c, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 float3x4(float_t m00, float_t m01, float_t m02, float_t m03, float_t m10, float_t m11, float_t m12, float_t m13, float_t m20, float_t m21, float_t m22,
                                                        float_t m23);

  /// @brief Method float3x4, addr 0x3190d98, size 0xac, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 float3x4(::Unity::Mathematics::bool3x4 v);

  /// @brief Method float3x4, addr 0x3190f7c, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 float3x4(::Unity::Mathematics::double3x4 v);

  /// @brief Method float3x4, addr 0x3190e58, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 float3x4(::Unity::Mathematics::int3x4 v);

  /// @brief Method float3x4, addr 0x3190ed4, size 0x94, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 float3x4(::Unity::Mathematics::uint3x4 v);

  /// @brief Method float3x4, addr 0x3190d78, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 float3x4(bool v);

  /// @brief Method float3x4, addr 0x3190f68, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 float3x4(double_t v);

  /// @brief Method float3x4, addr 0x3190d68, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 float3x4(float_t v);

  /// @brief Method float3x4, addr 0x3190e44, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 float3x4(int32_t v);

  /// @brief Method float3x4, addr 0x3190ebc, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 float3x4(uint32_t v);

  /// @brief Method float4, addr 0x31912a4, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 float4(::Unity::Mathematics::bool4 v);

  /// @brief Method float4, addr 0x31914e8, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 float4(::Unity::Mathematics::double4 v);

  /// @brief Method float4, addr 0x3191344, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 float4(::Unity::Mathematics::half v);

  /// @brief Method float4, addr 0x31913ac, size 0x128, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 float4(::Unity::Mathematics::half4 v);

  /// @brief Method float4, addr 0x31912e4, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 float4(::Unity::Mathematics::int4 v);

  /// @brief Method float4, addr 0x3191318, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 float4(::Unity::Mathematics::uint4 v);

  /// @brief Method float4, addr 0x3191284, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 float4(bool v);

  /// @brief Method float4, addr 0x31914d4, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 float4(double_t v);

  /// @brief Method float4, addr 0x3191274, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 float4(float_t v);

  /// @brief Method float4, addr 0x31912d0, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 float4(int32_t v);

  /// @brief Method float4, addr 0x3191300, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 float4(uint32_t v);

  /// @brief Method float4, addr 0x3191254, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 float4(float_t x, float_t y, float_t z, float_t w);

  /// @brief Method float4, addr 0x3191258, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 float4(float_t x, float_t y, ::Unity::Mathematics::float2 zw);

  /// @brief Method float4, addr 0x319125c, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 float4(float_t x, ::Unity::Mathematics::float2 yz, float_t w);

  /// @brief Method float4, addr 0x3191260, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 float4(float_t x, ::Unity::Mathematics::float3 yzw);

  /// @brief Method float4, addr 0x3191264, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 float4(::Unity::Mathematics::float2 xy, float_t z, float_t w);

  /// @brief Method float4, addr 0x3191268, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 float4(::Unity::Mathematics::float2 xy, ::Unity::Mathematics::float2 zw);

  /// @brief Method float4, addr 0x319126c, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 float4(::Unity::Mathematics::float3 xyz, float_t w);

  /// @brief Method float4, addr 0x3191270, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 float4(::Unity::Mathematics::float4 xyzw);

  /// @brief Method float4x2, addr 0x3191d84, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x2 float4x2(::Unity::Mathematics::float4 c0, ::Unity::Mathematics::float4 c1);

  /// @brief Method float4x2, addr 0x3191d98, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x2 float4x2(float_t m00, float_t m01, float_t m10, float_t m11, float_t m20, float_t m21, float_t m30, float_t m31);

  /// @brief Method float4x2, addr 0x3191dd4, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x2 float4x2(::Unity::Mathematics::bool4x2 v);

  /// @brief Method float4x2, addr 0x3191f10, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x2 float4x2(::Unity::Mathematics::double4x2 v);

  /// @brief Method float4x2, addr 0x3191e44, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x2 float4x2(::Unity::Mathematics::int4x2 v);

  /// @brief Method float4x2, addr 0x3191e9c, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x2 float4x2(::Unity::Mathematics::uint4x2 v);

  /// @brief Method float4x2, addr 0x3191db8, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x2 float4x2(bool v);

  /// @brief Method float4x2, addr 0x3191f00, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x2 float4x2(double_t v);

  /// @brief Method float4x2, addr 0x3191dac, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x2 float4x2(float_t v);

  /// @brief Method float4x2, addr 0x3191e34, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x2 float4x2(int32_t v);

  /// @brief Method float4x2, addr 0x3191e88, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x2 float4x2(uint32_t v);

  /// @brief Method float4x3, addr 0x31920cc, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x3 float4x3(::Unity::Mathematics::float4 c0, ::Unity::Mathematics::float4 c1, ::Unity::Mathematics::float4 c2);

  /// @brief Method float4x3, addr 0x31920e8, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x3 float4x3(float_t m00, float_t m01, float_t m02, float_t m10, float_t m11, float_t m12, float_t m20, float_t m21, float_t m22, float_t m30, float_t m31,
                                                        float_t m32);

  /// @brief Method float4x3, addr 0x3192144, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x3 float4x3(::Unity::Mathematics::bool4x3 v);

  /// @brief Method float4x3, addr 0x3192304, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x3 float4x3(::Unity::Mathematics::double4x3 v);

  /// @brief Method float4x3, addr 0x31921e0, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x3 float4x3(::Unity::Mathematics::int4x3 v);

  /// @brief Method float4x3, addr 0x319225c, size 0x94, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x3 float4x3(::Unity::Mathematics::uint4x3 v);

  /// @brief Method float4x3, addr 0x3192124, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x3 float4x3(bool v);

  /// @brief Method float4x3, addr 0x31922f0, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x3 float4x3(double_t v);

  /// @brief Method float4x3, addr 0x3192114, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x3 float4x3(float_t v);

  /// @brief Method float4x3, addr 0x31921cc, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x3 float4x3(int32_t v);

  /// @brief Method float4x3, addr 0x3192244, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x3 float4x3(uint32_t v);

  /// @brief Method float4x4, addr 0x3192594, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 float4x4(::Unity::Mathematics::float4 c0, ::Unity::Mathematics::float4 c1, ::Unity::Mathematics::float4 c2, ::Unity::Mathematics::float4 c3);

  /// @brief Method float4x4, addr 0x31925b0, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 float4x4(float_t m00, float_t m01, float_t m02, float_t m03, float_t m10, float_t m11, float_t m12, float_t m13, float_t m20, float_t m21, float_t m22,
                                                        float_t m23, float_t m30, float_t m31, float_t m32, float_t m33);

  /// @brief Method float4x4, addr 0x31b1cfc, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 float4x4(::Unity::Mathematics::float3x3 rotation, ::Unity::Mathematics::float3 translation);

  /// @brief Method float4x4, addr 0x31b1d3c, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 float4x4(::Unity::Mathematics::quaternion rotation, ::Unity::Mathematics::float3 translation);

  /// @brief Method float4x4, addr 0x31b1d54, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 float4x4(::Unity::Mathematics::RigidTransform transform);

  /// @brief Method float4x4, addr 0x3192624, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 float4x4(::Unity::Mathematics::bool4x4 v);

  /// @brief Method float4x4, addr 0x3192860, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 float4x4(::Unity::Mathematics::double4x4 v);

  /// @brief Method float4x4, addr 0x31926ec, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 float4x4(::Unity::Mathematics::int4x4 v);

  /// @brief Method float4x4, addr 0x3192788, size 0xc4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 float4x4(::Unity::Mathematics::uint4x4 v);

  /// @brief Method float4x4, addr 0x3192604, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 float4x4(bool v);

  /// @brief Method float4x4, addr 0x319284c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 float4x4(double_t v);

  /// @brief Method float4x4, addr 0x31925f4, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 float4x4(float_t v);

  /// @brief Method float4x4, addr 0x31926d8, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 float4x4(int32_t v);

  /// @brief Method float4x4, addr 0x3192770, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 float4x4(uint32_t v);

  /// @brief Method floor, addr 0x31a23d4, size 0x9c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 floor(::Unity::Mathematics::double2 x);

  /// @brief Method floor, addr 0x31a2470, size 0xe4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 floor(::Unity::Mathematics::double3 x);

  /// @brief Method floor, addr 0x31a2554, size 0x124, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 floor(::Unity::Mathematics::double4 x);

  /// @brief Method floor, addr 0x31a20d4, size 0x9c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 floor(::Unity::Mathematics::float2 x);

  /// @brief Method floor, addr 0x31a2170, size 0xe4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 floor(::Unity::Mathematics::float3 x);

  /// @brief Method floor, addr 0x31a2254, size 0x124, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 floor(::Unity::Mathematics::float4 x);

  /// @brief Method floor, addr 0x31a2378, size 0x5c, virtual false, abstract: false, final false
  static inline double_t floor(double_t x);

  /// @brief Method floor, addr 0x31a2078, size 0x5c, virtual false, abstract: false, final false
  static inline float_t floor(float_t x);

  /// @brief Method floorlog2, addr 0x31afce4, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 floorlog2(::Unity::Mathematics::int2 x);

  /// @brief Method floorlog2, addr 0x31aff18, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 floorlog2(::Unity::Mathematics::uint2 x);

  /// @brief Method floorlog2, addr 0x31afd58, size 0xa8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 floorlog2(::Unity::Mathematics::int3 x);

  /// @brief Method floorlog2, addr 0x31aff8c, size 0xa8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 floorlog2(::Unity::Mathematics::uint3 x);

  /// @brief Method floorlog2, addr 0x31afe00, size 0xe0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 floorlog2(::Unity::Mathematics::int4 x);

  /// @brief Method floorlog2, addr 0x31b0034, size 0xe0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 floorlog2(::Unity::Mathematics::uint4 x);

  /// @brief Method floorlog2, addr 0x31afcac, size 0x38, virtual false, abstract: false, final false
  static inline int32_t floorlog2(int32_t x);

  /// @brief Method floorlog2, addr 0x31afee0, size 0x38, virtual false, abstract: false, final false
  static inline int32_t floorlog2(uint32_t x);

  /// @brief Method fmod, addr 0x31a7f08, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 fmod(::Unity::Mathematics::double2 x, ::Unity::Mathematics::double2 y);

  /// @brief Method fmod, addr 0x31a7f4c, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 fmod(::Unity::Mathematics::double3 x, ::Unity::Mathematics::double3 y);

  /// @brief Method fmod, addr 0x31a7fb4, size 0x8c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 fmod(::Unity::Mathematics::double4 x, ::Unity::Mathematics::double4 y);

  /// @brief Method fmod, addr 0x31a7dcc, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 fmod(::Unity::Mathematics::float2 x, ::Unity::Mathematics::float2 y);

  /// @brief Method fmod, addr 0x31a7e10, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 fmod(::Unity::Mathematics::float3 x, ::Unity::Mathematics::float3 y);

  /// @brief Method fmod, addr 0x31a7e78, size 0x8c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 fmod(::Unity::Mathematics::float4 x, ::Unity::Mathematics::float4 y);

  /// @brief Method fmod, addr 0x31a7f04, size 0x4, virtual false, abstract: false, final false
  static inline double_t fmod(double_t x, double_t y);

  /// @brief Method fmod, addr 0x31a7dc8, size 0x4, virtual false, abstract: false, final false
  static inline float_t fmod(float_t x, float_t y);

  /// @brief Method fold_to_uint, addr 0x31b1c1c, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 fold_to_uint(::Unity::Mathematics::double2 x);

  /// @brief Method fold_to_uint, addr 0x31b1c3c, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 fold_to_uint(::Unity::Mathematics::double3 x);

  /// @brief Method fold_to_uint, addr 0x31b1c68, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 fold_to_uint(::Unity::Mathematics::double4 x);

  /// @brief Method fold_to_uint, addr 0x31b1c0c, size 0x10, virtual false, abstract: false, final false
  static inline uint32_t fold_to_uint(double_t x);

  /// @brief Method forward, addr 0x31b1b54, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 forward();

  /// @brief Method forward, addr 0x31bb24c, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 forward(::Unity::Mathematics::quaternion q);

  /// @brief Method frac, addr 0x31a44d8, size 0xa8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 frac(::Unity::Mathematics::double2 x);

  /// @brief Method frac, addr 0x31a4580, size 0xf0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 frac(::Unity::Mathematics::double3 x);

  /// @brief Method frac, addr 0x31a4670, size 0x138, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 frac(::Unity::Mathematics::double4 x);

  /// @brief Method frac, addr 0x31a41b0, size 0xa8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 frac(::Unity::Mathematics::float2 x);

  /// @brief Method frac, addr 0x31a4258, size 0xf0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 frac(::Unity::Mathematics::float3 x);

  /// @brief Method frac, addr 0x31a4348, size 0x138, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 frac(::Unity::Mathematics::float4 x);

  /// @brief Method frac, addr 0x31a4480, size 0x58, virtual false, abstract: false, final false
  static inline double_t frac(double_t x);

  /// @brief Method frac, addr 0x31a4158, size 0x58, virtual false, abstract: false, final false
  static inline float_t frac(float_t x);

  /// @brief Method half, addr 0x31931c8, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half half(double_t v);

  /// @brief Method half, addr 0x3193114, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half half(float_t v);

  /// @brief Method half, addr 0x319310c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half half(::Unity::Mathematics::half x);

  /// @brief Method half2, addr 0x3193620, size 0x168, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half2 half2(::Unity::Mathematics::double2 v);

  /// @brief Method half2, addr 0x31933c0, size 0x160, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half2 half2(::Unity::Mathematics::float2 v);

  /// @brief Method half2, addr 0x31932b4, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half2 half2(::Unity::Mathematics::half v);

  /// @brief Method half2, addr 0x3193520, size 0x100, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half2 half2(double_t v);

  /// @brief Method half2, addr 0x31932c4, size 0xfc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half2 half2(float_t v);

  /// @brief Method half2, addr 0x319329c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half2 half2(::Unity::Mathematics::half x, ::Unity::Mathematics::half y);

  /// @brief Method half2, addr 0x31932ac, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half2 half2(::Unity::Mathematics::half2 xy);

  /// @brief Method half3, addr 0x3193cb4, size 0x208, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half3 half3(::Unity::Mathematics::double3 v);

  /// @brief Method half3, addr 0x3193984, size 0x1fc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half3 half3(::Unity::Mathematics::float3 v);

  /// @brief Method half3, addr 0x319383c, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half3 half3(::Unity::Mathematics::half v);

  /// @brief Method half3, addr 0x3193b80, size 0x134, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half3 half3(double_t v);

  /// @brief Method half3, addr 0x3193854, size 0x130, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half3 half3(float_t v);

  /// @brief Method half3, addr 0x3193800, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half3 half3(::Unity::Mathematics::half x, ::Unity::Mathematics::half y, ::Unity::Mathematics::half z);

  /// @brief Method half3, addr 0x3193814, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half3 half3(::Unity::Mathematics::half x, ::Unity::Mathematics::half2 yz);

  /// @brief Method half3, addr 0x3193828, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half3 half3(::Unity::Mathematics::half2 xy, ::Unity::Mathematics::half z);

  /// @brief Method half3, addr 0x3193834, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half3 half3(::Unity::Mathematics::half3 xyz);

  /// @brief Method half4, addr 0x319456c, size 0x2b4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half4 half4(::Unity::Mathematics::double4 v);

  /// @brief Method half4, addr 0x3194164, size 0x2a4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half4 half4(::Unity::Mathematics::float4 v);

  /// @brief Method half4, addr 0x3193fe8, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half4 half4(::Unity::Mathematics::half v);

  /// @brief Method half4, addr 0x3194408, size 0x164, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half4 half4(double_t v);

  /// @brief Method half4, addr 0x3194004, size 0x160, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half4 half4(float_t v);

  /// @brief Method half4, addr 0x3193f58, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half4 half4(::Unity::Mathematics::half x, ::Unity::Mathematics::half y, ::Unity::Mathematics::half z, ::Unity::Mathematics::half w);

  /// @brief Method half4, addr 0x3193f70, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half4 half4(::Unity::Mathematics::half x, ::Unity::Mathematics::half y, ::Unity::Mathematics::half2 zw);

  /// @brief Method half4, addr 0x3193f8c, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half4 half4(::Unity::Mathematics::half x, ::Unity::Mathematics::half2 yz, ::Unity::Mathematics::half w);

  /// @brief Method half4, addr 0x3193fa4, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half4 half4(::Unity::Mathematics::half x, ::Unity::Mathematics::half3 yzw);

  /// @brief Method half4, addr 0x3193fc0, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half4 half4(::Unity::Mathematics::half2 xy, ::Unity::Mathematics::half z, ::Unity::Mathematics::half w);

  /// @brief Method half4, addr 0x3193fcc, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half4 half4(::Unity::Mathematics::half2 xy, ::Unity::Mathematics::half2 zw);

  /// @brief Method half4, addr 0x3193fdc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half4 half4(::Unity::Mathematics::half3 xyz, ::Unity::Mathematics::half w);

  /// @brief Method half4, addr 0x3193fe4, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half4 half4(::Unity::Mathematics::half4 xyzw);

  /// @brief Method hash, addr 0x31b1940, size 0x1f4, virtual false, abstract: false, final false
  static inline uint32_t hash(::cordl_internals::Ptr<void> pBuffer, int32_t numBytes, uint32_t seed);

  /// @brief Method hash, addr 0x31bb188, size 0x60, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::quaternion q);

  /// @brief Method hash, addr 0x31bb77c, size 0x98, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::RigidTransform t);

  /// @brief Method hash, addr 0x3186a54, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::bool2 v);

  /// @brief Method hash, addr 0x3187204, size 0x78, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::bool2x2 v);

  /// @brief Method hash, addr 0x3187388, size 0xbc, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::bool2x3 v);

  /// @brief Method hash, addr 0x31875bc, size 0xf8, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::bool2x4 v);

  /// @brief Method hash, addr 0x3187810, size 0x54, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::bool3 v);

  /// @brief Method hash, addr 0x3188090, size 0xb4, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::bool3x2 v);

  /// @brief Method hash, addr 0x31882f0, size 0x12c, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::bool3x3 v);

  /// @brief Method hash, addr 0x3188690, size 0x198, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::bool3x4 v);

  /// @brief Method hash, addr 0x3188a94, size 0x70, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::bool4 v);

  /// @brief Method hash, addr 0x3189428, size 0xf4, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::bool4x2 v);

  /// @brief Method hash, addr 0x318970c, size 0x17c, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::bool4x3 v);

  /// @brief Method hash, addr 0x3189b54, size 0x1f8, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::bool4x4 v);

  /// @brief Method hash, addr 0x318a0dc, size 0x44, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::double2 v);

  /// @brief Method hash, addr 0x318a914, size 0x88, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::double2x2 v);

  /// @brief Method hash, addr 0x318aba8, size 0xbc, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::double2x3 v);

  /// @brief Method hash, addr 0x318af00, size 0xf8, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::double2x4 v);

  /// @brief Method hash, addr 0x318b318, size 0x60, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::double3 v);

  /// @brief Method hash, addr 0x318bc6c, size 0xac, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::double3x2 v);

  /// @brief Method hash, addr 0x318c144, size 0xfc, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::double3x3 v);

  /// @brief Method hash, addr 0x318c690, size 0x150, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::double3x4 v);

  /// @brief Method hash, addr 0x318cbdc, size 0x80, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::double4 v);

  /// @brief Method hash, addr 0x318d67c, size 0xf4, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::double4x2 v);

  /// @brief Method hash, addr 0x318db1c, size 0x174, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::double4x3 v);

  /// @brief Method hash, addr 0x318e708, size 0x1e8, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::double4x4 v);

  /// @brief Method hash, addr 0x318ec84, size 0x34, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::float2 v);

  /// @brief Method hash, addr 0x318f4b0, size 0x68, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::float2x2 v);

  /// @brief Method hash, addr 0x318f72c, size 0x8c, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::float2x3 v);

  /// @brief Method hash, addr 0x318fa1c, size 0xbc, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::float2x4 v);

  /// @brief Method hash, addr 0x318fdbc, size 0x48, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::float3 v);

  /// @brief Method hash, addr 0x3190708, size 0x80, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::float3x2 v);

  /// @brief Method hash, addr 0x3190b88, size 0xbc, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::float3x3 v);

  /// @brief Method hash, addr 0x3191054, size 0xfc, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::float3x4 v);

  /// @brief Method hash, addr 0x31914fc, size 0x60, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::float4 v);

  /// @brief Method hash, addr 0x3191f54, size 0xb4, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::float4x2 v);

  /// @brief Method hash, addr 0x3192368, size 0x110, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::float4x3 v);

  /// @brief Method hash, addr 0x3192e34, size 0x164, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::float4x4 v);

  /// @brief Method hash, addr 0x3193280, size 0x1c, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::half v);

  /// @brief Method hash, addr 0x3193788, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::half2 v);

  /// @brief Method hash, addr 0x3193ebc, size 0x4c, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::half3 v);

  /// @brief Method hash, addr 0x3194820, size 0x64, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::half4 v);

  /// @brief Method hash, addr 0x31949dc, size 0x30, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::int2 v);

  /// @brief Method hash, addr 0x3195248, size 0x5c, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::int2x2 v);

  /// @brief Method hash, addr 0x3195540, size 0x8c, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::int2x3 v);

  /// @brief Method hash, addr 0x3195918, size 0xb4, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::int2x4 v);

  /// @brief Method hash, addr 0x3195bd8, size 0x40, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::int3 v);

  /// @brief Method hash, addr 0x3196604, size 0x88, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::int3x2 v);

  /// @brief Method hash, addr 0x3196ad0, size 0xc4, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::int3x3 v);

  /// @brief Method hash, addr 0x31970ac, size 0x108, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::int3x4 v);

  /// @brief Method hash, addr 0x3197470, size 0x58, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::int4 v);

  /// @brief Method hash, addr 0x3197fd0, size 0xb4, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::int4x2 v);

  /// @brief Method hash, addr 0x3198510, size 0x108, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::int4x3 v);

  /// @brief Method hash, addr 0x3198ccc, size 0x160, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::int4x4 v);

  /// @brief Method hash, addr 0x31bb9bc, size 0x30, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::uint2 v);

  /// @brief Method hash, addr 0x31bc1f0, size 0x5c, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::uint2x2 v);

  /// @brief Method hash, addr 0x31bc4d0, size 0x8c, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::uint2x3 v);

  /// @brief Method hash, addr 0x31bc898, size 0xb4, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::uint2x4 v);

  /// @brief Method hash, addr 0x31bcb38, size 0x40, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::uint3 v);

  /// @brief Method hash, addr 0x31bd554, size 0x88, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::uint3x2 v);

  /// @brief Method hash, addr 0x31bd9d8, size 0xc4, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::uint3x3 v);

  /// @brief Method hash, addr 0x31bdfc4, size 0x108, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::uint3x4 v);

  /// @brief Method hash, addr 0x31be368, size 0x58, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::uint4 v);

  /// @brief Method hash, addr 0x31beeb8, size 0xb4, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::uint4x2 v);

  /// @brief Method hash, addr 0x31bf3f8, size 0x108, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::uint4x3 v);

  /// @brief Method hash, addr 0x31bfb08, size 0x160, virtual false, abstract: false, final false
  static inline uint32_t hash(::Unity::Mathematics::uint4x4 v);

  /// @brief Method hashwide, addr 0x3186a8c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::bool2 v);

  /// @brief Method hashwide, addr 0x318727c, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::bool2x2 v);

  /// @brief Method hashwide, addr 0x3187444, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::bool2x3 v);

  /// @brief Method hashwide, addr 0x31876b4, size 0xf8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::bool2x4 v);

  /// @brief Method hashwide, addr 0x318a120, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::double2 v);

  /// @brief Method hashwide, addr 0x318a99c, size 0x94, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::double2x2 v);

  /// @brief Method hashwide, addr 0x318ac64, size 0xc8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::double2x3 v);

  /// @brief Method hashwide, addr 0x318aff8, size 0x104, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::double2x4 v);

  /// @brief Method hashwide, addr 0x318ecb8, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::float2 v);

  /// @brief Method hashwide, addr 0x318f518, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::float2x2 v);

  /// @brief Method hashwide, addr 0x318f7b8, size 0x98, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::float2x3 v);

  /// @brief Method hashwide, addr 0x318fad8, size 0xc8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::float2x4 v);

  /// @brief Method hashwide, addr 0x31937c0, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::half2 v);

  /// @brief Method hashwide, addr 0x3194a0c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::int2 v);

  /// @brief Method hashwide, addr 0x31952a4, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::int2x2 v);

  /// @brief Method hashwide, addr 0x31955cc, size 0x98, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::int2x3 v);

  /// @brief Method hashwide, addr 0x31959cc, size 0xc0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::int2x4 v);

  /// @brief Method hashwide, addr 0x31bb9ec, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::uint2 v);

  /// @brief Method hashwide, addr 0x31bc24c, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::uint2x2 v);

  /// @brief Method hashwide, addr 0x31bc55c, size 0x98, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::uint2x3 v);

  /// @brief Method hashwide, addr 0x31bc94c, size 0xc0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 hashwide(::Unity::Mathematics::uint2x4 v);

  /// @brief Method hashwide, addr 0x3187864, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::bool3 v);

  /// @brief Method hashwide, addr 0x3188144, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::bool3x2 v);

  /// @brief Method hashwide, addr 0x318841c, size 0x128, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::bool3x3 v);

  /// @brief Method hashwide, addr 0x3188828, size 0x190, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::bool3x4 v);

  /// @brief Method hashwide, addr 0x318b378, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::double3 v);

  /// @brief Method hashwide, addr 0x318bd18, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::double3x2 v);

  /// @brief Method hashwide, addr 0x318c240, size 0x104, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::double3x3 v);

  /// @brief Method hashwide, addr 0x318c7e0, size 0x154, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::double3x4 v);

  /// @brief Method hashwide, addr 0x318fe04, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::float3 v);

  /// @brief Method hashwide, addr 0x3190788, size 0x8c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::float3x2 v);

  /// @brief Method hashwide, addr 0x3190c44, size 0xc8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::float3x3 v);

  /// @brief Method hashwide, addr 0x3191150, size 0x104, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::float3x4 v);

  /// @brief Method hashwide, addr 0x3193f08, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::half3 v);

  /// @brief Method hashwide, addr 0x3195c18, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::int3 v);

  /// @brief Method hashwide, addr 0x319668c, size 0x94, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::int3x2 v);

  /// @brief Method hashwide, addr 0x3196b94, size 0xcc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::int3x3 v);

  /// @brief Method hashwide, addr 0x31971b4, size 0x10c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::int3x4 v);

  /// @brief Method hashwide, addr 0x31bcb78, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::uint3 v);

  /// @brief Method hashwide, addr 0x31bd5dc, size 0x94, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::uint3x2 v);

  /// @brief Method hashwide, addr 0x31bda9c, size 0xcc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::uint3x3 v);

  /// @brief Method hashwide, addr 0x31be0cc, size 0x10c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 hashwide(::Unity::Mathematics::uint3x4 v);

  /// @brief Method hashwide, addr 0x31bb1e8, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::quaternion q);

  /// @brief Method hashwide, addr 0x31bb814, size 0xe0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::RigidTransform t);

  /// @brief Method hashwide, addr 0x3188b04, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::bool4 v);

  /// @brief Method hashwide, addr 0x318951c, size 0xf0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::bool4x2 v);

  /// @brief Method hashwide, addr 0x3189888, size 0x178, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::bool4x3 v);

  /// @brief Method hashwide, addr 0x3189d4c, size 0x1f4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::bool4x4 v);

  /// @brief Method hashwide, addr 0x318cc5c, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::double4 v);

  /// @brief Method hashwide, addr 0x318d770, size 0x104, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::double4x2 v);

  /// @brief Method hashwide, addr 0x318dc90, size 0x184, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::double4x3 v);

  /// @brief Method hashwide, addr 0x318e8f0, size 0x1f8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::double4x4 v);

  /// @brief Method hashwide, addr 0x319155c, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::float4 v);

  /// @brief Method hashwide, addr 0x3192008, size 0xc4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::float4x2 v);

  /// @brief Method hashwide, addr 0x3192478, size 0x11c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::float4x3 v);

  /// @brief Method hashwide, addr 0x3192f98, size 0x174, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::float4x4 v);

  /// @brief Method hashwide, addr 0x3194884, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::half4 v);

  /// @brief Method hashwide, addr 0x31974c8, size 0xa0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::int4 v);

  /// @brief Method hashwide, addr 0x3198084, size 0x114, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::int4x2 v);

  /// @brief Method hashwide, addr 0x3198618, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::int4x3 v);

  /// @brief Method hashwide, addr 0x3198e2c, size 0x200, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::int4x4 v);

  /// @brief Method hashwide, addr 0x31be3c0, size 0xa0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::uint4 v);

  /// @brief Method hashwide, addr 0x31bef6c, size 0x114, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::uint4x2 v);

  /// @brief Method hashwide, addr 0x31bf500, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::uint4x3 v);

  /// @brief Method hashwide, addr 0x31bfc68, size 0x200, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 hashwide(::Unity::Mathematics::uint4x4 v);

  /// @brief Method int2, addr 0x3194914, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 int2(::Unity::Mathematics::bool2 v);

  /// @brief Method int2, addr 0x31949a8, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 int2(::Unity::Mathematics::double2 v);

  /// @brief Method int2, addr 0x3194954, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 int2(::Unity::Mathematics::float2 v);

  /// @brief Method int2, addr 0x3194930, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 int2(::Unity::Mathematics::uint2 v);

  /// @brief Method int2, addr 0x3194908, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 int2(bool v);

  /// @brief Method int2, addr 0x3194988, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 int2(double_t v);

  /// @brief Method int2, addr 0x3194934, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 int2(float_t v);

  /// @brief Method int2, addr 0x31948fc, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 int2(int32_t v);

  /// @brief Method int2, addr 0x3194924, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 int2(uint32_t v);

  /// @brief Method int2, addr 0x31948ec, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 int2(int32_t x, int32_t y);

  /// @brief Method int2, addr 0x31948f8, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 int2(::Unity::Mathematics::int2 xy);

  /// @brief Method int2x2, addr 0x31950b8, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x2 int2x2(::Unity::Mathematics::int2 c0, ::Unity::Mathematics::int2 c1);

  /// @brief Method int2x2, addr 0x31950bc, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x2 int2x2(int32_t m00, int32_t m01, int32_t m10, int32_t m11);

  /// @brief Method int2x2, addr 0x31950f4, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x2 int2x2(::Unity::Mathematics::bool2x2 v);

  /// @brief Method int2x2, addr 0x31951c8, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x2 int2x2(::Unity::Mathematics::double2x2 v);

  /// @brief Method int2x2, addr 0x3195150, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x2 int2x2(::Unity::Mathematics::float2x2 v);

  /// @brief Method int2x2, addr 0x3195128, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x2 int2x2(::Unity::Mathematics::uint2x2 v);

  /// @brief Method int2x2, addr 0x31950e0, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x2 int2x2(bool v);

  /// @brief Method int2x2, addr 0x31951a4, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x2 int2x2(double_t v);

  /// @brief Method int2x2, addr 0x319512c, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x2 int2x2(float_t v);

  /// @brief Method int2x2, addr 0x31950d0, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x2 int2x2(int32_t v);

  /// @brief Method int2x2, addr 0x3195118, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x2 int2x2(uint32_t v);

  /// @brief Method int2x3, addr 0x319530c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x3 int2x3(::Unity::Mathematics::int2 c0, ::Unity::Mathematics::int2 c1, ::Unity::Mathematics::int2 c2);

  /// @brief Method int2x3, addr 0x3195318, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x3 int2x3(int32_t m00, int32_t m01, int32_t m02, int32_t m10, int32_t m11, int32_t m12);

  /// @brief Method int2x3, addr 0x3195368, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x3 int2x3(::Unity::Mathematics::bool2x3 v);

  /// @brief Method int2x3, addr 0x3195494, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x3 int2x3(::Unity::Mathematics::double2x3 v);

  /// @brief Method int2x3, addr 0x31953e4, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x3 int2x3(::Unity::Mathematics::float2x3 v);

  /// @brief Method int2x3, addr 0x31953a8, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x3 int2x3(::Unity::Mathematics::uint2x3 v);

  /// @brief Method int2x3, addr 0x3195350, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x3 int2x3(bool v);

  /// @brief Method int2x3, addr 0x319546c, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x3 int2x3(double_t v);

  /// @brief Method int2x3, addr 0x31953bc, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x3 int2x3(float_t v);

  /// @brief Method int2x3, addr 0x319533c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x3 int2x3(int32_t v);

  /// @brief Method int2x3, addr 0x3195394, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x3 int2x3(uint32_t v);

  /// @brief Method int2x4, addr 0x3195664, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x4 int2x4(::Unity::Mathematics::int2 c0, ::Unity::Mathematics::int2 c1, ::Unity::Mathematics::int2 c2, ::Unity::Mathematics::int2 c3);

  /// @brief Method int2x4, addr 0x3195670, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x4 int2x4(int32_t m00, int32_t m01, int32_t m02, int32_t m03, int32_t m10, int32_t m11, int32_t m12, int32_t m13);

  /// @brief Method int2x4, addr 0x31956c8, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x4 int2x4(::Unity::Mathematics::bool2x4 v);

  /// @brief Method int2x4, addr 0x3195848, size 0xac, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x4 int2x4(::Unity::Mathematics::double2x4 v);

  /// @brief Method int2x4, addr 0x3195774, size 0xac, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x4 int2x4(::Unity::Mathematics::float2x4 v);

  /// @brief Method int2x4, addr 0x3195740, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x4 int2x4(::Unity::Mathematics::uint2x4 v);

  /// @brief Method int2x4, addr 0x31956b0, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x4 int2x4(bool v);

  /// @brief Method int2x4, addr 0x3195820, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x4 int2x4(double_t v);

  /// @brief Method int2x4, addr 0x319574c, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x4 int2x4(float_t v);

  /// @brief Method int2x4, addr 0x319569c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x4 int2x4(int32_t v);

  /// @brief Method int2x4, addr 0x319572c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x4 int2x4(uint32_t v);

  /// @brief Method int3, addr 0x3195ae0, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 int3(::Unity::Mathematics::bool3 v);

  /// @brief Method int3, addr 0x3195b98, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 int3(::Unity::Mathematics::double3 v);

  /// @brief Method int3, addr 0x3195b34, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 int3(::Unity::Mathematics::float3 v);

  /// @brief Method int3, addr 0x3195b08, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 int3(::Unity::Mathematics::uint3 v);

  /// @brief Method int3, addr 0x3195ad0, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 int3(bool v);

  /// @brief Method int3, addr 0x3195b74, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 int3(double_t v);

  /// @brief Method int3, addr 0x3195b10, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 int3(float_t v);

  /// @brief Method int3, addr 0x3195ac0, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 int3(int32_t v);

  /// @brief Method int3, addr 0x3195af8, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 int3(uint32_t v);

  /// @brief Method int3, addr 0x3195a8c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 int3(int32_t x, int32_t y, int32_t z);

  /// @brief Method int3, addr 0x3195a9c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 int3(int32_t x, ::Unity::Mathematics::int2 yz);

  /// @brief Method int3, addr 0x3195ab0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 int3(::Unity::Mathematics::int2 xy, int32_t z);

  /// @brief Method int3, addr 0x3195ab8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 int3(::Unity::Mathematics::int3 xyz);

  /// @brief Method int3x2, addr 0x3196394, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 int3x2(::Unity::Mathematics::int3 c0, ::Unity::Mathematics::int3 c1);

  /// @brief Method int3x2, addr 0x31963a8, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 int3x2(int32_t m00, int32_t m01, int32_t m10, int32_t m11, int32_t m20, int32_t m21);

  /// @brief Method int3x2, addr 0x31963f8, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 int3x2(::Unity::Mathematics::bool3x2 v);

  /// @brief Method int3x2, addr 0x3196550, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 int3x2(::Unity::Mathematics::double3x2 v);

  /// @brief Method int3x2, addr 0x3196498, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 int3x2(::Unity::Mathematics::float3x2 v);

  /// @brief Method int3x2, addr 0x3196444, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 int3x2(::Unity::Mathematics::uint3x2 v);

  /// @brief Method int3x2, addr 0x31963d4, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 int3x2(bool v);

  /// @brief Method int3x2, addr 0x3196520, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 int3x2(double_t v);

  /// @brief Method int3x2, addr 0x3196468, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 int3x2(float_t v);

  /// @brief Method int3x2, addr 0x31963b8, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 int3x2(int32_t v);

  /// @brief Method int3x2, addr 0x3196428, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 int3x2(uint32_t v);

  /// @brief Method int3x3, addr 0x3196720, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x3 int3x3(::Unity::Mathematics::int3 c0, ::Unity::Mathematics::int3 c1, ::Unity::Mathematics::int3 c2);

  /// @brief Method int3x3, addr 0x319673c, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x3 int3x3(int32_t m00, int32_t m01, int32_t m02, int32_t m10, int32_t m11, int32_t m12, int32_t m20, int32_t m21, int32_t m22);

  /// @brief Method int3x3, addr 0x31967a8, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x3 int3x3(::Unity::Mathematics::bool3x3 v);

  /// @brief Method int3x3, addr 0x3196998, size 0xc4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x3 int3x3(::Unity::Mathematics::double3x3 v);

  /// @brief Method int3x3, addr 0x319689c, size 0xc4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x3 int3x3(::Unity::Mathematics::float3x3 v);

  /// @brief Method int3x3, addr 0x3196830, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x3 int3x3(::Unity::Mathematics::uint3x3 v);

  /// @brief Method int3x3, addr 0x319677c, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x3 int3x3(bool v);

  /// @brief Method int3x3, addr 0x3196960, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x3 int3x3(double_t v);

  /// @brief Method int3x3, addr 0x3196864, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x3 int3x3(float_t v);

  /// @brief Method int3x3, addr 0x3196758, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x3 int3x3(int32_t v);

  /// @brief Method int3x3, addr 0x319680c, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x3 int3x3(uint32_t v);

  /// @brief Method int3x4, addr 0x3196c60, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 int3x4(::Unity::Mathematics::int3 c0, ::Unity::Mathematics::int3 c1, ::Unity::Mathematics::int3 c2, ::Unity::Mathematics::int3 c3);

  /// @brief Method int3x4, addr 0x3196c84, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 int3x4(int32_t m00, int32_t m01, int32_t m02, int32_t m03, int32_t m10, int32_t m11, int32_t m12, int32_t m13, int32_t m20, int32_t m21, int32_t m22,
                                                    int32_t m23);

  /// @brief Method int3x4, addr 0x3196d10, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 int3x4(::Unity::Mathematics::bool3x4 v);

  /// @brief Method int3x4, addr 0x3196f7c, size 0xfc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 int3x4(::Unity::Mathematics::double3x4 v);

  /// @brief Method int3x4, addr 0x3196e40, size 0xfc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 int3x4(::Unity::Mathematics::float3x4 v);

  /// @brief Method int3x4, addr 0x3196dbc, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 int3x4(::Unity::Mathematics::uint3x4 v);

  /// @brief Method int3x4, addr 0x3196cdc, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 int3x4(bool v);

  /// @brief Method int3x4, addr 0x3196f3c, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 int3x4(double_t v);

  /// @brief Method int3x4, addr 0x3196e00, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 int3x4(float_t v);

  /// @brief Method int3x4, addr 0x3196cb0, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 int3x4(int32_t v);

  /// @brief Method int3x4, addr 0x3196d90, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 int3x4(uint32_t v);

  /// @brief Method int4, addr 0x319734c, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 int4(::Unity::Mathematics::bool4 v);

  /// @brief Method int4, addr 0x319741c, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 int4(::Unity::Mathematics::double4 v);

  /// @brief Method int4, addr 0x31973a4, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 int4(::Unity::Mathematics::float4 v);

  /// @brief Method int4, addr 0x319737c, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 int4(::Unity::Mathematics::uint4 v);

  /// @brief Method int4, addr 0x319733c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 int4(bool v);

  /// @brief Method int4, addr 0x31973f8, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 int4(double_t v);

  /// @brief Method int4, addr 0x3197380, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 int4(float_t v);

  /// @brief Method int4, addr 0x319732c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 int4(int32_t v);

  /// @brief Method int4, addr 0x319736c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 int4(uint32_t v);

  /// @brief Method int4, addr 0x31972c0, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 int4(int32_t x, int32_t y, int32_t z, int32_t w);

  /// @brief Method int4, addr 0x31972d8, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 int4(int32_t x, int32_t y, ::Unity::Mathematics::int2 zw);

  /// @brief Method int4, addr 0x31972e8, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 int4(int32_t x, ::Unity::Mathematics::int2 yz, int32_t w);

  /// @brief Method int4, addr 0x31972fc, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 int4(int32_t x, ::Unity::Mathematics::int3 yzw);

  /// @brief Method int4, addr 0x3197310, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 int4(::Unity::Mathematics::int2 xy, int32_t z, int32_t w);

  /// @brief Method int4, addr 0x319731c, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 int4(::Unity::Mathematics::int2 xy, ::Unity::Mathematics::int2 zw);

  /// @brief Method int4, addr 0x3197320, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 int4(::Unity::Mathematics::int3 xyz, int32_t w);

  /// @brief Method int4, addr 0x3197328, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 int4(::Unity::Mathematics::int4 xyzw);

  /// @brief Method int4x2, addr 0x3197d54, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 int4x2(::Unity::Mathematics::int4 c0, ::Unity::Mathematics::int4 c1);

  /// @brief Method int4x2, addr 0x3197d60, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 int4x2(int32_t m00, int32_t m01, int32_t m10, int32_t m11, int32_t m20, int32_t m21, int32_t m30, int32_t m31);

  /// @brief Method int4x2, addr 0x3197da0, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 int4x2(::Unity::Mathematics::bool4x2 v);

  /// @brief Method int4x2, addr 0x3197efc, size 0xac, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 int4x2(::Unity::Mathematics::double4x2 v);

  /// @brief Method int4x2, addr 0x3197e28, size 0xac, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 int4x2(::Unity::Mathematics::float4x2 v);

  /// @brief Method int4x2, addr 0x3197df4, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 int4x2(::Unity::Mathematics::uint4x2 v);

  /// @brief Method int4x2, addr 0x3197d88, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 int4x2(bool v);

  /// @brief Method int4x2, addr 0x3197ed4, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 int4x2(double_t v);

  /// @brief Method int4x2, addr 0x3197e00, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 int4x2(float_t v);

  /// @brief Method int4x2, addr 0x3197d74, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 int4x2(int32_t v);

  /// @brief Method int4x2, addr 0x3197de0, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 int4x2(uint32_t v);

  /// @brief Method int4x3, addr 0x3198198, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 int4x3(::Unity::Mathematics::int4 c0, ::Unity::Mathematics::int4 c1, ::Unity::Mathematics::int4 c2);

  /// @brief Method int4x3, addr 0x31981a8, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 int4x3(int32_t m00, int32_t m01, int32_t m02, int32_t m10, int32_t m11, int32_t m12, int32_t m20, int32_t m21, int32_t m22, int32_t m30, int32_t m31,
                                                    int32_t m32);

  /// @brief Method int4x3, addr 0x3198208, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 int4x3(::Unity::Mathematics::bool4x3 v);

  /// @brief Method int4x3, addr 0x31983e4, size 0xf8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 int4x3(::Unity::Mathematics::double4x3 v);

  /// @brief Method int4x3, addr 0x31982c0, size 0xf8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 int4x3(::Unity::Mathematics::float4x3 v);

  /// @brief Method int4x3, addr 0x3198280, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 int4x3(::Unity::Mathematics::uint4x3 v);

  /// @brief Method int4x3, addr 0x31981ec, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 int4x3(bool v);

  /// @brief Method int4x3, addr 0x31983b8, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 int4x3(double_t v);

  /// @brief Method int4x3, addr 0x3198294, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 int4x3(float_t v);

  /// @brief Method int4x3, addr 0x31981d4, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 int4x3(int32_t v);

  /// @brief Method int4x3, addr 0x3198268, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 int4x3(uint32_t v);

  /// @brief Method int4x4, addr 0x31987a4, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 int4x4(::Unity::Mathematics::int4 c0, ::Unity::Mathematics::int4 c1, ::Unity::Mathematics::int4 c2, ::Unity::Mathematics::int4 c3);

  /// @brief Method int4x4, addr 0x31987b8, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 int4x4(int32_t m00, int32_t m01, int32_t m02, int32_t m03, int32_t m10, int32_t m11, int32_t m12, int32_t m13, int32_t m20, int32_t m21, int32_t m22,
                                                    int32_t m23, int32_t m30, int32_t m31, int32_t m32, int32_t m33);

  /// @brief Method int4x4, addr 0x3198838, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 int4x4(::Unity::Mathematics::bool4x4 v);

  /// @brief Method int4x4, addr 0x3198a88, size 0x144, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 int4x4(::Unity::Mathematics::double4x4 v);

  /// @brief Method int4x4, addr 0x3198914, size 0x144, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 int4x4(::Unity::Mathematics::float4x4 v);

  /// @brief Method int4x4, addr 0x31988d0, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 int4x4(::Unity::Mathematics::uint4x4 v);

  /// @brief Method int4x4, addr 0x3198818, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 int4x4(bool v);

  /// @brief Method int4x4, addr 0x3198a58, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 int4x4(double_t v);

  /// @brief Method int4x4, addr 0x31988e4, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 int4x4(float_t v);

  /// @brief Method int4x4, addr 0x31987fc, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 int4x4(int32_t v);

  /// @brief Method int4x4, addr 0x31988b4, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 int4x4(uint32_t v);

  /// @brief Method inverse, addr 0x31bb3c0, size 0xdc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::RigidTransform inverse(::Unity::Mathematics::RigidTransform t);

  /// @brief Method inverse, addr 0x318a8d8, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 inverse(::Unity::Mathematics::double2x2 m);

  /// @brief Method inverse, addr 0x318c01c, size 0xd8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 inverse(::Unity::Mathematics::double3x3 m);

  /// @brief Method inverse, addr 0x318e254, size 0x348, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x4 inverse(::Unity::Mathematics::double4x4 m);

  /// @brief Method inverse, addr 0x318f474, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 inverse(::Unity::Mathematics::float2x2 m);

  /// @brief Method inverse, addr 0x3190a60, size 0xd8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 inverse(::Unity::Mathematics::float3x3 m);

  /// @brief Method inverse, addr 0x3192980, size 0x348, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 inverse(::Unity::Mathematics::float4x4 m);

  /// @brief Method inverse, addr 0x31ba214, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion inverse(::Unity::Mathematics::quaternion q);

  /// @brief Method isfinite, addr 0x319929c, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 isfinite(::Unity::Mathematics::double2 x);

  /// @brief Method isfinite, addr 0x31991dc, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 isfinite(::Unity::Mathematics::float2 x);

  /// @brief Method isfinite, addr 0x31992c4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 isfinite(::Unity::Mathematics::double3 x);

  /// @brief Method isfinite, addr 0x3199204, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 isfinite(::Unity::Mathematics::float3 x);

  /// @brief Method isfinite, addr 0x31992fc, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 isfinite(::Unity::Mathematics::double4 x);

  /// @brief Method isfinite, addr 0x319923c, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 isfinite(::Unity::Mathematics::float4 x);

  /// @brief Method isfinite, addr 0x3199284, size 0x18, virtual false, abstract: false, final false
  static inline bool isfinite(double_t x);

  /// @brief Method isfinite, addr 0x31991c4, size 0x18, virtual false, abstract: false, final false
  static inline bool isfinite(float_t x);

  /// @brief Method isinf, addr 0x319941c, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 isinf(::Unity::Mathematics::double2 x);

  /// @brief Method isinf, addr 0x319935c, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 isinf(::Unity::Mathematics::float2 x);

  /// @brief Method isinf, addr 0x3199444, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 isinf(::Unity::Mathematics::double3 x);

  /// @brief Method isinf, addr 0x3199384, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 isinf(::Unity::Mathematics::float3 x);

  /// @brief Method isinf, addr 0x319947c, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 isinf(::Unity::Mathematics::double4 x);

  /// @brief Method isinf, addr 0x31993bc, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 isinf(::Unity::Mathematics::float4 x);

  /// @brief Method isinf, addr 0x3199404, size 0x18, virtual false, abstract: false, final false
  static inline bool isinf(double_t x);

  /// @brief Method isinf, addr 0x3199344, size 0x18, virtual false, abstract: false, final false
  static inline bool isinf(float_t x);

  /// @brief Method isnan, addr 0x31995b4, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 isnan(::Unity::Mathematics::double2 x);

  /// @brief Method isnan, addr 0x31994dc, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 isnan(::Unity::Mathematics::float2 x);

  /// @brief Method isnan, addr 0x31995e0, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 isnan(::Unity::Mathematics::double3 x);

  /// @brief Method isnan, addr 0x3199508, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 isnan(::Unity::Mathematics::float3 x);

  /// @brief Method isnan, addr 0x3199620, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 isnan(::Unity::Mathematics::double4 x);

  /// @brief Method isnan, addr 0x3199548, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 isnan(::Unity::Mathematics::float4 x);

  /// @brief Method isnan, addr 0x319959c, size 0x18, virtual false, abstract: false, final false
  static inline bool isnan(double_t x);

  /// @brief Method isnan, addr 0x31994c4, size 0x18, virtual false, abstract: false, final false
  static inline bool isnan(float_t x);

  /// @brief Method ispow2, addr 0x3199690, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 ispow2(::Unity::Mathematics::int2 x);

  /// @brief Method ispow2, addr 0x31997bc, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 ispow2(::Unity::Mathematics::uint2 x);

  /// @brief Method ispow2, addr 0x31996cc, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 ispow2(::Unity::Mathematics::int3 x);

  /// @brief Method ispow2, addr 0x31997fc, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 ispow2(::Unity::Mathematics::uint3 x);

  /// @brief Method ispow2, addr 0x3199724, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 ispow2(::Unity::Mathematics::int4 x);

  /// @brief Method ispow2, addr 0x319985c, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 ispow2(::Unity::Mathematics::uint4 x);

  /// @brief Method ispow2, addr 0x3199674, size 0x1c, virtual false, abstract: false, final false
  static inline bool ispow2(int32_t x);

  /// @brief Method ispow2, addr 0x319979c, size 0x20, virtual false, abstract: false, final false
  static inline bool ispow2(uint32_t x);

  /// @brief Method left, addr 0x31b1b74, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 left();

  /// @brief Method length, addr 0x31a9d2c, size 0x5c, virtual false, abstract: false, final false
  static inline double_t length(::Unity::Mathematics::double2 x);

  /// @brief Method length, addr 0x31a9d88, size 0x64, virtual false, abstract: false, final false
  static inline double_t length(::Unity::Mathematics::double3 x);

  /// @brief Method length, addr 0x31a9dec, size 0x6c, virtual false, abstract: false, final false
  static inline double_t length(::Unity::Mathematics::double4 x);

  /// @brief Method length, addr 0x31a9d24, size 0x8, virtual false, abstract: false, final false
  static inline double_t length(double_t x);

  /// @brief Method length, addr 0x31ba26c, size 0x6c, virtual false, abstract: false, final false
  static inline float_t length(::Unity::Mathematics::quaternion q);

  /// @brief Method length, addr 0x31a9bf8, size 0x5c, virtual false, abstract: false, final false
  static inline float_t length(::Unity::Mathematics::float2 x);

  /// @brief Method length, addr 0x31a9c54, size 0x64, virtual false, abstract: false, final false
  static inline float_t length(::Unity::Mathematics::float3 x);

  /// @brief Method length, addr 0x31a9cb8, size 0x6c, virtual false, abstract: false, final false
  static inline float_t length(::Unity::Mathematics::float4 x);

  /// @brief Method length, addr 0x31a9bf0, size 0x8, virtual false, abstract: false, final false
  static inline float_t length(float_t x);

  /// @brief Method lengthsq, addr 0x31a9eb0, size 0x10, virtual false, abstract: false, final false
  static inline double_t lengthsq(::Unity::Mathematics::double2 x);

  /// @brief Method lengthsq, addr 0x31a9ec0, size 0x18, virtual false, abstract: false, final false
  static inline double_t lengthsq(::Unity::Mathematics::double3 x);

  /// @brief Method lengthsq, addr 0x31a9ed8, size 0x20, virtual false, abstract: false, final false
  static inline double_t lengthsq(::Unity::Mathematics::double4 x);

  /// @brief Method lengthsq, addr 0x31a9ea8, size 0x8, virtual false, abstract: false, final false
  static inline double_t lengthsq(double_t x);

  /// @brief Method lengthsq, addr 0x31ba2d8, size 0x20, virtual false, abstract: false, final false
  static inline float_t lengthsq(::Unity::Mathematics::quaternion q);

  /// @brief Method lengthsq, addr 0x31a9e60, size 0x10, virtual false, abstract: false, final false
  static inline float_t lengthsq(::Unity::Mathematics::float2 x);

  /// @brief Method lengthsq, addr 0x31a9e70, size 0x18, virtual false, abstract: false, final false
  static inline float_t lengthsq(::Unity::Mathematics::float3 x);

  /// @brief Method lengthsq, addr 0x31a9e88, size 0x20, virtual false, abstract: false, final false
  static inline float_t lengthsq(::Unity::Mathematics::float4 x);

  /// @brief Method lengthsq, addr 0x31a9e58, size 0x8, virtual false, abstract: false, final false
  static inline float_t lengthsq(float_t x);

  /// @brief Method lerp, addr 0x319adbc, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 lerp(::Unity::Mathematics::double2 x, ::Unity::Mathematics::double2 y, ::Unity::Mathematics::double2 s);

  /// @brief Method lerp, addr 0x319ad40, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 lerp(::Unity::Mathematics::double2 x, ::Unity::Mathematics::double2 y, double_t s);

  /// @brief Method lerp, addr 0x319add8, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 lerp(::Unity::Mathematics::double3 x, ::Unity::Mathematics::double3 y, ::Unity::Mathematics::double3 s);

  /// @brief Method lerp, addr 0x319ad5c, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 lerp(::Unity::Mathematics::double3 x, ::Unity::Mathematics::double3 y, double_t s);

  /// @brief Method lerp, addr 0x319ae08, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 lerp(::Unity::Mathematics::double4 x, ::Unity::Mathematics::double4 y, ::Unity::Mathematics::double4 s);

  /// @brief Method lerp, addr 0x319ad84, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 lerp(::Unity::Mathematics::double4 x, ::Unity::Mathematics::double4 y, double_t s);

  /// @brief Method lerp, addr 0x319aca8, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 lerp(::Unity::Mathematics::float2 x, ::Unity::Mathematics::float2 y, ::Unity::Mathematics::float2 s);

  /// @brief Method lerp, addr 0x319ac2c, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 lerp(::Unity::Mathematics::float2 x, ::Unity::Mathematics::float2 y, float_t s);

  /// @brief Method lerp, addr 0x319acc4, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 lerp(::Unity::Mathematics::float3 x, ::Unity::Mathematics::float3 y, ::Unity::Mathematics::float3 s);

  /// @brief Method lerp, addr 0x319ac48, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 lerp(::Unity::Mathematics::float3 x, ::Unity::Mathematics::float3 y, float_t s);

  /// @brief Method lerp, addr 0x319acf4, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 lerp(::Unity::Mathematics::float4 x, ::Unity::Mathematics::float4 y, ::Unity::Mathematics::float4 s);

  /// @brief Method lerp, addr 0x319ac70, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 lerp(::Unity::Mathematics::float4 x, ::Unity::Mathematics::float4 y, float_t s);

  /// @brief Method lerp, addr 0x319ad30, size 0x10, virtual false, abstract: false, final false
  static inline double_t lerp(double_t x, double_t y, double_t s);

  /// @brief Method lerp, addr 0x319ac1c, size 0x10, virtual false, abstract: false, final false
  static inline float_t lerp(float_t x, float_t y, float_t s);

  /// @brief Method log, addr 0x31a6cbc, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 log(::Unity::Mathematics::double2 x);

  /// @brief Method log, addr 0x31a6d70, size 0x10c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 log(::Unity::Mathematics::double3 x);

  /// @brief Method log, addr 0x31a6e7c, size 0x15c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 log(::Unity::Mathematics::double4 x);

  /// @brief Method log, addr 0x31a6944, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 log(::Unity::Mathematics::float2 x);

  /// @brief Method log, addr 0x31a69f8, size 0x10c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 log(::Unity::Mathematics::float3 x);

  /// @brief Method log, addr 0x31a6b04, size 0x15c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 log(::Unity::Mathematics::float4 x);

  /// @brief Method log, addr 0x31ba9fc, size 0x248, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion log(::Unity::Mathematics::quaternion q);

  /// @brief Method log, addr 0x31a6c60, size 0x5c, virtual false, abstract: false, final false
  static inline double_t log(double_t x);

  /// @brief Method log, addr 0x31a68e0, size 0x64, virtual false, abstract: false, final false
  static inline float_t log(float_t x);

  /// @brief Method log10, addr 0x31a7aac, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 log10(::Unity::Mathematics::double2 x);

  /// @brief Method log10, addr 0x31a7b60, size 0x10c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 log10(::Unity::Mathematics::double3 x);

  /// @brief Method log10, addr 0x31a7c6c, size 0x15c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 log10(::Unity::Mathematics::double4 x);

  /// @brief Method log10, addr 0x31a7734, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 log10(::Unity::Mathematics::float2 x);

  /// @brief Method log10, addr 0x31a77e8, size 0x10c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 log10(::Unity::Mathematics::float3 x);

  /// @brief Method log10, addr 0x31a78f4, size 0x15c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 log10(::Unity::Mathematics::float4 x);

  /// @brief Method log10, addr 0x31a7a50, size 0x5c, virtual false, abstract: false, final false
  static inline double_t log10(double_t x);

  /// @brief Method log10, addr 0x31a76d0, size 0x64, virtual false, abstract: false, final false
  static inline float_t log10(float_t x);

  /// @brief Method log2, addr 0x31a73cc, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 log2(::Unity::Mathematics::double2 x);

  /// @brief Method log2, addr 0x31a7480, size 0x104, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 log2(::Unity::Mathematics::double3 x);

  /// @brief Method log2, addr 0x31a7584, size 0x14c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 log2(::Unity::Mathematics::double4 x);

  /// @brief Method log2, addr 0x31a7044, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 log2(::Unity::Mathematics::float2 x);

  /// @brief Method log2, addr 0x31a70fc, size 0x10c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 log2(::Unity::Mathematics::float3 x);

  /// @brief Method log2, addr 0x31a7208, size 0x160, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 log2(::Unity::Mathematics::float4 x);

  /// @brief Method log2, addr 0x31a7368, size 0x64, virtual false, abstract: false, final false
  static inline double_t log2(double_t x);

  /// @brief Method log2, addr 0x31a6fd8, size 0x6c, virtual false, abstract: false, final false
  static inline float_t log2(float_t x);

  /// @brief Method lzcnt, addr 0x31ade6c, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 lzcnt(::Unity::Mathematics::int2 x);

  /// @brief Method lzcnt, addr 0x31ae0a8, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 lzcnt(::Unity::Mathematics::uint2 x);

  /// @brief Method lzcnt, addr 0x31adee0, size 0xa8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 lzcnt(::Unity::Mathematics::int3 x);

  /// @brief Method lzcnt, addr 0x31ae11c, size 0xa8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 lzcnt(::Unity::Mathematics::uint3 x);

  /// @brief Method lzcnt, addr 0x31adf88, size 0xe4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 lzcnt(::Unity::Mathematics::int4 x);

  /// @brief Method lzcnt, addr 0x31ae1c4, size 0xe4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 lzcnt(::Unity::Mathematics::uint4 x);

  /// @brief Method lzcnt, addr 0x31ade30, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t lzcnt(int32_t x);

  /// @brief Method lzcnt, addr 0x31ae2a8, size 0x4c, virtual false, abstract: false, final false
  static inline int32_t lzcnt(int64_t x);

  /// @brief Method lzcnt, addr 0x31ae06c, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t lzcnt(uint32_t x);

  /// @brief Method lzcnt, addr 0x31ae2f4, size 0x4c, virtual false, abstract: false, final false
  static inline int32_t lzcnt(uint64_t x);

  /// @brief Method mad, addr 0x319b3d8, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 mad(::Unity::Mathematics::double2 a, ::Unity::Mathematics::double2 b, ::Unity::Mathematics::double2 c);

  /// @brief Method mad, addr 0x319b3ec, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 mad(::Unity::Mathematics::double3 a, ::Unity::Mathematics::double3 b, ::Unity::Mathematics::double3 c);

  /// @brief Method mad, addr 0x319b410, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 mad(::Unity::Mathematics::double4 a, ::Unity::Mathematics::double4 b, ::Unity::Mathematics::double4 c);

  /// @brief Method mad, addr 0x319b368, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 mad(::Unity::Mathematics::float2 a, ::Unity::Mathematics::float2 b, ::Unity::Mathematics::float2 c);

  /// @brief Method mad, addr 0x319b37c, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 mad(::Unity::Mathematics::float3 a, ::Unity::Mathematics::float3 b, ::Unity::Mathematics::float3 c);

  /// @brief Method mad, addr 0x319b3a0, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 mad(::Unity::Mathematics::float4 a, ::Unity::Mathematics::float4 b, ::Unity::Mathematics::float4 c);

  /// @brief Method mad, addr 0x319b1e4, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 mad(::Unity::Mathematics::int2 a, ::Unity::Mathematics::int2 b, ::Unity::Mathematics::int2 c);

  /// @brief Method mad, addr 0x319b210, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 mad(::Unity::Mathematics::int3 a, ::Unity::Mathematics::int3 b, ::Unity::Mathematics::int3 c);

  /// @brief Method mad, addr 0x319b240, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 mad(::Unity::Mathematics::int4 a, ::Unity::Mathematics::int4 b, ::Unity::Mathematics::int4 c);

  /// @brief Method mad, addr 0x319b29c, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 mad(::Unity::Mathematics::uint2 a, ::Unity::Mathematics::uint2 b, ::Unity::Mathematics::uint2 c);

  /// @brief Method mad, addr 0x319b2c8, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 mad(::Unity::Mathematics::uint3 a, ::Unity::Mathematics::uint3 b, ::Unity::Mathematics::uint3 c);

  /// @brief Method mad, addr 0x319b2f8, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 mad(::Unity::Mathematics::uint4 a, ::Unity::Mathematics::uint4 b, ::Unity::Mathematics::uint4 c);

  /// @brief Method mad, addr 0x319b3cc, size 0xc, virtual false, abstract: false, final false
  static inline double_t mad(double_t a, double_t b, double_t c);

  /// @brief Method mad, addr 0x319b35c, size 0xc, virtual false, abstract: false, final false
  static inline float_t mad(float_t a, float_t b, float_t c);

  /// @brief Method mad, addr 0x319b1dc, size 0x8, virtual false, abstract: false, final false
  static inline int32_t mad(int32_t a, int32_t b, int32_t c);

  /// @brief Method mad, addr 0x319b34c, size 0x8, virtual false, abstract: false, final false
  static inline int64_t mad(int64_t a, int64_t b, int64_t c);

  /// @brief Method mad, addr 0x319b294, size 0x8, virtual false, abstract: false, final false
  static inline uint32_t mad(uint32_t a, uint32_t b, uint32_t c);

  /// @brief Method mad, addr 0x319b354, size 0x8, virtual false, abstract: false, final false
  static inline uint64_t mad(uint64_t a, uint64_t b, uint64_t c);

  /// @brief Method max, addr 0x319a85c, size 0xdc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 max(::Unity::Mathematics::double2 x, ::Unity::Mathematics::double2 y);

  /// @brief Method max, addr 0x319a938, size 0x140, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 max(::Unity::Mathematics::double3 x, ::Unity::Mathematics::double3 y);

  /// @brief Method max, addr 0x319aa78, size 0x1a4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 max(::Unity::Mathematics::double4 x, ::Unity::Mathematics::double4 y);

  /// @brief Method max, addr 0x319a42c, size 0xdc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 max(::Unity::Mathematics::float2 x, ::Unity::Mathematics::float2 y);

  /// @brief Method max, addr 0x319a508, size 0x140, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 max(::Unity::Mathematics::float3 x, ::Unity::Mathematics::float3 y);

  /// @brief Method max, addr 0x319a648, size 0x1a4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 max(::Unity::Mathematics::float4 x, ::Unity::Mathematics::float4 y);

  /// @brief Method max, addr 0x319a288, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 max(::Unity::Mathematics::int2 x, ::Unity::Mathematics::int2 y);

  /// @brief Method max, addr 0x319a2a8, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 max(::Unity::Mathematics::int3 x, ::Unity::Mathematics::int3 y);

  /// @brief Method max, addr 0x319a2d4, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 max(::Unity::Mathematics::int4 x, ::Unity::Mathematics::int4 y);

  /// @brief Method max, addr 0x319a31c, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 max(::Unity::Mathematics::uint2 x, ::Unity::Mathematics::uint2 y);

  /// @brief Method max, addr 0x319a33c, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 max(::Unity::Mathematics::uint3 x, ::Unity::Mathematics::uint3 y);

  /// @brief Method max, addr 0x319a368, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 max(::Unity::Mathematics::uint4 x, ::Unity::Mathematics::uint4 y);

  /// @brief Method max, addr 0x319a7ec, size 0x70, virtual false, abstract: false, final false
  static inline double_t max(double_t x, double_t y);

  /// @brief Method max, addr 0x319a3bc, size 0x70, virtual false, abstract: false, final false
  static inline float_t max(float_t x, float_t y);

  /// @brief Method max, addr 0x319a27c, size 0xc, virtual false, abstract: false, final false
  static inline int32_t max(int32_t x, int32_t y);

  /// @brief Method max, addr 0x319a3a4, size 0xc, virtual false, abstract: false, final false
  static inline int64_t max(int64_t x, int64_t y);

  /// @brief Method max, addr 0x319a310, size 0xc, virtual false, abstract: false, final false
  static inline uint32_t max(uint32_t x, uint32_t y);

  /// @brief Method max, addr 0x319a3b0, size 0xc, virtual false, abstract: false, final false
  static inline uint64_t max(uint64_t x, uint64_t y);

  /// @brief Method min, addr 0x3199ebc, size 0xdc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 min(::Unity::Mathematics::double2 x, ::Unity::Mathematics::double2 y);

  /// @brief Method min, addr 0x3199f98, size 0x140, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 min(::Unity::Mathematics::double3 x, ::Unity::Mathematics::double3 y);

  /// @brief Method min, addr 0x319a0d8, size 0x1a4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 min(::Unity::Mathematics::double4 x, ::Unity::Mathematics::double4 y);

  /// @brief Method min, addr 0x3199a8c, size 0xdc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 min(::Unity::Mathematics::float2 x, ::Unity::Mathematics::float2 y);

  /// @brief Method min, addr 0x3199b68, size 0x140, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 min(::Unity::Mathematics::float3 x, ::Unity::Mathematics::float3 y);

  /// @brief Method min, addr 0x3199ca8, size 0x1a4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 min(::Unity::Mathematics::float4 x, ::Unity::Mathematics::float4 y);

  /// @brief Method min, addr 0x31998e8, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 min(::Unity::Mathematics::int2 x, ::Unity::Mathematics::int2 y);

  /// @brief Method min, addr 0x3199908, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 min(::Unity::Mathematics::int3 x, ::Unity::Mathematics::int3 y);

  /// @brief Method min, addr 0x3199934, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 min(::Unity::Mathematics::int4 x, ::Unity::Mathematics::int4 y);

  /// @brief Method min, addr 0x319997c, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 min(::Unity::Mathematics::uint2 x, ::Unity::Mathematics::uint2 y);

  /// @brief Method min, addr 0x319999c, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 min(::Unity::Mathematics::uint3 x, ::Unity::Mathematics::uint3 y);

  /// @brief Method min, addr 0x31999c8, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 min(::Unity::Mathematics::uint4 x, ::Unity::Mathematics::uint4 y);

  /// @brief Method min, addr 0x3199e4c, size 0x70, virtual false, abstract: false, final false
  static inline double_t min(double_t x, double_t y);

  /// @brief Method min, addr 0x3199a1c, size 0x70, virtual false, abstract: false, final false
  static inline float_t min(float_t x, float_t y);

  /// @brief Method min, addr 0x31998dc, size 0xc, virtual false, abstract: false, final false
  static inline int32_t min(int32_t x, int32_t y);

  /// @brief Method min, addr 0x3199a04, size 0xc, virtual false, abstract: false, final false
  static inline int64_t min(int64_t x, int64_t y);

  /// @brief Method min, addr 0x3199970, size 0xc, virtual false, abstract: false, final false
  static inline uint32_t min(uint32_t x, uint32_t y);

  /// @brief Method min, addr 0x3199a10, size 0xc, virtual false, abstract: false, final false
  static inline uint64_t min(uint64_t x, uint64_t y);

  /// @brief Method modf, addr 0x31a846c, size 0xc0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 modf(::Unity::Mathematics::double2 x, ByRef<::Unity::Mathematics::double2> i);

  /// @brief Method modf, addr 0x31a852c, size 0x110, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 modf(::Unity::Mathematics::double3 x, ByRef<::Unity::Mathematics::double3> i);

  /// @brief Method modf, addr 0x31a863c, size 0x15c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 modf(::Unity::Mathematics::double4 x, ByRef<::Unity::Mathematics::double4> i);

  /// @brief Method modf, addr 0x31a80b4, size 0xc4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 modf(::Unity::Mathematics::float2 x, ByRef<::Unity::Mathematics::float2> i);

  /// @brief Method modf, addr 0x31a8178, size 0x118, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 modf(::Unity::Mathematics::float3 x, ByRef<::Unity::Mathematics::float3> i);

  /// @brief Method modf, addr 0x31a8290, size 0x168, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 modf(::Unity::Mathematics::float4 x, ByRef<::Unity::Mathematics::float4> i);

  /// @brief Method modf, addr 0x31a83f8, size 0x74, virtual false, abstract: false, final false
  static inline double_t modf(double_t x, ByRef<double_t> i);

  /// @brief Method modf, addr 0x31a8040, size 0x74, virtual false, abstract: false, final false
  static inline float_t modf(float_t x, ByRef<float_t> i);

  /// @brief Method movehl, addr 0x31b1c00, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 movehl(::Unity::Mathematics::double4 a, ::Unity::Mathematics::double4 b);

  /// @brief Method movehl, addr 0x31b1bf4, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 movehl(::Unity::Mathematics::float4 a, ::Unity::Mathematics::float4 b);

  /// @brief Method movelh, addr 0x31b1be8, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 movelh(::Unity::Mathematics::double4 a, ::Unity::Mathematics::double4 b);

  /// @brief Method movelh, addr 0x31b1bdc, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 movelh(::Unity::Mathematics::float4 a, ::Unity::Mathematics::float4 b);

  /// @brief Method mul, addr 0x31bb49c, size 0x120, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::RigidTransform mul(::Unity::Mathematics::RigidTransform a, ::Unity::Mathematics::RigidTransform b);

  /// @brief Method mul, addr 0x31b3638, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 mul(::Unity::Mathematics::double2 a, ::Unity::Mathematics::double2x2 b);

  /// @brief Method mul, addr 0x31b394c, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 mul(::Unity::Mathematics::double2x2 a, ::Unity::Mathematics::double2 b);

  /// @brief Method mul, addr 0x31b3a84, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 mul(::Unity::Mathematics::double2x3 a, ::Unity::Mathematics::double3 b);

  /// @brief Method mul, addr 0x31b3c58, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 mul(::Unity::Mathematics::double2x4 a, ::Unity::Mathematics::double4 b);

  /// @brief Method mul, addr 0x31b36e4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 mul(::Unity::Mathematics::double3 a, ::Unity::Mathematics::double3x2 b);

  /// @brief Method mul, addr 0x31b37fc, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 mul(::Unity::Mathematics::double4 a, ::Unity::Mathematics::double4x2 b);

  /// @brief Method mul, addr 0x31b3968, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 mul(::Unity::Mathematics::double2x2 a, ::Unity::Mathematics::double2x2 b);

  /// @brief Method mul, addr 0x31b3aa8, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 mul(::Unity::Mathematics::double2x3 a, ::Unity::Mathematics::double3x2 b);

  /// @brief Method mul, addr 0x31b3c84, size 0x94, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 mul(::Unity::Mathematics::double2x4 a, ::Unity::Mathematics::double4x2 b);

  /// @brief Method mul, addr 0x31b399c, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 mul(::Unity::Mathematics::double2x2 a, ::Unity::Mathematics::double2x3 b);

  /// @brief Method mul, addr 0x31b3b14, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 mul(::Unity::Mathematics::double2x3 a, ::Unity::Mathematics::double3x3 b);

  /// @brief Method mul, addr 0x31b3d18, size 0x98, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 mul(::Unity::Mathematics::double2x4 a, ::Unity::Mathematics::double4x3 b);

  /// @brief Method mul, addr 0x31b3a00, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 mul(::Unity::Mathematics::double2x2 a, ::Unity::Mathematics::double2x4 b);

  /// @brief Method mul, addr 0x31b3b9c, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 mul(::Unity::Mathematics::double2x3 a, ::Unity::Mathematics::double3x4 b);

  /// @brief Method mul, addr 0x31b3db0, size 0xc0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 mul(::Unity::Mathematics::double2x4 a, ::Unity::Mathematics::double4x4 b);

  /// @brief Method mul, addr 0x31b3654, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 mul(::Unity::Mathematics::double2 a, ::Unity::Mathematics::double2x3 b);

  /// @brief Method mul, addr 0x31b371c, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 mul(::Unity::Mathematics::double3 a, ::Unity::Mathematics::double3x3 b);

  /// @brief Method mul, addr 0x31b3e70, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 mul(::Unity::Mathematics::double3x2 a, ::Unity::Mathematics::double2 b);

  /// @brief Method mul, addr 0x31b401c, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 mul(::Unity::Mathematics::double3x3 a, ::Unity::Mathematics::double3 b);

  /// @brief Method mul, addr 0x31b42b4, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 mul(::Unity::Mathematics::double3x4 a, ::Unity::Mathematics::double4 b);

  /// @brief Method mul, addr 0x31b3848, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 mul(::Unity::Mathematics::double4 a, ::Unity::Mathematics::double4x3 b);

  /// @brief Method mul, addr 0x31b3ea4, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x2 mul(::Unity::Mathematics::double3x2 a, ::Unity::Mathematics::double2x2 b);

  /// @brief Method mul, addr 0x31b4070, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x2 mul(::Unity::Mathematics::double3x3 a, ::Unity::Mathematics::double3x2 b);

  /// @brief Method mul, addr 0x31b4324, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x2 mul(::Unity::Mathematics::double3x4 a, ::Unity::Mathematics::double4x2 b);

  /// @brief Method mul, addr 0x31b3ef8, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 mul(::Unity::Mathematics::double3x2 a, ::Unity::Mathematics::double2x3 b);

  /// @brief Method mul, addr 0x31b40f8, size 0xc0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 mul(::Unity::Mathematics::double3x3 a, ::Unity::Mathematics::double3x3 b);

  /// @brief Method mul, addr 0x31b43d8, size 0x104, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 mul(::Unity::Mathematics::double3x4 a, ::Unity::Mathematics::double4x3 b);

  /// @brief Method mul, addr 0x31b3f78, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 mul(::Unity::Mathematics::double3x2 a, ::Unity::Mathematics::double2x4 b);

  /// @brief Method mul, addr 0x31b41b8, size 0xfc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 mul(::Unity::Mathematics::double3x3 a, ::Unity::Mathematics::double3x4 b);

  /// @brief Method mul, addr 0x31b44dc, size 0x174, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 mul(::Unity::Mathematics::double3x4 a, ::Unity::Mathematics::double4x4 b);

  /// @brief Method mul, addr 0x31b3688, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 mul(::Unity::Mathematics::double2 a, ::Unity::Mathematics::double2x4 b);

  /// @brief Method mul, addr 0x31b3770, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 mul(::Unity::Mathematics::double3 a, ::Unity::Mathematics::double3x4 b);

  /// @brief Method mul, addr 0x31b38b8, size 0x94, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 mul(::Unity::Mathematics::double4 a, ::Unity::Mathematics::double4x4 b);

  /// @brief Method mul, addr 0x31b4650, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 mul(::Unity::Mathematics::double4x2 a, ::Unity::Mathematics::double2 b);

  /// @brief Method mul, addr 0x31b47e0, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 mul(::Unity::Mathematics::double4x3 a, ::Unity::Mathematics::double3 b);

  /// @brief Method mul, addr 0x31b4a58, size 0x94, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 mul(::Unity::Mathematics::double4x4 a, ::Unity::Mathematics::double4 b);

  /// @brief Method mul, addr 0x31b4694, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 mul(::Unity::Mathematics::double4x2 a, ::Unity::Mathematics::double2x2 b);

  /// @brief Method mul, addr 0x31b484c, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 mul(::Unity::Mathematics::double4x3 a, ::Unity::Mathematics::double3x2 b);

  /// @brief Method mul, addr 0x31b4aec, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 mul(::Unity::Mathematics::double4x4 a, ::Unity::Mathematics::double4x2 b);

  /// @brief Method mul, addr 0x31b46d8, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 mul(::Unity::Mathematics::double4x2 a, ::Unity::Mathematics::double2x3 b);

  /// @brief Method mul, addr 0x31b48c8, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 mul(::Unity::Mathematics::double4x3 a, ::Unity::Mathematics::double3x3 b);

  /// @brief Method mul, addr 0x31b4b90, size 0xe8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 mul(::Unity::Mathematics::double4x4 a, ::Unity::Mathematics::double4x3 b);

  /// @brief Method mul, addr 0x31b474c, size 0x94, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x4 mul(::Unity::Mathematics::double4x2 a, ::Unity::Mathematics::double2x4 b);

  /// @brief Method mul, addr 0x31b4978, size 0xe0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x4 mul(::Unity::Mathematics::double4x3 a, ::Unity::Mathematics::double3x4 b);

  /// @brief Method mul, addr 0x31b4c78, size 0x144, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x4 mul(::Unity::Mathematics::double4x4 a, ::Unity::Mathematics::double4x4 b);

  /// @brief Method mul, addr 0x31b1f70, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 mul(::Unity::Mathematics::float2 a, ::Unity::Mathematics::float2x2 b);

  /// @brief Method mul, addr 0x31b2284, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 mul(::Unity::Mathematics::float2x2 a, ::Unity::Mathematics::float2 b);

  /// @brief Method mul, addr 0x31b237c, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 mul(::Unity::Mathematics::float2x3 a, ::Unity::Mathematics::float3 b);

  /// @brief Method mul, addr 0x31b254c, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 mul(::Unity::Mathematics::float2x4 a, ::Unity::Mathematics::float4 b);

  /// @brief Method mul, addr 0x31b201c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 mul(::Unity::Mathematics::float3 a, ::Unity::Mathematics::float3x2 b);

  /// @brief Method mul, addr 0x31b2134, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 mul(::Unity::Mathematics::float4 a, ::Unity::Mathematics::float4x2 b);

  /// @brief Method mul, addr 0x31b22a0, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 mul(::Unity::Mathematics::float2x2 a, ::Unity::Mathematics::float2x2 b);

  /// @brief Method mul, addr 0x31b23a0, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 mul(::Unity::Mathematics::float2x3 a, ::Unity::Mathematics::float3x2 b);

  /// @brief Method mul, addr 0x31b2578, size 0x94, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 mul(::Unity::Mathematics::float2x4 a, ::Unity::Mathematics::float4x2 b);

  /// @brief Method mul, addr 0x31b22d4, size 0x5c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 mul(::Unity::Mathematics::float2x2 a, ::Unity::Mathematics::float2x3 b);

  /// @brief Method mul, addr 0x31b240c, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 mul(::Unity::Mathematics::float2x3 a, ::Unity::Mathematics::float3x3 b);

  /// @brief Method mul, addr 0x31b260c, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 mul(::Unity::Mathematics::float2x4 a, ::Unity::Mathematics::float4x3 b);

  /// @brief Method mul, addr 0x31b2330, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x4 mul(::Unity::Mathematics::float2x2 a, ::Unity::Mathematics::float2x4 b);

  /// @brief Method mul, addr 0x31b2494, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x4 mul(::Unity::Mathematics::float2x3 a, ::Unity::Mathematics::float3x4 b);

  /// @brief Method mul, addr 0x31b26c0, size 0xe4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x4 mul(::Unity::Mathematics::float2x4 a, ::Unity::Mathematics::float4x4 b);

  /// @brief Method mul, addr 0x31b1f8c, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 mul(::Unity::Mathematics::float2 a, ::Unity::Mathematics::float2x3 b);

  /// @brief Method mul, addr 0x31b2054, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 mul(::Unity::Mathematics::float3 a, ::Unity::Mathematics::float3x3 b);

  /// @brief Method mul, addr 0x31b27a4, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 mul(::Unity::Mathematics::float3x2 a, ::Unity::Mathematics::float2 b);

  /// @brief Method mul, addr 0x31b29a0, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 mul(::Unity::Mathematics::float3x3 a, ::Unity::Mathematics::float3 b);

  /// @brief Method mul, addr 0x31b2c2c, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 mul(::Unity::Mathematics::float3x4 a, ::Unity::Mathematics::float4 b);

  /// @brief Method mul, addr 0x31b2180, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 mul(::Unity::Mathematics::float4 a, ::Unity::Mathematics::float4x3 b);

  /// @brief Method mul, addr 0x31bacb8, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 mul(::Unity::Mathematics::quaternion q, ::Unity::Mathematics::float3 v);

  /// @brief Method mul, addr 0x31b27d4, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x2 mul(::Unity::Mathematics::float3x2 a, ::Unity::Mathematics::float2x2 b);

  /// @brief Method mul, addr 0x31b29e8, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x2 mul(::Unity::Mathematics::float3x3 a, ::Unity::Mathematics::float3x2 b);

  /// @brief Method mul, addr 0x31b2c8c, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x2 mul(::Unity::Mathematics::float3x4 a, ::Unity::Mathematics::float4x2 b);

  /// @brief Method mul, addr 0x31b2834, size 0xa0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 mul(::Unity::Mathematics::float3x2 a, ::Unity::Mathematics::float2x3 b);

  /// @brief Method mul, addr 0x31b2a70, size 0xc0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 mul(::Unity::Mathematics::float3x3 a, ::Unity::Mathematics::float3x3 b);

  /// @brief Method mul, addr 0x31b2d40, size 0x104, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 mul(::Unity::Mathematics::float3x4 a, ::Unity::Mathematics::float4x3 b);

  /// @brief Method mul, addr 0x31b28d4, size 0xcc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 mul(::Unity::Mathematics::float3x2 a, ::Unity::Mathematics::float2x4 b);

  /// @brief Method mul, addr 0x31b2b30, size 0xfc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 mul(::Unity::Mathematics::float3x3 a, ::Unity::Mathematics::float3x4 b);

  /// @brief Method mul, addr 0x31b2e44, size 0x174, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 mul(::Unity::Mathematics::float3x4 a, ::Unity::Mathematics::float4x4 b);

  /// @brief Method mul, addr 0x31bb5bc, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 mul(::Unity::Mathematics::RigidTransform a, ::Unity::Mathematics::float4 pos);

  /// @brief Method mul, addr 0x31b1fc0, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 mul(::Unity::Mathematics::float2 a, ::Unity::Mathematics::float2x4 b);

  /// @brief Method mul, addr 0x31b20a8, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 mul(::Unity::Mathematics::float3 a, ::Unity::Mathematics::float3x4 b);

  /// @brief Method mul, addr 0x31b21f0, size 0x94, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 mul(::Unity::Mathematics::float4 a, ::Unity::Mathematics::float4x4 b);

  /// @brief Method mul, addr 0x31b2fb8, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 mul(::Unity::Mathematics::float4x2 a, ::Unity::Mathematics::float2 b);

  /// @brief Method mul, addr 0x31b3148, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 mul(::Unity::Mathematics::float4x3 a, ::Unity::Mathematics::float3 b);

  /// @brief Method mul, addr 0x31b338c, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 mul(::Unity::Mathematics::float4x4 a, ::Unity::Mathematics::float4 b);

  /// @brief Method mul, addr 0x31b2fd8, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x2 mul(::Unity::Mathematics::float4x2 a, ::Unity::Mathematics::float2x2 b);

  /// @brief Method mul, addr 0x31b3174, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x2 mul(::Unity::Mathematics::float4x3 a, ::Unity::Mathematics::float3x2 b);

  /// @brief Method mul, addr 0x31b33c0, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x2 mul(::Unity::Mathematics::float4x4 a, ::Unity::Mathematics::float4x2 b);

  /// @brief Method mul, addr 0x31b2ffc, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x3 mul(::Unity::Mathematics::float4x2 a, ::Unity::Mathematics::float2x3 b);

  /// @brief Method mul, addr 0x31b31e4, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x3 mul(::Unity::Mathematics::float4x3 a, ::Unity::Mathematics::float3x3 b);

  /// @brief Method mul, addr 0x31b3440, size 0xd4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x3 mul(::Unity::Mathematics::float4x4 a, ::Unity::Mathematics::float4x3 b);

  /// @brief Method mul, addr 0x31b3084, size 0xc4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 mul(::Unity::Mathematics::float4x2 a, ::Unity::Mathematics::float2x4 b);

  /// @brief Method mul, addr 0x31b32a0, size 0xec, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 mul(::Unity::Mathematics::float4x3 a, ::Unity::Mathematics::float3x4 b);

  /// @brief Method mul, addr 0x31b3514, size 0x10c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 mul(::Unity::Mathematics::float4x4 a, ::Unity::Mathematics::float4x4 b);

  /// @brief Method mul, addr 0x31b4dd8, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 mul(::Unity::Mathematics::int2 a, ::Unity::Mathematics::int2x2 b);

  /// @brief Method mul, addr 0x31b508c, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 mul(::Unity::Mathematics::int2x2 a, ::Unity::Mathematics::int2 b);

  /// @brief Method mul, addr 0x31b5268, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 mul(::Unity::Mathematics::int2x3 a, ::Unity::Mathematics::int3 b);

  /// @brief Method mul, addr 0x31b5514, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 mul(::Unity::Mathematics::int2x4 a, ::Unity::Mathematics::int4 b);

  /// @brief Method mul, addr 0x31b4e84, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 mul(::Unity::Mathematics::int3 a, ::Unity::Mathematics::int3x2 b);

  /// @brief Method mul, addr 0x31b4f78, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 mul(::Unity::Mathematics::int4 a, ::Unity::Mathematics::int4x2 b);

  /// @brief Method mul, addr 0x31b50bc, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x2 mul(::Unity::Mathematics::int2x2 a, ::Unity::Mathematics::int2x2 b);

  /// @brief Method mul, addr 0x31b52b0, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x2 mul(::Unity::Mathematics::int2x3 a, ::Unity::Mathematics::int3x2 b);

  /// @brief Method mul, addr 0x31b5578, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x2 mul(::Unity::Mathematics::int2x4 a, ::Unity::Mathematics::int4x2 b);

  /// @brief Method mul, addr 0x31b5144, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x3 mul(::Unity::Mathematics::int2x2 a, ::Unity::Mathematics::int2x3 b);

  /// @brief Method mul, addr 0x31b5334, size 0xc8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x3 mul(::Unity::Mathematics::int2x3 a, ::Unity::Mathematics::int3x3 b);

  /// @brief Method mul, addr 0x31b562c, size 0x124, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x3 mul(::Unity::Mathematics::int2x4 a, ::Unity::Mathematics::int4x3 b);

  /// @brief Method mul, addr 0x31b51c4, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x4 mul(::Unity::Mathematics::int2x2 a, ::Unity::Mathematics::int2x4 b);

  /// @brief Method mul, addr 0x31b53fc, size 0x118, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x4 mul(::Unity::Mathematics::int2x3 a, ::Unity::Mathematics::int3x4 b);

  /// @brief Method mul, addr 0x31b5750, size 0x1a0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x4 mul(::Unity::Mathematics::int2x4 a, ::Unity::Mathematics::int4x4 b);

  /// @brief Method mul, addr 0x31b4dfc, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 mul(::Unity::Mathematics::int2 a, ::Unity::Mathematics::int2x3 b);

  /// @brief Method mul, addr 0x31b4eb4, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 mul(::Unity::Mathematics::int3 a, ::Unity::Mathematics::int3x3 b);

  /// @brief Method mul, addr 0x31b58f0, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 mul(::Unity::Mathematics::int3x2 a, ::Unity::Mathematics::int2 b);

  /// @brief Method mul, addr 0x31b5b58, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 mul(::Unity::Mathematics::int3x3 a, ::Unity::Mathematics::int3 b);

  /// @brief Method mul, addr 0x31b5ef0, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 mul(::Unity::Mathematics::int3x4 a, ::Unity::Mathematics::int4 b);

  /// @brief Method mul, addr 0x31b4fb8, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 mul(::Unity::Mathematics::int4 a, ::Unity::Mathematics::int4x3 b);

  /// @brief Method mul, addr 0x31b5938, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 mul(::Unity::Mathematics::int3x2 a, ::Unity::Mathematics::int2x2 b);

  /// @brief Method mul, addr 0x31b5bb8, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 mul(::Unity::Mathematics::int3x3 a, ::Unity::Mathematics::int3x2 b);

  /// @brief Method mul, addr 0x31b5f80, size 0xf4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 mul(::Unity::Mathematics::int3x4 a, ::Unity::Mathematics::int4x2 b);

  /// @brief Method mul, addr 0x31b59bc, size 0xac, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x3 mul(::Unity::Mathematics::int3x2 a, ::Unity::Mathematics::int2x3 b);

  /// @brief Method mul, addr 0x31b5c6c, size 0x10c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x3 mul(::Unity::Mathematics::int3x3 a, ::Unity::Mathematics::int3x3 b);

  /// @brief Method mul, addr 0x31b6074, size 0x17c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x3 mul(::Unity::Mathematics::int3x4 a, ::Unity::Mathematics::int4x3 b);

  /// @brief Method mul, addr 0x31b5a68, size 0xf0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 mul(::Unity::Mathematics::int3x2 a, ::Unity::Mathematics::int2x4 b);

  /// @brief Method mul, addr 0x31b5d78, size 0x178, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 mul(::Unity::Mathematics::int3x3 a, ::Unity::Mathematics::int3x4 b);

  /// @brief Method mul, addr 0x31b61f0, size 0x22c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 mul(::Unity::Mathematics::int3x4 a, ::Unity::Mathematics::int4x4 b);

  /// @brief Method mul, addr 0x31b4e2c, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 mul(::Unity::Mathematics::int2 a, ::Unity::Mathematics::int2x4 b);

  /// @brief Method mul, addr 0x31b4ef8, size 0x5c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 mul(::Unity::Mathematics::int3 a, ::Unity::Mathematics::int3x4 b);

  /// @brief Method mul, addr 0x31b5010, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 mul(::Unity::Mathematics::int4 a, ::Unity::Mathematics::int4x4 b);

  /// @brief Method mul, addr 0x31b641c, size 0xa0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 mul(::Unity::Mathematics::int4x2 a, ::Unity::Mathematics::int2 b);

  /// @brief Method mul, addr 0x31b6810, size 0xec, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 mul(::Unity::Mathematics::int4x3 a, ::Unity::Mathematics::int3 b);

  /// @brief Method mul, addr 0x31b6e40, size 0x138, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 mul(::Unity::Mathematics::int4x4 a, ::Unity::Mathematics::int4 b);

  /// @brief Method mul, addr 0x31b64bc, size 0xac, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 mul(::Unity::Mathematics::int4x2 a, ::Unity::Mathematics::int2x2 b);

  /// @brief Method mul, addr 0x31b68fc, size 0x110, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 mul(::Unity::Mathematics::int4x3 a, ::Unity::Mathematics::int3x2 b);

  /// @brief Method mul, addr 0x31b6f78, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 mul(::Unity::Mathematics::int4x4 a, ::Unity::Mathematics::int4x2 b);

  /// @brief Method mul, addr 0x31b6568, size 0x10c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 mul(::Unity::Mathematics::int4x2 a, ::Unity::Mathematics::int2x3 b);

  /// @brief Method mul, addr 0x31b6a0c, size 0x1a4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 mul(::Unity::Mathematics::int4x3 a, ::Unity::Mathematics::int3x3 b);

  /// @brief Method mul, addr 0x31b7104, size 0x2a4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 mul(::Unity::Mathematics::int4x4 a, ::Unity::Mathematics::int4x3 b);

  /// @brief Method mul, addr 0x31b6674, size 0x19c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 mul(::Unity::Mathematics::int4x2 a, ::Unity::Mathematics::int2x4 b);

  /// @brief Method mul, addr 0x31b6bb0, size 0x290, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 mul(::Unity::Mathematics::int4x3 a, ::Unity::Mathematics::int3x4 b);

  /// @brief Method mul, addr 0x31b73a8, size 0x3f4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 mul(::Unity::Mathematics::int4x4 a, ::Unity::Mathematics::int4x4 b);

  /// @brief Method mul, addr 0x31bac44, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion mul(::Unity::Mathematics::quaternion a, ::Unity::Mathematics::quaternion b);

  /// @brief Method mul, addr 0x31b77b8, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 mul(::Unity::Mathematics::uint2 a, ::Unity::Mathematics::uint2x2 b);

  /// @brief Method mul, addr 0x31b7a6c, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 mul(::Unity::Mathematics::uint2x2 a, ::Unity::Mathematics::uint2 b);

  /// @brief Method mul, addr 0x31b7c48, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 mul(::Unity::Mathematics::uint2x3 a, ::Unity::Mathematics::uint3 b);

  /// @brief Method mul, addr 0x31b7ef4, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 mul(::Unity::Mathematics::uint2x4 a, ::Unity::Mathematics::uint4 b);

  /// @brief Method mul, addr 0x31b7864, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 mul(::Unity::Mathematics::uint3 a, ::Unity::Mathematics::uint3x2 b);

  /// @brief Method mul, addr 0x31b7958, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 mul(::Unity::Mathematics::uint4 a, ::Unity::Mathematics::uint4x2 b);

  /// @brief Method mul, addr 0x31b7a9c, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 mul(::Unity::Mathematics::uint2x2 a, ::Unity::Mathematics::uint2x2 b);

  /// @brief Method mul, addr 0x31b7c90, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 mul(::Unity::Mathematics::uint2x3 a, ::Unity::Mathematics::uint3x2 b);

  /// @brief Method mul, addr 0x31b7f58, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 mul(::Unity::Mathematics::uint2x4 a, ::Unity::Mathematics::uint4x2 b);

  /// @brief Method mul, addr 0x31b7b24, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x3 mul(::Unity::Mathematics::uint2x2 a, ::Unity::Mathematics::uint2x3 b);

  /// @brief Method mul, addr 0x31b7d14, size 0xc8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x3 mul(::Unity::Mathematics::uint2x3 a, ::Unity::Mathematics::uint3x3 b);

  /// @brief Method mul, addr 0x31b800c, size 0x124, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x3 mul(::Unity::Mathematics::uint2x4 a, ::Unity::Mathematics::uint4x3 b);

  /// @brief Method mul, addr 0x31b7ba4, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x4 mul(::Unity::Mathematics::uint2x2 a, ::Unity::Mathematics::uint2x4 b);

  /// @brief Method mul, addr 0x31b7ddc, size 0x118, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x4 mul(::Unity::Mathematics::uint2x3 a, ::Unity::Mathematics::uint3x4 b);

  /// @brief Method mul, addr 0x31b8130, size 0x1a0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x4 mul(::Unity::Mathematics::uint2x4 a, ::Unity::Mathematics::uint4x4 b);

  /// @brief Method mul, addr 0x31b77dc, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 mul(::Unity::Mathematics::uint2 a, ::Unity::Mathematics::uint2x3 b);

  /// @brief Method mul, addr 0x31b7894, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 mul(::Unity::Mathematics::uint3 a, ::Unity::Mathematics::uint3x3 b);

  /// @brief Method mul, addr 0x31b82d0, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 mul(::Unity::Mathematics::uint3x2 a, ::Unity::Mathematics::uint2 b);

  /// @brief Method mul, addr 0x31b8538, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 mul(::Unity::Mathematics::uint3x3 a, ::Unity::Mathematics::uint3 b);

  /// @brief Method mul, addr 0x31b88d0, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 mul(::Unity::Mathematics::uint3x4 a, ::Unity::Mathematics::uint4 b);

  /// @brief Method mul, addr 0x31b7998, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 mul(::Unity::Mathematics::uint4 a, ::Unity::Mathematics::uint4x3 b);

  /// @brief Method mul, addr 0x31b8318, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 mul(::Unity::Mathematics::uint3x2 a, ::Unity::Mathematics::uint2x2 b);

  /// @brief Method mul, addr 0x31b8598, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 mul(::Unity::Mathematics::uint3x3 a, ::Unity::Mathematics::uint3x2 b);

  /// @brief Method mul, addr 0x31b8960, size 0xf4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 mul(::Unity::Mathematics::uint3x4 a, ::Unity::Mathematics::uint4x2 b);

  /// @brief Method mul, addr 0x31b839c, size 0xac, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x3 mul(::Unity::Mathematics::uint3x2 a, ::Unity::Mathematics::uint2x3 b);

  /// @brief Method mul, addr 0x31b864c, size 0x10c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x3 mul(::Unity::Mathematics::uint3x3 a, ::Unity::Mathematics::uint3x3 b);

  /// @brief Method mul, addr 0x31b8a54, size 0x17c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x3 mul(::Unity::Mathematics::uint3x4 a, ::Unity::Mathematics::uint4x3 b);

  /// @brief Method mul, addr 0x31b8448, size 0xf0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 mul(::Unity::Mathematics::uint3x2 a, ::Unity::Mathematics::uint2x4 b);

  /// @brief Method mul, addr 0x31b8758, size 0x178, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 mul(::Unity::Mathematics::uint3x3 a, ::Unity::Mathematics::uint3x4 b);

  /// @brief Method mul, addr 0x31b8bd0, size 0x22c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 mul(::Unity::Mathematics::uint3x4 a, ::Unity::Mathematics::uint4x4 b);

  /// @brief Method mul, addr 0x31b780c, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 mul(::Unity::Mathematics::uint2 a, ::Unity::Mathematics::uint2x4 b);

  /// @brief Method mul, addr 0x31b78d8, size 0x5c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 mul(::Unity::Mathematics::uint3 a, ::Unity::Mathematics::uint3x4 b);

  /// @brief Method mul, addr 0x31b79f0, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 mul(::Unity::Mathematics::uint4 a, ::Unity::Mathematics::uint4x4 b);

  /// @brief Method mul, addr 0x31b8dfc, size 0xa0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 mul(::Unity::Mathematics::uint4x2 a, ::Unity::Mathematics::uint2 b);

  /// @brief Method mul, addr 0x31b91f0, size 0xec, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 mul(::Unity::Mathematics::uint4x3 a, ::Unity::Mathematics::uint3 b);

  /// @brief Method mul, addr 0x31b9820, size 0x138, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 mul(::Unity::Mathematics::uint4x4 a, ::Unity::Mathematics::uint4 b);

  /// @brief Method mul, addr 0x31b8e9c, size 0xac, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x2 mul(::Unity::Mathematics::uint4x2 a, ::Unity::Mathematics::uint2x2 b);

  /// @brief Method mul, addr 0x31b92dc, size 0x110, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x2 mul(::Unity::Mathematics::uint4x3 a, ::Unity::Mathematics::uint3x2 b);

  /// @brief Method mul, addr 0x31b9958, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x2 mul(::Unity::Mathematics::uint4x4 a, ::Unity::Mathematics::uint4x2 b);

  /// @brief Method mul, addr 0x31b8f48, size 0x10c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 mul(::Unity::Mathematics::uint4x2 a, ::Unity::Mathematics::uint2x3 b);

  /// @brief Method mul, addr 0x31b93ec, size 0x1a4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 mul(::Unity::Mathematics::uint4x3 a, ::Unity::Mathematics::uint3x3 b);

  /// @brief Method mul, addr 0x31b9ae4, size 0x2a4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 mul(::Unity::Mathematics::uint4x4 a, ::Unity::Mathematics::uint4x3 b);

  /// @brief Method mul, addr 0x31b9054, size 0x19c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x4 mul(::Unity::Mathematics::uint4x2 a, ::Unity::Mathematics::uint2x4 b);

  /// @brief Method mul, addr 0x31b9590, size 0x290, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x4 mul(::Unity::Mathematics::uint4x3 a, ::Unity::Mathematics::uint3x4 b);

  /// @brief Method mul, addr 0x31b9d88, size 0x3f4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x4 mul(::Unity::Mathematics::uint4x4 a, ::Unity::Mathematics::uint4x4 b);

  /// @brief Method mul, addr 0x31b3628, size 0x10, virtual false, abstract: false, final false
  static inline double_t mul(::Unity::Mathematics::double2 a, ::Unity::Mathematics::double2 b);

  /// @brief Method mul, addr 0x31b36cc, size 0x18, virtual false, abstract: false, final false
  static inline double_t mul(::Unity::Mathematics::double3 a, ::Unity::Mathematics::double3 b);

  /// @brief Method mul, addr 0x31b37dc, size 0x20, virtual false, abstract: false, final false
  static inline double_t mul(::Unity::Mathematics::double4 a, ::Unity::Mathematics::double4 b);

  /// @brief Method mul, addr 0x31b3620, size 0x8, virtual false, abstract: false, final false
  static inline double_t mul(double_t a, double_t b);

  /// @brief Method mul, addr 0x31b1f60, size 0x10, virtual false, abstract: false, final false
  static inline float_t mul(::Unity::Mathematics::float2 a, ::Unity::Mathematics::float2 b);

  /// @brief Method mul, addr 0x31b2004, size 0x18, virtual false, abstract: false, final false
  static inline float_t mul(::Unity::Mathematics::float3 a, ::Unity::Mathematics::float3 b);

  /// @brief Method mul, addr 0x31b2114, size 0x20, virtual false, abstract: false, final false
  static inline float_t mul(::Unity::Mathematics::float4 a, ::Unity::Mathematics::float4 b);

  /// @brief Method mul, addr 0x31b1f58, size 0x8, virtual false, abstract: false, final false
  static inline float_t mul(float_t a, float_t b);

  /// @brief Method mul, addr 0x31b4dc4, size 0x14, virtual false, abstract: false, final false
  static inline int32_t mul(::Unity::Mathematics::int2 a, ::Unity::Mathematics::int2 b);

  /// @brief Method mul, addr 0x31b4e6c, size 0x18, virtual false, abstract: false, final false
  static inline int32_t mul(::Unity::Mathematics::int3 a, ::Unity::Mathematics::int3 b);

  /// @brief Method mul, addr 0x31b4f54, size 0x24, virtual false, abstract: false, final false
  static inline int32_t mul(::Unity::Mathematics::int4 a, ::Unity::Mathematics::int4 b);

  /// @brief Method mul, addr 0x31b4dbc, size 0x8, virtual false, abstract: false, final false
  static inline int32_t mul(int32_t a, int32_t b);

  /// @brief Method mul, addr 0x31b77a4, size 0x14, virtual false, abstract: false, final false
  static inline uint32_t mul(::Unity::Mathematics::uint2 a, ::Unity::Mathematics::uint2 b);

  /// @brief Method mul, addr 0x31b784c, size 0x18, virtual false, abstract: false, final false
  static inline uint32_t mul(::Unity::Mathematics::uint3 a, ::Unity::Mathematics::uint3 b);

  /// @brief Method mul, addr 0x31b7934, size 0x24, virtual false, abstract: false, final false
  static inline uint32_t mul(::Unity::Mathematics::uint4 a, ::Unity::Mathematics::uint4 b);

  /// @brief Method mul, addr 0x31b779c, size 0x8, virtual false, abstract: false, final false
  static inline uint32_t mul(uint32_t a, uint32_t b);

  /// @brief Method nlerp, addr 0x31badb0, size 0xfc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion nlerp(::Unity::Mathematics::quaternion q1, ::Unity::Mathematics::quaternion q2, float_t t);

  /// @brief Method normalize, addr 0x31a957c, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 normalize(::Unity::Mathematics::double2 x);

  /// @brief Method normalize, addr 0x31a95f8, size 0x94, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 normalize(::Unity::Mathematics::double3 x);

  /// @brief Method normalize, addr 0x31a968c, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 normalize(::Unity::Mathematics::double4 x);

  /// @brief Method normalize, addr 0x31a93c8, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 normalize(::Unity::Mathematics::float2 x);

  /// @brief Method normalize, addr 0x31a9444, size 0x94, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 normalize(::Unity::Mathematics::float3 x);

  /// @brief Method normalize, addr 0x31a94d8, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 normalize(::Unity::Mathematics::float4 x);

  /// @brief Method normalize, addr 0x31ba2f8, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion normalize(::Unity::Mathematics::quaternion q);

  /// @brief Method normalizesafe, addr 0x31a9990, size 0xa0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 normalizesafe(::Unity::Mathematics::double2 x, ::Unity::Mathematics::double2 defaultvalue);

  /// @brief Method normalizesafe, addr 0x31a9a30, size 0xc0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 normalizesafe(::Unity::Mathematics::double3 x, ::Unity::Mathematics::double3 defaultvalue);

  /// @brief Method normalizesafe, addr 0x31a9af0, size 0x100, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 normalizesafe(::Unity::Mathematics::double4 x, ::Unity::Mathematics::double4 defaultvalue);

  /// @brief Method normalizesafe, addr 0x31a9730, size 0xa0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 normalizesafe(::Unity::Mathematics::float2 x, ::Unity::Mathematics::float2 defaultvalue);

  /// @brief Method normalizesafe, addr 0x31a97d0, size 0xc0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 normalizesafe(::Unity::Mathematics::float3 x, ::Unity::Mathematics::float3 defaultvalue);

  /// @brief Method normalizesafe, addr 0x31a9890, size 0x100, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 normalizesafe(::Unity::Mathematics::float4 x, ::Unity::Mathematics::float4 defaultvalue);

  /// @brief Method normalizesafe, addr 0x31ba39c, size 0x120, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion normalizesafe(::Unity::Mathematics::quaternion q);

  /// @brief Method normalizesafe, addr 0x31ba4bc, size 0x100, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion normalizesafe(::Unity::Mathematics::quaternion q, ::Unity::Mathematics::quaternion defaultvalue);

  /// @brief Method orthonormalize, addr 0x31b1d94, size 0x1c4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 orthonormalize(::Unity::Mathematics::float3x3 i);

  /// @brief Method pow, addr 0x31a4e90, size 0xc4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 pow(::Unity::Mathematics::double2 x, ::Unity::Mathematics::double2 y);

  /// @brief Method pow, addr 0x31a4f54, size 0x118, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 pow(::Unity::Mathematics::double3 x, ::Unity::Mathematics::double3 y);

  /// @brief Method pow, addr 0x31a506c, size 0x16c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 pow(::Unity::Mathematics::double4 x, ::Unity::Mathematics::double4 y);

  /// @brief Method pow, addr 0x31a4ac8, size 0xc8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 pow(::Unity::Mathematics::float2 x, ::Unity::Mathematics::float2 y);

  /// @brief Method pow, addr 0x31a4b90, size 0x120, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 pow(::Unity::Mathematics::float3 x, ::Unity::Mathematics::float3 y);

  /// @brief Method pow, addr 0x31a4cb0, size 0x178, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 pow(::Unity::Mathematics::float4 x, ::Unity::Mathematics::float4 y);

  /// @brief Method pow, addr 0x31a4e28, size 0x68, virtual false, abstract: false, final false
  static inline double_t pow(double_t x, double_t y);

  /// @brief Method pow, addr 0x31a4a58, size 0x70, virtual false, abstract: false, final false
  static inline float_t pow(float_t x, float_t y);

  /// @brief Method project, addr 0x31ac7d8, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 project(::Unity::Mathematics::double2 a, ::Unity::Mathematics::double2 b);

  /// @brief Method project, addr 0x31ac800, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 project(::Unity::Mathematics::double3 a, ::Unity::Mathematics::double3 b);

  /// @brief Method project, addr 0x31ac83c, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 project(::Unity::Mathematics::double4 a, ::Unity::Mathematics::double4 b);

  /// @brief Method project, addr 0x31ac594, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 project(::Unity::Mathematics::float2 a, ::Unity::Mathematics::float2 b);

  /// @brief Method project, addr 0x31ac5bc, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 project(::Unity::Mathematics::float3 a, ::Unity::Mathematics::float3 b);

  /// @brief Method project, addr 0x31ac5f8, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 project(::Unity::Mathematics::float4 a, ::Unity::Mathematics::float4 b);

  /// @brief Method projectsafe, addr 0x31ac88c, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 projectsafe(::Unity::Mathematics::double2 a, ::Unity::Mathematics::double2 b, ::Unity::Mathematics::double2 defaultValue);

  /// @brief Method projectsafe, addr 0x31ac8e4, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 projectsafe(::Unity::Mathematics::double3 a, ::Unity::Mathematics::double3 b, ::Unity::Mathematics::double3 defaultValue);

  /// @brief Method projectsafe, addr 0x31ac96c, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 projectsafe(::Unity::Mathematics::double4 a, ::Unity::Mathematics::double4 b, ::Unity::Mathematics::double4 defaultValue);

  /// @brief Method projectsafe, addr 0x31ac648, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 projectsafe(::Unity::Mathematics::float2 a, ::Unity::Mathematics::float2 b, ::Unity::Mathematics::float2 defaultValue);

  /// @brief Method projectsafe, addr 0x31ac6a0, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 projectsafe(::Unity::Mathematics::float3 a, ::Unity::Mathematics::float3 b, ::Unity::Mathematics::float3 defaultValue);

  /// @brief Method projectsafe, addr 0x31ac728, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 projectsafe(::Unity::Mathematics::float4 a, ::Unity::Mathematics::float4 b, ::Unity::Mathematics::float4 defaultValue);

  /// @brief Method quaternion, addr 0x31ba184, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion quaternion(::Unity::Mathematics::float3x3 m);

  /// @brief Method quaternion, addr 0x31ba1c4, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion quaternion(::Unity::Mathematics::float4x4 m);

  /// @brief Method quaternion, addr 0x31ba180, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion quaternion(::Unity::Mathematics::float4 value);

  /// @brief Method quaternion, addr 0x31ba17c, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion quaternion(float_t x, float_t y, float_t z, float_t w);

  /// @brief Method radians, addr 0x31b017c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 radians(::Unity::Mathematics::double2 x);

  /// @brief Method radians, addr 0x31b0190, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 radians(::Unity::Mathematics::double3 x);

  /// @brief Method radians, addr 0x31b01a8, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 radians(::Unity::Mathematics::double4 x);

  /// @brief Method radians, addr 0x31b0124, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 radians(::Unity::Mathematics::float2 x);

  /// @brief Method radians, addr 0x31b0138, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 radians(::Unity::Mathematics::float3 x);

  /// @brief Method radians, addr 0x31b0150, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 radians(::Unity::Mathematics::float4 x);

  /// @brief Method radians, addr 0x31b016c, size 0x10, virtual false, abstract: false, final false
  static inline double_t radians(double_t x);

  /// @brief Method radians, addr 0x31b0114, size 0x10, virtual false, abstract: false, final false
  static inline float_t radians(float_t x);

  /// @brief Method rcp, addr 0x31a47fc, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 rcp(::Unity::Mathematics::double2 x);

  /// @brief Method rcp, addr 0x31a480c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 rcp(::Unity::Mathematics::double3 x);

  /// @brief Method rcp, addr 0x31a4820, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 rcp(::Unity::Mathematics::double4 x);

  /// @brief Method rcp, addr 0x31a47b4, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 rcp(::Unity::Mathematics::float2 x);

  /// @brief Method rcp, addr 0x31a47c4, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 rcp(::Unity::Mathematics::float3 x);

  /// @brief Method rcp, addr 0x31a47d8, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 rcp(::Unity::Mathematics::float4 x);

  /// @brief Method rcp, addr 0x31a47f0, size 0xc, virtual false, abstract: false, final false
  static inline double_t rcp(double_t x);

  /// @brief Method rcp, addr 0x31a47a8, size 0xc, virtual false, abstract: false, final false
  static inline float_t rcp(float_t x);

  /// @brief Method reflect, addr 0x31abec8, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 reflect(::Unity::Mathematics::double2 i, ::Unity::Mathematics::double2 n);

  /// @brief Method reflect, addr 0x31abef0, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 reflect(::Unity::Mathematics::double3 i, ::Unity::Mathematics::double3 n);

  /// @brief Method reflect, addr 0x31abf2c, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 reflect(::Unity::Mathematics::double4 i, ::Unity::Mathematics::double4 n);

  /// @brief Method reflect, addr 0x31abe14, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 reflect(::Unity::Mathematics::float2 i, ::Unity::Mathematics::float2 n);

  /// @brief Method reflect, addr 0x31abe3c, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 reflect(::Unity::Mathematics::float3 i, ::Unity::Mathematics::float3 n);

  /// @brief Method reflect, addr 0x31abe78, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 reflect(::Unity::Mathematics::float4 i, ::Unity::Mathematics::float4 n);

  /// @brief Method refract, addr 0x31ac288, size 0xd0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 refract(::Unity::Mathematics::double2 i, ::Unity::Mathematics::double2 n, double_t eta);

  /// @brief Method refract, addr 0x31ac358, size 0x108, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 refract(::Unity::Mathematics::double3 i, ::Unity::Mathematics::double3 n, double_t eta);

  /// @brief Method refract, addr 0x31ac460, size 0x134, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 refract(::Unity::Mathematics::double4 i, ::Unity::Mathematics::double4 n, double_t eta);

  /// @brief Method refract, addr 0x31abf7c, size 0xd0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 refract(::Unity::Mathematics::float2 i, ::Unity::Mathematics::float2 n, float_t eta);

  /// @brief Method refract, addr 0x31ac04c, size 0x108, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 refract(::Unity::Mathematics::float3 i, ::Unity::Mathematics::float3 n, float_t eta);

  /// @brief Method refract, addr 0x31ac154, size 0x134, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 refract(::Unity::Mathematics::float4 i, ::Unity::Mathematics::float4 n, float_t eta);

  /// @brief Method remap, addr 0x319b0c4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 remap(::Unity::Mathematics::double2 a, ::Unity::Mathematics::double2 b, ::Unity::Mathematics::double2 c, ::Unity::Mathematics::double2 d,
                                                    ::Unity::Mathematics::double2 x);

  /// @brief Method remap, addr 0x319b0fc, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 remap(::Unity::Mathematics::double3 a, ::Unity::Mathematics::double3 b, ::Unity::Mathematics::double3 c, ::Unity::Mathematics::double3 d,
                                                    ::Unity::Mathematics::double3 x);

  /// @brief Method remap, addr 0x319b160, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 remap(::Unity::Mathematics::double4 a, ::Unity::Mathematics::double4 b, ::Unity::Mathematics::double4 c, ::Unity::Mathematics::double4 d,
                                                    ::Unity::Mathematics::double4 x);

  /// @brief Method remap, addr 0x319af90, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 remap(::Unity::Mathematics::float2 a, ::Unity::Mathematics::float2 b, ::Unity::Mathematics::float2 c, ::Unity::Mathematics::float2 d,
                                                   ::Unity::Mathematics::float2 x);

  /// @brief Method remap, addr 0x319afc8, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 remap(::Unity::Mathematics::float3 a, ::Unity::Mathematics::float3 b, ::Unity::Mathematics::float3 c, ::Unity::Mathematics::float3 d,
                                                   ::Unity::Mathematics::float3 x);

  /// @brief Method remap, addr 0x319b02c, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 remap(::Unity::Mathematics::float4 a, ::Unity::Mathematics::float4 b, ::Unity::Mathematics::float4 c, ::Unity::Mathematics::float4 d,
                                                   ::Unity::Mathematics::float4 x);

  /// @brief Method remap, addr 0x319b0a8, size 0x1c, virtual false, abstract: false, final false
  static inline double_t remap(double_t a, double_t b, double_t c, double_t d, double_t x);

  /// @brief Method remap, addr 0x319af74, size 0x1c, virtual false, abstract: false, final false
  static inline float_t remap(float_t a, float_t b, float_t c, float_t d, float_t x);

  /// @brief Method reversebits, addr 0x31ae8f0, size 0xec, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 reversebits(::Unity::Mathematics::int2 x);

  /// @brief Method reversebits, addr 0x31ae9dc, size 0x144, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 reversebits(::Unity::Mathematics::int3 x);

  /// @brief Method reversebits, addr 0x31aeb20, size 0x160, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 reversebits(::Unity::Mathematics::int4 x);

  /// @brief Method reversebits, addr 0x31aec88, size 0xec, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 reversebits(::Unity::Mathematics::uint2 x);

  /// @brief Method reversebits, addr 0x31aed74, size 0x144, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 reversebits(::Unity::Mathematics::uint3 x);

  /// @brief Method reversebits, addr 0x31aeeb8, size 0x168, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 reversebits(::Unity::Mathematics::uint4 x);

  /// @brief Method reversebits, addr 0x31ae8e8, size 0x8, virtual false, abstract: false, final false
  static inline int32_t reversebits(int32_t x);

  /// @brief Method reversebits, addr 0x31af020, size 0x8, virtual false, abstract: false, final false
  static inline int64_t reversebits(int64_t x);

  /// @brief Method reversebits, addr 0x31aec80, size 0x8, virtual false, abstract: false, final false
  static inline uint32_t reversebits(uint32_t x);

  /// @brief Method reversebits, addr 0x31af028, size 0x8, virtual false, abstract: false, final false
  static inline uint64_t reversebits(uint64_t x);

  /// @brief Method right, addr 0x31b1b84, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 right();

  /// @brief Method rol, addr 0x31af03c, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 rol(::Unity::Mathematics::int2 x, int32_t n);

  /// @brief Method rol, addr 0x31af05c, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 rol(::Unity::Mathematics::int3 x, int32_t n);

  /// @brief Method rol, addr 0x31af080, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 rol(::Unity::Mathematics::int4 x, int32_t n);

  /// @brief Method rol, addr 0x31af0c4, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 rol(::Unity::Mathematics::uint2 x, int32_t n);

  /// @brief Method rol, addr 0x31af0e4, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 rol(::Unity::Mathematics::uint3 x, int32_t n);

  /// @brief Method rol, addr 0x31af108, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 rol(::Unity::Mathematics::uint4 x, int32_t n);

  /// @brief Method rol, addr 0x31af030, size 0xc, virtual false, abstract: false, final false
  static inline int32_t rol(int32_t x, int32_t n);

  /// @brief Method rol, addr 0x31af140, size 0xc, virtual false, abstract: false, final false
  static inline int64_t rol(int64_t x, int32_t n);

  /// @brief Method rol, addr 0x31af0b8, size 0xc, virtual false, abstract: false, final false
  static inline uint32_t rol(uint32_t x, int32_t n);

  /// @brief Method rol, addr 0x31af14c, size 0xc, virtual false, abstract: false, final false
  static inline uint64_t rol(uint64_t x, int32_t n);

  /// @brief Method ror, addr 0x31af160, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 ror(::Unity::Mathematics::int2 x, int32_t n);

  /// @brief Method ror, addr 0x31af180, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 ror(::Unity::Mathematics::int3 x, int32_t n);

  /// @brief Method ror, addr 0x31af1a4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 ror(::Unity::Mathematics::int4 x, int32_t n);

  /// @brief Method ror, addr 0x31af1e4, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 ror(::Unity::Mathematics::uint2 x, int32_t n);

  /// @brief Method ror, addr 0x31af204, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 ror(::Unity::Mathematics::uint3 x, int32_t n);

  /// @brief Method ror, addr 0x31af228, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 ror(::Unity::Mathematics::uint4 x, int32_t n);

  /// @brief Method ror, addr 0x31af158, size 0x8, virtual false, abstract: false, final false
  static inline int32_t ror(int32_t x, int32_t n);

  /// @brief Method ror, addr 0x31af260, size 0x8, virtual false, abstract: false, final false
  static inline int64_t ror(int64_t x, int32_t n);

  /// @brief Method ror, addr 0x31af1dc, size 0x8, virtual false, abstract: false, final false
  static inline uint32_t ror(uint32_t x, int32_t n);

  /// @brief Method ror, addr 0x31af268, size 0x8, virtual false, abstract: false, final false
  static inline uint64_t ror(uint64_t x, int32_t n);

  /// @brief Method rotate, addr 0x318e14c, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 rotate(::Unity::Mathematics::double4x4 a, ::Unity::Mathematics::double3 b);

  /// @brief Method rotate, addr 0x31bb660, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 rotate(::Unity::Mathematics::RigidTransform a, ::Unity::Mathematics::float3 dir);

  /// @brief Method rotate, addr 0x319289c, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 rotate(::Unity::Mathematics::float4x4 a, ::Unity::Mathematics::float3 b);

  /// @brief Method rotate, addr 0x31bad34, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 rotate(::Unity::Mathematics::quaternion q, ::Unity::Mathematics::float3 v);

  /// @brief Method round, addr 0x31a3498, size 0x16c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 round(::Unity::Mathematics::double2 x);

  /// @brief Method round, addr 0x31a3604, size 0x210, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 round(::Unity::Mathematics::double3 x);

  /// @brief Method round, addr 0x31a3814, size 0x29c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 round(::Unity::Mathematics::double4 x);

  /// @brief Method round, addr 0x31a2d40, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 round(::Unity::Mathematics::float2 x);

  /// @brief Method round, addr 0x31a2ecc, size 0x220, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 round(::Unity::Mathematics::float3 x);

  /// @brief Method round, addr 0x31a30ec, size 0x2e4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 round(::Unity::Mathematics::float4 x);

  /// @brief Method round, addr 0x31a33d0, size 0xc8, virtual false, abstract: false, final false
  static inline double_t round(double_t x);

  /// @brief Method round, addr 0x31a2c78, size 0xc8, virtual false, abstract: false, final false
  static inline float_t round(float_t x);

  /// @brief Method rsqrt, addr 0x31a910c, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 rsqrt(::Unity::Mathematics::double2 x);

  /// @brief Method rsqrt, addr 0x31a91b0, size 0xec, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 rsqrt(::Unity::Mathematics::double3 x);

  /// @brief Method rsqrt, addr 0x31a929c, size 0x12c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 rsqrt(::Unity::Mathematics::double4 x);

  /// @brief Method rsqrt, addr 0x31a8df4, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 rsqrt(::Unity::Mathematics::float2 x);

  /// @brief Method rsqrt, addr 0x31a8e98, size 0xec, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 rsqrt(::Unity::Mathematics::float3 x);

  /// @brief Method rsqrt, addr 0x31a8f84, size 0x12c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 rsqrt(::Unity::Mathematics::float4 x);

  /// @brief Method rsqrt, addr 0x31a90b0, size 0x5c, virtual false, abstract: false, final false
  static inline double_t rsqrt(double_t x);

  /// @brief Method rsqrt, addr 0x31a8d98, size 0x5c, virtual false, abstract: false, final false
  static inline float_t rsqrt(float_t x);

  /// @brief Method saturate, addr 0x319cf20, size 0x19c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 saturate(::Unity::Mathematics::double2 x);

  /// @brief Method saturate, addr 0x319d0bc, size 0x25c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 saturate(::Unity::Mathematics::double3 x);

  /// @brief Method saturate, addr 0x319d318, size 0x324, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 saturate(::Unity::Mathematics::double4 x);

  /// @brief Method saturate, addr 0x319c72c, size 0x19c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 saturate(::Unity::Mathematics::float2 x);

  /// @brief Method saturate, addr 0x319c8c8, size 0x25c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 saturate(::Unity::Mathematics::float3 x);

  /// @brief Method saturate, addr 0x319cb24, size 0x324, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 saturate(::Unity::Mathematics::float4 x);

  /// @brief Method saturate, addr 0x319ce48, size 0xd8, virtual false, abstract: false, final false
  static inline double_t saturate(double_t x);

  /// @brief Method saturate, addr 0x319c654, size 0xd8, virtual false, abstract: false, final false
  static inline float_t saturate(float_t x);

  /// @brief Method select, addr 0x31abc90, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 select(::Unity::Mathematics::double2 a, ::Unity::Mathematics::double2 b, ::Unity::Mathematics::bool2 c);

  /// @brief Method select, addr 0x31abc54, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 select(::Unity::Mathematics::double2 a, ::Unity::Mathematics::double2 b, bool c);

  /// @brief Method select, addr 0x31abca4, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 select(::Unity::Mathematics::double3 a, ::Unity::Mathematics::double3 b, ::Unity::Mathematics::bool3 c);

  /// @brief Method select, addr 0x31abc64, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 select(::Unity::Mathematics::double3 a, ::Unity::Mathematics::double3 b, bool c);

  /// @brief Method select, addr 0x31abcc0, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 select(::Unity::Mathematics::double4 a, ::Unity::Mathematics::double4 b, ::Unity::Mathematics::bool4 c);

  /// @brief Method select, addr 0x31abc78, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 select(::Unity::Mathematics::double4 a, ::Unity::Mathematics::double4 b, bool c);

  /// @brief Method select, addr 0x31abbf4, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 select(::Unity::Mathematics::float2 a, ::Unity::Mathematics::float2 b, ::Unity::Mathematics::bool2 c);

  /// @brief Method select, addr 0x31abbb8, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 select(::Unity::Mathematics::float2 a, ::Unity::Mathematics::float2 b, bool c);

  /// @brief Method select, addr 0x31abc08, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 select(::Unity::Mathematics::float3 a, ::Unity::Mathematics::float3 b, ::Unity::Mathematics::bool3 c);

  /// @brief Method select, addr 0x31abbc8, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 select(::Unity::Mathematics::float3 a, ::Unity::Mathematics::float3 b, bool c);

  /// @brief Method select, addr 0x31abc24, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 select(::Unity::Mathematics::float4 a, ::Unity::Mathematics::float4 b, ::Unity::Mathematics::bool4 c);

  /// @brief Method select, addr 0x31abbdc, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 select(::Unity::Mathematics::float4 a, ::Unity::Mathematics::float4 b, bool c);

  /// @brief Method select, addr 0x31aba88, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 select(::Unity::Mathematics::int2 a, ::Unity::Mathematics::int2 b, ::Unity::Mathematics::bool2 c);

  /// @brief Method select, addr 0x31aba58, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 select(::Unity::Mathematics::int2 a, ::Unity::Mathematics::int2 b, bool c);

  /// @brief Method select, addr 0x31abaa0, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 select(::Unity::Mathematics::int3 a, ::Unity::Mathematics::int3 b, ::Unity::Mathematics::bool3 c);

  /// @brief Method select, addr 0x31aba64, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 select(::Unity::Mathematics::int3 a, ::Unity::Mathematics::int3 b, bool c);

  /// @brief Method select, addr 0x31abac4, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 select(::Unity::Mathematics::int4 a, ::Unity::Mathematics::int4 b, ::Unity::Mathematics::bool4 c);

  /// @brief Method select, addr 0x31aba78, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 select(::Unity::Mathematics::int4 a, ::Unity::Mathematics::int4 b, bool c);

  /// @brief Method select, addr 0x31abb2c, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 select(::Unity::Mathematics::uint2 a, ::Unity::Mathematics::uint2 b, ::Unity::Mathematics::bool2 c);

  /// @brief Method select, addr 0x31abafc, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 select(::Unity::Mathematics::uint2 a, ::Unity::Mathematics::uint2 b, bool c);

  /// @brief Method select, addr 0x31abb44, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 select(::Unity::Mathematics::uint3 a, ::Unity::Mathematics::uint3 b, ::Unity::Mathematics::bool3 c);

  /// @brief Method select, addr 0x31abb08, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 select(::Unity::Mathematics::uint3 a, ::Unity::Mathematics::uint3 b, bool c);

  /// @brief Method select, addr 0x31abb68, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 select(::Unity::Mathematics::uint4 a, ::Unity::Mathematics::uint4 b, ::Unity::Mathematics::bool4 c);

  /// @brief Method select, addr 0x31abb1c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 select(::Unity::Mathematics::uint4 a, ::Unity::Mathematics::uint4 b, bool c);

  /// @brief Method select, addr 0x31abc48, size 0xc, virtual false, abstract: false, final false
  static inline double_t select(double_t a, double_t b, bool c);

  /// @brief Method select, addr 0x31abbac, size 0xc, virtual false, abstract: false, final false
  static inline float_t select(float_t a, float_t b, bool c);

  /// @brief Method select, addr 0x31aba4c, size 0xc, virtual false, abstract: false, final false
  static inline int32_t select(int32_t a, int32_t b, bool c);

  /// @brief Method select, addr 0x31abb94, size 0xc, virtual false, abstract: false, final false
  static inline int64_t select(int64_t a, int64_t b, bool c);

  /// @brief Method select, addr 0x31abaf0, size 0xc, virtual false, abstract: false, final false
  static inline uint32_t select(uint32_t a, uint32_t b, bool c);

  /// @brief Method select, addr 0x31abba0, size 0xc, virtual false, abstract: false, final false
  static inline uint64_t select(uint64_t a, uint64_t b, bool c);

  /// @brief Method select_shuffle_component, addr 0x31870b8, size 0xe4, virtual false, abstract: false, final false
  static inline bool select_shuffle_component(::Unity::Mathematics::bool2 a, ::Unity::Mathematics::bool2 b, ::Unity::Mathematics::__math__ShuffleComponent component);

  /// @brief Method select_shuffle_component, addr 0x3187f1c, size 0xec, virtual false, abstract: false, final false
  static inline bool select_shuffle_component(::Unity::Mathematics::bool3 a, ::Unity::Mathematics::bool3 b, ::Unity::Mathematics::__math__ShuffleComponent component);

  /// @brief Method select_shuffle_component, addr 0x3189290, size 0xfc, virtual false, abstract: false, final false
  static inline bool select_shuffle_component(::Unity::Mathematics::bool4 a, ::Unity::Mathematics::bool4 b, ::Unity::Mathematics::__math__ShuffleComponent component);

  /// @brief Method select_shuffle_component, addr 0x318a6f4, size 0xdc, virtual false, abstract: false, final false
  static inline double_t select_shuffle_component(::Unity::Mathematics::double2 a, ::Unity::Mathematics::double2 b, ::Unity::Mathematics::__math__ShuffleComponent component);

  /// @brief Method select_shuffle_component, addr 0x318ba04, size 0xec, virtual false, abstract: false, final false
  static inline double_t select_shuffle_component(::Unity::Mathematics::double3 a, ::Unity::Mathematics::double3 b, ::Unity::Mathematics::__math__ShuffleComponent component);

  /// @brief Method select_shuffle_component, addr 0x318d3a8, size 0xfc, virtual false, abstract: false, final false
  static inline double_t select_shuffle_component(::Unity::Mathematics::double4 a, ::Unity::Mathematics::double4 b, ::Unity::Mathematics::__math__ShuffleComponent component);

  /// @brief Method select_shuffle_component, addr 0x318f27c, size 0xdc, virtual false, abstract: false, final false
  static inline float_t select_shuffle_component(::Unity::Mathematics::float2 a, ::Unity::Mathematics::float2 b, ::Unity::Mathematics::__math__ShuffleComponent component);

  /// @brief Method select_shuffle_component, addr 0x3190478, size 0xec, virtual false, abstract: false, final false
  static inline float_t select_shuffle_component(::Unity::Mathematics::float3 a, ::Unity::Mathematics::float3 b, ::Unity::Mathematics::__math__ShuffleComponent component);

  /// @brief Method select_shuffle_component, addr 0x3191c88, size 0xfc, virtual false, abstract: false, final false
  static inline float_t select_shuffle_component(::Unity::Mathematics::float4 a, ::Unity::Mathematics::float4 b, ::Unity::Mathematics::__math__ShuffleComponent component);

  /// @brief Method select_shuffle_component, addr 0x3194fdc, size 0xdc, virtual false, abstract: false, final false
  static inline int32_t select_shuffle_component(::Unity::Mathematics::int2 a, ::Unity::Mathematics::int2 b, ::Unity::Mathematics::__math__ShuffleComponent component);

  /// @brief Method select_shuffle_component, addr 0x31962a8, size 0xec, virtual false, abstract: false, final false
  static inline int32_t select_shuffle_component(::Unity::Mathematics::int3 a, ::Unity::Mathematics::int3 b, ::Unity::Mathematics::__math__ShuffleComponent component);

  /// @brief Method select_shuffle_component, addr 0x3197c58, size 0xfc, virtual false, abstract: false, final false
  static inline int32_t select_shuffle_component(::Unity::Mathematics::int4 a, ::Unity::Mathematics::int4 b, ::Unity::Mathematics::__math__ShuffleComponent component);

  /// @brief Method select_shuffle_component, addr 0x31bbfbc, size 0xdc, virtual false, abstract: false, final false
  static inline uint32_t select_shuffle_component(::Unity::Mathematics::uint2 a, ::Unity::Mathematics::uint2 b, ::Unity::Mathematics::__math__ShuffleComponent component);

  /// @brief Method select_shuffle_component, addr 0x31bd208, size 0xec, virtual false, abstract: false, final false
  static inline uint32_t select_shuffle_component(::Unity::Mathematics::uint3 a, ::Unity::Mathematics::uint3 b, ::Unity::Mathematics::__math__ShuffleComponent component);

  /// @brief Method select_shuffle_component, addr 0x31beb50, size 0xfc, virtual false, abstract: false, final false
  static inline uint32_t select_shuffle_component(::Unity::Mathematics::uint4 a, ::Unity::Mathematics::uint4 b, ::Unity::Mathematics::__math__ShuffleComponent component);

  /// @brief Method shuffle, addr 0x3186ba8, size 0x150, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 shuffle(::Unity::Mathematics::bool2 left, ::Unity::Mathematics::bool2 right, ::Unity::Mathematics::__math__ShuffleComponent x,
                                                    ::Unity::Mathematics::__math__ShuffleComponent y);

  /// @brief Method shuffle, addr 0x31879a0, size 0x16c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 shuffle(::Unity::Mathematics::bool3 left, ::Unity::Mathematics::bool3 right, ::Unity::Mathematics::__math__ShuffleComponent x,
                                                    ::Unity::Mathematics::__math__ShuffleComponent y);

  /// @brief Method shuffle, addr 0x3188c6c, size 0x194, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 shuffle(::Unity::Mathematics::bool4 left, ::Unity::Mathematics::bool4 right, ::Unity::Mathematics::__math__ShuffleComponent x,
                                                    ::Unity::Mathematics::__math__ShuffleComponent y);

  /// @brief Method shuffle, addr 0x3186cf8, size 0x1b0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 shuffle(::Unity::Mathematics::bool2 left, ::Unity::Mathematics::bool2 right, ::Unity::Mathematics::__math__ShuffleComponent x,
                                                    ::Unity::Mathematics::__math__ShuffleComponent y, ::Unity::Mathematics::__math__ShuffleComponent z);

  /// @brief Method shuffle, addr 0x3187b0c, size 0x1d4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 shuffle(::Unity::Mathematics::bool3 left, ::Unity::Mathematics::bool3 right, ::Unity::Mathematics::__math__ShuffleComponent x,
                                                    ::Unity::Mathematics::__math__ShuffleComponent y, ::Unity::Mathematics::__math__ShuffleComponent z);

  /// @brief Method shuffle, addr 0x3188e00, size 0x20c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 shuffle(::Unity::Mathematics::bool4 left, ::Unity::Mathematics::bool4 right, ::Unity::Mathematics::__math__ShuffleComponent x,
                                                    ::Unity::Mathematics::__math__ShuffleComponent y, ::Unity::Mathematics::__math__ShuffleComponent z);

  /// @brief Method shuffle, addr 0x3186ea8, size 0x210, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 shuffle(::Unity::Mathematics::bool2 left, ::Unity::Mathematics::bool2 right, ::Unity::Mathematics::__math__ShuffleComponent x,
                                                    ::Unity::Mathematics::__math__ShuffleComponent y, ::Unity::Mathematics::__math__ShuffleComponent z,
                                                    ::Unity::Mathematics::__math__ShuffleComponent w);

  /// @brief Method shuffle, addr 0x3187ce0, size 0x23c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 shuffle(::Unity::Mathematics::bool3 left, ::Unity::Mathematics::bool3 right, ::Unity::Mathematics::__math__ShuffleComponent x,
                                                    ::Unity::Mathematics::__math__ShuffleComponent y, ::Unity::Mathematics::__math__ShuffleComponent z,
                                                    ::Unity::Mathematics::__math__ShuffleComponent w);

  /// @brief Method shuffle, addr 0x318900c, size 0x284, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4 shuffle(::Unity::Mathematics::bool4 left, ::Unity::Mathematics::bool4 right, ::Unity::Mathematics::__math__ShuffleComponent x,
                                                    ::Unity::Mathematics::__math__ShuffleComponent y, ::Unity::Mathematics::__math__ShuffleComponent z,
                                                    ::Unity::Mathematics::__math__ShuffleComponent w);

  /// @brief Method shuffle, addr 0x318a248, size 0x138, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 shuffle(::Unity::Mathematics::double2 left, ::Unity::Mathematics::double2 right, ::Unity::Mathematics::__math__ShuffleComponent x,
                                                      ::Unity::Mathematics::__math__ShuffleComponent y);

  /// @brief Method shuffle, addr 0x318b4c8, size 0x158, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 shuffle(::Unity::Mathematics::double3 left, ::Unity::Mathematics::double3 right, ::Unity::Mathematics::__math__ShuffleComponent x,
                                                      ::Unity::Mathematics::__math__ShuffleComponent y);

  /// @brief Method shuffle, addr 0x318cddc, size 0x178, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 shuffle(::Unity::Mathematics::double4 left, ::Unity::Mathematics::double4 right, ::Unity::Mathematics::__math__ShuffleComponent x,
                                                      ::Unity::Mathematics::__math__ShuffleComponent y);

  /// @brief Method shuffle, addr 0x318a380, size 0x190, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 shuffle(::Unity::Mathematics::double2 left, ::Unity::Mathematics::double2 right, ::Unity::Mathematics::__math__ShuffleComponent x,
                                                      ::Unity::Mathematics::__math__ShuffleComponent y, ::Unity::Mathematics::__math__ShuffleComponent z);

  /// @brief Method shuffle, addr 0x318b620, size 0x1c0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 shuffle(::Unity::Mathematics::double3 left, ::Unity::Mathematics::double3 right, ::Unity::Mathematics::__math__ShuffleComponent x,
                                                      ::Unity::Mathematics::__math__ShuffleComponent y, ::Unity::Mathematics::__math__ShuffleComponent z);

  /// @brief Method shuffle, addr 0x318cf54, size 0x1f0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 shuffle(::Unity::Mathematics::double4 left, ::Unity::Mathematics::double4 right, ::Unity::Mathematics::__math__ShuffleComponent x,
                                                      ::Unity::Mathematics::__math__ShuffleComponent y, ::Unity::Mathematics::__math__ShuffleComponent z);

  /// @brief Method shuffle, addr 0x318a510, size 0x1e4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 shuffle(::Unity::Mathematics::double2 left, ::Unity::Mathematics::double2 right, ::Unity::Mathematics::__math__ShuffleComponent x,
                                                      ::Unity::Mathematics::__math__ShuffleComponent y, ::Unity::Mathematics::__math__ShuffleComponent z,
                                                      ::Unity::Mathematics::__math__ShuffleComponent w);

  /// @brief Method shuffle, addr 0x318b7e0, size 0x224, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 shuffle(::Unity::Mathematics::double3 left, ::Unity::Mathematics::double3 right, ::Unity::Mathematics::__math__ShuffleComponent x,
                                                      ::Unity::Mathematics::__math__ShuffleComponent y, ::Unity::Mathematics::__math__ShuffleComponent z,
                                                      ::Unity::Mathematics::__math__ShuffleComponent w);

  /// @brief Method shuffle, addr 0x318d144, size 0x264, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 shuffle(::Unity::Mathematics::double4 left, ::Unity::Mathematics::double4 right, ::Unity::Mathematics::__math__ShuffleComponent x,
                                                      ::Unity::Mathematics::__math__ShuffleComponent y, ::Unity::Mathematics::__math__ShuffleComponent z,
                                                      ::Unity::Mathematics::__math__ShuffleComponent w);

  /// @brief Method shuffle, addr 0x318edd0, size 0x138, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 shuffle(::Unity::Mathematics::float2 left, ::Unity::Mathematics::float2 right, ::Unity::Mathematics::__math__ShuffleComponent x,
                                                     ::Unity::Mathematics::__math__ShuffleComponent y);

  /// @brief Method shuffle, addr 0x318ff3c, size 0x158, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 shuffle(::Unity::Mathematics::float3 left, ::Unity::Mathematics::float3 right, ::Unity::Mathematics::__math__ShuffleComponent x,
                                                     ::Unity::Mathematics::__math__ShuffleComponent y);

  /// @brief Method shuffle, addr 0x31916bc, size 0x178, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 shuffle(::Unity::Mathematics::float4 left, ::Unity::Mathematics::float4 right, ::Unity::Mathematics::__math__ShuffleComponent x,
                                                     ::Unity::Mathematics::__math__ShuffleComponent y);

  /// @brief Method shuffle, addr 0x318ef08, size 0x190, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 shuffle(::Unity::Mathematics::float2 left, ::Unity::Mathematics::float2 right, ::Unity::Mathematics::__math__ShuffleComponent x,
                                                     ::Unity::Mathematics::__math__ShuffleComponent y, ::Unity::Mathematics::__math__ShuffleComponent z);

  /// @brief Method shuffle, addr 0x3190094, size 0x1c0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 shuffle(::Unity::Mathematics::float3 left, ::Unity::Mathematics::float3 right, ::Unity::Mathematics::__math__ShuffleComponent x,
                                                     ::Unity::Mathematics::__math__ShuffleComponent y, ::Unity::Mathematics::__math__ShuffleComponent z);

  /// @brief Method shuffle, addr 0x3191834, size 0x1f0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 shuffle(::Unity::Mathematics::float4 left, ::Unity::Mathematics::float4 right, ::Unity::Mathematics::__math__ShuffleComponent x,
                                                     ::Unity::Mathematics::__math__ShuffleComponent y, ::Unity::Mathematics::__math__ShuffleComponent z);

  /// @brief Method shuffle, addr 0x318f098, size 0x1e4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 shuffle(::Unity::Mathematics::float2 left, ::Unity::Mathematics::float2 right, ::Unity::Mathematics::__math__ShuffleComponent x,
                                                     ::Unity::Mathematics::__math__ShuffleComponent y, ::Unity::Mathematics::__math__ShuffleComponent z,
                                                     ::Unity::Mathematics::__math__ShuffleComponent w);

  /// @brief Method shuffle, addr 0x3190254, size 0x224, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 shuffle(::Unity::Mathematics::float3 left, ::Unity::Mathematics::float3 right, ::Unity::Mathematics::__math__ShuffleComponent x,
                                                     ::Unity::Mathematics::__math__ShuffleComponent y, ::Unity::Mathematics::__math__ShuffleComponent z,
                                                     ::Unity::Mathematics::__math__ShuffleComponent w);

  /// @brief Method shuffle, addr 0x3191a24, size 0x264, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 shuffle(::Unity::Mathematics::float4 left, ::Unity::Mathematics::float4 right, ::Unity::Mathematics::__math__ShuffleComponent x,
                                                     ::Unity::Mathematics::__math__ShuffleComponent y, ::Unity::Mathematics::__math__ShuffleComponent z,
                                                     ::Unity::Mathematics::__math__ShuffleComponent w);

  /// @brief Method shuffle, addr 0x3194b20, size 0x140, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 shuffle(::Unity::Mathematics::int2 left, ::Unity::Mathematics::int2 right, ::Unity::Mathematics::__math__ShuffleComponent x,
                                                   ::Unity::Mathematics::__math__ShuffleComponent y);

  /// @brief Method shuffle, addr 0x3195d48, size 0x168, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 shuffle(::Unity::Mathematics::int3 left, ::Unity::Mathematics::int3 right, ::Unity::Mathematics::__math__ShuffleComponent x,
                                                   ::Unity::Mathematics::__math__ShuffleComponent y);

  /// @brief Method shuffle, addr 0x3197664, size 0x188, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 shuffle(::Unity::Mathematics::int4 left, ::Unity::Mathematics::int4 right, ::Unity::Mathematics::__math__ShuffleComponent x,
                                                   ::Unity::Mathematics::__math__ShuffleComponent y);

  /// @brief Method shuffle, addr 0x3194c60, size 0x194, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 shuffle(::Unity::Mathematics::int2 left, ::Unity::Mathematics::int2 right, ::Unity::Mathematics::__math__ShuffleComponent x,
                                                   ::Unity::Mathematics::__math__ShuffleComponent y, ::Unity::Mathematics::__math__ShuffleComponent z);

  /// @brief Method shuffle, addr 0x3195eb0, size 0x1cc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 shuffle(::Unity::Mathematics::int3 left, ::Unity::Mathematics::int3 right, ::Unity::Mathematics::__math__ShuffleComponent x,
                                                   ::Unity::Mathematics::__math__ShuffleComponent y, ::Unity::Mathematics::__math__ShuffleComponent z);

  /// @brief Method shuffle, addr 0x31977ec, size 0x1fc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 shuffle(::Unity::Mathematics::int4 left, ::Unity::Mathematics::int4 right, ::Unity::Mathematics::__math__ShuffleComponent x,
                                                   ::Unity::Mathematics::__math__ShuffleComponent y, ::Unity::Mathematics::__math__ShuffleComponent z);

  /// @brief Method shuffle, addr 0x3194df4, size 0x1e8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 shuffle(::Unity::Mathematics::int2 left, ::Unity::Mathematics::int2 right, ::Unity::Mathematics::__math__ShuffleComponent x,
                                                   ::Unity::Mathematics::__math__ShuffleComponent y, ::Unity::Mathematics::__math__ShuffleComponent z,
                                                   ::Unity::Mathematics::__math__ShuffleComponent w);

  /// @brief Method shuffle, addr 0x319607c, size 0x22c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 shuffle(::Unity::Mathematics::int3 left, ::Unity::Mathematics::int3 right, ::Unity::Mathematics::__math__ShuffleComponent x,
                                                   ::Unity::Mathematics::__math__ShuffleComponent y, ::Unity::Mathematics::__math__ShuffleComponent z,
                                                   ::Unity::Mathematics::__math__ShuffleComponent w);

  /// @brief Method shuffle, addr 0x31979e8, size 0x270, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 shuffle(::Unity::Mathematics::int4 left, ::Unity::Mathematics::int4 right, ::Unity::Mathematics::__math__ShuffleComponent x,
                                                   ::Unity::Mathematics::__math__ShuffleComponent y, ::Unity::Mathematics::__math__ShuffleComponent z,
                                                   ::Unity::Mathematics::__math__ShuffleComponent w);

  /// @brief Method shuffle, addr 0x31bbb00, size 0x140, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 shuffle(::Unity::Mathematics::uint2 left, ::Unity::Mathematics::uint2 right, ::Unity::Mathematics::__math__ShuffleComponent x,
                                                    ::Unity::Mathematics::__math__ShuffleComponent y);

  /// @brief Method shuffle, addr 0x31bcca8, size 0x168, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 shuffle(::Unity::Mathematics::uint3 left, ::Unity::Mathematics::uint3 right, ::Unity::Mathematics::__math__ShuffleComponent x,
                                                    ::Unity::Mathematics::__math__ShuffleComponent y);

  /// @brief Method shuffle, addr 0x31be55c, size 0x188, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 shuffle(::Unity::Mathematics::uint4 left, ::Unity::Mathematics::uint4 right, ::Unity::Mathematics::__math__ShuffleComponent x,
                                                    ::Unity::Mathematics::__math__ShuffleComponent y);

  /// @brief Method shuffle, addr 0x31bbc40, size 0x194, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 shuffle(::Unity::Mathematics::uint2 left, ::Unity::Mathematics::uint2 right, ::Unity::Mathematics::__math__ShuffleComponent x,
                                                    ::Unity::Mathematics::__math__ShuffleComponent y, ::Unity::Mathematics::__math__ShuffleComponent z);

  /// @brief Method shuffle, addr 0x31bce10, size 0x1cc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 shuffle(::Unity::Mathematics::uint3 left, ::Unity::Mathematics::uint3 right, ::Unity::Mathematics::__math__ShuffleComponent x,
                                                    ::Unity::Mathematics::__math__ShuffleComponent y, ::Unity::Mathematics::__math__ShuffleComponent z);

  /// @brief Method shuffle, addr 0x31be6e4, size 0x1fc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 shuffle(::Unity::Mathematics::uint4 left, ::Unity::Mathematics::uint4 right, ::Unity::Mathematics::__math__ShuffleComponent x,
                                                    ::Unity::Mathematics::__math__ShuffleComponent y, ::Unity::Mathematics::__math__ShuffleComponent z);

  /// @brief Method shuffle, addr 0x31bbdd4, size 0x1e8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 shuffle(::Unity::Mathematics::uint2 left, ::Unity::Mathematics::uint2 right, ::Unity::Mathematics::__math__ShuffleComponent x,
                                                    ::Unity::Mathematics::__math__ShuffleComponent y, ::Unity::Mathematics::__math__ShuffleComponent z,
                                                    ::Unity::Mathematics::__math__ShuffleComponent w);

  /// @brief Method shuffle, addr 0x31bcfdc, size 0x22c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 shuffle(::Unity::Mathematics::uint3 left, ::Unity::Mathematics::uint3 right, ::Unity::Mathematics::__math__ShuffleComponent x,
                                                    ::Unity::Mathematics::__math__ShuffleComponent y, ::Unity::Mathematics::__math__ShuffleComponent z,
                                                    ::Unity::Mathematics::__math__ShuffleComponent w);

  /// @brief Method shuffle, addr 0x31be8e0, size 0x270, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 shuffle(::Unity::Mathematics::uint4 left, ::Unity::Mathematics::uint4 right, ::Unity::Mathematics::__math__ShuffleComponent x,
                                                    ::Unity::Mathematics::__math__ShuffleComponent y, ::Unity::Mathematics::__math__ShuffleComponent z,
                                                    ::Unity::Mathematics::__math__ShuffleComponent w);

  /// @brief Method shuffle, addr 0x3186ac4, size 0xe4, virtual false, abstract: false, final false
  static inline bool shuffle(::Unity::Mathematics::bool2 left, ::Unity::Mathematics::bool2 right, ::Unity::Mathematics::__math__ShuffleComponent x);

  /// @brief Method shuffle, addr 0x31878b4, size 0xec, virtual false, abstract: false, final false
  static inline bool shuffle(::Unity::Mathematics::bool3 left, ::Unity::Mathematics::bool3 right, ::Unity::Mathematics::__math__ShuffleComponent x);

  /// @brief Method shuffle, addr 0x3188b70, size 0xfc, virtual false, abstract: false, final false
  static inline bool shuffle(::Unity::Mathematics::bool4 left, ::Unity::Mathematics::bool4 right, ::Unity::Mathematics::__math__ShuffleComponent x);

  /// @brief Method shuffle, addr 0x318a16c, size 0xdc, virtual false, abstract: false, final false
  static inline double_t shuffle(::Unity::Mathematics::double2 left, ::Unity::Mathematics::double2 right, ::Unity::Mathematics::__math__ShuffleComponent x);

  /// @brief Method shuffle, addr 0x318b3dc, size 0xec, virtual false, abstract: false, final false
  static inline double_t shuffle(::Unity::Mathematics::double3 left, ::Unity::Mathematics::double3 right, ::Unity::Mathematics::__math__ShuffleComponent x);

  /// @brief Method shuffle, addr 0x318cce0, size 0xfc, virtual false, abstract: false, final false
  static inline double_t shuffle(::Unity::Mathematics::double4 left, ::Unity::Mathematics::double4 right, ::Unity::Mathematics::__math__ShuffleComponent x);

  /// @brief Method shuffle, addr 0x318ecf4, size 0xdc, virtual false, abstract: false, final false
  static inline float_t shuffle(::Unity::Mathematics::float2 left, ::Unity::Mathematics::float2 right, ::Unity::Mathematics::__math__ShuffleComponent x);

  /// @brief Method shuffle, addr 0x318fe50, size 0xec, virtual false, abstract: false, final false
  static inline float_t shuffle(::Unity::Mathematics::float3 left, ::Unity::Mathematics::float3 right, ::Unity::Mathematics::__math__ShuffleComponent x);

  /// @brief Method shuffle, addr 0x31915c0, size 0xfc, virtual false, abstract: false, final false
  static inline float_t shuffle(::Unity::Mathematics::float4 left, ::Unity::Mathematics::float4 right, ::Unity::Mathematics::__math__ShuffleComponent x);

  /// @brief Method shuffle, addr 0x3194a44, size 0xdc, virtual false, abstract: false, final false
  static inline int32_t shuffle(::Unity::Mathematics::int2 left, ::Unity::Mathematics::int2 right, ::Unity::Mathematics::__math__ShuffleComponent x);

  /// @brief Method shuffle, addr 0x3195c5c, size 0xec, virtual false, abstract: false, final false
  static inline int32_t shuffle(::Unity::Mathematics::int3 left, ::Unity::Mathematics::int3 right, ::Unity::Mathematics::__math__ShuffleComponent x);

  /// @brief Method shuffle, addr 0x3197568, size 0xfc, virtual false, abstract: false, final false
  static inline int32_t shuffle(::Unity::Mathematics::int4 left, ::Unity::Mathematics::int4 right, ::Unity::Mathematics::__math__ShuffleComponent x);

  /// @brief Method shuffle, addr 0x31bba24, size 0xdc, virtual false, abstract: false, final false
  static inline uint32_t shuffle(::Unity::Mathematics::uint2 left, ::Unity::Mathematics::uint2 right, ::Unity::Mathematics::__math__ShuffleComponent x);

  /// @brief Method shuffle, addr 0x31bcbbc, size 0xec, virtual false, abstract: false, final false
  static inline uint32_t shuffle(::Unity::Mathematics::uint3 left, ::Unity::Mathematics::uint3 right, ::Unity::Mathematics::__math__ShuffleComponent x);

  /// @brief Method shuffle, addr 0x31be460, size 0xfc, virtual false, abstract: false, final false
  static inline uint32_t shuffle(::Unity::Mathematics::uint4 left, ::Unity::Mathematics::uint4 right, ::Unity::Mathematics::__math__ShuffleComponent x);

  /// @brief Method sign, addr 0x31a4930, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 sign(::Unity::Mathematics::double2 x);

  /// @brief Method sign, addr 0x31a4974, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 sign(::Unity::Mathematics::double3 x);

  /// @brief Method sign, addr 0x31a49d8, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 sign(::Unity::Mathematics::double4 x);

  /// @brief Method sign, addr 0x31a4854, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 sign(::Unity::Mathematics::float2 x);

  /// @brief Method sign, addr 0x31a4880, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 sign(::Unity::Mathematics::float3 x);

  /// @brief Method sign, addr 0x31a48bc, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 sign(::Unity::Mathematics::float4 x);

  /// @brief Method sign, addr 0x31a4908, size 0x28, virtual false, abstract: false, final false
  static inline double_t sign(double_t x);

  /// @brief Method sign, addr 0x31a4838, size 0x1c, virtual false, abstract: false, final false
  static inline float_t sign(float_t x);

  /// @brief Method sin, addr 0x31a0f2c, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 sin(::Unity::Mathematics::double2 x);

  /// @brief Method sin, addr 0x31a0fe0, size 0x10c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 sin(::Unity::Mathematics::double3 x);

  /// @brief Method sin, addr 0x31a10ec, size 0x15c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 sin(::Unity::Mathematics::double4 x);

  /// @brief Method sin, addr 0x31a0bb4, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 sin(::Unity::Mathematics::float2 x);

  /// @brief Method sin, addr 0x31a0c68, size 0x10c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 sin(::Unity::Mathematics::float3 x);

  /// @brief Method sin, addr 0x31a0d74, size 0x15c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 sin(::Unity::Mathematics::float4 x);

  /// @brief Method sin, addr 0x31a0ed0, size 0x5c, virtual false, abstract: false, final false
  static inline double_t sin(double_t x);

  /// @brief Method sin, addr 0x31a0b50, size 0x64, virtual false, abstract: false, final false
  static inline float_t sin(float_t x);

  /// @brief Method sincos, addr 0x31ad2d4, size 0x14c, virtual false, abstract: false, final false
  static inline void sincos(::Unity::Mathematics::double2 x, ByRef<::Unity::Mathematics::double2> s, ByRef<::Unity::Mathematics::double2> c);

  /// @brief Method sincos, addr 0x31ad420, size 0x1f0, virtual false, abstract: false, final false
  static inline void sincos(::Unity::Mathematics::double3 x, ByRef<::Unity::Mathematics::double3> s, ByRef<::Unity::Mathematics::double3> c);

  /// @brief Method sincos, addr 0x31ad610, size 0x28c, virtual false, abstract: false, final false
  static inline void sincos(::Unity::Mathematics::double4 x, ByRef<::Unity::Mathematics::double4> s, ByRef<::Unity::Mathematics::double4> c);

  /// @brief Method sincos, addr 0x31acc28, size 0x15c, virtual false, abstract: false, final false
  static inline void sincos(::Unity::Mathematics::float2 x, ByRef<::Unity::Mathematics::float2> s, ByRef<::Unity::Mathematics::float2> c);

  /// @brief Method sincos, addr 0x31acd84, size 0x204, virtual false, abstract: false, final false
  static inline void sincos(::Unity::Mathematics::float3 x, ByRef<::Unity::Mathematics::float3> s, ByRef<::Unity::Mathematics::float3> c);

  /// @brief Method sincos, addr 0x31acf88, size 0x2a4, virtual false, abstract: false, final false
  static inline void sincos(::Unity::Mathematics::float4 x, ByRef<::Unity::Mathematics::float4> s, ByRef<::Unity::Mathematics::float4> c);

  /// @brief Method sincos, addr 0x31ad22c, size 0xa8, virtual false, abstract: false, final false
  static inline void sincos(double_t x, ByRef<double_t> s, ByRef<double_t> c);

  /// @brief Method sincos, addr 0x31acb74, size 0xb4, virtual false, abstract: false, final false
  static inline void sincos(float_t x, ByRef<float_t> s, ByRef<float_t> c);

  /// @brief Method sinh, addr 0x31a1644, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 sinh(::Unity::Mathematics::double2 x);

  /// @brief Method sinh, addr 0x31a16f8, size 0x10c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 sinh(::Unity::Mathematics::double3 x);

  /// @brief Method sinh, addr 0x31a1804, size 0x15c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 sinh(::Unity::Mathematics::double4 x);

  /// @brief Method sinh, addr 0x31a12ac, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 sinh(::Unity::Mathematics::float2 x);

  /// @brief Method sinh, addr 0x31a1364, size 0x114, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 sinh(::Unity::Mathematics::float3 x);

  /// @brief Method sinh, addr 0x31a1478, size 0x170, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 sinh(::Unity::Mathematics::float4 x);

  /// @brief Method sinh, addr 0x31a15e8, size 0x5c, virtual false, abstract: false, final false
  static inline double_t sinh(double_t x);

  /// @brief Method sinh, addr 0x31a1248, size 0x64, virtual false, abstract: false, final false
  static inline float_t sinh(float_t x);

  /// @brief Method slerp, addr 0x31baeac, size 0x2dc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion slerp(::Unity::Mathematics::quaternion q1, ::Unity::Mathematics::quaternion q2, float_t t);

  /// @brief Method smoothstep, addr 0x31aada0, size 0x1f0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 smoothstep(::Unity::Mathematics::double2 a, ::Unity::Mathematics::double2 b, ::Unity::Mathematics::double2 x);

  /// @brief Method smoothstep, addr 0x31aaf90, size 0x2d4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 smoothstep(::Unity::Mathematics::double3 a, ::Unity::Mathematics::double3 b, ::Unity::Mathematics::double3 x);

  /// @brief Method smoothstep, addr 0x31ab264, size 0x3cc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 smoothstep(::Unity::Mathematics::double4 a, ::Unity::Mathematics::double4 b, ::Unity::Mathematics::double4 x);

  /// @brief Method smoothstep, addr 0x31aa3dc, size 0x1f0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 smoothstep(::Unity::Mathematics::float2 a, ::Unity::Mathematics::float2 b, ::Unity::Mathematics::float2 x);

  /// @brief Method smoothstep, addr 0x31aa5cc, size 0x2f8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 smoothstep(::Unity::Mathematics::float3 a, ::Unity::Mathematics::float3 b, ::Unity::Mathematics::float3 x);

  /// @brief Method smoothstep, addr 0x31aa8c4, size 0x3e8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 smoothstep(::Unity::Mathematics::float4 a, ::Unity::Mathematics::float4 b, ::Unity::Mathematics::float4 x);

  /// @brief Method smoothstep, addr 0x31aacac, size 0xf4, virtual false, abstract: false, final false
  static inline double_t smoothstep(double_t a, double_t b, double_t x);

  /// @brief Method smoothstep, addr 0x31aa2e8, size 0xf4, virtual false, abstract: false, final false
  static inline float_t smoothstep(float_t a, float_t b, float_t x);

  /// @brief Method sqrt, addr 0x31a8af4, size 0x9c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 sqrt(::Unity::Mathematics::double2 x);

  /// @brief Method sqrt, addr 0x31a8b90, size 0xe4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 sqrt(::Unity::Mathematics::double3 x);

  /// @brief Method sqrt, addr 0x31a8c74, size 0x124, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 sqrt(::Unity::Mathematics::double4 x);

  /// @brief Method sqrt, addr 0x31a87f4, size 0x9c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 sqrt(::Unity::Mathematics::float2 x);

  /// @brief Method sqrt, addr 0x31a8890, size 0xe4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 sqrt(::Unity::Mathematics::float3 x);

  /// @brief Method sqrt, addr 0x31a8974, size 0x124, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 sqrt(::Unity::Mathematics::float4 x);

  /// @brief Method sqrt, addr 0x31a8a98, size 0x5c, virtual false, abstract: false, final false
  static inline double_t sqrt(double_t x);

  /// @brief Method sqrt, addr 0x31a8798, size 0x5c, virtual false, abstract: false, final false
  static inline float_t sqrt(float_t x);

  /// @brief Method step, addr 0x31abd90, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 step(::Unity::Mathematics::double2 y, ::Unity::Mathematics::double2 x);

  /// @brief Method step, addr 0x31abdac, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 step(::Unity::Mathematics::double3 y, ::Unity::Mathematics::double3 x);

  /// @brief Method step, addr 0x31abde8, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 step(::Unity::Mathematics::double4 y, ::Unity::Mathematics::double4 x);

  /// @brief Method step, addr 0x31abcf8, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 step(::Unity::Mathematics::float2 y, ::Unity::Mathematics::float2 x);

  /// @brief Method step, addr 0x31abd14, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 step(::Unity::Mathematics::float3 y, ::Unity::Mathematics::float3 x);

  /// @brief Method step, addr 0x31abd50, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 step(::Unity::Mathematics::float4 y, ::Unity::Mathematics::float4 x);

  /// @brief Method step, addr 0x31abd7c, size 0x14, virtual false, abstract: false, final false
  static inline double_t step(double_t y, double_t x);

  /// @brief Method step, addr 0x31abce4, size 0x14, virtual false, abstract: false, final false
  static inline float_t step(float_t y, float_t x);

  /// @brief Method tan, addr 0x319dcd4, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 tan(::Unity::Mathematics::double2 x);

  /// @brief Method tan, addr 0x319dd88, size 0x10c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 tan(::Unity::Mathematics::double3 x);

  /// @brief Method tan, addr 0x319de94, size 0x15c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 tan(::Unity::Mathematics::double4 x);

  /// @brief Method tan, addr 0x319d93c, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 tan(::Unity::Mathematics::float2 x);

  /// @brief Method tan, addr 0x319d9f4, size 0x114, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 tan(::Unity::Mathematics::float3 x);

  /// @brief Method tan, addr 0x319db08, size 0x170, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 tan(::Unity::Mathematics::float4 x);

  /// @brief Method tan, addr 0x319dc78, size 0x5c, virtual false, abstract: false, final false
  static inline double_t tan(double_t x);

  /// @brief Method tan, addr 0x319d8d8, size 0x64, virtual false, abstract: false, final false
  static inline float_t tan(float_t x);

  /// @brief Method tanh, addr 0x319e3ec, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 tanh(::Unity::Mathematics::double2 x);

  /// @brief Method tanh, addr 0x319e4a0, size 0x10c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 tanh(::Unity::Mathematics::double3 x);

  /// @brief Method tanh, addr 0x319e5ac, size 0x15c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 tanh(::Unity::Mathematics::double4 x);

  /// @brief Method tanh, addr 0x319e054, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 tanh(::Unity::Mathematics::float2 x);

  /// @brief Method tanh, addr 0x319e10c, size 0x114, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 tanh(::Unity::Mathematics::float3 x);

  /// @brief Method tanh, addr 0x319e220, size 0x170, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 tanh(::Unity::Mathematics::float4 x);

  /// @brief Method tanh, addr 0x319e390, size 0x5c, virtual false, abstract: false, final false
  static inline double_t tanh(double_t x);

  /// @brief Method tanh, addr 0x319dff0, size 0x64, virtual false, abstract: false, final false
  static inline float_t tanh(float_t x);

  /// @brief Method transform, addr 0x318e1a4, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 transform(::Unity::Mathematics::double4x4 a, ::Unity::Mathematics::double3 b);

  /// @brief Method transform, addr 0x31bb6e4, size 0x98, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 transform(::Unity::Mathematics::RigidTransform a, ::Unity::Mathematics::float3 pos);

  /// @brief Method transform, addr 0x31928e4, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 transform(::Unity::Mathematics::float4x4 a, ::Unity::Mathematics::float3 b);

  /// @brief Method transpose, addr 0x31871dc, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 transpose(::Unity::Mathematics::bool2x2 v);

  /// @brief Method transpose, addr 0x3188060, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 transpose(::Unity::Mathematics::bool3x2 v);

  /// @brief Method transpose, addr 0x31893e8, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 transpose(::Unity::Mathematics::bool4x2 v);

  /// @brief Method transpose, addr 0x318734c, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 transpose(::Unity::Mathematics::bool2x3 v);

  /// @brief Method transpose, addr 0x31882b0, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 transpose(::Unity::Mathematics::bool3x3 v);

  /// @brief Method transpose, addr 0x318969c, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 transpose(::Unity::Mathematics::bool4x3 v);

  /// @brief Method transpose, addr 0x3187570, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 transpose(::Unity::Mathematics::bool2x4 v);

  /// @brief Method transpose, addr 0x3188630, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 transpose(::Unity::Mathematics::bool3x4 v);

  /// @brief Method transpose, addr 0x3189ac4, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x4 transpose(::Unity::Mathematics::bool4x4 v);

  /// @brief Method transpose, addr 0x318a8c8, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 transpose(::Unity::Mathematics::double2x2 v);

  /// @brief Method transpose, addr 0x318bc50, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x3 transpose(::Unity::Mathematics::double3x2 v);

  /// @brief Method transpose, addr 0x318d658, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x4 transpose(::Unity::Mathematics::double4x2 v);

  /// @brief Method transpose, addr 0x318ab8c, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x2 transpose(::Unity::Mathematics::double2x3 v);

  /// @brief Method transpose, addr 0x318bff0, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 transpose(::Unity::Mathematics::double3x3 v);

  /// @brief Method transpose, addr 0x318dae8, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 transpose(::Unity::Mathematics::double4x3 v);

  /// @brief Method transpose, addr 0x318aedc, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 transpose(::Unity::Mathematics::double2x4 v);

  /// @brief Method transpose, addr 0x318c5e8, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 transpose(::Unity::Mathematics::double3x4 v);

  /// @brief Method transpose, addr 0x318e210, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x4 transpose(::Unity::Mathematics::double4x4 v);

  /// @brief Method transpose, addr 0x318f464, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 transpose(::Unity::Mathematics::float2x2 v);

  /// @brief Method transpose, addr 0x31906e4, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x3 transpose(::Unity::Mathematics::float3x2 v);

  /// @brief Method transpose, addr 0x3191f30, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x4 transpose(::Unity::Mathematics::float4x2 v);

  /// @brief Method transpose, addr 0x318f708, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x2 transpose(::Unity::Mathematics::float2x3 v);

  /// @brief Method transpose, addr 0x3190a34, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 transpose(::Unity::Mathematics::float3x3 v);

  /// @brief Method transpose, addr 0x3192334, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 transpose(::Unity::Mathematics::float4x3 v);

  /// @brief Method transpose, addr 0x318f9f8, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x2 transpose(::Unity::Mathematics::float2x4 v);

  /// @brief Method transpose, addr 0x3190fac, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x3 transpose(::Unity::Mathematics::float3x4 v);

  /// @brief Method transpose, addr 0x319293c, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 transpose(::Unity::Mathematics::float4x4 v);

  /// @brief Method transpose, addr 0x319521c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x2 transpose(::Unity::Mathematics::int2x2 v);

  /// @brief Method transpose, addr 0x31965d8, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x3 transpose(::Unity::Mathematics::int3x2 v);

  /// @brief Method transpose, addr 0x3197fa8, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x4 transpose(::Unity::Mathematics::int4x2 v);

  /// @brief Method transpose, addr 0x319551c, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 transpose(::Unity::Mathematics::int2x3 v);

  /// @brief Method transpose, addr 0x3196a5c, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x3 transpose(::Unity::Mathematics::int3x3 v);

  /// @brief Method transpose, addr 0x31984dc, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 transpose(::Unity::Mathematics::int4x3 v);

  /// @brief Method transpose, addr 0x31958f4, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 transpose(::Unity::Mathematics::int2x4 v);

  /// @brief Method transpose, addr 0x3197078, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 transpose(::Unity::Mathematics::int3x4 v);

  /// @brief Method transpose, addr 0x3198bcc, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x4 transpose(::Unity::Mathematics::int4x4 v);

  /// @brief Method transpose, addr 0x31bc1dc, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 transpose(::Unity::Mathematics::uint2x2 v);

  /// @brief Method transpose, addr 0x31bd528, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x3 transpose(::Unity::Mathematics::uint3x2 v);

  /// @brief Method transpose, addr 0x31bee90, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x4 transpose(::Unity::Mathematics::uint4x2 v);

  /// @brief Method transpose, addr 0x31bc4ac, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 transpose(::Unity::Mathematics::uint2x3 v);

  /// @brief Method transpose, addr 0x31bd9ac, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x3 transpose(::Unity::Mathematics::uint3x3 v);

  /// @brief Method transpose, addr 0x31bf3c4, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 transpose(::Unity::Mathematics::uint4x3 v);

  /// @brief Method transpose, addr 0x31bc874, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x2 transpose(::Unity::Mathematics::uint2x4 v);

  /// @brief Method transpose, addr 0x31bdf90, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 transpose(::Unity::Mathematics::uint3x4 v);

  /// @brief Method transpose, addr 0x31bfac4, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x4 transpose(::Unity::Mathematics::uint4x4 v);

  /// @brief Method trunc, addr 0x31a3e78, size 0xac, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 trunc(::Unity::Mathematics::double2 x);

  /// @brief Method trunc, addr 0x31a3f24, size 0xf8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 trunc(::Unity::Mathematics::double3 x);

  /// @brief Method trunc, addr 0x31a401c, size 0x13c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 trunc(::Unity::Mathematics::double4 x);

  /// @brief Method trunc, addr 0x31a3b18, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 trunc(::Unity::Mathematics::float2 x);

  /// @brief Method trunc, addr 0x31a3bc8, size 0x100, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 trunc(::Unity::Mathematics::float3 x);

  /// @brief Method trunc, addr 0x31a3cc8, size 0x150, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 trunc(::Unity::Mathematics::float4 x);

  /// @brief Method trunc, addr 0x31a3e18, size 0x60, virtual false, abstract: false, final false
  static inline double_t trunc(double_t x);

  /// @brief Method trunc, addr 0x31a3ab0, size 0x68, virtual false, abstract: false, final false
  static inline float_t trunc(float_t x);

  /// @brief Method tzcnt, addr 0x31ae37c, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 tzcnt(::Unity::Mathematics::int2 x);

  /// @brief Method tzcnt, addr 0x31ae5fc, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 tzcnt(::Unity::Mathematics::uint2 x);

  /// @brief Method tzcnt, addr 0x31ae400, size 0xc0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 tzcnt(::Unity::Mathematics::int3 x);

  /// @brief Method tzcnt, addr 0x31ae680, size 0xc0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 tzcnt(::Unity::Mathematics::uint3 x);

  /// @brief Method tzcnt, addr 0x31ae4c0, size 0x100, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 tzcnt(::Unity::Mathematics::int4 x);

  /// @brief Method tzcnt, addr 0x31ae740, size 0x100, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4 tzcnt(::Unity::Mathematics::uint4 x);

  /// @brief Method tzcnt, addr 0x31ae340, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t tzcnt(int32_t x);

  /// @brief Method tzcnt, addr 0x31ae840, size 0x54, virtual false, abstract: false, final false
  static inline int32_t tzcnt(int64_t x);

  /// @brief Method tzcnt, addr 0x31ae5c0, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t tzcnt(uint32_t x);

  /// @brief Method tzcnt, addr 0x31ae894, size 0x54, virtual false, abstract: false, final false
  static inline int32_t tzcnt(uint64_t x);

  /// @brief Method uint2, addr 0x31bb91c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 uint2(::Unity::Mathematics::bool2 v);

  /// @brief Method uint2, addr 0x31bb994, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 uint2(::Unity::Mathematics::double2 v);

  /// @brief Method uint2, addr 0x31bb954, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 uint2(::Unity::Mathematics::float2 v);

  /// @brief Method uint2, addr 0x31bb938, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 uint2(::Unity::Mathematics::int2 v);

  /// @brief Method uint2, addr 0x31bb910, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 uint2(bool v);

  /// @brief Method uint2, addr 0x31bb97c, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 uint2(double_t v);

  /// @brief Method uint2, addr 0x31bb93c, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 uint2(float_t v);

  /// @brief Method uint2, addr 0x31bb92c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 uint2(int32_t v);

  /// @brief Method uint2, addr 0x31bb904, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 uint2(uint32_t v);

  /// @brief Method uint2, addr 0x31bb8f4, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 uint2(uint32_t x, uint32_t y);

  /// @brief Method uint2, addr 0x31bb900, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 uint2(::Unity::Mathematics::uint2 xy);

  /// @brief Method uint2x2, addr 0x31bc098, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 uint2x2(::Unity::Mathematics::uint2 c0, ::Unity::Mathematics::uint2 c1);

  /// @brief Method uint2x2, addr 0x31bc09c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 uint2x2(uint32_t m00, uint32_t m01, uint32_t m10, uint32_t m11);

  /// @brief Method uint2x2, addr 0x31bc0d4, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 uint2x2(::Unity::Mathematics::bool2x2 v);

  /// @brief Method uint2x2, addr 0x31bc190, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 uint2x2(::Unity::Mathematics::double2x2 v);

  /// @brief Method uint2x2, addr 0x31bc128, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 uint2x2(::Unity::Mathematics::float2x2 v);

  /// @brief Method uint2x2, addr 0x31bc108, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 uint2x2(::Unity::Mathematics::int2x2 v);

  /// @brief Method uint2x2, addr 0x31bc0c0, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 uint2x2(bool v);

  /// @brief Method uint2x2, addr 0x31bc174, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 uint2x2(double_t v);

  /// @brief Method uint2x2, addr 0x31bc10c, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 uint2x2(float_t v);

  /// @brief Method uint2x2, addr 0x31bc0f8, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 uint2x2(int32_t v);

  /// @brief Method uint2x2, addr 0x31bc0b0, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 uint2x2(uint32_t v);

  /// @brief Method uint2x3, addr 0x31bc2b4, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x3 uint2x3(::Unity::Mathematics::uint2 c0, ::Unity::Mathematics::uint2 c1, ::Unity::Mathematics::uint2 c2);

  /// @brief Method uint2x3, addr 0x31bc2c0, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x3 uint2x3(uint32_t m00, uint32_t m01, uint32_t m02, uint32_t m10, uint32_t m11, uint32_t m12);

  /// @brief Method uint2x3, addr 0x31bc310, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x3 uint2x3(::Unity::Mathematics::bool2x3 v);

  /// @brief Method uint2x3, addr 0x31bc428, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x3 uint2x3(::Unity::Mathematics::double2x3 v);

  /// @brief Method uint2x3, addr 0x31bc384, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x3 uint2x3(::Unity::Mathematics::float2x3 v);

  /// @brief Method uint2x3, addr 0x31bc350, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x3 uint2x3(::Unity::Mathematics::int2x3 v);

  /// @brief Method uint2x3, addr 0x31bc2f8, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x3 uint2x3(bool v);

  /// @brief Method uint2x3, addr 0x31bc408, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x3 uint2x3(double_t v);

  /// @brief Method uint2x3, addr 0x31bc364, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x3 uint2x3(float_t v);

  /// @brief Method uint2x3, addr 0x31bc33c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x3 uint2x3(int32_t v);

  /// @brief Method uint2x3, addr 0x31bc2e4, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x3 uint2x3(uint32_t v);

  /// @brief Method uint2x4, addr 0x31bc5f4, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x4 uint2x4(::Unity::Mathematics::uint2 c0, ::Unity::Mathematics::uint2 c1, ::Unity::Mathematics::uint2 c2, ::Unity::Mathematics::uint2 c3);

  /// @brief Method uint2x4, addr 0x31bc600, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x4 uint2x4(uint32_t m00, uint32_t m01, uint32_t m02, uint32_t m03, uint32_t m10, uint32_t m11, uint32_t m12, uint32_t m13);

  /// @brief Method uint2x4, addr 0x31bc658, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x4 uint2x4(::Unity::Mathematics::bool2x4 v);

  /// @brief Method uint2x4, addr 0x31bc7c8, size 0xac, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x4 uint2x4(::Unity::Mathematics::double2x4 v);

  /// @brief Method uint2x4, addr 0x31bc6fc, size 0xac, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x4 uint2x4(::Unity::Mathematics::float2x4 v);

  /// @brief Method uint2x4, addr 0x31bc6d0, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x4 uint2x4(::Unity::Mathematics::int2x4 v);

  /// @brief Method uint2x4, addr 0x31bc640, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x4 uint2x4(bool v);

  /// @brief Method uint2x4, addr 0x31bc7a8, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x4 uint2x4(double_t v);

  /// @brief Method uint2x4, addr 0x31bc6dc, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x4 uint2x4(float_t v);

  /// @brief Method uint2x4, addr 0x31bc6bc, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x4 uint2x4(int32_t v);

  /// @brief Method uint2x4, addr 0x31bc62c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x4 uint2x4(uint32_t v);

  /// @brief Method uint3, addr 0x31bca60, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 uint3(::Unity::Mathematics::bool3 v);

  /// @brief Method uint3, addr 0x31bcb00, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 uint3(::Unity::Mathematics::double3 v);

  /// @brief Method uint3, addr 0x31bcaac, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 uint3(::Unity::Mathematics::float3 v);

  /// @brief Method uint3, addr 0x31bca88, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 uint3(::Unity::Mathematics::int3 v);

  /// @brief Method uint3, addr 0x31bca50, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 uint3(bool v);

  /// @brief Method uint3, addr 0x31bcae4, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 uint3(double_t v);

  /// @brief Method uint3, addr 0x31bca90, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 uint3(float_t v);

  /// @brief Method uint3, addr 0x31bca78, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 uint3(int32_t v);

  /// @brief Method uint3, addr 0x31bca40, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 uint3(uint32_t v);

  /// @brief Method uint3, addr 0x31bca0c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 uint3(uint32_t x, uint32_t y, uint32_t z);

  /// @brief Method uint3, addr 0x31bca1c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 uint3(uint32_t x, ::Unity::Mathematics::uint2 yz);

  /// @brief Method uint3, addr 0x31bca30, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 uint3(::Unity::Mathematics::uint2 xy, uint32_t z);

  /// @brief Method uint3, addr 0x31bca38, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 uint3(::Unity::Mathematics::uint3 xyz);

  /// @brief Method uint3x2, addr 0x31bd2f4, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 uint3x2(::Unity::Mathematics::uint3 c0, ::Unity::Mathematics::uint3 c1);

  /// @brief Method uint3x2, addr 0x31bd308, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 uint3x2(uint32_t m00, uint32_t m01, uint32_t m10, uint32_t m11, uint32_t m20, uint32_t m21);

  /// @brief Method uint3x2, addr 0x31bd358, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 uint3x2(::Unity::Mathematics::bool3x2 v);

  /// @brief Method uint3x2, addr 0x31bd4a0, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 uint3x2(::Unity::Mathematics::double3x2 v);

  /// @brief Method uint3x2, addr 0x31bd3f0, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 uint3x2(::Unity::Mathematics::float3x2 v);

  /// @brief Method uint3x2, addr 0x31bd3a4, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 uint3x2(::Unity::Mathematics::int3x2 v);

  /// @brief Method uint3x2, addr 0x31bd334, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 uint3x2(bool v);

  /// @brief Method uint3x2, addr 0x31bd478, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 uint3x2(double_t v);

  /// @brief Method uint3x2, addr 0x31bd3c8, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 uint3x2(float_t v);

  /// @brief Method uint3x2, addr 0x31bd388, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 uint3x2(int32_t v);

  /// @brief Method uint3x2, addr 0x31bd318, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 uint3x2(uint32_t v);

  /// @brief Method uint3x3, addr 0x31bd670, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x3 uint3x3(::Unity::Mathematics::uint3 c0, ::Unity::Mathematics::uint3 c1, ::Unity::Mathematics::uint3 c2);

  /// @brief Method uint3x3, addr 0x31bd68c, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x3 uint3x3(uint32_t m00, uint32_t m01, uint32_t m02, uint32_t m10, uint32_t m11, uint32_t m12, uint32_t m20, uint32_t m21, uint32_t m22);

  /// @brief Method uint3x3, addr 0x31bd6f8, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x3 uint3x3(::Unity::Mathematics::bool3x3 v);

  /// @brief Method uint3x3, addr 0x31bd8e0, size 0xcc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x3 uint3x3(::Unity::Mathematics::double3x3 v);

  /// @brief Method uint3x3, addr 0x31bd7e4, size 0xcc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x3 uint3x3(::Unity::Mathematics::float3x3 v);

  /// @brief Method uint3x3, addr 0x31bd780, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x3 uint3x3(::Unity::Mathematics::int3x3 v);

  /// @brief Method uint3x3, addr 0x31bd6cc, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x3 uint3x3(bool v);

  /// @brief Method uint3x3, addr 0x31bd8b0, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x3 uint3x3(double_t v);

  /// @brief Method uint3x3, addr 0x31bd7b4, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x3 uint3x3(float_t v);

  /// @brief Method uint3x3, addr 0x31bd75c, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x3 uint3x3(int32_t v);

  /// @brief Method uint3x3, addr 0x31bd6a8, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x3 uint3x3(uint32_t v);

  /// @brief Method uint3x4, addr 0x31bdb68, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 uint3x4(::Unity::Mathematics::uint3 c0, ::Unity::Mathematics::uint3 c1, ::Unity::Mathematics::uint3 c2, ::Unity::Mathematics::uint3 c3);

  /// @brief Method uint3x4, addr 0x31bdb8c, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 uint3x4(uint32_t m00, uint32_t m01, uint32_t m02, uint32_t m03, uint32_t m10, uint32_t m11, uint32_t m12, uint32_t m13, uint32_t m20, uint32_t m21,
                                                      uint32_t m22, uint32_t m23);

  /// @brief Method uint3x4, addr 0x31bdc18, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 uint3x4(::Unity::Mathematics::bool3x4 v);

  /// @brief Method uint3x4, addr 0x31bde84, size 0x10c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 uint3x4(::Unity::Mathematics::double3x4 v);

  /// @brief Method uint3x4, addr 0x31bdd40, size 0x10c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 uint3x4(::Unity::Mathematics::float3x4 v);

  /// @brief Method uint3x4, addr 0x31bdcc4, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 uint3x4(::Unity::Mathematics::int3x4 v);

  /// @brief Method uint3x4, addr 0x31bdbe4, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 uint3x4(bool v);

  /// @brief Method uint3x4, addr 0x31bde4c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 uint3x4(double_t v);

  /// @brief Method uint3x4, addr 0x31bdd08, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 uint3x4(float_t v);

  /// @brief Method uint3x4, addr 0x31bdc98, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 uint3x4(int32_t v);

  /// @brief Method uint3x4, addr 0x31bdbb8, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 uint3x4(uint32_t v);

  /// @brief Method uint4, addr 0x31be264, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 uint4(::Unity::Mathematics::bool4 v);

  /// @brief Method uint4, addr 0x31be31c, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 uint4(::Unity::Mathematics::double4 v);

  /// @brief Method uint4, addr 0x31be2b4, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 uint4(::Unity::Mathematics::float4 v);

  /// @brief Method uint4, addr 0x31be294, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 uint4(::Unity::Mathematics::int4 v);

  /// @brief Method uint4, addr 0x31be254, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 uint4(bool v);

  /// @brief Method uint4, addr 0x31be300, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 uint4(double_t v);

  /// @brief Method uint4, addr 0x31be298, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 uint4(float_t v);

  /// @brief Method uint4, addr 0x31be284, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 uint4(int32_t v);

  /// @brief Method uint4, addr 0x31be244, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 uint4(uint32_t v);

  /// @brief Method uint4, addr 0x31be1d8, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 uint4(uint32_t x, uint32_t y, uint32_t z, uint32_t w);

  /// @brief Method uint4, addr 0x31be1f0, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 uint4(uint32_t x, uint32_t y, ::Unity::Mathematics::uint2 zw);

  /// @brief Method uint4, addr 0x31be200, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 uint4(uint32_t x, ::Unity::Mathematics::uint2 yz, uint32_t w);

  /// @brief Method uint4, addr 0x31be214, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 uint4(uint32_t x, ::Unity::Mathematics::uint3 yzw);

  /// @brief Method uint4, addr 0x31be228, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 uint4(::Unity::Mathematics::uint2 xy, uint32_t z, uint32_t w);

  /// @brief Method uint4, addr 0x31be234, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 uint4(::Unity::Mathematics::uint2 xy, ::Unity::Mathematics::uint2 zw);

  /// @brief Method uint4, addr 0x31be238, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 uint4(::Unity::Mathematics::uint3 xyz, uint32_t w);

  /// @brief Method uint4, addr 0x31be240, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4 uint4(::Unity::Mathematics::uint4 xyzw);

  /// @brief Method uint4x2, addr 0x31bec4c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x2 uint4x2(::Unity::Mathematics::uint4 c0, ::Unity::Mathematics::uint4 c1);

  /// @brief Method uint4x2, addr 0x31bec58, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x2 uint4x2(uint32_t m00, uint32_t m01, uint32_t m10, uint32_t m11, uint32_t m20, uint32_t m21, uint32_t m30, uint32_t m31);

  /// @brief Method uint4x2, addr 0x31bec98, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x2 uint4x2(::Unity::Mathematics::bool4x2 v);

  /// @brief Method uint4x2, addr 0x31bede4, size 0xac, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x2 uint4x2(::Unity::Mathematics::double4x2 v);

  /// @brief Method uint4x2, addr 0x31bed18, size 0xac, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x2 uint4x2(::Unity::Mathematics::float4x2 v);

  /// @brief Method uint4x2, addr 0x31becec, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x2 uint4x2(::Unity::Mathematics::int4x2 v);

  /// @brief Method uint4x2, addr 0x31bec80, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x2 uint4x2(bool v);

  /// @brief Method uint4x2, addr 0x31bedc4, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x2 uint4x2(double_t v);

  /// @brief Method uint4x2, addr 0x31becf8, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x2 uint4x2(float_t v);

  /// @brief Method uint4x2, addr 0x31becd8, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x2 uint4x2(int32_t v);

  /// @brief Method uint4x2, addr 0x31bec6c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x2 uint4x2(uint32_t v);

  /// @brief Method uint4x3, addr 0x31bf080, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 uint4x3(::Unity::Mathematics::uint4 c0, ::Unity::Mathematics::uint4 c1, ::Unity::Mathematics::uint4 c2);

  /// @brief Method uint4x3, addr 0x31bf090, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 uint4x3(uint32_t m00, uint32_t m01, uint32_t m02, uint32_t m10, uint32_t m11, uint32_t m12, uint32_t m20, uint32_t m21, uint32_t m22, uint32_t m30,
                                                      uint32_t m31, uint32_t m32);

  /// @brief Method uint4x3, addr 0x31bf0f0, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 uint4x3(::Unity::Mathematics::bool4x3 v);

  /// @brief Method uint4x3, addr 0x31bf2c4, size 0x100, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 uint4x3(::Unity::Mathematics::double4x3 v);

  /// @brief Method uint4x3, addr 0x31bf1a0, size 0x100, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 uint4x3(::Unity::Mathematics::float4x3 v);

  /// @brief Method uint4x3, addr 0x31bf168, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 uint4x3(::Unity::Mathematics::int4x3 v);

  /// @brief Method uint4x3, addr 0x31bf0d4, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 uint4x3(bool v);

  /// @brief Method uint4x3, addr 0x31bf2a0, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 uint4x3(double_t v);

  /// @brief Method uint4x3, addr 0x31bf17c, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 uint4x3(float_t v);

  /// @brief Method uint4x3, addr 0x31bf150, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 uint4x3(int32_t v);

  /// @brief Method uint4x3, addr 0x31bf0bc, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 uint4x3(uint32_t v);

  /// @brief Method uint4x4, addr 0x31bf68c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x4 uint4x4(::Unity::Mathematics::uint4 c0, ::Unity::Mathematics::uint4 c1, ::Unity::Mathematics::uint4 c2, ::Unity::Mathematics::uint4 c3);

  /// @brief Method uint4x4, addr 0x31bf6a0, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x4 uint4x4(uint32_t m00, uint32_t m01, uint32_t m02, uint32_t m03, uint32_t m10, uint32_t m11, uint32_t m12, uint32_t m13, uint32_t m20, uint32_t m21,
                                                      uint32_t m22, uint32_t m23, uint32_t m30, uint32_t m31, uint32_t m32, uint32_t m33);

  /// @brief Method uint4x4, addr 0x31bf720, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x4 uint4x4(::Unity::Mathematics::bool4x4 v);

  /// @brief Method uint4x4, addr 0x31bf970, size 0x154, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x4 uint4x4(::Unity::Mathematics::double4x4 v);

  /// @brief Method uint4x4, addr 0x31bf7f4, size 0x154, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x4 uint4x4(::Unity::Mathematics::float4x4 v);

  /// @brief Method uint4x4, addr 0x31bf7b8, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x4 uint4x4(::Unity::Mathematics::int4x4 v);

  /// @brief Method uint4x4, addr 0x31bf700, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x4 uint4x4(bool v);

  /// @brief Method uint4x4, addr 0x31bf948, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x4 uint4x4(double_t v);

  /// @brief Method uint4x4, addr 0x31bf7cc, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x4 uint4x4(float_t v);

  /// @brief Method uint4x4, addr 0x31bf79c, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x4 uint4x4(int32_t v);

  /// @brief Method uint4x4, addr 0x31bf6e4, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x4 uint4x4(uint32_t v);

  /// @brief Method unitexp, addr 0x31ba5bc, size 0x12c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion unitexp(::Unity::Mathematics::quaternion q);

  /// @brief Method unitlog, addr 0x31ba870, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion unitlog(::Unity::Mathematics::quaternion q);

  /// @brief Method unlerp, addr 0x319aeec, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 unlerp(::Unity::Mathematics::double2 a, ::Unity::Mathematics::double2 b, ::Unity::Mathematics::double2 x);

  /// @brief Method unlerp, addr 0x319af08, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3 unlerp(::Unity::Mathematics::double3 a, ::Unity::Mathematics::double3 b, ::Unity::Mathematics::double3 x);

  /// @brief Method unlerp, addr 0x319af38, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 unlerp(::Unity::Mathematics::double4 a, ::Unity::Mathematics::double4 b, ::Unity::Mathematics::double4 x);

  /// @brief Method unlerp, addr 0x319ae54, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 unlerp(::Unity::Mathematics::float2 a, ::Unity::Mathematics::float2 b, ::Unity::Mathematics::float2 x);

  /// @brief Method unlerp, addr 0x319ae70, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 unlerp(::Unity::Mathematics::float3 a, ::Unity::Mathematics::float3 b, ::Unity::Mathematics::float3 x);

  /// @brief Method unlerp, addr 0x319aea0, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 unlerp(::Unity::Mathematics::float4 a, ::Unity::Mathematics::float4 b, ::Unity::Mathematics::float4 x);

  /// @brief Method unlerp, addr 0x319aedc, size 0x10, virtual false, abstract: false, final false
  static inline double_t unlerp(double_t a, double_t b, double_t x);

  /// @brief Method unlerp, addr 0x319ae44, size 0x10, virtual false, abstract: false, final false
  static inline float_t unlerp(float_t a, float_t b, float_t x);

  /// @brief Method unpackhi, addr 0x31b1bc8, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 unpackhi(::Unity::Mathematics::double4 a, ::Unity::Mathematics::double4 b);

  /// @brief Method unpackhi, addr 0x31b1bb4, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 unpackhi(::Unity::Mathematics::float4 a, ::Unity::Mathematics::float4 b);

  /// @brief Method unpacklo, addr 0x31b1ba4, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4 unpacklo(::Unity::Mathematics::double4 a, ::Unity::Mathematics::double4 b);

  /// @brief Method unpacklo, addr 0x31b1b94, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 unpacklo(::Unity::Mathematics::float4 a, ::Unity::Mathematics::float4 b);

  /// @brief Method up, addr 0x31b1b34, size 0x10, virtual false, abstract: false, final false
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
  static constexpr double_t DBL_MIN_NORMAL{
    0.000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000022250738585072014
  };

  /// @brief Field E offset 0xffffffff size 0x4
  static constexpr float_t E{ 2.7182817 };

  /// @brief Field EPSILON offset 0xffffffff size 0x4
  static constexpr float_t EPSILON{ 0.00000011920929 };

  /// @brief Field EPSILON_DBL offset 0xffffffff size 0x8
  static constexpr double_t EPSILON_DBL{ 0.0000000000000002220446049250313 };

  /// @brief Field E_DBL offset 0xffffffff size 0x8
  static constexpr double_t E_DBL{ 2.718281828459045 };

  /// @brief Field FLT_MIN_NORMAL offset 0xffffffff size 0x4
  static constexpr float_t FLT_MIN_NORMAL{ 0.000000000000000000000000000000000000011754944 };

  /// @brief Field INFINITY offset 0xffffffff size 0x4
  static constexpr float_t INFINITY{ INFINITY };

  /// @brief Field INFINITY_DBL offset 0xffffffff size 0x8
  static constexpr double_t INFINITY_DBL{ INFINITY };

  /// @brief Field LN10 offset 0xffffffff size 0x4
  static constexpr float_t LN10{ 2.3025851 };

  /// @brief Field LN10_DBL offset 0xffffffff size 0x8
  static constexpr double_t LN10_DBL{ 2.302585092994046 };

  /// @brief Field LN2 offset 0xffffffff size 0x4
  static constexpr float_t LN2{ 0.6931472 };

  /// @brief Field LN2_DBL offset 0xffffffff size 0x8
  static constexpr double_t LN2_DBL{ 0.6931471805599453 };

  /// @brief Field LOG10E offset 0xffffffff size 0x4
  static constexpr float_t LOG10E{ 0.4342945 };

  /// @brief Field LOG10E_DBL offset 0xffffffff size 0x8
  static constexpr double_t LOG10E_DBL{ 0.4342944819032518 };

  /// @brief Field LOG2E offset 0xffffffff size 0x4
  static constexpr float_t LOG2E{ 1.442695 };

  /// @brief Field LOG2E_DBL offset 0xffffffff size 0x8
  static constexpr double_t LOG2E_DBL{ 1.4426950408889634 };

  /// @brief Field NAN offset 0xffffffff size 0x4
  static constexpr float_t NAN{ NAN };

  /// @brief Field NAN_DBL offset 0xffffffff size 0x8
  static constexpr double_t NAN_DBL{ NAN };

  /// @brief Field PI offset 0xffffffff size 0x4
  static constexpr float_t PI{ 3.1415927 };

  /// @brief Field PI_DBL offset 0xffffffff size 0x8
  static constexpr double_t PI_DBL{ 3.141592653589793 };

  /// @brief Field SQRT2 offset 0xffffffff size 0x4
  static constexpr float_t SQRT2{ 1.4142135 };

  /// @brief Field SQRT2_DBL offset 0xffffffff size 0x8
  static constexpr double_t SQRT2_DBL{ 1.4142135623730951 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::math, 0x10>, "Size mismatch!");

} // namespace Unity::Mathematics
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::__math__RotationOrder, "Unity.Mathematics", "math/RotationOrder");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::__math__ShuffleComponent, "Unity.Mathematics", "math/ShuffleComponent");
NEED_NO_BOX(::Unity::Mathematics::math);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::math*, "Unity.Mathematics", "math");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::__math__IntFloatUnion, "Unity.Mathematics", "math/IntFloatUnion");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::__math__LongDoubleUnion, "Unity.Mathematics", "math/LongDoubleUnion");

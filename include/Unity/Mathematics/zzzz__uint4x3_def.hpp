#pragma once
// IWYU pragma private; include "Unity/Mathematics/uint4x3.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__uint4_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(uint4x3)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class IFormatProvider;
}
namespace System {
class IFormattable;
}
namespace System {
class Object;
}
namespace Unity::Mathematics {
struct bool4x3;
}
namespace Unity::Mathematics {
struct double4x3;
}
namespace Unity::Mathematics {
struct float4x3;
}
namespace Unity::Mathematics {
struct int4x3;
}
namespace Unity::Mathematics {
struct uint4;
}
// Forward declare root types
namespace Unity::Mathematics {
struct uint4x3;
}
// Write type traits
MARK_VAL_T(::Unity::Mathematics::uint4x3);
// Type: Unity.Mathematics::uint4x3
// SizeInfo { instance_size: 48, native_size: 48, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Unity::Mathematics {
// Is value type: true
// CS Name: ::Unity.Mathematics::uint4x3
struct CORDL_TYPE uint4x3 {
public:
  // Declarations
  __declspec(property(get = get_Item))::Unity::Mathematics::uint4 Item[];

  /// @brief Field zero, offset 0xffffffff, size 0x30
  static __declspec(property(get = getStaticF_zero, put = setStaticF_zero))::Unity::Mathematics::uint4x3 zero;

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::uint4x3>"
  constexpr operator ::System::IEquatable_1<::Unity::Mathematics::uint4x3>*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Method Equals, addr 0x31fa2dc, size 0x128, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x31fa210, size 0xcc, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Mathematics::uint4x3 rhs);

  /// @brief Method GetHashCode, addr 0x31fa404, size 0x108, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x31fa50c, size 0x3ac, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x31fa8b8, size 0x394, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method .ctor, addr 0x31f828c, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::uint4 c0, ::Unity::Mathematics::uint4 c1, ::Unity::Mathematics::uint4 c2);

  /// @brief Method .ctor, addr 0x31f829c, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(uint32_t m00, uint32_t m01, uint32_t m02, uint32_t m10, uint32_t m11, uint32_t m12, uint32_t m20, uint32_t m21, uint32_t m22, uint32_t m30, uint32_t m31, uint32_t m32);

  /// @brief Method .ctor, addr 0x31f8300, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::bool4x3 v);

  /// @brief Method .ctor, addr 0x31f84d8, size 0x100, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::double4x3 v);

  /// @brief Method .ctor, addr 0x31f83b4, size 0x100, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float4x3 v);

  /// @brief Method .ctor, addr 0x31f8374, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::int4x3 v);

  /// @brief Method .ctor, addr 0x31f82e4, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(bool v);

  /// @brief Method .ctor, addr 0x31f84b4, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(double_t v);

  /// @brief Method .ctor, addr 0x31f8390, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(float_t v);

  /// @brief Method .ctor, addr 0x31f835c, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(int32_t v);

  /// @brief Method .ctor, addr 0x31f82cc, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(uint32_t v);

  static inline ::Unity::Mathematics::uint4x3 getStaticF_zero();

  /// @brief Method get_Item, addr 0x31fa208, size 0x8, virtual false, abstract: false, final false
  inline ByRef<::Unity::Mathematics::uint4> get_Item(int32_t index);

  /// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::uint4x3>"
  constexpr ::System::IEquatable_1<::Unity::Mathematics::uint4x3>* i___System__IEquatable_1___Unity__Mathematics__uint4x3_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Method op_Addition, addr 0x31f8ad4, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 op_Addition(::Unity::Mathematics::uint4x3 lhs, ::Unity::Mathematics::uint4x3 rhs);

  /// @brief Method op_Addition, addr 0x31f8b2c, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 op_Addition(::Unity::Mathematics::uint4x3 lhs, uint32_t rhs);

  /// @brief Method op_Addition, addr 0x31f8b9c, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 op_Addition(uint32_t lhs, ::Unity::Mathematics::uint4x3 rhs);

  /// @brief Method op_BitwiseAnd, addr 0x31f9ef0, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 op_BitwiseAnd(::Unity::Mathematics::uint4x3 lhs, ::Unity::Mathematics::uint4x3 rhs);

  /// @brief Method op_BitwiseAnd, addr 0x31f9f18, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 op_BitwiseAnd(::Unity::Mathematics::uint4x3 lhs, uint32_t rhs);

  /// @brief Method op_BitwiseAnd, addr 0x31f9f88, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 op_BitwiseAnd(uint32_t lhs, ::Unity::Mathematics::uint4x3 rhs);

  /// @brief Method op_BitwiseOr, addr 0x31f9ff8, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 op_BitwiseOr(::Unity::Mathematics::uint4x3 lhs, ::Unity::Mathematics::uint4x3 rhs);

  /// @brief Method op_BitwiseOr, addr 0x31fa020, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 op_BitwiseOr(::Unity::Mathematics::uint4x3 lhs, uint32_t rhs);

  /// @brief Method op_BitwiseOr, addr 0x31fa090, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 op_BitwiseOr(uint32_t lhs, ::Unity::Mathematics::uint4x3 rhs);

  /// @brief Method op_Decrement, addr 0x31f9108, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 op_Decrement(::Unity::Mathematics::uint4x3 val);

  /// @brief Method op_Division, addr 0x31f8d44, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 op_Division(::Unity::Mathematics::uint4x3 lhs, ::Unity::Mathematics::uint4x3 rhs);

  /// @brief Method op_Division, addr 0x31f8dcc, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 op_Division(::Unity::Mathematics::uint4x3 lhs, uint32_t rhs);

  /// @brief Method op_Division, addr 0x31f8e3c, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 op_Division(uint32_t lhs, ::Unity::Mathematics::uint4x3 rhs);

  /// @brief Method op_Equality, addr 0x31f9ac0, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_Equality(::Unity::Mathematics::uint4x3 lhs, ::Unity::Mathematics::uint4x3 rhs);

  /// @brief Method op_Equality, addr 0x31f9b7c, size 0xa8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_Equality(::Unity::Mathematics::uint4x3 lhs, uint32_t rhs);

  /// @brief Method op_Equality, addr 0x31f9c24, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_Equality(uint32_t lhs, ::Unity::Mathematics::uint4x3 rhs);

  /// @brief Method op_ExclusiveOr, addr 0x31fa100, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 op_ExclusiveOr(::Unity::Mathematics::uint4x3 lhs, ::Unity::Mathematics::uint4x3 rhs);

  /// @brief Method op_ExclusiveOr, addr 0x31fa128, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 op_ExclusiveOr(::Unity::Mathematics::uint4x3 lhs, uint32_t rhs);

  /// @brief Method op_ExclusiveOr, addr 0x31fa198, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 op_ExclusiveOr(uint32_t lhs, ::Unity::Mathematics::uint4x3 rhs);

  /// @brief Method op_Explicit, addr 0x31f860c, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 op_Explicit___Unity__Mathematics__uint4x3(::Unity::Mathematics::bool4x3 v);

  /// @brief Method op_Explicit, addr 0x31f87e0, size 0x100, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 op_Explicit___Unity__Mathematics__uint4x3(::Unity::Mathematics::double4x3 v);

  /// @brief Method op_Explicit, addr 0x31f86bc, size 0x100, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 op_Explicit___Unity__Mathematics__uint4x3(::Unity::Mathematics::float4x3 v);

  /// @brief Method op_Explicit, addr 0x31f8684, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 op_Explicit___Unity__Mathematics__uint4x3(::Unity::Mathematics::int4x3 v);

  /// @brief Method op_Explicit, addr 0x31f85f0, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 op_Explicit___Unity__Mathematics__uint4x3(bool v);

  /// @brief Method op_Explicit, addr 0x31f87bc, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 op_Explicit___Unity__Mathematics__uint4x3(double_t v);

  /// @brief Method op_Explicit, addr 0x31f8698, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 op_Explicit___Unity__Mathematics__uint4x3(float_t v);

  /// @brief Method op_Explicit, addr 0x31f866c, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 op_Explicit___Unity__Mathematics__uint4x3(int32_t v);

  /// @brief Method op_GreaterThan, addr 0x31f9570, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_GreaterThan(::Unity::Mathematics::uint4x3 lhs, ::Unity::Mathematics::uint4x3 rhs);

  /// @brief Method op_GreaterThan, addr 0x31f962c, size 0xa8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_GreaterThan(::Unity::Mathematics::uint4x3 lhs, uint32_t rhs);

  /// @brief Method op_GreaterThan, addr 0x31f96d4, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_GreaterThan(uint32_t lhs, ::Unity::Mathematics::uint4x3 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x31f9778, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_GreaterThanOrEqual(::Unity::Mathematics::uint4x3 lhs, ::Unity::Mathematics::uint4x3 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x31f9834, size 0xa8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_GreaterThanOrEqual(::Unity::Mathematics::uint4x3 lhs, uint32_t rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x31f98dc, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_GreaterThanOrEqual(uint32_t lhs, ::Unity::Mathematics::uint4x3 rhs);

  /// @brief Method op_Implicit, addr 0x31f85d8, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 op_Implicit___Unity__Mathematics__uint4x3(uint32_t v);

  /// @brief Method op_Increment, addr 0x31f90a8, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 op_Increment(::Unity::Mathematics::uint4x3 val);

  /// @brief Method op_Inequality, addr 0x31f9cc8, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_Inequality(::Unity::Mathematics::uint4x3 lhs, ::Unity::Mathematics::uint4x3 rhs);

  /// @brief Method op_Inequality, addr 0x31f9d84, size 0xa8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_Inequality(::Unity::Mathematics::uint4x3 lhs, uint32_t rhs);

  /// @brief Method op_Inequality, addr 0x31f9e2c, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_Inequality(uint32_t lhs, ::Unity::Mathematics::uint4x3 rhs);

  /// @brief Method op_LeftShift, addr 0x31f99e0, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 op_LeftShift(::Unity::Mathematics::uint4x3 x, int32_t n);

  /// @brief Method op_LessThan, addr 0x31f9160, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_LessThan(::Unity::Mathematics::uint4x3 lhs, ::Unity::Mathematics::uint4x3 rhs);

  /// @brief Method op_LessThan, addr 0x31f921c, size 0xa8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_LessThan(::Unity::Mathematics::uint4x3 lhs, uint32_t rhs);

  /// @brief Method op_LessThan, addr 0x31f92c4, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_LessThan(uint32_t lhs, ::Unity::Mathematics::uint4x3 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x31f9368, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_LessThanOrEqual(::Unity::Mathematics::uint4x3 lhs, ::Unity::Mathematics::uint4x3 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x31f9424, size 0xa8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_LessThanOrEqual(::Unity::Mathematics::uint4x3 lhs, uint32_t rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x31f94cc, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_LessThanOrEqual(uint32_t lhs, ::Unity::Mathematics::uint4x3 rhs);

  /// @brief Method op_Modulus, addr 0x31f8eac, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 op_Modulus(::Unity::Mathematics::uint4x3 lhs, ::Unity::Mathematics::uint4x3 rhs);

  /// @brief Method op_Modulus, addr 0x31f8f68, size 0xa0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 op_Modulus(::Unity::Mathematics::uint4x3 lhs, uint32_t rhs);

  /// @brief Method op_Modulus, addr 0x31f9008, size 0xa0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 op_Modulus(uint32_t lhs, ::Unity::Mathematics::uint4x3 rhs);

  /// @brief Method op_Multiply, addr 0x31f88e0, size 0x114, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 op_Multiply(::Unity::Mathematics::uint4x3 lhs, ::Unity::Mathematics::uint4x3 rhs);

  /// @brief Method op_Multiply, addr 0x31f89f4, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 op_Multiply(::Unity::Mathematics::uint4x3 lhs, uint32_t rhs);

  /// @brief Method op_Multiply, addr 0x31f8a64, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 op_Multiply(uint32_t lhs, ::Unity::Mathematics::uint4x3 rhs);

  /// @brief Method op_OnesComplement, addr 0x31f9ed0, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 op_OnesComplement(::Unity::Mathematics::uint4x3 val);

  /// @brief Method op_RightShift, addr 0x31f9a50, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 op_RightShift(::Unity::Mathematics::uint4x3 x, int32_t n);

  /// @brief Method op_Subtraction, addr 0x31f8c0c, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 op_Subtraction(::Unity::Mathematics::uint4x3 lhs, ::Unity::Mathematics::uint4x3 rhs);

  /// @brief Method op_Subtraction, addr 0x31f8c64, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 op_Subtraction(::Unity::Mathematics::uint4x3 lhs, uint32_t rhs);

  /// @brief Method op_Subtraction, addr 0x31f8cd4, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 op_Subtraction(uint32_t lhs, ::Unity::Mathematics::uint4x3 rhs);

  /// @brief Method op_UnaryNegation, addr 0x31f9980, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 op_UnaryNegation(::Unity::Mathematics::uint4x3 val);

  /// @brief Method op_UnaryPlus, addr 0x31f99cc, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 op_UnaryPlus(::Unity::Mathematics::uint4x3 val);

  static inline void setStaticF_zero(::Unity::Mathematics::uint4x3 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr uint4x3();

  // Ctor Parameters [CppParam { name: "c0", ty: "::Unity::Mathematics::uint4", modifiers: "", def_value: None }, CppParam { name: "c1", ty: "::Unity::Mathematics::uint4", modifiers: "", def_value:
  // None }, CppParam { name: "c2", ty: "::Unity::Mathematics::uint4", modifiers: "", def_value: None }]
  constexpr uint4x3(::Unity::Mathematics::uint4 c0, ::Unity::Mathematics::uint4 c1, ::Unity::Mathematics::uint4 c2) noexcept;

  /// @brief Field c0, offset: 0x0, size: 0x10, def value: None
  ::Unity::Mathematics::uint4 c0;

  /// @brief Field c1, offset: 0x10, size: 0x10, def value: None
  ::Unity::Mathematics::uint4 c1;

  /// @brief Field c2, offset: 0x20, size: 0x10, def value: None
  ::Unity::Mathematics::uint4 c2;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::uint4x3, 0x30>, "Size mismatch!");

static_assert(offsetof(::Unity::Mathematics::uint4x3, c0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::uint4x3, c1) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::uint4x3, c2) == 0x20, "Offset mismatch!");

} // namespace Unity::Mathematics
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::uint4x3, "Unity.Mathematics", "uint4x3");

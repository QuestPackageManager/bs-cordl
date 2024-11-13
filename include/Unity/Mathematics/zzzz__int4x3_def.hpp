#pragma once
// IWYU pragma private; include "Unity/Mathematics/int4x3.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__int4_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(int4x3)
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
struct int4;
}
namespace Unity::Mathematics {
struct uint4x3;
}
// Forward declare root types
namespace Unity::Mathematics {
struct int4x3;
}
// Write type traits
MARK_VAL_T(::Unity::Mathematics::int4x3);
// Type: Unity.Mathematics::int4x3
// SizeInfo { instance_size: 48, native_size: 48, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 4, packing: None, specified_packing: None }
namespace Unity::Mathematics {
// Is value type: true
// CS Name: ::Unity.Mathematics::int4x3
struct CORDL_TYPE int4x3 {
public:
  // Declarations
  __declspec(property(get = get_Item)) ::Unity::Mathematics::int4 Item[];

  /// @brief Field zero, offset 0xffffffff, size 0x30
  static __declspec(property(get = getStaticF_zero, put = setStaticF_zero)) ::Unity::Mathematics::int4x3 zero;

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::int4x3>"
  constexpr operator ::System::IEquatable_1<::Unity::Mathematics::int4x3>*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Method Equals, addr 0x465f8e0, size 0x128, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x465f814, size 0xcc, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Mathematics::int4x3 rhs);

  /// @brief Method GetHashCode, addr 0x465fa08, size 0xd8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x465fae0, size 0x3ac, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x465fe8c, size 0x394, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method .ctor, addr 0x465d924, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::int4 c0, ::Unity::Mathematics::int4 c1, ::Unity::Mathematics::int4 c2);

  /// @brief Method .ctor, addr 0x465d934, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(int32_t m00, int32_t m01, int32_t m02, int32_t m10, int32_t m11, int32_t m12, int32_t m20, int32_t m21, int32_t m22, int32_t m30, int32_t m31, int32_t m32);

  /// @brief Method .ctor, addr 0x465d998, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::bool4x3 v);

  /// @brief Method .ctor, addr 0x465db9c, size 0xf8, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::double4x3 v);

  /// @brief Method .ctor, addr 0x465da78, size 0xf8, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float4x3 v);

  /// @brief Method .ctor, addr 0x465da30, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::uint4x3 v);

  /// @brief Method .ctor, addr 0x465d97c, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(bool v);

  /// @brief Method .ctor, addr 0x465db70, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(double_t v);

  /// @brief Method .ctor, addr 0x465da4c, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(float_t v);

  /// @brief Method .ctor, addr 0x465d964, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(int32_t v);

  /// @brief Method .ctor, addr 0x465da18, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(uint32_t v);

  static inline ::Unity::Mathematics::int4x3 getStaticF_zero();

  /// @brief Method get_Item, addr 0x465f80c, size 0x8, virtual false, abstract: false, final false
  inline ByRef<::Unity::Mathematics::int4> get_Item(int32_t index);

  /// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::int4x3>"
  constexpr ::System::IEquatable_1<::Unity::Mathematics::int4x3>* i___System__IEquatable_1___Unity__Mathematics__int4x3_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Method op_Addition, addr 0x465e138, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 op_Addition(::Unity::Mathematics::int4x3 lhs, ::Unity::Mathematics::int4x3 rhs);

  /// @brief Method op_Addition, addr 0x465e188, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 op_Addition(::Unity::Mathematics::int4x3 lhs, int32_t rhs);

  /// @brief Method op_Addition, addr 0x465e1f4, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 op_Addition(int32_t lhs, ::Unity::Mathematics::int4x3 rhs);

  /// @brief Method op_BitwiseAnd, addr 0x465f50c, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 op_BitwiseAnd(::Unity::Mathematics::int4x3 lhs, ::Unity::Mathematics::int4x3 rhs);

  /// @brief Method op_BitwiseAnd, addr 0x465f534, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 op_BitwiseAnd(::Unity::Mathematics::int4x3 lhs, int32_t rhs);

  /// @brief Method op_BitwiseAnd, addr 0x465f5a0, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 op_BitwiseAnd(int32_t lhs, ::Unity::Mathematics::int4x3 rhs);

  /// @brief Method op_BitwiseOr, addr 0x465f60c, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 op_BitwiseOr(::Unity::Mathematics::int4x3 lhs, ::Unity::Mathematics::int4x3 rhs);

  /// @brief Method op_BitwiseOr, addr 0x465f634, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 op_BitwiseOr(::Unity::Mathematics::int4x3 lhs, int32_t rhs);

  /// @brief Method op_BitwiseOr, addr 0x465f6a0, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 op_BitwiseOr(int32_t lhs, ::Unity::Mathematics::int4x3 rhs);

  /// @brief Method op_Decrement, addr 0x465e740, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 op_Decrement(::Unity::Mathematics::int4x3 val);

  /// @brief Method op_Division, addr 0x465e388, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 op_Division(::Unity::Mathematics::int4x3 lhs, ::Unity::Mathematics::int4x3 rhs);

  /// @brief Method op_Division, addr 0x465e410, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 op_Division(::Unity::Mathematics::int4x3 lhs, int32_t rhs);

  /// @brief Method op_Division, addr 0x465e480, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 op_Division(int32_t lhs, ::Unity::Mathematics::int4x3 rhs);

  /// @brief Method op_Equality, addr 0x465f0e4, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_Equality(::Unity::Mathematics::int4x3 lhs, ::Unity::Mathematics::int4x3 rhs);

  /// @brief Method op_Equality, addr 0x465f1a0, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_Equality(::Unity::Mathematics::int4x3 lhs, int32_t rhs);

  /// @brief Method op_Equality, addr 0x465f244, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_Equality(int32_t lhs, ::Unity::Mathematics::int4x3 rhs);

  /// @brief Method op_ExclusiveOr, addr 0x465f70c, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 op_ExclusiveOr(::Unity::Mathematics::int4x3 lhs, ::Unity::Mathematics::int4x3 rhs);

  /// @brief Method op_ExclusiveOr, addr 0x465f734, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 op_ExclusiveOr(::Unity::Mathematics::int4x3 lhs, int32_t rhs);

  /// @brief Method op_ExclusiveOr, addr 0x465f7a0, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 op_ExclusiveOr(int32_t lhs, ::Unity::Mathematics::int4x3 rhs);

  /// @brief Method op_Explicit, addr 0x465dcc8, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 op_Explicit___Unity__Mathematics__int4x3(::Unity::Mathematics::bool4x3 v);

  /// @brief Method op_Explicit, addr 0x465dec8, size 0xf8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 op_Explicit___Unity__Mathematics__int4x3(::Unity::Mathematics::double4x3 v);

  /// @brief Method op_Explicit, addr 0x465dda4, size 0xf8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 op_Explicit___Unity__Mathematics__int4x3(::Unity::Mathematics::float4x3 v);

  /// @brief Method op_Explicit, addr 0x465dd64, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 op_Explicit___Unity__Mathematics__int4x3(::Unity::Mathematics::uint4x3 v);

  /// @brief Method op_Explicit, addr 0x465dcac, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 op_Explicit___Unity__Mathematics__int4x3(bool v);

  /// @brief Method op_Explicit, addr 0x465de9c, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 op_Explicit___Unity__Mathematics__int4x3(double_t v);

  /// @brief Method op_Explicit, addr 0x465dd78, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 op_Explicit___Unity__Mathematics__int4x3(float_t v);

  /// @brief Method op_Explicit, addr 0x465dd4c, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 op_Explicit___Unity__Mathematics__int4x3(uint32_t v);

  /// @brief Method op_GreaterThan, addr 0x465eb98, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_GreaterThan(::Unity::Mathematics::int4x3 lhs, ::Unity::Mathematics::int4x3 rhs);

  /// @brief Method op_GreaterThan, addr 0x465ec54, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_GreaterThan(::Unity::Mathematics::int4x3 lhs, int32_t rhs);

  /// @brief Method op_GreaterThan, addr 0x465ecf8, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_GreaterThan(int32_t lhs, ::Unity::Mathematics::int4x3 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x465ed9c, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_GreaterThanOrEqual(::Unity::Mathematics::int4x3 lhs, ::Unity::Mathematics::int4x3 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x465ee58, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_GreaterThanOrEqual(::Unity::Mathematics::int4x3 lhs, int32_t rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x465eefc, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_GreaterThanOrEqual(int32_t lhs, ::Unity::Mathematics::int4x3 rhs);

  /// @brief Method op_Implicit, addr 0x465dc94, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 op_Implicit___Unity__Mathematics__int4x3(int32_t v);

  /// @brief Method op_Increment, addr 0x465e6e8, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 op_Increment(::Unity::Mathematics::int4x3 val);

  /// @brief Method op_Inequality, addr 0x465f2e8, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_Inequality(::Unity::Mathematics::int4x3 lhs, ::Unity::Mathematics::int4x3 rhs);

  /// @brief Method op_Inequality, addr 0x465f3a4, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_Inequality(::Unity::Mathematics::int4x3 lhs, int32_t rhs);

  /// @brief Method op_Inequality, addr 0x465f448, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_Inequality(int32_t lhs, ::Unity::Mathematics::int4x3 rhs);

  /// @brief Method op_LeftShift, addr 0x465f000, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 op_LeftShift(::Unity::Mathematics::int4x3 x, int32_t n);

  /// @brief Method op_LessThan, addr 0x465e790, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_LessThan(::Unity::Mathematics::int4x3 lhs, ::Unity::Mathematics::int4x3 rhs);

  /// @brief Method op_LessThan, addr 0x465e84c, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_LessThan(::Unity::Mathematics::int4x3 lhs, int32_t rhs);

  /// @brief Method op_LessThan, addr 0x465e8f0, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_LessThan(int32_t lhs, ::Unity::Mathematics::int4x3 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x465e994, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_LessThanOrEqual(::Unity::Mathematics::int4x3 lhs, ::Unity::Mathematics::int4x3 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x465ea50, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_LessThanOrEqual(::Unity::Mathematics::int4x3 lhs, int32_t rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x465eaf4, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_LessThanOrEqual(int32_t lhs, ::Unity::Mathematics::int4x3 rhs);

  /// @brief Method op_Modulus, addr 0x465e4f0, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 op_Modulus(::Unity::Mathematics::int4x3 lhs, ::Unity::Mathematics::int4x3 rhs);

  /// @brief Method op_Modulus, addr 0x465e5a8, size 0xa0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 op_Modulus(::Unity::Mathematics::int4x3 lhs, int32_t rhs);

  /// @brief Method op_Modulus, addr 0x465e648, size 0xa0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 op_Modulus(int32_t lhs, ::Unity::Mathematics::int4x3 rhs);

  /// @brief Method op_Multiply, addr 0x465dfc0, size 0xa0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 op_Multiply(::Unity::Mathematics::int4x3 lhs, ::Unity::Mathematics::int4x3 rhs);

  /// @brief Method op_Multiply, addr 0x465e060, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 op_Multiply(::Unity::Mathematics::int4x3 lhs, int32_t rhs);

  /// @brief Method op_Multiply, addr 0x465e0cc, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 op_Multiply(int32_t lhs, ::Unity::Mathematics::int4x3 rhs);

  /// @brief Method op_OnesComplement, addr 0x465f4ec, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 op_OnesComplement(::Unity::Mathematics::int4x3 val);

  /// @brief Method op_RightShift, addr 0x465f070, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 op_RightShift(::Unity::Mathematics::int4x3 x, int32_t n);

  /// @brief Method op_Subtraction, addr 0x465e260, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 op_Subtraction(::Unity::Mathematics::int4x3 lhs, ::Unity::Mathematics::int4x3 rhs);

  /// @brief Method op_Subtraction, addr 0x465e2b0, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 op_Subtraction(::Unity::Mathematics::int4x3 lhs, int32_t rhs);

  /// @brief Method op_Subtraction, addr 0x465e31c, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 op_Subtraction(int32_t lhs, ::Unity::Mathematics::int4x3 rhs);

  /// @brief Method op_UnaryNegation, addr 0x465efa0, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 op_UnaryNegation(::Unity::Mathematics::int4x3 val);

  /// @brief Method op_UnaryPlus, addr 0x465efec, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x3 op_UnaryPlus(::Unity::Mathematics::int4x3 val);

  static inline void setStaticF_zero(::Unity::Mathematics::int4x3 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr int4x3();

  // Ctor Parameters [CppParam { name: "c0", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: None }, CppParam { name: "c1", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: None
  // }, CppParam { name: "c2", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: None }]
  constexpr int4x3(::Unity::Mathematics::int4 c0, ::Unity::Mathematics::int4 c1, ::Unity::Mathematics::int4 c2) noexcept;

  /// @brief Field c0, offset: 0x0, size: 0x10, def value: None
  ::Unity::Mathematics::int4 c0;

  /// @brief Field c1, offset: 0x10, size: 0x10, def value: None
  ::Unity::Mathematics::int4 c1;

  /// @brief Field c2, offset: 0x20, size: 0x10, def value: None
  ::Unity::Mathematics::int4 c2;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9979 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::int4x3, 0x30>, "Size mismatch!");

static_assert(offsetof(::Unity::Mathematics::int4x3, c0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::int4x3, c1) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::int4x3, c2) == 0x20, "Offset mismatch!");

} // namespace Unity::Mathematics
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::int4x3, "Unity.Mathematics", "int4x3");

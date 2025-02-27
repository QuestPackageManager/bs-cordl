#pragma once
// IWYU pragma private; include "Unity/Mathematics/uint2x3.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__IFormattable_def.hpp"
#include "Unity/Mathematics/zzzz__uint2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(uint2x3)
namespace System {
class IFormatProvider;
}
namespace System {
class Object;
}
namespace Unity::Mathematics {
struct bool2x3;
}
namespace Unity::Mathematics {
struct double2x3;
}
namespace Unity::Mathematics {
struct float2x3;
}
namespace Unity::Mathematics {
struct int2x3;
}
namespace Unity::Mathematics {
struct uint2;
}
// Forward declare root types
namespace Unity::Mathematics {
struct uint2x3;
}
// Write type traits
MARK_VAL_T(::Unity::Mathematics::uint2x3);
// Dependencies System.IEquatable`1<T>, System.IFormattable, Unity.Mathematics.uint2
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.uint2x3
struct CORDL_TYPE uint2x3 {
public:
  // Declarations
  __declspec(property(get = get_Item)) ::Unity::Mathematics::uint2 Item[];

  /// @brief Field zero, offset 0xffffffff, size 0x18
  __declspec(property(get = getStaticF_zero, put = setStaticF_zero)) ::Unity::Mathematics::uint2x3 zero;

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::uint2x3>"
  constexpr operator ::System::IEquatable_1<::Unity::Mathematics::uint2x3>*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Method Equals, addr 0x46e6cf0, size 0xc8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x46e6c84, size 0x6c, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Mathematics::uint2x3 rhs);

  /// @brief Method GetHashCode, addr 0x46e6db8, size 0x74, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x46e6e2c, size 0x22c, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x46e7058, size 0x214, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method .ctor, addr 0x46e5a20, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::uint2 c0, ::Unity::Mathematics::uint2 c1, ::Unity::Mathematics::uint2 c2);

  /// @brief Method .ctor, addr 0x46e5a2c, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(uint32_t m00, uint32_t m01, uint32_t m02, uint32_t m10, uint32_t m11, uint32_t m12);

  /// @brief Method .ctor, addr 0x46e5a7c, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::bool2x3 v);

  /// @brief Method .ctor, addr 0x46e5ba0, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::double2x3 v);

  /// @brief Method .ctor, addr 0x46e5af8, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float2x3 v);

  /// @brief Method .ctor, addr 0x46e5abc, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::int2x3 v);

  /// @brief Method .ctor, addr 0x46e5a64, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(bool v);

  /// @brief Method .ctor, addr 0x46e5b80, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(double_t v);

  /// @brief Method .ctor, addr 0x46e5ad8, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(float_t v);

  /// @brief Method .ctor, addr 0x46e5aa8, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(int32_t v);

  /// @brief Method .ctor, addr 0x46e5a50, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(uint32_t v);

  static inline ::Unity::Mathematics::uint2x3 getStaticF_zero();

  /// @brief Method get_Item, addr 0x46e6c7c, size 0x8, virtual false, abstract: false, final false
  inline ::ByRef<::Unity::Mathematics::uint2> get_Item(int32_t index);

  /// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::uint2x3>"
  constexpr ::System::IEquatable_1<::Unity::Mathematics::uint2x3>* i___System__IEquatable_1___Unity__Mathematics__uint2x3_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Method op_Addition, addr 0x46e5ec8, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x3 op_Addition(::Unity::Mathematics::uint2x3 lhs, ::Unity::Mathematics::uint2x3 rhs);

  /// @brief Method op_Addition, addr 0x46e5f0c, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x3 op_Addition(::Unity::Mathematics::uint2x3 lhs, uint32_t rhs);

  /// @brief Method op_Addition, addr 0x46e5f4c, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x3 op_Addition(uint32_t lhs, ::Unity::Mathematics::uint2x3 rhs);

  /// @brief Method op_BitwiseAnd, addr 0x46e6a90, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x3 op_BitwiseAnd(::Unity::Mathematics::uint2x3 lhs, ::Unity::Mathematics::uint2x3 rhs);

  /// @brief Method op_BitwiseAnd, addr 0x46e6ab4, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x3 op_BitwiseAnd(::Unity::Mathematics::uint2x3 lhs, uint32_t rhs);

  /// @brief Method op_BitwiseAnd, addr 0x46e6af4, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x3 op_BitwiseAnd(uint32_t lhs, ::Unity::Mathematics::uint2x3 rhs);

  /// @brief Method op_BitwiseOr, addr 0x46e6b34, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x3 op_BitwiseOr(::Unity::Mathematics::uint2x3 lhs, ::Unity::Mathematics::uint2x3 rhs);

  /// @brief Method op_BitwiseOr, addr 0x46e6b58, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x3 op_BitwiseOr(::Unity::Mathematics::uint2x3 lhs, uint32_t rhs);

  /// @brief Method op_BitwiseOr, addr 0x46e6b98, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x3 op_BitwiseOr(uint32_t lhs, ::Unity::Mathematics::uint2x3 rhs);

  /// @brief Method op_Decrement, addr 0x46e6264, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x3 op_Decrement(::Unity::Mathematics::uint2x3 val);

  /// @brief Method op_Division, addr 0x46e6050, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x3 op_Division(::Unity::Mathematics::uint2x3 lhs, ::Unity::Mathematics::uint2x3 rhs);

  /// @brief Method op_Division, addr 0x46e6098, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x3 op_Division(::Unity::Mathematics::uint2x3 lhs, uint32_t rhs);

  /// @brief Method op_Division, addr 0x46e60d4, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x3 op_Division(uint32_t lhs, ::Unity::Mathematics::uint2x3 rhs);

  /// @brief Method op_Equality, addr 0x46e6820, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_Equality(::Unity::Mathematics::uint2x3 lhs, ::Unity::Mathematics::uint2x3 rhs);

  /// @brief Method op_Equality, addr 0x46e68a0, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_Equality(::Unity::Mathematics::uint2x3 lhs, uint32_t rhs);

  /// @brief Method op_Equality, addr 0x46e68f4, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_Equality(uint32_t lhs, ::Unity::Mathematics::uint2x3 rhs);

  /// @brief Method op_ExclusiveOr, addr 0x46e6bd8, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x3 op_ExclusiveOr(::Unity::Mathematics::uint2x3 lhs, ::Unity::Mathematics::uint2x3 rhs);

  /// @brief Method op_ExclusiveOr, addr 0x46e6bfc, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x3 op_ExclusiveOr(::Unity::Mathematics::uint2x3 lhs, uint32_t rhs);

  /// @brief Method op_ExclusiveOr, addr 0x46e6c3c, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x3 op_ExclusiveOr(uint32_t lhs, ::Unity::Mathematics::uint2x3 rhs);

  /// @brief Method op_Explicit, addr 0x46e5c54, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x3 op_Explicit___Unity__Mathematics__uint2x3(::Unity::Mathematics::bool2x3 v);

  /// @brief Method op_Explicit, addr 0x46e5d6c, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x3 op_Explicit___Unity__Mathematics__uint2x3(::Unity::Mathematics::double2x3 v);

  /// @brief Method op_Explicit, addr 0x46e5cc8, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x3 op_Explicit___Unity__Mathematics__uint2x3(::Unity::Mathematics::float2x3 v);

  /// @brief Method op_Explicit, addr 0x46e5c94, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x3 op_Explicit___Unity__Mathematics__uint2x3(::Unity::Mathematics::int2x3 v);

  /// @brief Method op_Explicit, addr 0x46e5c3c, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x3 op_Explicit___Unity__Mathematics__uint2x3(bool v);

  /// @brief Method op_Explicit, addr 0x46e5d4c, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x3 op_Explicit___Unity__Mathematics__uint2x3(double_t v);

  /// @brief Method op_Explicit, addr 0x46e5ca8, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x3 op_Explicit___Unity__Mathematics__uint2x3(float_t v);

  /// @brief Method op_Explicit, addr 0x46e5c80, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x3 op_Explicit___Unity__Mathematics__uint2x3(int32_t v);

  /// @brief Method op_GreaterThan, addr 0x46e64f8, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_GreaterThan(::Unity::Mathematics::uint2x3 lhs, ::Unity::Mathematics::uint2x3 rhs);

  /// @brief Method op_GreaterThan, addr 0x46e6578, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_GreaterThan(::Unity::Mathematics::uint2x3 lhs, uint32_t rhs);

  /// @brief Method op_GreaterThan, addr 0x46e65cc, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_GreaterThan(uint32_t lhs, ::Unity::Mathematics::uint2x3 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x46e6620, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_GreaterThanOrEqual(::Unity::Mathematics::uint2x3 lhs, ::Unity::Mathematics::uint2x3 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x46e66a0, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_GreaterThanOrEqual(::Unity::Mathematics::uint2x3 lhs, uint32_t rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x46e66f4, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_GreaterThanOrEqual(uint32_t lhs, ::Unity::Mathematics::uint2x3 rhs);

  /// @brief Method op_Implicit, addr 0x46e5c28, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x3 op_Implicit___Unity__Mathematics__uint2x3(uint32_t v);

  /// @brief Method op_Increment, addr 0x46e6218, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x3 op_Increment(::Unity::Mathematics::uint2x3 val);

  /// @brief Method op_Inequality, addr 0x46e6948, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_Inequality(::Unity::Mathematics::uint2x3 lhs, ::Unity::Mathematics::uint2x3 rhs);

  /// @brief Method op_Inequality, addr 0x46e69cc, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_Inequality(::Unity::Mathematics::uint2x3 lhs, uint32_t rhs);

  /// @brief Method op_Inequality, addr 0x46e6a20, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_Inequality(uint32_t lhs, ::Unity::Mathematics::uint2x3 rhs);

  /// @brief Method op_LeftShift, addr 0x46e6794, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x3 op_LeftShift(::Unity::Mathematics::uint2x3 x, int32_t n);

  /// @brief Method op_LessThan, addr 0x46e62a8, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_LessThan(::Unity::Mathematics::uint2x3 lhs, ::Unity::Mathematics::uint2x3 rhs);

  /// @brief Method op_LessThan, addr 0x46e6328, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_LessThan(::Unity::Mathematics::uint2x3 lhs, uint32_t rhs);

  /// @brief Method op_LessThan, addr 0x46e637c, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_LessThan(uint32_t lhs, ::Unity::Mathematics::uint2x3 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x46e63d0, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_LessThanOrEqual(::Unity::Mathematics::uint2x3 lhs, ::Unity::Mathematics::uint2x3 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x46e6450, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_LessThanOrEqual(::Unity::Mathematics::uint2x3 lhs, uint32_t rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x46e64a4, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_LessThanOrEqual(uint32_t lhs, ::Unity::Mathematics::uint2x3 rhs);

  /// @brief Method op_Modulus, addr 0x46e6110, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x3 op_Modulus(::Unity::Mathematics::uint2x3 lhs, ::Unity::Mathematics::uint2x3 rhs);

  /// @brief Method op_Modulus, addr 0x46e6170, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x3 op_Modulus(::Unity::Mathematics::uint2x3 lhs, uint32_t rhs);

  /// @brief Method op_Modulus, addr 0x46e61c4, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x3 op_Modulus(uint32_t lhs, ::Unity::Mathematics::uint2x3 rhs);

  /// @brief Method op_Multiply, addr 0x46e5df0, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x3 op_Multiply(::Unity::Mathematics::uint2x3 lhs, ::Unity::Mathematics::uint2x3 rhs);

  /// @brief Method op_Multiply, addr 0x46e5e48, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x3 op_Multiply(::Unity::Mathematics::uint2x3 lhs, uint32_t rhs);

  /// @brief Method op_Multiply, addr 0x46e5e88, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x3 op_Multiply(uint32_t lhs, ::Unity::Mathematics::uint2x3 rhs);

  /// @brief Method op_OnesComplement, addr 0x46e6a74, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x3 op_OnesComplement(::Unity::Mathematics::uint2x3 val);

  /// @brief Method op_RightShift, addr 0x46e67d8, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x3 op_RightShift(::Unity::Mathematics::uint2x3 x, int32_t n);

  /// @brief Method op_Subtraction, addr 0x46e5f8c, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x3 op_Subtraction(::Unity::Mathematics::uint2x3 lhs, ::Unity::Mathematics::uint2x3 rhs);

  /// @brief Method op_Subtraction, addr 0x46e5fd0, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x3 op_Subtraction(::Unity::Mathematics::uint2x3 lhs, uint32_t rhs);

  /// @brief Method op_Subtraction, addr 0x46e6010, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x3 op_Subtraction(uint32_t lhs, ::Unity::Mathematics::uint2x3 rhs);

  /// @brief Method op_UnaryNegation, addr 0x46e6748, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x3 op_UnaryNegation(::Unity::Mathematics::uint2x3 val);

  /// @brief Method op_UnaryPlus, addr 0x46e6780, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x3 op_UnaryPlus(::Unity::Mathematics::uint2x3 val);

  static inline void setStaticF_zero(::Unity::Mathematics::uint2x3 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr uint2x3();

  // Ctor Parameters [CppParam { name: "c0", ty: "::Unity::Mathematics::uint2", modifiers: "", def_value: None }, CppParam { name: "c1", ty: "::Unity::Mathematics::uint2", modifiers: "", def_value:
  // None }, CppParam { name: "c2", ty: "::Unity::Mathematics::uint2", modifiers: "", def_value: None }]
  constexpr uint2x3(::Unity::Mathematics::uint2 c0, ::Unity::Mathematics::uint2 c1, ::Unity::Mathematics::uint2 c2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10020 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field c0, offset: 0x0, size: 0x8, def value: None
  ::Unity::Mathematics::uint2 c0;

  /// @brief Field c1, offset: 0x8, size: 0x8, def value: None
  ::Unity::Mathematics::uint2 c1;

  /// @brief Field c2, offset: 0x10, size: 0x8, def value: None
  ::Unity::Mathematics::uint2 c2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::uint2x3, c0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::uint2x3, c1) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::uint2x3, c2) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::uint2x3, 0x18>, "Size mismatch!");

} // namespace Unity::Mathematics
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::uint2x3, "Unity.Mathematics", "uint2x3");

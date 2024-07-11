#pragma once
// IWYU pragma private; include "Unity/Mathematics/uint2x2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__uint2_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(uint2x2)
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
struct bool2x2;
}
namespace Unity::Mathematics {
struct double2x2;
}
namespace Unity::Mathematics {
struct float2x2;
}
namespace Unity::Mathematics {
struct int2x2;
}
namespace Unity::Mathematics {
struct uint2;
}
// Forward declare root types
namespace Unity::Mathematics {
struct uint2x2;
}
// Write type traits
MARK_VAL_T(::Unity::Mathematics::uint2x2);
// Type: Unity.Mathematics::uint2x2
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Unity::Mathematics {
// Is value type: true
// CS Name: ::Unity.Mathematics::uint2x2
struct CORDL_TYPE uint2x2 {
public:
  // Declarations
  __declspec(property(get = get_Item))::Unity::Mathematics::uint2 Item[];

  /// @brief Field identity, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_identity, put = setStaticF_identity))::Unity::Mathematics::uint2x2 identity;

  /// @brief Field zero, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_zero, put = setStaticF_zero))::Unity::Mathematics::uint2x2 zero;

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::uint2x2>"
  constexpr operator ::System::IEquatable_1<::Unity::Mathematics::uint2x2>*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Method Equals, addr 0x3282ac0, size 0xa8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x3282a7c, size 0x44, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Mathematics::uint2x2 rhs);

  /// @brief Method GetHashCode, addr 0x3282b68, size 0x60, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x3282bc8, size 0x1ac, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x3282d74, size 0x194, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method .ctor, addr 0x3281f80, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::uint2 c0, ::Unity::Mathematics::uint2 c1);

  /// @brief Method .ctor, addr 0x3281f88, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(uint32_t m00, uint32_t m01, uint32_t m10, uint32_t m11);

  /// @brief Method .ctor, addr 0x3281fc4, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::bool2x2 v);

  /// @brief Method .ctor, addr 0x3282084, size 0x50, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::double2x2 v);

  /// @brief Method .ctor, addr 0x3282018, size 0x50, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float2x2 v);

  /// @brief Method .ctor, addr 0x3281ff4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::int2x2 v);

  /// @brief Method .ctor, addr 0x3281fb0, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(bool v);

  /// @brief Method .ctor, addr 0x3282068, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(double_t v);

  /// @brief Method .ctor, addr 0x3281ffc, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(float_t v);

  /// @brief Method .ctor, addr 0x3281fe4, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(int32_t v);

  /// @brief Method .ctor, addr 0x3281fa0, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(uint32_t v);

  static inline ::Unity::Mathematics::uint2x2 getStaticF_identity();

  static inline ::Unity::Mathematics::uint2x2 getStaticF_zero();

  /// @brief Method get_Item, addr 0x3282a74, size 0x8, virtual false, abstract: false, final false
  inline ByRef<::Unity::Mathematics::uint2> get_Item(int32_t index);

  /// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::uint2x2>"
  constexpr ::System::IEquatable_1<::Unity::Mathematics::uint2x2>* i___System__IEquatable_1___Unity__Mathematics__uint2x2_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Method op_Addition, addr 0x3282278, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 op_Addition(::Unity::Mathematics::uint2x2 lhs, ::Unity::Mathematics::uint2x2 rhs);

  /// @brief Method op_Addition, addr 0x32822a4, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 op_Addition(::Unity::Mathematics::uint2x2 lhs, uint32_t rhs);

  /// @brief Method op_Addition, addr 0x32822c8, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 op_Addition(uint32_t lhs, ::Unity::Mathematics::uint2x2 rhs);

  /// @brief Method op_BitwiseAnd, addr 0x328296c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 op_BitwiseAnd(::Unity::Mathematics::uint2x2 lhs, ::Unity::Mathematics::uint2x2 rhs);

  /// @brief Method op_BitwiseAnd, addr 0x3282978, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 op_BitwiseAnd(::Unity::Mathematics::uint2x2 lhs, uint32_t rhs);

  /// @brief Method op_BitwiseAnd, addr 0x328299c, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 op_BitwiseAnd(uint32_t lhs, ::Unity::Mathematics::uint2x2 rhs);

  /// @brief Method op_BitwiseOr, addr 0x32829c4, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 op_BitwiseOr(::Unity::Mathematics::uint2x2 lhs, ::Unity::Mathematics::uint2x2 rhs);

  /// @brief Method op_BitwiseOr, addr 0x32829d0, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 op_BitwiseOr(::Unity::Mathematics::uint2x2 lhs, uint32_t rhs);

  /// @brief Method op_BitwiseOr, addr 0x32829f4, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 op_BitwiseOr(uint32_t lhs, ::Unity::Mathematics::uint2x2 rhs);

  /// @brief Method op_Decrement, addr 0x32824b0, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 op_Decrement(::Unity::Mathematics::uint2x2 val);

  /// @brief Method op_Division, addr 0x3282368, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 op_Division(::Unity::Mathematics::uint2x2 lhs, ::Unity::Mathematics::uint2x2 rhs);

  /// @brief Method op_Division, addr 0x3282394, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 op_Division(::Unity::Mathematics::uint2x2 lhs, uint32_t rhs);

  /// @brief Method op_Division, addr 0x32823b8, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 op_Division(uint32_t lhs, ::Unity::Mathematics::uint2x2 rhs);

  /// @brief Method op_Equality, addr 0x3282800, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_Equality(::Unity::Mathematics::uint2x2 lhs, ::Unity::Mathematics::uint2x2 rhs);

  /// @brief Method op_Equality, addr 0x3282840, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_Equality(::Unity::Mathematics::uint2x2 lhs, uint32_t rhs);

  /// @brief Method op_Equality, addr 0x3282878, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_Equality(uint32_t lhs, ::Unity::Mathematics::uint2x2 rhs);

  /// @brief Method op_ExclusiveOr, addr 0x3282a1c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 op_ExclusiveOr(::Unity::Mathematics::uint2x2 lhs, ::Unity::Mathematics::uint2x2 rhs);

  /// @brief Method op_ExclusiveOr, addr 0x3282a28, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 op_ExclusiveOr(::Unity::Mathematics::uint2x2 lhs, uint32_t rhs);

  /// @brief Method op_ExclusiveOr, addr 0x3282a4c, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 op_ExclusiveOr(uint32_t lhs, ::Unity::Mathematics::uint2x2 rhs);

  /// @brief Method op_Explicit, addr 0x32820f8, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 op_Explicit___Unity__Mathematics__uint2x2(::Unity::Mathematics::bool2x2 v);

  /// @brief Method op_Explicit, addr 0x32821b4, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 op_Explicit___Unity__Mathematics__uint2x2(::Unity::Mathematics::double2x2 v);

  /// @brief Method op_Explicit, addr 0x328214c, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 op_Explicit___Unity__Mathematics__uint2x2(::Unity::Mathematics::float2x2 v);

  /// @brief Method op_Explicit, addr 0x328212c, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 op_Explicit___Unity__Mathematics__uint2x2(::Unity::Mathematics::int2x2 v);

  /// @brief Method op_Explicit, addr 0x32820e4, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 op_Explicit___Unity__Mathematics__uint2x2(bool v);

  /// @brief Method op_Explicit, addr 0x3282198, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 op_Explicit___Unity__Mathematics__uint2x2(double_t v);

  /// @brief Method op_Explicit, addr 0x3282130, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 op_Explicit___Unity__Mathematics__uint2x2(float_t v);

  /// @brief Method op_Explicit, addr 0x328211c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 op_Explicit___Unity__Mathematics__uint2x2(int32_t v);

  /// @brief Method op_GreaterThan, addr 0x3282638, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_GreaterThan(::Unity::Mathematics::uint2x2 lhs, ::Unity::Mathematics::uint2x2 rhs);

  /// @brief Method op_GreaterThan, addr 0x3282678, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_GreaterThan(::Unity::Mathematics::uint2x2 lhs, uint32_t rhs);

  /// @brief Method op_GreaterThan, addr 0x32826b0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_GreaterThan(uint32_t lhs, ::Unity::Mathematics::uint2x2 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x32826e8, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_GreaterThanOrEqual(::Unity::Mathematics::uint2x2 lhs, ::Unity::Mathematics::uint2x2 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x3282728, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_GreaterThanOrEqual(::Unity::Mathematics::uint2x2 lhs, uint32_t rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x3282760, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_GreaterThanOrEqual(uint32_t lhs, ::Unity::Mathematics::uint2x2 rhs);

  /// @brief Method op_Implicit, addr 0x32820d4, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 op_Implicit___Unity__Mathematics__uint2x2(uint32_t v);

  /// @brief Method op_Increment, addr 0x3282488, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 op_Increment(::Unity::Mathematics::uint2x2 val);

  /// @brief Method op_Inequality, addr 0x32828b0, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_Inequality(::Unity::Mathematics::uint2x2 lhs, ::Unity::Mathematics::uint2x2 rhs);

  /// @brief Method op_Inequality, addr 0x32828f0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_Inequality(::Unity::Mathematics::uint2x2 lhs, uint32_t rhs);

  /// @brief Method op_Inequality, addr 0x3282928, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_Inequality(uint32_t lhs, ::Unity::Mathematics::uint2x2 rhs);

  /// @brief Method op_LeftShift, addr 0x32827b8, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 op_LeftShift(::Unity::Mathematics::uint2x2 x, int32_t n);

  /// @brief Method op_LessThan, addr 0x32824d8, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_LessThan(::Unity::Mathematics::uint2x2 lhs, ::Unity::Mathematics::uint2x2 rhs);

  /// @brief Method op_LessThan, addr 0x3282518, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_LessThan(::Unity::Mathematics::uint2x2 lhs, uint32_t rhs);

  /// @brief Method op_LessThan, addr 0x3282550, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_LessThan(uint32_t lhs, ::Unity::Mathematics::uint2x2 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x3282588, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_LessThanOrEqual(::Unity::Mathematics::uint2x2 lhs, ::Unity::Mathematics::uint2x2 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x32825c8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_LessThanOrEqual(::Unity::Mathematics::uint2x2 lhs, uint32_t rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x3282600, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_LessThanOrEqual(uint32_t lhs, ::Unity::Mathematics::uint2x2 rhs);

  /// @brief Method op_Modulus, addr 0x32823e0, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 op_Modulus(::Unity::Mathematics::uint2x2 lhs, ::Unity::Mathematics::uint2x2 rhs);

  /// @brief Method op_Modulus, addr 0x328241c, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 op_Modulus(::Unity::Mathematics::uint2x2 lhs, uint32_t rhs);

  /// @brief Method op_Modulus, addr 0x3282450, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 op_Modulus(uint32_t lhs, ::Unity::Mathematics::uint2x2 rhs);

  /// @brief Method op_Multiply, addr 0x3282200, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 op_Multiply(::Unity::Mathematics::uint2x2 lhs, ::Unity::Mathematics::uint2x2 rhs);

  /// @brief Method op_Multiply, addr 0x328222c, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 op_Multiply(::Unity::Mathematics::uint2x2 lhs, uint32_t rhs);

  /// @brief Method op_Multiply, addr 0x3282250, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 op_Multiply(uint32_t lhs, ::Unity::Mathematics::uint2x2 rhs);

  /// @brief Method op_OnesComplement, addr 0x3282960, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 op_OnesComplement(::Unity::Mathematics::uint2x2 val);

  /// @brief Method op_RightShift, addr 0x32827dc, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 op_RightShift(::Unity::Mathematics::uint2x2 x, int32_t n);

  /// @brief Method op_Subtraction, addr 0x32822f0, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 op_Subtraction(::Unity::Mathematics::uint2x2 lhs, ::Unity::Mathematics::uint2x2 rhs);

  /// @brief Method op_Subtraction, addr 0x328231c, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 op_Subtraction(::Unity::Mathematics::uint2x2 lhs, uint32_t rhs);

  /// @brief Method op_Subtraction, addr 0x3282340, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 op_Subtraction(uint32_t lhs, ::Unity::Mathematics::uint2x2 rhs);

  /// @brief Method op_UnaryNegation, addr 0x3282798, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 op_UnaryNegation(::Unity::Mathematics::uint2x2 val);

  /// @brief Method op_UnaryPlus, addr 0x32827b4, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2x2 op_UnaryPlus(::Unity::Mathematics::uint2x2 val);

  static inline void setStaticF_identity(::Unity::Mathematics::uint2x2 value);

  static inline void setStaticF_zero(::Unity::Mathematics::uint2x2 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr uint2x2();

  // Ctor Parameters [CppParam { name: "c0", ty: "::Unity::Mathematics::uint2", modifiers: "", def_value: None }, CppParam { name: "c1", ty: "::Unity::Mathematics::uint2", modifiers: "", def_value:
  // None }]
  constexpr uint2x2(::Unity::Mathematics::uint2 c0, ::Unity::Mathematics::uint2 c1) noexcept;

  /// @brief Field c0, offset: 0x0, size: 0x8, def value: None
  ::Unity::Mathematics::uint2 c0;

  /// @brief Field c1, offset: 0x8, size: 0x8, def value: None
  ::Unity::Mathematics::uint2 c1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::uint2x2, 0x10>, "Size mismatch!");

static_assert(offsetof(::Unity::Mathematics::uint2x2, c0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::uint2x2, c1) == 0x8, "Offset mismatch!");

} // namespace Unity::Mathematics
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::uint2x2, "Unity.Mathematics", "uint2x2");

#pragma once
// IWYU pragma private; include "Unity/Mathematics/uint4x2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__uint4_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(uint4x2)
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
struct bool4x2;
}
namespace Unity::Mathematics {
struct double4x2;
}
namespace Unity::Mathematics {
struct float4x2;
}
namespace Unity::Mathematics {
struct int4x2;
}
namespace Unity::Mathematics {
struct uint4;
}
// Forward declare root types
namespace Unity::Mathematics {
struct uint4x2;
}
// Write type traits
MARK_VAL_T(::Unity::Mathematics::uint4x2);
DEFINE_IL2CPP_CLASS(::Unity::Mathematics::uint4x2, "Unity.Mathematics", "uint4x2");
// [DefaultMember("Item")]
// [Il2CppEagerStaticClassConstruction]
// Dependencies Unity.Mathematics.uint4
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.uint4x2
struct CORDL_TYPE uint4x2 {
public:
  // Declarations
  __declspec(property(get = get_Item)) ::Unity::Mathematics::uint4 Item[];

  /// @brief Field zero, offset 0xffffffff, size 0x20
  __declspec(property(get = getStaticF_zero, put = setStaticF_zero)) ::Unity::Mathematics::uint4x2 zero;

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::uint4x2>"
  constexpr operator ::System::IEquatable_1<::Unity::Mathematics::uint4x2>*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Method Equals, addr 0x6a47810, size 0xec, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x6a47784, size 0x8c, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Mathematics::uint4x2 rhs);

  /// @brief Method GetHashCode, addr 0x6a478fc, size 0x9c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x6a47998, size 0x2a0, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x6a47c38, size 0x29c, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method .ctor, addr 0x6a46150, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::uint4 c0, ::Unity::Mathematics::uint4 c1);

  /// @brief Method .ctor, addr 0x6a4615c, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(uint32_t m00, uint32_t m01, uint32_t m10, uint32_t m11, uint32_t m20, uint32_t m21, uint32_t m30, uint32_t m31);

  /// @brief Method .ctor, addr 0x6a461a0, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::bool4x2 v);

  /// @brief Method .ctor, addr 0x6a46310, size 0xac, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::double4x2 v);

  /// @brief Method .ctor, addr 0x6a46244, size 0xac, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float4x2 v);

  /// @brief Method .ctor, addr 0x6a46210, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::int4x2 v);

  /// @brief Method .ctor, addr 0x6a46188, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(bool v);

  /// @brief Method .ctor, addr 0x6a462f0, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(double_t v);

  /// @brief Method .ctor, addr 0x6a46224, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(float_t v);

  /// @brief Method .ctor, addr 0x6a461fc, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(int32_t v);

  /// @brief Method .ctor, addr 0x6a46174, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(uint32_t v);

  static inline ::Unity::Mathematics::uint4x2 getStaticF_zero();

  /// @brief Method get_Item, addr 0x6a4777c, size 0x8, virtual false, abstract: false, final false
  inline ::by_ref<::Unity::Mathematics::uint4> get_Item(int32_t index);

  /// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::uint4x2>"
  constexpr ::System::IEquatable_1<::Unity::Mathematics::uint4x2>* i___System__IEquatable_1___Unity__Mathematics__uint4x2_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Method op_Addition, addr 0x6a466f8, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x2 op_Addition(::Unity::Mathematics::uint4x2 lhs, ::Unity::Mathematics::uint4x2 rhs);

  /// @brief Method op_Addition, addr 0x6a46764, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x2 op_Addition(::Unity::Mathematics::uint4x2 lhs, uint32_t rhs);

  /// @brief Method op_Addition, addr 0x6a467ac, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x2 op_Addition(uint32_t lhs, ::Unity::Mathematics::uint4x2 rhs);

  /// @brief Method op_BitwiseAnd, addr 0x6a47584, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x2 op_BitwiseAnd(::Unity::Mathematics::uint4x2 lhs, ::Unity::Mathematics::uint4x2 rhs);

  /// @brief Method op_BitwiseAnd, addr 0x6a4759c, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x2 op_BitwiseAnd(::Unity::Mathematics::uint4x2 lhs, uint32_t rhs);

  /// @brief Method op_BitwiseAnd, addr 0x6a475e4, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x2 op_BitwiseAnd(uint32_t lhs, ::Unity::Mathematics::uint4x2 rhs);

  /// @brief Method op_BitwiseOr, addr 0x6a4762c, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x2 op_BitwiseOr(::Unity::Mathematics::uint4x2 lhs, ::Unity::Mathematics::uint4x2 rhs);

  /// @brief Method op_BitwiseOr, addr 0x6a47644, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x2 op_BitwiseOr(::Unity::Mathematics::uint4x2 lhs, uint32_t rhs);

  /// @brief Method op_BitwiseOr, addr 0x6a4768c, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x2 op_BitwiseOr(uint32_t lhs, ::Unity::Mathematics::uint4x2 rhs);

  /// @brief Method op_Decrement, addr 0x6a46ba4, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x2 op_Decrement(::Unity::Mathematics::uint4x2 val);

  /// @brief Method op_Division, addr 0x6a468f0, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x2 op_Division(::Unity::Mathematics::uint4x2 lhs, ::Unity::Mathematics::uint4x2 rhs);

  /// @brief Method op_Division, addr 0x6a4695c, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x2 op_Division(::Unity::Mathematics::uint4x2 lhs, uint32_t rhs);

  /// @brief Method op_Division, addr 0x6a469a8, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x2 op_Division(uint32_t lhs, ::Unity::Mathematics::uint4x2 rhs);

  /// @brief Method op_Equality, addr 0x6a47270, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_Equality(::Unity::Mathematics::uint4x2 lhs, ::Unity::Mathematics::uint4x2 rhs);

  /// @brief Method op_Equality, addr 0x6a47300, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_Equality(::Unity::Mathematics::uint4x2 lhs, uint32_t rhs);

  /// @brief Method op_Equality, addr 0x6a47378, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_Equality(uint32_t lhs, ::Unity::Mathematics::uint4x2 rhs);

  /// @brief Method op_ExclusiveOr, addr 0x6a476d4, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x2 op_ExclusiveOr(::Unity::Mathematics::uint4x2 lhs, ::Unity::Mathematics::uint4x2 rhs);

  /// @brief Method op_ExclusiveOr, addr 0x6a476ec, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x2 op_ExclusiveOr(::Unity::Mathematics::uint4x2 lhs, uint32_t rhs);

  /// @brief Method op_ExclusiveOr, addr 0x6a47734, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x2 op_ExclusiveOr(uint32_t lhs, ::Unity::Mathematics::uint4x2 rhs);

  /// @brief Method op_Explicit, addr 0x6a463e8, size 0x5c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x2 op_Explicit___Unity__Mathematics__uint4x2(::Unity::Mathematics::bool4x2 v);

  /// @brief Method op_Explicit, addr 0x6a46550, size 0xac, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x2 op_Explicit___Unity__Mathematics__uint4x2(::Unity::Mathematics::double4x2 v);

  /// @brief Method op_Explicit, addr 0x6a46484, size 0xac, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x2 op_Explicit___Unity__Mathematics__uint4x2(::Unity::Mathematics::float4x2 v);

  /// @brief Method op_Explicit, addr 0x6a46458, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x2 op_Explicit___Unity__Mathematics__uint4x2(::Unity::Mathematics::int4x2 v);

  /// @brief Method op_Explicit, addr 0x6a463d0, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x2 op_Explicit___Unity__Mathematics__uint4x2(bool v);

  /// @brief Method op_Explicit, addr 0x6a46530, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x2 op_Explicit___Unity__Mathematics__uint4x2(double_t v);

  /// @brief Method op_Explicit, addr 0x6a46464, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x2 op_Explicit___Unity__Mathematics__uint4x2(float_t v);

  /// @brief Method op_Explicit, addr 0x6a46444, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x2 op_Explicit___Unity__Mathematics__uint4x2(int32_t v);

  /// @brief Method op_GreaterThan, addr 0x6a46eb4, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_GreaterThan(::Unity::Mathematics::uint4x2 lhs, ::Unity::Mathematics::uint4x2 rhs);

  /// @brief Method op_GreaterThan, addr 0x6a46f34, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_GreaterThan(::Unity::Mathematics::uint4x2 lhs, uint32_t rhs);

  /// @brief Method op_GreaterThan, addr 0x6a46fac, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_GreaterThan(uint32_t lhs, ::Unity::Mathematics::uint4x2 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x6a47024, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_GreaterThanOrEqual(::Unity::Mathematics::uint4x2 lhs, ::Unity::Mathematics::uint4x2 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x6a470a4, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_GreaterThanOrEqual(::Unity::Mathematics::uint4x2 lhs, uint32_t rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x6a4711c, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_GreaterThanOrEqual(uint32_t lhs, ::Unity::Mathematics::uint4x2 rhs);

  /// @brief Method op_Implicit, addr 0x6a463bc, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x2 op_Implicit___Unity__Mathematics__uint4x2(uint32_t v);

  /// @brief Method op_Increment, addr 0x6a46b68, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x2 op_Increment(::Unity::Mathematics::uint4x2 val);

  /// @brief Method op_Inequality, addr 0x6a473f0, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_Inequality(::Unity::Mathematics::uint4x2 lhs, ::Unity::Mathematics::uint4x2 rhs);

  /// @brief Method op_Inequality, addr 0x6a47480, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_Inequality(::Unity::Mathematics::uint4x2 lhs, uint32_t rhs);

  /// @brief Method op_Inequality, addr 0x6a474f8, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_Inequality(uint32_t lhs, ::Unity::Mathematics::uint4x2 rhs);

  /// @brief Method op_LeftShift, addr 0x6a471d4, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x2 op_LeftShift(::Unity::Mathematics::uint4x2 x, int32_t n);

  /// @brief Method op_LessThan, addr 0x6a46bd4, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_LessThan(::Unity::Mathematics::uint4x2 lhs, ::Unity::Mathematics::uint4x2 rhs);

  /// @brief Method op_LessThan, addr 0x6a46c54, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_LessThan(::Unity::Mathematics::uint4x2 lhs, uint32_t rhs);

  /// @brief Method op_LessThan, addr 0x6a46ccc, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_LessThan(uint32_t lhs, ::Unity::Mathematics::uint4x2 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x6a46d44, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_LessThanOrEqual(::Unity::Mathematics::uint4x2 lhs, ::Unity::Mathematics::uint4x2 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x6a46dc4, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_LessThanOrEqual(::Unity::Mathematics::uint4x2 lhs, uint32_t rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x6a46e3c, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_LessThanOrEqual(uint32_t lhs, ::Unity::Mathematics::uint4x2 rhs);

  /// @brief Method op_Modulus, addr 0x6a469f4, size 0x9c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x2 op_Modulus(::Unity::Mathematics::uint4x2 lhs, ::Unity::Mathematics::uint4x2 rhs);

  /// @brief Method op_Modulus, addr 0x6a46a90, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x2 op_Modulus(::Unity::Mathematics::uint4x2 lhs, uint32_t rhs);

  /// @brief Method op_Modulus, addr 0x6a46afc, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x2 op_Modulus(uint32_t lhs, ::Unity::Mathematics::uint4x2 rhs);

  /// @brief Method op_Multiply, addr 0x6a465fc, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x2 op_Multiply(::Unity::Mathematics::uint4x2 lhs, ::Unity::Mathematics::uint4x2 rhs);

  /// @brief Method op_Multiply, addr 0x6a46668, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x2 op_Multiply(::Unity::Mathematics::uint4x2 lhs, uint32_t rhs);

  /// @brief Method op_Multiply, addr 0x6a466b0, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x2 op_Multiply(uint32_t lhs, ::Unity::Mathematics::uint4x2 rhs);

  /// @brief Method op_OnesComplement, addr 0x6a47570, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x2 op_OnesComplement(::Unity::Mathematics::uint4x2 val);

  /// @brief Method op_RightShift, addr 0x6a47220, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x2 op_RightShift(::Unity::Mathematics::uint4x2 x, int32_t n);

  /// @brief Method op_Subtraction, addr 0x6a467f4, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x2 op_Subtraction(::Unity::Mathematics::uint4x2 lhs, ::Unity::Mathematics::uint4x2 rhs);

  /// @brief Method op_Subtraction, addr 0x6a46860, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x2 op_Subtraction(::Unity::Mathematics::uint4x2 lhs, uint32_t rhs);

  /// @brief Method op_Subtraction, addr 0x6a468a8, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x2 op_Subtraction(uint32_t lhs, ::Unity::Mathematics::uint4x2 rhs);

  /// @brief Method op_UnaryNegation, addr 0x6a47194, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x2 op_UnaryNegation(::Unity::Mathematics::uint4x2 val);

  /// @brief Method op_UnaryPlus, addr 0x6a471c8, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x2 op_UnaryPlus(::Unity::Mathematics::uint4x2 val);

  static inline void setStaticF_zero(::Unity::Mathematics::uint4x2 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr uint4x2();

  // Ctor Parameters [CppParam { name: "c0", ty: "::Unity::Mathematics::uint4", modifiers: "", def_value: None, comment: None }, CppParam { name: "c1", ty: "::Unity::Mathematics::uint4", modifiers:
  // "", def_value: None, comment: None }]
  constexpr uint4x2(::Unity::Mathematics::uint4 c0, ::Unity::Mathematics::uint4 c1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13453 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field c0, offset: 0x0, size: 0x10, def value: None
  ::Unity::Mathematics::uint4 c0;

  /// @brief Field c1, offset: 0x10, size: 0x10, def value: None
  ::Unity::Mathematics::uint4 c1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::uint4x2, c0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::uint4x2, c1) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Unity::Mathematics::uint4x2) == 0x20, "Size mismatch!");

} // namespace Unity::Mathematics

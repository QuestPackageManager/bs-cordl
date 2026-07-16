#pragma once
// IWYU pragma private; include "Unity/Mathematics/int4x2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__int4_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(int4x2)
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
struct int4;
}
namespace Unity::Mathematics {
struct uint4x2;
}
// Forward declare root types
namespace Unity::Mathematics {
struct int4x2;
}
// Write type traits
MARK_VAL_T(::Unity::Mathematics::int4x2);
DEFINE_IL2CPP_CLASS(::Unity::Mathematics::int4x2, "Unity.Mathematics", "int4x2");
// Dependencies Unity.Mathematics.int4
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.int4x2
struct CORDL_TYPE int4x2 {
public:
  // Declarations
  __declspec(property(get = get_Item)) ::Unity::Mathematics::int4 Item[];

  /// @brief Field zero, offset 0xffffffff, size 0x20
  __declspec(property(get = getStaticF_zero, put = setStaticF_zero)) ::Unity::Mathematics::int4x2 zero;

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::int4x2>"
  constexpr operator ::System::IEquatable_1<::Unity::Mathematics::int4x2>*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Method Equals, addr 0x666873c, size 0xec, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x66686b0, size 0x8c, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Mathematics::int4x2 rhs);

  /// @brief Method GetHashCode, addr 0x6668828, size 0x9c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x66688c4, size 0x2a0, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x6668b64, size 0x29c, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method .ctor, addr 0x6667050, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::int4 c0, ::Unity::Mathematics::int4 c1);

  /// @brief Method .ctor, addr 0x666705c, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(int32_t m00, int32_t m01, int32_t m10, int32_t m11, int32_t m20, int32_t m21, int32_t m30, int32_t m31);

  /// @brief Method .ctor, addr 0x66670a0, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::bool4x2 v);

  /// @brief Method .ctor, addr 0x6667218, size 0xb4, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::double4x2 v);

  /// @brief Method .ctor, addr 0x666714c, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float4x2 v);

  /// @brief Method .ctor, addr 0x6667110, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::uint4x2 v);

  /// @brief Method .ctor, addr 0x6667088, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(bool v);

  /// @brief Method .ctor, addr 0x66671f0, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(double_t v);

  /// @brief Method .ctor, addr 0x6667124, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(float_t v);

  /// @brief Method .ctor, addr 0x6667074, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(int32_t v);

  /// @brief Method .ctor, addr 0x66670fc, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(uint32_t v);

  static inline ::Unity::Mathematics::int4x2 getStaticF_zero();

  /// @brief Method get_Item, addr 0x66686a8, size 0x8, virtual false, abstract: false, final false
  inline ::by_ref<::Unity::Mathematics::int4> get_Item(int32_t index);

  /// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::int4x2>"
  constexpr ::System::IEquatable_1<::Unity::Mathematics::int4x2>* i___System__IEquatable_1___Unity__Mathematics__int4x2_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Method op_Addition, addr 0x6667614, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 op_Addition(::Unity::Mathematics::int4x2 lhs, ::Unity::Mathematics::int4x2 rhs);

  /// @brief Method op_Addition, addr 0x6667680, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 op_Addition(::Unity::Mathematics::int4x2 lhs, int32_t rhs);

  /// @brief Method op_Addition, addr 0x66676c8, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 op_Addition(int32_t lhs, ::Unity::Mathematics::int4x2 rhs);

  /// @brief Method op_BitwiseAnd, addr 0x66684b0, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 op_BitwiseAnd(::Unity::Mathematics::int4x2 lhs, ::Unity::Mathematics::int4x2 rhs);

  /// @brief Method op_BitwiseAnd, addr 0x66684c8, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 op_BitwiseAnd(::Unity::Mathematics::int4x2 lhs, int32_t rhs);

  /// @brief Method op_BitwiseAnd, addr 0x6668510, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 op_BitwiseAnd(int32_t lhs, ::Unity::Mathematics::int4x2 rhs);

  /// @brief Method op_BitwiseOr, addr 0x6668558, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 op_BitwiseOr(::Unity::Mathematics::int4x2 lhs, ::Unity::Mathematics::int4x2 rhs);

  /// @brief Method op_BitwiseOr, addr 0x6668570, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 op_BitwiseOr(::Unity::Mathematics::int4x2 lhs, int32_t rhs);

  /// @brief Method op_BitwiseOr, addr 0x66685b8, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 op_BitwiseOr(int32_t lhs, ::Unity::Mathematics::int4x2 rhs);

  /// @brief Method op_Decrement, addr 0x6667ac0, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 op_Decrement(::Unity::Mathematics::int4x2 val);

  /// @brief Method op_Division, addr 0x666780c, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 op_Division(::Unity::Mathematics::int4x2 lhs, ::Unity::Mathematics::int4x2 rhs);

  /// @brief Method op_Division, addr 0x6667878, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 op_Division(::Unity::Mathematics::int4x2 lhs, int32_t rhs);

  /// @brief Method op_Division, addr 0x66678c4, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 op_Division(int32_t lhs, ::Unity::Mathematics::int4x2 rhs);

  /// @brief Method op_Equality, addr 0x666819c, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_Equality(::Unity::Mathematics::int4x2 lhs, ::Unity::Mathematics::int4x2 rhs);

  /// @brief Method op_Equality, addr 0x666822c, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_Equality(::Unity::Mathematics::int4x2 lhs, int32_t rhs);

  /// @brief Method op_Equality, addr 0x66682a4, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_Equality(int32_t lhs, ::Unity::Mathematics::int4x2 rhs);

  /// @brief Method op_ExclusiveOr, addr 0x6668600, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 op_ExclusiveOr(::Unity::Mathematics::int4x2 lhs, ::Unity::Mathematics::int4x2 rhs);

  /// @brief Method op_ExclusiveOr, addr 0x6668618, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 op_ExclusiveOr(::Unity::Mathematics::int4x2 lhs, int32_t rhs);

  /// @brief Method op_ExclusiveOr, addr 0x6668660, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 op_ExclusiveOr(int32_t lhs, ::Unity::Mathematics::int4x2 rhs);

  /// @brief Method op_Explicit, addr 0x66672f8, size 0x5c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 op_Explicit___Unity__Mathematics__int4x2(::Unity::Mathematics::bool4x2 v);

  /// @brief Method op_Explicit, addr 0x6667464, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 op_Explicit___Unity__Mathematics__int4x2(::Unity::Mathematics::double4x2 v);

  /// @brief Method op_Explicit, addr 0x666739c, size 0xa0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 op_Explicit___Unity__Mathematics__int4x2(::Unity::Mathematics::float4x2 v);

  /// @brief Method op_Explicit, addr 0x6667368, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 op_Explicit___Unity__Mathematics__int4x2(::Unity::Mathematics::uint4x2 v);

  /// @brief Method op_Explicit, addr 0x66672e0, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 op_Explicit___Unity__Mathematics__int4x2(bool v);

  /// @brief Method op_Explicit, addr 0x666743c, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 op_Explicit___Unity__Mathematics__int4x2(double_t v);

  /// @brief Method op_Explicit, addr 0x6667374, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 op_Explicit___Unity__Mathematics__int4x2(float_t v);

  /// @brief Method op_Explicit, addr 0x6667354, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 op_Explicit___Unity__Mathematics__int4x2(uint32_t v);

  /// @brief Method op_GreaterThan, addr 0x6667dd8, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_GreaterThan(::Unity::Mathematics::int4x2 lhs, ::Unity::Mathematics::int4x2 rhs);

  /// @brief Method op_GreaterThan, addr 0x6667e5c, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_GreaterThan(::Unity::Mathematics::int4x2 lhs, int32_t rhs);

  /// @brief Method op_GreaterThan, addr 0x6667ed4, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_GreaterThan(int32_t lhs, ::Unity::Mathematics::int4x2 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x6667f4c, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_GreaterThanOrEqual(::Unity::Mathematics::int4x2 lhs, ::Unity::Mathematics::int4x2 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x6667fd0, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_GreaterThanOrEqual(::Unity::Mathematics::int4x2 lhs, int32_t rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x6668048, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_GreaterThanOrEqual(int32_t lhs, ::Unity::Mathematics::int4x2 rhs);

  /// @brief Method op_Implicit, addr 0x66672cc, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 op_Implicit___Unity__Mathematics__int4x2(int32_t v);

  /// @brief Method op_Increment, addr 0x6667a84, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 op_Increment(::Unity::Mathematics::int4x2 val);

  /// @brief Method op_Inequality, addr 0x666831c, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_Inequality(::Unity::Mathematics::int4x2 lhs, ::Unity::Mathematics::int4x2 rhs);

  /// @brief Method op_Inequality, addr 0x66683ac, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_Inequality(::Unity::Mathematics::int4x2 lhs, int32_t rhs);

  /// @brief Method op_Inequality, addr 0x6668424, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_Inequality(int32_t lhs, ::Unity::Mathematics::int4x2 rhs);

  /// @brief Method op_LeftShift, addr 0x6668100, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 op_LeftShift(::Unity::Mathematics::int4x2 x, int32_t n);

  /// @brief Method op_LessThan, addr 0x6667af0, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_LessThan(::Unity::Mathematics::int4x2 lhs, ::Unity::Mathematics::int4x2 rhs);

  /// @brief Method op_LessThan, addr 0x6667b74, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_LessThan(::Unity::Mathematics::int4x2 lhs, int32_t rhs);

  /// @brief Method op_LessThan, addr 0x6667bec, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_LessThan(int32_t lhs, ::Unity::Mathematics::int4x2 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x6667c64, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_LessThanOrEqual(::Unity::Mathematics::int4x2 lhs, ::Unity::Mathematics::int4x2 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x6667ce8, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_LessThanOrEqual(::Unity::Mathematics::int4x2 lhs, int32_t rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x6667d60, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_LessThanOrEqual(int32_t lhs, ::Unity::Mathematics::int4x2 rhs);

  /// @brief Method op_Modulus, addr 0x6667910, size 0x9c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 op_Modulus(::Unity::Mathematics::int4x2 lhs, ::Unity::Mathematics::int4x2 rhs);

  /// @brief Method op_Modulus, addr 0x66679ac, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 op_Modulus(::Unity::Mathematics::int4x2 lhs, int32_t rhs);

  /// @brief Method op_Modulus, addr 0x6667a18, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 op_Modulus(int32_t lhs, ::Unity::Mathematics::int4x2 rhs);

  /// @brief Method op_Multiply, addr 0x6667518, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 op_Multiply(::Unity::Mathematics::int4x2 lhs, ::Unity::Mathematics::int4x2 rhs);

  /// @brief Method op_Multiply, addr 0x6667584, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 op_Multiply(::Unity::Mathematics::int4x2 lhs, int32_t rhs);

  /// @brief Method op_Multiply, addr 0x66675cc, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 op_Multiply(int32_t lhs, ::Unity::Mathematics::int4x2 rhs);

  /// @brief Method op_OnesComplement, addr 0x666849c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 op_OnesComplement(::Unity::Mathematics::int4x2 val);

  /// @brief Method op_RightShift, addr 0x666814c, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 op_RightShift(::Unity::Mathematics::int4x2 x, int32_t n);

  /// @brief Method op_Subtraction, addr 0x6667710, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 op_Subtraction(::Unity::Mathematics::int4x2 lhs, ::Unity::Mathematics::int4x2 rhs);

  /// @brief Method op_Subtraction, addr 0x666777c, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 op_Subtraction(::Unity::Mathematics::int4x2 lhs, int32_t rhs);

  /// @brief Method op_Subtraction, addr 0x66677c4, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 op_Subtraction(int32_t lhs, ::Unity::Mathematics::int4x2 rhs);

  /// @brief Method op_UnaryNegation, addr 0x66680c0, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 op_UnaryNegation(::Unity::Mathematics::int4x2 val);

  /// @brief Method op_UnaryPlus, addr 0x66680f4, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int4x2 op_UnaryPlus(::Unity::Mathematics::int4x2 val);

  static inline void setStaticF_zero(::Unity::Mathematics::int4x2 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr int4x2();

  // Ctor Parameters [CppParam { name: "c0", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: None }, CppParam { name: "c1", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: None
  // }]
  constexpr int4x2(::Unity::Mathematics::int4 c0, ::Unity::Mathematics::int4 c1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13165 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field c0, offset: 0x0, size: 0x10, def value: None
  ::Unity::Mathematics::int4 c0;

  /// @brief Field c1, offset: 0x10, size: 0x10, def value: None
  ::Unity::Mathematics::int4 c1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::int4x2, c0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::int4x2, c1) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Unity::Mathematics::int4x2) == 0x20, "Size mismatch!");

} // namespace Unity::Mathematics

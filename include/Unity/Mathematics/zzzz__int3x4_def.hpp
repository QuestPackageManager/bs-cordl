#pragma once
// IWYU pragma private; include "Unity/Mathematics/int3x4.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__int3_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(int3x4)
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
struct bool3x4;
}
namespace Unity::Mathematics {
struct double3x4;
}
namespace Unity::Mathematics {
struct float3x4;
}
namespace Unity::Mathematics {
struct int3;
}
namespace Unity::Mathematics {
struct uint3x4;
}
// Forward declare root types
namespace Unity::Mathematics {
struct int3x4;
}
// Write type traits
MARK_VAL_T(::Unity::Mathematics::int3x4);
DEFINE_IL2CPP_CLASS(::Unity::Mathematics::int3x4, "Unity.Mathematics", "int3x4");
// [DefaultMember("Item")]
// [Il2CppEagerStaticClassConstruction]
// Dependencies Unity.Mathematics.int3
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.int3x4
struct CORDL_TYPE int3x4 {
public:
  // Declarations
  __declspec(property(get = get_Item)) ::Unity::Mathematics::int3 Item[];

  /// @brief Field zero, offset 0xffffffff, size 0x30
  __declspec(property(get = getStaticF_zero, put = setStaticF_zero)) ::Unity::Mathematics::int3x4 zero;

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::int3x4>"
  constexpr operator ::System::IEquatable_1<::Unity::Mathematics::int3x4>*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Method Equals, addr 0x6aa2d78, size 0x12c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x6aa2cac, size 0xcc, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Mathematics::int3x4 rhs);

  /// @brief Method GetHashCode, addr 0x6aa2ea4, size 0xdc, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x6aa2f80, size 0x3a0, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x6aa3320, size 0x39c, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method .ctor, addr 0x6aa04d8, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::int3 c0, ::Unity::Mathematics::int3 c1, ::Unity::Mathematics::int3 c2, ::Unity::Mathematics::int3 c3);

  /// @brief Method .ctor, addr 0x6aa0504, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(int32_t m00, int32_t m01, int32_t m02, int32_t m03, int32_t m10, int32_t m11, int32_t m12, int32_t m13, int32_t m20, int32_t m21, int32_t m22, int32_t m23);

  /// @brief Method .ctor, addr 0x6aa0598, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::bool3x4 v);

  /// @brief Method .ctor, addr 0x6aa0800, size 0x104, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::double3x4 v);

  /// @brief Method .ctor, addr 0x6aa06bc, size 0x104, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float3x4 v);

  /// @brief Method .ctor, addr 0x6aa0638, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::uint3x4 v);

  /// @brief Method .ctor, addr 0x6aa0568, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(bool v);

  /// @brief Method .ctor, addr 0x6aa07c0, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(double_t v);

  /// @brief Method .ctor, addr 0x6aa067c, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(float_t v);

  /// @brief Method .ctor, addr 0x6aa053c, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(int32_t v);

  /// @brief Method .ctor, addr 0x6aa060c, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(uint32_t v);

  static inline ::Unity::Mathematics::int3x4 getStaticF_zero();

  /// @brief Method get_Item, addr 0x6aa2ca0, size 0xc, virtual false, abstract: false, final false
  inline ::by_ref<::Unity::Mathematics::int3> get_Item(int32_t index);

  /// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::int3x4>"
  constexpr ::System::IEquatable_1<::Unity::Mathematics::int3x4>* i___System__IEquatable_1___Unity__Mathematics__int3x4_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Method op_Addition, addr 0x6aa0e78, size 0xc4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 op_Addition(::Unity::Mathematics::int3x4 lhs, ::Unity::Mathematics::int3x4 rhs);

  /// @brief Method op_Addition, addr 0x6aa0f3c, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 op_Addition(::Unity::Mathematics::int3x4 lhs, int32_t rhs);

  /// @brief Method op_Addition, addr 0x6aa0fb8, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 op_Addition(int32_t lhs, ::Unity::Mathematics::int3x4 rhs);

  /// @brief Method op_BitwiseAnd, addr 0x6aa282c, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 op_BitwiseAnd(::Unity::Mathematics::int3x4 lhs, ::Unity::Mathematics::int3x4 rhs);

  /// @brief Method op_BitwiseAnd, addr 0x6aa28b0, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 op_BitwiseAnd(::Unity::Mathematics::int3x4 lhs, int32_t rhs);

  /// @brief Method op_BitwiseAnd, addr 0x6aa292c, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 op_BitwiseAnd(int32_t lhs, ::Unity::Mathematics::int3x4 rhs);

  /// @brief Method op_BitwiseOr, addr 0x6aa29a8, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 op_BitwiseOr(::Unity::Mathematics::int3x4 lhs, ::Unity::Mathematics::int3x4 rhs);

  /// @brief Method op_BitwiseOr, addr 0x6aa2a2c, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 op_BitwiseOr(::Unity::Mathematics::int3x4 lhs, int32_t rhs);

  /// @brief Method op_BitwiseOr, addr 0x6aa2aa8, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 op_BitwiseOr(int32_t lhs, ::Unity::Mathematics::int3x4 rhs);

  /// @brief Method op_Decrement, addr 0x6aa1700, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 op_Decrement(::Unity::Mathematics::int3x4 val);

  /// @brief Method op_Division, addr 0x6aa11f0, size 0x9c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 op_Division(::Unity::Mathematics::int3x4 lhs, ::Unity::Mathematics::int3x4 rhs);

  /// @brief Method op_Division, addr 0x6aa128c, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 op_Division(::Unity::Mathematics::int3x4 lhs, int32_t rhs);

  /// @brief Method op_Division, addr 0x6aa1308, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 op_Division(int32_t lhs, ::Unity::Mathematics::int3x4 rhs);

  /// @brief Method op_Equality, addr 0x6aa22c8, size 0x104, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_Equality(::Unity::Mathematics::int3x4 lhs, ::Unity::Mathematics::int3x4 rhs);

  /// @brief Method op_Equality, addr 0x6aa23cc, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_Equality(::Unity::Mathematics::int3x4 lhs, int32_t rhs);

  /// @brief Method op_Equality, addr 0x6aa2488, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_Equality(int32_t lhs, ::Unity::Mathematics::int3x4 rhs);

  /// @brief Method op_ExclusiveOr, addr 0x6aa2b24, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 op_ExclusiveOr(::Unity::Mathematics::int3x4 lhs, ::Unity::Mathematics::int3x4 rhs);

  /// @brief Method op_ExclusiveOr, addr 0x6aa2ba8, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 op_ExclusiveOr(::Unity::Mathematics::int3x4 lhs, int32_t rhs);

  /// @brief Method op_ExclusiveOr, addr 0x6aa2c24, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 op_ExclusiveOr(int32_t lhs, ::Unity::Mathematics::int3x4 rhs);

  /// @brief Method op_Explicit, addr 0x6aa0960, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 op_Explicit___Unity__Mathematics__int3x4(::Unity::Mathematics::bool3x4 v);

  /// @brief Method op_Explicit, addr 0x6aa0bc0, size 0xfc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 op_Explicit___Unity__Mathematics__int3x4(::Unity::Mathematics::double3x4 v);

  /// @brief Method op_Explicit, addr 0x6aa0a84, size 0xfc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 op_Explicit___Unity__Mathematics__int3x4(::Unity::Mathematics::float3x4 v);

  /// @brief Method op_Explicit, addr 0x6aa0a00, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 op_Explicit___Unity__Mathematics__int3x4(::Unity::Mathematics::uint3x4 v);

  /// @brief Method op_Explicit, addr 0x6aa0930, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 op_Explicit___Unity__Mathematics__int3x4(bool v);

  /// @brief Method op_Explicit, addr 0x6aa0b80, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 op_Explicit___Unity__Mathematics__int3x4(double_t v);

  /// @brief Method op_Explicit, addr 0x6aa0a44, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 op_Explicit___Unity__Mathematics__int3x4(float_t v);

  /// @brief Method op_Explicit, addr 0x6aa09d4, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 op_Explicit___Unity__Mathematics__int3x4(uint32_t v);

  /// @brief Method op_GreaterThan, addr 0x6aa1c60, size 0xd8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_GreaterThan(::Unity::Mathematics::int3x4 lhs, ::Unity::Mathematics::int3x4 rhs);

  /// @brief Method op_GreaterThan, addr 0x6aa1d38, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_GreaterThan(::Unity::Mathematics::int3x4 lhs, int32_t rhs);

  /// @brief Method op_GreaterThan, addr 0x6aa1df4, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_GreaterThan(int32_t lhs, ::Unity::Mathematics::int3x4 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x6aa1eb0, size 0xd8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_GreaterThanOrEqual(::Unity::Mathematics::int3x4 lhs, ::Unity::Mathematics::int3x4 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x6aa1f88, size 0xc0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_GreaterThanOrEqual(::Unity::Mathematics::int3x4 lhs, int32_t rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x6aa2048, size 0xc0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_GreaterThanOrEqual(int32_t lhs, ::Unity::Mathematics::int3x4 rhs);

  /// @brief Method op_Implicit, addr 0x6aa0904, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 op_Implicit___Unity__Mathematics__int3x4(int32_t v);

  /// @brief Method op_Increment, addr 0x6aa1648, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 op_Increment(::Unity::Mathematics::int3x4 val);

  /// @brief Method op_Inequality, addr 0x6aa2544, size 0x104, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_Inequality(::Unity::Mathematics::int3x4 lhs, ::Unity::Mathematics::int3x4 rhs);

  /// @brief Method op_Inequality, addr 0x6aa2648, size 0xc0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_Inequality(::Unity::Mathematics::int3x4 lhs, int32_t rhs);

  /// @brief Method op_Inequality, addr 0x6aa2708, size 0xc0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_Inequality(int32_t lhs, ::Unity::Mathematics::int3x4 rhs);

  /// @brief Method op_LeftShift, addr 0x6aa21d0, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 op_LeftShift(::Unity::Mathematics::int3x4 x, int32_t n);

  /// @brief Method op_LessThan, addr 0x6aa17b8, size 0xd8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_LessThan(::Unity::Mathematics::int3x4 lhs, ::Unity::Mathematics::int3x4 rhs);

  /// @brief Method op_LessThan, addr 0x6aa1890, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_LessThan(::Unity::Mathematics::int3x4 lhs, int32_t rhs);

  /// @brief Method op_LessThan, addr 0x6aa194c, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_LessThan(int32_t lhs, ::Unity::Mathematics::int3x4 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x6aa1a08, size 0xd8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_LessThanOrEqual(::Unity::Mathematics::int3x4 lhs, ::Unity::Mathematics::int3x4 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x6aa1ae0, size 0xc0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_LessThanOrEqual(::Unity::Mathematics::int3x4 lhs, int32_t rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x6aa1ba0, size 0xc0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_LessThanOrEqual(int32_t lhs, ::Unity::Mathematics::int3x4 rhs);

  /// @brief Method op_Modulus, addr 0x6aa1384, size 0x12c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 op_Modulus(::Unity::Mathematics::int3x4 lhs, ::Unity::Mathematics::int3x4 rhs);

  /// @brief Method op_Modulus, addr 0x6aa14b0, size 0xcc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 op_Modulus(::Unity::Mathematics::int3x4 lhs, int32_t rhs);

  /// @brief Method op_Modulus, addr 0x6aa157c, size 0xcc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 op_Modulus(int32_t lhs, ::Unity::Mathematics::int3x4 rhs);

  /// @brief Method op_Multiply, addr 0x6aa0cbc, size 0xc4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 op_Multiply(::Unity::Mathematics::int3x4 lhs, ::Unity::Mathematics::int3x4 rhs);

  /// @brief Method op_Multiply, addr 0x6aa0d80, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 op_Multiply(::Unity::Mathematics::int3x4 lhs, int32_t rhs);

  /// @brief Method op_Multiply, addr 0x6aa0dfc, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 op_Multiply(int32_t lhs, ::Unity::Mathematics::int3x4 rhs);

  /// @brief Method op_OnesComplement, addr 0x6aa27c8, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 op_OnesComplement(::Unity::Mathematics::int3x4 val);

  /// @brief Method op_RightShift, addr 0x6aa224c, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 op_RightShift(::Unity::Mathematics::int3x4 x, int32_t n);

  /// @brief Method op_Subtraction, addr 0x6aa1034, size 0xc4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 op_Subtraction(::Unity::Mathematics::int3x4 lhs, ::Unity::Mathematics::int3x4 rhs);

  /// @brief Method op_Subtraction, addr 0x6aa10f8, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 op_Subtraction(::Unity::Mathematics::int3x4 lhs, int32_t rhs);

  /// @brief Method op_Subtraction, addr 0x6aa1174, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 op_Subtraction(int32_t lhs, ::Unity::Mathematics::int3x4 rhs);

  /// @brief Method op_UnaryNegation, addr 0x6aa2108, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 op_UnaryNegation(::Unity::Mathematics::int3x4 val);

  /// @brief Method op_UnaryPlus, addr 0x6aa218c, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 op_UnaryPlus(::Unity::Mathematics::int3x4 val);

  static inline void setStaticF_zero(::Unity::Mathematics::int3x4 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr int3x4();

  // Ctor Parameters [CppParam { name: "c0", ty: "::Unity::Mathematics::int3", modifiers: "", def_value: None, comment: None }, CppParam { name: "c1", ty: "::Unity::Mathematics::int3", modifiers: "",
  // def_value: None, comment: None }, CppParam { name: "c2", ty: "::Unity::Mathematics::int3", modifiers: "", def_value: None, comment: None }, CppParam { name: "c3", ty:
  // "::Unity::Mathematics::int3", modifiers: "", def_value: None, comment: None }]
  constexpr int3x4(::Unity::Mathematics::int3 c0, ::Unity::Mathematics::int3 c1, ::Unity::Mathematics::int3 c2, ::Unity::Mathematics::int3 c3) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13431 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field c0, offset: 0x0, size: 0xc, def value: None
  ::Unity::Mathematics::int3 c0;

  /// @brief Field c1, offset: 0xc, size: 0xc, def value: None
  ::Unity::Mathematics::int3 c1;

  /// @brief Field c2, offset: 0x18, size: 0xc, def value: None
  ::Unity::Mathematics::int3 c2;

  /// @brief Field c3, offset: 0x24, size: 0xc, def value: None
  ::Unity::Mathematics::int3 c3;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::int3x4, c0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::int3x4, c1) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::int3x4, c2) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::int3x4, c3) == 0x24, "Offset mismatch!");

static_assert(sizeof(::Unity::Mathematics::int3x4) == 0x30, "Size mismatch!");

} // namespace Unity::Mathematics

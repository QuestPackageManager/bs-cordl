#pragma once
// IWYU pragma private; include "Unity/Mathematics/uint4x3.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__uint4_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
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
DEFINE_IL2CPP_CLASS(::Unity::Mathematics::uint4x3, "Unity.Mathematics", "uint4x3");
// [DefaultMember("Item")]
// [Il2CppEagerStaticClassConstruction]
// Dependencies Unity.Mathematics.uint4
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.uint4x3
struct CORDL_TYPE uint4x3 {
public:
  // Declarations
  __declspec(property(get = get_Item)) ::Unity::Mathematics::uint4 Item[];

  /// @brief Field zero, offset 0xffffffff, size 0x30
  __declspec(property(get = getStaticF_zero, put = setStaticF_zero)) ::Unity::Mathematics::uint4x3 zero;

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::uint4x3>"
  constexpr operator ::System::IEquatable_1<::Unity::Mathematics::uint4x3>*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Method Equals, addr 0x6a86d20, size 0x12c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x6a86c54, size 0xcc, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Mathematics::uint4x3 rhs);

  /// @brief Method GetHashCode, addr 0x6a86e4c, size 0xd8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x6a86f24, size 0x3a0, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x6a872c4, size 0x39c, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method .ctor, addr 0x6a84b50, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::uint4 c0, ::Unity::Mathematics::uint4 c1, ::Unity::Mathematics::uint4 c2);

  /// @brief Method .ctor, addr 0x6a84b60, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(uint32_t m00, uint32_t m01, uint32_t m02, uint32_t m10, uint32_t m11, uint32_t m12, uint32_t m20, uint32_t m21, uint32_t m22, uint32_t m30, uint32_t m31, uint32_t m32);

  /// @brief Method .ctor, addr 0x6a84bcc, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::bool4x3 v);

  /// @brief Method .ctor, addr 0x6a84dc0, size 0x100, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::double4x3 v);

  /// @brief Method .ctor, addr 0x6a84c9c, size 0x100, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float4x3 v);

  /// @brief Method .ctor, addr 0x6a84c5c, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::int4x3 v);

  /// @brief Method .ctor, addr 0x6a84bb0, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(bool v);

  /// @brief Method .ctor, addr 0x6a84d9c, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(double_t v);

  /// @brief Method .ctor, addr 0x6a84c78, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(float_t v);

  /// @brief Method .ctor, addr 0x6a84c44, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(int32_t v);

  /// @brief Method .ctor, addr 0x6a84b98, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(uint32_t v);

  static inline ::Unity::Mathematics::uint4x3 getStaticF_zero();

  /// @brief Method get_Item, addr 0x6a86c4c, size 0x8, virtual false, abstract: false, final false
  inline ::by_ref<::Unity::Mathematics::uint4> get_Item(int32_t index);

  /// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::uint4x3>"
  constexpr ::System::IEquatable_1<::Unity::Mathematics::uint4x3>* i___System__IEquatable_1___Unity__Mathematics__uint4x3_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Method op_Addition, addr 0x6a85360, size 0xa0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 op_Addition(::Unity::Mathematics::uint4x3 lhs, ::Unity::Mathematics::uint4x3 rhs);

  /// @brief Method op_Addition, addr 0x6a85400, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 op_Addition(::Unity::Mathematics::uint4x3 lhs, uint32_t rhs);

  /// @brief Method op_Addition, addr 0x6a8546c, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 op_Addition(uint32_t lhs, ::Unity::Mathematics::uint4x3 rhs);

  /// @brief Method op_BitwiseAnd, addr 0x6a8694c, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 op_BitwiseAnd(::Unity::Mathematics::uint4x3 lhs, ::Unity::Mathematics::uint4x3 rhs);

  /// @brief Method op_BitwiseAnd, addr 0x6a86974, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 op_BitwiseAnd(::Unity::Mathematics::uint4x3 lhs, uint32_t rhs);

  /// @brief Method op_BitwiseAnd, addr 0x6a869e0, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 op_BitwiseAnd(uint32_t lhs, ::Unity::Mathematics::uint4x3 rhs);

  /// @brief Method op_BitwiseOr, addr 0x6a86a4c, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 op_BitwiseOr(::Unity::Mathematics::uint4x3 lhs, ::Unity::Mathematics::uint4x3 rhs);

  /// @brief Method op_BitwiseOr, addr 0x6a86a74, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 op_BitwiseOr(::Unity::Mathematics::uint4x3 lhs, uint32_t rhs);

  /// @brief Method op_BitwiseOr, addr 0x6a86ae0, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 op_BitwiseOr(uint32_t lhs, ::Unity::Mathematics::uint4x3 rhs);

  /// @brief Method op_Decrement, addr 0x6a85ac8, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 op_Decrement(::Unity::Mathematics::uint4x3 val);

  /// @brief Method op_Division, addr 0x6a85650, size 0x9c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 op_Division(::Unity::Mathematics::uint4x3 lhs, ::Unity::Mathematics::uint4x3 rhs);

  /// @brief Method op_Division, addr 0x6a856ec, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 op_Division(::Unity::Mathematics::uint4x3 lhs, uint32_t rhs);

  /// @brief Method op_Division, addr 0x6a8575c, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 op_Division(uint32_t lhs, ::Unity::Mathematics::uint4x3 rhs);

  /// @brief Method op_Equality, addr 0x6a864c4, size 0xd4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_Equality(::Unity::Mathematics::uint4x3 lhs, ::Unity::Mathematics::uint4x3 rhs);

  /// @brief Method op_Equality, addr 0x6a86598, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_Equality(::Unity::Mathematics::uint4x3 lhs, uint32_t rhs);

  /// @brief Method op_Equality, addr 0x6a86648, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_Equality(uint32_t lhs, ::Unity::Mathematics::uint4x3 rhs);

  /// @brief Method op_ExclusiveOr, addr 0x6a86b4c, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 op_ExclusiveOr(::Unity::Mathematics::uint4x3 lhs, ::Unity::Mathematics::uint4x3 rhs);

  /// @brief Method op_ExclusiveOr, addr 0x6a86b74, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 op_ExclusiveOr(::Unity::Mathematics::uint4x3 lhs, uint32_t rhs);

  /// @brief Method op_ExclusiveOr, addr 0x6a86be0, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 op_ExclusiveOr(uint32_t lhs, ::Unity::Mathematics::uint4x3 rhs);

  /// @brief Method op_Explicit, addr 0x6a84ef4, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 op_Explicit___Unity__Mathematics__uint4x3(::Unity::Mathematics::bool4x3 v);

  /// @brief Method op_Explicit, addr 0x6a850e0, size 0x100, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 op_Explicit___Unity__Mathematics__uint4x3(::Unity::Mathematics::double4x3 v);

  /// @brief Method op_Explicit, addr 0x6a84fbc, size 0x100, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 op_Explicit___Unity__Mathematics__uint4x3(::Unity::Mathematics::float4x3 v);

  /// @brief Method op_Explicit, addr 0x6a84f84, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 op_Explicit___Unity__Mathematics__uint4x3(::Unity::Mathematics::int4x3 v);

  /// @brief Method op_Explicit, addr 0x6a84ed8, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 op_Explicit___Unity__Mathematics__uint4x3(bool v);

  /// @brief Method op_Explicit, addr 0x6a850bc, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 op_Explicit___Unity__Mathematics__uint4x3(double_t v);

  /// @brief Method op_Explicit, addr 0x6a84f98, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 op_Explicit___Unity__Mathematics__uint4x3(float_t v);

  /// @brief Method op_Explicit, addr 0x6a84f6c, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 op_Explicit___Unity__Mathematics__uint4x3(int32_t v);

  /// @brief Method op_GreaterThan, addr 0x6a85f48, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_GreaterThan(::Unity::Mathematics::uint4x3 lhs, ::Unity::Mathematics::uint4x3 rhs);

  /// @brief Method op_GreaterThan, addr 0x6a86004, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_GreaterThan(::Unity::Mathematics::uint4x3 lhs, uint32_t rhs);

  /// @brief Method op_GreaterThan, addr 0x6a860b4, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_GreaterThan(uint32_t lhs, ::Unity::Mathematics::uint4x3 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x6a86164, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_GreaterThanOrEqual(::Unity::Mathematics::uint4x3 lhs, ::Unity::Mathematics::uint4x3 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x6a86220, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_GreaterThanOrEqual(::Unity::Mathematics::uint4x3 lhs, uint32_t rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x6a862d0, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_GreaterThanOrEqual(uint32_t lhs, ::Unity::Mathematics::uint4x3 rhs);

  /// @brief Method op_Implicit, addr 0x6a84ec0, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 op_Implicit___Unity__Mathematics__uint4x3(uint32_t v);

  /// @brief Method op_Increment, addr 0x6a85a74, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 op_Increment(::Unity::Mathematics::uint4x3 val);

  /// @brief Method op_Inequality, addr 0x6a866f8, size 0xd4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_Inequality(::Unity::Mathematics::uint4x3 lhs, ::Unity::Mathematics::uint4x3 rhs);

  /// @brief Method op_Inequality, addr 0x6a867cc, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_Inequality(::Unity::Mathematics::uint4x3 lhs, uint32_t rhs);

  /// @brief Method op_Inequality, addr 0x6a8687c, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_Inequality(uint32_t lhs, ::Unity::Mathematics::uint4x3 rhs);

  /// @brief Method op_LeftShift, addr 0x6a863e0, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 op_LeftShift(::Unity::Mathematics::uint4x3 x, int32_t n);

  /// @brief Method op_LessThan, addr 0x6a85b10, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_LessThan(::Unity::Mathematics::uint4x3 lhs, ::Unity::Mathematics::uint4x3 rhs);

  /// @brief Method op_LessThan, addr 0x6a85bcc, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_LessThan(::Unity::Mathematics::uint4x3 lhs, uint32_t rhs);

  /// @brief Method op_LessThan, addr 0x6a85c7c, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_LessThan(uint32_t lhs, ::Unity::Mathematics::uint4x3 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x6a85d2c, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_LessThanOrEqual(::Unity::Mathematics::uint4x3 lhs, ::Unity::Mathematics::uint4x3 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x6a85de8, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_LessThanOrEqual(::Unity::Mathematics::uint4x3 lhs, uint32_t rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x6a85e98, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_LessThanOrEqual(uint32_t lhs, ::Unity::Mathematics::uint4x3 rhs);

  /// @brief Method op_Modulus, addr 0x6a857cc, size 0x120, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 op_Modulus(::Unity::Mathematics::uint4x3 lhs, ::Unity::Mathematics::uint4x3 rhs);

  /// @brief Method op_Modulus, addr 0x6a858ec, size 0xc4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 op_Modulus(::Unity::Mathematics::uint4x3 lhs, uint32_t rhs);

  /// @brief Method op_Modulus, addr 0x6a859b0, size 0xc4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 op_Modulus(uint32_t lhs, ::Unity::Mathematics::uint4x3 rhs);

  /// @brief Method op_Multiply, addr 0x6a851e0, size 0xa8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 op_Multiply(::Unity::Mathematics::uint4x3 lhs, ::Unity::Mathematics::uint4x3 rhs);

  /// @brief Method op_Multiply, addr 0x6a85288, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 op_Multiply(::Unity::Mathematics::uint4x3 lhs, uint32_t rhs);

  /// @brief Method op_Multiply, addr 0x6a852f4, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 op_Multiply(uint32_t lhs, ::Unity::Mathematics::uint4x3 rhs);

  /// @brief Method op_OnesComplement, addr 0x6a8692c, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 op_OnesComplement(::Unity::Mathematics::uint4x3 val);

  /// @brief Method op_RightShift, addr 0x6a86450, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 op_RightShift(::Unity::Mathematics::uint4x3 x, int32_t n);

  /// @brief Method op_Subtraction, addr 0x6a854d8, size 0xa0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 op_Subtraction(::Unity::Mathematics::uint4x3 lhs, ::Unity::Mathematics::uint4x3 rhs);

  /// @brief Method op_Subtraction, addr 0x6a85578, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 op_Subtraction(::Unity::Mathematics::uint4x3 lhs, uint32_t rhs);

  /// @brief Method op_Subtraction, addr 0x6a855e4, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 op_Subtraction(uint32_t lhs, ::Unity::Mathematics::uint4x3 rhs);

  /// @brief Method op_UnaryNegation, addr 0x6a86380, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 op_UnaryNegation(::Unity::Mathematics::uint4x3 val);

  /// @brief Method op_UnaryPlus, addr 0x6a863cc, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint4x3 op_UnaryPlus(::Unity::Mathematics::uint4x3 val);

  static inline void setStaticF_zero(::Unity::Mathematics::uint4x3 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr uint4x3();

  // Ctor Parameters [CppParam { name: "c0", ty: "::Unity::Mathematics::uint4", modifiers: "", def_value: None, comment: None }, CppParam { name: "c1", ty: "::Unity::Mathematics::uint4", modifiers:
  // "", def_value: None, comment: None }, CppParam { name: "c2", ty: "::Unity::Mathematics::uint4", modifiers: "", def_value: None, comment: None }]
  constexpr uint4x3(::Unity::Mathematics::uint4 c0, ::Unity::Mathematics::uint4 c1, ::Unity::Mathematics::uint4 c2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13461 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field c0, offset: 0x0, size: 0x10, def value: None
  ::Unity::Mathematics::uint4 c0;

  /// @brief Field c1, offset: 0x10, size: 0x10, def value: None
  ::Unity::Mathematics::uint4 c1;

  /// @brief Field c2, offset: 0x20, size: 0x10, def value: None
  ::Unity::Mathematics::uint4 c2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::uint4x3, c0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::uint4x3, c1) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::uint4x3, c2) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Unity::Mathematics::uint4x3) == 0x30, "Size mismatch!");

} // namespace Unity::Mathematics

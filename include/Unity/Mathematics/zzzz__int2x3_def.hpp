#pragma once
// IWYU pragma private; include "Unity/Mathematics/int2x3.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__int2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(int2x3)
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
struct bool2x3;
}
namespace Unity::Mathematics {
struct double2x3;
}
namespace Unity::Mathematics {
struct float2x3;
}
namespace Unity::Mathematics {
struct int2;
}
namespace Unity::Mathematics {
struct uint2x3;
}
// Forward declare root types
namespace Unity::Mathematics {
struct int2x3;
}
// Write type traits
MARK_VAL_T(::Unity::Mathematics::int2x3);
// Dependencies Unity.Mathematics.int2
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.int2x3
struct CORDL_TYPE int2x3 {
public:
  // Declarations
  __declspec(property(get = get_Item)) ::Unity::Mathematics::int2 Item[];

  /// @brief Field zero, offset 0xffffffff, size 0x18
  __declspec(property(get = getStaticF_zero, put = setStaticF_zero)) ::Unity::Mathematics::int2x3 zero;

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::int2x3>"
  constexpr operator ::System::IEquatable_1<::Unity::Mathematics::int2x3>*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Method Equals, addr 0x64a5f5c, size 0xcc, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x64a5ef0, size 0x6c, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Mathematics::int2x3 rhs);

  /// @brief Method GetHashCode, addr 0x64a6028, size 0x74, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x64a609c, size 0x220, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x64a62bc, size 0x11b0, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method .ctor, addr 0x64a4b08, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::int2 c0, ::Unity::Mathematics::int2 c1, ::Unity::Mathematics::int2 c2);

  /// @brief Method .ctor, addr 0x64a4b14, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(int32_t m00, int32_t m01, int32_t m02, int32_t m10, int32_t m11, int32_t m12);

  /// @brief Method .ctor, addr 0x64a4b64, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::bool2x3 v);

  /// @brief Method .ctor, addr 0x64a4cbc, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::double2x3 v);

  /// @brief Method .ctor, addr 0x64a4c08, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float2x3 v);

  /// @brief Method .ctor, addr 0x64a4bc4, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::uint2x3 v);

  /// @brief Method .ctor, addr 0x64a4b4c, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(bool v);

  /// @brief Method .ctor, addr 0x64a4c94, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(double_t v);

  /// @brief Method .ctor, addr 0x64a4be0, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(float_t v);

  /// @brief Method .ctor, addr 0x64a4b38, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(int32_t v);

  /// @brief Method .ctor, addr 0x64a4bb0, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(uint32_t v);

  static inline ::Unity::Mathematics::int2x3 getStaticF_zero();

  /// @brief Method get_Item, addr 0x64a5ee8, size 0x8, virtual false, abstract: false, final false
  inline ::ByRef<::Unity::Mathematics::int2> get_Item(int32_t index);

  /// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::int2x3>"
  constexpr ::System::IEquatable_1<::Unity::Mathematics::int2x3>* i___System__IEquatable_1___Unity__Mathematics__int2x3_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Method op_Addition, addr 0x64a502c, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x3 op_Addition(::Unity::Mathematics::int2x3 lhs, ::Unity::Mathematics::int2x3 rhs);

  /// @brief Method op_Addition, addr 0x64a5084, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x3 op_Addition(::Unity::Mathematics::int2x3 lhs, int32_t rhs);

  /// @brief Method op_Addition, addr 0x64a50c4, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x3 op_Addition(int32_t lhs, ::Unity::Mathematics::int2x3 rhs);

  /// @brief Method op_BitwiseAnd, addr 0x64a5cfc, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x3 op_BitwiseAnd(::Unity::Mathematics::int2x3 lhs, ::Unity::Mathematics::int2x3 rhs);

  /// @brief Method op_BitwiseAnd, addr 0x64a5d20, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x3 op_BitwiseAnd(::Unity::Mathematics::int2x3 lhs, int32_t rhs);

  /// @brief Method op_BitwiseAnd, addr 0x64a5d60, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x3 op_BitwiseAnd(int32_t lhs, ::Unity::Mathematics::int2x3 rhs);

  /// @brief Method op_BitwiseOr, addr 0x64a5da0, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x3 op_BitwiseOr(::Unity::Mathematics::int2x3 lhs, ::Unity::Mathematics::int2x3 rhs);

  /// @brief Method op_BitwiseOr, addr 0x64a5dc4, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x3 op_BitwiseOr(::Unity::Mathematics::int2x3 lhs, int32_t rhs);

  /// @brief Method op_BitwiseOr, addr 0x64a5e04, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x3 op_BitwiseOr(int32_t lhs, ::Unity::Mathematics::int2x3 rhs);

  /// @brief Method op_Decrement, addr 0x64a5404, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x3 op_Decrement(::Unity::Mathematics::int2x3 val);

  /// @brief Method op_Division, addr 0x64a51dc, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x3 op_Division(::Unity::Mathematics::int2x3 lhs, ::Unity::Mathematics::int2x3 rhs);

  /// @brief Method op_Division, addr 0x64a5230, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x3 op_Division(::Unity::Mathematics::int2x3 lhs, int32_t rhs);

  /// @brief Method op_Division, addr 0x64a526c, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x3 op_Division(int32_t lhs, ::Unity::Mathematics::int2x3 rhs);

  /// @brief Method op_Equality, addr 0x64a5a30, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_Equality(::Unity::Mathematics::int2x3 lhs, ::Unity::Mathematics::int2x3 rhs);

  /// @brief Method op_Equality, addr 0x64a5ab4, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_Equality(::Unity::Mathematics::int2x3 lhs, int32_t rhs);

  /// @brief Method op_Equality, addr 0x64a5b1c, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_Equality(int32_t lhs, ::Unity::Mathematics::int2x3 rhs);

  /// @brief Method op_ExclusiveOr, addr 0x64a5e44, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x3 op_ExclusiveOr(::Unity::Mathematics::int2x3 lhs, ::Unity::Mathematics::int2x3 rhs);

  /// @brief Method op_ExclusiveOr, addr 0x64a5e68, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x3 op_ExclusiveOr(::Unity::Mathematics::int2x3 lhs, int32_t rhs);

  /// @brief Method op_ExclusiveOr, addr 0x64a5ea8, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x3 op_ExclusiveOr(int32_t lhs, ::Unity::Mathematics::int2x3 rhs);

  /// @brief Method op_Explicit, addr 0x64a4d74, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x3 op_Explicit___Unity__Mathematics__int2x3(::Unity::Mathematics::bool2x3 v);

  /// @brief Method op_Explicit, addr 0x64a4ec4, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x3 op_Explicit___Unity__Mathematics__int2x3(::Unity::Mathematics::double2x3 v);

  /// @brief Method op_Explicit, addr 0x64a4e10, size 0x8c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x3 op_Explicit___Unity__Mathematics__int2x3(::Unity::Mathematics::float2x3 v);

  /// @brief Method op_Explicit, addr 0x64a4dd4, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x3 op_Explicit___Unity__Mathematics__int2x3(::Unity::Mathematics::uint2x3 v);

  /// @brief Method op_Explicit, addr 0x64a4d5c, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x3 op_Explicit___Unity__Mathematics__int2x3(bool v);

  /// @brief Method op_Explicit, addr 0x64a4e9c, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x3 op_Explicit___Unity__Mathematics__int2x3(double_t v);

  /// @brief Method op_Explicit, addr 0x64a4de8, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x3 op_Explicit___Unity__Mathematics__int2x3(float_t v);

  /// @brief Method op_Explicit, addr 0x64a4dc0, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x3 op_Explicit___Unity__Mathematics__int2x3(uint32_t v);

  /// @brief Method op_GreaterThan, addr 0x64a56d0, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_GreaterThan(::Unity::Mathematics::int2x3 lhs, ::Unity::Mathematics::int2x3 rhs);

  /// @brief Method op_GreaterThan, addr 0x64a5744, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_GreaterThan(::Unity::Mathematics::int2x3 lhs, int32_t rhs);

  /// @brief Method op_GreaterThan, addr 0x64a57ac, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_GreaterThan(int32_t lhs, ::Unity::Mathematics::int2x3 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x64a5814, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_GreaterThanOrEqual(::Unity::Mathematics::int2x3 lhs, ::Unity::Mathematics::int2x3 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x64a5888, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_GreaterThanOrEqual(::Unity::Mathematics::int2x3 lhs, int32_t rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x64a58f0, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_GreaterThanOrEqual(int32_t lhs, ::Unity::Mathematics::int2x3 rhs);

  /// @brief Method op_Implicit, addr 0x64a4d48, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x3 op_Implicit___Unity__Mathematics__int2x3(int32_t v);

  /// @brief Method op_Increment, addr 0x64a53b8, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x3 op_Increment(::Unity::Mathematics::int2x3 val);

  /// @brief Method op_Inequality, addr 0x64a5b84, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_Inequality(::Unity::Mathematics::int2x3 lhs, ::Unity::Mathematics::int2x3 rhs);

  /// @brief Method op_Inequality, addr 0x64a5c08, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_Inequality(::Unity::Mathematics::int2x3 lhs, int32_t rhs);

  /// @brief Method op_Inequality, addr 0x64a5c74, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_Inequality(int32_t lhs, ::Unity::Mathematics::int2x3 rhs);

  /// @brief Method op_LeftShift, addr 0x64a59a4, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x3 op_LeftShift(::Unity::Mathematics::int2x3 x, int32_t n);

  /// @brief Method op_LessThan, addr 0x64a5448, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_LessThan(::Unity::Mathematics::int2x3 lhs, ::Unity::Mathematics::int2x3 rhs);

  /// @brief Method op_LessThan, addr 0x64a54bc, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_LessThan(::Unity::Mathematics::int2x3 lhs, int32_t rhs);

  /// @brief Method op_LessThan, addr 0x64a5524, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_LessThan(int32_t lhs, ::Unity::Mathematics::int2x3 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x64a558c, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_LessThanOrEqual(::Unity::Mathematics::int2x3 lhs, ::Unity::Mathematics::int2x3 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x64a5600, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_LessThanOrEqual(::Unity::Mathematics::int2x3 lhs, int32_t rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x64a5668, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x3 op_LessThanOrEqual(int32_t lhs, ::Unity::Mathematics::int2x3 rhs);

  /// @brief Method op_Modulus, addr 0x64a52a8, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x3 op_Modulus(::Unity::Mathematics::int2x3 lhs, ::Unity::Mathematics::int2x3 rhs);

  /// @brief Method op_Modulus, addr 0x64a5310, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x3 op_Modulus(::Unity::Mathematics::int2x3 lhs, int32_t rhs);

  /// @brief Method op_Modulus, addr 0x64a5364, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x3 op_Modulus(int32_t lhs, ::Unity::Mathematics::int2x3 rhs);

  /// @brief Method op_Multiply, addr 0x64a4f54, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x3 op_Multiply(::Unity::Mathematics::int2x3 lhs, ::Unity::Mathematics::int2x3 rhs);

  /// @brief Method op_Multiply, addr 0x64a4fac, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x3 op_Multiply(::Unity::Mathematics::int2x3 lhs, int32_t rhs);

  /// @brief Method op_Multiply, addr 0x64a4fec, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x3 op_Multiply(int32_t lhs, ::Unity::Mathematics::int2x3 rhs);

  /// @brief Method op_OnesComplement, addr 0x64a5ce0, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x3 op_OnesComplement(::Unity::Mathematics::int2x3 val);

  /// @brief Method op_RightShift, addr 0x64a59e8, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x3 op_RightShift(::Unity::Mathematics::int2x3 x, int32_t n);

  /// @brief Method op_Subtraction, addr 0x64a5104, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x3 op_Subtraction(::Unity::Mathematics::int2x3 lhs, ::Unity::Mathematics::int2x3 rhs);

  /// @brief Method op_Subtraction, addr 0x64a515c, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x3 op_Subtraction(::Unity::Mathematics::int2x3 lhs, int32_t rhs);

  /// @brief Method op_Subtraction, addr 0x64a519c, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x3 op_Subtraction(int32_t lhs, ::Unity::Mathematics::int2x3 rhs);

  /// @brief Method op_UnaryNegation, addr 0x64a5958, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x3 op_UnaryNegation(::Unity::Mathematics::int2x3 val);

  /// @brief Method op_UnaryPlus, addr 0x64a5990, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x3 op_UnaryPlus(::Unity::Mathematics::int2x3 val);

  static inline void setStaticF_zero(::Unity::Mathematics::int2x3 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr int2x3();

  // Ctor Parameters [CppParam { name: "c0", ty: "::Unity::Mathematics::int2", modifiers: "", def_value: None }, CppParam { name: "c1", ty: "::Unity::Mathematics::int2", modifiers: "", def_value: None
  // }, CppParam { name: "c2", ty: "::Unity::Mathematics::int2", modifiers: "", def_value: None }]
  constexpr int2x3(::Unity::Mathematics::int2 c0, ::Unity::Mathematics::int2 c1, ::Unity::Mathematics::int2 c2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13156 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field c0, offset: 0x0, size: 0x8, def value: None
  ::Unity::Mathematics::int2 c0;

  /// @brief Field c1, offset: 0x8, size: 0x8, def value: None
  ::Unity::Mathematics::int2 c1;

  /// @brief Field c2, offset: 0x10, size: 0x8, def value: None
  ::Unity::Mathematics::int2 c2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::int2x3, c0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::int2x3, c1) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::int2x3, c2) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::int2x3, 0x18>, "Size mismatch!");

} // namespace Unity::Mathematics
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::int2x3, "Unity.Mathematics", "int2x3");

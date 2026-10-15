#pragma once
// IWYU pragma private; include "Unity/Mathematics/int3x2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__int3_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(int3x2)
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
struct bool3x2;
}
namespace Unity::Mathematics {
struct double3x2;
}
namespace Unity::Mathematics {
struct float3x2;
}
namespace Unity::Mathematics {
struct int3;
}
namespace Unity::Mathematics {
struct uint3x2;
}
// Forward declare root types
namespace Unity::Mathematics {
struct int3x2;
}
// Write type traits
MARK_VAL_T(::Unity::Mathematics::int3x2);
DEFINE_IL2CPP_CLASS(::Unity::Mathematics::int3x2, "Unity.Mathematics", "int3x2");
// [DefaultMember("Item")]
// [Il2CppEagerStaticClassConstruction]
// Dependencies Unity.Mathematics.int3
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.int3x2
struct CORDL_TYPE int3x2 {
public:
  // Declarations
  __declspec(property(get = get_Item)) ::Unity::Mathematics::int3 Item[];

  /// @brief Field zero, offset 0xffffffff, size 0x18
  __declspec(property(get = getStaticF_zero, put = setStaticF_zero)) ::Unity::Mathematics::int3x2 zero;

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::int3x2>"
  constexpr operator ::System::IEquatable_1<::Unity::Mathematics::int3x2>*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Method Equals, addr 0x6ada504, size 0xcc, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x6ada498, size 0x6c, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Mathematics::int3x2 rhs);

  /// @brief Method GetHashCode, addr 0x6ada5d0, size 0x7c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x6ada64c, size 0x220, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x6ada86c, size 0x21c, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method .ctor, addr 0x6ad90d0, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::int3 c0, ::Unity::Mathematics::int3 c1);

  /// @brief Method .ctor, addr 0x6ad90e4, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(int32_t m00, int32_t m01, int32_t m10, int32_t m11, int32_t m20, int32_t m21);

  /// @brief Method .ctor, addr 0x6ad9130, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::bool3x2 v);

  /// @brief Method .ctor, addr 0x6ad928c, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::double3x2 v);

  /// @brief Method .ctor, addr 0x6ad91d0, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float3x2 v);

  /// @brief Method .ctor, addr 0x6ad917c, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::uint3x2 v);

  /// @brief Method .ctor, addr 0x6ad9110, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(bool v);

  /// @brief Method .ctor, addr 0x6ad925c, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(double_t v);

  /// @brief Method .ctor, addr 0x6ad91a0, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(float_t v);

  /// @brief Method .ctor, addr 0x6ad90f4, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(int32_t v);

  /// @brief Method .ctor, addr 0x6ad9160, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(uint32_t v);

  static inline ::Unity::Mathematics::int3x2 getStaticF_zero();

  /// @brief Method get_Item, addr 0x6ada48c, size 0xc, virtual false, abstract: false, final false
  inline ::by_ref<::Unity::Mathematics::int3> get_Item(int32_t index);

  /// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::int3x2>"
  constexpr ::System::IEquatable_1<::Unity::Mathematics::int3x2>* i___System__IEquatable_1___Unity__Mathematics__int3x2_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Method op_Addition, addr 0x6ad9618, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 op_Addition(::Unity::Mathematics::int3x2 lhs, ::Unity::Mathematics::int3x2 rhs);

  /// @brief Method op_Addition, addr 0x6ad967c, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 op_Addition(::Unity::Mathematics::int3x2 lhs, int32_t rhs);

  /// @brief Method op_Addition, addr 0x6ad96bc, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 op_Addition(int32_t lhs, ::Unity::Mathematics::int3x2 rhs);

  /// @brief Method op_BitwiseAnd, addr 0x6ada240, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 op_BitwiseAnd(::Unity::Mathematics::int3x2 lhs, ::Unity::Mathematics::int3x2 rhs);

  /// @brief Method op_BitwiseAnd, addr 0x6ada284, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 op_BitwiseAnd(::Unity::Mathematics::int3x2 lhs, int32_t rhs);

  /// @brief Method op_BitwiseAnd, addr 0x6ada2c4, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 op_BitwiseAnd(int32_t lhs, ::Unity::Mathematics::int3x2 rhs);

  /// @brief Method op_BitwiseOr, addr 0x6ada304, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 op_BitwiseOr(::Unity::Mathematics::int3x2 lhs, ::Unity::Mathematics::int3x2 rhs);

  /// @brief Method op_BitwiseOr, addr 0x6ada348, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 op_BitwiseOr(::Unity::Mathematics::int3x2 lhs, int32_t rhs);

  /// @brief Method op_BitwiseOr, addr 0x6ada388, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 op_BitwiseOr(int32_t lhs, ::Unity::Mathematics::int3x2 rhs);

  /// @brief Method op_Decrement, addr 0x6ad9a2c, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 op_Decrement(::Unity::Mathematics::int3x2 val);

  /// @brief Method op_Division, addr 0x6ad97e0, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 op_Division(::Unity::Mathematics::int3x2 lhs, ::Unity::Mathematics::int3x2 rhs);

  /// @brief Method op_Division, addr 0x6ad9830, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 op_Division(::Unity::Mathematics::int3x2 lhs, int32_t rhs);

  /// @brief Method op_Division, addr 0x6ad9870, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 op_Division(int32_t lhs, ::Unity::Mathematics::int3x2 rhs);

  /// @brief Method op_Equality, addr 0x6ad9fb4, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_Equality(::Unity::Mathematics::int3x2 lhs, ::Unity::Mathematics::int3x2 rhs);

  /// @brief Method op_Equality, addr 0x6ada034, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_Equality(::Unity::Mathematics::int3x2 lhs, int32_t rhs);

  /// @brief Method op_Equality, addr 0x6ada088, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_Equality(int32_t lhs, ::Unity::Mathematics::int3x2 rhs);

  /// @brief Method op_ExclusiveOr, addr 0x6ada3c8, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 op_ExclusiveOr(::Unity::Mathematics::int3x2 lhs, ::Unity::Mathematics::int3x2 rhs);

  /// @brief Method op_ExclusiveOr, addr 0x6ada40c, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 op_ExclusiveOr(::Unity::Mathematics::int3x2 lhs, int32_t rhs);

  /// @brief Method op_ExclusiveOr, addr 0x6ada44c, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 op_ExclusiveOr(int32_t lhs, ::Unity::Mathematics::int3x2 rhs);

  /// @brief Method op_Explicit, addr 0x6ad9354, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 op_Explicit___Unity__Mathematics__int3x2(::Unity::Mathematics::bool3x2 v);

  /// @brief Method op_Explicit, addr 0x6ad94ac, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 op_Explicit___Unity__Mathematics__int3x2(::Unity::Mathematics::double3x2 v);

  /// @brief Method op_Explicit, addr 0x6ad93f4, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 op_Explicit___Unity__Mathematics__int3x2(::Unity::Mathematics::float3x2 v);

  /// @brief Method op_Explicit, addr 0x6ad93a0, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 op_Explicit___Unity__Mathematics__int3x2(::Unity::Mathematics::uint3x2 v);

  /// @brief Method op_Explicit, addr 0x6ad9334, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 op_Explicit___Unity__Mathematics__int3x2(bool v);

  /// @brief Method op_Explicit, addr 0x6ad947c, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 op_Explicit___Unity__Mathematics__int3x2(double_t v);

  /// @brief Method op_Explicit, addr 0x6ad93c4, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 op_Explicit___Unity__Mathematics__int3x2(float_t v);

  /// @brief Method op_Explicit, addr 0x6ad9384, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 op_Explicit___Unity__Mathematics__int3x2(uint32_t v);

  /// @brief Method op_GreaterThan, addr 0x6ad9cac, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_GreaterThan(::Unity::Mathematics::int3x2 lhs, ::Unity::Mathematics::int3x2 rhs);

  /// @brief Method op_GreaterThan, addr 0x6ad9d0c, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_GreaterThan(::Unity::Mathematics::int3x2 lhs, int32_t rhs);

  /// @brief Method op_GreaterThan, addr 0x6ad9d60, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_GreaterThan(int32_t lhs, ::Unity::Mathematics::int3x2 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x6ad9db4, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_GreaterThanOrEqual(::Unity::Mathematics::int3x2 lhs, ::Unity::Mathematics::int3x2 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x6ad9e1c, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_GreaterThanOrEqual(::Unity::Mathematics::int3x2 lhs, int32_t rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x6ad9e74, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_GreaterThanOrEqual(int32_t lhs, ::Unity::Mathematics::int3x2 rhs);

  /// @brief Method op_Implicit, addr 0x6ad9318, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 op_Implicit___Unity__Mathematics__int3x2(int32_t v);

  /// @brief Method op_Increment, addr 0x6ad99cc, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 op_Increment(::Unity::Mathematics::int3x2 val);

  /// @brief Method op_Inequality, addr 0x6ada0dc, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_Inequality(::Unity::Mathematics::int3x2 lhs, ::Unity::Mathematics::int3x2 rhs);

  /// @brief Method op_Inequality, addr 0x6ada15c, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_Inequality(::Unity::Mathematics::int3x2 lhs, int32_t rhs);

  /// @brief Method op_Inequality, addr 0x6ada1b4, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_Inequality(int32_t lhs, ::Unity::Mathematics::int3x2 rhs);

  /// @brief Method op_LeftShift, addr 0x6ad9f34, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 op_LeftShift(::Unity::Mathematics::int3x2 x, int32_t n);

  /// @brief Method op_LessThan, addr 0x6ad9a8c, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_LessThan(::Unity::Mathematics::int3x2 lhs, ::Unity::Mathematics::int3x2 rhs);

  /// @brief Method op_LessThan, addr 0x6ad9aec, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_LessThan(::Unity::Mathematics::int3x2 lhs, int32_t rhs);

  /// @brief Method op_LessThan, addr 0x6ad9b40, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_LessThan(int32_t lhs, ::Unity::Mathematics::int3x2 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x6ad9b94, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_LessThanOrEqual(::Unity::Mathematics::int3x2 lhs, ::Unity::Mathematics::int3x2 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x6ad9bfc, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_LessThanOrEqual(::Unity::Mathematics::int3x2 lhs, int32_t rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x6ad9c54, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_LessThanOrEqual(int32_t lhs, ::Unity::Mathematics::int3x2 rhs);

  /// @brief Method op_Modulus, addr 0x6ad98b0, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 op_Modulus(::Unity::Mathematics::int3x2 lhs, ::Unity::Mathematics::int3x2 rhs);

  /// @brief Method op_Modulus, addr 0x6ad991c, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 op_Modulus(::Unity::Mathematics::int3x2 lhs, int32_t rhs);

  /// @brief Method op_Modulus, addr 0x6ad9974, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 op_Modulus(int32_t lhs, ::Unity::Mathematics::int3x2 rhs);

  /// @brief Method op_Multiply, addr 0x6ad9534, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 op_Multiply(::Unity::Mathematics::int3x2 lhs, ::Unity::Mathematics::int3x2 rhs);

  /// @brief Method op_Multiply, addr 0x6ad9598, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 op_Multiply(::Unity::Mathematics::int3x2 lhs, int32_t rhs);

  /// @brief Method op_Multiply, addr 0x6ad95d8, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 op_Multiply(int32_t lhs, ::Unity::Mathematics::int3x2 rhs);

  /// @brief Method op_OnesComplement, addr 0x6ada20c, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 op_OnesComplement(::Unity::Mathematics::int3x2 val);

  /// @brief Method op_RightShift, addr 0x6ad9f74, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 op_RightShift(::Unity::Mathematics::int3x2 x, int32_t n);

  /// @brief Method op_Subtraction, addr 0x6ad96fc, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 op_Subtraction(::Unity::Mathematics::int3x2 lhs, ::Unity::Mathematics::int3x2 rhs);

  /// @brief Method op_Subtraction, addr 0x6ad9760, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 op_Subtraction(::Unity::Mathematics::int3x2 lhs, int32_t rhs);

  /// @brief Method op_Subtraction, addr 0x6ad97a0, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 op_Subtraction(int32_t lhs, ::Unity::Mathematics::int3x2 rhs);

  /// @brief Method op_UnaryNegation, addr 0x6ad9ecc, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 op_UnaryNegation(::Unity::Mathematics::int3x2 val);

  /// @brief Method op_UnaryPlus, addr 0x6ad9f10, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x2 op_UnaryPlus(::Unity::Mathematics::int3x2 val);

  static inline void setStaticF_zero(::Unity::Mathematics::int3x2 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr int3x2();

  // Ctor Parameters [CppParam { name: "c0", ty: "::Unity::Mathematics::int3", modifiers: "", def_value: None, comment: None }, CppParam { name: "c1", ty: "::Unity::Mathematics::int3", modifiers: "",
  // def_value: None, comment: None }]
  constexpr int3x2(::Unity::Mathematics::int3 c0, ::Unity::Mathematics::int3 c1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13436 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field c0, offset: 0x0, size: 0xc, def value: None
  ::Unity::Mathematics::int3 c0;

  /// @brief Field c1, offset: 0xc, size: 0xc, def value: None
  ::Unity::Mathematics::int3 c1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::int3x2, c0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::int3x2, c1) == 0xc, "Offset mismatch!");

static_assert(sizeof(::Unity::Mathematics::int3x2) == 0x18, "Size mismatch!");

} // namespace Unity::Mathematics

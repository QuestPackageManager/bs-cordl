#pragma once
// IWYU pragma private; include "Unity/Mathematics/int3x4.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__IFormattable_def.hpp"
#include "Unity/Mathematics/zzzz__int3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(int3x4)
namespace System {
class IFormatProvider;
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
// Dependencies System.IEquatable`1<T>, System.IFormattable, Unity.Mathematics.int3
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

  /// @brief Method Equals, addr 0x46b96bc, size 0x128, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x46b95f0, size 0xcc, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Mathematics::int3x4 rhs);

  /// @brief Method GetHashCode, addr 0x46b97e4, size 0xdc, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x46b98c0, size 0x3ac, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x46b9c6c, size 0x394, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method .ctor, addr 0x46b6f58, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::int3 c0, ::Unity::Mathematics::int3 c1, ::Unity::Mathematics::int3 c2, ::Unity::Mathematics::int3 c3);

  /// @brief Method .ctor, addr 0x46b6f80, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(int32_t m00, int32_t m01, int32_t m02, int32_t m03, int32_t m10, int32_t m11, int32_t m12, int32_t m13, int32_t m20, int32_t m21, int32_t m22, int32_t m23);

  /// @brief Method .ctor, addr 0x46b700c, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::bool3x4 v);

  /// @brief Method .ctor, addr 0x46b7278, size 0x104, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::double3x4 v);

  /// @brief Method .ctor, addr 0x46b7134, size 0x104, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float3x4 v);

  /// @brief Method .ctor, addr 0x46b70b0, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::uint3x4 v);

  /// @brief Method .ctor, addr 0x46b6fdc, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(bool v);

  /// @brief Method .ctor, addr 0x46b7238, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(double_t v);

  /// @brief Method .ctor, addr 0x46b70f4, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(float_t v);

  /// @brief Method .ctor, addr 0x46b6fb0, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(int32_t v);

  /// @brief Method .ctor, addr 0x46b7084, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(uint32_t v);

  static inline ::Unity::Mathematics::int3x4 getStaticF_zero();

  /// @brief Method get_Item, addr 0x46b95e4, size 0xc, virtual false, abstract: false, final false
  inline ::ByRef<::Unity::Mathematics::int3> get_Item(int32_t index);

  /// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::int3x4>"
  constexpr ::System::IEquatable_1<::Unity::Mathematics::int3x4>* i___System__IEquatable_1___Unity__Mathematics__int3x4_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Method op_Addition, addr 0x46b78f4, size 0xc4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 op_Addition(::Unity::Mathematics::int3x4 lhs, ::Unity::Mathematics::int3x4 rhs);

  /// @brief Method op_Addition, addr 0x46b79b8, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 op_Addition(::Unity::Mathematics::int3x4 lhs, int32_t rhs);

  /// @brief Method op_Addition, addr 0x46b7a34, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 op_Addition(int32_t lhs, ::Unity::Mathematics::int3x4 rhs);

  /// @brief Method op_BitwiseAnd, addr 0x46b9170, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 op_BitwiseAnd(::Unity::Mathematics::int3x4 lhs, ::Unity::Mathematics::int3x4 rhs);

  /// @brief Method op_BitwiseAnd, addr 0x46b91f4, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 op_BitwiseAnd(::Unity::Mathematics::int3x4 lhs, int32_t rhs);

  /// @brief Method op_BitwiseAnd, addr 0x46b9270, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 op_BitwiseAnd(int32_t lhs, ::Unity::Mathematics::int3x4 rhs);

  /// @brief Method op_BitwiseOr, addr 0x46b92ec, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 op_BitwiseOr(::Unity::Mathematics::int3x4 lhs, ::Unity::Mathematics::int3x4 rhs);

  /// @brief Method op_BitwiseOr, addr 0x46b9370, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 op_BitwiseOr(::Unity::Mathematics::int3x4 lhs, int32_t rhs);

  /// @brief Method op_BitwiseOr, addr 0x46b93ec, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 op_BitwiseOr(int32_t lhs, ::Unity::Mathematics::int3x4 rhs);

  /// @brief Method op_Decrement, addr 0x46b80cc, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 op_Decrement(::Unity::Mathematics::int3x4 val);

  /// @brief Method op_Division, addr 0x46b7c6c, size 0x94, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 op_Division(::Unity::Mathematics::int3x4 lhs, ::Unity::Mathematics::int3x4 rhs);

  /// @brief Method op_Division, addr 0x46b7d00, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 op_Division(::Unity::Mathematics::int3x4 lhs, int32_t rhs);

  /// @brief Method op_Division, addr 0x46b7d7c, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 op_Division(int32_t lhs, ::Unity::Mathematics::int3x4 rhs);

  /// @brief Method op_Equality, addr 0x46b8c74, size 0xd4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_Equality(::Unity::Mathematics::int3x4 lhs, ::Unity::Mathematics::int3x4 rhs);

  /// @brief Method op_Equality, addr 0x46b8d48, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_Equality(::Unity::Mathematics::int3x4 lhs, int32_t rhs);

  /// @brief Method op_Equality, addr 0x46b8e04, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_Equality(int32_t lhs, ::Unity::Mathematics::int3x4 rhs);

  /// @brief Method op_ExclusiveOr, addr 0x46b9468, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 op_ExclusiveOr(::Unity::Mathematics::int3x4 lhs, ::Unity::Mathematics::int3x4 rhs);

  /// @brief Method op_ExclusiveOr, addr 0x46b94ec, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 op_ExclusiveOr(::Unity::Mathematics::int3x4 lhs, int32_t rhs);

  /// @brief Method op_ExclusiveOr, addr 0x46b9568, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 op_ExclusiveOr(int32_t lhs, ::Unity::Mathematics::int3x4 rhs);

  /// @brief Method op_Explicit, addr 0x46b73d8, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 op_Explicit___Unity__Mathematics__int3x4(::Unity::Mathematics::bool3x4 v);

  /// @brief Method op_Explicit, addr 0x46b763c, size 0xfc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 op_Explicit___Unity__Mathematics__int3x4(::Unity::Mathematics::double3x4 v);

  /// @brief Method op_Explicit, addr 0x46b7500, size 0xfc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 op_Explicit___Unity__Mathematics__int3x4(::Unity::Mathematics::float3x4 v);

  /// @brief Method op_Explicit, addr 0x46b747c, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 op_Explicit___Unity__Mathematics__int3x4(::Unity::Mathematics::uint3x4 v);

  /// @brief Method op_Explicit, addr 0x46b73a8, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 op_Explicit___Unity__Mathematics__int3x4(bool v);

  /// @brief Method op_Explicit, addr 0x46b75fc, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 op_Explicit___Unity__Mathematics__int3x4(double_t v);

  /// @brief Method op_Explicit, addr 0x46b74c0, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 op_Explicit___Unity__Mathematics__int3x4(float_t v);

  /// @brief Method op_Explicit, addr 0x46b7450, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 op_Explicit___Unity__Mathematics__int3x4(uint32_t v);

  /// @brief Method op_GreaterThan, addr 0x46b861c, size 0xd4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_GreaterThan(::Unity::Mathematics::int3x4 lhs, ::Unity::Mathematics::int3x4 rhs);

  /// @brief Method op_GreaterThan, addr 0x46b86f0, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_GreaterThan(::Unity::Mathematics::int3x4 lhs, int32_t rhs);

  /// @brief Method op_GreaterThan, addr 0x46b87ac, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_GreaterThan(int32_t lhs, ::Unity::Mathematics::int3x4 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x46b8868, size 0xd4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_GreaterThanOrEqual(::Unity::Mathematics::int3x4 lhs, ::Unity::Mathematics::int3x4 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x46b893c, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_GreaterThanOrEqual(::Unity::Mathematics::int3x4 lhs, int32_t rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x46b89f8, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_GreaterThanOrEqual(int32_t lhs, ::Unity::Mathematics::int3x4 rhs);

  /// @brief Method op_Implicit, addr 0x46b737c, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 op_Implicit___Unity__Mathematics__int3x4(int32_t v);

  /// @brief Method op_Increment, addr 0x46b8014, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 op_Increment(::Unity::Mathematics::int3x4 val);

  /// @brief Method op_Inequality, addr 0x46b8ec0, size 0xd4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_Inequality(::Unity::Mathematics::int3x4 lhs, ::Unity::Mathematics::int3x4 rhs);

  /// @brief Method op_Inequality, addr 0x46b8f94, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_Inequality(::Unity::Mathematics::int3x4 lhs, int32_t rhs);

  /// @brief Method op_Inequality, addr 0x46b9050, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_Inequality(int32_t lhs, ::Unity::Mathematics::int3x4 rhs);

  /// @brief Method op_LeftShift, addr 0x46b8b7c, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 op_LeftShift(::Unity::Mathematics::int3x4 x, int32_t n);

  /// @brief Method op_LessThan, addr 0x46b8184, size 0xd4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_LessThan(::Unity::Mathematics::int3x4 lhs, ::Unity::Mathematics::int3x4 rhs);

  /// @brief Method op_LessThan, addr 0x46b8258, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_LessThan(::Unity::Mathematics::int3x4 lhs, int32_t rhs);

  /// @brief Method op_LessThan, addr 0x46b8314, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_LessThan(int32_t lhs, ::Unity::Mathematics::int3x4 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x46b83d0, size 0xd4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_LessThanOrEqual(::Unity::Mathematics::int3x4 lhs, ::Unity::Mathematics::int3x4 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x46b84a4, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_LessThanOrEqual(::Unity::Mathematics::int3x4 lhs, int32_t rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x46b8560, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_LessThanOrEqual(int32_t lhs, ::Unity::Mathematics::int3x4 rhs);

  /// @brief Method op_Modulus, addr 0x46b7df8, size 0xc4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 op_Modulus(::Unity::Mathematics::int3x4 lhs, ::Unity::Mathematics::int3x4 rhs);

  /// @brief Method op_Modulus, addr 0x46b7ebc, size 0xac, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 op_Modulus(::Unity::Mathematics::int3x4 lhs, int32_t rhs);

  /// @brief Method op_Modulus, addr 0x46b7f68, size 0xac, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 op_Modulus(int32_t lhs, ::Unity::Mathematics::int3x4 rhs);

  /// @brief Method op_Multiply, addr 0x46b7738, size 0xc4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 op_Multiply(::Unity::Mathematics::int3x4 lhs, ::Unity::Mathematics::int3x4 rhs);

  /// @brief Method op_Multiply, addr 0x46b77fc, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 op_Multiply(::Unity::Mathematics::int3x4 lhs, int32_t rhs);

  /// @brief Method op_Multiply, addr 0x46b7878, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 op_Multiply(int32_t lhs, ::Unity::Mathematics::int3x4 rhs);

  /// @brief Method op_OnesComplement, addr 0x46b910c, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 op_OnesComplement(::Unity::Mathematics::int3x4 val);

  /// @brief Method op_RightShift, addr 0x46b8bf8, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 op_RightShift(::Unity::Mathematics::int3x4 x, int32_t n);

  /// @brief Method op_Subtraction, addr 0x46b7ab0, size 0xc4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 op_Subtraction(::Unity::Mathematics::int3x4 lhs, ::Unity::Mathematics::int3x4 rhs);

  /// @brief Method op_Subtraction, addr 0x46b7b74, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 op_Subtraction(::Unity::Mathematics::int3x4 lhs, int32_t rhs);

  /// @brief Method op_Subtraction, addr 0x46b7bf0, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 op_Subtraction(int32_t lhs, ::Unity::Mathematics::int3x4 rhs);

  /// @brief Method op_UnaryNegation, addr 0x46b8ab4, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 op_UnaryNegation(::Unity::Mathematics::int3x4 val);

  /// @brief Method op_UnaryPlus, addr 0x46b8b38, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3x4 op_UnaryPlus(::Unity::Mathematics::int3x4 val);

  static inline void setStaticF_zero(::Unity::Mathematics::int3x4 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr int3x4();

  // Ctor Parameters [CppParam { name: "c0", ty: "::Unity::Mathematics::int3", modifiers: "", def_value: None }, CppParam { name: "c1", ty: "::Unity::Mathematics::int3", modifiers: "", def_value: None
  // }, CppParam { name: "c2", ty: "::Unity::Mathematics::int3", modifiers: "", def_value: None }, CppParam { name: "c3", ty: "::Unity::Mathematics::int3", modifiers: "", def_value: None }]
  constexpr int3x4(::Unity::Mathematics::int3 c0, ::Unity::Mathematics::int3 c1, ::Unity::Mathematics::int3 c2, ::Unity::Mathematics::int3 c3) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10005 };

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

static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::int3x4, 0x30>, "Size mismatch!");

} // namespace Unity::Mathematics
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::int3x4, "Unity.Mathematics", "int3x4");

#pragma once
// IWYU pragma private; include "Unity/Mathematics/double3x4.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__IFormattable_def.hpp"
#include "Unity/Mathematics/zzzz__double3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(double3x4)
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
struct double3;
}
namespace Unity::Mathematics {
struct float3x4;
}
namespace Unity::Mathematics {
struct int3x4;
}
namespace Unity::Mathematics {
struct uint3x4;
}
// Forward declare root types
namespace Unity::Mathematics {
struct double3x4;
}
// Write type traits
MARK_VAL_T(::Unity::Mathematics::double3x4);
// Dependencies System.IEquatable`1<T>, System.IFormattable, Unity.Mathematics.double3
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.double3x4
struct CORDL_TYPE double3x4 {
public:
  // Declarations
  __declspec(property(get = get_Item)) ::Unity::Mathematics::double3 Item[];

  /// @brief Field zero, offset 0xffffffff, size 0x60
  __declspec(property(get = getStaticF_zero, put = setStaticF_zero)) ::Unity::Mathematics::double3x4 zero;

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::double3x4>"
  constexpr operator ::System::IEquatable_1<::Unity::Mathematics::double3x4>*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Method Equals, addr 0x467fda8, size 0x128, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x467fcdc, size 0xcc, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Mathematics::double3x4 rhs);

  /// @brief Method GetHashCode, addr 0x467fed0, size 0x12c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x467fffc, size 0x3ac, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x46803a8, size 0x394, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method .ctor, addr 0x467e23c, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::double3 c0, ::Unity::Mathematics::double3 c1, ::Unity::Mathematics::double3 c2, ::Unity::Mathematics::double3 c3);

  /// @brief Method .ctor, addr 0x467e26c, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(double_t m00, double_t m01, double_t m02, double_t m03, double_t m10, double_t m11, double_t m12, double_t m13, double_t m20, double_t m21, double_t m22, double_t m23);

  /// @brief Method .ctor, addr 0x467e2d8, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::bool3x4 v);

  /// @brief Method .ctor, addr 0x467e4bc, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float3x4 v);

  /// @brief Method .ctor, addr 0x467e394, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::int3x4 v);

  /// @brief Method .ctor, addr 0x467e428, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::uint3x4 v);

  /// @brief Method .ctor, addr 0x467e2ac, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(bool v);

  /// @brief Method .ctor, addr 0x467e290, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(double_t v);

  /// @brief Method .ctor, addr 0x467e49c, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(float_t v);

  /// @brief Method .ctor, addr 0x467e374, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(int32_t v);

  /// @brief Method .ctor, addr 0x467e408, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(uint32_t v);

  static inline ::Unity::Mathematics::double3x4 getStaticF_zero();

  /// @brief Method get_Item, addr 0x467fcd0, size 0xc, virtual false, abstract: false, final false
  inline ::ByRef<::Unity::Mathematics::double3> get_Item(int32_t index);

  /// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::double3x4>"
  constexpr ::System::IEquatable_1<::Unity::Mathematics::double3x4>* i___System__IEquatable_1___Unity__Mathematics__double3x4_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Method op_Addition, addr 0x467e808, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 op_Addition(::Unity::Mathematics::double3x4 lhs, ::Unity::Mathematics::double3x4 rhs);

  /// @brief Method op_Addition, addr 0x467e848, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 op_Addition(::Unity::Mathematics::double3x4 lhs, double_t rhs);

  /// @brief Method op_Addition, addr 0x467e880, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 op_Addition(double_t lhs, ::Unity::Mathematics::double3x4 rhs);

  /// @brief Method op_Decrement, addr 0x467ee44, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 op_Decrement(::Unity::Mathematics::double3x4 val);

  /// @brief Method op_Division, addr 0x467e968, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 op_Division(::Unity::Mathematics::double3x4 lhs, ::Unity::Mathematics::double3x4 rhs);

  /// @brief Method op_Division, addr 0x467e9a8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 op_Division(::Unity::Mathematics::double3x4 lhs, double_t rhs);

  /// @brief Method op_Division, addr 0x467e9e0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 op_Division(double_t lhs, ::Unity::Mathematics::double3x4 rhs);

  /// @brief Method op_Equality, addr 0x467f828, size 0xdc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_Equality(::Unity::Mathematics::double3x4 lhs, ::Unity::Mathematics::double3x4 rhs);

  /// @brief Method op_Equality, addr 0x467f904, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_Equality(::Unity::Mathematics::double3x4 lhs, double_t rhs);

  /// @brief Method op_Equality, addr 0x467f9c0, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_Equality(double_t lhs, ::Unity::Mathematics::double3x4 rhs);

  /// @brief Method op_Explicit, addr 0x467e568, size 0x9c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 op_Explicit___Unity__Mathematics__double3x4(::Unity::Mathematics::bool3x4 v);

  /// @brief Method op_Explicit, addr 0x467e53c, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 op_Explicit___Unity__Mathematics__double3x4(bool v);

  /// @brief Method op_GreaterThan, addr 0x467f330, size 0xdc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_GreaterThan(::Unity::Mathematics::double3x4 lhs, ::Unity::Mathematics::double3x4 rhs);

  /// @brief Method op_GreaterThan, addr 0x467f40c, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_GreaterThan(::Unity::Mathematics::double3x4 lhs, double_t rhs);

  /// @brief Method op_GreaterThan, addr 0x467f4c8, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_GreaterThan(double_t lhs, ::Unity::Mathematics::double3x4 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x467f584, size 0xdc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_GreaterThanOrEqual(::Unity::Mathematics::double3x4 lhs, ::Unity::Mathematics::double3x4 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x467f660, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_GreaterThanOrEqual(::Unity::Mathematics::double3x4 lhs, double_t rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x467f71c, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_GreaterThanOrEqual(double_t lhs, ::Unity::Mathematics::double3x4 rhs);

  /// @brief Method op_Implicit, addr 0x467e72c, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 op_Implicit___Unity__Mathematics__double3x4(::Unity::Mathematics::float3x4 v);

  /// @brief Method op_Implicit, addr 0x467e624, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 op_Implicit___Unity__Mathematics__double3x4(::Unity::Mathematics::int3x4 v);

  /// @brief Method op_Implicit, addr 0x467e6a8, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 op_Implicit___Unity__Mathematics__double3x4(::Unity::Mathematics::uint3x4 v);

  /// @brief Method op_Implicit, addr 0x467e520, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 op_Implicit___Unity__Mathematics__double3x4(double_t v);

  /// @brief Method op_Implicit, addr 0x467e70c, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 op_Implicit___Unity__Mathematics__double3x4(float_t v);

  /// @brief Method op_Implicit, addr 0x467e604, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 op_Implicit___Unity__Mathematics__double3x4(int32_t v);

  /// @brief Method op_Implicit, addr 0x467e688, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 op_Implicit___Unity__Mathematics__double3x4(uint32_t v);

  /// @brief Method op_Increment, addr 0x467ee00, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 op_Increment(::Unity::Mathematics::double3x4 val);

  /// @brief Method op_Inequality, addr 0x467fa7c, size 0xdc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_Inequality(::Unity::Mathematics::double3x4 lhs, ::Unity::Mathematics::double3x4 rhs);

  /// @brief Method op_Inequality, addr 0x467fb58, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_Inequality(::Unity::Mathematics::double3x4 lhs, double_t rhs);

  /// @brief Method op_Inequality, addr 0x467fc14, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_Inequality(double_t lhs, ::Unity::Mathematics::double3x4 rhs);

  /// @brief Method op_LessThan, addr 0x467ee88, size 0xdc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_LessThan(::Unity::Mathematics::double3x4 lhs, ::Unity::Mathematics::double3x4 rhs);

  /// @brief Method op_LessThan, addr 0x467ef64, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_LessThan(::Unity::Mathematics::double3x4 lhs, double_t rhs);

  /// @brief Method op_LessThan, addr 0x467f020, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_LessThan(double_t lhs, ::Unity::Mathematics::double3x4 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x467f0dc, size 0xdc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_LessThanOrEqual(::Unity::Mathematics::double3x4 lhs, ::Unity::Mathematics::double3x4 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x467f1b8, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_LessThanOrEqual(::Unity::Mathematics::double3x4 lhs, double_t rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x467f274, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_LessThanOrEqual(double_t lhs, ::Unity::Mathematics::double3x4 rhs);

  /// @brief Method op_Modulus, addr 0x467ea18, size 0x160, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 op_Modulus(::Unity::Mathematics::double3x4 lhs, ::Unity::Mathematics::double3x4 rhs);

  /// @brief Method op_Modulus, addr 0x467eb78, size 0x14c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 op_Modulus(::Unity::Mathematics::double3x4 lhs, double_t rhs);

  /// @brief Method op_Modulus, addr 0x467ecc4, size 0x13c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 op_Modulus(double_t lhs, ::Unity::Mathematics::double3x4 rhs);

  /// @brief Method op_Multiply, addr 0x467e760, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 op_Multiply(::Unity::Mathematics::double3x4 lhs, ::Unity::Mathematics::double3x4 rhs);

  /// @brief Method op_Multiply, addr 0x467e7a0, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 op_Multiply(::Unity::Mathematics::double3x4 lhs, double_t rhs);

  /// @brief Method op_Multiply, addr 0x467e7d4, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 op_Multiply(double_t lhs, ::Unity::Mathematics::double3x4 rhs);

  /// @brief Method op_Subtraction, addr 0x467e8b8, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 op_Subtraction(::Unity::Mathematics::double3x4 lhs, ::Unity::Mathematics::double3x4 rhs);

  /// @brief Method op_Subtraction, addr 0x467e8f8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 op_Subtraction(::Unity::Mathematics::double3x4 lhs, double_t rhs);

  /// @brief Method op_Subtraction, addr 0x467e930, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 op_Subtraction(double_t lhs, ::Unity::Mathematics::double3x4 rhs);

  /// @brief Method op_UnaryNegation, addr 0x467f7d8, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 op_UnaryNegation(::Unity::Mathematics::double3x4 val);

  /// @brief Method op_UnaryPlus, addr 0x467f80c, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 op_UnaryPlus(::Unity::Mathematics::double3x4 val);

  static inline void setStaticF_zero(::Unity::Mathematics::double3x4 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr double3x4();

  // Ctor Parameters [CppParam { name: "c0", ty: "::Unity::Mathematics::double3", modifiers: "", def_value: None }, CppParam { name: "c1", ty: "::Unity::Mathematics::double3", modifiers: "",
  // def_value: None }, CppParam { name: "c2", ty: "::Unity::Mathematics::double3", modifiers: "", def_value: None }, CppParam { name: "c3", ty: "::Unity::Mathematics::double3", modifiers: "",
  // def_value: None }]
  constexpr double3x4(::Unity::Mathematics::double3 c0, ::Unity::Mathematics::double3 c1, ::Unity::Mathematics::double3 c2, ::Unity::Mathematics::double3 c3) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9968 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x60 };

  /// @brief Field c0, offset: 0x0, size: 0x18, def value: None
  ::Unity::Mathematics::double3 c0;

  /// @brief Field c1, offset: 0x18, size: 0x18, def value: None
  ::Unity::Mathematics::double3 c1;

  /// @brief Field c2, offset: 0x30, size: 0x18, def value: None
  ::Unity::Mathematics::double3 c2;

  /// @brief Field c3, offset: 0x48, size: 0x18, def value: None
  ::Unity::Mathematics::double3 c3;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::double3x4, c0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::double3x4, c1) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::double3x4, c2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::double3x4, c3) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::double3x4, 0x60>, "Size mismatch!");

} // namespace Unity::Mathematics
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::double3x4, "Unity.Mathematics", "double3x4");

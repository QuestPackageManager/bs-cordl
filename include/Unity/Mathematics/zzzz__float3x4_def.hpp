#pragma once
// IWYU pragma private; include "Unity/Mathematics/float3x4.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(float3x4)
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
struct float3;
}
namespace Unity::Mathematics {
struct int3x4;
}
namespace Unity::Mathematics {
struct uint3x4;
}
// Forward declare root types
namespace Unity::Mathematics {
struct float3x4;
}
// Write type traits
MARK_VAL_T(::Unity::Mathematics::float3x4);
DEFINE_IL2CPP_CLASS(::Unity::Mathematics::float3x4, "Unity.Mathematics", "float3x4");
// [DefaultMember("Item")]
// [Il2CppEagerStaticClassConstruction]
// Dependencies Unity.Mathematics.float3
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.float3x4
struct CORDL_TYPE float3x4 {
public:
  // Declarations
  __declspec(property(get = get_Item)) ::Unity::Mathematics::float3 Item[];

  /// @brief Field zero, offset 0xffffffff, size 0x30
  __declspec(property(get = getStaticF_zero, put = setStaticF_zero)) ::Unity::Mathematics::float3x4 zero;

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::float3x4>"
  constexpr operator ::System::IEquatable_1<::Unity::Mathematics::float3x4>*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Method Equals, addr 0x6a80150, size 0x12c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x6a80084, size 0xcc, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Mathematics::float3x4 rhs);

  /// @brief Method GetHashCode, addr 0x6a8027c, size 0xb4, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x6a80330, size 0x3a0, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x6a806d0, size 0x25d0, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method .ctor, addr 0x6a7e814, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float3 c0, ::Unity::Mathematics::float3 c1, ::Unity::Mathematics::float3 c2, ::Unity::Mathematics::float3 c3);

  /// @brief Method .ctor, addr 0x6a7e848, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(float_t m00, float_t m01, float_t m02, float_t m03, float_t m10, float_t m11, float_t m12, float_t m13, float_t m20, float_t m21, float_t m22, float_t m23);

  /// @brief Method .ctor, addr 0x6a7e8b8, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::bool3x4 v);

  /// @brief Method .ctor, addr 0x6a7ea78, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::double3x4 v);

  /// @brief Method .ctor, addr 0x6a7e968, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::int3x4 v);

  /// @brief Method .ctor, addr 0x6a7e9f0, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::uint3x4 v);

  /// @brief Method .ctor, addr 0x6a7e88c, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(bool v);

  /// @brief Method .ctor, addr 0x6a7ea64, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(double_t v);

  /// @brief Method .ctor, addr 0x6a7e87c, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(float_t v);

  /// @brief Method .ctor, addr 0x6a7e954, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(int32_t v);

  /// @brief Method .ctor, addr 0x6a7e9dc, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(uint32_t v);

  static inline ::Unity::Mathematics::float3x4 getStaticF_zero();

  /// @brief Method get_Item, addr 0x6a80078, size 0xc, virtual false, abstract: false, final false
  inline ::by_ref<::Unity::Mathematics::float3> get_Item(int32_t index);

  /// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::float3x4>"
  constexpr ::System::IEquatable_1<::Unity::Mathematics::float3x4>* i___System__IEquatable_1___Unity__Mathematics__float3x4_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Method op_Addition, addr 0x6a7ed50, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 op_Addition(::Unity::Mathematics::float3x4 lhs, ::Unity::Mathematics::float3x4 rhs);

  /// @brief Method op_Addition, addr 0x6a7ed78, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 op_Addition(::Unity::Mathematics::float3x4 lhs, float_t rhs);

  /// @brief Method op_Addition, addr 0x6a7ed9c, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 op_Addition(float_t lhs, ::Unity::Mathematics::float3x4 rhs);

  /// @brief Method op_Decrement, addr 0x6a7f298, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 op_Decrement(::Unity::Mathematics::float3x4 val);

  /// @brief Method op_Division, addr 0x6a7ee30, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 op_Division(::Unity::Mathematics::float3x4 lhs, ::Unity::Mathematics::float3x4 rhs);

  /// @brief Method op_Division, addr 0x6a7ee58, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 op_Division(::Unity::Mathematics::float3x4 lhs, float_t rhs);

  /// @brief Method op_Division, addr 0x6a7ee7c, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 op_Division(float_t lhs, ::Unity::Mathematics::float3x4 rhs);

  /// @brief Method op_Equality, addr 0x6a7fbf8, size 0xd0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_Equality(::Unity::Mathematics::float3x4 lhs, ::Unity::Mathematics::float3x4 rhs);

  /// @brief Method op_Equality, addr 0x6a7fcc8, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_Equality(::Unity::Mathematics::float3x4 lhs, float_t rhs);

  /// @brief Method op_Equality, addr 0x6a7fd80, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_Equality(float_t lhs, ::Unity::Mathematics::float3x4 rhs);

  /// @brief Method op_Explicit, addr 0x6a7eb18, size 0x9c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 op_Explicit___Unity__Mathematics__float3x4(::Unity::Mathematics::bool3x4 v);

  /// @brief Method op_Explicit, addr 0x6a7ecb8, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 op_Explicit___Unity__Mathematics__float3x4(::Unity::Mathematics::double3x4 v);

  /// @brief Method op_Explicit, addr 0x6a7eaec, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 op_Explicit___Unity__Mathematics__float3x4(bool v);

  /// @brief Method op_Explicit, addr 0x6a7eca4, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 op_Explicit___Unity__Mathematics__float3x4(double_t v);

  /// @brief Method op_GreaterThan, addr 0x6a7f744, size 0xd0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_GreaterThan(::Unity::Mathematics::float3x4 lhs, ::Unity::Mathematics::float3x4 rhs);

  /// @brief Method op_GreaterThan, addr 0x6a7f814, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_GreaterThan(::Unity::Mathematics::float3x4 lhs, float_t rhs);

  /// @brief Method op_GreaterThan, addr 0x6a7f8cc, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_GreaterThan(float_t lhs, ::Unity::Mathematics::float3x4 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x6a7f984, size 0xd0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_GreaterThanOrEqual(::Unity::Mathematics::float3x4 lhs, ::Unity::Mathematics::float3x4 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x6a7fa54, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_GreaterThanOrEqual(::Unity::Mathematics::float3x4 lhs, float_t rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x6a7fb0c, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_GreaterThanOrEqual(float_t lhs, ::Unity::Mathematics::float3x4 rhs);

  /// @brief Method op_Implicit, addr 0x6a7ebc8, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 op_Implicit___Unity__Mathematics__float3x4(::Unity::Mathematics::int3x4 v);

  /// @brief Method op_Implicit, addr 0x6a7ec40, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 op_Implicit___Unity__Mathematics__float3x4(::Unity::Mathematics::uint3x4 v);

  /// @brief Method op_Implicit, addr 0x6a7eadc, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 op_Implicit___Unity__Mathematics__float3x4(float_t v);

  /// @brief Method op_Implicit, addr 0x6a7ebb4, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 op_Implicit___Unity__Mathematics__float3x4(int32_t v);

  /// @brief Method op_Implicit, addr 0x6a7ec2c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 op_Implicit___Unity__Mathematics__float3x4(uint32_t v);

  /// @brief Method op_Increment, addr 0x6a7f26c, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 op_Increment(::Unity::Mathematics::float3x4 val);

  /// @brief Method op_Inequality, addr 0x6a7fe38, size 0xd0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_Inequality(::Unity::Mathematics::float3x4 lhs, ::Unity::Mathematics::float3x4 rhs);

  /// @brief Method op_Inequality, addr 0x6a7ff08, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_Inequality(::Unity::Mathematics::float3x4 lhs, float_t rhs);

  /// @brief Method op_Inequality, addr 0x6a7ffc0, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_Inequality(float_t lhs, ::Unity::Mathematics::float3x4 rhs);

  /// @brief Method op_LessThan, addr 0x6a7f2c4, size 0xd0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_LessThan(::Unity::Mathematics::float3x4 lhs, ::Unity::Mathematics::float3x4 rhs);

  /// @brief Method op_LessThan, addr 0x6a7f394, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_LessThan(::Unity::Mathematics::float3x4 lhs, float_t rhs);

  /// @brief Method op_LessThan, addr 0x6a7f44c, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_LessThan(float_t lhs, ::Unity::Mathematics::float3x4 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x6a7f504, size 0xd0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_LessThanOrEqual(::Unity::Mathematics::float3x4 lhs, ::Unity::Mathematics::float3x4 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x6a7f5d4, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_LessThanOrEqual(::Unity::Mathematics::float3x4 lhs, float_t rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x6a7f68c, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_LessThanOrEqual(float_t lhs, ::Unity::Mathematics::float3x4 rhs);

  /// @brief Method op_Modulus, addr 0x6a7eea0, size 0x154, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 op_Modulus(::Unity::Mathematics::float3x4 lhs, ::Unity::Mathematics::float3x4 rhs);

  /// @brief Method op_Modulus, addr 0x6a7eff4, size 0x144, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 op_Modulus(::Unity::Mathematics::float3x4 lhs, float_t rhs);

  /// @brief Method op_Modulus, addr 0x6a7f138, size 0x134, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 op_Modulus(float_t lhs, ::Unity::Mathematics::float3x4 rhs);

  /// @brief Method op_Multiply, addr 0x6a7ece8, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 op_Multiply(::Unity::Mathematics::float3x4 lhs, ::Unity::Mathematics::float3x4 rhs);

  /// @brief Method op_Multiply, addr 0x6a7ed10, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 op_Multiply(::Unity::Mathematics::float3x4 lhs, float_t rhs);

  /// @brief Method op_Multiply, addr 0x6a7ed30, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 op_Multiply(float_t lhs, ::Unity::Mathematics::float3x4 rhs);

  /// @brief Method op_Subtraction, addr 0x6a7edc0, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 op_Subtraction(::Unity::Mathematics::float3x4 lhs, ::Unity::Mathematics::float3x4 rhs);

  /// @brief Method op_Subtraction, addr 0x6a7ede8, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 op_Subtraction(::Unity::Mathematics::float3x4 lhs, float_t rhs);

  /// @brief Method op_Subtraction, addr 0x6a7ee0c, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 op_Subtraction(float_t lhs, ::Unity::Mathematics::float3x4 rhs);

  /// @brief Method op_UnaryNegation, addr 0x6a7fbc4, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 op_UnaryNegation(::Unity::Mathematics::float3x4 val);

  /// @brief Method op_UnaryPlus, addr 0x6a7fbe4, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 op_UnaryPlus(::Unity::Mathematics::float3x4 val);

  static inline void setStaticF_zero(::Unity::Mathematics::float3x4 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr float3x4();

  // Ctor Parameters [CppParam { name: "c0", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None, comment: None }, CppParam { name: "c1", ty: "::Unity::Mathematics::float3", modifiers:
  // "", def_value: None, comment: None }, CppParam { name: "c2", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None, comment: None }, CppParam { name: "c3", ty:
  // "::Unity::Mathematics::float3", modifiers: "", def_value: None, comment: None }]
  constexpr float3x4(::Unity::Mathematics::float3 c0, ::Unity::Mathematics::float3 c1, ::Unity::Mathematics::float3 c2, ::Unity::Mathematics::float3 c3) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13409 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field c0, offset: 0x0, size: 0xc, def value: None
  ::Unity::Mathematics::float3 c0;

  /// @brief Field c1, offset: 0xc, size: 0xc, def value: None
  ::Unity::Mathematics::float3 c1;

  /// @brief Field c2, offset: 0x18, size: 0xc, def value: None
  ::Unity::Mathematics::float3 c2;

  /// @brief Field c3, offset: 0x24, size: 0xc, def value: None
  ::Unity::Mathematics::float3 c3;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::float3x4, c0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::float3x4, c1) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::float3x4, c2) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::float3x4, c3) == 0x24, "Offset mismatch!");

static_assert(sizeof(::Unity::Mathematics::float3x4) == 0x30, "Size mismatch!");

} // namespace Unity::Mathematics

#pragma once
// IWYU pragma private; include "Unity/Mathematics/float4x3.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__float4_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(float4x3)
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
struct float4;
}
namespace Unity::Mathematics {
struct int4x3;
}
namespace Unity::Mathematics {
struct uint4x3;
}
// Forward declare root types
namespace Unity::Mathematics {
struct float4x3;
}
// Write type traits
MARK_VAL_T(::Unity::Mathematics::float4x3);
DEFINE_IL2CPP_CLASS(::Unity::Mathematics::float4x3, "Unity.Mathematics", "float4x3");
// [DefaultMember("Item")]
// [Il2CppEagerStaticClassConstruction]
// Dependencies Unity.Mathematics.float4
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.float4x3
struct CORDL_TYPE float4x3 {
public:
  // Declarations
  __declspec(property(get = get_Item)) ::Unity::Mathematics::float4 Item[];

  /// @brief Field zero, offset 0xffffffff, size 0x30
  __declspec(property(get = getStaticF_zero, put = setStaticF_zero)) ::Unity::Mathematics::float4x3 zero;

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::float4x3>"
  constexpr operator ::System::IEquatable_1<::Unity::Mathematics::float4x3>*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Method Equals, addr 0x6ac5fd0, size 0x12c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x6ac5f04, size 0xcc, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Mathematics::float4x3 rhs);

  /// @brief Method GetHashCode, addr 0x6ac60fc, size 0xe0, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x6ac61dc, size 0x3a0, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x6ac657c, size 0x39c, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method .ctor, addr 0x6ac47d4, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float4 c0, ::Unity::Mathematics::float4 c1, ::Unity::Mathematics::float4 c2);

  /// @brief Method .ctor, addr 0x6ac47f0, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(float_t m00, float_t m01, float_t m02, float_t m10, float_t m11, float_t m12, float_t m20, float_t m21, float_t m22, float_t m30, float_t m31, float_t m32);

  /// @brief Method .ctor, addr 0x6ac4860, size 0x84, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::bool4x3 v);

  /// @brief Method .ctor, addr 0x6ac49e8, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::double4x3 v);

  /// @brief Method .ctor, addr 0x6ac48f8, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::int4x3 v);

  /// @brief Method .ctor, addr 0x6ac4970, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::uint4x3 v);

  /// @brief Method .ctor, addr 0x6ac4834, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(bool v);

  /// @brief Method .ctor, addr 0x6ac49d4, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(double_t v);

  /// @brief Method .ctor, addr 0x6ac4824, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(float_t v);

  /// @brief Method .ctor, addr 0x6ac48e4, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(int32_t v);

  /// @brief Method .ctor, addr 0x6ac495c, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(uint32_t v);

  static inline ::Unity::Mathematics::float4x3 getStaticF_zero();

  /// @brief Method get_Item, addr 0x6ac5efc, size 0x8, virtual false, abstract: false, final false
  inline ::by_ref<::Unity::Mathematics::float4> get_Item(int32_t index);

  /// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::float4x3>"
  constexpr ::System::IEquatable_1<::Unity::Mathematics::float4x3>* i___System__IEquatable_1___Unity__Mathematics__float4x3_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Method op_Addition, addr 0x6ac4c78, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x3 op_Addition(::Unity::Mathematics::float4x3 lhs, ::Unity::Mathematics::float4x3 rhs);

  /// @brief Method op_Addition, addr 0x6ac4ca0, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x3 op_Addition(::Unity::Mathematics::float4x3 lhs, float_t rhs);

  /// @brief Method op_Addition, addr 0x6ac4cc4, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x3 op_Addition(float_t lhs, ::Unity::Mathematics::float4x3 rhs);

  /// @brief Method op_Decrement, addr 0x6ac51ac, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x3 op_Decrement(::Unity::Mathematics::float4x3 val);

  /// @brief Method op_Division, addr 0x6ac4d58, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x3 op_Division(::Unity::Mathematics::float4x3 lhs, ::Unity::Mathematics::float4x3 rhs);

  /// @brief Method op_Division, addr 0x6ac4d80, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x3 op_Division(::Unity::Mathematics::float4x3 lhs, float_t rhs);

  /// @brief Method op_Division, addr 0x6ac4da4, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x3 op_Division(float_t lhs, ::Unity::Mathematics::float4x3 rhs);

  /// @brief Method op_Equality, addr 0x6ac5aac, size 0xc8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_Equality(::Unity::Mathematics::float4x3 lhs, ::Unity::Mathematics::float4x3 rhs);

  /// @brief Method op_Equality, addr 0x6ac5b74, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_Equality(::Unity::Mathematics::float4x3 lhs, float_t rhs);

  /// @brief Method op_Equality, addr 0x6ac5c24, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_Equality(float_t lhs, ::Unity::Mathematics::float4x3 rhs);

  /// @brief Method op_Explicit, addr 0x6ac4a58, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x3 op_Explicit___Unity__Mathematics__float4x3(::Unity::Mathematics::bool4x3 v);

  /// @brief Method op_Explicit, addr 0x6ac4be0, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x3 op_Explicit___Unity__Mathematics__float4x3(::Unity::Mathematics::double4x3 v);

  /// @brief Method op_Explicit, addr 0x6ac4a2c, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x3 op_Explicit___Unity__Mathematics__float4x3(bool v);

  /// @brief Method op_Explicit, addr 0x6ac4bcc, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x3 op_Explicit___Unity__Mathematics__float4x3(double_t v);

  /// @brief Method op_GreaterThan, addr 0x6ac5628, size 0xc8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_GreaterThan(::Unity::Mathematics::float4x3 lhs, ::Unity::Mathematics::float4x3 rhs);

  /// @brief Method op_GreaterThan, addr 0x6ac56f0, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_GreaterThan(::Unity::Mathematics::float4x3 lhs, float_t rhs);

  /// @brief Method op_GreaterThan, addr 0x6ac57a0, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_GreaterThan(float_t lhs, ::Unity::Mathematics::float4x3 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x6ac5850, size 0xc8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_GreaterThanOrEqual(::Unity::Mathematics::float4x3 lhs, ::Unity::Mathematics::float4x3 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x6ac5918, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_GreaterThanOrEqual(::Unity::Mathematics::float4x3 lhs, float_t rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x6ac59c8, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_GreaterThanOrEqual(float_t lhs, ::Unity::Mathematics::float4x3 rhs);

  /// @brief Method op_Implicit, addr 0x6ac4af0, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x3 op_Implicit___Unity__Mathematics__float4x3(::Unity::Mathematics::int4x3 v);

  /// @brief Method op_Implicit, addr 0x6ac4b68, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x3 op_Implicit___Unity__Mathematics__float4x3(::Unity::Mathematics::uint4x3 v);

  /// @brief Method op_Implicit, addr 0x6ac4a1c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x3 op_Implicit___Unity__Mathematics__float4x3(float_t v);

  /// @brief Method op_Implicit, addr 0x6ac4adc, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x3 op_Implicit___Unity__Mathematics__float4x3(int32_t v);

  /// @brief Method op_Implicit, addr 0x6ac4b54, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x3 op_Implicit___Unity__Mathematics__float4x3(uint32_t v);

  /// @brief Method op_Increment, addr 0x6ac5180, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x3 op_Increment(::Unity::Mathematics::float4x3 val);

  /// @brief Method op_Inequality, addr 0x6ac5cd4, size 0xc8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_Inequality(::Unity::Mathematics::float4x3 lhs, ::Unity::Mathematics::float4x3 rhs);

  /// @brief Method op_Inequality, addr 0x6ac5d9c, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_Inequality(::Unity::Mathematics::float4x3 lhs, float_t rhs);

  /// @brief Method op_Inequality, addr 0x6ac5e4c, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_Inequality(float_t lhs, ::Unity::Mathematics::float4x3 rhs);

  /// @brief Method op_LessThan, addr 0x6ac51d8, size 0xc8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_LessThan(::Unity::Mathematics::float4x3 lhs, ::Unity::Mathematics::float4x3 rhs);

  /// @brief Method op_LessThan, addr 0x6ac52a0, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_LessThan(::Unity::Mathematics::float4x3 lhs, float_t rhs);

  /// @brief Method op_LessThan, addr 0x6ac5350, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_LessThan(float_t lhs, ::Unity::Mathematics::float4x3 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x6ac5400, size 0xc8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_LessThanOrEqual(::Unity::Mathematics::float4x3 lhs, ::Unity::Mathematics::float4x3 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x6ac54c8, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_LessThanOrEqual(::Unity::Mathematics::float4x3 lhs, float_t rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x6ac5578, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_LessThanOrEqual(float_t lhs, ::Unity::Mathematics::float4x3 rhs);

  /// @brief Method op_Modulus, addr 0x6ac4dc8, size 0x14c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x3 op_Modulus(::Unity::Mathematics::float4x3 lhs, ::Unity::Mathematics::float4x3 rhs);

  /// @brief Method op_Modulus, addr 0x6ac4f14, size 0x13c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x3 op_Modulus(::Unity::Mathematics::float4x3 lhs, float_t rhs);

  /// @brief Method op_Modulus, addr 0x6ac5050, size 0x130, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x3 op_Modulus(float_t lhs, ::Unity::Mathematics::float4x3 rhs);

  /// @brief Method op_Multiply, addr 0x6ac4c10, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x3 op_Multiply(::Unity::Mathematics::float4x3 lhs, ::Unity::Mathematics::float4x3 rhs);

  /// @brief Method op_Multiply, addr 0x6ac4c38, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x3 op_Multiply(::Unity::Mathematics::float4x3 lhs, float_t rhs);

  /// @brief Method op_Multiply, addr 0x6ac4c58, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x3 op_Multiply(float_t lhs, ::Unity::Mathematics::float4x3 rhs);

  /// @brief Method op_Subtraction, addr 0x6ac4ce8, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x3 op_Subtraction(::Unity::Mathematics::float4x3 lhs, ::Unity::Mathematics::float4x3 rhs);

  /// @brief Method op_Subtraction, addr 0x6ac4d10, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x3 op_Subtraction(::Unity::Mathematics::float4x3 lhs, float_t rhs);

  /// @brief Method op_Subtraction, addr 0x6ac4d34, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x3 op_Subtraction(float_t lhs, ::Unity::Mathematics::float4x3 rhs);

  /// @brief Method op_UnaryNegation, addr 0x6ac5a78, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x3 op_UnaryNegation(::Unity::Mathematics::float4x3 val);

  /// @brief Method op_UnaryPlus, addr 0x6ac5a98, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x3 op_UnaryPlus(::Unity::Mathematics::float4x3 val);

  static inline void setStaticF_zero(::Unity::Mathematics::float4x3 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr float4x3();

  // Ctor Parameters [CppParam { name: "c0", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: None, comment: None }, CppParam { name: "c1", ty: "::Unity::Mathematics::float4", modifiers:
  // "", def_value: None, comment: None }, CppParam { name: "c2", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: None, comment: None }]
  constexpr float4x3(::Unity::Mathematics::float4 c0, ::Unity::Mathematics::float4 c1, ::Unity::Mathematics::float4 c2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13420 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field c0, offset: 0x0, size: 0x10, def value: None
  ::Unity::Mathematics::float4 c0;

  /// @brief Field c1, offset: 0x10, size: 0x10, def value: None
  ::Unity::Mathematics::float4 c1;

  /// @brief Field c2, offset: 0x20, size: 0x10, def value: None
  ::Unity::Mathematics::float4 c2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::float4x3, c0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::float4x3, c1) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::float4x3, c2) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Unity::Mathematics::float4x3) == 0x30, "Size mismatch!");

} // namespace Unity::Mathematics

#pragma once
// IWYU pragma private; include "Unity/Mathematics/float3x4.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__IFormattable_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(float3x4)
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
// Dependencies System.IEquatable`1<T>, System.IFormattable, Unity.Mathematics.float3
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

  /// @brief Method Equals, addr 0x4696b04, size 0x128, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x4696a38, size 0xcc, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Mathematics::float3x4 rhs);

  /// @brief Method GetHashCode, addr 0x4696c2c, size 0xc4, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x4696cf0, size 0x3ac, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x469709c, size 0x25bc, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method .ctor, addr 0x4695140, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float3 c0, ::Unity::Mathematics::float3 c1, ::Unity::Mathematics::float3 c2, ::Unity::Mathematics::float3 c3);

  /// @brief Method .ctor, addr 0x4695170, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(float_t m00, float_t m01, float_t m02, float_t m03, float_t m10, float_t m11, float_t m12, float_t m13, float_t m20, float_t m21, float_t m22, float_t m23);

  /// @brief Method .ctor, addr 0x46951d8, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::bool3x4 v);

  /// @brief Method .ctor, addr 0x4695398, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::double3x4 v);

  /// @brief Method .ctor, addr 0x4695288, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::int3x4 v);

  /// @brief Method .ctor, addr 0x4695310, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::uint3x4 v);

  /// @brief Method .ctor, addr 0x46951ac, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(bool v);

  /// @brief Method .ctor, addr 0x4695384, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(double_t v);

  /// @brief Method .ctor, addr 0x469519c, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(float_t v);

  /// @brief Method .ctor, addr 0x4695274, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(int32_t v);

  /// @brief Method .ctor, addr 0x46952fc, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(uint32_t v);

  static inline ::Unity::Mathematics::float3x4 getStaticF_zero();

  /// @brief Method get_Item, addr 0x4696a2c, size 0xc, virtual false, abstract: false, final false
  inline ::ByRef<::Unity::Mathematics::float3> get_Item(int32_t index);

  /// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::float3x4>"
  constexpr ::System::IEquatable_1<::Unity::Mathematics::float3x4>* i___System__IEquatable_1___Unity__Mathematics__float3x4_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Method op_Addition, addr 0x4695670, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 op_Addition(::Unity::Mathematics::float3x4 lhs, ::Unity::Mathematics::float3x4 rhs);

  /// @brief Method op_Addition, addr 0x4695698, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 op_Addition(::Unity::Mathematics::float3x4 lhs, float_t rhs);

  /// @brief Method op_Addition, addr 0x46956bc, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 op_Addition(float_t lhs, ::Unity::Mathematics::float3x4 rhs);

  /// @brief Method op_Decrement, addr 0x4695bd4, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 op_Decrement(::Unity::Mathematics::float3x4 val);

  /// @brief Method op_Division, addr 0x4695750, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 op_Division(::Unity::Mathematics::float3x4 lhs, ::Unity::Mathematics::float3x4 rhs);

  /// @brief Method op_Division, addr 0x4695778, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 op_Division(::Unity::Mathematics::float3x4 lhs, float_t rhs);

  /// @brief Method op_Division, addr 0x469579c, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 op_Division(float_t lhs, ::Unity::Mathematics::float3x4 rhs);

  /// @brief Method op_Equality, addr 0x4696584, size 0xdc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_Equality(::Unity::Mathematics::float3x4 lhs, ::Unity::Mathematics::float3x4 rhs);

  /// @brief Method op_Equality, addr 0x4696660, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_Equality(::Unity::Mathematics::float3x4 lhs, float_t rhs);

  /// @brief Method op_Equality, addr 0x469671c, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_Equality(float_t lhs, ::Unity::Mathematics::float3x4 rhs);

  /// @brief Method op_Explicit, addr 0x4695438, size 0x9c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 op_Explicit___Unity__Mathematics__float3x4(::Unity::Mathematics::bool3x4 v);

  /// @brief Method op_Explicit, addr 0x46955d8, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 op_Explicit___Unity__Mathematics__float3x4(::Unity::Mathematics::double3x4 v);

  /// @brief Method op_Explicit, addr 0x469540c, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 op_Explicit___Unity__Mathematics__float3x4(bool v);

  /// @brief Method op_Explicit, addr 0x46955c4, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 op_Explicit___Unity__Mathematics__float3x4(double_t v);

  /// @brief Method op_GreaterThan, addr 0x46960a8, size 0xdc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_GreaterThan(::Unity::Mathematics::float3x4 lhs, ::Unity::Mathematics::float3x4 rhs);

  /// @brief Method op_GreaterThan, addr 0x4696184, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_GreaterThan(::Unity::Mathematics::float3x4 lhs, float_t rhs);

  /// @brief Method op_GreaterThan, addr 0x4696240, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_GreaterThan(float_t lhs, ::Unity::Mathematics::float3x4 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x46962fc, size 0xdc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_GreaterThanOrEqual(::Unity::Mathematics::float3x4 lhs, ::Unity::Mathematics::float3x4 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x46963d8, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_GreaterThanOrEqual(::Unity::Mathematics::float3x4 lhs, float_t rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x4696494, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_GreaterThanOrEqual(float_t lhs, ::Unity::Mathematics::float3x4 rhs);

  /// @brief Method op_Implicit, addr 0x46954e8, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 op_Implicit___Unity__Mathematics__float3x4(::Unity::Mathematics::int3x4 v);

  /// @brief Method op_Implicit, addr 0x4695560, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 op_Implicit___Unity__Mathematics__float3x4(::Unity::Mathematics::uint3x4 v);

  /// @brief Method op_Implicit, addr 0x46953fc, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 op_Implicit___Unity__Mathematics__float3x4(float_t v);

  /// @brief Method op_Implicit, addr 0x46954d4, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 op_Implicit___Unity__Mathematics__float3x4(int32_t v);

  /// @brief Method op_Implicit, addr 0x469554c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 op_Implicit___Unity__Mathematics__float3x4(uint32_t v);

  /// @brief Method op_Increment, addr 0x4695ba8, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 op_Increment(::Unity::Mathematics::float3x4 val);

  /// @brief Method op_Inequality, addr 0x46967d8, size 0xdc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_Inequality(::Unity::Mathematics::float3x4 lhs, ::Unity::Mathematics::float3x4 rhs);

  /// @brief Method op_Inequality, addr 0x46968b4, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_Inequality(::Unity::Mathematics::float3x4 lhs, float_t rhs);

  /// @brief Method op_Inequality, addr 0x4696970, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_Inequality(float_t lhs, ::Unity::Mathematics::float3x4 rhs);

  /// @brief Method op_LessThan, addr 0x4695c00, size 0xdc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_LessThan(::Unity::Mathematics::float3x4 lhs, ::Unity::Mathematics::float3x4 rhs);

  /// @brief Method op_LessThan, addr 0x4695cdc, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_LessThan(::Unity::Mathematics::float3x4 lhs, float_t rhs);

  /// @brief Method op_LessThan, addr 0x4695d98, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_LessThan(float_t lhs, ::Unity::Mathematics::float3x4 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x4695e54, size 0xdc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_LessThanOrEqual(::Unity::Mathematics::float3x4 lhs, ::Unity::Mathematics::float3x4 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x4695f30, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_LessThanOrEqual(::Unity::Mathematics::float3x4 lhs, float_t rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x4695fec, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_LessThanOrEqual(float_t lhs, ::Unity::Mathematics::float3x4 rhs);

  /// @brief Method op_Modulus, addr 0x46957c0, size 0x160, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 op_Modulus(::Unity::Mathematics::float3x4 lhs, ::Unity::Mathematics::float3x4 rhs);

  /// @brief Method op_Modulus, addr 0x4695920, size 0x14c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 op_Modulus(::Unity::Mathematics::float3x4 lhs, float_t rhs);

  /// @brief Method op_Modulus, addr 0x4695a6c, size 0x13c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 op_Modulus(float_t lhs, ::Unity::Mathematics::float3x4 rhs);

  /// @brief Method op_Multiply, addr 0x4695608, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 op_Multiply(::Unity::Mathematics::float3x4 lhs, ::Unity::Mathematics::float3x4 rhs);

  /// @brief Method op_Multiply, addr 0x4695630, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 op_Multiply(::Unity::Mathematics::float3x4 lhs, float_t rhs);

  /// @brief Method op_Multiply, addr 0x4695650, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 op_Multiply(float_t lhs, ::Unity::Mathematics::float3x4 rhs);

  /// @brief Method op_Subtraction, addr 0x46956e0, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 op_Subtraction(::Unity::Mathematics::float3x4 lhs, ::Unity::Mathematics::float3x4 rhs);

  /// @brief Method op_Subtraction, addr 0x4695708, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 op_Subtraction(::Unity::Mathematics::float3x4 lhs, float_t rhs);

  /// @brief Method op_Subtraction, addr 0x469572c, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 op_Subtraction(float_t lhs, ::Unity::Mathematics::float3x4 rhs);

  /// @brief Method op_UnaryNegation, addr 0x4696550, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 op_UnaryNegation(::Unity::Mathematics::float3x4 val);

  /// @brief Method op_UnaryPlus, addr 0x4696570, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x4 op_UnaryPlus(::Unity::Mathematics::float3x4 val);

  static inline void setStaticF_zero(::Unity::Mathematics::float3x4 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr float3x4();

  // Ctor Parameters [CppParam { name: "c0", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None }, CppParam { name: "c1", ty: "::Unity::Mathematics::float3", modifiers: "", def_value:
  // None }, CppParam { name: "c2", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None }, CppParam { name: "c3", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None }]
  constexpr float3x4(::Unity::Mathematics::float3 c0, ::Unity::Mathematics::float3 c1, ::Unity::Mathematics::float3 c2, ::Unity::Mathematics::float3 c3) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9983 };

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

static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::float3x4, 0x30>, "Size mismatch!");

} // namespace Unity::Mathematics
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::float3x4, "Unity.Mathematics", "float3x4");

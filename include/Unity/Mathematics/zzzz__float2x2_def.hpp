#pragma once
// IWYU pragma private; include "Unity/Mathematics/float2x2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__float2_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(float2x2)
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
struct bool2x2;
}
namespace Unity::Mathematics {
struct double2x2;
}
namespace Unity::Mathematics {
struct float2;
}
namespace Unity::Mathematics {
struct int2x2;
}
namespace Unity::Mathematics {
struct uint2x2;
}
// Forward declare root types
namespace Unity::Mathematics {
struct float2x2;
}
// Write type traits
MARK_VAL_T(::Unity::Mathematics::float2x2);
DEFINE_IL2CPP_CLASS(::Unity::Mathematics::float2x2, "Unity.Mathematics", "float2x2");
// Dependencies Unity.Mathematics.float2
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.float2x2
struct CORDL_TYPE float2x2 {
public:
  // Declarations
  __declspec(property(get = get_Item)) ::Unity::Mathematics::float2 Item[];

  /// @brief Field identity, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_identity, put = setStaticF_identity)) ::Unity::Mathematics::float2x2 identity;

  /// @brief Field zero, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_zero, put = setStaticF_zero)) ::Unity::Mathematics::float2x2 zero;

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::float2x2>"
  constexpr operator ::System::IEquatable_1<::Unity::Mathematics::float2x2>*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Method Equals, addr 0x663520c, size 0xac, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x66351d0, size 0x3c, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Mathematics::float2x2 rhs);

  /// @brief Method GetHashCode, addr 0x66352b8, size 0x58, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method Rotate, addr 0x663564c, size 0xc0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 Rotate(float_t angle);

  /// @brief Method Scale, addr 0x663570c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 Scale(float_t s);

  /// @brief Method Scale, addr 0x663572c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 Scale(::Unity::Mathematics::float2 v);

  /// @brief Method Scale, addr 0x663571c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 Scale(float_t x, float_t y);

  /// @brief Method ToString, addr 0x6635310, size 0x1a0, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x66354b0, size 0x19c, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method .ctor, addr 0x663496c, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float2 c0, ::Unity::Mathematics::float2 c1);

  /// @brief Method .ctor, addr 0x6634978, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(float_t m00, float_t m01, float_t m10, float_t m11);

  /// @brief Method .ctor, addr 0x66349ac, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::bool2x2 v);

  /// @brief Method .ctor, addr 0x6634a58, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::double2x2 v);

  /// @brief Method .ctor, addr 0x66349f0, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::int2x2 v);

  /// @brief Method .ctor, addr 0x6634a24, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::uint2x2 v);

  /// @brief Method .ctor, addr 0x6634990, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(bool v);

  /// @brief Method .ctor, addr 0x6634a48, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(double_t v);

  /// @brief Method .ctor, addr 0x6634984, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(float_t v);

  /// @brief Method .ctor, addr 0x66349e0, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(int32_t v);

  /// @brief Method .ctor, addr 0x6634a14, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(uint32_t v);

  static inline ::Unity::Mathematics::float2x2 getStaticF_identity();

  static inline ::Unity::Mathematics::float2x2 getStaticF_zero();

  /// @brief Method get_Item, addr 0x66351c8, size 0x8, virtual false, abstract: false, final false
  inline ::by_ref<::Unity::Mathematics::float2> get_Item(int32_t index);

  /// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::float2x2>"
  constexpr ::System::IEquatable_1<::Unity::Mathematics::float2x2>* i___System__IEquatable_1___Unity__Mathematics__float2x2_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Method op_Addition, addr 0x6634b98, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 op_Addition(::Unity::Mathematics::float2x2 lhs, ::Unity::Mathematics::float2x2 rhs);

  /// @brief Method op_Addition, addr 0x6634bac, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 op_Addition(::Unity::Mathematics::float2x2 lhs, float_t rhs);

  /// @brief Method op_Addition, addr 0x6634bc0, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 op_Addition(float_t lhs, ::Unity::Mathematics::float2x2 rhs);

  /// @brief Method op_Decrement, addr 0x6634df0, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 op_Decrement(::Unity::Mathematics::float2x2 val);

  /// @brief Method op_Division, addr 0x6634c18, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 op_Division(::Unity::Mathematics::float2x2 lhs, ::Unity::Mathematics::float2x2 rhs);

  /// @brief Method op_Division, addr 0x6634c2c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 op_Division(::Unity::Mathematics::float2x2 lhs, float_t rhs);

  /// @brief Method op_Division, addr 0x6634c40, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 op_Division(float_t lhs, ::Unity::Mathematics::float2x2 rhs);

  /// @brief Method op_Equality, addr 0x6635090, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_Equality(::Unity::Mathematics::float2x2 lhs, ::Unity::Mathematics::float2x2 rhs);

  /// @brief Method op_Equality, addr 0x66350c4, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_Equality(::Unity::Mathematics::float2x2 lhs, float_t rhs);

  /// @brief Method op_Equality, addr 0x66350f8, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_Equality(float_t lhs, ::Unity::Mathematics::float2x2 rhs);

  /// @brief Method op_Explicit, addr 0x6634aa4, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 op_Explicit___Unity__Mathematics__float2x2(::Unity::Mathematics::bool2x2 v);

  /// @brief Method op_Explicit, addr 0x6634b44, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 op_Explicit___Unity__Mathematics__float2x2(::Unity::Mathematics::double2x2 v);

  /// @brief Method op_Explicit, addr 0x6634a84, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 op_Explicit___Unity__Mathematics__float2x2(bool v);

  /// @brief Method op_Explicit, addr 0x6634b30, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 op_Explicit___Unity__Mathematics__float2x2(double_t v);

  /// @brief Method op_GreaterThan, addr 0x6634f40, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_GreaterThan(::Unity::Mathematics::float2x2 lhs, ::Unity::Mathematics::float2x2 rhs);

  /// @brief Method op_GreaterThan, addr 0x6634f74, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_GreaterThan(::Unity::Mathematics::float2x2 lhs, float_t rhs);

  /// @brief Method op_GreaterThan, addr 0x6634fa8, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_GreaterThan(float_t lhs, ::Unity::Mathematics::float2x2 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x6634fdc, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_GreaterThanOrEqual(::Unity::Mathematics::float2x2 lhs, ::Unity::Mathematics::float2x2 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x6635010, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_GreaterThanOrEqual(::Unity::Mathematics::float2x2 lhs, float_t rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x6635044, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_GreaterThanOrEqual(float_t lhs, ::Unity::Mathematics::float2x2 rhs);

  /// @brief Method op_Implicit, addr 0x6634ae4, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 op_Implicit___Unity__Mathematics__float2x2(::Unity::Mathematics::int2x2 v);

  /// @brief Method op_Implicit, addr 0x6634b14, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 op_Implicit___Unity__Mathematics__float2x2(::Unity::Mathematics::uint2x2 v);

  /// @brief Method op_Implicit, addr 0x6634a74, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 op_Implicit___Unity__Mathematics__float2x2(float_t v);

  /// @brief Method op_Implicit, addr 0x6634ad0, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 op_Implicit___Unity__Mathematics__float2x2(int32_t v);

  /// @brief Method op_Implicit, addr 0x6634b00, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 op_Implicit___Unity__Mathematics__float2x2(uint32_t v);

  /// @brief Method op_Increment, addr 0x6634dd8, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 op_Increment(::Unity::Mathematics::float2x2 val);

  /// @brief Method op_Inequality, addr 0x663512c, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_Inequality(::Unity::Mathematics::float2x2 lhs, ::Unity::Mathematics::float2x2 rhs);

  /// @brief Method op_Inequality, addr 0x6635160, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_Inequality(::Unity::Mathematics::float2x2 lhs, float_t rhs);

  /// @brief Method op_Inequality, addr 0x6635194, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_Inequality(float_t lhs, ::Unity::Mathematics::float2x2 rhs);

  /// @brief Method op_LessThan, addr 0x6634e08, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_LessThan(::Unity::Mathematics::float2x2 lhs, ::Unity::Mathematics::float2x2 rhs);

  /// @brief Method op_LessThan, addr 0x6634e3c, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_LessThan(::Unity::Mathematics::float2x2 lhs, float_t rhs);

  /// @brief Method op_LessThan, addr 0x6634e70, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_LessThan(float_t lhs, ::Unity::Mathematics::float2x2 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x6634ea4, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_LessThanOrEqual(::Unity::Mathematics::float2x2 lhs, ::Unity::Mathematics::float2x2 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x6634ed8, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_LessThanOrEqual(::Unity::Mathematics::float2x2 lhs, float_t rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x6634f0c, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_LessThanOrEqual(float_t lhs, ::Unity::Mathematics::float2x2 rhs);

  /// @brief Method op_Modulus, addr 0x6634c58, size 0x8c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 op_Modulus(::Unity::Mathematics::float2x2 lhs, ::Unity::Mathematics::float2x2 rhs);

  /// @brief Method op_Modulus, addr 0x6634ce4, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 op_Modulus(::Unity::Mathematics::float2x2 lhs, float_t rhs);

  /// @brief Method op_Modulus, addr 0x6634d60, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 op_Modulus(float_t lhs, ::Unity::Mathematics::float2x2 rhs);

  /// @brief Method op_Multiply, addr 0x6634b58, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 op_Multiply(::Unity::Mathematics::float2x2 lhs, ::Unity::Mathematics::float2x2 rhs);

  /// @brief Method op_Multiply, addr 0x6634b6c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 op_Multiply(::Unity::Mathematics::float2x2 lhs, float_t rhs);

  /// @brief Method op_Multiply, addr 0x6634b80, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 op_Multiply(float_t lhs, ::Unity::Mathematics::float2x2 rhs);

  /// @brief Method op_Subtraction, addr 0x6634bd8, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 op_Subtraction(::Unity::Mathematics::float2x2 lhs, ::Unity::Mathematics::float2x2 rhs);

  /// @brief Method op_Subtraction, addr 0x6634bec, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 op_Subtraction(::Unity::Mathematics::float2x2 lhs, float_t rhs);

  /// @brief Method op_Subtraction, addr 0x6634c00, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 op_Subtraction(float_t lhs, ::Unity::Mathematics::float2x2 rhs);

  /// @brief Method op_UnaryNegation, addr 0x6635078, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 op_UnaryNegation(::Unity::Mathematics::float2x2 val);

  /// @brief Method op_UnaryPlus, addr 0x663508c, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2x2 op_UnaryPlus(::Unity::Mathematics::float2x2 val);

  static inline void setStaticF_identity(::Unity::Mathematics::float2x2 value);

  static inline void setStaticF_zero(::Unity::Mathematics::float2x2 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr float2x2();

  // Ctor Parameters [CppParam { name: "c0", ty: "::Unity::Mathematics::float2", modifiers: "", def_value: None }, CppParam { name: "c1", ty: "::Unity::Mathematics::float2", modifiers: "", def_value:
  // None }]
  constexpr float2x2(::Unity::Mathematics::float2 c0, ::Unity::Mathematics::float2 c1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13133 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field c0, offset: 0x0, size: 0x8, def value: None
  ::Unity::Mathematics::float2 c0;

  /// @brief Field c1, offset: 0x8, size: 0x8, def value: None
  ::Unity::Mathematics::float2 c1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::float2x2, c0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::float2x2, c1) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Unity::Mathematics::float2x2) == 0x10, "Size mismatch!");

} // namespace Unity::Mathematics

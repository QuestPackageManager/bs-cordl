#pragma once
// IWYU pragma private; include "Unity/Mathematics/double2x2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__double2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(double2x2)
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
struct double2;
}
namespace Unity::Mathematics {
struct float2x2;
}
namespace Unity::Mathematics {
struct int2x2;
}
namespace Unity::Mathematics {
struct uint2x2;
}
// Forward declare root types
namespace Unity::Mathematics {
struct double2x2;
}
// Write type traits
MARK_VAL_T(::Unity::Mathematics::double2x2);
// Dependencies Unity.Mathematics.double2
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.double2x2
struct CORDL_TYPE double2x2 {
public:
  // Declarations
  __declspec(property(get = get_Item)) ::Unity::Mathematics::double2 Item[];

  /// @brief Field identity, offset 0xffffffff, size 0x20
  __declspec(property(get = getStaticF_identity, put = setStaticF_identity)) ::Unity::Mathematics::double2x2 identity;

  /// @brief Field zero, offset 0xffffffff, size 0x20
  __declspec(property(get = getStaticF_zero, put = setStaticF_zero)) ::Unity::Mathematics::double2x2 zero;

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::double2x2>"
  constexpr operator ::System::IEquatable_1<::Unity::Mathematics::double2x2>*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Method Equals, addr 0x646c0e4, size 0xac, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x646c0a8, size 0x3c, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Mathematics::double2x2 rhs);

  /// @brief Method GetHashCode, addr 0x646c190, size 0x74, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x646c204, size 0x1a0, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x646c3a4, size 0x19c, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method .ctor, addr 0x646b844, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::double2 c0, ::Unity::Mathematics::double2 c1);

  /// @brief Method .ctor, addr 0x646b850, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(double_t m00, double_t m01, double_t m10, double_t m11);

  /// @brief Method .ctor, addr 0x646b884, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::bool2x2 v);

  /// @brief Method .ctor, addr 0x646b930, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float2x2 v);

  /// @brief Method .ctor, addr 0x646b8c8, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::int2x2 v);

  /// @brief Method .ctor, addr 0x646b8fc, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::uint2x2 v);

  /// @brief Method .ctor, addr 0x646b868, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(bool v);

  /// @brief Method .ctor, addr 0x646b85c, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(double_t v);

  /// @brief Method .ctor, addr 0x646b920, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(float_t v);

  /// @brief Method .ctor, addr 0x646b8b8, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(int32_t v);

  /// @brief Method .ctor, addr 0x646b8ec, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(uint32_t v);

  static inline ::Unity::Mathematics::double2x2 getStaticF_identity();

  static inline ::Unity::Mathematics::double2x2 getStaticF_zero();

  /// @brief Method get_Item, addr 0x646c0a0, size 0x8, virtual false, abstract: false, final false
  inline ::ByRef<::Unity::Mathematics::double2> get_Item(int32_t index);

  /// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::double2x2>"
  constexpr ::System::IEquatable_1<::Unity::Mathematics::double2x2>* i___System__IEquatable_1___Unity__Mathematics__double2x2_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Method op_Addition, addr 0x646ba70, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 op_Addition(::Unity::Mathematics::double2x2 lhs, ::Unity::Mathematics::double2x2 rhs);

  /// @brief Method op_Addition, addr 0x646ba84, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 op_Addition(::Unity::Mathematics::double2x2 lhs, double_t rhs);

  /// @brief Method op_Addition, addr 0x646ba98, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 op_Addition(double_t lhs, ::Unity::Mathematics::double2x2 rhs);

  /// @brief Method op_Decrement, addr 0x646bcc8, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 op_Decrement(::Unity::Mathematics::double2x2 val);

  /// @brief Method op_Division, addr 0x646baf0, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 op_Division(::Unity::Mathematics::double2x2 lhs, ::Unity::Mathematics::double2x2 rhs);

  /// @brief Method op_Division, addr 0x646bb04, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 op_Division(::Unity::Mathematics::double2x2 lhs, double_t rhs);

  /// @brief Method op_Division, addr 0x646bb18, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 op_Division(double_t lhs, ::Unity::Mathematics::double2x2 rhs);

  /// @brief Method op_Equality, addr 0x646bf68, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_Equality(::Unity::Mathematics::double2x2 lhs, ::Unity::Mathematics::double2x2 rhs);

  /// @brief Method op_Equality, addr 0x646bf9c, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_Equality(::Unity::Mathematics::double2x2 lhs, double_t rhs);

  /// @brief Method op_Equality, addr 0x646bfd0, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_Equality(double_t lhs, ::Unity::Mathematics::double2x2 rhs);

  /// @brief Method op_Explicit, addr 0x646b97c, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 op_Explicit___Unity__Mathematics__double2x2(::Unity::Mathematics::bool2x2 v);

  /// @brief Method op_Explicit, addr 0x646b95c, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 op_Explicit___Unity__Mathematics__double2x2(bool v);

  /// @brief Method op_GreaterThan, addr 0x646be18, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_GreaterThan(::Unity::Mathematics::double2x2 lhs, ::Unity::Mathematics::double2x2 rhs);

  /// @brief Method op_GreaterThan, addr 0x646be4c, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_GreaterThan(::Unity::Mathematics::double2x2 lhs, double_t rhs);

  /// @brief Method op_GreaterThan, addr 0x646be80, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_GreaterThan(double_t lhs, ::Unity::Mathematics::double2x2 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x646beb4, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_GreaterThanOrEqual(::Unity::Mathematics::double2x2 lhs, ::Unity::Mathematics::double2x2 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x646bee8, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_GreaterThanOrEqual(::Unity::Mathematics::double2x2 lhs, double_t rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x646bf1c, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_GreaterThanOrEqual(double_t lhs, ::Unity::Mathematics::double2x2 rhs);

  /// @brief Method op_Implicit, addr 0x646ba1c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 op_Implicit___Unity__Mathematics__double2x2(::Unity::Mathematics::float2x2 v);

  /// @brief Method op_Implicit, addr 0x646b9bc, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 op_Implicit___Unity__Mathematics__double2x2(::Unity::Mathematics::int2x2 v);

  /// @brief Method op_Implicit, addr 0x646b9ec, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 op_Implicit___Unity__Mathematics__double2x2(::Unity::Mathematics::uint2x2 v);

  /// @brief Method op_Implicit, addr 0x646b94c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 op_Implicit___Unity__Mathematics__double2x2(double_t v);

  /// @brief Method op_Implicit, addr 0x646ba08, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 op_Implicit___Unity__Mathematics__double2x2(float_t v);

  /// @brief Method op_Implicit, addr 0x646b9a8, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 op_Implicit___Unity__Mathematics__double2x2(int32_t v);

  /// @brief Method op_Implicit, addr 0x646b9d8, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 op_Implicit___Unity__Mathematics__double2x2(uint32_t v);

  /// @brief Method op_Increment, addr 0x646bcb0, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 op_Increment(::Unity::Mathematics::double2x2 val);

  /// @brief Method op_Inequality, addr 0x646c004, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_Inequality(::Unity::Mathematics::double2x2 lhs, ::Unity::Mathematics::double2x2 rhs);

  /// @brief Method op_Inequality, addr 0x646c038, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_Inequality(::Unity::Mathematics::double2x2 lhs, double_t rhs);

  /// @brief Method op_Inequality, addr 0x646c06c, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_Inequality(double_t lhs, ::Unity::Mathematics::double2x2 rhs);

  /// @brief Method op_LessThan, addr 0x646bce0, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_LessThan(::Unity::Mathematics::double2x2 lhs, ::Unity::Mathematics::double2x2 rhs);

  /// @brief Method op_LessThan, addr 0x646bd14, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_LessThan(::Unity::Mathematics::double2x2 lhs, double_t rhs);

  /// @brief Method op_LessThan, addr 0x646bd48, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_LessThan(double_t lhs, ::Unity::Mathematics::double2x2 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x646bd7c, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_LessThanOrEqual(::Unity::Mathematics::double2x2 lhs, ::Unity::Mathematics::double2x2 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x646bdb0, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_LessThanOrEqual(::Unity::Mathematics::double2x2 lhs, double_t rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x646bde4, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x2 op_LessThanOrEqual(double_t lhs, ::Unity::Mathematics::double2x2 rhs);

  /// @brief Method op_Modulus, addr 0x646bb30, size 0x8c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 op_Modulus(::Unity::Mathematics::double2x2 lhs, ::Unity::Mathematics::double2x2 rhs);

  /// @brief Method op_Modulus, addr 0x646bbbc, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 op_Modulus(::Unity::Mathematics::double2x2 lhs, double_t rhs);

  /// @brief Method op_Modulus, addr 0x646bc38, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 op_Modulus(double_t lhs, ::Unity::Mathematics::double2x2 rhs);

  /// @brief Method op_Multiply, addr 0x646ba30, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 op_Multiply(::Unity::Mathematics::double2x2 lhs, ::Unity::Mathematics::double2x2 rhs);

  /// @brief Method op_Multiply, addr 0x646ba44, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 op_Multiply(::Unity::Mathematics::double2x2 lhs, double_t rhs);

  /// @brief Method op_Multiply, addr 0x646ba58, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 op_Multiply(double_t lhs, ::Unity::Mathematics::double2x2 rhs);

  /// @brief Method op_Subtraction, addr 0x646bab0, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 op_Subtraction(::Unity::Mathematics::double2x2 lhs, ::Unity::Mathematics::double2x2 rhs);

  /// @brief Method op_Subtraction, addr 0x646bac4, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 op_Subtraction(::Unity::Mathematics::double2x2 lhs, double_t rhs);

  /// @brief Method op_Subtraction, addr 0x646bad8, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 op_Subtraction(double_t lhs, ::Unity::Mathematics::double2x2 rhs);

  /// @brief Method op_UnaryNegation, addr 0x646bf50, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 op_UnaryNegation(::Unity::Mathematics::double2x2 val);

  /// @brief Method op_UnaryPlus, addr 0x646bf64, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2x2 op_UnaryPlus(::Unity::Mathematics::double2x2 val);

  static inline void setStaticF_identity(::Unity::Mathematics::double2x2 value);

  static inline void setStaticF_zero(::Unity::Mathematics::double2x2 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr double2x2();

  // Ctor Parameters [CppParam { name: "c0", ty: "::Unity::Mathematics::double2", modifiers: "", def_value: None }, CppParam { name: "c1", ty: "::Unity::Mathematics::double2", modifiers: "",
  // def_value: None }]
  constexpr double2x2(::Unity::Mathematics::double2 c0, ::Unity::Mathematics::double2 c1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13118 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field c0, offset: 0x0, size: 0x10, def value: None
  ::Unity::Mathematics::double2 c0;

  /// @brief Field c1, offset: 0x10, size: 0x10, def value: None
  ::Unity::Mathematics::double2 c1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::double2x2, c0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::double2x2, c1) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::double2x2, 0x20>, "Size mismatch!");

} // namespace Unity::Mathematics
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::double2x2, "Unity.Mathematics", "double2x2");

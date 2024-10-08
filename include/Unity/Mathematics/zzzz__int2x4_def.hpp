#pragma once
// IWYU pragma private; include "Unity/Mathematics/int2x4.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__int2_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(int2x4)
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
struct bool2x4;
}
namespace Unity::Mathematics {
struct double2x4;
}
namespace Unity::Mathematics {
struct float2x4;
}
namespace Unity::Mathematics {
struct int2;
}
namespace Unity::Mathematics {
struct uint2x4;
}
// Forward declare root types
namespace Unity::Mathematics {
struct int2x4;
}
// Write type traits
MARK_VAL_T(::Unity::Mathematics::int2x4);
// Type: Unity.Mathematics::int2x4
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 48, minimum_alignment: 4, packing: None, specified_packing: None }
namespace Unity::Mathematics {
// Is value type: true
// CS Name: ::Unity.Mathematics::int2x4
struct CORDL_TYPE int2x4 {
public:
  // Declarations
  __declspec(property(get = get_Item)) ::Unity::Mathematics::int2 Item[];

  /// @brief Field zero, offset 0xffffffff, size 0x20
  static __declspec(property(get = getStaticF_zero, put = setStaticF_zero)) ::Unity::Mathematics::int2x4 zero;

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::int2x4>"
  constexpr operator ::System::IEquatable_1<::Unity::Mathematics::int2x4>*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Method Equals, addr 0x4639f5c, size 0xe8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x4639ed0, size 0x8c, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Mathematics::int2x4 rhs);

  /// @brief Method GetHashCode, addr 0x463a044, size 0x90, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x463a0d4, size 0x2ac, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x463a380, size 0x294, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method .ctor, addr 0x4638890, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::int2 c0, ::Unity::Mathematics::int2 c1, ::Unity::Mathematics::int2 c2, ::Unity::Mathematics::int2 c3);

  /// @brief Method .ctor, addr 0x463889c, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(int32_t m00, int32_t m01, int32_t m02, int32_t m03, int32_t m10, int32_t m11, int32_t m12, int32_t m13);

  /// @brief Method .ctor, addr 0x46388f8, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::bool2x4 v);

  /// @brief Method .ctor, addr 0x4638a98, size 0xb4, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::double2x4 v);

  /// @brief Method .ctor, addr 0x46389bc, size 0xb4, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float2x4 v);

  /// @brief Method .ctor, addr 0x4638970, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::uint2x4 v);

  /// @brief Method .ctor, addr 0x46388e0, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(bool v);

  /// @brief Method .ctor, addr 0x4638a70, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(double_t v);

  /// @brief Method .ctor, addr 0x4638994, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(float_t v);

  /// @brief Method .ctor, addr 0x46388cc, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(int32_t v);

  /// @brief Method .ctor, addr 0x463895c, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(uint32_t v);

  static inline ::Unity::Mathematics::int2x4 getStaticF_zero();

  /// @brief Method get_Item, addr 0x4639ec8, size 0x8, virtual false, abstract: false, final false
  inline ByRef<::Unity::Mathematics::int2> get_Item(int32_t index);

  /// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::int2x4>"
  constexpr ::System::IEquatable_1<::Unity::Mathematics::int2x4>* i___System__IEquatable_1___Unity__Mathematics__int2x4_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Method op_Addition, addr 0x4638ea0, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x4 op_Addition(::Unity::Mathematics::int2x4 lhs, ::Unity::Mathematics::int2x4 rhs);

  /// @brief Method op_Addition, addr 0x4638ed4, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x4 op_Addition(::Unity::Mathematics::int2x4 lhs, int32_t rhs);

  /// @brief Method op_Addition, addr 0x4638f1c, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x4 op_Addition(int32_t lhs, ::Unity::Mathematics::int2x4 rhs);

  /// @brief Method op_BitwiseAnd, addr 0x4639cd0, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x4 op_BitwiseAnd(::Unity::Mathematics::int2x4 lhs, ::Unity::Mathematics::int2x4 rhs);

  /// @brief Method op_BitwiseAnd, addr 0x4639ce8, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x4 op_BitwiseAnd(::Unity::Mathematics::int2x4 lhs, int32_t rhs);

  /// @brief Method op_BitwiseAnd, addr 0x4639d30, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x4 op_BitwiseAnd(int32_t lhs, ::Unity::Mathematics::int2x4 rhs);

  /// @brief Method op_BitwiseOr, addr 0x4639d78, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x4 op_BitwiseOr(::Unity::Mathematics::int2x4 lhs, ::Unity::Mathematics::int2x4 rhs);

  /// @brief Method op_BitwiseOr, addr 0x4639d90, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x4 op_BitwiseOr(::Unity::Mathematics::int2x4 lhs, int32_t rhs);

  /// @brief Method op_BitwiseOr, addr 0x4639dd8, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x4 op_BitwiseOr(int32_t lhs, ::Unity::Mathematics::int2x4 rhs);

  /// @brief Method op_Decrement, addr 0x46392ac, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x4 op_Decrement(::Unity::Mathematics::int2x4 val);

  /// @brief Method op_Division, addr 0x4639028, size 0x5c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x4 op_Division(::Unity::Mathematics::int2x4 lhs, ::Unity::Mathematics::int2x4 rhs);

  /// @brief Method op_Division, addr 0x4639084, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x4 op_Division(::Unity::Mathematics::int2x4 lhs, int32_t rhs);

  /// @brief Method op_Division, addr 0x46390d0, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x4 op_Division(int32_t lhs, ::Unity::Mathematics::int2x4 rhs);

  /// @brief Method op_Equality, addr 0x46399b8, size 0xa0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_Equality(::Unity::Mathematics::int2x4 lhs, ::Unity::Mathematics::int2x4 rhs);

  /// @brief Method op_Equality, addr 0x4639a58, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_Equality(::Unity::Mathematics::int2x4 lhs, int32_t rhs);

  /// @brief Method op_Equality, addr 0x4639ac8, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_Equality(int32_t lhs, ::Unity::Mathematics::int2x4 rhs);

  /// @brief Method op_ExclusiveOr, addr 0x4639e20, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x4 op_ExclusiveOr(::Unity::Mathematics::int2x4 lhs, ::Unity::Mathematics::int2x4 rhs);

  /// @brief Method op_ExclusiveOr, addr 0x4639e38, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x4 op_ExclusiveOr(::Unity::Mathematics::int2x4 lhs, int32_t rhs);

  /// @brief Method op_ExclusiveOr, addr 0x4639e80, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x4 op_ExclusiveOr(int32_t lhs, ::Unity::Mathematics::int2x4 rhs);

  /// @brief Method op_Explicit, addr 0x4638b78, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x4 op_Explicit___Unity__Mathematics__int2x4(::Unity::Mathematics::bool2x4 v);

  /// @brief Method op_Explicit, addr 0x4638cf8, size 0xac, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x4 op_Explicit___Unity__Mathematics__int2x4(::Unity::Mathematics::double2x4 v);

  /// @brief Method op_Explicit, addr 0x4638c24, size 0xac, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x4 op_Explicit___Unity__Mathematics__int2x4(::Unity::Mathematics::float2x4 v);

  /// @brief Method op_Explicit, addr 0x4638bf0, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x4 op_Explicit___Unity__Mathematics__int2x4(::Unity::Mathematics::uint2x4 v);

  /// @brief Method op_Explicit, addr 0x4638b60, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x4 op_Explicit___Unity__Mathematics__int2x4(bool v);

  /// @brief Method op_Explicit, addr 0x4638cd0, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x4 op_Explicit___Unity__Mathematics__int2x4(double_t v);

  /// @brief Method op_Explicit, addr 0x4638bfc, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x4 op_Explicit___Unity__Mathematics__int2x4(float_t v);

  /// @brief Method op_Explicit, addr 0x4638bdc, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x4 op_Explicit___Unity__Mathematics__int2x4(uint32_t v);

  /// @brief Method op_GreaterThan, addr 0x46395dc, size 0xa0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_GreaterThan(::Unity::Mathematics::int2x4 lhs, ::Unity::Mathematics::int2x4 rhs);

  /// @brief Method op_GreaterThan, addr 0x463967c, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_GreaterThan(::Unity::Mathematics::int2x4 lhs, int32_t rhs);

  /// @brief Method op_GreaterThan, addr 0x46396ec, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_GreaterThan(int32_t lhs, ::Unity::Mathematics::int2x4 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x463975c, size 0xa0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_GreaterThanOrEqual(::Unity::Mathematics::int2x4 lhs, ::Unity::Mathematics::int2x4 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x46397fc, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_GreaterThanOrEqual(::Unity::Mathematics::int2x4 lhs, int32_t rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x463986c, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_GreaterThanOrEqual(int32_t lhs, ::Unity::Mathematics::int2x4 rhs);

  /// @brief Method op_Implicit, addr 0x4638b4c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x4 op_Implicit___Unity__Mathematics__int2x4(int32_t v);

  /// @brief Method op_Increment, addr 0x4639270, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x4 op_Increment(::Unity::Mathematics::int2x4 val);

  /// @brief Method op_Inequality, addr 0x4639b38, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_Inequality(::Unity::Mathematics::int2x4 lhs, ::Unity::Mathematics::int2x4 rhs);

  /// @brief Method op_Inequality, addr 0x4639bdc, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_Inequality(::Unity::Mathematics::int2x4 lhs, int32_t rhs);

  /// @brief Method op_Inequality, addr 0x4639c4c, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_Inequality(int32_t lhs, ::Unity::Mathematics::int2x4 rhs);

  /// @brief Method op_LeftShift, addr 0x463991c, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x4 op_LeftShift(::Unity::Mathematics::int2x4 x, int32_t n);

  /// @brief Method op_LessThan, addr 0x46392dc, size 0xa0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_LessThan(::Unity::Mathematics::int2x4 lhs, ::Unity::Mathematics::int2x4 rhs);

  /// @brief Method op_LessThan, addr 0x463937c, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_LessThan(::Unity::Mathematics::int2x4 lhs, int32_t rhs);

  /// @brief Method op_LessThan, addr 0x46393ec, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_LessThan(int32_t lhs, ::Unity::Mathematics::int2x4 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x463945c, size 0xa0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_LessThanOrEqual(::Unity::Mathematics::int2x4 lhs, ::Unity::Mathematics::int2x4 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x46394fc, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_LessThanOrEqual(::Unity::Mathematics::int2x4 lhs, int32_t rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x463956c, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2x4 op_LessThanOrEqual(int32_t lhs, ::Unity::Mathematics::int2x4 rhs);

  /// @brief Method op_Modulus, addr 0x463911c, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x4 op_Modulus(::Unity::Mathematics::int2x4 lhs, ::Unity::Mathematics::int2x4 rhs);

  /// @brief Method op_Modulus, addr 0x4639198, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x4 op_Modulus(::Unity::Mathematics::int2x4 lhs, int32_t rhs);

  /// @brief Method op_Modulus, addr 0x4639204, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x4 op_Modulus(int32_t lhs, ::Unity::Mathematics::int2x4 rhs);

  /// @brief Method op_Multiply, addr 0x4638da4, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x4 op_Multiply(::Unity::Mathematics::int2x4 lhs, ::Unity::Mathematics::int2x4 rhs);

  /// @brief Method op_Multiply, addr 0x4638e10, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x4 op_Multiply(::Unity::Mathematics::int2x4 lhs, int32_t rhs);

  /// @brief Method op_Multiply, addr 0x4638e58, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x4 op_Multiply(int32_t lhs, ::Unity::Mathematics::int2x4 rhs);

  /// @brief Method op_OnesComplement, addr 0x4639cbc, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x4 op_OnesComplement(::Unity::Mathematics::int2x4 val);

  /// @brief Method op_RightShift, addr 0x4639968, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x4 op_RightShift(::Unity::Mathematics::int2x4 x, int32_t n);

  /// @brief Method op_Subtraction, addr 0x4638f64, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x4 op_Subtraction(::Unity::Mathematics::int2x4 lhs, ::Unity::Mathematics::int2x4 rhs);

  /// @brief Method op_Subtraction, addr 0x4638f98, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x4 op_Subtraction(::Unity::Mathematics::int2x4 lhs, int32_t rhs);

  /// @brief Method op_Subtraction, addr 0x4638fe0, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x4 op_Subtraction(int32_t lhs, ::Unity::Mathematics::int2x4 rhs);

  /// @brief Method op_UnaryNegation, addr 0x46398dc, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x4 op_UnaryNegation(::Unity::Mathematics::int2x4 val);

  /// @brief Method op_UnaryPlus, addr 0x4639910, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2x4 op_UnaryPlus(::Unity::Mathematics::int2x4 val);

  static inline void setStaticF_zero(::Unity::Mathematics::int2x4 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr int2x4();

  // Ctor Parameters [CppParam { name: "c0", ty: "::Unity::Mathematics::int2", modifiers: "", def_value: None }, CppParam { name: "c1", ty: "::Unity::Mathematics::int2", modifiers: "", def_value: None
  // }, CppParam { name: "c2", ty: "::Unity::Mathematics::int2", modifiers: "", def_value: None }, CppParam { name: "c3", ty: "::Unity::Mathematics::int2", modifiers: "", def_value: None }]
  constexpr int2x4(::Unity::Mathematics::int2 c0, ::Unity::Mathematics::int2 c1, ::Unity::Mathematics::int2 c2, ::Unity::Mathematics::int2 c3) noexcept;

  /// @brief Field c0, offset: 0x0, size: 0x8, def value: None
  ::Unity::Mathematics::int2 c0;

  /// @brief Field c1, offset: 0x8, size: 0x8, def value: None
  ::Unity::Mathematics::int2 c1;

  /// @brief Field c2, offset: 0x10, size: 0x8, def value: None
  ::Unity::Mathematics::int2 c2;

  /// @brief Field c3, offset: 0x18, size: 0x8, def value: None
  ::Unity::Mathematics::int2 c3;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9965 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::int2x4, 0x20>, "Size mismatch!");

static_assert(offsetof(::Unity::Mathematics::int2x4, c0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::int2x4, c1) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::int2x4, c2) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::int2x4, c3) == 0x18, "Offset mismatch!");

} // namespace Unity::Mathematics
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::int2x4, "Unity.Mathematics", "int2x4");

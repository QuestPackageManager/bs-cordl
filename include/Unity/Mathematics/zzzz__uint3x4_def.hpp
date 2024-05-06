#pragma once
// IWYU pragma private; include "Unity/Mathematics/uint3x4.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__uint3_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(uint3x4)
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
struct float3x4;
}
namespace Unity::Mathematics {
struct int3x4;
}
namespace Unity::Mathematics {
struct uint3;
}
// Forward declare root types
namespace Unity::Mathematics {
struct uint3x4;
}
// Write type traits
MARK_VAL_T(::Unity::Mathematics::uint3x4);
// Type: Unity.Mathematics::uint3x4
// SizeInfo { instance_size: 48, native_size: 48, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Unity::Mathematics {
// Is value type: true
// CS Name: ::Unity.Mathematics::uint3x4
struct CORDL_TYPE uint3x4 {
public:
  // Declarations
  __declspec(property(get = get_Item))::Unity::Mathematics::uint3 Item[];

  /// @brief Field zero, offset 0xffffffff, size 0x30
  static __declspec(property(get = getStaticF_zero, put = setStaticF_zero))::Unity::Mathematics::uint3x4 zero;

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::uint3x4>"
  constexpr operator ::System::IEquatable_1<::Unity::Mathematics::uint3x4>*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Method Equals, addr 0x31cb930, size 0x128, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x31cb864, size 0xcc, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Mathematics::uint3x4 rhs);

  /// @brief Method GetHashCode, addr 0x31cba58, size 0x100, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x31cbb58, size 0x3ac, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x31cbf04, size 0x394, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method .ctor, addr 0x31c9190, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::uint3 c0, ::Unity::Mathematics::uint3 c1, ::Unity::Mathematics::uint3 c2, ::Unity::Mathematics::uint3 c3);

  /// @brief Method .ctor, addr 0x31c91b8, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(uint32_t m00, uint32_t m01, uint32_t m02, uint32_t m03, uint32_t m10, uint32_t m11, uint32_t m12, uint32_t m13, uint32_t m20, uint32_t m21, uint32_t m22, uint32_t m23);

  /// @brief Method .ctor, addr 0x31c9248, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::bool3x4 v);

  /// @brief Method .ctor, addr 0x31c94bc, size 0x114, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::double3x4 v);

  /// @brief Method .ctor, addr 0x31c9370, size 0x114, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float3x4 v);

  /// @brief Method .ctor, addr 0x31c92f4, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::int3x4 v);

  /// @brief Method .ctor, addr 0x31c9214, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(bool v);

  /// @brief Method .ctor, addr 0x31c9484, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(double_t v);

  /// @brief Method .ctor, addr 0x31c9338, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(float_t v);

  /// @brief Method .ctor, addr 0x31c92c8, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(int32_t v);

  /// @brief Method .ctor, addr 0x31c91e8, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(uint32_t v);

  static inline ::Unity::Mathematics::uint3x4 getStaticF_zero();

  /// @brief Method get_Item, addr 0x31cb858, size 0xc, virtual false, abstract: false, final false
  inline ByRef<::Unity::Mathematics::uint3> get_Item(int32_t index);

  /// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::uint3x4>"
  constexpr ::System::IEquatable_1<::Unity::Mathematics::uint3x4>* i___System__IEquatable_1___Unity__Mathematics__uint3x4_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Method op_Addition, addr 0x31c9b64, size 0xc4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 op_Addition(::Unity::Mathematics::uint3x4 lhs, ::Unity::Mathematics::uint3x4 rhs);

  /// @brief Method op_Addition, addr 0x31c9c28, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 op_Addition(::Unity::Mathematics::uint3x4 lhs, uint32_t rhs);

  /// @brief Method op_Addition, addr 0x31c9ca4, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 op_Addition(uint32_t lhs, ::Unity::Mathematics::uint3x4 rhs);

  /// @brief Method op_BitwiseAnd, addr 0x31cb3e4, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 op_BitwiseAnd(::Unity::Mathematics::uint3x4 lhs, ::Unity::Mathematics::uint3x4 rhs);

  /// @brief Method op_BitwiseAnd, addr 0x31cb468, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 op_BitwiseAnd(::Unity::Mathematics::uint3x4 lhs, uint32_t rhs);

  /// @brief Method op_BitwiseAnd, addr 0x31cb4e4, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 op_BitwiseAnd(uint32_t lhs, ::Unity::Mathematics::uint3x4 rhs);

  /// @brief Method op_BitwiseOr, addr 0x31cb560, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 op_BitwiseOr(::Unity::Mathematics::uint3x4 lhs, ::Unity::Mathematics::uint3x4 rhs);

  /// @brief Method op_BitwiseOr, addr 0x31cb5e4, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 op_BitwiseOr(::Unity::Mathematics::uint3x4 lhs, uint32_t rhs);

  /// @brief Method op_BitwiseOr, addr 0x31cb660, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 op_BitwiseOr(uint32_t lhs, ::Unity::Mathematics::uint3x4 rhs);

  /// @brief Method op_Decrement, addr 0x31ca340, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 op_Decrement(::Unity::Mathematics::uint3x4 val);

  /// @brief Method op_Division, addr 0x31c9edc, size 0x94, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 op_Division(::Unity::Mathematics::uint3x4 lhs, ::Unity::Mathematics::uint3x4 rhs);

  /// @brief Method op_Division, addr 0x31c9f70, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 op_Division(::Unity::Mathematics::uint3x4 lhs, uint32_t rhs);

  /// @brief Method op_Division, addr 0x31c9fec, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 op_Division(uint32_t lhs, ::Unity::Mathematics::uint3x4 rhs);

  /// @brief Method op_Equality, addr 0x31caee8, size 0xd4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_Equality(::Unity::Mathematics::uint3x4 lhs, ::Unity::Mathematics::uint3x4 rhs);

  /// @brief Method op_Equality, addr 0x31cafbc, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_Equality(::Unity::Mathematics::uint3x4 lhs, uint32_t rhs);

  /// @brief Method op_Equality, addr 0x31cb078, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_Equality(uint32_t lhs, ::Unity::Mathematics::uint3x4 rhs);

  /// @brief Method op_ExclusiveOr, addr 0x31cb6dc, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 op_ExclusiveOr(::Unity::Mathematics::uint3x4 lhs, ::Unity::Mathematics::uint3x4 rhs);

  /// @brief Method op_ExclusiveOr, addr 0x31cb760, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 op_ExclusiveOr(::Unity::Mathematics::uint3x4 lhs, uint32_t rhs);

  /// @brief Method op_ExclusiveOr, addr 0x31cb7dc, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 op_ExclusiveOr(uint32_t lhs, ::Unity::Mathematics::uint3x4 rhs);

  /// @brief Method op_Explicit, addr 0x31c9630, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 op_Explicit___Unity__Mathematics__uint3x4(::Unity::Mathematics::bool3x4 v);

  /// @brief Method op_Explicit, addr 0x31c989c, size 0x10c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 op_Explicit___Unity__Mathematics__uint3x4(::Unity::Mathematics::double3x4 v);

  /// @brief Method op_Explicit, addr 0x31c9758, size 0x10c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 op_Explicit___Unity__Mathematics__uint3x4(::Unity::Mathematics::float3x4 v);

  /// @brief Method op_Explicit, addr 0x31c96dc, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 op_Explicit___Unity__Mathematics__uint3x4(::Unity::Mathematics::int3x4 v);

  /// @brief Method op_Explicit, addr 0x31c95fc, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 op_Explicit___Unity__Mathematics__uint3x4(bool v);

  /// @brief Method op_Explicit, addr 0x31c9864, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 op_Explicit___Unity__Mathematics__uint3x4(double_t v);

  /// @brief Method op_Explicit, addr 0x31c9720, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 op_Explicit___Unity__Mathematics__uint3x4(float_t v);

  /// @brief Method op_Explicit, addr 0x31c96b0, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 op_Explicit___Unity__Mathematics__uint3x4(int32_t v);

  /// @brief Method op_GreaterThan, addr 0x31ca890, size 0xd4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_GreaterThan(::Unity::Mathematics::uint3x4 lhs, ::Unity::Mathematics::uint3x4 rhs);

  /// @brief Method op_GreaterThan, addr 0x31ca964, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_GreaterThan(::Unity::Mathematics::uint3x4 lhs, uint32_t rhs);

  /// @brief Method op_GreaterThan, addr 0x31caa20, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_GreaterThan(uint32_t lhs, ::Unity::Mathematics::uint3x4 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x31caadc, size 0xd4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_GreaterThanOrEqual(::Unity::Mathematics::uint3x4 lhs, ::Unity::Mathematics::uint3x4 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x31cabb0, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_GreaterThanOrEqual(::Unity::Mathematics::uint3x4 lhs, uint32_t rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x31cac6c, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_GreaterThanOrEqual(uint32_t lhs, ::Unity::Mathematics::uint3x4 rhs);

  /// @brief Method op_Implicit, addr 0x31c95d0, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 op_Implicit___Unity__Mathematics__uint3x4(uint32_t v);

  /// @brief Method op_Increment, addr 0x31ca288, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 op_Increment(::Unity::Mathematics::uint3x4 val);

  /// @brief Method op_Inequality, addr 0x31cb134, size 0xd4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_Inequality(::Unity::Mathematics::uint3x4 lhs, ::Unity::Mathematics::uint3x4 rhs);

  /// @brief Method op_Inequality, addr 0x31cb208, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_Inequality(::Unity::Mathematics::uint3x4 lhs, uint32_t rhs);

  /// @brief Method op_Inequality, addr 0x31cb2c4, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_Inequality(uint32_t lhs, ::Unity::Mathematics::uint3x4 rhs);

  /// @brief Method op_LeftShift, addr 0x31cadf0, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 op_LeftShift(::Unity::Mathematics::uint3x4 x, int32_t n);

  /// @brief Method op_LessThan, addr 0x31ca3f8, size 0xd4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_LessThan(::Unity::Mathematics::uint3x4 lhs, ::Unity::Mathematics::uint3x4 rhs);

  /// @brief Method op_LessThan, addr 0x31ca4cc, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_LessThan(::Unity::Mathematics::uint3x4 lhs, uint32_t rhs);

  /// @brief Method op_LessThan, addr 0x31ca588, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_LessThan(uint32_t lhs, ::Unity::Mathematics::uint3x4 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x31ca644, size 0xd4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_LessThanOrEqual(::Unity::Mathematics::uint3x4 lhs, ::Unity::Mathematics::uint3x4 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x31ca718, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_LessThanOrEqual(::Unity::Mathematics::uint3x4 lhs, uint32_t rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x31ca7d4, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_LessThanOrEqual(uint32_t lhs, ::Unity::Mathematics::uint3x4 rhs);

  /// @brief Method op_Modulus, addr 0x31ca068, size 0xc8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 op_Modulus(::Unity::Mathematics::uint3x4 lhs, ::Unity::Mathematics::uint3x4 rhs);

  /// @brief Method op_Modulus, addr 0x31ca130, size 0xac, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 op_Modulus(::Unity::Mathematics::uint3x4 lhs, uint32_t rhs);

  /// @brief Method op_Modulus, addr 0x31ca1dc, size 0xac, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 op_Modulus(uint32_t lhs, ::Unity::Mathematics::uint3x4 rhs);

  /// @brief Method op_Multiply, addr 0x31c99a8, size 0xc4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 op_Multiply(::Unity::Mathematics::uint3x4 lhs, ::Unity::Mathematics::uint3x4 rhs);

  /// @brief Method op_Multiply, addr 0x31c9a6c, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 op_Multiply(::Unity::Mathematics::uint3x4 lhs, uint32_t rhs);

  /// @brief Method op_Multiply, addr 0x31c9ae8, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 op_Multiply(uint32_t lhs, ::Unity::Mathematics::uint3x4 rhs);

  /// @brief Method op_OnesComplement, addr 0x31cb380, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 op_OnesComplement(::Unity::Mathematics::uint3x4 val);

  /// @brief Method op_RightShift, addr 0x31cae6c, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 op_RightShift(::Unity::Mathematics::uint3x4 x, int32_t n);

  /// @brief Method op_Subtraction, addr 0x31c9d20, size 0xc4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 op_Subtraction(::Unity::Mathematics::uint3x4 lhs, ::Unity::Mathematics::uint3x4 rhs);

  /// @brief Method op_Subtraction, addr 0x31c9de4, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 op_Subtraction(::Unity::Mathematics::uint3x4 lhs, uint32_t rhs);

  /// @brief Method op_Subtraction, addr 0x31c9e60, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 op_Subtraction(uint32_t lhs, ::Unity::Mathematics::uint3x4 rhs);

  /// @brief Method op_UnaryNegation, addr 0x31cad28, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 op_UnaryNegation(::Unity::Mathematics::uint3x4 val);

  /// @brief Method op_UnaryPlus, addr 0x31cadac, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x4 op_UnaryPlus(::Unity::Mathematics::uint3x4 val);

  static inline void setStaticF_zero(::Unity::Mathematics::uint3x4 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr uint3x4();

  // Ctor Parameters [CppParam { name: "c0", ty: "::Unity::Mathematics::uint3", modifiers: "", def_value: None }, CppParam { name: "c1", ty: "::Unity::Mathematics::uint3", modifiers: "", def_value:
  // None }, CppParam { name: "c2", ty: "::Unity::Mathematics::uint3", modifiers: "", def_value: None }, CppParam { name: "c3", ty: "::Unity::Mathematics::uint3", modifiers: "", def_value: None }]
  constexpr uint3x4(::Unity::Mathematics::uint3 c0, ::Unity::Mathematics::uint3 c1, ::Unity::Mathematics::uint3 c2, ::Unity::Mathematics::uint3 c3) noexcept;

  /// @brief Field c0, offset: 0x0, size: 0xc, def value: None
  ::Unity::Mathematics::uint3 c0;

  /// @brief Field c1, offset: 0xc, size: 0xc, def value: None
  ::Unity::Mathematics::uint3 c1;

  /// @brief Field c2, offset: 0x18, size: 0xc, def value: None
  ::Unity::Mathematics::uint3 c2;

  /// @brief Field c3, offset: 0x24, size: 0xc, def value: None
  ::Unity::Mathematics::uint3 c3;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::uint3x4, 0x30>, "Size mismatch!");

static_assert(offsetof(::Unity::Mathematics::uint3x4, c0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::uint3x4, c1) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::uint3x4, c2) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::uint3x4, c3) == 0x24, "Offset mismatch!");

} // namespace Unity::Mathematics
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::uint3x4, "Unity.Mathematics", "uint3x4");

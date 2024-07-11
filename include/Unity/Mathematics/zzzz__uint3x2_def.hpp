#pragma once
// IWYU pragma private; include "Unity/Mathematics/uint3x2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__uint3_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(uint3x2)
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
struct int3x2;
}
namespace Unity::Mathematics {
struct uint3;
}
// Forward declare root types
namespace Unity::Mathematics {
struct uint3x2;
}
// Write type traits
MARK_VAL_T(::Unity::Mathematics::uint3x2);
// Type: Unity.Mathematics::uint3x2
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Unity::Mathematics {
// Is value type: true
// CS Name: ::Unity.Mathematics::uint3x2
struct CORDL_TYPE uint3x2 {
public:
  // Declarations
  __declspec(property(get = get_Item))::Unity::Mathematics::uint3 Item[];

  /// @brief Field zero, offset 0xffffffff, size 0x18
  static __declspec(property(get = getStaticF_zero, put = setStaticF_zero))::Unity::Mathematics::uint3x2 zero;

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::uint3x2>"
  constexpr operator ::System::IEquatable_1<::Unity::Mathematics::uint3x2>*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Method Equals, addr 0x3288d00, size 0xc8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x3288c94, size 0x6c, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Mathematics::uint3x2 rhs);

  /// @brief Method GetHashCode, addr 0x3288dc8, size 0x88, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x3288e50, size 0x22c, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x328907c, size 0x214, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method .ctor, addr 0x328793c, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::uint3 c0, ::Unity::Mathematics::uint3 c1);

  /// @brief Method .ctor, addr 0x3287950, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(uint32_t m00, uint32_t m01, uint32_t m10, uint32_t m11, uint32_t m20, uint32_t m21);

  /// @brief Method .ctor, addr 0x32879a0, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::bool3x2 v);

  /// @brief Method .ctor, addr 0x3287aec, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::double3x2 v);

  /// @brief Method .ctor, addr 0x3287a38, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float3x2 v);

  /// @brief Method .ctor, addr 0x32879ec, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::int3x2 v);

  /// @brief Method .ctor, addr 0x328797c, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(bool v);

  /// @brief Method .ctor, addr 0x3287ac4, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(double_t v);

  /// @brief Method .ctor, addr 0x3287a10, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(float_t v);

  /// @brief Method .ctor, addr 0x32879d0, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(int32_t v);

  /// @brief Method .ctor, addr 0x3287960, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(uint32_t v);

  static inline ::Unity::Mathematics::uint3x2 getStaticF_zero();

  /// @brief Method get_Item, addr 0x3288c88, size 0xc, virtual false, abstract: false, final false
  inline ByRef<::Unity::Mathematics::uint3> get_Item(int32_t index);

  /// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::uint3x2>"
  constexpr ::System::IEquatable_1<::Unity::Mathematics::uint3x2>* i___System__IEquatable_1___Unity__Mathematics__uint3x2_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Method op_Addition, addr 0x3287e6c, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 op_Addition(::Unity::Mathematics::uint3x2 lhs, ::Unity::Mathematics::uint3x2 rhs);

  /// @brief Method op_Addition, addr 0x3287ed0, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 op_Addition(::Unity::Mathematics::uint3x2 lhs, uint32_t rhs);

  /// @brief Method op_Addition, addr 0x3287f10, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 op_Addition(uint32_t lhs, ::Unity::Mathematics::uint3x2 rhs);

  /// @brief Method op_BitwiseAnd, addr 0x3288a3c, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 op_BitwiseAnd(::Unity::Mathematics::uint3x2 lhs, ::Unity::Mathematics::uint3x2 rhs);

  /// @brief Method op_BitwiseAnd, addr 0x3288a80, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 op_BitwiseAnd(::Unity::Mathematics::uint3x2 lhs, uint32_t rhs);

  /// @brief Method op_BitwiseAnd, addr 0x3288ac0, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 op_BitwiseAnd(uint32_t lhs, ::Unity::Mathematics::uint3x2 rhs);

  /// @brief Method op_BitwiseOr, addr 0x3288b00, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 op_BitwiseOr(::Unity::Mathematics::uint3x2 lhs, ::Unity::Mathematics::uint3x2 rhs);

  /// @brief Method op_BitwiseOr, addr 0x3288b44, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 op_BitwiseOr(::Unity::Mathematics::uint3x2 lhs, uint32_t rhs);

  /// @brief Method op_BitwiseOr, addr 0x3288b84, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 op_BitwiseOr(uint32_t lhs, ::Unity::Mathematics::uint3x2 rhs);

  /// @brief Method op_Decrement, addr 0x3288278, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 op_Decrement(::Unity::Mathematics::uint3x2 val);

  /// @brief Method op_Division, addr 0x3288034, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 op_Division(::Unity::Mathematics::uint3x2 lhs, ::Unity::Mathematics::uint3x2 rhs);

  /// @brief Method op_Division, addr 0x3288080, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 op_Division(::Unity::Mathematics::uint3x2 lhs, uint32_t rhs);

  /// @brief Method op_Division, addr 0x32880c0, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 op_Division(uint32_t lhs, ::Unity::Mathematics::uint3x2 rhs);

  /// @brief Method op_Equality, addr 0x32887f0, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_Equality(::Unity::Mathematics::uint3x2 lhs, ::Unity::Mathematics::uint3x2 rhs);

  /// @brief Method op_Equality, addr 0x3288854, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_Equality(::Unity::Mathematics::uint3x2 lhs, uint32_t rhs);

  /// @brief Method op_Equality, addr 0x32888a8, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_Equality(uint32_t lhs, ::Unity::Mathematics::uint3x2 rhs);

  /// @brief Method op_ExclusiveOr, addr 0x3288bc4, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 op_ExclusiveOr(::Unity::Mathematics::uint3x2 lhs, ::Unity::Mathematics::uint3x2 rhs);

  /// @brief Method op_ExclusiveOr, addr 0x3288c08, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 op_ExclusiveOr(::Unity::Mathematics::uint3x2 lhs, uint32_t rhs);

  /// @brief Method op_ExclusiveOr, addr 0x3288c48, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 op_ExclusiveOr(uint32_t lhs, ::Unity::Mathematics::uint3x2 rhs);

  /// @brief Method op_Explicit, addr 0x3287bb8, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 op_Explicit___Unity__Mathematics__uint3x2(::Unity::Mathematics::bool3x2 v);

  /// @brief Method op_Explicit, addr 0x3287d00, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 op_Explicit___Unity__Mathematics__uint3x2(::Unity::Mathematics::double3x2 v);

  /// @brief Method op_Explicit, addr 0x3287c50, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 op_Explicit___Unity__Mathematics__uint3x2(::Unity::Mathematics::float3x2 v);

  /// @brief Method op_Explicit, addr 0x3287c04, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 op_Explicit___Unity__Mathematics__uint3x2(::Unity::Mathematics::int3x2 v);

  /// @brief Method op_Explicit, addr 0x3287b94, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 op_Explicit___Unity__Mathematics__uint3x2(bool v);

  /// @brief Method op_Explicit, addr 0x3287cd8, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 op_Explicit___Unity__Mathematics__uint3x2(double_t v);

  /// @brief Method op_Explicit, addr 0x3287c28, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 op_Explicit___Unity__Mathematics__uint3x2(float_t v);

  /// @brief Method op_Explicit, addr 0x3287be8, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 op_Explicit___Unity__Mathematics__uint3x2(int32_t v);

  /// @brief Method op_GreaterThan, addr 0x32884f0, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_GreaterThan(::Unity::Mathematics::uint3x2 lhs, ::Unity::Mathematics::uint3x2 rhs);

  /// @brief Method op_GreaterThan, addr 0x3288554, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_GreaterThan(::Unity::Mathematics::uint3x2 lhs, uint32_t rhs);

  /// @brief Method op_GreaterThan, addr 0x32885a8, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_GreaterThan(uint32_t lhs, ::Unity::Mathematics::uint3x2 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x32885fc, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_GreaterThanOrEqual(::Unity::Mathematics::uint3x2 lhs, ::Unity::Mathematics::uint3x2 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x3288660, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_GreaterThanOrEqual(::Unity::Mathematics::uint3x2 lhs, uint32_t rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x32886b4, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_GreaterThanOrEqual(uint32_t lhs, ::Unity::Mathematics::uint3x2 rhs);

  /// @brief Method op_Implicit, addr 0x3287b78, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 op_Implicit___Unity__Mathematics__uint3x2(uint32_t v);

  /// @brief Method op_Increment, addr 0x3288218, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 op_Increment(::Unity::Mathematics::uint3x2 val);

  /// @brief Method op_Inequality, addr 0x32888fc, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_Inequality(::Unity::Mathematics::uint3x2 lhs, ::Unity::Mathematics::uint3x2 rhs);

  /// @brief Method op_Inequality, addr 0x3288960, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_Inequality(::Unity::Mathematics::uint3x2 lhs, uint32_t rhs);

  /// @brief Method op_Inequality, addr 0x32889b4, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_Inequality(uint32_t lhs, ::Unity::Mathematics::uint3x2 rhs);

  /// @brief Method op_LeftShift, addr 0x3288770, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 op_LeftShift(::Unity::Mathematics::uint3x2 x, int32_t n);

  /// @brief Method op_LessThan, addr 0x32882d8, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_LessThan(::Unity::Mathematics::uint3x2 lhs, ::Unity::Mathematics::uint3x2 rhs);

  /// @brief Method op_LessThan, addr 0x328833c, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_LessThan(::Unity::Mathematics::uint3x2 lhs, uint32_t rhs);

  /// @brief Method op_LessThan, addr 0x3288390, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_LessThan(uint32_t lhs, ::Unity::Mathematics::uint3x2 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x32883e4, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_LessThanOrEqual(::Unity::Mathematics::uint3x2 lhs, ::Unity::Mathematics::uint3x2 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x3288448, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_LessThanOrEqual(::Unity::Mathematics::uint3x2 lhs, uint32_t rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x328849c, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x2 op_LessThanOrEqual(uint32_t lhs, ::Unity::Mathematics::uint3x2 rhs);

  /// @brief Method op_Modulus, addr 0x3288100, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 op_Modulus(::Unity::Mathematics::uint3x2 lhs, ::Unity::Mathematics::uint3x2 rhs);

  /// @brief Method op_Modulus, addr 0x3288168, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 op_Modulus(::Unity::Mathematics::uint3x2 lhs, uint32_t rhs);

  /// @brief Method op_Modulus, addr 0x32881c0, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 op_Modulus(uint32_t lhs, ::Unity::Mathematics::uint3x2 rhs);

  /// @brief Method op_Multiply, addr 0x3287d88, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 op_Multiply(::Unity::Mathematics::uint3x2 lhs, ::Unity::Mathematics::uint3x2 rhs);

  /// @brief Method op_Multiply, addr 0x3287dec, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 op_Multiply(::Unity::Mathematics::uint3x2 lhs, uint32_t rhs);

  /// @brief Method op_Multiply, addr 0x3287e2c, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 op_Multiply(uint32_t lhs, ::Unity::Mathematics::uint3x2 rhs);

  /// @brief Method op_OnesComplement, addr 0x3288a08, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 op_OnesComplement(::Unity::Mathematics::uint3x2 val);

  /// @brief Method op_RightShift, addr 0x32887b0, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 op_RightShift(::Unity::Mathematics::uint3x2 x, int32_t n);

  /// @brief Method op_Subtraction, addr 0x3287f50, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 op_Subtraction(::Unity::Mathematics::uint3x2 lhs, ::Unity::Mathematics::uint3x2 rhs);

  /// @brief Method op_Subtraction, addr 0x3287fb4, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 op_Subtraction(::Unity::Mathematics::uint3x2 lhs, uint32_t rhs);

  /// @brief Method op_Subtraction, addr 0x3287ff4, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 op_Subtraction(uint32_t lhs, ::Unity::Mathematics::uint3x2 rhs);

  /// @brief Method op_UnaryNegation, addr 0x3288708, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 op_UnaryNegation(::Unity::Mathematics::uint3x2 val);

  /// @brief Method op_UnaryPlus, addr 0x328874c, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3x2 op_UnaryPlus(::Unity::Mathematics::uint3x2 val);

  static inline void setStaticF_zero(::Unity::Mathematics::uint3x2 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr uint3x2();

  // Ctor Parameters [CppParam { name: "c0", ty: "::Unity::Mathematics::uint3", modifiers: "", def_value: None }, CppParam { name: "c1", ty: "::Unity::Mathematics::uint3", modifiers: "", def_value:
  // None }]
  constexpr uint3x2(::Unity::Mathematics::uint3 c0, ::Unity::Mathematics::uint3 c1) noexcept;

  /// @brief Field c0, offset: 0x0, size: 0xc, def value: None
  ::Unity::Mathematics::uint3 c0;

  /// @brief Field c1, offset: 0xc, size: 0xc, def value: None
  ::Unity::Mathematics::uint3 c1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::uint3x2, 0x18>, "Size mismatch!");

static_assert(offsetof(::Unity::Mathematics::uint3x2, c0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::uint3x2, c1) == 0xc, "Offset mismatch!");

} // namespace Unity::Mathematics
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::uint3x2, "Unity.Mathematics", "uint3x2");

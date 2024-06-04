#pragma once
// IWYU pragma private; include "Unity/Mathematics/double4x3.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__double4_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(double4x3)
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
struct double4;
}
namespace Unity::Mathematics {
struct float4x3;
}
namespace Unity::Mathematics {
struct int4x3;
}
namespace Unity::Mathematics {
struct uint4x3;
}
// Forward declare root types
namespace Unity::Mathematics {
struct double4x3;
}
// Write type traits
MARK_VAL_T(::Unity::Mathematics::double4x3);
// Type: Unity.Mathematics::double4x3
// SizeInfo { instance_size: 96, native_size: 96, calculated_instance_size: 96, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Mathematics {
// Is value type: true
// CS Name: ::Unity.Mathematics::double4x3
struct CORDL_TYPE double4x3 {
public:
  // Declarations
  __declspec(property(get = get_Item))::Unity::Mathematics::double4 Item[];

  /// @brief Field zero, offset 0xffffffff, size 0x60
  static __declspec(property(get = getStaticF_zero, put = setStaticF_zero))::Unity::Mathematics::double4x3 zero;

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::double4x3>"
  constexpr operator ::System::IEquatable_1<::Unity::Mathematics::double4x3>*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Method Equals, addr 0x32126b8, size 0x128, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x32125ec, size 0xcc, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Mathematics::double4x3 rhs);

  /// @brief Method GetHashCode, addr 0x32127e0, size 0x16c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x321294c, size 0x3ac, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x3212cf8, size 0x394, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method .ctor, addr 0x3210da8, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::double4 c0, ::Unity::Mathematics::double4 c1, ::Unity::Mathematics::double4 c2);

  /// @brief Method .ctor, addr 0x3210dcc, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(double_t m00, double_t m01, double_t m02, double_t m10, double_t m11, double_t m12, double_t m20, double_t m21, double_t m22, double_t m30, double_t m31, double_t m32);

  /// @brief Method .ctor, addr 0x3210e38, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::bool4x3 v);

  /// @brief Method .ctor, addr 0x3210fe8, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float4x3 v);

  /// @brief Method .ctor, addr 0x3210ee0, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::int4x3 v);

  /// @brief Method .ctor, addr 0x3210f64, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::uint4x3 v);

  /// @brief Method .ctor, addr 0x3210e0c, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(bool v);

  /// @brief Method .ctor, addr 0x3210df0, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(double_t v);

  /// @brief Method .ctor, addr 0x3210fc8, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(float_t v);

  /// @brief Method .ctor, addr 0x3210ec0, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(int32_t v);

  /// @brief Method .ctor, addr 0x3210f44, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(uint32_t v);

  static inline ::Unity::Mathematics::double4x3 getStaticF_zero();

  /// @brief Method get_Item, addr 0x32125e0, size 0xc, virtual false, abstract: false, final false
  inline ByRef<::Unity::Mathematics::double4> get_Item(int32_t index);

  /// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::double4x3>"
  constexpr ::System::IEquatable_1<::Unity::Mathematics::double4x3>* i___System__IEquatable_1___Unity__Mathematics__double4x3_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Method op_Addition, addr 0x32112f0, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 op_Addition(::Unity::Mathematics::double4x3 lhs, ::Unity::Mathematics::double4x3 rhs);

  /// @brief Method op_Addition, addr 0x3211330, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 op_Addition(::Unity::Mathematics::double4x3 lhs, double_t rhs);

  /// @brief Method op_Addition, addr 0x3211368, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 op_Addition(double_t lhs, ::Unity::Mathematics::double4x3 rhs);

  /// @brief Method op_Decrement, addr 0x3211934, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 op_Decrement(::Unity::Mathematics::double4x3 val);

  /// @brief Method op_Division, addr 0x3211450, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 op_Division(::Unity::Mathematics::double4x3 lhs, ::Unity::Mathematics::double4x3 rhs);

  /// @brief Method op_Division, addr 0x3211490, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 op_Division(::Unity::Mathematics::double4x3 lhs, double_t rhs);

  /// @brief Method op_Division, addr 0x32114c8, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 op_Division(double_t lhs, ::Unity::Mathematics::double4x3 rhs);

  /// @brief Method op_Equality, addr 0x32121d8, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_Equality(::Unity::Mathematics::double4x3 lhs, ::Unity::Mathematics::double4x3 rhs);

  /// @brief Method op_Equality, addr 0x3212294, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_Equality(::Unity::Mathematics::double4x3 lhs, double_t rhs);

  /// @brief Method op_Equality, addr 0x3212338, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_Equality(double_t lhs, ::Unity::Mathematics::double4x3 rhs);

  /// @brief Method op_Explicit, addr 0x3211064, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 op_Explicit___Unity__Mathematics__double4x3(::Unity::Mathematics::bool4x3 v);

  /// @brief Method op_Explicit, addr 0x3211038, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 op_Explicit___Unity__Mathematics__double4x3(bool v);

  /// @brief Method op_GreaterThan, addr 0x3211d80, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_GreaterThan(::Unity::Mathematics::double4x3 lhs, ::Unity::Mathematics::double4x3 rhs);

  /// @brief Method op_GreaterThan, addr 0x3211e3c, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_GreaterThan(::Unity::Mathematics::double4x3 lhs, double_t rhs);

  /// @brief Method op_GreaterThan, addr 0x3211ee0, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_GreaterThan(double_t lhs, ::Unity::Mathematics::double4x3 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x3211f84, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_GreaterThanOrEqual(::Unity::Mathematics::double4x3 lhs, ::Unity::Mathematics::double4x3 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x3212040, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_GreaterThanOrEqual(::Unity::Mathematics::double4x3 lhs, double_t rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x32120e4, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_GreaterThanOrEqual(double_t lhs, ::Unity::Mathematics::double4x3 rhs);

  /// @brief Method op_Implicit, addr 0x3211214, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 op_Implicit___Unity__Mathematics__double4x3(::Unity::Mathematics::float4x3 v);

  /// @brief Method op_Implicit, addr 0x321110c, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 op_Implicit___Unity__Mathematics__double4x3(::Unity::Mathematics::int4x3 v);

  /// @brief Method op_Implicit, addr 0x3211190, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 op_Implicit___Unity__Mathematics__double4x3(::Unity::Mathematics::uint4x3 v);

  /// @brief Method op_Implicit, addr 0x321101c, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 op_Implicit___Unity__Mathematics__double4x3(double_t v);

  /// @brief Method op_Implicit, addr 0x32111f4, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 op_Implicit___Unity__Mathematics__double4x3(float_t v);

  /// @brief Method op_Implicit, addr 0x32110ec, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 op_Implicit___Unity__Mathematics__double4x3(int32_t v);

  /// @brief Method op_Implicit, addr 0x3211170, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 op_Implicit___Unity__Mathematics__double4x3(uint32_t v);

  /// @brief Method op_Increment, addr 0x32118f0, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 op_Increment(::Unity::Mathematics::double4x3 val);

  /// @brief Method op_Inequality, addr 0x32123dc, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_Inequality(::Unity::Mathematics::double4x3 lhs, ::Unity::Mathematics::double4x3 rhs);

  /// @brief Method op_Inequality, addr 0x3212498, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_Inequality(::Unity::Mathematics::double4x3 lhs, double_t rhs);

  /// @brief Method op_Inequality, addr 0x321253c, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_Inequality(double_t lhs, ::Unity::Mathematics::double4x3 rhs);

  /// @brief Method op_LessThan, addr 0x3211978, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_LessThan(::Unity::Mathematics::double4x3 lhs, ::Unity::Mathematics::double4x3 rhs);

  /// @brief Method op_LessThan, addr 0x3211a34, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_LessThan(::Unity::Mathematics::double4x3 lhs, double_t rhs);

  /// @brief Method op_LessThan, addr 0x3211ad8, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_LessThan(double_t lhs, ::Unity::Mathematics::double4x3 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x3211b7c, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_LessThanOrEqual(::Unity::Mathematics::double4x3 lhs, ::Unity::Mathematics::double4x3 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x3211c38, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_LessThanOrEqual(::Unity::Mathematics::double4x3 lhs, double_t rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x3211cdc, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x3 op_LessThanOrEqual(double_t lhs, ::Unity::Mathematics::double4x3 rhs);

  /// @brief Method op_Modulus, addr 0x3211500, size 0x164, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 op_Modulus(::Unity::Mathematics::double4x3 lhs, ::Unity::Mathematics::double4x3 rhs);

  /// @brief Method op_Modulus, addr 0x3211664, size 0x14c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 op_Modulus(::Unity::Mathematics::double4x3 lhs, double_t rhs);

  /// @brief Method op_Modulus, addr 0x32117b0, size 0x140, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 op_Modulus(double_t lhs, ::Unity::Mathematics::double4x3 rhs);

  /// @brief Method op_Multiply, addr 0x3211248, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 op_Multiply(::Unity::Mathematics::double4x3 lhs, ::Unity::Mathematics::double4x3 rhs);

  /// @brief Method op_Multiply, addr 0x3211288, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 op_Multiply(::Unity::Mathematics::double4x3 lhs, double_t rhs);

  /// @brief Method op_Multiply, addr 0x32112bc, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 op_Multiply(double_t lhs, ::Unity::Mathematics::double4x3 rhs);

  /// @brief Method op_Subtraction, addr 0x32113a0, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 op_Subtraction(::Unity::Mathematics::double4x3 lhs, ::Unity::Mathematics::double4x3 rhs);

  /// @brief Method op_Subtraction, addr 0x32113e0, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 op_Subtraction(::Unity::Mathematics::double4x3 lhs, double_t rhs);

  /// @brief Method op_Subtraction, addr 0x3211418, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 op_Subtraction(double_t lhs, ::Unity::Mathematics::double4x3 rhs);

  /// @brief Method op_UnaryNegation, addr 0x3212188, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 op_UnaryNegation(::Unity::Mathematics::double4x3 val);

  /// @brief Method op_UnaryPlus, addr 0x32121bc, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x3 op_UnaryPlus(::Unity::Mathematics::double4x3 val);

  static inline void setStaticF_zero(::Unity::Mathematics::double4x3 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr double4x3();

  // Ctor Parameters [CppParam { name: "c0", ty: "::Unity::Mathematics::double4", modifiers: "", def_value: None }, CppParam { name: "c1", ty: "::Unity::Mathematics::double4", modifiers: "",
  // def_value: None }, CppParam { name: "c2", ty: "::Unity::Mathematics::double4", modifiers: "", def_value: None }]
  constexpr double4x3(::Unity::Mathematics::double4 c0, ::Unity::Mathematics::double4 c1, ::Unity::Mathematics::double4 c2) noexcept;

  /// @brief Field c0, offset: 0x0, size: 0x20, def value: None
  ::Unity::Mathematics::double4 c0;

  /// @brief Field c1, offset: 0x20, size: 0x20, def value: None
  ::Unity::Mathematics::double4 c1;

  /// @brief Field c2, offset: 0x40, size: 0x20, def value: None
  ::Unity::Mathematics::double4 c2;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x60 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::double4x3, 0x60>, "Size mismatch!");

static_assert(offsetof(::Unity::Mathematics::double4x3, c0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::double4x3, c1) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::double4x3, c2) == 0x40, "Offset mismatch!");

} // namespace Unity::Mathematics
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::double4x3, "Unity.Mathematics", "double4x3");

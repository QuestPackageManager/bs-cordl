#pragma once
// IWYU pragma private; include "Unity/Mathematics/double3x3.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__double3_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(double3x3)
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
struct bool3x3;
}
namespace Unity::Mathematics {
struct double3;
}
namespace Unity::Mathematics {
struct float3x3;
}
namespace Unity::Mathematics {
struct int3x3;
}
namespace Unity::Mathematics {
struct uint3x3;
}
// Forward declare root types
namespace Unity::Mathematics {
struct double3x3;
}
// Write type traits
MARK_VAL_T(::Unity::Mathematics::double3x3);
DEFINE_IL2CPP_CLASS(::Unity::Mathematics::double3x3, "Unity.Mathematics", "double3x3");
// Dependencies Unity.Mathematics.double3
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.double3x3
struct CORDL_TYPE double3x3 {
public:
  // Declarations
  __declspec(property(get = get_Item)) ::Unity::Mathematics::double3 Item[];

  /// @brief Field identity, offset 0xffffffff, size 0x48
  __declspec(property(get = getStaticF_identity, put = setStaticF_identity)) ::Unity::Mathematics::double3x3 identity;

  /// @brief Field zero, offset 0xffffffff, size 0x48
  __declspec(property(get = getStaticF_zero, put = setStaticF_zero)) ::Unity::Mathematics::double3x3 zero;

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::double3x3>"
  constexpr operator ::System::IEquatable_1<::Unity::Mathematics::double3x3>*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Method Equals, addr 0x6623ee8, size 0xfc, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x6623e4c, size 0x9c, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Mathematics::double3x3 rhs);

  /// @brief Method GetHashCode, addr 0x6623fe4, size 0xe0, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x66240c4, size 0x2e0, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x66243a4, size 0x2dc, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method .ctor, addr 0x6622918, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::double3 c0, ::Unity::Mathematics::double3 c1, ::Unity::Mathematics::double3 c2);

  /// @brief Method .ctor, addr 0x662293c, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(double_t m00, double_t m01, double_t m02, double_t m10, double_t m11, double_t m12, double_t m20, double_t m21, double_t m22);

  /// @brief Method .ctor, addr 0x6622998, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::bool3x3 v);

  /// @brief Method .ctor, addr 0x6622b18, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float3x3 v);

  /// @brief Method .ctor, addr 0x6622a30, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::int3x3 v);

  /// @brief Method .ctor, addr 0x6622aa4, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::uint3x3 v);

  /// @brief Method .ctor, addr 0x6622970, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(bool v);

  /// @brief Method .ctor, addr 0x6622958, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(double_t v);

  /// @brief Method .ctor, addr 0x6622afc, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(float_t v);

  /// @brief Method .ctor, addr 0x6622a14, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(int32_t v);

  /// @brief Method .ctor, addr 0x6622a88, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(uint32_t v);

  static inline ::Unity::Mathematics::double3x3 getStaticF_identity();

  static inline ::Unity::Mathematics::double3x3 getStaticF_zero();

  /// @brief Method get_Item, addr 0x6623e40, size 0xc, virtual false, abstract: false, final false
  inline ::by_ref<::Unity::Mathematics::double3> get_Item(int32_t index);

  /// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::double3x3>"
  constexpr ::System::IEquatable_1<::Unity::Mathematics::double3x3>* i___System__IEquatable_1___Unity__Mathematics__double3x3_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Method op_Addition, addr 0x6622ddc, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 op_Addition(::Unity::Mathematics::double3x3 lhs, ::Unity::Mathematics::double3x3 rhs);

  /// @brief Method op_Addition, addr 0x6622e18, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 op_Addition(::Unity::Mathematics::double3x3 lhs, double_t rhs);

  /// @brief Method op_Addition, addr 0x6622e4c, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 op_Addition(double_t lhs, ::Unity::Mathematics::double3x3 rhs);

  /// @brief Method op_Decrement, addr 0x6623318, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 op_Decrement(::Unity::Mathematics::double3x3 val);

  /// @brief Method op_Division, addr 0x6622f24, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 op_Division(::Unity::Mathematics::double3x3 lhs, ::Unity::Mathematics::double3x3 rhs);

  /// @brief Method op_Division, addr 0x6622f60, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 op_Division(::Unity::Mathematics::double3x3 lhs, double_t rhs);

  /// @brief Method op_Division, addr 0x6622f94, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 op_Division(double_t lhs, ::Unity::Mathematics::double3x3 rhs);

  /// @brief Method op_Equality, addr 0x6623ab8, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_Equality(::Unity::Mathematics::double3x3 lhs, ::Unity::Mathematics::double3x3 rhs);

  /// @brief Method op_Equality, addr 0x6623b5c, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_Equality(::Unity::Mathematics::double3x3 lhs, double_t rhs);

  /// @brief Method op_Equality, addr 0x6623bec, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_Equality(double_t lhs, ::Unity::Mathematics::double3x3 rhs);

  /// @brief Method op_Explicit, addr 0x6622ba4, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 op_Explicit___Unity__Mathematics__double3x3(::Unity::Mathematics::bool3x3 v);

  /// @brief Method op_Explicit, addr 0x6622b7c, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 op_Explicit___Unity__Mathematics__double3x3(bool v);

  /// @brief Method op_GreaterThan, addr 0x66236e4, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_GreaterThan(::Unity::Mathematics::double3x3 lhs, ::Unity::Mathematics::double3x3 rhs);

  /// @brief Method op_GreaterThan, addr 0x6623788, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_GreaterThan(::Unity::Mathematics::double3x3 lhs, double_t rhs);

  /// @brief Method op_GreaterThan, addr 0x6623818, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_GreaterThan(double_t lhs, ::Unity::Mathematics::double3x3 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x66238a8, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_GreaterThanOrEqual(::Unity::Mathematics::double3x3 lhs, ::Unity::Mathematics::double3x3 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x662394c, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_GreaterThanOrEqual(::Unity::Mathematics::double3x3 lhs, double_t rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x66239dc, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_GreaterThanOrEqual(double_t lhs, ::Unity::Mathematics::double3x3 rhs);

  /// @brief Method op_Implicit, addr 0x6622d10, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 op_Implicit___Unity__Mathematics__double3x3(::Unity::Mathematics::float3x3 v);

  /// @brief Method op_Implicit, addr 0x6622c38, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 op_Implicit___Unity__Mathematics__double3x3(::Unity::Mathematics::int3x3 v);

  /// @brief Method op_Implicit, addr 0x6622ca4, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 op_Implicit___Unity__Mathematics__double3x3(::Unity::Mathematics::uint3x3 v);

  /// @brief Method op_Implicit, addr 0x6622b64, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 op_Implicit___Unity__Mathematics__double3x3(double_t v);

  /// @brief Method op_Implicit, addr 0x6622cf4, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 op_Implicit___Unity__Mathematics__double3x3(float_t v);

  /// @brief Method op_Implicit, addr 0x6622c1c, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 op_Implicit___Unity__Mathematics__double3x3(int32_t v);

  /// @brief Method op_Implicit, addr 0x6622c88, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 op_Implicit___Unity__Mathematics__double3x3(uint32_t v);

  /// @brief Method op_Increment, addr 0x66232d4, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 op_Increment(::Unity::Mathematics::double3x3 val);

  /// @brief Method op_Inequality, addr 0x6623c7c, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_Inequality(::Unity::Mathematics::double3x3 lhs, ::Unity::Mathematics::double3x3 rhs);

  /// @brief Method op_Inequality, addr 0x6623d20, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_Inequality(::Unity::Mathematics::double3x3 lhs, double_t rhs);

  /// @brief Method op_Inequality, addr 0x6623db0, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_Inequality(double_t lhs, ::Unity::Mathematics::double3x3 rhs);

  /// @brief Method op_LessThan, addr 0x662335c, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_LessThan(::Unity::Mathematics::double3x3 lhs, ::Unity::Mathematics::double3x3 rhs);

  /// @brief Method op_LessThan, addr 0x6623400, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_LessThan(::Unity::Mathematics::double3x3 lhs, double_t rhs);

  /// @brief Method op_LessThan, addr 0x6623490, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_LessThan(double_t lhs, ::Unity::Mathematics::double3x3 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x6623520, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_LessThanOrEqual(::Unity::Mathematics::double3x3 lhs, ::Unity::Mathematics::double3x3 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x66235c4, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_LessThanOrEqual(::Unity::Mathematics::double3x3 lhs, double_t rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x6623654, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_LessThanOrEqual(double_t lhs, ::Unity::Mathematics::double3x3 rhs);

  /// @brief Method op_Modulus, addr 0x6622fc8, size 0x110, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 op_Modulus(::Unity::Mathematics::double3x3 lhs, ::Unity::Mathematics::double3x3 rhs);

  /// @brief Method op_Modulus, addr 0x66230d8, size 0x104, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 op_Modulus(::Unity::Mathematics::double3x3 lhs, double_t rhs);

  /// @brief Method op_Modulus, addr 0x66231dc, size 0xf8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 op_Modulus(double_t lhs, ::Unity::Mathematics::double3x3 rhs);

  /// @brief Method op_Multiply, addr 0x6622d40, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 op_Multiply(::Unity::Mathematics::double3x3 lhs, ::Unity::Mathematics::double3x3 rhs);

  /// @brief Method op_Multiply, addr 0x6622d7c, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 op_Multiply(::Unity::Mathematics::double3x3 lhs, double_t rhs);

  /// @brief Method op_Multiply, addr 0x6622dac, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 op_Multiply(double_t lhs, ::Unity::Mathematics::double3x3 rhs);

  /// @brief Method op_Subtraction, addr 0x6622e80, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 op_Subtraction(::Unity::Mathematics::double3x3 lhs, ::Unity::Mathematics::double3x3 rhs);

  /// @brief Method op_Subtraction, addr 0x6622ebc, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 op_Subtraction(::Unity::Mathematics::double3x3 lhs, double_t rhs);

  /// @brief Method op_Subtraction, addr 0x6622ef0, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 op_Subtraction(double_t lhs, ::Unity::Mathematics::double3x3 rhs);

  /// @brief Method op_UnaryNegation, addr 0x6623a6c, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 op_UnaryNegation(::Unity::Mathematics::double3x3 val);

  /// @brief Method op_UnaryPlus, addr 0x6623a9c, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x3 op_UnaryPlus(::Unity::Mathematics::double3x3 val);

  static inline void setStaticF_identity(::Unity::Mathematics::double3x3 value);

  static inline void setStaticF_zero(::Unity::Mathematics::double3x3 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr double3x3();

  // Ctor Parameters [CppParam { name: "c0", ty: "::Unity::Mathematics::double3", modifiers: "", def_value: None }, CppParam { name: "c1", ty: "::Unity::Mathematics::double3", modifiers: "",
  // def_value: None }, CppParam { name: "c2", ty: "::Unity::Mathematics::double3", modifiers: "", def_value: None }]
  constexpr double3x3(::Unity::Mathematics::double3 c0, ::Unity::Mathematics::double3 c1, ::Unity::Mathematics::double3 c2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13124 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  /// @brief Field c0, offset: 0x0, size: 0x18, def value: None
  ::Unity::Mathematics::double3 c0;

  /// @brief Field c1, offset: 0x18, size: 0x18, def value: None
  ::Unity::Mathematics::double3 c1;

  /// @brief Field c2, offset: 0x30, size: 0x18, def value: None
  ::Unity::Mathematics::double3 c2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::double3x3, c0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::double3x3, c1) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::double3x3, c2) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Unity::Mathematics::double3x3) == 0x48, "Size mismatch!");

} // namespace Unity::Mathematics

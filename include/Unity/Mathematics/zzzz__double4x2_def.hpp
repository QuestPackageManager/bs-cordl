#pragma once
// IWYU pragma private; include "Unity/Mathematics/double4x2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__double4_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(double4x2)
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
struct bool4x2;
}
namespace Unity::Mathematics {
struct double4;
}
namespace Unity::Mathematics {
struct float4x2;
}
namespace Unity::Mathematics {
struct int4x2;
}
namespace Unity::Mathematics {
struct uint4x2;
}
// Forward declare root types
namespace Unity::Mathematics {
struct double4x2;
}
// Write type traits
MARK_VAL_T(::Unity::Mathematics::double4x2);
// Type: Unity.Mathematics::double4x2
// SizeInfo { instance_size: 64, native_size: 64, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Mathematics {
// Is value type: true
// CS Name: ::Unity.Mathematics::double4x2
struct CORDL_TYPE double4x2 {
public:
  // Declarations
  __declspec(property(get = get_Item)) ::Unity::Mathematics::double4 Item[];

  /// @brief Field zero, offset 0xffffffff, size 0x40
  static __declspec(property(get = getStaticF_zero, put = setStaticF_zero)) ::Unity::Mathematics::double4x2 zero;

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::double4x2>"
  constexpr operator ::System::IEquatable_1<::Unity::Mathematics::double4x2>*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Method Equals, addr 0x46212e8, size 0xe8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x462125c, size 0x8c, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Mathematics::double4x2 rhs);

  /// @brief Method GetHashCode, addr 0x46213d0, size 0xd4, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x46214a4, size 0x2ac, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x4621750, size 0x294, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method .ctor, addr 0x4620184, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::double4 c0, ::Unity::Mathematics::double4 c1);

  /// @brief Method .ctor, addr 0x4620198, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(double_t m00, double_t m01, double_t m10, double_t m11, double_t m20, double_t m21, double_t m30, double_t m31);

  /// @brief Method .ctor, addr 0x46201e4, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::bool4x2 v);

  /// @brief Method .ctor, addr 0x4620310, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float4x2 v);

  /// @brief Method .ctor, addr 0x4620258, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::int4x2 v);

  /// @brief Method .ctor, addr 0x46202b4, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::uint4x2 v);

  /// @brief Method .ctor, addr 0x46201c0, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(bool v);

  /// @brief Method .ctor, addr 0x46201ac, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(double_t v);

  /// @brief Method .ctor, addr 0x46202f8, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(float_t v);

  /// @brief Method .ctor, addr 0x4620240, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(int32_t v);

  /// @brief Method .ctor, addr 0x462029c, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(uint32_t v);

  static inline ::Unity::Mathematics::double4x2 getStaticF_zero();

  /// @brief Method get_Item, addr 0x4621250, size 0xc, virtual false, abstract: false, final false
  inline ByRef<::Unity::Mathematics::double4> get_Item(int32_t index);

  /// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::double4x2>"
  constexpr ::System::IEquatable_1<::Unity::Mathematics::double4x2>* i___System__IEquatable_1___Unity__Mathematics__double4x2_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Method op_Addition, addr 0x4620530, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 op_Addition(::Unity::Mathematics::double4x2 lhs, ::Unity::Mathematics::double4x2 rhs);

  /// @brief Method op_Addition, addr 0x462055c, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 op_Addition(::Unity::Mathematics::double4x2 lhs, double_t rhs);

  /// @brief Method op_Addition, addr 0x4620584, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 op_Addition(double_t lhs, ::Unity::Mathematics::double4x2 rhs);

  /// @brief Method op_Decrement, addr 0x4620978, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 op_Decrement(::Unity::Mathematics::double4x2 val);

  /// @brief Method op_Division, addr 0x4620628, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 op_Division(::Unity::Mathematics::double4x2 lhs, ::Unity::Mathematics::double4x2 rhs);

  /// @brief Method op_Division, addr 0x4620654, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 op_Division(::Unity::Mathematics::double4x2 lhs, double_t rhs);

  /// @brief Method op_Division, addr 0x462067c, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 op_Division(double_t lhs, ::Unity::Mathematics::double4x2 rhs);

  /// @brief Method op_Equality, addr 0x4620f80, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_Equality(::Unity::Mathematics::double4x2 lhs, ::Unity::Mathematics::double4x2 rhs);

  /// @brief Method op_Equality, addr 0x4621008, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_Equality(::Unity::Mathematics::double4x2 lhs, double_t rhs);

  /// @brief Method op_Equality, addr 0x4621078, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_Equality(double_t lhs, ::Unity::Mathematics::double4x2 rhs);

  /// @brief Method op_Explicit, addr 0x462036c, size 0x5c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 op_Explicit___Unity__Mathematics__double4x2(::Unity::Mathematics::bool4x2 v);

  /// @brief Method op_Explicit, addr 0x4620348, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 op_Explicit___Unity__Mathematics__double4x2(bool v);

  /// @brief Method op_GreaterThan, addr 0x4620c78, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_GreaterThan(::Unity::Mathematics::double4x2 lhs, ::Unity::Mathematics::double4x2 rhs);

  /// @brief Method op_GreaterThan, addr 0x4620d00, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_GreaterThan(::Unity::Mathematics::double4x2 lhs, double_t rhs);

  /// @brief Method op_GreaterThan, addr 0x4620d70, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_GreaterThan(double_t lhs, ::Unity::Mathematics::double4x2 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x4620de0, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_GreaterThanOrEqual(::Unity::Mathematics::double4x2 lhs, ::Unity::Mathematics::double4x2 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x4620e68, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_GreaterThanOrEqual(::Unity::Mathematics::double4x2 lhs, double_t rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x4620ed8, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_GreaterThanOrEqual(double_t lhs, ::Unity::Mathematics::double4x2 rhs);

  /// @brief Method op_Implicit, addr 0x4620498, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 op_Implicit___Unity__Mathematics__double4x2(::Unity::Mathematics::float4x2 v);

  /// @brief Method op_Implicit, addr 0x46203e0, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 op_Implicit___Unity__Mathematics__double4x2(::Unity::Mathematics::int4x2 v);

  /// @brief Method op_Implicit, addr 0x462043c, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 op_Implicit___Unity__Mathematics__double4x2(::Unity::Mathematics::uint4x2 v);

  /// @brief Method op_Implicit, addr 0x4620334, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 op_Implicit___Unity__Mathematics__double4x2(double_t v);

  /// @brief Method op_Implicit, addr 0x4620480, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 op_Implicit___Unity__Mathematics__double4x2(float_t v);

  /// @brief Method op_Implicit, addr 0x46203c8, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 op_Implicit___Unity__Mathematics__double4x2(int32_t v);

  /// @brief Method op_Implicit, addr 0x4620424, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 op_Implicit___Unity__Mathematics__double4x2(uint32_t v);

  /// @brief Method op_Increment, addr 0x4620948, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 op_Increment(::Unity::Mathematics::double4x2 val);

  /// @brief Method op_Inequality, addr 0x46210e8, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_Inequality(::Unity::Mathematics::double4x2 lhs, ::Unity::Mathematics::double4x2 rhs);

  /// @brief Method op_Inequality, addr 0x4621170, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_Inequality(::Unity::Mathematics::double4x2 lhs, double_t rhs);

  /// @brief Method op_Inequality, addr 0x46211e0, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_Inequality(double_t lhs, ::Unity::Mathematics::double4x2 rhs);

  /// @brief Method op_LessThan, addr 0x46209a8, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_LessThan(::Unity::Mathematics::double4x2 lhs, ::Unity::Mathematics::double4x2 rhs);

  /// @brief Method op_LessThan, addr 0x4620a30, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_LessThan(::Unity::Mathematics::double4x2 lhs, double_t rhs);

  /// @brief Method op_LessThan, addr 0x4620aa0, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_LessThan(double_t lhs, ::Unity::Mathematics::double4x2 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x4620b10, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_LessThanOrEqual(::Unity::Mathematics::double4x2 lhs, ::Unity::Mathematics::double4x2 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x4620b98, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_LessThanOrEqual(::Unity::Mathematics::double4x2 lhs, double_t rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x4620c08, size 0x70, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x2 op_LessThanOrEqual(double_t lhs, ::Unity::Mathematics::double4x2 rhs);

  /// @brief Method op_Modulus, addr 0x46206a4, size 0xf4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 op_Modulus(::Unity::Mathematics::double4x2 lhs, ::Unity::Mathematics::double4x2 rhs);

  /// @brief Method op_Modulus, addr 0x4620798, size 0xdc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 op_Modulus(::Unity::Mathematics::double4x2 lhs, double_t rhs);

  /// @brief Method op_Modulus, addr 0x4620874, size 0xd4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 op_Modulus(double_t lhs, ::Unity::Mathematics::double4x2 rhs);

  /// @brief Method op_Multiply, addr 0x46204bc, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 op_Multiply(::Unity::Mathematics::double4x2 lhs, ::Unity::Mathematics::double4x2 rhs);

  /// @brief Method op_Multiply, addr 0x46204e8, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 op_Multiply(::Unity::Mathematics::double4x2 lhs, double_t rhs);

  /// @brief Method op_Multiply, addr 0x462050c, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 op_Multiply(double_t lhs, ::Unity::Mathematics::double4x2 rhs);

  /// @brief Method op_Subtraction, addr 0x46205ac, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 op_Subtraction(::Unity::Mathematics::double4x2 lhs, ::Unity::Mathematics::double4x2 rhs);

  /// @brief Method op_Subtraction, addr 0x46205d8, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 op_Subtraction(::Unity::Mathematics::double4x2 lhs, double_t rhs);

  /// @brief Method op_Subtraction, addr 0x4620600, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 op_Subtraction(double_t lhs, ::Unity::Mathematics::double4x2 rhs);

  /// @brief Method op_UnaryNegation, addr 0x4620f48, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 op_UnaryNegation(::Unity::Mathematics::double4x2 val);

  /// @brief Method op_UnaryPlus, addr 0x4620f6c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double4x2 op_UnaryPlus(::Unity::Mathematics::double4x2 val);

  static inline void setStaticF_zero(::Unity::Mathematics::double4x2 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr double4x2();

  // Ctor Parameters [CppParam { name: "c0", ty: "::Unity::Mathematics::double4", modifiers: "", def_value: None }, CppParam { name: "c1", ty: "::Unity::Mathematics::double4", modifiers: "",
  // def_value: None }]
  constexpr double4x2(::Unity::Mathematics::double4 c0, ::Unity::Mathematics::double4 c1) noexcept;

  /// @brief Field c0, offset: 0x0, size: 0x20, def value: None
  ::Unity::Mathematics::double4 c0;

  /// @brief Field c1, offset: 0x20, size: 0x20, def value: None
  ::Unity::Mathematics::double4 c1;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9941 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::double4x2, 0x40>, "Size mismatch!");

static_assert(offsetof(::Unity::Mathematics::double4x2, c0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::double4x2, c1) == 0x20, "Offset mismatch!");

} // namespace Unity::Mathematics
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::double4x2, "Unity.Mathematics", "double4x2");

#pragma once
// IWYU pragma private; include "Unity/Mathematics/float3x3.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(float3x3)
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
struct double3x3;
}
namespace Unity::Mathematics {
struct float3;
}
namespace Unity::Mathematics {
struct float4x4;
}
namespace Unity::Mathematics {
struct int3x3;
}
namespace Unity::Mathematics {
struct math_RotationOrder;
}
namespace Unity::Mathematics {
struct quaternion;
}
namespace Unity::Mathematics {
struct uint3x3;
}
// Forward declare root types
namespace Unity::Mathematics {
struct float3x3;
}
// Write type traits
MARK_VAL_T(::Unity::Mathematics::float3x3);
// Dependencies Unity.Mathematics.float3
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.float3x3
struct CORDL_TYPE float3x3 {
public:
  // Declarations
  __declspec(property(get = get_Item)) ::Unity::Mathematics::float3 Item[];

  /// @brief Field identity, offset 0xffffffff, size 0x24
  __declspec(property(get = getStaticF_identity, put = setStaticF_identity)) ::Unity::Mathematics::float3x3 identity;

  /// @brief Field zero, offset 0xffffffff, size 0x24
  __declspec(property(get = getStaticF_zero, put = setStaticF_zero)) ::Unity::Mathematics::float3x3 zero;

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::float3x3>"
  constexpr operator ::System::IEquatable_1<::Unity::Mathematics::float3x3>*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Method AxisAngle, addr 0x648b524, size 0x15c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 AxisAngle(::Unity::Mathematics::float3 axis, float_t angle);

  /// @brief Method Equals, addr 0x648acd8, size 0xfc, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x648ac3c, size 0x9c, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Mathematics::float3x3 rhs);

  /// @brief Method Euler, addr 0x648c384, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 Euler(float_t x, float_t y, float_t z, ::Unity::Mathematics::math_RotationOrder order);

  /// @brief Method Euler, addr 0x648bf38, size 0x44c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 Euler(::Unity::Mathematics::float3 xyz, ::Unity::Mathematics::math_RotationOrder order);

  /// @brief Method EulerXYZ, addr 0x648badc, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 EulerXYZ(float_t x, float_t y, float_t z);

  /// @brief Method EulerXYZ, addr 0x648b680, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 EulerXYZ(::Unity::Mathematics::float3 xyz);

  /// @brief Method EulerXZY, addr 0x648bb98, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 EulerXZY(float_t x, float_t y, float_t z);

  /// @brief Method EulerXZY, addr 0x648b73c, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 EulerXZY(::Unity::Mathematics::float3 xyz);

  /// @brief Method EulerYXZ, addr 0x648bc48, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 EulerYXZ(float_t x, float_t y, float_t z);

  /// @brief Method EulerYXZ, addr 0x648b7ec, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 EulerYXZ(::Unity::Mathematics::float3 xyz);

  /// @brief Method EulerYZX, addr 0x648bd04, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 EulerYZX(float_t x, float_t y, float_t z);

  /// @brief Method EulerYZX, addr 0x648b8a8, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 EulerYZX(::Unity::Mathematics::float3 xyz);

  /// @brief Method EulerZXY, addr 0x648bdb8, size 0xc8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 EulerZXY(float_t x, float_t y, float_t z);

  /// @brief Method EulerZXY, addr 0x648b95c, size 0xc8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 EulerZXY(::Unity::Mathematics::float3 xyz);

  /// @brief Method EulerZYX, addr 0x648be80, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 EulerZYX(float_t x, float_t y, float_t z);

  /// @brief Method EulerZYX, addr 0x648ba24, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 EulerZYX(::Unity::Mathematics::float3 xyz);

  /// @brief Method GetHashCode, addr 0x648add4, size 0x84, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method LookRotation, addr 0x648c6d8, size 0x10c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 LookRotation(::Unity::Mathematics::float3 forward, ::Unity::Mathematics::float3 up);

  /// @brief Method LookRotationSafe, addr 0x648c7e4, size 0x2e8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 LookRotationSafe(::Unity::Mathematics::float3 forward, ::Unity::Mathematics::float3 up);

  /// @brief Method RotateX, addr 0x648c3bc, size 0xe0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 RotateX(float_t angle);

  /// @brief Method RotateY, addr 0x648c49c, size 0xf0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 RotateY(float_t angle);

  /// @brief Method RotateZ, addr 0x648c58c, size 0xe0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 RotateZ(float_t angle);

  /// @brief Method Scale, addr 0x648c66c, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 Scale(float_t s);

  /// @brief Method Scale, addr 0x648c6b4, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 Scale(::Unity::Mathematics::float3 v);

  /// @brief Method Scale, addr 0x648c690, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 Scale(float_t x, float_t y, float_t z);

  /// @brief Method ToString, addr 0x648ae58, size 0x2e0, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x648b138, size 0x2dc, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method .ctor, addr 0x6489874, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float3 c0, ::Unity::Mathematics::float3 c1, ::Unity::Mathematics::float3 c2);

  /// @brief Method .ctor, addr 0x648b414, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float4x4 f4x4);

  /// @brief Method .ctor, addr 0x6489898, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(float_t m00, float_t m01, float_t m02, float_t m10, float_t m11, float_t m12, float_t m20, float_t m21, float_t m22);

  /// @brief Method .ctor, addr 0x648b448, size 0xdc, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::quaternion q);

  /// @brief Method .ctor, addr 0x64898ec, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::bool3x3 v);

  /// @brief Method .ctor, addr 0x6489a54, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::double3x3 v);

  /// @brief Method .ctor, addr 0x648997c, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::int3x3 v);

  /// @brief Method .ctor, addr 0x64899e8, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::uint3x3 v);

  /// @brief Method .ctor, addr 0x64898c4, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(bool v);

  /// @brief Method .ctor, addr 0x6489a40, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(double_t v);

  /// @brief Method .ctor, addr 0x64898b4, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(float_t v);

  /// @brief Method .ctor, addr 0x6489968, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(int32_t v);

  /// @brief Method .ctor, addr 0x64899d4, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(uint32_t v);

  static inline ::Unity::Mathematics::float3x3 getStaticF_identity();

  static inline ::Unity::Mathematics::float3x3 getStaticF_zero();

  /// @brief Method get_Item, addr 0x648ac30, size 0xc, virtual false, abstract: false, final false
  inline ::ByRef<::Unity::Mathematics::float3> get_Item(int32_t index);

  /// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::float3x3>"
  constexpr ::System::IEquatable_1<::Unity::Mathematics::float3x3>* i___System__IEquatable_1___Unity__Mathematics__float3x3_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Method op_Addition, addr 0x6489cc0, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 op_Addition(::Unity::Mathematics::float3x3 lhs, ::Unity::Mathematics::float3x3 rhs);

  /// @brief Method op_Addition, addr 0x6489ce8, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 op_Addition(::Unity::Mathematics::float3x3 lhs, float_t rhs);

  /// @brief Method op_Addition, addr 0x6489d0c, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 op_Addition(float_t lhs, ::Unity::Mathematics::float3x3 rhs);

  /// @brief Method op_Decrement, addr 0x648a134, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 op_Decrement(::Unity::Mathematics::float3x3 val);

  /// @brief Method op_Division, addr 0x6489da0, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 op_Division(::Unity::Mathematics::float3x3 lhs, ::Unity::Mathematics::float3x3 rhs);

  /// @brief Method op_Division, addr 0x6489dc8, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 op_Division(::Unity::Mathematics::float3x3 lhs, float_t rhs);

  /// @brief Method op_Division, addr 0x6489dec, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 op_Division(float_t lhs, ::Unity::Mathematics::float3x3 rhs);

  /// @brief Method op_Equality, addr 0x648a8a8, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_Equality(::Unity::Mathematics::float3x3 lhs, ::Unity::Mathematics::float3x3 rhs);

  /// @brief Method op_Equality, addr 0x648a94c, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_Equality(::Unity::Mathematics::float3x3 lhs, float_t rhs);

  /// @brief Method op_Equality, addr 0x648a9dc, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_Equality(float_t lhs, ::Unity::Mathematics::float3x3 rhs);

  /// @brief Method op_Explicit, addr 0x648cacc, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 op_Explicit___Unity__Mathematics__float3x3(::Unity::Mathematics::float4x4 f4x4);

  /// @brief Method op_Explicit, addr 0x6489ad8, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 op_Explicit___Unity__Mathematics__float3x3(::Unity::Mathematics::bool3x3 v);

  /// @brief Method op_Explicit, addr 0x6489c2c, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 op_Explicit___Unity__Mathematics__float3x3(::Unity::Mathematics::double3x3 v);

  /// @brief Method op_Explicit, addr 0x6489ab0, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 op_Explicit___Unity__Mathematics__float3x3(bool v);

  /// @brief Method op_Explicit, addr 0x6489c18, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 op_Explicit___Unity__Mathematics__float3x3(double_t v);

  /// @brief Method op_GreaterThan, addr 0x648a4ec, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_GreaterThan(::Unity::Mathematics::float3x3 lhs, ::Unity::Mathematics::float3x3 rhs);

  /// @brief Method op_GreaterThan, addr 0x648a590, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_GreaterThan(::Unity::Mathematics::float3x3 lhs, float_t rhs);

  /// @brief Method op_GreaterThan, addr 0x648a620, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_GreaterThan(float_t lhs, ::Unity::Mathematics::float3x3 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x648a6b0, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_GreaterThanOrEqual(::Unity::Mathematics::float3x3 lhs, ::Unity::Mathematics::float3x3 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x648a754, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_GreaterThanOrEqual(::Unity::Mathematics::float3x3 lhs, float_t rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x648a7e4, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_GreaterThanOrEqual(float_t lhs, ::Unity::Mathematics::float3x3 rhs);

  /// @brief Method op_Implicit, addr 0x6489b64, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 op_Implicit___Unity__Mathematics__float3x3(::Unity::Mathematics::int3x3 v);

  /// @brief Method op_Implicit, addr 0x6489bc8, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 op_Implicit___Unity__Mathematics__float3x3(::Unity::Mathematics::uint3x3 v);

  /// @brief Method op_Implicit, addr 0x6489aa0, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 op_Implicit___Unity__Mathematics__float3x3(float_t v);

  /// @brief Method op_Implicit, addr 0x6489b50, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 op_Implicit___Unity__Mathematics__float3x3(int32_t v);

  /// @brief Method op_Implicit, addr 0x6489bb4, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 op_Implicit___Unity__Mathematics__float3x3(uint32_t v);

  /// @brief Method op_Increment, addr 0x648a104, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 op_Increment(::Unity::Mathematics::float3x3 val);

  /// @brief Method op_Inequality, addr 0x648aa6c, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_Inequality(::Unity::Mathematics::float3x3 lhs, ::Unity::Mathematics::float3x3 rhs);

  /// @brief Method op_Inequality, addr 0x648ab10, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_Inequality(::Unity::Mathematics::float3x3 lhs, float_t rhs);

  /// @brief Method op_Inequality, addr 0x648aba0, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_Inequality(float_t lhs, ::Unity::Mathematics::float3x3 rhs);

  /// @brief Method op_LessThan, addr 0x648a164, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_LessThan(::Unity::Mathematics::float3x3 lhs, ::Unity::Mathematics::float3x3 rhs);

  /// @brief Method op_LessThan, addr 0x648a208, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_LessThan(::Unity::Mathematics::float3x3 lhs, float_t rhs);

  /// @brief Method op_LessThan, addr 0x648a298, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_LessThan(float_t lhs, ::Unity::Mathematics::float3x3 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x648a328, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_LessThanOrEqual(::Unity::Mathematics::float3x3 lhs, ::Unity::Mathematics::float3x3 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x648a3cc, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_LessThanOrEqual(::Unity::Mathematics::float3x3 lhs, float_t rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x648a45c, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_LessThanOrEqual(float_t lhs, ::Unity::Mathematics::float3x3 rhs);

  /// @brief Method op_Modulus, addr 0x6489e10, size 0x110, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 op_Modulus(::Unity::Mathematics::float3x3 lhs, ::Unity::Mathematics::float3x3 rhs);

  /// @brief Method op_Modulus, addr 0x6489f20, size 0xf8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 op_Modulus(::Unity::Mathematics::float3x3 lhs, float_t rhs);

  /// @brief Method op_Modulus, addr 0x648a018, size 0xec, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 op_Modulus(float_t lhs, ::Unity::Mathematics::float3x3 rhs);

  /// @brief Method op_Multiply, addr 0x6489c58, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 op_Multiply(::Unity::Mathematics::float3x3 lhs, ::Unity::Mathematics::float3x3 rhs);

  /// @brief Method op_Multiply, addr 0x6489c80, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 op_Multiply(::Unity::Mathematics::float3x3 lhs, float_t rhs);

  /// @brief Method op_Multiply, addr 0x6489ca0, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 op_Multiply(float_t lhs, ::Unity::Mathematics::float3x3 rhs);

  /// @brief Method op_Subtraction, addr 0x6489d30, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 op_Subtraction(::Unity::Mathematics::float3x3 lhs, ::Unity::Mathematics::float3x3 rhs);

  /// @brief Method op_Subtraction, addr 0x6489d58, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 op_Subtraction(::Unity::Mathematics::float3x3 lhs, float_t rhs);

  /// @brief Method op_Subtraction, addr 0x6489d7c, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 op_Subtraction(float_t lhs, ::Unity::Mathematics::float3x3 rhs);

  /// @brief Method op_UnaryNegation, addr 0x648a874, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 op_UnaryNegation(::Unity::Mathematics::float3x3 val);

  /// @brief Method op_UnaryPlus, addr 0x648a894, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 op_UnaryPlus(::Unity::Mathematics::float3x3 val);

  static inline void setStaticF_identity(::Unity::Mathematics::float3x3 value);

  static inline void setStaticF_zero(::Unity::Mathematics::float3x3 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr float3x3();

  // Ctor Parameters [CppParam { name: "c0", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None }, CppParam { name: "c1", ty: "::Unity::Mathematics::float3", modifiers: "", def_value:
  // None }, CppParam { name: "c2", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None }]
  constexpr float3x3(::Unity::Mathematics::float3 c0, ::Unity::Mathematics::float3 c1, ::Unity::Mathematics::float3 c2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13139 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x24 };

  /// @brief Field c0, offset: 0x0, size: 0xc, def value: None
  ::Unity::Mathematics::float3 c0;

  /// @brief Field c1, offset: 0xc, size: 0xc, def value: None
  ::Unity::Mathematics::float3 c1;

  /// @brief Field c2, offset: 0x18, size: 0xc, def value: None
  ::Unity::Mathematics::float3 c2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::float3x3, c0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::float3x3, c1) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::float3x3, c2) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::float3x3, 0x24>, "Size mismatch!");

} // namespace Unity::Mathematics
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::float3x3, "Unity.Mathematics", "float3x3");

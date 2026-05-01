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

  /// @brief Method AxisAngle, addr 0x64fdbf0, size 0x15c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 AxisAngle(::Unity::Mathematics::float3 axis, float_t angle);

  /// @brief Method Equals, addr 0x64fd3a4, size 0xfc, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x64fd308, size 0x9c, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Mathematics::float3x3 rhs);

  /// @brief Method Euler, addr 0x64fea50, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 Euler(float_t x, float_t y, float_t z, ::Unity::Mathematics::math_RotationOrder order);

  /// @brief Method Euler, addr 0x64fe604, size 0x44c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 Euler(::Unity::Mathematics::float3 xyz, ::Unity::Mathematics::math_RotationOrder order);

  /// @brief Method EulerXYZ, addr 0x64fe1a8, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 EulerXYZ(float_t x, float_t y, float_t z);

  /// @brief Method EulerXYZ, addr 0x64fdd4c, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 EulerXYZ(::Unity::Mathematics::float3 xyz);

  /// @brief Method EulerXZY, addr 0x64fe264, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 EulerXZY(float_t x, float_t y, float_t z);

  /// @brief Method EulerXZY, addr 0x64fde08, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 EulerXZY(::Unity::Mathematics::float3 xyz);

  /// @brief Method EulerYXZ, addr 0x64fe314, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 EulerYXZ(float_t x, float_t y, float_t z);

  /// @brief Method EulerYXZ, addr 0x64fdeb8, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 EulerYXZ(::Unity::Mathematics::float3 xyz);

  /// @brief Method EulerYZX, addr 0x64fe3d0, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 EulerYZX(float_t x, float_t y, float_t z);

  /// @brief Method EulerYZX, addr 0x64fdf74, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 EulerYZX(::Unity::Mathematics::float3 xyz);

  /// @brief Method EulerZXY, addr 0x64fe484, size 0xc8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 EulerZXY(float_t x, float_t y, float_t z);

  /// @brief Method EulerZXY, addr 0x64fe028, size 0xc8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 EulerZXY(::Unity::Mathematics::float3 xyz);

  /// @brief Method EulerZYX, addr 0x64fe54c, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 EulerZYX(float_t x, float_t y, float_t z);

  /// @brief Method EulerZYX, addr 0x64fe0f0, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 EulerZYX(::Unity::Mathematics::float3 xyz);

  /// @brief Method GetHashCode, addr 0x64fd4a0, size 0x84, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method LookRotation, addr 0x64feda4, size 0x10c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 LookRotation(::Unity::Mathematics::float3 forward, ::Unity::Mathematics::float3 up);

  /// @brief Method LookRotationSafe, addr 0x64feeb0, size 0x2e8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 LookRotationSafe(::Unity::Mathematics::float3 forward, ::Unity::Mathematics::float3 up);

  /// @brief Method RotateX, addr 0x64fea88, size 0xe0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 RotateX(float_t angle);

  /// @brief Method RotateY, addr 0x64feb68, size 0xf0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 RotateY(float_t angle);

  /// @brief Method RotateZ, addr 0x64fec58, size 0xe0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 RotateZ(float_t angle);

  /// @brief Method Scale, addr 0x64fed38, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 Scale(float_t s);

  /// @brief Method Scale, addr 0x64fed80, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 Scale(::Unity::Mathematics::float3 v);

  /// @brief Method Scale, addr 0x64fed5c, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 Scale(float_t x, float_t y, float_t z);

  /// @brief Method ToString, addr 0x64fd524, size 0x2e0, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x64fd804, size 0x2dc, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method .ctor, addr 0x64fbf40, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float3 c0, ::Unity::Mathematics::float3 c1, ::Unity::Mathematics::float3 c2);

  /// @brief Method .ctor, addr 0x64fdae0, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float4x4 f4x4);

  /// @brief Method .ctor, addr 0x64fbf64, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(float_t m00, float_t m01, float_t m02, float_t m10, float_t m11, float_t m12, float_t m20, float_t m21, float_t m22);

  /// @brief Method .ctor, addr 0x64fdb14, size 0xdc, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::quaternion q);

  /// @brief Method .ctor, addr 0x64fbfb8, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::bool3x3 v);

  /// @brief Method .ctor, addr 0x64fc120, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::double3x3 v);

  /// @brief Method .ctor, addr 0x64fc048, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::int3x3 v);

  /// @brief Method .ctor, addr 0x64fc0b4, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::uint3x3 v);

  /// @brief Method .ctor, addr 0x64fbf90, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(bool v);

  /// @brief Method .ctor, addr 0x64fc10c, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(double_t v);

  /// @brief Method .ctor, addr 0x64fbf80, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(float_t v);

  /// @brief Method .ctor, addr 0x64fc034, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(int32_t v);

  /// @brief Method .ctor, addr 0x64fc0a0, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(uint32_t v);

  static inline ::Unity::Mathematics::float3x3 getStaticF_identity();

  static inline ::Unity::Mathematics::float3x3 getStaticF_zero();

  /// @brief Method get_Item, addr 0x64fd2fc, size 0xc, virtual false, abstract: false, final false
  inline ::ByRef<::Unity::Mathematics::float3> get_Item(int32_t index);

  /// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::float3x3>"
  constexpr ::System::IEquatable_1<::Unity::Mathematics::float3x3>* i___System__IEquatable_1___Unity__Mathematics__float3x3_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Method op_Addition, addr 0x64fc38c, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 op_Addition(::Unity::Mathematics::float3x3 lhs, ::Unity::Mathematics::float3x3 rhs);

  /// @brief Method op_Addition, addr 0x64fc3b4, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 op_Addition(::Unity::Mathematics::float3x3 lhs, float_t rhs);

  /// @brief Method op_Addition, addr 0x64fc3d8, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 op_Addition(float_t lhs, ::Unity::Mathematics::float3x3 rhs);

  /// @brief Method op_Decrement, addr 0x64fc800, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 op_Decrement(::Unity::Mathematics::float3x3 val);

  /// @brief Method op_Division, addr 0x64fc46c, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 op_Division(::Unity::Mathematics::float3x3 lhs, ::Unity::Mathematics::float3x3 rhs);

  /// @brief Method op_Division, addr 0x64fc494, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 op_Division(::Unity::Mathematics::float3x3 lhs, float_t rhs);

  /// @brief Method op_Division, addr 0x64fc4b8, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 op_Division(float_t lhs, ::Unity::Mathematics::float3x3 rhs);

  /// @brief Method op_Equality, addr 0x64fcf74, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_Equality(::Unity::Mathematics::float3x3 lhs, ::Unity::Mathematics::float3x3 rhs);

  /// @brief Method op_Equality, addr 0x64fd018, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_Equality(::Unity::Mathematics::float3x3 lhs, float_t rhs);

  /// @brief Method op_Equality, addr 0x64fd0a8, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_Equality(float_t lhs, ::Unity::Mathematics::float3x3 rhs);

  /// @brief Method op_Explicit, addr 0x64ff198, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 op_Explicit___Unity__Mathematics__float3x3(::Unity::Mathematics::float4x4 f4x4);

  /// @brief Method op_Explicit, addr 0x64fc1a4, size 0x78, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 op_Explicit___Unity__Mathematics__float3x3(::Unity::Mathematics::bool3x3 v);

  /// @brief Method op_Explicit, addr 0x64fc2f8, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 op_Explicit___Unity__Mathematics__float3x3(::Unity::Mathematics::double3x3 v);

  /// @brief Method op_Explicit, addr 0x64fc17c, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 op_Explicit___Unity__Mathematics__float3x3(bool v);

  /// @brief Method op_Explicit, addr 0x64fc2e4, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 op_Explicit___Unity__Mathematics__float3x3(double_t v);

  /// @brief Method op_GreaterThan, addr 0x64fcbb8, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_GreaterThan(::Unity::Mathematics::float3x3 lhs, ::Unity::Mathematics::float3x3 rhs);

  /// @brief Method op_GreaterThan, addr 0x64fcc5c, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_GreaterThan(::Unity::Mathematics::float3x3 lhs, float_t rhs);

  /// @brief Method op_GreaterThan, addr 0x64fccec, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_GreaterThan(float_t lhs, ::Unity::Mathematics::float3x3 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x64fcd7c, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_GreaterThanOrEqual(::Unity::Mathematics::float3x3 lhs, ::Unity::Mathematics::float3x3 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x64fce20, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_GreaterThanOrEqual(::Unity::Mathematics::float3x3 lhs, float_t rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x64fceb0, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_GreaterThanOrEqual(float_t lhs, ::Unity::Mathematics::float3x3 rhs);

  /// @brief Method op_Implicit, addr 0x64fc230, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 op_Implicit___Unity__Mathematics__float3x3(::Unity::Mathematics::int3x3 v);

  /// @brief Method op_Implicit, addr 0x64fc294, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 op_Implicit___Unity__Mathematics__float3x3(::Unity::Mathematics::uint3x3 v);

  /// @brief Method op_Implicit, addr 0x64fc16c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 op_Implicit___Unity__Mathematics__float3x3(float_t v);

  /// @brief Method op_Implicit, addr 0x64fc21c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 op_Implicit___Unity__Mathematics__float3x3(int32_t v);

  /// @brief Method op_Implicit, addr 0x64fc280, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 op_Implicit___Unity__Mathematics__float3x3(uint32_t v);

  /// @brief Method op_Increment, addr 0x64fc7d0, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 op_Increment(::Unity::Mathematics::float3x3 val);

  /// @brief Method op_Inequality, addr 0x64fd138, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_Inequality(::Unity::Mathematics::float3x3 lhs, ::Unity::Mathematics::float3x3 rhs);

  /// @brief Method op_Inequality, addr 0x64fd1dc, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_Inequality(::Unity::Mathematics::float3x3 lhs, float_t rhs);

  /// @brief Method op_Inequality, addr 0x64fd26c, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_Inequality(float_t lhs, ::Unity::Mathematics::float3x3 rhs);

  /// @brief Method op_LessThan, addr 0x64fc830, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_LessThan(::Unity::Mathematics::float3x3 lhs, ::Unity::Mathematics::float3x3 rhs);

  /// @brief Method op_LessThan, addr 0x64fc8d4, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_LessThan(::Unity::Mathematics::float3x3 lhs, float_t rhs);

  /// @brief Method op_LessThan, addr 0x64fc964, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_LessThan(float_t lhs, ::Unity::Mathematics::float3x3 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x64fc9f4, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_LessThanOrEqual(::Unity::Mathematics::float3x3 lhs, ::Unity::Mathematics::float3x3 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x64fca98, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_LessThanOrEqual(::Unity::Mathematics::float3x3 lhs, float_t rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x64fcb28, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_LessThanOrEqual(float_t lhs, ::Unity::Mathematics::float3x3 rhs);

  /// @brief Method op_Modulus, addr 0x64fc4dc, size 0x110, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 op_Modulus(::Unity::Mathematics::float3x3 lhs, ::Unity::Mathematics::float3x3 rhs);

  /// @brief Method op_Modulus, addr 0x64fc5ec, size 0xf8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 op_Modulus(::Unity::Mathematics::float3x3 lhs, float_t rhs);

  /// @brief Method op_Modulus, addr 0x64fc6e4, size 0xec, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 op_Modulus(float_t lhs, ::Unity::Mathematics::float3x3 rhs);

  /// @brief Method op_Multiply, addr 0x64fc324, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 op_Multiply(::Unity::Mathematics::float3x3 lhs, ::Unity::Mathematics::float3x3 rhs);

  /// @brief Method op_Multiply, addr 0x64fc34c, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 op_Multiply(::Unity::Mathematics::float3x3 lhs, float_t rhs);

  /// @brief Method op_Multiply, addr 0x64fc36c, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 op_Multiply(float_t lhs, ::Unity::Mathematics::float3x3 rhs);

  /// @brief Method op_Subtraction, addr 0x64fc3fc, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 op_Subtraction(::Unity::Mathematics::float3x3 lhs, ::Unity::Mathematics::float3x3 rhs);

  /// @brief Method op_Subtraction, addr 0x64fc424, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 op_Subtraction(::Unity::Mathematics::float3x3 lhs, float_t rhs);

  /// @brief Method op_Subtraction, addr 0x64fc448, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 op_Subtraction(float_t lhs, ::Unity::Mathematics::float3x3 rhs);

  /// @brief Method op_UnaryNegation, addr 0x64fcf40, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 op_UnaryNegation(::Unity::Mathematics::float3x3 val);

  /// @brief Method op_UnaryPlus, addr 0x64fcf60, size 0x14, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13150 };

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

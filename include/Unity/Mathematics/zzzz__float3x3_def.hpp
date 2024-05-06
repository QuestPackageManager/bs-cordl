#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
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
struct __math__RotationOrder;
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
// Type: Unity.Mathematics::float3x3
// SizeInfo { instance_size: 36, native_size: 36, calculated_instance_size: 36, calculated_native_size: 52, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Unity::Mathematics {
// Is value type: true
// CS Name: ::Unity.Mathematics::float3x3
struct CORDL_TYPE float3x3 {
public:
  // Declarations
  __declspec(property(get = get_Item))::Unity::Mathematics::float3 Item[];

  /// @brief Field identity, offset 0xffffffff, size 0x24
  static __declspec(property(get = getStaticF_identity, put = setStaticF_identity))::Unity::Mathematics::float3x3 identity;

  /// @brief Field zero, offset 0xffffffff, size 0x24
  static __declspec(property(get = getStaticF_zero, put = setStaticF_zero))::Unity::Mathematics::float3x3 zero;

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::float3x3>"
  constexpr operator ::System::IEquatable_1<::Unity::Mathematics::float3x3>*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Method AxisAngle, addr 0x31f73a0, size 0x148, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 AxisAngle(::Unity::Mathematics::float3 axis, float_t angle);

  /// @brief Method Equals, addr 0x31f6b14, size 0xf8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x31f6a78, size 0x9c, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Mathematics::float3x3 rhs);

  /// @brief Method Euler, addr 0x31f9de0, size 0xc98, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 Euler(float_t x, float_t y, float_t z, ::Unity::Mathematics::__math__RotationOrder order);

  /// @brief Method Euler, addr 0x31f90c8, size 0xd18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 Euler(::Unity::Mathematics::float3 xyz, ::Unity::Mathematics::__math__RotationOrder order);

  /// @brief Method EulerXYZ, addr 0x31f82d8, size 0x254, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 EulerXYZ(float_t x, float_t y, float_t z);

  /// @brief Method EulerXYZ, addr 0x31f74e8, size 0x254, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 EulerXYZ(::Unity::Mathematics::float3 xyz);

  /// @brief Method EulerXZY, addr 0x31f852c, size 0x24c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 EulerXZY(float_t x, float_t y, float_t z);

  /// @brief Method EulerXZY, addr 0x31f773c, size 0x24c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 EulerXZY(::Unity::Mathematics::float3 xyz);

  /// @brief Method EulerYXZ, addr 0x31f8778, size 0x258, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 EulerYXZ(float_t x, float_t y, float_t z);

  /// @brief Method EulerYXZ, addr 0x31f7988, size 0x258, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 EulerYXZ(::Unity::Mathematics::float3 xyz);

  /// @brief Method EulerYZX, addr 0x31f89d0, size 0x24c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 EulerYZX(float_t x, float_t y, float_t z);

  /// @brief Method EulerYZX, addr 0x31f7be0, size 0x24c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 EulerYZX(::Unity::Mathematics::float3 xyz);

  /// @brief Method EulerZXY, addr 0x31f8c1c, size 0x258, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 EulerZXY(float_t x, float_t y, float_t z);

  /// @brief Method EulerZXY, addr 0x31f7e2c, size 0x258, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 EulerZXY(::Unity::Mathematics::float3 xyz);

  /// @brief Method EulerZYX, addr 0x31f8e74, size 0x254, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 EulerZYX(float_t x, float_t y, float_t z);

  /// @brief Method EulerZYX, addr 0x31f8084, size 0x254, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 EulerZYX(::Unity::Mathematics::float3 xyz);

  /// @brief Method GetHashCode, addr 0x31f6c0c, size 0xbc, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method LookRotation, addr 0x31fad4c, size 0x104, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 LookRotation(::Unity::Mathematics::float3 forward, ::Unity::Mathematics::float3 up);

  /// @brief Method LookRotationSafe, addr 0x31fae50, size 0x430, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 LookRotationSafe(::Unity::Mathematics::float3 forward, ::Unity::Mathematics::float3 up);

  /// @brief Method RotateX, addr 0x31faa78, size 0xc8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 RotateX(float_t angle);

  /// @brief Method RotateY, addr 0x31fab40, size 0xd8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 RotateY(float_t angle);

  /// @brief Method RotateZ, addr 0x31fac18, size 0xc8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 RotateZ(float_t angle);

  /// @brief Method Scale, addr 0x31face0, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 Scale(float_t s);

  /// @brief Method Scale, addr 0x31fad28, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 Scale(::Unity::Mathematics::float3 v);

  /// @brief Method Scale, addr 0x31fad04, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 Scale(float_t x, float_t y, float_t z);

  /// @brief Method ToString, addr 0x31f6cc8, size 0x2ec, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x31f6fb4, size 0x2d4, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method .ctor, addr 0x31f5650, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float3 c0, ::Unity::Mathematics::float3 c1, ::Unity::Mathematics::float3 c2);

  /// @brief Method .ctor, addr 0x31f7288, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float4x4 f4x4);

  /// @brief Method .ctor, addr 0x31f5670, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(float_t m00, float_t m01, float_t m02, float_t m10, float_t m11, float_t m12, float_t m20, float_t m21, float_t m22);

  /// @brief Method .ctor, addr 0x31f72bc, size 0xe4, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::quaternion q);

  /// @brief Method .ctor, addr 0x31f56bc, size 0x84, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::bool3x3 v);

  /// @brief Method .ctor, addr 0x31f5854, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::double3x3 v);

  /// @brief Method .ctor, addr 0x31f5754, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::int3x3 v);

  /// @brief Method .ctor, addr 0x31f57c4, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::uint3x3 v);

  /// @brief Method .ctor, addr 0x31f569c, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(bool v);

  /// @brief Method .ctor, addr 0x31f5840, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(double_t v);

  /// @brief Method .ctor, addr 0x31f568c, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(float_t v);

  /// @brief Method .ctor, addr 0x31f5740, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(int32_t v);

  /// @brief Method .ctor, addr 0x31f57ac, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(uint32_t v);

  static inline ::Unity::Mathematics::float3x3 getStaticF_identity();

  static inline ::Unity::Mathematics::float3x3 getStaticF_zero();

  /// @brief Method get_Item, addr 0x31f6a6c, size 0xc, virtual false, abstract: false, final false
  inline ByRef<::Unity::Mathematics::float3> get_Item(int32_t index);

  /// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::float3x3>"
  constexpr ::System::IEquatable_1<::Unity::Mathematics::float3x3>* i___System__IEquatable_1___Unity__Mathematics__float3x3_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Method op_Addition, addr 0x31f5aec, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 op_Addition(::Unity::Mathematics::float3x3 lhs, ::Unity::Mathematics::float3x3 rhs);

  /// @brief Method op_Addition, addr 0x31f5b14, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 op_Addition(::Unity::Mathematics::float3x3 lhs, float_t rhs);

  /// @brief Method op_Addition, addr 0x31f5b38, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 op_Addition(float_t lhs, ::Unity::Mathematics::float3x3 rhs);

  /// @brief Method op_Decrement, addr 0x31f5f70, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 op_Decrement(::Unity::Mathematics::float3x3 val);

  /// @brief Method op_Division, addr 0x31f5bcc, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 op_Division(::Unity::Mathematics::float3x3 lhs, ::Unity::Mathematics::float3x3 rhs);

  /// @brief Method op_Division, addr 0x31f5bf4, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 op_Division(::Unity::Mathematics::float3x3 lhs, float_t rhs);

  /// @brief Method op_Division, addr 0x31f5c18, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 op_Division(float_t lhs, ::Unity::Mathematics::float3x3 rhs);

  /// @brief Method op_Equality, addr 0x31f66e4, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_Equality(::Unity::Mathematics::float3x3 lhs, ::Unity::Mathematics::float3x3 rhs);

  /// @brief Method op_Equality, addr 0x31f6788, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_Equality(::Unity::Mathematics::float3x3 lhs, float_t rhs);

  /// @brief Method op_Equality, addr 0x31f6818, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_Equality(float_t lhs, ::Unity::Mathematics::float3x3 rhs);

  /// @brief Method op_Explicit, addr 0x31fb280, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 op_Explicit___Unity__Mathematics__float3x3(::Unity::Mathematics::float4x4 f4x4);

  /// @brief Method op_Explicit, addr 0x31f58d0, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 op_Explicit___Unity__Mathematics__float3x3(::Unity::Mathematics::bool3x3 v);

  /// @brief Method op_Explicit, addr 0x31f5a58, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 op_Explicit___Unity__Mathematics__float3x3(::Unity::Mathematics::double3x3 v);

  /// @brief Method op_Explicit, addr 0x31f58b0, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 op_Explicit___Unity__Mathematics__float3x3(bool v);

  /// @brief Method op_Explicit, addr 0x31f5a44, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 op_Explicit___Unity__Mathematics__float3x3(double_t v);

  /// @brief Method op_GreaterThan, addr 0x31f6328, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_GreaterThan(::Unity::Mathematics::float3x3 lhs, ::Unity::Mathematics::float3x3 rhs);

  /// @brief Method op_GreaterThan, addr 0x31f63cc, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_GreaterThan(::Unity::Mathematics::float3x3 lhs, float_t rhs);

  /// @brief Method op_GreaterThan, addr 0x31f645c, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_GreaterThan(float_t lhs, ::Unity::Mathematics::float3x3 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x31f64ec, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_GreaterThanOrEqual(::Unity::Mathematics::float3x3 lhs, ::Unity::Mathematics::float3x3 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x31f6590, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_GreaterThanOrEqual(::Unity::Mathematics::float3x3 lhs, float_t rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x31f6620, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_GreaterThanOrEqual(float_t lhs, ::Unity::Mathematics::float3x3 rhs);

  /// @brief Method op_Implicit, addr 0x31f5968, size 0x50, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 op_Implicit___Unity__Mathematics__float3x3(::Unity::Mathematics::int3x3 v);

  /// @brief Method op_Implicit, addr 0x31f59d0, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 op_Implicit___Unity__Mathematics__float3x3(::Unity::Mathematics::uint3x3 v);

  /// @brief Method op_Implicit, addr 0x31f58a0, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 op_Implicit___Unity__Mathematics__float3x3(float_t v);

  /// @brief Method op_Implicit, addr 0x31f5954, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 op_Implicit___Unity__Mathematics__float3x3(int32_t v);

  /// @brief Method op_Implicit, addr 0x31f59b8, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 op_Implicit___Unity__Mathematics__float3x3(uint32_t v);

  /// @brief Method op_Increment, addr 0x31f5f40, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 op_Increment(::Unity::Mathematics::float3x3 val);

  /// @brief Method op_Inequality, addr 0x31f68a8, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_Inequality(::Unity::Mathematics::float3x3 lhs, ::Unity::Mathematics::float3x3 rhs);

  /// @brief Method op_Inequality, addr 0x31f694c, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_Inequality(::Unity::Mathematics::float3x3 lhs, float_t rhs);

  /// @brief Method op_Inequality, addr 0x31f69dc, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_Inequality(float_t lhs, ::Unity::Mathematics::float3x3 rhs);

  /// @brief Method op_LessThan, addr 0x31f5fa0, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_LessThan(::Unity::Mathematics::float3x3 lhs, ::Unity::Mathematics::float3x3 rhs);

  /// @brief Method op_LessThan, addr 0x31f6044, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_LessThan(::Unity::Mathematics::float3x3 lhs, float_t rhs);

  /// @brief Method op_LessThan, addr 0x31f60d4, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_LessThan(float_t lhs, ::Unity::Mathematics::float3x3 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x31f6164, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_LessThanOrEqual(::Unity::Mathematics::float3x3 lhs, ::Unity::Mathematics::float3x3 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x31f6208, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_LessThanOrEqual(::Unity::Mathematics::float3x3 lhs, float_t rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x31f6298, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x3 op_LessThanOrEqual(float_t lhs, ::Unity::Mathematics::float3x3 rhs);

  /// @brief Method op_Modulus, addr 0x31f5c3c, size 0x118, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 op_Modulus(::Unity::Mathematics::float3x3 lhs, ::Unity::Mathematics::float3x3 rhs);

  /// @brief Method op_Modulus, addr 0x31f5d54, size 0xfc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 op_Modulus(::Unity::Mathematics::float3x3 lhs, float_t rhs);

  /// @brief Method op_Modulus, addr 0x31f5e50, size 0xf0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 op_Modulus(float_t lhs, ::Unity::Mathematics::float3x3 rhs);

  /// @brief Method op_Multiply, addr 0x31f5a84, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 op_Multiply(::Unity::Mathematics::float3x3 lhs, ::Unity::Mathematics::float3x3 rhs);

  /// @brief Method op_Multiply, addr 0x31f5aac, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 op_Multiply(::Unity::Mathematics::float3x3 lhs, float_t rhs);

  /// @brief Method op_Multiply, addr 0x31f5acc, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 op_Multiply(float_t lhs, ::Unity::Mathematics::float3x3 rhs);

  /// @brief Method op_Subtraction, addr 0x31f5b5c, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 op_Subtraction(::Unity::Mathematics::float3x3 lhs, ::Unity::Mathematics::float3x3 rhs);

  /// @brief Method op_Subtraction, addr 0x31f5b84, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 op_Subtraction(::Unity::Mathematics::float3x3 lhs, float_t rhs);

  /// @brief Method op_Subtraction, addr 0x31f5ba8, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 op_Subtraction(float_t lhs, ::Unity::Mathematics::float3x3 rhs);

  /// @brief Method op_UnaryNegation, addr 0x31f66b0, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 op_UnaryNegation(::Unity::Mathematics::float3x3 val);

  /// @brief Method op_UnaryPlus, addr 0x31f66d0, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3x3 op_UnaryPlus(::Unity::Mathematics::float3x3 val);

  static inline void setStaticF_identity(::Unity::Mathematics::float3x3 value);

  static inline void setStaticF_zero(::Unity::Mathematics::float3x3 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr float3x3();

  // Ctor Parameters [CppParam { name: "c0", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None }, CppParam { name: "c1", ty: "::Unity::Mathematics::float3", modifiers: "", def_value:
  // None }, CppParam { name: "c2", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None }]
  constexpr float3x3(::Unity::Mathematics::float3 c0, ::Unity::Mathematics::float3 c1, ::Unity::Mathematics::float3 c2) noexcept;

  /// @brief Field c0, offset: 0x0, size: 0xc, def value: None
  ::Unity::Mathematics::float3 c0;

  /// @brief Field c1, offset: 0xc, size: 0xc, def value: None
  ::Unity::Mathematics::float3 c1;

  /// @brief Field c2, offset: 0x18, size: 0xc, def value: None
  ::Unity::Mathematics::float3 c2;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x24 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::float3x3, 0x24>, "Size mismatch!");

static_assert(offsetof(::Unity::Mathematics::float3x3, c0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::float3x3, c1) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::float3x3, c2) == 0x18, "Offset mismatch!");

} // namespace Unity::Mathematics
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::float3x3, "Unity.Mathematics", "float3x3");

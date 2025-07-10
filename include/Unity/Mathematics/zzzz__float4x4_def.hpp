#pragma once
// IWYU pragma private; include "Unity/Mathematics/float4x4.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__IFormattable_def.hpp"
#include "Unity/Mathematics/zzzz__float4_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(float4x4)
namespace System {
class IFormatProvider;
}
namespace System {
class Object;
}
namespace Unity::Mathematics {
struct RigidTransform;
}
namespace Unity::Mathematics {
struct bool4x4;
}
namespace Unity::Mathematics {
struct double4x4;
}
namespace Unity::Mathematics {
struct float3;
}
namespace Unity::Mathematics {
struct float3x3;
}
namespace Unity::Mathematics {
struct float4;
}
namespace Unity::Mathematics {
struct int4x4;
}
namespace Unity::Mathematics {
struct math_RotationOrder;
}
namespace Unity::Mathematics {
struct quaternion;
}
namespace Unity::Mathematics {
struct uint4x4;
}
namespace UnityEngine {
struct Matrix4x4;
}
// Forward declare root types
namespace Unity::Mathematics {
struct float4x4;
}
// Write type traits
MARK_VAL_T(::Unity::Mathematics::float4x4);
// Dependencies System.IEquatable`1<T>, System.IFormattable, Unity.Mathematics.float4
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.float4x4
struct CORDL_TYPE float4x4 {
public:
  // Declarations
  __declspec(property(get = get_Item)) ::Unity::Mathematics::float4 Item[];

  /// @brief Field identity, offset 0xffffffff, size 0x40
  __declspec(property(get = getStaticF_identity, put = setStaticF_identity)) ::Unity::Mathematics::float4x4 identity;

  /// @brief Field zero, offset 0xffffffff, size 0x40
  __declspec(property(get = getStaticF_zero, put = setStaticF_zero)) ::Unity::Mathematics::float4x4 zero;

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::float4x4>"
  constexpr operator ::System::IEquatable_1<::Unity::Mathematics::float4x4>*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Method AxisAngle, addr 0x46a2194, size 0x17c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 AxisAngle(::Unity::Mathematics::float3 axis, float_t angle);

  /// @brief Method Equals, addr 0x46a132c, size 0x168, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x46a1220, size 0x10c, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Mathematics::float4x4 rhs);

  /// @brief Method Euler, addr 0x46a31e4, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 Euler(float_t x, float_t y, float_t z, ::Unity::Mathematics::math_RotationOrder order);

  /// @brief Method Euler, addr 0x46a2d20, size 0x4c4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 Euler(::Unity::Mathematics::float3 xyz, ::Unity::Mathematics::math_RotationOrder order);

  /// @brief Method EulerXYZ, addr 0x46a2818, size 0xd8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 EulerXYZ(float_t x, float_t y, float_t z);

  /// @brief Method EulerXYZ, addr 0x46a2310, size 0xd8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 EulerXYZ(::Unity::Mathematics::float3 xyz);

  /// @brief Method EulerXZY, addr 0x46a28f0, size 0xd0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 EulerXZY(float_t x, float_t y, float_t z);

  /// @brief Method EulerXZY, addr 0x46a23e8, size 0xd0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 EulerXZY(::Unity::Mathematics::float3 xyz);

  /// @brief Method EulerYXZ, addr 0x46a29c0, size 0xdc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 EulerYXZ(float_t x, float_t y, float_t z);

  /// @brief Method EulerYXZ, addr 0x46a24b8, size 0xdc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 EulerYXZ(::Unity::Mathematics::float3 xyz);

  /// @brief Method EulerYZX, addr 0x46a2a9c, size 0xd0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 EulerYZX(float_t x, float_t y, float_t z);

  /// @brief Method EulerYZX, addr 0x46a2594, size 0xd0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 EulerYZX(::Unity::Mathematics::float3 xyz);

  /// @brief Method EulerZXY, addr 0x46a2b6c, size 0xdc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 EulerZXY(float_t x, float_t y, float_t z);

  /// @brief Method EulerZXY, addr 0x46a2664, size 0xdc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 EulerZXY(::Unity::Mathematics::float3 xyz);

  /// @brief Method EulerZYX, addr 0x46a2c48, size 0xd8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 EulerZYX(float_t x, float_t y, float_t z);

  /// @brief Method EulerZYX, addr 0x46a2740, size 0xd8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 EulerZYX(::Unity::Mathematics::float3 xyz);

  /// @brief Method GetHashCode, addr 0x46a1494, size 0x104, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method LookAt, addr 0x46a3564, size 0x1dc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 LookAt(::Unity::Mathematics::float3 eye, ::Unity::Mathematics::float3 target, ::Unity::Mathematics::float3 up);

  /// @brief Method Ortho, addr 0x46a3740, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 Ortho(float_t width, float_t height, float_t near, float_t far);

  /// @brief Method OrthoOffCenter, addr 0x46a37a0, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 OrthoOffCenter(float_t left, float_t right, float_t bottom, float_t top, float_t near, float_t far);

  /// @brief Method PerspectiveFov, addr 0x46a381c, size 0xdc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 PerspectiveFov(float_t verticalFov, float_t aspect, float_t near, float_t far);

  /// @brief Method PerspectiveOffCenter, addr 0x46a38f8, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 PerspectiveOffCenter(float_t left, float_t right, float_t bottom, float_t top, float_t near, float_t far);

  /// @brief Method RotateX, addr 0x46a3218, size 0xd8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 RotateX(float_t angle);

  /// @brief Method RotateY, addr 0x46a32f0, size 0xe8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 RotateY(float_t angle);

  /// @brief Method RotateZ, addr 0x46a33d8, size 0xd4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 RotateZ(float_t angle);

  /// @brief Method Scale, addr 0x46a34ac, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 Scale(float_t s);

  /// @brief Method Scale, addr 0x46a3504, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 Scale(::Unity::Mathematics::float3 scales);

  /// @brief Method Scale, addr 0x46a34d8, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 Scale(float_t x, float_t y, float_t z);

  /// @brief Method TRS, addr 0x46a3978, size 0xe0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 TRS(::Unity::Mathematics::float3 translation, ::Unity::Mathematics::quaternion rotation, ::Unity::Mathematics::float3 scale);

  /// @brief Method ToString, addr 0x46a1598, size 0x4ac, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x46a1a44, size 0x494, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method Translate, addr 0x46a3530, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 Translate(::Unity::Mathematics::float3 vector);

  /// @brief Method .ctor, addr 0x469f4c4, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float4 c0, ::Unity::Mathematics::float4 c1, ::Unity::Mathematics::float4 c2, ::Unity::Mathematics::float4 c3);

  /// @brief Method .ctor, addr 0x469f4e0, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(float_t m00, float_t m01, float_t m02, float_t m03, float_t m10, float_t m11, float_t m12, float_t m13, float_t m20, float_t m21, float_t m22, float_t m23, float_t m30,
                    float_t m31, float_t m32, float_t m33);

  /// @brief Method .ctor, addr 0x46a2014, size 0x50, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float3x3 rotation, ::Unity::Mathematics::float3 translation);

  /// @brief Method .ctor, addr 0x46a2064, size 0x98, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::quaternion rotation, ::Unity::Mathematics::float3 translation);

  /// @brief Method .ctor, addr 0x46a20fc, size 0x98, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::RigidTransform transform);

  /// @brief Method .ctor, addr 0x469f568, size 0xac, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::bool4x4 v);

  /// @brief Method .ctor, addr 0x469f758, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::double4x4 v);

  /// @brief Method .ctor, addr 0x469f628, size 0x84, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::int4x4 v);

  /// @brief Method .ctor, addr 0x469f6c0, size 0x84, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::uint4x4 v);

  /// @brief Method .ctor, addr 0x469f534, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(bool v);

  /// @brief Method .ctor, addr 0x469f744, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(double_t v);

  /// @brief Method .ctor, addr 0x469f524, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(float_t v);

  /// @brief Method .ctor, addr 0x469f614, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(int32_t v);

  /// @brief Method .ctor, addr 0x469f6ac, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(uint32_t v);

  static inline ::Unity::Mathematics::float4x4 getStaticF_identity();

  static inline ::Unity::Mathematics::float4x4 getStaticF_zero();

  /// @brief Method get_Item, addr 0x46a1218, size 0x8, virtual false, abstract: false, final false
  inline ::ByRef<::Unity::Mathematics::float4> get_Item(int32_t index);

  /// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::float4x4>"
  constexpr ::System::IEquatable_1<::Unity::Mathematics::float4x4>* i___System__IEquatable_1___Unity__Mathematics__float4x4_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Method op_Addition, addr 0x469fa80, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 op_Addition(::Unity::Mathematics::float4x4 lhs, ::Unity::Mathematics::float4x4 rhs);

  /// @brief Method op_Addition, addr 0x469faac, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 op_Addition(::Unity::Mathematics::float4x4 lhs, float_t rhs);

  /// @brief Method op_Addition, addr 0x469fad4, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 op_Addition(float_t lhs, ::Unity::Mathematics::float4x4 rhs);

  /// @brief Method op_Decrement, addr 0x46a0118, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 op_Decrement(::Unity::Mathematics::float4x4 val);

  /// @brief Method op_Division, addr 0x469fb78, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 op_Division(::Unity::Mathematics::float4x4 lhs, ::Unity::Mathematics::float4x4 rhs);

  /// @brief Method op_Division, addr 0x469fba4, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 op_Division(::Unity::Mathematics::float4x4 lhs, float_t rhs);

  /// @brief Method op_Division, addr 0x469fbcc, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 op_Division(float_t lhs, ::Unity::Mathematics::float4x4 rhs);

  /// @brief Method op_Equality, addr 0x46a0c90, size 0x10c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x4 op_Equality(::Unity::Mathematics::float4x4 lhs, ::Unity::Mathematics::float4x4 rhs);

  /// @brief Method op_Equality, addr 0x46a0d9c, size 0xdc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x4 op_Equality(::Unity::Mathematics::float4x4 lhs, float_t rhs);

  /// @brief Method op_Equality, addr 0x46a0e78, size 0xdc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x4 op_Equality(float_t lhs, ::Unity::Mathematics::float4x4 rhs);

  /// @brief Method op_Explicit, addr 0x469f7e0, size 0xac, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 op_Explicit___Unity__Mathematics__float4x4(::Unity::Mathematics::bool4x4 v);

  /// @brief Method op_Explicit, addr 0x469f9d0, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 op_Explicit___Unity__Mathematics__float4x4(::Unity::Mathematics::double4x4 v);

  /// @brief Method op_Explicit, addr 0x469f7ac, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 op_Explicit___Unity__Mathematics__float4x4(bool v);

  /// @brief Method op_Explicit, addr 0x469f9bc, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 op_Explicit___Unity__Mathematics__float4x4(double_t v);

  /// @brief Method op_GreaterThan, addr 0x46a06d0, size 0x10c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x4 op_GreaterThan(::Unity::Mathematics::float4x4 lhs, ::Unity::Mathematics::float4x4 rhs);

  /// @brief Method op_GreaterThan, addr 0x46a07dc, size 0xdc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x4 op_GreaterThan(::Unity::Mathematics::float4x4 lhs, float_t rhs);

  /// @brief Method op_GreaterThan, addr 0x46a08b8, size 0xdc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x4 op_GreaterThan(float_t lhs, ::Unity::Mathematics::float4x4 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x46a0994, size 0x10c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x4 op_GreaterThanOrEqual(::Unity::Mathematics::float4x4 lhs, ::Unity::Mathematics::float4x4 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x46a0aa0, size 0xdc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x4 op_GreaterThanOrEqual(::Unity::Mathematics::float4x4 lhs, float_t rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x46a0b7c, size 0xdc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x4 op_GreaterThanOrEqual(float_t lhs, ::Unity::Mathematics::float4x4 rhs);

  /// @brief Method op_Implicit, addr 0x46a1fb0, size 0x64, virtual false, abstract: false, final false
  static inline ::UnityEngine::Matrix4x4 op_Implicit___UnityEngine__Matrix4x4(::Unity::Mathematics::float4x4 m);

  /// @brief Method op_Implicit, addr 0x46a1ed8, size 0xd8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 op_Implicit___Unity__Mathematics__float4x4(::UnityEngine::Matrix4x4 m);

  /// @brief Method op_Implicit, addr 0x469f8a0, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 op_Implicit___Unity__Mathematics__float4x4(::Unity::Mathematics::int4x4 v);

  /// @brief Method op_Implicit, addr 0x469f938, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 op_Implicit___Unity__Mathematics__float4x4(::Unity::Mathematics::uint4x4 v);

  /// @brief Method op_Implicit, addr 0x469f79c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 op_Implicit___Unity__Mathematics__float4x4(float_t v);

  /// @brief Method op_Implicit, addr 0x469f88c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 op_Implicit___Unity__Mathematics__float4x4(int32_t v);

  /// @brief Method op_Implicit, addr 0x469f924, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 op_Implicit___Unity__Mathematics__float4x4(uint32_t v);

  /// @brief Method op_Increment, addr 0x46a00e8, size 0x30, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 op_Increment(::Unity::Mathematics::float4x4 val);

  /// @brief Method op_Inequality, addr 0x46a0f54, size 0x10c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x4 op_Inequality(::Unity::Mathematics::float4x4 lhs, ::Unity::Mathematics::float4x4 rhs);

  /// @brief Method op_Inequality, addr 0x46a1060, size 0xdc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x4 op_Inequality(::Unity::Mathematics::float4x4 lhs, float_t rhs);

  /// @brief Method op_Inequality, addr 0x46a113c, size 0xdc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x4 op_Inequality(float_t lhs, ::Unity::Mathematics::float4x4 rhs);

  /// @brief Method op_LessThan, addr 0x46a0148, size 0x10c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x4 op_LessThan(::Unity::Mathematics::float4x4 lhs, ::Unity::Mathematics::float4x4 rhs);

  /// @brief Method op_LessThan, addr 0x46a0254, size 0xdc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x4 op_LessThan(::Unity::Mathematics::float4x4 lhs, float_t rhs);

  /// @brief Method op_LessThan, addr 0x46a0330, size 0xdc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x4 op_LessThan(float_t lhs, ::Unity::Mathematics::float4x4 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x46a040c, size 0x10c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x4 op_LessThanOrEqual(::Unity::Mathematics::float4x4 lhs, ::Unity::Mathematics::float4x4 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x46a0518, size 0xdc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x4 op_LessThanOrEqual(::Unity::Mathematics::float4x4 lhs, float_t rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x46a05f4, size 0xdc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool4x4 op_LessThanOrEqual(float_t lhs, ::Unity::Mathematics::float4x4 rhs);

  /// @brief Method op_Modulus, addr 0x469fbf4, size 0x1bc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 op_Modulus(::Unity::Mathematics::float4x4 lhs, ::Unity::Mathematics::float4x4 rhs);

  /// @brief Method op_Modulus, addr 0x469fdb0, size 0x1a4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 op_Modulus(::Unity::Mathematics::float4x4 lhs, float_t rhs);

  /// @brief Method op_Modulus, addr 0x469ff54, size 0x194, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 op_Modulus(float_t lhs, ::Unity::Mathematics::float4x4 rhs);

  /// @brief Method op_Multiply, addr 0x469fa0c, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 op_Multiply(::Unity::Mathematics::float4x4 lhs, ::Unity::Mathematics::float4x4 rhs);

  /// @brief Method op_Multiply, addr 0x469fa38, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 op_Multiply(::Unity::Mathematics::float4x4 lhs, float_t rhs);

  /// @brief Method op_Multiply, addr 0x469fa5c, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 op_Multiply(float_t lhs, ::Unity::Mathematics::float4x4 rhs);

  /// @brief Method op_Subtraction, addr 0x469fafc, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 op_Subtraction(::Unity::Mathematics::float4x4 lhs, ::Unity::Mathematics::float4x4 rhs);

  /// @brief Method op_Subtraction, addr 0x469fb28, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 op_Subtraction(::Unity::Mathematics::float4x4 lhs, float_t rhs);

  /// @brief Method op_Subtraction, addr 0x469fb50, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 op_Subtraction(float_t lhs, ::Unity::Mathematics::float4x4 rhs);

  /// @brief Method op_UnaryNegation, addr 0x46a0c58, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 op_UnaryNegation(::Unity::Mathematics::float4x4 val);

  /// @brief Method op_UnaryPlus, addr 0x46a0c7c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 op_UnaryPlus(::Unity::Mathematics::float4x4 val);

  static inline void setStaticF_identity(::Unity::Mathematics::float4x4 value);

  static inline void setStaticF_zero(::Unity::Mathematics::float4x4 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr float4x4();

  // Ctor Parameters [CppParam { name: "c0", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: None }, CppParam { name: "c1", ty: "::Unity::Mathematics::float4", modifiers: "", def_value:
  // None }, CppParam { name: "c2", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: None }, CppParam { name: "c3", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: None }]
  constexpr float4x4(::Unity::Mathematics::float4 c0, ::Unity::Mathematics::float4 c1, ::Unity::Mathematics::float4 c2, ::Unity::Mathematics::float4 c3) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9988 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field c0, offset: 0x0, size: 0x10, def value: None
  ::Unity::Mathematics::float4 c0;

  /// @brief Field c1, offset: 0x10, size: 0x10, def value: None
  ::Unity::Mathematics::float4 c1;

  /// @brief Field c2, offset: 0x20, size: 0x10, def value: None
  ::Unity::Mathematics::float4 c2;

  /// @brief Field c3, offset: 0x30, size: 0x10, def value: None
  ::Unity::Mathematics::float4 c3;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::float4x4, c0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::float4x4, c1) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::float4x4, c2) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::float4x4, c3) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::float4x4, 0x40>, "Size mismatch!");

} // namespace Unity::Mathematics
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::float4x4, "Unity.Mathematics", "float4x4");

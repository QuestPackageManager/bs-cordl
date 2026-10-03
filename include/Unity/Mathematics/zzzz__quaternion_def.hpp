#pragma once
// IWYU pragma private; include "Unity/Mathematics/quaternion.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__float4_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(quaternion)
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
struct float3;
}
namespace Unity::Mathematics {
struct float3x3;
}
namespace Unity::Mathematics {
struct float4;
}
namespace Unity::Mathematics {
struct float4x4;
}
namespace Unity::Mathematics {
struct math_RotationOrder;
}
namespace UnityEngine {
struct Quaternion;
}
// Forward declare root types
namespace Unity::Mathematics {
struct quaternion;
}
// Write type traits
MARK_VAL_T(::Unity::Mathematics::quaternion);
DEFINE_IL2CPP_CLASS(::Unity::Mathematics::quaternion, "Unity.Mathematics", "quaternion");
// [Il2CppEagerStaticClassConstruction]
// Dependencies Unity.Mathematics.float4
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.quaternion
struct CORDL_TYPE quaternion {
public:
  // Declarations
  /// @brief Field identity, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_identity, put = setStaticF_identity)) ::Unity::Mathematics::quaternion identity;

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::quaternion>"
  constexpr operator ::System::IEquatable_1<::Unity::Mathematics::quaternion>*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Method AxisAngle, addr 0x6ab01d4, size 0xe0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion AxisAngle(::Unity::Mathematics::float3 axis, float_t angle);

  /// @brief Method Equals, addr 0x6ab15b8, size 0xac, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* x);

  /// @brief Method Equals, addr 0x6ab157c, size 0x3c, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Mathematics::quaternion x);

  /// @brief Method Euler, addr 0x6ab0f48, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion Euler(float_t x, float_t y, float_t z, ::Unity::Mathematics::math_RotationOrder order);

  /// @brief Method Euler, addr 0x6ab0b24, size 0x424, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion Euler(::Unity::Mathematics::float3 xyz, ::Unity::Mathematics::math_RotationOrder order);

  /// @brief Method EulerXYZ, addr 0x6ab06ec, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion EulerXYZ(float_t x, float_t y, float_t z);

  /// @brief Method EulerXYZ, addr 0x6ab02b4, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion EulerXYZ(::Unity::Mathematics::float3 xyz);

  /// @brief Method EulerXZY, addr 0x6ab07a0, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion EulerXZY(float_t x, float_t y, float_t z);

  /// @brief Method EulerXZY, addr 0x6ab0368, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion EulerXZY(::Unity::Mathematics::float3 xyz);

  /// @brief Method EulerYXZ, addr 0x6ab0854, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion EulerYXZ(float_t x, float_t y, float_t z);

  /// @brief Method EulerYXZ, addr 0x6ab041c, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion EulerYXZ(::Unity::Mathematics::float3 xyz);

  /// @brief Method EulerYZX, addr 0x6ab0908, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion EulerYZX(float_t x, float_t y, float_t z);

  /// @brief Method EulerYZX, addr 0x6ab04d0, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion EulerYZX(::Unity::Mathematics::float3 xyz);

  /// @brief Method EulerZXY, addr 0x6ab09bc, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion EulerZXY(float_t x, float_t y, float_t z);

  /// @brief Method EulerZXY, addr 0x6ab0584, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion EulerZXY(::Unity::Mathematics::float3 xyz);

  /// @brief Method EulerZYX, addr 0x6ab0a70, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion EulerZYX(float_t x, float_t y, float_t z);

  /// @brief Method EulerZYX, addr 0x6ab0638, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion EulerZYX(::Unity::Mathematics::float3 xyz);

  /// @brief Method GetHashCode, addr 0x6ab1664, size 0x5c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method LookRotation, addr 0x6ab11a8, size 0x128, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion LookRotation(::Unity::Mathematics::float3 forward, ::Unity::Mathematics::float3 up);

  /// @brief Method LookRotationSafe, addr 0x6ab12d0, size 0x2ac, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion LookRotationSafe(::Unity::Mathematics::float3 forward, ::Unity::Mathematics::float3 up);

  /// @brief Method RotateX, addr 0x6ab0f50, size 0xc8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion RotateX(float_t angle);

  /// @brief Method RotateY, addr 0x6ab1018, size 0xc8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion RotateY(float_t angle);

  /// @brief Method RotateZ, addr 0x6ab10e0, size 0xc8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion RotateZ(float_t angle);

  /// @brief Method ToString, addr 0x6ab16c0, size 0x1a0, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x6ab1860, size 0x19c, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method .ctor, addr 0x6aafe68, size 0x1b4, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float3x3 m);

  /// @brief Method .ctor, addr 0x6ab001c, size 0x1b8, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float4x4 m);

  /// @brief Method .ctor, addr 0x6aafe58, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float4 value);

  /// @brief Method .ctor, addr 0x6aafe4c, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(float_t x, float_t y, float_t z, float_t w);

  static inline ::Unity::Mathematics::quaternion getStaticF_identity();

  /// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::quaternion>"
  constexpr ::System::IEquatable_1<::Unity::Mathematics::quaternion>* i___System__IEquatable_1___Unity__Mathematics__quaternion_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Method op_Implicit, addr 0x6aafe44, size 0x4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Quaternion op_Implicit___UnityEngine__Quaternion(::Unity::Mathematics::quaternion q);

  /// @brief Method op_Implicit, addr 0x6aafe48, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion op_Implicit___Unity__Mathematics__quaternion(::UnityEngine::Quaternion q);

  /// @brief Method op_Implicit, addr 0x6aafe64, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion op_Implicit___Unity__Mathematics__quaternion(::Unity::Mathematics::float4 v);

  static inline void setStaticF_identity(::Unity::Mathematics::quaternion value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr quaternion();

  // Ctor Parameters [CppParam { name: "value", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: None, comment: None }]
  constexpr quaternion(::Unity::Mathematics::float4 value) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13437 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field value, offset: 0x0, size: 0x10, def value: None
  ::Unity::Mathematics::float4 value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::quaternion, value) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Unity::Mathematics::quaternion) == 0x10, "Size mismatch!");

} // namespace Unity::Mathematics

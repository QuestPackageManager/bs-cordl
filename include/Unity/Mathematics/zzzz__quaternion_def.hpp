#pragma once
// IWYU pragma private; include "Unity/Mathematics/quaternion.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__float4_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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
struct __math__RotationOrder;
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
namespace UnityEngine {
struct Quaternion;
}
// Forward declare root types
namespace Unity::Mathematics {
struct quaternion;
}
// Write type traits
MARK_VAL_T(::Unity::Mathematics::quaternion);
// Type: Unity.Mathematics::quaternion
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 4, packing: None, specified_packing: None }
namespace Unity::Mathematics {
// Is value type: true
// CS Name: ::Unity.Mathematics::quaternion
struct CORDL_TYPE quaternion {
public:
  // Declarations
  /// @brief Field identity, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_identity, put = setStaticF_identity)) ::Unity::Mathematics::quaternion identity;

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::quaternion>"
  constexpr operator ::System::IEquatable_1<::Unity::Mathematics::quaternion>*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Method AxisAngle, addr 0x464f414, size 0xd8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion AxisAngle(::Unity::Mathematics::float3 axis, float_t angle);

  /// @brief Method Equals, addr 0x465084c, size 0xa8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* x);

  /// @brief Method Equals, addr 0x4650810, size 0x3c, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Mathematics::quaternion x);

  /// @brief Method Euler, addr 0x4650160, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion Euler(float_t x, float_t y, float_t z, ::Unity::Mathematics::__math__RotationOrder order);

  /// @brief Method Euler, addr 0x464fd5c, size 0x404, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion Euler(::Unity::Mathematics::float3 xyz, ::Unity::Mathematics::__math__RotationOrder order);

  /// @brief Method EulerXYZ, addr 0x464f924, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion EulerXYZ(float_t x, float_t y, float_t z);

  /// @brief Method EulerXYZ, addr 0x464f4ec, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion EulerXYZ(::Unity::Mathematics::float3 xyz);

  /// @brief Method EulerXZY, addr 0x464f9d8, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion EulerXZY(float_t x, float_t y, float_t z);

  /// @brief Method EulerXZY, addr 0x464f5a0, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion EulerXZY(::Unity::Mathematics::float3 xyz);

  /// @brief Method EulerYXZ, addr 0x464fa8c, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion EulerYXZ(float_t x, float_t y, float_t z);

  /// @brief Method EulerYXZ, addr 0x464f654, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion EulerYXZ(::Unity::Mathematics::float3 xyz);

  /// @brief Method EulerYZX, addr 0x464fb40, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion EulerYZX(float_t x, float_t y, float_t z);

  /// @brief Method EulerYZX, addr 0x464f708, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion EulerYZX(::Unity::Mathematics::float3 xyz);

  /// @brief Method EulerZXY, addr 0x464fbf4, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion EulerZXY(float_t x, float_t y, float_t z);

  /// @brief Method EulerZXY, addr 0x464f7bc, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion EulerZXY(::Unity::Mathematics::float3 xyz);

  /// @brief Method EulerZYX, addr 0x464fca8, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion EulerZYX(float_t x, float_t y, float_t z);

  /// @brief Method EulerZYX, addr 0x464f870, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion EulerZYX(::Unity::Mathematics::float3 xyz);

  /// @brief Method GetHashCode, addr 0x46508f4, size 0x58, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method LookRotation, addr 0x46503b4, size 0x120, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion LookRotation(::Unity::Mathematics::float3 forward, ::Unity::Mathematics::float3 up);

  /// @brief Method LookRotationSafe, addr 0x46504d4, size 0x33c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion LookRotationSafe(::Unity::Mathematics::float3 forward, ::Unity::Mathematics::float3 up);

  /// @brief Method RotateX, addr 0x4650168, size 0xc4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion RotateX(float_t angle);

  /// @brief Method RotateY, addr 0x465022c, size 0xc4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion RotateY(float_t angle);

  /// @brief Method RotateZ, addr 0x46502f0, size 0xc4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion RotateZ(float_t angle);

  /// @brief Method ToString, addr 0x465094c, size 0x1ac, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x4650af8, size 0x194, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method .ctor, addr 0x464f088, size 0x1c4, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float3x3 m);

  /// @brief Method .ctor, addr 0x464f24c, size 0x1c8, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float4x4 m);

  /// @brief Method .ctor, addr 0x464f078, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float4 value);

  /// @brief Method .ctor, addr 0x464f06c, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(float_t x, float_t y, float_t z, float_t w);

  static inline ::Unity::Mathematics::quaternion getStaticF_identity();

  /// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::quaternion>"
  constexpr ::System::IEquatable_1<::Unity::Mathematics::quaternion>* i___System__IEquatable_1___Unity__Mathematics__quaternion_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Method op_Implicit, addr 0x464f064, size 0x4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Quaternion op_Implicit___UnityEngine__Quaternion(::Unity::Mathematics::quaternion q);

  /// @brief Method op_Implicit, addr 0x464f068, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion op_Implicit___Unity__Mathematics__quaternion(::UnityEngine::Quaternion q);

  /// @brief Method op_Implicit, addr 0x464f084, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::quaternion op_Implicit___Unity__Mathematics__quaternion(::Unity::Mathematics::float4 v);

  static inline void setStaticF_identity(::Unity::Mathematics::quaternion value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr quaternion();

  // Ctor Parameters [CppParam { name: "value", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: None }]
  constexpr quaternion(::Unity::Mathematics::float4 value) noexcept;

  /// @brief Field value, offset: 0x0, size: 0x10, def value: None
  ::Unity::Mathematics::float4 value;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9976 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::quaternion, 0x10>, "Size mismatch!");

static_assert(offsetof(::Unity::Mathematics::quaternion, value) == 0x0, "Offset mismatch!");

} // namespace Unity::Mathematics
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::quaternion, "Unity.Mathematics", "quaternion");

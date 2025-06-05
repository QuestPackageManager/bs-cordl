#pragma once
// IWYU pragma private; include "Unity/Mathematics/RigidTransform.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "Unity/Mathematics/zzzz__quaternion_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RigidTransform)
namespace System {
class IFormatProvider;
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
struct float4x4;
}
namespace Unity::Mathematics {
struct math_RotationOrder;
}
namespace Unity::Mathematics {
struct quaternion;
}
// Forward declare root types
namespace Unity::Mathematics {
struct RigidTransform;
}
// Write type traits
MARK_VAL_T(::Unity::Mathematics::RigidTransform);
// Dependencies Unity.Mathematics.float3, Unity.Mathematics.quaternion
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.RigidTransform
struct CORDL_TYPE RigidTransform {
public:
  // Declarations
  /// @brief Field identity, offset 0xffffffff, size 0x1c
  __declspec(property(get = getStaticF_identity, put = setStaticF_identity)) ::Unity::Mathematics::RigidTransform identity;

  /// @brief Method AxisAngle, addr 0x46d4cb8, size 0x124, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::RigidTransform AxisAngle(::Unity::Mathematics::float3 axis, float_t angle);

  /// @brief Method Equals, addr 0x46d6450, size 0xd8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* x);

  /// @brief Method Equals, addr 0x46d63d4, size 0x7c, virtual false, abstract: false, final false
  inline bool Equals(::Unity::Mathematics::RigidTransform x);

  /// @brief Method Euler, addr 0x46d6014, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::RigidTransform Euler(float_t x, float_t y, float_t z, ::Unity::Mathematics::math_RotationOrder order);

  /// @brief Method Euler, addr 0x46d5acc, size 0x548, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::RigidTransform Euler(::Unity::Mathematics::float3 xyz, ::Unity::Mathematics::math_RotationOrder order);

  /// @brief Method EulerXYZ, addr 0x46d5454, size 0x114, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::RigidTransform EulerXYZ(float_t x, float_t y, float_t z);

  /// @brief Method EulerXYZ, addr 0x46d4ddc, size 0x114, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::RigidTransform EulerXYZ(::Unity::Mathematics::float3 xyz);

  /// @brief Method EulerXZY, addr 0x46d5568, size 0x114, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::RigidTransform EulerXZY(float_t x, float_t y, float_t z);

  /// @brief Method EulerXZY, addr 0x46d4ef0, size 0x114, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::RigidTransform EulerXZY(::Unity::Mathematics::float3 xyz);

  /// @brief Method EulerYXZ, addr 0x46d567c, size 0x114, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::RigidTransform EulerYXZ(float_t x, float_t y, float_t z);

  /// @brief Method EulerYXZ, addr 0x46d5004, size 0x114, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::RigidTransform EulerYXZ(::Unity::Mathematics::float3 xyz);

  /// @brief Method EulerYZX, addr 0x46d5790, size 0x114, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::RigidTransform EulerYZX(float_t x, float_t y, float_t z);

  /// @brief Method EulerYZX, addr 0x46d5118, size 0x114, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::RigidTransform EulerYZX(::Unity::Mathematics::float3 xyz);

  /// @brief Method EulerZXY, addr 0x46d58a4, size 0x114, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::RigidTransform EulerZXY(float_t x, float_t y, float_t z);

  /// @brief Method EulerZXY, addr 0x46d522c, size 0x114, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::RigidTransform EulerZXY(::Unity::Mathematics::float3 xyz);

  /// @brief Method EulerZYX, addr 0x46d59b8, size 0x114, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::RigidTransform EulerZYX(float_t x, float_t y, float_t z);

  /// @brief Method EulerZYX, addr 0x46d5340, size 0x114, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::RigidTransform EulerZYX(::Unity::Mathematics::float3 xyz);

  /// @brief Method GetHashCode, addr 0x46d6528, size 0x98, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method RotateX, addr 0x46d6048, size 0x108, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::RigidTransform RotateX(float_t angle);

  /// @brief Method RotateY, addr 0x46d6150, size 0x10c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::RigidTransform RotateY(float_t angle);

  /// @brief Method RotateZ, addr 0x46d625c, size 0x104, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::RigidTransform RotateZ(float_t angle);

  /// @brief Method ToString, addr 0x46d65c0, size 0x26c, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x46d682c, size 0x254, virtual false, abstract: false, final false
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method Translate, addr 0x46d6360, size 0x74, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::RigidTransform Translate(::Unity::Mathematics::float3 vector);

  /// @brief Method .ctor, addr 0x46d4bf0, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float3x3 rotation, ::Unity::Mathematics::float3 translation);

  /// @brief Method .ctor, addr 0x46d4bdc, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::quaternion rotation, ::Unity::Mathematics::float3 translation);

  /// @brief Method .ctor, addr 0x46d4c58, size 0x60, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float4x4 transform);

  static inline ::Unity::Mathematics::RigidTransform getStaticF_identity();

  static inline void setStaticF_identity(::Unity::Mathematics::RigidTransform value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr RigidTransform();

  // Ctor Parameters [CppParam { name: "rot", ty: "::Unity::Mathematics::quaternion", modifiers: "", def_value: None }, CppParam { name: "pos", ty: "::Unity::Mathematics::float3", modifiers: "",
  // def_value: None }]
  constexpr RigidTransform(::Unity::Mathematics::quaternion rot, ::Unity::Mathematics::float3 pos) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10016 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1c };

  /// @brief Field rot, offset: 0x0, size: 0x10, def value: None
  ::Unity::Mathematics::quaternion rot;

  /// @brief Field pos, offset: 0x10, size: 0xc, def value: None
  ::Unity::Mathematics::float3 pos;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::RigidTransform, rot) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::RigidTransform, pos) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::RigidTransform, 0x1c>, "Size mismatch!");

} // namespace Unity::Mathematics
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::RigidTransform, "Unity.Mathematics", "RigidTransform");

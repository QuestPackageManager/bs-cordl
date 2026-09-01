#pragma once
// IWYU pragma private; include "GlobalNamespace\MirrorReflectionMath.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(MirrorReflectionMath)
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace GlobalNamespace {
class MirrorReflectionMath;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MirrorReflectionMath*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MirrorReflectionMath*, "", "MirrorReflectionMath");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MirrorReflectionMath
class CORDL_TYPE MirrorReflectionMath : public ::System::Object {
public:
  // Declarations
  /// @brief Method CalculateObliqueMatrix, addr 0x5f472c4, size 0xf0, virtual false, abstract: false, final false
  static inline ::UnityEngine::Matrix4x4 CalculateObliqueMatrix(::UnityEngine::Matrix4x4 projection, ::UnityEngine::Vector4 clipPlane);

  /// @brief Method CalculateReflectionMatrix, addr 0x5f471e0, size 0xe4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Matrix4x4 CalculateReflectionMatrix(::UnityEngine::Vector4 plane);

  /// @brief Method CameraSpacePlane, addr 0x5f470a4, size 0x13c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector4 CameraSpacePlane(::UnityEngine::Matrix4x4 worldToCameraMatrix, ::UnityEngine::Vector3 pos, ::UnityEngine::Vector3 normal);

  /// @brief Method Plane, addr 0x5f47078, size 0x2c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector4 Plane(::UnityEngine::Vector3 pos, ::UnityEngine::Vector3 normal);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MirrorReflectionMath();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MirrorReflectionMath", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MirrorReflectionMath(MirrorReflectionMath&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MirrorReflectionMath", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MirrorReflectionMath(MirrorReflectionMath const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20650 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::MirrorReflectionMath) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace

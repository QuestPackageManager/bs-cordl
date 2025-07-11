#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRCompositionUtil.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(OVRCompositionUtil)
namespace GlobalNamespace {
struct OVRBoundary_BoundaryType;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRCompositionUtil;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRCompositionUtil);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRCompositionUtil
class CORDL_TYPE OVRCompositionUtil : public ::System::Object {
public:
  // Declarations
  /// @brief Method BuildBoundaryMesh, addr 0x3f983c8, size 0x484, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Mesh> BuildBoundaryMesh(::GlobalNamespace::OVRBoundary_BoundaryType boundaryType, float_t topY, float_t bottomY);

  /// @brief Method GetMaximumBoundaryDistance, addr 0x3f97dac, size 0x1c0, virtual false, abstract: false, final false
  static inline float_t GetMaximumBoundaryDistance(::UnityEngine::Camera* camera, ::GlobalNamespace::OVRBoundary_BoundaryType boundaryType);

  /// @brief Method GetWorldPosition, addr 0x3f97d18, size 0x94, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 GetWorldPosition(::UnityEngine::Camera* camera, ::UnityEngine::Vector3 trackingSpacePosition);

  /// @brief Method GetWorldPosition, addr 0x3f97cdc, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 GetWorldPosition(::UnityEngine::Vector3 trackingSpacePosition);

  static inline ::GlobalNamespace::OVRCompositionUtil* New_ctor();

  /// @brief Method SafeDestroy, addr 0x3f97c68, size 0x74, virtual false, abstract: false, final false
  static inline void SafeDestroy(::ByRef<::UnityEngine::GameObject*> obj);

  /// @brief Method SafeDestroy, addr 0x3f97bcc, size 0x9c, virtual false, abstract: false, final false
  static inline void SafeDestroy(::UnityEngine::GameObject* obj);

  /// @brief Method .ctor, addr 0x3f9884c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRCompositionUtil();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRCompositionUtil", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRCompositionUtil(OVRCompositionUtil&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRCompositionUtil", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRCompositionUtil(OVRCompositionUtil const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7821 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRCompositionUtil, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRCompositionUtil);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRCompositionUtil*, "", "OVRCompositionUtil");

#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(OVRCompositionUtil)
namespace GlobalNamespace {
struct __OVRBoundary__BoundaryType;
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
// Type: ::OVRCompositionUtil
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7601))
// CS Name: ::OVRCompositionUtil*
class CORDL_TYPE OVRCompositionUtil : public ::System::Object {
public:
  // Declarations
  /// @brief Method SafeDestroy, addr 0x273f6a8, size 0x78, virtual false, abstract: false, final false
  static inline void SafeDestroy(::UnityEngine::GameObject* obj);

  /// @brief Method SafeDestroy, addr 0x273f720, size 0x74, virtual false, abstract: false, final false
  static inline void SafeDestroy(ByRef<::UnityEngine::GameObject*> obj);

  /// @brief Method GetWorldPosition, addr 0x273f794, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 GetWorldPosition(::UnityEngine::Vector3 trackingSpacePosition);

  /// @brief Method GetWorldPosition, addr 0x273f7d0, size 0x94, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 GetWorldPosition(::UnityEngine::Camera* camera, ::UnityEngine::Vector3 trackingSpacePosition);

  /// @brief Method GetMaximumBoundaryDistance, addr 0x273f864, size 0x1c0, virtual false, abstract: false, final false
  static inline float_t GetMaximumBoundaryDistance(::UnityEngine::Camera* camera, ::GlobalNamespace::__OVRBoundary__BoundaryType boundaryType);

  /// @brief Method BuildBoundaryMesh, addr 0x273fef8, size 0x480, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Mesh> BuildBoundaryMesh(::GlobalNamespace::__OVRBoundary__BoundaryType boundaryType, float_t topY, float_t bottomY);

  static inline ::GlobalNamespace::OVRCompositionUtil* New_ctor();

  /// @brief Method .ctor, addr 0x2740378, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "OVRCompositionUtil", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRCompositionUtil(OVRCompositionUtil&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRCompositionUtil", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRCompositionUtil(OVRCompositionUtil const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRCompositionUtil();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRCompositionUtil, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRCompositionUtil);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRCompositionUtil*, "", "OVRCompositionUtil");

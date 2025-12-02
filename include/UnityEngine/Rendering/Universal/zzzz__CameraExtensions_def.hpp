#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/CameraExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CameraExtensions)
namespace UnityEngine::Rendering::Universal {
class UniversalAdditionalCameraData;
}
namespace UnityEngine::Rendering::Universal {
struct VolumeFrameworkUpdateMode;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct LayerMask;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class CameraExtensions;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::CameraExtensions);
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.CameraExtensions
class CORDL_TYPE CameraExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method DestroyVolumeStack, addr 0x66a8324, size 0x14, virtual false, abstract: false, final false
  static inline void DestroyVolumeStack(::UnityEngine::Camera* camera);

  /// @brief Method DestroyVolumeStack, addr 0x66a8338, size 0x8c, virtual false, abstract: false, final false
  static inline void DestroyVolumeStack(::UnityEngine::Camera* camera, ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData* cameraData);

  /// @brief Method GetUniversalAdditionalCameraData, addr 0x66a7cd4, size 0xb0, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData> GetUniversalAdditionalCameraData(::UnityEngine::Camera* camera);

  /// @brief Method GetVolumeFrameworkUpdateMode, addr 0x66a7d84, size 0x1c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::Universal::VolumeFrameworkUpdateMode GetVolumeFrameworkUpdateMode(::UnityEngine::Camera* camera);

  /// @brief Method GetVolumeLayerMaskAndTrigger, addr 0x66a8148, size 0x1dc, virtual false, abstract: false, final false
  static inline void GetVolumeLayerMaskAndTrigger(::UnityEngine::Camera* camera, ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData* cameraData,
                                                  ::ByRef<::UnityEngine::LayerMask> layerMask, ::ByRef<::UnityEngine::Transform*> trigger);

  /// @brief Method SetVolumeFrameworkUpdateMode, addr 0x66a7da0, size 0x68, virtual false, abstract: false, final false
  static inline void SetVolumeFrameworkUpdateMode(::UnityEngine::Camera* camera, ::UnityEngine::Rendering::Universal::VolumeFrameworkUpdateMode mode);

  /// @brief Method UpdateVolumeStack, addr 0x66a7fe4, size 0x1c, virtual false, abstract: false, final false
  static inline void UpdateVolumeStack(::UnityEngine::Camera* camera);

  /// @brief Method UpdateVolumeStack, addr 0x66a7e90, size 0x154, virtual false, abstract: false, final false
  static inline void UpdateVolumeStack(::UnityEngine::Camera* camera, ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData* cameraData);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CameraExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CameraExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CameraExtensions(CameraExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CameraExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CameraExtensions(CameraExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12959 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::CameraExtensions, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::CameraExtensions);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::CameraExtensions*, "UnityEngine.Rendering.Universal", "CameraExtensions");

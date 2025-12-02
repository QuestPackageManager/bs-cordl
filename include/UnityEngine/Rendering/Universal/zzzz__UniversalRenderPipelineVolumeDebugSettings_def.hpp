#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/UniversalRenderPipelineVolumeDebugSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__VolumeDebugSettings_1_def.hpp"
CORDL_MODULE_EXPORT(UniversalRenderPipelineVolumeDebugSettings)
namespace System {
class Type;
}
namespace UnityEngine::Rendering::Universal {
class UniversalAdditionalCameraData;
}
namespace UnityEngine::Rendering {
class VolumeStack;
}
namespace UnityEngine {
struct LayerMask;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class UniversalRenderPipelineVolumeDebugSettings;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::UniversalRenderPipelineVolumeDebugSettings);
// Dependencies UnityEngine.Rendering.VolumeDebugSettings`1<T>
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.UniversalRenderPipelineVolumeDebugSettings
class CORDL_TYPE UniversalRenderPipelineVolumeDebugSettings : public ::UnityEngine::Rendering::VolumeDebugSettings_1<::UnityW<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData>> {
public:
  // Declarations
  __declspec(property(get = get_selectedCameraLayerMask)) ::UnityEngine::LayerMask selectedCameraLayerMask;

  __declspec(property(get = get_selectedCameraPosition)) ::UnityEngine::Vector3 selectedCameraPosition;

  __declspec(property(get = get_selectedCameraVolumeStack)) ::UnityEngine::Rendering::VolumeStack* selectedCameraVolumeStack;

  __declspec(property(get = get_targetRenderPipeline)) ::System::Type* targetRenderPipeline;

  static inline ::UnityEngine::Rendering::Universal::UniversalRenderPipelineVolumeDebugSettings* New_ctor();

  /// @brief Method .ctor, addr 0x6632800, size 0x74, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_selectedCameraLayerMask, addr 0x6633250, size 0xf0, virtual true, abstract: false, final false
  inline ::UnityEngine::LayerMask get_selectedCameraLayerMask();

  /// @brief Method get_selectedCameraPosition, addr 0x6633340, size 0x100, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector3 get_selectedCameraPosition();

  /// @brief Method get_selectedCameraVolumeStack, addr 0x6633100, size 0x150, virtual true, abstract: false, final false
  inline ::UnityEngine::Rendering::VolumeStack* get_selectedCameraVolumeStack();

  /// @brief Method get_targetRenderPipeline, addr 0x6633440, size 0x60, virtual true, abstract: false, final false
  inline ::System::Type* get_targetRenderPipeline();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UniversalRenderPipelineVolumeDebugSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UniversalRenderPipelineVolumeDebugSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UniversalRenderPipelineVolumeDebugSettings(UniversalRenderPipelineVolumeDebugSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UniversalRenderPipelineVolumeDebugSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UniversalRenderPipelineVolumeDebugSettings(UniversalRenderPipelineVolumeDebugSettings const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12640 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::UniversalRenderPipelineVolumeDebugSettings, 0x48>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::UniversalRenderPipelineVolumeDebugSettings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::UniversalRenderPipelineVolumeDebugSettings*, "UnityEngine.Rendering.Universal", "UniversalRenderPipelineVolumeDebugSettings");

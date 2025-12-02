#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/RenderingData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/Universal/zzzz__CameraData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__LightData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__PostProcessingData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ShadowData_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(RenderingData)
namespace UnityEngine::Rendering::Universal {
class UniversalRenderingData;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
class ContextContainer;
}
namespace UnityEngine::Rendering {
struct CullingResults;
}
namespace UnityEngine::Rendering {
struct PerObjectData;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct RenderingData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::RenderingData);
// Dependencies UnityEngine.Rendering.Universal.CameraData, UnityEngine.Rendering.Universal.LightData, UnityEngine.Rendering.Universal.PostProcessingData, UnityEngine.Rendering.Universal.ShadowData
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.RenderingData
struct CORDL_TYPE RenderingData {
public:
  // Declarations
  __declspec(property(get = get_commandBuffer)) ::UnityEngine::Rendering::CommandBuffer* commandBuffer;

  __declspec(property(get = get_cullResults)) ::UnityEngine::Rendering::CullingResults cullResults;

  __declspec(property(get = get_perObjectData)) ::UnityEngine::Rendering::PerObjectData perObjectData;

  __declspec(property(get = get_postProcessingEnabled)) bool postProcessingEnabled;

  __declspec(property(get = get_supportsDynamicBatching)) bool supportsDynamicBatching;

  __declspec(property(get = get_universalRenderingData)) ::UnityEngine::Rendering::Universal::UniversalRenderingData* universalRenderingData;

  /// @brief Method .ctor, addr 0x66c35f4, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::ContextContainer* frameData);

  /// @brief Method get_commandBuffer, addr 0x66c3658, size 0xb8, virtual false, abstract: false, final false
  inline ::ByRef<::UnityEngine::Rendering::CommandBuffer*> get_commandBuffer();

  /// @brief Method get_cullResults, addr 0x66c3710, size 0x60, virtual false, abstract: false, final false
  inline ::ByRef<::UnityEngine::Rendering::CullingResults> get_cullResults();

  /// @brief Method get_perObjectData, addr 0x66c37d0, size 0x60, virtual false, abstract: false, final false
  inline ::ByRef<::UnityEngine::Rendering::PerObjectData> get_perObjectData();

  /// @brief Method get_postProcessingEnabled, addr 0x66c3830, size 0x60, virtual false, abstract: false, final false
  inline ::ByRef<bool> get_postProcessingEnabled();

  /// @brief Method get_supportsDynamicBatching, addr 0x66c3770, size 0x60, virtual false, abstract: false, final false
  inline ::ByRef<bool> get_supportsDynamicBatching();

  /// @brief Method get_universalRenderingData, addr 0x66c3604, size 0x54, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::UniversalRenderingData* get_universalRenderingData();

  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderingData();

  // Ctor Parameters [CppParam { name: "frameData", ty: "::UnityEngine::Rendering::ContextContainer*", modifiers: "", def_value: None }, CppParam { name: "cameraData", ty:
  // "::UnityEngine::Rendering::Universal::CameraData", modifiers: "", def_value: None }, CppParam { name: "lightData", ty: "::UnityEngine::Rendering::Universal::LightData", modifiers: "", def_value:
  // None }, CppParam { name: "shadowData", ty: "::UnityEngine::Rendering::Universal::ShadowData", modifiers: "", def_value: None }, CppParam { name: "postProcessingData", ty:
  // "::UnityEngine::Rendering::Universal::PostProcessingData", modifiers: "", def_value: None }]
  constexpr RenderingData(::UnityEngine::Rendering::ContextContainer* frameData, ::UnityEngine::Rendering::Universal::CameraData cameraData, ::UnityEngine::Rendering::Universal::LightData lightData,
                          ::UnityEngine::Rendering::Universal::ShadowData shadowData, ::UnityEngine::Rendering::Universal::PostProcessingData postProcessingData) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13005 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  /// @brief Field frameData, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::Rendering::ContextContainer* frameData;

  /// @brief Field cameraData, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::CameraData cameraData;

  /// @brief Field lightData, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::LightData lightData;

  /// @brief Field shadowData, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::ShadowData shadowData;

  /// @brief Field postProcessingData, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::PostProcessingData postProcessingData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::RenderingData, frameData) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::RenderingData, cameraData) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::RenderingData, lightData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::RenderingData, shadowData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::RenderingData, postProcessingData) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::RenderingData, 0x28>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::RenderingData, "UnityEngine.Rendering.Universal", "RenderingData");

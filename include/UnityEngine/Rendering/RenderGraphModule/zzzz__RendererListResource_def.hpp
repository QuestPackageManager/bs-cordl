#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/RendererListResource.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__RendererListParams_def.hpp"
#include "UnityEngine/Rendering/zzzz__RendererList_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(RendererListResource)
namespace UnityEngine::Rendering {
struct RendererListParams;
}
// Forward declare root types
namespace UnityEngine::Rendering::RenderGraphModule {
struct RendererListResource;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::RenderGraphModule::RendererListResource);
// Dependencies UnityEngine.Rendering.RendererList, UnityEngine.Rendering.RendererListParams
namespace UnityEngine::Rendering::RenderGraphModule {
// Is value type: true
// CS Name: UnityEngine.Rendering.RenderGraphModule.RendererListResource
struct CORDL_TYPE RendererListResource {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x65c8e4c, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(::ByRef<::UnityEngine::Rendering::RendererListParams> desc);

  // Ctor Parameters []
  // @brief default ctor
  constexpr RendererListResource();

  // Ctor Parameters [CppParam { name: "desc", ty: "::UnityEngine::Rendering::RendererListParams", modifiers: "", def_value: None }, CppParam { name: "rendererList", ty:
  // "::UnityEngine::Rendering::RendererList", modifiers: "", def_value: None }]
  constexpr RendererListResource(::UnityEngine::Rendering::RendererListParams desc, ::UnityEngine::Rendering::RendererList rendererList) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12426 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x148 };

  /// @brief Field desc, offset: 0x0, size: 0x130, def value: None
  ::UnityEngine::Rendering::RendererListParams desc;

  /// @brief Field rendererList, offset: 0x130, size: 0x18, def value: None
  ::UnityEngine::Rendering::RendererList rendererList;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RendererListResource, desc) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RendererListResource, rendererList) == 0x130, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RenderGraphModule::RendererListResource, 0x148>, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderGraphModule::RendererListResource, "UnityEngine.Rendering.RenderGraphModule", "RendererListResource");

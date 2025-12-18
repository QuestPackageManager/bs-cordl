#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/RendererListLegacyResource.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__RendererList_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(RendererListLegacyResource)
// Forward declare root types
namespace UnityEngine::Rendering::RenderGraphModule {
struct RendererListLegacyResource;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::RenderGraphModule::RendererListLegacyResource);
// Dependencies UnityEngine.Rendering.RendererList
namespace UnityEngine::Rendering::RenderGraphModule {
// Is value type: true
// CS Name: UnityEngine.Rendering.RenderGraphModule.RendererListLegacyResource
struct CORDL_TYPE RendererListLegacyResource {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x6632b18, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(::ByRef<bool> active);

  // Ctor Parameters []
  // @brief default ctor
  constexpr RendererListLegacyResource();

  // Ctor Parameters [CppParam { name: "rendererList", ty: "::UnityEngine::Rendering::RendererList", modifiers: "", def_value: None }, CppParam { name: "isActive", ty: "bool", modifiers: "",
  // def_value: None }]
  constexpr RendererListLegacyResource(::UnityEngine::Rendering::RendererList rendererList, bool isActive) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12431 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field rendererList, offset: 0x0, size: 0x18, def value: None
  ::UnityEngine::Rendering::RendererList rendererList;

  /// @brief Field isActive, offset: 0x18, size: 0x1, def value: None
  bool isActive;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RendererListLegacyResource, rendererList) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RendererListLegacyResource, isActive) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RenderGraphModule::RendererListLegacyResource, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderGraphModule::RendererListLegacyResource, "UnityEngine.Rendering.RenderGraphModule", "RendererListLegacyResource");

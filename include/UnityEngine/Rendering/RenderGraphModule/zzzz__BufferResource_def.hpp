#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/BufferResource.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BufferDesc_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphResource_2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BufferResource)
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraphLogger;
}
namespace UnityEngine {
class GraphicsBuffer;
}
// Forward declare root types
namespace UnityEngine::Rendering::RenderGraphModule {
class BufferResource;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::RenderGraphModule::BufferResource);
// Dependencies UnityEngine.Rendering.RenderGraphModule.BufferDesc, UnityEngine.Rendering.RenderGraphModule.RenderGraphResource`2<DescType, ResType>
namespace UnityEngine::Rendering::RenderGraphModule {
// Is value type: false
// CS Name: UnityEngine.Rendering.RenderGraphModule.BufferResource
class CORDL_TYPE BufferResource : public ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResource_2<::UnityEngine::Rendering::RenderGraphModule::BufferDesc, ::UnityEngine::GraphicsBuffer*> {
public:
  // Declarations
  /// @brief Method CreateGraphicsResource, addr 0x65c5acc, size 0x90, virtual true, abstract: false, final false
  inline void CreateGraphicsResource();

  /// @brief Method GetDescHashCode, addr 0x65c5a90, size 0x3c, virtual true, abstract: false, final false
  inline int32_t GetDescHashCode();

  /// @brief Method GetName, addr 0x65c5a2c, size 0x64, virtual true, abstract: false, final false
  inline ::StringW GetName();

  /// @brief Method LogCreation, addr 0x65c5bdc, size 0xe4, virtual true, abstract: false, final false
  inline void LogCreation(::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger* logger);

  /// @brief Method LogRelease, addr 0x65c5cc0, size 0xe4, virtual true, abstract: false, final false
  inline void LogRelease(::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger* logger);

  static inline ::UnityEngine::Rendering::RenderGraphModule::BufferResource* New_ctor();

  /// @brief Method ReleaseGraphicsResource, addr 0x65c5b8c, size 0x50, virtual true, abstract: false, final false
  inline void ReleaseGraphicsResource();

  /// @brief Method UpdateGraphicsResource, addr 0x65c5b5c, size 0x30, virtual true, abstract: false, final false
  inline void UpdateGraphicsResource();

  /// @brief Method .ctor, addr 0x65c5da4, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BufferResource();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BufferResource", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BufferResource(BufferResource&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BufferResource", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BufferResource(BufferResource const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12412 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RenderGraphModule::BufferResource, 0x60>, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule
NEED_NO_BOX(::UnityEngine::Rendering::RenderGraphModule::BufferResource);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderGraphModule::BufferResource*, "UnityEngine.Rendering.RenderGraphModule", "BufferResource");

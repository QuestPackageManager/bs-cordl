#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/RayTracingAccelerationStructureResource.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RayTracingAccelerationStructureDesc_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphResource_2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(RayTracingAccelerationStructureResource)
namespace UnityEngine::Rendering {
class RayTracingAccelerationStructure;
}
// Forward declare root types
namespace UnityEngine::Rendering::RenderGraphModule {
class RayTracingAccelerationStructureResource;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureResource);
// Dependencies UnityEngine.Rendering.RenderGraphModule.RayTracingAccelerationStructureDesc, UnityEngine.Rendering.RenderGraphModule.RenderGraphResource`2<DescType, ResType>
namespace UnityEngine::Rendering::RenderGraphModule {
// Is value type: false
// CS Name: UnityEngine.Rendering.RenderGraphModule.RayTracingAccelerationStructureResource
class CORDL_TYPE RayTracingAccelerationStructureResource
    : public ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResource_2<::UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureDesc,
                                                                                ::UnityEngine::Rendering::RayTracingAccelerationStructure*> {
public:
  // Declarations
  /// @brief Method GetName, addr 0x65c5654, size 0x8, virtual true, abstract: false, final false
  inline ::StringW GetName();

  static inline ::UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureResource* New_ctor();

  /// @brief Method .ctor, addr 0x65c565c, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RayTracingAccelerationStructureResource();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RayTracingAccelerationStructureResource", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RayTracingAccelerationStructureResource(RayTracingAccelerationStructureResource&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RayTracingAccelerationStructureResource", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RayTracingAccelerationStructureResource(RayTracingAccelerationStructureResource const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12409 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureResource, 0x50>, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule
NEED_NO_BOX(::UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureResource);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureResource*, "UnityEngine.Rendering.RenderGraphModule", "RayTracingAccelerationStructureResource");

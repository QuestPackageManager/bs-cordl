#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/RayTracingAccelerationStructureDesc.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(RayTracingAccelerationStructureDesc)
// Forward declare root types
namespace UnityEngine::Rendering::RenderGraphModule {
struct RayTracingAccelerationStructureDesc;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureDesc);
// Dependencies
namespace UnityEngine::Rendering::RenderGraphModule {
// Is value type: true
// CS Name: UnityEngine.Rendering.RenderGraphModule.RayTracingAccelerationStructureDesc
struct CORDL_TYPE RayTracingAccelerationStructureDesc {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr RayTracingAccelerationStructureDesc();

  // Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }]
  constexpr RayTracingAccelerationStructureDesc(::StringW name) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12412 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field name, offset: 0x0, size: 0x8, def value: None
  ::StringW name;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureDesc, name) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureDesc, 0x8>, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureDesc, "UnityEngine.Rendering.RenderGraphModule", "RayTracingAccelerationStructureDesc");

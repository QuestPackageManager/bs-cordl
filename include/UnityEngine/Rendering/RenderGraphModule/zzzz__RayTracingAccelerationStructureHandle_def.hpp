#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/RayTracingAccelerationStructureHandle.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__ResourceHandle_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RayTracingAccelerationStructureHandle)
namespace UnityEngine::Rendering {
class RayTracingAccelerationStructure;
}
// Forward declare root types
namespace UnityEngine::Rendering::RenderGraphModule {
struct RayTracingAccelerationStructureHandle;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureHandle);
// Dependencies UnityEngine.Rendering.RenderGraphModule.ResourceHandle
namespace UnityEngine::Rendering::RenderGraphModule {
// Is value type: true
// CS Name: UnityEngine.Rendering.RenderGraphModule.RayTracingAccelerationStructureHandle
struct CORDL_TYPE RayTracingAccelerationStructureHandle {
public:
  // Declarations
  /// @brief Field s_NullHandle, offset 0xffffffff, size 0xc
  __declspec(property(get = getStaticF_s_NullHandle, put = setStaticF_s_NullHandle)) ::UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureHandle s_NullHandle;

  /// @brief Method IsValid, addr 0x65c54c8, size 0xe4, virtual false, abstract: false, final false
  inline bool IsValid();

  /// @brief Method .ctor, addr 0x65c52e0, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(int32_t handle);

  static inline ::UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureHandle getStaticF_s_NullHandle();

  /// @brief Method get_nullHandle, addr 0x65c5280, size 0x60, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureHandle get_nullHandle();

  /// @brief Method op_Implicit, addr 0x65c53d8, size 0xf0, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::RayTracingAccelerationStructure*
  op_Implicit___UnityEngine__Rendering__RayTracingAccelerationStructure_(::UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureHandle handle);

  static inline void setStaticF_s_NullHandle(::UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureHandle value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr RayTracingAccelerationStructureHandle();

  // Ctor Parameters [CppParam { name: "handle", ty: "::UnityEngine::Rendering::RenderGraphModule::ResourceHandle", modifiers: "", def_value: None }]
  constexpr RayTracingAccelerationStructureHandle(::UnityEngine::Rendering::RenderGraphModule::ResourceHandle handle) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12407 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  /// @brief Field handle, offset: 0x0, size: 0xc, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::ResourceHandle handle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureHandle, handle) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureHandle, 0xc>, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureHandle, "UnityEngine.Rendering.RenderGraphModule", "RayTracingAccelerationStructureHandle");

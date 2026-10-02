#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UnifiedRayTracing/RayTracingHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RayTracingHelper)
namespace UnityEngine::Rendering::UnifiedRayTracing {
class IRayTracingAccelStruct;
}
namespace UnityEngine::Rendering::UnifiedRayTracing {
class IRayTracingShader;
}
namespace UnityEngine {
class GraphicsBuffer;
}
// Forward declare root types
namespace UnityEngine::Rendering::UnifiedRayTracing {
class RayTracingHelper;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::UnifiedRayTracing::RayTracingHelper*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::UnifiedRayTracing::RayTracingHelper*, "UnityEngine.Rendering.UnifiedRayTracing", "RayTracingHelper");
// Dependencies System.Object, UnityEngine.GraphicsBuffer::Target
namespace UnityEngine::Rendering::UnifiedRayTracing {
// Is value type: false
// CS Name: UnityEngine.Rendering.UnifiedRayTracing.RayTracingHelper
class CORDL_TYPE RayTracingHelper : public ::System::Object {
public:
  // Declarations
  /// @brief Method CreateDispatchIndirectBuffer, addr 0x6e0d160, size 0x64, virtual false, abstract: false, final false
  static inline ::UnityEngine::GraphicsBuffer* CreateDispatchIndirectBuffer();

  /// @brief Method CreateScratchBufferForBuild, addr 0x6e0d75c, size 0xec, virtual false, abstract: false, final false
  static inline ::UnityEngine::GraphicsBuffer* CreateScratchBufferForBuild(::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingAccelStruct* accelStruct);

  /// @brief Method CreateScratchBufferForBuildAndDispatch, addr 0x6e0d594, size 0x1c8, virtual false, abstract: false, final false
  static inline ::UnityEngine::GraphicsBuffer* CreateScratchBufferForBuildAndDispatch(::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingAccelStruct* accelStruct,
                                                                                      ::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader* shader, uint32_t dispatchWidth,
                                                                                      uint32_t dispatchHeight, uint32_t dispatchDepth);

  /// @brief Method CreateScratchBufferForTrace, addr 0x6e0d848, size 0x114, virtual false, abstract: false, final false
  static inline ::UnityEngine::GraphicsBuffer* CreateScratchBufferForTrace(::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader* shader, uint32_t dispatchWidth, uint32_t dispatchHeight,
                                                                           uint32_t dispatchDepth);

  /// @brief Method ResizeScratchBufferForBuild, addr 0x6e0dab8, size 0x13c, virtual false, abstract: false, final false
  static inline void ResizeScratchBufferForBuild(::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingAccelStruct* accelStruct, ::by_ref<::UnityEngine::GraphicsBuffer*> scratchBuffer);

  /// @brief Method ResizeScratchBufferForTrace, addr 0x6e0d95c, size 0x15c, virtual false, abstract: false, final false
  static inline void ResizeScratchBufferForTrace(::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader* shader, uint32_t dispatchWidth, uint32_t dispatchHeight, uint32_t dispatchDepth,
                                                 ::by_ref<::UnityEngine::GraphicsBuffer*> scratchBuffer);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RayTracingHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RayTracingHelper", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RayTracingHelper(RayTracingHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RayTracingHelper", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RayTracingHelper(RayTracingHelper const&) = delete;

  /// @brief Field ScratchBufferTarget value: I32(16)
  static ::UnityEngine::GraphicsBuffer_Target const ScratchBufferTarget;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20501 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::UnifiedRayTracing::RayTracingHelper) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Rendering::UnifiedRayTracing

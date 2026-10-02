#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UnifiedRayTracing/IRayTracingBackend.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IRayTracingBackend)
namespace UnityEngine::Rendering::UnifiedRayTracing {
class AccelerationStructureOptions;
}
namespace UnityEngine::Rendering::UnifiedRayTracing {
class IRayTracingAccelStruct;
}
namespace UnityEngine::Rendering::UnifiedRayTracing {
class IRayTracingShader;
}
namespace UnityEngine::Rendering::UnifiedRayTracing {
class ReferenceCounter;
}
namespace UnityEngine {
class GraphicsBuffer;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine::Rendering::UnifiedRayTracing {
class IRayTracingBackend;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingBackend*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingBackend*, "UnityEngine.Rendering.UnifiedRayTracing", "IRayTracingBackend");
// Dependencies
namespace UnityEngine::Rendering::UnifiedRayTracing {
// Is value type: false
// CS Name: UnityEngine.Rendering.UnifiedRayTracing.IRayTracingBackend
class CORDL_TYPE IRayTracingBackend {
public:
  // Declarations
  /// @brief Method CreateAccelerationStructure, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingAccelStruct* CreateAccelerationStructure(::UnityEngine::Rendering::UnifiedRayTracing::AccelerationStructureOptions* options,
                                                                                                          ::UnityEngine::Rendering::UnifiedRayTracing::ReferenceCounter* counter);

  /// @brief Method CreateRayTracingShader, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader* CreateRayTracingShader(::UnityEngine::Object* shader, ::StringW kernelName, ::UnityEngine::GraphicsBuffer* dispatchBuffer);

  /// @brief Method GetRequiredTraceScratchBufferSizeInBytes, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline uint64_t GetRequiredTraceScratchBufferSizeInBytes(uint32_t width, uint32_t height, uint32_t depth);

  // Ctor Parameters [CppParam { name: "", ty: "IRayTracingBackend", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IRayTracingBackend(IRayTracingBackend const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20494 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering::UnifiedRayTracing

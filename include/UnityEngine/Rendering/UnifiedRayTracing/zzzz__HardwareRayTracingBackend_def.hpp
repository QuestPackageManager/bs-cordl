#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UnifiedRayTracing/HardwareRayTracingBackend.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HardwareRayTracingBackend)
namespace UnityEngine::Rendering::UnifiedRayTracing {
class AccelerationStructureOptions;
}
namespace UnityEngine::Rendering::UnifiedRayTracing {
class IRayTracingAccelStruct;
}
namespace UnityEngine::Rendering::UnifiedRayTracing {
class IRayTracingBackend;
}
namespace UnityEngine::Rendering::UnifiedRayTracing {
class IRayTracingShader;
}
namespace UnityEngine::Rendering::UnifiedRayTracing {
class RayTracingResources;
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
class HardwareRayTracingBackend;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingBackend*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingBackend*, "UnityEngine.Rendering.UnifiedRayTracing", "HardwareRayTracingBackend");
// Dependencies System.Object
namespace UnityEngine::Rendering::UnifiedRayTracing {
// Is value type: false
// CS Name: UnityEngine.Rendering.UnifiedRayTracing.HardwareRayTracingBackend
class CORDL_TYPE HardwareRayTracingBackend : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Resources, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Resources, put = __cordl_internal_set_m_Resources)) ::UnityEngine::Rendering::UnifiedRayTracing::RayTracingResources* m_Resources;

  /// @brief Convert operator to "::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingBackend"
  constexpr operator ::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingBackend*() noexcept;

  /// @brief Method CreateAccelerationStructure, addr 0x6e0cc28, size 0x6c, virtual true, abstract: false, final true
  inline ::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingAccelStruct* CreateAccelerationStructure(::UnityEngine::Rendering::UnifiedRayTracing::AccelerationStructureOptions* options,
                                                                                                          ::UnityEngine::Rendering::UnifiedRayTracing::ReferenceCounter* counter);

  /// @brief Method CreateRayTracingShader, addr 0x6e0cb90, size 0x90, virtual true, abstract: false, final true
  inline ::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader* CreateRayTracingShader(::UnityEngine::Object* shader, ::StringW kernelName, ::UnityEngine::GraphicsBuffer* dispatchBuffer);

  /// @brief Method GetRequiredTraceScratchBufferSizeInBytes, addr 0x6e0cc94, size 0x8, virtual true, abstract: false, final true
  inline uint64_t GetRequiredTraceScratchBufferSizeInBytes(uint32_t width, uint32_t height, uint32_t depth);

  static inline ::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingBackend* New_ctor(::UnityEngine::Rendering::UnifiedRayTracing::RayTracingResources* resources);

  constexpr ::UnityEngine::Rendering::UnifiedRayTracing::RayTracingResources* const& __cordl_internal_get_m_Resources() const;

  constexpr ::UnityEngine::Rendering::UnifiedRayTracing::RayTracingResources*& __cordl_internal_get_m_Resources();

  constexpr void __cordl_internal_set_m_Resources(::UnityEngine::Rendering::UnifiedRayTracing::RayTracingResources* value);

  /// @brief Method .ctor, addr 0x6e0cb88, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::UnifiedRayTracing::RayTracingResources* resources);

  /// @brief Convert to "::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingBackend"
  constexpr ::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingBackend* i___UnityEngine__Rendering__UnifiedRayTracing__IRayTracingBackend() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HardwareRayTracingBackend();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HardwareRayTracingBackend", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HardwareRayTracingBackend(HardwareRayTracingBackend&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HardwareRayTracingBackend", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HardwareRayTracingBackend(HardwareRayTracingBackend const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20490 };

  /// @brief Field m_Resources, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::UnifiedRayTracing::RayTracingResources* ___m_Resources;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingBackend, ___m_Resources) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingBackend) == 0x18, "Size mismatch!");

} // namespace UnityEngine::Rendering::UnifiedRayTracing

#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UnifiedRayTracing/IRayTracingAccelStruct.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IRayTracingAccelStruct)
namespace System {
class IDisposable;
}
namespace UnityEngine::Rendering::UnifiedRayTracing {
struct MeshInstanceDesc;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine {
class GraphicsBuffer;
}
namespace UnityEngine {
struct Matrix4x4;
}
// Forward declare root types
namespace UnityEngine::Rendering::UnifiedRayTracing {
class IRayTracingAccelStruct;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingAccelStruct*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingAccelStruct*, "UnityEngine.Rendering.UnifiedRayTracing", "IRayTracingAccelStruct");
// Dependencies
namespace UnityEngine::Rendering::UnifiedRayTracing {
// Is value type: false
// CS Name: UnityEngine.Rendering.UnifiedRayTracing.IRayTracingAccelStruct
class CORDL_TYPE IRayTracingAccelStruct {
public:
  // Declarations
  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method AddInstance, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t AddInstance(::UnityEngine::Rendering::UnifiedRayTracing::MeshInstanceDesc meshInstance);

  /// @brief Method Build, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Build(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::GraphicsBuffer* scratchBuffer);

  /// @brief Method ClearInstances, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void ClearInstances();

  /// @brief Method GetBuildScratchBufferRequiredSizeInBytes, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline uint64_t GetBuildScratchBufferRequiredSizeInBytes();

  /// @brief Method RemoveInstance, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void RemoveInstance(int32_t instanceHandle);

  /// @brief Method UpdateInstanceID, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void UpdateInstanceID(int32_t instanceHandle, uint32_t instanceID);

  /// @brief Method UpdateInstanceMask, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void UpdateInstanceMask(int32_t instanceHandle, uint32_t mask);

  /// @brief Method UpdateInstanceTransform, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void UpdateInstanceTransform(int32_t instanceHandle, ::UnityEngine::Matrix4x4 localToWorldMatrix);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IRayTracingAccelStruct", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IRayTracingAccelStruct(IRayTracingAccelStruct const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20493 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering::UnifiedRayTracing

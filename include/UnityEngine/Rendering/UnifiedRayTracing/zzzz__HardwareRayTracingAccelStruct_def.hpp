#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UnifiedRayTracing/HardwareRayTracingAccelStruct.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__RayTracingAccelerationStructureBuildFlags_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HardwareRayTracingAccelStruct)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System {
class IDisposable;
}
namespace UnityEngine::Rendering::UnifiedRayTracing {
class AccelerationStructureOptions;
}
namespace UnityEngine::Rendering::UnifiedRayTracing {
class IRayTracingAccelStruct;
}
namespace UnityEngine::Rendering::UnifiedRayTracing {
struct MeshInstanceDesc;
}
namespace UnityEngine::Rendering::UnifiedRayTracing {
class ReferenceCounter;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
class RayTracingAccelerationStructure;
}
namespace UnityEngine {
class GraphicsBuffer;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class Mesh;
}
// Forward declare root types
namespace UnityEngine::Rendering::UnifiedRayTracing {
class HardwareRayTracingAccelStruct;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingAccelStruct*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingAccelStruct*, "UnityEngine.Rendering.UnifiedRayTracing", "HardwareRayTracingAccelStruct");
// Dependencies System.Object, UnityEngine.Rendering.RayTracingAccelerationStructureBuildFlags
namespace UnityEngine::Rendering::UnifiedRayTracing {
// Is value type: false
// CS Name: UnityEngine.Rendering.UnifiedRayTracing.HardwareRayTracingAccelStruct
class CORDL_TYPE HardwareRayTracingAccelStruct : public ::System::Object {
public:
  // Declarations
  /// @brief Field <accelStruct>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__accelStruct_k__BackingField,
                      put = __cordl_internal_set__accelStruct_k__BackingField)) ::UnityEngine::Rendering::RayTracingAccelerationStructure* _accelStruct_k__BackingField;

  __declspec(property(get = get_accelStruct)) ::UnityEngine::Rendering::RayTracingAccelerationStructure* accelStruct;

  /// @brief Field m_BuildFlags, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_BuildFlags, put = __cordl_internal_set_m_BuildFlags)) ::UnityEngine::Rendering::RayTracingAccelerationStructureBuildFlags m_BuildFlags;

  /// @brief Field m_Counter, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Counter, put = __cordl_internal_set_m_Counter)) ::UnityEngine::Rendering::UnifiedRayTracing::ReferenceCounter* m_Counter;

  /// @brief Field m_Meshes, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Meshes, put = __cordl_internal_set_m_Meshes)) ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::Mesh>>* m_Meshes;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert operator to "::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingAccelStruct"
  constexpr operator ::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingAccelStruct*() noexcept;

  /// @brief Method AddInstance, addr 0x6e0c834, size 0x170, virtual true, abstract: false, final true
  inline int32_t AddInstance(::UnityEngine::Rendering::UnifiedRayTracing::MeshInstanceDesc meshInstance);

  /// @brief Method Build, addr 0x6e0cadc, size 0xa0, virtual true, abstract: false, final true
  inline void Build(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::GraphicsBuffer* scratchBuffer);

  /// [Conditional("UNITY_ASSERTIONS")]
  /// @brief Method CheckInstanceHandleIsValid, addr 0x6e0cb84, size 0x4, virtual false, abstract: false, final false
  inline void CheckInstanceHandleIsValid(int32_t instanceHandle);

  /// @brief Method ClearInstances, addr 0x6e0ca18, size 0x64, virtual true, abstract: false, final true
  inline void ClearInstances();

  /// @brief Method Dispose, addr 0x6e0c7f4, size 0x30, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method GetBuildScratchBufferRequiredSizeInBytes, addr 0x6e0cb7c, size 0x8, virtual true, abstract: false, final true
  inline uint64_t GetBuildScratchBufferRequiredSizeInBytes();

  static inline ::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingAccelStruct* New_ctor(::UnityEngine::Rendering::UnifiedRayTracing::AccelerationStructureOptions* options,
                                                                                                     ::UnityEngine::Rendering::UnifiedRayTracing::ReferenceCounter* counter);

  /// @brief Method RemoveInstance, addr 0x6e0c9a4, size 0x74, virtual true, abstract: false, final true
  inline void RemoveInstance(int32_t instanceHandle);

  /// @brief Method UpdateInstanceID, addr 0x6e0cab4, size 0x14, virtual true, abstract: false, final true
  inline void UpdateInstanceID(int32_t instanceHandle, uint32_t instanceID);

  /// @brief Method UpdateInstanceMask, addr 0x6e0cac8, size 0x14, virtual true, abstract: false, final true
  inline void UpdateInstanceMask(int32_t instanceHandle, uint32_t mask);

  /// @brief Method UpdateInstanceTransform, addr 0x6e0ca7c, size 0x38, virtual true, abstract: false, final true
  inline void UpdateInstanceTransform(int32_t instanceHandle, ::UnityEngine::Matrix4x4 localToWorldMatrix);

  constexpr ::UnityEngine::Rendering::RayTracingAccelerationStructure* const& __cordl_internal_get__accelStruct_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::RayTracingAccelerationStructure*& __cordl_internal_get__accelStruct_k__BackingField();

  constexpr ::UnityEngine::Rendering::RayTracingAccelerationStructureBuildFlags const& __cordl_internal_get_m_BuildFlags() const;

  constexpr ::UnityEngine::Rendering::RayTracingAccelerationStructureBuildFlags& __cordl_internal_get_m_BuildFlags();

  constexpr ::UnityEngine::Rendering::UnifiedRayTracing::ReferenceCounter* const& __cordl_internal_get_m_Counter() const;

  constexpr ::UnityEngine::Rendering::UnifiedRayTracing::ReferenceCounter*& __cordl_internal_get_m_Counter();

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::Mesh>>* const& __cordl_internal_get_m_Meshes() const;

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::Mesh>>*& __cordl_internal_get_m_Meshes();

  constexpr void __cordl_internal_set__accelStruct_k__BackingField(::UnityEngine::Rendering::RayTracingAccelerationStructure* value);

  constexpr void __cordl_internal_set_m_BuildFlags(::UnityEngine::Rendering::RayTracingAccelerationStructureBuildFlags value);

  constexpr void __cordl_internal_set_m_Counter(::UnityEngine::Rendering::UnifiedRayTracing::ReferenceCounter* value);

  constexpr void __cordl_internal_set_m_Meshes(::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::Mesh>>* value);

  /// @brief Method .ctor, addr 0x6e0c69c, size 0x148, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::UnifiedRayTracing::AccelerationStructureOptions* options, ::UnityEngine::Rendering::UnifiedRayTracing::ReferenceCounter* counter);

  /// [CompilerGenerated]
  /// @brief Method get_accelStruct, addr 0x6e0c694, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RayTracingAccelerationStructure* get_accelStruct();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Convert to "::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingAccelStruct"
  constexpr ::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingAccelStruct* i___UnityEngine__Rendering__UnifiedRayTracing__IRayTracingAccelStruct() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HardwareRayTracingAccelStruct();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HardwareRayTracingAccelStruct", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HardwareRayTracingAccelStruct(HardwareRayTracingAccelStruct&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HardwareRayTracingAccelStruct", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HardwareRayTracingAccelStruct(HardwareRayTracingAccelStruct const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20489 };

  /// [CompilerGenerated]
  /// @brief Field <accelStruct>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::RayTracingAccelerationStructure* ____accelStruct_k__BackingField;

  /// @brief Field m_BuildFlags, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::Rendering::RayTracingAccelerationStructureBuildFlags ___m_BuildFlags;

  /// @brief Field m_Meshes, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::Mesh>>* ___m_Meshes;

  /// @brief Field m_Counter, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Rendering::UnifiedRayTracing::ReferenceCounter* ___m_Counter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingAccelStruct, ____accelStruct_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingAccelStruct, ___m_BuildFlags) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingAccelStruct, ___m_Meshes) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingAccelStruct, ___m_Counter) == 0x28, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::UnifiedRayTracing::HardwareRayTracingAccelStruct) == 0x30, "Size mismatch!");

} // namespace UnityEngine::Rendering::UnifiedRayTracing

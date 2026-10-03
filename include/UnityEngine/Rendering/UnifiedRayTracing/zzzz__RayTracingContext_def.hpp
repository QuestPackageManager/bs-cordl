#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UnifiedRayTracing/RayTracingContext.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__RayTracingBackend_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RayTracingContext)
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
class IRayTracingBackend;
}
namespace UnityEngine::Rendering::UnifiedRayTracing {
class IRayTracingShader;
}
namespace UnityEngine::Rendering::UnifiedRayTracing {
struct RayTracingBackend;
}
namespace UnityEngine::Rendering::UnifiedRayTracing {
class RayTracingResources;
}
namespace UnityEngine::Rendering::UnifiedRayTracing {
class ReferenceCounter;
}
namespace UnityEngine {
class AssetBundle;
}
namespace UnityEngine {
class GraphicsBuffer;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine::Rendering::UnifiedRayTracing {
class RayTracingContext;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::UnifiedRayTracing::RayTracingContext*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::UnifiedRayTracing::RayTracingContext*, "UnityEngine.Rendering.UnifiedRayTracing", "RayTracingContext");
// Dependencies System.Object, UnityEngine.Rendering.UnifiedRayTracing.RayTracingBackend
namespace UnityEngine::Rendering::UnifiedRayTracing {
// Is value type: false
// CS Name: UnityEngine.Rendering.UnifiedRayTracing.RayTracingContext
class CORDL_TYPE RayTracingContext : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_BackendType, put = set_BackendType)) ::UnityEngine::Rendering::UnifiedRayTracing::RayTracingBackend BackendType;

  __declspec(property(get = get_Resources, put = set_Resources)) ::UnityEngine::Rendering::UnifiedRayTracing::RayTracingResources* Resources;

  /// @brief Field <BackendType>k__BackingField, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__BackendType_k__BackingField,
                      put = __cordl_internal_set__BackendType_k__BackingField)) ::UnityEngine::Rendering::UnifiedRayTracing::RayTracingBackend _BackendType_k__BackingField;

  /// @brief Field <Resources>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Resources_k__BackingField,
                      put = __cordl_internal_set__Resources_k__BackingField)) ::UnityEngine::Rendering::UnifiedRayTracing::RayTracingResources* _Resources_k__BackingField;

  /// @brief Field m_AccelStructCounter, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AccelStructCounter,
                      put = __cordl_internal_set_m_AccelStructCounter)) ::UnityEngine::Rendering::UnifiedRayTracing::ReferenceCounter* m_AccelStructCounter;

  /// @brief Field m_Backend, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Backend, put = __cordl_internal_set_m_Backend)) ::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingBackend* m_Backend;

  /// @brief Field m_DispatchBuffer, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DispatchBuffer, put = __cordl_internal_set_m_DispatchBuffer)) ::UnityEngine::GraphicsBuffer* m_DispatchBuffer;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method CreateAccelerationStructure, addr 0x6e0d3f0, size 0xc0, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingAccelStruct* CreateAccelerationStructure(::UnityEngine::Rendering::UnifiedRayTracing::AccelerationStructureOptions* options);

  /// @brief Method CreateRayTracingShader, addr 0x6e0d2c4, size 0xdc, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader* CreateRayTracingShader(::UnityEngine::Object* shader);

  /// @brief Method Dispose, addr 0x6e0d214, size 0xa0, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method GetRequiredTraceScratchBufferSizeInBytes, addr 0x6e0d4b0, size 0xd0, virtual false, abstract: false, final false
  inline uint64_t GetRequiredTraceScratchBufferSizeInBytes(uint32_t width, uint32_t height, uint32_t depth);

  /// @brief Method GetScratchBufferStrideInBytes, addr 0x6e0c0e0, size 0x8, virtual false, abstract: false, final false
  static inline uint32_t GetScratchBufferStrideInBytes();

  /// @brief Method IsBackendSupported, addr 0x6e0d100, size 0x60, virtual false, abstract: false, final false
  static inline bool IsBackendSupported(::UnityEngine::Rendering::UnifiedRayTracing::RayTracingBackend backend);

  /// @brief Method LoadRayTracingShaderFromAssetBundle, addr 0x6e0d3a0, size 0x50, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader* LoadRayTracingShaderFromAssetBundle(::UnityEngine::AssetBundle* assetBundle, ::StringW name);

  static inline ::UnityEngine::Rendering::UnifiedRayTracing::RayTracingContext* New_ctor(::UnityEngine::Rendering::UnifiedRayTracing::RayTracingBackend backend,
                                                                                         ::UnityEngine::Rendering::UnifiedRayTracing::RayTracingResources* resources);

  static inline ::UnityEngine::Rendering::UnifiedRayTracing::RayTracingContext* New_ctor(::UnityEngine::Rendering::UnifiedRayTracing::RayTracingResources* resources);

  constexpr ::UnityEngine::Rendering::UnifiedRayTracing::RayTracingBackend const& __cordl_internal_get__BackendType_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::UnifiedRayTracing::RayTracingBackend& __cordl_internal_get__BackendType_k__BackingField();

  constexpr ::UnityEngine::Rendering::UnifiedRayTracing::RayTracingResources* const& __cordl_internal_get__Resources_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::UnifiedRayTracing::RayTracingResources*& __cordl_internal_get__Resources_k__BackingField();

  constexpr ::UnityEngine::Rendering::UnifiedRayTracing::ReferenceCounter* const& __cordl_internal_get_m_AccelStructCounter() const;

  constexpr ::UnityEngine::Rendering::UnifiedRayTracing::ReferenceCounter*& __cordl_internal_get_m_AccelStructCounter();

  constexpr ::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingBackend* const& __cordl_internal_get_m_Backend() const;

  constexpr ::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingBackend*& __cordl_internal_get_m_Backend();

  constexpr ::UnityEngine::GraphicsBuffer* const& __cordl_internal_get_m_DispatchBuffer() const;

  constexpr ::UnityEngine::GraphicsBuffer*& __cordl_internal_get_m_DispatchBuffer();

  constexpr void __cordl_internal_set__BackendType_k__BackingField(::UnityEngine::Rendering::UnifiedRayTracing::RayTracingBackend value);

  constexpr void __cordl_internal_set__Resources_k__BackingField(::UnityEngine::Rendering::UnifiedRayTracing::RayTracingResources* value);

  constexpr void __cordl_internal_set_m_AccelStructCounter(::UnityEngine::Rendering::UnifiedRayTracing::ReferenceCounter* value);

  constexpr void __cordl_internal_set_m_Backend(::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingBackend* value);

  constexpr void __cordl_internal_set_m_DispatchBuffer(::UnityEngine::GraphicsBuffer* value);

  /// @brief Method .ctor, addr 0x6e0cfa8, size 0x154, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::UnifiedRayTracing::RayTracingBackend backend, ::UnityEngine::Rendering::UnifiedRayTracing::RayTracingResources* resources);

  /// @brief Method .ctor, addr 0x6e0d1c4, size 0x50, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::UnifiedRayTracing::RayTracingResources* resources);

  /// [CompilerGenerated]
  /// @brief Method get_BackendType, addr 0x6e0d580, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::UnifiedRayTracing::RayTracingBackend get_BackendType();

  /// [CompilerGenerated]
  /// @brief Method get_Resources, addr 0x6e0d2b4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::UnifiedRayTracing::RayTracingResources* get_Resources();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// [CompilerGenerated]
  /// @brief Method set_BackendType, addr 0x6e0d588, size 0x8, virtual false, abstract: false, final false
  inline void set_BackendType(::UnityEngine::Rendering::UnifiedRayTracing::RayTracingBackend value);

  /// [CompilerGenerated]
  /// @brief Method set_Resources, addr 0x6e0d2bc, size 0x8, virtual false, abstract: false, final false
  inline void set_Resources(::UnityEngine::Rendering::UnifiedRayTracing::RayTracingResources* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RayTracingContext();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RayTracingContext", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RayTracingContext(RayTracingContext&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RayTracingContext", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RayTracingContext(RayTracingContext const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20497 };

  /// [CompilerGenerated]
  /// @brief Field <Resources>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::UnifiedRayTracing::RayTracingResources* ____Resources_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <BackendType>k__BackingField, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::Rendering::UnifiedRayTracing::RayTracingBackend ____BackendType_k__BackingField;

  /// @brief Field m_Backend, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingBackend* ___m_Backend;

  /// @brief Field m_AccelStructCounter, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Rendering::UnifiedRayTracing::ReferenceCounter* ___m_AccelStructCounter;

  /// @brief Field m_DispatchBuffer, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::GraphicsBuffer* ___m_DispatchBuffer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::RayTracingContext, ____Resources_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::RayTracingContext, ____BackendType_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::RayTracingContext, ___m_Backend) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::RayTracingContext, ___m_AccelStructCounter) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::RayTracingContext, ___m_DispatchBuffer) == 0x30, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::UnifiedRayTracing::RayTracingContext) == 0x38, "Size mismatch!");

} // namespace UnityEngine::Rendering::UnifiedRayTracing

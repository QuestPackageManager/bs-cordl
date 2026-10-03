#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UnifiedRayTracing/AccelStructAdapter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AccelStructAdapter)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename TInput, typename TOutput> class Converter_2;
}
namespace System {
class IDisposable;
}
namespace System {
template <typename T> struct Span_1;
}
namespace UnityEngine::Rendering::UnifiedRayTracing {
struct AccelStructAdapter_InstanceIDs;
}
namespace UnityEngine::Rendering::UnifiedRayTracing {
class AccelStructAdapter___c;
}
namespace UnityEngine::Rendering::UnifiedRayTracing {
class AccelStructInstances;
}
namespace UnityEngine::Rendering::UnifiedRayTracing {
class GeometryPool;
}
namespace UnityEngine::Rendering::UnifiedRayTracing {
class IRayTracingAccelStruct;
}
namespace UnityEngine::Rendering::UnifiedRayTracing {
class IRayTracingShader;
}
namespace UnityEngine::Rendering::UnifiedRayTracing {
struct MeshInstanceDesc;
}
namespace UnityEngine::Rendering::UnifiedRayTracing {
class RayTracingResources;
}
namespace UnityEngine::Rendering::UnifiedRayTracing {
struct TerrainDesc;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine {
class Component;
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
class AccelStructAdapter;
}
namespace UnityEngine::Rendering::UnifiedRayTracing {
class AccelStructAdapter___c;
}
namespace UnityEngine::Rendering::UnifiedRayTracing {
struct AccelStructAdapter_InstanceIDs;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter*);
MARK_REF_T(::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter___c*);
MARK_VAL_T(::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter_InstanceIDs);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter*, "UnityEngine.Rendering.UnifiedRayTracing", "AccelStructAdapter");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter___c*, "UnityEngine.Rendering.UnifiedRayTracing", "AccelStructAdapter/<>c");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter_InstanceIDs, "UnityEngine.Rendering.UnifiedRayTracing", "AccelStructAdapter/InstanceIDs");
// Dependencies
namespace UnityEngine::Rendering::UnifiedRayTracing {
// Is value type: true
// CS Name: UnityEngine.Rendering.UnifiedRayTracing.AccelStructAdapter/InstanceIDs
struct CORDL_TYPE AccelStructAdapter_InstanceIDs {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr AccelStructAdapter_InstanceIDs();

  // Ctor Parameters [CppParam { name: "InstanceID", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "AccelStructID", ty: "int32_t", modifiers: "", def_value: None,
  // comment: None }]
  constexpr AccelStructAdapter_InstanceIDs(int32_t InstanceID, int32_t AccelStructID) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20448 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field InstanceID, offset: 0x0, size: 0x4, def value: None
  int32_t InstanceID;

  /// @brief Field AccelStructID, offset: 0x4, size: 0x4, def value: None
  int32_t AccelStructID;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter_InstanceIDs, InstanceID) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter_InstanceIDs, AccelStructID) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter_InstanceIDs) == 0x8, "Size mismatch!");

} // namespace UnityEngine::Rendering::UnifiedRayTracing
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::Rendering::UnifiedRayTracing {
// Is value type: false
// CS Name: UnityEngine.Rendering.UnifiedRayTracing.AccelStructAdapter/<>c
class CORDL_TYPE AccelStructAdapter___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter___c* __9;

  /// @brief Field <>9__26_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__26_0, put = setStaticF___9__26_0)) ::System::Converter_2<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter_InstanceIDs, int32_t>* __9__26_0;

  static inline ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter___c* New_ctor();

  /// @brief Method <GetInstanceIDs>b__26_0, addr 0x6e01f38, size 0x8, virtual false, abstract: false, final false
  inline int32_t _GetInstanceIDs_b__26_0(::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter_InstanceIDs item);

  /// @brief Method .ctor, addr 0x6e01f34, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter___c* getStaticF___9();

  static inline ::System::Converter_2<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter_InstanceIDs, int32_t>* getStaticF___9__26_0();

  static inline void setStaticF___9(::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter___c* value);

  static inline void setStaticF___9__26_0(::System::Converter_2<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter_InstanceIDs, int32_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AccelStructAdapter___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AccelStructAdapter___c", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AccelStructAdapter___c(AccelStructAdapter___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AccelStructAdapter___c", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AccelStructAdapter___c(AccelStructAdapter___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20449 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter___c) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Rendering::UnifiedRayTracing
// Dependencies System.Object
namespace UnityEngine::Rendering::UnifiedRayTracing {
// Is value type: false
// CS Name: UnityEngine.Rendering.UnifiedRayTracing.AccelStructAdapter
class CORDL_TYPE AccelStructAdapter : public ::System::Object {
public:
  // Declarations
  using InstanceIDs = ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter_InstanceIDs;

  using __c = ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter___c;

  __declspec(property(get = get_GeometryPool)) ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool* GeometryPool;

  __declspec(property(get = get_Instances)) ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances* Instances;

  /// @brief Field _accelStruct, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__accelStruct, put = __cordl_internal_set__accelStruct)) ::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingAccelStruct* _accelStruct;

  /// @brief Field _instances, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__instances, put = __cordl_internal_set__instances)) ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances* _instances;

  /// @brief Field _objectHandleToInstances, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__objectHandleToInstances, put = __cordl_internal_set__objectHandleToInstances)) ::System::Collections::Generic::Dictionary_2<
      int32_t, ::ArrayW<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter_InstanceIDs>>* _objectHandleToInstances;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method AddHeightmap, addr 0x6e0073c, size 0x17c, virtual false, abstract: false, final false
  inline void AddHeightmap(::UnityEngine::Rendering::UnifiedRayTracing::TerrainDesc terrainDesc,
                           ::by_ref<::System::Collections::Generic::List_1<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter_InstanceIDs>*> instanceHandles);

  /// @brief Method AddInstance, addr 0x6e00de4, size 0x138, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter_InstanceIDs AddInstance(::UnityEngine::Rendering::UnifiedRayTracing::MeshInstanceDesc instanceDesc, uint32_t materialID,
                                                                                                 uint32_t renderingLayerMask);

  /// @brief Method AddInstance, addr 0x6e00380, size 0x310, virtual false, abstract: false, final false
  inline void AddInstance(int32_t objectHandle, ::UnityEngine::Mesh* mesh, ::UnityEngine::Matrix4x4 localToWorldMatrix, ::System::Span_1<uint32_t> perSubMeshMask,
                          ::System::Span_1<uint32_t> perSubMeshMaterialIDs, ::System::Span_1<bool> perSubMeshIsOpaque, uint32_t renderingLayerMask);

  /// @brief Method AddInstance, addr 0x6e00078, size 0x1d0, virtual false, abstract: false, final false
  inline void AddInstance(int32_t objectHandle, ::UnityEngine::Component* meshRendererOrTerrain, ::System::Span_1<uint32_t> perSubMeshMask, ::System::Span_1<uint32_t> perSubMeshMaterialIDs,
                          ::System::Span_1<bool> perSubMeshIsOpaque, uint32_t renderingLayerMask);

  /// @brief Method AddInstance, addr 0x6e00248, size 0x138, virtual false, abstract: false, final false
  inline void AddInstance(int32_t objectHandle, ::UnityEngine::Rendering::UnifiedRayTracing::TerrainDesc terrainDesc);

  /// @brief Method AddTrees, addr 0x6e008b8, size 0x4c0, virtual false, abstract: false, final false
  inline void AddTrees(::UnityEngine::Rendering::UnifiedRayTracing::TerrainDesc terrainDesc,
                       ::by_ref<::System::Collections::Generic::List_1<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter_InstanceIDs>*> instanceHandles);

  /// @brief Method Bind, addr 0x6dff9a8, size 0xe0, virtual false, abstract: false, final false
  inline void Bind(::UnityEngine::Rendering::CommandBuffer* cmd, ::StringW propertyName, ::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader* shader);

  /// @brief Method Build, addr 0x6e01b60, size 0xd4, virtual false, abstract: false, final false
  inline void Build(::UnityEngine::Rendering::CommandBuffer* cmd, ::by_ref<::UnityEngine::GraphicsBuffer*> scratchBuffer);

  /// @brief Method Dispose, addr 0x6dffe18, size 0xe0, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method GetAccelerationStructure, addr 0x6dff988, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingAccelStruct* GetAccelerationStructure();

  /// @brief Method GetInstanceIDs, addr 0x6e01d74, size 0x16c, virtual false, abstract: false, final false
  inline bool GetInstanceIDs(int32_t rendererID, ::by_ref<::ArrayW<int32_t>> instanceIDs);

  static inline ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter* New_ctor(::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingAccelStruct* accelStruct,
                                                                                          ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool* geometryPool);

  static inline ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter* New_ctor(::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingAccelStruct* accelStruct,
                                                                                          ::UnityEngine::Rendering::UnifiedRayTracing::RayTracingResources* resources);

  /// @brief Method NextFrame, addr 0x6e01c34, size 0x14, virtual false, abstract: false, final false
  inline void NextFrame();

  /// @brief Method RemoveInstance, addr 0x6e00f1c, size 0x178, virtual false, abstract: false, final false
  inline void RemoveInstance(int32_t objectHandle);

  /// @brief Method UpdateInstanceMask, addr 0x6e01998, size 0x1c8, virtual false, abstract: false, final false
  inline void UpdateInstanceMask(int32_t objectHandle, uint32_t mask);

  /// @brief Method UpdateInstanceMask, addr 0x6e01718, size 0x174, virtual false, abstract: false, final false
  inline void UpdateInstanceMask(int32_t objectHandle, ::System::Span_1<uint32_t> perSubMeshMask);

  /// @brief Method UpdateInstanceMaterialIDs, addr 0x6e01534, size 0xe0, virtual false, abstract: false, final false
  inline void UpdateInstanceMaterialIDs(int32_t objectHandle, ::System::Span_1<uint32_t> perSubMeshMaterialIDs);

  /// @brief Method UpdateInstanceTransform, addr 0x6e0119c, size 0x198, virtual false, abstract: false, final false
  inline void UpdateInstanceTransform(int32_t objectHandle, ::UnityEngine::Matrix4x4 localToWorldMatrix);

  constexpr ::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingAccelStruct* const& __cordl_internal_get__accelStruct() const;

  constexpr ::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingAccelStruct*& __cordl_internal_get__accelStruct();

  constexpr ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances* const& __cordl_internal_get__instances() const;

  constexpr ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances*& __cordl_internal_get__instances();

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::ArrayW<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter_InstanceIDs>>* const&
  __cordl_internal_get__objectHandleToInstances() const;

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::ArrayW<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter_InstanceIDs>>*&
  __cordl_internal_get__objectHandleToInstances();

  constexpr void __cordl_internal_set__accelStruct(::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingAccelStruct* value);

  constexpr void __cordl_internal_set__instances(::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances* value);

  constexpr void
  __cordl_internal_set__objectHandleToInstances(::System::Collections::Generic::Dictionary_2<int32_t, ::ArrayW<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter_InstanceIDs>>* value);

  /// @brief Method .ctor, addr 0x6dff348, size 0xdc, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingAccelStruct* accelStruct, ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool* geometryPool);

  /// @brief Method .ctor, addr 0x6dff518, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingAccelStruct* accelStruct, ::UnityEngine::Rendering::UnifiedRayTracing::RayTracingResources* resources);

  /// @brief Method get_GeometryPool, addr 0x6dff990, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool* get_GeometryPool();

  /// @brief Method get_Instances, addr 0x6dff340, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances* get_Instances();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AccelStructAdapter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AccelStructAdapter", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AccelStructAdapter(AccelStructAdapter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AccelStructAdapter", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AccelStructAdapter(AccelStructAdapter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20450 };

  /// @brief Field _accelStruct, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingAccelStruct* ____accelStruct;

  /// @brief Field _instances, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances* ____instances;

  /// @brief Field _objectHandleToInstances, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, ::ArrayW<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter_InstanceIDs>>* ____objectHandleToInstances;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter, ____accelStruct) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter, ____instances) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter, ____objectHandleToInstances) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::UnifiedRayTracing::AccelStructAdapter) == 0x28, "Size mismatch!");

} // namespace UnityEngine::Rendering::UnifiedRayTracing

#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UnifiedRayTracing/AccelStructInstances.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Mathematics/zzzz__float4x4_def.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__BlockAllocator_def.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__GeometryPoolHandle_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AccelStructInstances)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyCollection_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class IDisposable;
}
namespace System {
template <typename T> struct Span_1;
}
namespace Unity::Mathematics {
struct float4x4;
}
namespace UnityEngine::Rendering::UnifiedRayTracing {
class AccelStructInstances_InstanceEntry;
}
namespace UnityEngine::Rendering::UnifiedRayTracing {
struct AccelStructInstances_RTInstance;
}
namespace UnityEngine::Rendering::UnifiedRayTracing {
class AccelStructInstances___c;
}
namespace UnityEngine::Rendering::UnifiedRayTracing {
struct BlockAllocator_Allocation;
}
namespace UnityEngine::Rendering::UnifiedRayTracing {
struct GeometryPoolHandle;
}
namespace UnityEngine::Rendering::UnifiedRayTracing {
struct GeometryPool_MeshChunk;
}
namespace UnityEngine::Rendering::UnifiedRayTracing {
class GeometryPool;
}
namespace UnityEngine::Rendering::UnifiedRayTracing {
class IRayTracingShader;
}
namespace UnityEngine::Rendering::UnifiedRayTracing {
struct MeshInstanceDesc;
}
namespace UnityEngine::Rendering::UnifiedRayTracing {
template <typename Tstruct> class PersistentGpuArray_1;
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
class AccelStructInstances;
}
namespace UnityEngine::Rendering::UnifiedRayTracing {
class AccelStructInstances_InstanceEntry;
}
namespace UnityEngine::Rendering::UnifiedRayTracing {
class AccelStructInstances___c;
}
namespace UnityEngine::Rendering::UnifiedRayTracing {
struct AccelStructInstances_RTInstance;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances*);
MARK_REF_T(::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances_InstanceEntry*);
MARK_REF_T(::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances___c*);
MARK_VAL_T(::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances_RTInstance);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances*, "UnityEngine.Rendering.UnifiedRayTracing", "AccelStructInstances");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances_InstanceEntry*, "UnityEngine.Rendering.UnifiedRayTracing", "AccelStructInstances/InstanceEntry");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances___c*, "UnityEngine.Rendering.UnifiedRayTracing", "AccelStructInstances/<>c");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances_RTInstance, "UnityEngine.Rendering.UnifiedRayTracing", "AccelStructInstances/RTInstance");
// Dependencies Unity.Mathematics.float4x4
namespace UnityEngine::Rendering::UnifiedRayTracing {
// Is value type: true
// CS Name: UnityEngine.Rendering.UnifiedRayTracing.AccelStructInstances/RTInstance
struct CORDL_TYPE AccelStructInstances_RTInstance {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr AccelStructInstances_RTInstance();

  // Ctor Parameters [CppParam { name: "localToWorld", ty: "::Unity::Mathematics::float4x4", modifiers: "", def_value: None, comment: None }, CppParam { name: "previousLocalToWorld", ty:
  // "::Unity::Mathematics::float4x4", modifiers: "", def_value: None, comment: None }, CppParam { name: "localToWorldNormals", ty: "::Unity::Mathematics::float4x4", modifiers: "", def_value: None,
  // comment: None }, CppParam { name: "renderingLayerMask", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "instanceMask", ty: "uint32_t", modifiers: "", def_value:
  // None, comment: None }, CppParam { name: "userMaterialID", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "geometryIndex", ty: "uint32_t", modifiers: "",
  // def_value: None, comment: None }]
  constexpr AccelStructInstances_RTInstance(::Unity::Mathematics::float4x4 localToWorld, ::Unity::Mathematics::float4x4 previousLocalToWorld, ::Unity::Mathematics::float4x4 localToWorldNormals,
                                            uint32_t renderingLayerMask, uint32_t instanceMask, uint32_t userMaterialID, uint32_t geometryIndex) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20452 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xd0 };

  /// @brief Field localToWorld, offset: 0x0, size: 0x40, def value: None
  ::Unity::Mathematics::float4x4 localToWorld;

  /// @brief Field previousLocalToWorld, offset: 0x40, size: 0x40, def value: None
  ::Unity::Mathematics::float4x4 previousLocalToWorld;

  /// @brief Field localToWorldNormals, offset: 0x80, size: 0x40, def value: None
  ::Unity::Mathematics::float4x4 localToWorldNormals;

  /// @brief Field renderingLayerMask, offset: 0xc0, size: 0x4, def value: None
  uint32_t renderingLayerMask;

  /// @brief Field instanceMask, offset: 0xc4, size: 0x4, def value: None
  uint32_t instanceMask;

  /// @brief Field userMaterialID, offset: 0xc8, size: 0x4, def value: None
  uint32_t userMaterialID;

  /// @brief Field geometryIndex, offset: 0xcc, size: 0x4, def value: None
  uint32_t geometryIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances_RTInstance, localToWorld) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances_RTInstance, previousLocalToWorld) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances_RTInstance, localToWorldNormals) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances_RTInstance, renderingLayerMask) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances_RTInstance, instanceMask) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances_RTInstance, userMaterialID) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances_RTInstance, geometryIndex) == 0xcc, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances_RTInstance) == 0xd0, "Size mismatch!");

} // namespace UnityEngine::Rendering::UnifiedRayTracing
// Dependencies System.Object, UnityEngine.Rendering.UnifiedRayTracing.BlockAllocator::Allocation, UnityEngine.Rendering.UnifiedRayTracing.GeometryPoolHandle
namespace UnityEngine::Rendering::UnifiedRayTracing {
// Is value type: false
// CS Name: UnityEngine.Rendering.UnifiedRayTracing.AccelStructInstances/InstanceEntry
class CORDL_TYPE AccelStructInstances_InstanceEntry : public ::System::Object {
public:
  // Declarations
  /// @brief Field geometryPoolHandle, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_geometryPoolHandle, put = __cordl_internal_set_geometryPoolHandle)) ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolHandle geometryPoolHandle;

  /// @brief Field indexInInstanceBuffer, offset 0x14, size 0xc
  __declspec(property(get = __cordl_internal_get_indexInInstanceBuffer,
                      put = __cordl_internal_set_indexInInstanceBuffer)) ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation indexInInstanceBuffer;

  /// @brief Field indexOffset, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_indexOffset, put = __cordl_internal_set_indexOffset)) uint32_t indexOffset;

  /// @brief Field instanceMask, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_instanceMask, put = __cordl_internal_set_instanceMask)) uint32_t instanceMask;

  /// @brief Field vertexOffset, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_vertexOffset, put = __cordl_internal_set_vertexOffset)) uint32_t vertexOffset;

  static inline ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances_InstanceEntry* New_ctor();

  constexpr ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolHandle const& __cordl_internal_get_geometryPoolHandle() const;

  constexpr ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolHandle& __cordl_internal_get_geometryPoolHandle();

  constexpr ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation const& __cordl_internal_get_indexInInstanceBuffer() const;

  constexpr ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation& __cordl_internal_get_indexInInstanceBuffer();

  constexpr uint32_t const& __cordl_internal_get_indexOffset() const;

  constexpr uint32_t& __cordl_internal_get_indexOffset();

  constexpr uint32_t const& __cordl_internal_get_instanceMask() const;

  constexpr uint32_t& __cordl_internal_get_instanceMask();

  constexpr uint32_t const& __cordl_internal_get_vertexOffset() const;

  constexpr uint32_t& __cordl_internal_get_vertexOffset();

  constexpr void __cordl_internal_set_geometryPoolHandle(::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolHandle value);

  constexpr void __cordl_internal_set_indexInInstanceBuffer(::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation value);

  constexpr void __cordl_internal_set_indexOffset(uint32_t value);

  constexpr void __cordl_internal_set_instanceMask(uint32_t value);

  constexpr void __cordl_internal_set_vertexOffset(uint32_t value);

  /// @brief Method .ctor, addr 0x6e029c8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AccelStructInstances_InstanceEntry();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AccelStructInstances_InstanceEntry", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AccelStructInstances_InstanceEntry(AccelStructInstances_InstanceEntry&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AccelStructInstances_InstanceEntry", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AccelStructInstances_InstanceEntry(AccelStructInstances_InstanceEntry const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20453 };

  /// @brief Field geometryPoolHandle, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolHandle ___geometryPoolHandle;

  /// @brief Field indexInInstanceBuffer, offset: 0x14, size: 0xc, def value: None
  ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation ___indexInInstanceBuffer;

  /// @brief Field instanceMask, offset: 0x20, size: 0x4, def value: None
  uint32_t ___instanceMask;

  /// @brief Field vertexOffset, offset: 0x24, size: 0x4, def value: None
  uint32_t ___vertexOffset;

  /// @brief Field indexOffset, offset: 0x28, size: 0x4, def value: None
  uint32_t ___indexOffset;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances_InstanceEntry, ___geometryPoolHandle) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances_InstanceEntry, ___indexInInstanceBuffer) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances_InstanceEntry, ___instanceMask) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances_InstanceEntry, ___vertexOffset) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances_InstanceEntry, ___indexOffset) == 0x28, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances_InstanceEntry) == 0x30, "Size mismatch!");

} // namespace UnityEngine::Rendering::UnifiedRayTracing
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::Rendering::UnifiedRayTracing {
// Is value type: false
// CS Name: UnityEngine.Rendering.UnifiedRayTracing.AccelStructInstances/<>c
class CORDL_TYPE AccelStructInstances___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances___c* __9;

  /// @brief Field <>9__22_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__22_0, put = setStaticF___9__22_0)) ::System::Func_2<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances_RTInstance,
                                                                                                ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances_RTInstance>* __9__22_0;

  static inline ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances___c* New_ctor();

  /// @brief Method <NextFrame>b__22_0, addr 0x6e02dfc, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances_RTInstance _NextFrame_b__22_0(::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances_RTInstance instance);

  /// @brief Method .ctor, addr 0x6e02df8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances___c* getStaticF___9();

  static inline ::System::Func_2<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances_RTInstance, ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances_RTInstance>*
  getStaticF___9__22_0();

  static inline void setStaticF___9(::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances___c* value);

  static inline void setStaticF___9__22_0(
      ::System::Func_2<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances_RTInstance, ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances_RTInstance>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AccelStructInstances___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AccelStructInstances___c", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AccelStructInstances___c(AccelStructInstances___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AccelStructInstances___c", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AccelStructInstances___c(AccelStructInstances___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20454 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances___c) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Rendering::UnifiedRayTracing
// Dependencies System.Object
namespace UnityEngine::Rendering::UnifiedRayTracing {
// Is value type: false
// CS Name: UnityEngine.Rendering.UnifiedRayTracing.AccelStructInstances
class CORDL_TYPE AccelStructInstances : public ::System::Object {
public:
  // Declarations
  using InstanceEntry = ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances_InstanceEntry;

  using RTInstance = ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances_RTInstance;

  using __c = ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances___c;

  __declspec(property(get = get_geometryPool)) ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool* geometryPool;

  __declspec(property(get = get_indexBuffer)) ::UnityEngine::GraphicsBuffer* indexBuffer;

  __declspec(property(
      get = get_instanceBuffer)) ::UnityEngine::Rendering::UnifiedRayTracing::PersistentGpuArray_1<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances_RTInstance>* instanceBuffer;

  __declspec(property(get = get_instanceListValid)) bool instanceListValid;

  __declspec(property(get = get_instances)) ::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances_InstanceEntry*>* instances;

  /// @brief Field m_FrameTimestamp, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_m_FrameTimestamp, put = __cordl_internal_set_m_FrameTimestamp)) uint32_t m_FrameTimestamp;

  /// @brief Field m_GeometryPool, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_GeometryPool, put = __cordl_internal_set_m_GeometryPool)) ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool* m_GeometryPool;

  /// @brief Field m_InstanceBuffer, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_InstanceBuffer, put = __cordl_internal_set_m_InstanceBuffer)) ::UnityEngine::Rendering::UnifiedRayTracing::PersistentGpuArray_1<
      ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances_RTInstance>* m_InstanceBuffer;

  /// @brief Field m_Instances, offset 0x20, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_Instances,
      put = __cordl_internal_set_m_Instances)) ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances_InstanceEntry*>* m_Instances;

  /// @brief Field m_TransformTouchedLastTimestamp, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_TransformTouchedLastTimestamp, put = __cordl_internal_set_m_TransformTouchedLastTimestamp)) uint32_t m_TransformTouchedLastTimestamp;

  __declspec(property(get = get_vertexBuffer)) ::UnityEngine::GraphicsBuffer* vertexBuffer;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method AddInstance, addr 0x6e00690, size 0xac, virtual false, abstract: false, final false
  inline int32_t AddInstance(::UnityEngine::Rendering::UnifiedRayTracing::MeshInstanceDesc meshInstance, uint32_t materialID, uint32_t renderingLayerMask);

  /// @brief Method AddInstance, addr 0x6e023d0, size 0x340, virtual false, abstract: false, final false
  inline void AddInstance(::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation slotAllocation,
                          /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::UnifiedRayTracing::MeshInstanceDesc const> meshInstance, uint32_t materialID, uint32_t renderingLayerMask);

  /// @brief Method AddInstances, addr 0x6e02710, size 0x12c, virtual false, abstract: false, final false
  inline int32_t AddInstances(::System::Span_1<::UnityEngine::Rendering::UnifiedRayTracing::MeshInstanceDesc> meshInstances, ::System::Span_1<uint32_t> materialIDs,
                              ::System::Span_1<uint32_t> renderingLayerMask);

  /// @brief Method Bind, addr 0x6dffa88, size 0x390, virtual false, abstract: false, final false
  inline void Bind(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader* shader);

  /// @brief Method ClearInstances, addr 0x6e02a60, size 0x19c, virtual false, abstract: false, final false
  inline void ClearInstances();

  /// @brief Method Dispose, addr 0x6dffef8, size 0x180, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method GetEntryGeomAllocation, addr 0x6e029d4, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_MeshChunk GetEntryGeomAllocation(::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolHandle handle, int32_t submeshIndex);

  /// @brief Method GetInstanceCount, addr 0x6e02d4c, size 0x58, virtual false, abstract: false, final false
  inline int32_t GetInstanceCount();

  static inline ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances* New_ctor(::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool* geometryPool);

  /// @brief Method NextFrame, addr 0x6e01c48, size 0x12c, virtual false, abstract: false, final false
  inline void NextFrame();

  /// @brief Method NormalMatrix, addr 0x6e02860, size 0x9c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4x4 NormalMatrix(::Unity::Mathematics::float4x4 m);

  /// @brief Method RemoveInstance, addr 0x6e01094, size 0x108, virtual false, abstract: false, final false
  inline void RemoveInstance(int32_t instanceHandle);

  /// @brief Method UpdateInstanceMask, addr 0x6e0188c, size 0x10c, virtual false, abstract: false, final false
  inline void UpdateInstanceMask(int32_t instanceHandle, uint32_t mask);

  /// @brief Method UpdateInstanceMaterialID, addr 0x6e01614, size 0x104, virtual false, abstract: false, final false
  inline void UpdateInstanceMaterialID(int32_t instanceHandle, uint32_t materialID);

  /// @brief Method UpdateInstanceTransform, addr 0x6e01334, size 0x200, virtual false, abstract: false, final false
  inline void UpdateInstanceTransform(int32_t instanceHandle, ::UnityEngine::Matrix4x4 localToWorldMatrix);

  /// @brief Method UpdateRenderingLayerMask, addr 0x6e02bfc, size 0x138, virtual false, abstract: false, final false
  inline void UpdateRenderingLayerMask(int32_t instanceHandle, uint32_t renderingLayerMask);

  constexpr uint32_t const& __cordl_internal_get_m_FrameTimestamp() const;

  constexpr uint32_t& __cordl_internal_get_m_FrameTimestamp();

  constexpr ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool* const& __cordl_internal_get_m_GeometryPool() const;

  constexpr ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool*& __cordl_internal_get_m_GeometryPool();

  constexpr ::UnityEngine::Rendering::UnifiedRayTracing::PersistentGpuArray_1<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances_RTInstance>* const&
  __cordl_internal_get_m_InstanceBuffer() const;

  constexpr ::UnityEngine::Rendering::UnifiedRayTracing::PersistentGpuArray_1<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances_RTInstance>*& __cordl_internal_get_m_InstanceBuffer();

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances_InstanceEntry*>* const& __cordl_internal_get_m_Instances() const;

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances_InstanceEntry*>*& __cordl_internal_get_m_Instances();

  constexpr uint32_t const& __cordl_internal_get_m_TransformTouchedLastTimestamp() const;

  constexpr uint32_t& __cordl_internal_get_m_TransformTouchedLastTimestamp();

  constexpr void __cordl_internal_set_m_FrameTimestamp(uint32_t value);

  constexpr void __cordl_internal_set_m_GeometryPool(::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool* value);

  constexpr void
  __cordl_internal_set_m_InstanceBuffer(::UnityEngine::Rendering::UnifiedRayTracing::PersistentGpuArray_1<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances_RTInstance>* value);

  constexpr void __cordl_internal_set_m_Instances(::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances_InstanceEntry*>* value);

  constexpr void __cordl_internal_set_m_TransformTouchedLastTimestamp(uint32_t value);

  /// @brief Method .ctor, addr 0x6dff424, size 0xf4, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool* geometryPool);

  /// @brief Method get_geometryPool, addr 0x6e023c8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool* get_geometryPool();

  /// @brief Method get_indexBuffer, addr 0x6e02a30, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBuffer* get_indexBuffer();

  /// @brief Method get_instanceBuffer, addr 0x6e0236c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::UnifiedRayTracing::PersistentGpuArray_1<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances_RTInstance>* get_instanceBuffer();

  /// @brief Method get_instanceListValid, addr 0x6e02d34, size 0x10, virtual false, abstract: false, final false
  inline bool get_instanceListValid();

  /// @brief Method get_instances, addr 0x6e02374, size 0x54, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances_InstanceEntry*>* get_instances();

  /// @brief Method get_vertexBuffer, addr 0x6e02a48, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBuffer* get_vertexBuffer();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AccelStructInstances();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AccelStructInstances", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AccelStructInstances(AccelStructInstances&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AccelStructInstances", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AccelStructInstances(AccelStructInstances const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20455 };

  /// @brief Field m_GeometryPool, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool* ___m_GeometryPool;

  /// @brief Field m_InstanceBuffer, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Rendering::UnifiedRayTracing::PersistentGpuArray_1<::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances_RTInstance>* ___m_InstanceBuffer;

  /// @brief Field m_Instances, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances_InstanceEntry*>* ___m_Instances;

  /// @brief Field m_FrameTimestamp, offset: 0x28, size: 0x4, def value: None
  uint32_t ___m_FrameTimestamp;

  /// @brief Field m_TransformTouchedLastTimestamp, offset: 0x2c, size: 0x4, def value: None
  uint32_t ___m_TransformTouchedLastTimestamp;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances, ___m_GeometryPool) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances, ___m_InstanceBuffer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances, ___m_Instances) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances, ___m_FrameTimestamp) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances, ___m_TransformTouchedLastTimestamp) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::UnifiedRayTracing::AccelStructInstances) == 0x30, "Size mismatch!");

} // namespace UnityEngine::Rendering::UnifiedRayTracing

#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/CPUInstanceData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__AABB_def.hpp"
#include "UnityEngine/Rendering/zzzz__EditorInstanceDataArrays_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUDrivenRendererMeshLodData_def.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__ParallelBitArray_def.hpp"
#include "UnityEngine/Rendering/zzzz__SharedInstanceHandle_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CPUInstanceData)
namespace System {
class IDisposable;
}
namespace UnityEngine::Rendering {
struct AABB;
}
namespace UnityEngine::Rendering {
struct CPUInstanceData_ReadOnly;
}
namespace UnityEngine::Rendering {
struct GPUDrivenRendererMeshLodData;
}
namespace UnityEngine::Rendering {
struct InstanceHandle;
}
namespace UnityEngine::Rendering {
struct SharedInstanceHandle;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct CPUInstanceData;
}
namespace UnityEngine::Rendering {
struct CPUInstanceData_ReadOnly;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::CPUInstanceData);
MARK_VAL_T(::UnityEngine::Rendering::CPUInstanceData_ReadOnly);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::CPUInstanceData, "UnityEngine.Rendering", "CPUInstanceData");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::CPUInstanceData_ReadOnly, "UnityEngine.Rendering", "CPUInstanceData/ReadOnly");
// [IsReadOnly]
// Dependencies Unity.Collections.NativeArray`1::ReadOnly<T>, UnityEngine.Rendering.AABB, UnityEngine.Rendering.EditorInstanceDataArrays::ReadOnly, UnityEngine.Rendering.GPUDrivenRendererMeshLodData,
// UnityEngine.Rendering.InstanceHandle, UnityEngine.Rendering.ParallelBitArray, UnityEngine.Rendering.SharedInstanceHandle
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.CPUInstanceData/ReadOnly
struct CORDL_TYPE CPUInstanceData_ReadOnly {
public:
  // Declarations
  __declspec(property(get = get_handlesLength)) int32_t handlesLength;

  __declspec(property(get = get_instancesLength)) int32_t instancesLength;

  /// @brief Method IndexToInstance, addr 0x6c5973c, size 0x70, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::InstanceHandle IndexToInstance(int32_t index);

  /// @brief Method InstanceToIndex, addr 0x6c596a0, size 0x9c, virtual false, abstract: false, final false
  inline int32_t InstanceToIndex(::UnityEngine::Rendering::InstanceHandle instance);

  /// @brief Method IsValidIndex, addr 0x6c59920, size 0x104, virtual false, abstract: false, final false
  inline bool IsValidIndex(int32_t index);

  /// @brief Method IsValidInstance, addr 0x6c597ac, size 0x174, virtual false, abstract: false, final false
  inline bool IsValidInstance(::UnityEngine::Rendering::InstanceHandle instance);

  /// @brief Method .ctor, addr 0x6c59258, size 0x3bc, virtual false, abstract: false, final false
  inline void _ctor(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::CPUInstanceData const> instanceData);

  /// @brief Method get_handlesLength, addr 0x6c59614, size 0x44, virtual false, abstract: false, final false
  inline int32_t get_handlesLength();

  /// @brief Method get_instancesLength, addr 0x6c59658, size 0x44, virtual false, abstract: false, final false
  inline int32_t get_instancesLength();

  // Ctor Parameters []
  // @brief default ctor
  constexpr CPUInstanceData_ReadOnly();

  // Ctor Parameters [CppParam { name: "instanceIndices", ty: "::Unity::Collections::NativeArray_1_ReadOnly<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "instances",
  // ty: "::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::Rendering::InstanceHandle>", modifiers: "", def_value: None, comment: None }, CppParam { name: "sharedInstances", ty:
  // "::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::Rendering::SharedInstanceHandle>", modifiers: "", def_value: None, comment: None }, CppParam { name: "localToWorldIsFlippedBits", ty:
  // "::UnityEngine::Rendering::ParallelBitArray", modifiers: "", def_value: None, comment: None }, CppParam { name: "worldAABBs", ty:
  // "::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::Rendering::AABB>", modifiers: "", def_value: None, comment: None }, CppParam { name: "tetrahedronCacheIndices", ty:
  // "::Unity::Collections::NativeArray_1_ReadOnly<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "movedInCurrentFrameBits", ty:
  // "::UnityEngine::Rendering::ParallelBitArray", modifiers: "", def_value: None, comment: None }, CppParam { name: "movedInPreviousFrameBits", ty: "::UnityEngine::Rendering::ParallelBitArray",
  // modifiers: "", def_value: None, comment: None }, CppParam { name: "visibleInPreviousFrameBits", ty: "::UnityEngine::Rendering::ParallelBitArray", modifiers: "", def_value: None, comment: None },
  // CppParam { name: "editorData", ty: "::UnityEngine::Rendering::EditorInstanceDataArrays_ReadOnly", modifiers: "", def_value: None, comment: None }, CppParam { name: "meshLodData", ty:
  // "::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::Rendering::GPUDrivenRendererMeshLodData>", modifiers: "", def_value: None, comment: None }]
  constexpr CPUInstanceData_ReadOnly(::Unity::Collections::NativeArray_1_ReadOnly<int32_t> instanceIndices,
                                     ::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::Rendering::InstanceHandle> instances,
                                     ::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::Rendering::SharedInstanceHandle> sharedInstances,
                                     ::UnityEngine::Rendering::ParallelBitArray localToWorldIsFlippedBits, ::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::Rendering::AABB> worldAABBs,
                                     ::Unity::Collections::NativeArray_1_ReadOnly<int32_t> tetrahedronCacheIndices, ::UnityEngine::Rendering::ParallelBitArray movedInCurrentFrameBits,
                                     ::UnityEngine::Rendering::ParallelBitArray movedInPreviousFrameBits, ::UnityEngine::Rendering::ParallelBitArray visibleInPreviousFrameBits,
                                     ::UnityEngine::Rendering::EditorInstanceDataArrays_ReadOnly editorData,
                                     ::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::Rendering::GPUDrivenRendererMeshLodData> meshLodData) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18218 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xe8 };

  /// @brief Field instanceIndices, offset: 0x0, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1_ReadOnly<int32_t> instanceIndices;

  /// @brief Field instances, offset: 0x10, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::Rendering::InstanceHandle> instances;

  /// @brief Field sharedInstances, offset: 0x20, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::Rendering::SharedInstanceHandle> sharedInstances;

  /// @brief Field localToWorldIsFlippedBits, offset: 0x30, size: 0x20, def value: None
  ::UnityEngine::Rendering::ParallelBitArray localToWorldIsFlippedBits;

  /// @brief Field worldAABBs, offset: 0x50, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::Rendering::AABB> worldAABBs;

  /// @brief Field tetrahedronCacheIndices, offset: 0x60, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1_ReadOnly<int32_t> tetrahedronCacheIndices;

  /// @brief Field movedInCurrentFrameBits, offset: 0x70, size: 0x20, def value: None
  ::UnityEngine::Rendering::ParallelBitArray movedInCurrentFrameBits;

  /// @brief Field movedInPreviousFrameBits, offset: 0x90, size: 0x20, def value: None
  ::UnityEngine::Rendering::ParallelBitArray movedInPreviousFrameBits;

  /// @brief Field visibleInPreviousFrameBits, offset: 0xb0, size: 0x20, def value: None
  ::UnityEngine::Rendering::ParallelBitArray visibleInPreviousFrameBits;

  /// @brief Field editorData, offset: 0xd0, size: 0x1, def value: None
  ::UnityEngine::Rendering::EditorInstanceDataArrays_ReadOnly editorData;

  /// @brief Field meshLodData, offset: 0xd8, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::Rendering::GPUDrivenRendererMeshLodData> meshLodData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::CPUInstanceData_ReadOnly, instanceIndices) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CPUInstanceData_ReadOnly, instances) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CPUInstanceData_ReadOnly, sharedInstances) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CPUInstanceData_ReadOnly, localToWorldIsFlippedBits) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CPUInstanceData_ReadOnly, worldAABBs) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CPUInstanceData_ReadOnly, tetrahedronCacheIndices) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CPUInstanceData_ReadOnly, movedInCurrentFrameBits) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CPUInstanceData_ReadOnly, movedInPreviousFrameBits) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CPUInstanceData_ReadOnly, visibleInPreviousFrameBits) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CPUInstanceData_ReadOnly, editorData) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CPUInstanceData_ReadOnly, meshLodData) == 0xd8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::CPUInstanceData_ReadOnly) == 0xe8, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies Unity.Collections.NativeArray`1<T>, Unity.Collections.NativeList`1<T>, UnityEngine.Rendering.AABB, UnityEngine.Rendering.EditorInstanceDataArrays,
// UnityEngine.Rendering.GPUDrivenRendererMeshLodData, UnityEngine.Rendering.InstanceHandle, UnityEngine.Rendering.ParallelBitArray, UnityEngine.Rendering.SharedInstanceHandle
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.CPUInstanceData
struct CORDL_TYPE CPUInstanceData {
public:
  // Declarations
  using ReadOnly = ::UnityEngine::Rendering::CPUInstanceData_ReadOnly;

  __declspec(property(get = get_handlesLength)) int32_t handlesLength;

  __declspec(property(get = get_instancesCapacity, put = set_instancesCapacity)) int32_t instancesCapacity;

  __declspec(property(get = get_instancesLength, put = set_instancesLength)) int32_t instancesLength;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Add, addr 0x6c58b94, size 0x54, virtual false, abstract: false, final false
  inline void Add(::UnityEngine::Rendering::InstanceHandle instance);

  /// @brief Method AddNoGrow, addr 0x6c58abc, size 0x2c, virtual false, abstract: false, final false
  inline void AddNoGrow(::UnityEngine::Rendering::InstanceHandle instance);

  /// @brief Method AddUnsafe, addr 0x6c584a0, size 0x1f0, virtual false, abstract: false, final false
  inline void AddUnsafe(::UnityEngine::Rendering::InstanceHandle instance);

  /// @brief Method AsReadOnly, addr 0x6c59224, size 0x34, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::CPUInstanceData_ReadOnly AsReadOnly();

  /// @brief Method Dispose, addr 0x6c5810c, size 0x13c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method EnsureFreeInstances, addr 0x6c58a94, size 0x28, virtual false, abstract: false, final false
  inline void EnsureFreeInstances(int32_t instancesCount);

  /// @brief Method GetFreeInstancesCount, addr 0x6c58a84, size 0x10, virtual false, abstract: false, final false
  inline int32_t GetFreeInstancesCount();

  /// @brief Method Get_LocalToWorldIsFlipped, addr 0x6c58efc, size 0x24, virtual false, abstract: false, final false
  inline bool Get_LocalToWorldIsFlipped(::UnityEngine::Rendering::InstanceHandle instance);

  /// @brief Method Get_MeshLodData, addr 0x6c5906c, size 0x20, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::GPUDrivenRendererMeshLodData Get_MeshLodData(::UnityEngine::Rendering::InstanceHandle instance);

  /// @brief Method Get_MovedInCurrentFrame, addr 0x6c59000, size 0x24, virtual false, abstract: false, final false
  inline bool Get_MovedInCurrentFrame(::UnityEngine::Rendering::InstanceHandle instance);

  /// @brief Method Get_MovedInPreviousFrame, addr 0x6c59024, size 0x24, virtual false, abstract: false, final false
  inline bool Get_MovedInPreviousFrame(::UnityEngine::Rendering::InstanceHandle instance);

  /// @brief Method Get_SharedInstance, addr 0x6c58edc, size 0x20, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::SharedInstanceHandle Get_SharedInstance(::UnityEngine::Rendering::InstanceHandle instance);

  /// @brief Method Get_TetrahedronCacheIndex, addr 0x6c58f64, size 0x20, virtual false, abstract: false, final false
  inline int32_t Get_TetrahedronCacheIndex(::UnityEngine::Rendering::InstanceHandle instance);

  /// @brief Method Get_VisibleInPreviousFrame, addr 0x6c59048, size 0x24, virtual false, abstract: false, final false
  inline bool Get_VisibleInPreviousFrame(::UnityEngine::Rendering::InstanceHandle instance);

  /// @brief Method Get_WorldAABB, addr 0x6c58f20, size 0x44, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::AABB Get_WorldAABB(::UnityEngine::Rendering::InstanceHandle instance);

  /// @brief Method Get_WorldBounds, addr 0x6c58f84, size 0x7c, virtual false, abstract: false, final false
  inline ::by_ref<::UnityEngine::Rendering::AABB> Get_WorldBounds(::UnityEngine::Rendering::InstanceHandle instance);

  /// @brief Method Grow, addr 0x6c5824c, size 0x250, virtual false, abstract: false, final false
  inline void Grow(int32_t newCapacity);

  /// @brief Method IndexToInstance, addr 0x6c58730, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::InstanceHandle IndexToInstance(int32_t index);

  /// @brief Method Initialize, addr 0x6c57d74, size 0x394, virtual false, abstract: false, final false
  inline void Initialize(int32_t initCapacity);

  /// @brief Method InstanceToIndex, addr 0x6c58690, size 0xa0, virtual false, abstract: false, final false
  inline int32_t InstanceToIndex(::UnityEngine::Rendering::InstanceHandle instance);

  /// @brief Method IsFreeInstanceHandle, addr 0x6c58894, size 0x128, virtual false, abstract: false, final false
  inline bool IsFreeInstanceHandle(::UnityEngine::Rendering::InstanceHandle instance);

  /// @brief Method IsValidIndex, addr 0x6c589bc, size 0xc8, virtual false, abstract: false, final false
  inline bool IsValidIndex(int32_t index);

  /// @brief Method IsValidInstance, addr 0x6c5873c, size 0x158, virtual false, abstract: false, final false
  inline bool IsValidInstance(::UnityEngine::Rendering::InstanceHandle instance);

  /// @brief Method Remove, addr 0x6c58be8, size 0x1fc, virtual false, abstract: false, final false
  inline void Remove(::UnityEngine::Rendering::InstanceHandle instance);

  /// @brief Method Set, addr 0x6c58de8, size 0xf0, virtual false, abstract: false, final false
  inline void Set(::UnityEngine::Rendering::InstanceHandle instance, ::UnityEngine::Rendering::SharedInstanceHandle sharedInstance, bool localToWorldIsFlipped,
                  /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::AABB const> worldAABB, int32_t tetrahedronCacheIndex, bool movedInCurrentFrame, bool movedInPreviousFrame,
                  bool visibleInPreviousFrame, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::GPUDrivenRendererMeshLodData const> meshLod);

  /// @brief Method SetDefault, addr 0x6c58ae8, size 0xac, virtual false, abstract: false, final false
  inline void SetDefault(::UnityEngine::Rendering::InstanceHandle instance);

  /// @brief Method Set_LocalToWorldIsFlipped, addr 0x6c590b8, size 0x34, virtual false, abstract: false, final false
  inline void Set_LocalToWorldIsFlipped(::UnityEngine::Rendering::InstanceHandle instance, bool isFlipped);

  /// @brief Method Set_MeshLodData, addr 0x6c591f8, size 0x2c, virtual false, abstract: false, final false
  inline void Set_MeshLodData(::UnityEngine::Rendering::InstanceHandle instance, ::UnityEngine::Rendering::GPUDrivenRendererMeshLodData meshLod);

  /// @brief Method Set_MovedInCurrentFrame, addr 0x6c5915c, size 0x34, virtual false, abstract: false, final false
  inline void Set_MovedInCurrentFrame(::UnityEngine::Rendering::InstanceHandle instance, bool movedInCurrentFrame);

  /// @brief Method Set_MovedInPreviousFrame, addr 0x6c59190, size 0x34, virtual false, abstract: false, final false
  inline void Set_MovedInPreviousFrame(::UnityEngine::Rendering::InstanceHandle instance, bool movedInPreviousFrame);

  /// @brief Method Set_SharedInstance, addr 0x6c5908c, size 0x2c, virtual false, abstract: false, final false
  inline void Set_SharedInstance(::UnityEngine::Rendering::InstanceHandle instance, ::UnityEngine::Rendering::SharedInstanceHandle sharedInstance);

  /// @brief Method Set_TetrahedronCacheIndex, addr 0x6c59130, size 0x2c, virtual false, abstract: false, final false
  inline void Set_TetrahedronCacheIndex(::UnityEngine::Rendering::InstanceHandle instance, int32_t tetrahedronCacheIndex);

  /// @brief Method Set_VisibleInPreviousFrame, addr 0x6c591c4, size 0x34, virtual false, abstract: false, final false
  inline void Set_VisibleInPreviousFrame(::UnityEngine::Rendering::InstanceHandle instance, bool visibleInPreviousFrame);

  /// @brief Method Set_WorldAABB, addr 0x6c590ec, size 0x44, virtual false, abstract: false, final false
  inline void Set_WorldAABB(::UnityEngine::Rendering::InstanceHandle instance, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::AABB const> worldBounds);

  /// @brief Method get_handlesLength, addr 0x6c57d10, size 0x64, virtual false, abstract: false, final false
  inline int32_t get_handlesLength();

  /// @brief Method get_instancesCapacity, addr 0x6c57cf8, size 0xc, virtual false, abstract: false, final false
  inline int32_t get_instancesCapacity();

  /// @brief Method get_instancesLength, addr 0x6c57ce0, size 0xc, virtual false, abstract: false, final false
  inline int32_t get_instancesLength();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  /// @brief Method set_instancesCapacity, addr 0x6c57d04, size 0xc, virtual false, abstract: false, final false
  inline void set_instancesCapacity(int32_t value);

  /// @brief Method set_instancesLength, addr 0x6c57cec, size 0xc, virtual false, abstract: false, final false
  inline void set_instancesLength(int32_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr CPUInstanceData();

  // Ctor Parameters [CppParam { name: "m_StructData", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_InstanceIndices", ty:
  // "::Unity::Collections::NativeList_1<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "instances", ty:
  // "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>", modifiers: "", def_value: None, comment: None }, CppParam { name: "sharedInstances", ty:
  // "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::SharedInstanceHandle>", modifiers: "", def_value: None, comment: None }, CppParam { name: "localToWorldIsFlippedBits", ty:
  // "::UnityEngine::Rendering::ParallelBitArray", modifiers: "", def_value: None, comment: None }, CppParam { name: "worldAABBs", ty:
  // "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::AABB>", modifiers: "", def_value: None, comment: None }, CppParam { name: "tetrahedronCacheIndices", ty:
  // "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "movedInCurrentFrameBits", ty: "::UnityEngine::Rendering::ParallelBitArray",
  // modifiers: "", def_value: None, comment: None }, CppParam { name: "movedInPreviousFrameBits", ty: "::UnityEngine::Rendering::ParallelBitArray", modifiers: "", def_value: None, comment: None },
  // CppParam { name: "visibleInPreviousFrameBits", ty: "::UnityEngine::Rendering::ParallelBitArray", modifiers: "", def_value: None, comment: None }, CppParam { name: "editorData", ty:
  // "::UnityEngine::Rendering::EditorInstanceDataArrays", modifiers: "", def_value: None, comment: None }, CppParam { name: "meshLodData", ty:
  // "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenRendererMeshLodData>", modifiers: "", def_value: None, comment: None }]
  constexpr CPUInstanceData(::Unity::Collections::NativeArray_1<int32_t> m_StructData, ::Unity::Collections::NativeList_1<int32_t> m_InstanceIndices,
                            ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> instances,
                            ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::SharedInstanceHandle> sharedInstances, ::UnityEngine::Rendering::ParallelBitArray localToWorldIsFlippedBits,
                            ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::AABB> worldAABBs, ::Unity::Collections::NativeArray_1<int32_t> tetrahedronCacheIndices,
                            ::UnityEngine::Rendering::ParallelBitArray movedInCurrentFrameBits, ::UnityEngine::Rendering::ParallelBitArray movedInPreviousFrameBits,
                            ::UnityEngine::Rendering::ParallelBitArray visibleInPreviousFrameBits, ::UnityEngine::Rendering::EditorInstanceDataArrays editorData,
                            ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenRendererMeshLodData> meshLodData) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18219 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xf0 };

  /// @brief Field k_InvalidIndex offset 0xffffffff size 0x4
  static constexpr int32_t k_InvalidIndex{ static_cast<int32_t>(0xffffffff) };

  /// @brief Field m_StructData, offset: 0x0, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> m_StructData;

  /// @brief Field m_InstanceIndices, offset: 0x10, size: 0x8, def value: None
  ::Unity::Collections::NativeList_1<int32_t> m_InstanceIndices;

  /// @brief Field instances, offset: 0x18, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> instances;

  /// @brief Field sharedInstances, offset: 0x28, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::SharedInstanceHandle> sharedInstances;

  /// @brief Field localToWorldIsFlippedBits, offset: 0x38, size: 0x20, def value: None
  ::UnityEngine::Rendering::ParallelBitArray localToWorldIsFlippedBits;

  /// @brief Field worldAABBs, offset: 0x58, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::AABB> worldAABBs;

  /// @brief Field tetrahedronCacheIndices, offset: 0x68, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> tetrahedronCacheIndices;

  /// @brief Field movedInCurrentFrameBits, offset: 0x78, size: 0x20, def value: None
  ::UnityEngine::Rendering::ParallelBitArray movedInCurrentFrameBits;

  /// @brief Field movedInPreviousFrameBits, offset: 0x98, size: 0x20, def value: None
  ::UnityEngine::Rendering::ParallelBitArray movedInPreviousFrameBits;

  /// @brief Field visibleInPreviousFrameBits, offset: 0xb8, size: 0x20, def value: None
  ::UnityEngine::Rendering::ParallelBitArray visibleInPreviousFrameBits;

  /// @brief Field editorData, offset: 0xd8, size: 0x1, def value: None
  ::UnityEngine::Rendering::EditorInstanceDataArrays editorData;

  /// @brief Field meshLodData, offset: 0xe0, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenRendererMeshLodData> meshLodData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::CPUInstanceData, m_StructData) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CPUInstanceData, m_InstanceIndices) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CPUInstanceData, instances) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CPUInstanceData, sharedInstances) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CPUInstanceData, localToWorldIsFlippedBits) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CPUInstanceData, worldAABBs) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CPUInstanceData, tetrahedronCacheIndices) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CPUInstanceData, movedInCurrentFrameBits) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CPUInstanceData, movedInPreviousFrameBits) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CPUInstanceData, visibleInPreviousFrameBits) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CPUInstanceData, editorData) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CPUInstanceData, meshLodData) == 0xe0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::CPUInstanceData) == 0xf0, "Size mismatch!");

} // namespace UnityEngine::Rendering

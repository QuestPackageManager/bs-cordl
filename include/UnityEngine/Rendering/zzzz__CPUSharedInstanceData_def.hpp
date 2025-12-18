#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/CPUSharedInstanceData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__AABB_def.hpp"
#include "UnityEngine/Rendering/zzzz__CPUSharedInstanceFlags_def.hpp"
#include "UnityEngine/Rendering/zzzz__SharedInstanceHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__SmallIntegerArray_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CPUSharedInstanceData)
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
struct CPUInstanceData;
}
namespace UnityEngine::Rendering {
struct CPUSharedInstanceData_ReadOnly;
}
namespace UnityEngine::Rendering {
struct CPUSharedInstanceFlags;
}
namespace UnityEngine::Rendering {
struct InstanceFlags;
}
namespace UnityEngine::Rendering {
struct InstanceHandle;
}
namespace UnityEngine::Rendering {
struct SharedInstanceHandle;
}
namespace UnityEngine::Rendering {
struct SmallIntegerArray;
}
namespace UnityEngine::Rendering {
struct TransformUpdateFlags;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct CPUSharedInstanceData;
}
namespace UnityEngine::Rendering {
struct CPUSharedInstanceData_ReadOnly;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::CPUSharedInstanceData);
MARK_VAL_T(::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly);
// Dependencies Unity.Collections.NativeArray`1::ReadOnly<T>, UnityEngine.Rendering.AABB, UnityEngine.Rendering.CPUSharedInstanceFlags, UnityEngine.Rendering.SharedInstanceHandle,
// UnityEngine.Rendering.SmallIntegerArray
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.CPUSharedInstanceData/ReadOnly
struct CORDL_TYPE CPUSharedInstanceData_ReadOnly {
public:
  // Declarations
  __declspec(property(get = get_handlesLength)) int32_t handlesLength;

  __declspec(property(get = get_instancesLength)) int32_t instancesLength;

  /// @brief Method IndexToSharedInstance, addr 0x667049c, size 0x70, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::SharedInstanceHandle IndexToSharedInstance(int32_t index);

  /// @brief Method InstanceToIndex, addr 0x6670784, size 0x8c, virtual false, abstract: false, final false
  inline int32_t InstanceToIndex(::ByRef<::UnityEngine::Rendering::CPUInstanceData_ReadOnly> instanceData, ::UnityEngine::Rendering::InstanceHandle instance);

  /// @brief Method IsValidIndex, addr 0x6670680, size 0x104, virtual false, abstract: false, final false
  inline bool IsValidIndex(int32_t index);

  /// @brief Method IsValidSharedInstance, addr 0x667050c, size 0x174, virtual false, abstract: false, final false
  inline bool IsValidSharedInstance(::UnityEngine::Rendering::SharedInstanceHandle instance);

  /// @brief Method SharedInstanceToIndex, addr 0x6670400, size 0x9c, virtual false, abstract: false, final false
  inline int32_t SharedInstanceToIndex(::UnityEngine::Rendering::SharedInstanceHandle instance);

  /// @brief Method .ctor, addr 0x666ff20, size 0x458, virtual false, abstract: false, final false
  inline void _ctor(::ByRef<::UnityEngine::Rendering::CPUSharedInstanceData> instanceData);

  /// @brief Method get_handlesLength, addr 0x6670378, size 0x44, virtual false, abstract: false, final false
  inline int32_t get_handlesLength();

  /// @brief Method get_instancesLength, addr 0x66703bc, size 0x44, virtual false, abstract: false, final false
  inline int32_t get_instancesLength();

  // Ctor Parameters []
  // @brief default ctor
  constexpr CPUSharedInstanceData_ReadOnly();

  // Ctor Parameters [CppParam { name: "instanceIndices", ty: "::Unity::Collections::NativeArray_1_ReadOnly<int32_t>", modifiers: "", def_value: None }, CppParam { name: "instances", ty:
  // "::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::Rendering::SharedInstanceHandle>", modifiers: "", def_value: None }, CppParam { name: "rendererGroupIDs", ty:
  // "::Unity::Collections::NativeArray_1_ReadOnly<int32_t>", modifiers: "", def_value: None }, CppParam { name: "materialIDArrays", ty:
  // "::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::Rendering::SmallIntegerArray>", modifiers: "", def_value: None }, CppParam { name: "meshIDs", ty:
  // "::Unity::Collections::NativeArray_1_ReadOnly<int32_t>", modifiers: "", def_value: None }, CppParam { name: "localAABBs", ty:
  // "::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::Rendering::AABB>", modifiers: "", def_value: None }, CppParam { name: "flags", ty:
  // "::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::Rendering::CPUSharedInstanceFlags>", modifiers: "", def_value: None }, CppParam { name: "lodGroupAndMasks", ty:
  // "::Unity::Collections::NativeArray_1_ReadOnly<uint32_t>", modifiers: "", def_value: None }, CppParam { name: "gameObjectLayers", ty: "::Unity::Collections::NativeArray_1_ReadOnly<int32_t>",
  // modifiers: "", def_value: None }, CppParam { name: "refCounts", ty: "::Unity::Collections::NativeArray_1_ReadOnly<int32_t>", modifiers: "", def_value: None }]
  constexpr CPUSharedInstanceData_ReadOnly(::Unity::Collections::NativeArray_1_ReadOnly<int32_t> instanceIndices,
                                           ::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::Rendering::SharedInstanceHandle> instances,
                                           ::Unity::Collections::NativeArray_1_ReadOnly<int32_t> rendererGroupIDs,
                                           ::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::Rendering::SmallIntegerArray> materialIDArrays,
                                           ::Unity::Collections::NativeArray_1_ReadOnly<int32_t> meshIDs, ::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::Rendering::AABB> localAABBs,
                                           ::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::Rendering::CPUSharedInstanceFlags> flags,
                                           ::Unity::Collections::NativeArray_1_ReadOnly<uint32_t> lodGroupAndMasks, ::Unity::Collections::NativeArray_1_ReadOnly<int32_t> gameObjectLayers,
                                           ::Unity::Collections::NativeArray_1_ReadOnly<int32_t> refCounts) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17664 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xa0 };

  /// @brief Field instanceIndices, offset: 0x0, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1_ReadOnly<int32_t> instanceIndices;

  /// @brief Field instances, offset: 0x10, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::Rendering::SharedInstanceHandle> instances;

  /// @brief Field rendererGroupIDs, offset: 0x20, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1_ReadOnly<int32_t> rendererGroupIDs;

  /// @brief Field materialIDArrays, offset: 0x30, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::Rendering::SmallIntegerArray> materialIDArrays;

  /// @brief Field meshIDs, offset: 0x40, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1_ReadOnly<int32_t> meshIDs;

  /// @brief Field localAABBs, offset: 0x50, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::Rendering::AABB> localAABBs;

  /// @brief Field flags, offset: 0x60, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::Rendering::CPUSharedInstanceFlags> flags;

  /// @brief Field lodGroupAndMasks, offset: 0x70, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1_ReadOnly<uint32_t> lodGroupAndMasks;

  /// @brief Field gameObjectLayers, offset: 0x80, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1_ReadOnly<int32_t> gameObjectLayers;

  /// @brief Field refCounts, offset: 0x90, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1_ReadOnly<int32_t> refCounts;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly, instanceIndices) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly, instances) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly, rendererGroupIDs) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly, materialIDArrays) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly, meshIDs) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly, localAABBs) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly, flags) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly, lodGroupAndMasks) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly, gameObjectLayers) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly, refCounts) == 0x90, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly, 0xa0>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies Unity.Collections.NativeArray`1<T>, Unity.Collections.NativeList`1<T>, UnityEngine.Rendering.AABB, UnityEngine.Rendering.CPUSharedInstanceFlags,
// UnityEngine.Rendering.SharedInstanceHandle, UnityEngine.Rendering.SmallIntegerArray
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.CPUSharedInstanceData
struct CORDL_TYPE CPUSharedInstanceData {
public:
  // Declarations
  using ReadOnly = ::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly;

  __declspec(property(get = get_handlesLength)) int32_t handlesLength;

  __declspec(property(get = get_instancesCapacity, put = set_instancesCapacity)) int32_t instancesCapacity;

  __declspec(property(get = get_instancesLength, put = set_instancesLength)) int32_t instancesLength;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Add, addr 0x666f774, size 0xbc, virtual false, abstract: false, final false
  inline void Add(::UnityEngine::Rendering::SharedInstanceHandle instance);

  /// @brief Method AddNoGrow, addr 0x666f668, size 0x94, virtual false, abstract: false, final false
  inline void AddNoGrow(::UnityEngine::Rendering::SharedInstanceHandle instance);

  /// @brief Method AddUnsafe, addr 0x666eff8, size 0x1f0, virtual false, abstract: false, final false
  inline void AddUnsafe(::UnityEngine::Rendering::SharedInstanceHandle instance);

  /// @brief Method AsReadOnly, addr 0x666feec, size 0x34, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly AsReadOnly();

  /// @brief Method Dispose, addr 0x666ea64, size 0x2d4, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method EnsureFreeInstances, addr 0x666f640, size 0x28, virtual false, abstract: false, final false
  inline void EnsureFreeInstances(int32_t instancesCount);

  /// @brief Method GetFreeInstancesCount, addr 0x666f630, size 0x10, virtual false, abstract: false, final false
  inline int32_t GetFreeInstancesCount();

  /// @brief Method Get_Flags, addr 0x666faf0, size 0x20, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::CPUSharedInstanceFlags Get_Flags(::UnityEngine::Rendering::SharedInstanceHandle instance);

  /// @brief Method Get_GameObjectLayer, addr 0x666fb30, size 0x20, virtual false, abstract: false, final false
  inline int32_t Get_GameObjectLayer(::UnityEngine::Rendering::SharedInstanceHandle instance);

  /// @brief Method Get_LODGroupAndMask, addr 0x666fb10, size 0x20, virtual false, abstract: false, final false
  inline uint32_t Get_LODGroupAndMask(::UnityEngine::Rendering::SharedInstanceHandle instance);

  /// @brief Method Get_LocalAABB, addr 0x666fa74, size 0x7c, virtual false, abstract: false, final false
  inline ::ByRef<::UnityEngine::Rendering::AABB> Get_LocalAABB(::UnityEngine::Rendering::SharedInstanceHandle instance);

  /// @brief Method Get_MaterialIDs, addr 0x666fb70, size 0x78, virtual false, abstract: false, final false
  inline ::ByRef<::UnityEngine::Rendering::SmallIntegerArray> Get_MaterialIDs(::UnityEngine::Rendering::SharedInstanceHandle instance);

  /// @brief Method Get_MeshID, addr 0x666fa54, size 0x20, virtual false, abstract: false, final false
  inline int32_t Get_MeshID(::UnityEngine::Rendering::SharedInstanceHandle instance);

  /// @brief Method Get_RefCount, addr 0x666fb50, size 0x20, virtual false, abstract: false, final false
  inline int32_t Get_RefCount(::UnityEngine::Rendering::SharedInstanceHandle instance);

  /// @brief Method Get_RendererGroupID, addr 0x666fa34, size 0x20, virtual false, abstract: false, final false
  inline int32_t Get_RendererGroupID(::UnityEngine::Rendering::SharedInstanceHandle instance);

  /// @brief Method Grow, addr 0x666ed94, size 0x264, virtual false, abstract: false, final false
  inline void Grow(int32_t newCapacity);

  /// @brief Method IndexToSharedInstance, addr 0x666f288, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::SharedInstanceHandle IndexToSharedInstance(int32_t index);

  /// @brief Method Initialize, addr 0x666e734, size 0x330, virtual false, abstract: false, final false
  inline void Initialize(int32_t initCapacity);

  /// @brief Method InstanceToIndex, addr 0x666f294, size 0x54, virtual false, abstract: false, final false
  inline int32_t InstanceToIndex(::ByRef<::UnityEngine::Rendering::CPUInstanceData> instanceData, ::UnityEngine::Rendering::InstanceHandle instance);

  /// @brief Method IsFreeInstanceHandle, addr 0x666f440, size 0x128, virtual false, abstract: false, final false
  inline bool IsFreeInstanceHandle(::UnityEngine::Rendering::SharedInstanceHandle instance);

  /// @brief Method IsValidIndex, addr 0x666f568, size 0xc8, virtual false, abstract: false, final false
  inline bool IsValidIndex(int32_t index);

  /// @brief Method IsValidInstance, addr 0x666f2e8, size 0x158, virtual false, abstract: false, final false
  inline bool IsValidInstance(::UnityEngine::Rendering::SharedInstanceHandle instance);

  /// @brief Method Remove, addr 0x666f830, size 0x204, virtual false, abstract: false, final false
  inline void Remove(::UnityEngine::Rendering::SharedInstanceHandle instance);

  /// @brief Method Set, addr 0x666fdc4, size 0x128, virtual false, abstract: false, final false
  inline void Set(::UnityEngine::Rendering::SharedInstanceHandle instance, int32_t rendererGroupID, ::ByRef<::UnityEngine::Rendering::SmallIntegerArray> materialIDs, int32_t meshID,
                  ::ByRef<::UnityEngine::Rendering::AABB> localAABB, ::UnityEngine::Rendering::TransformUpdateFlags transformUpdateFlags, ::UnityEngine::Rendering::InstanceFlags instanceFlags,
                  uint32_t lodGroupAndMask, int32_t gameObjectLayer, int32_t refCount);

  /// @brief Method SetDefault, addr 0x666f6fc, size 0x78, virtual false, abstract: false, final false
  inline void SetDefault(::UnityEngine::Rendering::SharedInstanceHandle instance);

  /// @brief Method Set_Flags, addr 0x666fc84, size 0x2c, virtual false, abstract: false, final false
  inline void Set_Flags(::UnityEngine::Rendering::SharedInstanceHandle instance, ::UnityEngine::Rendering::CPUSharedInstanceFlags instanceFlags);

  /// @brief Method Set_GameObjectLayer, addr 0x666fcdc, size 0x2c, virtual false, abstract: false, final false
  inline void Set_GameObjectLayer(::UnityEngine::Rendering::SharedInstanceHandle instance, int32_t gameObjectLayer);

  /// @brief Method Set_LODGroupAndMask, addr 0x666fcb0, size 0x2c, virtual false, abstract: false, final false
  inline void Set_LODGroupAndMask(::UnityEngine::Rendering::SharedInstanceHandle instance, uint32_t lodGroupAndMask);

  /// @brief Method Set_LocalAABB, addr 0x666fc40, size 0x44, virtual false, abstract: false, final false
  inline void Set_LocalAABB(::UnityEngine::Rendering::SharedInstanceHandle instance, ::ByRef<::UnityEngine::Rendering::AABB> localAABB);

  /// @brief Method Set_MaterialIDs, addr 0x666fd34, size 0x90, virtual false, abstract: false, final false
  inline void Set_MaterialIDs(::UnityEngine::Rendering::SharedInstanceHandle instance, ::ByRef<::UnityEngine::Rendering::SmallIntegerArray> materialIDs);

  /// @brief Method Set_MeshID, addr 0x666fc14, size 0x2c, virtual false, abstract: false, final false
  inline void Set_MeshID(::UnityEngine::Rendering::SharedInstanceHandle instance, int32_t meshID);

  /// @brief Method Set_RefCount, addr 0x666fd08, size 0x2c, virtual false, abstract: false, final false
  inline void Set_RefCount(::UnityEngine::Rendering::SharedInstanceHandle instance, int32_t refCount);

  /// @brief Method Set_RendererGroupID, addr 0x666fbe8, size 0x2c, virtual false, abstract: false, final false
  inline void Set_RendererGroupID(::UnityEngine::Rendering::SharedInstanceHandle instance, int32_t rendererGroupID);

  /// @brief Method SharedInstanceToIndex, addr 0x666f1e8, size 0xa0, virtual false, abstract: false, final false
  inline int32_t SharedInstanceToIndex(::UnityEngine::Rendering::SharedInstanceHandle instance);

  /// @brief Method get_handlesLength, addr 0x666e6d0, size 0x64, virtual false, abstract: false, final false
  inline int32_t get_handlesLength();

  /// @brief Method get_instancesCapacity, addr 0x666e6b8, size 0xc, virtual false, abstract: false, final false
  inline int32_t get_instancesCapacity();

  /// @brief Method get_instancesLength, addr 0x666e6a0, size 0xc, virtual false, abstract: false, final false
  inline int32_t get_instancesLength();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  /// @brief Method set_instancesCapacity, addr 0x666e6c4, size 0xc, virtual false, abstract: false, final false
  inline void set_instancesCapacity(int32_t value);

  /// @brief Method set_instancesLength, addr 0x666e6ac, size 0xc, virtual false, abstract: false, final false
  inline void set_instancesLength(int32_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr CPUSharedInstanceData();

  // Ctor Parameters [CppParam { name: "m_StructData", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "m_InstanceIndices", ty:
  // "::Unity::Collections::NativeList_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "instances", ty:
  // "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::SharedInstanceHandle>", modifiers: "", def_value: None }, CppParam { name: "rendererGroupIDs", ty:
  // "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "materialIDArrays", ty:
  // "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::SmallIntegerArray>", modifiers: "", def_value: None }, CppParam { name: "meshIDs", ty:
  // "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "localAABBs", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::AABB>",
  // modifiers: "", def_value: None }, CppParam { name: "flags", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::CPUSharedInstanceFlags>", modifiers: "", def_value: None }, CppParam
  // { name: "lodGroupAndMasks", ty: "::Unity::Collections::NativeArray_1<uint32_t>", modifiers: "", def_value: None }, CppParam { name: "gameObjectLayers", ty:
  // "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "refCounts", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None
  // }]
  constexpr CPUSharedInstanceData(::Unity::Collections::NativeArray_1<int32_t> m_StructData, ::Unity::Collections::NativeList_1<int32_t> m_InstanceIndices,
                                  ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::SharedInstanceHandle> instances, ::Unity::Collections::NativeArray_1<int32_t> rendererGroupIDs,
                                  ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::SmallIntegerArray> materialIDArrays, ::Unity::Collections::NativeArray_1<int32_t> meshIDs,
                                  ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::AABB> localAABBs,
                                  ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::CPUSharedInstanceFlags> flags, ::Unity::Collections::NativeArray_1<uint32_t> lodGroupAndMasks,
                                  ::Unity::Collections::NativeArray_1<int32_t> gameObjectLayers, ::Unity::Collections::NativeArray_1<int32_t> refCounts) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17665 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xa8 };

  /// @brief Field k_InvalidIndex offset 0xffffffff size 0x4
  static constexpr int32_t k_InvalidIndex{ static_cast<int32_t>(0xffffffff) };

  /// @brief Field k_InvalidLODGroupAndMask offset 0xffffffff size 0x4
  static constexpr uint32_t k_InvalidLODGroupAndMask{ static_cast<uint32_t>(0xffffffffu) };

  /// @brief Field m_StructData, offset: 0x0, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> m_StructData;

  /// @brief Field m_InstanceIndices, offset: 0x10, size: 0x8, def value: None
  ::Unity::Collections::NativeList_1<int32_t> m_InstanceIndices;

  /// @brief Field instances, offset: 0x18, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::SharedInstanceHandle> instances;

  /// @brief Field rendererGroupIDs, offset: 0x28, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> rendererGroupIDs;

  /// @brief Field materialIDArrays, offset: 0x38, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::SmallIntegerArray> materialIDArrays;

  /// @brief Field meshIDs, offset: 0x48, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> meshIDs;

  /// @brief Field localAABBs, offset: 0x58, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::AABB> localAABBs;

  /// @brief Field flags, offset: 0x68, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::CPUSharedInstanceFlags> flags;

  /// @brief Field lodGroupAndMasks, offset: 0x78, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<uint32_t> lodGroupAndMasks;

  /// @brief Field gameObjectLayers, offset: 0x88, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> gameObjectLayers;

  /// @brief Field refCounts, offset: 0x98, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> refCounts;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::CPUSharedInstanceData, m_StructData) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CPUSharedInstanceData, m_InstanceIndices) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CPUSharedInstanceData, instances) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CPUSharedInstanceData, rendererGroupIDs) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CPUSharedInstanceData, materialIDArrays) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CPUSharedInstanceData, meshIDs) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CPUSharedInstanceData, localAABBs) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CPUSharedInstanceData, flags) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CPUSharedInstanceData, lodGroupAndMasks) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CPUSharedInstanceData, gameObjectLayers) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CPUSharedInstanceData, refCounts) == 0x98, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::CPUSharedInstanceData, 0xa8>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::CPUSharedInstanceData, "UnityEngine.Rendering", "CPUSharedInstanceData");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly, "UnityEngine.Rendering", "CPUSharedInstanceData/ReadOnly");

#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/LODGroupDataPool.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include "Unity/Collections/zzzz__NativeParallelHashMap_2_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUInstanceIndex_def.hpp"
#include "UnityEngine/Rendering/zzzz__LODGroupCullingData_def.hpp"
#include "UnityEngine/Rendering/zzzz__LODGroupData_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LODGroupDataPool)
namespace System {
class IDisposable;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace Unity::Collections {
template <typename T> struct NativeList_1;
}
namespace Unity::Collections {
template <typename TKey, typename TValue> struct NativeParallelHashMap_2;
}
namespace UnityEngine::Rendering {
struct GPUDrivenLODGroupData;
}
namespace UnityEngine::Rendering {
struct GPUInstanceIndex;
}
namespace UnityEngine::Rendering {
class GPUResidentDrawerResources;
}
namespace UnityEngine::Rendering {
struct LODGroupCullingData;
}
namespace UnityEngine::Rendering {
class LODGroupDataPool_LodGroupShaderIDs;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class LODGroupDataPool;
}
namespace UnityEngine::Rendering {
class LODGroupDataPool_LodGroupShaderIDs;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::LODGroupDataPool);
MARK_REF_PTR_T(::UnityEngine::Rendering::LODGroupDataPool_LodGroupShaderIDs);
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.LODGroupDataPool/LodGroupShaderIDs
class CORDL_TYPE LODGroupDataPool_LodGroupShaderIDs : public ::System::Object {
public:
  // Declarations
  /// @brief Field _InputLodCullingDataBuffer, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__InputLodCullingDataBuffer, put = setStaticF__InputLodCullingDataBuffer)) int32_t _InputLodCullingDataBuffer;

  /// @brief Field _InputLodCullingDataIndices, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__InputLodCullingDataIndices, put = setStaticF__InputLodCullingDataIndices)) int32_t _InputLodCullingDataIndices;

  /// @brief Field _LodCullingDataQueueCount, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__LodCullingDataQueueCount, put = setStaticF__LodCullingDataQueueCount)) int32_t _LodCullingDataQueueCount;

  /// @brief Field _LodGroupCullingData, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__LodGroupCullingData, put = setStaticF__LodGroupCullingData)) int32_t _LodGroupCullingData;

  /// @brief Field _LodGroupCullingDataGPUByteSize, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__LodGroupCullingDataGPUByteSize, put = setStaticF__LodGroupCullingDataGPUByteSize)) int32_t _LodGroupCullingDataGPUByteSize;

  /// @brief Field _LodGroupCullingDataStartOffset, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__LodGroupCullingDataStartOffset, put = setStaticF__LodGroupCullingDataStartOffset)) int32_t _LodGroupCullingDataStartOffset;

  /// @brief Field _SupportDitheringCrossFade, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__SupportDitheringCrossFade, put = setStaticF__SupportDitheringCrossFade)) int32_t _SupportDitheringCrossFade;

  static inline int32_t getStaticF__InputLodCullingDataBuffer();

  static inline int32_t getStaticF__InputLodCullingDataIndices();

  static inline int32_t getStaticF__LodCullingDataQueueCount();

  static inline int32_t getStaticF__LodGroupCullingData();

  static inline int32_t getStaticF__LodGroupCullingDataGPUByteSize();

  static inline int32_t getStaticF__LodGroupCullingDataStartOffset();

  static inline int32_t getStaticF__SupportDitheringCrossFade();

  static inline void setStaticF__InputLodCullingDataBuffer(int32_t value);

  static inline void setStaticF__InputLodCullingDataIndices(int32_t value);

  static inline void setStaticF__LodCullingDataQueueCount(int32_t value);

  static inline void setStaticF__LodGroupCullingData(int32_t value);

  static inline void setStaticF__LodGroupCullingDataGPUByteSize(int32_t value);

  static inline void setStaticF__LodGroupCullingDataStartOffset(int32_t value);

  static inline void setStaticF__SupportDitheringCrossFade(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LODGroupDataPool_LodGroupShaderIDs();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LODGroupDataPool_LodGroupShaderIDs", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LODGroupDataPool_LodGroupShaderIDs(LODGroupDataPool_LodGroupShaderIDs&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LODGroupDataPool_LodGroupShaderIDs", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LODGroupDataPool_LodGroupShaderIDs(LODGroupDataPool_LodGroupShaderIDs const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17729 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::LODGroupDataPool_LodGroupShaderIDs, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object, Unity.Collections.NativeList`1<T>, Unity.Collections.NativeParallelHashMap`2<TKey, TValue>, UnityEngine.Rendering.GPUInstanceIndex,
// UnityEngine.Rendering.LODGroupCullingData, UnityEngine.Rendering.LODGroupData
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.LODGroupDataPool
class CORDL_TYPE LODGroupDataPool : public ::System::Object {
public:
  // Declarations
  using LodGroupShaderIDs = ::UnityEngine::Rendering::LODGroupDataPool_LodGroupShaderIDs;

  __declspec(property(get = get_activeLodGroupCount)) int32_t activeLodGroupCount;

  __declspec(property(get = get_crossfadedRendererCount)) int32_t crossfadedRendererCount;

  __declspec(property(get = get_lodGroupCullingData)) ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupCullingData> lodGroupCullingData;

  __declspec(property(get = get_lodGroupDataHash)) ::Unity::Collections::NativeParallelHashMap_2<int32_t, ::UnityEngine::Rendering::GPUInstanceIndex> lodGroupDataHash;

  /// @brief Field m_CrossfadedRendererCount, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CrossfadedRendererCount, put = __cordl_internal_set_m_CrossfadedRendererCount)) int32_t m_CrossfadedRendererCount;

  /// @brief Field m_FreeLODGroupDataHandles, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_FreeLODGroupDataHandles,
                      put = __cordl_internal_set_m_FreeLODGroupDataHandles)) ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUInstanceIndex>
      m_FreeLODGroupDataHandles;

  /// @brief Field m_LODGroupCullingData, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LODGroupCullingData,
                      put = __cordl_internal_set_m_LODGroupCullingData)) ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupCullingData>
      m_LODGroupCullingData;

  /// @brief Field m_LODGroupData, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LODGroupData, put = __cordl_internal_set_m_LODGroupData)) ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupData> m_LODGroupData;

  /// @brief Field m_LODGroupDataHash, offset 0x18, size 0x10
  __declspec(property(get = __cordl_internal_get_m_LODGroupDataHash,
                      put = __cordl_internal_set_m_LODGroupDataHash)) ::Unity::Collections::NativeParallelHashMap_2<int32_t, ::UnityEngine::Rendering::GPUInstanceIndex>
      m_LODGroupDataHash;

  /// @brief Field m_SupportDitheringCrossFade, offset 0x3c, size 0x1
  __declspec(property(get = __cordl_internal_get_m_SupportDitheringCrossFade, put = __cordl_internal_set_m_SupportDitheringCrossFade)) bool m_SupportDitheringCrossFade;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x667a8e4, size 0xb8, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method FreeLODGroupData, addr 0x667adc0, size 0xa0, virtual false, abstract: false, final false
  inline void FreeLODGroupData(::Unity::Collections::NativeArray_1<int32_t> destroyedLODGroupsID);

  static inline ::UnityEngine::Rendering::LODGroupDataPool* New_ctor(::UnityEngine::Rendering::GPUResidentDrawerResources* resources, int32_t initialInstanceCount, bool supportDitheringCrossFade);

  /// @brief Method UpdateLODGroupData, addr 0x667ab18, size 0x2a8, virtual false, abstract: false, final false
  inline void UpdateLODGroupData(::ByRef<::UnityEngine::Rendering::GPUDrivenLODGroupData> inputData);

  /// @brief Method UpdateLODGroupTransformData, addr 0x667a99c, size 0x17c, virtual false, abstract: false, final false
  inline void UpdateLODGroupTransformData(::ByRef<::UnityEngine::Rendering::GPUDrivenLODGroupData> inputData);

  constexpr int32_t const& __cordl_internal_get_m_CrossfadedRendererCount() const;

  constexpr int32_t& __cordl_internal_get_m_CrossfadedRendererCount();

  constexpr ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUInstanceIndex> const& __cordl_internal_get_m_FreeLODGroupDataHandles() const;

  constexpr ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUInstanceIndex>& __cordl_internal_get_m_FreeLODGroupDataHandles();

  constexpr ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupCullingData> const& __cordl_internal_get_m_LODGroupCullingData() const;

  constexpr ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupCullingData>& __cordl_internal_get_m_LODGroupCullingData();

  constexpr ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupData> const& __cordl_internal_get_m_LODGroupData() const;

  constexpr ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupData>& __cordl_internal_get_m_LODGroupData();

  constexpr ::Unity::Collections::NativeParallelHashMap_2<int32_t, ::UnityEngine::Rendering::GPUInstanceIndex> const& __cordl_internal_get_m_LODGroupDataHash() const;

  constexpr ::Unity::Collections::NativeParallelHashMap_2<int32_t, ::UnityEngine::Rendering::GPUInstanceIndex>& __cordl_internal_get_m_LODGroupDataHash();

  constexpr bool const& __cordl_internal_get_m_SupportDitheringCrossFade() const;

  constexpr bool& __cordl_internal_get_m_SupportDitheringCrossFade();

  constexpr void __cordl_internal_set_m_CrossfadedRendererCount(int32_t value);

  constexpr void __cordl_internal_set_m_FreeLODGroupDataHandles(::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUInstanceIndex> value);

  constexpr void __cordl_internal_set_m_LODGroupCullingData(::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupCullingData> value);

  constexpr void __cordl_internal_set_m_LODGroupData(::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupData> value);

  constexpr void __cordl_internal_set_m_LODGroupDataHash(::Unity::Collections::NativeParallelHashMap_2<int32_t, ::UnityEngine::Rendering::GPUInstanceIndex> value);

  constexpr void __cordl_internal_set_m_SupportDitheringCrossFade(bool value);

  /// @brief Method .ctor, addr 0x667a7c8, size 0x11c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::GPUResidentDrawerResources* resources, int32_t initialInstanceCount, bool supportDitheringCrossFade);

  /// @brief Method get_activeLodGroupCount, addr 0x667a764, size 0x64, virtual false, abstract: false, final false
  inline int32_t get_activeLodGroupCount();

  /// @brief Method get_crossfadedRendererCount, addr 0x667a75c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_crossfadedRendererCount();

  /// @brief Method get_lodGroupCullingData, addr 0x667a754, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupCullingData> get_lodGroupCullingData();

  /// @brief Method get_lodGroupDataHash, addr 0x667a748, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeParallelHashMap_2<int32_t, ::UnityEngine::Rendering::GPUInstanceIndex> get_lodGroupDataHash();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LODGroupDataPool();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LODGroupDataPool", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LODGroupDataPool(LODGroupDataPool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LODGroupDataPool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LODGroupDataPool(LODGroupDataPool const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17730 };

  /// @brief Field m_LODGroupData, offset: 0x10, size: 0x8, def value: None
  ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupData> ___m_LODGroupData;

  /// @brief Field m_LODGroupDataHash, offset: 0x18, size: 0x10, def value: None
  ::Unity::Collections::NativeParallelHashMap_2<int32_t, ::UnityEngine::Rendering::GPUInstanceIndex> ___m_LODGroupDataHash;

  /// @brief Field m_LODGroupCullingData, offset: 0x28, size: 0x8, def value: None
  ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupCullingData> ___m_LODGroupCullingData;

  /// @brief Field m_FreeLODGroupDataHandles, offset: 0x30, size: 0x8, def value: None
  ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUInstanceIndex> ___m_FreeLODGroupDataHandles;

  /// @brief Field m_CrossfadedRendererCount, offset: 0x38, size: 0x4, def value: None
  int32_t ___m_CrossfadedRendererCount;

  /// @brief Field m_SupportDitheringCrossFade, offset: 0x3c, size: 0x1, def value: None
  bool ___m_SupportDitheringCrossFade;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::LODGroupDataPool, ___m_LODGroupData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LODGroupDataPool, ___m_LODGroupDataHash) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LODGroupDataPool, ___m_LODGroupCullingData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LODGroupDataPool, ___m_FreeLODGroupDataHandles) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LODGroupDataPool, ___m_CrossfadedRendererCount) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LODGroupDataPool, ___m_SupportDitheringCrossFade) == 0x3c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::LODGroupDataPool, 0x40>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::LODGroupDataPool);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::LODGroupDataPool*, "UnityEngine.Rendering", "LODGroupDataPool");
NEED_NO_BOX(::UnityEngine::Rendering::LODGroupDataPool_LodGroupShaderIDs);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::LODGroupDataPool_LodGroupShaderIDs*, "UnityEngine.Rendering", "LODGroupDataPool/LodGroupShaderIDs");

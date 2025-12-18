#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ProbeVolumeBakingSet.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/IO/LowLevel/Unsafe/zzzz__ReadCommandArray_def.hpp"
#include "Unity/IO/LowLevel/Unsafe/zzzz__ReadCommand_def.hpp"
#include "Unity/Mathematics/zzzz__uint4_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeVolumeBakingProcessSettings_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__RenderingLayerMask_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "UnityEngine/zzzz__Vector3Int_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ProbeVolumeBakingSet)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections::Generic {
template <typename T> class Stack_1;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace Unity::Mathematics {
struct uint4;
}
namespace UnityEngine::Rendering {
struct ProbeBrickIndex_Brick;
}
namespace UnityEngine::Rendering {
class ProbeReferenceVolume_CellData;
}
namespace UnityEngine::Rendering {
class ProbeReferenceVolume_CellDesc;
}
namespace UnityEngine::Rendering {
struct ProbeVolumeBakingSet_CellCounts;
}
namespace UnityEngine::Rendering {
class ProbeVolumeBakingSet_PerScenarioDataInfo;
}
namespace UnityEngine::Rendering {
struct ProbeVolumeBakingSet_ProbeLayerMask;
}
namespace UnityEngine::Rendering {
struct ProbeVolumeBakingSet_SerializedPerSceneCellList;
}
namespace UnityEngine::Rendering {
struct ProbeVolumeBakingSet_Version;
}
namespace UnityEngine::Rendering {
struct ProbeVolumeSHBands;
}
namespace UnityEngine::Rendering {
class ProbeVolumeStreamableAsset;
}
namespace UnityEngine::Rendering {
template <typename K, typename V> class SerializedDictionary_2;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct ProbeVolumeBakingSet_Version;
}
namespace UnityEngine::Rendering {
class ProbeVolumeBakingSet;
}
namespace UnityEngine::Rendering {
class ProbeVolumeBakingSet_PerScenarioDataInfo;
}
namespace UnityEngine::Rendering {
struct ProbeVolumeBakingSet_CellCounts;
}
namespace UnityEngine::Rendering {
struct ProbeVolumeBakingSet_ProbeLayerMask;
}
namespace UnityEngine::Rendering {
struct ProbeVolumeBakingSet_SerializedPerSceneCellList;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::ProbeVolumeBakingSet_Version);
MARK_REF_PTR_T(::UnityEngine::Rendering::ProbeVolumeBakingSet);
MARK_REF_PTR_T(::UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo);
MARK_VAL_T(::UnityEngine::Rendering::ProbeVolumeBakingSet_CellCounts);
MARK_VAL_T(::UnityEngine::Rendering::ProbeVolumeBakingSet_ProbeLayerMask);
MARK_VAL_T(::UnityEngine::Rendering::ProbeVolumeBakingSet_SerializedPerSceneCellList);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.ProbeVolumeBakingSet/Version
struct CORDL_TYPE ProbeVolumeBakingSet_Version {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ProbeVolumeBakingSet_Version_Unwrapped
  enum struct __ProbeVolumeBakingSet_Version_Unwrapped : int32_t {
    __E_Initial = static_cast<int32_t>(0x0),
    __E_RemoveProbeVolumeSceneData = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ProbeVolumeBakingSet_Version_Unwrapped() const noexcept {
    return static_cast<__ProbeVolumeBakingSet_Version_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ProbeVolumeBakingSet_Version();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ProbeVolumeBakingSet_Version(int32_t value__) noexcept;

  /// @brief Field Initial value: I32(0)
  static ::UnityEngine::Rendering::ProbeVolumeBakingSet_Version const Initial;

  /// @brief Field RemoveProbeVolumeSceneData value: I32(1)
  static ::UnityEngine::Rendering::ProbeVolumeBakingSet_Version const RemoveProbeVolumeSceneData;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12108 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeBakingSet_Version, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ProbeVolumeBakingSet_Version, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.ProbeVolumeBakingSet/PerScenarioDataInfo
class CORDL_TYPE ProbeVolumeBakingSet_PerScenarioDataInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field cellDataAsset, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_cellDataAsset, put = __cordl_internal_set_cellDataAsset)) ::UnityEngine::Rendering::ProbeVolumeStreamableAsset* cellDataAsset;

  /// @brief Field cellOptionalDataAsset, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_cellOptionalDataAsset, put = __cordl_internal_set_cellOptionalDataAsset)) ::UnityEngine::Rendering::ProbeVolumeStreamableAsset* cellOptionalDataAsset;

  /// @brief Field cellProbeOcclusionDataAsset, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_cellProbeOcclusionDataAsset,
                      put = __cordl_internal_set_cellProbeOcclusionDataAsset)) ::UnityEngine::Rendering::ProbeVolumeStreamableAsset* cellProbeOcclusionDataAsset;

  /// @brief Field m_HasValidData, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_m_HasValidData, put = __cordl_internal_set_m_HasValidData)) bool m_HasValidData;

  /// @brief Field sceneHash, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_sceneHash, put = __cordl_internal_set_sceneHash)) int32_t sceneHash;

  /// @brief Method ComputeHasValidData, addr 0x65df130, size 0x58, virtual false, abstract: false, final false
  inline bool ComputeHasValidData(::UnityEngine::Rendering::ProbeVolumeSHBands shBands);

  /// @brief Method HasValidData, addr 0x65df188, size 0x8, virtual false, abstract: false, final false
  inline bool HasValidData(::UnityEngine::Rendering::ProbeVolumeSHBands shBands);

  /// @brief Method Initialize, addr 0x65dbf98, size 0x1c, virtual false, abstract: false, final false
  inline void Initialize(::UnityEngine::Rendering::ProbeVolumeSHBands shBands);

  /// @brief Method IsValid, addr 0x65dc724, size 0x28, virtual false, abstract: false, final false
  inline bool IsValid();

  static inline ::UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo* New_ctor();

  constexpr ::UnityEngine::Rendering::ProbeVolumeStreamableAsset* const& __cordl_internal_get_cellDataAsset() const;

  constexpr ::UnityEngine::Rendering::ProbeVolumeStreamableAsset*& __cordl_internal_get_cellDataAsset();

  constexpr ::UnityEngine::Rendering::ProbeVolumeStreamableAsset* const& __cordl_internal_get_cellOptionalDataAsset() const;

  constexpr ::UnityEngine::Rendering::ProbeVolumeStreamableAsset*& __cordl_internal_get_cellOptionalDataAsset();

  constexpr ::UnityEngine::Rendering::ProbeVolumeStreamableAsset* const& __cordl_internal_get_cellProbeOcclusionDataAsset() const;

  constexpr ::UnityEngine::Rendering::ProbeVolumeStreamableAsset*& __cordl_internal_get_cellProbeOcclusionDataAsset();

  constexpr bool const& __cordl_internal_get_m_HasValidData() const;

  constexpr bool& __cordl_internal_get_m_HasValidData();

  constexpr int32_t const& __cordl_internal_get_sceneHash() const;

  constexpr int32_t& __cordl_internal_get_sceneHash();

  constexpr void __cordl_internal_set_cellDataAsset(::UnityEngine::Rendering::ProbeVolumeStreamableAsset* value);

  constexpr void __cordl_internal_set_cellOptionalDataAsset(::UnityEngine::Rendering::ProbeVolumeStreamableAsset* value);

  constexpr void __cordl_internal_set_cellProbeOcclusionDataAsset(::UnityEngine::Rendering::ProbeVolumeStreamableAsset* value);

  constexpr void __cordl_internal_set_m_HasValidData(bool value);

  constexpr void __cordl_internal_set_sceneHash(int32_t value);

  /// @brief Method .ctor, addr 0x65df190, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProbeVolumeBakingSet_PerScenarioDataInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProbeVolumeBakingSet_PerScenarioDataInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProbeVolumeBakingSet_PerScenarioDataInfo(ProbeVolumeBakingSet_PerScenarioDataInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProbeVolumeBakingSet_PerScenarioDataInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProbeVolumeBakingSet_PerScenarioDataInfo(ProbeVolumeBakingSet_PerScenarioDataInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12109 };

  /// @brief Field sceneHash, offset: 0x10, size: 0x4, def value: None
  int32_t ___sceneHash;

  /// @brief Field cellDataAsset, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Rendering::ProbeVolumeStreamableAsset* ___cellDataAsset;

  /// @brief Field cellOptionalDataAsset, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Rendering::ProbeVolumeStreamableAsset* ___cellOptionalDataAsset;

  /// @brief Field cellProbeOcclusionDataAsset, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Rendering::ProbeVolumeStreamableAsset* ___cellProbeOcclusionDataAsset;

  /// @brief Field m_HasValidData, offset: 0x30, size: 0x1, def value: None
  bool ___m_HasValidData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo, ___sceneHash) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo, ___cellDataAsset) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo, ___cellOptionalDataAsset) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo, ___cellProbeOcclusionDataAsset) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo, ___m_HasValidData) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo, 0x38>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.ProbeVolumeBakingSet/CellCounts
struct CORDL_TYPE ProbeVolumeBakingSet_CellCounts {
public:
  // Declarations
  /// @brief Method Add, addr 0x65df194, size 0x18, virtual false, abstract: false, final false
  inline void Add(::UnityEngine::Rendering::ProbeVolumeBakingSet_CellCounts o);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ProbeVolumeBakingSet_CellCounts();

  // Ctor Parameters [CppParam { name: "bricksCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "chunksCount", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ProbeVolumeBakingSet_CellCounts(int32_t bricksCount, int32_t chunksCount) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12110 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field bricksCount, offset: 0x0, size: 0x4, def value: None
  int32_t bricksCount;

  /// @brief Field chunksCount, offset: 0x4, size: 0x4, def value: None
  int32_t chunksCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeBakingSet_CellCounts, bricksCount) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeBakingSet_CellCounts, chunksCount) == 0x4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ProbeVolumeBakingSet_CellCounts, 0x8>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.ProbeVolumeBakingSet/SerializedPerSceneCellList
struct CORDL_TYPE ProbeVolumeBakingSet_SerializedPerSceneCellList {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProbeVolumeBakingSet_SerializedPerSceneCellList();

  // Ctor Parameters [CppParam { name: "sceneGUID", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "cellList", ty: "::System::Collections::Generic::List_1<int32_t>*", modifiers:
  // "", def_value: None }]
  constexpr ProbeVolumeBakingSet_SerializedPerSceneCellList(::StringW sceneGUID, ::System::Collections::Generic::List_1<int32_t>* cellList) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12111 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field sceneGUID, offset: 0x0, size: 0x8, def value: None
  ::StringW sceneGUID;

  /// @brief Field cellList, offset: 0x8, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<int32_t>* cellList;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeBakingSet_SerializedPerSceneCellList, sceneGUID) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeBakingSet_SerializedPerSceneCellList, cellList) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ProbeVolumeBakingSet_SerializedPerSceneCellList, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies UnityEngine.RenderingLayerMask
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.ProbeVolumeBakingSet/ProbeLayerMask
struct CORDL_TYPE ProbeVolumeBakingSet_ProbeLayerMask {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProbeVolumeBakingSet_ProbeLayerMask();

  // Ctor Parameters [CppParam { name: "mask", ty: "::UnityEngine::RenderingLayerMask", modifiers: "", def_value: None }, CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }]
  constexpr ProbeVolumeBakingSet_ProbeLayerMask(::UnityEngine::RenderingLayerMask mask, ::StringW name) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12112 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field mask, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::RenderingLayerMask mask;

  /// @brief Field name, offset: 0x8, size: 0x8, def value: None
  ::StringW name;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeBakingSet_ProbeLayerMask, mask) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeBakingSet_ProbeLayerMask, name) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ProbeVolumeBakingSet_ProbeLayerMask, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies Unity.Collections.NativeArray`1<T>, Unity.IO.LowLevel.Unsafe.ReadCommand, Unity.IO.LowLevel.Unsafe.ReadCommandArray, Unity.Mathematics.uint4, UnityEngine.Bounds, UnityEngine.LayerMask,
// UnityEngine.Rendering.ProbeVolumeBakingProcessSettings, UnityEngine.Rendering.ProbeVolumeBakingSet::Version, UnityEngine.ScriptableObject, UnityEngine.Vector3, UnityEngine.Vector3Int
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.ProbeVolumeBakingSet
class CORDL_TYPE ProbeVolumeBakingSet : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  using CellCounts = ::UnityEngine::Rendering::ProbeVolumeBakingSet_CellCounts;

  using PerScenarioDataInfo = ::UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo;

  using ProbeLayerMask = ::UnityEngine::Rendering::ProbeVolumeBakingSet_ProbeLayerMask;

  using SerializedPerSceneCellList = ::UnityEngine::Rendering::ProbeVolumeBakingSet_SerializedPerSceneCellList;

  using Version = ::UnityEngine::Rendering::ProbeVolumeBakingSet_Version;

  /// @brief Field L0ChunkSize, offset 0x11c, size 0x4
  __declspec(property(get = __cordl_internal_get_L0ChunkSize, put = __cordl_internal_set_L0ChunkSize)) int32_t L0ChunkSize;

  /// @brief Field L1ChunkSize, offset 0x120, size 0x4
  __declspec(property(get = __cordl_internal_get_L1ChunkSize, put = __cordl_internal_set_L1ChunkSize)) int32_t L1ChunkSize;

  /// @brief Field L2TextureChunkSize, offset 0x124, size 0x4
  __declspec(property(get = __cordl_internal_get_L2TextureChunkSize, put = __cordl_internal_set_L2TextureChunkSize)) int32_t L2TextureChunkSize;

  /// @brief Field ProbeOcclusionChunkSize, offset 0x128, size 0x4
  __declspec(property(get = __cordl_internal_get_ProbeOcclusionChunkSize, put = __cordl_internal_set_ProbeOcclusionChunkSize)) int32_t ProbeOcclusionChunkSize;

  /// @brief Field bakedLayerMasks, offset 0x108, size 0x10
  __declspec(property(get = __cordl_internal_get_bakedLayerMasks, put = __cordl_internal_set_bakedLayerMasks)) ::Unity::Mathematics::uint4 bakedLayerMasks;

  /// @brief Field bakedMaskCount, offset 0x104, size 0x4
  __declspec(property(get = __cordl_internal_get_bakedMaskCount, put = __cordl_internal_set_bakedMaskCount)) int32_t bakedMaskCount;

  /// @brief Field bakedMinDistanceBetweenProbes, offset 0xe8, size 0x4
  __declspec(property(get = __cordl_internal_get_bakedMinDistanceBetweenProbes, put = __cordl_internal_set_bakedMinDistanceBetweenProbes)) float_t bakedMinDistanceBetweenProbes;

  /// @brief Field bakedProbeOcclusion, offset 0xec, size 0x1
  __declspec(property(get = __cordl_internal_get_bakedProbeOcclusion, put = __cordl_internal_set_bakedProbeOcclusion)) bool bakedProbeOcclusion;

  /// @brief Field bakedProbeOffset, offset 0xf8, size 0xc
  __declspec(property(get = __cordl_internal_get_bakedProbeOffset, put = __cordl_internal_set_bakedProbeOffset)) ::UnityEngine::Vector3 bakedProbeOffset;

  /// @brief Field bakedSimplificationLevels, offset 0xe4, size 0x4
  __declspec(property(get = __cordl_internal_get_bakedSimplificationLevels, put = __cordl_internal_set_bakedSimplificationLevels)) int32_t bakedSimplificationLevels;

  __declspec(property(get = get_bakedSkyOcclusion, put = set_bakedSkyOcclusion)) bool bakedSkyOcclusion;

  /// @brief Field bakedSkyOcclusionValue, offset 0xf0, size 0x4
  __declspec(property(get = __cordl_internal_get_bakedSkyOcclusionValue, put = __cordl_internal_set_bakedSkyOcclusionValue)) int32_t bakedSkyOcclusionValue;

  __declspec(property(get = get_bakedSkyShadingDirection, put = set_bakedSkyShadingDirection)) bool bakedSkyShadingDirection;

  /// @brief Field bakedSkyShadingDirectionValue, offset 0xf4, size 0x4
  __declspec(property(get = __cordl_internal_get_bakedSkyShadingDirectionValue, put = __cordl_internal_set_bakedSkyShadingDirectionValue)) int32_t bakedSkyShadingDirectionValue;

  /// @brief Field cellBricksDataAsset, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_cellBricksDataAsset, put = __cordl_internal_set_cellBricksDataAsset)) ::UnityEngine::Rendering::ProbeVolumeStreamableAsset* cellBricksDataAsset;

  /// @brief Field cellDataMap, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_cellDataMap,
                      put = __cordl_internal_set_cellDataMap)) ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Rendering::ProbeReferenceVolume_CellData*>* cellDataMap;

  /// @brief Field cellDescs, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_cellDescs,
                      put = __cordl_internal_set_cellDescs)) ::UnityEngine::Rendering::SerializedDictionary_2<int32_t, ::UnityEngine::Rendering::ProbeReferenceVolume_CellDesc*>* cellDescs;

  /// @brief Field cellSharedDataAsset, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_cellSharedDataAsset, put = __cordl_internal_set_cellSharedDataAsset)) ::UnityEngine::Rendering::ProbeVolumeStreamableAsset* cellSharedDataAsset;

  __declspec(property(get = get_cellSizeInBricks)) int32_t cellSizeInBricks;

  __declspec(property(get = get_cellSizeInMeters)) float_t cellSizeInMeters;

  /// @brief Field cellSupportDataAsset, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_cellSupportDataAsset, put = __cordl_internal_set_cellSupportDataAsset)) ::UnityEngine::Rendering::ProbeVolumeStreamableAsset* cellSupportDataAsset;

  /// @brief Field chunkSizeInBricks, offset 0xb0, size 0x4
  __declspec(property(get = __cordl_internal_get_chunkSizeInBricks, put = __cordl_internal_set_chunkSizeInBricks)) int32_t chunkSizeInBricks;

  /// @brief Field dialogNoProbeVolumeInSetShown, offset 0x19, size 0x1
  __declspec(property(get = __cordl_internal_get_dialogNoProbeVolumeInSetShown, put = __cordl_internal_set_dialogNoProbeVolumeInSetShown)) bool dialogNoProbeVolumeInSetShown;

  /// @brief Field freezePlacement, offset 0x1ac, size 0x1
  __declspec(property(get = __cordl_internal_get_freezePlacement, put = __cordl_internal_set_freezePlacement)) bool freezePlacement;

  /// @brief Field globalBounds, offset 0xcc, size 0x18
  __declspec(property(get = __cordl_internal_get_globalBounds, put = __cordl_internal_set_globalBounds)) ::UnityEngine::Bounds globalBounds;

  __declspec(property(get = get_hasDilation)) bool hasDilation;

  /// @brief Field lightingScenario, offset 0x158, size 0x8
  __declspec(property(get = __cordl_internal_get_lightingScenario, put = __cordl_internal_set_lightingScenario)) ::StringW lightingScenario;

  __declspec(property(get = get_lightingScenarios)) ::System::Collections::Generic::IReadOnlyList_1<::StringW>* lightingScenarios;

  /// @brief Field m_HasSupportData, offset 0x1e8, size 0x1
  __declspec(property(get = __cordl_internal_get_m_HasSupportData, put = __cordl_internal_set_m_HasSupportData)) bool m_HasSupportData;

  /// @brief Field m_LightingScenarios, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LightingScenarios, put = __cordl_internal_set_m_LightingScenarios)) ::System::Collections::Generic::List_1<::StringW>* m_LightingScenarios;

  /// @brief Field m_OtherScenario, offset 0x160, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OtherScenario, put = __cordl_internal_set_m_OtherScenario)) ::StringW m_OtherScenario;

  /// @brief Field m_PrunedIndexList, offset 0x198, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PrunedIndexList, put = __cordl_internal_set_m_PrunedIndexList)) ::System::Collections::Generic::List_1<int32_t>* m_PrunedIndexList;

  /// @brief Field m_PrunedScenarioIndexList, offset 0x1a0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PrunedScenarioIndexList,
                      put = __cordl_internal_set_m_PrunedScenarioIndexList)) ::System::Collections::Generic::List_1<int32_t>* m_PrunedScenarioIndexList;

  /// @brief Field m_ReadCommandArray, offset 0x170, size 0x10
  __declspec(property(get = __cordl_internal_get_m_ReadCommandArray, put = __cordl_internal_set_m_ReadCommandArray)) ::Unity::IO::LowLevel::Unsafe::ReadCommandArray m_ReadCommandArray;

  /// @brief Field m_ReadCommandBuffer, offset 0x180, size 0x10
  __declspec(property(get = __cordl_internal_get_m_ReadCommandBuffer, put = __cordl_internal_set_m_ReadCommandBuffer)) ::Unity::Collections::NativeArray_1<::Unity::IO::LowLevel::Unsafe::ReadCommand>
      m_ReadCommandBuffer;

  /// @brief Field m_ReadOperationScratchBuffers, offset 0x190, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ReadOperationScratchBuffers,
                      put = __cordl_internal_set_m_ReadOperationScratchBuffers)) ::System::Collections::Generic::Stack_1<::Unity::Collections::NativeArray_1<uint8_t>>* m_ReadOperationScratchBuffers;

  /// @brief Field m_ScenarioBlendingFactor, offset 0x168, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ScenarioBlendingFactor, put = __cordl_internal_set_m_ScenarioBlendingFactor)) float_t m_ScenarioBlendingFactor;

  /// @brief Field m_SceneGUIDs, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SceneGUIDs, put = __cordl_internal_set_m_SceneGUIDs)) ::System::Collections::Generic::List_1<::StringW>* m_SceneGUIDs;

  /// @brief Field m_SerializedPerSceneCellList, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SerializedPerSceneCellList,
                      put = __cordl_internal_set_m_SerializedPerSceneCellList)) ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeVolumeBakingSet_SerializedPerSceneCellList>*
      m_SerializedPerSceneCellList;

  /// @brief Field m_SharedDataIsValid, offset 0x1e9, size 0x1
  __declspec(property(get = __cordl_internal_get_m_SharedDataIsValid, put = __cordl_internal_set_m_SharedDataIsValid)) bool m_SharedDataIsValid;

  /// @brief Field m_TotalIndexList, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TotalIndexList, put = __cordl_internal_set_m_TotalIndexList)) ::System::Collections::Generic::List_1<int32_t>* m_TotalIndexList;

  /// @brief Field m_UseStreamingAsset, offset 0x1ea, size 0x1
  __declspec(property(get = __cordl_internal_get_m_UseStreamingAsset, put = __cordl_internal_set_m_UseStreamingAsset)) bool m_UseStreamingAsset;

  /// @brief Field maxCellPosition, offset 0xb4, size 0xc
  __declspec(property(get = __cordl_internal_get_maxCellPosition, put = __cordl_internal_set_maxCellPosition)) ::UnityEngine::Vector3Int maxCellPosition;

  /// @brief Field maxSHChunkCount, offset 0x118, size 0x4
  __declspec(property(get = __cordl_internal_get_maxSHChunkCount, put = __cordl_internal_set_maxSHChunkCount)) int32_t maxSHChunkCount;

  __declspec(property(get = get_maxSubdivision)) int32_t maxSubdivision;

  __declspec(property(get = get_minBrickSize)) float_t minBrickSize;

  /// @brief Field minCellPosition, offset 0xc0, size 0xc
  __declspec(property(get = __cordl_internal_get_minCellPosition, put = __cordl_internal_set_minCellPosition)) ::UnityEngine::Vector3Int minCellPosition;

  /// @brief Field minDistanceBetweenProbes, offset 0x1c0, size 0x4
  __declspec(property(get = __cordl_internal_get_minDistanceBetweenProbes, put = __cordl_internal_set_minDistanceBetweenProbes)) float_t minDistanceBetweenProbes;

  /// @brief Field minRendererVolumeSize, offset 0x1c8, size 0x4
  __declspec(property(get = __cordl_internal_get_minRendererVolumeSize, put = __cordl_internal_set_minRendererVolumeSize)) float_t minRendererVolumeSize;

  /// @brief Field obsoleteScenesToNotBake, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_obsoleteScenesToNotBake,
                      put = __cordl_internal_set_obsoleteScenesToNotBake)) ::System::Collections::Generic::List_1<::StringW>* obsoleteScenesToNotBake;

  __declspec(property(get = get_otherScenario)) ::StringW otherScenario;

  /// @brief Field perSceneCellLists, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_perSceneCellLists,
                      put = __cordl_internal_set_perSceneCellLists)) ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<int32_t>*>* perSceneCellLists;

  /// @brief Field probeOffset, offset 0x1b0, size 0xc
  __declspec(property(get = __cordl_internal_get_probeOffset, put = __cordl_internal_set_probeOffset)) ::UnityEngine::Vector3 probeOffset;

  /// @brief Field renderersLayerMask, offset 0x1c4, size 0x4
  __declspec(property(get = __cordl_internal_get_renderersLayerMask, put = __cordl_internal_set_renderersLayerMask)) ::UnityEngine::LayerMask renderersLayerMask;

  /// @brief Field renderingLayerMasks, offset 0x1e0, size 0x8
  __declspec(property(
      get = __cordl_internal_get_renderingLayerMasks,
      put = __cordl_internal_set_renderingLayerMasks)) ::ArrayW<::UnityEngine::Rendering::ProbeVolumeBakingSet_ProbeLayerMask, ::Array<::UnityEngine::Rendering::ProbeVolumeBakingSet_ProbeLayerMask>*>
      renderingLayerMasks;

  __declspec(property(get = get_scenarioBlendingFactor)) float_t scenarioBlendingFactor;

  /// @brief Field scenarios, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_scenarios,
                      put =
                          __cordl_internal_set_scenarios)) ::UnityEngine::Rendering::SerializedDictionary_2<::StringW, ::UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo*>* scenarios;

  __declspec(property(get = get_sceneGUIDs)) ::System::Collections::Generic::IReadOnlyList_1<::StringW>* sceneGUIDs;

  /// @brief Field settings, offset 0x1c, size 0x30
  __declspec(property(get = __cordl_internal_get_settings, put = __cordl_internal_set_settings)) ::UnityEngine::Rendering::ProbeVolumeBakingProcessSettings settings;

  /// @brief Field sharedDataChunkSize, offset 0x138, size 0x4
  __declspec(property(get = __cordl_internal_get_sharedDataChunkSize, put = __cordl_internal_set_sharedDataChunkSize)) int32_t sharedDataChunkSize;

  /// @brief Field sharedSkyOcclusionL0L1ChunkSize, offset 0x130, size 0x4
  __declspec(property(get = __cordl_internal_get_sharedSkyOcclusionL0L1ChunkSize, put = __cordl_internal_set_sharedSkyOcclusionL0L1ChunkSize)) int32_t sharedSkyOcclusionL0L1ChunkSize;

  /// @brief Field sharedSkyShadingDirectionIndicesChunkSize, offset 0x134, size 0x4
  __declspec(property(get = __cordl_internal_get_sharedSkyShadingDirectionIndicesChunkSize,
                      put = __cordl_internal_set_sharedSkyShadingDirectionIndicesChunkSize)) int32_t sharedSkyShadingDirectionIndicesChunkSize;

  /// @brief Field sharedValidityMaskChunkSize, offset 0x12c, size 0x4
  __declspec(property(get = __cordl_internal_get_sharedValidityMaskChunkSize, put = __cordl_internal_set_sharedValidityMaskChunkSize)) int32_t sharedValidityMaskChunkSize;

  /// @brief Field simplificationLevels, offset 0x1bc, size 0x4
  __declspec(property(get = __cordl_internal_get_simplificationLevels, put = __cordl_internal_set_simplificationLevels)) int32_t simplificationLevels;

  /// @brief Field singleSceneMode, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_singleSceneMode, put = __cordl_internal_set_singleSceneMode)) bool singleSceneMode;

  /// @brief Field skyOcclusion, offset 0x1cc, size 0x1
  __declspec(property(get = __cordl_internal_get_skyOcclusion, put = __cordl_internal_set_skyOcclusion)) bool skyOcclusion;

  /// @brief Field skyOcclusionAverageAlbedo, offset 0x1d8, size 0x4
  __declspec(property(get = __cordl_internal_get_skyOcclusionAverageAlbedo, put = __cordl_internal_set_skyOcclusionAverageAlbedo)) float_t skyOcclusionAverageAlbedo;

  /// @brief Field skyOcclusionBackFaceCulling, offset 0x1dc, size 0x1
  __declspec(property(get = __cordl_internal_get_skyOcclusionBackFaceCulling, put = __cordl_internal_set_skyOcclusionBackFaceCulling)) bool skyOcclusionBackFaceCulling;

  /// @brief Field skyOcclusionBakingBounces, offset 0x1d4, size 0x4
  __declspec(property(get = __cordl_internal_get_skyOcclusionBakingBounces, put = __cordl_internal_set_skyOcclusionBakingBounces)) int32_t skyOcclusionBakingBounces;

  /// @brief Field skyOcclusionBakingSamples, offset 0x1d0, size 0x4
  __declspec(property(get = __cordl_internal_get_skyOcclusionBakingSamples, put = __cordl_internal_set_skyOcclusionBakingSamples)) int32_t skyOcclusionBakingSamples;

  /// @brief Field skyOcclusionShadingDirection, offset 0x1dd, size 0x1
  __declspec(property(get = __cordl_internal_get_skyOcclusionShadingDirection, put = __cordl_internal_set_skyOcclusionShadingDirection)) bool skyOcclusionShadingDirection;

  /// @brief Field supportDataChunkSize, offset 0x150, size 0x4
  __declspec(property(get = __cordl_internal_get_supportDataChunkSize, put = __cordl_internal_set_supportDataChunkSize)) int32_t supportDataChunkSize;

  /// @brief Field supportLayerMaskChunkSize, offset 0x148, size 0x4
  __declspec(property(get = __cordl_internal_get_supportLayerMaskChunkSize, put = __cordl_internal_set_supportLayerMaskChunkSize)) int32_t supportLayerMaskChunkSize;

  /// @brief Field supportOffsetsChunkSize, offset 0x14c, size 0x4
  __declspec(property(get = __cordl_internal_get_supportOffsetsChunkSize, put = __cordl_internal_set_supportOffsetsChunkSize)) int32_t supportOffsetsChunkSize;

  /// @brief Field supportPositionChunkSize, offset 0x13c, size 0x4
  __declspec(property(get = __cordl_internal_get_supportPositionChunkSize, put = __cordl_internal_set_supportPositionChunkSize)) int32_t supportPositionChunkSize;

  /// @brief Field supportTouchupChunkSize, offset 0x144, size 0x4
  __declspec(property(get = __cordl_internal_get_supportTouchupChunkSize, put = __cordl_internal_set_supportTouchupChunkSize)) int32_t supportTouchupChunkSize;

  /// @brief Field supportValidityChunkSize, offset 0x140, size 0x4
  __declspec(property(get = __cordl_internal_get_supportValidityChunkSize, put = __cordl_internal_set_supportValidityChunkSize)) int32_t supportValidityChunkSize;

  /// @brief Field useRenderingLayers, offset 0x1de, size 0x1
  __declspec(property(get = __cordl_internal_get_useRenderingLayers, put = __cordl_internal_set_useRenderingLayers)) bool useRenderingLayers;

  /// @brief Field version, offset 0x1a8, size 0x4
  __declspec(property(get = __cordl_internal_get_version, put = __cordl_internal_set_version)) ::UnityEngine::Rendering::ProbeVolumeBakingSet_Version version;

  /// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
  constexpr operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

  /// @brief Method AlignUp16, addr 0x65dcb80, size 0x28, virtual false, abstract: false, final false
  static inline int32_t AlignUp16(int32_t count);

  /// @brief Method BlendLightingScenario, addr 0x65dbfe4, size 0x344, virtual false, abstract: false, final false
  inline void BlendLightingScenario(::StringW otherScenario, float_t blendingFactor);

  /// @brief Method CheckCompatibleCellLayout, addr 0x65db334, size 0x8c, virtual false, abstract: false, final false
  inline bool CheckCompatibleCellLayout();

  /// @brief Method Cleanup, addr 0x65dc328, size 0x368, virtual false, abstract: false, final false
  inline void Cleanup();

  /// @brief Method ComputeHasSupportData, addr 0x65db1e0, size 0x24, virtual false, abstract: false, final false
  inline bool ComputeHasSupportData();

  /// @brief Method ComputeHasValidSharedData, addr 0x65db204, size 0x38, virtual false, abstract: false, final false
  inline bool ComputeHasValidSharedData();

  /// @brief Method ComputeRegionMasks, addr 0x65dae68, size 0xe0, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 ComputeRegionMasks();

  /// @brief Method GetBakingHashCode, addr 0x65dca3c, size 0x144, virtual false, abstract: false, final false
  inline int32_t GetBakingHashCode();

  /// @brief Method GetCellData, addr 0x65dec08, size 0x7c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::ProbeReferenceVolume_CellData* GetCellData(int32_t cellIndex);

  /// @brief Method GetCellDesc, addr 0x65deb8c, size 0x7c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::ProbeReferenceVolume_CellDesc* GetCellDesc(int32_t cellIndex);

  /// @brief Method GetCellSizeInBricks, addr 0x65dad84, size 0x30, virtual false, abstract: false, final false
  static inline int32_t GetCellSizeInBricks(int32_t simplificationLevels);

  /// @brief Method GetChunkGPUMemory, addr 0x65dec84, size 0x3c, virtual false, abstract: false, final false
  inline int32_t GetChunkGPUMemory(::UnityEngine::Rendering::ProbeVolumeSHBands shBands);

  /// @brief Method GetMaxSubdivision, addr 0x65dadc0, size 0x8, virtual false, abstract: false, final false
  static inline int32_t GetMaxSubdivision(int32_t simplificationLevels);

  /// @brief Method GetMinBrickSize, addr 0x65dade8, size 0x1c, virtual false, abstract: false, final false
  static inline float_t GetMinBrickSize(float_t minDistanceBetweenProbes);

  /// @brief Method GetSceneCellIndexList, addr 0x65dd090, size 0x7c, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<int32_t>* GetSceneCellIndexList(::StringW sceneGUID);

  /// @brief Method GetSubArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::Unity::Collections::NativeArray_1<T> GetSubArray(::Unity::Collections::NativeArray_1<uint8_t> input, int32_t count, ::ByRef<int32_t> offset);

  /// @brief Method HasBakedData, addr 0x65db3e8, size 0x15c, virtual false, abstract: false, final false
  inline bool HasBakedData(::StringW scenario);

  /// @brief Method HasSupportData, addr 0x65db3e0, size 0x8, virtual false, abstract: false, final false
  inline bool HasSupportData();

  /// @brief Method HasValidSharedData, addr 0x65db32c, size 0x8, virtual false, abstract: false, final false
  inline bool HasValidSharedData();

  /// @brief Method Initialize, addr 0x65dbb10, size 0x488, virtual false, abstract: false, final false
  inline void Initialize(bool useStreamingAsset);

  /// @brief Method LoadStreambleAssetData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  inline ::Unity::Collections::NativeArray_1<T> LoadStreambleAssetData(::UnityEngine::Rendering::ProbeVolumeStreamableAsset* asset, ::System::Collections::Generic::List_1<int32_t>* cellIndices);

  /// @brief Method Migrate, addr 0x65db120, size 0xc0, virtual false, abstract: false, final false
  inline void Migrate();

  static inline ::UnityEngine::Rendering::ProbeVolumeBakingSet* New_ctor();

  /// @brief Method OnEnable, addr 0x65db0d0, size 0x50, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnValidate, addr 0x65daf48, size 0x188, virtual false, abstract: false, final false
  inline void OnValidate();

  /// @brief Method PruneCellIndexList, addr 0x65dcca4, size 0x1e8, virtual false, abstract: false, final false
  inline void PruneCellIndexList(::System::Collections::Generic::List_1<int32_t>* cellIndices, ::System::Collections::Generic::List_1<int32_t>* prunedIndexList);

  /// @brief Method PruneCellIndexListForScenario, addr 0x65dce8c, size 0x204, virtual false, abstract: false, final false
  inline void PruneCellIndexListForScenario(::System::Collections::Generic::List_1<int32_t>* cellIndices, ::UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo* scenarioData,
                                            ::System::Collections::Generic::List_1<int32_t>* prunedIndexList);

  /// @brief Method ReleaseCell, addr 0x65deaf0, size 0x9c, virtual false, abstract: false, final false
  inline void ReleaseCell(int32_t cellIndex);

  /// @brief Method ReleaseStreamableAssetData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void ReleaseStreamableAssetData(::Unity::Collections::NativeArray_1<T> buffer);

  /// @brief Method RequestScratchBuffer, addr 0x65dcba8, size 0xfc, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeArray_1<uint8_t> RequestScratchBuffer(int32_t size);

  /// @brief Method ResolveAllCellData, addr 0x65dbfb4, size 0x30, virtual false, abstract: false, final false
  inline bool ResolveAllCellData();

  /// @brief Method ResolveCellData, addr 0x65dd9c0, size 0x4a0, virtual false, abstract: false, final false
  inline bool ResolveCellData(::System::Collections::Generic::List_1<int32_t>* cellIndices);

  /// @brief Method ResolvePerScenarioCellData, addr 0x65de568, size 0x588, virtual false, abstract: false, final false
  inline bool ResolvePerScenarioCellData(::Unity::Collections::NativeArray_1<uint8_t> cellData, ::Unity::Collections::NativeArray_1<uint8_t> cellOptionalData,
                                         ::Unity::Collections::NativeArray_1<uint8_t> cellProbeOcclusionData, ::StringW scenario, ::System::Collections::Generic::List_1<int32_t>* cellIndices);

  /// @brief Method ResolvePerScenarioCellData, addr 0x65dd340, size 0x680, virtual false, abstract: false, final false
  inline bool ResolvePerScenarioCellData(::System::Collections::Generic::List_1<int32_t>* cellIndices);

  /// @brief Method ResolveSharedCellData, addr 0x65dd10c, size 0x234, virtual false, abstract: false, final false
  inline bool ResolveSharedCellData(::System::Collections::Generic::List_1<int32_t>* cellIndices);

  /// @brief Method ResolveSharedCellData, addr 0x65dde60, size 0x708, virtual false, abstract: false, final false
  inline void ResolveSharedCellData(::System::Collections::Generic::List_1<int32_t>* cellIndices, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::ProbeBrickIndex_Brick> bricksData,
                                    ::Unity::Collections::NativeArray_1<uint8_t> cellSharedData, ::Unity::Collections::NativeArray_1<uint8_t> cellSupportData);

  /// @brief Method SetActiveScenario, addr 0x65dc74c, size 0x2f0, virtual false, abstract: false, final false
  inline void SetActiveScenario(::StringW scenario, bool verbose);

  /// @brief Method UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize, addr 0x65db544, size 0x3e4, virtual true, abstract: false, final true
  inline void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize();

  /// @brief Method UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize, addr 0x65db928, size 0x1e8, virtual true, abstract: false, final true
  inline void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize();

  constexpr int32_t const& __cordl_internal_get_L0ChunkSize() const;

  constexpr int32_t& __cordl_internal_get_L0ChunkSize();

  constexpr int32_t const& __cordl_internal_get_L1ChunkSize() const;

  constexpr int32_t& __cordl_internal_get_L1ChunkSize();

  constexpr int32_t const& __cordl_internal_get_L2TextureChunkSize() const;

  constexpr int32_t& __cordl_internal_get_L2TextureChunkSize();

  constexpr int32_t const& __cordl_internal_get_ProbeOcclusionChunkSize() const;

  constexpr int32_t& __cordl_internal_get_ProbeOcclusionChunkSize();

  constexpr ::Unity::Mathematics::uint4 const& __cordl_internal_get_bakedLayerMasks() const;

  constexpr ::Unity::Mathematics::uint4& __cordl_internal_get_bakedLayerMasks();

  constexpr int32_t const& __cordl_internal_get_bakedMaskCount() const;

  constexpr int32_t& __cordl_internal_get_bakedMaskCount();

  constexpr float_t const& __cordl_internal_get_bakedMinDistanceBetweenProbes() const;

  constexpr float_t& __cordl_internal_get_bakedMinDistanceBetweenProbes();

  constexpr bool const& __cordl_internal_get_bakedProbeOcclusion() const;

  constexpr bool& __cordl_internal_get_bakedProbeOcclusion();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_bakedProbeOffset() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_bakedProbeOffset();

  constexpr int32_t const& __cordl_internal_get_bakedSimplificationLevels() const;

  constexpr int32_t& __cordl_internal_get_bakedSimplificationLevels();

  constexpr int32_t const& __cordl_internal_get_bakedSkyOcclusionValue() const;

  constexpr int32_t& __cordl_internal_get_bakedSkyOcclusionValue();

  constexpr int32_t const& __cordl_internal_get_bakedSkyShadingDirectionValue() const;

  constexpr int32_t& __cordl_internal_get_bakedSkyShadingDirectionValue();

  constexpr ::UnityEngine::Rendering::ProbeVolumeStreamableAsset* const& __cordl_internal_get_cellBricksDataAsset() const;

  constexpr ::UnityEngine::Rendering::ProbeVolumeStreamableAsset*& __cordl_internal_get_cellBricksDataAsset();

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Rendering::ProbeReferenceVolume_CellData*>* const& __cordl_internal_get_cellDataMap() const;

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Rendering::ProbeReferenceVolume_CellData*>*& __cordl_internal_get_cellDataMap();

  constexpr ::UnityEngine::Rendering::SerializedDictionary_2<int32_t, ::UnityEngine::Rendering::ProbeReferenceVolume_CellDesc*>* const& __cordl_internal_get_cellDescs() const;

  constexpr ::UnityEngine::Rendering::SerializedDictionary_2<int32_t, ::UnityEngine::Rendering::ProbeReferenceVolume_CellDesc*>*& __cordl_internal_get_cellDescs();

  constexpr ::UnityEngine::Rendering::ProbeVolumeStreamableAsset* const& __cordl_internal_get_cellSharedDataAsset() const;

  constexpr ::UnityEngine::Rendering::ProbeVolumeStreamableAsset*& __cordl_internal_get_cellSharedDataAsset();

  constexpr ::UnityEngine::Rendering::ProbeVolumeStreamableAsset* const& __cordl_internal_get_cellSupportDataAsset() const;

  constexpr ::UnityEngine::Rendering::ProbeVolumeStreamableAsset*& __cordl_internal_get_cellSupportDataAsset();

  constexpr int32_t const& __cordl_internal_get_chunkSizeInBricks() const;

  constexpr int32_t& __cordl_internal_get_chunkSizeInBricks();

  constexpr bool const& __cordl_internal_get_dialogNoProbeVolumeInSetShown() const;

  constexpr bool& __cordl_internal_get_dialogNoProbeVolumeInSetShown();

  constexpr bool const& __cordl_internal_get_freezePlacement() const;

  constexpr bool& __cordl_internal_get_freezePlacement();

  constexpr ::UnityEngine::Bounds const& __cordl_internal_get_globalBounds() const;

  constexpr ::UnityEngine::Bounds& __cordl_internal_get_globalBounds();

  constexpr ::StringW const& __cordl_internal_get_lightingScenario() const;

  constexpr ::StringW& __cordl_internal_get_lightingScenario();

  constexpr bool const& __cordl_internal_get_m_HasSupportData() const;

  constexpr bool& __cordl_internal_get_m_HasSupportData();

  constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_m_LightingScenarios() const;

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_m_LightingScenarios();

  constexpr ::StringW const& __cordl_internal_get_m_OtherScenario() const;

  constexpr ::StringW& __cordl_internal_get_m_OtherScenario();

  constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_m_PrunedIndexList() const;

  constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_m_PrunedIndexList();

  constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_m_PrunedScenarioIndexList() const;

  constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_m_PrunedScenarioIndexList();

  constexpr ::Unity::IO::LowLevel::Unsafe::ReadCommandArray const& __cordl_internal_get_m_ReadCommandArray() const;

  constexpr ::Unity::IO::LowLevel::Unsafe::ReadCommandArray& __cordl_internal_get_m_ReadCommandArray();

  constexpr ::Unity::Collections::NativeArray_1<::Unity::IO::LowLevel::Unsafe::ReadCommand> const& __cordl_internal_get_m_ReadCommandBuffer() const;

  constexpr ::Unity::Collections::NativeArray_1<::Unity::IO::LowLevel::Unsafe::ReadCommand>& __cordl_internal_get_m_ReadCommandBuffer();

  constexpr ::System::Collections::Generic::Stack_1<::Unity::Collections::NativeArray_1<uint8_t>>* const& __cordl_internal_get_m_ReadOperationScratchBuffers() const;

  constexpr ::System::Collections::Generic::Stack_1<::Unity::Collections::NativeArray_1<uint8_t>>*& __cordl_internal_get_m_ReadOperationScratchBuffers();

  constexpr float_t const& __cordl_internal_get_m_ScenarioBlendingFactor() const;

  constexpr float_t& __cordl_internal_get_m_ScenarioBlendingFactor();

  constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_m_SceneGUIDs() const;

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_m_SceneGUIDs();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeVolumeBakingSet_SerializedPerSceneCellList>* const& __cordl_internal_get_m_SerializedPerSceneCellList() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeVolumeBakingSet_SerializedPerSceneCellList>*& __cordl_internal_get_m_SerializedPerSceneCellList();

  constexpr bool const& __cordl_internal_get_m_SharedDataIsValid() const;

  constexpr bool& __cordl_internal_get_m_SharedDataIsValid();

  constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_m_TotalIndexList() const;

  constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_m_TotalIndexList();

  constexpr bool const& __cordl_internal_get_m_UseStreamingAsset() const;

  constexpr bool& __cordl_internal_get_m_UseStreamingAsset();

  constexpr ::UnityEngine::Vector3Int const& __cordl_internal_get_maxCellPosition() const;

  constexpr ::UnityEngine::Vector3Int& __cordl_internal_get_maxCellPosition();

  constexpr int32_t const& __cordl_internal_get_maxSHChunkCount() const;

  constexpr int32_t& __cordl_internal_get_maxSHChunkCount();

  constexpr ::UnityEngine::Vector3Int const& __cordl_internal_get_minCellPosition() const;

  constexpr ::UnityEngine::Vector3Int& __cordl_internal_get_minCellPosition();

  constexpr float_t const& __cordl_internal_get_minDistanceBetweenProbes() const;

  constexpr float_t& __cordl_internal_get_minDistanceBetweenProbes();

  constexpr float_t const& __cordl_internal_get_minRendererVolumeSize() const;

  constexpr float_t& __cordl_internal_get_minRendererVolumeSize();

  constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_obsoleteScenesToNotBake() const;

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_obsoleteScenesToNotBake();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<int32_t>*>* const& __cordl_internal_get_perSceneCellLists() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<int32_t>*>*& __cordl_internal_get_perSceneCellLists();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_probeOffset() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_probeOffset();

  constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_renderersLayerMask() const;

  constexpr ::UnityEngine::LayerMask& __cordl_internal_get_renderersLayerMask();

  constexpr ::ArrayW<::UnityEngine::Rendering::ProbeVolumeBakingSet_ProbeLayerMask, ::Array<::UnityEngine::Rendering::ProbeVolumeBakingSet_ProbeLayerMask>*> const&
  __cordl_internal_get_renderingLayerMasks() const;

  constexpr ::ArrayW<::UnityEngine::Rendering::ProbeVolumeBakingSet_ProbeLayerMask, ::Array<::UnityEngine::Rendering::ProbeVolumeBakingSet_ProbeLayerMask>*>&
  __cordl_internal_get_renderingLayerMasks();

  constexpr ::UnityEngine::Rendering::SerializedDictionary_2<::StringW, ::UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo*>* const& __cordl_internal_get_scenarios() const;

  constexpr ::UnityEngine::Rendering::SerializedDictionary_2<::StringW, ::UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo*>*& __cordl_internal_get_scenarios();

  constexpr ::UnityEngine::Rendering::ProbeVolumeBakingProcessSettings const& __cordl_internal_get_settings() const;

  constexpr ::UnityEngine::Rendering::ProbeVolumeBakingProcessSettings& __cordl_internal_get_settings();

  constexpr int32_t const& __cordl_internal_get_sharedDataChunkSize() const;

  constexpr int32_t& __cordl_internal_get_sharedDataChunkSize();

  constexpr int32_t const& __cordl_internal_get_sharedSkyOcclusionL0L1ChunkSize() const;

  constexpr int32_t& __cordl_internal_get_sharedSkyOcclusionL0L1ChunkSize();

  constexpr int32_t const& __cordl_internal_get_sharedSkyShadingDirectionIndicesChunkSize() const;

  constexpr int32_t& __cordl_internal_get_sharedSkyShadingDirectionIndicesChunkSize();

  constexpr int32_t const& __cordl_internal_get_sharedValidityMaskChunkSize() const;

  constexpr int32_t& __cordl_internal_get_sharedValidityMaskChunkSize();

  constexpr int32_t const& __cordl_internal_get_simplificationLevels() const;

  constexpr int32_t& __cordl_internal_get_simplificationLevels();

  constexpr bool const& __cordl_internal_get_singleSceneMode() const;

  constexpr bool& __cordl_internal_get_singleSceneMode();

  constexpr bool const& __cordl_internal_get_skyOcclusion() const;

  constexpr bool& __cordl_internal_get_skyOcclusion();

  constexpr float_t const& __cordl_internal_get_skyOcclusionAverageAlbedo() const;

  constexpr float_t& __cordl_internal_get_skyOcclusionAverageAlbedo();

  constexpr bool const& __cordl_internal_get_skyOcclusionBackFaceCulling() const;

  constexpr bool& __cordl_internal_get_skyOcclusionBackFaceCulling();

  constexpr int32_t const& __cordl_internal_get_skyOcclusionBakingBounces() const;

  constexpr int32_t& __cordl_internal_get_skyOcclusionBakingBounces();

  constexpr int32_t const& __cordl_internal_get_skyOcclusionBakingSamples() const;

  constexpr int32_t& __cordl_internal_get_skyOcclusionBakingSamples();

  constexpr bool const& __cordl_internal_get_skyOcclusionShadingDirection() const;

  constexpr bool& __cordl_internal_get_skyOcclusionShadingDirection();

  constexpr int32_t const& __cordl_internal_get_supportDataChunkSize() const;

  constexpr int32_t& __cordl_internal_get_supportDataChunkSize();

  constexpr int32_t const& __cordl_internal_get_supportLayerMaskChunkSize() const;

  constexpr int32_t& __cordl_internal_get_supportLayerMaskChunkSize();

  constexpr int32_t const& __cordl_internal_get_supportOffsetsChunkSize() const;

  constexpr int32_t& __cordl_internal_get_supportOffsetsChunkSize();

  constexpr int32_t const& __cordl_internal_get_supportPositionChunkSize() const;

  constexpr int32_t& __cordl_internal_get_supportPositionChunkSize();

  constexpr int32_t const& __cordl_internal_get_supportTouchupChunkSize() const;

  constexpr int32_t& __cordl_internal_get_supportTouchupChunkSize();

  constexpr int32_t const& __cordl_internal_get_supportValidityChunkSize() const;

  constexpr int32_t& __cordl_internal_get_supportValidityChunkSize();

  constexpr bool const& __cordl_internal_get_useRenderingLayers() const;

  constexpr bool& __cordl_internal_get_useRenderingLayers();

  constexpr ::UnityEngine::Rendering::ProbeVolumeBakingSet_Version const& __cordl_internal_get_version() const;

  constexpr ::UnityEngine::Rendering::ProbeVolumeBakingSet_Version& __cordl_internal_get_version();

  constexpr void __cordl_internal_set_L0ChunkSize(int32_t value);

  constexpr void __cordl_internal_set_L1ChunkSize(int32_t value);

  constexpr void __cordl_internal_set_L2TextureChunkSize(int32_t value);

  constexpr void __cordl_internal_set_ProbeOcclusionChunkSize(int32_t value);

  constexpr void __cordl_internal_set_bakedLayerMasks(::Unity::Mathematics::uint4 value);

  constexpr void __cordl_internal_set_bakedMaskCount(int32_t value);

  constexpr void __cordl_internal_set_bakedMinDistanceBetweenProbes(float_t value);

  constexpr void __cordl_internal_set_bakedProbeOcclusion(bool value);

  constexpr void __cordl_internal_set_bakedProbeOffset(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_bakedSimplificationLevels(int32_t value);

  constexpr void __cordl_internal_set_bakedSkyOcclusionValue(int32_t value);

  constexpr void __cordl_internal_set_bakedSkyShadingDirectionValue(int32_t value);

  constexpr void __cordl_internal_set_cellBricksDataAsset(::UnityEngine::Rendering::ProbeVolumeStreamableAsset* value);

  constexpr void __cordl_internal_set_cellDataMap(::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Rendering::ProbeReferenceVolume_CellData*>* value);

  constexpr void __cordl_internal_set_cellDescs(::UnityEngine::Rendering::SerializedDictionary_2<int32_t, ::UnityEngine::Rendering::ProbeReferenceVolume_CellDesc*>* value);

  constexpr void __cordl_internal_set_cellSharedDataAsset(::UnityEngine::Rendering::ProbeVolumeStreamableAsset* value);

  constexpr void __cordl_internal_set_cellSupportDataAsset(::UnityEngine::Rendering::ProbeVolumeStreamableAsset* value);

  constexpr void __cordl_internal_set_chunkSizeInBricks(int32_t value);

  constexpr void __cordl_internal_set_dialogNoProbeVolumeInSetShown(bool value);

  constexpr void __cordl_internal_set_freezePlacement(bool value);

  constexpr void __cordl_internal_set_globalBounds(::UnityEngine::Bounds value);

  constexpr void __cordl_internal_set_lightingScenario(::StringW value);

  constexpr void __cordl_internal_set_m_HasSupportData(bool value);

  constexpr void __cordl_internal_set_m_LightingScenarios(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set_m_OtherScenario(::StringW value);

  constexpr void __cordl_internal_set_m_PrunedIndexList(::System::Collections::Generic::List_1<int32_t>* value);

  constexpr void __cordl_internal_set_m_PrunedScenarioIndexList(::System::Collections::Generic::List_1<int32_t>* value);

  constexpr void __cordl_internal_set_m_ReadCommandArray(::Unity::IO::LowLevel::Unsafe::ReadCommandArray value);

  constexpr void __cordl_internal_set_m_ReadCommandBuffer(::Unity::Collections::NativeArray_1<::Unity::IO::LowLevel::Unsafe::ReadCommand> value);

  constexpr void __cordl_internal_set_m_ReadOperationScratchBuffers(::System::Collections::Generic::Stack_1<::Unity::Collections::NativeArray_1<uint8_t>>* value);

  constexpr void __cordl_internal_set_m_ScenarioBlendingFactor(float_t value);

  constexpr void __cordl_internal_set_m_SceneGUIDs(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set_m_SerializedPerSceneCellList(::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeVolumeBakingSet_SerializedPerSceneCellList>* value);

  constexpr void __cordl_internal_set_m_SharedDataIsValid(bool value);

  constexpr void __cordl_internal_set_m_TotalIndexList(::System::Collections::Generic::List_1<int32_t>* value);

  constexpr void __cordl_internal_set_m_UseStreamingAsset(bool value);

  constexpr void __cordl_internal_set_maxCellPosition(::UnityEngine::Vector3Int value);

  constexpr void __cordl_internal_set_maxSHChunkCount(int32_t value);

  constexpr void __cordl_internal_set_minCellPosition(::UnityEngine::Vector3Int value);

  constexpr void __cordl_internal_set_minDistanceBetweenProbes(float_t value);

  constexpr void __cordl_internal_set_minRendererVolumeSize(float_t value);

  constexpr void __cordl_internal_set_obsoleteScenesToNotBake(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set_perSceneCellLists(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<int32_t>*>* value);

  constexpr void __cordl_internal_set_probeOffset(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_renderersLayerMask(::UnityEngine::LayerMask value);

  constexpr void
  __cordl_internal_set_renderingLayerMasks(::ArrayW<::UnityEngine::Rendering::ProbeVolumeBakingSet_ProbeLayerMask, ::Array<::UnityEngine::Rendering::ProbeVolumeBakingSet_ProbeLayerMask>*> value);

  constexpr void __cordl_internal_set_scenarios(::UnityEngine::Rendering::SerializedDictionary_2<::StringW, ::UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo*>* value);

  constexpr void __cordl_internal_set_settings(::UnityEngine::Rendering::ProbeVolumeBakingProcessSettings value);

  constexpr void __cordl_internal_set_sharedDataChunkSize(int32_t value);

  constexpr void __cordl_internal_set_sharedSkyOcclusionL0L1ChunkSize(int32_t value);

  constexpr void __cordl_internal_set_sharedSkyShadingDirectionIndicesChunkSize(int32_t value);

  constexpr void __cordl_internal_set_sharedValidityMaskChunkSize(int32_t value);

  constexpr void __cordl_internal_set_simplificationLevels(int32_t value);

  constexpr void __cordl_internal_set_singleSceneMode(bool value);

  constexpr void __cordl_internal_set_skyOcclusion(bool value);

  constexpr void __cordl_internal_set_skyOcclusionAverageAlbedo(float_t value);

  constexpr void __cordl_internal_set_skyOcclusionBackFaceCulling(bool value);

  constexpr void __cordl_internal_set_skyOcclusionBakingBounces(int32_t value);

  constexpr void __cordl_internal_set_skyOcclusionBakingSamples(int32_t value);

  constexpr void __cordl_internal_set_skyOcclusionShadingDirection(bool value);

  constexpr void __cordl_internal_set_supportDataChunkSize(int32_t value);

  constexpr void __cordl_internal_set_supportLayerMaskChunkSize(int32_t value);

  constexpr void __cordl_internal_set_supportOffsetsChunkSize(int32_t value);

  constexpr void __cordl_internal_set_supportPositionChunkSize(int32_t value);

  constexpr void __cordl_internal_set_supportTouchupChunkSize(int32_t value);

  constexpr void __cordl_internal_set_supportValidityChunkSize(int32_t value);

  constexpr void __cordl_internal_set_useRenderingLayers(bool value);

  constexpr void __cordl_internal_set_version(::UnityEngine::Rendering::ProbeVolumeBakingSet_Version value);

  /// @brief Method .ctor, addr 0x65decc0, size 0x470, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_bakedSkyOcclusion, addr 0x65dacf0, size 0x10, virtual false, abstract: false, final false
  inline bool get_bakedSkyOcclusion();

  /// @brief Method get_bakedSkyShadingDirection, addr 0x65dad18, size 0x10, virtual false, abstract: false, final false
  inline bool get_bakedSkyShadingDirection();

  /// @brief Method get_cellSizeInBricks, addr 0x65dad50, size 0x34, virtual false, abstract: false, final false
  inline int32_t get_cellSizeInBricks();

  /// @brief Method get_cellSizeInMeters, addr 0x65dae04, size 0x64, virtual false, abstract: false, final false
  inline float_t get_cellSizeInMeters();

  /// @brief Method get_hasDilation, addr 0x65dacc0, size 0x20, virtual false, abstract: false, final false
  inline bool get_hasDilation();

  /// @brief Method get_lightingScenarios, addr 0x65dace8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IReadOnlyList_1<::StringW>* get_lightingScenarios();

  /// @brief Method get_maxSubdivision, addr 0x65dadb4, size 0xc, virtual false, abstract: false, final false
  inline int32_t get_maxSubdivision();

  /// @brief Method get_minBrickSize, addr 0x65dadc8, size 0x20, virtual false, abstract: false, final false
  inline float_t get_minBrickSize();

  /// @brief Method get_otherScenario, addr 0x65dad40, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_otherScenario();

  /// @brief Method get_scenarioBlendingFactor, addr 0x65dad48, size 0x8, virtual false, abstract: false, final false
  inline float_t get_scenarioBlendingFactor();

  /// @brief Method get_sceneGUIDs, addr 0x65dace0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IReadOnlyList_1<::StringW>* get_sceneGUIDs();

  /// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
  constexpr ::UnityEngine::ISerializationCallbackReceiver* i___UnityEngine__ISerializationCallbackReceiver() noexcept;

  /// @brief Method set_bakedSkyOcclusion, addr 0x65dad00, size 0x18, virtual false, abstract: false, final false
  inline void set_bakedSkyOcclusion(bool value);

  /// @brief Method set_bakedSkyShadingDirection, addr 0x65dad28, size 0x18, virtual false, abstract: false, final false
  inline void set_bakedSkyShadingDirection(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProbeVolumeBakingSet();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProbeVolumeBakingSet", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProbeVolumeBakingSet(ProbeVolumeBakingSet&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProbeVolumeBakingSet", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProbeVolumeBakingSet(ProbeVolumeBakingSet const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12113 };

  /// @brief Field k_MaxSkyOcclusionBakingSamples offset 0xffffffff size 0x4
  static constexpr int32_t k_MaxSkyOcclusionBakingSamples{ static_cast<int32_t>(0x2000) };

  /// @brief Field singleSceneMode, offset: 0x18, size: 0x1, def value: None
  bool ___singleSceneMode;

  /// @brief Field dialogNoProbeVolumeInSetShown, offset: 0x19, size: 0x1, def value: None
  bool ___dialogNoProbeVolumeInSetShown;

  /// @brief Field settings, offset: 0x1c, size: 0x30, def value: None
  ::UnityEngine::Rendering::ProbeVolumeBakingProcessSettings ___settings;

  /// @brief Field m_SceneGUIDs, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ___m_SceneGUIDs;

  /// @brief Field obsoleteScenesToNotBake, offset: 0x58, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ___obsoleteScenesToNotBake;

  /// @brief Field m_LightingScenarios, offset: 0x60, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ___m_LightingScenarios;

  /// @brief Field cellDescs, offset: 0x68, size: 0x8, def value: None
  ::UnityEngine::Rendering::SerializedDictionary_2<int32_t, ::UnityEngine::Rendering::ProbeReferenceVolume_CellDesc*>* ___cellDescs;

  /// @brief Field cellDataMap, offset: 0x70, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Rendering::ProbeReferenceVolume_CellData*>* ___cellDataMap;

  /// @brief Field m_TotalIndexList, offset: 0x78, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<int32_t>* ___m_TotalIndexList;

  /// @brief Field m_SerializedPerSceneCellList, offset: 0x80, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeVolumeBakingSet_SerializedPerSceneCellList>* ___m_SerializedPerSceneCellList;

  /// @brief Field perSceneCellLists, offset: 0x88, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<int32_t>*>* ___perSceneCellLists;

  /// @brief Field cellSharedDataAsset, offset: 0x90, size: 0x8, def value: None
  ::UnityEngine::Rendering::ProbeVolumeStreamableAsset* ___cellSharedDataAsset;

  /// @brief Field scenarios, offset: 0x98, size: 0x8, def value: None
  ::UnityEngine::Rendering::SerializedDictionary_2<::StringW, ::UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo*>* ___scenarios;

  /// @brief Field cellBricksDataAsset, offset: 0xa0, size: 0x8, def value: None
  ::UnityEngine::Rendering::ProbeVolumeStreamableAsset* ___cellBricksDataAsset;

  /// @brief Field cellSupportDataAsset, offset: 0xa8, size: 0x8, def value: None
  ::UnityEngine::Rendering::ProbeVolumeStreamableAsset* ___cellSupportDataAsset;

  /// @brief Field chunkSizeInBricks, offset: 0xb0, size: 0x4, def value: None
  int32_t ___chunkSizeInBricks;

  /// @brief Field maxCellPosition, offset: 0xb4, size: 0xc, def value: None
  ::UnityEngine::Vector3Int ___maxCellPosition;

  /// @brief Field minCellPosition, offset: 0xc0, size: 0xc, def value: None
  ::UnityEngine::Vector3Int ___minCellPosition;

  /// @brief Field globalBounds, offset: 0xcc, size: 0x18, def value: None
  ::UnityEngine::Bounds ___globalBounds;

  /// @brief Field bakedSimplificationLevels, offset: 0xe4, size: 0x4, def value: None
  int32_t ___bakedSimplificationLevels;

  /// @brief Field bakedMinDistanceBetweenProbes, offset: 0xe8, size: 0x4, def value: None
  float_t ___bakedMinDistanceBetweenProbes;

  /// @brief Field bakedProbeOcclusion, offset: 0xec, size: 0x1, def value: None
  bool ___bakedProbeOcclusion;

  /// @brief Field bakedSkyOcclusionValue, offset: 0xf0, size: 0x4, def value: None
  int32_t ___bakedSkyOcclusionValue;

  /// @brief Field bakedSkyShadingDirectionValue, offset: 0xf4, size: 0x4, def value: None
  int32_t ___bakedSkyShadingDirectionValue;

  /// @brief Field bakedProbeOffset, offset: 0xf8, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___bakedProbeOffset;

  /// @brief Field bakedMaskCount, offset: 0x104, size: 0x4, def value: None
  int32_t ___bakedMaskCount;

  /// @brief Field bakedLayerMasks, offset: 0x108, size: 0x10, def value: None
  ::Unity::Mathematics::uint4 ___bakedLayerMasks;

  /// @brief Field maxSHChunkCount, offset: 0x118, size: 0x4, def value: None
  int32_t ___maxSHChunkCount;

  /// @brief Field L0ChunkSize, offset: 0x11c, size: 0x4, def value: None
  int32_t ___L0ChunkSize;

  /// @brief Field L1ChunkSize, offset: 0x120, size: 0x4, def value: None
  int32_t ___L1ChunkSize;

  /// @brief Field L2TextureChunkSize, offset: 0x124, size: 0x4, def value: None
  int32_t ___L2TextureChunkSize;

  /// @brief Field ProbeOcclusionChunkSize, offset: 0x128, size: 0x4, def value: None
  int32_t ___ProbeOcclusionChunkSize;

  /// @brief Field sharedValidityMaskChunkSize, offset: 0x12c, size: 0x4, def value: None
  int32_t ___sharedValidityMaskChunkSize;

  /// @brief Field sharedSkyOcclusionL0L1ChunkSize, offset: 0x130, size: 0x4, def value: None
  int32_t ___sharedSkyOcclusionL0L1ChunkSize;

  /// @brief Field sharedSkyShadingDirectionIndicesChunkSize, offset: 0x134, size: 0x4, def value: None
  int32_t ___sharedSkyShadingDirectionIndicesChunkSize;

  /// @brief Field sharedDataChunkSize, offset: 0x138, size: 0x4, def value: None
  int32_t ___sharedDataChunkSize;

  /// @brief Field supportPositionChunkSize, offset: 0x13c, size: 0x4, def value: None
  int32_t ___supportPositionChunkSize;

  /// @brief Field supportValidityChunkSize, offset: 0x140, size: 0x4, def value: None
  int32_t ___supportValidityChunkSize;

  /// @brief Field supportTouchupChunkSize, offset: 0x144, size: 0x4, def value: None
  int32_t ___supportTouchupChunkSize;

  /// @brief Field supportLayerMaskChunkSize, offset: 0x148, size: 0x4, def value: None
  int32_t ___supportLayerMaskChunkSize;

  /// @brief Field supportOffsetsChunkSize, offset: 0x14c, size: 0x4, def value: None
  int32_t ___supportOffsetsChunkSize;

  /// @brief Field supportDataChunkSize, offset: 0x150, size: 0x4, def value: None
  int32_t ___supportDataChunkSize;

  /// @brief Field lightingScenario, offset: 0x158, size: 0x8, def value: None
  ::StringW ___lightingScenario;

  /// @brief Field m_OtherScenario, offset: 0x160, size: 0x8, def value: None
  ::StringW ___m_OtherScenario;

  /// @brief Field m_ScenarioBlendingFactor, offset: 0x168, size: 0x4, def value: None
  float_t ___m_ScenarioBlendingFactor;

  /// @brief Field m_ReadCommandArray, offset: 0x170, size: 0x10, def value: None
  ::Unity::IO::LowLevel::Unsafe::ReadCommandArray ___m_ReadCommandArray;

  /// @brief Field m_ReadCommandBuffer, offset: 0x180, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::Unity::IO::LowLevel::Unsafe::ReadCommand> ___m_ReadCommandBuffer;

  /// @brief Field m_ReadOperationScratchBuffers, offset: 0x190, size: 0x8, def value: None
  ::System::Collections::Generic::Stack_1<::Unity::Collections::NativeArray_1<uint8_t>>* ___m_ReadOperationScratchBuffers;

  /// @brief Field m_PrunedIndexList, offset: 0x198, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<int32_t>* ___m_PrunedIndexList;

  /// @brief Field m_PrunedScenarioIndexList, offset: 0x1a0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<int32_t>* ___m_PrunedScenarioIndexList;

  /// @brief Field version, offset: 0x1a8, size: 0x4, def value: None
  ::UnityEngine::Rendering::ProbeVolumeBakingSet_Version ___version;

  /// @brief Field freezePlacement, offset: 0x1ac, size: 0x1, def value: None
  bool ___freezePlacement;

  /// @brief Field probeOffset, offset: 0x1b0, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___probeOffset;

  /// @brief Field simplificationLevels, offset: 0x1bc, size: 0x4, def value: None
  int32_t ___simplificationLevels;

  /// @brief Field minDistanceBetweenProbes, offset: 0x1c0, size: 0x4, def value: None
  float_t ___minDistanceBetweenProbes;

  /// @brief Field renderersLayerMask, offset: 0x1c4, size: 0x4, def value: None
  ::UnityEngine::LayerMask ___renderersLayerMask;

  /// @brief Field minRendererVolumeSize, offset: 0x1c8, size: 0x4, def value: None
  float_t ___minRendererVolumeSize;

  /// @brief Field skyOcclusion, offset: 0x1cc, size: 0x1, def value: None
  bool ___skyOcclusion;

  /// @brief Field skyOcclusionBakingSamples, offset: 0x1d0, size: 0x4, def value: None
  int32_t ___skyOcclusionBakingSamples;

  /// @brief Field skyOcclusionBakingBounces, offset: 0x1d4, size: 0x4, def value: None
  int32_t ___skyOcclusionBakingBounces;

  /// @brief Field skyOcclusionAverageAlbedo, offset: 0x1d8, size: 0x4, def value: None
  float_t ___skyOcclusionAverageAlbedo;

  /// @brief Field skyOcclusionBackFaceCulling, offset: 0x1dc, size: 0x1, def value: None
  bool ___skyOcclusionBackFaceCulling;

  /// @brief Field skyOcclusionShadingDirection, offset: 0x1dd, size: 0x1, def value: None
  bool ___skyOcclusionShadingDirection;

  /// @brief Field useRenderingLayers, offset: 0x1de, size: 0x1, def value: None
  bool ___useRenderingLayers;

  /// @brief Field renderingLayerMasks, offset: 0x1e0, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::ProbeVolumeBakingSet_ProbeLayerMask, ::Array<::UnityEngine::Rendering::ProbeVolumeBakingSet_ProbeLayerMask>*> ___renderingLayerMasks;

  /// @brief Field m_HasSupportData, offset: 0x1e8, size: 0x1, def value: None
  bool ___m_HasSupportData;

  /// @brief Field m_SharedDataIsValid, offset: 0x1e9, size: 0x1, def value: None
  bool ___m_SharedDataIsValid;

  /// @brief Field m_UseStreamingAsset, offset: 0x1ea, size: 0x1, def value: None
  bool ___m_UseStreamingAsset;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeBakingSet, ___singleSceneMode) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeBakingSet, ___dialogNoProbeVolumeInSetShown) == 0x19, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeBakingSet, ___settings) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeBakingSet, ___m_SceneGUIDs) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeBakingSet, ___obsoleteScenesToNotBake) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeBakingSet, ___m_LightingScenarios) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeBakingSet, ___cellDescs) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeBakingSet, ___cellDataMap) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeBakingSet, ___m_TotalIndexList) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeBakingSet, ___m_SerializedPerSceneCellList) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeBakingSet, ___perSceneCellLists) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeBakingSet, ___cellSharedDataAsset) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeBakingSet, ___scenarios) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeBakingSet, ___cellBricksDataAsset) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeBakingSet, ___cellSupportDataAsset) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeBakingSet, ___chunkSizeInBricks) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeBakingSet, ___maxCellPosition) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeBakingSet, ___minCellPosition) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeBakingSet, ___globalBounds) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeBakingSet, ___bakedSimplificationLevels) == 0xe4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeBakingSet, ___bakedMinDistanceBetweenProbes) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeBakingSet, ___bakedProbeOcclusion) == 0xec, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeBakingSet, ___bakedSkyOcclusionValue) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeBakingSet, ___bakedSkyShadingDirectionValue) == 0xf4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeBakingSet, ___bakedProbeOffset) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeBakingSet, ___bakedMaskCount) == 0x104, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeBakingSet, ___bakedLayerMasks) == 0x108, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeBakingSet, ___maxSHChunkCount) == 0x118, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeBakingSet, ___L0ChunkSize) == 0x11c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeBakingSet, ___L1ChunkSize) == 0x120, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeBakingSet, ___L2TextureChunkSize) == 0x124, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeBakingSet, ___ProbeOcclusionChunkSize) == 0x128, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeBakingSet, ___sharedValidityMaskChunkSize) == 0x12c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeBakingSet, ___sharedSkyOcclusionL0L1ChunkSize) == 0x130, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeBakingSet, ___sharedSkyShadingDirectionIndicesChunkSize) == 0x134, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeBakingSet, ___sharedDataChunkSize) == 0x138, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeBakingSet, ___supportPositionChunkSize) == 0x13c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeBakingSet, ___supportValidityChunkSize) == 0x140, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeBakingSet, ___supportTouchupChunkSize) == 0x144, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeBakingSet, ___supportLayerMaskChunkSize) == 0x148, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeBakingSet, ___supportOffsetsChunkSize) == 0x14c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeBakingSet, ___supportDataChunkSize) == 0x150, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeBakingSet, ___lightingScenario) == 0x158, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeBakingSet, ___m_OtherScenario) == 0x160, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeBakingSet, ___m_ScenarioBlendingFactor) == 0x168, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeBakingSet, ___m_ReadCommandArray) == 0x170, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeBakingSet, ___m_ReadCommandBuffer) == 0x180, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeBakingSet, ___m_ReadOperationScratchBuffers) == 0x190, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeBakingSet, ___m_PrunedIndexList) == 0x198, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeBakingSet, ___m_PrunedScenarioIndexList) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeBakingSet, ___version) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeBakingSet, ___freezePlacement) == 0x1ac, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeBakingSet, ___probeOffset) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeBakingSet, ___simplificationLevels) == 0x1bc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeBakingSet, ___minDistanceBetweenProbes) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeBakingSet, ___renderersLayerMask) == 0x1c4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeBakingSet, ___minRendererVolumeSize) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeBakingSet, ___skyOcclusion) == 0x1cc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeBakingSet, ___skyOcclusionBakingSamples) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeBakingSet, ___skyOcclusionBakingBounces) == 0x1d4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeBakingSet, ___skyOcclusionAverageAlbedo) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeBakingSet, ___skyOcclusionBackFaceCulling) == 0x1dc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeBakingSet, ___skyOcclusionShadingDirection) == 0x1dd, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeBakingSet, ___useRenderingLayers) == 0x1de, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeBakingSet, ___renderingLayerMasks) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeBakingSet, ___m_HasSupportData) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeBakingSet, ___m_SharedDataIsValid) == 0x1e9, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeBakingSet, ___m_UseStreamingAsset) == 0x1ea, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ProbeVolumeBakingSet, 0x1f0>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ProbeVolumeBakingSet_Version, "UnityEngine.Rendering", "ProbeVolumeBakingSet/Version");
NEED_NO_BOX(::UnityEngine::Rendering::ProbeVolumeBakingSet);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ProbeVolumeBakingSet*, "UnityEngine.Rendering", "ProbeVolumeBakingSet");
NEED_NO_BOX(::UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo*, "UnityEngine.Rendering", "ProbeVolumeBakingSet/PerScenarioDataInfo");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ProbeVolumeBakingSet_CellCounts, "UnityEngine.Rendering", "ProbeVolumeBakingSet/CellCounts");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ProbeVolumeBakingSet_ProbeLayerMask, "UnityEngine.Rendering", "ProbeVolumeBakingSet/ProbeLayerMask");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ProbeVolumeBakingSet_SerializedPerSceneCellList, "UnityEngine.Rendering", "ProbeVolumeBakingSet/SerializedPerSceneCellList");

#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ProbeBrickIndex.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/zzzz__Vector3Int_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ProbeBrickIndex)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections {
class BitArray;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace UnityEngine::Rendering {
struct ProbeBrickIndex_Brick;
}
namespace UnityEngine::Rendering {
struct ProbeBrickIndex_CellIndexUpdateInfo;
}
namespace UnityEngine::Rendering {
struct ProbeBrickIndex_IndirectionEntryUpdateInfo;
}
namespace UnityEngine::Rendering {
struct ProbeBrickPool_BrickChunkAlloc;
}
namespace UnityEngine::Rendering {
class ProbeReferenceVolume_CellIndexInfo;
}
namespace UnityEngine::Rendering {
struct ProbeReferenceVolume_RuntimeResources;
}
namespace UnityEngine::Rendering {
struct ProbeVolumeTextureMemoryBudget;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
class ComputeBuffer;
}
namespace UnityEngine {
struct Vector3Int;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class ProbeBrickIndex;
}
namespace UnityEngine::Rendering {
struct ProbeBrickIndex_Brick;
}
namespace UnityEngine::Rendering {
struct ProbeBrickIndex_CellIndexUpdateInfo;
}
namespace UnityEngine::Rendering {
struct ProbeBrickIndex_IndirectionEntryUpdateInfo;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::ProbeBrickIndex);
MARK_VAL_T(::UnityEngine::Rendering::ProbeBrickIndex_Brick);
MARK_VAL_T(::UnityEngine::Rendering::ProbeBrickIndex_CellIndexUpdateInfo);
MARK_VAL_T(::UnityEngine::Rendering::ProbeBrickIndex_IndirectionEntryUpdateInfo);
// Dependencies UnityEngine.Vector3Int
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.ProbeBrickIndex/Brick
struct CORDL_TYPE ProbeBrickIndex_Brick {
public:
  // Declarations
  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::ProbeBrickIndex_Brick>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Rendering::ProbeBrickIndex_Brick>*();

  /// @brief Method Equals, addr 0x656abec, size 0x48, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Rendering::ProbeBrickIndex_Brick other);

  /// @brief Method IntersectArea, addr 0x656ac34, size 0x1a0, virtual false, abstract: false, final false
  inline bool IntersectArea(::UnityEngine::Bounds boundInBricksToCheck);

  /// @brief Method .ctor, addr 0x656abe0, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Vector3Int position, int32_t subdivisionLevel);

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::Rendering::ProbeBrickIndex_Brick>"
  constexpr ::System::IEquatable_1<::UnityEngine::Rendering::ProbeBrickIndex_Brick>* i___System__IEquatable_1___UnityEngine__Rendering__ProbeBrickIndex_Brick_();

  // Ctor Parameters []
  // @brief default ctor
  constexpr ProbeBrickIndex_Brick();

  // Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector3Int", modifiers: "", def_value: None }, CppParam { name: "subdivisionLevel", ty: "int32_t", modifiers: "", def_value: None
  // }]
  constexpr ProbeBrickIndex_Brick(::UnityEngine::Vector3Int position, int32_t subdivisionLevel) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12049 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field position, offset: 0x0, size: 0xc, def value: None
  ::UnityEngine::Vector3Int position;

  /// @brief Field subdivisionLevel, offset: 0xc, size: 0x4, def value: None
  int32_t subdivisionLevel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::ProbeBrickIndex_Brick, position) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeBrickIndex_Brick, subdivisionLevel) == 0xc, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ProbeBrickIndex_Brick, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies UnityEngine.Vector3Int
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.ProbeBrickIndex/IndirectionEntryUpdateInfo
struct CORDL_TYPE ProbeBrickIndex_IndirectionEntryUpdateInfo {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProbeBrickIndex_IndirectionEntryUpdateInfo();

  // Ctor Parameters [CppParam { name: "firstChunkIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "numberOfChunks", ty: "int32_t", modifiers: "", def_value: None }, CppParam
  // { name: "minSubdivInCell", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "minValidBrickIndexForCellAtMaxRes", ty: "::UnityEngine::Vector3Int", modifiers: "", def_value: None
  // }, CppParam { name: "maxValidBrickIndexForCellAtMaxResPlusOne", ty: "::UnityEngine::Vector3Int", modifiers: "", def_value: None }, CppParam { name: "entryPositionInBricksAtMaxRes", ty:
  // "::UnityEngine::Vector3Int", modifiers: "", def_value: None }, CppParam { name: "hasOnlyBiggerBricks", ty: "bool", modifiers: "", def_value: None }]
  constexpr ProbeBrickIndex_IndirectionEntryUpdateInfo(int32_t firstChunkIndex, int32_t numberOfChunks, int32_t minSubdivInCell, ::UnityEngine::Vector3Int minValidBrickIndexForCellAtMaxRes,
                                                       ::UnityEngine::Vector3Int maxValidBrickIndexForCellAtMaxResPlusOne, ::UnityEngine::Vector3Int entryPositionInBricksAtMaxRes,
                                                       bool hasOnlyBiggerBricks) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12050 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x34 };

  /// @brief Field firstChunkIndex, offset: 0x0, size: 0x4, def value: None
  int32_t firstChunkIndex;

  /// @brief Field numberOfChunks, offset: 0x4, size: 0x4, def value: None
  int32_t numberOfChunks;

  /// @brief Field minSubdivInCell, offset: 0x8, size: 0x4, def value: None
  int32_t minSubdivInCell;

  /// @brief Field minValidBrickIndexForCellAtMaxRes, offset: 0xc, size: 0xc, def value: None
  ::UnityEngine::Vector3Int minValidBrickIndexForCellAtMaxRes;

  /// @brief Field maxValidBrickIndexForCellAtMaxResPlusOne, offset: 0x18, size: 0xc, def value: None
  ::UnityEngine::Vector3Int maxValidBrickIndexForCellAtMaxResPlusOne;

  /// @brief Field entryPositionInBricksAtMaxRes, offset: 0x24, size: 0xc, def value: None
  ::UnityEngine::Vector3Int entryPositionInBricksAtMaxRes;

  /// @brief Field hasOnlyBiggerBricks, offset: 0x30, size: 0x1, def value: None
  bool hasOnlyBiggerBricks;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::ProbeBrickIndex_IndirectionEntryUpdateInfo, firstChunkIndex) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeBrickIndex_IndirectionEntryUpdateInfo, numberOfChunks) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeBrickIndex_IndirectionEntryUpdateInfo, minSubdivInCell) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeBrickIndex_IndirectionEntryUpdateInfo, minValidBrickIndexForCellAtMaxRes) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeBrickIndex_IndirectionEntryUpdateInfo, maxValidBrickIndexForCellAtMaxResPlusOne) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeBrickIndex_IndirectionEntryUpdateInfo, entryPositionInBricksAtMaxRes) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeBrickIndex_IndirectionEntryUpdateInfo, hasOnlyBiggerBricks) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ProbeBrickIndex_IndirectionEntryUpdateInfo, 0x34>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.ProbeBrickIndex/CellIndexUpdateInfo
struct CORDL_TYPE ProbeBrickIndex_CellIndexUpdateInfo {
public:
  // Declarations
  /// @brief Method GetNumberOfChunks, addr 0x656add4, size 0x5c, virtual false, abstract: false, final false
  inline int32_t GetNumberOfChunks();

  // Ctor Parameters []
  // @brief default ctor
  constexpr ProbeBrickIndex_CellIndexUpdateInfo();

  // Ctor Parameters [CppParam { name: "entriesInfo", ty:
  // "::ArrayW<::UnityEngine::Rendering::ProbeBrickIndex_IndirectionEntryUpdateInfo,::Array<::UnityEngine::Rendering::ProbeBrickIndex_IndirectionEntryUpdateInfo>*>", modifiers: "", def_value: None }]
  constexpr ProbeBrickIndex_CellIndexUpdateInfo(
      ::ArrayW<::UnityEngine::Rendering::ProbeBrickIndex_IndirectionEntryUpdateInfo, ::Array<::UnityEngine::Rendering::ProbeBrickIndex_IndirectionEntryUpdateInfo>*> entriesInfo) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12051 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field entriesInfo, offset: 0x0, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::ProbeBrickIndex_IndirectionEntryUpdateInfo, ::Array<::UnityEngine::Rendering::ProbeBrickIndex_IndirectionEntryUpdateInfo>*> entriesInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::ProbeBrickIndex_CellIndexUpdateInfo, entriesInfo) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ProbeBrickIndex_CellIndexUpdateInfo, 0x8>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object, Unity.Collections.NativeArray`1<T>, UnityEngine.Vector3Int
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.ProbeBrickIndex
class CORDL_TYPE ProbeBrickIndex : public ::System::Object {
public:
  // Declarations
  using Brick = ::UnityEngine::Rendering::ProbeBrickIndex_Brick;

  using CellIndexUpdateInfo = ::UnityEngine::Rendering::ProbeBrickIndex_CellIndexUpdateInfo;

  using IndirectionEntryUpdateInfo = ::UnityEngine::Rendering::ProbeBrickIndex_IndirectionEntryUpdateInfo;

  /// @brief Field <estimatedVMemCost>k__BackingField, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get__estimatedVMemCost_k__BackingField, put = __cordl_internal_set__estimatedVMemCost_k__BackingField)) int32_t _estimatedVMemCost_k__BackingField;

  /// @brief Field <fragmentationRate>k__BackingField, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get__fragmentationRate_k__BackingField, put = __cordl_internal_set__fragmentationRate_k__BackingField)) float_t _fragmentationRate_k__BackingField;

  __declspec(property(get = get_estimatedVMemCost, put = set_estimatedVMemCost)) int32_t estimatedVMemCost;

  __declspec(property(get = get_fragmentationRate, put = set_fragmentationRate)) float_t fragmentationRate;

  /// @brief Field m_AvailableChunkCount, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_m_AvailableChunkCount, put = __cordl_internal_set_m_AvailableChunkCount)) int32_t m_AvailableChunkCount;

  /// @brief Field m_CenterRS, offset 0x64, size 0xc
  __declspec(property(get = __cordl_internal_get_m_CenterRS, put = __cordl_internal_set_m_CenterRS)) ::UnityEngine::Vector3Int m_CenterRS;

  /// @brief Field m_ChunksCount, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ChunksCount, put = __cordl_internal_set_m_ChunksCount)) int32_t m_ChunksCount;

  /// @brief Field m_DebugFragmentationBuffer, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DebugFragmentationBuffer, put = __cordl_internal_set_m_DebugFragmentationBuffer)) ::UnityEngine::ComputeBuffer* m_DebugFragmentationBuffer;

  /// @brief Field m_DebugFragmentationData, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DebugFragmentationData, put = __cordl_internal_set_m_DebugFragmentationData)) ::ArrayW<int32_t, ::Array<int32_t>*> m_DebugFragmentationData;

  /// @brief Field m_IndexChunks, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_IndexChunks, put = __cordl_internal_set_m_IndexChunks)) ::System::Collections::BitArray* m_IndexChunks;

  /// @brief Field m_IndexChunksCopyForChecks, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_IndexChunksCopyForChecks, put = __cordl_internal_set_m_IndexChunksCopyForChecks)) ::System::Collections::BitArray* m_IndexChunksCopyForChecks;

  /// @brief Field m_NeedUpdateIndexComputeBuffer, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get_m_NeedUpdateIndexComputeBuffer, put = __cordl_internal_set_m_NeedUpdateIndexComputeBuffer)) bool m_NeedUpdateIndexComputeBuffer;

  /// @brief Field m_PhysicalIndexBuffer, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PhysicalIndexBuffer, put = __cordl_internal_set_m_PhysicalIndexBuffer)) ::UnityEngine::ComputeBuffer* m_PhysicalIndexBuffer;

  /// @brief Field m_PhysicalIndexBufferData, offset 0x30, size 0x10
  __declspec(property(get = __cordl_internal_get_m_PhysicalIndexBufferData, put = __cordl_internal_set_m_PhysicalIndexBufferData)) ::Unity::Collections::NativeArray_1<int32_t>
      m_PhysicalIndexBufferData;

  /// @brief Field m_UpdateMaxIndex, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_m_UpdateMaxIndex, put = __cordl_internal_set_m_UpdateMaxIndex)) int32_t m_UpdateMaxIndex;

  /// @brief Field m_UpdateMinIndex, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get_m_UpdateMinIndex, put = __cordl_internal_set_m_UpdateMinIndex)) int32_t m_UpdateMinIndex;

  /// @brief Method AddBricks, addr 0x656a730, size 0x3d4, virtual false, abstract: false, final false
  inline void AddBricks(::UnityEngine::Rendering::ProbeReferenceVolume_CellIndexInfo* cellInfo, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::ProbeBrickIndex_Brick> bricks,
                        ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>* allocations, int32_t allocationSize, int32_t poolWidth, int32_t poolHeight);

  /// @brief Method BrickOverlapEntry, addr 0x656a3a0, size 0x4c, virtual false, abstract: false, final false
  static inline bool BrickOverlapEntry(::UnityEngine::Vector3Int brickMin, ::UnityEngine::Vector3Int brickMax, ::UnityEngine::Vector3Int entryMin, ::UnityEngine::Vector3Int entryMax);

  /// @brief Method Cleanup, addr 0x6569d44, size 0x9c, virtual false, abstract: false, final false
  inline void Cleanup();

  /// @brief Method Clear, addr 0x656999c, size 0xb8, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method ComputeFragmentationRate, addr 0x6569de0, size 0x64, virtual false, abstract: false, final false
  inline void ComputeFragmentationRate();

  /// @brief Method FindSlotsForEntries, addr 0x6569ed0, size 0x384, virtual false, abstract: false, final false
  inline bool FindSlotsForEntries(
      ::ByRef<::ArrayW<::UnityEngine::Rendering::ProbeBrickIndex_IndirectionEntryUpdateInfo, ::Array<::UnityEngine::Rendering::ProbeBrickIndex_IndirectionEntryUpdateInfo>*>> entriesInfo);

  /// @brief Method GetDebugFragmentationBuffer, addr 0x6569744, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::ComputeBuffer* GetDebugFragmentationBuffer();

  /// @brief Method GetNumberOfChunks, addr 0x6569e50, size 0x80, virtual false, abstract: false, final false
  inline int32_t GetNumberOfChunks(int32_t brickCount);

  /// @brief Method GetRemainingChunkCount, addr 0x6569a54, size 0x8, virtual false, abstract: false, final false
  inline int32_t GetRemainingChunkCount();

  /// @brief Method GetRuntimeResources, addr 0x6569c50, size 0xf4, virtual false, abstract: false, final false
  inline void GetRuntimeResources(::ByRef<::UnityEngine::Rendering::ProbeReferenceVolume_RuntimeResources> rr);

  /// @brief Method LocationToIndex, addr 0x656a3ec, size 0x10, virtual false, abstract: false, final false
  static inline int32_t LocationToIndex(int32_t x, int32_t y, int32_t z, ::UnityEngine::Vector3Int sizeOfValid);

  /// @brief Method MarkBrickInPhysicalBuffer, addr 0x656a3fc, size 0x334, virtual false, abstract: false, final false
  inline void MarkBrickInPhysicalBuffer(::ByRef<::UnityEngine::Rendering::ProbeBrickIndex_IndirectionEntryUpdateInfo> entry, ::UnityEngine::Vector3Int brickMin, ::UnityEngine::Vector3Int brickMax,
                                        int32_t brickSubdivLevel, int32_t entrySubdivLevel, int32_t idx);

  /// @brief Method MergeIndex, addr 0x6569e44, size 0xc, virtual false, abstract: false, final false
  inline int32_t MergeIndex(int32_t index, int32_t size);

  static inline ::UnityEngine::Rendering::ProbeBrickIndex* New_ctor(::UnityEngine::Rendering::ProbeVolumeTextureMemoryBudget memoryBudget);

  /// @brief Method RemoveBricks, addr 0x656ab18, size 0xc8, virtual false, abstract: false, final false
  inline void RemoveBricks(::UnityEngine::Rendering::ProbeReferenceVolume_CellIndexInfo* cellInfo);

  /// @brief Method ReserveChunks, addr 0x656a254, size 0x14c, virtual false, abstract: false, final false
  inline bool ReserveChunks(::ArrayW<::UnityEngine::Rendering::ProbeBrickIndex_IndirectionEntryUpdateInfo, ::Array<::UnityEngine::Rendering::ProbeBrickIndex_IndirectionEntryUpdateInfo>*> entriesInfo,
                            bool ignoreErrorLog);

  /// @brief Method SizeOfPhysicalIndexFromBudget, addr 0x656975c, size 0x48, virtual false, abstract: false, final false
  inline int32_t SizeOfPhysicalIndexFromBudget(::UnityEngine::Rendering::ProbeVolumeTextureMemoryBudget memoryBudget);

  /// @brief Method UpdateDebugData, addr 0x6569ad8, size 0x178, virtual false, abstract: false, final false
  inline void UpdateDebugData();

  /// @brief Method UploadIndexData, addr 0x6569a5c, size 0x7c, virtual false, abstract: false, final false
  inline void UploadIndexData();

  constexpr int32_t const& __cordl_internal_get__estimatedVMemCost_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__estimatedVMemCost_k__BackingField();

  constexpr float_t const& __cordl_internal_get__fragmentationRate_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__fragmentationRate_k__BackingField();

  constexpr int32_t const& __cordl_internal_get_m_AvailableChunkCount() const;

  constexpr int32_t& __cordl_internal_get_m_AvailableChunkCount();

  constexpr ::UnityEngine::Vector3Int const& __cordl_internal_get_m_CenterRS() const;

  constexpr ::UnityEngine::Vector3Int& __cordl_internal_get_m_CenterRS();

  constexpr int32_t const& __cordl_internal_get_m_ChunksCount() const;

  constexpr int32_t& __cordl_internal_get_m_ChunksCount();

  constexpr ::UnityEngine::ComputeBuffer* const& __cordl_internal_get_m_DebugFragmentationBuffer() const;

  constexpr ::UnityEngine::ComputeBuffer*& __cordl_internal_get_m_DebugFragmentationBuffer();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_m_DebugFragmentationData() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_m_DebugFragmentationData();

  constexpr ::System::Collections::BitArray* const& __cordl_internal_get_m_IndexChunks() const;

  constexpr ::System::Collections::BitArray*& __cordl_internal_get_m_IndexChunks();

  constexpr ::System::Collections::BitArray* const& __cordl_internal_get_m_IndexChunksCopyForChecks() const;

  constexpr ::System::Collections::BitArray*& __cordl_internal_get_m_IndexChunksCopyForChecks();

  constexpr bool const& __cordl_internal_get_m_NeedUpdateIndexComputeBuffer() const;

  constexpr bool& __cordl_internal_get_m_NeedUpdateIndexComputeBuffer();

  constexpr ::UnityEngine::ComputeBuffer* const& __cordl_internal_get_m_PhysicalIndexBuffer() const;

  constexpr ::UnityEngine::ComputeBuffer*& __cordl_internal_get_m_PhysicalIndexBuffer();

  constexpr ::Unity::Collections::NativeArray_1<int32_t> const& __cordl_internal_get_m_PhysicalIndexBufferData() const;

  constexpr ::Unity::Collections::NativeArray_1<int32_t>& __cordl_internal_get_m_PhysicalIndexBufferData();

  constexpr int32_t const& __cordl_internal_get_m_UpdateMaxIndex() const;

  constexpr int32_t& __cordl_internal_get_m_UpdateMaxIndex();

  constexpr int32_t const& __cordl_internal_get_m_UpdateMinIndex() const;

  constexpr int32_t& __cordl_internal_get_m_UpdateMinIndex();

  constexpr void __cordl_internal_set__estimatedVMemCost_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__fragmentationRate_k__BackingField(float_t value);

  constexpr void __cordl_internal_set_m_AvailableChunkCount(int32_t value);

  constexpr void __cordl_internal_set_m_CenterRS(::UnityEngine::Vector3Int value);

  constexpr void __cordl_internal_set_m_ChunksCount(int32_t value);

  constexpr void __cordl_internal_set_m_DebugFragmentationBuffer(::UnityEngine::ComputeBuffer* value);

  constexpr void __cordl_internal_set_m_DebugFragmentationData(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set_m_IndexChunks(::System::Collections::BitArray* value);

  constexpr void __cordl_internal_set_m_IndexChunksCopyForChecks(::System::Collections::BitArray* value);

  constexpr void __cordl_internal_set_m_NeedUpdateIndexComputeBuffer(bool value);

  constexpr void __cordl_internal_set_m_PhysicalIndexBuffer(::UnityEngine::ComputeBuffer* value);

  constexpr void __cordl_internal_set_m_PhysicalIndexBufferData(::Unity::Collections::NativeArray_1<int32_t> value);

  constexpr void __cordl_internal_set_m_UpdateMaxIndex(int32_t value);

  constexpr void __cordl_internal_set_m_UpdateMinIndex(int32_t value);

  /// @brief Method .ctor, addr 0x65697a4, size 0x1f8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::ProbeVolumeTextureMemoryBudget memoryBudget);

  /// @brief Method get_estimatedVMemCost, addr 0x6569734, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_estimatedVMemCost();

  /// @brief Method get_fragmentationRate, addr 0x656974c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_fragmentationRate();

  /// @brief Method set_estimatedVMemCost, addr 0x656973c, size 0x8, virtual false, abstract: false, final false
  inline void set_estimatedVMemCost(int32_t value);

  /// @brief Method set_fragmentationRate, addr 0x6569754, size 0x8, virtual false, abstract: false, final false
  inline void set_fragmentationRate(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProbeBrickIndex();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProbeBrickIndex", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProbeBrickIndex(ProbeBrickIndex&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProbeBrickIndex", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProbeBrickIndex(ProbeBrickIndex const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12052 };

  /// @brief Field kEmptyIndex offset 0xffffffff size 0x4
  static constexpr int32_t kEmptyIndex{ static_cast<int32_t>(0xfffffffe) };

  /// @brief Field kFailChunkIndex offset 0xffffffff size 0x4
  static constexpr int32_t kFailChunkIndex{ static_cast<int32_t>(0xffffffff) };

  /// @brief Field kIndexChunkSize offset 0xffffffff size 0x4
  static constexpr int32_t kIndexChunkSize{ static_cast<int32_t>(0xf3) };

  /// @brief Field kMaxSubdivisionLevels offset 0xffffffff size 0x4
  static constexpr int32_t kMaxSubdivisionLevels{ static_cast<int32_t>(0x7) };

  /// @brief Field m_IndexChunks, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::BitArray* ___m_IndexChunks;

  /// @brief Field m_IndexChunksCopyForChecks, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::BitArray* ___m_IndexChunksCopyForChecks;

  /// @brief Field m_ChunksCount, offset: 0x20, size: 0x4, def value: None
  int32_t ___m_ChunksCount;

  /// @brief Field m_AvailableChunkCount, offset: 0x24, size: 0x4, def value: None
  int32_t ___m_AvailableChunkCount;

  /// @brief Field m_PhysicalIndexBuffer, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::ComputeBuffer* ___m_PhysicalIndexBuffer;

  /// @brief Field m_PhysicalIndexBufferData, offset: 0x30, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> ___m_PhysicalIndexBufferData;

  /// @brief Field m_DebugFragmentationBuffer, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::ComputeBuffer* ___m_DebugFragmentationBuffer;

  /// @brief Field m_DebugFragmentationData, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___m_DebugFragmentationData;

  /// @brief Field m_NeedUpdateIndexComputeBuffer, offset: 0x50, size: 0x1, def value: None
  bool ___m_NeedUpdateIndexComputeBuffer;

  /// @brief Field m_UpdateMinIndex, offset: 0x54, size: 0x4, def value: None
  int32_t ___m_UpdateMinIndex;

  /// @brief Field m_UpdateMaxIndex, offset: 0x58, size: 0x4, def value: None
  int32_t ___m_UpdateMaxIndex;

  /// @brief Field <estimatedVMemCost>k__BackingField, offset: 0x5c, size: 0x4, def value: None
  int32_t ____estimatedVMemCost_k__BackingField;

  /// @brief Field <fragmentationRate>k__BackingField, offset: 0x60, size: 0x4, def value: None
  float_t ____fragmentationRate_k__BackingField;

  /// @brief Field m_CenterRS, offset: 0x64, size: 0xc, def value: None
  ::UnityEngine::Vector3Int ___m_CenterRS;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::ProbeBrickIndex, ___m_IndexChunks) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeBrickIndex, ___m_IndexChunksCopyForChecks) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeBrickIndex, ___m_ChunksCount) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeBrickIndex, ___m_AvailableChunkCount) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeBrickIndex, ___m_PhysicalIndexBuffer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeBrickIndex, ___m_PhysicalIndexBufferData) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeBrickIndex, ___m_DebugFragmentationBuffer) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeBrickIndex, ___m_DebugFragmentationData) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeBrickIndex, ___m_NeedUpdateIndexComputeBuffer) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeBrickIndex, ___m_UpdateMinIndex) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeBrickIndex, ___m_UpdateMaxIndex) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeBrickIndex, ____estimatedVMemCost_k__BackingField) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeBrickIndex, ____fragmentationRate_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeBrickIndex, ___m_CenterRS) == 0x64, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ProbeBrickIndex, 0x70>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::ProbeBrickIndex);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ProbeBrickIndex*, "UnityEngine.Rendering", "ProbeBrickIndex");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ProbeBrickIndex_Brick, "UnityEngine.Rendering", "ProbeBrickIndex/Brick");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ProbeBrickIndex_CellIndexUpdateInfo, "UnityEngine.Rendering", "ProbeBrickIndex/CellIndexUpdateInfo");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ProbeBrickIndex_IndirectionEntryUpdateInfo, "UnityEngine.Rendering", "ProbeBrickIndex/IndirectionEntryUpdateInfo");

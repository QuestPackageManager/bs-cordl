#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ProbeGlobalIndirection.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3Int_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ProbeGlobalIndirection)
namespace UnityEngine::Rendering {
struct ProbeGlobalIndirection_IndexMetaData;
}
namespace UnityEngine::Rendering {
class ProbeReferenceVolume_CellIndexInfo;
}
namespace UnityEngine::Rendering {
struct ProbeReferenceVolume_RuntimeResources;
}
namespace UnityEngine {
class ComputeBuffer;
}
namespace UnityEngine {
struct Vector3Int;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class ProbeGlobalIndirection;
}
namespace UnityEngine::Rendering {
struct ProbeGlobalIndirection_IndexMetaData;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::ProbeGlobalIndirection);
MARK_VAL_T(::UnityEngine::Rendering::ProbeGlobalIndirection_IndexMetaData);
// Dependencies UnityEngine.Vector3Int
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.ProbeGlobalIndirection/IndexMetaData
struct CORDL_TYPE ProbeGlobalIndirection_IndexMetaData {
public:
  // Declarations
  /// @brief Field s_PackedValues, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_PackedValues, put = setStaticF_s_PackedValues)) ::ArrayW<uint32_t, ::Array<uint32_t>*> s_PackedValues;

  /// @brief Method Pack, addr 0x65d768c, size 0x12c, virtual false, abstract: false, final false
  inline void Pack(::ByRef<::ArrayW<uint32_t, ::Array<uint32_t>*>> vals);

  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> getStaticF_s_PackedValues();

  static inline void setStaticF_s_PackedValues(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ProbeGlobalIndirection_IndexMetaData();

  // Ctor Parameters [CppParam { name: "minLocalIdx", ty: "::UnityEngine::Vector3Int", modifiers: "", def_value: None }, CppParam { name: "maxLocalIdxPlusOne", ty: "::UnityEngine::Vector3Int",
  // modifiers: "", def_value: None }, CppParam { name: "firstChunkIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "minSubdiv", ty: "int32_t", modifiers: "", def_value: None
  // }]
  constexpr ProbeGlobalIndirection_IndexMetaData(::UnityEngine::Vector3Int minLocalIdx, ::UnityEngine::Vector3Int maxLocalIdxPlusOne, int32_t firstChunkIndex, int32_t minSubdiv) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12061 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field minLocalIdx, offset: 0x0, size: 0xc, def value: None
  ::UnityEngine::Vector3Int minLocalIdx;

  /// @brief Field maxLocalIdxPlusOne, offset: 0xc, size: 0xc, def value: None
  ::UnityEngine::Vector3Int maxLocalIdxPlusOne;

  /// @brief Field firstChunkIndex, offset: 0x18, size: 0x4, def value: None
  int32_t firstChunkIndex;

  /// @brief Field minSubdiv, offset: 0x1c, size: 0x4, def value: None
  int32_t minSubdiv;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::ProbeGlobalIndirection_IndexMetaData, minLocalIdx) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeGlobalIndirection_IndexMetaData, maxLocalIdxPlusOne) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeGlobalIndirection_IndexMetaData, firstChunkIndex) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeGlobalIndirection_IndexMetaData, minSubdiv) == 0x1c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ProbeGlobalIndirection_IndexMetaData, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object, UnityEngine.Vector3Int
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.ProbeGlobalIndirection
class CORDL_TYPE ProbeGlobalIndirection : public ::System::Object {
public:
  // Declarations
  using IndexMetaData = ::UnityEngine::Rendering::ProbeGlobalIndirection_IndexMetaData;

  /// @brief Field <estimatedVMemCost>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__estimatedVMemCost_k__BackingField, put = __cordl_internal_set__estimatedVMemCost_k__BackingField)) int32_t _estimatedVMemCost_k__BackingField;

  __declspec(property(get = get_entriesPerCellDimension)) int32_t entriesPerCellDimension;

  __declspec(property(get = get_entrySizeInBricks)) int32_t entrySizeInBricks;

  __declspec(property(get = get_estimatedVMemCost, put = set_estimatedVMemCost)) int32_t estimatedVMemCost;

  /// @brief Field m_CellSizeInMinBricks, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CellSizeInMinBricks, put = __cordl_internal_set_m_CellSizeInMinBricks)) int32_t m_CellSizeInMinBricks;

  /// @brief Field m_EntriesCount, offset 0x2c, size 0xc
  __declspec(property(get = __cordl_internal_get_m_EntriesCount, put = __cordl_internal_set_m_EntriesCount)) ::UnityEngine::Vector3Int m_EntriesCount;

  /// @brief Field m_EntryMax, offset 0x44, size 0xc
  __declspec(property(get = __cordl_internal_get_m_EntryMax, put = __cordl_internal_set_m_EntryMax)) ::UnityEngine::Vector3Int m_EntryMax;

  /// @brief Field m_EntryMin, offset 0x38, size 0xc
  __declspec(property(get = __cordl_internal_get_m_EntryMin, put = __cordl_internal_set_m_EntryMin)) ::UnityEngine::Vector3Int m_EntryMin;

  /// @brief Field m_IndexOfIndicesBuffer, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_IndexOfIndicesBuffer, put = __cordl_internal_set_m_IndexOfIndicesBuffer)) ::UnityEngine::ComputeBuffer* m_IndexOfIndicesBuffer;

  /// @brief Field m_IndexOfIndicesData, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_IndexOfIndicesData, put = __cordl_internal_set_m_IndexOfIndicesData)) ::ArrayW<uint32_t, ::Array<uint32_t>*> m_IndexOfIndicesData;

  /// @brief Field m_NeedUpdateComputeBuffer, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get_m_NeedUpdateComputeBuffer, put = __cordl_internal_set_m_NeedUpdateComputeBuffer)) bool m_NeedUpdateComputeBuffer;

  /// @brief Method Cleanup, addr 0x65d789c, size 0x68, virtual false, abstract: false, final false
  inline void Cleanup();

  /// @brief Method GetFlatIdxForEntry, addr 0x65d7284, size 0x30, virtual false, abstract: false, final false
  inline int32_t GetFlatIdxForEntry(::UnityEngine::Vector3Int entryPosition);

  /// @brief Method GetFlatIndex, addr 0x65d709c, size 0x18, virtual false, abstract: false, final false
  inline int32_t GetFlatIndex(::UnityEngine::Vector3Int normalizedPos);

  /// @brief Method GetFlatIndicesForCell, addr 0x65d72b4, size 0x140, virtual false, abstract: false, final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> GetFlatIndicesForCell(::UnityEngine::Vector3Int cellPosition);

  /// @brief Method GetGlobalIndirectionDimension, addr 0x65d7048, size 0x10, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3Int GetGlobalIndirectionDimension();

  /// @brief Method GetGlobalIndirectionMinEntry, addr 0x65d7058, size 0x10, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3Int GetGlobalIndirectionMinEntry();

  /// @brief Method GetMinMaxEntry, addr 0x65d7024, size 0x24, virtual false, abstract: false, final false
  inline void GetMinMaxEntry(::ByRef<::UnityEngine::Vector3Int> minEntry, ::ByRef<::UnityEngine::Vector3Int> maxEntry);

  /// @brief Method GetRuntimeResources, addr 0x65d7868, size 0x34, virtual false, abstract: false, final false
  inline void GetRuntimeResources(::ByRef<::UnityEngine::Rendering::ProbeReferenceVolume_RuntimeResources> rr);

  /// @brief Method MarkEntriesAsUnloaded, addr 0x65d77b8, size 0x84, virtual false, abstract: false, final false
  inline void MarkEntriesAsUnloaded(::ArrayW<int32_t, ::Array<int32_t>*> entriesFlatIndices);

  static inline ::UnityEngine::Rendering::ProbeGlobalIndirection* New_ctor(::UnityEngine::Vector3Int cellMin, ::UnityEngine::Vector3Int cellMax, int32_t cellSizeInMinBricks);

  /// @brief Method PushComputeData, addr 0x65d783c, size 0x2c, virtual false, abstract: false, final false
  inline void PushComputeData();

  /// @brief Method UpdateCell, addr 0x65d73f4, size 0x298, virtual false, abstract: false, final false
  inline void UpdateCell(::UnityEngine::Rendering::ProbeReferenceVolume_CellIndexInfo* cellInfo);

  constexpr int32_t const& __cordl_internal_get__estimatedVMemCost_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__estimatedVMemCost_k__BackingField();

  constexpr int32_t const& __cordl_internal_get_m_CellSizeInMinBricks() const;

  constexpr int32_t& __cordl_internal_get_m_CellSizeInMinBricks();

  constexpr ::UnityEngine::Vector3Int const& __cordl_internal_get_m_EntriesCount() const;

  constexpr ::UnityEngine::Vector3Int& __cordl_internal_get_m_EntriesCount();

  constexpr ::UnityEngine::Vector3Int const& __cordl_internal_get_m_EntryMax() const;

  constexpr ::UnityEngine::Vector3Int& __cordl_internal_get_m_EntryMax();

  constexpr ::UnityEngine::Vector3Int const& __cordl_internal_get_m_EntryMin() const;

  constexpr ::UnityEngine::Vector3Int& __cordl_internal_get_m_EntryMin();

  constexpr ::UnityEngine::ComputeBuffer* const& __cordl_internal_get_m_IndexOfIndicesBuffer() const;

  constexpr ::UnityEngine::ComputeBuffer*& __cordl_internal_get_m_IndexOfIndicesBuffer();

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*> const& __cordl_internal_get_m_IndexOfIndicesData() const;

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*>& __cordl_internal_get_m_IndexOfIndicesData();

  constexpr bool const& __cordl_internal_get_m_NeedUpdateComputeBuffer() const;

  constexpr bool& __cordl_internal_get_m_NeedUpdateComputeBuffer();

  constexpr void __cordl_internal_set__estimatedVMemCost_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set_m_CellSizeInMinBricks(int32_t value);

  constexpr void __cordl_internal_set_m_EntriesCount(::UnityEngine::Vector3Int value);

  constexpr void __cordl_internal_set_m_EntryMax(::UnityEngine::Vector3Int value);

  constexpr void __cordl_internal_set_m_EntryMin(::UnityEngine::Vector3Int value);

  constexpr void __cordl_internal_set_m_IndexOfIndicesBuffer(::UnityEngine::ComputeBuffer* value);

  constexpr void __cordl_internal_set_m_IndexOfIndicesData(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  constexpr void __cordl_internal_set_m_NeedUpdateComputeBuffer(bool value);

  /// @brief Method .ctor, addr 0x65d70b4, size 0x1d0, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Vector3Int cellMin, ::UnityEngine::Vector3Int cellMax, int32_t cellSizeInMinBricks);

  /// @brief Method get_entriesPerCellDimension, addr 0x65d707c, size 0x20, virtual false, abstract: false, final false
  inline int32_t get_entriesPerCellDimension();

  /// @brief Method get_entrySizeInBricks, addr 0x65d7068, size 0x14, virtual false, abstract: false, final false
  inline int32_t get_entrySizeInBricks();

  /// @brief Method get_estimatedVMemCost, addr 0x65d7014, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_estimatedVMemCost();

  /// @brief Method set_estimatedVMemCost, addr 0x65d701c, size 0x8, virtual false, abstract: false, final false
  inline void set_estimatedVMemCost(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProbeGlobalIndirection();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProbeGlobalIndirection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProbeGlobalIndirection(ProbeGlobalIndirection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProbeGlobalIndirection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProbeGlobalIndirection(ProbeGlobalIndirection const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12062 };

  /// @brief Field kEntryMaxSubdivLevel offset 0xffffffff size 0x4
  static constexpr int32_t kEntryMaxSubdivLevel{ static_cast<int32_t>(0x3) };

  /// @brief Field kUintPerEntry offset 0xffffffff size 0x4
  static constexpr int32_t kUintPerEntry{ static_cast<int32_t>(0x3) };

  /// @brief Field <estimatedVMemCost>k__BackingField, offset: 0x10, size: 0x4, def value: None
  int32_t ____estimatedVMemCost_k__BackingField;

  /// @brief Field m_IndexOfIndicesBuffer, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::ComputeBuffer* ___m_IndexOfIndicesBuffer;

  /// @brief Field m_IndexOfIndicesData, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<uint32_t, ::Array<uint32_t>*> ___m_IndexOfIndicesData;

  /// @brief Field m_CellSizeInMinBricks, offset: 0x28, size: 0x4, def value: None
  int32_t ___m_CellSizeInMinBricks;

  /// @brief Field m_EntriesCount, offset: 0x2c, size: 0xc, def value: None
  ::UnityEngine::Vector3Int ___m_EntriesCount;

  /// @brief Field m_EntryMin, offset: 0x38, size: 0xc, def value: None
  ::UnityEngine::Vector3Int ___m_EntryMin;

  /// @brief Field m_EntryMax, offset: 0x44, size: 0xc, def value: None
  ::UnityEngine::Vector3Int ___m_EntryMax;

  /// @brief Field m_NeedUpdateComputeBuffer, offset: 0x50, size: 0x1, def value: None
  bool ___m_NeedUpdateComputeBuffer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::ProbeGlobalIndirection, ____estimatedVMemCost_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeGlobalIndirection, ___m_IndexOfIndicesBuffer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeGlobalIndirection, ___m_IndexOfIndicesData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeGlobalIndirection, ___m_CellSizeInMinBricks) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeGlobalIndirection, ___m_EntriesCount) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeGlobalIndirection, ___m_EntryMin) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeGlobalIndirection, ___m_EntryMax) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeGlobalIndirection, ___m_NeedUpdateComputeBuffer) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ProbeGlobalIndirection, 0x58>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::ProbeGlobalIndirection);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ProbeGlobalIndirection*, "UnityEngine.Rendering", "ProbeGlobalIndirection");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ProbeGlobalIndirection_IndexMetaData, "UnityEngine.Rendering", "ProbeGlobalIndirection/IndexMetaData");

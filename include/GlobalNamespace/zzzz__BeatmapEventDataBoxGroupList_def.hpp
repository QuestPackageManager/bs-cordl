#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapEventDataBoxGroupList.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapEventDataBoxGroupList)
namespace GlobalNamespace {
class BeatmapData;
}
namespace GlobalNamespace {
class BeatmapEventDataBoxGroupProcessor;
}
namespace GlobalNamespace {
class BeatmapEventDataBoxGroup;
}
namespace GlobalNamespace {
class IBeatToTimeConverter;
}
namespace GlobalNamespace {
template <typename T, typename TBase> class SortedList_2;
}
namespace System::Collections::Generic {
template <typename T> class LinkedListNode_1;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapEventDataBoxGroupList;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapEventDataBoxGroupList);
// Type: ::BeatmapEventDataBoxGroupList
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 65, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BeatmapEventDataBoxGroupList*
class CORDL_TYPE BeatmapEventDataBoxGroupList : public ::System::Object {
public:
  // Declarations
  /// @brief Field _beatToTimeConverter, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__beatToTimeConverter, put = __cordl_internal_set__beatToTimeConverter))::GlobalNamespace::IBeatToTimeConverter* _beatToTimeConverter;

  /// @brief Field _beatmapData, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapData, put = __cordl_internal_set__beatmapData))::GlobalNamespace::BeatmapData* _beatmapData;

  /// @brief Field _beatmapEventDataBoxGroupProcessor, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapEventDataBoxGroupProcessor,
                      put = __cordl_internal_set__beatmapEventDataBoxGroupProcessor))::GlobalNamespace::BeatmapEventDataBoxGroupProcessor* _beatmapEventDataBoxGroupProcessor;

  /// @brief Field _groupId, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__groupId, put = __cordl_internal_set__groupId)) int32_t _groupId;

  /// @brief Field _nonSyncedInsertsExist, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get__nonSyncedInsertsExist, put = __cordl_internal_set__nonSyncedInsertsExist)) bool _nonSyncedInsertsExist;

  /// @brief Field _sortedList, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__sortedList,
                      put = __cordl_internal_set__sortedList))::GlobalNamespace::SortedList_2<::GlobalNamespace::BeatmapEventDataBoxGroup*, ::GlobalNamespace::BeatmapEventDataBoxGroup*>* _sortedList;

  /// @brief Field updateBeatmapDataOnInsert, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_updateBeatmapDataOnInsert, put = __cordl_internal_set_updateBeatmapDataOnInsert)) bool updateBeatmapDataOnInsert;

  /// @brief Method Insert, addr 0x14b7438, size 0x370, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapEventDataBoxGroup*>* Insert(::GlobalNamespace::BeatmapEventDataBoxGroup* beatmapEventDataBoxGroup);

  static inline ::GlobalNamespace::BeatmapEventDataBoxGroupList* New_ctor(int32_t groupId, ::GlobalNamespace::BeatmapData* beatmapData, ::GlobalNamespace::IBeatToTimeConverter* beatToTimeConverter);

  /// @brief Method Remove, addr 0x14b77f8, size 0x374, virtual false, abstract: false, final false
  inline void Remove(::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapEventDataBoxGroup*>* nodeToDelete);

  /// @brief Method SyncWithBeatmapData, addr 0x14b7b6c, size 0x178, virtual false, abstract: false, final false
  inline void SyncWithBeatmapData();

  constexpr ::GlobalNamespace::IBeatToTimeConverter*& __cordl_internal_get__beatToTimeConverter();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatToTimeConverter*> const& __cordl_internal_get__beatToTimeConverter() const;

  constexpr ::GlobalNamespace::BeatmapData*& __cordl_internal_get__beatmapData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapData*> const& __cordl_internal_get__beatmapData() const;

  constexpr ::GlobalNamespace::BeatmapEventDataBoxGroupProcessor*& __cordl_internal_get__beatmapEventDataBoxGroupProcessor();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapEventDataBoxGroupProcessor*> const& __cordl_internal_get__beatmapEventDataBoxGroupProcessor() const;

  constexpr int32_t const& __cordl_internal_get__groupId() const;

  constexpr int32_t& __cordl_internal_get__groupId();

  constexpr bool const& __cordl_internal_get__nonSyncedInsertsExist() const;

  constexpr bool& __cordl_internal_get__nonSyncedInsertsExist();

  constexpr ::GlobalNamespace::SortedList_2<::GlobalNamespace::BeatmapEventDataBoxGroup*, ::GlobalNamespace::BeatmapEventDataBoxGroup*>*& __cordl_internal_get__sortedList();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SortedList_2<::GlobalNamespace::BeatmapEventDataBoxGroup*, ::GlobalNamespace::BeatmapEventDataBoxGroup*>*> const&
  __cordl_internal_get__sortedList() const;

  constexpr bool const& __cordl_internal_get_updateBeatmapDataOnInsert() const;

  constexpr bool& __cordl_internal_get_updateBeatmapDataOnInsert();

  constexpr void __cordl_internal_set__beatToTimeConverter(::GlobalNamespace::IBeatToTimeConverter* value);

  constexpr void __cordl_internal_set__beatmapData(::GlobalNamespace::BeatmapData* value);

  constexpr void __cordl_internal_set__beatmapEventDataBoxGroupProcessor(::GlobalNamespace::BeatmapEventDataBoxGroupProcessor* value);

  constexpr void __cordl_internal_set__groupId(int32_t value);

  constexpr void __cordl_internal_set__nonSyncedInsertsExist(bool value);

  constexpr void __cordl_internal_set__sortedList(::GlobalNamespace::SortedList_2<::GlobalNamespace::BeatmapEventDataBoxGroup*, ::GlobalNamespace::BeatmapEventDataBoxGroup*>* value);

  constexpr void __cordl_internal_set_updateBeatmapDataOnInsert(bool value);

  /// @brief Method .ctor, addr 0x14b72e4, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(int32_t groupId, ::GlobalNamespace::BeatmapData* beatmapData, ::GlobalNamespace::IBeatToTimeConverter* beatToTimeConverter);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapEventDataBoxGroupList();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapEventDataBoxGroupList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapEventDataBoxGroupList(BeatmapEventDataBoxGroupList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapEventDataBoxGroupList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapEventDataBoxGroupList(BeatmapEventDataBoxGroupList const&) = delete;

  /// @brief Field updateBeatmapDataOnInsert, offset: 0x10, size: 0x1, def value: None
  bool ___updateBeatmapDataOnInsert;

  /// @brief Field _beatmapEventDataBoxGroupProcessor, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapEventDataBoxGroupProcessor* ____beatmapEventDataBoxGroupProcessor;

  /// @brief Field _sortedList, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::SortedList_2<::GlobalNamespace::BeatmapEventDataBoxGroup*, ::GlobalNamespace::BeatmapEventDataBoxGroup*>* ____sortedList;

  /// @brief Field _groupId, offset: 0x28, size: 0x4, def value: None
  int32_t ____groupId;

  /// @brief Field _beatmapData, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapData* ____beatmapData;

  /// @brief Field _beatToTimeConverter, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::IBeatToTimeConverter* ____beatToTimeConverter;

  /// @brief Field _nonSyncedInsertsExist, offset: 0x40, size: 0x1, def value: None
  bool ____nonSyncedInsertsExist;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapEventDataBoxGroupList, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapEventDataBoxGroupList, ___updateBeatmapDataOnInsert) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapEventDataBoxGroupList, ____beatmapEventDataBoxGroupProcessor) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapEventDataBoxGroupList, ____sortedList) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapEventDataBoxGroupList, ____groupId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapEventDataBoxGroupList, ____beatmapData) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapEventDataBoxGroupList, ____beatToTimeConverter) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapEventDataBoxGroupList, ____nonSyncedInsertsExist) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapEventDataBoxGroupList);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapEventDataBoxGroupList*, "", "BeatmapEventDataBoxGroupList");

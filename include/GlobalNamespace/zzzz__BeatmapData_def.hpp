#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__IReadonlyBeatmapData_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapData)
namespace GlobalNamespace {
class BeatmapDataItem;
}
namespace GlobalNamespace {
template <typename TBase> class BeatmapDataSortedListForTypeAndIds_1;
}
namespace GlobalNamespace {
class BeatmapData_BeatmapDataBinaryHeapItem;
}
namespace GlobalNamespace {
template <typename T> class BeatmapData___c__DisplayClass46_0_1;
}
namespace GlobalNamespace {
class BeatmapEventData;
}
namespace GlobalNamespace {
class BeatmapObjectData;
}
namespace GlobalNamespace {
class BeatmapObjectsInTimeRowProcessor;
}
namespace GlobalNamespace {
template <typename T> class ISortedList_1;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class LinkedListNode_1;
}
namespace System::Collections::Generic {
template <typename T> class LinkedList_1;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapData;
}
namespace GlobalNamespace {
class BeatmapData_BeatmapDataBinaryHeapItem;
}
namespace GlobalNamespace {
template <typename T> class BeatmapData___c__DisplayClass46_0_1;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapData);
MARK_REF_PTR_T(::GlobalNamespace::BeatmapData_BeatmapDataBinaryHeapItem);
MARK_GEN_REF_PTR_T(::GlobalNamespace::BeatmapData___c__DisplayClass46_0_1);
// Dependencies System.IComparable`1<T>, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapData/BeatmapDataBinaryHeapItem
class CORDL_TYPE BeatmapData_BeatmapDataBinaryHeapItem : public ::System::Object {
public:
  // Declarations
  /// @brief Field node, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_node, put = __cordl_internal_set_node)) ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>* node;

  /// @brief Convert operator to "::System::IComparable_1<::GlobalNamespace::BeatmapData_BeatmapDataBinaryHeapItem*>"
  constexpr operator ::System::IComparable_1<::GlobalNamespace::BeatmapData_BeatmapDataBinaryHeapItem*>*() noexcept;

  /// @brief Method CompareTo, addr 0x26b73ec, size 0xac, virtual true, abstract: false, final true
  inline int32_t CompareTo(::GlobalNamespace::BeatmapData_BeatmapDataBinaryHeapItem* other);

  static inline ::GlobalNamespace::BeatmapData_BeatmapDataBinaryHeapItem* New_ctor(::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>* node);

  constexpr ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>* const& __cordl_internal_get_node() const;

  constexpr ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*& __cordl_internal_get_node();

  constexpr void __cordl_internal_set_node(::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>* value);

  /// @brief Method .ctor, addr 0x26b6cac, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>* node);

  /// @brief Convert to "::System::IComparable_1<::GlobalNamespace::BeatmapData_BeatmapDataBinaryHeapItem*>"
  constexpr ::System::IComparable_1<::GlobalNamespace::BeatmapData_BeatmapDataBinaryHeapItem*>* i___System__IComparable_1___GlobalNamespace__BeatmapData_BeatmapDataBinaryHeapItem__() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapData_BeatmapDataBinaryHeapItem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapData_BeatmapDataBinaryHeapItem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapData_BeatmapDataBinaryHeapItem(BeatmapData_BeatmapDataBinaryHeapItem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapData_BeatmapDataBinaryHeapItem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapData_BeatmapDataBinaryHeapItem(BeatmapData_BeatmapDataBinaryHeapItem const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12872 };

  /// @brief Field node, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>* ___node;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapData_BeatmapDataBinaryHeapItem, ___node) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapData_BeatmapDataBinaryHeapItem, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// CS Name: BeatmapData/<>c__DisplayClass46_0`1<T>
class CORDL_TYPE BeatmapData___c__DisplayClass46_0_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field subtypeGroupIdentifiers, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_subtypeGroupIdentifiers, put = __cordl_internal_set_subtypeGroupIdentifiers)) ::ArrayW<int32_t, ::Array<int32_t>*> subtypeGroupIdentifiers;

  static inline ::GlobalNamespace::BeatmapData___c__DisplayClass46_0_1<T>* New_ctor();

  /// @brief Method <GetBeatmapDataItemsMerged>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool _GetBeatmapDataItemsMerged_b__0(::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>* head);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_subtypeGroupIdentifiers() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_subtypeGroupIdentifiers();

  constexpr void __cordl_internal_set_subtypeGroupIdentifiers(::ArrayW<int32_t, ::Array<int32_t>*> value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapData___c__DisplayClass46_0_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapData___c__DisplayClass46_0_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapData___c__DisplayClass46_0_1(BeatmapData___c__DisplayClass46_0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapData___c__DisplayClass46_0_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapData___c__DisplayClass46_0_1(BeatmapData___c__DisplayClass46_0_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12873 };

  /// @brief Field subtypeGroupIdentifiers, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___subtypeGroupIdentifiers;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies IReadonlyBeatmapData, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapData
class CORDL_TYPE BeatmapData : public ::System::Object {
public:
  // Declarations
  using BeatmapDataBinaryHeapItem = ::GlobalNamespace::BeatmapData_BeatmapDataBinaryHeapItem;

  template <typename T> using __c__DisplayClass46_0_1 = ::GlobalNamespace::BeatmapData___c__DisplayClass46_0_1<T>;

  /// @brief Field _allBeatmapData, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__allBeatmapData, put = __cordl_internal_set__allBeatmapData)) ::GlobalNamespace::ISortedList_1<::GlobalNamespace::BeatmapDataItem*>* _allBeatmapData;

  /// @brief Field _allBeatmapDataItemToNodeMap, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__allBeatmapDataItemToNodeMap, put = __cordl_internal_set__allBeatmapDataItemToNodeMap)) ::System::Collections::Generic::Dictionary_2<
      ::GlobalNamespace::BeatmapDataItem*, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>* _allBeatmapDataItemToNodeMap;

  /// @brief Field _beatmapDataItemsPerTypeAndId, offset 0x48, size 0x8
  __declspec(property(
      get = __cordl_internal_get__beatmapDataItemsPerTypeAndId,
      put = __cordl_internal_set__beatmapDataItemsPerTypeAndId)) ::GlobalNamespace::BeatmapDataSortedListForTypeAndIds_1<::GlobalNamespace::BeatmapDataItem*>* _beatmapDataItemsPerTypeAndId;

  /// @brief Field _beatmapObjectsInTimeRowProcessor, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapObjectsInTimeRowProcessor,
                      put = __cordl_internal_set__beatmapObjectsInTimeRowProcessor)) ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor* _beatmapObjectsInTimeRowProcessor;

  /// @brief Field <bombsCount>k__BackingField, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__bombsCount_k__BackingField, put = __cordl_internal_set__bombsCount_k__BackingField)) int32_t _bombsCount_k__BackingField;

  /// @brief Field <cuttableNotesCount>k__BackingField, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__cuttableNotesCount_k__BackingField, put = __cordl_internal_set__cuttableNotesCount_k__BackingField)) int32_t _cuttableNotesCount_k__BackingField;

  /// @brief Field _isCreatingFilteredCopy, offset 0x6c, size 0x1
  __declspec(property(get = __cordl_internal_get__isCreatingFilteredCopy, put = __cordl_internal_set__isCreatingFilteredCopy)) bool _isCreatingFilteredCopy;

  /// @brief Field _numberOfLines, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get__numberOfLines, put = __cordl_internal_set__numberOfLines)) int32_t _numberOfLines;

  /// @brief Field <obstaclesCount>k__BackingField, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__obstaclesCount_k__BackingField, put = __cordl_internal_set__obstaclesCount_k__BackingField)) int32_t _obstaclesCount_k__BackingField;

  /// @brief Field _prevAddedBeatmapObjectDataTime, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get__prevAddedBeatmapObjectDataTime, put = __cordl_internal_set__prevAddedBeatmapObjectDataTime)) float_t _prevAddedBeatmapObjectDataTime;

  /// @brief Field _specialBasicBeatmapEventKeywords, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__specialBasicBeatmapEventKeywords,
                      put = __cordl_internal_set__specialBasicBeatmapEventKeywords)) ::System::Collections::Generic::HashSet_1<::StringW>* _specialBasicBeatmapEventKeywords;

  /// @brief Field <updateAllBeatmapDataOnInsert>k__BackingField, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__updateAllBeatmapDataOnInsert_k__BackingField,
                      put = __cordl_internal_set__updateAllBeatmapDataOnInsert_k__BackingField)) bool _updateAllBeatmapDataOnInsert_k__BackingField;

  __declspec(property(get = get_allBeatmapDataItems)) ::System::Collections::Generic::LinkedList_1<::GlobalNamespace::BeatmapDataItem*>* allBeatmapDataItems;

  __declspec(property(get = get_areValid)) bool areValid;

  /// @brief Field beatmapEventDataWasInsertedEvent, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_beatmapEventDataWasInsertedEvent, put = __cordl_internal_set_beatmapEventDataWasInsertedEvent)) ::System::Action_2<
      ::GlobalNamespace::BeatmapEventData*, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>* beatmapEventDataWasInsertedEvent;

  /// @brief Field beatmapEventDataWasRemovedEvent, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_beatmapEventDataWasRemovedEvent,
                      put = __cordl_internal_set_beatmapEventDataWasRemovedEvent)) ::System::Action_1<::GlobalNamespace::BeatmapEventData*>* beatmapEventDataWasRemovedEvent;

  /// @brief Field beatmapEventDataWillBeRemovedEvent, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_beatmapEventDataWillBeRemovedEvent, put = __cordl_internal_set_beatmapEventDataWillBeRemovedEvent)) ::System::Action_2<
      ::GlobalNamespace::BeatmapEventData*, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>* beatmapEventDataWillBeRemovedEvent;

  __declspec(property(get = get_bombsCount, put = set_bombsCount)) int32_t bombsCount;

  __declspec(property(get = get_cuttableNotesCount, put = set_cuttableNotesCount)) int32_t cuttableNotesCount;

  __declspec(property(get = get_numberOfLines)) int32_t numberOfLines;

  __declspec(property(get = get_obstaclesCount, put = set_obstaclesCount)) int32_t obstaclesCount;

  __declspec(property(get = get_specialBasicBeatmapEventKeywords)) ::System::Collections::Generic::IEnumerable_1<::StringW>* specialBasicBeatmapEventKeywords;

  __declspec(property(get = get_updateAllBeatmapDataOnInsert, put = set_updateAllBeatmapDataOnInsert)) bool updateAllBeatmapDataOnInsert;

  /// @brief Convert operator to "::GlobalNamespace::IReadonlyBeatmapData"
  constexpr operator ::GlobalNamespace::IReadonlyBeatmapData*() noexcept;

  /// @brief Method AddBeatmapObjectData, addr 0x26ac454, size 0x19c, virtual false, abstract: false, final false
  inline void AddBeatmapObjectData(::GlobalNamespace::BeatmapObjectData* beatmapObjectData);

  /// @brief Method AddBeatmapObjectDataInOrder, addr 0x26adf94, size 0x2c, virtual false, abstract: false, final false
  inline void AddBeatmapObjectDataInOrder(::GlobalNamespace::BeatmapObjectData* beatmapObjectData);

  /// @brief Method AddSpecialBasicBeatmapEventKeyword, addr 0x26ae0fc, size 0x58, virtual false, abstract: false, final false
  inline void AddSpecialBasicBeatmapEventKeyword(::StringW specialBasicBeatmapEventKeyword);

  /// @brief Method GetBeatmapDataItems, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename T> inline ::System::Collections::Generic::IEnumerable_1<T>* GetBeatmapDataItems(int32_t subtypeGroupIdentifier);

  /// @brief Method GetBeatmapDataItemsCount, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline int32_t GetBeatmapDataItemsCount(int32_t subtypeGroupIdentifier);

  /// @brief Method GetBeatmapDataItemsMerged, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::System::Collections::Generic::IEnumerable_1<T>* GetBeatmapDataItemsMerged(::ArrayW<int32_t, ::Array<int32_t>*> subtypeGroupIdentifiers);

  /// @brief Method GetBeatmapDataItemsMergedCount, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline int32_t GetBeatmapDataItemsMergedCount(::ArrayW<int32_t, ::Array<int32_t>*> subtypeGroupIdentifiers);

  /// @brief Method GetCopy, addr 0x26b6cd4, size 0x37c, virtual true, abstract: false, final true
  inline ::GlobalNamespace::BeatmapData* GetCopy();

  /// @brief Method GetFilteredCopy, addr 0x26b7050, size 0x39c, virtual true, abstract: false, final true
  inline ::GlobalNamespace::BeatmapData* GetFilteredCopy(::System::Func_2<::GlobalNamespace::BeatmapDataItem*, ::GlobalNamespace::BeatmapDataItem*>* processDataItem);

  /// @brief Method InsertBeatmapEventData, addr 0x26ac3b8, size 0x9c, virtual false, abstract: false, final false
  inline void InsertBeatmapEventData(::GlobalNamespace::BeatmapEventData* beatmapEventData);

  /// @brief Method InsertBeatmapEventDataInOrder, addr 0x26adf3c, size 0x58, virtual false, abstract: false, final false
  inline void InsertBeatmapEventDataInOrder(::GlobalNamespace::BeatmapEventData* beatmapEventData);

  /// @brief Method InsertToAllBeatmapData, addr 0x26b65f8, size 0x1d4, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*
  InsertToAllBeatmapData(::GlobalNamespace::BeatmapDataItem* beatmapDataItem, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>* node);

  /// @brief Method IsBasicEventSpecialKeywordEnabled, addr 0x26b65a0, size 0x58, virtual true, abstract: false, final true
  inline bool IsBasicEventSpecialKeywordEnabled(::StringW keyword);

  static inline ::GlobalNamespace::BeatmapData* New_ctor(int32_t numberOfLines);

  /// @brief Method ProcessAndSortBeatmapData, addr 0x26b6964, size 0x348, virtual false, abstract: false, final false
  inline void ProcessAndSortBeatmapData();

  /// @brief Method ProcessRemainingData, addr 0x26b6948, size 0x1c, virtual false, abstract: false, final false
  inline void ProcessRemainingData();

  /// @brief Method RemoveBeatmapEventData, addr 0x26b67cc, size 0x17c, virtual false, abstract: false, final false
  inline void RemoveBeatmapEventData(::GlobalNamespace::BeatmapEventData* beatmapEventData);

  constexpr ::GlobalNamespace::ISortedList_1<::GlobalNamespace::BeatmapDataItem*>* const& __cordl_internal_get__allBeatmapData() const;

  constexpr ::GlobalNamespace::ISortedList_1<::GlobalNamespace::BeatmapDataItem*>*& __cordl_internal_get__allBeatmapData();

  constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::BeatmapDataItem*, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>* const&
  __cordl_internal_get__allBeatmapDataItemToNodeMap() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::BeatmapDataItem*, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>*&
  __cordl_internal_get__allBeatmapDataItemToNodeMap();

  constexpr ::GlobalNamespace::BeatmapDataSortedListForTypeAndIds_1<::GlobalNamespace::BeatmapDataItem*>* const& __cordl_internal_get__beatmapDataItemsPerTypeAndId() const;

  constexpr ::GlobalNamespace::BeatmapDataSortedListForTypeAndIds_1<::GlobalNamespace::BeatmapDataItem*>*& __cordl_internal_get__beatmapDataItemsPerTypeAndId();

  constexpr ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor* const& __cordl_internal_get__beatmapObjectsInTimeRowProcessor() const;

  constexpr ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor*& __cordl_internal_get__beatmapObjectsInTimeRowProcessor();

  constexpr int32_t const& __cordl_internal_get__bombsCount_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__bombsCount_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__cuttableNotesCount_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__cuttableNotesCount_k__BackingField();

  constexpr bool const& __cordl_internal_get__isCreatingFilteredCopy() const;

  constexpr bool& __cordl_internal_get__isCreatingFilteredCopy();

  constexpr int32_t const& __cordl_internal_get__numberOfLines() const;

  constexpr int32_t& __cordl_internal_get__numberOfLines();

  constexpr int32_t const& __cordl_internal_get__obstaclesCount_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__obstaclesCount_k__BackingField();

  constexpr float_t const& __cordl_internal_get__prevAddedBeatmapObjectDataTime() const;

  constexpr float_t& __cordl_internal_get__prevAddedBeatmapObjectDataTime();

  constexpr ::System::Collections::Generic::HashSet_1<::StringW>* const& __cordl_internal_get__specialBasicBeatmapEventKeywords() const;

  constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& __cordl_internal_get__specialBasicBeatmapEventKeywords();

  constexpr bool const& __cordl_internal_get__updateAllBeatmapDataOnInsert_k__BackingField() const;

  constexpr bool& __cordl_internal_get__updateAllBeatmapDataOnInsert_k__BackingField();

  constexpr ::System::Action_2<::GlobalNamespace::BeatmapEventData*, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>* const&
  __cordl_internal_get_beatmapEventDataWasInsertedEvent() const;

  constexpr ::System::Action_2<::GlobalNamespace::BeatmapEventData*, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>*&
  __cordl_internal_get_beatmapEventDataWasInsertedEvent();

  constexpr ::System::Action_1<::GlobalNamespace::BeatmapEventData*>* const& __cordl_internal_get_beatmapEventDataWasRemovedEvent() const;

  constexpr ::System::Action_1<::GlobalNamespace::BeatmapEventData*>*& __cordl_internal_get_beatmapEventDataWasRemovedEvent();

  constexpr ::System::Action_2<::GlobalNamespace::BeatmapEventData*, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>* const&
  __cordl_internal_get_beatmapEventDataWillBeRemovedEvent() const;

  constexpr ::System::Action_2<::GlobalNamespace::BeatmapEventData*, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>*&
  __cordl_internal_get_beatmapEventDataWillBeRemovedEvent();

  constexpr void __cordl_internal_set__allBeatmapData(::GlobalNamespace::ISortedList_1<::GlobalNamespace::BeatmapDataItem*>* value);

  constexpr void __cordl_internal_set__allBeatmapDataItemToNodeMap(
      ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::BeatmapDataItem*, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>* value);

  constexpr void __cordl_internal_set__beatmapDataItemsPerTypeAndId(::GlobalNamespace::BeatmapDataSortedListForTypeAndIds_1<::GlobalNamespace::BeatmapDataItem*>* value);

  constexpr void __cordl_internal_set__beatmapObjectsInTimeRowProcessor(::GlobalNamespace::BeatmapObjectsInTimeRowProcessor* value);

  constexpr void __cordl_internal_set__bombsCount_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__cuttableNotesCount_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__isCreatingFilteredCopy(bool value);

  constexpr void __cordl_internal_set__numberOfLines(int32_t value);

  constexpr void __cordl_internal_set__obstaclesCount_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__prevAddedBeatmapObjectDataTime(float_t value);

  constexpr void __cordl_internal_set__specialBasicBeatmapEventKeywords(::System::Collections::Generic::HashSet_1<::StringW>* value);

  constexpr void __cordl_internal_set__updateAllBeatmapDataOnInsert_k__BackingField(bool value);

  constexpr void __cordl_internal_set_beatmapEventDataWasInsertedEvent(
      ::System::Action_2<::GlobalNamespace::BeatmapEventData*, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>* value);

  constexpr void __cordl_internal_set_beatmapEventDataWasRemovedEvent(::System::Action_1<::GlobalNamespace::BeatmapEventData*>* value);

  constexpr void __cordl_internal_set_beatmapEventDataWillBeRemovedEvent(
      ::System::Action_2<::GlobalNamespace::BeatmapEventData*, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>* value);

  /// @brief Method .ctor, addr 0x26ac224, size 0x194, virtual false, abstract: false, final false
  inline void _ctor(int32_t numberOfLines);

  /// @brief Method add_beatmapEventDataWasInsertedEvent, addr 0x26b6180, size 0xb0, virtual true, abstract: false, final true
  inline void
  add_beatmapEventDataWasInsertedEvent(::System::Action_2<::GlobalNamespace::BeatmapEventData*, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>* value);

  /// @brief Method add_beatmapEventDataWasRemovedEvent, addr 0x26b6440, size 0xb0, virtual true, abstract: false, final true
  inline void add_beatmapEventDataWasRemovedEvent(::System::Action_1<::GlobalNamespace::BeatmapEventData*>* value);

  /// @brief Method add_beatmapEventDataWillBeRemovedEvent, addr 0x26b62e0, size 0xb0, virtual true, abstract: false, final true
  inline void
  add_beatmapEventDataWillBeRemovedEvent(::System::Action_2<::GlobalNamespace::BeatmapEventData*, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>* value);

  /// @brief Method get_allBeatmapDataItems, addr 0x26b608c, size 0xa4, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::LinkedList_1<::GlobalNamespace::BeatmapDataItem*>* get_allBeatmapDataItems();

  /// @brief Method get_areValid, addr 0x26b6130, size 0x10, virtual true, abstract: false, final true
  inline bool get_areValid();

  /// @brief Method get_bombsCount, addr 0x26b6168, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_bombsCount();

  /// @brief Method get_cuttableNotesCount, addr 0x26b6148, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_cuttableNotesCount();

  /// @brief Method get_numberOfLines, addr 0x26b6140, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_numberOfLines();

  /// @brief Method get_obstaclesCount, addr 0x26b6158, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_obstaclesCount();

  /// @brief Method get_specialBasicBeatmapEventKeywords, addr 0x26b6178, size 0x8, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerable_1<::StringW>* get_specialBasicBeatmapEventKeywords();

  /// @brief Method get_updateAllBeatmapDataOnInsert, addr 0x26b6078, size 0x8, virtual false, abstract: false, final false
  inline bool get_updateAllBeatmapDataOnInsert();

  /// @brief Convert to "::GlobalNamespace::IReadonlyBeatmapData"
  constexpr ::GlobalNamespace::IReadonlyBeatmapData* i___GlobalNamespace__IReadonlyBeatmapData() noexcept;

  /// @brief Method remove_beatmapEventDataWasInsertedEvent, addr 0x26b6230, size 0xb0, virtual true, abstract: false, final true
  inline void
  remove_beatmapEventDataWasInsertedEvent(::System::Action_2<::GlobalNamespace::BeatmapEventData*, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>* value);

  /// @brief Method remove_beatmapEventDataWasRemovedEvent, addr 0x26b64f0, size 0xb0, virtual true, abstract: false, final true
  inline void remove_beatmapEventDataWasRemovedEvent(::System::Action_1<::GlobalNamespace::BeatmapEventData*>* value);

  /// @brief Method remove_beatmapEventDataWillBeRemovedEvent, addr 0x26b6390, size 0xb0, virtual true, abstract: false, final true
  inline void
  remove_beatmapEventDataWillBeRemovedEvent(::System::Action_2<::GlobalNamespace::BeatmapEventData*, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>* value);

  /// @brief Method set_bombsCount, addr 0x26b6170, size 0x8, virtual false, abstract: false, final false
  inline void set_bombsCount(int32_t value);

  /// @brief Method set_cuttableNotesCount, addr 0x26b6150, size 0x8, virtual false, abstract: false, final false
  inline void set_cuttableNotesCount(int32_t value);

  /// @brief Method set_obstaclesCount, addr 0x26b6160, size 0x8, virtual false, abstract: false, final false
  inline void set_obstaclesCount(int32_t value);

  /// @brief Method set_updateAllBeatmapDataOnInsert, addr 0x26b6080, size 0xc, virtual false, abstract: false, final false
  inline void set_updateAllBeatmapDataOnInsert(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapData(BeatmapData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapData(BeatmapData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12874 };

  /// @brief Field kDefaultNumberOfLines offset 0xffffffff size 0x4
  static constexpr int32_t kDefaultNumberOfLines{ static_cast<int32_t>(0x4) };

  /// @brief Field <updateAllBeatmapDataOnInsert>k__BackingField, offset: 0x10, size: 0x1, def value: None
  bool ____updateAllBeatmapDataOnInsert_k__BackingField;

  /// @brief Field <cuttableNotesCount>k__BackingField, offset: 0x14, size: 0x4, def value: None
  int32_t ____cuttableNotesCount_k__BackingField;

  /// @brief Field <obstaclesCount>k__BackingField, offset: 0x18, size: 0x4, def value: None
  int32_t ____obstaclesCount_k__BackingField;

  /// @brief Field <bombsCount>k__BackingField, offset: 0x1c, size: 0x4, def value: None
  int32_t ____bombsCount_k__BackingField;

  /// @brief Field beatmapEventDataWasInsertedEvent, offset: 0x20, size: 0x8, def value: None
  ::System::Action_2<::GlobalNamespace::BeatmapEventData*, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>* ___beatmapEventDataWasInsertedEvent;

  /// @brief Field beatmapEventDataWillBeRemovedEvent, offset: 0x28, size: 0x8, def value: None
  ::System::Action_2<::GlobalNamespace::BeatmapEventData*, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>* ___beatmapEventDataWillBeRemovedEvent;

  /// @brief Field beatmapEventDataWasRemovedEvent, offset: 0x30, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::BeatmapEventData*>* ___beatmapEventDataWasRemovedEvent;

  /// @brief Field _allBeatmapData, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::ISortedList_1<::GlobalNamespace::BeatmapDataItem*>* ____allBeatmapData;

  /// @brief Field _allBeatmapDataItemToNodeMap, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::BeatmapDataItem*, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>*
      ____allBeatmapDataItemToNodeMap;

  /// @brief Field _beatmapDataItemsPerTypeAndId, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapDataSortedListForTypeAndIds_1<::GlobalNamespace::BeatmapDataItem*>* ____beatmapDataItemsPerTypeAndId;

  /// @brief Field _numberOfLines, offset: 0x50, size: 0x4, def value: None
  int32_t ____numberOfLines;

  /// @brief Field _specialBasicBeatmapEventKeywords, offset: 0x58, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::StringW>* ____specialBasicBeatmapEventKeywords;

  /// @brief Field _beatmapObjectsInTimeRowProcessor, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor* ____beatmapObjectsInTimeRowProcessor;

  /// @brief Field _prevAddedBeatmapObjectDataTime, offset: 0x68, size: 0x4, def value: None
  float_t ____prevAddedBeatmapObjectDataTime;

  /// @brief Field _isCreatingFilteredCopy, offset: 0x6c, size: 0x1, def value: None
  bool ____isCreatingFilteredCopy;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapData, ____updateAllBeatmapDataOnInsert_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapData, ____cuttableNotesCount_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapData, ____obstaclesCount_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapData, ____bombsCount_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapData, ___beatmapEventDataWasInsertedEvent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapData, ___beatmapEventDataWillBeRemovedEvent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapData, ___beatmapEventDataWasRemovedEvent) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapData, ____allBeatmapData) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapData, ____allBeatmapDataItemToNodeMap) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapData, ____beatmapDataItemsPerTypeAndId) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapData, ____numberOfLines) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapData, ____specialBasicBeatmapEventKeywords) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapData, ____beatmapObjectsInTimeRowProcessor) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapData, ____prevAddedBeatmapObjectDataTime) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapData, ____isCreatingFilteredCopy) == 0x6c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapData, 0x70>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapData*, "", "BeatmapData");
NEED_NO_BOX(::GlobalNamespace::BeatmapData_BeatmapDataBinaryHeapItem);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapData_BeatmapDataBinaryHeapItem*, "", "BeatmapData/BeatmapDataBinaryHeapItem");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::BeatmapData___c__DisplayClass46_0_1, "", "BeatmapData/<>c__DisplayClass46_0`1");

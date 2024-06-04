#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
class BeatmapEventData;
}
namespace GlobalNamespace {
class BeatmapObjectData;
}
namespace GlobalNamespace {
class BeatmapObjectsInTimeRowProcessor;
}
namespace GlobalNamespace {
class IReadonlyBeatmapData;
}
namespace GlobalNamespace {
template <typename T> class ISortedList_1;
}
namespace GlobalNamespace {
class __BeatmapData__BeatmapDataBinaryHeapItem;
}
namespace GlobalNamespace {
template <typename T> class __BeatmapData____c__DisplayClass46_0_1;
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
namespace System {
template <typename T> class IComparable_1;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapData;
}
namespace GlobalNamespace {
class __BeatmapData__BeatmapDataBinaryHeapItem;
}
namespace GlobalNamespace {
template <typename T> class __BeatmapData____c__DisplayClass46_0_1;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapData);
MARK_REF_PTR_T(::GlobalNamespace::__BeatmapData__BeatmapDataBinaryHeapItem);
MARK_GEN_REF_PTR_T(::GlobalNamespace::__BeatmapData____c__DisplayClass46_0_1);
// Type: ::BeatmapDataBinaryHeapItem
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BeatmapData::BeatmapDataBinaryHeapItem*
class CORDL_TYPE __BeatmapData__BeatmapDataBinaryHeapItem : public ::System::Object {
public:
  // Declarations
  /// @brief Field node, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_node, put = __cordl_internal_set_node))::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>* node;

  /// @brief Convert operator to "::System::IComparable_1<::GlobalNamespace::__BeatmapData__BeatmapDataBinaryHeapItem*>"
  constexpr operator ::System::IComparable_1<::GlobalNamespace::__BeatmapData__BeatmapDataBinaryHeapItem*>*() noexcept;

  /// @brief Method CompareTo, addr 0x14b3568, size 0xb0, virtual true, abstract: false, final true
  inline int32_t CompareTo(::GlobalNamespace::__BeatmapData__BeatmapDataBinaryHeapItem* other);

  static inline ::GlobalNamespace::__BeatmapData__BeatmapDataBinaryHeapItem* New_ctor(::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>* node);

  constexpr ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*& __cordl_internal_get_node();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*> const& __cordl_internal_get_node() const;

  constexpr void __cordl_internal_set_node(::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>* value);

  /// @brief Method .ctor, addr 0x14b2e78, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>* node);

  /// @brief Convert to "::System::IComparable_1<::GlobalNamespace::__BeatmapData__BeatmapDataBinaryHeapItem*>"
  constexpr ::System::IComparable_1<::GlobalNamespace::__BeatmapData__BeatmapDataBinaryHeapItem*>* i___System__IComparable_1___GlobalNamespace____BeatmapData__BeatmapDataBinaryHeapItem__() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapData__BeatmapDataBinaryHeapItem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapData__BeatmapDataBinaryHeapItem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapData__BeatmapDataBinaryHeapItem(__BeatmapData__BeatmapDataBinaryHeapItem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapData__BeatmapDataBinaryHeapItem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapData__BeatmapDataBinaryHeapItem(__BeatmapData__BeatmapDataBinaryHeapItem const&) = delete;

  /// @brief Field node, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>* ___node;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapData__BeatmapDataBinaryHeapItem, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapData__BeatmapDataBinaryHeapItem, ___node) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass46_0`1
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::BeatmapData::<>c__DisplayClass46_0`1<T>*
class CORDL_TYPE __BeatmapData____c__DisplayClass46_0_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field subtypeGroupIdentifiers, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_subtypeGroupIdentifiers, put = __cordl_internal_set_subtypeGroupIdentifiers))::ArrayW<int32_t, ::Array<int32_t>*> subtypeGroupIdentifiers;

  static inline ::GlobalNamespace::__BeatmapData____c__DisplayClass46_0_1<T>* New_ctor();

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
  constexpr __BeatmapData____c__DisplayClass46_0_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapData____c__DisplayClass46_0_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapData____c__DisplayClass46_0_1(__BeatmapData____c__DisplayClass46_0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapData____c__DisplayClass46_0_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapData____c__DisplayClass46_0_1(__BeatmapData____c__DisplayClass46_0_1 const&) = delete;

  /// @brief Field subtypeGroupIdentifiers, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___subtypeGroupIdentifiers;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Type: ::BeatmapData
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 109, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BeatmapData*
class CORDL_TYPE BeatmapData : public ::System::Object {
public:
  // Declarations
  using BeatmapDataBinaryHeapItem = ::GlobalNamespace::__BeatmapData__BeatmapDataBinaryHeapItem;

  template <typename T> using __c__DisplayClass46_0_1 = ::GlobalNamespace::__BeatmapData____c__DisplayClass46_0_1<T>;

  /// @brief Field _allBeatmapData, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__allBeatmapData, put = __cordl_internal_set__allBeatmapData))::GlobalNamespace::ISortedList_1<::GlobalNamespace::BeatmapDataItem*>* _allBeatmapData;

  /// @brief Field _allBeatmapDataItemToNodeMap, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__allBeatmapDataItemToNodeMap, put = __cordl_internal_set__allBeatmapDataItemToNodeMap))::System::Collections::Generic::Dictionary_2<
      ::GlobalNamespace::BeatmapDataItem*, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>* _allBeatmapDataItemToNodeMap;

  /// @brief Field _beatmapDataItemsPerTypeAndId, offset 0x48, size 0x8
  __declspec(
      property(get = __cordl_internal_get__beatmapDataItemsPerTypeAndId,
               put = __cordl_internal_set__beatmapDataItemsPerTypeAndId))::GlobalNamespace::BeatmapDataSortedListForTypeAndIds_1<::GlobalNamespace::BeatmapDataItem*>* _beatmapDataItemsPerTypeAndId;

  /// @brief Field _beatmapObjectsInTimeRowProcessor, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapObjectsInTimeRowProcessor,
                      put = __cordl_internal_set__beatmapObjectsInTimeRowProcessor))::GlobalNamespace::BeatmapObjectsInTimeRowProcessor* _beatmapObjectsInTimeRowProcessor;

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
                      put = __cordl_internal_set__specialBasicBeatmapEventKeywords))::System::Collections::Generic::HashSet_1<::StringW>* _specialBasicBeatmapEventKeywords;

  /// @brief Field <updateAllBeatmapDataOnInsert>k__BackingField, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__updateAllBeatmapDataOnInsert_k__BackingField,
                      put = __cordl_internal_set__updateAllBeatmapDataOnInsert_k__BackingField)) bool _updateAllBeatmapDataOnInsert_k__BackingField;

  __declspec(property(get = get_allBeatmapDataItems))::System::Collections::Generic::LinkedList_1<::GlobalNamespace::BeatmapDataItem*>* allBeatmapDataItems;

  /// @brief Field beatmapEventDataWasInsertedEvent, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_beatmapEventDataWasInsertedEvent, put = __cordl_internal_set_beatmapEventDataWasInsertedEvent))::System::Action_2<
      ::GlobalNamespace::BeatmapEventData*, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>* beatmapEventDataWasInsertedEvent;

  /// @brief Field beatmapEventDataWasRemovedEvent, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_beatmapEventDataWasRemovedEvent,
                      put = __cordl_internal_set_beatmapEventDataWasRemovedEvent))::System::Action_1<::GlobalNamespace::BeatmapEventData*>* beatmapEventDataWasRemovedEvent;

  /// @brief Field beatmapEventDataWillBeRemovedEvent, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_beatmapEventDataWillBeRemovedEvent, put = __cordl_internal_set_beatmapEventDataWillBeRemovedEvent))::System::Action_2<
      ::GlobalNamespace::BeatmapEventData*, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>* beatmapEventDataWillBeRemovedEvent;

  __declspec(property(get = get_bombsCount, put = set_bombsCount)) int32_t bombsCount;

  __declspec(property(get = get_cuttableNotesCount, put = set_cuttableNotesCount)) int32_t cuttableNotesCount;

  __declspec(property(get = get_numberOfLines)) int32_t numberOfLines;

  __declspec(property(get = get_obstaclesCount, put = set_obstaclesCount)) int32_t obstaclesCount;

  __declspec(property(get = get_spawnRotationEventsCount)) int32_t spawnRotationEventsCount;

  __declspec(property(get = get_specialBasicBeatmapEventKeywords))::System::Collections::Generic::IEnumerable_1<::StringW>* specialBasicBeatmapEventKeywords;

  __declspec(property(get = get_updateAllBeatmapDataOnInsert, put = set_updateAllBeatmapDataOnInsert)) bool updateAllBeatmapDataOnInsert;

  /// @brief Convert operator to "::GlobalNamespace::IReadonlyBeatmapData"
  constexpr operator ::GlobalNamespace::IReadonlyBeatmapData*() noexcept;

  /// @brief Method AddBeatmapObjectData, addr 0x14b24b0, size 0x19c, virtual false, abstract: false, final false
  inline void AddBeatmapObjectData(::GlobalNamespace::BeatmapObjectData* beatmapObjectData);

  /// @brief Method AddBeatmapObjectDataInOrder, addr 0x14b2820, size 0x2c, virtual false, abstract: false, final false
  inline void AddBeatmapObjectDataInOrder(::GlobalNamespace::BeatmapObjectData* beatmapObjectData);

  /// @brief Method AddSpecialBasicBeatmapEventKeyword, addr 0x14b2abc, size 0x58, virtual false, abstract: false, final false
  inline void AddSpecialBasicBeatmapEventKeyword(::StringW specialBasicBeatmapEventKeyword);

  /// @brief Method GetBeatmapDataItems, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename T> inline ::System::Collections::Generic::IEnumerable_1<T>* GetBeatmapDataItems(int32_t subtypeGroupIdentifier);

  /// @brief Method GetBeatmapDataItemsCount, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline int32_t GetBeatmapDataItemsCount(int32_t subtypeGroupIdentifier);

  /// @brief Method GetBeatmapDataItemsMerged, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::System::Collections::Generic::IEnumerable_1<T>* GetBeatmapDataItemsMerged(::ArrayW<int32_t, ::Array<int32_t>*> subtypeGroupIdentifiers);

  /// @brief Method GetBeatmapDataItemsMergedCount, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline int32_t GetBeatmapDataItemsMergedCount(::ArrayW<int32_t, ::Array<int32_t>*> subtypeGroupIdentifiers);

  /// @brief Method GetCopy, addr 0x14b2ea0, size 0x34c, virtual true, abstract: false, final true
  inline ::GlobalNamespace::BeatmapData* GetCopy();

  /// @brief Method GetFilteredCopy, addr 0x14b31ec, size 0x37c, virtual true, abstract: false, final true
  inline ::GlobalNamespace::BeatmapData* GetFilteredCopy(::System::Func_2<::GlobalNamespace::BeatmapDataItem*, ::GlobalNamespace::BeatmapDataItem*>* processDataItem);

  /// @brief Method InsertBeatmapEventData, addr 0x14b284c, size 0x9c, virtual false, abstract: false, final false
  inline void InsertBeatmapEventData(::GlobalNamespace::BeatmapEventData* beatmapEventData);

  /// @brief Method InsertBeatmapEventDataInOrder, addr 0x14b28e8, size 0x58, virtual false, abstract: false, final false
  inline void InsertBeatmapEventDataInOrder(::GlobalNamespace::BeatmapEventData* beatmapEventData);

  /// @brief Method InsertToAllBeatmapData, addr 0x14b264c, size 0x1d4, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*
  InsertToAllBeatmapData(::GlobalNamespace::BeatmapDataItem* beatmapDataItem, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>* node);

  static inline ::GlobalNamespace::BeatmapData* New_ctor(int32_t numberOfLines);

  /// @brief Method ProcessAndSortBeatmapData, addr 0x14b2b30, size 0x348, virtual false, abstract: false, final false
  inline void ProcessAndSortBeatmapData();

  /// @brief Method ProcessRemainingData, addr 0x14b2b14, size 0x1c, virtual false, abstract: false, final false
  inline void ProcessRemainingData();

  /// @brief Method RemoveBeatmapEventData, addr 0x14b2940, size 0x17c, virtual false, abstract: false, final false
  inline void RemoveBeatmapEventData(::GlobalNamespace::BeatmapEventData* beatmapEventData);

  constexpr ::GlobalNamespace::ISortedList_1<::GlobalNamespace::BeatmapDataItem*>*& __cordl_internal_get__allBeatmapData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ISortedList_1<::GlobalNamespace::BeatmapDataItem*>*> const& __cordl_internal_get__allBeatmapData() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::BeatmapDataItem*, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>*&
  __cordl_internal_get__allBeatmapDataItemToNodeMap();

  constexpr ::cordl_internals::to_const_pointer<
      ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::BeatmapDataItem*, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>*> const&
  __cordl_internal_get__allBeatmapDataItemToNodeMap() const;

  constexpr ::GlobalNamespace::BeatmapDataSortedListForTypeAndIds_1<::GlobalNamespace::BeatmapDataItem*>*& __cordl_internal_get__beatmapDataItemsPerTypeAndId();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataSortedListForTypeAndIds_1<::GlobalNamespace::BeatmapDataItem*>*> const&
  __cordl_internal_get__beatmapDataItemsPerTypeAndId() const;

  constexpr ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor*& __cordl_internal_get__beatmapObjectsInTimeRowProcessor();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor*> const& __cordl_internal_get__beatmapObjectsInTimeRowProcessor() const;

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

  constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& __cordl_internal_get__specialBasicBeatmapEventKeywords();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::StringW>*> const& __cordl_internal_get__specialBasicBeatmapEventKeywords() const;

  constexpr bool const& __cordl_internal_get__updateAllBeatmapDataOnInsert_k__BackingField() const;

  constexpr bool& __cordl_internal_get__updateAllBeatmapDataOnInsert_k__BackingField();

  constexpr ::System::Action_2<::GlobalNamespace::BeatmapEventData*, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>*&
  __cordl_internal_get_beatmapEventDataWasInsertedEvent();

  constexpr ::cordl_internals::to_const_pointer<
      ::System::Action_2<::GlobalNamespace::BeatmapEventData*, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>*> const&
  __cordl_internal_get_beatmapEventDataWasInsertedEvent() const;

  constexpr ::System::Action_1<::GlobalNamespace::BeatmapEventData*>*& __cordl_internal_get_beatmapEventDataWasRemovedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::BeatmapEventData*>*> const& __cordl_internal_get_beatmapEventDataWasRemovedEvent() const;

  constexpr ::System::Action_2<::GlobalNamespace::BeatmapEventData*, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>*&
  __cordl_internal_get_beatmapEventDataWillBeRemovedEvent();

  constexpr ::cordl_internals::to_const_pointer<
      ::System::Action_2<::GlobalNamespace::BeatmapEventData*, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>*> const&
  __cordl_internal_get_beatmapEventDataWillBeRemovedEvent() const;

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

  /// @brief Method .ctor, addr 0x14b231c, size 0x194, virtual false, abstract: false, final false
  inline void _ctor(int32_t numberOfLines);

  /// @brief Method add_beatmapEventDataWasInsertedEvent, addr 0x14b1efc, size 0xb0, virtual true, abstract: false, final true
  inline void
  add_beatmapEventDataWasInsertedEvent(::System::Action_2<::GlobalNamespace::BeatmapEventData*, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>* value);

  /// @brief Method add_beatmapEventDataWasRemovedEvent, addr 0x14b21bc, size 0xb0, virtual true, abstract: false, final true
  inline void add_beatmapEventDataWasRemovedEvent(::System::Action_1<::GlobalNamespace::BeatmapEventData*>* value);

  /// @brief Method add_beatmapEventDataWillBeRemovedEvent, addr 0x14b205c, size 0xb0, virtual true, abstract: false, final true
  inline void
  add_beatmapEventDataWillBeRemovedEvent(::System::Action_2<::GlobalNamespace::BeatmapEventData*, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>* value);

  /// @brief Method get_allBeatmapDataItems, addr 0x14b1dcc, size 0xa4, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::LinkedList_1<::GlobalNamespace::BeatmapDataItem*>* get_allBeatmapDataItems();

  /// @brief Method get_bombsCount, addr 0x14b1e98, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_bombsCount();

  /// @brief Method get_cuttableNotesCount, addr 0x14b1e78, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_cuttableNotesCount();

  /// @brief Method get_numberOfLines, addr 0x14b1e70, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_numberOfLines();

  /// @brief Method get_obstaclesCount, addr 0x14b1e88, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_obstaclesCount();

  /// @brief Method get_spawnRotationEventsCount, addr 0x14b1ea8, size 0x4c, virtual true, abstract: false, final true
  inline int32_t get_spawnRotationEventsCount();

  /// @brief Method get_specialBasicBeatmapEventKeywords, addr 0x14b1ef4, size 0x8, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerable_1<::StringW>* get_specialBasicBeatmapEventKeywords();

  /// @brief Method get_updateAllBeatmapDataOnInsert, addr 0x14b1db8, size 0x8, virtual false, abstract: false, final false
  inline bool get_updateAllBeatmapDataOnInsert();

  /// @brief Convert to "::GlobalNamespace::IReadonlyBeatmapData"
  constexpr ::GlobalNamespace::IReadonlyBeatmapData* i___GlobalNamespace__IReadonlyBeatmapData() noexcept;

  /// @brief Method remove_beatmapEventDataWasInsertedEvent, addr 0x14b1fac, size 0xb0, virtual true, abstract: false, final true
  inline void
  remove_beatmapEventDataWasInsertedEvent(::System::Action_2<::GlobalNamespace::BeatmapEventData*, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>* value);

  /// @brief Method remove_beatmapEventDataWasRemovedEvent, addr 0x14b226c, size 0xb0, virtual true, abstract: false, final true
  inline void remove_beatmapEventDataWasRemovedEvent(::System::Action_1<::GlobalNamespace::BeatmapEventData*>* value);

  /// @brief Method remove_beatmapEventDataWillBeRemovedEvent, addr 0x14b210c, size 0xb0, virtual true, abstract: false, final true
  inline void
  remove_beatmapEventDataWillBeRemovedEvent(::System::Action_2<::GlobalNamespace::BeatmapEventData*, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>* value);

  /// @brief Method set_bombsCount, addr 0x14b1ea0, size 0x8, virtual false, abstract: false, final false
  inline void set_bombsCount(int32_t value);

  /// @brief Method set_cuttableNotesCount, addr 0x14b1e80, size 0x8, virtual false, abstract: false, final false
  inline void set_cuttableNotesCount(int32_t value);

  /// @brief Method set_obstaclesCount, addr 0x14b1e90, size 0x8, virtual false, abstract: false, final false
  inline void set_obstaclesCount(int32_t value);

  /// @brief Method set_updateAllBeatmapDataOnInsert, addr 0x14b1dc0, size 0xc, virtual false, abstract: false, final false
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

  /// @brief Field kDefaultNumberOfLines offset 0xffffffff size 0x4
  static constexpr int32_t kDefaultNumberOfLines{ static_cast<int32_t>(0x4) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapData, 0x70>, "Size mismatch!");

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

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapData*, "", "BeatmapData");
NEED_NO_BOX(::GlobalNamespace::__BeatmapData__BeatmapDataBinaryHeapItem);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapData__BeatmapDataBinaryHeapItem*, "", "BeatmapData/BeatmapDataBinaryHeapItem");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::__BeatmapData____c__DisplayClass46_0_1, "", "BeatmapData/<>c__DisplayClass46_0`1");

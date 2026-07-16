#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataItem_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataSortedListForTypeAndIds_1_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectsInTimeRowProcessor_def.hpp"
#include "GlobalNamespace/zzzz__IReadonlyBeatmapData_def.hpp"
#include "GlobalNamespace/zzzz__ISortedList_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedListNode_1_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedList_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapData_BeatmapDataBinaryHeapItem._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapData_BeatmapDataBinaryHeapItem::*)(
    ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*)>(&::GlobalNamespace::BeatmapData_BeatmapDataBinaryHeapItem::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x370db4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapData_BeatmapDataBinaryHeapItem*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapData_BeatmapDataBinaryHeapItem.CompareTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::BeatmapData_BeatmapDataBinaryHeapItem::*)(::GlobalNamespace::BeatmapData_BeatmapDataBinaryHeapItem*)>(
    &::GlobalNamespace::BeatmapData_BeatmapDataBinaryHeapItem::CompareTo)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x370e178;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapData_BeatmapDataBinaryHeapItem*>(),
                                                                                           { "CompareTo", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapData_BeatmapDataBinaryHeapItem*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*& GlobalNamespace::BeatmapData_BeatmapDataBinaryHeapItem::__cordl_internal_get_node() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___node;
}
constexpr ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>* const& GlobalNamespace::BeatmapData_BeatmapDataBinaryHeapItem::__cordl_internal_get_node() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___node;
}
constexpr void GlobalNamespace::BeatmapData_BeatmapDataBinaryHeapItem::__cordl_internal_set_node(::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___node = value;
}
inline void GlobalNamespace::BeatmapData_BeatmapDataBinaryHeapItem::_ctor(::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>* node) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapData_BeatmapDataBinaryHeapItem*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
inline int32_t GlobalNamespace::BeatmapData_BeatmapDataBinaryHeapItem::CompareTo(::GlobalNamespace::BeatmapData_BeatmapDataBinaryHeapItem* other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapData_BeatmapDataBinaryHeapItem*>(),
                                                                                         { "CompareTo", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapData_BeatmapDataBinaryHeapItem*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, other);
}
inline ::GlobalNamespace::BeatmapData_BeatmapDataBinaryHeapItem*
GlobalNamespace::BeatmapData_BeatmapDataBinaryHeapItem::New_ctor(::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>* node) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatmapData_BeatmapDataBinaryHeapItem*>(node));
}
/// @brief Convert operator to "::System::IComparable_1<::GlobalNamespace::BeatmapData_BeatmapDataBinaryHeapItem*>"
constexpr GlobalNamespace::BeatmapData_BeatmapDataBinaryHeapItem::operator ::System::IComparable_1<::GlobalNamespace::BeatmapData_BeatmapDataBinaryHeapItem*>*() noexcept {
  return static_cast<::System::IComparable_1<::GlobalNamespace::BeatmapData_BeatmapDataBinaryHeapItem*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IComparable_1<::GlobalNamespace::BeatmapData_BeatmapDataBinaryHeapItem*>"
constexpr ::System::IComparable_1<::GlobalNamespace::BeatmapData_BeatmapDataBinaryHeapItem*>*
GlobalNamespace::BeatmapData_BeatmapDataBinaryHeapItem::i___System__IComparable_1___GlobalNamespace__BeatmapData_BeatmapDataBinaryHeapItem__() noexcept {
  return static_cast<::System::IComparable_1<::GlobalNamespace::BeatmapData_BeatmapDataBinaryHeapItem*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapData_BeatmapDataBinaryHeapItem::BeatmapData_BeatmapDataBinaryHeapItem() {}
template <typename T> constexpr ::ArrayW<int32_t>& GlobalNamespace::BeatmapData___c__DisplayClass50_0_1<T>::__cordl_internal_get_subtypeGroupIdentifiers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subtypeGroupIdentifiers;
}
template <typename T> constexpr ::ArrayW<int32_t> const& GlobalNamespace::BeatmapData___c__DisplayClass50_0_1<T>::__cordl_internal_get_subtypeGroupIdentifiers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subtypeGroupIdentifiers;
}
template <typename T> constexpr void GlobalNamespace::BeatmapData___c__DisplayClass50_0_1<T>::__cordl_internal_set_subtypeGroupIdentifiers(::ArrayW<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___subtypeGroupIdentifiers = value;
}
template <typename T> inline void GlobalNamespace::BeatmapData___c__DisplayClass50_0_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapData___c__DisplayClass50_0_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T>
inline bool GlobalNamespace::BeatmapData___c__DisplayClass50_0_1<T>::_GetBeatmapDataItemsMerged_b__0(::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>* head) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapData___c__DisplayClass50_0_1<T>*>(),
                                       { "<GetBeatmapDataItemsMerged>b__0", {}, { ::i2c::type_of<::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, head);
}
template <typename T> inline ::GlobalNamespace::BeatmapData___c__DisplayClass50_0_1<T>* GlobalNamespace::BeatmapData___c__DisplayClass50_0_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatmapData___c__DisplayClass50_0_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::BeatmapData___c__DisplayClass50_0_1<T>::BeatmapData___c__DisplayClass50_0_1() {}
//  Writing Method size for method: ::GlobalNamespace::BeatmapData.get_updateAllBeatmapDataOnInsert
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BeatmapData::*)()>(&::GlobalNamespace::BeatmapData::get_updateAllBeatmapDataOnInsert)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x370ce50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapData*>(), { "get_updateAllBeatmapDataOnInsert", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapData.set_updateAllBeatmapDataOnInsert
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapData::*)(bool)>(&::GlobalNamespace::BeatmapData::set_updateAllBeatmapDataOnInsert)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x370ce58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapData*>(), { "set_updateAllBeatmapDataOnInsert", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapData.get_allBeatmapDataItems
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::LinkedList_1<::GlobalNamespace::BeatmapDataItem*>* (::GlobalNamespace::BeatmapData::*)()>(
    &::GlobalNamespace::BeatmapData::get_allBeatmapDataItems)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x370ce60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapData*>(), { "get_allBeatmapDataItems", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapData.get_areValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BeatmapData::*)()>(&::GlobalNamespace::BeatmapData::get_areValid)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x370cf08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapData*>(), { "get_areValid", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapData.get_numberOfLines
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::BeatmapData::*)()>(&::GlobalNamespace::BeatmapData::get_numberOfLines)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x370cf18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapData*>(), { "get_numberOfLines", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapData.get_cuttableNotesCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::BeatmapData::*)()>(&::GlobalNamespace::BeatmapData::get_cuttableNotesCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x370cf20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapData*>(), { "get_cuttableNotesCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapData.set_cuttableNotesCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapData::*)(int32_t)>(&::GlobalNamespace::BeatmapData::set_cuttableNotesCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x370cf28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapData*>(), { "set_cuttableNotesCount", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapData.get_cuttableScoringObjectsCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::BeatmapData::*)()>(&::GlobalNamespace::BeatmapData::get_cuttableScoringObjectsCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x370cf30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapData*>(), { "get_cuttableScoringObjectsCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapData.set_cuttableScoringObjectsCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapData::*)(int32_t)>(&::GlobalNamespace::BeatmapData::set_cuttableScoringObjectsCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x370cf38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapData*>(), { "set_cuttableScoringObjectsCount", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapData.get_obstaclesCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::BeatmapData::*)()>(&::GlobalNamespace::BeatmapData::get_obstaclesCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x370cf40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapData*>(), { "get_obstaclesCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapData.set_obstaclesCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapData::*)(int32_t)>(&::GlobalNamespace::BeatmapData::set_obstaclesCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x370cf48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapData*>(), { "set_obstaclesCount", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapData.get_bombsCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::BeatmapData::*)()>(&::GlobalNamespace::BeatmapData::get_bombsCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x370cf50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapData*>(), { "get_bombsCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapData.set_bombsCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapData::*)(int32_t)>(&::GlobalNamespace::BeatmapData::set_bombsCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x370cf58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapData*>(), { "set_bombsCount", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapData.get_specialBasicBeatmapEventKeywords
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::StringW>* (::GlobalNamespace::BeatmapData::*)()>(
    &::GlobalNamespace::BeatmapData::get_specialBasicBeatmapEventKeywords)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x370cf60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapData*>(), { "get_specialBasicBeatmapEventKeywords", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapData.add_beatmapEventDataWasInsertedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapData::*)(
    ::System::Action_2<::GlobalNamespace::BeatmapEventData*, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>*)>(
    &::GlobalNamespace::BeatmapData::add_beatmapEventDataWasInsertedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x370cf68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::GlobalNamespace::BeatmapData*>(),
                         { "add_beatmapEventDataWasInsertedEvent",
                           {},
                           { ::i2c::type_of<::System::Action_2<::GlobalNamespace::BeatmapEventData*, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapData.remove_beatmapEventDataWasInsertedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapData::*)(
    ::System::Action_2<::GlobalNamespace::BeatmapEventData*, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>*)>(
    &::GlobalNamespace::BeatmapData::remove_beatmapEventDataWasInsertedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x370d028;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::GlobalNamespace::BeatmapData*>(),
                         { "remove_beatmapEventDataWasInsertedEvent",
                           {},
                           { ::i2c::type_of<::System::Action_2<::GlobalNamespace::BeatmapEventData*, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapData.add_beatmapEventDataWillBeRemovedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapData::*)(
    ::System::Action_2<::GlobalNamespace::BeatmapEventData*, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>*)>(
    &::GlobalNamespace::BeatmapData::add_beatmapEventDataWillBeRemovedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x370d0e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::GlobalNamespace::BeatmapData*>(),
                         { "add_beatmapEventDataWillBeRemovedEvent",
                           {},
                           { ::i2c::type_of<::System::Action_2<::GlobalNamespace::BeatmapEventData*, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapData.remove_beatmapEventDataWillBeRemovedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapData::*)(
    ::System::Action_2<::GlobalNamespace::BeatmapEventData*, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>*)>(
    &::GlobalNamespace::BeatmapData::remove_beatmapEventDataWillBeRemovedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x370d1a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::GlobalNamespace::BeatmapData*>(),
                         { "remove_beatmapEventDataWillBeRemovedEvent",
                           {},
                           { ::i2c::type_of<::System::Action_2<::GlobalNamespace::BeatmapEventData*, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapData.add_beatmapEventDataWasRemovedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapData::*)(::System::Action_1<::GlobalNamespace::BeatmapEventData*>*)>(
    &::GlobalNamespace::BeatmapData::add_beatmapEventDataWasRemovedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x370d268;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapData*>(),
                                                             { "add_beatmapEventDataWasRemovedEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::BeatmapEventData*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapData.remove_beatmapEventDataWasRemovedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapData::*)(::System::Action_1<::GlobalNamespace::BeatmapEventData*>*)>(
    &::GlobalNamespace::BeatmapData::remove_beatmapEventDataWasRemovedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x370d328;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapData*>(),
                                                             { "remove_beatmapEventDataWasRemovedEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::BeatmapEventData*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapData::*)(int32_t)>(&::GlobalNamespace::BeatmapData::_ctor)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x3702314;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapData*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapData.IsBasicEventSpecialKeywordEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BeatmapData::*)(::StringW)>(&::GlobalNamespace::BeatmapData::IsBasicEventSpecialKeywordEnabled)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x370d3e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapData*>(), { "IsBasicEventSpecialKeywordEnabled", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapData.AddBeatmapObjectData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapData::*)(::GlobalNamespace::BeatmapObjectData*)>(&::GlobalNamespace::BeatmapData::AddBeatmapObjectData)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x3702584;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapData*>(), { "AddBeatmapObjectData", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapObjectData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapData.AddBeatmapObjectDataInOrder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapData::*)(::GlobalNamespace::BeatmapObjectData*)>(&::GlobalNamespace::BeatmapData::AddBeatmapObjectDataInOrder)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x3704288;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapData*>(), { "AddBeatmapObjectDataInOrder", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapObjectData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapData.InsertBeatmapEventData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapData::*)(::GlobalNamespace::BeatmapEventData*)>(&::GlobalNamespace::BeatmapData::InsertBeatmapEventData)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x37024d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapData*>(), { "InsertBeatmapEventData", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapData.InsertBeatmapEventDataInOrder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapData::*)(::GlobalNamespace::BeatmapEventData*)>(
    &::GlobalNamespace::BeatmapData::InsertBeatmapEventDataInOrder)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3704230;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapData*>(), { "InsertBeatmapEventDataInOrder", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapData.RemoveBeatmapEventData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapData::*)(::GlobalNamespace::BeatmapEventData*)>(&::GlobalNamespace::BeatmapData::RemoveBeatmapEventData)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x370d638;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapData*>(), { "RemoveBeatmapEventData", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapData.AddSpecialBasicBeatmapEventKeyword
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapData::*)(::StringW)>(&::GlobalNamespace::BeatmapData::AddSpecialBasicBeatmapEventKeyword)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x37043cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapData*>(), { "AddSpecialBasicBeatmapEventKeyword", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapData.ProcessRemainingData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapData::*)()>(&::GlobalNamespace::BeatmapData::ProcessRemainingData)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x370d7c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapData*>(), { "ProcessRemainingData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapData.ProcessAndSortBeatmapData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapData::*)()>(&::GlobalNamespace::BeatmapData::ProcessAndSortBeatmapData)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x370d7dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapData*>(), { "ProcessAndSortBeatmapData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapData.GetCopy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapData* (::GlobalNamespace::BeatmapData::*)()>(&::GlobalNamespace::BeatmapData::GetCopy)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x370db54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapData*>(), { "GetCopy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapData.GetFilteredCopy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapData* (
    ::GlobalNamespace::BeatmapData::*)(::System::Func_2<::GlobalNamespace::BeatmapDataItem*, ::GlobalNamespace::BeatmapDataItem*>*)>(&::GlobalNamespace::BeatmapData::GetFilteredCopy)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0x370de4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapData*>(),
                                                { "GetFilteredCopy", {}, { ::i2c::type_of<::System::Func_2<::GlobalNamespace::BeatmapDataItem*, ::GlobalNamespace::BeatmapDataItem*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapData.InsertToAllBeatmapData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>* (
    ::GlobalNamespace::BeatmapData::*)(::GlobalNamespace::BeatmapDataItem*, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*)>(
    &::GlobalNamespace::BeatmapData::InsertToAllBeatmapData)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x370d44c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapData*>(),
                            { "InsertToAllBeatmapData",
                              {},
                              { ::i2c::type_of<::GlobalNamespace::BeatmapDataItem*>(), ::i2c::type_of<::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>() } })));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::BeatmapData::__cordl_internal_get__updateAllBeatmapDataOnInsert_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____updateAllBeatmapDataOnInsert_k__BackingField;
}
constexpr bool const& GlobalNamespace::BeatmapData::__cordl_internal_get__updateAllBeatmapDataOnInsert_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____updateAllBeatmapDataOnInsert_k__BackingField;
}
constexpr void GlobalNamespace::BeatmapData::__cordl_internal_set__updateAllBeatmapDataOnInsert_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____updateAllBeatmapDataOnInsert_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::BeatmapData::__cordl_internal_get__cuttableNotesCount_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cuttableNotesCount_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::BeatmapData::__cordl_internal_get__cuttableNotesCount_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cuttableNotesCount_k__BackingField;
}
constexpr void GlobalNamespace::BeatmapData::__cordl_internal_set__cuttableNotesCount_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cuttableNotesCount_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::BeatmapData::__cordl_internal_get__cuttableScoringObjectsCount_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cuttableScoringObjectsCount_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::BeatmapData::__cordl_internal_get__cuttableScoringObjectsCount_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cuttableScoringObjectsCount_k__BackingField;
}
constexpr void GlobalNamespace::BeatmapData::__cordl_internal_set__cuttableScoringObjectsCount_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cuttableScoringObjectsCount_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::BeatmapData::__cordl_internal_get__obstaclesCount_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____obstaclesCount_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::BeatmapData::__cordl_internal_get__obstaclesCount_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____obstaclesCount_k__BackingField;
}
constexpr void GlobalNamespace::BeatmapData::__cordl_internal_set__obstaclesCount_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____obstaclesCount_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::BeatmapData::__cordl_internal_get__bombsCount_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bombsCount_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::BeatmapData::__cordl_internal_get__bombsCount_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bombsCount_k__BackingField;
}
constexpr void GlobalNamespace::BeatmapData::__cordl_internal_set__bombsCount_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bombsCount_k__BackingField = value;
}
constexpr ::System::Action_2<::GlobalNamespace::BeatmapEventData*, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>*&
GlobalNamespace::BeatmapData::__cordl_internal_get_beatmapEventDataWasInsertedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapEventDataWasInsertedEvent;
}
constexpr ::System::Action_2<::GlobalNamespace::BeatmapEventData*, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>* const&
GlobalNamespace::BeatmapData::__cordl_internal_get_beatmapEventDataWasInsertedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapEventDataWasInsertedEvent;
}
constexpr void GlobalNamespace::BeatmapData::__cordl_internal_set_beatmapEventDataWasInsertedEvent(
    ::System::Action_2<::GlobalNamespace::BeatmapEventData*, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___beatmapEventDataWasInsertedEvent = value;
}
constexpr ::System::Action_2<::GlobalNamespace::BeatmapEventData*, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>*&
GlobalNamespace::BeatmapData::__cordl_internal_get_beatmapEventDataWillBeRemovedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapEventDataWillBeRemovedEvent;
}
constexpr ::System::Action_2<::GlobalNamespace::BeatmapEventData*, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>* const&
GlobalNamespace::BeatmapData::__cordl_internal_get_beatmapEventDataWillBeRemovedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapEventDataWillBeRemovedEvent;
}
constexpr void GlobalNamespace::BeatmapData::__cordl_internal_set_beatmapEventDataWillBeRemovedEvent(
    ::System::Action_2<::GlobalNamespace::BeatmapEventData*, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___beatmapEventDataWillBeRemovedEvent = value;
}
constexpr ::System::Action_1<::GlobalNamespace::BeatmapEventData*>*& GlobalNamespace::BeatmapData::__cordl_internal_get_beatmapEventDataWasRemovedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapEventDataWasRemovedEvent;
}
constexpr ::System::Action_1<::GlobalNamespace::BeatmapEventData*>* const& GlobalNamespace::BeatmapData::__cordl_internal_get_beatmapEventDataWasRemovedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapEventDataWasRemovedEvent;
}
constexpr void GlobalNamespace::BeatmapData::__cordl_internal_set_beatmapEventDataWasRemovedEvent(::System::Action_1<::GlobalNamespace::BeatmapEventData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___beatmapEventDataWasRemovedEvent = value;
}
constexpr ::GlobalNamespace::ISortedList_1<::GlobalNamespace::BeatmapDataItem*>*& GlobalNamespace::BeatmapData::__cordl_internal_get__allBeatmapData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allBeatmapData;
}
constexpr ::GlobalNamespace::ISortedList_1<::GlobalNamespace::BeatmapDataItem*>* const& GlobalNamespace::BeatmapData::__cordl_internal_get__allBeatmapData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allBeatmapData;
}
constexpr void GlobalNamespace::BeatmapData::__cordl_internal_set__allBeatmapData(::GlobalNamespace::ISortedList_1<::GlobalNamespace::BeatmapDataItem*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____allBeatmapData = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::BeatmapDataItem*, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>*&
GlobalNamespace::BeatmapData::__cordl_internal_get__allBeatmapDataItemToNodeMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allBeatmapDataItemToNodeMap;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::BeatmapDataItem*, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>* const&
GlobalNamespace::BeatmapData::__cordl_internal_get__allBeatmapDataItemToNodeMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allBeatmapDataItemToNodeMap;
}
constexpr void GlobalNamespace::BeatmapData::__cordl_internal_set__allBeatmapDataItemToNodeMap(
    ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::BeatmapDataItem*, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____allBeatmapDataItemToNodeMap = value;
}
constexpr ::GlobalNamespace::BeatmapDataSortedListForTypeAndIds_1<::GlobalNamespace::BeatmapDataItem*>*& GlobalNamespace::BeatmapData::__cordl_internal_get__beatmapDataItemsPerTypeAndId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapDataItemsPerTypeAndId;
}
constexpr ::GlobalNamespace::BeatmapDataSortedListForTypeAndIds_1<::GlobalNamespace::BeatmapDataItem*>* const&
GlobalNamespace::BeatmapData::__cordl_internal_get__beatmapDataItemsPerTypeAndId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapDataItemsPerTypeAndId;
}
constexpr void GlobalNamespace::BeatmapData::__cordl_internal_set__beatmapDataItemsPerTypeAndId(::GlobalNamespace::BeatmapDataSortedListForTypeAndIds_1<::GlobalNamespace::BeatmapDataItem*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapDataItemsPerTypeAndId = value;
}
constexpr int32_t& GlobalNamespace::BeatmapData::__cordl_internal_get__numberOfLines() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____numberOfLines;
}
constexpr int32_t const& GlobalNamespace::BeatmapData::__cordl_internal_get__numberOfLines() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____numberOfLines;
}
constexpr void GlobalNamespace::BeatmapData::__cordl_internal_set__numberOfLines(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____numberOfLines = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& GlobalNamespace::BeatmapData::__cordl_internal_get__specialBasicBeatmapEventKeywords() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____specialBasicBeatmapEventKeywords;
}
constexpr ::System::Collections::Generic::HashSet_1<::StringW>* const& GlobalNamespace::BeatmapData::__cordl_internal_get__specialBasicBeatmapEventKeywords() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____specialBasicBeatmapEventKeywords;
}
constexpr void GlobalNamespace::BeatmapData::__cordl_internal_set__specialBasicBeatmapEventKeywords(::System::Collections::Generic::HashSet_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____specialBasicBeatmapEventKeywords = value;
}
constexpr ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor*& GlobalNamespace::BeatmapData::__cordl_internal_get__beatmapObjectsInTimeRowProcessor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapObjectsInTimeRowProcessor;
}
constexpr ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor* const& GlobalNamespace::BeatmapData::__cordl_internal_get__beatmapObjectsInTimeRowProcessor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapObjectsInTimeRowProcessor;
}
constexpr void GlobalNamespace::BeatmapData::__cordl_internal_set__beatmapObjectsInTimeRowProcessor(::GlobalNamespace::BeatmapObjectsInTimeRowProcessor* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapObjectsInTimeRowProcessor = value;
}
constexpr float_t& GlobalNamespace::BeatmapData::__cordl_internal_get__prevAddedBeatmapObjectDataTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevAddedBeatmapObjectDataTime;
}
constexpr float_t const& GlobalNamespace::BeatmapData::__cordl_internal_get__prevAddedBeatmapObjectDataTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevAddedBeatmapObjectDataTime;
}
constexpr void GlobalNamespace::BeatmapData::__cordl_internal_set__prevAddedBeatmapObjectDataTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____prevAddedBeatmapObjectDataTime = value;
}
constexpr bool& GlobalNamespace::BeatmapData::__cordl_internal_get__isCreatingFilteredCopy() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isCreatingFilteredCopy;
}
constexpr bool const& GlobalNamespace::BeatmapData::__cordl_internal_get__isCreatingFilteredCopy() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isCreatingFilteredCopy;
}
constexpr void GlobalNamespace::BeatmapData::__cordl_internal_set__isCreatingFilteredCopy(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isCreatingFilteredCopy = value;
}
inline bool GlobalNamespace::BeatmapData::get_updateAllBeatmapDataOnInsert() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapData*>(), { "get_updateAllBeatmapDataOnInsert", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapData::set_updateAllBeatmapDataOnInsert(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapData*>(), { "set_updateAllBeatmapDataOnInsert", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::LinkedList_1<::GlobalNamespace::BeatmapDataItem*>* GlobalNamespace::BeatmapData::get_allBeatmapDataItems() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapData*>(), { "get_allBeatmapDataItems", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::LinkedList_1<::GlobalNamespace::BeatmapDataItem*>*>(this, ___internal_method);
}
inline bool GlobalNamespace::BeatmapData::get_areValid() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapData*>(), { "get_areValid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t GlobalNamespace::BeatmapData::get_numberOfLines() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapData*>(), { "get_numberOfLines", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::BeatmapData::get_cuttableNotesCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapData*>(), { "get_cuttableNotesCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapData::set_cuttableNotesCount(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapData*>(), { "set_cuttableNotesCount", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::BeatmapData::get_cuttableScoringObjectsCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapData*>(), { "get_cuttableScoringObjectsCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapData::set_cuttableScoringObjectsCount(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapData*>(), { "set_cuttableScoringObjectsCount", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::BeatmapData::get_obstaclesCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapData*>(), { "get_obstaclesCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapData::set_obstaclesCount(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapData*>(), { "set_obstaclesCount", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::BeatmapData::get_bombsCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapData*>(), { "get_bombsCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapData::set_bombsCount(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapData*>(), { "set_bombsCount", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::IEnumerable_1<::StringW>* GlobalNamespace::BeatmapData::get_specialBasicBeatmapEventKeywords() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapData*>(), { "get_specialBasicBeatmapEventKeywords", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::StringW>*>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapData::add_beatmapEventDataWasInsertedEvent(
    ::System::Action_2<::GlobalNamespace::BeatmapEventData*, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::GlobalNamespace::BeatmapData*>(),
                       { "add_beatmapEventDataWasInsertedEvent",
                         {},
                         { ::i2c::type_of<::System::Action_2<::GlobalNamespace::BeatmapEventData*, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::BeatmapData::remove_beatmapEventDataWasInsertedEvent(
    ::System::Action_2<::GlobalNamespace::BeatmapEventData*, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::GlobalNamespace::BeatmapData*>(),
                       { "remove_beatmapEventDataWasInsertedEvent",
                         {},
                         { ::i2c::type_of<::System::Action_2<::GlobalNamespace::BeatmapEventData*, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::BeatmapData::add_beatmapEventDataWillBeRemovedEvent(
    ::System::Action_2<::GlobalNamespace::BeatmapEventData*, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::GlobalNamespace::BeatmapData*>(),
                       { "add_beatmapEventDataWillBeRemovedEvent",
                         {},
                         { ::i2c::type_of<::System::Action_2<::GlobalNamespace::BeatmapEventData*, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::BeatmapData::remove_beatmapEventDataWillBeRemovedEvent(
    ::System::Action_2<::GlobalNamespace::BeatmapEventData*, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::GlobalNamespace::BeatmapData*>(),
                       { "remove_beatmapEventDataWillBeRemovedEvent",
                         {},
                         { ::i2c::type_of<::System::Action_2<::GlobalNamespace::BeatmapEventData*, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::BeatmapData::add_beatmapEventDataWasRemovedEvent(::System::Action_1<::GlobalNamespace::BeatmapEventData*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapData*>(),
                                                           { "add_beatmapEventDataWasRemovedEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::BeatmapEventData*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::BeatmapData::remove_beatmapEventDataWasRemovedEvent(::System::Action_1<::GlobalNamespace::BeatmapEventData*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapData*>(),
                                                           { "remove_beatmapEventDataWasRemovedEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::BeatmapEventData*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::BeatmapData::_ctor(int32_t numberOfLines) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapData*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, numberOfLines);
}
template <typename T> inline ::System::Collections::Generic::IEnumerable_1<T>* GlobalNamespace::BeatmapData::GetBeatmapDataItems(int32_t subtypeGroupIdentifier) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapData*>(), { "GetBeatmapDataItems", { ::i2c::class_of<T>() }, { ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<T>*>(this, ___internal_method, subtypeGroupIdentifier);
}
template <typename T> inline int32_t GlobalNamespace::BeatmapData::GetBeatmapDataItemsCount(int32_t subtypeGroupIdentifier) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapData*>(), { "GetBeatmapDataItemsCount", { ::i2c::class_of<T>() }, { ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, subtypeGroupIdentifier);
}
template <typename T> inline ::System::Collections::Generic::IEnumerable_1<T>* GlobalNamespace::BeatmapData::GetBeatmapDataItemsMerged(::ArrayW<int32_t> subtypeGroupIdentifiers) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapData*>(), { "GetBeatmapDataItemsMerged", { ::i2c::class_of<T>() }, { ::i2c::type_of<::ArrayW<int32_t>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<T>*>(this, ___internal_method, subtypeGroupIdentifiers);
}
template <typename T> inline int32_t GlobalNamespace::BeatmapData::GetBeatmapDataItemsMergedCount(::ArrayW<int32_t> subtypeGroupIdentifiers) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapData*>(), { "GetBeatmapDataItemsMergedCount", { ::i2c::class_of<T>() }, { ::i2c::type_of<::ArrayW<int32_t>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, subtypeGroupIdentifiers);
}
inline bool GlobalNamespace::BeatmapData::IsBasicEventSpecialKeywordEnabled(::StringW keyword) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapData*>(), { "IsBasicEventSpecialKeywordEnabled", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, keyword);
}
inline void GlobalNamespace::BeatmapData::AddBeatmapObjectData(::GlobalNamespace::BeatmapObjectData* beatmapObjectData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapData*>(), { "AddBeatmapObjectData", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapObjectData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beatmapObjectData);
}
inline void GlobalNamespace::BeatmapData::AddBeatmapObjectDataInOrder(::GlobalNamespace::BeatmapObjectData* beatmapObjectData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapData*>(), { "AddBeatmapObjectDataInOrder", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapObjectData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beatmapObjectData);
}
inline void GlobalNamespace::BeatmapData::InsertBeatmapEventData(::GlobalNamespace::BeatmapEventData* beatmapEventData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapData*>(), { "InsertBeatmapEventData", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beatmapEventData);
}
inline void GlobalNamespace::BeatmapData::InsertBeatmapEventDataInOrder(::GlobalNamespace::BeatmapEventData* beatmapEventData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapData*>(), { "InsertBeatmapEventDataInOrder", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beatmapEventData);
}
inline void GlobalNamespace::BeatmapData::RemoveBeatmapEventData(::GlobalNamespace::BeatmapEventData* beatmapEventData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapData*>(), { "RemoveBeatmapEventData", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beatmapEventData);
}
inline void GlobalNamespace::BeatmapData::AddSpecialBasicBeatmapEventKeyword(::StringW specialBasicBeatmapEventKeyword) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapData*>(), { "AddSpecialBasicBeatmapEventKeyword", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, specialBasicBeatmapEventKeyword);
}
inline void GlobalNamespace::BeatmapData::ProcessRemainingData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapData*>(), { "ProcessRemainingData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapData::ProcessAndSortBeatmapData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapData*>(), { "ProcessAndSortBeatmapData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapData* GlobalNamespace::BeatmapData::GetCopy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapData*>(), { "GetCopy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapData*>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapData* GlobalNamespace::BeatmapData::GetFilteredCopy(::System::Func_2<::GlobalNamespace::BeatmapDataItem*, ::GlobalNamespace::BeatmapDataItem*>* processDataItem) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapData*>(),
                                              { "GetFilteredCopy", {}, { ::i2c::type_of<::System::Func_2<::GlobalNamespace::BeatmapDataItem*, ::GlobalNamespace::BeatmapDataItem*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapData*>(this, ___internal_method, processDataItem);
}
inline ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*
GlobalNamespace::BeatmapData::InsertToAllBeatmapData(::GlobalNamespace::BeatmapDataItem* beatmapDataItem, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>* node) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapData*>(),
                          { "InsertToAllBeatmapData",
                            {},
                            { ::i2c::type_of<::GlobalNamespace::BeatmapDataItem*>(), ::i2c::type_of<::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>(this, ___internal_method, beatmapDataItem, node);
}
inline ::GlobalNamespace::BeatmapData* GlobalNamespace::BeatmapData::New_ctor(int32_t numberOfLines) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatmapData*>(numberOfLines));
}
/// @brief Convert operator to "::GlobalNamespace::IReadonlyBeatmapData"
constexpr GlobalNamespace::BeatmapData::operator ::GlobalNamespace::IReadonlyBeatmapData*() noexcept {
  return static_cast<::GlobalNamespace::IReadonlyBeatmapData*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IReadonlyBeatmapData"
constexpr ::GlobalNamespace::IReadonlyBeatmapData* GlobalNamespace::BeatmapData::i___GlobalNamespace__IReadonlyBeatmapData() noexcept {
  return static_cast<::GlobalNamespace::IReadonlyBeatmapData*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapData::BeatmapData() {}

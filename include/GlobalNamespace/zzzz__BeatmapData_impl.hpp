#pragma once
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
//  Writing Method size for method: ::GlobalNamespace::__BeatmapData__BeatmapDataBinaryHeapItem._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapData__BeatmapDataBinaryHeapItem::*)(
    ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*)>(&::GlobalNamespace::__BeatmapData__BeatmapDataBinaryHeapItem::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x13b7f50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapData__BeatmapDataBinaryHeapItem*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapData__BeatmapDataBinaryHeapItem.CompareTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::__BeatmapData__BeatmapDataBinaryHeapItem::*)(
    ::GlobalNamespace::__BeatmapData__BeatmapDataBinaryHeapItem*)>(&::GlobalNamespace::__BeatmapData__BeatmapDataBinaryHeapItem::CompareTo)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x13b8640;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapData__BeatmapDataBinaryHeapItem*>::get(), "CompareTo", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapData__BeatmapDataBinaryHeapItem*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IComparable_1<::GlobalNamespace::__BeatmapData__BeatmapDataBinaryHeapItem*>"
constexpr GlobalNamespace::__BeatmapData__BeatmapDataBinaryHeapItem::operator ::System::IComparable_1<::GlobalNamespace::__BeatmapData__BeatmapDataBinaryHeapItem*>*() noexcept {
  return static_cast<::System::IComparable_1<::GlobalNamespace::__BeatmapData__BeatmapDataBinaryHeapItem*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IComparable_1<::GlobalNamespace::__BeatmapData__BeatmapDataBinaryHeapItem*>"
constexpr ::System::IComparable_1<::GlobalNamespace::__BeatmapData__BeatmapDataBinaryHeapItem*>*
GlobalNamespace::__BeatmapData__BeatmapDataBinaryHeapItem::i___System__IComparable_1___GlobalNamespace____BeatmapData__BeatmapDataBinaryHeapItem__() noexcept {
  return static_cast<::System::IComparable_1<::GlobalNamespace::__BeatmapData__BeatmapDataBinaryHeapItem*>*>(static_cast<void*>(this));
}
constexpr ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*& GlobalNamespace::__BeatmapData__BeatmapDataBinaryHeapItem::__cordl_internal_get_node() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___node;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*> const&
GlobalNamespace::__BeatmapData__BeatmapDataBinaryHeapItem::__cordl_internal_get_node() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___node;
}
constexpr void GlobalNamespace::__BeatmapData__BeatmapDataBinaryHeapItem::__cordl_internal_set_node(::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___node)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__BeatmapData__BeatmapDataBinaryHeapItem*
GlobalNamespace::__BeatmapData__BeatmapDataBinaryHeapItem::New_ctor(::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>* node) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__BeatmapData__BeatmapDataBinaryHeapItem*>(node));
}
inline void GlobalNamespace::__BeatmapData__BeatmapDataBinaryHeapItem::_ctor(::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>* node) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapData__BeatmapDataBinaryHeapItem*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, node);
}
inline int32_t GlobalNamespace::__BeatmapData__BeatmapDataBinaryHeapItem::CompareTo(::GlobalNamespace::__BeatmapData__BeatmapDataBinaryHeapItem* other) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapData__BeatmapDataBinaryHeapItem*>::get(), "CompareTo", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapData__BeatmapDataBinaryHeapItem*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, other);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BeatmapData__BeatmapDataBinaryHeapItem::__BeatmapData__BeatmapDataBinaryHeapItem() {}
template <typename T> constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& GlobalNamespace::__BeatmapData____c__DisplayClass46_0_1<T>::__cordl_internal_get_subtypeGroupIdentifiers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subtypeGroupIdentifiers;
}
template <typename T> constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& GlobalNamespace::__BeatmapData____c__DisplayClass46_0_1<T>::__cordl_internal_get_subtypeGroupIdentifiers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subtypeGroupIdentifiers;
}
template <typename T> constexpr void GlobalNamespace::__BeatmapData____c__DisplayClass46_0_1<T>::__cordl_internal_set_subtypeGroupIdentifiers(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___subtypeGroupIdentifiers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> inline ::GlobalNamespace::__BeatmapData____c__DisplayClass46_0_1<T>* GlobalNamespace::__BeatmapData____c__DisplayClass46_0_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__BeatmapData____c__DisplayClass46_0_1<T>*>());
}
template <typename T> inline void GlobalNamespace::__BeatmapData____c__DisplayClass46_0_1<T>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapData____c__DisplayClass46_0_1<T>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T>
inline bool GlobalNamespace::__BeatmapData____c__DisplayClass46_0_1<T>::_GetBeatmapDataItemsMerged_b__0(::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>* head) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapData____c__DisplayClass46_0_1<T>*>::get(), "<GetBeatmapDataItemsMerged>b__0",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, head);
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::__BeatmapData____c__DisplayClass46_0_1<T>::__BeatmapData____c__DisplayClass46_0_1() {}
//  Writing Method size for method: ::GlobalNamespace::BeatmapData.get_updateAllBeatmapDataOnInsert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::BeatmapData::*)()>(&::GlobalNamespace::BeatmapData::get_updateAllBeatmapDataOnInsert)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x13b6e90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapData*>::get(), "get_updateAllBeatmapDataOnInsert",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapData.set_updateAllBeatmapDataOnInsert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapData::*)(bool)>(&::GlobalNamespace::BeatmapData::set_updateAllBeatmapDataOnInsert)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x13b6e98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapData*>::get(), "set_updateAllBeatmapDataOnInsert",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapData.get_allBeatmapDataItems
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::LinkedList_1<::GlobalNamespace::BeatmapDataItem*>* (::GlobalNamespace::BeatmapData::*)()>(&::GlobalNamespace::BeatmapData::get_allBeatmapDataItems)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x13b6ea4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapData*>::get(),
                                                                               "get_allBeatmapDataItems", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapData.get_numberOfLines
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::BeatmapData::*)()>(&::GlobalNamespace::BeatmapData::get_numberOfLines)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x13b6f48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapData*>::get(), "get_numberOfLines",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapData.get_cuttableNotesCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::BeatmapData::*)()>(&::GlobalNamespace::BeatmapData::get_cuttableNotesCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x13b6f50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapData*>::get(), "get_cuttableNotesCount",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapData.set_cuttableNotesCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapData::*)(int32_t)>(&::GlobalNamespace::BeatmapData::set_cuttableNotesCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x13b6f58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapData*>::get(), "set_cuttableNotesCount", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapData.get_obstaclesCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::BeatmapData::*)()>(&::GlobalNamespace::BeatmapData::get_obstaclesCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x13b6f60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapData*>::get(), "get_obstaclesCount",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapData.set_obstaclesCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapData::*)(int32_t)>(&::GlobalNamespace::BeatmapData::set_obstaclesCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x13b6f68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapData*>::get(), "set_obstaclesCount", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapData.get_bombsCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::BeatmapData::*)()>(&::GlobalNamespace::BeatmapData::get_bombsCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x13b6f70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapData*>::get(), "get_bombsCount",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapData.set_bombsCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapData::*)(int32_t)>(&::GlobalNamespace::BeatmapData::set_bombsCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x13b6f78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapData*>::get(), "set_bombsCount", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapData.get_spawnRotationEventsCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::BeatmapData::*)()>(&::GlobalNamespace::BeatmapData::get_spawnRotationEventsCount)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x13b6f80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapData*>::get(),
                                                                               "get_spawnRotationEventsCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapData.get_specialBasicBeatmapEventKeywords
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::StringW>* (::GlobalNamespace::BeatmapData::*)()>(
    &::GlobalNamespace::BeatmapData::get_specialBasicBeatmapEventKeywords)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x13b6fcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapData*>::get(), "get_specialBasicBeatmapEventKeywords",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapData.add_beatmapEventDataWasInsertedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapData::*)(
    ::System::Action_2<::GlobalNamespace::BeatmapEventData*, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>*)>(
    &::GlobalNamespace::BeatmapData::add_beatmapEventDataWasInsertedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x13b6fd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapData*>::get(), "add_beatmapEventDataWasInsertedEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
            ::System::Action_2<::GlobalNamespace::BeatmapEventData*, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapData.remove_beatmapEventDataWasInsertedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapData::*)(
    ::System::Action_2<::GlobalNamespace::BeatmapEventData*, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>*)>(
    &::GlobalNamespace::BeatmapData::remove_beatmapEventDataWasInsertedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x13b7084;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapData*>::get(), "remove_beatmapEventDataWasInsertedEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
            ::System::Action_2<::GlobalNamespace::BeatmapEventData*, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapData.add_beatmapEventDataWillBeRemovedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapData::*)(
    ::System::Action_2<::GlobalNamespace::BeatmapEventData*, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>*)>(
    &::GlobalNamespace::BeatmapData::add_beatmapEventDataWillBeRemovedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x13b7134;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapData*>::get(), "add_beatmapEventDataWillBeRemovedEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
            ::System::Action_2<::GlobalNamespace::BeatmapEventData*, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapData.remove_beatmapEventDataWillBeRemovedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapData::*)(
    ::System::Action_2<::GlobalNamespace::BeatmapEventData*, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>*)>(
    &::GlobalNamespace::BeatmapData::remove_beatmapEventDataWillBeRemovedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x13b71e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapData*>::get(), "remove_beatmapEventDataWillBeRemovedEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
            ::System::Action_2<::GlobalNamespace::BeatmapEventData*, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapData.add_beatmapEventDataWasRemovedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapData::*)(::System::Action_1<::GlobalNamespace::BeatmapEventData*>*)>(
    &::GlobalNamespace::BeatmapData::add_beatmapEventDataWasRemovedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x13b7294;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapData*>::get(), "add_beatmapEventDataWasRemovedEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::BeatmapEventData*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapData.remove_beatmapEventDataWasRemovedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapData::*)(::System::Action_1<::GlobalNamespace::BeatmapEventData*>*)>(
    &::GlobalNamespace::BeatmapData::remove_beatmapEventDataWasRemovedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x13b7344;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapData*>::get(), "remove_beatmapEventDataWasRemovedEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::BeatmapEventData*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapData::*)(int32_t)>(&::GlobalNamespace::BeatmapData::_ctor)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x13b73f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapData.AddBeatmapObjectData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapData::*)(::GlobalNamespace::BeatmapObjectData*)>(
    &::GlobalNamespace::BeatmapData::AddBeatmapObjectData)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x13b7588;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapData*>::get(), "AddBeatmapObjectData", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapObjectData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapData.AddBeatmapObjectDataInOrder
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapData::*)(::GlobalNamespace::BeatmapObjectData*)>(
    &::GlobalNamespace::BeatmapData::AddBeatmapObjectDataInOrder)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x13b78f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapData*>::get(), "AddBeatmapObjectDataInOrder", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapObjectData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapData.InsertBeatmapEventData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapData::*)(::GlobalNamespace::BeatmapEventData*)>(
    &::GlobalNamespace::BeatmapData::InsertBeatmapEventData)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x13b7924;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapData*>::get(), "InsertBeatmapEventData", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapEventData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapData.InsertBeatmapEventDataInOrder
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapData::*)(::GlobalNamespace::BeatmapEventData*)>(
    &::GlobalNamespace::BeatmapData::InsertBeatmapEventDataInOrder)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x13b79c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapData*>::get(), "InsertBeatmapEventDataInOrder", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapEventData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapData.RemoveBeatmapEventData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapData::*)(::GlobalNamespace::BeatmapEventData*)>(
    &::GlobalNamespace::BeatmapData::RemoveBeatmapEventData)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x13b7a18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapData*>::get(), "RemoveBeatmapEventData", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapEventData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapData.AddSpecialBasicBeatmapEventKeyword
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapData::*)(::StringW)>(
    &::GlobalNamespace::BeatmapData::AddSpecialBasicBeatmapEventKeyword)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x13b7b94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapData*>::get(), "AddSpecialBasicBeatmapEventKeyword",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapData.ProcessRemainingData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapData::*)()>(&::GlobalNamespace::BeatmapData::ProcessRemainingData)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x13b7bec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapData*>::get(), "ProcessRemainingData",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapData.ProcessAndSortBeatmapData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapData::*)()>(&::GlobalNamespace::BeatmapData::ProcessAndSortBeatmapData)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0x13b7c08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapData*>::get(),
                                                                               "ProcessAndSortBeatmapData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapData.GetCopy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapData* (::GlobalNamespace::BeatmapData::*)()>(&::GlobalNamespace::BeatmapData::GetCopy)> {
  constexpr static std::size_t size = 0x34c;
  constexpr static std::size_t addrs = 0x13b7f78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapData*>::get(), "GetCopy",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapData.GetFilteredCopy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapData* (
    ::GlobalNamespace::BeatmapData::*)(::System::Func_2<::GlobalNamespace::BeatmapDataItem*, ::GlobalNamespace::BeatmapDataItem*>*)>(&::GlobalNamespace::BeatmapData::GetFilteredCopy)> {
  constexpr static std::size_t size = 0x37c;
  constexpr static std::size_t addrs = 0x13b82c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapData*>::get(), "GetFilteredCopy", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::GlobalNamespace::BeatmapDataItem*, ::GlobalNamespace::BeatmapDataItem*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapData.InsertToAllBeatmapData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>* (
    ::GlobalNamespace::BeatmapData::*)(::GlobalNamespace::BeatmapDataItem*, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*)>(
    &::GlobalNamespace::BeatmapData::InsertToAllBeatmapData)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x13b7724;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapData*>::get(), "InsertToAllBeatmapData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDataItem*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IReadonlyBeatmapData"
constexpr GlobalNamespace::BeatmapData::operator ::GlobalNamespace::IReadonlyBeatmapData*() noexcept {
  return static_cast<::GlobalNamespace::IReadonlyBeatmapData*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IReadonlyBeatmapData"
constexpr ::GlobalNamespace::IReadonlyBeatmapData* GlobalNamespace::BeatmapData::i___GlobalNamespace__IReadonlyBeatmapData() noexcept {
  return static_cast<::GlobalNamespace::IReadonlyBeatmapData*>(static_cast<void*>(this));
}
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
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::BeatmapEventData*, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>*> const&
GlobalNamespace::BeatmapData::__cordl_internal_get_beatmapEventDataWasInsertedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapEventDataWasInsertedEvent;
}
constexpr void GlobalNamespace::BeatmapData::__cordl_internal_set_beatmapEventDataWasInsertedEvent(
    ::System::Action_2<::GlobalNamespace::BeatmapEventData*, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___beatmapEventDataWasInsertedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_2<::GlobalNamespace::BeatmapEventData*, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>*&
GlobalNamespace::BeatmapData::__cordl_internal_get_beatmapEventDataWillBeRemovedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapEventDataWillBeRemovedEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::BeatmapEventData*, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>*> const&
GlobalNamespace::BeatmapData::__cordl_internal_get_beatmapEventDataWillBeRemovedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapEventDataWillBeRemovedEvent;
}
constexpr void GlobalNamespace::BeatmapData::__cordl_internal_set_beatmapEventDataWillBeRemovedEvent(
    ::System::Action_2<::GlobalNamespace::BeatmapEventData*, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___beatmapEventDataWillBeRemovedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::GlobalNamespace::BeatmapEventData*>*& GlobalNamespace::BeatmapData::__cordl_internal_get_beatmapEventDataWasRemovedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapEventDataWasRemovedEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::BeatmapEventData*>*> const&
GlobalNamespace::BeatmapData::__cordl_internal_get_beatmapEventDataWasRemovedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapEventDataWasRemovedEvent;
}
constexpr void GlobalNamespace::BeatmapData::__cordl_internal_set_beatmapEventDataWasRemovedEvent(::System::Action_1<::GlobalNamespace::BeatmapEventData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___beatmapEventDataWasRemovedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::ISortedList_1<::GlobalNamespace::BeatmapDataItem*>*& GlobalNamespace::BeatmapData::__cordl_internal_get__allBeatmapData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allBeatmapData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ISortedList_1<::GlobalNamespace::BeatmapDataItem*>*> const&
GlobalNamespace::BeatmapData::__cordl_internal_get__allBeatmapData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allBeatmapData;
}
constexpr void GlobalNamespace::BeatmapData::__cordl_internal_set__allBeatmapData(::GlobalNamespace::ISortedList_1<::GlobalNamespace::BeatmapDataItem*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____allBeatmapData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::BeatmapDataItem*, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>*&
GlobalNamespace::BeatmapData::__cordl_internal_get__allBeatmapDataItemToNodeMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allBeatmapDataItemToNodeMap;
}
constexpr ::cordl_internals::to_const_pointer<
    ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::BeatmapDataItem*, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>*> const&
GlobalNamespace::BeatmapData::__cordl_internal_get__allBeatmapDataItemToNodeMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allBeatmapDataItemToNodeMap;
}
constexpr void GlobalNamespace::BeatmapData::__cordl_internal_set__allBeatmapDataItemToNodeMap(
    ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::BeatmapDataItem*, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____allBeatmapDataItemToNodeMap)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapDataSortedListForTypeAndIds_1<::GlobalNamespace::BeatmapDataItem*>*& GlobalNamespace::BeatmapData::__cordl_internal_get__beatmapDataItemsPerTypeAndId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapDataItemsPerTypeAndId;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataSortedListForTypeAndIds_1<::GlobalNamespace::BeatmapDataItem*>*> const&
GlobalNamespace::BeatmapData::__cordl_internal_get__beatmapDataItemsPerTypeAndId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapDataItemsPerTypeAndId;
}
constexpr void GlobalNamespace::BeatmapData::__cordl_internal_set__beatmapDataItemsPerTypeAndId(::GlobalNamespace::BeatmapDataSortedListForTypeAndIds_1<::GlobalNamespace::BeatmapDataItem*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapDataItemsPerTypeAndId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::StringW>*> const&
GlobalNamespace::BeatmapData::__cordl_internal_get__specialBasicBeatmapEventKeywords() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____specialBasicBeatmapEventKeywords;
}
constexpr void GlobalNamespace::BeatmapData::__cordl_internal_set__specialBasicBeatmapEventKeywords(::System::Collections::Generic::HashSet_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____specialBasicBeatmapEventKeywords)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor*& GlobalNamespace::BeatmapData::__cordl_internal_get__beatmapObjectsInTimeRowProcessor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapObjectsInTimeRowProcessor;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapObjectsInTimeRowProcessor*> const&
GlobalNamespace::BeatmapData::__cordl_internal_get__beatmapObjectsInTimeRowProcessor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapObjectsInTimeRowProcessor;
}
constexpr void GlobalNamespace::BeatmapData::__cordl_internal_set__beatmapObjectsInTimeRowProcessor(::GlobalNamespace::BeatmapObjectsInTimeRowProcessor* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapObjectsInTimeRowProcessor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapData*>::get(),
                                                                             "get_updateAllBeatmapDataOnInsert", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapData::set_updateAllBeatmapDataOnInsert(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapData*>::get(), "set_updateAllBeatmapDataOnInsert",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::LinkedList_1<::GlobalNamespace::BeatmapDataItem*>* GlobalNamespace::BeatmapData::get_allBeatmapDataItems() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapData*>::get(), "get_allBeatmapDataItems",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::LinkedList_1<::GlobalNamespace::BeatmapDataItem*>*, false>(this, ___internal_method);
}
inline int32_t GlobalNamespace::BeatmapData::get_numberOfLines() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapData*>::get(), "get_numberOfLines",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t GlobalNamespace::BeatmapData::get_cuttableNotesCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapData*>::get(), "get_cuttableNotesCount",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapData::set_cuttableNotesCount(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapData*>::get(), "set_cuttableNotesCount",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::BeatmapData::get_obstaclesCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapData*>::get(), "get_obstaclesCount",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapData::set_obstaclesCount(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapData*>::get(), "set_obstaclesCount",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::BeatmapData::get_bombsCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapData*>::get(), "get_bombsCount",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapData::set_bombsCount(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapData*>::get(), "set_bombsCount",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::BeatmapData::get_spawnRotationEventsCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapData*>::get(),
                                                                             "get_spawnRotationEventsCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::StringW>* GlobalNamespace::BeatmapData::get_specialBasicBeatmapEventKeywords() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapData*>::get(), "get_specialBasicBeatmapEventKeywords",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::StringW>*, false>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapData::add_beatmapEventDataWasInsertedEvent(
    ::System::Action_2<::GlobalNamespace::BeatmapEventData*, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapData*>::get(), "add_beatmapEventDataWasInsertedEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::System::Action_2<::GlobalNamespace::BeatmapEventData*, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::BeatmapData::remove_beatmapEventDataWasInsertedEvent(
    ::System::Action_2<::GlobalNamespace::BeatmapEventData*, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapData*>::get(), "remove_beatmapEventDataWasInsertedEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::System::Action_2<::GlobalNamespace::BeatmapEventData*, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::BeatmapData::add_beatmapEventDataWillBeRemovedEvent(
    ::System::Action_2<::GlobalNamespace::BeatmapEventData*, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapData*>::get(), "add_beatmapEventDataWillBeRemovedEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::System::Action_2<::GlobalNamespace::BeatmapEventData*, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::BeatmapData::remove_beatmapEventDataWillBeRemovedEvent(
    ::System::Action_2<::GlobalNamespace::BeatmapEventData*, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapData*>::get(), "remove_beatmapEventDataWillBeRemovedEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::System::Action_2<::GlobalNamespace::BeatmapEventData*, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::BeatmapData::add_beatmapEventDataWasRemovedEvent(::System::Action_1<::GlobalNamespace::BeatmapEventData*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapData*>::get(), "add_beatmapEventDataWasRemovedEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::BeatmapEventData*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::BeatmapData::remove_beatmapEventDataWasRemovedEvent(::System::Action_1<::GlobalNamespace::BeatmapEventData*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapData*>::get(), "remove_beatmapEventDataWasRemovedEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::BeatmapEventData*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::BeatmapData* GlobalNamespace::BeatmapData::New_ctor(int32_t numberOfLines) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::BeatmapData*>(numberOfLines));
}
inline void GlobalNamespace::BeatmapData::_ctor(int32_t numberOfLines) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, numberOfLines);
}
template <typename T> inline ::System::Collections::Generic::IEnumerable_1<T>* GlobalNamespace::BeatmapData::GetBeatmapDataItems(int32_t subtypeGroupIdentifier) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapData*>::get(), "GetBeatmapDataItems",
                                                                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                                                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<T>*, false>(this, ___internal_method, subtypeGroupIdentifier);
}
template <typename T> inline int32_t GlobalNamespace::BeatmapData::GetBeatmapDataItemsCount(int32_t subtypeGroupIdentifier) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapData*>::get(), "GetBeatmapDataItemsCount",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, subtypeGroupIdentifier);
}
template <typename T> inline ::System::Collections::Generic::IEnumerable_1<T>* GlobalNamespace::BeatmapData::GetBeatmapDataItemsMerged(::ArrayW<int32_t, ::Array<int32_t>*> subtypeGroupIdentifiers) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapData*>::get(), "GetBeatmapDataItemsMerged",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<T>*, false>(this, ___internal_method, subtypeGroupIdentifiers);
}
template <typename T> inline int32_t GlobalNamespace::BeatmapData::GetBeatmapDataItemsMergedCount(::ArrayW<int32_t, ::Array<int32_t>*> subtypeGroupIdentifiers) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapData*>::get(), "GetBeatmapDataItemsMergedCount",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, subtypeGroupIdentifiers);
}
inline void GlobalNamespace::BeatmapData::AddBeatmapObjectData(::GlobalNamespace::BeatmapObjectData* beatmapObjectData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapData*>::get(), "AddBeatmapObjectData", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapObjectData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beatmapObjectData);
}
inline void GlobalNamespace::BeatmapData::AddBeatmapObjectDataInOrder(::GlobalNamespace::BeatmapObjectData* beatmapObjectData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapData*>::get(), "AddBeatmapObjectDataInOrder", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapObjectData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beatmapObjectData);
}
inline void GlobalNamespace::BeatmapData::InsertBeatmapEventData(::GlobalNamespace::BeatmapEventData* beatmapEventData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapData*>::get(), "InsertBeatmapEventData", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beatmapEventData);
}
inline void GlobalNamespace::BeatmapData::InsertBeatmapEventDataInOrder(::GlobalNamespace::BeatmapEventData* beatmapEventData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapData*>::get(), "InsertBeatmapEventDataInOrder", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beatmapEventData);
}
inline void GlobalNamespace::BeatmapData::RemoveBeatmapEventData(::GlobalNamespace::BeatmapEventData* beatmapEventData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapData*>::get(), "RemoveBeatmapEventData", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beatmapEventData);
}
inline void GlobalNamespace::BeatmapData::AddSpecialBasicBeatmapEventKeyword(::StringW specialBasicBeatmapEventKeyword) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapData*>::get(), "AddSpecialBasicBeatmapEventKeyword",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, specialBasicBeatmapEventKeyword);
}
inline void GlobalNamespace::BeatmapData::ProcessRemainingData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapData*>::get(), "ProcessRemainingData",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapData::ProcessAndSortBeatmapData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapData*>::get(),
                                                                             "ProcessAndSortBeatmapData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapData* GlobalNamespace::BeatmapData::GetCopy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapData*>::get(), "GetCopy",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapData*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapData* GlobalNamespace::BeatmapData::GetFilteredCopy(::System::Func_2<::GlobalNamespace::BeatmapDataItem*, ::GlobalNamespace::BeatmapDataItem*>* processDataItem) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapData*>::get(), "GetFilteredCopy", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::GlobalNamespace::BeatmapDataItem*, ::GlobalNamespace::BeatmapDataItem*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapData*, false>(this, ___internal_method, processDataItem);
}
/// @param node: ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>* (default: nullptr)
inline ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*
GlobalNamespace::BeatmapData::InsertToAllBeatmapData(::GlobalNamespace::BeatmapDataItem* beatmapDataItem, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>* node) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapData*>::get(), "InsertToAllBeatmapData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDataItem*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*, false>(this, ___internal_method, beatmapDataItem, node);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapData::BeatmapData() {}

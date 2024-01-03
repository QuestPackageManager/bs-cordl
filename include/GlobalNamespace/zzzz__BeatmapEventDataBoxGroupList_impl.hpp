#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventDataBoxGroupList_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventDataBoxGroup_def.hpp"
#include "GlobalNamespace/zzzz__IBeatToTimeConvertor_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedListNode_1_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventDataBoxGroupProcessor_def.hpp"
#include "GlobalNamespace/zzzz__SortedList_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventDataBoxGroupList.NoDomainReloadInit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::GlobalNamespace::BeatmapEventDataBoxGroupList::NoDomainReloadInit)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x23396a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventDataBoxGroupList*>::get(),
                                                                               "NoDomainReloadInit", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventDataBoxGroupList._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapEventDataBoxGroupList::*)(
    int32_t, ::GlobalNamespace::BeatmapData*, ::GlobalNamespace::IBeatToTimeConvertor*)>(&::GlobalNamespace::BeatmapEventDataBoxGroupList::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2339718;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventDataBoxGroupList*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapData*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatToTimeConvertor*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventDataBoxGroupList.Insert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapEventDataBoxGroup*>* (
    ::GlobalNamespace::BeatmapEventDataBoxGroupList::*)(::GlobalNamespace::BeatmapEventDataBoxGroup*)>(&::GlobalNamespace::BeatmapEventDataBoxGroupList::Insert)> {
  constexpr static std::size_t size = 0x3c4;
  constexpr static std::size_t addrs = 0x233986c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventDataBoxGroupList*>::get(), "Insert", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapEventDataBoxGroup*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventDataBoxGroupList.Remove
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapEventDataBoxGroupList::*)(
    ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapEventDataBoxGroup*>*)>(&::GlobalNamespace::BeatmapEventDataBoxGroupList::Remove)> {
  constexpr static std::size_t size = 0x3c8;
  constexpr static std::size_t addrs = 0x2339c80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventDataBoxGroupList*>::get(), "Remove", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapEventDataBoxGroup*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventDataBoxGroupList.SyncWithBeatmapData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapEventDataBoxGroupList::*)()>(
    &::GlobalNamespace::BeatmapEventDataBoxGroupList::SyncWithBeatmapData)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x233a048;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventDataBoxGroupList*>::get(),
                                                                               "SyncWithBeatmapData", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::BeatmapEventDataBoxGroupList::__get_updateBeatmapDataOnInsert() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___updateBeatmapDataOnInsert;
}
constexpr bool const& GlobalNamespace::BeatmapEventDataBoxGroupList::__get_updateBeatmapDataOnInsert() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___updateBeatmapDataOnInsert;
}
constexpr void GlobalNamespace::BeatmapEventDataBoxGroupList::__set_updateBeatmapDataOnInsert(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___updateBeatmapDataOnInsert = value;
}
constexpr ::GlobalNamespace::BeatmapEventDataBoxGroupProcessor*& GlobalNamespace::BeatmapEventDataBoxGroupList::__get__beatmapEventDataBoxGroupProcessor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapEventDataBoxGroupProcessor;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapEventDataBoxGroupProcessor*> const&
GlobalNamespace::BeatmapEventDataBoxGroupList::__get__beatmapEventDataBoxGroupProcessor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapEventDataBoxGroupProcessor;
}
constexpr void GlobalNamespace::BeatmapEventDataBoxGroupList::__set__beatmapEventDataBoxGroupProcessor(::GlobalNamespace::BeatmapEventDataBoxGroupProcessor* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapEventDataBoxGroupProcessor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::SortedList_2<::GlobalNamespace::BeatmapEventDataBoxGroup*, ::GlobalNamespace::BeatmapEventDataBoxGroup*>*&
GlobalNamespace::BeatmapEventDataBoxGroupList::__get__sortedList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sortedList;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SortedList_2<::GlobalNamespace::BeatmapEventDataBoxGroup*, ::GlobalNamespace::BeatmapEventDataBoxGroup*>*> const&
GlobalNamespace::BeatmapEventDataBoxGroupList::__get__sortedList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sortedList;
}
constexpr void
GlobalNamespace::BeatmapEventDataBoxGroupList::__set__sortedList(::GlobalNamespace::SortedList_2<::GlobalNamespace::BeatmapEventDataBoxGroup*, ::GlobalNamespace::BeatmapEventDataBoxGroup*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sortedList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::BeatmapEventDataBoxGroupList::__get__groupId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____groupId;
}
constexpr int32_t const& GlobalNamespace::BeatmapEventDataBoxGroupList::__get__groupId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____groupId;
}
constexpr void GlobalNamespace::BeatmapEventDataBoxGroupList::__set__groupId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____groupId = value;
}
constexpr ::GlobalNamespace::BeatmapData*& GlobalNamespace::BeatmapEventDataBoxGroupList::__get__beatmapData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapData*> const& GlobalNamespace::BeatmapEventDataBoxGroupList::__get__beatmapData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapData;
}
constexpr void GlobalNamespace::BeatmapEventDataBoxGroupList::__set__beatmapData(::GlobalNamespace::BeatmapData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IBeatToTimeConvertor*& GlobalNamespace::BeatmapEventDataBoxGroupList::__get__beatToTimeConvertor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatToTimeConvertor;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatToTimeConvertor*> const& GlobalNamespace::BeatmapEventDataBoxGroupList::__get__beatToTimeConvertor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatToTimeConvertor;
}
constexpr void GlobalNamespace::BeatmapEventDataBoxGroupList::__set__beatToTimeConvertor(::GlobalNamespace::IBeatToTimeConvertor* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatToTimeConvertor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::BeatmapEventDataBoxGroupList::__get__nonSyncedInsertsExist() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nonSyncedInsertsExist;
}
constexpr bool const& GlobalNamespace::BeatmapEventDataBoxGroupList::__get__nonSyncedInsertsExist() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nonSyncedInsertsExist;
}
constexpr void GlobalNamespace::BeatmapEventDataBoxGroupList::__set__nonSyncedInsertsExist(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____nonSyncedInsertsExist = value;
}
inline void GlobalNamespace::BeatmapEventDataBoxGroupList::setStaticF__usedBeatmapEventDataBoxes(::System::Collections::Generic::HashSet_1<::GlobalNamespace::BeatmapEventDataBoxGroup*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<::GlobalNamespace::BeatmapEventDataBoxGroup*>*, "_usedBeatmapEventDataBoxes",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventDataBoxGroupList*>::get>(
      std::forward<::System::Collections::Generic::HashSet_1<::GlobalNamespace::BeatmapEventDataBoxGroup*>*>(value));
}
inline ::System::Collections::Generic::HashSet_1<::GlobalNamespace::BeatmapEventDataBoxGroup*>* GlobalNamespace::BeatmapEventDataBoxGroupList::getStaticF__usedBeatmapEventDataBoxes() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<::GlobalNamespace::BeatmapEventDataBoxGroup*>*, "_usedBeatmapEventDataBoxes",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventDataBoxGroupList*>::get>();
}
inline void GlobalNamespace::BeatmapEventDataBoxGroupList::NoDomainReloadInit() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventDataBoxGroupList*>::get(),
                                                                             "NoDomainReloadInit", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::BeatmapEventDataBoxGroupList* GlobalNamespace::BeatmapEventDataBoxGroupList::New_ctor(int32_t groupId, ::GlobalNamespace::BeatmapData* beatmapData,
                                                                                                                ::GlobalNamespace::IBeatToTimeConvertor* beatToTimeConvertor) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::BeatmapEventDataBoxGroupList*>(groupId, beatmapData, beatToTimeConvertor));
}
inline void GlobalNamespace::BeatmapEventDataBoxGroupList::_ctor(int32_t groupId, ::GlobalNamespace::BeatmapData* beatmapData, ::GlobalNamespace::IBeatToTimeConvertor* beatToTimeConvertor) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventDataBoxGroupList*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapData*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatToTimeConvertor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, groupId, beatmapData, beatToTimeConvertor);
}
inline ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapEventDataBoxGroup*>*
GlobalNamespace::BeatmapEventDataBoxGroupList::Insert(::GlobalNamespace::BeatmapEventDataBoxGroup* beatmapEventDataBoxGroup) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventDataBoxGroupList*>::get(), "Insert", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapEventDataBoxGroup*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapEventDataBoxGroup*>*, false>(this, ___internal_method,
                                                                                                                                                     beatmapEventDataBoxGroup);
}
inline void GlobalNamespace::BeatmapEventDataBoxGroupList::Remove(::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapEventDataBoxGroup*>* nodeToDelete) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventDataBoxGroupList*>::get(), "Remove", std::vector<Il2CppClass*>{},
                                 ::std::vector<Il2CppType const*>{
                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapEventDataBoxGroup*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, nodeToDelete);
}
inline void GlobalNamespace::BeatmapEventDataBoxGroupList::SyncWithBeatmapData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventDataBoxGroupList*>::get(),
                                                                             "SyncWithBeatmapData", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapEventDataBoxGroupList::BeatmapEventDataBoxGroupList() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif

#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventDataBoxGroupLists_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventDataBoxGroupList_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventDataBoxGroup_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedListNode_1_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapData_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "GlobalNamespace/zzzz__IBeatToTimeConvertor_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventDataBoxGroupLists._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapEventDataBoxGroupLists::*)(
    ::GlobalNamespace::BeatmapData*, ::GlobalNamespace::IBeatToTimeConvertor*, bool)>(&::GlobalNamespace::BeatmapEventDataBoxGroupLists::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x23329a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventDataBoxGroupLists*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapData*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatToTimeConvertor*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventDataBoxGroupLists.Insert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapEventDataBoxGroup*>* (
    ::GlobalNamespace::BeatmapEventDataBoxGroupLists::*)(int32_t, ::GlobalNamespace::BeatmapEventDataBoxGroup*)>(&::GlobalNamespace::BeatmapEventDataBoxGroupLists::Insert)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x2333104;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventDataBoxGroupLists*>::get(), "Insert", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapEventDataBoxGroup*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventDataBoxGroupLists.Remove
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapEventDataBoxGroupLists::*)(
    int32_t, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapEventDataBoxGroup*>*)>(&::GlobalNamespace::BeatmapEventDataBoxGroupLists::Remove)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x233a24c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventDataBoxGroupLists*>::get(), "Remove", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapEventDataBoxGroup*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventDataBoxGroupLists.ToggleUpdateBeatmapDataOnInsert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapEventDataBoxGroupLists::*)(bool)>(
    &::GlobalNamespace::BeatmapEventDataBoxGroupLists::ToggleUpdateBeatmapDataOnInsert)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x233a30c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventDataBoxGroupLists*>::get(), "ToggleUpdateBeatmapDataOnInsert",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventDataBoxGroupLists.SyncWithBeatmapData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapEventDataBoxGroupLists::*)()>(
    &::GlobalNamespace::BeatmapEventDataBoxGroupLists::SyncWithBeatmapData)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x2333bdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventDataBoxGroupLists*>::get(),
                                                                               "SyncWithBeatmapData", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::BeatmapEventDataBoxGroupList*>*&
GlobalNamespace::BeatmapEventDataBoxGroupLists::__get__beatmapEventDataBoxGroupListDict() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapEventDataBoxGroupListDict;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::BeatmapEventDataBoxGroupList*>*> const&
GlobalNamespace::BeatmapEventDataBoxGroupLists::__get__beatmapEventDataBoxGroupListDict() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapEventDataBoxGroupListDict;
}
constexpr void GlobalNamespace::BeatmapEventDataBoxGroupLists::__set__beatmapEventDataBoxGroupListDict(
    ::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::BeatmapEventDataBoxGroupList*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapEventDataBoxGroupListDict)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapData*& GlobalNamespace::BeatmapEventDataBoxGroupLists::__get__beatmapData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapData*> const& GlobalNamespace::BeatmapEventDataBoxGroupLists::__get__beatmapData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapData;
}
constexpr void GlobalNamespace::BeatmapEventDataBoxGroupLists::__set__beatmapData(::GlobalNamespace::BeatmapData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IBeatToTimeConvertor*& GlobalNamespace::BeatmapEventDataBoxGroupLists::__get__beatToTimeConvertor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatToTimeConvertor;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatToTimeConvertor*> const& GlobalNamespace::BeatmapEventDataBoxGroupLists::__get__beatToTimeConvertor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatToTimeConvertor;
}
constexpr void GlobalNamespace::BeatmapEventDataBoxGroupLists::__set__beatToTimeConvertor(::GlobalNamespace::IBeatToTimeConvertor* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatToTimeConvertor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::BeatmapEventDataBoxGroupLists::__get__updateBeatmapDataOnInsert() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____updateBeatmapDataOnInsert;
}
constexpr bool const& GlobalNamespace::BeatmapEventDataBoxGroupLists::__get__updateBeatmapDataOnInsert() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____updateBeatmapDataOnInsert;
}
constexpr void GlobalNamespace::BeatmapEventDataBoxGroupLists::__set__updateBeatmapDataOnInsert(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____updateBeatmapDataOnInsert = value;
}
inline ::GlobalNamespace::BeatmapEventDataBoxGroupLists*
GlobalNamespace::BeatmapEventDataBoxGroupLists::New_ctor(::GlobalNamespace::BeatmapData* beatmapData, ::GlobalNamespace::IBeatToTimeConvertor* beatToTimeConvertor, bool updateBeatmapDataOnInsert) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::BeatmapEventDataBoxGroupLists*>(beatmapData, beatToTimeConvertor, updateBeatmapDataOnInsert));
}
inline void GlobalNamespace::BeatmapEventDataBoxGroupLists::_ctor(::GlobalNamespace::BeatmapData* beatmapData, ::GlobalNamespace::IBeatToTimeConvertor* beatToTimeConvertor,
                                                                  bool updateBeatmapDataOnInsert) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventDataBoxGroupLists*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapData*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatToTimeConvertor*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beatmapData, beatToTimeConvertor, updateBeatmapDataOnInsert);
}
inline ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapEventDataBoxGroup*>*
GlobalNamespace::BeatmapEventDataBoxGroupLists::Insert(int32_t groupId, ::GlobalNamespace::BeatmapEventDataBoxGroup* beatmapEventDataBoxGroup) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventDataBoxGroupLists*>::get(), "Insert", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapEventDataBoxGroup*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapEventDataBoxGroup*>*, false>(this, ___internal_method, groupId,
                                                                                                                                                     beatmapEventDataBoxGroup);
}
inline void GlobalNamespace::BeatmapEventDataBoxGroupLists::Remove(int32_t groupId, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapEventDataBoxGroup*>* nodeToDelete) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventDataBoxGroupLists*>::get(), "Remove", std::vector<Il2CppClass*>{},
                                 ::std::vector<Il2CppType const*>{
                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapEventDataBoxGroup*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, groupId, nodeToDelete);
}
inline void GlobalNamespace::BeatmapEventDataBoxGroupLists::ToggleUpdateBeatmapDataOnInsert(bool enableUpdateOnInsert) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventDataBoxGroupLists*>::get(), "ToggleUpdateBeatmapDataOnInsert",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, enableUpdateOnInsert);
}
inline void GlobalNamespace::BeatmapEventDataBoxGroupLists::SyncWithBeatmapData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventDataBoxGroupLists*>::get(),
                                                                             "SyncWithBeatmapData", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapEventDataBoxGroupLists::BeatmapEventDataBoxGroupLists() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif

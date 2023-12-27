#pragma once
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__RecordingToolResourceContainerSO_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentsListSO_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelPackCollectionSO_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevelPack_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RecordingToolResourceContainerSO.get_beatmapLevelPacks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::IBeatmapLevelPack*>* (
    ::GlobalNamespace::RecordingToolResourceContainerSO::*)()>(&::GlobalNamespace::RecordingToolResourceContainerSO::get_beatmapLevelPacks)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2308cf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolResourceContainerSO*>::get(),
                                                                               "get_beatmapLevelPacks", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RecordingToolResourceContainerSO.get_environmentsList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::EnvironmentsListSO* (::GlobalNamespace::RecordingToolResourceContainerSO::*)()>(
    &::GlobalNamespace::RecordingToolResourceContainerSO::get_environmentsList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2308cf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolResourceContainerSO*>::get(),
                                                                               "get_environmentsList", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RecordingToolResourceContainerSO.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RecordingToolResourceContainerSO::*)()>(
    &::GlobalNamespace::RecordingToolResourceContainerSO::OnEnable)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2308d00;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolResourceContainerSO*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolResourceContainerSO*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RecordingToolResourceContainerSO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RecordingToolResourceContainerSO::*)()>(
    &::GlobalNamespace::RecordingToolResourceContainerSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2308dcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolResourceContainerSO*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BeatmapLevelPackCollectionSO*& GlobalNamespace::RecordingToolResourceContainerSO::__get__dlcLevelPackCollection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____dlcLevelPackCollection;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelPackCollectionSO*> const& GlobalNamespace::RecordingToolResourceContainerSO::__get__dlcLevelPackCollection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____dlcLevelPackCollection;
}
constexpr void GlobalNamespace::RecordingToolResourceContainerSO::__set__dlcLevelPackCollection(::GlobalNamespace::BeatmapLevelPackCollectionSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____dlcLevelPackCollection)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapLevelPackCollectionSO*& GlobalNamespace::RecordingToolResourceContainerSO::__get__ostAndExtrasPackCollection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____ostAndExtrasPackCollection;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelPackCollectionSO*> const& GlobalNamespace::RecordingToolResourceContainerSO::__get__ostAndExtrasPackCollection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____ostAndExtrasPackCollection;
}
constexpr void GlobalNamespace::RecordingToolResourceContainerSO::__set__ostAndExtrasPackCollection(::GlobalNamespace::BeatmapLevelPackCollectionSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ostAndExtrasPackCollection)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::EnvironmentsListSO*& GlobalNamespace::RecordingToolResourceContainerSO::__get__environmentsList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____environmentsList;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentsListSO*> const& GlobalNamespace::RecordingToolResourceContainerSO::__get__environmentsList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____environmentsList;
}
constexpr void GlobalNamespace::RecordingToolResourceContainerSO::__set__environmentsList(::GlobalNamespace::EnvironmentsListSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____environmentsList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IBeatmapLevelPack*>*& GlobalNamespace::RecordingToolResourceContainerSO::__get__beatmapLevelPacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____beatmapLevelPacks;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::IBeatmapLevelPack*>*> const&
GlobalNamespace::RecordingToolResourceContainerSO::__get__beatmapLevelPacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____beatmapLevelPacks;
}
constexpr void GlobalNamespace::RecordingToolResourceContainerSO::__set__beatmapLevelPacks(::System::Collections::Generic::List_1<::GlobalNamespace::IBeatmapLevelPack*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapLevelPacks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::IBeatmapLevelPack*>* GlobalNamespace::RecordingToolResourceContainerSO::get_beatmapLevelPacks() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolResourceContainerSO*>::get(),
                                                                             "get_beatmapLevelPacks", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::IBeatmapLevelPack*>*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::EnvironmentsListSO* GlobalNamespace::RecordingToolResourceContainerSO::get_environmentsList() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolResourceContainerSO*>::get(),
                                                                             "get_environmentsList", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::EnvironmentsListSO*, false>(this, ___internal_method);
}
inline void GlobalNamespace::RecordingToolResourceContainerSO::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolResourceContainerSO*>::get(),
                                                                             "OnEnable", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::RecordingToolResourceContainerSO* GlobalNamespace::RecordingToolResourceContainerSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::RecordingToolResourceContainerSO*>());
}
inline void GlobalNamespace::RecordingToolResourceContainerSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolResourceContainerSO*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RecordingToolResourceContainerSO::RecordingToolResourceContainerSO() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif

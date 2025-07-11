#pragma once
// IWYU pragma private; include "GlobalNamespace/SongPacksDropdown.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SongPacksDropdown_def.hpp"
#include "GlobalNamespace/zzzz__SongPackMask_def.hpp"
#include "GlobalNamespace/zzzz__SongPackMasksModel_def.hpp"
#include "GlobalNamespace/zzzz__SongPacksDropdown_def.hpp"
#include "HMUI/zzzz__DropdownWithTableView_def.hpp"
#include "HMUI/zzzz__SimpleTextDropdown_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SongPacksDropdown___c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SongPacksDropdown___c::*)()>(&::GlobalNamespace::SongPacksDropdown___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b57978;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPacksDropdown___c*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPacksDropdown___c._LazyInit_b__7_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::SongPacksDropdown___c::*)(::StringW)>(
    &::GlobalNamespace::SongPacksDropdown___c::_LazyInit_b__7_0)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3b57980;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPacksDropdown___c*>::get(), "<LazyInit>b__7_0",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::SongPacksDropdown___c::setStaticF___9(::GlobalNamespace::SongPacksDropdown___c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::SongPacksDropdown___c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPacksDropdown___c*>::get>(
      std::forward<::GlobalNamespace::SongPacksDropdown___c*>(value));
}
inline ::GlobalNamespace::SongPacksDropdown___c* GlobalNamespace::SongPacksDropdown___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::SongPacksDropdown___c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPacksDropdown___c*>::get>();
}
inline void GlobalNamespace::SongPacksDropdown___c::setStaticF___9__7_0(::System::Func_2<::StringW, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::StringW, ::StringW>*, "<>9__7_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPacksDropdown___c*>::get>(
      std::forward<::System::Func_2<::StringW, ::StringW>*>(value));
}
inline ::System::Func_2<::StringW, ::StringW>* GlobalNamespace::SongPacksDropdown___c::getStaticF___9__7_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::StringW, ::StringW>*, "<>9__7_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPacksDropdown___c*>::get>();
}
inline void GlobalNamespace::SongPacksDropdown___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPacksDropdown___c*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::SongPacksDropdown___c::_LazyInit_b__7_0(::StringW serializedName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPacksDropdown___c*>::get(), "<LazyInit>b__7_0",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, serializedName);
}
inline ::GlobalNamespace::SongPacksDropdown___c* GlobalNamespace::SongPacksDropdown___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SongPacksDropdown___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SongPacksDropdown___c::SongPacksDropdown___c() {}
//  Writing Method size for method: ::GlobalNamespace::SongPacksDropdown.add_didSelectCellWithIdxEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SongPacksDropdown::*)(::System::Action_1<int32_t>*)>(
    &::GlobalNamespace::SongPacksDropdown::add_didSelectCellWithIdxEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3b57278;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPacksDropdown*>::get(), "add_didSelectCellWithIdxEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<int32_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPacksDropdown.remove_didSelectCellWithIdxEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SongPacksDropdown::*)(::System::Action_1<int32_t>*)>(
    &::GlobalNamespace::SongPacksDropdown::remove_didSelectCellWithIdxEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3b57328;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPacksDropdown*>::get(), "remove_didSelectCellWithIdxEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<int32_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPacksDropdown.LazyInit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SongPacksDropdown::*)()>(&::GlobalNamespace::SongPacksDropdown::LazyInit)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x3b573d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPacksDropdown*>::get(), "LazyInit",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPacksDropdown.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SongPacksDropdown::*)()>(&::GlobalNamespace::SongPacksDropdown::Start)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x3b57580;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPacksDropdown*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPacksDropdown.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SongPacksDropdown::*)()>(&::GlobalNamespace::SongPacksDropdown::OnDestroy)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x3b57618;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPacksDropdown*>::get(), "OnDestroy",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPacksDropdown.SetOverrideSongPacks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SongPacksDropdown::*)(::System::Collections::Generic::List_1<::StringW>*)>(
    &::GlobalNamespace::SongPacksDropdown::SetOverrideSongPacks)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b576e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPacksDropdown*>::get(), "SetOverrideSongPacks", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPacksDropdown.GetSelectedSongPackMask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::SongPackMask (::GlobalNamespace::SongPacksDropdown::*)()>(
    &::GlobalNamespace::SongPacksDropdown::GetSelectedSongPackMask)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x3b576f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPacksDropdown*>::get(),
                                                                               "GetSelectedSongPackMask", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPacksDropdown.SelectCellWithSongPackMask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SongPacksDropdown::*)(::GlobalNamespace::SongPackMask)>(
    &::GlobalNamespace::SongPacksDropdown::SelectCellWithSongPackMask)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3b57788;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPacksDropdown*>::get(), "SelectCellWithSongPackMask", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SongPackMask>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPacksDropdown.GetIdxForSongPackMask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::SongPacksDropdown::*)(::GlobalNamespace::SongPackMask)>(
    &::GlobalNamespace::SongPacksDropdown::GetIdxForSongPackMask)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x3b57838;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPacksDropdown*>::get(), "GetIdxForSongPackMask", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SongPackMask>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPacksDropdown.HandleSimpleTextDropdownDidSelectCellWithIdx
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SongPacksDropdown::*)(::HMUI::DropdownWithTableView*, int32_t)>(
    &::GlobalNamespace::SongPacksDropdown::HandleSimpleTextDropdownDidSelectCellWithIdx)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3b578f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPacksDropdown*>::get(), "HandleSimpleTextDropdownDidSelectCellWithIdx", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::DropdownWithTableView*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPacksDropdown._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SongPacksDropdown::*)()>(&::GlobalNamespace::SongPacksDropdown::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b57914;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPacksDropdown*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::HMUI::SimpleTextDropdown>& GlobalNamespace::SongPacksDropdown::__cordl_internal_get__simpleTextDropdown() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____simpleTextDropdown;
}
constexpr ::UnityW<::HMUI::SimpleTextDropdown> const& GlobalNamespace::SongPacksDropdown::__cordl_internal_get__simpleTextDropdown() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____simpleTextDropdown;
}
constexpr void GlobalNamespace::SongPacksDropdown::__cordl_internal_set__simpleTextDropdown(::UnityW<::HMUI::SimpleTextDropdown> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____simpleTextDropdown)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::SongPackMasksModel*& GlobalNamespace::SongPacksDropdown::__cordl_internal_get__songPackMasksModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songPackMasksModel;
}
constexpr ::GlobalNamespace::SongPackMasksModel* const& GlobalNamespace::SongPacksDropdown::__cordl_internal_get__songPackMasksModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songPackMasksModel;
}
constexpr void GlobalNamespace::SongPacksDropdown::__cordl_internal_set__songPackMasksModel(::GlobalNamespace::SongPackMasksModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____songPackMasksModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<int32_t>*& GlobalNamespace::SongPacksDropdown::__cordl_internal_get_didSelectCellWithIdxEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didSelectCellWithIdxEvent;
}
constexpr ::System::Action_1<int32_t>* const& GlobalNamespace::SongPacksDropdown::__cordl_internal_get_didSelectCellWithIdxEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didSelectCellWithIdxEvent;
}
constexpr void GlobalNamespace::SongPacksDropdown::__cordl_internal_set_didSelectCellWithIdxEvent(::System::Action_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___didSelectCellWithIdxEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::SongPacksDropdown::__cordl_internal_get__initialized() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initialized;
}
constexpr bool const& GlobalNamespace::SongPacksDropdown::__cordl_internal_get__initialized() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initialized;
}
constexpr void GlobalNamespace::SongPacksDropdown::__cordl_internal_set__initialized(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____initialized = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GlobalNamespace::SongPacksDropdown::__cordl_internal_get__songPackSerializedNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songPackSerializedNames;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& GlobalNamespace::SongPacksDropdown::__cordl_internal_get__songPackSerializedNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songPackSerializedNames;
}
constexpr void GlobalNamespace::SongPacksDropdown::__cordl_internal_set__songPackSerializedNames(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____songPackSerializedNames)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::SongPacksDropdown::add_didSelectCellWithIdxEvent(::System::Action_1<int32_t>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPacksDropdown*>::get(), "add_didSelectCellWithIdxEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<int32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::SongPacksDropdown::remove_didSelectCellWithIdxEvent(::System::Action_1<int32_t>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPacksDropdown*>::get(), "remove_didSelectCellWithIdxEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<int32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::SongPacksDropdown::LazyInit() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPacksDropdown*>::get(), "LazyInit",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SongPacksDropdown::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPacksDropdown*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SongPacksDropdown::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPacksDropdown*>::get(), "OnDestroy",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SongPacksDropdown::SetOverrideSongPacks(::System::Collections::Generic::List_1<::StringW>* songPackSerializedNames) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPacksDropdown*>::get(), "SetOverrideSongPacks", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, songPackSerializedNames);
}
inline ::GlobalNamespace::SongPackMask GlobalNamespace::SongPacksDropdown::GetSelectedSongPackMask() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPacksDropdown*>::get(),
                                                                             "GetSelectedSongPackMask", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SongPackMask, false>(this, ___internal_method);
}
inline void GlobalNamespace::SongPacksDropdown::SelectCellWithSongPackMask(::GlobalNamespace::SongPackMask songPackMask) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPacksDropdown*>::get(), "SelectCellWithSongPackMask", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SongPackMask>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, songPackMask);
}
inline int32_t GlobalNamespace::SongPacksDropdown::GetIdxForSongPackMask(::GlobalNamespace::SongPackMask songPackMask) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPacksDropdown*>::get(), "GetIdxForSongPackMask", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SongPackMask>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, songPackMask);
}
inline void GlobalNamespace::SongPacksDropdown::HandleSimpleTextDropdownDidSelectCellWithIdx(::HMUI::DropdownWithTableView* dropdownWithTableView, int32_t idx) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPacksDropdown*>::get(), "HandleSimpleTextDropdownDidSelectCellWithIdx", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::DropdownWithTableView*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dropdownWithTableView, idx);
}
inline void GlobalNamespace::SongPacksDropdown::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPacksDropdown*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::SongPacksDropdown* GlobalNamespace::SongPacksDropdown::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SongPacksDropdown*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SongPacksDropdown::SongPacksDropdown() {}

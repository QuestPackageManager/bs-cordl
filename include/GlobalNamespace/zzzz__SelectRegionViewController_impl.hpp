#pragma once
// IWYU pragma private; include "GlobalNamespace/SelectRegionViewController.hpp"
#include "GlobalNamespace/zzzz__CompletableViewController_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__SelectRegionViewController_def.hpp"
#include "GlobalNamespace/zzzz__SelectRegionViewController_def.hpp"
#include "HMUI/zzzz__DropdownWithTableView_def.hpp"
#include "HMUI/zzzz__SimpleTextDropdown_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::SelectRegionViewController_Region::SelectRegionViewController_Region(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SelectRegionViewController_Region::SelectRegionViewController_Region() {}
constexpr ::GlobalNamespace::SelectRegionViewController_Region GlobalNamespace::SelectRegionViewController_Region::None{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::SelectRegionViewController_Region GlobalNamespace::SelectRegionViewController_Region::NorthAndSouthAmerica{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::SelectRegionViewController_Region GlobalNamespace::SelectRegionViewController_Region::Europe{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::SelectRegionViewController_Region GlobalNamespace::SelectRegionViewController_Region::SouthKorea{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::SelectRegionViewController_Region GlobalNamespace::SelectRegionViewController_Region::Japan{ static_cast<int32_t>(0x4) };
constexpr ::GlobalNamespace::SelectRegionViewController_Region GlobalNamespace::SelectRegionViewController_Region::Other{ static_cast<int32_t>(0x5) };
//  Writing Method size for method: ::GlobalNamespace::SelectRegionViewController_RegionToLocalizationKeyPair._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelectRegionViewController_RegionToLocalizationKeyPair::*)(
    ::GlobalNamespace::SelectRegionViewController_Region, ::StringW)>(&::GlobalNamespace::SelectRegionViewController_RegionToLocalizationKeyPair::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x575a8e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectRegionViewController_RegionToLocalizationKeyPair>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SelectRegionViewController_Region>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::SelectRegionViewController_RegionToLocalizationKeyPair::_ctor(::GlobalNamespace::SelectRegionViewController_Region region, ::StringW localizationKey) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectRegionViewController_RegionToLocalizationKeyPair>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SelectRegionViewController_Region>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, region, localizationKey);
}
// Ctor Parameters [CppParam { name: "region", ty: "::GlobalNamespace::SelectRegionViewController_Region", modifiers: "", def_value: Some("{}") }, CppParam { name: "localizationKey", ty: "::StringW",
// modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::SelectRegionViewController_RegionToLocalizationKeyPair::SelectRegionViewController_RegionToLocalizationKeyPair(::GlobalNamespace::SelectRegionViewController_Region region,
                                                                                                                                            ::StringW localizationKey) noexcept {
  this->region = region;
  this->localizationKey = localizationKey;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SelectRegionViewController_RegionToLocalizationKeyPair::SelectRegionViewController_RegionToLocalizationKeyPair() {}
//  Writing Method size for method: ::GlobalNamespace::SelectRegionViewController___c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelectRegionViewController___c::*)()>(
    &::GlobalNamespace::SelectRegionViewController___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x575a948;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectRegionViewController___c*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectRegionViewController___c._DidActivate_b__5_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::SelectRegionViewController___c::*)(
    ::GlobalNamespace::SelectRegionViewController_RegionToLocalizationKeyPair)>(&::GlobalNamespace::SelectRegionViewController___c::_DidActivate_b__5_1)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x575a94c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectRegionViewController___c*>::get(), "<DidActivate>b__5_1", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SelectRegionViewController_RegionToLocalizationKeyPair>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::SelectRegionViewController___c::setStaticF___9(::GlobalNamespace::SelectRegionViewController___c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::SelectRegionViewController___c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectRegionViewController___c*>::get>(
      std::forward<::GlobalNamespace::SelectRegionViewController___c*>(value));
}
inline ::GlobalNamespace::SelectRegionViewController___c* GlobalNamespace::SelectRegionViewController___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::SelectRegionViewController___c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectRegionViewController___c*>::get>();
}
inline void GlobalNamespace::SelectRegionViewController___c::setStaticF___9__5_1(::System::Func_2<::GlobalNamespace::SelectRegionViewController_RegionToLocalizationKeyPair, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::GlobalNamespace::SelectRegionViewController_RegionToLocalizationKeyPair, ::StringW>*, "<>9__5_1",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectRegionViewController___c*>::get>(
      std::forward<::System::Func_2<::GlobalNamespace::SelectRegionViewController_RegionToLocalizationKeyPair, ::StringW>*>(value));
}
inline ::System::Func_2<::GlobalNamespace::SelectRegionViewController_RegionToLocalizationKeyPair, ::StringW>* GlobalNamespace::SelectRegionViewController___c::getStaticF___9__5_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::GlobalNamespace::SelectRegionViewController_RegionToLocalizationKeyPair, ::StringW>*, "<>9__5_1",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectRegionViewController___c*>::get>();
}
inline void GlobalNamespace::SelectRegionViewController___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectRegionViewController___c*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::SelectRegionViewController___c::_DidActivate_b__5_1(::GlobalNamespace::SelectRegionViewController_RegionToLocalizationKeyPair p) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectRegionViewController___c*>::get(), "<DidActivate>b__5_1", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SelectRegionViewController_RegionToLocalizationKeyPair>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, p);
}
inline ::GlobalNamespace::SelectRegionViewController___c* GlobalNamespace::SelectRegionViewController___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SelectRegionViewController___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SelectRegionViewController___c::SelectRegionViewController___c() {}
//  Writing Method size for method: ::GlobalNamespace::SelectRegionViewController.DidActivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelectRegionViewController::*)(bool, bool, bool)>(
    &::GlobalNamespace::SelectRegionViewController::DidActivate)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x575a4b4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectRegionViewController*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectRegionViewController*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectRegionViewController.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelectRegionViewController::*)()>(
    &::GlobalNamespace::SelectRegionViewController::OnDestroy)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x575a6fc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectRegionViewController*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectRegionViewController*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectRegionViewController.HandleRegionSelectionDropdownDidSelectCell
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelectRegionViewController::*)(::HMUI::DropdownWithTableView*, int32_t)>(
    &::GlobalNamespace::SelectRegionViewController::HandleRegionSelectionDropdownDidSelectCell)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x575a7e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectRegionViewController*>::get(),
                                                 "HandleRegionSelectionDropdownDidSelectCell", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::DropdownWithTableView*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectRegionViewController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelectRegionViewController::*)()>(&::GlobalNamespace::SelectRegionViewController::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x575a828;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectRegionViewController*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectRegionViewController._DidActivate_b__5_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelectRegionViewController::*)()>(
    &::GlobalNamespace::SelectRegionViewController::_DidActivate_b__5_0)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x575a86c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectRegionViewController*>::get(),
                                                                               "<DidActivate>b__5_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::Button>& GlobalNamespace::SelectRegionViewController::__cordl_internal_get__continueButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____continueButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& GlobalNamespace::SelectRegionViewController::__cordl_internal_get__continueButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____continueButton;
}
constexpr void GlobalNamespace::SelectRegionViewController::__cordl_internal_set__continueButton(::UnityW<::UnityEngine::UI::Button> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____continueButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::HMUI::SimpleTextDropdown>& GlobalNamespace::SelectRegionViewController::__cordl_internal_get__regionSelectionDropdown() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____regionSelectionDropdown;
}
constexpr ::UnityW<::HMUI::SimpleTextDropdown> const& GlobalNamespace::SelectRegionViewController::__cordl_internal_get__regionSelectionDropdown() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____regionSelectionDropdown;
}
constexpr void GlobalNamespace::SelectRegionViewController::__cordl_internal_set__regionSelectionDropdown(::UnityW<::HMUI::SimpleTextDropdown> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____regionSelectionDropdown)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::SelectRegionViewController_RegionToLocalizationKeyPair, ::Array<::GlobalNamespace::SelectRegionViewController_RegionToLocalizationKeyPair>*>&
GlobalNamespace::SelectRegionViewController::__cordl_internal_get__regionLocalizationKeys() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____regionLocalizationKeys;
}
constexpr ::ArrayW<::GlobalNamespace::SelectRegionViewController_RegionToLocalizationKeyPair, ::Array<::GlobalNamespace::SelectRegionViewController_RegionToLocalizationKeyPair>*> const&
GlobalNamespace::SelectRegionViewController::__cordl_internal_get__regionLocalizationKeys() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____regionLocalizationKeys;
}
constexpr void GlobalNamespace::SelectRegionViewController::__cordl_internal_set__regionLocalizationKeys(
    ::ArrayW<::GlobalNamespace::SelectRegionViewController_RegionToLocalizationKeyPair, ::Array<::GlobalNamespace::SelectRegionViewController_RegionToLocalizationKeyPair>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____regionLocalizationKeys)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::SelectRegionViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectRegionViewController*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::SelectRegionViewController::OnDestroy() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectRegionViewController*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SelectRegionViewController::HandleRegionSelectionDropdownDidSelectCell(::HMUI::DropdownWithTableView* dropdown, int32_t idx) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectRegionViewController*>::get(),
                                               "HandleRegionSelectionDropdownDidSelectCell", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::DropdownWithTableView*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dropdown, idx);
}
inline void GlobalNamespace::SelectRegionViewController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectRegionViewController*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SelectRegionViewController::_DidActivate_b__5_0() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectRegionViewController*>::get(),
                                                                             "<DidActivate>b__5_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::SelectRegionViewController* GlobalNamespace::SelectRegionViewController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SelectRegionViewController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SelectRegionViewController::SelectRegionViewController() {}

#pragma once
// IWYU pragma private; include "GlobalNamespace/HelpMenuViewController.hpp"
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "GlobalNamespace/zzzz__HelpMenuViewController_def.hpp"
#include "GlobalNamespace/zzzz__EulaDisplayViewController_def.hpp"
#include "GlobalNamespace/zzzz__HealthWarningDisplayViewController_def.hpp"
#include "GlobalNamespace/zzzz__HowToPlayViewController_def.hpp"
#include "GlobalNamespace/zzzz__LicensesDisplayViewController_def.hpp"
#include "GlobalNamespace/zzzz__PrivacyPolicyDisplayViewController_def.hpp"
#include "HMUI/zzzz__SegmentedControl_def.hpp"
#include "HMUI/zzzz__TextSegmentedControl_def.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HelpMenuViewController.add_didSelectHelpSubMenuEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HelpMenuViewController::*)(::System::Action_1<::UnityW<::HMUI::ViewController>>*)>(
    &::GlobalNamespace::HelpMenuViewController::add_didSelectHelpSubMenuEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3b591e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HelpMenuViewController*>::get(), "add_didSelectHelpSubMenuEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::HMUI::ViewController>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HelpMenuViewController.remove_didSelectHelpSubMenuEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HelpMenuViewController::*)(::System::Action_1<::UnityW<::HMUI::ViewController>>*)>(
    &::GlobalNamespace::HelpMenuViewController::remove_didSelectHelpSubMenuEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3b59290;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HelpMenuViewController*>::get(), "remove_didSelectHelpSubMenuEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::HMUI::ViewController>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HelpMenuViewController.DidActivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HelpMenuViewController::*)(bool, bool, bool)>(
    &::GlobalNamespace::HelpMenuViewController::DidActivate)> {
  constexpr static std::size_t size = 0x5a4;
  constexpr static std::size_t addrs = 0x3b59340;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HelpMenuViewController*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HelpMenuViewController*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HelpMenuViewController.HandleHelpMenuSegmentedControlDidSelectCell
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HelpMenuViewController::*)(::HMUI::SegmentedControl*, int32_t)>(
    &::GlobalNamespace::HelpMenuViewController::HandleHelpMenuSegmentedControlDidSelectCell)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x3b598e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HelpMenuViewController*>::get(),
                                                 "HandleHelpMenuSegmentedControlDidSelectCell", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::SegmentedControl*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HelpMenuViewController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HelpMenuViewController::*)()>(&::GlobalNamespace::HelpMenuViewController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b59968;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HelpMenuViewController*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::HMUI::TextSegmentedControl>& GlobalNamespace::HelpMenuViewController::__cordl_internal_get__helpMenuSegmentedControl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____helpMenuSegmentedControl;
}
constexpr ::UnityW<::HMUI::TextSegmentedControl> const& GlobalNamespace::HelpMenuViewController::__cordl_internal_get__helpMenuSegmentedControl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____helpMenuSegmentedControl;
}
constexpr void GlobalNamespace::HelpMenuViewController::__cordl_internal_set__helpMenuSegmentedControl(::UnityW<::HMUI::TextSegmentedControl> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____helpMenuSegmentedControl)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::HowToPlayViewController>& GlobalNamespace::HelpMenuViewController::__cordl_internal_get__howToPlayViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____howToPlayViewController;
}
constexpr ::UnityW<::GlobalNamespace::HowToPlayViewController> const& GlobalNamespace::HelpMenuViewController::__cordl_internal_get__howToPlayViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____howToPlayViewController;
}
constexpr void GlobalNamespace::HelpMenuViewController::__cordl_internal_set__howToPlayViewController(::UnityW<::GlobalNamespace::HowToPlayViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____howToPlayViewController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::HealthWarningDisplayViewController>& GlobalNamespace::HelpMenuViewController::__cordl_internal_get__healthWarningDisplayViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____healthWarningDisplayViewController;
}
constexpr ::UnityW<::GlobalNamespace::HealthWarningDisplayViewController> const& GlobalNamespace::HelpMenuViewController::__cordl_internal_get__healthWarningDisplayViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____healthWarningDisplayViewController;
}
constexpr void GlobalNamespace::HelpMenuViewController::__cordl_internal_set__healthWarningDisplayViewController(::UnityW<::GlobalNamespace::HealthWarningDisplayViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____healthWarningDisplayViewController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::PrivacyPolicyDisplayViewController>& GlobalNamespace::HelpMenuViewController::__cordl_internal_get__privacyPolicyDisplayViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____privacyPolicyDisplayViewController;
}
constexpr ::UnityW<::GlobalNamespace::PrivacyPolicyDisplayViewController> const& GlobalNamespace::HelpMenuViewController::__cordl_internal_get__privacyPolicyDisplayViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____privacyPolicyDisplayViewController;
}
constexpr void GlobalNamespace::HelpMenuViewController::__cordl_internal_set__privacyPolicyDisplayViewController(::UnityW<::GlobalNamespace::PrivacyPolicyDisplayViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____privacyPolicyDisplayViewController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::EulaDisplayViewController>& GlobalNamespace::HelpMenuViewController::__cordl_internal_get__eulaDisplayViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eulaDisplayViewController;
}
constexpr ::UnityW<::GlobalNamespace::EulaDisplayViewController> const& GlobalNamespace::HelpMenuViewController::__cordl_internal_get__eulaDisplayViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eulaDisplayViewController;
}
constexpr void GlobalNamespace::HelpMenuViewController::__cordl_internal_set__eulaDisplayViewController(::UnityW<::GlobalNamespace::EulaDisplayViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____eulaDisplayViewController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::LicensesDisplayViewController>& GlobalNamespace::HelpMenuViewController::__cordl_internal_get__licensesDisplayViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____licensesDisplayViewController;
}
constexpr ::UnityW<::GlobalNamespace::LicensesDisplayViewController> const& GlobalNamespace::HelpMenuViewController::__cordl_internal_get__licensesDisplayViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____licensesDisplayViewController;
}
constexpr void GlobalNamespace::HelpMenuViewController::__cordl_internal_set__licensesDisplayViewController(::UnityW<::GlobalNamespace::LicensesDisplayViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____licensesDisplayViewController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::UnityW<::HMUI::ViewController>>*& GlobalNamespace::HelpMenuViewController::__cordl_internal_get_didSelectHelpSubMenuEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didSelectHelpSubMenuEvent;
}
constexpr ::System::Action_1<::UnityW<::HMUI::ViewController>>* const& GlobalNamespace::HelpMenuViewController::__cordl_internal_get_didSelectHelpSubMenuEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didSelectHelpSubMenuEvent;
}
constexpr void GlobalNamespace::HelpMenuViewController::__cordl_internal_set_didSelectHelpSubMenuEvent(::System::Action_1<::UnityW<::HMUI::ViewController>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___didSelectHelpSubMenuEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityW<::HMUI::ViewController>, ::StringW>>*&
GlobalNamespace::HelpMenuViewController::__cordl_internal_get__viewControllers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____viewControllers;
}
constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityW<::HMUI::ViewController>, ::StringW>>* const&
GlobalNamespace::HelpMenuViewController::__cordl_internal_get__viewControllers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____viewControllers;
}
constexpr void
GlobalNamespace::HelpMenuViewController::__cordl_internal_set__viewControllers(::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityW<::HMUI::ViewController>, ::StringW>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____viewControllers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::HelpMenuViewController::add_didSelectHelpSubMenuEvent(::System::Action_1<::UnityW<::HMUI::ViewController>>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HelpMenuViewController*>::get(), "add_didSelectHelpSubMenuEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::HMUI::ViewController>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::HelpMenuViewController::remove_didSelectHelpSubMenuEvent(::System::Action_1<::UnityW<::HMUI::ViewController>>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HelpMenuViewController*>::get(), "remove_didSelectHelpSubMenuEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::HMUI::ViewController>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::HelpMenuViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HelpMenuViewController*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::HelpMenuViewController::HandleHelpMenuSegmentedControlDidSelectCell(::HMUI::SegmentedControl* segmentedControl, int32_t cellIdx) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HelpMenuViewController*>::get(), "HandleHelpMenuSegmentedControlDidSelectCell",
                                               std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::SegmentedControl*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, segmentedControl, cellIdx);
}
inline void GlobalNamespace::HelpMenuViewController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HelpMenuViewController*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::HelpMenuViewController* GlobalNamespace::HelpMenuViewController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::HelpMenuViewController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HelpMenuViewController::HelpMenuViewController() {}

#pragma once
// IWYU pragma private; include "GlobalNamespace/ExplicitContentWarningViewController.hpp"
#include "GlobalNamespace/zzzz__CompletableViewController_1_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerSensitivityFlag_impl.hpp"
#include "GlobalNamespace/zzzz__ExplicitContentWarningViewController_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
#include "UnityEngine/UI/zzzz__Toggle_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ExplicitContentWarningViewController.DidActivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ExplicitContentWarningViewController::*)(bool, bool, bool)>(
    &::GlobalNamespace::ExplicitContentWarningViewController::DidActivate)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5872f70;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ExplicitContentWarningViewController*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ExplicitContentWarningViewController*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ExplicitContentWarningViewController.DidDeactivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ExplicitContentWarningViewController::*)(bool, bool)>(
    &::GlobalNamespace::ExplicitContentWarningViewController::DidDeactivate)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x587305c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ExplicitContentWarningViewController*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ExplicitContentWarningViewController*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ExplicitContentWarningViewController.HandleClickedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ExplicitContentWarningViewController::*)()>(
    &::GlobalNamespace::ExplicitContentWarningViewController::HandleClickedEvent)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5873090;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ExplicitContentWarningViewController*>::get(),
                                                                               "HandleClickedEvent", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ExplicitContentWarningViewController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ExplicitContentWarningViewController::*)()>(
    &::GlobalNamespace::ExplicitContentWarningViewController::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x58730f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ExplicitContentWarningViewController*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::Toggle>& GlobalNamespace::ExplicitContentWarningViewController::__cordl_internal_get__toggleExplicit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____toggleExplicit;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle> const& GlobalNamespace::ExplicitContentWarningViewController::__cordl_internal_get__toggleExplicit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____toggleExplicit;
}
constexpr void GlobalNamespace::ExplicitContentWarningViewController::__cordl_internal_set__toggleExplicit(::UnityW<::UnityEngine::UI::Toggle> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____toggleExplicit)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::UI::Button>& GlobalNamespace::ExplicitContentWarningViewController::__cordl_internal_get__continueButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____continueButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& GlobalNamespace::ExplicitContentWarningViewController::__cordl_internal_get__continueButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____continueButton;
}
constexpr void GlobalNamespace::ExplicitContentWarningViewController::__cordl_internal_set__continueButton(::UnityW<::UnityEngine::UI::Button> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____continueButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::ExplicitContentWarningViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ExplicitContentWarningViewController*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::ExplicitContentWarningViewController::DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ExplicitContentWarningViewController*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, removedFromHierarchy, screenSystemDisabling);
}
inline void GlobalNamespace::ExplicitContentWarningViewController::HandleClickedEvent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ExplicitContentWarningViewController*>::get(),
                                                                             "HandleClickedEvent", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::ExplicitContentWarningViewController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ExplicitContentWarningViewController*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::ExplicitContentWarningViewController* GlobalNamespace::ExplicitContentWarningViewController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::ExplicitContentWarningViewController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ExplicitContentWarningViewController::ExplicitContentWarningViewController() {}

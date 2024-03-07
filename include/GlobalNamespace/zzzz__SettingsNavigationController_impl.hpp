#pragma once
#include "HMUI/zzzz__NavigationController_impl.hpp"
#include "GlobalNamespace/zzzz__SettingsNavigationController_def.hpp"
#include "GlobalNamespace/zzzz__SettingsNavigationController_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__SettingsNavigationController__FinishAction::__SettingsNavigationController__FinishAction(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__SettingsNavigationController__FinishAction::__SettingsNavigationController__FinishAction() {}
constexpr ::GlobalNamespace::__SettingsNavigationController__FinishAction GlobalNamespace::__SettingsNavigationController__FinishAction::Ok{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__SettingsNavigationController__FinishAction GlobalNamespace::__SettingsNavigationController__FinishAction::Cancel{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__SettingsNavigationController__FinishAction GlobalNamespace::__SettingsNavigationController__FinishAction::Apply{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::GlobalNamespace::SettingsNavigationController.add_didFinishEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SettingsNavigationController::*)(
    ::System::Action_1<::GlobalNamespace::__SettingsNavigationController__FinishAction>*)>(&::GlobalNamespace::SettingsNavigationController::add_didFinishEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x243e49c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsNavigationController*>::get(), "add_didFinishEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::__SettingsNavigationController__FinishAction>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsNavigationController.remove_didFinishEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SettingsNavigationController::*)(
    ::System::Action_1<::GlobalNamespace::__SettingsNavigationController__FinishAction>*)>(&::GlobalNamespace::SettingsNavigationController::remove_didFinishEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x243e54c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsNavigationController*>::get(), "remove_didFinishEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::__SettingsNavigationController__FinishAction>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsNavigationController.DidActivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SettingsNavigationController::*)(bool, bool, bool)>(
    &::GlobalNamespace::SettingsNavigationController::DidActivate)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x243e5fc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsNavigationController*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsNavigationController*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsNavigationController.HandleFinishButton
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SettingsNavigationController::*)(
    ::GlobalNamespace::__SettingsNavigationController__FinishAction)>(&::GlobalNamespace::SettingsNavigationController::HandleFinishButton)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x243e758;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsNavigationController*>::get(), "HandleFinishButton", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SettingsNavigationController__FinishAction>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsNavigationController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SettingsNavigationController::*)()>(
    &::GlobalNamespace::SettingsNavigationController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x243e774;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsNavigationController*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsNavigationController._DidActivate_b__7_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SettingsNavigationController::*)()>(
    &::GlobalNamespace::SettingsNavigationController::_DidActivate_b__7_0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x243e77c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsNavigationController*>::get(),
                                                                               "<DidActivate>b__7_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsNavigationController._DidActivate_b__7_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SettingsNavigationController::*)()>(
    &::GlobalNamespace::SettingsNavigationController::_DidActivate_b__7_1)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x243e79c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsNavigationController*>::get(),
                                                                               "<DidActivate>b__7_1", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsNavigationController._DidActivate_b__7_2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SettingsNavigationController::*)()>(
    &::GlobalNamespace::SettingsNavigationController::_DidActivate_b__7_2)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x243e7bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsNavigationController*>::get(),
                                                                               "<DidActivate>b__7_2", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::Button>& GlobalNamespace::SettingsNavigationController::__cordl_internal_get__okButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____okButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& GlobalNamespace::SettingsNavigationController::__cordl_internal_get__okButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____okButton;
}
constexpr void GlobalNamespace::SettingsNavigationController::__cordl_internal_set__okButton(::UnityW<::UnityEngine::UI::Button> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____okButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::UI::Button>& GlobalNamespace::SettingsNavigationController::__cordl_internal_get__applyButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____applyButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& GlobalNamespace::SettingsNavigationController::__cordl_internal_get__applyButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____applyButton;
}
constexpr void GlobalNamespace::SettingsNavigationController::__cordl_internal_set__applyButton(::UnityW<::UnityEngine::UI::Button> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____applyButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::UI::Button>& GlobalNamespace::SettingsNavigationController::__cordl_internal_get__cancelButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cancelButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& GlobalNamespace::SettingsNavigationController::__cordl_internal_get__cancelButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cancelButton;
}
constexpr void GlobalNamespace::SettingsNavigationController::__cordl_internal_set__cancelButton(::UnityW<::UnityEngine::UI::Button> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cancelButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::GlobalNamespace::__SettingsNavigationController__FinishAction>*& GlobalNamespace::SettingsNavigationController::__cordl_internal_get_didFinishEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didFinishEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::__SettingsNavigationController__FinishAction>*> const&
GlobalNamespace::SettingsNavigationController::__cordl_internal_get_didFinishEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didFinishEvent;
}
constexpr void GlobalNamespace::SettingsNavigationController::__cordl_internal_set_didFinishEvent(::System::Action_1<::GlobalNamespace::__SettingsNavigationController__FinishAction>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___didFinishEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::SettingsNavigationController::add_didFinishEvent(::System::Action_1<::GlobalNamespace::__SettingsNavigationController__FinishAction>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsNavigationController*>::get(), "add_didFinishEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::__SettingsNavigationController__FinishAction>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::SettingsNavigationController::remove_didFinishEvent(::System::Action_1<::GlobalNamespace::__SettingsNavigationController__FinishAction>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsNavigationController*>::get(), "remove_didFinishEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::__SettingsNavigationController__FinishAction>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::SettingsNavigationController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsNavigationController*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::SettingsNavigationController::HandleFinishButton(::GlobalNamespace::__SettingsNavigationController__FinishAction finishAction) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsNavigationController*>::get(), "HandleFinishButton", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SettingsNavigationController__FinishAction>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, finishAction);
}
inline ::GlobalNamespace::SettingsNavigationController* GlobalNamespace::SettingsNavigationController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SettingsNavigationController*>());
}
inline void GlobalNamespace::SettingsNavigationController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsNavigationController*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SettingsNavigationController::_DidActivate_b__7_0() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsNavigationController*>::get(),
                                                                             "<DidActivate>b__7_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SettingsNavigationController::_DidActivate_b__7_1() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsNavigationController*>::get(),
                                                                             "<DidActivate>b__7_1", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SettingsNavigationController::_DidActivate_b__7_2() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsNavigationController*>::get(),
                                                                             "<DidActivate>b__7_2", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SettingsNavigationController::SettingsNavigationController() {}

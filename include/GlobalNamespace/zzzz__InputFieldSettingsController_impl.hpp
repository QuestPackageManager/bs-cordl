#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__InputFieldSettingsController_def.hpp"
#include "GlobalNamespace/zzzz__StringSO_def.hpp"
#include "HMUI/zzzz__InputFieldView_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::InputFieldSettingsController.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::InputFieldSettingsController::*)()>(
    &::GlobalNamespace::InputFieldSettingsController::Awake)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x22aaaa0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InputFieldSettingsController*>::get(), "Awake",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputFieldSettingsController.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::InputFieldSettingsController::*)()>(
    &::GlobalNamespace::InputFieldSettingsController::OnDestroy)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x22aab38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InputFieldSettingsController*>::get(),
                                                                               "OnDestroy", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputFieldSettingsController.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::InputFieldSettingsController::*)()>(
    &::GlobalNamespace::InputFieldSettingsController::OnEnable)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x22aabd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InputFieldSettingsController*>::get(),
                                                                               "OnEnable", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputFieldSettingsController.HandleInputFieldDidChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::InputFieldSettingsController::*)(::HMUI::InputFieldView*)>(
    &::GlobalNamespace::InputFieldSettingsController::HandleInputFieldDidChange)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x22aac24;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InputFieldSettingsController*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InputFieldSettingsController*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputFieldSettingsController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::InputFieldSettingsController::*)()>(
    &::GlobalNamespace::InputFieldSettingsController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22aac80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InputFieldSettingsController*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::HMUI::InputFieldView*& GlobalNamespace::InputFieldSettingsController::__get__inputFieldView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inputFieldView;
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::InputFieldView*> const& GlobalNamespace::InputFieldSettingsController::__get__inputFieldView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inputFieldView;
}
constexpr void GlobalNamespace::InputFieldSettingsController::__set__inputFieldView(::HMUI::InputFieldView* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____inputFieldView)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::StringSO*& GlobalNamespace::InputFieldSettingsController::__get__settingsValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsValue;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::StringSO*> const& GlobalNamespace::InputFieldSettingsController::__get__settingsValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsValue;
}
constexpr void GlobalNamespace::InputFieldSettingsController::__set__settingsValue(::GlobalNamespace::StringSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____settingsValue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::InputFieldSettingsController::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InputFieldSettingsController*>::get(), "Awake",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::InputFieldSettingsController::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InputFieldSettingsController*>::get(),
                                                                             "OnDestroy", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::InputFieldSettingsController::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InputFieldSettingsController*>::get(),
                                                                             "OnEnable", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::InputFieldSettingsController::HandleInputFieldDidChange(::HMUI::InputFieldView* inputFieldView) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InputFieldSettingsController*>::get(), "HandleInputFieldDidChange",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::InputFieldView*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inputFieldView);
}
inline ::GlobalNamespace::InputFieldSettingsController* GlobalNamespace::InputFieldSettingsController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::InputFieldSettingsController*>());
}
inline void GlobalNamespace::InputFieldSettingsController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InputFieldSettingsController*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InputFieldSettingsController::InputFieldSettingsController() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif

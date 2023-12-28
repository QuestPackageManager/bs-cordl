#pragma once
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "GlobalNamespace/zzzz__SelectModifiersViewController_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiersPanelController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SelectModifiersViewController.get_gameplayModifiers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::GameplayModifiers* (::GlobalNamespace::SelectModifiersViewController::*)()>(
    &::GlobalNamespace::SelectModifiersViewController::get_gameplayModifiers)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x22d0164;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectModifiersViewController*>::get(),
                                                                               "get_gameplayModifiers", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectModifiersViewController.Setup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelectModifiersViewController::*)(::GlobalNamespace::GameplayModifiers*)>(
    &::GlobalNamespace::SelectModifiersViewController::Setup)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x22d0180;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectModifiersViewController*>::get(), "Setup", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectModifiersViewController.DidActivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelectModifiersViewController::*)(bool, bool, bool)>(
    &::GlobalNamespace::SelectModifiersViewController::DidActivate)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x22d019c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectModifiersViewController*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectModifiersViewController*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectModifiersViewController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelectModifiersViewController::*)()>(
    &::GlobalNamespace::SelectModifiersViewController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22d023c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectModifiersViewController*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::GameplayModifiersPanelController*& GlobalNamespace::SelectModifiersViewController::__get__gameplayModifiersPanelController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayModifiersPanelController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayModifiersPanelController*> const&
GlobalNamespace::SelectModifiersViewController::__get__gameplayModifiersPanelController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayModifiersPanelController;
}
constexpr void GlobalNamespace::SelectModifiersViewController::__set__gameplayModifiersPanelController(::GlobalNamespace::GameplayModifiersPanelController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____gameplayModifiersPanelController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::GameplayModifiers* GlobalNamespace::SelectModifiersViewController::get_gameplayModifiers() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectModifiersViewController*>::get(),
                                                                             "get_gameplayModifiers", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GameplayModifiers*, false>(this, ___internal_method);
}
inline void GlobalNamespace::SelectModifiersViewController::Setup(::GlobalNamespace::GameplayModifiers* gameplayModifiers) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectModifiersViewController*>::get(), "Setup", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, gameplayModifiers);
}
inline void GlobalNamespace::SelectModifiersViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectModifiersViewController*>::get(), "DidActivate", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline ::GlobalNamespace::SelectModifiersViewController* GlobalNamespace::SelectModifiersViewController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::SelectModifiersViewController*>());
}
inline void GlobalNamespace::SelectModifiersViewController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectModifiersViewController*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SelectModifiersViewController::SelectModifiersViewController() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif

#pragma once
#include "HMUI/zzzz__FlowCoordinator_impl.hpp"
#include "GlobalNamespace/zzzz__SettingsFlowCoordinator_def.hpp"
#include "GlobalNamespace/zzzz__SettingsSubMenuInfo_def.hpp"
#include "GlobalNamespace/zzzz__SettingsNavigationController_def.hpp"
#include "GlobalNamespace/zzzz__ISaveData_def.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include "GlobalNamespace/zzzz__MainSettingsMenuViewController_def.hpp"
#include "GlobalNamespace/zzzz__SettingsFlowCoordinator_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "GlobalNamespace/zzzz__MainSettingsModelSO_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__SettingsFlowCoordinator__FinishAction::__SettingsFlowCoordinator__FinishAction(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__SettingsFlowCoordinator__FinishAction::__SettingsFlowCoordinator__FinishAction() {}
constexpr ::GlobalNamespace::__SettingsFlowCoordinator__FinishAction GlobalNamespace::__SettingsFlowCoordinator__FinishAction::Cancel{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__SettingsFlowCoordinator__FinishAction GlobalNamespace::__SettingsFlowCoordinator__FinishAction::Ok{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__SettingsFlowCoordinator__FinishAction GlobalNamespace::__SettingsFlowCoordinator__FinishAction::Apply{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::GlobalNamespace::SettingsFlowCoordinator.add_didFinishEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SettingsFlowCoordinator::*)(
    ::System::Action_2<::GlobalNamespace::SettingsFlowCoordinator*, ::GlobalNamespace::__SettingsFlowCoordinator__FinishAction>*)>(&::GlobalNamespace::SettingsFlowCoordinator::add_didFinishEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x228b9b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsFlowCoordinator*>::get(), "add_didFinishEvent", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                        ::System::Action_2<::GlobalNamespace::SettingsFlowCoordinator*, ::GlobalNamespace::__SettingsFlowCoordinator__FinishAction>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsFlowCoordinator.remove_didFinishEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::SettingsFlowCoordinator::*)(::System::Action_2<::GlobalNamespace::SettingsFlowCoordinator*, ::GlobalNamespace::__SettingsFlowCoordinator__FinishAction>*)>(
        &::GlobalNamespace::SettingsFlowCoordinator::remove_didFinishEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x228c1d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsFlowCoordinator*>::get(), "remove_didFinishEvent", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                        ::System::Action_2<::GlobalNamespace::SettingsFlowCoordinator*, ::GlobalNamespace::__SettingsFlowCoordinator__FinishAction>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsFlowCoordinator.DidActivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SettingsFlowCoordinator::*)(bool, bool, bool)>(
    &::GlobalNamespace::SettingsFlowCoordinator::DidActivate)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x229b6d0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsFlowCoordinator*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsFlowCoordinator*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsFlowCoordinator.DidDeactivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SettingsFlowCoordinator::*)(bool, bool)>(
    &::GlobalNamespace::SettingsFlowCoordinator::DidDeactivate)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x229b980;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsFlowCoordinator*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsFlowCoordinator*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsFlowCoordinator.ShowSecretViewController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SettingsFlowCoordinator::*)(::HMUI::ViewController*)>(
    &::GlobalNamespace::SettingsFlowCoordinator::ShowSecretViewController)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x229ba8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsFlowCoordinator*>::get(), "ShowSecretViewController", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsFlowCoordinator.HandleDidSelectSettingsSubMenu
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SettingsFlowCoordinator::*)(::GlobalNamespace::SettingsSubMenuInfo*, int32_t)>(
    &::GlobalNamespace::SettingsFlowCoordinator::HandleDidSelectSettingsSubMenu)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x229bb24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsFlowCoordinator*>::get(), "HandleDidSelectSettingsSubMenu", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SettingsSubMenuInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsFlowCoordinator.ReplaceViewController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SettingsFlowCoordinator::*)(::HMUI::ViewController*)>(
    &::GlobalNamespace::SettingsFlowCoordinator::ReplaceViewController)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x229ba90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsFlowCoordinator*>::get(), "ReplaceViewController", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsFlowCoordinator.HandleSettingsNavigationControllerDidFinish
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SettingsFlowCoordinator::*)(
    ::GlobalNamespace::__SettingsNavigationController__FinishAction)>(&::GlobalNamespace::SettingsFlowCoordinator::HandleSettingsNavigationControllerDidFinish)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x229bb90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsFlowCoordinator*>::get(), "HandleSettingsNavigationControllerDidFinish", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SettingsNavigationController__FinishAction>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsFlowCoordinator.ApplySettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SettingsFlowCoordinator::*)()>(&::GlobalNamespace::SettingsFlowCoordinator::ApplySettings)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x229bc2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsFlowCoordinator*>::get(),
                                                                               "ApplySettings", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsFlowCoordinator.CancelSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SettingsFlowCoordinator::*)()>(
    &::GlobalNamespace::SettingsFlowCoordinator::CancelSettings)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x229bc68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsFlowCoordinator*>::get(),
                                                                               "CancelSettings", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsFlowCoordinator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SettingsFlowCoordinator::*)()>(&::GlobalNamespace::SettingsFlowCoordinator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x229bc90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsFlowCoordinator*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::MainSettingsModelSO*& GlobalNamespace::SettingsFlowCoordinator::__get__mainSettingsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainSettingsModel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MainSettingsModelSO*> const& GlobalNamespace::SettingsFlowCoordinator::__get__mainSettingsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainSettingsModel;
}
constexpr void GlobalNamespace::SettingsFlowCoordinator::__set__mainSettingsModel(::GlobalNamespace::MainSettingsModelSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mainSettingsModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MainSettingsMenuViewController*& GlobalNamespace::SettingsFlowCoordinator::__get__mainSettingsMenuViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainSettingsMenuViewController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MainSettingsMenuViewController*> const& GlobalNamespace::SettingsFlowCoordinator::__get__mainSettingsMenuViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainSettingsMenuViewController;
}
constexpr void GlobalNamespace::SettingsFlowCoordinator::__set__mainSettingsMenuViewController(::GlobalNamespace::MainSettingsMenuViewController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mainSettingsMenuViewController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::SettingsNavigationController*& GlobalNamespace::SettingsFlowCoordinator::__get__settingsNavigationController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsNavigationController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SettingsNavigationController*> const& GlobalNamespace::SettingsFlowCoordinator::__get__settingsNavigationController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsNavigationController;
}
constexpr void GlobalNamespace::SettingsFlowCoordinator::__set__settingsNavigationController(::GlobalNamespace::SettingsNavigationController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____settingsNavigationController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::ISaveData*& GlobalNamespace::SettingsFlowCoordinator::__get__saveData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saveData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ISaveData*> const& GlobalNamespace::SettingsFlowCoordinator::__get__saveData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saveData;
}
constexpr void GlobalNamespace::SettingsFlowCoordinator::__set__saveData(::GlobalNamespace::ISaveData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____saveData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_2<::GlobalNamespace::SettingsFlowCoordinator*, ::GlobalNamespace::__SettingsFlowCoordinator__FinishAction>*&
GlobalNamespace::SettingsFlowCoordinator::__get_didFinishEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didFinishEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::SettingsFlowCoordinator*, ::GlobalNamespace::__SettingsFlowCoordinator__FinishAction>*> const&
GlobalNamespace::SettingsFlowCoordinator::__get_didFinishEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didFinishEvent;
}
constexpr void
GlobalNamespace::SettingsFlowCoordinator::__set_didFinishEvent(::System::Action_2<::GlobalNamespace::SettingsFlowCoordinator*, ::GlobalNamespace::__SettingsFlowCoordinator__FinishAction>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___didFinishEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::SettingsFlowCoordinator::setStaticF__selectedSettingsSubMenuInfoIdx(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_selectedSettingsSubMenuInfoIdx", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsFlowCoordinator*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::SettingsFlowCoordinator::getStaticF__selectedSettingsSubMenuInfoIdx() {
  return ::cordl_internals::getStaticField<int32_t, "_selectedSettingsSubMenuInfoIdx", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsFlowCoordinator*>::get>();
}
inline void
GlobalNamespace::SettingsFlowCoordinator::add_didFinishEvent(::System::Action_2<::GlobalNamespace::SettingsFlowCoordinator*, ::GlobalNamespace::__SettingsFlowCoordinator__FinishAction>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsFlowCoordinator*>::get(), "add_didFinishEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                      ::System::Action_2<::GlobalNamespace::SettingsFlowCoordinator*, ::GlobalNamespace::__SettingsFlowCoordinator__FinishAction>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void
GlobalNamespace::SettingsFlowCoordinator::remove_didFinishEvent(::System::Action_2<::GlobalNamespace::SettingsFlowCoordinator*, ::GlobalNamespace::__SettingsFlowCoordinator__FinishAction>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsFlowCoordinator*>::get(), "remove_didFinishEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                      ::System::Action_2<::GlobalNamespace::SettingsFlowCoordinator*, ::GlobalNamespace::__SettingsFlowCoordinator__FinishAction>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::SettingsFlowCoordinator::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsFlowCoordinator*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::SettingsFlowCoordinator::DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsFlowCoordinator*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, removedFromHierarchy, screenSystemDisabling);
}
inline void GlobalNamespace::SettingsFlowCoordinator::ShowSecretViewController(::HMUI::ViewController* viewController) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsFlowCoordinator*>::get(), "ShowSecretViewController", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, viewController);
}
inline void GlobalNamespace::SettingsFlowCoordinator::HandleDidSelectSettingsSubMenu(::GlobalNamespace::SettingsSubMenuInfo* settingsSubMenuInfo, int32_t idx) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsFlowCoordinator*>::get(), "HandleDidSelectSettingsSubMenu", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SettingsSubMenuInfo*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, settingsSubMenuInfo, idx);
}
inline void GlobalNamespace::SettingsFlowCoordinator::ReplaceViewController(::HMUI::ViewController* viewController) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsFlowCoordinator*>::get(), "ReplaceViewController", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, viewController);
}
inline void GlobalNamespace::SettingsFlowCoordinator::HandleSettingsNavigationControllerDidFinish(::GlobalNamespace::__SettingsNavigationController__FinishAction finishAction) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsFlowCoordinator*>::get(), "HandleSettingsNavigationControllerDidFinish", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SettingsNavigationController__FinishAction>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, finishAction);
}
inline void GlobalNamespace::SettingsFlowCoordinator::ApplySettings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsFlowCoordinator*>::get(),
                                                                             "ApplySettings", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SettingsFlowCoordinator::CancelSettings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsFlowCoordinator*>::get(),
                                                                             "CancelSettings", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::SettingsFlowCoordinator* GlobalNamespace::SettingsFlowCoordinator::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::SettingsFlowCoordinator*>());
}
inline void GlobalNamespace::SettingsFlowCoordinator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsFlowCoordinator*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SettingsFlowCoordinator::SettingsFlowCoordinator() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif

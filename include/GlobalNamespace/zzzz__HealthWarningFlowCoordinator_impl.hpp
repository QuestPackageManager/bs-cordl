#pragma once
#include "GlobalNamespace/zzzz__SelectRegionViewController_impl.hpp"
#include "HMUI/zzzz__FlowCoordinator_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__HealthWarningFlowCoordinator_def.hpp"
#include "GlobalNamespace/zzzz__SelectRegionViewController_def.hpp"
#include "GlobalNamespace/zzzz__HealthWarningViewController_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "GlobalNamespace/zzzz__ISaveData_def.hpp"
#include "GlobalNamespace/zzzz__EulaViewController_def.hpp"
#include "GlobalNamespace/zzzz__SelectLanguageViewController_def.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include "GlobalNamespace/zzzz__PlayerDataModel_def.hpp"
#include "GlobalNamespace/zzzz__PrivacyPolicyViewController_def.hpp"
#include "GlobalNamespace/zzzz__AppInitScenesTransitionSetupDataContainerSO_def.hpp"
#include "GlobalNamespace/zzzz__MainSettingsModelSO_def.hpp"
#include "GlobalNamespace/zzzz__ExplicitContentWarningViewController_def.hpp"
#include "GlobalNamespace/zzzz__GameScenesManager_def.hpp"
#include "GlobalNamespace/zzzz__FadeInOutController_def.hpp"
#include "GlobalNamespace/zzzz__HealthWarningFlowCoordinator_def.hpp"
#include "GlobalNamespace/zzzz__ScenesTransitionSetupDataSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__HealthWarningFlowCoordinator__InitData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__HealthWarningFlowCoordinator__InitData::*)(
    ::GlobalNamespace::ScenesTransitionSetupDataSO*)>(&::GlobalNamespace::__HealthWarningFlowCoordinator__InitData::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2289c80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__HealthWarningFlowCoordinator__InitData*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ScenesTransitionSetupDataSO*>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::ScenesTransitionSetupDataSO*& GlobalNamespace::__HealthWarningFlowCoordinator__InitData::__get_nextScenesTransitionSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextScenesTransitionSetupData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ScenesTransitionSetupDataSO*> const&
GlobalNamespace::__HealthWarningFlowCoordinator__InitData::__get_nextScenesTransitionSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextScenesTransitionSetupData;
}
constexpr void GlobalNamespace::__HealthWarningFlowCoordinator__InitData::__set_nextScenesTransitionSetupData(::GlobalNamespace::ScenesTransitionSetupDataSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___nextScenesTransitionSetupData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__HealthWarningFlowCoordinator__InitData*
GlobalNamespace::__HealthWarningFlowCoordinator__InitData::New_ctor(::GlobalNamespace::ScenesTransitionSetupDataSO* nextScenesTransitionSetupData) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__HealthWarningFlowCoordinator__InitData*>(nextScenesTransitionSetupData));
}
inline void GlobalNamespace::__HealthWarningFlowCoordinator__InitData::_ctor(::GlobalNamespace::ScenesTransitionSetupDataSO* nextScenesTransitionSetupData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__HealthWarningFlowCoordinator__InitData*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ScenesTransitionSetupDataSO*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, nextScenesTransitionSetupData);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__HealthWarningFlowCoordinator__InitData::__HealthWarningFlowCoordinator__InitData() {}
//  Writing Method size for method: ::GlobalNamespace::HealthWarningFlowCoordinator.DidActivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HealthWarningFlowCoordinator::*)(bool, bool, bool)>(
    &::GlobalNamespace::HealthWarningFlowCoordinator::DidActivate)> {
  constexpr static std::size_t size = 0x4c0;
  constexpr static std::size_t addrs = 0x2289010;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningFlowCoordinator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningFlowCoordinator*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HealthWarningFlowCoordinator.DidDeactivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HealthWarningFlowCoordinator::*)(bool, bool)>(
    &::GlobalNamespace::HealthWarningFlowCoordinator::DidDeactivate)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x2289520;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningFlowCoordinator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningFlowCoordinator*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HealthWarningFlowCoordinator.TopViewControllerWillChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HealthWarningFlowCoordinator::*)(
    ::HMUI::ViewController*, ::HMUI::ViewController*, ::HMUI::__ViewController__AnimationType)>(&::GlobalNamespace::HealthWarningFlowCoordinator::TopViewControllerWillChange)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x22897d0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningFlowCoordinator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningFlowCoordinator*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HealthWarningFlowCoordinator.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HealthWarningFlowCoordinator::*)()>(
    &::GlobalNamespace::HealthWarningFlowCoordinator::Update)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2289854;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningFlowCoordinator*>::get(),
                                                                               "Update", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HealthWarningFlowCoordinator.HandleSelectLanguageViewControllerDidChangeLanguage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HealthWarningFlowCoordinator::*)()>(
    &::GlobalNamespace::HealthWarningFlowCoordinator::HandleSelectLanguageViewControllerDidChangeLanguage)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2289970;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningFlowCoordinator*>::get(),
                                                 "HandleSelectLanguageViewControllerDidChangeLanguage", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HealthWarningFlowCoordinator.HandleSelectLanguageViewControllerDidPressContinueButton
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HealthWarningFlowCoordinator::*)()>(
    &::GlobalNamespace::HealthWarningFlowCoordinator::HandleSelectLanguageViewControllerDidPressContinueButton)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x22899f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningFlowCoordinator*>::get(),
                                                 "HandleSelectLanguageViewControllerDidPressContinueButton", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HealthWarningFlowCoordinator.HandleSelectRegionViewControllerDidPressContinueButton
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HealthWarningFlowCoordinator::*)(::GlobalNamespace::__SelectRegionViewController__Region)>(
    &::GlobalNamespace::HealthWarningFlowCoordinator::HandleSelectRegionViewControllerDidPressContinueButton)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2289a40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningFlowCoordinator*>::get(), "HandleSelectRegionViewControllerDidPressContinueButton",
        std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SelectRegionViewController__Region>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HealthWarningFlowCoordinator.HandleEulaViewControllerDidFinish
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HealthWarningFlowCoordinator::*)(::GlobalNamespace::__EulaViewController__ButtonType)>(
    &::GlobalNamespace::HealthWarningFlowCoordinator::HandleEulaViewControllerDidFinish)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2289b64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningFlowCoordinator*>::get(), "HandleEulaViewControllerDidFinish", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__EulaViewController__ButtonType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HealthWarningFlowCoordinator.HandlePrivacyPolicyViewControllerDidFinish
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HealthWarningFlowCoordinator::*)(
    ::GlobalNamespace::__PrivacyPolicyViewController__ButtonType)>(&::GlobalNamespace::HealthWarningFlowCoordinator::HandlePrivacyPolicyViewControllerDidFinish)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2289be0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningFlowCoordinator*>::get(), "HandlePrivacyPolicyViewControllerDidFinish", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PrivacyPolicyViewController__ButtonType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HealthWarningFlowCoordinator.HandleHealthWarningViewControllerDidFinish
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HealthWarningFlowCoordinator::*)()>(
    &::GlobalNamespace::HealthWarningFlowCoordinator::HandleHealthWarningViewControllerDidFinish)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x2289880;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningFlowCoordinator*>::get(),
                                                                               "HandleHealthWarningViewControllerDidFinish", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HealthWarningFlowCoordinator.HandleExplicitContentWarningViewControllerDidFinish
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HealthWarningFlowCoordinator::*)()>(
    &::GlobalNamespace::HealthWarningFlowCoordinator::HandleExplicitContentWarningViewControllerDidFinish)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2289c74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningFlowCoordinator*>::get(),
                                                 "HandleExplicitContentWarningViewControllerDidFinish", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HealthWarningFlowCoordinator.ResolveMainViewController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HMUI::ViewController* (::GlobalNamespace::HealthWarningFlowCoordinator::*)()>(
    &::GlobalNamespace::HealthWarningFlowCoordinator::ResolveMainViewController)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x22894d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningFlowCoordinator*>::get(),
                                                                               "ResolveMainViewController", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HealthWarningFlowCoordinator.ResolvePlayerAgreementsViewController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HMUI::ViewController* (::GlobalNamespace::HealthWarningFlowCoordinator::*)()>(
    &::GlobalNamespace::HealthWarningFlowCoordinator::ResolvePlayerAgreementsViewController)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2289a70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningFlowCoordinator*>::get(),
                                                                               "ResolvePlayerAgreementsViewController", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HealthWarningFlowCoordinator.GoToNextScene
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HealthWarningFlowCoordinator::*)()>(
    &::GlobalNamespace::HealthWarningFlowCoordinator::GoToNextScene)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2289c38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningFlowCoordinator*>::get(),
                                                                               "GoToNextScene", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HealthWarningFlowCoordinator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HealthWarningFlowCoordinator::*)()>(
    &::GlobalNamespace::HealthWarningFlowCoordinator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2289c78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningFlowCoordinator*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::MainSettingsModelSO*& GlobalNamespace::HealthWarningFlowCoordinator::__get__mainSettingsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainSettingsModel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MainSettingsModelSO*> const& GlobalNamespace::HealthWarningFlowCoordinator::__get__mainSettingsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainSettingsModel;
}
constexpr void GlobalNamespace::HealthWarningFlowCoordinator::__set__mainSettingsModel(::GlobalNamespace::MainSettingsModelSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mainSettingsModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO*& GlobalNamespace::HealthWarningFlowCoordinator::__get__appInitScenesTransitionSetupDataContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appInitScenesTransitionSetupDataContainer;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO*> const&
GlobalNamespace::HealthWarningFlowCoordinator::__get__appInitScenesTransitionSetupDataContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appInitScenesTransitionSetupDataContainer;
}
constexpr void GlobalNamespace::HealthWarningFlowCoordinator::__set__appInitScenesTransitionSetupDataContainer(::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____appInitScenesTransitionSetupDataContainer)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::SelectLanguageViewController*& GlobalNamespace::HealthWarningFlowCoordinator::__get__selectLanguageViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectLanguageViewController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SelectLanguageViewController*> const& GlobalNamespace::HealthWarningFlowCoordinator::__get__selectLanguageViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectLanguageViewController;
}
constexpr void GlobalNamespace::HealthWarningFlowCoordinator::__set__selectLanguageViewController(::GlobalNamespace::SelectLanguageViewController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____selectLanguageViewController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::SelectRegionViewController*& GlobalNamespace::HealthWarningFlowCoordinator::__get__selectRegionViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectRegionViewController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SelectRegionViewController*> const& GlobalNamespace::HealthWarningFlowCoordinator::__get__selectRegionViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectRegionViewController;
}
constexpr void GlobalNamespace::HealthWarningFlowCoordinator::__set__selectRegionViewController(::GlobalNamespace::SelectRegionViewController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____selectRegionViewController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::EulaViewController*& GlobalNamespace::HealthWarningFlowCoordinator::__get__eulaViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eulaViewController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EulaViewController*> const& GlobalNamespace::HealthWarningFlowCoordinator::__get__eulaViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eulaViewController;
}
constexpr void GlobalNamespace::HealthWarningFlowCoordinator::__set__eulaViewController(::GlobalNamespace::EulaViewController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____eulaViewController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::PrivacyPolicyViewController*& GlobalNamespace::HealthWarningFlowCoordinator::__get__privacyPolicyViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____privacyPolicyViewController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PrivacyPolicyViewController*> const& GlobalNamespace::HealthWarningFlowCoordinator::__get__privacyPolicyViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____privacyPolicyViewController;
}
constexpr void GlobalNamespace::HealthWarningFlowCoordinator::__set__privacyPolicyViewController(::GlobalNamespace::PrivacyPolicyViewController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____privacyPolicyViewController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::HealthWarningViewController*& GlobalNamespace::HealthWarningFlowCoordinator::__get__healthWarningViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____healthWarningViewController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::HealthWarningViewController*> const& GlobalNamespace::HealthWarningFlowCoordinator::__get__healthWarningViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____healthWarningViewController;
}
constexpr void GlobalNamespace::HealthWarningFlowCoordinator::__set__healthWarningViewController(::GlobalNamespace::HealthWarningViewController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____healthWarningViewController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::ExplicitContentWarningViewController*& GlobalNamespace::HealthWarningFlowCoordinator::__get__explicitContentWarningViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____explicitContentWarningViewController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ExplicitContentWarningViewController*> const&
GlobalNamespace::HealthWarningFlowCoordinator::__get__explicitContentWarningViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____explicitContentWarningViewController;
}
constexpr void GlobalNamespace::HealthWarningFlowCoordinator::__set__explicitContentWarningViewController(::GlobalNamespace::ExplicitContentWarningViewController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____explicitContentWarningViewController)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::PlayerDataModel*& GlobalNamespace::HealthWarningFlowCoordinator::__get__playerDataModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataModel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerDataModel*> const& GlobalNamespace::HealthWarningFlowCoordinator::__get__playerDataModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataModel;
}
constexpr void GlobalNamespace::HealthWarningFlowCoordinator::__set__playerDataModel(::GlobalNamespace::PlayerDataModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playerDataModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::FadeInOutController*& GlobalNamespace::HealthWarningFlowCoordinator::__get__fadeInOut() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fadeInOut;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FadeInOutController*> const& GlobalNamespace::HealthWarningFlowCoordinator::__get__fadeInOut() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fadeInOut;
}
constexpr void GlobalNamespace::HealthWarningFlowCoordinator::__set__fadeInOut(::GlobalNamespace::FadeInOutController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____fadeInOut)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::GameScenesManager*& GlobalNamespace::HealthWarningFlowCoordinator::__get__gameScenesManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameScenesManager;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameScenesManager*> const& GlobalNamespace::HealthWarningFlowCoordinator::__get__gameScenesManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameScenesManager;
}
constexpr void GlobalNamespace::HealthWarningFlowCoordinator::__set__gameScenesManager(::GlobalNamespace::GameScenesManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____gameScenesManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__HealthWarningFlowCoordinator__InitData*& GlobalNamespace::HealthWarningFlowCoordinator::__get__initData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__HealthWarningFlowCoordinator__InitData*> const& GlobalNamespace::HealthWarningFlowCoordinator::__get__initData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initData;
}
constexpr void GlobalNamespace::HealthWarningFlowCoordinator::__set__initData(::GlobalNamespace::__HealthWarningFlowCoordinator__InitData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____initData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::ISaveData*& GlobalNamespace::HealthWarningFlowCoordinator::__get__saveData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saveData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ISaveData*> const& GlobalNamespace::HealthWarningFlowCoordinator::__get__saveData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saveData;
}
constexpr void GlobalNamespace::HealthWarningFlowCoordinator::__set__saveData(::GlobalNamespace::ISaveData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____saveData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::HMUI::ViewController*, ::StringW>*& GlobalNamespace::HealthWarningFlowCoordinator::__get__viewControllerTitles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____viewControllerTitles;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::HMUI::ViewController*, ::StringW>*> const&
GlobalNamespace::HealthWarningFlowCoordinator::__get__viewControllerTitles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____viewControllerTitles;
}
constexpr void GlobalNamespace::HealthWarningFlowCoordinator::__set__viewControllerTitles(::System::Collections::Generic::Dictionary_2<::HMUI::ViewController*, ::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____viewControllerTitles)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__SelectRegionViewController__Region& GlobalNamespace::HealthWarningFlowCoordinator::__get__selectedRegion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedRegion;
}
constexpr ::GlobalNamespace::__SelectRegionViewController__Region const& GlobalNamespace::HealthWarningFlowCoordinator::__get__selectedRegion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedRegion;
}
constexpr void GlobalNamespace::HealthWarningFlowCoordinator::__set__selectedRegion(::GlobalNamespace::__SelectRegionViewController__Region value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____selectedRegion = value;
}
inline void GlobalNamespace::HealthWarningFlowCoordinator::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningFlowCoordinator*>::get(), "DidActivate", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::HealthWarningFlowCoordinator::DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningFlowCoordinator*>::get(), "DidDeactivate", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, removedFromHierarchy, screenSystemDisabling);
}
inline void GlobalNamespace::HealthWarningFlowCoordinator::TopViewControllerWillChange(::HMUI::ViewController* oldViewController, ::HMUI::ViewController* newViewController,
                                                                                       ::HMUI::__ViewController__AnimationType animationType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningFlowCoordinator*>::get(), "TopViewControllerWillChange", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__ViewController__AnimationType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, oldViewController, newViewController, animationType);
}
inline void GlobalNamespace::HealthWarningFlowCoordinator::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningFlowCoordinator*>::get(), "Update",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::HealthWarningFlowCoordinator::HandleSelectLanguageViewControllerDidChangeLanguage() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningFlowCoordinator*>::get(),
                                                                             "HandleSelectLanguageViewControllerDidChangeLanguage", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::HealthWarningFlowCoordinator::HandleSelectLanguageViewControllerDidPressContinueButton() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningFlowCoordinator*>::get(),
                                               "HandleSelectLanguageViewControllerDidPressContinueButton", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::HealthWarningFlowCoordinator::HandleSelectRegionViewControllerDidPressContinueButton(::GlobalNamespace::__SelectRegionViewController__Region region) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningFlowCoordinator*>::get(), "HandleSelectRegionViewControllerDidPressContinueButton",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SelectRegionViewController__Region>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, region);
}
inline void GlobalNamespace::HealthWarningFlowCoordinator::HandleEulaViewControllerDidFinish(::GlobalNamespace::__EulaViewController__ButtonType buttonType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningFlowCoordinator*>::get(), "HandleEulaViewControllerDidFinish", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__EulaViewController__ButtonType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buttonType);
}
inline void GlobalNamespace::HealthWarningFlowCoordinator::HandlePrivacyPolicyViewControllerDidFinish(::GlobalNamespace::__PrivacyPolicyViewController__ButtonType buttonType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningFlowCoordinator*>::get(), "HandlePrivacyPolicyViewControllerDidFinish", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PrivacyPolicyViewController__ButtonType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buttonType);
}
inline void GlobalNamespace::HealthWarningFlowCoordinator::HandleHealthWarningViewControllerDidFinish() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningFlowCoordinator*>::get(),
                                                                             "HandleHealthWarningViewControllerDidFinish", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::HealthWarningFlowCoordinator::HandleExplicitContentWarningViewControllerDidFinish() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningFlowCoordinator*>::get(),
                                                                             "HandleExplicitContentWarningViewControllerDidFinish", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::HMUI::ViewController* GlobalNamespace::HealthWarningFlowCoordinator::ResolveMainViewController() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningFlowCoordinator*>::get(),
                                                                             "ResolveMainViewController", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::HMUI::ViewController*, false>(this, ___internal_method);
}
inline ::HMUI::ViewController* GlobalNamespace::HealthWarningFlowCoordinator::ResolvePlayerAgreementsViewController() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningFlowCoordinator*>::get(),
                                                                             "ResolvePlayerAgreementsViewController", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::HMUI::ViewController*, false>(this, ___internal_method);
}
inline void GlobalNamespace::HealthWarningFlowCoordinator::GoToNextScene() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningFlowCoordinator*>::get(),
                                                                             "GoToNextScene", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::HealthWarningFlowCoordinator* GlobalNamespace::HealthWarningFlowCoordinator::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::HealthWarningFlowCoordinator*>());
}
inline void GlobalNamespace::HealthWarningFlowCoordinator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningFlowCoordinator*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HealthWarningFlowCoordinator::HealthWarningFlowCoordinator() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif

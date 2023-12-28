#pragma once
#include "GlobalNamespace/zzzz__BeatmapDifficulty_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SimpleLevelStarter_def.hpp"
#include "UnityEngine/zzzz__TextAsset_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
#include "GlobalNamespace/zzzz__StandardLevelScenesTransitionSetupDataSO_def.hpp"
#include "GlobalNamespace/zzzz__MenuTransitionsHelper_def.hpp"
#include "GlobalNamespace/zzzz__GameScenesManager_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
#include "GlobalNamespace/zzzz__PlayerDataModel_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "GlobalNamespace/zzzz__ScenesTransitionSetupDataSO_def.hpp"
#include "GlobalNamespace/zzzz__LevelCompletionResults_def.hpp"
#include "HMUI/zzzz__ButtonBinder_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelSO_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SimpleLevelStarter.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SimpleLevelStarter::*)()>(&::GlobalNamespace::SimpleLevelStarter::Awake)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x23202d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SimpleLevelStarter*>::get(), "Awake",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SimpleLevelStarter.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SimpleLevelStarter::*)()>(&::GlobalNamespace::SimpleLevelStarter::OnDestroy)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2320398;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SimpleLevelStarter*>::get(), "OnDestroy",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SimpleLevelStarter.StartLevel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SimpleLevelStarter::*)()>(&::GlobalNamespace::SimpleLevelStarter::StartLevel)> {
  constexpr static std::size_t size = 0x4dc;
  constexpr static std::size_t addrs = 0x23203b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SimpleLevelStarter*>::get(), "StartLevel",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SimpleLevelStarter.InstallEarlyBindings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SimpleLevelStarter::*)(
    ::GlobalNamespace::ScenesTransitionSetupDataSO*, ::Zenject::DiContainer*)>(&::GlobalNamespace::SimpleLevelStarter::InstallEarlyBindings)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x2320890;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SimpleLevelStarter*>::get(), "InstallEarlyBindings", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ScenesTransitionSetupDataSO*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SimpleLevelStarter.ButtonPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SimpleLevelStarter::*)()>(&::GlobalNamespace::SimpleLevelStarter::ButtonPressed)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x23209b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SimpleLevelStarter*>::get(), "ButtonPressed",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SimpleLevelStarter.HandleLevelDidFinish
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SimpleLevelStarter::*)(
    ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*, ::GlobalNamespace::LevelCompletionResults*)>(&::GlobalNamespace::SimpleLevelStarter::HandleLevelDidFinish)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x23209bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SimpleLevelStarter*>::get(), "HandleLevelDidFinish", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelCompletionResults*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SimpleLevelStarter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SimpleLevelStarter::*)()>(&::GlobalNamespace::SimpleLevelStarter::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x23209e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SimpleLevelStarter*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SimpleLevelStarter._StartLevel_g__AfterSceneSwitchCallback_16_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SimpleLevelStarter::*)(::Zenject::DiContainer*)>(
    &::GlobalNamespace::SimpleLevelStarter::_StartLevel_g__AfterSceneSwitchCallback_16_0)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x2320abc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SimpleLevelStarter*>::get(), "<StartLevel>g__AfterSceneSwitchCallback|16_0",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BeatmapLevelSO*& GlobalNamespace::SimpleLevelStarter::__get__level() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____level;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelSO*> const& GlobalNamespace::SimpleLevelStarter::__get__level() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____level;
}
constexpr void GlobalNamespace::SimpleLevelStarter::__set__level(::GlobalNamespace::BeatmapLevelSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____level)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapCharacteristicSO*& GlobalNamespace::SimpleLevelStarter::__get__beatmapCharacteristic() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCharacteristic;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCharacteristicSO*> const& GlobalNamespace::SimpleLevelStarter::__get__beatmapCharacteristic() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCharacteristic;
}
constexpr void GlobalNamespace::SimpleLevelStarter::__set__beatmapCharacteristic(::GlobalNamespace::BeatmapCharacteristicSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapCharacteristic)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapDifficulty& GlobalNamespace::SimpleLevelStarter::__get__beatmapDifficulty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapDifficulty;
}
constexpr ::GlobalNamespace::BeatmapDifficulty const& GlobalNamespace::SimpleLevelStarter::__get__beatmapDifficulty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapDifficulty;
}
constexpr void GlobalNamespace::SimpleLevelStarter::__set__beatmapDifficulty(::GlobalNamespace::BeatmapDifficulty value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapDifficulty = value;
}
constexpr bool& GlobalNamespace::SimpleLevelStarter::__get__useTestNoteCutSoundEffects() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useTestNoteCutSoundEffects;
}
constexpr bool const& GlobalNamespace::SimpleLevelStarter::__get__useTestNoteCutSoundEffects() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useTestNoteCutSoundEffects;
}
constexpr void GlobalNamespace::SimpleLevelStarter::__set__useTestNoteCutSoundEffects(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____useTestNoteCutSoundEffects = value;
}
constexpr bool& GlobalNamespace::SimpleLevelStarter::__get__overrideStrobeFilterSettingsToAllEffects() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overrideStrobeFilterSettingsToAllEffects;
}
constexpr bool const& GlobalNamespace::SimpleLevelStarter::__get__overrideStrobeFilterSettingsToAllEffects() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overrideStrobeFilterSettingsToAllEffects;
}
constexpr void GlobalNamespace::SimpleLevelStarter::__set__overrideStrobeFilterSettingsToAllEffects(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____overrideStrobeFilterSettingsToAllEffects = value;
}
constexpr ::UnityEngine::TextAsset*& GlobalNamespace::SimpleLevelStarter::__get__recordingTextAsset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____recordingTextAsset;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::TextAsset*> const& GlobalNamespace::SimpleLevelStarter::__get__recordingTextAsset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____recordingTextAsset;
}
constexpr void GlobalNamespace::SimpleLevelStarter::__set__recordingTextAsset(::UnityEngine::TextAsset* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____recordingTextAsset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Component*, ::Array<::UnityEngine::Component*>*>& GlobalNamespace::SimpleLevelStarter::__get__prefabBindings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prefabBindings;
}
constexpr ::ArrayW<::UnityEngine::Component*, ::Array<::UnityEngine::Component*>*> const& GlobalNamespace::SimpleLevelStarter::__get__prefabBindings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prefabBindings;
}
constexpr void GlobalNamespace::SimpleLevelStarter::__set__prefabBindings(::ArrayW<::UnityEngine::Component*, ::Array<::UnityEngine::Component*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____prefabBindings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::SimpleLevelStarter::__get__forceOverrideEnvironment() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____forceOverrideEnvironment;
}
constexpr bool const& GlobalNamespace::SimpleLevelStarter::__get__forceOverrideEnvironment() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____forceOverrideEnvironment;
}
constexpr void GlobalNamespace::SimpleLevelStarter::__set__forceOverrideEnvironment(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____forceOverrideEnvironment = value;
}
constexpr ::UnityEngine::UI::Button*& GlobalNamespace::SimpleLevelStarter::__get__button() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____button;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& GlobalNamespace::SimpleLevelStarter::__get__button() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____button;
}
constexpr void GlobalNamespace::SimpleLevelStarter::__set__button(::UnityEngine::UI::Button* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____button)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MenuTransitionsHelper*& GlobalNamespace::SimpleLevelStarter::__get__menuTransitionsHelper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____menuTransitionsHelper;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MenuTransitionsHelper*> const& GlobalNamespace::SimpleLevelStarter::__get__menuTransitionsHelper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____menuTransitionsHelper;
}
constexpr void GlobalNamespace::SimpleLevelStarter::__set__menuTransitionsHelper(::GlobalNamespace::MenuTransitionsHelper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____menuTransitionsHelper)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::GameScenesManager*& GlobalNamespace::SimpleLevelStarter::__get__gameScenesManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameScenesManager;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameScenesManager*> const& GlobalNamespace::SimpleLevelStarter::__get__gameScenesManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameScenesManager;
}
constexpr void GlobalNamespace::SimpleLevelStarter::__set__gameScenesManager(::GlobalNamespace::GameScenesManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____gameScenesManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::PlayerDataModel*& GlobalNamespace::SimpleLevelStarter::__get__playerDataModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataModel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerDataModel*> const& GlobalNamespace::SimpleLevelStarter::__get__playerDataModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataModel;
}
constexpr void GlobalNamespace::SimpleLevelStarter::__set__playerDataModel(::GlobalNamespace::PlayerDataModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playerDataModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HMUI::ButtonBinder*& GlobalNamespace::SimpleLevelStarter::__get__buttonBinder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buttonBinder;
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::ButtonBinder*> const& GlobalNamespace::SimpleLevelStarter::__get__buttonBinder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buttonBinder;
}
constexpr void GlobalNamespace::SimpleLevelStarter::__set__buttonBinder(::HMUI::ButtonBinder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____buttonBinder)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::GameplayModifiers*& GlobalNamespace::SimpleLevelStarter::__get__gameplayModifiers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayModifiers;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayModifiers*> const& GlobalNamespace::SimpleLevelStarter::__get__gameplayModifiers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayModifiers;
}
constexpr void GlobalNamespace::SimpleLevelStarter::__set__gameplayModifiers(::GlobalNamespace::GameplayModifiers* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____gameplayModifiers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::SimpleLevelStarter::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SimpleLevelStarter*>::get(), "Awake",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SimpleLevelStarter::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SimpleLevelStarter*>::get(), "OnDestroy",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SimpleLevelStarter::StartLevel() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SimpleLevelStarter*>::get(), "StartLevel",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SimpleLevelStarter::InstallEarlyBindings(::GlobalNamespace::ScenesTransitionSetupDataSO* scenesTransitionSetupData, ::Zenject::DiContainer* container) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SimpleLevelStarter*>::get(), "InstallEarlyBindings", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ScenesTransitionSetupDataSO*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, scenesTransitionSetupData, container);
}
inline void GlobalNamespace::SimpleLevelStarter::ButtonPressed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SimpleLevelStarter*>::get(), "ButtonPressed",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SimpleLevelStarter::HandleLevelDidFinish(::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* standardLevelSceneSetupData,
                                                                      ::GlobalNamespace::LevelCompletionResults* levelCompletionResults) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SimpleLevelStarter*>::get(), "HandleLevelDidFinish", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelCompletionResults*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, standardLevelSceneSetupData, levelCompletionResults);
}
inline ::GlobalNamespace::SimpleLevelStarter* GlobalNamespace::SimpleLevelStarter::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::SimpleLevelStarter*>());
}
inline void GlobalNamespace::SimpleLevelStarter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SimpleLevelStarter*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SimpleLevelStarter::_StartLevel_g__AfterSceneSwitchCallback_16_0(::Zenject::DiContainer* container) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SimpleLevelStarter*>::get(), "<StartLevel>g__AfterSceneSwitchCallback|16_0",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, container);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SimpleLevelStarter::SimpleLevelStarter() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif

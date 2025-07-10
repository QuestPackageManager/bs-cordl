#pragma once
// IWYU pragma private; include "GlobalNamespace/RecordingToolManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__RecordingToolManager_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicCollection_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentsListModel_def.hpp"
#include "GlobalNamespace/zzzz__LevelCompletionResults_def.hpp"
#include "GlobalNamespace/zzzz__MenuTransitionsHelper_def.hpp"
#include "GlobalNamespace/zzzz__PlayerDataModel_def.hpp"
#include "GlobalNamespace/zzzz__RecordingToolConfigurationProcessor_def.hpp"
#include "GlobalNamespace/zzzz__RecordingToolManager_def.hpp"
#include "GlobalNamespace/zzzz__RecordingToolSettings_def.hpp"
#include "GlobalNamespace/zzzz__StandardLevelScenesTransitionSetupDataSO_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
// Ctor Parameters [CppParam { name: "profileSong", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "runAutopilot", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::RecordingToolManager_SetupData::RecordingToolManager_SetupData(bool profileSong, bool runAutopilot) noexcept {
  this->profileSong = profileSong;
  this->runAutopilot = runAutopilot;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RecordingToolManager_SetupData::RecordingToolManager_SetupData() {}
//  Writing Method size for method: ::GlobalNamespace::RecordingToolManager.get_showRecordingToolScene
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::RecordingToolManager::*)()>(
    &::GlobalNamespace::RecordingToolManager::get_showRecordingToolScene)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3b2b150;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolManager*>::get(),
                                                                               "get_showRecordingToolScene", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RecordingToolManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RecordingToolManager::*)(
    ::GlobalNamespace::RecordingToolConfigurationProcessor*, ::GlobalNamespace::BeatmapCharacteristicCollection*, ::Zenject::DiContainer*, ::GlobalNamespace::MenuTransitionsHelper*,
    ::GlobalNamespace::EnvironmentsListModel*, ::GlobalNamespace::PlayerDataModel*)>(&::GlobalNamespace::RecordingToolManager::_ctor)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x3b2b164;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolManager*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RecordingToolConfigurationProcessor*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicCollection*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MenuTransitionsHelper*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentsListModel*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerDataModel*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RecordingToolManager.Run
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RecordingToolManager::*)()>(&::GlobalNamespace::RecordingToolManager::Run)> {
  constexpr static std::size_t size = 0x534;
  constexpr static std::size_t addrs = 0x3b2b27c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolManager*>::get(), "Run",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RecordingToolManager._Run_b__15_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RecordingToolManager::*)(
    ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*, ::GlobalNamespace::LevelCompletionResults*)>(&::GlobalNamespace::RecordingToolManager::_Run_b__15_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3b2b7b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolManager*>::get(), "<Run>b__15_0", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelCompletionResults*>::get() })));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::RecordingToolManager::__cordl_internal_get_recordingToolEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___recordingToolEnabled;
}
constexpr bool const& GlobalNamespace::RecordingToolManager::__cordl_internal_get_recordingToolEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___recordingToolEnabled;
}
constexpr void GlobalNamespace::RecordingToolManager::__cordl_internal_set_recordingToolEnabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___recordingToolEnabled = value;
}
constexpr bool& GlobalNamespace::RecordingToolManager::__cordl_internal_get_performanceRecordingEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___performanceRecordingEnabled;
}
constexpr bool const& GlobalNamespace::RecordingToolManager::__cordl_internal_get_performanceRecordingEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___performanceRecordingEnabled;
}
constexpr void GlobalNamespace::RecordingToolManager::__cordl_internal_set_performanceRecordingEnabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___performanceRecordingEnabled = value;
}
constexpr ::StringW& GlobalNamespace::RecordingToolManager::__cordl_internal_get_configJsonData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___configJsonData;
}
constexpr ::StringW const& GlobalNamespace::RecordingToolManager::__cordl_internal_get_configJsonData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___configJsonData;
}
constexpr void GlobalNamespace::RecordingToolManager::__cordl_internal_set_configJsonData(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___configJsonData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::RecordingToolSettings*& GlobalNamespace::RecordingToolManager::__cordl_internal_get_recordingToolSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___recordingToolSettings;
}
constexpr ::GlobalNamespace::RecordingToolSettings* const& GlobalNamespace::RecordingToolManager::__cordl_internal_get_recordingToolSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___recordingToolSettings;
}
constexpr void GlobalNamespace::RecordingToolManager::__cordl_internal_set_recordingToolSettings(::GlobalNamespace::RecordingToolSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___recordingToolSettings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Zenject::DiContainer*& GlobalNamespace::RecordingToolManager::__cordl_internal_get__container() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
constexpr ::Zenject::DiContainer* const& GlobalNamespace::RecordingToolManager::__cordl_internal_get__container() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
constexpr void GlobalNamespace::RecordingToolManager::__cordl_internal_set__container(::Zenject::DiContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____container)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::RecordingToolConfigurationProcessor*& GlobalNamespace::RecordingToolManager::__cordl_internal_get__configurationProcessor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____configurationProcessor;
}
constexpr ::GlobalNamespace::RecordingToolConfigurationProcessor* const& GlobalNamespace::RecordingToolManager::__cordl_internal_get__configurationProcessor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____configurationProcessor;
}
constexpr void GlobalNamespace::RecordingToolManager::__cordl_internal_set__configurationProcessor(::GlobalNamespace::RecordingToolConfigurationProcessor* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____configurationProcessor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::MenuTransitionsHelper>& GlobalNamespace::RecordingToolManager::__cordl_internal_get__menuTransitionsHelper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____menuTransitionsHelper;
}
constexpr ::UnityW<::GlobalNamespace::MenuTransitionsHelper> const& GlobalNamespace::RecordingToolManager::__cordl_internal_get__menuTransitionsHelper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____menuTransitionsHelper;
}
constexpr void GlobalNamespace::RecordingToolManager::__cordl_internal_set__menuTransitionsHelper(::UnityW<::GlobalNamespace::MenuTransitionsHelper> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____menuTransitionsHelper)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::EnvironmentsListModel*& GlobalNamespace::RecordingToolManager::__cordl_internal_get__environmentsListModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentsListModel;
}
constexpr ::GlobalNamespace::EnvironmentsListModel* const& GlobalNamespace::RecordingToolManager::__cordl_internal_get__environmentsListModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentsListModel;
}
constexpr void GlobalNamespace::RecordingToolManager::__cordl_internal_set__environmentsListModel(::GlobalNamespace::EnvironmentsListModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____environmentsListModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::PlayerDataModel>& GlobalNamespace::RecordingToolManager::__cordl_internal_get__playerDataModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataModel;
}
constexpr ::UnityW<::GlobalNamespace::PlayerDataModel> const& GlobalNamespace::RecordingToolManager::__cordl_internal_get__playerDataModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataModel;
}
constexpr void GlobalNamespace::RecordingToolManager::__cordl_internal_set__playerDataModel(::UnityW<::GlobalNamespace::PlayerDataModel> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playerDataModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::RecordingToolManager::__cordl_internal_get__currentRecordingIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentRecordingIndex;
}
constexpr int32_t const& GlobalNamespace::RecordingToolManager::__cordl_internal_get__currentRecordingIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentRecordingIndex;
}
constexpr void GlobalNamespace::RecordingToolManager::__cordl_internal_set__currentRecordingIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentRecordingIndex = value;
}
inline bool GlobalNamespace::RecordingToolManager::get_showRecordingToolScene() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolManager*>::get(),
                                                                             "get_showRecordingToolScene", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::RecordingToolManager::_ctor(::GlobalNamespace::RecordingToolConfigurationProcessor* processor,
                                                         ::GlobalNamespace::BeatmapCharacteristicCollection* beatmapCharacteristicCollection, ::Zenject::DiContainer* diContainer,
                                                         ::GlobalNamespace::MenuTransitionsHelper* menuTransitionsHelper, ::GlobalNamespace::EnvironmentsListModel* environmentsListModel,
                                                         ::GlobalNamespace::PlayerDataModel* playerDataModel) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolManager*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RecordingToolConfigurationProcessor*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicCollection*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MenuTransitionsHelper*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentsListModel*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerDataModel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, processor, beatmapCharacteristicCollection, diContainer, menuTransitionsHelper, environmentsListModel,
                                                          playerDataModel);
}
inline void GlobalNamespace::RecordingToolManager::Run() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolManager*>::get(), "Run",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::RecordingToolManager::_Run_b__15_0(::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* StandardLevelScenesTransitionSetupDataSO,
                                                                ::GlobalNamespace::LevelCompletionResults* LevelCompletionResults) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolManager*>::get(), "<Run>b__15_0", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelCompletionResults*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, StandardLevelScenesTransitionSetupDataSO, LevelCompletionResults);
}
inline ::GlobalNamespace::RecordingToolManager* GlobalNamespace::RecordingToolManager::New_ctor(::GlobalNamespace::RecordingToolConfigurationProcessor* processor,
                                                                                                ::GlobalNamespace::BeatmapCharacteristicCollection* beatmapCharacteristicCollection,
                                                                                                ::Zenject::DiContainer* diContainer, ::GlobalNamespace::MenuTransitionsHelper* menuTransitionsHelper,
                                                                                                ::GlobalNamespace::EnvironmentsListModel* environmentsListModel,
                                                                                                ::GlobalNamespace::PlayerDataModel* playerDataModel) {
  return THROW_UNLESS(
      ::il2cpp_utils::NewSpecific<::GlobalNamespace::RecordingToolManager*>(processor, beatmapCharacteristicCollection, diContainer, menuTransitionsHelper, environmentsListModel, playerDataModel));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RecordingToolManager::RecordingToolManager() {}

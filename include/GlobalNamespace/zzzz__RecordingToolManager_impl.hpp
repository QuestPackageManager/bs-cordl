#pragma once
// IWYU pragma private; include "GlobalNamespace\RecordingToolManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__RecordingToolManager_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentsListModel_def.hpp"
#include "GlobalNamespace/zzzz__LevelCompletionResults_def.hpp"
#include "GlobalNamespace/zzzz__MenuTransitionsHelper_def.hpp"
#include "GlobalNamespace/zzzz__PlayerDataModel_def.hpp"
#include "GlobalNamespace/zzzz__RecordingSettings_def.hpp"
#include "GlobalNamespace/zzzz__RecordingToolConfigurationProcessor_def.hpp"
#include "GlobalNamespace/zzzz__RecordingToolSettings_def.hpp"
#include "GlobalNamespace/zzzz__StandardLevelScenesTransitionSetupData_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RecordingToolManager.get_showRecordingToolScene
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::RecordingToolManager::*)()>(&::GlobalNamespace::RecordingToolManager::get_showRecordingToolScene)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x58fde98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RecordingToolManager*>(), { "get_showRecordingToolScene", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RecordingToolManager._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::GlobalNamespace::RecordingToolManager::*)(::GlobalNamespace::RecordingToolConfigurationProcessor*, ::Zenject::DiContainer*, ::GlobalNamespace::MenuTransitionsHelper*,
                                                                  ::GlobalNamespace::EnvironmentsListModel*, ::GlobalNamespace::PlayerDataModel*)>(&::GlobalNamespace::RecordingToolManager::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x58fdeac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RecordingToolManager*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::GlobalNamespace::RecordingToolConfigurationProcessor*>(), ::i2c::type_of<::Zenject::DiContainer*>(),
                                                                 ::i2c::type_of<::GlobalNamespace::MenuTransitionsHelper*>(), ::i2c::type_of<::GlobalNamespace::EnvironmentsListModel*>(),
                                                                 ::i2c::type_of<::GlobalNamespace::PlayerDataModel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RecordingToolManager.Run
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RecordingToolManager::*)()>(&::GlobalNamespace::RecordingToolManager::Run)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x58fdec8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RecordingToolManager*>(), { "Run", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RecordingToolManager.SetupNextSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::RecordingSettings* (::GlobalNamespace::RecordingToolManager::*)()>(
    &::GlobalNamespace::RecordingToolManager::SetupNextSettings)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x58fe1a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RecordingToolManager*>(), { "SetupNextSettings", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RecordingToolManager._Run_b__14_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RecordingToolManager::*)(
    ::GlobalNamespace::StandardLevelScenesTransitionSetupData*, ::GlobalNamespace::LevelCompletionResults*)>(&::GlobalNamespace::RecordingToolManager::_Run_b__14_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58fe508;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RecordingToolManager*>(),
                            { "<Run>b__14_0", {}, { ::i2c::type_of<::GlobalNamespace::StandardLevelScenesTransitionSetupData*>(), ::i2c::type_of<::GlobalNamespace::LevelCompletionResults*>() } })));
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
  this->___configJsonData = value;
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
  this->___recordingToolSettings = value;
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
  this->____container = value;
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
  this->____configurationProcessor = value;
}
constexpr ::GlobalNamespace::MenuTransitionsHelper*& GlobalNamespace::RecordingToolManager::__cordl_internal_get__menuTransitionsHelper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____menuTransitionsHelper;
}
constexpr ::GlobalNamespace::MenuTransitionsHelper* const& GlobalNamespace::RecordingToolManager::__cordl_internal_get__menuTransitionsHelper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____menuTransitionsHelper;
}
constexpr void GlobalNamespace::RecordingToolManager::__cordl_internal_set__menuTransitionsHelper(::GlobalNamespace::MenuTransitionsHelper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____menuTransitionsHelper = value;
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
  this->____environmentsListModel = value;
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
  this->____playerDataModel = value;
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
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RecordingToolManager*>(), { "get_showRecordingToolScene", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::RecordingToolManager::_ctor(::GlobalNamespace::RecordingToolConfigurationProcessor* processor, ::Zenject::DiContainer* diContainer,
                                                         ::GlobalNamespace::MenuTransitionsHelper* menuTransitionsHelper, ::GlobalNamespace::EnvironmentsListModel* environmentsListModel,
                                                         ::GlobalNamespace::PlayerDataModel* playerDataModel) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RecordingToolManager*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::GlobalNamespace::RecordingToolConfigurationProcessor*>(), ::i2c::type_of<::Zenject::DiContainer*>(),
                                                               ::i2c::type_of<::GlobalNamespace::MenuTransitionsHelper*>(), ::i2c::type_of<::GlobalNamespace::EnvironmentsListModel*>(),
                                                               ::i2c::type_of<::GlobalNamespace::PlayerDataModel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, processor, diContainer, menuTransitionsHelper, environmentsListModel, playerDataModel);
}
inline void GlobalNamespace::RecordingToolManager::Run() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RecordingToolManager*>(), { "Run", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::RecordingSettings* GlobalNamespace::RecordingToolManager::SetupNextSettings() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RecordingToolManager*>(), { "SetupNextSettings", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::RecordingSettings*>(this, ___internal_method);
}
inline void GlobalNamespace::RecordingToolManager::_Run_b__14_0(::GlobalNamespace::StandardLevelScenesTransitionSetupData* StandardLevelScenesTransitionSetupData,
                                                                ::GlobalNamespace::LevelCompletionResults* LevelCompletionResults) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RecordingToolManager*>(),
                          { "<Run>b__14_0", {}, { ::i2c::type_of<::GlobalNamespace::StandardLevelScenesTransitionSetupData*>(), ::i2c::type_of<::GlobalNamespace::LevelCompletionResults*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, StandardLevelScenesTransitionSetupData, LevelCompletionResults);
}
inline ::GlobalNamespace::RecordingToolManager* GlobalNamespace::RecordingToolManager::New_ctor(::GlobalNamespace::RecordingToolConfigurationProcessor* processor, ::Zenject::DiContainer* diContainer,
                                                                                                ::GlobalNamespace::MenuTransitionsHelper* menuTransitionsHelper,
                                                                                                ::GlobalNamespace::EnvironmentsListModel* environmentsListModel,
                                                                                                ::GlobalNamespace::PlayerDataModel* playerDataModel) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RecordingToolManager*>(processor, diContainer, menuTransitionsHelper, environmentsListModel, playerDataModel));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RecordingToolManager::RecordingToolManager() {}

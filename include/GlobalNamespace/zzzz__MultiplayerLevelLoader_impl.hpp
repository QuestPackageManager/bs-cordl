#pragma once
#include "GlobalNamespace/zzzz__MultiplayerLevelLoader_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLevelLoader_def.hpp"
#include "GlobalNamespace/zzzz__ILevelGameplaySetupData_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelsModel_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLevelLoader_def.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerSessionManager_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "GlobalNamespace/zzzz__IDifficultyBeatmap_def.hpp"
#include "Zenject/zzzz__ITickable_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__MultiplayerLevelLoader__MultiplayerBeatmapLoaderState::__MultiplayerLevelLoader__MultiplayerBeatmapLoaderState(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MultiplayerLevelLoader__MultiplayerBeatmapLoaderState::__MultiplayerLevelLoader__MultiplayerBeatmapLoaderState() {}
constexpr ::GlobalNamespace::__MultiplayerLevelLoader__MultiplayerBeatmapLoaderState GlobalNamespace::__MultiplayerLevelLoader__MultiplayerBeatmapLoaderState::NotLoading{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__MultiplayerLevelLoader__MultiplayerBeatmapLoaderState GlobalNamespace::__MultiplayerLevelLoader__MultiplayerBeatmapLoaderState::LoadingBeatmap{ static_cast<int32_t>(
    0x1) };
constexpr ::GlobalNamespace::__MultiplayerLevelLoader__MultiplayerBeatmapLoaderState GlobalNamespace::__MultiplayerLevelLoader__MultiplayerBeatmapLoaderState::WaitingForCountdown{
  static_cast<int32_t>(0x2)
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLevelLoader.add_stillDownloadingSongEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLevelLoader::*)(::System::Action*)>(
    &::GlobalNamespace::MultiplayerLevelLoader::add_stillDownloadingSongEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x21617f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLevelLoader*>::get(), "add_stillDownloadingSongEvent",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLevelLoader.remove_stillDownloadingSongEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLevelLoader::*)(::System::Action*)>(
    &::GlobalNamespace::MultiplayerLevelLoader::remove_stillDownloadingSongEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2161894;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLevelLoader*>::get(), "remove_stillDownloadingSongEvent",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLevelLoader.add_countdownFinishedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLevelLoader::*)(
    ::System::Action_2<::GlobalNamespace::ILevelGameplaySetupData*, ::GlobalNamespace::IDifficultyBeatmap*>*)>(&::GlobalNamespace::MultiplayerLevelLoader::add_countdownFinishedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2161930;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLevelLoader*>::get(), "add_countdownFinishedEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::ILevelGameplaySetupData*, ::GlobalNamespace::IDifficultyBeatmap*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLevelLoader.remove_countdownFinishedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLevelLoader::*)(
    ::System::Action_2<::GlobalNamespace::ILevelGameplaySetupData*, ::GlobalNamespace::IDifficultyBeatmap*>*)>(&::GlobalNamespace::MultiplayerLevelLoader::remove_countdownFinishedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x21619e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLevelLoader*>::get(), "remove_countdownFinishedEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::ILevelGameplaySetupData*, ::GlobalNamespace::IDifficultyBeatmap*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLevelLoader.LoadLevel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLevelLoader::*)(::GlobalNamespace::ILevelGameplaySetupData*, float_t)>(
    &::GlobalNamespace::MultiplayerLevelLoader::LoadLevel)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x2161a90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLevelLoader*>::get(), "LoadLevel", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ILevelGameplaySetupData*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLevelLoader.SetNewStartTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLevelLoader::*)(float_t)>(
    &::GlobalNamespace::MultiplayerLevelLoader::SetNewStartTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2161c38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLevelLoader*>::get(), "SetNewStartTime",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLevelLoader.ClearLoading
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLevelLoader::*)()>(&::GlobalNamespace::MultiplayerLevelLoader::ClearLoading)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2161c40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLevelLoader*>::get(),
                                                                               "ClearLoading", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLevelLoader.Tick
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLevelLoader::*)()>(&::GlobalNamespace::MultiplayerLevelLoader::Tick)> {
  constexpr static std::size_t size = 0x2ec;
  constexpr static std::size_t addrs = 0x2161c74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLevelLoader*>::get(), "Tick",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLevelLoader._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLevelLoader::*)()>(&::GlobalNamespace::MultiplayerLevelLoader::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2161f60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLevelLoader*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Zenject::ITickable"
constexpr GlobalNamespace::MultiplayerLevelLoader::operator ::Zenject::ITickable*() noexcept {
  return static_cast<::Zenject::ITickable*>(static_cast<void*>(this));
}
constexpr ::GlobalNamespace::IMultiplayerSessionManager*& GlobalNamespace::MultiplayerLevelLoader::__get__multiplayerSessionManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerSessionManager;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMultiplayerSessionManager*> const& GlobalNamespace::MultiplayerLevelLoader::__get__multiplayerSessionManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerSessionManager;
}
constexpr void GlobalNamespace::MultiplayerLevelLoader::__set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____multiplayerSessionManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapLevelsModel*& GlobalNamespace::MultiplayerLevelLoader::__get__beatmapLevelsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelsModel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelsModel*> const& GlobalNamespace::MultiplayerLevelLoader::__get__beatmapLevelsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelsModel;
}
constexpr void GlobalNamespace::MultiplayerLevelLoader::__set__beatmapLevelsModel(::GlobalNamespace::BeatmapLevelsModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapLevelsModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& GlobalNamespace::MultiplayerLevelLoader::__get_stillDownloadingSongEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stillDownloadingSongEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& GlobalNamespace::MultiplayerLevelLoader::__get_stillDownloadingSongEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stillDownloadingSongEvent;
}
constexpr void GlobalNamespace::MultiplayerLevelLoader::__set_stillDownloadingSongEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___stillDownloadingSongEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_2<::GlobalNamespace::ILevelGameplaySetupData*, ::GlobalNamespace::IDifficultyBeatmap*>*& GlobalNamespace::MultiplayerLevelLoader::__get_countdownFinishedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___countdownFinishedEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::ILevelGameplaySetupData*, ::GlobalNamespace::IDifficultyBeatmap*>*> const&
GlobalNamespace::MultiplayerLevelLoader::__get_countdownFinishedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___countdownFinishedEvent;
}
constexpr void GlobalNamespace::MultiplayerLevelLoader::__set_countdownFinishedEvent(::System::Action_2<::GlobalNamespace::ILevelGameplaySetupData*, ::GlobalNamespace::IDifficultyBeatmap*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___countdownFinishedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__MultiplayerLevelLoader__MultiplayerBeatmapLoaderState& GlobalNamespace::MultiplayerLevelLoader::__get__loaderState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loaderState;
}
constexpr ::GlobalNamespace::__MultiplayerLevelLoader__MultiplayerBeatmapLoaderState const& GlobalNamespace::MultiplayerLevelLoader::__get__loaderState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loaderState;
}
constexpr void GlobalNamespace::MultiplayerLevelLoader::__set__loaderState(::GlobalNamespace::__MultiplayerLevelLoader__MultiplayerBeatmapLoaderState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____loaderState = value;
}
constexpr ::System::Threading::CancellationTokenSource*& GlobalNamespace::MultiplayerLevelLoader::__get__getBeatmapCancellationTokenSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____getBeatmapCancellationTokenSource;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::CancellationTokenSource*> const& GlobalNamespace::MultiplayerLevelLoader::__get__getBeatmapCancellationTokenSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____getBeatmapCancellationTokenSource;
}
constexpr void GlobalNamespace::MultiplayerLevelLoader::__set__getBeatmapCancellationTokenSource(::System::Threading::CancellationTokenSource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____getBeatmapCancellationTokenSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>*& GlobalNamespace::MultiplayerLevelLoader::__get__getBeatmapLevelResultTask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____getBeatmapLevelResultTask;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>*> const&
GlobalNamespace::MultiplayerLevelLoader::__get__getBeatmapLevelResultTask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____getBeatmapLevelResultTask;
}
constexpr void GlobalNamespace::MultiplayerLevelLoader::__set__getBeatmapLevelResultTask(::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____getBeatmapLevelResultTask)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::ILevelGameplaySetupData*& GlobalNamespace::MultiplayerLevelLoader::__get__gameplaySetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplaySetupData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ILevelGameplaySetupData*> const& GlobalNamespace::MultiplayerLevelLoader::__get__gameplaySetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplaySetupData;
}
constexpr void GlobalNamespace::MultiplayerLevelLoader::__set__gameplaySetupData(::GlobalNamespace::ILevelGameplaySetupData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____gameplaySetupData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IDifficultyBeatmap*& GlobalNamespace::MultiplayerLevelLoader::__get__difficultyBeatmap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____difficultyBeatmap;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IDifficultyBeatmap*> const& GlobalNamespace::MultiplayerLevelLoader::__get__difficultyBeatmap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____difficultyBeatmap;
}
constexpr void GlobalNamespace::MultiplayerLevelLoader::__set__difficultyBeatmap(::GlobalNamespace::IDifficultyBeatmap* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____difficultyBeatmap)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::MultiplayerLevelLoader::__get__startTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startTime;
}
constexpr float_t const& GlobalNamespace::MultiplayerLevelLoader::__get__startTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startTime;
}
constexpr void GlobalNamespace::MultiplayerLevelLoader::__set__startTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____startTime = value;
}
constexpr bool& GlobalNamespace::MultiplayerLevelLoader::__get__stillDownloadingCalled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stillDownloadingCalled;
}
constexpr bool const& GlobalNamespace::MultiplayerLevelLoader::__get__stillDownloadingCalled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stillDownloadingCalled;
}
constexpr void GlobalNamespace::MultiplayerLevelLoader::__set__stillDownloadingCalled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____stillDownloadingCalled = value;
}
inline void GlobalNamespace::MultiplayerLevelLoader::add_stillDownloadingSongEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLevelLoader*>::get(), "add_stillDownloadingSongEvent",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerLevelLoader::remove_stillDownloadingSongEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLevelLoader*>::get(), "remove_stillDownloadingSongEvent",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerLevelLoader::add_countdownFinishedEvent(::System::Action_2<::GlobalNamespace::ILevelGameplaySetupData*, ::GlobalNamespace::IDifficultyBeatmap*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLevelLoader*>::get(), "add_countdownFinishedEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::ILevelGameplaySetupData*, ::GlobalNamespace::IDifficultyBeatmap*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerLevelLoader::remove_countdownFinishedEvent(::System::Action_2<::GlobalNamespace::ILevelGameplaySetupData*, ::GlobalNamespace::IDifficultyBeatmap*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLevelLoader*>::get(), "remove_countdownFinishedEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::ILevelGameplaySetupData*, ::GlobalNamespace::IDifficultyBeatmap*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerLevelLoader::LoadLevel(::GlobalNamespace::ILevelGameplaySetupData* gameplaySetupData, float_t initialStartTime) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLevelLoader*>::get(), "LoadLevel", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ILevelGameplaySetupData*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, gameplaySetupData, initialStartTime);
}
inline void GlobalNamespace::MultiplayerLevelLoader::SetNewStartTime(float_t newStartTime) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLevelLoader*>::get(), "SetNewStartTime",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newStartTime);
}
inline void GlobalNamespace::MultiplayerLevelLoader::ClearLoading() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLevelLoader*>::get(), "ClearLoading",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLevelLoader::Tick() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLevelLoader*>::get(), "Tick",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerLevelLoader* GlobalNamespace::MultiplayerLevelLoader::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MultiplayerLevelLoader*>());
}
inline void GlobalNamespace::MultiplayerLevelLoader::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLevelLoader*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerLevelLoader::MultiplayerLevelLoader() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif

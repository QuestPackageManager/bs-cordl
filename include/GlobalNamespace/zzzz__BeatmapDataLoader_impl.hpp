#pragma once
// IWYU pragma private; include "GlobalNamespace\BeatmapDataLoader.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelDataVersion_impl.hpp"
#include "GlobalNamespace/zzzz__LoadBeatmapLevelDataResult_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataLoader_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataBasicInfo_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataCache_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataLoader_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelDataVersion_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelsEntitlementModel_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelsModel_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentInfoSO_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevelData_def.hpp"
#include "GlobalNamespace/zzzz__IEnvironmentInfo_def.hpp"
#include "GlobalNamespace/zzzz__IReadonlyBeatmapData_def.hpp"
#include "GlobalNamespace/zzzz__IRefractorDebuggerSettings_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSpecificSettings_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Version_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataLoader___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapDataLoader___c::*)()>(&::GlobalNamespace::BeatmapDataLoader___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x37120a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataLoader___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataLoader___c._CreateOrGetTransformedBeatmapDataAsync_b__10_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapDataLoader___c::*)(::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData*>*)>(
    &::GlobalNamespace::BeatmapDataLoader___c::_CreateOrGetTransformedBeatmapDataAsync_b__10_0)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x37120a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataLoader___c*>(),
                            { "<CreateOrGetTransformedBeatmapDataAsync>b__10_0", {}, { ::i2c::type_of<::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData*>*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BeatmapDataLoader___c::setStaticF___9(::GlobalNamespace::BeatmapDataLoader___c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::BeatmapDataLoader___c*, "<>9", ::GlobalNamespace::BeatmapDataLoader___c*>(std::forward<::GlobalNamespace::BeatmapDataLoader___c*>(value));
}
inline ::GlobalNamespace::BeatmapDataLoader___c* GlobalNamespace::BeatmapDataLoader___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::BeatmapDataLoader___c*, "<>9", ::GlobalNamespace::BeatmapDataLoader___c*>();
}
inline void GlobalNamespace::BeatmapDataLoader___c::setStaticF___9__10_0(::System::Action_1<::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData*>*>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData*>*>*, "<>9__10_0", ::GlobalNamespace::BeatmapDataLoader___c*>(
      std::forward<::System::Action_1<::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData*>*>*>(value));
}
inline ::System::Action_1<::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData*>*>* GlobalNamespace::BeatmapDataLoader___c::getStaticF___9__10_0() {
  return ::cordl_internals::getStaticField<::System::Action_1<::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData*>*>*, "<>9__10_0",
                                           ::GlobalNamespace::BeatmapDataLoader___c*>();
}
inline void GlobalNamespace::BeatmapDataLoader___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataLoader___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapDataLoader___c::_CreateOrGetTransformedBeatmapDataAsync_b__10_0(::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData*>* t) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataLoader___c*>(),
                          { "<CreateOrGetTransformedBeatmapDataAsync>b__10_0", {}, { ::i2c::type_of<::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, t);
}
inline ::GlobalNamespace::BeatmapDataLoader___c* GlobalNamespace::BeatmapDataLoader___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatmapDataLoader___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapDataLoader___c::BeatmapDataLoader___c() {}
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataLoader__CreateOrGetTransformedBeatmapDataAsync_d__10.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapDataLoader__CreateOrGetTransformedBeatmapDataAsync_d__10::*)()>(
    &::GlobalNamespace::BeatmapDataLoader__CreateOrGetTransformedBeatmapDataAsync_d__10::MoveNext)> {
  constexpr static std::size_t size = 0x8ec;
  constexpr static std::size_t addrs = 0x37120cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataLoader__CreateOrGetTransformedBeatmapDataAsync_d__10>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataLoader__CreateOrGetTransformedBeatmapDataAsync_d__10.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapDataLoader__CreateOrGetTransformedBeatmapDataAsync_d__10::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::BeatmapDataLoader__CreateOrGetTransformedBeatmapDataAsync_d__10::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x3712a78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataLoader__CreateOrGetTransformedBeatmapDataAsync_d__10>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BeatmapDataLoader__CreateOrGetTransformedBeatmapDataAsync_d__10::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataLoader__CreateOrGetTransformedBeatmapDataAsync_d__10>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::BeatmapDataLoader__CreateOrGetTransformedBeatmapDataAsync_d__10::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataLoader__CreateOrGetTransformedBeatmapDataAsync_d__10>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::BeatmapDataLoader__CreateOrGetTransformedBeatmapDataAsync_d__10::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::BeatmapDataLoader__CreateOrGetTransformedBeatmapDataAsync_d__10::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "beatmapLevelDataVersion", ty:
// "::System::Nullable_1<::GlobalNamespace::BeatmapLevelDataVersion>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::BeatmapDataLoader*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "preloadedBeatmapLevelData", ty: "::GlobalNamespace::IBeatmapLevelData*", modifiers: "", def_value: Some("{}") }, CppParam { name: "beatmapKey", ty:
// "::GlobalNamespace::BeatmapKey", modifiers: "", def_value: Some("{}") }, CppParam { name: "useCache", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "beatmapLevel", ty:
// "::GlobalNamespace::BeatmapLevel*", modifiers: "", def_value: Some("{}") }, CppParam { name: "gameplayModifiers", ty: "::GlobalNamespace::GameplayModifiers*", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "playerSpecificSettings", ty: "::GlobalNamespace::PlayerSpecificSettings*", modifiers: "", def_value: Some("{}") }, CppParam { name: "targetEnvironmentInfo", ty:
// "::UnityW<::GlobalNamespace::EnvironmentInfoSO>", modifiers: "", def_value: Some("{}") }, CppParam { name: "originalEnvironmentInfo", ty: "::UnityW<::GlobalNamespace::EnvironmentInfoSO>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "screenDisplacementEffects", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapLevelDataVersion>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IReadonlyBeatmapData*>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::BeatmapDataLoader__CreateOrGetTransformedBeatmapDataAsync_d__10::BeatmapDataLoader__CreateOrGetTransformedBeatmapDataAsync_d__10(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData*> __t__builder,
    ::System::Nullable_1<::GlobalNamespace::BeatmapLevelDataVersion> beatmapLevelDataVersion, ::GlobalNamespace::BeatmapDataLoader* __4__this,
    ::GlobalNamespace::IBeatmapLevelData* preloadedBeatmapLevelData, ::GlobalNamespace::BeatmapKey beatmapKey, bool useCache, ::GlobalNamespace::BeatmapLevel* beatmapLevel,
    ::GlobalNamespace::GameplayModifiers* gameplayModifiers, ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, ::UnityW<::GlobalNamespace::EnvironmentInfoSO> targetEnvironmentInfo,
    ::UnityW<::GlobalNamespace::EnvironmentInfoSO> originalEnvironmentInfo, bool screenDisplacementEffects,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapLevelDataVersion> __u__1,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IReadonlyBeatmapData*> __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->beatmapLevelDataVersion = beatmapLevelDataVersion;
  this->__4__this = __4__this;
  this->preloadedBeatmapLevelData = preloadedBeatmapLevelData;
  this->beatmapKey = beatmapKey;
  this->useCache = useCache;
  this->beatmapLevel = beatmapLevel;
  this->gameplayModifiers = gameplayModifiers;
  this->playerSpecificSettings = playerSpecificSettings;
  this->targetEnvironmentInfo = targetEnvironmentInfo;
  this->originalEnvironmentInfo = originalEnvironmentInfo;
  this->screenDisplacementEffects = screenDisplacementEffects;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapDataLoader__CreateOrGetTransformedBeatmapDataAsync_d__10::BeatmapDataLoader__CreateOrGetTransformedBeatmapDataAsync_d__10() {}
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataLoader__LoadAndTransformAsync_d__13.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapDataLoader__LoadAndTransformAsync_d__13::*)()>(
    &::GlobalNamespace::BeatmapDataLoader__LoadAndTransformAsync_d__13::MoveNext)> {
  constexpr static std::size_t size = 0x738;
  constexpr static std::size_t addrs = 0x3712af8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataLoader__LoadAndTransformAsync_d__13>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataLoader__LoadAndTransformAsync_d__13.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapDataLoader__LoadAndTransformAsync_d__13::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::GlobalNamespace::BeatmapDataLoader__LoadAndTransformAsync_d__13::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x37133c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataLoader__LoadAndTransformAsync_d__13>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BeatmapDataLoader__LoadAndTransformAsync_d__13::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataLoader__LoadAndTransformAsync_d__13>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::BeatmapDataLoader__LoadAndTransformAsync_d__13::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataLoader__LoadAndTransformAsync_d__13>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::BeatmapDataLoader__LoadAndTransformAsync_d__13::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::BeatmapDataLoader__LoadAndTransformAsync_d__13::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "preloadedBeatmapLevelData", ty:
// "::GlobalNamespace::IBeatmapLevelData*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::BeatmapDataLoader*", modifiers: "", def_value: Some("{}") },
// CppParam { name: "beatmapKey", ty: "::GlobalNamespace::BeatmapKey", modifiers: "", def_value: Some("{}") }, CppParam { name: "version", ty: "::GlobalNamespace::BeatmapLevelDataVersion", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "beatmapLevel", ty: "::GlobalNamespace::BeatmapLevel*", modifiers: "", def_value: Some("{}") }, CppParam { name: "targetEnvironmentInfo", ty:
// "::UnityW<::GlobalNamespace::EnvironmentInfoSO>", modifiers: "", def_value: Some("{}") }, CppParam { name: "originalEnvironmentInfo", ty: "::UnityW<::GlobalNamespace::EnvironmentInfoSO>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "gameplayModifiers", ty: "::GlobalNamespace::GameplayModifiers*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "playerSpecificSettings", ty: "::GlobalNamespace::PlayerSpecificSettings*", modifiers: "", def_value: Some("{}") }, CppParam { name: "screenDisplacementEffects", ty: "bool", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::LoadBeatmapLevelDataResult>", modifiers: "", def_value: Some("{}") },
// CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IReadonlyBeatmapData*>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::BeatmapDataLoader__LoadAndTransformAsync_d__13::BeatmapDataLoader__LoadAndTransformAsync_d__13(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData*> __t__builder,
    ::GlobalNamespace::IBeatmapLevelData* preloadedBeatmapLevelData, ::GlobalNamespace::BeatmapDataLoader* __4__this, ::GlobalNamespace::BeatmapKey beatmapKey,
    ::GlobalNamespace::BeatmapLevelDataVersion version, ::GlobalNamespace::BeatmapLevel* beatmapLevel, ::UnityW<::GlobalNamespace::EnvironmentInfoSO> targetEnvironmentInfo,
    ::UnityW<::GlobalNamespace::EnvironmentInfoSO> originalEnvironmentInfo, ::GlobalNamespace::GameplayModifiers* gameplayModifiers, ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings,
    bool screenDisplacementEffects, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::LoadBeatmapLevelDataResult> __u__1,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IReadonlyBeatmapData*> __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->preloadedBeatmapLevelData = preloadedBeatmapLevelData;
  this->__4__this = __4__this;
  this->beatmapKey = beatmapKey;
  this->version = version;
  this->beatmapLevel = beatmapLevel;
  this->targetEnvironmentInfo = targetEnvironmentInfo;
  this->originalEnvironmentInfo = originalEnvironmentInfo;
  this->gameplayModifiers = gameplayModifiers;
  this->playerSpecificSettings = playerSpecificSettings;
  this->screenDisplacementEffects = screenDisplacementEffects;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapDataLoader__LoadAndTransformAsync_d__13::BeatmapDataLoader__LoadAndTransformAsync_d__13() {}
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__5.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__5::*)()>(
    &::GlobalNamespace::BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__5::MoveNext)> {
  constexpr static std::size_t size = 0x6c4;
  constexpr static std::size_t addrs = 0x3713444;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__5>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__5.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__5::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::GlobalNamespace::BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__5::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x3713b08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__5>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__5::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__5>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__5::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__5>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__5::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__5::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::BeatmapDataBasicInfo*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "beatmapLevelData", ty:
// "::GlobalNamespace::IBeatmapLevelData*", modifiers: "", def_value: Some("{}") }, CppParam { name: "beatmapKey", ty: "::GlobalNamespace::BeatmapKey", modifiers: "", def_value: Some("{}") }, CppParam
// { name: "_beatmapJson_5__2", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Version*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__3",
// ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapDataBasicInfo*>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__5::BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__5(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::BeatmapDataBasicInfo*> __t__builder, ::GlobalNamespace::IBeatmapLevelData* beatmapLevelData,
    ::GlobalNamespace::BeatmapKey beatmapKey, ::StringW _beatmapJson_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__1,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Version*> __u__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapDataBasicInfo*> __u__3) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->beatmapLevelData = beatmapLevelData;
  this->beatmapKey = beatmapKey;
  this->_beatmapJson_5__2 = _beatmapJson_5__2;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
  this->__u__3 = __u__3;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__5::BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__5() {}
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataAsync_d__8.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataAsync_d__8::*)()>(
    &::GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataAsync_d__8::MoveNext)> {
  constexpr static std::size_t size = 0xc34;
  constexpr static std::size_t addrs = 0x3713b88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataAsync_d__8>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataAsync_d__8.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataAsync_d__8::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataAsync_d__8::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x37148f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataAsync_d__8>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataAsync_d__8::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataAsync_d__8>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataAsync_d__8::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataAsync_d__8>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataAsync_d__8::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataAsync_d__8::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "playerSpecificSettings", ty:
// "::GlobalNamespace::PlayerSpecificSettings*", modifiers: "", def_value: Some("{}") }, CppParam { name: "beatmapKey", ty: "::GlobalNamespace::BeatmapKey", modifiers: "", def_value: Some("{}") },
// CppParam { name: "targetEnvironmentInfo", ty: "::GlobalNamespace::IEnvironmentInfo*", modifiers: "", def_value: Some("{}") }, CppParam { name: "beatmapLevelData", ty:
// "::GlobalNamespace::IBeatmapLevelData*", modifiers: "", def_value: Some("{}") }, CppParam { name: "startBpm", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "loadingForDesignatedEnvironment", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "beatmapLevelDataVersion", ty: "::GlobalNamespace::BeatmapLevelDataVersion", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "originalEnvironmentInfo", ty: "::GlobalNamespace::IEnvironmentInfo*", modifiers: "", def_value: Some("{}") }, CppParam { name: "gameplayModifiers", ty:
// "::GlobalNamespace::GameplayModifiers*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::StringW>>", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapData*>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataAsync_d__8::BeatmapDataLoader__LoadBeatmapDataAsync_d__8(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData*> __t__builder,
    ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, ::GlobalNamespace::BeatmapKey beatmapKey, ::GlobalNamespace::IEnvironmentInfo* targetEnvironmentInfo,
    ::GlobalNamespace::IBeatmapLevelData* beatmapLevelData, float_t startBpm, bool loadingForDesignatedEnvironment, ::GlobalNamespace::BeatmapLevelDataVersion beatmapLevelDataVersion,
    ::GlobalNamespace::IEnvironmentInfo* originalEnvironmentInfo, ::GlobalNamespace::GameplayModifiers* gameplayModifiers,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::StringW>> __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapData*> __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->playerSpecificSettings = playerSpecificSettings;
  this->beatmapKey = beatmapKey;
  this->targetEnvironmentInfo = targetEnvironmentInfo;
  this->beatmapLevelData = beatmapLevelData;
  this->startBpm = startBpm;
  this->loadingForDesignatedEnvironment = loadingForDesignatedEnvironment;
  this->beatmapLevelDataVersion = beatmapLevelDataVersion;
  this->originalEnvironmentInfo = originalEnvironmentInfo;
  this->gameplayModifiers = gameplayModifiers;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataAsync_d__8::BeatmapDataLoader__LoadBeatmapDataAsync_d__8() {}
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataLoader._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapDataLoader::*)(::GlobalNamespace::BeatmapLevelsModel*, ::GlobalNamespace::BeatmapLevelsEntitlementModel*)>(
    &::GlobalNamespace::BeatmapDataLoader::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3711428;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataLoader*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevelsModel*>(), ::i2c::type_of<::GlobalNamespace::BeatmapLevelsEntitlementModel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataLoader.LoadBasicBeatmapDataAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::BeatmapDataBasicInfo*>* (
    ::GlobalNamespace::BeatmapDataLoader::*)(::GlobalNamespace::IBeatmapLevelData*, ::GlobalNamespace::BeatmapKey)>(&::GlobalNamespace::BeatmapDataLoader::LoadBasicBeatmapDataAsync)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x3711430;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataLoader*>(),
                                                { "LoadBasicBeatmapDataAsync", {}, { ::i2c::type_of<::GlobalNamespace::IBeatmapLevelData*>(), ::i2c::type_of<::GlobalNamespace::BeatmapKey>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataLoader.LoadBasicBeatmapData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapDataBasicInfo* (
    ::GlobalNamespace::BeatmapDataLoader::*)(::GlobalNamespace::IBeatmapLevelData*, ::by_ref<::GlobalNamespace::BeatmapKey>)>(&::GlobalNamespace::BeatmapDataLoader::LoadBasicBeatmapData)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x3711528;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataLoader*>(),
                                         { "LoadBasicBeatmapData", {}, { ::i2c::type_of<::GlobalNamespace::IBeatmapLevelData*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapKey>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataLoader.LoadBasicBeatmapData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapDataBasicInfo* (::GlobalNamespace::BeatmapDataLoader::*)(::StringW)>(
    &::GlobalNamespace::BeatmapDataLoader::LoadBasicBeatmapData)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x3711604;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataLoader*>(), { "LoadBasicBeatmapData", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataLoader.LoadBeatmapDataAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData*>* (
    ::GlobalNamespace::BeatmapDataLoader::*)(::GlobalNamespace::IBeatmapLevelData*, ::GlobalNamespace::BeatmapKey, float_t, bool, ::GlobalNamespace::IEnvironmentInfo*,
                                             ::GlobalNamespace::IEnvironmentInfo*, ::GlobalNamespace::BeatmapLevelDataVersion, ::GlobalNamespace::GameplayModifiers*,
                                             ::GlobalNamespace::PlayerSpecificSettings*)>(&::GlobalNamespace::BeatmapDataLoader::LoadBeatmapDataAsync)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x37116f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataLoader*>(),
                                                             { "LoadBeatmapDataAsync",
                                                               {},
                                                               { ::i2c::type_of<::GlobalNamespace::IBeatmapLevelData*>(), ::i2c::type_of<::GlobalNamespace::BeatmapKey>(), ::i2c::type_of<float_t>(),
                                                                 ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::IEnvironmentInfo*>(), ::i2c::type_of<::GlobalNamespace::IEnvironmentInfo*>(),
                                                                 ::i2c::type_of<::GlobalNamespace::BeatmapLevelDataVersion>(), ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>(),
                                                                 ::i2c::type_of<::GlobalNamespace::PlayerSpecificSettings*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataLoader.LoadBeatmapData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::IReadonlyBeatmapData* (
    ::GlobalNamespace::BeatmapDataLoader::*)(::GlobalNamespace::IBeatmapLevelData*, ::GlobalNamespace::BeatmapKey, float_t, bool, ::GlobalNamespace::IEnvironmentInfo*,
                                             ::GlobalNamespace::IEnvironmentInfo*, ::GlobalNamespace::BeatmapLevelDataVersion, ::GlobalNamespace::GameplayModifiers*,
                                             ::GlobalNamespace::PlayerSpecificSettings*)>(&::GlobalNamespace::BeatmapDataLoader::LoadBeatmapData)> {
  constexpr static std::size_t size = 0x4ac;
  constexpr static std::size_t addrs = 0x371183c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataLoader*>(),
                                                             { "LoadBeatmapData",
                                                               {},
                                                               { ::i2c::type_of<::GlobalNamespace::IBeatmapLevelData*>(), ::i2c::type_of<::GlobalNamespace::BeatmapKey>(), ::i2c::type_of<float_t>(),
                                                                 ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::IEnvironmentInfo*>(), ::i2c::type_of<::GlobalNamespace::IEnvironmentInfo*>(),
                                                                 ::i2c::type_of<::GlobalNamespace::BeatmapLevelDataVersion>(), ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>(),
                                                                 ::i2c::type_of<::GlobalNamespace::PlayerSpecificSettings*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataLoader.CreateOrGetTransformedBeatmapDataAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData*>* (
    ::GlobalNamespace::BeatmapDataLoader::*)(::GlobalNamespace::BeatmapKey, ::GlobalNamespace::BeatmapLevel*, ::GlobalNamespace::GameplayModifiers*, ::GlobalNamespace::PlayerSpecificSettings*,
                                             ::GlobalNamespace::EnvironmentInfoSO*, ::GlobalNamespace::EnvironmentInfoSO*, bool, bool, ::GlobalNamespace::IBeatmapLevelData*,
                                             ::System::Nullable_1<::GlobalNamespace::BeatmapLevelDataVersion>)>(&::GlobalNamespace::BeatmapDataLoader::CreateOrGetTransformedBeatmapDataAsync)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x3711ce8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataLoader*>(),
                            { "CreateOrGetTransformedBeatmapDataAsync",
                              {},
                              { ::i2c::type_of<::GlobalNamespace::BeatmapKey>(), ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>(), ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>(),
                                ::i2c::type_of<::GlobalNamespace::PlayerSpecificSettings*>(), ::i2c::type_of<::GlobalNamespace::EnvironmentInfoSO*>(),
                                ::i2c::type_of<::GlobalNamespace::EnvironmentInfoSO*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::IBeatmapLevelData*>(),
                                ::i2c::type_of<::System::Nullable_1<::GlobalNamespace::BeatmapLevelDataVersion>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataLoader.IsCachedEntryStale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData*>*)>(
    &::GlobalNamespace::BeatmapDataLoader::IsCachedEntryStale)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x3711e34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataLoader*>(),
                                                             { "IsCachedEntryStale", {}, { ::i2c::type_of<::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataLoader.ClearLastUsedBeatmapCache
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapDataLoader::*)()>(&::GlobalNamespace::BeatmapDataLoader::ClearLastUsedBeatmapCache)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3711ef8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataLoader*>(), { "ClearLastUsedBeatmapCache", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataLoader.LoadAndTransformAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData*>* (
    ::GlobalNamespace::BeatmapDataLoader::*)(::GlobalNamespace::BeatmapKey, ::GlobalNamespace::BeatmapLevel*, ::GlobalNamespace::GameplayModifiers*, ::GlobalNamespace::PlayerSpecificSettings*,
                                             ::GlobalNamespace::EnvironmentInfoSO*, ::GlobalNamespace::EnvironmentInfoSO*, ::GlobalNamespace::IBeatmapLevelData*,
                                             ::GlobalNamespace::BeatmapLevelDataVersion, bool)>(&::GlobalNamespace::BeatmapDataLoader::LoadAndTransformAsync)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x3711f00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataLoader*>(),
                                         { "LoadAndTransformAsync",
                                           {},
                                           { ::i2c::type_of<::GlobalNamespace::BeatmapKey>(), ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>(),
                                             ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>(), ::i2c::type_of<::GlobalNamespace::PlayerSpecificSettings*>(),
                                             ::i2c::type_of<::GlobalNamespace::EnvironmentInfoSO*>(), ::i2c::type_of<::GlobalNamespace::EnvironmentInfoSO*>(),
                                             ::i2c::type_of<::GlobalNamespace::IBeatmapLevelData*>(), ::i2c::type_of<::GlobalNamespace::BeatmapLevelDataVersion>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BeatmapDataCache*& GlobalNamespace::BeatmapDataLoader::__cordl_internal_get__lastUsedBeatmapDataCache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastUsedBeatmapDataCache;
}
constexpr ::GlobalNamespace::BeatmapDataCache* const& GlobalNamespace::BeatmapDataLoader::__cordl_internal_get__lastUsedBeatmapDataCache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastUsedBeatmapDataCache;
}
constexpr void GlobalNamespace::BeatmapDataLoader::__cordl_internal_set__lastUsedBeatmapDataCache(::GlobalNamespace::BeatmapDataCache* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastUsedBeatmapDataCache = value;
}
constexpr ::GlobalNamespace::BeatmapLevelsModel*& GlobalNamespace::BeatmapDataLoader::__cordl_internal_get__beatmapLevelsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelsModel;
}
constexpr ::GlobalNamespace::BeatmapLevelsModel* const& GlobalNamespace::BeatmapDataLoader::__cordl_internal_get__beatmapLevelsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelsModel;
}
constexpr void GlobalNamespace::BeatmapDataLoader::__cordl_internal_set__beatmapLevelsModel(::GlobalNamespace::BeatmapLevelsModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapLevelsModel = value;
}
constexpr ::GlobalNamespace::BeatmapLevelsEntitlementModel*& GlobalNamespace::BeatmapDataLoader::__cordl_internal_get__beatmapLevelsEntitlementModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelsEntitlementModel;
}
constexpr ::GlobalNamespace::BeatmapLevelsEntitlementModel* const& GlobalNamespace::BeatmapDataLoader::__cordl_internal_get__beatmapLevelsEntitlementModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelsEntitlementModel;
}
constexpr void GlobalNamespace::BeatmapDataLoader::__cordl_internal_set__beatmapLevelsEntitlementModel(::GlobalNamespace::BeatmapLevelsEntitlementModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapLevelsEntitlementModel = value;
}
constexpr ::GlobalNamespace::IRefractorDebuggerSettings*& GlobalNamespace::BeatmapDataLoader::__cordl_internal_get__refractorDebuggerSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____refractorDebuggerSettings;
}
constexpr ::GlobalNamespace::IRefractorDebuggerSettings* const& GlobalNamespace::BeatmapDataLoader::__cordl_internal_get__refractorDebuggerSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____refractorDebuggerSettings;
}
constexpr void GlobalNamespace::BeatmapDataLoader::__cordl_internal_set__refractorDebuggerSettings(::GlobalNamespace::IRefractorDebuggerSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____refractorDebuggerSettings = value;
}
inline void GlobalNamespace::BeatmapDataLoader::_ctor(::GlobalNamespace::BeatmapLevelsModel* beatmapLevelsModel, ::GlobalNamespace::BeatmapLevelsEntitlementModel* beatmapLevelsEntitlementModel) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataLoader*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevelsModel*>(), ::i2c::type_of<::GlobalNamespace::BeatmapLevelsEntitlementModel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beatmapLevelsModel, beatmapLevelsEntitlementModel);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::BeatmapDataBasicInfo*>*
GlobalNamespace::BeatmapDataLoader::LoadBasicBeatmapDataAsync(::GlobalNamespace::IBeatmapLevelData* beatmapLevelData, ::GlobalNamespace::BeatmapKey beatmapKey) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataLoader*>(),
                                              { "LoadBasicBeatmapDataAsync", {}, { ::i2c::type_of<::GlobalNamespace::IBeatmapLevelData*>(), ::i2c::type_of<::GlobalNamespace::BeatmapKey>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::BeatmapDataBasicInfo*>*>(this, ___internal_method, beatmapLevelData, beatmapKey);
}
inline ::GlobalNamespace::BeatmapDataBasicInfo* GlobalNamespace::BeatmapDataLoader::LoadBasicBeatmapData(::GlobalNamespace::IBeatmapLevelData* beatmapLevelData,
                                                                                                         ::by_ref<::GlobalNamespace::BeatmapKey> beatmapKey) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataLoader*>(),
                                              { "LoadBasicBeatmapData", {}, { ::i2c::type_of<::GlobalNamespace::IBeatmapLevelData*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapKey>>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapDataBasicInfo*>(this, ___internal_method, beatmapLevelData, beatmapKey);
}
inline ::GlobalNamespace::BeatmapDataBasicInfo* GlobalNamespace::BeatmapDataLoader::LoadBasicBeatmapData(::StringW beatmapJson) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataLoader*>(), { "LoadBasicBeatmapData", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapDataBasicInfo*>(this, ___internal_method, beatmapJson);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData*>*
GlobalNamespace::BeatmapDataLoader::LoadBeatmapDataAsync(::GlobalNamespace::IBeatmapLevelData* beatmapLevelData, ::GlobalNamespace::BeatmapKey beatmapKey, float_t startBpm,
                                                         bool loadingForDesignatedEnvironment, ::GlobalNamespace::IEnvironmentInfo* targetEnvironmentInfo,
                                                         ::GlobalNamespace::IEnvironmentInfo* originalEnvironmentInfo, ::GlobalNamespace::BeatmapLevelDataVersion beatmapLevelDataVersion,
                                                         ::GlobalNamespace::GameplayModifiers* gameplayModifiers, ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataLoader*>(),
                                                           { "LoadBeatmapDataAsync",
                                                             {},
                                                             { ::i2c::type_of<::GlobalNamespace::IBeatmapLevelData*>(), ::i2c::type_of<::GlobalNamespace::BeatmapKey>(), ::i2c::type_of<float_t>(),
                                                               ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::IEnvironmentInfo*>(), ::i2c::type_of<::GlobalNamespace::IEnvironmentInfo*>(),
                                                               ::i2c::type_of<::GlobalNamespace::BeatmapLevelDataVersion>(), ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>(),
                                                               ::i2c::type_of<::GlobalNamespace::PlayerSpecificSettings*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData*>*>(
      this, ___internal_method, beatmapLevelData, beatmapKey, startBpm, loadingForDesignatedEnvironment, targetEnvironmentInfo, originalEnvironmentInfo, beatmapLevelDataVersion, gameplayModifiers,
      playerSpecificSettings);
}
inline ::GlobalNamespace::IReadonlyBeatmapData*
GlobalNamespace::BeatmapDataLoader::LoadBeatmapData(::GlobalNamespace::IBeatmapLevelData* beatmapLevelData, ::GlobalNamespace::BeatmapKey beatmapKey, float_t startBpm,
                                                    bool loadingForDesignatedEnvironment, ::GlobalNamespace::IEnvironmentInfo* environmentInfo,
                                                    ::GlobalNamespace::IEnvironmentInfo* lightshowEnvironmentInfo, ::GlobalNamespace::BeatmapLevelDataVersion beatmapLevelDataVersion,
                                                    ::GlobalNamespace::GameplayModifiers* gameplayModifiers, ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataLoader*>(),
                                                           { "LoadBeatmapData",
                                                             {},
                                                             { ::i2c::type_of<::GlobalNamespace::IBeatmapLevelData*>(), ::i2c::type_of<::GlobalNamespace::BeatmapKey>(), ::i2c::type_of<float_t>(),
                                                               ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::IEnvironmentInfo*>(), ::i2c::type_of<::GlobalNamespace::IEnvironmentInfo*>(),
                                                               ::i2c::type_of<::GlobalNamespace::BeatmapLevelDataVersion>(), ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>(),
                                                               ::i2c::type_of<::GlobalNamespace::PlayerSpecificSettings*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IReadonlyBeatmapData*>(this, ___internal_method, beatmapLevelData, beatmapKey, startBpm, loadingForDesignatedEnvironment,
                                                                                       environmentInfo, lightshowEnvironmentInfo, beatmapLevelDataVersion, gameplayModifiers, playerSpecificSettings);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData*>*
GlobalNamespace::BeatmapDataLoader::CreateOrGetTransformedBeatmapDataAsync(::GlobalNamespace::BeatmapKey beatmapKey, ::GlobalNamespace::BeatmapLevel* beatmapLevel,
                                                                           ::GlobalNamespace::GameplayModifiers* gameplayModifiers, ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings,
                                                                           ::GlobalNamespace::EnvironmentInfoSO* targetEnvironmentInfo, ::GlobalNamespace::EnvironmentInfoSO* originalEnvironmentInfo,
                                                                           bool useCache, bool screenDisplacementEffects, ::GlobalNamespace::IBeatmapLevelData* preloadedBeatmapLevelData,
                                                                           ::System::Nullable_1<::GlobalNamespace::BeatmapLevelDataVersion> beatmapLevelDataVersion) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataLoader*>(),
                                       { "CreateOrGetTransformedBeatmapDataAsync",
                                         {},
                                         { ::i2c::type_of<::GlobalNamespace::BeatmapKey>(), ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>(), ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>(),
                                           ::i2c::type_of<::GlobalNamespace::PlayerSpecificSettings*>(), ::i2c::type_of<::GlobalNamespace::EnvironmentInfoSO*>(),
                                           ::i2c::type_of<::GlobalNamespace::EnvironmentInfoSO*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(),
                                           ::i2c::type_of<::GlobalNamespace::IBeatmapLevelData*>(), ::i2c::type_of<::System::Nullable_1<::GlobalNamespace::BeatmapLevelDataVersion>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData*>*>(
      this, ___internal_method, beatmapKey, beatmapLevel, gameplayModifiers, playerSpecificSettings, targetEnvironmentInfo, originalEnvironmentInfo, useCache, screenDisplacementEffects,
      preloadedBeatmapLevelData, beatmapLevelDataVersion);
}
inline bool GlobalNamespace::BeatmapDataLoader::IsCachedEntryStale(::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData*>* task) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataLoader*>(),
                                                           { "IsCachedEntryStale", {}, { ::i2c::type_of<::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, task);
}
inline void GlobalNamespace::BeatmapDataLoader::ClearLastUsedBeatmapCache() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataLoader*>(), { "ClearLastUsedBeatmapCache", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData*>* GlobalNamespace::BeatmapDataLoader::LoadAndTransformAsync(
    ::GlobalNamespace::BeatmapKey beatmapKey, ::GlobalNamespace::BeatmapLevel* beatmapLevel, ::GlobalNamespace::GameplayModifiers* gameplayModifiers,
    ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, ::GlobalNamespace::EnvironmentInfoSO* targetEnvironmentInfo, ::GlobalNamespace::EnvironmentInfoSO* originalEnvironmentInfo,
    ::GlobalNamespace::IBeatmapLevelData* preloadedBeatmapLevelData, ::GlobalNamespace::BeatmapLevelDataVersion version, bool screenDisplacementEffects) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataLoader*>(),
                                              { "LoadAndTransformAsync",
                                                {},
                                                { ::i2c::type_of<::GlobalNamespace::BeatmapKey>(), ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>(),
                                                  ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>(), ::i2c::type_of<::GlobalNamespace::PlayerSpecificSettings*>(),
                                                  ::i2c::type_of<::GlobalNamespace::EnvironmentInfoSO*>(), ::i2c::type_of<::GlobalNamespace::EnvironmentInfoSO*>(),
                                                  ::i2c::type_of<::GlobalNamespace::IBeatmapLevelData*>(), ::i2c::type_of<::GlobalNamespace::BeatmapLevelDataVersion>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData*>*>(this, ___internal_method, beatmapKey, beatmapLevel, gameplayModifiers,
                                                                                                                            playerSpecificSettings, targetEnvironmentInfo, originalEnvironmentInfo,
                                                                                                                            preloadedBeatmapLevelData, version, screenDisplacementEffects);
}
inline ::GlobalNamespace::BeatmapDataLoader* GlobalNamespace::BeatmapDataLoader::New_ctor(::GlobalNamespace::BeatmapLevelsModel* beatmapLevelsModel,
                                                                                          ::GlobalNamespace::BeatmapLevelsEntitlementModel* beatmapLevelsEntitlementModel) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatmapDataLoader*>(beatmapLevelsModel, beatmapLevelsEntitlementModel));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapDataLoader::BeatmapDataLoader() {}

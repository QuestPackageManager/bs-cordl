#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapDataLoader.hpp"
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
#include "GlobalNamespace/zzzz__BeatmapLightEventConverterNoConvert_def.hpp"
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
  constexpr static std::size_t addrs = 0x399afe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataLoader___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataLoader___c._CreateOrGetTransformedBeatmapDataAsync_b__9_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapDataLoader___c::*)(::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData*>*)>(
    &::GlobalNamespace::BeatmapDataLoader___c::_CreateOrGetTransformedBeatmapDataAsync_b__9_0)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x399afe8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataLoader___c*>(),
                            { "<CreateOrGetTransformedBeatmapDataAsync>b__9_0", {}, { ::i2c::type_of<::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData*>*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BeatmapDataLoader___c::setStaticF___9(::GlobalNamespace::BeatmapDataLoader___c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::BeatmapDataLoader___c*, "<>9", ::GlobalNamespace::BeatmapDataLoader___c*>(std::forward<::GlobalNamespace::BeatmapDataLoader___c*>(value));
}
inline ::GlobalNamespace::BeatmapDataLoader___c* GlobalNamespace::BeatmapDataLoader___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::BeatmapDataLoader___c*, "<>9", ::GlobalNamespace::BeatmapDataLoader___c*>();
}
inline void GlobalNamespace::BeatmapDataLoader___c::setStaticF___9__9_0(::System::Action_1<::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData*>*>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData*>*>*, "<>9__9_0", ::GlobalNamespace::BeatmapDataLoader___c*>(
      std::forward<::System::Action_1<::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData*>*>*>(value));
}
inline ::System::Action_1<::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData*>*>* GlobalNamespace::BeatmapDataLoader___c::getStaticF___9__9_0() {
  return ::cordl_internals::getStaticField<::System::Action_1<::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData*>*>*, "<>9__9_0", ::GlobalNamespace::BeatmapDataLoader___c*>();
}
inline void GlobalNamespace::BeatmapDataLoader___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataLoader___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapDataLoader___c::_CreateOrGetTransformedBeatmapDataAsync_b__9_0(
    /* [Nullable(new[] { 0, 2 })] */ ::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData*>* t) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataLoader___c*>(),
                                       { "<CreateOrGetTransformedBeatmapDataAsync>b__9_0", {}, { ::i2c::type_of<::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, t);
}
inline ::GlobalNamespace::BeatmapDataLoader___c* GlobalNamespace::BeatmapDataLoader___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatmapDataLoader___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapDataLoader___c::BeatmapDataLoader___c() {}
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataLoader__CreateOrGetTransformedBeatmapDataAsync_d__9.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapDataLoader__CreateOrGetTransformedBeatmapDataAsync_d__9::*)()>(
    &::GlobalNamespace::BeatmapDataLoader__CreateOrGetTransformedBeatmapDataAsync_d__9::MoveNext)> {
  constexpr static std::size_t size = 0x8b4;
  constexpr static std::size_t addrs = 0x399b010;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataLoader__CreateOrGetTransformedBeatmapDataAsync_d__9>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataLoader__CreateOrGetTransformedBeatmapDataAsync_d__9.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapDataLoader__CreateOrGetTransformedBeatmapDataAsync_d__9::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::BeatmapDataLoader__CreateOrGetTransformedBeatmapDataAsync_d__9::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x399b8c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataLoader__CreateOrGetTransformedBeatmapDataAsync_d__9>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BeatmapDataLoader__CreateOrGetTransformedBeatmapDataAsync_d__9::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataLoader__CreateOrGetTransformedBeatmapDataAsync_d__9>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void
GlobalNamespace::BeatmapDataLoader__CreateOrGetTransformedBeatmapDataAsync_d__9::SetStateMachine(/* [Nullable(0)] */ ::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataLoader__CreateOrGetTransformedBeatmapDataAsync_d__9>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::BeatmapDataLoader__CreateOrGetTransformedBeatmapDataAsync_d__9::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::BeatmapDataLoader__CreateOrGetTransformedBeatmapDataAsync_d__9::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData*>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name:
// "beatmapLevelDataVersion", ty: "::System::Nullable_1<::GlobalNamespace::BeatmapLevelDataVersion>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty:
// "::GlobalNamespace::BeatmapDataLoader*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "preloadedBeatmapLevelData", ty: "::GlobalNamespace::IBeatmapLevelData*", modifiers:
// "", def_value: Some("{}"), comment: None }, CppParam { name: "beatmapKey", ty: "::GlobalNamespace::BeatmapKey", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "useCache",
// ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "beatmapLevel", ty: "::GlobalNamespace::BeatmapLevel*", modifiers: "", def_value: Some("{}"), comment: None },
// CppParam { name: "gameplayModifiers", ty: "::GlobalNamespace::GameplayModifiers*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "playerSpecificSettings", ty:
// "::GlobalNamespace::PlayerSpecificSettings*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "targetEnvironmentInfo", ty: "::UnityW<::GlobalNamespace::EnvironmentInfoSO>",
// modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "originalEnvironmentInfo", ty: "::UnityW<::GlobalNamespace::EnvironmentInfoSO>", modifiers: "", def_value: Some("{}"),
// comment: None }, CppParam { name: "screenDisplacementEffects", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapLevelDataVersion>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__2", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IReadonlyBeatmapData*>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::BeatmapDataLoader__CreateOrGetTransformedBeatmapDataAsync_d__9::BeatmapDataLoader__CreateOrGetTransformedBeatmapDataAsync_d__9(
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
constexpr ::GlobalNamespace::BeatmapDataLoader__CreateOrGetTransformedBeatmapDataAsync_d__9::BeatmapDataLoader__CreateOrGetTransformedBeatmapDataAsync_d__9() {}
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataLoader__LoadAndTransformAsync_d__12.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapDataLoader__LoadAndTransformAsync_d__12::*)()>(
    &::GlobalNamespace::BeatmapDataLoader__LoadAndTransformAsync_d__12::MoveNext)> {
  constexpr static std::size_t size = 0x738;
  constexpr static std::size_t addrs = 0x399b944;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataLoader__LoadAndTransformAsync_d__12>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataLoader__LoadAndTransformAsync_d__12.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapDataLoader__LoadAndTransformAsync_d__12::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::GlobalNamespace::BeatmapDataLoader__LoadAndTransformAsync_d__12::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x399c210;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataLoader__LoadAndTransformAsync_d__12>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BeatmapDataLoader__LoadAndTransformAsync_d__12::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataLoader__LoadAndTransformAsync_d__12>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::BeatmapDataLoader__LoadAndTransformAsync_d__12::SetStateMachine(/* [Nullable(0)] */ ::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataLoader__LoadAndTransformAsync_d__12>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::BeatmapDataLoader__LoadAndTransformAsync_d__12::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::BeatmapDataLoader__LoadAndTransformAsync_d__12::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData*>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name:
// "preloadedBeatmapLevelData", ty: "::GlobalNamespace::IBeatmapLevelData*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty:
// "::GlobalNamespace::BeatmapDataLoader*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "beatmapKey", ty: "::GlobalNamespace::BeatmapKey", modifiers: "", def_value:
// Some("{}"), comment: None }, CppParam { name: "version", ty: "::GlobalNamespace::BeatmapLevelDataVersion", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "beatmapLevel",
// ty: "::GlobalNamespace::BeatmapLevel*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "targetEnvironmentInfo", ty: "::UnityW<::GlobalNamespace::EnvironmentInfoSO>",
// modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "originalEnvironmentInfo", ty: "::UnityW<::GlobalNamespace::EnvironmentInfoSO>", modifiers: "", def_value: Some("{}"),
// comment: None }, CppParam { name: "gameplayModifiers", ty: "::GlobalNamespace::GameplayModifiers*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "playerSpecificSettings",
// ty: "::GlobalNamespace::PlayerSpecificSettings*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "screenDisplacementEffects", ty: "bool", modifiers: "", def_value:
// Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::LoadBeatmapLevelDataResult>", modifiers: "", def_value:
// Some("{}"), comment: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IReadonlyBeatmapData*>", modifiers: "", def_value: Some("{}"),
// comment: None }]
constexpr ::GlobalNamespace::BeatmapDataLoader__LoadAndTransformAsync_d__12::BeatmapDataLoader__LoadAndTransformAsync_d__12(
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
constexpr ::GlobalNamespace::BeatmapDataLoader__LoadAndTransformAsync_d__12::BeatmapDataLoader__LoadAndTransformAsync_d__12() {}
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__5.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__5::*)()>(
    &::GlobalNamespace::BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__5::MoveNext)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0x399c290;

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
  constexpr static std::size_t addrs = 0x399c660;

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
inline void GlobalNamespace::BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__5::SetStateMachine(/* [Nullable(0)] */ ::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
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
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::BeatmapDataBasicInfo*>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name:
// "beatmapLevelData", ty: "::GlobalNamespace::IBeatmapLevelData*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "beatmapKey", ty: "::GlobalNamespace::BeatmapKey",
// modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::BeatmapDataLoader*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam {
// name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__2", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapDataBasicInfo*>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__5::BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__5(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::BeatmapDataBasicInfo*> __t__builder, ::GlobalNamespace::IBeatmapLevelData* beatmapLevelData,
    ::GlobalNamespace::BeatmapKey beatmapKey, ::GlobalNamespace::BeatmapDataLoader* __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__1,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapDataBasicInfo*> __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->beatmapLevelData = beatmapLevelData;
  this->beatmapKey = beatmapKey;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__5::BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__5() {}
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__6.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__6::*)()>(
    &::GlobalNamespace::BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__6::MoveNext)> {
  constexpr static std::size_t size = 0x53c;
  constexpr static std::size_t addrs = 0x399c6e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__6>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__6.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__6::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::GlobalNamespace::BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__6::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x399cc1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__6>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__6::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__6>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__6::SetStateMachine(/* [Nullable(0)] */ ::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__6>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__6::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__6::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::BeatmapDataBasicInfo*>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "beatmapJson", ty:
// "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Version*>", modifiers: "",
// def_value: Some("{}"), comment: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapDataBasicInfo*>", modifiers: "", def_value:
// Some("{}"), comment: None }]
constexpr ::GlobalNamespace::BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__6::BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__6(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::BeatmapDataBasicInfo*> __t__builder, ::StringW beatmapJson,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Version*> __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapDataBasicInfo*> __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->beatmapJson = beatmapJson;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__6::BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__6() {}
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataAsync_d__7.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataAsync_d__7::*)()>(
    &::GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataAsync_d__7::MoveNext)> {
  constexpr static std::size_t size = 0x9cc;
  constexpr static std::size_t addrs = 0x399cc9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataAsync_d__7>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataAsync_d__7.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataAsync_d__7::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataAsync_d__7::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x399d79c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataAsync_d__7>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataAsync_d__7::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataAsync_d__7>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataAsync_d__7::SetStateMachine(/* [Nullable(0)] */ ::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataAsync_d__7>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataAsync_d__7::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataAsync_d__7::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData*>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name:
// "playerSpecificSettings", ty: "::GlobalNamespace::PlayerSpecificSettings*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "beatmapKey", ty:
// "::GlobalNamespace::BeatmapKey", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "targetEnvironmentInfo", ty: "::GlobalNamespace::IEnvironmentInfo*", modifiers: "",
// def_value: Some("{}"), comment: None }, CppParam { name: "beatmapLevelData", ty: "::GlobalNamespace::IBeatmapLevelData*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name:
// "__4__this", ty: "::GlobalNamespace::BeatmapDataLoader*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "startBpm", ty: "float_t", modifiers: "", def_value: Some("{}"),
// comment: None }, CppParam { name: "loadingForDesignatedEnvironment", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "originalEnvironmentInfo", ty:
// "::GlobalNamespace::IEnvironmentInfo*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "beatmapLevelDataVersion", ty: "::GlobalNamespace::BeatmapLevelDataVersion",
// modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "gameplayModifiers", ty: "::GlobalNamespace::GameplayModifiers*", modifiers: "", def_value: Some("{}"), comment: None },
// CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::StringW>>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__2", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IReadonlyBeatmapData*>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataAsync_d__7::BeatmapDataLoader__LoadBeatmapDataAsync_d__7(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData*> __t__builder,
    ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, ::GlobalNamespace::BeatmapKey beatmapKey, ::GlobalNamespace::IEnvironmentInfo* targetEnvironmentInfo,
    ::GlobalNamespace::IBeatmapLevelData* beatmapLevelData, ::GlobalNamespace::BeatmapDataLoader* __4__this, float_t startBpm, bool loadingForDesignatedEnvironment,
    ::GlobalNamespace::IEnvironmentInfo* originalEnvironmentInfo, ::GlobalNamespace::BeatmapLevelDataVersion beatmapLevelDataVersion, ::GlobalNamespace::GameplayModifiers* gameplayModifiers,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::StringW>> __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IReadonlyBeatmapData*> __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->playerSpecificSettings = playerSpecificSettings;
  this->beatmapKey = beatmapKey;
  this->targetEnvironmentInfo = targetEnvironmentInfo;
  this->beatmapLevelData = beatmapLevelData;
  this->__4__this = __4__this;
  this->startBpm = startBpm;
  this->loadingForDesignatedEnvironment = loadingForDesignatedEnvironment;
  this->originalEnvironmentInfo = originalEnvironmentInfo;
  this->beatmapLevelDataVersion = beatmapLevelDataVersion;
  this->gameplayModifiers = gameplayModifiers;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataAsync_d__7::BeatmapDataLoader__LoadBeatmapDataAsync_d__7() {}
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataFromJsonAsync_d__8.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataFromJsonAsync_d__8::*)()>(
    &::GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataFromJsonAsync_d__8::MoveNext)> {
  constexpr static std::size_t size = 0x5f8;
  constexpr static std::size_t addrs = 0x399d81c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataFromJsonAsync_d__8>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataFromJsonAsync_d__8.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataFromJsonAsync_d__8::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataFromJsonAsync_d__8::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x399de14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataFromJsonAsync_d__8>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataFromJsonAsync_d__8::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataFromJsonAsync_d__8>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataFromJsonAsync_d__8::SetStateMachine(/* [Nullable(0)] */ ::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataFromJsonAsync_d__8>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataFromJsonAsync_d__8::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataFromJsonAsync_d__8::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData*>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "beatmapJson", ty:
// "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "defaultLightshowDataJson", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam {
// name: "beatmapKey", ty: "::GlobalNamespace::BeatmapKey", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "startBpm", ty: "float_t", modifiers: "", def_value: Some("{}"),
// comment: None }, CppParam { name: "loadingForDesignatedEnvironment", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "targetEnvironmentInfo", ty:
// "::GlobalNamespace::IEnvironmentInfo*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "beatmapLevelDataVersion", ty: "::GlobalNamespace::BeatmapLevelDataVersion",
// modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "playerSpecificSettings", ty: "::GlobalNamespace::PlayerSpecificSettings*", modifiers: "", def_value: Some("{}"), comment:
// None }, CppParam { name: "audioDataJson", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "lightshowDataJson", ty: "::StringW", modifiers: "", def_value:
// Some("{}"), comment: None }, CppParam { name: "originalEnvironmentInfo", ty: "::GlobalNamespace::IEnvironmentInfo*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name:
// "gameplayModifiers", ty: "::GlobalNamespace::GameplayModifiers*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_lightEventConverter_5__2", ty:
// "::GlobalNamespace::BeatmapLightEventConverterNoConvert*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_beatmapData_5__3", ty: "::GlobalNamespace::BeatmapData*",
// modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Version*>", modifiers: "", def_value: Some("{}"),
// comment: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapData*>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataFromJsonAsync_d__8::BeatmapDataLoader__LoadBeatmapDataFromJsonAsync_d__8(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData*> __t__builder, ::StringW beatmapJson, ::StringW defaultLightshowDataJson,
    ::GlobalNamespace::BeatmapKey beatmapKey, float_t startBpm, bool loadingForDesignatedEnvironment, ::GlobalNamespace::IEnvironmentInfo* targetEnvironmentInfo,
    ::GlobalNamespace::BeatmapLevelDataVersion beatmapLevelDataVersion, ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, ::StringW audioDataJson, ::StringW lightshowDataJson,
    ::GlobalNamespace::IEnvironmentInfo* originalEnvironmentInfo, ::GlobalNamespace::GameplayModifiers* gameplayModifiers,
    ::GlobalNamespace::BeatmapLightEventConverterNoConvert* _lightEventConverter_5__2, ::GlobalNamespace::BeatmapData* _beatmapData_5__3,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Version*> __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapData*> __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->beatmapJson = beatmapJson;
  this->defaultLightshowDataJson = defaultLightshowDataJson;
  this->beatmapKey = beatmapKey;
  this->startBpm = startBpm;
  this->loadingForDesignatedEnvironment = loadingForDesignatedEnvironment;
  this->targetEnvironmentInfo = targetEnvironmentInfo;
  this->beatmapLevelDataVersion = beatmapLevelDataVersion;
  this->playerSpecificSettings = playerSpecificSettings;
  this->audioDataJson = audioDataJson;
  this->lightshowDataJson = lightshowDataJson;
  this->originalEnvironmentInfo = originalEnvironmentInfo;
  this->gameplayModifiers = gameplayModifiers;
  this->_lightEventConverter_5__2 = _lightEventConverter_5__2;
  this->_beatmapData_5__3 = _beatmapData_5__3;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataFromJsonAsync_d__8::BeatmapDataLoader__LoadBeatmapDataFromJsonAsync_d__8() {}
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataLoader._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapDataLoader::*)(::GlobalNamespace::BeatmapLevelsModel*, ::GlobalNamespace::BeatmapLevelsEntitlementModel*)>(
    &::GlobalNamespace::BeatmapDataLoader::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x399a78c;

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
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x399a794;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataLoader*>(),
                                                { "LoadBasicBeatmapDataAsync", {}, { ::i2c::type_of<::GlobalNamespace::IBeatmapLevelData*>(), ::i2c::type_of<::GlobalNamespace::BeatmapKey>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataLoader.LoadBasicBeatmapDataAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::BeatmapDataBasicInfo*>* (::GlobalNamespace::BeatmapDataLoader::*)(::StringW)>(
    &::GlobalNamespace::BeatmapDataLoader::LoadBasicBeatmapDataAsync)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x399a898;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataLoader*>(), { "LoadBasicBeatmapDataAsync", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataLoader.LoadBeatmapDataAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData*>* (
    ::GlobalNamespace::BeatmapDataLoader::*)(::GlobalNamespace::IBeatmapLevelData*, ::GlobalNamespace::BeatmapKey, float_t, bool, ::GlobalNamespace::IEnvironmentInfo*,
                                             ::GlobalNamespace::IEnvironmentInfo*, ::GlobalNamespace::BeatmapLevelDataVersion, ::GlobalNamespace::GameplayModifiers*,
                                             ::GlobalNamespace::PlayerSpecificSettings*)>(&::GlobalNamespace::BeatmapDataLoader::LoadBeatmapDataAsync)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x399a978;

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
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataLoader.LoadBeatmapDataFromJsonAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData*>* (
    ::GlobalNamespace::BeatmapDataLoader::*)(::StringW, ::StringW, ::StringW, ::StringW, ::GlobalNamespace::BeatmapKey, float_t, bool, ::GlobalNamespace::IEnvironmentInfo*,
                                             ::GlobalNamespace::IEnvironmentInfo*, ::GlobalNamespace::BeatmapLevelDataVersion, ::GlobalNamespace::GameplayModifiers*,
                                             ::GlobalNamespace::PlayerSpecificSettings*)>(&::GlobalNamespace::BeatmapDataLoader::LoadBeatmapDataFromJsonAsync)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x399aacc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataLoader*>(),
                                         { "LoadBeatmapDataFromJsonAsync",
                                           {},
                                           { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(),
                                             ::i2c::type_of<::GlobalNamespace::BeatmapKey>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::IEnvironmentInfo*>(),
                                             ::i2c::type_of<::GlobalNamespace::IEnvironmentInfo*>(), ::i2c::type_of<::GlobalNamespace::BeatmapLevelDataVersion>(),
                                             ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>(), ::i2c::type_of<::GlobalNamespace::PlayerSpecificSettings*>() } })));
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
  constexpr static std::size_t addrs = 0x399ac2c;

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
  constexpr static std::size_t addrs = 0x399ad78;

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
  constexpr static std::size_t addrs = 0x399ae3c;

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
  constexpr static std::size_t addrs = 0x399ae44;

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
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::BeatmapDataBasicInfo*>* GlobalNamespace::BeatmapDataLoader::LoadBasicBeatmapDataAsync(::StringW beatmapJson) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataLoader*>(), { "LoadBasicBeatmapDataAsync", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::BeatmapDataBasicInfo*>*>(this, ___internal_method, beatmapJson);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData*>*
GlobalNamespace::BeatmapDataLoader::LoadBeatmapDataAsync(/* [Nullable(1)] */ ::GlobalNamespace::IBeatmapLevelData* beatmapLevelData, ::GlobalNamespace::BeatmapKey beatmapKey, float_t startBpm,
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
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData*>* GlobalNamespace::BeatmapDataLoader::LoadBeatmapDataFromJsonAsync(
    ::StringW audioDataJson, ::StringW beatmapJson, ::StringW lightshowDataJson, ::StringW defaultLightshowDataJson, ::GlobalNamespace::BeatmapKey beatmapKey, float_t startBpm,
    bool loadingForDesignatedEnvironment, ::GlobalNamespace::IEnvironmentInfo* targetEnvironmentInfo, ::GlobalNamespace::IEnvironmentInfo* originalEnvironmentInfo,
    ::GlobalNamespace::BeatmapLevelDataVersion beatmapLevelDataVersion, ::GlobalNamespace::GameplayModifiers* gameplayModifiers, ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataLoader*>(),
                                       { "LoadBeatmapDataFromJsonAsync",
                                         {},
                                         { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(),
                                           ::i2c::type_of<::GlobalNamespace::BeatmapKey>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::IEnvironmentInfo*>(),
                                           ::i2c::type_of<::GlobalNamespace::IEnvironmentInfo*>(), ::i2c::type_of<::GlobalNamespace::BeatmapLevelDataVersion>(),
                                           ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>(), ::i2c::type_of<::GlobalNamespace::PlayerSpecificSettings*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData*>*>(
      this, ___internal_method, audioDataJson, beatmapJson, lightshowDataJson, defaultLightshowDataJson, beatmapKey, startBpm, loadingForDesignatedEnvironment, targetEnvironmentInfo,
      originalEnvironmentInfo, beatmapLevelDataVersion, gameplayModifiers, playerSpecificSettings);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData*>* GlobalNamespace::BeatmapDataLoader::CreateOrGetTransformedBeatmapDataAsync(
    ::GlobalNamespace::BeatmapKey beatmapKey, ::GlobalNamespace::BeatmapLevel* beatmapLevel, ::GlobalNamespace::GameplayModifiers* gameplayModifiers,
    ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, ::GlobalNamespace::EnvironmentInfoSO* targetEnvironmentInfo, ::GlobalNamespace::EnvironmentInfoSO* originalEnvironmentInfo,
    bool useCache, bool screenDisplacementEffects, /* [Nullable(2)] */ ::GlobalNamespace::IBeatmapLevelData* preloadedBeatmapLevelData,
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
inline bool GlobalNamespace::BeatmapDataLoader::IsCachedEntryStale(/* [Nullable(new[] { 1, 2 })] */ ::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData*>* task) {
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
    /* [Nullable(2)] */ ::GlobalNamespace::IBeatmapLevelData* preloadedBeatmapLevelData, ::GlobalNamespace::BeatmapLevelDataVersion version, bool screenDisplacementEffects) {
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
/// @brief [Inject]
inline ::GlobalNamespace::BeatmapDataLoader* GlobalNamespace::BeatmapDataLoader::New_ctor(::GlobalNamespace::BeatmapLevelsModel* beatmapLevelsModel,
                                                                                          ::GlobalNamespace::BeatmapLevelsEntitlementModel* beatmapLevelsEntitlementModel) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatmapDataLoader*>(beatmapLevelsModel, beatmapLevelsEntitlementModel));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapDataLoader::BeatmapDataLoader() {}

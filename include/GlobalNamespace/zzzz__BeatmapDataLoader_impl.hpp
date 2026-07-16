#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapDataLoader.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelDataVersion_impl.hpp"
#include "GlobalNamespace/zzzz__LastUsedBeatmapDataCache_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataLoader_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataBasicInfo_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataLoader_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelDataVersion_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevelData_def.hpp"
#include "GlobalNamespace/zzzz__IEnvironmentInfo_def.hpp"
#include "GlobalNamespace/zzzz__IReadonlyBeatmapData_def.hpp"
#include "GlobalNamespace/zzzz__IRefractorDebuggerSettings_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSpecificSettings_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Version_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__2.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__2::*)()>(
    &::GlobalNamespace::BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__2::MoveNext)> {
  constexpr static std::size_t size = 0x6c4;
  constexpr static std::size_t addrs = 0x370ec60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__2>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__2.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__2::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::GlobalNamespace::BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__2::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x370f324;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__2>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__2::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__2>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__2::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__2>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__2::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__2::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::BeatmapDataBasicInfo*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "beatmapLevelData", ty:
// "::GlobalNamespace::IBeatmapLevelData*", modifiers: "", def_value: Some("{}") }, CppParam { name: "beatmapKey", ty: "::GlobalNamespace::BeatmapKey", modifiers: "", def_value: Some("{}") }, CppParam
// { name: "_beatmapJson_5__2", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Version*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__3",
// ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapDataBasicInfo*>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__2::BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__2(
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
constexpr ::GlobalNamespace::BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__2::BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__2() {}
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataAsync_d__5.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataAsync_d__5::*)()>(
    &::GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataAsync_d__5::MoveNext)> {
  constexpr static std::size_t size = 0xca0;
  constexpr static std::size_t addrs = 0x370f3a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataAsync_d__5>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataAsync_d__5.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataAsync_d__5::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataAsync_d__5::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x3710044;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataAsync_d__5>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataAsync_d__5::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataAsync_d__5>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataAsync_d__5::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataAsync_d__5>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataAsync_d__5::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataAsync_d__5::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "enableBeatmapDataCaching", ty:
// "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::BeatmapDataLoader*", modifiers: "", def_value: Some("{}") }, CppParam { name: "beatmapKey", ty:
// "::GlobalNamespace::BeatmapKey", modifiers: "", def_value: Some("{}") }, CppParam { name: "targetEnvironmentInfo", ty: "::GlobalNamespace::IEnvironmentInfo*", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "gameplayModifiers", ty: "::GlobalNamespace::GameplayModifiers*", modifiers: "", def_value: Some("{}") }, CppParam { name: "playerSpecificSettings", ty:
// "::GlobalNamespace::PlayerSpecificSettings*", modifiers: "", def_value: Some("{}") }, CppParam { name: "beatmapLevelData", ty: "::GlobalNamespace::IBeatmapLevelData*", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "startBpm", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "loadingForDesignatedEnvironment", ty: "bool", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "beatmapLevelDataVersion", ty: "::GlobalNamespace::BeatmapLevelDataVersion", modifiers: "", def_value: Some("{}") }, CppParam { name: "originalEnvironmentInfo", ty:
// "::GlobalNamespace::IEnvironmentInfo*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::StringW>>", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapData*>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataAsync_d__5::BeatmapDataLoader__LoadBeatmapDataAsync_d__5(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData*> __t__builder, bool enableBeatmapDataCaching,
    ::GlobalNamespace::BeatmapDataLoader* __4__this, ::GlobalNamespace::BeatmapKey beatmapKey, ::GlobalNamespace::IEnvironmentInfo* targetEnvironmentInfo,
    ::GlobalNamespace::GameplayModifiers* gameplayModifiers, ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, ::GlobalNamespace::IBeatmapLevelData* beatmapLevelData,
    float_t startBpm, bool loadingForDesignatedEnvironment, ::GlobalNamespace::BeatmapLevelDataVersion beatmapLevelDataVersion, ::GlobalNamespace::IEnvironmentInfo* originalEnvironmentInfo,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::StringW>> __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapData*> __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->enableBeatmapDataCaching = enableBeatmapDataCaching;
  this->__4__this = __4__this;
  this->beatmapKey = beatmapKey;
  this->targetEnvironmentInfo = targetEnvironmentInfo;
  this->gameplayModifiers = gameplayModifiers;
  this->playerSpecificSettings = playerSpecificSettings;
  this->beatmapLevelData = beatmapLevelData;
  this->startBpm = startBpm;
  this->loadingForDesignatedEnvironment = loadingForDesignatedEnvironment;
  this->beatmapLevelDataVersion = beatmapLevelDataVersion;
  this->originalEnvironmentInfo = originalEnvironmentInfo;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataAsync_d__5::BeatmapDataLoader__LoadBeatmapDataAsync_d__5() {}
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataLoader.LoadBasicBeatmapDataAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::BeatmapDataBasicInfo*>* (
    ::GlobalNamespace::BeatmapDataLoader::*)(::GlobalNamespace::IBeatmapLevelData*, ::GlobalNamespace::BeatmapKey)>(&::GlobalNamespace::BeatmapDataLoader::LoadBasicBeatmapDataAsync)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x370e378;

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
  constexpr static std::size_t addrs = 0x370e470;

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
  constexpr static std::size_t addrs = 0x370e54c;

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
                                             ::GlobalNamespace::PlayerSpecificSettings*, bool)>(&::GlobalNamespace::BeatmapDataLoader::LoadBeatmapDataAsync)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x370e640;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataLoader*>(),
                                                             { "LoadBeatmapDataAsync",
                                                               {},
                                                               { ::i2c::type_of<::GlobalNamespace::IBeatmapLevelData*>(), ::i2c::type_of<::GlobalNamespace::BeatmapKey>(), ::i2c::type_of<float_t>(),
                                                                 ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::IEnvironmentInfo*>(), ::i2c::type_of<::GlobalNamespace::IEnvironmentInfo*>(),
                                                                 ::i2c::type_of<::GlobalNamespace::BeatmapLevelDataVersion>(), ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>(),
                                                                 ::i2c::type_of<::GlobalNamespace::PlayerSpecificSettings*>(), ::i2c::type_of<bool>() } })));
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
  constexpr static std::size_t addrs = 0x370e7a0;

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
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataLoader.ClearLastUsedBeatmapCache
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapDataLoader::*)()>(&::GlobalNamespace::BeatmapDataLoader::ClearLastUsedBeatmapCache)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x370ec4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataLoader*>(), { "ClearLastUsedBeatmapCache", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataLoader._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapDataLoader::*)()>(&::GlobalNamespace::BeatmapDataLoader::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x370ec5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataLoader*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::LastUsedBeatmapDataCache& GlobalNamespace::BeatmapDataLoader::__cordl_internal_get__lastUsedBeatmapDataCache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastUsedBeatmapDataCache;
}
constexpr ::GlobalNamespace::LastUsedBeatmapDataCache const& GlobalNamespace::BeatmapDataLoader::__cordl_internal_get__lastUsedBeatmapDataCache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastUsedBeatmapDataCache;
}
constexpr void GlobalNamespace::BeatmapDataLoader::__cordl_internal_set__lastUsedBeatmapDataCache(::GlobalNamespace::LastUsedBeatmapDataCache value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastUsedBeatmapDataCache = value;
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
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData*>* GlobalNamespace::BeatmapDataLoader::LoadBeatmapDataAsync(
    ::GlobalNamespace::IBeatmapLevelData* beatmapLevelData, ::GlobalNamespace::BeatmapKey beatmapKey, float_t startBpm, bool loadingForDesignatedEnvironment,
    ::GlobalNamespace::IEnvironmentInfo* targetEnvironmentInfo, ::GlobalNamespace::IEnvironmentInfo* originalEnvironmentInfo, ::GlobalNamespace::BeatmapLevelDataVersion beatmapLevelDataVersion,
    ::GlobalNamespace::GameplayModifiers* gameplayModifiers, ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, bool enableBeatmapDataCaching) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataLoader*>(),
                                                           { "LoadBeatmapDataAsync",
                                                             {},
                                                             { ::i2c::type_of<::GlobalNamespace::IBeatmapLevelData*>(), ::i2c::type_of<::GlobalNamespace::BeatmapKey>(), ::i2c::type_of<float_t>(),
                                                               ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::IEnvironmentInfo*>(), ::i2c::type_of<::GlobalNamespace::IEnvironmentInfo*>(),
                                                               ::i2c::type_of<::GlobalNamespace::BeatmapLevelDataVersion>(), ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>(),
                                                               ::i2c::type_of<::GlobalNamespace::PlayerSpecificSettings*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData*>*>(
      this, ___internal_method, beatmapLevelData, beatmapKey, startBpm, loadingForDesignatedEnvironment, targetEnvironmentInfo, originalEnvironmentInfo, beatmapLevelDataVersion, gameplayModifiers,
      playerSpecificSettings, enableBeatmapDataCaching);
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
inline void GlobalNamespace::BeatmapDataLoader::ClearLastUsedBeatmapCache() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataLoader*>(), { "ClearLastUsedBeatmapCache", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapDataLoader::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataLoader*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapDataLoader* GlobalNamespace::BeatmapDataLoader::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatmapDataLoader*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapDataLoader::BeatmapDataLoader() {}

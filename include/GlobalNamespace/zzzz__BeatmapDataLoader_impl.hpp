#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapDataLoader.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelDataVersion_impl.hpp"
#include "GlobalNamespace/zzzz__LastUsedBeatmapDataCache_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_impl.hpp"
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
#include "GlobalNamespace/zzzz__PlayerSpecificSettings_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Version_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__1.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__1::*)()>(
    &::GlobalNamespace::BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__1::MoveNext)> {
  constexpr static std::size_t size = 0x6f4;
  constexpr static std::size_t addrs = 0x26bc6b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__1>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__1.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__1::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__1::SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x26bcdac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__1>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__1::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__1>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__1::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__1>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__1::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__1::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::BeatmapDataBasicInfo*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "beatmapLevelData", ty:
// "::GlobalNamespace::IBeatmapLevelData*", modifiers: "", def_value: Some("{}") }, CppParam { name: "beatmapKey", ty: "::GlobalNamespace::BeatmapKey", modifiers: "", def_value: Some("{}") }, CppParam
// { name: "_beatmapJson_5__2", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Version*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__3",
// ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapDataBasicInfo*>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__1::BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__1(
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
constexpr ::GlobalNamespace::BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__1::BeatmapDataLoader__LoadBasicBeatmapDataAsync_d__1() {}
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataAsync_d__4.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataAsync_d__4::*)()>(
    &::GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataAsync_d__4::MoveNext)> {
  constexpr static std::size_t size = 0xc60;
  constexpr static std::size_t addrs = 0x26bce28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataAsync_d__4>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataAsync_d__4.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataAsync_d__4::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataAsync_d__4::SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x26bda88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataAsync_d__4>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataAsync_d__4::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataAsync_d__4>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataAsync_d__4::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataAsync_d__4>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataAsync_d__4::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataAsync_d__4::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "enableBeatmapDataCaching", ty:
// "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::BeatmapDataLoader*", modifiers: "", def_value: Some("{}") }, CppParam { name: "beatmapKey", ty:
// "::GlobalNamespace::BeatmapKey", modifiers: "", def_value: Some("{}") }, CppParam { name: "targetEnvironmentInfo", ty: "::GlobalNamespace::IEnvironmentInfo*", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "gameplayModifiers", ty: "::GlobalNamespace::GameplayModifiers*", modifiers: "", def_value: Some("{}") }, CppParam { name: "playerSpecificSettings", ty:
// "::GlobalNamespace::PlayerSpecificSettings*", modifiers: "", def_value: Some("{}") }, CppParam { name: "beatmapLevelData", ty: "::GlobalNamespace::IBeatmapLevelData*", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "startBpm", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "loadingForDesignatedEnvironment", ty: "bool", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "beatmapLevelDataVersion", ty: "::GlobalNamespace::BeatmapLevelDataVersion", modifiers: "", def_value: Some("{}") }, CppParam { name: "originalEnvironmentInfo", ty:
// "::GlobalNamespace::IEnvironmentInfo*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::StringW,::Array<::StringW>*>>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapData*>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataAsync_d__4::BeatmapDataLoader__LoadBeatmapDataAsync_d__4(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData*> __t__builder, bool enableBeatmapDataCaching,
    ::GlobalNamespace::BeatmapDataLoader* __4__this, ::GlobalNamespace::BeatmapKey beatmapKey, ::GlobalNamespace::IEnvironmentInfo* targetEnvironmentInfo,
    ::GlobalNamespace::GameplayModifiers* gameplayModifiers, ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, ::GlobalNamespace::IBeatmapLevelData* beatmapLevelData,
    float_t startBpm, bool loadingForDesignatedEnvironment, ::GlobalNamespace::BeatmapLevelDataVersion beatmapLevelDataVersion, ::GlobalNamespace::IEnvironmentInfo* originalEnvironmentInfo,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::StringW, ::Array<::StringW>*>> __u__1,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapData*> __u__2) noexcept {
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
constexpr ::GlobalNamespace::BeatmapDataLoader__LoadBeatmapDataAsync_d__4::BeatmapDataLoader__LoadBeatmapDataAsync_d__4() {}
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataLoader.LoadBasicBeatmapDataAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::BeatmapDataBasicInfo*>* (
    ::GlobalNamespace::BeatmapDataLoader::*)(::GlobalNamespace::IBeatmapLevelData*, ::GlobalNamespace::BeatmapKey)>(&::GlobalNamespace::BeatmapDataLoader::LoadBasicBeatmapDataAsync)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x26bbdb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataLoader*>::get(), "LoadBasicBeatmapDataAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevelData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapKey>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataLoader.LoadBasicBeatmapData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapDataBasicInfo* (
    ::GlobalNamespace::BeatmapDataLoader::*)(::GlobalNamespace::IBeatmapLevelData*, ::ByRef<::GlobalNamespace::BeatmapKey>)>(&::GlobalNamespace::BeatmapDataLoader::LoadBasicBeatmapData)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x26bbeb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataLoader*>::get(), "LoadBasicBeatmapData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevelData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::BeatmapKey>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataLoader.LoadBasicBeatmapData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapDataBasicInfo* (::GlobalNamespace::BeatmapDataLoader::*)(::StringW)>(
    &::GlobalNamespace::BeatmapDataLoader::LoadBasicBeatmapData)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x26bbf84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataLoader*>::get(), "LoadBasicBeatmapData",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataLoader.LoadBeatmapDataAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData*>* (
    ::GlobalNamespace::BeatmapDataLoader::*)(::GlobalNamespace::IBeatmapLevelData*, ::GlobalNamespace::BeatmapKey, float_t, bool, ::GlobalNamespace::IEnvironmentInfo*,
                                             ::GlobalNamespace::IEnvironmentInfo*, ::GlobalNamespace::BeatmapLevelDataVersion, ::GlobalNamespace::GameplayModifiers*,
                                             ::GlobalNamespace::PlayerSpecificSettings*, bool)>(&::GlobalNamespace::BeatmapDataLoader::LoadBeatmapDataAsync)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x26bc078;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataLoader*>::get(), "LoadBeatmapDataAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 10>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevelData*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IEnvironmentInfo*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IEnvironmentInfo*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelDataVersion>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataLoader.LoadBeatmapData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IReadonlyBeatmapData* (
    ::GlobalNamespace::BeatmapDataLoader::*)(::GlobalNamespace::IBeatmapLevelData*, ::GlobalNamespace::BeatmapKey, float_t, bool, ::GlobalNamespace::IEnvironmentInfo*,
                                             ::GlobalNamespace::IEnvironmentInfo*, ::GlobalNamespace::BeatmapLevelDataVersion, ::GlobalNamespace::GameplayModifiers*,
                                             ::GlobalNamespace::PlayerSpecificSettings*)>(&::GlobalNamespace::BeatmapDataLoader::LoadBeatmapData)> {
  constexpr static std::size_t size = 0x4d0;
  constexpr static std::size_t addrs = 0x26bc1e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataLoader*>::get(), "LoadBeatmapData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 9>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevelData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapKey>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IEnvironmentInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IEnvironmentInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelDataVersion>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettings*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataLoader._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapDataLoader::*)()>(&::GlobalNamespace::BeatmapDataLoader::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26bc6b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataLoader*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::BeatmapDataBasicInfo*>*
GlobalNamespace::BeatmapDataLoader::LoadBasicBeatmapDataAsync(::GlobalNamespace::IBeatmapLevelData* beatmapLevelData, ::GlobalNamespace::BeatmapKey beatmapKey) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataLoader*>::get(), "LoadBasicBeatmapDataAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevelData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapKey>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::BeatmapDataBasicInfo*>*, false>(this, ___internal_method, beatmapLevelData, beatmapKey);
}
inline ::GlobalNamespace::BeatmapDataBasicInfo* GlobalNamespace::BeatmapDataLoader::LoadBasicBeatmapData(::GlobalNamespace::IBeatmapLevelData* beatmapLevelData,
                                                                                                         ::ByRef<::GlobalNamespace::BeatmapKey> beatmapKey) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataLoader*>::get(), "LoadBasicBeatmapData", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevelData*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::BeatmapKey>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapDataBasicInfo*, false>(this, ___internal_method, beatmapLevelData, beatmapKey);
}
inline ::GlobalNamespace::BeatmapDataBasicInfo* GlobalNamespace::BeatmapDataLoader::LoadBasicBeatmapData(::StringW beatmapJson) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataLoader*>::get(), "LoadBasicBeatmapData",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapDataBasicInfo*, false>(this, ___internal_method, beatmapJson);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData*>* GlobalNamespace::BeatmapDataLoader::LoadBeatmapDataAsync(
    ::GlobalNamespace::IBeatmapLevelData* beatmapLevelData, ::GlobalNamespace::BeatmapKey beatmapKey, float_t startBpm, bool loadingForDesignatedEnvironment,
    ::GlobalNamespace::IEnvironmentInfo* targetEnvironmentInfo, ::GlobalNamespace::IEnvironmentInfo* originalEnvironmentInfo, ::GlobalNamespace::BeatmapLevelDataVersion beatmapLevelDataVersion,
    ::GlobalNamespace::GameplayModifiers* gameplayModifiers, ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, bool enableBeatmapDataCaching) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataLoader*>::get(), "LoadBeatmapDataAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 10>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevelData*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IEnvironmentInfo*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IEnvironmentInfo*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelDataVersion>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData*>*, false>(
      this, ___internal_method, beatmapLevelData, beatmapKey, startBpm, loadingForDesignatedEnvironment, targetEnvironmentInfo, originalEnvironmentInfo, beatmapLevelDataVersion, gameplayModifiers,
      playerSpecificSettings, enableBeatmapDataCaching);
}
inline ::GlobalNamespace::IReadonlyBeatmapData*
GlobalNamespace::BeatmapDataLoader::LoadBeatmapData(::GlobalNamespace::IBeatmapLevelData* beatmapLevelData, ::GlobalNamespace::BeatmapKey beatmapKey, float_t startBpm,
                                                    bool loadingForDesignatedEnvironment, ::GlobalNamespace::IEnvironmentInfo* environmentInfo,
                                                    ::GlobalNamespace::IEnvironmentInfo* lightshowEnvironmentInfo, ::GlobalNamespace::BeatmapLevelDataVersion beatmapLevelDataVersion,
                                                    ::GlobalNamespace::GameplayModifiers* gameplayModifiers, ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataLoader*>::get(), "LoadBeatmapData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 9>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevelData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapKey>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IEnvironmentInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IEnvironmentInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelDataVersion>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettings*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IReadonlyBeatmapData*, false>(this, ___internal_method, beatmapLevelData, beatmapKey, startBpm, loadingForDesignatedEnvironment,
                                                                                              environmentInfo, lightshowEnvironmentInfo, beatmapLevelDataVersion, gameplayModifiers,
                                                                                              playerSpecificSettings);
}
inline void GlobalNamespace::BeatmapDataLoader::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataLoader*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapDataLoader* GlobalNamespace::BeatmapDataLoader::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::BeatmapDataLoader*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapDataLoader::BeatmapDataLoader() {}

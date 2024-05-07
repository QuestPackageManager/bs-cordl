#pragma once
// IWYU pragma private; include "GlobalNamespace/RecordingToolManager.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__RecordingToolManager_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicCollection_def.hpp"
#include "GlobalNamespace/zzzz__GameScenesManager_def.hpp"
#include "GlobalNamespace/zzzz__GameplayLevelSceneTransitionEvents_def.hpp"
#include "GlobalNamespace/zzzz__IBeatSaberLogger_def.hpp"
#include "GlobalNamespace/zzzz__IPosesSerializer_def.hpp"
#include "GlobalNamespace/zzzz__MenuDestination_def.hpp"
#include "GlobalNamespace/zzzz__RecordingSettings_def.hpp"
#include "GlobalNamespace/zzzz__RecordingToolConfigurationProcessor_def.hpp"
#include "GlobalNamespace/zzzz__RecordingToolManager_def.hpp"
#include "GlobalNamespace/zzzz__RecordingToolSettings_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__IInitializable_def.hpp"
// Ctor Parameters [CppParam { name: "profileSong", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "runAutopilot", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__RecordingToolManager__SetupData::__RecordingToolManager__SetupData(bool profileSong, bool runAutopilot) noexcept {
  this->profileSong = profileSong;
  this->runAutopilot = runAutopilot;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__RecordingToolManager__SetupData::__RecordingToolManager__SetupData() {}
//  Writing Method size for method: ::GlobalNamespace::__RecordingToolManager____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RecordingToolManager____c::*)()>(&::GlobalNamespace::__RecordingToolManager____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2693854;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RecordingToolManager____c*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RecordingToolManager____c.__ctor_b__25_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__RecordingToolManager____c::*)(::GlobalNamespace::RecordingSettings*)>(
    &::GlobalNamespace::__RecordingToolManager____c::__ctor_b__25_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x269385c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RecordingToolManager____c*>::get(), "<.ctor>b__25_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RecordingSettings*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__RecordingToolManager____c::setStaticF___9(::GlobalNamespace::__RecordingToolManager____c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__RecordingToolManager____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RecordingToolManager____c*>::get>(
      std::forward<::GlobalNamespace::__RecordingToolManager____c*>(value));
}
inline ::GlobalNamespace::__RecordingToolManager____c* GlobalNamespace::__RecordingToolManager____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__RecordingToolManager____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RecordingToolManager____c*>::get>();
}
inline void GlobalNamespace::__RecordingToolManager____c::setStaticF___9__25_0(::System::Func_2<::GlobalNamespace::RecordingSettings*, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::GlobalNamespace::RecordingSettings*, bool>*, "<>9__25_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RecordingToolManager____c*>::get>(
      std::forward<::System::Func_2<::GlobalNamespace::RecordingSettings*, bool>*>(value));
}
inline ::System::Func_2<::GlobalNamespace::RecordingSettings*, bool>* GlobalNamespace::__RecordingToolManager____c::getStaticF___9__25_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::GlobalNamespace::RecordingSettings*, bool>*, "<>9__25_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RecordingToolManager____c*>::get>();
}
inline ::GlobalNamespace::__RecordingToolManager____c* GlobalNamespace::__RecordingToolManager____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__RecordingToolManager____c*>());
}
inline void GlobalNamespace::__RecordingToolManager____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RecordingToolManager____c*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__RecordingToolManager____c::__ctor_b__25_0(::GlobalNamespace::RecordingSettings* recordingSettings) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RecordingToolManager____c*>::get(), "<.ctor>b__25_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RecordingSettings*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, recordingSettings);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__RecordingToolManager____c::__RecordingToolManager____c() {}
//  Writing Method size for method: ::GlobalNamespace::__RecordingToolManager___HandleGameplayLevelSceneTransitionEventsAnyGameplayLevelDidFinish_d__28.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::__RecordingToolManager___HandleGameplayLevelSceneTransitionEventsAnyGameplayLevelDidFinish_d__28::*)()>(
        &::GlobalNamespace::__RecordingToolManager___HandleGameplayLevelSceneTransitionEventsAnyGameplayLevelDidFinish_d__28::MoveNext)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x2693874;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RecordingToolManager___HandleGameplayLevelSceneTransitionEventsAnyGameplayLevelDidFinish_d__28>::get(), "MoveNext",
        std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RecordingToolManager___HandleGameplayLevelSceneTransitionEventsAnyGameplayLevelDidFinish_d__28.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (
    ::GlobalNamespace::__RecordingToolManager___HandleGameplayLevelSceneTransitionEventsAnyGameplayLevelDidFinish_d__28::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::GlobalNamespace::__RecordingToolManager___HandleGameplayLevelSceneTransitionEventsAnyGameplayLevelDidFinish_d__28::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2693b2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RecordingToolManager___HandleGameplayLevelSceneTransitionEventsAnyGameplayLevelDidFinish_d__28>::get(),
        "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__RecordingToolManager___HandleGameplayLevelSceneTransitionEventsAnyGameplayLevelDidFinish_d__28::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::__RecordingToolManager___HandleGameplayLevelSceneTransitionEventsAnyGameplayLevelDidFinish_d__28::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void GlobalNamespace::__RecordingToolManager___HandleGameplayLevelSceneTransitionEventsAnyGameplayLevelDidFinish_d__28::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RecordingToolManager___HandleGameplayLevelSceneTransitionEventsAnyGameplayLevelDidFinish_d__28>::get(), "MoveNext",
      std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__RecordingToolManager___HandleGameplayLevelSceneTransitionEventsAnyGameplayLevelDidFinish_d__28::SetStateMachine(
    ::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RecordingToolManager___HandleGameplayLevelSceneTransitionEventsAnyGameplayLevelDidFinish_d__28>::get(),
      "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::RecordingToolManager*", modifiers: "",
// def_value: Some("nullptr") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__RecordingToolManager___HandleGameplayLevelSceneTransitionEventsAnyGameplayLevelDidFinish_d__28::
    __RecordingToolManager___HandleGameplayLevelSceneTransitionEventsAnyGameplayLevelDidFinish_d__28(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                                                     ::GlobalNamespace::RecordingToolManager* __4__this,
                                                                                                     ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__RecordingToolManager___HandleGameplayLevelSceneTransitionEventsAnyGameplayLevelDidFinish_d__28::
    __RecordingToolManager___HandleGameplayLevelSceneTransitionEventsAnyGameplayLevelDidFinish_d__28() {}
//  Writing Method size for method: ::GlobalNamespace::RecordingToolManager.get_recordingToolEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::RecordingToolManager::*)()>(
    &::GlobalNamespace::RecordingToolManager::get_recordingToolEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2693070;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolManager*>::get(),
                                                                               "get_recordingToolEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RecordingToolManager.get_showRecordingToolScene
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::RecordingToolManager::*)()>(
    &::GlobalNamespace::RecordingToolManager::get_showRecordingToolScene)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2693078;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolManager*>::get(),
                                                                               "get_showRecordingToolScene", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RecordingToolManager.get_performanceRecordingEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::RecordingToolManager::*)()>(
    &::GlobalNamespace::RecordingToolManager::get_performanceRecordingEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2693080;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolManager*>::get(), "get_performanceRecordingEnabled",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RecordingToolManager.get_configJsonData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::RecordingToolManager::*)()>(
    &::GlobalNamespace::RecordingToolManager::get_configJsonData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2693088;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolManager*>::get(),
                                                                               "get_configJsonData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RecordingToolManager.get_recordingToolSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::RecordingToolSettings* (::GlobalNamespace::RecordingToolManager::*)()>(
    &::GlobalNamespace::RecordingToolManager::get_recordingToolSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2693090;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolManager*>::get(),
                                                                               "get_recordingToolSettings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RecordingToolManager.get_posesSerializer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IPosesSerializer* (::GlobalNamespace::RecordingToolManager::*)()>(
    &::GlobalNamespace::RecordingToolManager::get_posesSerializer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2693098;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolManager*>::get(),
                                                                               "get_posesSerializer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RecordingToolManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RecordingToolManager::*)(
    ::GlobalNamespace::RecordingToolConfigurationProcessor*, ::GlobalNamespace::BeatmapCharacteristicCollection*, ::Zenject::DiContainer*)>(&::GlobalNamespace::RecordingToolManager::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x26930a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolManager*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RecordingToolConfigurationProcessor*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicCollection*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RecordingToolManager.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RecordingToolManager::*)()>(&::GlobalNamespace::RecordingToolManager::Initialize)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2693128;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolManager*>::get(), "Initialize",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RecordingToolManager.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RecordingToolManager::*)()>(&::GlobalNamespace::RecordingToolManager::Dispose)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2693374;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolManager*>::get(), "Dispose",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RecordingToolManager.HandleGameplayLevelSceneTransitionEventsAnyGameplayLevelDidFinish
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RecordingToolManager::*)()>(
    &::GlobalNamespace::RecordingToolManager::HandleGameplayLevelSceneTransitionEventsAnyGameplayLevelDidFinish)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x269340c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolManager*>::get(),
                                    "HandleGameplayLevelSceneTransitionEventsAnyGameplayLevelDidFinish", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RecordingToolManager.StartNextRecording
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RecordingToolManager::*)()>(&::GlobalNamespace::RecordingToolManager::StartNextRecording)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x26931d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolManager*>::get(),
                                                                               "StartNextRecording", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RecordingToolManager.BindNextRecording
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::MenuDestination* (
    ::GlobalNamespace::RecordingToolManager::*)(::Zenject::DiContainer*, ::GlobalNamespace::RecordingSettings*, bool)>(&::GlobalNamespace::RecordingToolManager::BindNextRecording)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x26934a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolManager*>::get(), "BindNextRecording", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RecordingSettings*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Zenject::IInitializable"
constexpr GlobalNamespace::RecordingToolManager::operator ::Zenject::IInitializable*() noexcept {
  return static_cast<::Zenject::IInitializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IInitializable"
constexpr ::Zenject::IInitializable* GlobalNamespace::RecordingToolManager::i___Zenject__IInitializable() noexcept {
  return static_cast<::Zenject::IInitializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::RecordingToolManager::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::RecordingToolManager::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr ::GlobalNamespace::GameplayLevelSceneTransitionEvents*& GlobalNamespace::RecordingToolManager::__cordl_internal_get__gameplayLevelSceneTransitionEvents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayLevelSceneTransitionEvents;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayLevelSceneTransitionEvents*> const&
GlobalNamespace::RecordingToolManager::__cordl_internal_get__gameplayLevelSceneTransitionEvents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayLevelSceneTransitionEvents;
}
constexpr void GlobalNamespace::RecordingToolManager::__cordl_internal_set__gameplayLevelSceneTransitionEvents(::GlobalNamespace::GameplayLevelSceneTransitionEvents* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____gameplayLevelSceneTransitionEvents)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::GameScenesManager>& GlobalNamespace::RecordingToolManager::__cordl_internal_get__gameScenesManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameScenesManager;
}
constexpr ::UnityW<::GlobalNamespace::GameScenesManager> const& GlobalNamespace::RecordingToolManager::__cordl_internal_get__gameScenesManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameScenesManager;
}
constexpr void GlobalNamespace::RecordingToolManager::__cordl_internal_set__gameScenesManager(::UnityW<::GlobalNamespace::GameScenesManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____gameScenesManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::RecordingToolManager::__cordl_internal_get__recordingToolEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____recordingToolEnabled;
}
constexpr bool const& GlobalNamespace::RecordingToolManager::__cordl_internal_get__recordingToolEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____recordingToolEnabled;
}
constexpr void GlobalNamespace::RecordingToolManager::__cordl_internal_set__recordingToolEnabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____recordingToolEnabled = value;
}
constexpr bool& GlobalNamespace::RecordingToolManager::__cordl_internal_get__performanceRecordingEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____performanceRecordingEnabled;
}
constexpr bool const& GlobalNamespace::RecordingToolManager::__cordl_internal_get__performanceRecordingEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____performanceRecordingEnabled;
}
constexpr void GlobalNamespace::RecordingToolManager::__cordl_internal_set__performanceRecordingEnabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____performanceRecordingEnabled = value;
}
constexpr ::StringW& GlobalNamespace::RecordingToolManager::__cordl_internal_get__configJsonData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____configJsonData;
}
constexpr ::StringW const& GlobalNamespace::RecordingToolManager::__cordl_internal_get__configJsonData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____configJsonData;
}
constexpr void GlobalNamespace::RecordingToolManager::__cordl_internal_set__configJsonData(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____configJsonData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::RecordingToolSettings*& GlobalNamespace::RecordingToolManager::__cordl_internal_get__recordingToolSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____recordingToolSettings;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RecordingToolSettings*> const& GlobalNamespace::RecordingToolManager::__cordl_internal_get__recordingToolSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____recordingToolSettings;
}
constexpr void GlobalNamespace::RecordingToolManager::__cordl_internal_set__recordingToolSettings(::GlobalNamespace::RecordingToolSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____recordingToolSettings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::RecordingToolConfigurationProcessor*& GlobalNamespace::RecordingToolManager::__cordl_internal_get__configurationProcessor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____configurationProcessor;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RecordingToolConfigurationProcessor*> const&
GlobalNamespace::RecordingToolManager::__cordl_internal_get__configurationProcessor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____configurationProcessor;
}
constexpr void GlobalNamespace::RecordingToolManager::__cordl_internal_set__configurationProcessor(::GlobalNamespace::RecordingToolConfigurationProcessor* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____configurationProcessor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Zenject::DiContainer*& GlobalNamespace::RecordingToolManager::__cordl_internal_get__container() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& GlobalNamespace::RecordingToolManager::__cordl_internal_get__container() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
constexpr void GlobalNamespace::RecordingToolManager::__cordl_internal_set__container(::Zenject::DiContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____container)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IBeatSaberLogger*& GlobalNamespace::RecordingToolManager::__cordl_internal_get__logger() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____logger;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatSaberLogger*> const& GlobalNamespace::RecordingToolManager::__cordl_internal_get__logger() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____logger;
}
constexpr void GlobalNamespace::RecordingToolManager::__cordl_internal_set__logger(::GlobalNamespace::IBeatSaberLogger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____logger)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IPosesSerializer*& GlobalNamespace::RecordingToolManager::__cordl_internal_get__posesSerializer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____posesSerializer;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IPosesSerializer*> const& GlobalNamespace::RecordingToolManager::__cordl_internal_get__posesSerializer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____posesSerializer;
}
constexpr void GlobalNamespace::RecordingToolManager::__cordl_internal_set__posesSerializer(::GlobalNamespace::IPosesSerializer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____posesSerializer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
inline bool GlobalNamespace::RecordingToolManager::get_recordingToolEnabled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolManager*>::get(),
                                                                             "get_recordingToolEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::RecordingToolManager::get_showRecordingToolScene() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolManager*>::get(),
                                                                             "get_showRecordingToolScene", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::RecordingToolManager::get_performanceRecordingEnabled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolManager*>::get(),
                                                                             "get_performanceRecordingEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::RecordingToolManager::get_configJsonData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolManager*>::get(),
                                                                             "get_configJsonData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::GlobalNamespace::RecordingToolSettings* GlobalNamespace::RecordingToolManager::get_recordingToolSettings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolManager*>::get(),
                                                                             "get_recordingToolSettings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::RecordingToolSettings*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::IPosesSerializer* GlobalNamespace::RecordingToolManager::get_posesSerializer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolManager*>::get(),
                                                                             "get_posesSerializer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IPosesSerializer*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::RecordingToolManager* GlobalNamespace::RecordingToolManager::New_ctor(::GlobalNamespace::RecordingToolConfigurationProcessor* processor,
                                                                                                ::GlobalNamespace::BeatmapCharacteristicCollection* beatmapCharacteristicCollection,
                                                                                                ::Zenject::DiContainer* diContainer) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::RecordingToolManager*>(processor, beatmapCharacteristicCollection, diContainer));
}
inline void GlobalNamespace::RecordingToolManager::_ctor(::GlobalNamespace::RecordingToolConfigurationProcessor* processor,
                                                         ::GlobalNamespace::BeatmapCharacteristicCollection* beatmapCharacteristicCollection, ::Zenject::DiContainer* diContainer) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolManager*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RecordingToolConfigurationProcessor*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicCollection*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, processor, beatmapCharacteristicCollection, diContainer);
}
inline void GlobalNamespace::RecordingToolManager::Initialize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolManager*>::get(), "Initialize",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::RecordingToolManager::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolManager*>::get(), "Dispose",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::RecordingToolManager::HandleGameplayLevelSceneTransitionEventsAnyGameplayLevelDidFinish() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolManager*>::get(),
                                  "HandleGameplayLevelSceneTransitionEventsAnyGameplayLevelDidFinish", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::RecordingToolManager::StartNextRecording() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolManager*>::get(),
                                                                             "StartNextRecording", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MenuDestination* GlobalNamespace::RecordingToolManager::BindNextRecording(::Zenject::DiContainer* container, ::GlobalNamespace::RecordingSettings* recordingSettings,
                                                                                                    bool quitAppAfterRun) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolManager*>::get(), "BindNextRecording", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RecordingSettings*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MenuDestination*, false>(this, ___internal_method, container, recordingSettings, quitAppAfterRun);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RecordingToolManager::RecordingToolManager() {}

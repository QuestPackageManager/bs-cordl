#pragma once
// IWYU pragma private; include "GlobalNamespace/InitialDestinationResolver.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__InitialDestinationResolver_def.hpp"
#include "BeatSaber/Destinations/zzzz__Destination_def.hpp"
#include "BeatSaber/Destinations/zzzz__IInitialDestinationResolver_def.hpp"
#include "BeatSaber/Destinations/zzzz__InitialDestinationController_def.hpp"
#include "GlobalNamespace/zzzz__AudioClipAsyncLoader_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicCollection_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataLoader_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelsEntitlementModel_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelsModel_def.hpp"
#include "GlobalNamespace/zzzz__ColorSchemesSettings_def.hpp"
#include "GlobalNamespace/zzzz__CreditsScenesTransitionSetupDataSO_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentsListModel_def.hpp"
#include "GlobalNamespace/zzzz__GameScenesManager_def.hpp"
#include "GlobalNamespace/zzzz__HealthWarningSceneSetupData_def.hpp"
#include "GlobalNamespace/zzzz__InitialDestinationResolver_def.hpp"
#include "GlobalNamespace/zzzz__LevelCompletionResults_def.hpp"
#include "GlobalNamespace/zzzz__MenuTransitionsHelper_def.hpp"
#include "GlobalNamespace/zzzz__PlayerDataFileModel_def.hpp"
#include "GlobalNamespace/zzzz__PlayerDataModel_def.hpp"
#include "GlobalNamespace/zzzz__RecordingToolManager_def.hpp"
#include "GlobalNamespace/zzzz__RecordingToolSceneSetupData_def.hpp"
#include "GlobalNamespace/zzzz__SettingsManager_def.hpp"
#include "GlobalNamespace/zzzz__ShaderWarmupSceneSetupData_def.hpp"
#include "GlobalNamespace/zzzz__StandardLevelScenesTransitionSetupDataSO_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "Zenject/zzzz__IInitializable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::InitialDestinationResolver___c__DisplayClass28_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::InitialDestinationResolver___c__DisplayClass28_0::*)()>(
    &::GlobalNamespace::InitialDestinationResolver___c__DisplayClass28_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x36727c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InitialDestinationResolver___c__DisplayClass28_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InitialDestinationResolver___c__DisplayClass28_0._InitializeStandardLevelSetupData_g__HandleFinishEvent_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::InitialDestinationResolver___c__DisplayClass28_0::*)(
    ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*, ::GlobalNamespace::LevelCompletionResults*)>(
    &::GlobalNamespace::InitialDestinationResolver___c__DisplayClass28_0::_InitializeStandardLevelSetupData_g__HandleFinishEvent_0)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x3672884;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InitialDestinationResolver___c__DisplayClass28_0*>::get(),
                                    "<InitializeStandardLevelSetupData>g__HandleFinishEvent|0", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelCompletionResults*>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>& GlobalNamespace::InitialDestinationResolver___c__DisplayClass28_0::__cordl_internal_get_setupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___setupData;
}
constexpr ::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO> const& GlobalNamespace::InitialDestinationResolver___c__DisplayClass28_0::__cordl_internal_get_setupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___setupData;
}
constexpr void GlobalNamespace::InitialDestinationResolver___c__DisplayClass28_0::__cordl_internal_set_setupData(::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___setupData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::InitialDestinationResolver*& GlobalNamespace::InitialDestinationResolver___c__DisplayClass28_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::GlobalNamespace::InitialDestinationResolver* const& GlobalNamespace::InitialDestinationResolver___c__DisplayClass28_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::InitialDestinationResolver___c__DisplayClass28_0::__cordl_internal_set___4__this(::GlobalNamespace::InitialDestinationResolver* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::InitialDestinationResolver___c__DisplayClass28_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InitialDestinationResolver___c__DisplayClass28_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::InitialDestinationResolver___c__DisplayClass28_0::_InitializeStandardLevelSetupData_g__HandleFinishEvent_0(
    ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* standardLevelScenesTransitionSetupData, ::GlobalNamespace::LevelCompletionResults* levelCompletionResults) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InitialDestinationResolver___c__DisplayClass28_0*>::get(),
                                  "<InitializeStandardLevelSetupData>g__HandleFinishEvent|0", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelCompletionResults*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, standardLevelScenesTransitionSetupData, levelCompletionResults);
}
inline ::GlobalNamespace::InitialDestinationResolver___c__DisplayClass28_0* GlobalNamespace::InitialDestinationResolver___c__DisplayClass28_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::InitialDestinationResolver___c__DisplayClass28_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InitialDestinationResolver___c__DisplayClass28_0::InitialDestinationResolver___c__DisplayClass28_0() {}
//  Writing Method size for method: ::GlobalNamespace::InitialDestinationResolver__GoToCreditsAsync_d__24.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::InitialDestinationResolver__GoToCreditsAsync_d__24::*)()>(
    &::GlobalNamespace::InitialDestinationResolver__GoToCreditsAsync_d__24::MoveNext)> {
  constexpr static std::size_t size = 0x3f4;
  constexpr static std::size_t addrs = 0x3672a80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InitialDestinationResolver__GoToCreditsAsync_d__24>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InitialDestinationResolver__GoToCreditsAsync_d__24.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::InitialDestinationResolver__GoToCreditsAsync_d__24::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::InitialDestinationResolver__GoToCreditsAsync_d__24::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3672e74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InitialDestinationResolver__GoToCreditsAsync_d__24>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::InitialDestinationResolver__GoToCreditsAsync_d__24::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InitialDestinationResolver__GoToCreditsAsync_d__24>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::InitialDestinationResolver__GoToCreditsAsync_d__24::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InitialDestinationResolver__GoToCreditsAsync_d__24>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::InitialDestinationResolver__GoToCreditsAsync_d__24::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::InitialDestinationResolver__GoToCreditsAsync_d__24::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::InitialDestinationResolver*", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "targetDestination", ty: "::BeatSaber::Destinations::Destination*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_transition_5__2", ty:
// "::UnityW<::GlobalNamespace::CreditsScenesTransitionSetupDataSO>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter",
// modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::InitialDestinationResolver__GoToCreditsAsync_d__24::InitialDestinationResolver__GoToCreditsAsync_d__24(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::GlobalNamespace::InitialDestinationResolver* __4__this,
    ::BeatSaber::Destinations::Destination* targetDestination, ::UnityW<::GlobalNamespace::CreditsScenesTransitionSetupDataSO> _transition_5__2,
    ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->targetDestination = targetDestination;
  this->_transition_5__2 = _transition_5__2;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InitialDestinationResolver__GoToCreditsAsync_d__24::InitialDestinationResolver__GoToCreditsAsync_d__24() {}
//  Writing Method size for method: ::GlobalNamespace::InitialDestinationResolver__GoToMainMenuAsync_d__25.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::InitialDestinationResolver__GoToMainMenuAsync_d__25::*)()>(
    &::GlobalNamespace::InitialDestinationResolver__GoToMainMenuAsync_d__25::MoveNext)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x3672ee0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InitialDestinationResolver__GoToMainMenuAsync_d__25>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InitialDestinationResolver__GoToMainMenuAsync_d__25.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::InitialDestinationResolver__GoToMainMenuAsync_d__25::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::InitialDestinationResolver__GoToMainMenuAsync_d__25::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x367310c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InitialDestinationResolver__GoToMainMenuAsync_d__25>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::InitialDestinationResolver__GoToMainMenuAsync_d__25::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InitialDestinationResolver__GoToMainMenuAsync_d__25>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::InitialDestinationResolver__GoToMainMenuAsync_d__25::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InitialDestinationResolver__GoToMainMenuAsync_d__25>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::InitialDestinationResolver__GoToMainMenuAsync_d__25::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::InitialDestinationResolver__GoToMainMenuAsync_d__25::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::InitialDestinationResolver*", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::InitialDestinationResolver__GoToMainMenuAsync_d__25::InitialDestinationResolver__GoToMainMenuAsync_d__25(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::GlobalNamespace::InitialDestinationResolver* __4__this,
    ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InitialDestinationResolver__GoToMainMenuAsync_d__25::InitialDestinationResolver__GoToMainMenuAsync_d__25() {}
//  Writing Method size for method: ::GlobalNamespace::InitialDestinationResolver__GoToRecordingToolAsync_d__19.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::InitialDestinationResolver__GoToRecordingToolAsync_d__19::*)()>(
    &::GlobalNamespace::InitialDestinationResolver__GoToRecordingToolAsync_d__19::MoveNext)> {
  constexpr static std::size_t size = 0x424;
  constexpr static std::size_t addrs = 0x3673178;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InitialDestinationResolver__GoToRecordingToolAsync_d__19>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InitialDestinationResolver__GoToRecordingToolAsync_d__19.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::InitialDestinationResolver__GoToRecordingToolAsync_d__19::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::InitialDestinationResolver__GoToRecordingToolAsync_d__19::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x367359c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InitialDestinationResolver__GoToRecordingToolAsync_d__19>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::InitialDestinationResolver__GoToRecordingToolAsync_d__19::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InitialDestinationResolver__GoToRecordingToolAsync_d__19>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::InitialDestinationResolver__GoToRecordingToolAsync_d__19::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InitialDestinationResolver__GoToRecordingToolAsync_d__19>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::InitialDestinationResolver__GoToRecordingToolAsync_d__19::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::InitialDestinationResolver__GoToRecordingToolAsync_d__19::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::InitialDestinationResolver*", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "_setupData_5__2", ty: "::GlobalNamespace::RecordingToolSceneSetupData*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "",
// def_value: Some("{}") }]
constexpr ::GlobalNamespace::InitialDestinationResolver__GoToRecordingToolAsync_d__19::InitialDestinationResolver__GoToRecordingToolAsync_d__19(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::GlobalNamespace::InitialDestinationResolver* __4__this,
    ::GlobalNamespace::RecordingToolSceneSetupData* _setupData_5__2, ::System::Runtime::CompilerServices::TaskAwaiter __u__1,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->_setupData_5__2 = _setupData_5__2;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InitialDestinationResolver__GoToRecordingToolAsync_d__19::InitialDestinationResolver__GoToRecordingToolAsync_d__19() {}
//  Writing Method size for method: ::GlobalNamespace::InitialDestinationResolver__GoToStandardLevelAsync_d__21.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::InitialDestinationResolver__GoToStandardLevelAsync_d__21::*)()>(
    &::GlobalNamespace::InitialDestinationResolver__GoToStandardLevelAsync_d__21::MoveNext)> {
  constexpr static std::size_t size = 0x37c;
  constexpr static std::size_t addrs = 0x3673608;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InitialDestinationResolver__GoToStandardLevelAsync_d__21>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InitialDestinationResolver__GoToStandardLevelAsync_d__21.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::InitialDestinationResolver__GoToStandardLevelAsync_d__21::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::InitialDestinationResolver__GoToStandardLevelAsync_d__21::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3673984;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InitialDestinationResolver__GoToStandardLevelAsync_d__21>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::InitialDestinationResolver__GoToStandardLevelAsync_d__21::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InitialDestinationResolver__GoToStandardLevelAsync_d__21>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::InitialDestinationResolver__GoToStandardLevelAsync_d__21::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InitialDestinationResolver__GoToStandardLevelAsync_d__21>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::InitialDestinationResolver__GoToStandardLevelAsync_d__21::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::InitialDestinationResolver__GoToStandardLevelAsync_d__21::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "targetDestination", ty: "::BeatSaber::Destinations::Destination*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::InitialDestinationResolver*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::InitialDestinationResolver__GoToStandardLevelAsync_d__21::InitialDestinationResolver__GoToStandardLevelAsync_d__21(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::BeatSaber::Destinations::Destination* targetDestination,
    ::GlobalNamespace::InitialDestinationResolver* __4__this, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->targetDestination = targetDestination;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InitialDestinationResolver__GoToStandardLevelAsync_d__21::InitialDestinationResolver__GoToStandardLevelAsync_d__21() {}
//  Writing Method size for method: ::GlobalNamespace::InitialDestinationResolver__GoToStartupErrorAsync_d__22.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::InitialDestinationResolver__GoToStartupErrorAsync_d__22::*)()>(
    &::GlobalNamespace::InitialDestinationResolver__GoToStartupErrorAsync_d__22::MoveNext)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x36739f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InitialDestinationResolver__GoToStartupErrorAsync_d__22>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InitialDestinationResolver__GoToStartupErrorAsync_d__22.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::InitialDestinationResolver__GoToStartupErrorAsync_d__22::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::InitialDestinationResolver__GoToStartupErrorAsync_d__22::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3673d0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InitialDestinationResolver__GoToStartupErrorAsync_d__22>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::InitialDestinationResolver__GoToStartupErrorAsync_d__22::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InitialDestinationResolver__GoToStartupErrorAsync_d__22>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::InitialDestinationResolver__GoToStartupErrorAsync_d__22::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InitialDestinationResolver__GoToStartupErrorAsync_d__22>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::InitialDestinationResolver__GoToStartupErrorAsync_d__22::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::InitialDestinationResolver__GoToStartupErrorAsync_d__22::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "targetDestination", ty: "::BeatSaber::Destinations::Destination*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::InitialDestinationResolver*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::InitialDestinationResolver__GoToStartupErrorAsync_d__22::InitialDestinationResolver__GoToStartupErrorAsync_d__22(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::BeatSaber::Destinations::Destination* targetDestination,
    ::GlobalNamespace::InitialDestinationResolver* __4__this, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->targetDestination = targetDestination;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InitialDestinationResolver__GoToStartupErrorAsync_d__22::InitialDestinationResolver__GoToStartupErrorAsync_d__22() {}
//  Writing Method size for method: ::GlobalNamespace::InitialDestinationResolver__GoToTargetDestinationAsync_d__17.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::InitialDestinationResolver__GoToTargetDestinationAsync_d__17::*)()>(
    &::GlobalNamespace::InitialDestinationResolver__GoToTargetDestinationAsync_d__17::MoveNext)> {
  constexpr static std::size_t size = 0x6dc;
  constexpr static std::size_t addrs = 0x3673d78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InitialDestinationResolver__GoToTargetDestinationAsync_d__17>::get(),
                                                 "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InitialDestinationResolver__GoToTargetDestinationAsync_d__17.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::InitialDestinationResolver__GoToTargetDestinationAsync_d__17::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::InitialDestinationResolver__GoToTargetDestinationAsync_d__17::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3674454;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InitialDestinationResolver__GoToTargetDestinationAsync_d__17>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::InitialDestinationResolver__GoToTargetDestinationAsync_d__17::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InitialDestinationResolver__GoToTargetDestinationAsync_d__17>::get(),
                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::InitialDestinationResolver__GoToTargetDestinationAsync_d__17::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InitialDestinationResolver__GoToTargetDestinationAsync_d__17>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::InitialDestinationResolver__GoToTargetDestinationAsync_d__17::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::InitialDestinationResolver__GoToTargetDestinationAsync_d__17::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "targetDestination", ty: "::BeatSaber::Destinations::Destination*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::InitialDestinationResolver*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::InitialDestinationResolver__GoToTargetDestinationAsync_d__17::InitialDestinationResolver__GoToTargetDestinationAsync_d__17(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::BeatSaber::Destinations::Destination* targetDestination,
    ::GlobalNamespace::InitialDestinationResolver* __4__this, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->targetDestination = targetDestination;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InitialDestinationResolver__GoToTargetDestinationAsync_d__17::InitialDestinationResolver__GoToTargetDestinationAsync_d__17() {}
//  Writing Method size for method: ::GlobalNamespace::InitialDestinationResolver__GoToTutorialAsync_d__23.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::InitialDestinationResolver__GoToTutorialAsync_d__23::*)()>(
    &::GlobalNamespace::InitialDestinationResolver__GoToTutorialAsync_d__23::MoveNext)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x36744c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InitialDestinationResolver__GoToTutorialAsync_d__23>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InitialDestinationResolver__GoToTutorialAsync_d__23.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::InitialDestinationResolver__GoToTutorialAsync_d__23::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::InitialDestinationResolver__GoToTutorialAsync_d__23::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3674738;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InitialDestinationResolver__GoToTutorialAsync_d__23>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::InitialDestinationResolver__GoToTutorialAsync_d__23::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InitialDestinationResolver__GoToTutorialAsync_d__23>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::InitialDestinationResolver__GoToTutorialAsync_d__23::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InitialDestinationResolver__GoToTutorialAsync_d__23>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::InitialDestinationResolver__GoToTutorialAsync_d__23::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::InitialDestinationResolver__GoToTutorialAsync_d__23::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::InitialDestinationResolver*", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "targetDestination", ty: "::BeatSaber::Destinations::Destination*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::InitialDestinationResolver__GoToTutorialAsync_d__23::InitialDestinationResolver__GoToTutorialAsync_d__23(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::GlobalNamespace::InitialDestinationResolver* __4__this,
    ::BeatSaber::Destinations::Destination* targetDestination, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->targetDestination = targetDestination;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InitialDestinationResolver__GoToTutorialAsync_d__23::InitialDestinationResolver__GoToTutorialAsync_d__23() {}
//  Writing Method size for method: ::GlobalNamespace::InitialDestinationResolver__InitializeScenesAsync_d__16.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::InitialDestinationResolver__InitializeScenesAsync_d__16::*)()>(
    &::GlobalNamespace::InitialDestinationResolver__InitializeScenesAsync_d__16::MoveNext)> {
  constexpr static std::size_t size = 0x56c;
  constexpr static std::size_t addrs = 0x36747a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InitialDestinationResolver__InitializeScenesAsync_d__16>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InitialDestinationResolver__InitializeScenesAsync_d__16.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::InitialDestinationResolver__InitializeScenesAsync_d__16::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::InitialDestinationResolver__InitializeScenesAsync_d__16::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3674d10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InitialDestinationResolver__InitializeScenesAsync_d__16>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::InitialDestinationResolver__InitializeScenesAsync_d__16::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InitialDestinationResolver__InitializeScenesAsync_d__16>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::InitialDestinationResolver__InitializeScenesAsync_d__16::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InitialDestinationResolver__InitializeScenesAsync_d__16>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::InitialDestinationResolver__InitializeScenesAsync_d__16::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::InitialDestinationResolver__InitializeScenesAsync_d__16::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::InitialDestinationResolver*", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "_targetDestination_5__2", ty: "::BeatSaber::Destinations::Destination*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::InitialDestinationResolver__InitializeScenesAsync_d__16::InitialDestinationResolver__InitializeScenesAsync_d__16(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::GlobalNamespace::InitialDestinationResolver* __4__this,
    ::BeatSaber::Destinations::Destination* _targetDestination_5__2, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->_targetDestination_5__2 = _targetDestination_5__2;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InitialDestinationResolver__InitializeScenesAsync_d__16::InitialDestinationResolver__InitializeScenesAsync_d__16() {}
//  Writing Method size for method: ::GlobalNamespace::InitialDestinationResolver__LaunchRecordingToolAsync_d__18.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::InitialDestinationResolver__LaunchRecordingToolAsync_d__18::*)()>(
    &::GlobalNamespace::InitialDestinationResolver__LaunchRecordingToolAsync_d__18::MoveNext)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x3674d7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InitialDestinationResolver__LaunchRecordingToolAsync_d__18>::get(),
                                                 "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InitialDestinationResolver__LaunchRecordingToolAsync_d__18.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::InitialDestinationResolver__LaunchRecordingToolAsync_d__18::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::InitialDestinationResolver__LaunchRecordingToolAsync_d__18::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3674fcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InitialDestinationResolver__LaunchRecordingToolAsync_d__18>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::InitialDestinationResolver__LaunchRecordingToolAsync_d__18::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InitialDestinationResolver__LaunchRecordingToolAsync_d__18>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::InitialDestinationResolver__LaunchRecordingToolAsync_d__18::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InitialDestinationResolver__LaunchRecordingToolAsync_d__18>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::InitialDestinationResolver__LaunchRecordingToolAsync_d__18::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::InitialDestinationResolver__LaunchRecordingToolAsync_d__18::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::InitialDestinationResolver*", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::InitialDestinationResolver__LaunchRecordingToolAsync_d__18::InitialDestinationResolver__LaunchRecordingToolAsync_d__18(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::GlobalNamespace::InitialDestinationResolver* __4__this,
    ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InitialDestinationResolver__LaunchRecordingToolAsync_d__18::InitialDestinationResolver__LaunchRecordingToolAsync_d__18() {}
//  Writing Method size for method: ::GlobalNamespace::InitialDestinationResolver__PresentHealthWarningAsync_d__27.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::InitialDestinationResolver__PresentHealthWarningAsync_d__27::*)()>(
    &::GlobalNamespace::InitialDestinationResolver__PresentHealthWarningAsync_d__27::MoveNext)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x3675038;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InitialDestinationResolver__PresentHealthWarningAsync_d__27>::get(),
                                                 "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InitialDestinationResolver__PresentHealthWarningAsync_d__27.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::InitialDestinationResolver__PresentHealthWarningAsync_d__27::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::InitialDestinationResolver__PresentHealthWarningAsync_d__27::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x36753d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InitialDestinationResolver__PresentHealthWarningAsync_d__27>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::InitialDestinationResolver__PresentHealthWarningAsync_d__27::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InitialDestinationResolver__PresentHealthWarningAsync_d__27>::get(),
                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::InitialDestinationResolver__PresentHealthWarningAsync_d__27::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InitialDestinationResolver__PresentHealthWarningAsync_d__27>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::InitialDestinationResolver__PresentHealthWarningAsync_d__27::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::InitialDestinationResolver__PresentHealthWarningAsync_d__27::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::InitialDestinationResolver*", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "_sceneSetupData_5__2", ty: "::GlobalNamespace::HealthWarningSceneSetupData*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "",
// def_value: Some("{}") }]
constexpr ::GlobalNamespace::InitialDestinationResolver__PresentHealthWarningAsync_d__27::InitialDestinationResolver__PresentHealthWarningAsync_d__27(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::GlobalNamespace::InitialDestinationResolver* __4__this,
    ::GlobalNamespace::HealthWarningSceneSetupData* _sceneSetupData_5__2, ::System::Runtime::CompilerServices::TaskAwaiter __u__1,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->_sceneSetupData_5__2 = _sceneSetupData_5__2;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InitialDestinationResolver__PresentHealthWarningAsync_d__27::InitialDestinationResolver__PresentHealthWarningAsync_d__27() {}
//  Writing Method size for method: ::GlobalNamespace::InitialDestinationResolver__PresentShaderWarmUpAsync_d__26.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::InitialDestinationResolver__PresentShaderWarmUpAsync_d__26::*)()>(
    &::GlobalNamespace::InitialDestinationResolver__PresentShaderWarmUpAsync_d__26::MoveNext)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x3675444;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InitialDestinationResolver__PresentShaderWarmUpAsync_d__26>::get(),
                                                 "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InitialDestinationResolver__PresentShaderWarmUpAsync_d__26.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::InitialDestinationResolver__PresentShaderWarmUpAsync_d__26::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::InitialDestinationResolver__PresentShaderWarmUpAsync_d__26::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x36757e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InitialDestinationResolver__PresentShaderWarmUpAsync_d__26>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::InitialDestinationResolver__PresentShaderWarmUpAsync_d__26::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InitialDestinationResolver__PresentShaderWarmUpAsync_d__26>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::InitialDestinationResolver__PresentShaderWarmUpAsync_d__26::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InitialDestinationResolver__PresentShaderWarmUpAsync_d__26>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::InitialDestinationResolver__PresentShaderWarmUpAsync_d__26::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::InitialDestinationResolver__PresentShaderWarmUpAsync_d__26::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::InitialDestinationResolver*", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "_sceneSetupData_5__2", ty: "::GlobalNamespace::ShaderWarmupSceneSetupData*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "",
// def_value: Some("{}") }]
constexpr ::GlobalNamespace::InitialDestinationResolver__PresentShaderWarmUpAsync_d__26::InitialDestinationResolver__PresentShaderWarmUpAsync_d__26(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::GlobalNamespace::InitialDestinationResolver* __4__this,
    ::GlobalNamespace::ShaderWarmupSceneSetupData* _sceneSetupData_5__2, ::System::Runtime::CompilerServices::TaskAwaiter __u__1,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->_sceneSetupData_5__2 = _sceneSetupData_5__2;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InitialDestinationResolver__PresentShaderWarmUpAsync_d__26::InitialDestinationResolver__PresentShaderWarmUpAsync_d__26() {}
//  Writing Method size for method: ::GlobalNamespace::InitialDestinationResolver.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::InitialDestinationResolver::*)()>(
    &::GlobalNamespace::InitialDestinationResolver::Initialize)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3671bd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InitialDestinationResolver*>::get(),
                                                                               "Initialize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InitialDestinationResolver.InitializeScenesAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::InitialDestinationResolver::*)()>(
    &::GlobalNamespace::InitialDestinationResolver::InitializeScenesAsync)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x3671bec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InitialDestinationResolver*>::get(),
                                                                               "InitializeScenesAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InitialDestinationResolver.GoToTargetDestinationAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::GlobalNamespace::InitialDestinationResolver::*)(::BeatSaber::Destinations::Destination*)>(&::GlobalNamespace::InitialDestinationResolver::GoToTargetDestinationAsync)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x3671ca0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InitialDestinationResolver*>::get(), "GoToTargetDestinationAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Destinations::Destination*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InitialDestinationResolver.LaunchRecordingToolAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::InitialDestinationResolver::*)()>(
    &::GlobalNamespace::InitialDestinationResolver::LaunchRecordingToolAsync)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3671d64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InitialDestinationResolver*>::get(),
                                                                               "LaunchRecordingToolAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InitialDestinationResolver.GoToRecordingToolAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::InitialDestinationResolver::*)()>(
    &::GlobalNamespace::InitialDestinationResolver::GoToRecordingToolAsync)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3671e14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InitialDestinationResolver*>::get(),
                                                                               "GoToRecordingToolAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InitialDestinationResolver.DelaySmallAmountOfTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (*)()>(&::GlobalNamespace::InitialDestinationResolver::DelaySmallAmountOfTime)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3671ec4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InitialDestinationResolver*>::get(),
                                                                               "DelaySmallAmountOfTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InitialDestinationResolver.GoToStandardLevelAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::GlobalNamespace::InitialDestinationResolver::*)(::BeatSaber::Destinations::Destination*)>(&::GlobalNamespace::InitialDestinationResolver::GoToStandardLevelAsync)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x3671f1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InitialDestinationResolver*>::get(), "GoToStandardLevelAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Destinations::Destination*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InitialDestinationResolver.GoToStartupErrorAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::GlobalNamespace::InitialDestinationResolver::*)(::BeatSaber::Destinations::Destination*)>(&::GlobalNamespace::InitialDestinationResolver::GoToStartupErrorAsync)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x3671fe0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InitialDestinationResolver*>::get(), "GoToStartupErrorAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Destinations::Destination*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InitialDestinationResolver.GoToTutorialAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::GlobalNamespace::InitialDestinationResolver::*)(::BeatSaber::Destinations::Destination*)>(&::GlobalNamespace::InitialDestinationResolver::GoToTutorialAsync)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x36720a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InitialDestinationResolver*>::get(), "GoToTutorialAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Destinations::Destination*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InitialDestinationResolver.GoToCreditsAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::GlobalNamespace::InitialDestinationResolver::*)(::BeatSaber::Destinations::Destination*)>(&::GlobalNamespace::InitialDestinationResolver::GoToCreditsAsync)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x3672168;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InitialDestinationResolver*>::get(), "GoToCreditsAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Destinations::Destination*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InitialDestinationResolver.GoToMainMenuAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::InitialDestinationResolver::*)()>(
    &::GlobalNamespace::InitialDestinationResolver::GoToMainMenuAsync)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3672228;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InitialDestinationResolver*>::get(),
                                                                               "GoToMainMenuAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InitialDestinationResolver.PresentShaderWarmUpAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::InitialDestinationResolver::*)()>(
    &::GlobalNamespace::InitialDestinationResolver::PresentShaderWarmUpAsync)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x36722d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InitialDestinationResolver*>::get(),
                                                                               "PresentShaderWarmUpAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InitialDestinationResolver.PresentHealthWarningAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::InitialDestinationResolver::*)()>(
    &::GlobalNamespace::InitialDestinationResolver::PresentHealthWarningAsync)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3672388;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InitialDestinationResolver*>::get(),
                                                                               "PresentHealthWarningAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InitialDestinationResolver.InitializeStandardLevelSetupData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::InitialDestinationResolver::*)(
    ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*, ::BeatSaber::Destinations::Destination*)>(&::GlobalNamespace::InitialDestinationResolver::InitializeStandardLevelSetupData)> {
  constexpr static std::size_t size = 0x38c;
  constexpr static std::size_t addrs = 0x3672438;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InitialDestinationResolver*>::get(), "InitializeStandardLevelSetupData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Destinations::Destination*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InitialDestinationResolver._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::InitialDestinationResolver::*)()>(&::GlobalNamespace::InitialDestinationResolver::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x36727c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InitialDestinationResolver*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InitialDestinationResolver._GoToCreditsAsync_g__HandleCreditsSceneDidFinish_24_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::InitialDestinationResolver::*)(::GlobalNamespace::CreditsScenesTransitionSetupDataSO*)>(
    &::GlobalNamespace::InitialDestinationResolver::_GoToCreditsAsync_g__HandleCreditsSceneDidFinish_24_0)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x36727cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InitialDestinationResolver*>::get(),
                                    "<GoToCreditsAsync>g__HandleCreditsSceneDidFinish|24_0", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::CreditsScenesTransitionSetupDataSO*>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BeatmapLevelsModel*& GlobalNamespace::InitialDestinationResolver::__cordl_internal_get__beatmapLevelsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelsModel;
}
constexpr ::GlobalNamespace::BeatmapLevelsModel* const& GlobalNamespace::InitialDestinationResolver::__cordl_internal_get__beatmapLevelsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelsModel;
}
constexpr void GlobalNamespace::InitialDestinationResolver::__cordl_internal_set__beatmapLevelsModel(::GlobalNamespace::BeatmapLevelsModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapLevelsModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::BeatSaber::Destinations::InitialDestinationController>& GlobalNamespace::InitialDestinationResolver::__cordl_internal_get__controller() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____controller;
}
constexpr ::UnityW<::BeatSaber::Destinations::InitialDestinationController> const& GlobalNamespace::InitialDestinationResolver::__cordl_internal_get__controller() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____controller;
}
constexpr void GlobalNamespace::InitialDestinationResolver::__cordl_internal_set__controller(::UnityW<::BeatSaber::Destinations::InitialDestinationController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____controller)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::GameScenesManager>& GlobalNamespace::InitialDestinationResolver::__cordl_internal_get__gameScenesManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameScenesManager;
}
constexpr ::UnityW<::GlobalNamespace::GameScenesManager> const& GlobalNamespace::InitialDestinationResolver::__cordl_internal_get__gameScenesManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameScenesManager;
}
constexpr void GlobalNamespace::InitialDestinationResolver::__cordl_internal_set__gameScenesManager(::UnityW<::GlobalNamespace::GameScenesManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____gameScenesManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapCharacteristicCollection*& GlobalNamespace::InitialDestinationResolver::__cordl_internal_get_characteristicCollection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___characteristicCollection;
}
constexpr ::GlobalNamespace::BeatmapCharacteristicCollection* const& GlobalNamespace::InitialDestinationResolver::__cordl_internal_get_characteristicCollection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___characteristicCollection;
}
constexpr void GlobalNamespace::InitialDestinationResolver::__cordl_internal_set_characteristicCollection(::GlobalNamespace::BeatmapCharacteristicCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___characteristicCollection)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::EnvironmentsListModel*& GlobalNamespace::InitialDestinationResolver::__cordl_internal_get__environmentsListModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentsListModel;
}
constexpr ::GlobalNamespace::EnvironmentsListModel* const& GlobalNamespace::InitialDestinationResolver::__cordl_internal_get__environmentsListModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentsListModel;
}
constexpr void GlobalNamespace::InitialDestinationResolver::__cordl_internal_set__environmentsListModel(::GlobalNamespace::EnvironmentsListModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____environmentsListModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::AudioClipAsyncLoader*& GlobalNamespace::InitialDestinationResolver::__cordl_internal_get__audioClipAsyncLoader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioClipAsyncLoader;
}
constexpr ::GlobalNamespace::AudioClipAsyncLoader* const& GlobalNamespace::InitialDestinationResolver::__cordl_internal_get__audioClipAsyncLoader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioClipAsyncLoader;
}
constexpr void GlobalNamespace::InitialDestinationResolver::__cordl_internal_set__audioClipAsyncLoader(::GlobalNamespace::AudioClipAsyncLoader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____audioClipAsyncLoader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::SettingsManager*& GlobalNamespace::InitialDestinationResolver::__cordl_internal_get__settingsManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsManager;
}
constexpr ::GlobalNamespace::SettingsManager* const& GlobalNamespace::InitialDestinationResolver::__cordl_internal_get__settingsManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsManager;
}
constexpr void GlobalNamespace::InitialDestinationResolver::__cordl_internal_set__settingsManager(::GlobalNamespace::SettingsManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____settingsManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapDataLoader*& GlobalNamespace::InitialDestinationResolver::__cordl_internal_get__beatmapDataLoader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapDataLoader;
}
constexpr ::GlobalNamespace::BeatmapDataLoader* const& GlobalNamespace::InitialDestinationResolver::__cordl_internal_get__beatmapDataLoader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapDataLoader;
}
constexpr void GlobalNamespace::InitialDestinationResolver::__cordl_internal_set__beatmapDataLoader(::GlobalNamespace::BeatmapDataLoader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapDataLoader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::PlayerDataFileModel*& GlobalNamespace::InitialDestinationResolver::__cordl_internal_get__playerDataFileModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataFileModel;
}
constexpr ::GlobalNamespace::PlayerDataFileModel* const& GlobalNamespace::InitialDestinationResolver::__cordl_internal_get__playerDataFileModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataFileModel;
}
constexpr void GlobalNamespace::InitialDestinationResolver::__cordl_internal_set__playerDataFileModel(::GlobalNamespace::PlayerDataFileModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playerDataFileModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapLevelsEntitlementModel*& GlobalNamespace::InitialDestinationResolver::__cordl_internal_get__beatmapLevelsEntitlementModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelsEntitlementModel;
}
constexpr ::GlobalNamespace::BeatmapLevelsEntitlementModel* const& GlobalNamespace::InitialDestinationResolver::__cordl_internal_get__beatmapLevelsEntitlementModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelsEntitlementModel;
}
constexpr void GlobalNamespace::InitialDestinationResolver::__cordl_internal_set__beatmapLevelsEntitlementModel(::GlobalNamespace::BeatmapLevelsEntitlementModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapLevelsEntitlementModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::ColorSchemesSettings*& GlobalNamespace::InitialDestinationResolver::__cordl_internal_get__colorSchemesSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorSchemesSettings;
}
constexpr ::GlobalNamespace::ColorSchemesSettings* const& GlobalNamespace::InitialDestinationResolver::__cordl_internal_get__colorSchemesSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorSchemesSettings;
}
constexpr void GlobalNamespace::InitialDestinationResolver::__cordl_internal_set__colorSchemesSettings(::GlobalNamespace::ColorSchemesSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____colorSchemesSettings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::MenuTransitionsHelper>& GlobalNamespace::InitialDestinationResolver::__cordl_internal_get__transitions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transitions;
}
constexpr ::UnityW<::GlobalNamespace::MenuTransitionsHelper> const& GlobalNamespace::InitialDestinationResolver::__cordl_internal_get__transitions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transitions;
}
constexpr void GlobalNamespace::InitialDestinationResolver::__cordl_internal_set__transitions(::UnityW<::GlobalNamespace::MenuTransitionsHelper> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____transitions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::PlayerDataModel>& GlobalNamespace::InitialDestinationResolver::__cordl_internal_get__playerDataModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataModel;
}
constexpr ::UnityW<::GlobalNamespace::PlayerDataModel> const& GlobalNamespace::InitialDestinationResolver::__cordl_internal_get__playerDataModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataModel;
}
constexpr void GlobalNamespace::InitialDestinationResolver::__cordl_internal_set__playerDataModel(::UnityW<::GlobalNamespace::PlayerDataModel> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playerDataModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::RecordingToolManager*& GlobalNamespace::InitialDestinationResolver::__cordl_internal_get__recordingToolManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____recordingToolManager;
}
constexpr ::GlobalNamespace::RecordingToolManager* const& GlobalNamespace::InitialDestinationResolver::__cordl_internal_get__recordingToolManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____recordingToolManager;
}
constexpr void GlobalNamespace::InitialDestinationResolver::__cordl_internal_set__recordingToolManager(::GlobalNamespace::RecordingToolManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____recordingToolManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::BeatSaber::Destinations::Destination*& GlobalNamespace::InitialDestinationResolver::__cordl_internal_get__lastDestination() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastDestination;
}
constexpr ::BeatSaber::Destinations::Destination* const& GlobalNamespace::InitialDestinationResolver::__cordl_internal_get__lastDestination() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastDestination;
}
constexpr void GlobalNamespace::InitialDestinationResolver::__cordl_internal_set__lastDestination(::BeatSaber::Destinations::Destination* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lastDestination)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::InitialDestinationResolver::Initialize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InitialDestinationResolver*>::get(),
                                                                             "Initialize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::InitialDestinationResolver::InitializeScenesAsync() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InitialDestinationResolver*>::get(),
                                                                             "InitializeScenesAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::InitialDestinationResolver::GoToTargetDestinationAsync(::BeatSaber::Destinations::Destination* targetDestination) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InitialDestinationResolver*>::get(), "GoToTargetDestinationAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Destinations::Destination*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, targetDestination);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::InitialDestinationResolver::LaunchRecordingToolAsync() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InitialDestinationResolver*>::get(),
                                                                             "LaunchRecordingToolAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::InitialDestinationResolver::GoToRecordingToolAsync() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InitialDestinationResolver*>::get(),
                                                                             "GoToRecordingToolAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::InitialDestinationResolver::DelaySmallAmountOfTime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InitialDestinationResolver*>::get(),
                                                                             "DelaySmallAmountOfTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(nullptr, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::InitialDestinationResolver::GoToStandardLevelAsync(::BeatSaber::Destinations::Destination* targetDestination) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InitialDestinationResolver*>::get(), "GoToStandardLevelAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Destinations::Destination*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, targetDestination);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::InitialDestinationResolver::GoToStartupErrorAsync(::BeatSaber::Destinations::Destination* targetDestination) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InitialDestinationResolver*>::get(), "GoToStartupErrorAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Destinations::Destination*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, targetDestination);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::InitialDestinationResolver::GoToTutorialAsync(::BeatSaber::Destinations::Destination* targetDestination) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InitialDestinationResolver*>::get(), "GoToTutorialAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Destinations::Destination*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, targetDestination);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::InitialDestinationResolver::GoToCreditsAsync(::BeatSaber::Destinations::Destination* targetDestination) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InitialDestinationResolver*>::get(), "GoToCreditsAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Destinations::Destination*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, targetDestination);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::InitialDestinationResolver::GoToMainMenuAsync() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InitialDestinationResolver*>::get(),
                                                                             "GoToMainMenuAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::InitialDestinationResolver::PresentShaderWarmUpAsync() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InitialDestinationResolver*>::get(),
                                                                             "PresentShaderWarmUpAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::InitialDestinationResolver::PresentHealthWarningAsync() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InitialDestinationResolver*>::get(),
                                                                             "PresentHealthWarningAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method);
}
inline void GlobalNamespace::InitialDestinationResolver::InitializeStandardLevelSetupData(::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* setupData,
                                                                                          ::BeatSaber::Destinations::Destination* targetDestination) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InitialDestinationResolver*>::get(), "InitializeStandardLevelSetupData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Destinations::Destination*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, setupData, targetDestination);
}
inline void GlobalNamespace::InitialDestinationResolver::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InitialDestinationResolver*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::InitialDestinationResolver::_GoToCreditsAsync_g__HandleCreditsSceneDidFinish_24_0(::GlobalNamespace::CreditsScenesTransitionSetupDataSO* setupData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InitialDestinationResolver*>::get(),
                                  "<GoToCreditsAsync>g__HandleCreditsSceneDidFinish|24_0", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::CreditsScenesTransitionSetupDataSO*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, setupData);
}
inline ::GlobalNamespace::InitialDestinationResolver* GlobalNamespace::InitialDestinationResolver::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::InitialDestinationResolver*>());
}
/// @brief Convert operator to "::Zenject::IInitializable"
constexpr GlobalNamespace::InitialDestinationResolver::operator ::Zenject::IInitializable*() noexcept {
  return static_cast<::Zenject::IInitializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IInitializable"
constexpr ::Zenject::IInitializable* GlobalNamespace::InitialDestinationResolver::i___Zenject__IInitializable() noexcept {
  return static_cast<::Zenject::IInitializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::BeatSaber::Destinations::IInitialDestinationResolver"
constexpr GlobalNamespace::InitialDestinationResolver::operator ::BeatSaber::Destinations::IInitialDestinationResolver*() noexcept {
  return static_cast<::BeatSaber::Destinations::IInitialDestinationResolver*>(static_cast<void*>(this));
}
/// @brief Convert to "::BeatSaber::Destinations::IInitialDestinationResolver"
constexpr ::BeatSaber::Destinations::IInitialDestinationResolver* GlobalNamespace::InitialDestinationResolver::i___BeatSaber__Destinations__IInitialDestinationResolver() noexcept {
  return static_cast<::BeatSaber::Destinations::IInitialDestinationResolver*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InitialDestinationResolver::InitialDestinationResolver() {}

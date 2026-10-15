#pragma once
// IWYU pragma private; include "BeatSaber/Analytics/Gameplay/GameplayEventsDispatcher.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/Analytics/Gameplay/zzzz__GameplayEventsDispatcher_def.hpp"
#include "BeatSaber/Analytics/Gameplay/EventSenders/zzzz__IBeatmapAttemptEventSender_def.hpp"
#include "BeatSaber/Analytics/Gameplay/EventSenders/zzzz__IBlockLevelGameplayEventSender_def.hpp"
#include "BeatSaber/Analytics/Gameplay/EventSenders/zzzz__IHMDSessionEventSender_def.hpp"
#include "BeatSaber/Analytics/Gameplay/EventSenders/zzzz__ISettingsEventSender_def.hpp"
#include "BeatSaber/Analytics/Gameplay/zzzz__EventsBuilderFactory_def.hpp"
#include "BeatSaber/Analytics/Gameplay/zzzz__GameplayEventsDispatcher_def.hpp"
#include "BeatSaber/Analytics/Gameplay/zzzz__IGameplayEventsDispatcher_def.hpp"
#include "BeatSaber/FeatureFlags/zzzz__IFeatureFlagService_def.hpp"
#include "OSCE/Analytics/zzzz__AnalyticsManager_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "Zenject/zzzz__IInitializable_def.hpp"
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher__InitializeAsync_d__21.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher__InitializeAsync_d__21::*)()>(
    &::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher__InitializeAsync_d__21::MoveNext)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x350108c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher__InitializeAsync_d__21>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher__InitializeAsync_d__21.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher__InitializeAsync_d__21::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher__InitializeAsync_d__21::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3501278;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher__InitializeAsync_d__21>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher__InitializeAsync_d__21::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher__InitializeAsync_d__21>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void
BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher__InitializeAsync_d__21::SetStateMachine(/* [Nullable(0)] */ ::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher__InitializeAsync_d__21>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher__InitializeAsync_d__21::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher__InitializeAsync_d__21::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty:
// "::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher__InitializeAsync_d__21::GameplayEventsDispatcher__InitializeAsync_d__21(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher* __4__this,
    ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher__InitializeAsync_d__21::GameplayEventsDispatcher__InitializeAsync_d__21() {}
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher__InitializeInternalAsync_d__22.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher__InitializeInternalAsync_d__22::*)()>(
    &::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher__InitializeInternalAsync_d__22::MoveNext)> {
  constexpr static std::size_t size = 0x58c;
  constexpr static std::size_t addrs = 0x35012e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher__InitializeInternalAsync_d__22>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher__InitializeInternalAsync_d__22.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher__InitializeInternalAsync_d__22::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher__InitializeInternalAsync_d__22::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3501934;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher__InitializeInternalAsync_d__22>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher__InitializeInternalAsync_d__22::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher__InitializeInternalAsync_d__22>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void
BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher__InitializeInternalAsync_d__22::SetStateMachine(/* [Nullable(0)] */ ::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher__InitializeInternalAsync_d__22>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher__InitializeInternalAsync_d__22::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher__InitializeInternalAsync_d__22::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty:
// "::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>",
// modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_eventsBuilderFactory_5__2", ty: "::BeatSaber::Analytics::Gameplay::EventsBuilderFactory*", modifiers: "", def_value:
// Some("{}"), comment: None }]
constexpr ::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher__InitializeInternalAsync_d__22::GameplayEventsDispatcher__InitializeInternalAsync_d__22(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher* __4__this,
    ::System::Runtime::CompilerServices::TaskAwaiter __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__2,
    ::BeatSaber::Analytics::Gameplay::EventsBuilderFactory* _eventsBuilderFactory_5__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
  this->_eventsBuilderFactory_5__2 = _eventsBuilderFactory_5__2;
}
// Ctor Parameters []
constexpr ::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher__InitializeInternalAsync_d__22::GameplayEventsDispatcher__InitializeInternalAsync_d__22() {}
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher.get_beatmapAttempt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatSaber::Analytics::Gameplay::EventSenders::IBeatmapAttemptEventSender* (::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher::*)()>(
    &::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher::get_beatmapAttempt)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3500d98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher*>(), { "get_beatmapAttempt", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher.set_beatmapAttempt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher::*)(
    ::BeatSaber::Analytics::Gameplay::EventSenders::IBeatmapAttemptEventSender*)>(&::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher::set_beatmapAttempt)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3500da0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher*>(),
                                                             { "set_beatmapAttempt", {}, { ::i2c::type_of<::BeatSaber::Analytics::Gameplay::EventSenders::IBeatmapAttemptEventSender*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher.get_blockLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatSaber::Analytics::Gameplay::EventSenders::IBlockLevelGameplayEventSender* (
    ::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher::*)()>(&::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher::get_blockLevel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3500da8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher*>(), { "get_blockLevel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher.set_blockLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher::*)(
    ::BeatSaber::Analytics::Gameplay::EventSenders::IBlockLevelGameplayEventSender*)>(&::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher::set_blockLevel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3500db0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher*>(),
                                                             { "set_blockLevel", {}, { ::i2c::type_of<::BeatSaber::Analytics::Gameplay::EventSenders::IBlockLevelGameplayEventSender*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher.get_hmdSession
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatSaber::Analytics::Gameplay::EventSenders::IHMDSessionEventSender* (::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher::*)()>(
    &::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher::get_hmdSession)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3500db8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher*>(), { "get_hmdSession", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher.set_hmdSession
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher::*)(::BeatSaber::Analytics::Gameplay::EventSenders::IHMDSessionEventSender*)>(
    &::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher::set_hmdSession)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3500dc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher*>(),
                                                             { "set_hmdSession", {}, { ::i2c::type_of<::BeatSaber::Analytics::Gameplay::EventSenders::IHMDSessionEventSender*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher.get_settingsEvents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender* (::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher::*)()>(
    &::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher::get_settingsEvents)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3500dc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher*>(), { "get_settingsEvents", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher.set_settingsEvents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher::*)(::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender*)>(
    &::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher::set_settingsEvents)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3500dd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher*>(),
                                                             { "set_settingsEvents", {}, { ::i2c::type_of<::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher::*)(
    ::BeatSaber::FeatureFlags::IFeatureFlagService*, ::OSCE::Analytics::AnalyticsManager*, uint64_t)>(&::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher::_ctor)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x3500dd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher*>(),
                         { ".ctor", {}, { ::i2c::type_of<::BeatSaber::FeatureFlags::IFeatureFlagService*>(), ::i2c::type_of<::OSCE::Analytics::AnalyticsManager*>(), ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher::*)()>(
    &::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher::Initialize)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3500f08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher*>(), { "Initialize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher.InitializeAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher::*)()>(
    &::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher::InitializeAsync)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3500f2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher*>(), { "InitializeAsync", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher.InitializeInternalAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher::*)()>(
    &::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher::InitializeInternalAsync)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3500fdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher*>(), { "InitializeInternalAsync", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::BeatSaber::Analytics::Gameplay::EventSenders::IBeatmapAttemptEventSender*&
BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher::__cordl_internal_get__beatmapAttempt_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapAttempt_k__BackingField;
}
constexpr ::BeatSaber::Analytics::Gameplay::EventSenders::IBeatmapAttemptEventSender* const&
BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher::__cordl_internal_get__beatmapAttempt_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapAttempt_k__BackingField;
}
constexpr void
BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher::__cordl_internal_set__beatmapAttempt_k__BackingField(::BeatSaber::Analytics::Gameplay::EventSenders::IBeatmapAttemptEventSender* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapAttempt_k__BackingField = value;
}
constexpr ::BeatSaber::Analytics::Gameplay::EventSenders::IBlockLevelGameplayEventSender*&
BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher::__cordl_internal_get__blockLevel_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____blockLevel_k__BackingField;
}
constexpr ::BeatSaber::Analytics::Gameplay::EventSenders::IBlockLevelGameplayEventSender* const&
BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher::__cordl_internal_get__blockLevel_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____blockLevel_k__BackingField;
}
constexpr void
BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher::__cordl_internal_set__blockLevel_k__BackingField(::BeatSaber::Analytics::Gameplay::EventSenders::IBlockLevelGameplayEventSender* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____blockLevel_k__BackingField = value;
}
constexpr ::BeatSaber::Analytics::Gameplay::EventSenders::IHMDSessionEventSender*& BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher::__cordl_internal_get__hmdSession_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hmdSession_k__BackingField;
}
constexpr ::BeatSaber::Analytics::Gameplay::EventSenders::IHMDSessionEventSender* const&
BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher::__cordl_internal_get__hmdSession_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hmdSession_k__BackingField;
}
constexpr void
BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher::__cordl_internal_set__hmdSession_k__BackingField(::BeatSaber::Analytics::Gameplay::EventSenders::IHMDSessionEventSender* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hmdSession_k__BackingField = value;
}
constexpr ::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender*& BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher::__cordl_internal_get__settingsEvents_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsEvents_k__BackingField;
}
constexpr ::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender* const&
BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher::__cordl_internal_get__settingsEvents_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsEvents_k__BackingField;
}
constexpr void
BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher::__cordl_internal_set__settingsEvents_k__BackingField(::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____settingsEvents_k__BackingField = value;
}
constexpr ::BeatSaber::FeatureFlags::IFeatureFlagService*& BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher::__cordl_internal_get__featureFlags() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____featureFlags;
}
constexpr ::BeatSaber::FeatureFlags::IFeatureFlagService* const& BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher::__cordl_internal_get__featureFlags() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____featureFlags;
}
constexpr void BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher::__cordl_internal_set__featureFlags(::BeatSaber::FeatureFlags::IFeatureFlagService* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____featureFlags = value;
}
constexpr ::UnityW<::OSCE::Analytics::AnalyticsManager>& BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher::__cordl_internal_get__analyticsManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____analyticsManager;
}
constexpr ::UnityW<::OSCE::Analytics::AnalyticsManager> const& BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher::__cordl_internal_get__analyticsManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____analyticsManager;
}
constexpr void BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher::__cordl_internal_set__analyticsManager(::UnityW<::OSCE::Analytics::AnalyticsManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____analyticsManager = value;
}
constexpr ::System::Threading::Tasks::Task*& BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher::__cordl_internal_get__initializationTask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initializationTask;
}
constexpr ::System::Threading::Tasks::Task* const& BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher::__cordl_internal_get__initializationTask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initializationTask;
}
constexpr void BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher::__cordl_internal_set__initializationTask(::System::Threading::Tasks::Task* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____initializationTask = value;
}
inline ::BeatSaber::Analytics::Gameplay::EventSenders::IBeatmapAttemptEventSender* BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher::get_beatmapAttempt() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher*>(), { "get_beatmapAttempt", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Analytics::Gameplay::EventSenders::IBeatmapAttemptEventSender*>(this, ___internal_method);
}
inline void BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher::set_beatmapAttempt(::BeatSaber::Analytics::Gameplay::EventSenders::IBeatmapAttemptEventSender* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher*>(),
                                                           { "set_beatmapAttempt", {}, { ::i2c::type_of<::BeatSaber::Analytics::Gameplay::EventSenders::IBeatmapAttemptEventSender*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::BeatSaber::Analytics::Gameplay::EventSenders::IBlockLevelGameplayEventSender* BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher::get_blockLevel() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher*>(), { "get_blockLevel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Analytics::Gameplay::EventSenders::IBlockLevelGameplayEventSender*>(this, ___internal_method);
}
inline void BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher::set_blockLevel(::BeatSaber::Analytics::Gameplay::EventSenders::IBlockLevelGameplayEventSender* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher*>(),
                                                           { "set_blockLevel", {}, { ::i2c::type_of<::BeatSaber::Analytics::Gameplay::EventSenders::IBlockLevelGameplayEventSender*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::BeatSaber::Analytics::Gameplay::EventSenders::IHMDSessionEventSender* BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher::get_hmdSession() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher*>(), { "get_hmdSession", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Analytics::Gameplay::EventSenders::IHMDSessionEventSender*>(this, ___internal_method);
}
inline void BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher::set_hmdSession(::BeatSaber::Analytics::Gameplay::EventSenders::IHMDSessionEventSender* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher*>(),
                                                           { "set_hmdSession", {}, { ::i2c::type_of<::BeatSaber::Analytics::Gameplay::EventSenders::IHMDSessionEventSender*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender* BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher::get_settingsEvents() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher*>(), { "get_settingsEvents", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender*>(this, ___internal_method);
}
inline void BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher::set_settingsEvents(::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher*>(),
                                                           { "set_settingsEvents", {}, { ::i2c::type_of<::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher::_ctor(::BeatSaber::FeatureFlags::IFeatureFlagService* featureFlags, ::OSCE::Analytics::AnalyticsManager* analyticsManager,
                                                                            uint64_t appId) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher*>(),
                          { ".ctor", {}, { ::i2c::type_of<::BeatSaber::FeatureFlags::IFeatureFlagService*>(), ::i2c::type_of<::OSCE::Analytics::AnalyticsManager*>(), ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, featureFlags, analyticsManager, appId);
}
inline void BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher::Initialize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher*>(), { "Initialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher::InitializeAsync() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher*>(), { "InitializeAsync", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher::InitializeInternalAsync() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher*>(), { "InitializeInternalAsync", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline ::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher* BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher::New_ctor(::BeatSaber::FeatureFlags::IFeatureFlagService* featureFlags,
                                                                                                                                      ::OSCE::Analytics::AnalyticsManager* analyticsManager,
                                                                                                                                      uint64_t appId) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher*>(featureFlags, analyticsManager, appId));
}
/// @brief Convert operator to "::BeatSaber::Analytics::Gameplay::IGameplayEventsDispatcher"
constexpr BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher::operator ::BeatSaber::Analytics::Gameplay::IGameplayEventsDispatcher*() noexcept {
  return static_cast<::BeatSaber::Analytics::Gameplay::IGameplayEventsDispatcher*>(static_cast<void*>(this));
}
/// @brief Convert to "::BeatSaber::Analytics::Gameplay::IGameplayEventsDispatcher"
constexpr ::BeatSaber::Analytics::Gameplay::IGameplayEventsDispatcher*
BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher::i___BeatSaber__Analytics__Gameplay__IGameplayEventsDispatcher() noexcept {
  return static_cast<::BeatSaber::Analytics::Gameplay::IGameplayEventsDispatcher*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Zenject::IInitializable"
constexpr BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher::operator ::Zenject::IInitializable*() noexcept {
  return static_cast<::Zenject::IInitializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IInitializable"
constexpr ::Zenject::IInitializable* BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher::i___Zenject__IInitializable() noexcept {
  return static_cast<::Zenject::IInitializable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher::GameplayEventsDispatcher() {}

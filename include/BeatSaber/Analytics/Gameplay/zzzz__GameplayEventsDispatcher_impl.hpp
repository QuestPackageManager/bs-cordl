#pragma once
// IWYU pragma private; include "BeatSaber\Analytics\Gameplay\GameplayEventsDispatcher.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/Analytics/Gameplay/zzzz__GameplayEventsDispatcher_def.hpp"
#include "BeatSaber/Analytics/Gameplay/EventSenders/zzzz__IBeatmapAttemptEventSender_def.hpp"
#include "BeatSaber/Analytics/Gameplay/EventSenders/zzzz__IBlockLevelGameplayEventSender_def.hpp"
#include "BeatSaber/Analytics/Gameplay/EventSenders/zzzz__IHMDSessionEventSender_def.hpp"
#include "BeatSaber/Analytics/Gameplay/zzzz__GameplayEventsDispatcher_def.hpp"
#include "BeatSaber/Analytics/Gameplay/zzzz__IGameplayEventsDispatcher_def.hpp"
#include "BeatSaber/FeatureFlags/zzzz__IFeatureFlagService_def.hpp"
#include "OSCE/Analytics/zzzz__AnalyticsManager_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "Zenject/zzzz__IInitializable_def.hpp"
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher__InitializeAsync_d__17.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher__InitializeAsync_d__17::*)()>(
    &::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher__InitializeAsync_d__17::MoveNext)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x326341c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher__InitializeAsync_d__17>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher__InitializeAsync_d__17.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher__InitializeAsync_d__17::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher__InitializeAsync_d__17::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3263608;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher__InitializeAsync_d__17>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher__InitializeAsync_d__17::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher__InitializeAsync_d__17>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher__InitializeAsync_d__17::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher__InitializeAsync_d__17>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher__InitializeAsync_d__17::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher__InitializeAsync_d__17::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers:
// "", def_value: Some("{}") }]
constexpr ::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher__InitializeAsync_d__17::GameplayEventsDispatcher__InitializeAsync_d__17(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher* __4__this,
    ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher__InitializeAsync_d__17::GameplayEventsDispatcher__InitializeAsync_d__17() {}
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher__InitializeInternalAsync_d__18.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher__InitializeInternalAsync_d__18::*)()>(
    &::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher__InitializeInternalAsync_d__18::MoveNext)> {
  constexpr static std::size_t size = 0x430;
  constexpr static std::size_t addrs = 0x3263674;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher__InitializeInternalAsync_d__18>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher__InitializeInternalAsync_d__18.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher__InitializeInternalAsync_d__18::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher__InitializeInternalAsync_d__18::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3263b60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher__InitializeInternalAsync_d__18>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher__InitializeInternalAsync_d__18::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher__InitializeInternalAsync_d__18>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher__InitializeInternalAsync_d__18::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher__InitializeInternalAsync_d__18>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher__InitializeInternalAsync_d__18::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher__InitializeInternalAsync_d__18::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher__InitializeInternalAsync_d__18::GameplayEventsDispatcher__InitializeInternalAsync_d__18(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher* __4__this,
    ::System::Runtime::CompilerServices::TaskAwaiter __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher__InitializeInternalAsync_d__18::GameplayEventsDispatcher__InitializeInternalAsync_d__18() {}
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher.get_beatmapAttempt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatSaber::Analytics::Gameplay::EventSenders::IBeatmapAttemptEventSender* (::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher::*)()>(
    &::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher::get_beatmapAttempt)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3263160;

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
  constexpr static std::size_t addrs = 0x3263168;

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
  constexpr static std::size_t addrs = 0x3263170;

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
  constexpr static std::size_t addrs = 0x3263178;

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
  constexpr static std::size_t addrs = 0x3263180;

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
  constexpr static std::size_t addrs = 0x3263188;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher*>(),
                                                             { "set_hmdSession", {}, { ::i2c::type_of<::BeatSaber::Analytics::Gameplay::EventSenders::IHMDSessionEventSender*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher::*)(
    ::BeatSaber::FeatureFlags::IFeatureFlagService*, ::OSCE::Analytics::AnalyticsManager*, uint64_t)>(&::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher::_ctor)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x3263190;

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
  constexpr static std::size_t addrs = 0x3263294;

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
  constexpr static std::size_t addrs = 0x32632b8;

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
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x3263368;

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

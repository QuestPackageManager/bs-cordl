#pragma once
// IWYU pragma private; include "BeatSaber\Analytics\Gameplay\NoopGameplayEventsDispatcher.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/Analytics/Gameplay/zzzz__NoopGameplayEventsDispatcher_def.hpp"
#include "BeatSaber/Analytics/Gameplay/EventSenders/zzzz__IBeatmapAttemptEventSender_def.hpp"
#include "BeatSaber/Analytics/Gameplay/EventSenders/zzzz__IBlockLevelGameplayEventSender_def.hpp"
#include "BeatSaber/Analytics/Gameplay/EventSenders/zzzz__IHMDSessionEventSender_def.hpp"
#include "BeatSaber/Analytics/Gameplay/zzzz__IGameplayEventsDispatcher_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::NoopGameplayEventsDispatcher.get_beatmapAttempt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatSaber::Analytics::Gameplay::EventSenders::IBeatmapAttemptEventSender* (
    ::BeatSaber::Analytics::Gameplay::NoopGameplayEventsDispatcher::*)()>(&::BeatSaber::Analytics::Gameplay::NoopGameplayEventsDispatcher::get_beatmapAttempt)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3263bcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::NoopGameplayEventsDispatcher*>(), { "get_beatmapAttempt", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::NoopGameplayEventsDispatcher.get_blockLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatSaber::Analytics::Gameplay::EventSenders::IBlockLevelGameplayEventSender* (
    ::BeatSaber::Analytics::Gameplay::NoopGameplayEventsDispatcher::*)()>(&::BeatSaber::Analytics::Gameplay::NoopGameplayEventsDispatcher::get_blockLevel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3263bd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::NoopGameplayEventsDispatcher*>(), { "get_blockLevel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::NoopGameplayEventsDispatcher.get_hmdSession
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatSaber::Analytics::Gameplay::EventSenders::IHMDSessionEventSender* (::BeatSaber::Analytics::Gameplay::NoopGameplayEventsDispatcher::*)()>(
    &::BeatSaber::Analytics::Gameplay::NoopGameplayEventsDispatcher::get_hmdSession)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3263bdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::NoopGameplayEventsDispatcher*>(), { "get_hmdSession", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::NoopGameplayEventsDispatcher.InitializeAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::BeatSaber::Analytics::Gameplay::NoopGameplayEventsDispatcher::*)()>(
    &::BeatSaber::Analytics::Gameplay::NoopGameplayEventsDispatcher::InitializeAsync)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x3263be4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::NoopGameplayEventsDispatcher*>(), { "InitializeAsync", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::NoopGameplayEventsDispatcher._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Analytics::Gameplay::NoopGameplayEventsDispatcher::*)()>(
    &::BeatSaber::Analytics::Gameplay::NoopGameplayEventsDispatcher::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x3263c78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::NoopGameplayEventsDispatcher*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::BeatSaber::Analytics::Gameplay::EventSenders::IBeatmapAttemptEventSender*&
BeatSaber::Analytics::Gameplay::NoopGameplayEventsDispatcher::__cordl_internal_get__beatmapAttempt_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapAttempt_k__BackingField;
}
constexpr ::BeatSaber::Analytics::Gameplay::EventSenders::IBeatmapAttemptEventSender* const&
BeatSaber::Analytics::Gameplay::NoopGameplayEventsDispatcher::__cordl_internal_get__beatmapAttempt_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapAttempt_k__BackingField;
}
constexpr void
BeatSaber::Analytics::Gameplay::NoopGameplayEventsDispatcher::__cordl_internal_set__beatmapAttempt_k__BackingField(::BeatSaber::Analytics::Gameplay::EventSenders::IBeatmapAttemptEventSender* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapAttempt_k__BackingField = value;
}
constexpr ::BeatSaber::Analytics::Gameplay::EventSenders::IBlockLevelGameplayEventSender*&
BeatSaber::Analytics::Gameplay::NoopGameplayEventsDispatcher::__cordl_internal_get__blockLevel_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____blockLevel_k__BackingField;
}
constexpr ::BeatSaber::Analytics::Gameplay::EventSenders::IBlockLevelGameplayEventSender* const&
BeatSaber::Analytics::Gameplay::NoopGameplayEventsDispatcher::__cordl_internal_get__blockLevel_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____blockLevel_k__BackingField;
}
constexpr void
BeatSaber::Analytics::Gameplay::NoopGameplayEventsDispatcher::__cordl_internal_set__blockLevel_k__BackingField(::BeatSaber::Analytics::Gameplay::EventSenders::IBlockLevelGameplayEventSender* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____blockLevel_k__BackingField = value;
}
constexpr ::BeatSaber::Analytics::Gameplay::EventSenders::IHMDSessionEventSender*& BeatSaber::Analytics::Gameplay::NoopGameplayEventsDispatcher::__cordl_internal_get__hmdSession_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hmdSession_k__BackingField;
}
constexpr ::BeatSaber::Analytics::Gameplay::EventSenders::IHMDSessionEventSender* const&
BeatSaber::Analytics::Gameplay::NoopGameplayEventsDispatcher::__cordl_internal_get__hmdSession_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hmdSession_k__BackingField;
}
constexpr void
BeatSaber::Analytics::Gameplay::NoopGameplayEventsDispatcher::__cordl_internal_set__hmdSession_k__BackingField(::BeatSaber::Analytics::Gameplay::EventSenders::IHMDSessionEventSender* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hmdSession_k__BackingField = value;
}
inline ::BeatSaber::Analytics::Gameplay::EventSenders::IBeatmapAttemptEventSender* BeatSaber::Analytics::Gameplay::NoopGameplayEventsDispatcher::get_beatmapAttempt() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::NoopGameplayEventsDispatcher*>(), { "get_beatmapAttempt", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Analytics::Gameplay::EventSenders::IBeatmapAttemptEventSender*>(this, ___internal_method);
}
inline ::BeatSaber::Analytics::Gameplay::EventSenders::IBlockLevelGameplayEventSender* BeatSaber::Analytics::Gameplay::NoopGameplayEventsDispatcher::get_blockLevel() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::NoopGameplayEventsDispatcher*>(), { "get_blockLevel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Analytics::Gameplay::EventSenders::IBlockLevelGameplayEventSender*>(this, ___internal_method);
}
inline ::BeatSaber::Analytics::Gameplay::EventSenders::IHMDSessionEventSender* BeatSaber::Analytics::Gameplay::NoopGameplayEventsDispatcher::get_hmdSession() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::NoopGameplayEventsDispatcher*>(), { "get_hmdSession", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Analytics::Gameplay::EventSenders::IHMDSessionEventSender*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* BeatSaber::Analytics::Gameplay::NoopGameplayEventsDispatcher::InitializeAsync() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::NoopGameplayEventsDispatcher*>(), { "InitializeAsync", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline void BeatSaber::Analytics::Gameplay::NoopGameplayEventsDispatcher::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::NoopGameplayEventsDispatcher*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BeatSaber::Analytics::Gameplay::NoopGameplayEventsDispatcher* BeatSaber::Analytics::Gameplay::NoopGameplayEventsDispatcher::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::Analytics::Gameplay::NoopGameplayEventsDispatcher*>());
}
/// @brief Convert operator to "::BeatSaber::Analytics::Gameplay::IGameplayEventsDispatcher"
constexpr BeatSaber::Analytics::Gameplay::NoopGameplayEventsDispatcher::operator ::BeatSaber::Analytics::Gameplay::IGameplayEventsDispatcher*() noexcept {
  return static_cast<::BeatSaber::Analytics::Gameplay::IGameplayEventsDispatcher*>(static_cast<void*>(this));
}
/// @brief Convert to "::BeatSaber::Analytics::Gameplay::IGameplayEventsDispatcher"
constexpr ::BeatSaber::Analytics::Gameplay::IGameplayEventsDispatcher*
BeatSaber::Analytics::Gameplay::NoopGameplayEventsDispatcher::i___BeatSaber__Analytics__Gameplay__IGameplayEventsDispatcher() noexcept {
  return static_cast<::BeatSaber::Analytics::Gameplay::IGameplayEventsDispatcher*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::BeatSaber::Analytics::Gameplay::NoopGameplayEventsDispatcher::NoopGameplayEventsDispatcher() {}

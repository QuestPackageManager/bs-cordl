#pragma once
// IWYU pragma private; include "BeatSaber/Analytics/Gameplay/NoopGameplayEventsDispatcher.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/Analytics/Gameplay/zzzz__NoopGameplayEventsDispatcher_def.hpp"
#include "BeatSaber/Analytics/Gameplay/EventSenders/zzzz__IBeatmapAttemptEventSender_def.hpp"
#include "BeatSaber/Analytics/Gameplay/EventSenders/zzzz__IBlockLevelGameplayEventSender_def.hpp"
#include "BeatSaber/Analytics/Gameplay/EventSenders/zzzz__IHMDSessionEventSender_def.hpp"
#include "BeatSaber/Analytics/Gameplay/zzzz__IGameplayEventsDispatcher_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::NoopGameplayEventsDispatcher.get_beatmapAttempt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatSaber::Analytics::Gameplay::EventSenders::IBeatmapAttemptEventSender* (
    ::BeatSaber::Analytics::Gameplay::NoopGameplayEventsDispatcher::*)()>(&::BeatSaber::Analytics::Gameplay::NoopGameplayEventsDispatcher::get_beatmapAttempt)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x31ceb0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::NoopGameplayEventsDispatcher*>::get(), "get_beatmapAttempt",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::NoopGameplayEventsDispatcher.get_blockLevel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatSaber::Analytics::Gameplay::EventSenders::IBlockLevelGameplayEventSender* (
    ::BeatSaber::Analytics::Gameplay::NoopGameplayEventsDispatcher::*)()>(&::BeatSaber::Analytics::Gameplay::NoopGameplayEventsDispatcher::get_blockLevel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x31ceb14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::NoopGameplayEventsDispatcher*>::get(), "get_blockLevel",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::NoopGameplayEventsDispatcher.get_hmdSession
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatSaber::Analytics::Gameplay::EventSenders::IHMDSessionEventSender* (
    ::BeatSaber::Analytics::Gameplay::NoopGameplayEventsDispatcher::*)()>(&::BeatSaber::Analytics::Gameplay::NoopGameplayEventsDispatcher::get_hmdSession)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x31ceb1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::NoopGameplayEventsDispatcher*>::get(), "get_hmdSession",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::NoopGameplayEventsDispatcher.InitializeAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::BeatSaber::Analytics::Gameplay::NoopGameplayEventsDispatcher::*)()>(
    &::BeatSaber::Analytics::Gameplay::NoopGameplayEventsDispatcher::InitializeAsync)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x31ceb24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::NoopGameplayEventsDispatcher*>::get(), "InitializeAsync",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::NoopGameplayEventsDispatcher._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::Analytics::Gameplay::NoopGameplayEventsDispatcher::*)()>(
    &::BeatSaber::Analytics::Gameplay::NoopGameplayEventsDispatcher::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x31cebb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::NoopGameplayEventsDispatcher*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapAttempt_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____blockLevel_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____hmdSession_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::BeatSaber::Analytics::Gameplay::EventSenders::IBeatmapAttemptEventSender* BeatSaber::Analytics::Gameplay::NoopGameplayEventsDispatcher::get_beatmapAttempt() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::NoopGameplayEventsDispatcher*>::get(), "get_beatmapAttempt",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Analytics::Gameplay::EventSenders::IBeatmapAttemptEventSender*, false>(this, ___internal_method);
}
inline ::BeatSaber::Analytics::Gameplay::EventSenders::IBlockLevelGameplayEventSender* BeatSaber::Analytics::Gameplay::NoopGameplayEventsDispatcher::get_blockLevel() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::NoopGameplayEventsDispatcher*>::get(), "get_blockLevel",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Analytics::Gameplay::EventSenders::IBlockLevelGameplayEventSender*, false>(this, ___internal_method);
}
inline ::BeatSaber::Analytics::Gameplay::EventSenders::IHMDSessionEventSender* BeatSaber::Analytics::Gameplay::NoopGameplayEventsDispatcher::get_hmdSession() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::NoopGameplayEventsDispatcher*>::get(), "get_hmdSession",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Analytics::Gameplay::EventSenders::IHMDSessionEventSender*, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* BeatSaber::Analytics::Gameplay::NoopGameplayEventsDispatcher::InitializeAsync() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::NoopGameplayEventsDispatcher*>::get(), "InitializeAsync",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method);
}
inline void BeatSaber::Analytics::Gameplay::NoopGameplayEventsDispatcher::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::NoopGameplayEventsDispatcher*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::BeatSaber::Analytics::Gameplay::NoopGameplayEventsDispatcher* BeatSaber::Analytics::Gameplay::NoopGameplayEventsDispatcher::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatSaber::Analytics::Gameplay::NoopGameplayEventsDispatcher*>());
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

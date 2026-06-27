#pragma once
// IWYU pragma private; include "BeatSaber/Analytics/Gameplay/EventSenders/BeatmapAttempt.hpp"
#include "BeatSaber/Analytics/Gameplay/EventSenders/zzzz__EventSenderBase_impl.hpp"
#include "BeatSaber/Analytics/Gameplay/EventSenders/zzzz__BeatmapAttempt_def.hpp"
#include "BeatSaber/Analytics/Gameplay/EventSenders/zzzz__GameAnalyticsBeatmapAttemptEventData_def.hpp"
#include "BeatSaber/Analytics/Gameplay/EventSenders/zzzz__GameAnalyticsBeatmapLevelData_def.hpp"
#include "BeatSaber/Analytics/Gameplay/EventSenders/zzzz__IBeatmapAttemptEventSender_def.hpp"
#include "BeatSaber/Analytics/Gameplay/zzzz__EventsBuilderFactory_def.hpp"
#include "BeatSaber/Analytics/Gameplay/zzzz__EventsBuilder_def.hpp"
#include "OSCE/Analytics/zzzz__AnalyticsManager_def.hpp"
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::EventSenders::BeatmapAttempt.NewEventsBuilder
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatSaber::Analytics::Gameplay::EventsBuilder* (::BeatSaber::Analytics::Gameplay::EventSenders::BeatmapAttempt::*)()>(&::BeatSaber::Analytics::Gameplay::EventSenders::BeatmapAttempt::NewEventsBuilder)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x31cf978;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::EventSenders::BeatmapAttempt*>::get(),
                        "NewEventsBuilder",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::EventSenders::BeatmapAttempt._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::Analytics::Gameplay::EventSenders::BeatmapAttempt::*)(::OSCE::Analytics::AnalyticsManager*, ::BeatSaber::Analytics::Gameplay::EventsBuilderFactory*)>(&::BeatSaber::Analytics::Gameplay::EventSenders::BeatmapAttempt::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x31cf704;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::EventSenders::BeatmapAttempt*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OSCE::Analytics::AnalyticsManager*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Analytics::Gameplay::EventsBuilderFactory*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::EventSenders::BeatmapAttempt.SendStartedLevel
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::Analytics::Gameplay::EventSenders::BeatmapAttempt::*)(::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData*)>(&::BeatSaber::Analytics::Gameplay::EventSenders::BeatmapAttempt::SendStartedLevel)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0x31cf994;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::EventSenders::BeatmapAttempt*>::get(),
                        "SendStartedLevel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::EventSenders::BeatmapAttempt.SendFinishedLevel
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::Analytics::Gameplay::EventSenders::BeatmapAttempt::*)(::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData*)>(&::BeatSaber::Analytics::Gameplay::EventSenders::BeatmapAttempt::SendFinishedLevel)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x31cfe10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::EventSenders::BeatmapAttempt*>::get(),
                        "SendFinishedLevel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::EventSenders::BeatmapAttempt.SendAbortedLevel
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::Analytics::Gameplay::EventSenders::BeatmapAttempt::*)(::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData*)>(&::BeatSaber::Analytics::Gameplay::EventSenders::BeatmapAttempt::SendAbortedLevel)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x31d03a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::EventSenders::BeatmapAttempt*>::get(),
                        "SendAbortedLevel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::EventSenders::BeatmapAttempt.GetBuilderForBeatmapAttempt
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatSaber::Analytics::Gameplay::EventsBuilder* (::BeatSaber::Analytics::Gameplay::EventSenders::BeatmapAttempt::*)(::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData*)>(&::BeatSaber::Analytics::Gameplay::EventSenders::BeatmapAttempt::GetBuilderForBeatmapAttempt)> {
  constexpr static std::size_t size = 0x434;
  constexpr static std::size_t addrs = 0x31cff6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::EventSenders::BeatmapAttempt*>::get(),
                        "GetBuilderForBeatmapAttempt",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::BeatSaber::Analytics::Gameplay::EventsBuilderFactory*& BeatSaber::Analytics::Gameplay::EventSenders::BeatmapAttempt::__cordl_internal_get__eventsBuilderFactory()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____eventsBuilderFactory;
}
constexpr ::BeatSaber::Analytics::Gameplay::EventsBuilderFactory* const& BeatSaber::Analytics::Gameplay::EventSenders::BeatmapAttempt::__cordl_internal_get__eventsBuilderFactory() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____eventsBuilderFactory;
}
constexpr void BeatSaber::Analytics::Gameplay::EventSenders::BeatmapAttempt::__cordl_internal_set__eventsBuilderFactory(::BeatSaber::Analytics::Gameplay::EventsBuilderFactory*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____eventsBuilderFactory)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::BeatSaber::Analytics::Gameplay::EventsBuilder* BeatSaber::Analytics::Gameplay::EventSenders::BeatmapAttempt::NewEventsBuilder()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::EventSenders::BeatmapAttempt*>::get(),
                        "NewEventsBuilder",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::BeatSaber::Analytics::Gameplay::EventsBuilder*, false>(this, ___internal_method);
}
inline void BeatSaber::Analytics::Gameplay::EventSenders::BeatmapAttempt::_ctor(::OSCE::Analytics::AnalyticsManager*  analyticsManager, ::BeatSaber::Analytics::Gameplay::EventsBuilderFactory*  eventsBuilderFactory)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::EventSenders::BeatmapAttempt*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OSCE::Analytics::AnalyticsManager*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Analytics::Gameplay::EventsBuilderFactory*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, analyticsManager, eventsBuilderFactory);
}
inline void BeatSaber::Analytics::Gameplay::EventSenders::BeatmapAttempt::SendStartedLevel(::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData*  levelData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::EventSenders::BeatmapAttempt*>::get(),
                        "SendStartedLevel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, levelData);
}
inline void BeatSaber::Analytics::Gameplay::EventSenders::BeatmapAttempt::SendFinishedLevel(::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::EventSenders::BeatmapAttempt*>::get(),
                        "SendFinishedLevel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventData);
}
inline void BeatSaber::Analytics::Gameplay::EventSenders::BeatmapAttempt::SendAbortedLevel(::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData*  levelData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::EventSenders::BeatmapAttempt*>::get(),
                        "SendAbortedLevel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, levelData);
}
inline ::BeatSaber::Analytics::Gameplay::EventsBuilder* BeatSaber::Analytics::Gameplay::EventSenders::BeatmapAttempt::GetBuilderForBeatmapAttempt(::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::EventSenders::BeatmapAttempt*>::get(),
                        "GetBuilderForBeatmapAttempt",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapAttemptEventData*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::BeatSaber::Analytics::Gameplay::EventsBuilder*, false>(this, ___internal_method, eventData);
}
inline ::BeatSaber::Analytics::Gameplay::EventSenders::BeatmapAttempt* BeatSaber::Analytics::Gameplay::EventSenders::BeatmapAttempt::New_ctor(::OSCE::Analytics::AnalyticsManager*  analyticsManager, ::BeatSaber::Analytics::Gameplay::EventsBuilderFactory*  eventsBuilderFactory)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatSaber::Analytics::Gameplay::EventSenders::BeatmapAttempt*>(analyticsManager, eventsBuilderFactory));
}
/// @brief Convert operator to "::BeatSaber::Analytics::Gameplay::EventSenders::IBeatmapAttemptEventSender"
constexpr  BeatSaber::Analytics::Gameplay::EventSenders::BeatmapAttempt::operator ::BeatSaber::Analytics::Gameplay::EventSenders::IBeatmapAttemptEventSender*() noexcept {
return static_cast<::BeatSaber::Analytics::Gameplay::EventSenders::IBeatmapAttemptEventSender*>(static_cast<void*>(this));
}
/// @brief Convert to "::BeatSaber::Analytics::Gameplay::EventSenders::IBeatmapAttemptEventSender"
constexpr ::BeatSaber::Analytics::Gameplay::EventSenders::IBeatmapAttemptEventSender* BeatSaber::Analytics::Gameplay::EventSenders::BeatmapAttempt::i___BeatSaber__Analytics__Gameplay__EventSenders__IBeatmapAttemptEventSender() noexcept {
return static_cast<::BeatSaber::Analytics::Gameplay::EventSenders::IBeatmapAttemptEventSender*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::BeatSaber::Analytics::Gameplay::EventSenders::BeatmapAttempt::BeatmapAttempt()   {
}

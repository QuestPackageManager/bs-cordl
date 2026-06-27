#pragma once
// IWYU pragma private; include "BeatSaber/Analytics/Gameplay/EventSenders/EventSenderBase.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/Analytics/Gameplay/EventSenders/zzzz__EventSenderBase_def.hpp"
#include "BeatSaber/Analytics/Gameplay/EventSenders/zzzz__GameAnalyticsBeatmapLevelData_def.hpp"
#include "BeatSaber/Analytics/Gameplay/zzzz__EventsBuilder_def.hpp"
#include "OSCE/Analytics/zzzz__AnalyticsManager_def.hpp"
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::EventSenders::EventSenderBase._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::Analytics::Gameplay::EventSenders::EventSenderBase::*)(::OSCE::Analytics::AnalyticsManager*)>(&::BeatSaber::Analytics::Gameplay::EventSenders::EventSenderBase::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x31cf98c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::EventSenders::EventSenderBase*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OSCE::Analytics::AnalyticsManager*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::EventSenders::EventSenderBase.GetSegmentName
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData*)>(&::BeatSaber::Analytics::Gameplay::EventSenders::EventSenderBase::GetSegmentName)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x31cfca0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::EventSenders::EventSenderBase*>::get(),
                        "GetSegmentName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::EventSenders::EventSenderBase.SendEventsBatch
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::Analytics::Gameplay::EventSenders::EventSenderBase::*)(::BeatSaber::Analytics::Gameplay::EventsBuilder*)>(&::BeatSaber::Analytics::Gameplay::EventSenders::EventSenderBase::SendEventsBatch)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x31cfd78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::EventSenders::EventSenderBase*>::get(),
                        "SendEventsBatch",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Analytics::Gameplay::EventsBuilder*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::OSCE::Analytics::AnalyticsManager>& BeatSaber::Analytics::Gameplay::EventSenders::EventSenderBase::__cordl_internal_get__analyticsManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____analyticsManager;
}
constexpr ::UnityW<::OSCE::Analytics::AnalyticsManager> const& BeatSaber::Analytics::Gameplay::EventSenders::EventSenderBase::__cordl_internal_get__analyticsManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____analyticsManager;
}
constexpr void BeatSaber::Analytics::Gameplay::EventSenders::EventSenderBase::__cordl_internal_set__analyticsManager(::UnityW<::OSCE::Analytics::AnalyticsManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____analyticsManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void BeatSaber::Analytics::Gameplay::EventSenders::EventSenderBase::_ctor(::OSCE::Analytics::AnalyticsManager*  analyticsManager)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::EventSenders::EventSenderBase*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OSCE::Analytics::AnalyticsManager*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, analyticsManager);
}
inline ::StringW BeatSaber::Analytics::Gameplay::EventSenders::EventSenderBase::GetSegmentName(::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData*  levelData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::EventSenders::EventSenderBase*>::get(),
                        "GetSegmentName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsBeatmapLevelData*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, levelData);
}
inline void BeatSaber::Analytics::Gameplay::EventSenders::EventSenderBase::SendEventsBatch(::BeatSaber::Analytics::Gameplay::EventsBuilder*  eventsBuilder)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Analytics::Gameplay::EventSenders::EventSenderBase*>::get(),
                        "SendEventsBatch",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Analytics::Gameplay::EventsBuilder*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventsBuilder);
}
inline ::BeatSaber::Analytics::Gameplay::EventSenders::EventSenderBase* BeatSaber::Analytics::Gameplay::EventSenders::EventSenderBase::New_ctor(::OSCE::Analytics::AnalyticsManager*  analyticsManager)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatSaber::Analytics::Gameplay::EventSenders::EventSenderBase*>(analyticsManager));
}
// Ctor Parameters []
constexpr ::BeatSaber::Analytics::Gameplay::EventSenders::EventSenderBase::EventSenderBase()   {
}

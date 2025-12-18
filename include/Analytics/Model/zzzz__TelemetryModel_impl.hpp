#pragma once
// IWYU pragma private; include "Analytics/Model/TelemetryModel.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Analytics/Model/zzzz__TelemetryModel_def.hpp"
#include "BeatGames/Analytics/zzzz__AnalyticsEventsDispatcher_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
//  Writing Method size for method: ::Analytics::Model::TelemetryModel.get_analyticsEventsDispatcher
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatGames::Analytics::AnalyticsEventsDispatcher* (::Analytics::Model::TelemetryModel::*)()>(
    &::Analytics::Model::TelemetryModel::get_analyticsEventsDispatcher)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x31905d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Analytics::Model::TelemetryModel*>::get(),
                                                                               "get_analyticsEventsDispatcher", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Analytics::Model::TelemetryModel.SetEventDispatcher
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Analytics::Model::TelemetryModel::*)(::BeatGames::Analytics::AnalyticsEventsDispatcher*)>(
    &::Analytics::Model::TelemetryModel::SetEventDispatcher)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x31905d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Analytics::Model::TelemetryModel*>::get(), "SetEventDispatcher", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatGames::Analytics::AnalyticsEventsDispatcher*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Analytics::Model::TelemetryModel.SendAppLoadingEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Analytics::Model::TelemetryModel::*)(::StringW, int32_t)>(
    &::Analytics::Model::TelemetryModel::SendAppLoadingEvent)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x319079c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Analytics::Model::TelemetryModel*>::get(), "SendAppLoadingEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Analytics::Model::TelemetryModel.SendLevelLoadingEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Analytics::Model::TelemetryModel::*)(::StringW, ::StringW, int32_t, int32_t)>(
    &::Analytics::Model::TelemetryModel::SendLevelLoadingEvent)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x31908d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Analytics::Model::TelemetryModel*>::get(), "SendLevelLoadingEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Analytics::Model::TelemetryModel.SendPromoEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Analytics::Model::TelemetryModel::*)(::StringW, ::StringW, int32_t)>(
    &::Analytics::Model::TelemetryModel::SendPromoEvent)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x3190a1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Analytics::Model::TelemetryModel*>::get(), "SendPromoEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Analytics::Model::TelemetryModel._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Analytics::Model::TelemetryModel::*)()>(&::Analytics::Model::TelemetryModel::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x3190b5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Analytics::Model::TelemetryModel*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::BeatGames::Analytics::AnalyticsEventsDispatcher*& Analytics::Model::TelemetryModel::__cordl_internal_get__analyticsEventDispatcher() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____analyticsEventDispatcher;
}
constexpr ::BeatGames::Analytics::AnalyticsEventsDispatcher* const& Analytics::Model::TelemetryModel::__cordl_internal_get__analyticsEventDispatcher() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____analyticsEventDispatcher;
}
constexpr void Analytics::Model::TelemetryModel::__cordl_internal_set__analyticsEventDispatcher(::BeatGames::Analytics::AnalyticsEventsDispatcher* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____analyticsEventDispatcher)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, int32_t>>*& Analytics::Model::TelemetryModel::__cordl_internal_get__queuedEvents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____queuedEvents;
}
constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, int32_t>>* const& Analytics::Model::TelemetryModel::__cordl_internal_get__queuedEvents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____queuedEvents;
}
constexpr void Analytics::Model::TelemetryModel::__cordl_internal_set__queuedEvents(::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, int32_t>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____queuedEvents)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::BeatGames::Analytics::AnalyticsEventsDispatcher* Analytics::Model::TelemetryModel::get_analyticsEventsDispatcher() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Analytics::Model::TelemetryModel*>::get(),
                                                                             "get_analyticsEventsDispatcher", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::BeatGames::Analytics::AnalyticsEventsDispatcher*, false>(this, ___internal_method);
}
inline void Analytics::Model::TelemetryModel::SetEventDispatcher(::BeatGames::Analytics::AnalyticsEventsDispatcher* newAnalyticsEventsDispatcher) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Analytics::Model::TelemetryModel*>::get(), "SetEventDispatcher", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatGames::Analytics::AnalyticsEventsDispatcher*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newAnalyticsEventsDispatcher);
}
inline void Analytics::Model::TelemetryModel::SendAppLoadingEvent(::StringW eventName, int32_t msDuration) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Analytics::Model::TelemetryModel*>::get(), "SendAppLoadingEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventName, msDuration);
}
inline void Analytics::Model::TelemetryModel::SendLevelLoadingEvent(::StringW eventName, ::StringW levelKey, int32_t msDuration, int32_t intValue) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Analytics::Model::TelemetryModel*>::get(), "SendLevelLoadingEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventName, levelKey, msDuration, intValue);
}
inline void Analytics::Model::TelemetryModel::SendPromoEvent(::StringW eventName, ::StringW promoId, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Analytics::Model::TelemetryModel*>::get(), "SendPromoEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventName, promoId, count);
}
inline void Analytics::Model::TelemetryModel::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Analytics::Model::TelemetryModel*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Analytics::Model::TelemetryModel* Analytics::Model::TelemetryModel::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Analytics::Model::TelemetryModel*>());
}
// Ctor Parameters []
constexpr ::Analytics::Model::TelemetryModel::TelemetryModel() {}

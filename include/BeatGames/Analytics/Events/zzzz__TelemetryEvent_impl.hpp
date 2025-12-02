#pragma once
// IWYU pragma private; include "BeatGames/Analytics/Events/TelemetryEvent.hpp"
#include "OSCE/Analytics/zzzz__BaseAnalyticsEvent_impl.hpp"
#include "BeatGames/Analytics/Events/zzzz__TelemetryEvent_def.hpp"
#include "GlobalNamespace/zzzz__IDType_def.hpp"
#include "OSCE/Analytics/zzzz__AnalyticsManager_def.hpp"
//  Writing Method size for method: ::BeatGames::Analytics::Events::TelemetryEvent.GetIDType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IDType (::BeatGames::Analytics::Events::TelemetryEvent::*)()>(
    &::BeatGames::Analytics::Events::TelemetryEvent::GetIDType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x31621d0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatGames::Analytics::Events::TelemetryEvent*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatGames::Analytics::Events::TelemetryEvent*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatGames::Analytics::Events::TelemetryEvent.ApplyTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatGames::Analytics::Events::TelemetryEvent::*)(::OSCE::Analytics::AnalyticsManager*)>(
    &::BeatGames::Analytics::Events::TelemetryEvent::ApplyTime)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x31621d8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatGames::Analytics::Events::TelemetryEvent*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatGames::Analytics::Events::TelemetryEvent*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatGames::Analytics::Events::TelemetryEvent.ApplyBasicFields
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatGames::Analytics::Events::TelemetryEvent::*)(::OSCE::Analytics::AnalyticsManager*)>(
    &::BeatGames::Analytics::Events::TelemetryEvent::ApplyBasicFields)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x3162244;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatGames::Analytics::Events::TelemetryEvent*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatGames::Analytics::Events::TelemetryEvent*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatGames::Analytics::Events::TelemetryEvent.ReturnEventToPool
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatGames::Analytics::Events::TelemetryEvent::*)()>(
    &::BeatGames::Analytics::Events::TelemetryEvent::ReturnEventToPool)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x3162334;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatGames::Analytics::Events::TelemetryEvent*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatGames::Analytics::Events::TelemetryEvent*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatGames::Analytics::Events::TelemetryEvent._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatGames::Analytics::Events::TelemetryEvent::*)()>(&::BeatGames::Analytics::Events::TelemetryEvent::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x31623a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatGames::Analytics::Events::TelemetryEvent*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& BeatGames::Analytics::Events::TelemetryEvent::__cordl_internal_get_event() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___event;
}
constexpr ::StringW const& BeatGames::Analytics::Events::TelemetryEvent::__cordl_internal_get_event() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___event;
}
constexpr void BeatGames::Analytics::Events::TelemetryEvent::__cordl_internal_set_event(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___event)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int64_t& BeatGames::Analytics::Events::TelemetryEvent::__cordl_internal_get_event_time() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___event_time;
}
constexpr int64_t const& BeatGames::Analytics::Events::TelemetryEvent::__cordl_internal_get_event_time() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___event_time;
}
constexpr void BeatGames::Analytics::Events::TelemetryEvent::__cordl_internal_set_event_time(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___event_time = value;
}
constexpr ::StringW& BeatGames::Analytics::Events::TelemetryEvent::__cordl_internal_get_event_family() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___event_family;
}
constexpr ::StringW const& BeatGames::Analytics::Events::TelemetryEvent::__cordl_internal_get_event_family() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___event_family;
}
constexpr void BeatGames::Analytics::Events::TelemetryEvent::__cordl_internal_set_event_family(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___event_family)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int64_t& BeatGames::Analytics::Events::TelemetryEvent::__cordl_internal_get_duration_ms() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___duration_ms;
}
constexpr int64_t const& BeatGames::Analytics::Events::TelemetryEvent::__cordl_internal_get_duration_ms() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___duration_ms;
}
constexpr void BeatGames::Analytics::Events::TelemetryEvent::__cordl_internal_set_duration_ms(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___duration_ms = value;
}
constexpr ::StringW& BeatGames::Analytics::Events::TelemetryEvent::__cordl_internal_get_value_string() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value_string;
}
constexpr ::StringW const& BeatGames::Analytics::Events::TelemetryEvent::__cordl_internal_get_value_string() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value_string;
}
constexpr void BeatGames::Analytics::Events::TelemetryEvent::__cordl_internal_set_value_string(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___value_string)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int64_t& BeatGames::Analytics::Events::TelemetryEvent::__cordl_internal_get_value_int() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value_int;
}
constexpr int64_t const& BeatGames::Analytics::Events::TelemetryEvent::__cordl_internal_get_value_int() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value_int;
}
constexpr void BeatGames::Analytics::Events::TelemetryEvent::__cordl_internal_set_value_int(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___value_int = value;
}
constexpr ::StringW& BeatGames::Analytics::Events::TelemetryEvent::__cordl_internal_get_device_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___device_type;
}
constexpr ::StringW const& BeatGames::Analytics::Events::TelemetryEvent::__cordl_internal_get_device_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___device_type;
}
constexpr void BeatGames::Analytics::Events::TelemetryEvent::__cordl_internal_set_device_type(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___device_type)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& BeatGames::Analytics::Events::TelemetryEvent::__cordl_internal_get_vros_major_version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___vros_major_version;
}
constexpr int32_t const& BeatGames::Analytics::Events::TelemetryEvent::__cordl_internal_get_vros_major_version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___vros_major_version;
}
constexpr void BeatGames::Analytics::Events::TelemetryEvent::__cordl_internal_set_vros_major_version(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___vros_major_version = value;
}
constexpr ::StringW& BeatGames::Analytics::Events::TelemetryEvent::__cordl_internal_get_runtime_platform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___runtime_platform;
}
constexpr ::StringW const& BeatGames::Analytics::Events::TelemetryEvent::__cordl_internal_get_runtime_platform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___runtime_platform;
}
constexpr void BeatGames::Analytics::Events::TelemetryEvent::__cordl_internal_set_runtime_platform(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___runtime_platform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& BeatGames::Analytics::Events::TelemetryEvent::__cordl_internal_get_client_version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___client_version;
}
constexpr ::StringW const& BeatGames::Analytics::Events::TelemetryEvent::__cordl_internal_get_client_version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___client_version;
}
constexpr void BeatGames::Analytics::Events::TelemetryEvent::__cordl_internal_set_client_version(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___client_version)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& BeatGames::Analytics::Events::TelemetryEvent::__cordl_internal_get_game_client_session_id() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___game_client_session_id;
}
constexpr ::StringW const& BeatGames::Analytics::Events::TelemetryEvent::__cordl_internal_get_game_client_session_id() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___game_client_session_id;
}
constexpr void BeatGames::Analytics::Events::TelemetryEvent::__cordl_internal_set_game_client_session_id(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___game_client_session_id)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int64_t& BeatGames::Analytics::Events::TelemetryEvent::__cordl_internal_get_session_time() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___session_time;
}
constexpr int64_t const& BeatGames::Analytics::Events::TelemetryEvent::__cordl_internal_get_session_time() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___session_time;
}
constexpr void BeatGames::Analytics::Events::TelemetryEvent::__cordl_internal_set_session_time(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___session_time = value;
}
constexpr int64_t& BeatGames::Analytics::Events::TelemetryEvent::__cordl_internal_get_session_order() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___session_order;
}
constexpr int64_t const& BeatGames::Analytics::Events::TelemetryEvent::__cordl_internal_get_session_order() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___session_order;
}
constexpr void BeatGames::Analytics::Events::TelemetryEvent::__cordl_internal_set_session_order(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___session_order = value;
}
constexpr int64_t& BeatGames::Analytics::Events::TelemetryEvent::__cordl_internal_get_time_since_session_start() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___time_since_session_start;
}
constexpr int64_t const& BeatGames::Analytics::Events::TelemetryEvent::__cordl_internal_get_time_since_session_start() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___time_since_session_start;
}
constexpr void BeatGames::Analytics::Events::TelemetryEvent::__cordl_internal_set_time_since_session_start(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___time_since_session_start = value;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& BeatGames::Analytics::Events::TelemetryEvent::__cordl_internal_get_tags() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tags;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& BeatGames::Analytics::Events::TelemetryEvent::__cordl_internal_get_tags() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tags;
}
constexpr void BeatGames::Analytics::Events::TelemetryEvent::__cordl_internal_set_tags(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___tags)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::IDType BeatGames::Analytics::Events::TelemetryEvent::GetIDType() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatGames::Analytics::Events::TelemetryEvent*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IDType, false>(this, ___internal_method);
}
inline void BeatGames::Analytics::Events::TelemetryEvent::ApplyTime(::OSCE::Analytics::AnalyticsManager* manager) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatGames::Analytics::Events::TelemetryEvent*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, manager);
}
inline void BeatGames::Analytics::Events::TelemetryEvent::ApplyBasicFields(::OSCE::Analytics::AnalyticsManager* manager) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatGames::Analytics::Events::TelemetryEvent*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, manager);
}
inline void BeatGames::Analytics::Events::TelemetryEvent::ReturnEventToPool() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatGames::Analytics::Events::TelemetryEvent*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BeatGames::Analytics::Events::TelemetryEvent::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatGames::Analytics::Events::TelemetryEvent*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::BeatGames::Analytics::Events::TelemetryEvent* BeatGames::Analytics::Events::TelemetryEvent::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatGames::Analytics::Events::TelemetryEvent*>());
}
// Ctor Parameters []
constexpr ::BeatGames::Analytics::Events::TelemetryEvent::TelemetryEvent() {}

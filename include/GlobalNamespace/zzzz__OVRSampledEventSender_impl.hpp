#pragma once
// IWYU pragma private; include "GlobalNamespace\OVRSampledEventSender.hpp"
#include "GlobalNamespace/zzzz__OVRTelemetryMarker_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__OVRSampledEventSender_def.hpp"
#include "GlobalNamespace/zzzz__OVRTelemetryMarker_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRSampledEventSender._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSampledEventSender::*)(
    int32_t, float_t, ::System::Func_2<::GlobalNamespace::OVRTelemetryMarker, ::GlobalNamespace::OVRTelemetryMarker>*)>(&::GlobalNamespace::OVRSampledEventSender::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5ede1c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSampledEventSender*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(),
                                                                 ::i2c::type_of<::System::Func_2<::GlobalNamespace::OVRTelemetryMarker, ::GlobalNamespace::OVRTelemetryMarker>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSampledEventSender.Send
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSampledEventSender::*)()>(&::GlobalNamespace::OVRSampledEventSender::Send)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5ede1d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSampledEventSender*>(), { "Send", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSampledEventSender.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSampledEventSender::*)()>(&::GlobalNamespace::OVRSampledEventSender::Start)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5ede34c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSampledEventSender*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSampledEventSender.ShouldSendEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(float_t)>(&::GlobalNamespace::OVRSampledEventSender::ShouldSendEvent)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5ede458;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSampledEventSender*>(), { "ShouldSendEvent", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::OVRTelemetryMarker& GlobalNamespace::OVRSampledEventSender::__cordl_internal_get__marker() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____marker;
}
constexpr ::GlobalNamespace::OVRTelemetryMarker const& GlobalNamespace::OVRSampledEventSender::__cordl_internal_get__marker() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____marker;
}
constexpr void GlobalNamespace::OVRSampledEventSender::__cordl_internal_set__marker(::GlobalNamespace::OVRTelemetryMarker value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____marker = value;
}
constexpr bool& GlobalNamespace::OVRSampledEventSender::__cordl_internal_get__shouldSend() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shouldSend;
}
constexpr bool const& GlobalNamespace::OVRSampledEventSender::__cordl_internal_get__shouldSend() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shouldSend;
}
constexpr void GlobalNamespace::OVRSampledEventSender::__cordl_internal_set__shouldSend(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____shouldSend = value;
}
constexpr float_t& GlobalNamespace::OVRSampledEventSender::__cordl_internal_get__recordChance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____recordChance;
}
constexpr float_t const& GlobalNamespace::OVRSampledEventSender::__cordl_internal_get__recordChance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____recordChance;
}
constexpr void GlobalNamespace::OVRSampledEventSender::__cordl_internal_set__recordChance(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____recordChance = value;
}
constexpr int32_t& GlobalNamespace::OVRSampledEventSender::__cordl_internal_get__markerId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____markerId;
}
constexpr int32_t const& GlobalNamespace::OVRSampledEventSender::__cordl_internal_get__markerId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____markerId;
}
constexpr void GlobalNamespace::OVRSampledEventSender::__cordl_internal_set__markerId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____markerId = value;
}
constexpr ::System::Func_2<::GlobalNamespace::OVRTelemetryMarker, ::GlobalNamespace::OVRTelemetryMarker>*& GlobalNamespace::OVRSampledEventSender::__cordl_internal_get__addAnnotationsFunc() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____addAnnotationsFunc;
}
constexpr ::System::Func_2<::GlobalNamespace::OVRTelemetryMarker, ::GlobalNamespace::OVRTelemetryMarker>* const&
GlobalNamespace::OVRSampledEventSender::__cordl_internal_get__addAnnotationsFunc() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____addAnnotationsFunc;
}
constexpr void GlobalNamespace::OVRSampledEventSender::__cordl_internal_set__addAnnotationsFunc(::System::Func_2<::GlobalNamespace::OVRTelemetryMarker, ::GlobalNamespace::OVRTelemetryMarker>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____addAnnotationsFunc = value;
}
inline void GlobalNamespace::OVRSampledEventSender::_ctor(int32_t markerId, float_t recordRecordChance,
                                                          ::System::Func_2<::GlobalNamespace::OVRTelemetryMarker, ::GlobalNamespace::OVRTelemetryMarker>* addAnnotationsFunc) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSampledEventSender*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(),
                                                               ::i2c::type_of<::System::Func_2<::GlobalNamespace::OVRTelemetryMarker, ::GlobalNamespace::OVRTelemetryMarker>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, markerId, recordRecordChance, addAnnotationsFunc);
}
inline void GlobalNamespace::OVRSampledEventSender::Send() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSampledEventSender*>(), { "Send", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSampledEventSender::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSampledEventSender*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRSampledEventSender::ShouldSendEvent(float_t chance) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSampledEventSender*>(), { "ShouldSendEvent", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, chance);
}
inline ::GlobalNamespace::OVRSampledEventSender*
GlobalNamespace::OVRSampledEventSender::New_ctor(int32_t markerId, float_t recordRecordChance,
                                                 ::System::Func_2<::GlobalNamespace::OVRTelemetryMarker, ::GlobalNamespace::OVRTelemetryMarker>* addAnnotationsFunc) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRSampledEventSender*>(markerId, recordRecordChance, addAnnotationsFunc));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRSampledEventSender::OVRSampledEventSender() {}

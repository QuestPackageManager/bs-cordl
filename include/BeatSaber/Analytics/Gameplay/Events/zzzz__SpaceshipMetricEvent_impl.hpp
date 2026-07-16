#pragma once
// IWYU pragma private; include "BeatSaber/Analytics/Gameplay/Events/SpaceshipMetricEvent.hpp"
#include "BeatSaber/Analytics/Gameplay/Events/zzzz__SpaceshipUserEventBase_impl.hpp"
#include "BeatSaber/Analytics/Gameplay/Events/zzzz__SpaceshipMetricEvent_def.hpp"
#include "OSCE/Analytics/zzzz__AnalyticsManager_def.hpp"
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricEvent._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricEvent::*)()>(
    &::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricEvent::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x32623b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricEvent*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricEvent.ApplyBasicFields
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricEvent::*)(::OSCE::Analytics::AnalyticsManager*)>(
    &::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricEvent::ApplyBasicFields)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3264e54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricEvent*>(),
                                                                                          { ::i2c::class_of<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricEvent*>(), 13 }));
    return ___internal_method;
  }
};
constexpr ::StringW& BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricEvent::__cordl_internal_get_build_version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___build_version;
}
constexpr ::StringW const& BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricEvent::__cordl_internal_get_build_version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___build_version;
}
constexpr void BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricEvent::__cordl_internal_set_build_version(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___build_version = value;
}
constexpr ::StringW& BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricEvent::__cordl_internal_get_metric_name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___metric_name;
}
constexpr ::StringW const& BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricEvent::__cordl_internal_get_metric_name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___metric_name;
}
constexpr void BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricEvent::__cordl_internal_set_metric_name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___metric_name = value;
}
constexpr ::StringW& BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricEvent::__cordl_internal_get_metric_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___metric_type;
}
constexpr ::StringW const& BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricEvent::__cordl_internal_get_metric_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___metric_type;
}
constexpr void BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricEvent::__cordl_internal_set_metric_type(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___metric_type = value;
}
constexpr float_t& BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricEvent::__cordl_internal_get_value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
constexpr float_t const& BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricEvent::__cordl_internal_get_value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
constexpr void BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricEvent::__cordl_internal_set_value(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___value = value;
}
inline void BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricEvent::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricEvent*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricEvent::ApplyBasicFields(::OSCE::Analytics::AnalyticsManager* manager) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricEvent*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, manager);
}
inline ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricEvent* BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricEvent::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricEvent*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricEvent::SpaceshipMetricEvent() {}

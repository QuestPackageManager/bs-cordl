#pragma once
// IWYU pragma private; include "BeatSaber\Analytics\Gameplay\Events\SpaceshipCustomEvent.hpp"
#include "BeatSaber/Analytics/Gameplay/Events/zzzz__SpaceshipUserEventBase_impl.hpp"
#include "BeatSaber/Analytics/Gameplay/Events/zzzz__SpaceshipCustomEvent_def.hpp"
#include "OSCE/Analytics/zzzz__AnalyticsManager_def.hpp"
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::Events::SpaceshipCustomEvent._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Analytics::Gameplay::Events::SpaceshipCustomEvent::*)()>(
    &::BeatSaber::Analytics::Gameplay::Events::SpaceshipCustomEvent::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x3262b1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::Events::SpaceshipCustomEvent*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::Events::SpaceshipCustomEvent.ApplyBasicFields
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Analytics::Gameplay::Events::SpaceshipCustomEvent::*)(::OSCE::Analytics::AnalyticsManager*)>(
    &::BeatSaber::Analytics::Gameplay::Events::SpaceshipCustomEvent::ApplyBasicFields)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x32650f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::Events::SpaceshipCustomEvent*>(),
                                                                                          { ::i2c::class_of<::BeatSaber::Analytics::Gameplay::Events::SpaceshipCustomEvent*>(), 13 }));
    return ___internal_method;
  }
};
constexpr ::StringW& BeatSaber::Analytics::Gameplay::Events::SpaceshipCustomEvent::__cordl_internal_get_build_version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___build_version;
}
constexpr ::StringW const& BeatSaber::Analytics::Gameplay::Events::SpaceshipCustomEvent::__cordl_internal_get_build_version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___build_version;
}
constexpr void BeatSaber::Analytics::Gameplay::Events::SpaceshipCustomEvent::__cordl_internal_set_build_version(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___build_version = value;
}
constexpr ::StringW& BeatSaber::Analytics::Gameplay::Events::SpaceshipCustomEvent::__cordl_internal_get_payload() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___payload;
}
constexpr ::StringW const& BeatSaber::Analytics::Gameplay::Events::SpaceshipCustomEvent::__cordl_internal_get_payload() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___payload;
}
constexpr void BeatSaber::Analytics::Gameplay::Events::SpaceshipCustomEvent::__cordl_internal_set_payload(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___payload = value;
}
constexpr ::StringW& BeatSaber::Analytics::Gameplay::Events::SpaceshipCustomEvent::__cordl_internal_get_event_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___event_type;
}
constexpr ::StringW const& BeatSaber::Analytics::Gameplay::Events::SpaceshipCustomEvent::__cordl_internal_get_event_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___event_type;
}
constexpr void BeatSaber::Analytics::Gameplay::Events::SpaceshipCustomEvent::__cordl_internal_set_event_type(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___event_type = value;
}
inline void BeatSaber::Analytics::Gameplay::Events::SpaceshipCustomEvent::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::Events::SpaceshipCustomEvent*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BeatSaber::Analytics::Gameplay::Events::SpaceshipCustomEvent::ApplyBasicFields(::OSCE::Analytics::AnalyticsManager* manager) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BeatSaber::Analytics::Gameplay::Events::SpaceshipCustomEvent*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, manager);
}
inline ::BeatSaber::Analytics::Gameplay::Events::SpaceshipCustomEvent* BeatSaber::Analytics::Gameplay::Events::SpaceshipCustomEvent::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::Analytics::Gameplay::Events::SpaceshipCustomEvent*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::Analytics::Gameplay::Events::SpaceshipCustomEvent::SpaceshipCustomEvent() {}

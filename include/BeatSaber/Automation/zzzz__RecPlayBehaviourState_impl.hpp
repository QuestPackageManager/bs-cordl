#pragma once
// IWYU pragma private; include "BeatSaber/Automation/RecPlayBehaviourState.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/Automation/zzzz__RecPlayBehaviourState_def.hpp"
//  Writing Method size for method: ::BeatSaber::Automation::RecPlayBehaviourState._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Automation::RecPlayBehaviourState::*)()>(&::BeatSaber::Automation::RecPlayBehaviourState::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3268d00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Automation::RecPlayBehaviourState*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& BeatSaber::Automation::RecPlayBehaviourState::__cordl_internal_get_recording() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___recording;
}
constexpr bool const& BeatSaber::Automation::RecPlayBehaviourState::__cordl_internal_get_recording() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___recording;
}
constexpr void BeatSaber::Automation::RecPlayBehaviourState::__cordl_internal_set_recording(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___recording = value;
}
constexpr bool& BeatSaber::Automation::RecPlayBehaviourState::__cordl_internal_get_playback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playback;
}
constexpr bool const& BeatSaber::Automation::RecPlayBehaviourState::__cordl_internal_get_playback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playback;
}
constexpr void BeatSaber::Automation::RecPlayBehaviourState::__cordl_internal_set_playback(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___playback = value;
}
inline void BeatSaber::Automation::RecPlayBehaviourState::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Automation::RecPlayBehaviourState*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BeatSaber::Automation::RecPlayBehaviourState* BeatSaber::Automation::RecPlayBehaviourState::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::Automation::RecPlayBehaviourState*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::Automation::RecPlayBehaviourState::RecPlayBehaviourState() {}

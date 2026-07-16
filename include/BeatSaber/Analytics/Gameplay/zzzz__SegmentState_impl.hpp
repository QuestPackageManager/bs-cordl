#pragma once
// IWYU pragma private; include "BeatSaber/Analytics/Gameplay/SegmentState.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/Analytics/Gameplay/zzzz__SegmentState_def.hpp"
#include "BeatSaber/Analytics/Gameplay/Events/zzzz__SpaceshipSegmentEventSettingsField_def.hpp"
#include "BeatSaber/Analytics/Gameplay/Events/zzzz__SpaceshipSegmentType_def.hpp"
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::SegmentState._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Analytics::Gameplay::SegmentState::*)(::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType*)>(
    &::BeatSaber::Analytics::Gameplay::SegmentState::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3262af4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::SegmentState*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType*>() } })));
    return ___internal_method;
  }
};
constexpr ::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType*& BeatSaber::Analytics::Gameplay::SegmentState::__cordl_internal_get_Type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Type;
}
constexpr ::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType* const& BeatSaber::Analytics::Gameplay::SegmentState::__cordl_internal_get_Type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Type;
}
constexpr void BeatSaber::Analytics::Gameplay::SegmentState::__cordl_internal_set_Type(::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Type = value;
}
constexpr ::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEventSettingsField*& BeatSaber::Analytics::Gameplay::SegmentState::__cordl_internal_get_Settings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Settings;
}
constexpr ::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEventSettingsField* const& BeatSaber::Analytics::Gameplay::SegmentState::__cordl_internal_get_Settings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Settings;
}
constexpr void BeatSaber::Analytics::Gameplay::SegmentState::__cordl_internal_set_Settings(::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEventSettingsField* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Settings = value;
}
constexpr int32_t& BeatSaber::Analytics::Gameplay::SegmentState::__cordl_internal_get_SeqNum() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SeqNum;
}
constexpr int32_t const& BeatSaber::Analytics::Gameplay::SegmentState::__cordl_internal_get_SeqNum() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SeqNum;
}
constexpr void BeatSaber::Analytics::Gameplay::SegmentState::__cordl_internal_set_SeqNum(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___SeqNum = value;
}
inline void BeatSaber::Analytics::Gameplay::SegmentState::_ctor(::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType* type) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::SegmentState*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type);
}
inline ::BeatSaber::Analytics::Gameplay::SegmentState* BeatSaber::Analytics::Gameplay::SegmentState::New_ctor(::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType* type) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::Analytics::Gameplay::SegmentState*>(type));
}
// Ctor Parameters []
constexpr ::BeatSaber::Analytics::Gameplay::SegmentState::SegmentState() {}

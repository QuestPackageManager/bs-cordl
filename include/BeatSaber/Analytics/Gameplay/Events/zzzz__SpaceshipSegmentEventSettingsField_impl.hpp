#pragma once
// IWYU pragma private; include "BeatSaber/Analytics/Gameplay/Events/SpaceshipSegmentEventSettingsField.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/Analytics/Gameplay/Events/zzzz__SpaceshipSegmentEventSettingsField_def.hpp"
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEventSettingsField._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEventSettingsField::*)()>(
    &::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEventSettingsField::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3263a7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEventSettingsField*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEventSettingsField::__cordl_internal_get_difficulty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___difficulty;
}
constexpr ::StringW const& BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEventSettingsField::__cordl_internal_get_difficulty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___difficulty;
}
constexpr void BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEventSettingsField::__cordl_internal_set_difficulty(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___difficulty = value;
}
constexpr ::StringW& BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEventSettingsField::__cordl_internal_get_game_mode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___game_mode;
}
constexpr ::StringW const& BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEventSettingsField::__cordl_internal_get_game_mode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___game_mode;
}
constexpr void BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEventSettingsField::__cordl_internal_set_game_mode(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___game_mode = value;
}
constexpr ::StringW& BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEventSettingsField::__cordl_internal_get_match_id() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___match_id;
}
constexpr ::StringW const& BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEventSettingsField::__cordl_internal_get_match_id() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___match_id;
}
constexpr void BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEventSettingsField::__cordl_internal_set_match_id(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___match_id = value;
}
constexpr ::ArrayW<::StringW>& BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEventSettingsField::__cordl_internal_get_cosmetics() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cosmetics;
}
constexpr ::ArrayW<::StringW> const& BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEventSettingsField::__cordl_internal_get_cosmetics() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cosmetics;
}
constexpr void BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEventSettingsField::__cordl_internal_set_cosmetics(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cosmetics = value;
}
inline void BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEventSettingsField::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEventSettingsField*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEventSettingsField* BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEventSettingsField::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEventSettingsField*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEventSettingsField::SpaceshipSegmentEventSettingsField() {}

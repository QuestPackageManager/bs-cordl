#pragma once
// IWYU pragma private; include "BeatSaber/Destinations/MissionDestinationParameters.hpp"
#include "BeatSaber/Destinations/zzzz__SimpleMissionObjective_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/Destinations/zzzz__MissionDestinationParameters_def.hpp"
#include "BeatSaber/Destinations/zzzz__SimpleMissionObjective_def.hpp"
//  Writing Method size for method: ::BeatSaber::Destinations::MissionDestinationParameters._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Destinations::MissionDestinationParameters::*)(::ArrayW<::BeatSaber::Destinations::SimpleMissionObjective*>)>(
    &::BeatSaber::Destinations::MissionDestinationParameters::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32803bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Destinations::MissionDestinationParameters*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::ArrayW<::BeatSaber::Destinations::SimpleMissionObjective*>>() } })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::BeatSaber::Destinations::SimpleMissionObjective*>& BeatSaber::Destinations::MissionDestinationParameters::__cordl_internal_get_objectives() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectives;
}
constexpr ::ArrayW<::BeatSaber::Destinations::SimpleMissionObjective*> const& BeatSaber::Destinations::MissionDestinationParameters::__cordl_internal_get_objectives() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectives;
}
constexpr void BeatSaber::Destinations::MissionDestinationParameters::__cordl_internal_set_objectives(::ArrayW<::BeatSaber::Destinations::SimpleMissionObjective*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___objectives = value;
}
inline void BeatSaber::Destinations::MissionDestinationParameters::_ctor(::ArrayW<::BeatSaber::Destinations::SimpleMissionObjective*> objectives) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Destinations::MissionDestinationParameters*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::ArrayW<::BeatSaber::Destinations::SimpleMissionObjective*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, objectives);
}
inline ::BeatSaber::Destinations::MissionDestinationParameters*
BeatSaber::Destinations::MissionDestinationParameters::New_ctor(::ArrayW<::BeatSaber::Destinations::SimpleMissionObjective*> objectives) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::Destinations::MissionDestinationParameters*>(objectives));
}
// Ctor Parameters []
constexpr ::BeatSaber::Destinations::MissionDestinationParameters::MissionDestinationParameters() {}

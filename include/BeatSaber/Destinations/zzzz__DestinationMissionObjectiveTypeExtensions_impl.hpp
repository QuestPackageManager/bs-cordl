#pragma once
// IWYU pragma private; include "BeatSaber/Destinations/DestinationMissionObjectiveTypeExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/Destinations/zzzz__DestinationMissionObjectiveTypeExtensions_def.hpp"
#include "BeatSaber/Destinations/zzzz__MissionObjectiveType_def.hpp"
//  Writing Method size for method: ::BeatSaber::Destinations::DestinationMissionObjectiveTypeExtensions.ToObjectiveName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::BeatSaber::Destinations::MissionObjectiveType)>(
    &::BeatSaber::Destinations::DestinationMissionObjectiveTypeExtensions::ToObjectiveName)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x327feb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Destinations::DestinationMissionObjectiveTypeExtensions*>(),
                                                                                           { "ToObjectiveName", {}, { ::i2c::type_of<::BeatSaber::Destinations::MissionObjectiveType>() } })));
    return ___internal_method;
  }
};
inline ::StringW BeatSaber::Destinations::DestinationMissionObjectiveTypeExtensions::ToObjectiveName(::BeatSaber::Destinations::MissionObjectiveType missionObjectiveType) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Destinations::DestinationMissionObjectiveTypeExtensions*>(),
                                                                                         { "ToObjectiveName", {}, { ::i2c::type_of<::BeatSaber::Destinations::MissionObjectiveType>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, missionObjectiveType);
}
// Ctor Parameters []
constexpr ::BeatSaber::Destinations::DestinationMissionObjectiveTypeExtensions::DestinationMissionObjectiveTypeExtensions() {}

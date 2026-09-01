#pragma once
// IWYU pragma private; include "BeatSaber\Destinations\GameStageExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/Destinations/zzzz__GameStageExtensions_def.hpp"
#include "BeatSaber/Destinations/zzzz__DestinationTarget_def.hpp"
//  Writing Method size for method: ::BeatSaber::Destinations::GameStageExtensions.RequiresShaderWarmup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::BeatSaber::Destinations::DestinationTarget)>(&::BeatSaber::Destinations::GameStageExtensions::RequiresShaderWarmup)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x3281458;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Destinations::GameStageExtensions*>(),
                                                                                           { "RequiresShaderWarmup", {}, { ::i2c::type_of<::BeatSaber::Destinations::DestinationTarget>() } })));
    return ___internal_method;
  }
};
inline bool BeatSaber::Destinations::GameStageExtensions::RequiresShaderWarmup(::BeatSaber::Destinations::DestinationTarget stage) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Destinations::GameStageExtensions*>(),
                                                                                         { "RequiresShaderWarmup", {}, { ::i2c::type_of<::BeatSaber::Destinations::DestinationTarget>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, stage);
}
// Ctor Parameters []
constexpr ::BeatSaber::Destinations::GameStageExtensions::GameStageExtensions() {}

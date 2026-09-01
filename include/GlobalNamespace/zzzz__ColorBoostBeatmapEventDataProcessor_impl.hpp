#pragma once
// IWYU pragma private; include "GlobalNamespace\ColorBoostBeatmapEventDataProcessor.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventDataProcessor_1_impl.hpp"
#include "GlobalNamespace/zzzz__ColorBoostBeatmapEventDataProcessor_def.hpp"
#include "GlobalNamespace/zzzz__ColorBoostBeatmapEventData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ColorBoostBeatmapEventDataProcessor._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColorBoostBeatmapEventDataProcessor::*)()>(&::GlobalNamespace::ColorBoostBeatmapEventDataProcessor::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x325bbcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorBoostBeatmapEventDataProcessor*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ColorBoostBeatmapEventDataProcessor::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorBoostBeatmapEventDataProcessor*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ColorBoostBeatmapEventDataProcessor* GlobalNamespace::ColorBoostBeatmapEventDataProcessor::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ColorBoostBeatmapEventDataProcessor*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ColorBoostBeatmapEventDataProcessor::ColorBoostBeatmapEventDataProcessor() {}

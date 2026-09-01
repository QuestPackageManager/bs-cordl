#pragma once
// IWYU pragma private; include "GlobalNamespace\FloatFxBeatmapEventDataProcessor.hpp"
#include "GlobalNamespace/zzzz__FloatFxBeatmapEventDataProcessor_1_impl.hpp"
#include "GlobalNamespace/zzzz__FloatFxBeatmapEventDataProcessor_def.hpp"
#include "GlobalNamespace/zzzz__FloatFxBeatmapEventData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FloatFxBeatmapEventDataProcessor.UpdateByOther
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FloatFxBeatmapEventDataProcessor::*)(
    ::GlobalNamespace::FloatFxBeatmapEventData*, ::GlobalNamespace::FloatFxBeatmapEventData*)>(&::GlobalNamespace::FloatFxBeatmapEventDataProcessor::UpdateByOther)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x325bc08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::FloatFxBeatmapEventDataProcessor*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::FloatFxBeatmapEventDataProcessor*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FloatFxBeatmapEventDataProcessor._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FloatFxBeatmapEventDataProcessor::*)()>(&::GlobalNamespace::FloatFxBeatmapEventDataProcessor::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x325bc30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FloatFxBeatmapEventDataProcessor*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::FloatFxBeatmapEventDataProcessor::UpdateByOther(::GlobalNamespace::FloatFxBeatmapEventData* current, ::GlobalNamespace::FloatFxBeatmapEventData* other) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::FloatFxBeatmapEventDataProcessor*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, current, other);
}
inline void GlobalNamespace::FloatFxBeatmapEventDataProcessor::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FloatFxBeatmapEventDataProcessor*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::FloatFxBeatmapEventDataProcessor* GlobalNamespace::FloatFxBeatmapEventDataProcessor::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FloatFxBeatmapEventDataProcessor*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FloatFxBeatmapEventDataProcessor::FloatFxBeatmapEventDataProcessor() {}

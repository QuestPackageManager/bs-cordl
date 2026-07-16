#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapDataItemExecutionOrderConstants.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataItemExecutionOrderConstants_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataItemExecutionOrderConstants._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapDataItemExecutionOrderConstants::*)()>(&::GlobalNamespace::BeatmapDataItemExecutionOrderConstants::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x325963c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataItemExecutionOrderConstants*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BeatmapDataItemExecutionOrderConstants::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataItemExecutionOrderConstants*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapDataItemExecutionOrderConstants* GlobalNamespace::BeatmapDataItemExecutionOrderConstants::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatmapDataItemExecutionOrderConstants*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapDataItemExecutionOrderConstants::BeatmapDataItemExecutionOrderConstants() {}

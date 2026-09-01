#pragma once
// IWYU pragma private; include "BeatmapSaveDataCommon\EaseTypeConvertor.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatmapSaveDataCommon/zzzz__EaseTypeConvertor_def.hpp"
#include "BeatmapSaveDataCommon/zzzz__EaseType_def.hpp"
#include "GlobalNamespace/zzzz__EaseType_def.hpp"
//  Writing Method size for method: ::BeatmapSaveDataCommon::EaseTypeConvertor.Convert
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatmapSaveDataCommon::EaseType (*)(::GlobalNamespace::EaseType)>(&::BeatmapSaveDataCommon::EaseTypeConvertor::Convert)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x375fe90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataCommon::EaseTypeConvertor*>(), { "Convert", {}, { ::i2c::type_of<::GlobalNamespace::EaseType>() } })));
    return ___internal_method;
  }
};
inline ::BeatmapSaveDataCommon::EaseType BeatmapSaveDataCommon::EaseTypeConvertor::Convert(::GlobalNamespace::EaseType easeType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataCommon::EaseTypeConvertor*>(), { "Convert", {}, { ::i2c::type_of<::GlobalNamespace::EaseType>() } })));
  return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataCommon::EaseType>(nullptr, ___internal_method, easeType);
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataCommon::EaseTypeConvertor::EaseTypeConvertor() {}

#pragma once
// IWYU pragma private; include "UnityEngine\Timeline\WeightUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Timeline/zzzz__WeightUtility_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
//  Writing Method size for method: ::UnityEngine::Timeline::WeightUtility.NormalizeMixer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::Playables::Playable)>(&::UnityEngine::Timeline::WeightUtility::NormalizeMixer)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x69d129c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::WeightUtility*>(), { "NormalizeMixer", {}, { ::i2c::type_of<::UnityEngine::Playables::Playable>() } })));
    return ___internal_method;
  }
};
inline float_t UnityEngine::Timeline::WeightUtility::NormalizeMixer(::UnityEngine::Playables::Playable mixer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::WeightUtility*>(), { "NormalizeMixer", {}, { ::i2c::type_of<::UnityEngine::Playables::Playable>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, mixer);
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::WeightUtility::WeightUtility() {}

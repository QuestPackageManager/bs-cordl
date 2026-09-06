#pragma once
// IWYU pragma private; include "GlobalNamespace/ISaberSwingRatingCounterDidChangeReceiver.hpp"
#include "GlobalNamespace/zzzz__ISaberSwingRatingCounterDidChangeReceiver_def.hpp"
#include "GlobalNamespace/zzzz__ISaberSwingRatingCounter_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ISaberSwingRatingCounterDidChangeReceiver.HandleSaberSwingRatingCounterDidChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ISaberSwingRatingCounterDidChangeReceiver::*)(::GlobalNamespace::ISaberSwingRatingCounter*, float_t)>(
    &::GlobalNamespace::ISaberSwingRatingCounterDidChangeReceiver::HandleSaberSwingRatingCounterDidChange)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ISaberSwingRatingCounterDidChangeReceiver*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::ISaberSwingRatingCounterDidChangeReceiver*>(), 0 }));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ISaberSwingRatingCounterDidChangeReceiver::HandleSaberSwingRatingCounterDidChange(::GlobalNamespace::ISaberSwingRatingCounter* saberSwingRatingCounter, float_t rating) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ISaberSwingRatingCounterDidChangeReceiver*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, saberSwingRatingCounter, rating);
}

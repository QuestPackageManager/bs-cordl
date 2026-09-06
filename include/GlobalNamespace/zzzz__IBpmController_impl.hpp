#pragma once
// IWYU pragma private; include "GlobalNamespace/IBpmController.hpp"
#include "GlobalNamespace/zzzz__IBpmController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IBpmController.get_currentBpm
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::IBpmController::*)()>(&::GlobalNamespace::IBpmController::get_currentBpm)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IBpmController*>(), { ::i2c::class_of<::GlobalNamespace::IBpmController*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IBpmController.get_oneBeatDuration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::IBpmController::*)()>(&::GlobalNamespace::IBpmController::get_oneBeatDuration)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IBpmController*>(), { ::i2c::class_of<::GlobalNamespace::IBpmController*>(), 1 }));
    return ___internal_method;
  }
};
inline float_t GlobalNamespace::IBpmController::get_currentBpm() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IBpmController*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::IBpmController::get_oneBeatDuration() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IBpmController*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}

#pragma once
// IWYU pragma private; include "GlobalNamespace\IBeatmapObjectController.hpp"
#include "GlobalNamespace/zzzz__IBeatmapObjectController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IBeatmapObjectController.Dissolve
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IBeatmapObjectController::*)(float_t)>(&::GlobalNamespace::IBeatmapObjectController::Dissolve)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IBeatmapObjectController*>(), { ::i2c::class_of<::GlobalNamespace::IBeatmapObjectController*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IBeatmapObjectController.Pause
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IBeatmapObjectController::*)(bool)>(&::GlobalNamespace::IBeatmapObjectController::Pause)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IBeatmapObjectController*>(), { ::i2c::class_of<::GlobalNamespace::IBeatmapObjectController*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IBeatmapObjectController.Hide
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IBeatmapObjectController::*)(bool)>(&::GlobalNamespace::IBeatmapObjectController::Hide)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IBeatmapObjectController*>(), { ::i2c::class_of<::GlobalNamespace::IBeatmapObjectController*>(), 2 }));
    return ___internal_method;
  }
};
inline void GlobalNamespace::IBeatmapObjectController::Dissolve(float_t duration) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IBeatmapObjectController*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, duration);
}
inline void GlobalNamespace::IBeatmapObjectController::Pause(bool pause) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IBeatmapObjectController*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pause);
}
inline void GlobalNamespace::IBeatmapObjectController::Hide(bool hide) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IBeatmapObjectController*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hide);
}

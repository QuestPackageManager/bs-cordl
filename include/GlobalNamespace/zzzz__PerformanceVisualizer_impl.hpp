#pragma once
// IWYU pragma private; include "GlobalNamespace\PerformanceVisualizer.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PerformanceVisualizer_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PerformanceVisualizer.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PerformanceVisualizer::*)(::UnityEngine::Camera*, bool, bool)>(&::GlobalNamespace::PerformanceVisualizer::Initialize)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x58f77ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceVisualizer*>(),
                                                             { "Initialize", {}, { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerformanceVisualizer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PerformanceVisualizer::*)()>(&::GlobalNamespace::PerformanceVisualizer::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58f78c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceVisualizer*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::PerformanceVisualizer::Initialize(::UnityEngine::Camera* mainCamera, bool enableFPSModule, bool enableMemoryModule) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceVisualizer*>(),
                                                           { "Initialize", {}, { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mainCamera, enableFPSModule, enableMemoryModule);
}
inline void GlobalNamespace::PerformanceVisualizer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceVisualizer*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PerformanceVisualizer* GlobalNamespace::PerformanceVisualizer::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PerformanceVisualizer*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PerformanceVisualizer::PerformanceVisualizer() {}

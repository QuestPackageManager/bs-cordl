#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\TextureCurveParameter.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeParameter_1_impl.hpp"
#include "UnityEngine/Rendering/zzzz__TextureCurveParameter_def.hpp"
#include "UnityEngine/Rendering/zzzz__TextureCurve_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::TextureCurveParameter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::TextureCurveParameter::*)(::UnityEngine::Rendering::TextureCurve*, bool)>(
    &::UnityEngine::Rendering::TextureCurveParameter::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x67c88d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::TextureCurveParameter*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::TextureCurve*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::TextureCurveParameter.Release
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::TextureCurveParameter::*)()>(&::UnityEngine::Rendering::TextureCurveParameter::Release)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x67c8938;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::TextureCurveParameter*>(), { ::i2c::class_of<::UnityEngine::Rendering::TextureCurveParameter*>(), 11 }));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::TextureCurveParameter::_ctor(::UnityEngine::Rendering::TextureCurve* value, bool overrideState) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::TextureCurveParameter*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::TextureCurve*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, overrideState);
}
inline void UnityEngine::Rendering::TextureCurveParameter::Release() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::TextureCurveParameter*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::TextureCurveParameter* UnityEngine::Rendering::TextureCurveParameter::New_ctor(::UnityEngine::Rendering::TextureCurve* value, bool overrideState) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::TextureCurveParameter*>(value, overrideState));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::TextureCurveParameter::TextureCurveParameter() {}

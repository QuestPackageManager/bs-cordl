#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\Vector2Parameter.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeParameter_1_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/Rendering/zzzz__Vector2Parameter_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Vector2Parameter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Vector2Parameter::*)(::UnityEngine::Vector2, bool)>(&::UnityEngine::Rendering::Vector2Parameter::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x67cd408;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Vector2Parameter*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Vector2Parameter.Interp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Vector2Parameter::*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, float_t)>(
    &::UnityEngine::Rendering::Vector2Parameter::Interp)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x67cd478;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Vector2Parameter*>(), { ::i2c::class_of<::UnityEngine::Rendering::Vector2Parameter*>(), 16 }));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Vector2Parameter::_ctor(::UnityEngine::Vector2 value, bool overrideState) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Vector2Parameter*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, overrideState);
}
inline void UnityEngine::Rendering::Vector2Parameter::Interp(::UnityEngine::Vector2 from, ::UnityEngine::Vector2 to, float_t t) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Vector2Parameter*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, from, to, t);
}
inline ::UnityEngine::Rendering::Vector2Parameter* UnityEngine::Rendering::Vector2Parameter::New_ctor(::UnityEngine::Vector2 value, bool overrideState) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Vector2Parameter*>(value, overrideState));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Vector2Parameter::Vector2Parameter() {}

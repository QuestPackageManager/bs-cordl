#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\Vector4Parameter.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeParameter_1_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "UnityEngine/Rendering/zzzz__Vector4Parameter_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Vector4Parameter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Vector4Parameter::*)(::UnityEngine::Vector4, bool)>(&::UnityEngine::Rendering::Vector4Parameter::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x67cd638;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Vector4Parameter*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Vector4Parameter.Interp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Vector4Parameter::*)(::UnityEngine::Vector4, ::UnityEngine::Vector4, float_t)>(
    &::UnityEngine::Rendering::Vector4Parameter::Interp)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x67cd6bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Vector4Parameter*>(), { ::i2c::class_of<::UnityEngine::Rendering::Vector4Parameter*>(), 16 }));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Vector4Parameter::_ctor(::UnityEngine::Vector4 value, bool overrideState) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Vector4Parameter*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, overrideState);
}
inline void UnityEngine::Rendering::Vector4Parameter::Interp(::UnityEngine::Vector4 from, ::UnityEngine::Vector4 to, float_t t) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Vector4Parameter*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, from, to, t);
}
inline ::UnityEngine::Rendering::Vector4Parameter* UnityEngine::Rendering::Vector4Parameter::New_ctor(::UnityEngine::Vector4 value, bool overrideState) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Vector4Parameter*>(value, overrideState));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Vector4Parameter::Vector4Parameter() {}

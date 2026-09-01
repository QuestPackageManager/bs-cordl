#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\NoInterpCubemapParameter.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeParameter_1_impl.hpp"
#include "UnityEngine/Rendering/zzzz__NoInterpCubemapParameter_def.hpp"
#include "UnityEngine/zzzz__Cubemap_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::NoInterpCubemapParameter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::NoInterpCubemapParameter::*)(::UnityEngine::Cubemap*, bool)>(
    &::UnityEngine::Rendering::NoInterpCubemapParameter::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x67ce184;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::NoInterpCubemapParameter*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Cubemap*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::NoInterpCubemapParameter.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::NoInterpCubemapParameter::*)()>(&::UnityEngine::Rendering::NoInterpCubemapParameter::GetHashCode)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x67ce1e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::NoInterpCubemapParameter*>(), { ::i2c::class_of<::UnityEngine::Rendering::NoInterpCubemapParameter*>(), 2 }));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::NoInterpCubemapParameter::_ctor(::UnityEngine::Cubemap* value, bool overrideState) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::NoInterpCubemapParameter*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Cubemap*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, overrideState);
}
inline int32_t UnityEngine::Rendering::NoInterpCubemapParameter::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::NoInterpCubemapParameter*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::NoInterpCubemapParameter* UnityEngine::Rendering::NoInterpCubemapParameter::New_ctor(::UnityEngine::Cubemap* value, bool overrideState) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::NoInterpCubemapParameter*>(value, overrideState));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::NoInterpCubemapParameter::NoInterpCubemapParameter() {}

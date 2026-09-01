#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\Universal\Internal\DeferredConfig.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/Universal/Internal/zzzz__DeferredConfig_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredConfig.get_IsOpenGL
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Rendering::Universal::Internal::DeferredConfig::get_IsOpenGL)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x68e9230;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredConfig*>(), { "get_IsOpenGL", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredConfig.set_IsOpenGL
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::UnityEngine::Rendering::Universal::Internal::DeferredConfig::set_IsOpenGL)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x68e927c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredConfig*>(), { "set_IsOpenGL", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredConfig.get_IsDX10
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Rendering::Universal::Internal::DeferredConfig::get_IsDX10)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x68e92d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredConfig*>(), { "get_IsDX10", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredConfig.set_IsDX10
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::UnityEngine::Rendering::Universal::Internal::DeferredConfig::set_IsDX10)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x68e931c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredConfig*>(), { "set_IsDX10", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::Internal::DeferredConfig::setStaticF__IsOpenGL_k__BackingField(bool value) {
  ::cordl_internals::setStaticField<bool, "<IsOpenGL>k__BackingField", ::UnityEngine::Rendering::Universal::Internal::DeferredConfig*>(std::forward<bool>(value));
}
inline bool UnityEngine::Rendering::Universal::Internal::DeferredConfig::getStaticF__IsOpenGL_k__BackingField() {
  return ::cordl_internals::getStaticField<bool, "<IsOpenGL>k__BackingField", ::UnityEngine::Rendering::Universal::Internal::DeferredConfig*>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredConfig::setStaticF__IsDX10_k__BackingField(bool value) {
  ::cordl_internals::setStaticField<bool, "<IsDX10>k__BackingField", ::UnityEngine::Rendering::Universal::Internal::DeferredConfig*>(std::forward<bool>(value));
}
inline bool UnityEngine::Rendering::Universal::Internal::DeferredConfig::getStaticF__IsDX10_k__BackingField() {
  return ::cordl_internals::getStaticField<bool, "<IsDX10>k__BackingField", ::UnityEngine::Rendering::Universal::Internal::DeferredConfig*>();
}
inline bool UnityEngine::Rendering::Universal::Internal::DeferredConfig::get_IsOpenGL() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredConfig*>(), { "get_IsOpenGL", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredConfig::set_IsOpenGL(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredConfig*>(), { "set_IsOpenGL", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::Internal::DeferredConfig::get_IsDX10() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredConfig*>(), { "get_IsDX10", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredConfig::set_IsDX10(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredConfig*>(), { "set_IsDX10", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Internal::DeferredConfig::DeferredConfig() {}

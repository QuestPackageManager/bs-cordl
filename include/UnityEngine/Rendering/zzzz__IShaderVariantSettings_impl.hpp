#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\IShaderVariantSettings.hpp"
#include "UnityEngine/Rendering/zzzz__IShaderVariantSettings_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShaderVariantLogLevel_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::IShaderVariantSettings.get_shaderVariantLogLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::ShaderVariantLogLevel (::UnityEngine::Rendering::IShaderVariantSettings::*)()>(
    &::UnityEngine::Rendering::IShaderVariantSettings::get_shaderVariantLogLevel)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IShaderVariantSettings*>(), { ::i2c::class_of<::UnityEngine::Rendering::IShaderVariantSettings*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IShaderVariantSettings.set_shaderVariantLogLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IShaderVariantSettings::*)(::UnityEngine::Rendering::ShaderVariantLogLevel)>(
    &::UnityEngine::Rendering::IShaderVariantSettings::set_shaderVariantLogLevel)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IShaderVariantSettings*>(), { ::i2c::class_of<::UnityEngine::Rendering::IShaderVariantSettings*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IShaderVariantSettings.get_exportShaderVariants
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::IShaderVariantSettings::*)()>(&::UnityEngine::Rendering::IShaderVariantSettings::get_exportShaderVariants)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IShaderVariantSettings*>(), { ::i2c::class_of<::UnityEngine::Rendering::IShaderVariantSettings*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IShaderVariantSettings.set_exportShaderVariants
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IShaderVariantSettings::*)(bool)>(&::UnityEngine::Rendering::IShaderVariantSettings::set_exportShaderVariants)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IShaderVariantSettings*>(), { ::i2c::class_of<::UnityEngine::Rendering::IShaderVariantSettings*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IShaderVariantSettings.get_stripDebugVariants
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::IShaderVariantSettings::*)()>(&::UnityEngine::Rendering::IShaderVariantSettings::get_stripDebugVariants)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x676fe30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IShaderVariantSettings*>(), { ::i2c::class_of<::UnityEngine::Rendering::IShaderVariantSettings*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IShaderVariantSettings.set_stripDebugVariants
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IShaderVariantSettings::*)(bool)>(&::UnityEngine::Rendering::IShaderVariantSettings::set_stripDebugVariants)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x676fe38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IShaderVariantSettings*>(), { ::i2c::class_of<::UnityEngine::Rendering::IShaderVariantSettings*>(), 5 }));
    return ___internal_method;
  }
};
inline ::UnityEngine::Rendering::ShaderVariantLogLevel UnityEngine::Rendering::IShaderVariantSettings::get_shaderVariantLogLevel() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IShaderVariantSettings*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ShaderVariantLogLevel>(this, ___internal_method);
}
inline void UnityEngine::Rendering::IShaderVariantSettings::set_shaderVariantLogLevel(::UnityEngine::Rendering::ShaderVariantLogLevel value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IShaderVariantSettings*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::IShaderVariantSettings::get_exportShaderVariants() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IShaderVariantSettings*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::IShaderVariantSettings::set_exportShaderVariants(bool value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IShaderVariantSettings*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::IShaderVariantSettings::get_stripDebugVariants() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IShaderVariantSettings*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::IShaderVariantSettings::set_stripDebugVariants(bool value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IShaderVariantSettings*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}

#pragma once
// IWYU pragma private; include "UnityEngine\ScalableBufferManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ScalableBufferManager_def.hpp"
//  Writing Method size for method: ::UnityEngine::ScalableBufferManager.get_widthScaleFactor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::UnityEngine::ScalableBufferManager::get_widthScaleFactor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6a895e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ScalableBufferManager*>(), { "get_widthScaleFactor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ScalableBufferManager.get_heightScaleFactor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::UnityEngine::ScalableBufferManager::get_heightScaleFactor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6a89608;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ScalableBufferManager*>(), { "get_heightScaleFactor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ScalableBufferManager.ResizeBuffers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t, float_t)>(&::UnityEngine::ScalableBufferManager::ResizeBuffers)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6a89630;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ScalableBufferManager*>(), { "ResizeBuffers", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
inline float_t UnityEngine::ScalableBufferManager::get_widthScaleFactor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ScalableBufferManager*>(), { "get_widthScaleFactor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
inline float_t UnityEngine::ScalableBufferManager::get_heightScaleFactor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ScalableBufferManager*>(), { "get_heightScaleFactor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
inline void UnityEngine::ScalableBufferManager::ResizeBuffers(float_t widthScale, float_t heightScale) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ScalableBufferManager*>(), { "ResizeBuffers", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, widthScale, heightScale);
}
// Ctor Parameters []
constexpr ::UnityEngine::ScalableBufferManager::ScalableBufferManager() {}

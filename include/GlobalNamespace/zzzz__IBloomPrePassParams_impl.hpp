#pragma once
// IWYU pragma private; include "GlobalNamespace/IBloomPrePassParams.hpp"
#include "GlobalNamespace/zzzz__IBloomPrePassParams_def.hpp"
#include "GlobalNamespace/zzzz__TextureEffectSO_def.hpp"
#include "GlobalNamespace/zzzz__ToneMapping_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IBloomPrePassParams.get_textureEffect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::TextureEffectSO> (::GlobalNamespace::IBloomPrePassParams::*)()>(
    &::GlobalNamespace::IBloomPrePassParams::get_textureEffect)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IBloomPrePassParams*>(), { ::i2c::class_of<::GlobalNamespace::IBloomPrePassParams*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IBloomPrePassParams.get_textureWidth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::IBloomPrePassParams::*)()>(&::GlobalNamespace::IBloomPrePassParams::get_textureWidth)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IBloomPrePassParams*>(), { ::i2c::class_of<::GlobalNamespace::IBloomPrePassParams*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IBloomPrePassParams.get_textureHeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::IBloomPrePassParams::*)()>(&::GlobalNamespace::IBloomPrePassParams::get_textureHeight)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IBloomPrePassParams*>(), { ::i2c::class_of<::GlobalNamespace::IBloomPrePassParams*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IBloomPrePassParams.get_fov
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::GlobalNamespace::IBloomPrePassParams::*)()>(&::GlobalNamespace::IBloomPrePassParams::get_fov)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IBloomPrePassParams*>(), { ::i2c::class_of<::GlobalNamespace::IBloomPrePassParams*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IBloomPrePassParams.get_linesWidth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::IBloomPrePassParams::*)()>(&::GlobalNamespace::IBloomPrePassParams::get_linesWidth)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IBloomPrePassParams*>(), { ::i2c::class_of<::GlobalNamespace::IBloomPrePassParams*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IBloomPrePassParams.get_toneMapping
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ToneMapping (::GlobalNamespace::IBloomPrePassParams::*)()>(&::GlobalNamespace::IBloomPrePassParams::get_toneMapping)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IBloomPrePassParams*>(), { ::i2c::class_of<::GlobalNamespace::IBloomPrePassParams*>(), 5 }));
    return ___internal_method;
  }
};
inline ::UnityW<::GlobalNamespace::TextureEffectSO> GlobalNamespace::IBloomPrePassParams::get_textureEffect() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IBloomPrePassParams*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::TextureEffectSO>>(this, ___internal_method);
}
inline int32_t GlobalNamespace::IBloomPrePassParams::get_textureWidth() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IBloomPrePassParams*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::IBloomPrePassParams::get_textureHeight() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IBloomPrePassParams*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 GlobalNamespace::IBloomPrePassParams::get_fov() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IBloomPrePassParams*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline float_t GlobalNamespace::IBloomPrePassParams::get_linesWidth() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IBloomPrePassParams*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::GlobalNamespace::ToneMapping GlobalNamespace::IBloomPrePassParams::get_toneMapping() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IBloomPrePassParams*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ToneMapping>(this, ___internal_method);
}

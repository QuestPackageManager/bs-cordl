#pragma once
// IWYU pragma private; include "GlobalNamespace\BloomPrePassEffectSO.hpp"
#include "GlobalNamespace/zzzz__TextureEffectSO_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassEffectSO_def.hpp"
#include "GlobalNamespace/zzzz__IBloomPrePassParams_def.hpp"
#include "GlobalNamespace/zzzz__TextureEffectSO_def.hpp"
#include "GlobalNamespace/zzzz__ToneMapping_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassEffectSO.get_textureEffect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::TextureEffectSO> (::GlobalNamespace::BloomPrePassEffectSO::*)()>(
    &::GlobalNamespace::BloomPrePassEffectSO::get_textureEffect)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5861f64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassEffectSO*>(), { "get_textureEffect", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassEffectSO.get_textureWidth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::BloomPrePassEffectSO::*)()>(&::GlobalNamespace::BloomPrePassEffectSO::get_textureWidth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5861f68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassEffectSO*>(), { "get_textureWidth", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassEffectSO.get_textureHeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::BloomPrePassEffectSO::*)()>(&::GlobalNamespace::BloomPrePassEffectSO::get_textureHeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5861f70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassEffectSO*>(), { "get_textureHeight", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassEffectSO.get_fov
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::GlobalNamespace::BloomPrePassEffectSO::*)()>(&::GlobalNamespace::BloomPrePassEffectSO::get_fov)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5861f78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassEffectSO*>(), { "get_fov", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassEffectSO.get_linesWidth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::BloomPrePassEffectSO::*)()>(&::GlobalNamespace::BloomPrePassEffectSO::get_linesWidth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5861f80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassEffectSO*>(), { "get_linesWidth", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassEffectSO.get_toneMapping
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ToneMapping (::GlobalNamespace::BloomPrePassEffectSO::*)()>(&::GlobalNamespace::BloomPrePassEffectSO::get_toneMapping)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5861f88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassEffectSO*>(), { ::i2c::class_of<::GlobalNamespace::BloomPrePassEffectSO*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassEffectSO._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BloomPrePassEffectSO::*)()>(&::GlobalNamespace::BloomPrePassEffectSO::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5861f90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassEffectSO*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::BloomPrePassEffectSO::__cordl_internal_get__textureWidth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____textureWidth;
}
constexpr int32_t const& GlobalNamespace::BloomPrePassEffectSO::__cordl_internal_get__textureWidth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____textureWidth;
}
constexpr void GlobalNamespace::BloomPrePassEffectSO::__cordl_internal_set__textureWidth(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____textureWidth = value;
}
constexpr int32_t& GlobalNamespace::BloomPrePassEffectSO::__cordl_internal_get__textureHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____textureHeight;
}
constexpr int32_t const& GlobalNamespace::BloomPrePassEffectSO::__cordl_internal_get__textureHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____textureHeight;
}
constexpr void GlobalNamespace::BloomPrePassEffectSO::__cordl_internal_set__textureHeight(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____textureHeight = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::BloomPrePassEffectSO::__cordl_internal_get__fov() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fov;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::BloomPrePassEffectSO::__cordl_internal_get__fov() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fov;
}
constexpr void GlobalNamespace::BloomPrePassEffectSO::__cordl_internal_set__fov(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fov = value;
}
constexpr float_t& GlobalNamespace::BloomPrePassEffectSO::__cordl_internal_get__linesWidth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____linesWidth;
}
constexpr float_t const& GlobalNamespace::BloomPrePassEffectSO::__cordl_internal_get__linesWidth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____linesWidth;
}
constexpr void GlobalNamespace::BloomPrePassEffectSO::__cordl_internal_set__linesWidth(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____linesWidth = value;
}
inline ::UnityW<::GlobalNamespace::TextureEffectSO> GlobalNamespace::BloomPrePassEffectSO::get_textureEffect() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassEffectSO*>(), { "get_textureEffect", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::TextureEffectSO>>(this, ___internal_method);
}
inline int32_t GlobalNamespace::BloomPrePassEffectSO::get_textureWidth() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassEffectSO*>(), { "get_textureWidth", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::BloomPrePassEffectSO::get_textureHeight() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassEffectSO*>(), { "get_textureHeight", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 GlobalNamespace::BloomPrePassEffectSO::get_fov() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassEffectSO*>(), { "get_fov", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline float_t GlobalNamespace::BloomPrePassEffectSO::get_linesWidth() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassEffectSO*>(), { "get_linesWidth", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::GlobalNamespace::ToneMapping GlobalNamespace::BloomPrePassEffectSO::get_toneMapping() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BloomPrePassEffectSO*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ToneMapping>(this, ___internal_method);
}
inline void GlobalNamespace::BloomPrePassEffectSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassEffectSO*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BloomPrePassEffectSO* GlobalNamespace::BloomPrePassEffectSO::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BloomPrePassEffectSO*>());
}
/// @brief Convert operator to "::GlobalNamespace::IBloomPrePassParams"
constexpr GlobalNamespace::BloomPrePassEffectSO::operator ::GlobalNamespace::IBloomPrePassParams*() noexcept {
  return static_cast<::GlobalNamespace::IBloomPrePassParams*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IBloomPrePassParams"
constexpr ::GlobalNamespace::IBloomPrePassParams* GlobalNamespace::BloomPrePassEffectSO::i___GlobalNamespace__IBloomPrePassParams() noexcept {
  return static_cast<::GlobalNamespace::IBloomPrePassParams*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BloomPrePassEffectSO::BloomPrePassEffectSO() {}

#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\TextureParameter.hpp"
#include "UnityEngine/Rendering/zzzz__TextureDimension_impl.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeParameter_1_impl.hpp"
#include "UnityEngine/Rendering/zzzz__TextureParameter_def.hpp"
#include "UnityEngine/Rendering/zzzz__TextureDimension_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::TextureParameter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::TextureParameter::*)(::UnityEngine::Texture*, bool)>(&::UnityEngine::Rendering::TextureParameter::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x67cd770;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::TextureParameter*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::TextureParameter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::TextureParameter::*)(::UnityEngine::Texture*, ::UnityEngine::Rendering::TextureDimension, bool)>(
    &::UnityEngine::Rendering::TextureParameter::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x67cd77c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::TextureParameter*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::Rendering::TextureDimension>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::TextureParameter.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::TextureParameter::*)()>(&::UnityEngine::Rendering::TextureParameter::GetHashCode)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x67cd7f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::TextureParameter*>(), { ::i2c::class_of<::UnityEngine::Rendering::TextureParameter*>(), 2 }));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::TextureDimension& UnityEngine::Rendering::TextureParameter::__cordl_internal_get_dimension() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dimension;
}
constexpr ::UnityEngine::Rendering::TextureDimension const& UnityEngine::Rendering::TextureParameter::__cordl_internal_get_dimension() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dimension;
}
constexpr void UnityEngine::Rendering::TextureParameter::__cordl_internal_set_dimension(::UnityEngine::Rendering::TextureDimension value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___dimension = value;
}
inline void UnityEngine::Rendering::TextureParameter::_ctor(::UnityEngine::Texture* value, bool overrideState) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::TextureParameter*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, overrideState);
}
inline void UnityEngine::Rendering::TextureParameter::_ctor(::UnityEngine::Texture* value, ::UnityEngine::Rendering::TextureDimension dimension, bool overrideState) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::TextureParameter*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::Rendering::TextureDimension>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, dimension, overrideState);
}
inline int32_t UnityEngine::Rendering::TextureParameter::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::TextureParameter*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::TextureParameter* UnityEngine::Rendering::TextureParameter::New_ctor(::UnityEngine::Texture* value, bool overrideState) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::TextureParameter*>(value, overrideState));
}
inline ::UnityEngine::Rendering::TextureParameter* UnityEngine::Rendering::TextureParameter::New_ctor(::UnityEngine::Texture* value, ::UnityEngine::Rendering::TextureDimension dimension,
                                                                                                      bool overrideState) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::TextureParameter*>(value, dimension, overrideState));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::TextureParameter::TextureParameter() {}

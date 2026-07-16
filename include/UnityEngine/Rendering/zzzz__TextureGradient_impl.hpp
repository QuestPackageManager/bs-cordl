#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/TextureGradient.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ColorSpace_impl.hpp"
#include "UnityEngine/zzzz__GradientMode_impl.hpp"
#include "UnityEngine/Rendering/zzzz__TextureGradient_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_def.hpp"
#include "UnityEngine/zzzz__ColorSpace_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__GradientAlphaKey_def.hpp"
#include "UnityEngine/zzzz__GradientColorKey_def.hpp"
#include "UnityEngine/zzzz__GradientMode_def.hpp"
#include "UnityEngine/zzzz__Gradient_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::TextureGradient.get_textureSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::TextureGradient::*)()>(&::UnityEngine::Rendering::TextureGradient::get_textureSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67c3134;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::TextureGradient*>(), { "get_textureSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::TextureGradient.set_textureSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::TextureGradient::*)(int32_t)>(&::UnityEngine::Rendering::TextureGradient::set_textureSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67c313c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::TextureGradient*>(), { "set_textureSize", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::TextureGradient.get_colorKeys
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::GradientColorKey> (::UnityEngine::Rendering::TextureGradient::*)()>(
    &::UnityEngine::Rendering::TextureGradient::get_colorKeys)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x67c3144;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::TextureGradient*>(), { "get_colorKeys", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::TextureGradient.get_alphaKeys
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::GradientAlphaKey> (::UnityEngine::Rendering::TextureGradient::*)()>(
    &::UnityEngine::Rendering::TextureGradient::get_alphaKeys)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x67c3158;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::TextureGradient*>(), { "get_alphaKeys", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::TextureGradient._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::TextureGradient::*)(::UnityEngine::Gradient*)>(&::UnityEngine::Rendering::TextureGradient::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x67c316c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::TextureGradient*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Gradient*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::TextureGradient._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::TextureGradient::*)(::ArrayW<::UnityEngine::GradientColorKey>, ::ArrayW<::UnityEngine::GradientAlphaKey>,
                                                                                                           ::UnityEngine::GradientMode, ::UnityEngine::ColorSpace, int32_t, bool)>(
    &::UnityEngine::Rendering::TextureGradient::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x67c3244;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::TextureGradient*>(),
                                         { ".ctor",
                                           {},
                                           { ::i2c::type_of<::ArrayW<::UnityEngine::GradientColorKey>>(), ::i2c::type_of<::ArrayW<::UnityEngine::GradientAlphaKey>>(),
                                             ::i2c::type_of<::UnityEngine::GradientMode>(), ::i2c::type_of<::UnityEngine::ColorSpace>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::TextureGradient.Rebuild
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::TextureGradient::*)(::ArrayW<::UnityEngine::GradientColorKey>, ::ArrayW<::UnityEngine::GradientAlphaKey>,
                                                                                                           ::UnityEngine::GradientMode, ::UnityEngine::ColorSpace, int32_t, bool)>(
    &::UnityEngine::Rendering::TextureGradient::Rebuild)> {
  constexpr static std::size_t size = 0x3dc;
  constexpr static std::size_t addrs = 0x67c325c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::TextureGradient*>(),
                                         { "Rebuild",
                                           {},
                                           { ::i2c::type_of<::ArrayW<::UnityEngine::GradientColorKey>>(), ::i2c::type_of<::ArrayW<::UnityEngine::GradientAlphaKey>>(),
                                             ::i2c::type_of<::UnityEngine::GradientMode>(), ::i2c::type_of<::UnityEngine::ColorSpace>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::TextureGradient.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::TextureGradient::*)()>(&::UnityEngine::Rendering::TextureGradient::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x67c3638;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::TextureGradient*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::TextureGradient.Release
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::TextureGradient::*)()>(&::UnityEngine::Rendering::TextureGradient::Release)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x67c363c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::TextureGradient*>(), { "Release", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::TextureGradient.SetDirty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::TextureGradient::*)()>(&::UnityEngine::Rendering::TextureGradient::SetDirty)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x67c36e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::TextureGradient*>(), { "SetDirty", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::TextureGradient.GetTextureFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Experimental::Rendering::GraphicsFormat (*)()>(&::UnityEngine::Rendering::TextureGradient::GetTextureFormat)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67c36f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::TextureGradient*>(), { "GetTextureFormat", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::TextureGradient.GetTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture2D> (::UnityEngine::Rendering::TextureGradient::*)()>(&::UnityEngine::Rendering::TextureGradient::GetTexture)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x67c36f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::TextureGradient*>(), { "GetTexture", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::TextureGradient.Evaluate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::UnityEngine::Rendering::TextureGradient::*)(float_t)>(&::UnityEngine::Rendering::TextureGradient::Evaluate)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x67c398c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::TextureGradient*>(), { "Evaluate", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::TextureGradient.SetKeys
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::TextureGradient::*)(::ArrayW<::UnityEngine::GradientColorKey>, ::ArrayW<::UnityEngine::GradientAlphaKey>,
                                                                                                           ::UnityEngine::GradientMode, ::UnityEngine::ColorSpace)>(
    &::UnityEngine::Rendering::TextureGradient::SetKeys)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x67c39c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::TextureGradient*>(),
                                                             { "SetKeys",
                                                               {},
                                                               { ::i2c::type_of<::ArrayW<::UnityEngine::GradientColorKey>>(), ::i2c::type_of<::ArrayW<::UnityEngine::GradientAlphaKey>>(),
                                                                 ::i2c::type_of<::UnityEngine::GradientMode>(), ::i2c::type_of<::UnityEngine::ColorSpace>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::Rendering::TextureGradient::__cordl_internal_get__textureSize_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____textureSize_k__BackingField;
}
constexpr int32_t const& UnityEngine::Rendering::TextureGradient::__cordl_internal_get__textureSize_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____textureSize_k__BackingField;
}
constexpr void UnityEngine::Rendering::TextureGradient::__cordl_internal_set__textureSize_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____textureSize_k__BackingField = value;
}
constexpr ::UnityEngine::Gradient*& UnityEngine::Rendering::TextureGradient::__cordl_internal_get_m_Gradient() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Gradient;
}
constexpr ::UnityEngine::Gradient* const& UnityEngine::Rendering::TextureGradient::__cordl_internal_get_m_Gradient() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Gradient;
}
constexpr void UnityEngine::Rendering::TextureGradient::__cordl_internal_set_m_Gradient(::UnityEngine::Gradient* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Gradient = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& UnityEngine::Rendering::TextureGradient::__cordl_internal_get_m_Texture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Texture;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& UnityEngine::Rendering::TextureGradient::__cordl_internal_get_m_Texture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Texture;
}
constexpr void UnityEngine::Rendering::TextureGradient::__cordl_internal_set_m_Texture(::UnityW<::UnityEngine::Texture2D> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Texture = value;
}
constexpr int32_t& UnityEngine::Rendering::TextureGradient::__cordl_internal_get_m_RequestedTextureSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RequestedTextureSize;
}
constexpr int32_t const& UnityEngine::Rendering::TextureGradient::__cordl_internal_get_m_RequestedTextureSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RequestedTextureSize;
}
constexpr void UnityEngine::Rendering::TextureGradient::__cordl_internal_set_m_RequestedTextureSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RequestedTextureSize = value;
}
constexpr bool& UnityEngine::Rendering::TextureGradient::__cordl_internal_get_m_IsTextureDirty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsTextureDirty;
}
constexpr bool const& UnityEngine::Rendering::TextureGradient::__cordl_internal_get_m_IsTextureDirty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsTextureDirty;
}
constexpr void UnityEngine::Rendering::TextureGradient::__cordl_internal_set_m_IsTextureDirty(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IsTextureDirty = value;
}
constexpr bool& UnityEngine::Rendering::TextureGradient::__cordl_internal_get_m_Precise() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Precise;
}
constexpr bool const& UnityEngine::Rendering::TextureGradient::__cordl_internal_get_m_Precise() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Precise;
}
constexpr void UnityEngine::Rendering::TextureGradient::__cordl_internal_set_m_Precise(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Precise = value;
}
constexpr ::UnityEngine::GradientMode& UnityEngine::Rendering::TextureGradient::__cordl_internal_get_mode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mode;
}
constexpr ::UnityEngine::GradientMode const& UnityEngine::Rendering::TextureGradient::__cordl_internal_get_mode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mode;
}
constexpr void UnityEngine::Rendering::TextureGradient::__cordl_internal_set_mode(::UnityEngine::GradientMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mode = value;
}
constexpr ::UnityEngine::ColorSpace& UnityEngine::Rendering::TextureGradient::__cordl_internal_get_colorSpace() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorSpace;
}
constexpr ::UnityEngine::ColorSpace const& UnityEngine::Rendering::TextureGradient::__cordl_internal_get_colorSpace() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorSpace;
}
constexpr void UnityEngine::Rendering::TextureGradient::__cordl_internal_set_colorSpace(::UnityEngine::ColorSpace value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___colorSpace = value;
}
inline int32_t UnityEngine::Rendering::TextureGradient::get_textureSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::TextureGradient*>(), { "get_textureSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::TextureGradient::set_textureSize(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::TextureGradient*>(), { "set_textureSize", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::UnityEngine::GradientColorKey> UnityEngine::Rendering::TextureGradient::get_colorKeys() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::TextureGradient*>(), { "get_colorKeys", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::GradientColorKey>>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::GradientAlphaKey> UnityEngine::Rendering::TextureGradient::get_alphaKeys() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::TextureGradient*>(), { "get_alphaKeys", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::GradientAlphaKey>>(this, ___internal_method);
}
inline void UnityEngine::Rendering::TextureGradient::_ctor(::UnityEngine::Gradient* baseCurve) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::TextureGradient*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Gradient*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, baseCurve);
}
inline void UnityEngine::Rendering::TextureGradient::_ctor(::ArrayW<::UnityEngine::GradientColorKey> colorKeys, ::ArrayW<::UnityEngine::GradientAlphaKey> alphaKeys, ::UnityEngine::GradientMode mode,
                                                           ::UnityEngine::ColorSpace colorSpace, int32_t requestedTextureSize, bool precise) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::TextureGradient*>(),
                                              { ".ctor",
                                                {},
                                                { ::i2c::type_of<::ArrayW<::UnityEngine::GradientColorKey>>(), ::i2c::type_of<::ArrayW<::UnityEngine::GradientAlphaKey>>(),
                                                  ::i2c::type_of<::UnityEngine::GradientMode>(), ::i2c::type_of<::UnityEngine::ColorSpace>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, colorKeys, alphaKeys, mode, colorSpace, requestedTextureSize, precise);
}
inline void UnityEngine::Rendering::TextureGradient::Rebuild(::ArrayW<::UnityEngine::GradientColorKey> colorKeys, ::ArrayW<::UnityEngine::GradientAlphaKey> alphaKeys, ::UnityEngine::GradientMode mode,
                                                             ::UnityEngine::ColorSpace colorSpace, int32_t requestedTextureSize, bool precise) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::TextureGradient*>(),
                                              { "Rebuild",
                                                {},
                                                { ::i2c::type_of<::ArrayW<::UnityEngine::GradientColorKey>>(), ::i2c::type_of<::ArrayW<::UnityEngine::GradientAlphaKey>>(),
                                                  ::i2c::type_of<::UnityEngine::GradientMode>(), ::i2c::type_of<::UnityEngine::ColorSpace>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, colorKeys, alphaKeys, mode, colorSpace, requestedTextureSize, precise);
}
inline void UnityEngine::Rendering::TextureGradient::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::TextureGradient*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::TextureGradient::Release() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::TextureGradient*>(), { "Release", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::TextureGradient::SetDirty() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::TextureGradient*>(), { "SetDirty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Experimental::Rendering::GraphicsFormat UnityEngine::Rendering::TextureGradient::GetTextureFormat() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::TextureGradient*>(), { "GetTextureFormat", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::GraphicsFormat>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::Texture2D> UnityEngine::Rendering::TextureGradient::GetTexture() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::TextureGradient*>(), { "GetTexture", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture2D>>(this, ___internal_method);
}
inline ::UnityEngine::Color UnityEngine::Rendering::TextureGradient::Evaluate(float_t time) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::TextureGradient*>(), { "Evaluate", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method, time);
}
inline void UnityEngine::Rendering::TextureGradient::SetKeys(::ArrayW<::UnityEngine::GradientColorKey> colorKeys, ::ArrayW<::UnityEngine::GradientAlphaKey> alphaKeys, ::UnityEngine::GradientMode mode,
                                                             ::UnityEngine::ColorSpace colorSpace) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::TextureGradient*>(),
                                                           { "SetKeys",
                                                             {},
                                                             { ::i2c::type_of<::ArrayW<::UnityEngine::GradientColorKey>>(), ::i2c::type_of<::ArrayW<::UnityEngine::GradientAlphaKey>>(),
                                                               ::i2c::type_of<::UnityEngine::GradientMode>(), ::i2c::type_of<::UnityEngine::ColorSpace>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, colorKeys, alphaKeys, mode, colorSpace);
}
inline ::UnityEngine::Rendering::TextureGradient* UnityEngine::Rendering::TextureGradient::New_ctor(::UnityEngine::Gradient* baseCurve) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::TextureGradient*>(baseCurve));
}
inline ::UnityEngine::Rendering::TextureGradient* UnityEngine::Rendering::TextureGradient::New_ctor(::ArrayW<::UnityEngine::GradientColorKey> colorKeys,
                                                                                                    ::ArrayW<::UnityEngine::GradientAlphaKey> alphaKeys, ::UnityEngine::GradientMode mode,
                                                                                                    ::UnityEngine::ColorSpace colorSpace, int32_t requestedTextureSize, bool precise) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::TextureGradient*>(colorKeys, alphaKeys, mode, colorSpace, requestedTextureSize, precise));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::Rendering::TextureGradient::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Rendering::TextureGradient::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::TextureGradient::TextureGradient() {}

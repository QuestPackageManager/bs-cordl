#pragma once
// IWYU pragma private; include "UnityEngine/VFX/Utility/VFXAudioSpectrumBinder.hpp"
#include "UnityEngine/VFX/Utility/zzzz__VFXBinderBase_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__FFTWindow_impl.hpp"
#include "UnityEngine/VFX/Utility/zzzz__VFXAudioSpectrumBinder_def.hpp"
#include "UnityEngine/VFX/Utility/zzzz__ExposedProperty_def.hpp"
#include "UnityEngine/VFX/Utility/zzzz__VFXAudioSpectrumBinder_def.hpp"
#include "UnityEngine/VFX/zzzz__VisualEffect_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::VFX::Utility::VFXAudioSpectrumBinder_AudioSourceMode::VFXAudioSpectrumBinder_AudioSourceMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::VFX::Utility::VFXAudioSpectrumBinder_AudioSourceMode::VFXAudioSpectrumBinder_AudioSourceMode() {}
constexpr ::UnityEngine::VFX::Utility::VFXAudioSpectrumBinder_AudioSourceMode UnityEngine::VFX::Utility::VFXAudioSpectrumBinder_AudioSourceMode::AudioSource{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::VFX::Utility::VFXAudioSpectrumBinder_AudioSourceMode UnityEngine::VFX::Utility::VFXAudioSpectrumBinder_AudioSourceMode::AudioListener{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXAudioSpectrumBinder.get_CountProperty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::VFX::Utility::VFXAudioSpectrumBinder::*)()>(&::UnityEngine::VFX::Utility::VFXAudioSpectrumBinder::get_CountProperty)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x69dcad0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXAudioSpectrumBinder*>(), { "get_CountProperty", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXAudioSpectrumBinder.set_CountProperty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::Utility::VFXAudioSpectrumBinder::*)(::StringW)>(
    &::UnityEngine::VFX::Utility::VFXAudioSpectrumBinder::set_CountProperty)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x69dcae8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXAudioSpectrumBinder*>(), { "set_CountProperty", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXAudioSpectrumBinder.get_TextureProperty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::VFX::Utility::VFXAudioSpectrumBinder::*)()>(
    &::UnityEngine::VFX::Utility::VFXAudioSpectrumBinder::get_TextureProperty)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x69dcb04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXAudioSpectrumBinder*>(), { "get_TextureProperty", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXAudioSpectrumBinder.set_TextureProperty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::Utility::VFXAudioSpectrumBinder::*)(::StringW)>(
    &::UnityEngine::VFX::Utility::VFXAudioSpectrumBinder::set_TextureProperty)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x69dcb1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXAudioSpectrumBinder*>(), { "set_TextureProperty", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXAudioSpectrumBinder.IsValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::VFX::Utility::VFXAudioSpectrumBinder::*)(::UnityEngine::VFX::VisualEffect*)>(
    &::UnityEngine::VFX::Utility::VFXAudioSpectrumBinder::IsValid)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x69dcb38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXAudioSpectrumBinder*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::VFX::Utility::VFXAudioSpectrumBinder*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXAudioSpectrumBinder.UpdateTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::Utility::VFXAudioSpectrumBinder::*)()>(&::UnityEngine::VFX::Utility::VFXAudioSpectrumBinder::UpdateTexture)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x69dcc18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXAudioSpectrumBinder*>(), { "UpdateTexture", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXAudioSpectrumBinder.UpdateBinding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::Utility::VFXAudioSpectrumBinder::*)(::UnityEngine::VFX::VisualEffect*)>(
    &::UnityEngine::VFX::Utility::VFXAudioSpectrumBinder::UpdateBinding)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x69dce98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXAudioSpectrumBinder*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::VFX::Utility::VFXAudioSpectrumBinder*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXAudioSpectrumBinder.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::VFX::Utility::VFXAudioSpectrumBinder::*)()>(&::UnityEngine::VFX::Utility::VFXAudioSpectrumBinder::ToString)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x69dcf0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXAudioSpectrumBinder*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::VFX::Utility::VFXAudioSpectrumBinder*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXAudioSpectrumBinder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::Utility::VFXAudioSpectrumBinder::*)()>(&::UnityEngine::VFX::Utility::VFXAudioSpectrumBinder::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x69dcfdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXAudioSpectrumBinder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& UnityEngine::VFX::Utility::VFXAudioSpectrumBinder::__cordl_internal_get_m_CountProperty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CountProperty;
}
constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& UnityEngine::VFX::Utility::VFXAudioSpectrumBinder::__cordl_internal_get_m_CountProperty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CountProperty;
}
constexpr void UnityEngine::VFX::Utility::VFXAudioSpectrumBinder::__cordl_internal_set_m_CountProperty(::UnityEngine::VFX::Utility::ExposedProperty* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CountProperty = value;
}
constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& UnityEngine::VFX::Utility::VFXAudioSpectrumBinder::__cordl_internal_get_m_TextureProperty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TextureProperty;
}
constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& UnityEngine::VFX::Utility::VFXAudioSpectrumBinder::__cordl_internal_get_m_TextureProperty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TextureProperty;
}
constexpr void UnityEngine::VFX::Utility::VFXAudioSpectrumBinder::__cordl_internal_set_m_TextureProperty(::UnityEngine::VFX::Utility::ExposedProperty* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TextureProperty = value;
}
constexpr ::UnityEngine::FFTWindow& UnityEngine::VFX::Utility::VFXAudioSpectrumBinder::__cordl_internal_get_FFTWindow() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___FFTWindow;
}
constexpr ::UnityEngine::FFTWindow const& UnityEngine::VFX::Utility::VFXAudioSpectrumBinder::__cordl_internal_get_FFTWindow() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___FFTWindow;
}
constexpr void UnityEngine::VFX::Utility::VFXAudioSpectrumBinder::__cordl_internal_set_FFTWindow(::UnityEngine::FFTWindow value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___FFTWindow = value;
}
constexpr uint32_t& UnityEngine::VFX::Utility::VFXAudioSpectrumBinder::__cordl_internal_get_Samples() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Samples;
}
constexpr uint32_t const& UnityEngine::VFX::Utility::VFXAudioSpectrumBinder::__cordl_internal_get_Samples() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Samples;
}
constexpr void UnityEngine::VFX::Utility::VFXAudioSpectrumBinder::__cordl_internal_set_Samples(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Samples = value;
}
constexpr ::UnityEngine::VFX::Utility::VFXAudioSpectrumBinder_AudioSourceMode& UnityEngine::VFX::Utility::VFXAudioSpectrumBinder::__cordl_internal_get_Mode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Mode;
}
constexpr ::UnityEngine::VFX::Utility::VFXAudioSpectrumBinder_AudioSourceMode const& UnityEngine::VFX::Utility::VFXAudioSpectrumBinder::__cordl_internal_get_Mode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Mode;
}
constexpr void UnityEngine::VFX::Utility::VFXAudioSpectrumBinder::__cordl_internal_set_Mode(::UnityEngine::VFX::Utility::VFXAudioSpectrumBinder_AudioSourceMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Mode = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& UnityEngine::VFX::Utility::VFXAudioSpectrumBinder::__cordl_internal_get_AudioSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AudioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& UnityEngine::VFX::Utility::VFXAudioSpectrumBinder::__cordl_internal_get_AudioSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AudioSource;
}
constexpr void UnityEngine::VFX::Utility::VFXAudioSpectrumBinder::__cordl_internal_set_AudioSource(::UnityW<::UnityEngine::AudioSource> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___AudioSource = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& UnityEngine::VFX::Utility::VFXAudioSpectrumBinder::__cordl_internal_get_m_Texture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Texture;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& UnityEngine::VFX::Utility::VFXAudioSpectrumBinder::__cordl_internal_get_m_Texture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Texture;
}
constexpr void UnityEngine::VFX::Utility::VFXAudioSpectrumBinder::__cordl_internal_set_m_Texture(::UnityW<::UnityEngine::Texture2D> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Texture = value;
}
constexpr ::ArrayW<float_t>& UnityEngine::VFX::Utility::VFXAudioSpectrumBinder::__cordl_internal_get_m_AudioCache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AudioCache;
}
constexpr ::ArrayW<float_t> const& UnityEngine::VFX::Utility::VFXAudioSpectrumBinder::__cordl_internal_get_m_AudioCache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AudioCache;
}
constexpr void UnityEngine::VFX::Utility::VFXAudioSpectrumBinder::__cordl_internal_set_m_AudioCache(::ArrayW<float_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AudioCache = value;
}
constexpr ::ArrayW<::UnityEngine::Color>& UnityEngine::VFX::Utility::VFXAudioSpectrumBinder::__cordl_internal_get_m_ColorCache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ColorCache;
}
constexpr ::ArrayW<::UnityEngine::Color> const& UnityEngine::VFX::Utility::VFXAudioSpectrumBinder::__cordl_internal_get_m_ColorCache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ColorCache;
}
constexpr void UnityEngine::VFX::Utility::VFXAudioSpectrumBinder::__cordl_internal_set_m_ColorCache(::ArrayW<::UnityEngine::Color> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ColorCache = value;
}
inline ::StringW UnityEngine::VFX::Utility::VFXAudioSpectrumBinder::get_CountProperty() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXAudioSpectrumBinder*>(), { "get_CountProperty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::VFX::Utility::VFXAudioSpectrumBinder::set_CountProperty(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXAudioSpectrumBinder*>(), { "set_CountProperty", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::VFX::Utility::VFXAudioSpectrumBinder::get_TextureProperty() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXAudioSpectrumBinder*>(), { "get_TextureProperty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::VFX::Utility::VFXAudioSpectrumBinder::set_TextureProperty(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXAudioSpectrumBinder*>(), { "set_TextureProperty", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::VFX::Utility::VFXAudioSpectrumBinder::IsValid(::UnityEngine::VFX::VisualEffect* component) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::VFX::Utility::VFXAudioSpectrumBinder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, component);
}
inline void UnityEngine::VFX::Utility::VFXAudioSpectrumBinder::UpdateTexture() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXAudioSpectrumBinder*>(), { "UpdateTexture", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::VFX::Utility::VFXAudioSpectrumBinder::UpdateBinding(::UnityEngine::VFX::VisualEffect* component) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::VFX::Utility::VFXAudioSpectrumBinder*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, component);
}
inline ::StringW UnityEngine::VFX::Utility::VFXAudioSpectrumBinder::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::VFX::Utility::VFXAudioSpectrumBinder*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::VFX::Utility::VFXAudioSpectrumBinder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXAudioSpectrumBinder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::VFX::Utility::VFXAudioSpectrumBinder* UnityEngine::VFX::Utility::VFXAudioSpectrumBinder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::VFX::Utility::VFXAudioSpectrumBinder*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::VFX::Utility::VFXAudioSpectrumBinder::VFXAudioSpectrumBinder() {}

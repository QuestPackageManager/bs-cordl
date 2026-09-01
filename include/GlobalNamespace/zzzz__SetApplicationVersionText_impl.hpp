#pragma once
// IWYU pragma private; include "GlobalNamespace\SetApplicationVersionText.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SetApplicationVersionText_def.hpp"
#include "BeatSaber/Init/zzzz__GameVersionProvider_def.hpp"
#include "BeatSaber/Init/zzzz__GameVersion_def.hpp"
#include "TMPro/zzzz__TextMeshPro_def.hpp"
#include "UnityEngine/zzzz__SpriteRenderer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SetApplicationVersionText.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SetApplicationVersionText::*)()>(&::GlobalNamespace::SetApplicationVersionText::Start)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x59ae000;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SetApplicationVersionText*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SetApplicationVersionText.SetText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SetApplicationVersionText::*)(::BeatSaber::Init::GameVersion*)>(
    &::GlobalNamespace::SetApplicationVersionText::SetText)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x59ae114;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SetApplicationVersionText*>(), { "SetText", {}, { ::i2c::type_of<::BeatSaber::Init::GameVersion*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SetApplicationVersionText.ToggleVersionColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SetApplicationVersionText::*)()>(&::GlobalNamespace::SetApplicationVersionText::ToggleVersionColor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x59ae414;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SetApplicationVersionText*>(), { "ToggleVersionColor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SetApplicationVersionText._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SetApplicationVersionText::*)()>(&::GlobalNamespace::SetApplicationVersionText::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x59ae4a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SetApplicationVersionText*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TextMeshPro>& GlobalNamespace::SetApplicationVersionText::__cordl_internal_get__versionText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____versionText;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& GlobalNamespace::SetApplicationVersionText::__cordl_internal_get__versionText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____versionText;
}
constexpr void GlobalNamespace::SetApplicationVersionText::__cordl_internal_set__versionText(::UnityW<::TMPro::TextMeshPro> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____versionText = value;
}
constexpr ::UnityW<::TMPro::TextMeshPro>& GlobalNamespace::SetApplicationVersionText::__cordl_internal_get__labelText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____labelText;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& GlobalNamespace::SetApplicationVersionText::__cordl_internal_get__labelText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____labelText;
}
constexpr void GlobalNamespace::SetApplicationVersionText::__cordl_internal_set__labelText(::UnityW<::TMPro::TextMeshPro> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____labelText = value;
}
constexpr ::UnityW<::TMPro::TextMeshPro>& GlobalNamespace::SetApplicationVersionText::__cordl_internal_get__buildIdText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buildIdText;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& GlobalNamespace::SetApplicationVersionText::__cordl_internal_get__buildIdText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buildIdText;
}
constexpr void GlobalNamespace::SetApplicationVersionText::__cordl_internal_set__buildIdText(::UnityW<::TMPro::TextMeshPro> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____buildIdText = value;
}
constexpr ::UnityW<::TMPro::TextMeshPro>& GlobalNamespace::SetApplicationVersionText::__cordl_internal_get__platformIdText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____platformIdText;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& GlobalNamespace::SetApplicationVersionText::__cordl_internal_get__platformIdText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____platformIdText;
}
constexpr void GlobalNamespace::SetApplicationVersionText::__cordl_internal_set__platformIdText(::UnityW<::TMPro::TextMeshPro> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____platformIdText = value;
}
constexpr ::UnityW<::UnityEngine::SpriteRenderer>& GlobalNamespace::SetApplicationVersionText::__cordl_internal_get__footSprite() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____footSprite;
}
constexpr ::UnityW<::UnityEngine::SpriteRenderer> const& GlobalNamespace::SetApplicationVersionText::__cordl_internal_get__footSprite() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____footSprite;
}
constexpr void GlobalNamespace::SetApplicationVersionText::__cordl_internal_set__footSprite(::UnityW<::UnityEngine::SpriteRenderer> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____footSprite = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::SetApplicationVersionText::__cordl_internal_get__rcBuildColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rcBuildColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::SetApplicationVersionText::__cordl_internal_get__rcBuildColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rcBuildColor;
}
constexpr void GlobalNamespace::SetApplicationVersionText::__cordl_internal_set__rcBuildColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rcBuildColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::SetApplicationVersionText::__cordl_internal_get__nonRCBuildColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nonRCBuildColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::SetApplicationVersionText::__cordl_internal_get__nonRCBuildColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nonRCBuildColor;
}
constexpr void GlobalNamespace::SetApplicationVersionText::__cordl_internal_set__nonRCBuildColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____nonRCBuildColor = value;
}
constexpr ::BeatSaber::Init::GameVersionProvider*& GlobalNamespace::SetApplicationVersionText::__cordl_internal_get__gameVersionProvider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameVersionProvider;
}
constexpr ::BeatSaber::Init::GameVersionProvider* const& GlobalNamespace::SetApplicationVersionText::__cordl_internal_get__gameVersionProvider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameVersionProvider;
}
constexpr void GlobalNamespace::SetApplicationVersionText::__cordl_internal_set__gameVersionProvider(::BeatSaber::Init::GameVersionProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gameVersionProvider = value;
}
inline void GlobalNamespace::SetApplicationVersionText::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SetApplicationVersionText*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SetApplicationVersionText::SetText(::BeatSaber::Init::GameVersion* gameVersion) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SetApplicationVersionText*>(), { "SetText", {}, { ::i2c::type_of<::BeatSaber::Init::GameVersion*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gameVersion);
}
inline void GlobalNamespace::SetApplicationVersionText::ToggleVersionColor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SetApplicationVersionText*>(), { "ToggleVersionColor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SetApplicationVersionText::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SetApplicationVersionText*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SetApplicationVersionText* GlobalNamespace::SetApplicationVersionText::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SetApplicationVersionText*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SetApplicationVersionText::SetApplicationVersionText() {}

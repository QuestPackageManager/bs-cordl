#pragma once
// IWYU pragma private; include "GlobalNamespace/GameplayModifierToggle.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GameplayModifierToggle_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifierParamsSO_def.hpp"
#include "HMUI/zzzz__HoverTextSetter_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
#include "UnityEngine/UI/zzzz__Toggle_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GameplayModifierToggle.get_toggle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::UI::Toggle> (::GlobalNamespace::GameplayModifierToggle::*)()>(&::GlobalNamespace::GameplayModifierToggle::get_toggle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a2e94c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifierToggle*>(), { "get_toggle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayModifierToggle.get_gameplayModifier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::GameplayModifierParamsSO> (::GlobalNamespace::GameplayModifierToggle::*)()>(
    &::GlobalNamespace::GameplayModifierToggle::get_gameplayModifier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a2e954;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifierToggle*>(), { "get_gameplayModifier", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayModifierToggle.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayModifierToggle::*)()>(&::GlobalNamespace::GameplayModifierToggle::Start)> {
  constexpr static std::size_t size = 0x3cc;
  constexpr static std::size_t addrs = 0x5a2e95c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifierToggle*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayModifierToggle._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayModifierToggle::*)()>(&::GlobalNamespace::GameplayModifierToggle::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a2ed28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifierToggle*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GameplayModifierParamsSO>& GlobalNamespace::GameplayModifierToggle::__cordl_internal_get__gameplayModifier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayModifier;
}
constexpr ::UnityW<::GlobalNamespace::GameplayModifierParamsSO> const& GlobalNamespace::GameplayModifierToggle::__cordl_internal_get__gameplayModifier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayModifier;
}
constexpr void GlobalNamespace::GameplayModifierToggle::__cordl_internal_set__gameplayModifier(::UnityW<::GlobalNamespace::GameplayModifierParamsSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gameplayModifier = value;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::GameplayModifierToggle::__cordl_internal_get__nameText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nameText;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::GameplayModifierToggle::__cordl_internal_get__nameText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nameText;
}
constexpr void GlobalNamespace::GameplayModifierToggle::__cordl_internal_set__nameText(::UnityW<::TMPro::TextMeshProUGUI> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____nameText = value;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::GameplayModifierToggle::__cordl_internal_get__multiplierText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplierText;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::GameplayModifierToggle::__cordl_internal_get__multiplierText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplierText;
}
constexpr void GlobalNamespace::GameplayModifierToggle::__cordl_internal_set__multiplierText(::UnityW<::TMPro::TextMeshProUGUI> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____multiplierText = value;
}
constexpr ::UnityW<::HMUI::HoverTextSetter>& GlobalNamespace::GameplayModifierToggle::__cordl_internal_get__hoverTextSetter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hoverTextSetter;
}
constexpr ::UnityW<::HMUI::HoverTextSetter> const& GlobalNamespace::GameplayModifierToggle::__cordl_internal_get__hoverTextSetter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hoverTextSetter;
}
constexpr void GlobalNamespace::GameplayModifierToggle::__cordl_internal_set__hoverTextSetter(::UnityW<::HMUI::HoverTextSetter> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hoverTextSetter = value;
}
constexpr ::UnityW<::UnityEngine::UI::Image>& GlobalNamespace::GameplayModifierToggle::__cordl_internal_get__icon() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____icon;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& GlobalNamespace::GameplayModifierToggle::__cordl_internal_get__icon() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____icon;
}
constexpr void GlobalNamespace::GameplayModifierToggle::__cordl_internal_set__icon(::UnityW<::UnityEngine::UI::Image> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____icon = value;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle>& GlobalNamespace::GameplayModifierToggle::__cordl_internal_get__toggle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____toggle;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle> const& GlobalNamespace::GameplayModifierToggle::__cordl_internal_get__toggle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____toggle;
}
constexpr void GlobalNamespace::GameplayModifierToggle::__cordl_internal_set__toggle(::UnityW<::UnityEngine::UI::Toggle> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____toggle = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::GameplayModifierToggle::__cordl_internal_get__positiveColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____positiveColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::GameplayModifierToggle::__cordl_internal_get__positiveColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____positiveColor;
}
constexpr void GlobalNamespace::GameplayModifierToggle::__cordl_internal_set__positiveColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____positiveColor = value;
}
inline ::UnityW<::UnityEngine::UI::Toggle> GlobalNamespace::GameplayModifierToggle::get_toggle() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifierToggle*>(), { "get_toggle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::UI::Toggle>>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::GameplayModifierParamsSO> GlobalNamespace::GameplayModifierToggle::get_gameplayModifier() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifierToggle*>(), { "get_gameplayModifier", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>>(this, ___internal_method);
}
inline void GlobalNamespace::GameplayModifierToggle::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifierToggle*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameplayModifierToggle::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifierToggle*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GameplayModifierToggle* GlobalNamespace::GameplayModifierToggle::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameplayModifierToggle*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameplayModifierToggle::GameplayModifierToggle() {}

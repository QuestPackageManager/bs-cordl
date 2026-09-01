#pragma once
// IWYU pragma private; include "GlobalNamespace\TextMeshProButton.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__TextMeshProButton_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TextMeshProButton.get_text
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::TMPro::TextMeshProUGUI> (::GlobalNamespace::TextMeshProButton::*)()>(&::GlobalNamespace::TextMeshProButton::get_text)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a03bcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextMeshProButton*>(), { "get_text", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextMeshProButton.get_button
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::UI::Button> (::GlobalNamespace::TextMeshProButton::*)()>(&::GlobalNamespace::TextMeshProButton::get_button)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a03bd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextMeshProButton*>(), { "get_button", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextMeshProButton._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextMeshProButton::*)()>(&::GlobalNamespace::TextMeshProButton::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a03bdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextMeshProButton*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::TextMeshProButton::__cordl_internal_get__text() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____text;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::TextMeshProButton::__cordl_internal_get__text() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____text;
}
constexpr void GlobalNamespace::TextMeshProButton::__cordl_internal_set__text(::UnityW<::TMPro::TextMeshProUGUI> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____text = value;
}
constexpr ::UnityW<::UnityEngine::UI::Button>& GlobalNamespace::TextMeshProButton::__cordl_internal_get__button() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____button;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& GlobalNamespace::TextMeshProButton::__cordl_internal_get__button() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____button;
}
constexpr void GlobalNamespace::TextMeshProButton::__cordl_internal_set__button(::UnityW<::UnityEngine::UI::Button> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____button = value;
}
inline ::UnityW<::TMPro::TextMeshProUGUI> GlobalNamespace::TextMeshProButton::get_text() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextMeshProButton*>(), { "get_text", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::TMPro::TextMeshProUGUI>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::UI::Button> GlobalNamespace::TextMeshProButton::get_button() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextMeshProButton*>(), { "get_button", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::UI::Button>>(this, ___internal_method);
}
inline void GlobalNamespace::TextMeshProButton::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextMeshProButton*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TextMeshProButton* GlobalNamespace::TextMeshProButton::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TextMeshProButton*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TextMeshProButton::TextMeshProButton() {}

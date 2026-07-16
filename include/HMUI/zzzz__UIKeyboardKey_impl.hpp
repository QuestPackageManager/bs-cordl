#pragma once
// IWYU pragma private; include "HMUI/UIKeyboardKey.hpp"
#include "UnityEngine/zzzz__KeyCode_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "HMUI/zzzz__UIKeyboardKey_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "UnityEngine/zzzz__KeyCode_def.hpp"
//  Writing Method size for method: ::HMUI::UIKeyboardKey.get_keyCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::KeyCode (::HMUI::UIKeyboardKey::*)()>(&::HMUI::UIKeyboardKey::get_keyCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x587ddf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::UIKeyboardKey*>(), { "get_keyCode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::UIKeyboardKey.get_canBeUppercase
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::HMUI::UIKeyboardKey::*)()>(&::HMUI::UIKeyboardKey::get_canBeUppercase)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x587de00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::UIKeyboardKey*>(), { "get_canBeUppercase", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::UIKeyboardKey.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::UIKeyboardKey::*)()>(&::HMUI::UIKeyboardKey::Awake)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x587de08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::UIKeyboardKey*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::UIKeyboardKey.OnValidate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::UIKeyboardKey::*)()>(&::HMUI::UIKeyboardKey::OnValidate)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x587deac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::UIKeyboardKey*>(), { "OnValidate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::UIKeyboardKey._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::UIKeyboardKey::*)()>(&::HMUI::UIKeyboardKey::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x587df90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::UIKeyboardKey*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::KeyCode& HMUI::UIKeyboardKey::__cordl_internal_get__keyCode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____keyCode;
}
constexpr ::UnityEngine::KeyCode const& HMUI::UIKeyboardKey::__cordl_internal_get__keyCode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____keyCode;
}
constexpr void HMUI::UIKeyboardKey::__cordl_internal_set__keyCode(::UnityEngine::KeyCode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____keyCode = value;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& HMUI::UIKeyboardKey::__cordl_internal_get__text() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____text;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& HMUI::UIKeyboardKey::__cordl_internal_get__text() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____text;
}
constexpr void HMUI::UIKeyboardKey::__cordl_internal_set__text(::UnityW<::TMPro::TextMeshProUGUI> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____text = value;
}
constexpr ::StringW& HMUI::UIKeyboardKey::__cordl_internal_get__overrideText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overrideText;
}
constexpr ::StringW const& HMUI::UIKeyboardKey::__cordl_internal_get__overrideText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overrideText;
}
constexpr void HMUI::UIKeyboardKey::__cordl_internal_set__overrideText(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____overrideText = value;
}
constexpr bool& HMUI::UIKeyboardKey::__cordl_internal_get__canBeUppercase() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____canBeUppercase;
}
constexpr bool const& HMUI::UIKeyboardKey::__cordl_internal_get__canBeUppercase() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____canBeUppercase;
}
constexpr void HMUI::UIKeyboardKey::__cordl_internal_set__canBeUppercase(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____canBeUppercase = value;
}
constexpr bool& HMUI::UIKeyboardKey::__cordl_internal_get__dontSetText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dontSetText;
}
constexpr bool const& HMUI::UIKeyboardKey::__cordl_internal_get__dontSetText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dontSetText;
}
constexpr void HMUI::UIKeyboardKey::__cordl_internal_set__dontSetText(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dontSetText = value;
}
inline ::UnityEngine::KeyCode HMUI::UIKeyboardKey::get_keyCode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::UIKeyboardKey*>(), { "get_keyCode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::KeyCode>(this, ___internal_method);
}
inline bool HMUI::UIKeyboardKey::get_canBeUppercase() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::UIKeyboardKey*>(), { "get_canBeUppercase", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void HMUI::UIKeyboardKey::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::UIKeyboardKey*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::UIKeyboardKey::OnValidate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::UIKeyboardKey*>(), { "OnValidate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::UIKeyboardKey::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::UIKeyboardKey*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::HMUI::UIKeyboardKey* HMUI::UIKeyboardKey::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HMUI::UIKeyboardKey*>());
}
// Ctor Parameters []
constexpr ::HMUI::UIKeyboardKey::UIKeyboardKey() {}

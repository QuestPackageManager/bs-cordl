#pragma once
// IWYU pragma private; include "UnityEngine/GUISettings.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__GUISettings_def.hpp"
//  Writing Method size for method: ::UnityEngine::GUISettings._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GUISettings::*)()>(&::UnityEngine::GUISettings::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6b446d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISettings*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::GUISettings::__cordl_internal_get_m_DoubleClickSelectsWord() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DoubleClickSelectsWord;
}
constexpr bool const& UnityEngine::GUISettings::__cordl_internal_get_m_DoubleClickSelectsWord() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DoubleClickSelectsWord;
}
constexpr void UnityEngine::GUISettings::__cordl_internal_set_m_DoubleClickSelectsWord(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DoubleClickSelectsWord = value;
}
constexpr bool& UnityEngine::GUISettings::__cordl_internal_get_m_TripleClickSelectsLine() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TripleClickSelectsLine;
}
constexpr bool const& UnityEngine::GUISettings::__cordl_internal_get_m_TripleClickSelectsLine() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TripleClickSelectsLine;
}
constexpr void UnityEngine::GUISettings::__cordl_internal_set_m_TripleClickSelectsLine(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TripleClickSelectsLine = value;
}
constexpr ::UnityEngine::Color& UnityEngine::GUISettings::__cordl_internal_get_m_CursorColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CursorColor;
}
constexpr ::UnityEngine::Color const& UnityEngine::GUISettings::__cordl_internal_get_m_CursorColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CursorColor;
}
constexpr void UnityEngine::GUISettings::__cordl_internal_set_m_CursorColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CursorColor = value;
}
constexpr float_t& UnityEngine::GUISettings::__cordl_internal_get_m_CursorFlashSpeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CursorFlashSpeed;
}
constexpr float_t const& UnityEngine::GUISettings::__cordl_internal_get_m_CursorFlashSpeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CursorFlashSpeed;
}
constexpr void UnityEngine::GUISettings::__cordl_internal_set_m_CursorFlashSpeed(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CursorFlashSpeed = value;
}
constexpr ::UnityEngine::Color& UnityEngine::GUISettings::__cordl_internal_get_m_SelectionColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SelectionColor;
}
constexpr ::UnityEngine::Color const& UnityEngine::GUISettings::__cordl_internal_get_m_SelectionColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SelectionColor;
}
constexpr void UnityEngine::GUISettings::__cordl_internal_set_m_SelectionColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SelectionColor = value;
}
inline void UnityEngine::GUISettings::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISettings*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::GUISettings* UnityEngine::GUISettings::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::GUISettings*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::GUISettings::GUISettings() {}

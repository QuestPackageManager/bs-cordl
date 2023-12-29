#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__GUISettings_def.hpp"
//  Writing Method size for method: ::UnityEngine::GUISettings._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::GUISettings::*)()>(&::UnityEngine::GUISettings::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2ba01cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISettings*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::GUISettings::__get_m_DoubleClickSelectsWord() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DoubleClickSelectsWord;
}
constexpr bool const& UnityEngine::GUISettings::__get_m_DoubleClickSelectsWord() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DoubleClickSelectsWord;
}
constexpr void UnityEngine::GUISettings::__set_m_DoubleClickSelectsWord(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DoubleClickSelectsWord = value;
}
constexpr bool& UnityEngine::GUISettings::__get_m_TripleClickSelectsLine() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TripleClickSelectsLine;
}
constexpr bool const& UnityEngine::GUISettings::__get_m_TripleClickSelectsLine() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TripleClickSelectsLine;
}
constexpr void UnityEngine::GUISettings::__set_m_TripleClickSelectsLine(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TripleClickSelectsLine = value;
}
constexpr ::UnityEngine::Color& UnityEngine::GUISettings::__get_m_CursorColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CursorColor;
}
constexpr ::UnityEngine::Color const& UnityEngine::GUISettings::__get_m_CursorColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CursorColor;
}
constexpr void UnityEngine::GUISettings::__set_m_CursorColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CursorColor = value;
}
constexpr float_t& UnityEngine::GUISettings::__get_m_CursorFlashSpeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CursorFlashSpeed;
}
constexpr float_t const& UnityEngine::GUISettings::__get_m_CursorFlashSpeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CursorFlashSpeed;
}
constexpr void UnityEngine::GUISettings::__set_m_CursorFlashSpeed(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CursorFlashSpeed = value;
}
constexpr ::UnityEngine::Color& UnityEngine::GUISettings::__get_m_SelectionColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SelectionColor;
}
constexpr ::UnityEngine::Color const& UnityEngine::GUISettings::__get_m_SelectionColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SelectionColor;
}
constexpr void UnityEngine::GUISettings::__set_m_SelectionColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SelectionColor = value;
}
inline ::UnityEngine::GUISettings* UnityEngine::GUISettings::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::GUISettings*>());
}
inline void UnityEngine::GUISettings::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISettings*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::GUISettings::GUISettings() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif

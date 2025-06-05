#pragma once
// IWYU pragma private; include "UnityEngine/TextEditor.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__TextEditor_def.hpp"
#include "UnityEngine/zzzz__GUIContent_def.hpp"
#include "UnityEngine/zzzz__GUIStyle_def.hpp"
#include "UnityEngine/zzzz__TextEditor_def.hpp"
#include "UnityEngine/zzzz__TouchScreenKeyboard_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::TextEditor_DblClickSnapping::TextEditor_DblClickSnapping(uint8_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::TextEditor_DblClickSnapping::TextEditor_DblClickSnapping() {}
constexpr ::UnityEngine::TextEditor_DblClickSnapping UnityEngine::TextEditor_DblClickSnapping::WORDS{ static_cast<uint8_t>(0x0u) };
constexpr ::UnityEngine::TextEditor_DblClickSnapping UnityEngine::TextEditor_DblClickSnapping::PARAGRAPHS{ static_cast<uint8_t>(0x1u) };
//  Writing Method size for method: ::UnityEngine::TextEditor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::_ctor)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x48e753c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::TouchScreenKeyboard*& UnityEngine::TextEditor::__cordl_internal_get_keyboardOnScreen() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyboardOnScreen;
}
constexpr ::UnityEngine::TouchScreenKeyboard* const& UnityEngine::TextEditor::__cordl_internal_get_keyboardOnScreen() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyboardOnScreen;
}
constexpr void UnityEngine::TextEditor::__cordl_internal_set_keyboardOnScreen(::UnityEngine::TouchScreenKeyboard* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___keyboardOnScreen)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::TextEditor::__cordl_internal_get_controlID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___controlID;
}
constexpr int32_t const& UnityEngine::TextEditor::__cordl_internal_get_controlID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___controlID;
}
constexpr void UnityEngine::TextEditor::__cordl_internal_set_controlID(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___controlID = value;
}
constexpr ::UnityEngine::GUIStyle*& UnityEngine::TextEditor::__cordl_internal_get_style() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___style;
}
constexpr ::UnityEngine::GUIStyle* const& UnityEngine::TextEditor::__cordl_internal_get_style() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___style;
}
constexpr void UnityEngine::TextEditor::__cordl_internal_set_style(::UnityEngine::GUIStyle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___style)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::TextEditor::__cordl_internal_get_multiline() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___multiline;
}
constexpr bool const& UnityEngine::TextEditor::__cordl_internal_get_multiline() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___multiline;
}
constexpr void UnityEngine::TextEditor::__cordl_internal_set_multiline(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___multiline = value;
}
constexpr bool& UnityEngine::TextEditor::__cordl_internal_get_hasHorizontalCursorPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasHorizontalCursorPos;
}
constexpr bool const& UnityEngine::TextEditor::__cordl_internal_get_hasHorizontalCursorPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasHorizontalCursorPos;
}
constexpr void UnityEngine::TextEditor::__cordl_internal_set_hasHorizontalCursorPos(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hasHorizontalCursorPos = value;
}
constexpr bool& UnityEngine::TextEditor::__cordl_internal_get_isPasswordField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isPasswordField;
}
constexpr bool const& UnityEngine::TextEditor::__cordl_internal_get_isPasswordField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isPasswordField;
}
constexpr void UnityEngine::TextEditor::__cordl_internal_set_isPasswordField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isPasswordField = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::TextEditor::__cordl_internal_get_scrollOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scrollOffset;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::TextEditor::__cordl_internal_get_scrollOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scrollOffset;
}
constexpr void UnityEngine::TextEditor::__cordl_internal_set_scrollOffset(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___scrollOffset = value;
}
constexpr ::UnityEngine::GUIContent*& UnityEngine::TextEditor::__cordl_internal_get_m_Content() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Content;
}
constexpr ::UnityEngine::GUIContent* const& UnityEngine::TextEditor::__cordl_internal_get_m_Content() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Content;
}
constexpr void UnityEngine::TextEditor::__cordl_internal_set_m_Content(::UnityEngine::GUIContent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Content)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::TextEditor::__cordl_internal_get_m_CursorIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CursorIndex;
}
constexpr int32_t const& UnityEngine::TextEditor::__cordl_internal_get_m_CursorIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CursorIndex;
}
constexpr void UnityEngine::TextEditor::__cordl_internal_set_m_CursorIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CursorIndex = value;
}
constexpr int32_t& UnityEngine::TextEditor::__cordl_internal_get_m_SelectIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SelectIndex;
}
constexpr int32_t const& UnityEngine::TextEditor::__cordl_internal_get_m_SelectIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SelectIndex;
}
constexpr void UnityEngine::TextEditor::__cordl_internal_set_m_SelectIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SelectIndex = value;
}
constexpr bool& UnityEngine::TextEditor::__cordl_internal_get_m_RevealCursor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RevealCursor;
}
constexpr bool const& UnityEngine::TextEditor::__cordl_internal_get_m_RevealCursor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RevealCursor;
}
constexpr void UnityEngine::TextEditor::__cordl_internal_set_m_RevealCursor(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RevealCursor = value;
}
constexpr bool& UnityEngine::TextEditor::__cordl_internal_get_m_MouseDragSelectsWholeWords() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MouseDragSelectsWholeWords;
}
constexpr bool const& UnityEngine::TextEditor::__cordl_internal_get_m_MouseDragSelectsWholeWords() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MouseDragSelectsWholeWords;
}
constexpr void UnityEngine::TextEditor::__cordl_internal_set_m_MouseDragSelectsWholeWords(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MouseDragSelectsWholeWords = value;
}
constexpr int32_t& UnityEngine::TextEditor::__cordl_internal_get_m_DblClickInitPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DblClickInitPos;
}
constexpr int32_t const& UnityEngine::TextEditor::__cordl_internal_get_m_DblClickInitPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DblClickInitPos;
}
constexpr void UnityEngine::TextEditor::__cordl_internal_set_m_DblClickInitPos(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DblClickInitPos = value;
}
constexpr ::UnityEngine::TextEditor_DblClickSnapping& UnityEngine::TextEditor::__cordl_internal_get_m_DblClickSnap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DblClickSnap;
}
constexpr ::UnityEngine::TextEditor_DblClickSnapping const& UnityEngine::TextEditor::__cordl_internal_get_m_DblClickSnap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DblClickSnap;
}
constexpr void UnityEngine::TextEditor::__cordl_internal_set_m_DblClickSnap(::UnityEngine::TextEditor_DblClickSnapping value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DblClickSnap = value;
}
constexpr bool& UnityEngine::TextEditor::__cordl_internal_get_m_bJustSelected() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_bJustSelected;
}
constexpr bool const& UnityEngine::TextEditor::__cordl_internal_get_m_bJustSelected() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_bJustSelected;
}
constexpr void UnityEngine::TextEditor::__cordl_internal_set_m_bJustSelected(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_bJustSelected = value;
}
constexpr int32_t& UnityEngine::TextEditor::__cordl_internal_get_m_iAltCursorPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_iAltCursorPos;
}
constexpr int32_t const& UnityEngine::TextEditor::__cordl_internal_get_m_iAltCursorPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_iAltCursorPos;
}
constexpr void UnityEngine::TextEditor::__cordl_internal_set_m_iAltCursorPos(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_iAltCursorPos = value;
}
inline void UnityEngine::TextEditor::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::TextEditor* UnityEngine::TextEditor::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::TextEditor*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::TextEditor::TextEditor() {}

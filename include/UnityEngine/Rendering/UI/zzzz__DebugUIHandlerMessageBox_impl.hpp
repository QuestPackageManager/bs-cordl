#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\UI\DebugUIHandlerMessageBox.hpp"
#include "UnityEngine/Rendering/UI/zzzz__DebugUIHandlerWidget_impl.hpp"
#include "UnityEngine/zzzz__Color32_impl.hpp"
#include "UnityEngine/Rendering/UI/zzzz__DebugUIHandlerMessageBox_def.hpp"
#include "UnityEngine/Rendering/UI/zzzz__DebugUIHandlerWidget_def.hpp"
#include "UnityEngine/Rendering/zzzz__DebugUI_def.hpp"
#include "UnityEngine/UI/zzzz__Text_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerMessageBox.SetWidget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UI::DebugUIHandlerMessageBox::*)(::UnityEngine::Rendering::DebugUI_Widget*)>(
    &::UnityEngine::Rendering::UI::DebugUIHandlerMessageBox::SetWidget)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x68044f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerMessageBox*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerMessageBox*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerMessageBox.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UI::DebugUIHandlerMessageBox::*)()>(&::UnityEngine::Rendering::UI::DebugUIHandlerMessageBox::Update)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x680467c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerMessageBox*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerMessageBox.OnSelection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::UI::DebugUIHandlerMessageBox::*)(bool, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget*)>(
    &::UnityEngine::Rendering::UI::DebugUIHandlerMessageBox::OnSelection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68046d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerMessageBox*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerMessageBox*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerMessageBox._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UI::DebugUIHandlerMessageBox::*)()>(&::UnityEngine::Rendering::UI::DebugUIHandlerMessageBox::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x68046d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerMessageBox*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::Text>& UnityEngine::Rendering::UI::DebugUIHandlerMessageBox::__cordl_internal_get_nameLabel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nameLabel;
}
constexpr ::UnityW<::UnityEngine::UI::Text> const& UnityEngine::Rendering::UI::DebugUIHandlerMessageBox::__cordl_internal_get_nameLabel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nameLabel;
}
constexpr void UnityEngine::Rendering::UI::DebugUIHandlerMessageBox::__cordl_internal_set_nameLabel(::UnityW<::UnityEngine::UI::Text> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nameLabel = value;
}
constexpr ::UnityEngine::Rendering::DebugUI_MessageBox*& UnityEngine::Rendering::UI::DebugUIHandlerMessageBox::__cordl_internal_get_m_Field() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Field;
}
constexpr ::UnityEngine::Rendering::DebugUI_MessageBox* const& UnityEngine::Rendering::UI::DebugUIHandlerMessageBox::__cordl_internal_get_m_Field() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Field;
}
constexpr void UnityEngine::Rendering::UI::DebugUIHandlerMessageBox::__cordl_internal_set_m_Field(::UnityEngine::Rendering::DebugUI_MessageBox* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Field = value;
}
inline void UnityEngine::Rendering::UI::DebugUIHandlerMessageBox::setStaticF_k_WarningBackgroundColor(::UnityEngine::Color32 value) {
  ::cordl_internals::setStaticField<::UnityEngine::Color32, "k_WarningBackgroundColor", ::UnityEngine::Rendering::UI::DebugUIHandlerMessageBox*>(std::forward<::UnityEngine::Color32>(value));
}
inline ::UnityEngine::Color32 UnityEngine::Rendering::UI::DebugUIHandlerMessageBox::getStaticF_k_WarningBackgroundColor() {
  return ::cordl_internals::getStaticField<::UnityEngine::Color32, "k_WarningBackgroundColor", ::UnityEngine::Rendering::UI::DebugUIHandlerMessageBox*>();
}
inline void UnityEngine::Rendering::UI::DebugUIHandlerMessageBox::setStaticF_k_WarningTextColor(::UnityEngine::Color32 value) {
  ::cordl_internals::setStaticField<::UnityEngine::Color32, "k_WarningTextColor", ::UnityEngine::Rendering::UI::DebugUIHandlerMessageBox*>(std::forward<::UnityEngine::Color32>(value));
}
inline ::UnityEngine::Color32 UnityEngine::Rendering::UI::DebugUIHandlerMessageBox::getStaticF_k_WarningTextColor() {
  return ::cordl_internals::getStaticField<::UnityEngine::Color32, "k_WarningTextColor", ::UnityEngine::Rendering::UI::DebugUIHandlerMessageBox*>();
}
inline void UnityEngine::Rendering::UI::DebugUIHandlerMessageBox::setStaticF_k_ErrorBackgroundColor(::UnityEngine::Color32 value) {
  ::cordl_internals::setStaticField<::UnityEngine::Color32, "k_ErrorBackgroundColor", ::UnityEngine::Rendering::UI::DebugUIHandlerMessageBox*>(std::forward<::UnityEngine::Color32>(value));
}
inline ::UnityEngine::Color32 UnityEngine::Rendering::UI::DebugUIHandlerMessageBox::getStaticF_k_ErrorBackgroundColor() {
  return ::cordl_internals::getStaticField<::UnityEngine::Color32, "k_ErrorBackgroundColor", ::UnityEngine::Rendering::UI::DebugUIHandlerMessageBox*>();
}
inline void UnityEngine::Rendering::UI::DebugUIHandlerMessageBox::setStaticF_k_ErrorTextColor(::UnityEngine::Color32 value) {
  ::cordl_internals::setStaticField<::UnityEngine::Color32, "k_ErrorTextColor", ::UnityEngine::Rendering::UI::DebugUIHandlerMessageBox*>(std::forward<::UnityEngine::Color32>(value));
}
inline ::UnityEngine::Color32 UnityEngine::Rendering::UI::DebugUIHandlerMessageBox::getStaticF_k_ErrorTextColor() {
  return ::cordl_internals::getStaticField<::UnityEngine::Color32, "k_ErrorTextColor", ::UnityEngine::Rendering::UI::DebugUIHandlerMessageBox*>();
}
inline void UnityEngine::Rendering::UI::DebugUIHandlerMessageBox::SetWidget(::UnityEngine::Rendering::DebugUI_Widget* widget) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerMessageBox*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, widget);
}
inline void UnityEngine::Rendering::UI::DebugUIHandlerMessageBox::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerMessageBox*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::UI::DebugUIHandlerMessageBox::OnSelection(bool fromNext, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget* previous) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerMessageBox*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, fromNext, previous);
}
inline void UnityEngine::Rendering::UI::DebugUIHandlerMessageBox::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerMessageBox*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::UI::DebugUIHandlerMessageBox* UnityEngine::Rendering::UI::DebugUIHandlerMessageBox::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::UI::DebugUIHandlerMessageBox*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::UI::DebugUIHandlerMessageBox::DebugUIHandlerMessageBox() {}

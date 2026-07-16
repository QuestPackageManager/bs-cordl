#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UI/DebugUIHandlerObjectPopupField.hpp"
#include "UnityEngine/Rendering/UI/zzzz__DebugUIHandlerField_1_impl.hpp"
#include "UnityEngine/Rendering/UI/zzzz__DebugUIHandlerObjectPopupField_def.hpp"
#include "UnityEngine/Rendering/zzzz__DebugUI_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerObjectPopupField.SetWidget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UI::DebugUIHandlerObjectPopupField::*)(::UnityEngine::Rendering::DebugUI_Widget*)>(
    &::UnityEngine::Rendering::UI::DebugUIHandlerObjectPopupField::SetWidget)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x67ff37c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerObjectPopupField*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerObjectPopupField*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerObjectPopupField.ChangeSelectedObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UI::DebugUIHandlerObjectPopupField::*)()>(
    &::UnityEngine::Rendering::UI::DebugUIHandlerObjectPopupField::ChangeSelectedObject)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x67ff3e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerObjectPopupField*>(), { "ChangeSelectedObject", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerObjectPopupField.OnIncrement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UI::DebugUIHandlerObjectPopupField::*)(bool)>(
    &::UnityEngine::Rendering::UI::DebugUIHandlerObjectPopupField::OnIncrement)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x67ff4e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerObjectPopupField*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerObjectPopupField*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerObjectPopupField.OnDecrement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UI::DebugUIHandlerObjectPopupField::*)(bool)>(
    &::UnityEngine::Rendering::UI::DebugUIHandlerObjectPopupField::OnDecrement)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x67ff4f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerObjectPopupField*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerObjectPopupField*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerObjectPopupField.UpdateValueLabel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UI::DebugUIHandlerObjectPopupField::*)()>(
    &::UnityEngine::Rendering::UI::DebugUIHandlerObjectPopupField::UpdateValueLabel)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x67ff508;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerObjectPopupField*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerObjectPopupField*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerObjectPopupField._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UI::DebugUIHandlerObjectPopupField::*)()>(
    &::UnityEngine::Rendering::UI::DebugUIHandlerObjectPopupField::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x67ff600;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerObjectPopupField*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::Rendering::UI::DebugUIHandlerObjectPopupField::__cordl_internal_get_m_Index() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Index;
}
constexpr int32_t const& UnityEngine::Rendering::UI::DebugUIHandlerObjectPopupField::__cordl_internal_get_m_Index() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Index;
}
constexpr void UnityEngine::Rendering::UI::DebugUIHandlerObjectPopupField::__cordl_internal_set_m_Index(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Index = value;
}
inline void UnityEngine::Rendering::UI::DebugUIHandlerObjectPopupField::SetWidget(::UnityEngine::Rendering::DebugUI_Widget* widget) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerObjectPopupField*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, widget);
}
inline void UnityEngine::Rendering::UI::DebugUIHandlerObjectPopupField::ChangeSelectedObject() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerObjectPopupField*>(), { "ChangeSelectedObject", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::UI::DebugUIHandlerObjectPopupField::OnIncrement(bool fast) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerObjectPopupField*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fast);
}
inline void UnityEngine::Rendering::UI::DebugUIHandlerObjectPopupField::OnDecrement(bool fast) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerObjectPopupField*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fast);
}
inline void UnityEngine::Rendering::UI::DebugUIHandlerObjectPopupField::UpdateValueLabel() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerObjectPopupField*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::UI::DebugUIHandlerObjectPopupField::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerObjectPopupField*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::UI::DebugUIHandlerObjectPopupField* UnityEngine::Rendering::UI::DebugUIHandlerObjectPopupField::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::UI::DebugUIHandlerObjectPopupField*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::UI::DebugUIHandlerObjectPopupField::DebugUIHandlerObjectPopupField() {}

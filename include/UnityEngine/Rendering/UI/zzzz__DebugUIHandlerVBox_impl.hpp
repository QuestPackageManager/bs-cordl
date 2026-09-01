#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\UI\DebugUIHandlerVBox.hpp"
#include "UnityEngine/Rendering/UI/zzzz__DebugUIHandlerWidget_impl.hpp"
#include "UnityEngine/Rendering/UI/zzzz__DebugUIHandlerVBox_def.hpp"
#include "UnityEngine/Rendering/UI/zzzz__DebugUIHandlerContainer_def.hpp"
#include "UnityEngine/Rendering/UI/zzzz__DebugUIHandlerWidget_def.hpp"
#include "UnityEngine/Rendering/zzzz__DebugUI_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerVBox.SetWidget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UI::DebugUIHandlerVBox::*)(::UnityEngine::Rendering::DebugUI_Widget*)>(
    &::UnityEngine::Rendering::UI::DebugUIHandlerVBox::SetWidget)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6807bb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerVBox*>(), { ::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerVBox*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerVBox.OnSelection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::UI::DebugUIHandlerVBox::*)(bool, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget*)>(
    &::UnityEngine::Rendering::UI::DebugUIHandlerVBox::OnSelection)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6807c1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerVBox*>(), { ::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerVBox*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerVBox.Next
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerWidget> (::UnityEngine::Rendering::UI::DebugUIHandlerVBox::*)()>(
    &::UnityEngine::Rendering::UI::DebugUIHandlerVBox::Next)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6807cdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerVBox*>(), { ::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerVBox*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerVBox._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UI::DebugUIHandlerVBox::*)()>(&::UnityEngine::Rendering::UI::DebugUIHandlerVBox::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6807d98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerVBox*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerContainer>& UnityEngine::Rendering::UI::DebugUIHandlerVBox::__cordl_internal_get_m_Container() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Container;
}
constexpr ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerContainer> const& UnityEngine::Rendering::UI::DebugUIHandlerVBox::__cordl_internal_get_m_Container() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Container;
}
constexpr void UnityEngine::Rendering::UI::DebugUIHandlerVBox::__cordl_internal_set_m_Container(::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerContainer> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Container = value;
}
inline void UnityEngine::Rendering::UI::DebugUIHandlerVBox::SetWidget(::UnityEngine::Rendering::DebugUI_Widget* widget) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerVBox*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, widget);
}
inline bool UnityEngine::Rendering::UI::DebugUIHandlerVBox::OnSelection(bool fromNext, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget* previous) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerVBox*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, fromNext, previous);
}
inline ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerWidget> UnityEngine::Rendering::UI::DebugUIHandlerVBox::Next() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerVBox*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerWidget>>(this, ___internal_method);
}
inline void UnityEngine::Rendering::UI::DebugUIHandlerVBox::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerVBox*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::UI::DebugUIHandlerVBox* UnityEngine::Rendering::UI::DebugUIHandlerVBox::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::UI::DebugUIHandlerVBox*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::UI::DebugUIHandlerVBox::DebugUIHandlerVBox() {}

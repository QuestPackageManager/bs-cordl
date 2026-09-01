#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\UI\DebugUIHandlerObject.hpp"
#include "UnityEngine/Rendering/UI/zzzz__DebugUIHandlerWidget_impl.hpp"
#include "UnityEngine/Rendering/UI/zzzz__DebugUIHandlerObject_def.hpp"
#include "UnityEngine/Rendering/UI/zzzz__DebugUIHandlerWidget_def.hpp"
#include "UnityEngine/Rendering/zzzz__DebugUI_def.hpp"
#include "UnityEngine/UI/zzzz__Text_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerObject.SetWidget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UI::DebugUIHandlerObject::*)(::UnityEngine::Rendering::DebugUI_Widget*)>(
    &::UnityEngine::Rendering::UI::DebugUIHandlerObject::SetWidget)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x680477c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerObject*>(), { ::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerObject*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerObject.OnSelection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::UI::DebugUIHandlerObject::*)(bool, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget*)>(
    &::UnityEngine::Rendering::UI::DebugUIHandlerObject::OnSelection)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6804854;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerObject*>(), { ::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerObject*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerObject.OnDeselection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UI::DebugUIHandlerObject::*)()>(&::UnityEngine::Rendering::UI::DebugUIHandlerObject::OnDeselection)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x68048ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerObject*>(), { ::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerObject*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerObject._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UI::DebugUIHandlerObject::*)()>(&::UnityEngine::Rendering::UI::DebugUIHandlerObject::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x68048fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerObject*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::Text>& UnityEngine::Rendering::UI::DebugUIHandlerObject::__cordl_internal_get_nameLabel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nameLabel;
}
constexpr ::UnityW<::UnityEngine::UI::Text> const& UnityEngine::Rendering::UI::DebugUIHandlerObject::__cordl_internal_get_nameLabel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nameLabel;
}
constexpr void UnityEngine::Rendering::UI::DebugUIHandlerObject::__cordl_internal_set_nameLabel(::UnityW<::UnityEngine::UI::Text> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nameLabel = value;
}
constexpr ::UnityW<::UnityEngine::UI::Text>& UnityEngine::Rendering::UI::DebugUIHandlerObject::__cordl_internal_get_valueLabel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___valueLabel;
}
constexpr ::UnityW<::UnityEngine::UI::Text> const& UnityEngine::Rendering::UI::DebugUIHandlerObject::__cordl_internal_get_valueLabel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___valueLabel;
}
constexpr void UnityEngine::Rendering::UI::DebugUIHandlerObject::__cordl_internal_set_valueLabel(::UnityW<::UnityEngine::UI::Text> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___valueLabel = value;
}
inline void UnityEngine::Rendering::UI::DebugUIHandlerObject::SetWidget(::UnityEngine::Rendering::DebugUI_Widget* widget) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerObject*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, widget);
}
inline bool UnityEngine::Rendering::UI::DebugUIHandlerObject::OnSelection(bool fromNext, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget* previous) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerObject*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, fromNext, previous);
}
inline void UnityEngine::Rendering::UI::DebugUIHandlerObject::OnDeselection() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerObject*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::UI::DebugUIHandlerObject::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerObject*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::UI::DebugUIHandlerObject* UnityEngine::Rendering::UI::DebugUIHandlerObject::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::UI::DebugUIHandlerObject*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::UI::DebugUIHandlerObject::DebugUIHandlerObject() {}

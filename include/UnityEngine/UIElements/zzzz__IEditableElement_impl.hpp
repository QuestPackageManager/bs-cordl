#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\IEditableElement.hpp"
#include "UnityEngine/UIElements/zzzz__IEditableElement_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::IEditableElement.get_editingStarted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Action* (::UnityEngine::UIElements::IEditableElement::*)()>(&::UnityEngine::UIElements::IEditableElement::get_editingStarted)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IEditableElement*>(), { ::i2c::class_of<::UnityEngine::UIElements::IEditableElement*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IEditableElement.get_editingEnded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Action* (::UnityEngine::UIElements::IEditableElement::*)()>(&::UnityEngine::UIElements::IEditableElement::get_editingEnded)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IEditableElement*>(), { ::i2c::class_of<::UnityEngine::UIElements::IEditableElement*>(), 1 }));
    return ___internal_method;
  }
};
inline ::System::Action* UnityEngine::UIElements::IEditableElement::get_editingStarted() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::IEditableElement*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::System::Action*>(this, ___internal_method);
}
inline ::System::Action* UnityEngine::UIElements::IEditableElement::get_editingEnded() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::IEditableElement*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<::System::Action*>(this, ___internal_method);
}

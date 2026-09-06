#pragma once
// IWYU pragma private; include "UnityEngine/InputForUI/IEventProperties.hpp"
#include "UnityEngine/InputForUI/zzzz__IEventProperties_def.hpp"
#include "UnityEngine/InputForUI/zzzz__EventModifiers_def.hpp"
#include "UnityEngine/InputForUI/zzzz__EventSource_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputForUI::IEventProperties.get_eventSource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputForUI::EventSource (::UnityEngine::InputForUI::IEventProperties::*)()>(
    &::UnityEngine::InputForUI::IEventProperties::get_eventSource)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::IEventProperties*>(), { ::i2c::class_of<::UnityEngine::InputForUI::IEventProperties*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::IEventProperties.get_eventModifiers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputForUI::EventModifiers (::UnityEngine::InputForUI::IEventProperties::*)()>(
    &::UnityEngine::InputForUI::IEventProperties::get_eventModifiers)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::IEventProperties*>(), { ::i2c::class_of<::UnityEngine::InputForUI::IEventProperties*>(), 1 }));
    return ___internal_method;
  }
};
inline ::UnityEngine::InputForUI::EventSource UnityEngine::InputForUI::IEventProperties::get_eventSource() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputForUI::IEventProperties*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputForUI::EventSource>(this, ___internal_method);
}
inline ::UnityEngine::InputForUI::EventModifiers UnityEngine::InputForUI::IEventProperties::get_eventModifiers() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputForUI::IEventProperties*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputForUI::EventModifiers>(this, ___internal_method);
}

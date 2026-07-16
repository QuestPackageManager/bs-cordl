#pragma once
// IWYU pragma private; include "UnityEngine/InputForUI/EventConsumer.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/InputForUI/zzzz__EventConsumer_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputForUI/zzzz__Event_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputForUI::EventConsumer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputForUI::EventConsumer::*)(::System::Object*, ::System::IntPtr)>(&::UnityEngine::InputForUI::EventConsumer::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6b58df8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::EventConsumer*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::EventConsumer.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputForUI::EventConsumer::*)(::by_ref<::UnityEngine::InputForUI::Event>)>(
    &::UnityEngine::InputForUI::EventConsumer::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6b58e74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::EventConsumer*>(), { ::i2c::class_of<::UnityEngine::InputForUI::EventConsumer*>(), 13 }));
    return ___internal_method;
  }
};
inline void UnityEngine::InputForUI::EventConsumer::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::EventConsumer*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline bool UnityEngine::InputForUI::EventConsumer::Invoke(::by_ref<::UnityEngine::InputForUI::Event> ev) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputForUI::EventConsumer*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, ev);
}
inline ::UnityEngine::InputForUI::EventConsumer* UnityEngine::InputForUI::EventConsumer::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputForUI::EventConsumer*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::InputForUI::EventConsumer::EventConsumer() {}

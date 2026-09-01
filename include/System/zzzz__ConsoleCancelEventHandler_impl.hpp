#pragma once
// IWYU pragma private; include "System\ConsoleCancelEventHandler.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__ConsoleCancelEventHandler_def.hpp"
#include "System/zzzz__ConsoleCancelEventArgs_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::ConsoleCancelEventHandler._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ConsoleCancelEventHandler::*)(::System::Object*, ::System::IntPtr)>(&::System::ConsoleCancelEventHandler::_ctor)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x5c683ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::ConsoleCancelEventHandler*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ConsoleCancelEventHandler.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ConsoleCancelEventHandler::*)(::System::Object*, ::System::ConsoleCancelEventArgs*)>(
    &::System::ConsoleCancelEventHandler::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5c68534;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ConsoleCancelEventHandler*>(), { ::i2c::class_of<::System::ConsoleCancelEventHandler*>(), 13 }));
    return ___internal_method;
  }
};
inline void System::ConsoleCancelEventHandler::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ConsoleCancelEventHandler*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void System::ConsoleCancelEventHandler::Invoke(::System::Object* sender, ::System::ConsoleCancelEventArgs* e) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ConsoleCancelEventHandler*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, e);
}
inline ::System::ConsoleCancelEventHandler* System::ConsoleCancelEventHandler::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ConsoleCancelEventHandler*>(object, method));
}
// Ctor Parameters []
constexpr ::System::ConsoleCancelEventHandler::ConsoleCancelEventHandler() {}

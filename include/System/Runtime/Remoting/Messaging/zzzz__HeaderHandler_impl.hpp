#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Messaging/HeaderHandler.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__HeaderHandler_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__Header_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::HeaderHandler._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Messaging::HeaderHandler::*)(::System::Object*, ::System::IntPtr)>(
    &::System::Runtime::Remoting::Messaging::HeaderHandler::_ctor)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5b43570;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::HeaderHandler*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::HeaderHandler.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Runtime::Remoting::Messaging::HeaderHandler::*)(::ArrayW<::System::Runtime::Remoting::Messaging::Header*>)>(
    &::System::Runtime::Remoting::Messaging::HeaderHandler::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5b436b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::HeaderHandler*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Remoting::Messaging::HeaderHandler*>(), 13 }));
    return ___internal_method;
  }
};
inline void System::Runtime::Remoting::Messaging::HeaderHandler::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::HeaderHandler*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::System::Object* System::Runtime::Remoting::Messaging::HeaderHandler::Invoke(::ArrayW<::System::Runtime::Remoting::Messaging::Header*> headers) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Remoting::Messaging::HeaderHandler*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, headers);
}
inline ::System::Runtime::Remoting::Messaging::HeaderHandler* System::Runtime::Remoting::Messaging::HeaderHandler::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Remoting::Messaging::HeaderHandler*>(object, method));
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::Messaging::HeaderHandler::HeaderHandler() {}

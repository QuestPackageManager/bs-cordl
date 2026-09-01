#pragma once
// IWYU pragma private; include "System\AssemblyLoadEventHandler.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__AssemblyLoadEventHandler_def.hpp"
#include "System/zzzz__AssemblyLoadEventArgs_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::AssemblyLoadEventHandler._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::AssemblyLoadEventHandler::*)(::System::Object*, ::System::IntPtr)>(&::System::AssemblyLoadEventHandler::_ctor)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x5baeeec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::AssemblyLoadEventHandler*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AssemblyLoadEventHandler.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::AssemblyLoadEventHandler::*)(::System::Object*, ::System::AssemblyLoadEventArgs*)>(
    &::System::AssemblyLoadEventHandler::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5baf034;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::AssemblyLoadEventHandler*>(), { ::i2c::class_of<::System::AssemblyLoadEventHandler*>(), 13 }));
    return ___internal_method;
  }
};
inline void System::AssemblyLoadEventHandler::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::AssemblyLoadEventHandler*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void System::AssemblyLoadEventHandler::Invoke(::System::Object* sender, ::System::AssemblyLoadEventArgs* args) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::AssemblyLoadEventHandler*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, args);
}
inline ::System::AssemblyLoadEventHandler* System::AssemblyLoadEventHandler::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::AssemblyLoadEventHandler*>(object, method));
}
// Ctor Parameters []
constexpr ::System::AssemblyLoadEventHandler::AssemblyLoadEventHandler() {}

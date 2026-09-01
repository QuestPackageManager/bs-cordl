#pragma once
// IWYU pragma private; include "System\Runtime\Remoting\Contexts\CrossContextDelegate.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/Runtime/Remoting/Contexts/zzzz__CrossContextDelegate_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Contexts::CrossContextDelegate._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Contexts::CrossContextDelegate::*)(::System::Object*, ::System::IntPtr)>(
    &::System::Runtime::Remoting::Contexts::CrossContextDelegate::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5b39344;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Contexts::CrossContextDelegate*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Contexts::CrossContextDelegate.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Contexts::CrossContextDelegate::*)()>(&::System::Runtime::Remoting::Contexts::CrossContextDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5b393ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Contexts::CrossContextDelegate*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Remoting::Contexts::CrossContextDelegate*>(), 13 }));
    return ___internal_method;
  }
};
inline void System::Runtime::Remoting::Contexts::CrossContextDelegate::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Contexts::CrossContextDelegate*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void System::Runtime::Remoting::Contexts::CrossContextDelegate::Invoke() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Remoting::Contexts::CrossContextDelegate*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Runtime::Remoting::Contexts::CrossContextDelegate* System::Runtime::Remoting::Contexts::CrossContextDelegate::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Remoting::Contexts::CrossContextDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::Contexts::CrossContextDelegate::CrossContextDelegate() {}

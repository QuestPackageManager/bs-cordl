#pragma once
// IWYU pragma private; include "System\Threading\WaitCallback.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/Threading/zzzz__WaitCallback_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Threading::WaitCallback._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::WaitCallback::*)(::System::Object*, ::System::IntPtr)>(&::System::Threading::WaitCallback::_ctor)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5cb44f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::WaitCallback*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::WaitCallback.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::WaitCallback::*)(::System::Object*)>(&::System::Threading::WaitCallback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5cb4634;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Threading::WaitCallback*>(), { ::i2c::class_of<::System::Threading::WaitCallback*>(), 13 }));
    return ___internal_method;
  }
};
inline void System::Threading::WaitCallback::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::WaitCallback*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void System::Threading::WaitCallback::Invoke(::System::Object* state) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Threading::WaitCallback*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline ::System::Threading::WaitCallback* System::Threading::WaitCallback::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Threading::WaitCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::System::Threading::WaitCallback::WaitCallback() {}

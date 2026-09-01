#pragma once
// IWYU pragma private; include "ENet\AllocCallback.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "ENet/zzzz__AllocCallback_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::ENet::AllocCallback._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ENet::AllocCallback::*)(::System::Object*, ::System::IntPtr)>(&::ENet::AllocCallback::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5891508;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::AllocCallback*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::AllocCallback.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::ENet::AllocCallback::*)(::System::IntPtr)>(&::ENet::AllocCallback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5891574;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::ENet::AllocCallback*>(), { ::i2c::class_of<::ENet::AllocCallback*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::AllocCallback.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::ENet::AllocCallback::*)(::System::IntPtr, ::System::AsyncCallback*, ::System::Object*)>(
    &::ENet::AllocCallback::BeginInvoke)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5891588;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::ENet::AllocCallback*>(), { ::i2c::class_of<::ENet::AllocCallback*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::AllocCallback.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::ENet::AllocCallback::*)(::System::IAsyncResult*)>(&::ENet::AllocCallback::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x58915dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::ENet::AllocCallback*>(), { ::i2c::class_of<::ENet::AllocCallback*>(), 15 }));
    return ___internal_method;
  }
};
inline void ENet::AllocCallback::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::AllocCallback*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::System::IntPtr ENet::AllocCallback::Invoke(::System::IntPtr size) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::ENet::AllocCallback*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method, size);
}
inline ::System::IAsyncResult* ENet::AllocCallback::BeginInvoke(::System::IntPtr size, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::ENet::AllocCallback*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, size, callback, object);
}
inline ::System::IntPtr ENet::AllocCallback::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::ENet::AllocCallback*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method, result);
}
inline ::ENet::AllocCallback* ENet::AllocCallback::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ENet::AllocCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::ENet::AllocCallback::AllocCallback() {}

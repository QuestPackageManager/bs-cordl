#pragma once
// IWYU pragma private; include "ENet\PacketFreeCallback.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "ENet/zzzz__PacketFreeCallback_def.hpp"
#include "ENet/zzzz__Packet_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::ENet::PacketFreeCallback._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ENet::PacketFreeCallback::*)(::System::Object*, ::System::IntPtr)>(&::ENet::PacketFreeCallback::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5891784;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::PacketFreeCallback*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::PacketFreeCallback.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ENet::PacketFreeCallback::*)(::ENet::Packet)>(&::ENet::PacketFreeCallback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x58917f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::ENet::PacketFreeCallback*>(), { ::i2c::class_of<::ENet::PacketFreeCallback*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::PacketFreeCallback.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::ENet::PacketFreeCallback::*)(::ENet::Packet, ::System::AsyncCallback*, ::System::Object*)>(
    &::ENet::PacketFreeCallback::BeginInvoke)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5891804;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::ENet::PacketFreeCallback*>(), { ::i2c::class_of<::ENet::PacketFreeCallback*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::PacketFreeCallback.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ENet::PacketFreeCallback::*)(::System::IAsyncResult*)>(&::ENet::PacketFreeCallback::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x589188c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::ENet::PacketFreeCallback*>(), { ::i2c::class_of<::ENet::PacketFreeCallback*>(), 15 }));
    return ___internal_method;
  }
};
inline void ENet::PacketFreeCallback::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::PacketFreeCallback*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void ENet::PacketFreeCallback::Invoke(::ENet::Packet packet) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::ENet::PacketFreeCallback*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, packet);
}
inline ::System::IAsyncResult* ENet::PacketFreeCallback::BeginInvoke(::ENet::Packet packet, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::ENet::PacketFreeCallback*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, packet, callback, object);
}
inline void ENet::PacketFreeCallback::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::ENet::PacketFreeCallback*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::ENet::PacketFreeCallback* ENet::PacketFreeCallback::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ENet::PacketFreeCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::ENet::PacketFreeCallback::PacketFreeCallback() {}

#pragma once
// IWYU pragma private; include "ENet\InterceptCallback.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "ENet/zzzz__InterceptCallback_def.hpp"
#include "ENet/zzzz__Address_def.hpp"
#include "ENet/zzzz__Event_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::ENet::InterceptCallback._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ENet::InterceptCallback::*)(::System::Object*, ::System::IntPtr)>(&::ENet::InterceptCallback::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5891898;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::InterceptCallback*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::InterceptCallback.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ENet::InterceptCallback::*)(::by_ref<::ENet::Event>, ::by_ref<::ENet::Address>, ::System::IntPtr, int32_t)>(
    &::ENet::InterceptCallback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5891918;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::ENet::InterceptCallback*>(), { ::i2c::class_of<::ENet::InterceptCallback*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::InterceptCallback.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::ENet::InterceptCallback::*)(::by_ref<::ENet::Event>, ::by_ref<::ENet::Address>, ::System::IntPtr, int32_t,
                                                                                                              ::System::AsyncCallback*, ::System::Object*)>(&::ENet::InterceptCallback::BeginInvoke)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x589192c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::ENet::InterceptCallback*>(), { ::i2c::class_of<::ENet::InterceptCallback*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::InterceptCallback.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ENet::InterceptCallback::*)(::by_ref<::ENet::Event>, ::by_ref<::ENet::Address>, ::System::IAsyncResult*)>(
    &::ENet::InterceptCallback::EndInvoke)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5891a24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::ENet::InterceptCallback*>(), { ::i2c::class_of<::ENet::InterceptCallback*>(), 15 }));
    return ___internal_method;
  }
};
inline void ENet::InterceptCallback::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::InterceptCallback*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline int32_t ENet::InterceptCallback::Invoke(::by_ref<::ENet::Event> event, ::by_ref<::ENet::Address> address, ::System::IntPtr receivedData, int32_t receivedDataLength) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::ENet::InterceptCallback*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, event, address, receivedData, receivedDataLength);
}
inline ::System::IAsyncResult* ENet::InterceptCallback::BeginInvoke(::by_ref<::ENet::Event> event, ::by_ref<::ENet::Address> address, ::System::IntPtr receivedData, int32_t receivedDataLength,
                                                                    ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::ENet::InterceptCallback*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, event, address, receivedData, receivedDataLength, callback, object);
}
inline int32_t ENet::InterceptCallback::EndInvoke(::by_ref<::ENet::Event> event, ::by_ref<::ENet::Address> address, ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::ENet::InterceptCallback*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, event, address, result);
}
inline ::ENet::InterceptCallback* ENet::InterceptCallback::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ENet::InterceptCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::ENet::InterceptCallback::InterceptCallback() {}

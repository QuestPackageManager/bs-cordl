#pragma once
// IWYU pragma private; include "System\Net\BindIPEndPoint.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/Net/zzzz__BindIPEndPoint_def.hpp"
#include "System/Net/zzzz__IPEndPoint_def.hpp"
#include "System/Net/zzzz__ServicePoint_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Net::BindIPEndPoint._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::BindIPEndPoint::*)(::System::Object*, ::System::IntPtr)>(&::System::Net::BindIPEndPoint::_ctor)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x6428488;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::BindIPEndPoint*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::BindIPEndPoint.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::IPEndPoint* (::System::Net::BindIPEndPoint::*)(::System::Net::ServicePoint*, ::System::Net::IPEndPoint*, int32_t)>(
    &::System::Net::BindIPEndPoint::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x64285d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::BindIPEndPoint*>(), { ::i2c::class_of<::System::Net::BindIPEndPoint*>(), 13 }));
    return ___internal_method;
  }
};
inline void System::Net::BindIPEndPoint::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::BindIPEndPoint*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::System::Net::IPEndPoint* System::Net::BindIPEndPoint::Invoke(::System::Net::ServicePoint* servicePoint, ::System::Net::IPEndPoint* remoteEndPoint, int32_t retryCount) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::BindIPEndPoint*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::IPEndPoint*>(this, ___internal_method, servicePoint, remoteEndPoint, retryCount);
}
inline ::System::Net::BindIPEndPoint* System::Net::BindIPEndPoint::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::BindIPEndPoint*>(object, method));
}
// Ctor Parameters []
constexpr ::System::Net::BindIPEndPoint::BindIPEndPoint() {}

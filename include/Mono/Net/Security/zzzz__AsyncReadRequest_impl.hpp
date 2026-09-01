#pragma once
// IWYU pragma private; include "Mono\Net\Security\AsyncReadRequest.hpp"
#include "Mono/Net/Security/zzzz__AsyncReadOrWriteRequest_impl.hpp"
#include "Mono/Net/Security/zzzz__AsyncReadRequest_def.hpp"
#include "Mono/Net/Security/zzzz__AsyncOperationStatus_def.hpp"
#include "Mono/Net/Security/zzzz__MobileAuthenticatedStream_def.hpp"
//  Writing Method size for method: ::Mono::Net::Security::AsyncReadRequest._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Net::Security::AsyncReadRequest::*)(::Mono::Net::Security::MobileAuthenticatedStream*, bool, ::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Mono::Net::Security::AsyncReadRequest::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5fd85e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::AsyncReadRequest*>(),
                                                                                           { ".ctor",
                                                                                             {},
                                                                                             { ::i2c::type_of<::Mono::Net::Security::MobileAuthenticatedStream*>(), ::i2c::type_of<bool>(),
                                                                                               ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::AsyncReadRequest.Run
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Net::Security::AsyncOperationStatus (::Mono::Net::Security::AsyncReadRequest::*)(::Mono::Net::Security::AsyncOperationStatus)>(
    &::Mono::Net::Security::AsyncReadRequest::Run)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5fd85e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Net::Security::AsyncReadRequest*>(), { ::i2c::class_of<::Mono::Net::Security::AsyncReadRequest*>(), 4 }));
    return ___internal_method;
  }
};
inline void Mono::Net::Security::AsyncReadRequest::_ctor(::Mono::Net::Security::MobileAuthenticatedStream* parent, bool sync, ::ArrayW<uint8_t> buffer, int32_t offset, int32_t size) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::AsyncReadRequest*>(),
                                                                                         { ".ctor",
                                                                                           {},
                                                                                           { ::i2c::type_of<::Mono::Net::Security::MobileAuthenticatedStream*>(), ::i2c::type_of<bool>(),
                                                                                             ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parent, sync, buffer, offset, size);
}
inline ::Mono::Net::Security::AsyncOperationStatus Mono::Net::Security::AsyncReadRequest::Run(::Mono::Net::Security::AsyncOperationStatus status) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Net::Security::AsyncReadRequest*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Net::Security::AsyncOperationStatus>(this, ___internal_method, status);
}
inline ::Mono::Net::Security::AsyncReadRequest* Mono::Net::Security::AsyncReadRequest::New_ctor(::Mono::Net::Security::MobileAuthenticatedStream* parent, bool sync, ::ArrayW<uint8_t> buffer,
                                                                                                int32_t offset, int32_t size) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Net::Security::AsyncReadRequest*>(parent, sync, buffer, offset, size));
}
// Ctor Parameters []
constexpr ::Mono::Net::Security::AsyncReadRequest::AsyncReadRequest() {}

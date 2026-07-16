#pragma once
// IWYU pragma private; include "Mono/Unity/UnityTlsStream.hpp"
#include "Mono/Net/Security/zzzz__MobileAuthenticatedStream_impl.hpp"
#include "Mono/Unity/zzzz__UnityTlsStream_def.hpp"
#include "Mono/Net/Security/zzzz__MobileTlsContext_def.hpp"
#include "Mono/Net/Security/zzzz__MobileTlsProvider_def.hpp"
#include "Mono/Net/Security/zzzz__MonoSslAuthenticationOptions_def.hpp"
#include "Mono/Security/Interface/zzzz__MonoTlsSettings_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Net/Security/zzzz__SslStream_def.hpp"
//  Writing Method size for method: ::Mono::Unity::UnityTlsStream._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Unity::UnityTlsStream::*)(::System::IO::Stream*, bool, ::System::Net::Security::SslStream*,
                                                                                               ::Mono::Security::Interface::MonoTlsSettings*, ::Mono::Net::Security::MobileTlsProvider*)>(
    &::Mono::Unity::UnityTlsStream::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5fcfd9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Unity::UnityTlsStream*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Net::Security::SslStream*>(),
                                                                 ::i2c::type_of<::Mono::Security::Interface::MonoTlsSettings*>(), ::i2c::type_of<::Mono::Net::Security::MobileTlsProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::UnityTlsStream.CreateContext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Net::Security::MobileTlsContext* (::Mono::Unity::UnityTlsStream::*)(::Mono::Net::Security::MonoSslAuthenticationOptions*)>(
    &::Mono::Unity::UnityTlsStream::CreateContext)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5fd08a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Unity::UnityTlsStream*>(), { ::i2c::class_of<::Mono::Unity::UnityTlsStream*>(), 45 }));
    return ___internal_method;
  }
};
inline void Mono::Unity::UnityTlsStream::_ctor(::System::IO::Stream* innerStream, bool leaveInnerStreamOpen, ::System::Net::Security::SslStream* owner,
                                               ::Mono::Security::Interface::MonoTlsSettings* settings, ::Mono::Net::Security::MobileTlsProvider* provider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Unity::UnityTlsStream*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Net::Security::SslStream*>(),
                                                               ::i2c::type_of<::Mono::Security::Interface::MonoTlsSettings*>(), ::i2c::type_of<::Mono::Net::Security::MobileTlsProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, innerStream, leaveInnerStreamOpen, owner, settings, provider);
}
inline ::Mono::Net::Security::MobileTlsContext* Mono::Unity::UnityTlsStream::CreateContext(::Mono::Net::Security::MonoSslAuthenticationOptions* options) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Unity::UnityTlsStream*>(), 45 })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Net::Security::MobileTlsContext*>(this, ___internal_method, options);
}
inline ::Mono::Unity::UnityTlsStream* Mono::Unity::UnityTlsStream::New_ctor(::System::IO::Stream* innerStream, bool leaveInnerStreamOpen, ::System::Net::Security::SslStream* owner,
                                                                            ::Mono::Security::Interface::MonoTlsSettings* settings, ::Mono::Net::Security::MobileTlsProvider* provider) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Unity::UnityTlsStream*>(innerStream, leaveInnerStreamOpen, owner, settings, provider));
}
// Ctor Parameters []
constexpr ::Mono::Unity::UnityTlsStream::UnityTlsStream() {}

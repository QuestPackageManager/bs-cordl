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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Unity::UnityTlsStream::*)(
    ::System::IO::Stream*, bool, ::System::Net::Security::SslStream*, ::Mono::Security::Interface::MonoTlsSettings*, ::Mono::Net::Security::MobileTlsProvider*)>(
    &::Mono::Unity::UnityTlsStream::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x410f590;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsStream*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Security::SslStream*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::Interface::MonoTlsSettings*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Net::Security::MobileTlsProvider*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::UnityTlsStream.CreateContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Mono::Net::Security::MobileTlsContext* (::Mono::Unity::UnityTlsStream::*)(::Mono::Net::Security::MonoSslAuthenticationOptions*)>(&::Mono::Unity::UnityTlsStream::CreateContext)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x41100b0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsStream*>::get(), 45));
    return ___internal_method;
  }
};
inline void Mono::Unity::UnityTlsStream::_ctor(::System::IO::Stream* innerStream, bool leaveInnerStreamOpen, ::System::Net::Security::SslStream* owner,
                                               ::Mono::Security::Interface::MonoTlsSettings* settings, ::Mono::Net::Security::MobileTlsProvider* provider) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsStream*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Security::SslStream*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::Interface::MonoTlsSettings*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Net::Security::MobileTlsProvider*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, innerStream, leaveInnerStreamOpen, owner, settings, provider);
}
inline ::Mono::Net::Security::MobileTlsContext* Mono::Unity::UnityTlsStream::CreateContext(::Mono::Net::Security::MonoSslAuthenticationOptions* options) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsStream*>::get(), 45)));
  return ::cordl_internals::RunMethodRethrow<::Mono::Net::Security::MobileTlsContext*, false>(this, ___internal_method, options);
}
inline ::Mono::Unity::UnityTlsStream* Mono::Unity::UnityTlsStream::New_ctor(::System::IO::Stream* innerStream, bool leaveInnerStreamOpen, ::System::Net::Security::SslStream* owner,
                                                                            ::Mono::Security::Interface::MonoTlsSettings* settings, ::Mono::Net::Security::MobileTlsProvider* provider) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Mono::Unity::UnityTlsStream*>(innerStream, leaveInnerStreamOpen, owner, settings, provider));
}
// Ctor Parameters []
constexpr ::Mono::Unity::UnityTlsStream::UnityTlsStream() {}

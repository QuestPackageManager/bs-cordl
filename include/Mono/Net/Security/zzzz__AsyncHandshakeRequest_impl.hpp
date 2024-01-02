#pragma once
#include "Mono/Net/Security/zzzz__AsyncProtocolRequest_impl.hpp"
#include "Mono/Net/Security/zzzz__AsyncHandshakeRequest_def.hpp"
#include "Mono/Net/Security/zzzz__AsyncOperationStatus_def.hpp"
#include "Mono/Net/Security/zzzz__MobileAuthenticatedStream_def.hpp"
//  Writing Method size for method: ::Mono::Net::Security::AsyncHandshakeRequest._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::AsyncHandshakeRequest::*)(::Mono::Net::Security::MobileAuthenticatedStream*, bool)>(
    &::Mono::Net::Security::AsyncHandshakeRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x281f65c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::AsyncHandshakeRequest*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Net::Security::MobileAuthenticatedStream*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::AsyncHandshakeRequest.Run
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Net::Security::AsyncOperationStatus (::Mono::Net::Security::AsyncHandshakeRequest::*)(
    ::Mono::Net::Security::AsyncOperationStatus)>(&::Mono::Net::Security::AsyncHandshakeRequest::Run)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x281f664;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::AsyncHandshakeRequest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::AsyncHandshakeRequest*>::get(), 4));
    return ___internal_method;
  }
};
inline ::Mono::Net::Security::AsyncHandshakeRequest* Mono::Net::Security::AsyncHandshakeRequest::New_ctor(::Mono::Net::Security::MobileAuthenticatedStream* parent, bool sync) {
  return THROW_UNLESS(::il2cpp_utils::New<::Mono::Net::Security::AsyncHandshakeRequest*>(parent, sync));
}
inline void Mono::Net::Security::AsyncHandshakeRequest::_ctor(::Mono::Net::Security::MobileAuthenticatedStream* parent, bool sync) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::AsyncHandshakeRequest*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Net::Security::MobileAuthenticatedStream*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, parent, sync);
}
inline ::Mono::Net::Security::AsyncOperationStatus Mono::Net::Security::AsyncHandshakeRequest::Run(::Mono::Net::Security::AsyncOperationStatus status) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::AsyncHandshakeRequest*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::Mono::Net::Security::AsyncOperationStatus, false>(this, ___internal_method, status);
}
// Ctor Parameters []
constexpr ::Mono::Net::Security::AsyncHandshakeRequest::AsyncHandshakeRequest() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif

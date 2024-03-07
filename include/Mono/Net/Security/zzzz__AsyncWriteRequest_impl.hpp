#pragma once
#include "Mono/Net/Security/zzzz__AsyncReadOrWriteRequest_impl.hpp"
#include "Mono/Net/Security/zzzz__AsyncWriteRequest_def.hpp"
#include "Mono/Net/Security/zzzz__AsyncOperationStatus_def.hpp"
#include "Mono/Net/Security/zzzz__MobileAuthenticatedStream_def.hpp"
//  Writing Method size for method: ::Mono::Net::Security::AsyncWriteRequest._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::AsyncWriteRequest::*)(
    ::Mono::Net::Security::MobileAuthenticatedStream*, bool, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(&::Mono::Net::Security::AsyncWriteRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x296c1dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::AsyncWriteRequest*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Net::Security::MobileAuthenticatedStream*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::AsyncWriteRequest.Run
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Net::Security::AsyncOperationStatus (::Mono::Net::Security::AsyncWriteRequest::*)(
    ::Mono::Net::Security::AsyncOperationStatus)>(&::Mono::Net::Security::AsyncWriteRequest::Run)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x296c1e4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::AsyncWriteRequest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::AsyncWriteRequest*>::get(), 4));
    return ___internal_method;
  }
};
inline ::Mono::Net::Security::AsyncWriteRequest* Mono::Net::Security::AsyncWriteRequest::New_ctor(::Mono::Net::Security::MobileAuthenticatedStream* parent, bool sync,
                                                                                                  ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Mono::Net::Security::AsyncWriteRequest*>(parent, sync, buffer, offset, size));
}
inline void Mono::Net::Security::AsyncWriteRequest::_ctor(::Mono::Net::Security::MobileAuthenticatedStream* parent, bool sync, ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset,
                                                          int32_t size) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::AsyncWriteRequest*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Net::Security::MobileAuthenticatedStream*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, parent, sync, buffer, offset, size);
}
inline ::Mono::Net::Security::AsyncOperationStatus Mono::Net::Security::AsyncWriteRequest::Run(::Mono::Net::Security::AsyncOperationStatus status) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::AsyncWriteRequest*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::Mono::Net::Security::AsyncOperationStatus, false>(this, ___internal_method, status);
}
// Ctor Parameters []
constexpr ::Mono::Net::Security::AsyncWriteRequest::AsyncWriteRequest() {}

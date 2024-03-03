#pragma once
#include "Org/BouncyCastle/Crypto/Tls/zzzz__DtlsHandshakeRetransmit_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsHandshakeRetransmit.ReceivedHandshakeRecord
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsHandshakeRetransmit::*)(
    int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(&::Org::BouncyCastle::Crypto::Tls::DtlsHandshakeRetransmit::ReceivedHandshakeRecord)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsHandshakeRetransmit*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsHandshakeRetransmit*>::get(), 0));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::Tls::DtlsHandshakeRetransmit::ReceivedHandshakeRecord(int32_t epoch, ::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t off, int32_t len) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsHandshakeRetransmit*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, epoch, buf, off, len);
}

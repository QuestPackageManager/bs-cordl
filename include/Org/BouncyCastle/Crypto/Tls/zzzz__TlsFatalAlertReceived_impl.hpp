#pragma once
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsException_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsFatalAlertReceived_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsFatalAlertReceived._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsFatalAlertReceived::*)(uint8_t)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsFatalAlertReceived::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x120d818;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsFatalAlertReceived*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsFatalAlertReceived.get_AlertDescription
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (::Org::BouncyCastle::Crypto::Tls::TlsFatalAlertReceived::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::TlsFatalAlertReceived::get_AlertDescription)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x120d858;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsFatalAlertReceived*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsFatalAlertReceived*>::get(), 12));
    return ___internal_method;
  }
};
constexpr uint8_t& Org::BouncyCastle::Crypto::Tls::TlsFatalAlertReceived::__cordl_internal_get_alertDescription() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___alertDescription;
}
constexpr uint8_t const& Org::BouncyCastle::Crypto::Tls::TlsFatalAlertReceived::__cordl_internal_get_alertDescription() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___alertDescription;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsFatalAlertReceived::__cordl_internal_set_alertDescription(uint8_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___alertDescription = value;
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsFatalAlertReceived* Org::BouncyCastle::Crypto::Tls::TlsFatalAlertReceived::New_ctor(uint8_t alertDescription) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::Tls::TlsFatalAlertReceived*>(alertDescription));
}
inline void Org::BouncyCastle::Crypto::Tls::TlsFatalAlertReceived::_ctor(uint8_t alertDescription) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsFatalAlertReceived*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, alertDescription);
}
inline uint8_t Org::BouncyCastle::Crypto::Tls::TlsFatalAlertReceived::get_AlertDescription() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsFatalAlertReceived*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<uint8_t, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsFatalAlertReceived::TlsFatalAlertReceived() {}

#pragma once
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsException_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsFatalAlert_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsFatalAlert._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsFatalAlert::*)(uint8_t)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsFatalAlert::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xfaa180;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsFatalAlert*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsFatalAlert._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsFatalAlert::*)(uint8_t, ::System::Exception*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsFatalAlert::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xfaa570;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsFatalAlert*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsFatalAlert.get_AlertDescription
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (::Org::BouncyCastle::Crypto::Tls::TlsFatalAlert::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::TlsFatalAlert::get_AlertDescription)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xfae004;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsFatalAlert*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsFatalAlert*>::get(), 12));
    return ___internal_method;
  }
};
constexpr uint8_t& Org::BouncyCastle::Crypto::Tls::TlsFatalAlert::__get_alertDescription() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___alertDescription;
}
constexpr uint8_t const& Org::BouncyCastle::Crypto::Tls::TlsFatalAlert::__get_alertDescription() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___alertDescription;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsFatalAlert::__set_alertDescription(uint8_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___alertDescription = value;
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsFatalAlert* Org::BouncyCastle::Crypto::Tls::TlsFatalAlert::New_ctor(uint8_t alertDescription) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crypto::Tls::TlsFatalAlert*>(alertDescription));
}
inline void Org::BouncyCastle::Crypto::Tls::TlsFatalAlert::_ctor(uint8_t alertDescription) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsFatalAlert*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, alertDescription);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsFatalAlert* Org::BouncyCastle::Crypto::Tls::TlsFatalAlert::New_ctor(uint8_t alertDescription, ::System::Exception* alertCause) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crypto::Tls::TlsFatalAlert*>(alertDescription, alertCause));
}
inline void Org::BouncyCastle::Crypto::Tls::TlsFatalAlert::_ctor(uint8_t alertDescription, ::System::Exception* alertCause) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsFatalAlert*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, alertDescription, alertCause);
}
inline uint8_t Org::BouncyCastle::Crypto::Tls::TlsFatalAlert::get_AlertDescription() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsFatalAlert*>::get(),
                                                                             "get_AlertDescription", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<uint8_t, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsFatalAlert::TlsFatalAlert() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif

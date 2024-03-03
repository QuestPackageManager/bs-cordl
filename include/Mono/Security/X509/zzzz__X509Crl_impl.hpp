#pragma once
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Security/X509/zzzz__X509Crl_def.hpp"
#include "Mono/Security/X509/zzzz__X509Certificate_def.hpp"
#include "Mono/Security/X509/zzzz__X509Crl_def.hpp"
#include "Mono/Security/X509/zzzz__X509ExtensionCollection_def.hpp"
#include "Mono/Security/zzzz__ASN1_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Security/Cryptography/zzzz__AsymmetricAlgorithm_def.hpp"
#include "System/Security/Cryptography/zzzz__DSA_def.hpp"
#include "System/Security/Cryptography/zzzz__RSA_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
//  Writing Method size for method: ::Mono::Security::X509::__X509Crl__X509CrlEntry._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::X509::__X509Crl__X509CrlEntry::*)(::Mono::Security::ASN1*)>(
    &::Mono::Security::X509::__X509Crl__X509CrlEntry::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x24e7bac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::__X509Crl__X509CrlEntry*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::ASN1*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::__X509Crl__X509CrlEntry.get_SerialNumber
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Mono::Security::X509::__X509Crl__X509CrlEntry::*)()>(
    &::Mono::Security::X509::__X509Crl__X509CrlEntry::get_SerialNumber)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x24e8230;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::__X509Crl__X509CrlEntry*>::get(),
                                                                               "get_SerialNumber", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::__X509Crl__X509CrlEntry.get_RevocationDate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (::Mono::Security::X509::__X509Crl__X509CrlEntry::*)()>(
    &::Mono::Security::X509::__X509Crl__X509CrlEntry::get_RevocationDate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24e87d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::__X509Crl__X509CrlEntry*>::get(),
                                                                               "get_RevocationDate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::__X509Crl__X509CrlEntry.get_Extensions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::X509::X509ExtensionCollection* (::Mono::Security::X509::__X509Crl__X509CrlEntry::*)()>(
    &::Mono::Security::X509::__X509Crl__X509CrlEntry::get_Extensions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24e87dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::__X509Crl__X509CrlEntry*>::get(),
                                                                               "get_Extensions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Mono::Security::X509::__X509Crl__X509CrlEntry::__cordl_internal_get_sn() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sn;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Mono::Security::X509::__X509Crl__X509CrlEntry::__cordl_internal_get_sn() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sn;
}
constexpr void Mono::Security::X509::__X509Crl__X509CrlEntry::__cordl_internal_set_sn(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sn)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::DateTime& Mono::Security::X509::__X509Crl__X509CrlEntry::__cordl_internal_get_revocationDate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___revocationDate;
}
constexpr ::System::DateTime const& Mono::Security::X509::__X509Crl__X509CrlEntry::__cordl_internal_get_revocationDate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___revocationDate;
}
constexpr void Mono::Security::X509::__X509Crl__X509CrlEntry::__cordl_internal_set_revocationDate(::System::DateTime value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___revocationDate = value;
}
constexpr ::Mono::Security::X509::X509ExtensionCollection*& Mono::Security::X509::__X509Crl__X509CrlEntry::__cordl_internal_get_extensions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___extensions;
}
constexpr ::cordl_internals::to_const_pointer<::Mono::Security::X509::X509ExtensionCollection*> const& Mono::Security::X509::__X509Crl__X509CrlEntry::__cordl_internal_get_extensions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___extensions;
}
constexpr void Mono::Security::X509::__X509Crl__X509CrlEntry::__cordl_internal_set_extensions(::Mono::Security::X509::X509ExtensionCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___extensions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Mono::Security::X509::__X509Crl__X509CrlEntry* Mono::Security::X509::__X509Crl__X509CrlEntry::New_ctor(::Mono::Security::ASN1* entry) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Mono::Security::X509::__X509Crl__X509CrlEntry*>(entry));
}
inline void Mono::Security::X509::__X509Crl__X509CrlEntry::_ctor(::Mono::Security::ASN1* entry) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::__X509Crl__X509CrlEntry*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::ASN1*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, entry);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Mono::Security::X509::__X509Crl__X509CrlEntry::get_SerialNumber() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::__X509Crl__X509CrlEntry*>::get(),
                                                                             "get_SerialNumber", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline ::System::DateTime Mono::Security::X509::__X509Crl__X509CrlEntry::get_RevocationDate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::__X509Crl__X509CrlEntry*>::get(),
                                                                             "get_RevocationDate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(this, ___internal_method);
}
inline ::Mono::Security::X509::X509ExtensionCollection* Mono::Security::X509::__X509Crl__X509CrlEntry::get_Extensions() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::__X509Crl__X509CrlEntry*>::get(),
                                                                             "get_Extensions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Mono::Security::X509::X509ExtensionCollection*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Mono::Security::X509::__X509Crl__X509CrlEntry::__X509Crl__X509CrlEntry() {}
//  Writing Method size for method: ::Mono::Security::X509::X509Crl._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::X509::X509Crl::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Mono::Security::X509::X509Crl::_ctor)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x24e7404;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Crl*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Crl.Parse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::X509::X509Crl::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Mono::Security::X509::X509Crl::Parse)> {
  constexpr static std::size_t size = 0x6b0;
  constexpr static std::size_t addrs = 0x24e74fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Crl*>::get(), "Parse", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Crl.get_Extensions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::X509::X509ExtensionCollection* (::Mono::Security::X509::X509Crl::*)()>(
    &::Mono::Security::X509::X509Crl::get_Extensions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24e7dc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Crl*>::get(), "get_Extensions",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Crl.get_Hash
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Mono::Security::X509::X509Crl::*)()>(
    &::Mono::Security::X509::X509Crl::get_Hash)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x24e7dc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Crl*>::get(), "get_Hash",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Crl.get_IssuerName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Mono::Security::X509::X509Crl::*)()>(&::Mono::Security::X509::X509Crl::get_IssuerName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24e7fdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Crl*>::get(), "get_IssuerName",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Crl.get_NextUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (::Mono::Security::X509::X509Crl::*)()>(&::Mono::Security::X509::X509Crl::get_NextUpdate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24e7fe4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Crl*>::get(), "get_NextUpdate",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Crl.Compare
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::Mono::Security::X509::X509Crl::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Mono::Security::X509::X509Crl::Compare)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x24e7fec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Crl*>::get(), "Compare", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Crl.GetCrlEntry
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Mono::Security::X509::__X509Crl__X509CrlEntry* (::Mono::Security::X509::X509Crl::*)(::Mono::Security::X509::X509Certificate*)>(&::Mono::Security::X509::X509Crl::GetCrlEntry)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x24e8068;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Crl*>::get(), "GetCrlEntry", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::X509::X509Certificate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Crl.GetCrlEntry
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Mono::Security::X509::__X509Crl__X509CrlEntry* (::Mono::Security::X509::X509Crl::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Mono::Security::X509::X509Crl::GetCrlEntry)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x24e80e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Crl*>::get(), "GetCrlEntry", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Crl.VerifySignature
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Security::X509::X509Crl::*)(::System::Security::Cryptography::DSA*)>(
    &::Mono::Security::X509::X509Crl::VerifySignature)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x24e82a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Crl*>::get(), "VerifySignature", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::DSA*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Crl.VerifySignature
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Security::X509::X509Crl::*)(::System::Security::Cryptography::RSA*)>(
    &::Mono::Security::X509::X509Crl::VerifySignature)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x24e8574;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Crl*>::get(), "VerifySignature", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::RSA*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Crl.VerifySignature
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Security::X509::X509Crl::*)(::System::Security::Cryptography::AsymmetricAlgorithm*)>(
    &::Mono::Security::X509::X509Crl::VerifySignature)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x24e8648;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Crl*>::get(), "VerifySignature", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::AsymmetricAlgorithm*>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& Mono::Security::X509::X509Crl::__cordl_internal_get_issuer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___issuer;
}
constexpr ::StringW const& Mono::Security::X509::X509Crl::__cordl_internal_get_issuer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___issuer;
}
constexpr void Mono::Security::X509::X509Crl::__cordl_internal_set_issuer(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___issuer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr uint8_t& Mono::Security::X509::X509Crl::__cordl_internal_get_version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr uint8_t const& Mono::Security::X509::X509Crl::__cordl_internal_get_version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr void Mono::Security::X509::X509Crl::__cordl_internal_set_version(uint8_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___version = value;
}
constexpr ::System::DateTime& Mono::Security::X509::X509Crl::__cordl_internal_get_thisUpdate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___thisUpdate;
}
constexpr ::System::DateTime const& Mono::Security::X509::X509Crl::__cordl_internal_get_thisUpdate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___thisUpdate;
}
constexpr void Mono::Security::X509::X509Crl::__cordl_internal_set_thisUpdate(::System::DateTime value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___thisUpdate = value;
}
constexpr ::System::DateTime& Mono::Security::X509::X509Crl::__cordl_internal_get_nextUpdate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextUpdate;
}
constexpr ::System::DateTime const& Mono::Security::X509::X509Crl::__cordl_internal_get_nextUpdate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextUpdate;
}
constexpr void Mono::Security::X509::X509Crl::__cordl_internal_set_nextUpdate(::System::DateTime value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nextUpdate = value;
}
constexpr ::System::Collections::ArrayList*& Mono::Security::X509::X509Crl::__cordl_internal_get_entries() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___entries;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> const& Mono::Security::X509::X509Crl::__cordl_internal_get_entries() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___entries;
}
constexpr void Mono::Security::X509::X509Crl::__cordl_internal_set_entries(::System::Collections::ArrayList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___entries)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Mono::Security::X509::X509Crl::__cordl_internal_get_signatureOID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signatureOID;
}
constexpr ::StringW const& Mono::Security::X509::X509Crl::__cordl_internal_get_signatureOID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signatureOID;
}
constexpr void Mono::Security::X509::X509Crl::__cordl_internal_set_signatureOID(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___signatureOID)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Mono::Security::X509::X509Crl::__cordl_internal_get_signature() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signature;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Mono::Security::X509::X509Crl::__cordl_internal_get_signature() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signature;
}
constexpr void Mono::Security::X509::X509Crl::__cordl_internal_set_signature(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___signature)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Mono::Security::X509::X509ExtensionCollection*& Mono::Security::X509::X509Crl::__cordl_internal_get_extensions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___extensions;
}
constexpr ::cordl_internals::to_const_pointer<::Mono::Security::X509::X509ExtensionCollection*> const& Mono::Security::X509::X509Crl::__cordl_internal_get_extensions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___extensions;
}
constexpr void Mono::Security::X509::X509Crl::__cordl_internal_set_extensions(::Mono::Security::X509::X509ExtensionCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___extensions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Mono::Security::X509::X509Crl::__cordl_internal_get_encoded() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encoded;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Mono::Security::X509::X509Crl::__cordl_internal_get_encoded() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encoded;
}
constexpr void Mono::Security::X509::X509Crl::__cordl_internal_set_encoded(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___encoded)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Mono::Security::X509::X509Crl::__cordl_internal_get_hash_value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hash_value;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Mono::Security::X509::X509Crl::__cordl_internal_get_hash_value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hash_value;
}
constexpr void Mono::Security::X509::X509Crl::__cordl_internal_set_hash_value(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___hash_value)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Mono::Security::X509::X509Crl* Mono::Security::X509::X509Crl::New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> crl) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Mono::Security::X509::X509Crl*>(crl));
}
inline void Mono::Security::X509::X509Crl::_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> crl) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Crl*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, crl);
}
inline void Mono::Security::X509::X509Crl::Parse(::ArrayW<uint8_t, ::Array<uint8_t>*> crl) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Crl*>::get(), "Parse", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, crl);
}
inline ::Mono::Security::X509::X509ExtensionCollection* Mono::Security::X509::X509Crl::get_Extensions() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Crl*>::get(), "get_Extensions",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Mono::Security::X509::X509ExtensionCollection*, false>(this, ___internal_method);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Mono::Security::X509::X509Crl::get_Hash() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Crl*>::get(), "get_Hash",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline ::StringW Mono::Security::X509::X509Crl::get_IssuerName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Crl*>::get(), "get_IssuerName",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::DateTime Mono::Security::X509::X509Crl::get_NextUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Crl*>::get(), "get_NextUpdate",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(this, ___internal_method);
}
inline bool Mono::Security::X509::X509Crl::Compare(::ArrayW<uint8_t, ::Array<uint8_t>*> array1, ::ArrayW<uint8_t, ::Array<uint8_t>*> array2) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Crl*>::get(), "Compare", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, array1, array2);
}
inline ::Mono::Security::X509::__X509Crl__X509CrlEntry* Mono::Security::X509::X509Crl::GetCrlEntry(::Mono::Security::X509::X509Certificate* x509) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Crl*>::get(), "GetCrlEntry", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::X509::X509Certificate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Security::X509::__X509Crl__X509CrlEntry*, false>(this, ___internal_method, x509);
}
inline ::Mono::Security::X509::__X509Crl__X509CrlEntry* Mono::Security::X509::X509Crl::GetCrlEntry(::ArrayW<uint8_t, ::Array<uint8_t>*> serialNumber) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Crl*>::get(), "GetCrlEntry", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Security::X509::__X509Crl__X509CrlEntry*, false>(this, ___internal_method, serialNumber);
}
inline bool Mono::Security::X509::X509Crl::VerifySignature(::System::Security::Cryptography::DSA* dsa) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Crl*>::get(), "VerifySignature", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::DSA*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, dsa);
}
inline bool Mono::Security::X509::X509Crl::VerifySignature(::System::Security::Cryptography::RSA* rsa) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Crl*>::get(), "VerifySignature", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::RSA*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, rsa);
}
inline bool Mono::Security::X509::X509Crl::VerifySignature(::System::Security::Cryptography::AsymmetricAlgorithm* aa) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Crl*>::get(), "VerifySignature", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::AsymmetricAlgorithm*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, aa);
}
// Ctor Parameters []
constexpr ::Mono::Security::X509::X509Crl::X509Crl() {}

#pragma once
// IWYU pragma private; include "Org/BouncyCastle/X509/X509CertificateParser.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509CertificateParser_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509CertificateStructure_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1InputStream_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Set_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__PemParser_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509Certificate_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509CertificateParser.ReadDerCertificate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::X509::X509Certificate* (
    ::Org::BouncyCastle::X509::X509CertificateParser::*)(::Org::BouncyCastle::Asn1::Asn1InputStream*)>(&::Org::BouncyCastle::X509::X509CertificateParser::ReadDerCertificate)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x25f4958;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509CertificateParser*>::get(), "ReadDerCertificate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1InputStream*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509CertificateParser.GetCertificate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::X509::X509Certificate* (::Org::BouncyCastle::X509::X509CertificateParser::*)()>(
    &::Org::BouncyCastle::X509::X509CertificateParser::GetCertificate)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x25f4b70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509CertificateParser*>::get(),
                                                                               "GetCertificate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509CertificateParser.ReadPemCertificate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::X509::X509Certificate* (
    ::Org::BouncyCastle::X509::X509CertificateParser::*)(::System::IO::Stream*)>(&::Org::BouncyCastle::X509::X509CertificateParser::ReadPemCertificate)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x25f4c54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509CertificateParser*>::get(), "ReadPemCertificate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509CertificateParser.CreateX509Certificate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::X509::X509Certificate* (
    ::Org::BouncyCastle::X509::X509CertificateParser::*)(::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*)>(&::Org::BouncyCastle::X509::X509CertificateParser::CreateX509Certificate)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x25f4cfc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509CertificateParser*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509CertificateParser*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509CertificateParser.ReadCertificate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::X509::X509Certificate* (
    ::Org::BouncyCastle::X509::X509CertificateParser::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Org::BouncyCastle::X509::X509CertificateParser::ReadCertificate)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x25f4d54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509CertificateParser*>::get(), "ReadCertificate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509CertificateParser.ReadCertificates
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::ICollection* (
    ::Org::BouncyCastle::X509::X509CertificateParser::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Org::BouncyCastle::X509::X509CertificateParser::ReadCertificates)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x25f5090;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509CertificateParser*>::get(), "ReadCertificates", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509CertificateParser.ReadCertificate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::X509::X509Certificate* (
    ::Org::BouncyCastle::X509::X509CertificateParser::*)(::System::IO::Stream*)>(&::Org::BouncyCastle::X509::X509CertificateParser::ReadCertificate)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x25f4dc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509CertificateParser*>::get(), "ReadCertificate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509CertificateParser.ReadCertificates
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::ICollection* (::Org::BouncyCastle::X509::X509CertificateParser::*)(::System::IO::Stream*)>(
    &::Org::BouncyCastle::X509::X509CertificateParser::ReadCertificates)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x25f5100;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509CertificateParser*>::get(), "ReadCertificates", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509CertificateParser._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::X509::X509CertificateParser::*)()>(
    &::Org::BouncyCastle::X509::X509CertificateParser::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25f52a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509CertificateParser*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Asn1Set*& Org::BouncyCastle::X509::X509CertificateParser::__cordl_internal_get_sData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sData;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Set* const& Org::BouncyCastle::X509::X509CertificateParser::__cordl_internal_get_sData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sData;
}
constexpr void Org::BouncyCastle::X509::X509CertificateParser::__cordl_internal_set_sData(::Org::BouncyCastle::Asn1::Asn1Set* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Org::BouncyCastle::X509::X509CertificateParser::__cordl_internal_get_sDataObjectCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sDataObjectCount;
}
constexpr int32_t const& Org::BouncyCastle::X509::X509CertificateParser::__cordl_internal_get_sDataObjectCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sDataObjectCount;
}
constexpr void Org::BouncyCastle::X509::X509CertificateParser::__cordl_internal_set_sDataObjectCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sDataObjectCount = value;
}
constexpr ::System::IO::Stream*& Org::BouncyCastle::X509::X509CertificateParser::__cordl_internal_get_currentStream() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentStream;
}
constexpr ::System::IO::Stream* const& Org::BouncyCastle::X509::X509CertificateParser::__cordl_internal_get_currentStream() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentStream;
}
constexpr void Org::BouncyCastle::X509::X509CertificateParser::__cordl_internal_set_currentStream(::System::IO::Stream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___currentStream)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Org::BouncyCastle::X509::X509CertificateParser::setStaticF_PemCertParser(::Org::BouncyCastle::X509::PemParser* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::X509::PemParser*, "PemCertParser",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509CertificateParser*>::get>(
      std::forward<::Org::BouncyCastle::X509::PemParser*>(value));
}
inline ::Org::BouncyCastle::X509::PemParser* Org::BouncyCastle::X509::X509CertificateParser::getStaticF_PemCertParser() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::X509::PemParser*, "PemCertParser",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509CertificateParser*>::get>();
}
inline ::Org::BouncyCastle::X509::X509Certificate* Org::BouncyCastle::X509::X509CertificateParser::ReadDerCertificate(::Org::BouncyCastle::Asn1::Asn1InputStream* dIn) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509CertificateParser*>::get(), "ReadDerCertificate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1InputStream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::X509Certificate*, false>(this, ___internal_method, dIn);
}
inline ::Org::BouncyCastle::X509::X509Certificate* Org::BouncyCastle::X509::X509CertificateParser::GetCertificate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509CertificateParser*>::get(),
                                                                             "GetCertificate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::X509Certificate*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::X509::X509Certificate* Org::BouncyCastle::X509::X509CertificateParser::ReadPemCertificate(::System::IO::Stream* inStream) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509CertificateParser*>::get(), "ReadPemCertificate",
                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::X509Certificate*, false>(this, ___internal_method, inStream);
}
inline ::Org::BouncyCastle::X509::X509Certificate* Org::BouncyCastle::X509::X509CertificateParser::CreateX509Certificate(::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* c) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509CertificateParser*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::X509Certificate*, false>(this, ___internal_method, c);
}
inline ::Org::BouncyCastle::X509::X509Certificate* Org::BouncyCastle::X509::X509CertificateParser::ReadCertificate(::ArrayW<uint8_t, ::Array<uint8_t>*> input) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509CertificateParser*>::get(), "ReadCertificate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::X509Certificate*, false>(this, ___internal_method, input);
}
inline ::System::Collections::ICollection* Org::BouncyCastle::X509::X509CertificateParser::ReadCertificates(::ArrayW<uint8_t, ::Array<uint8_t>*> input) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509CertificateParser*>::get(), "ReadCertificates", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ICollection*, false>(this, ___internal_method, input);
}
inline ::Org::BouncyCastle::X509::X509Certificate* Org::BouncyCastle::X509::X509CertificateParser::ReadCertificate(::System::IO::Stream* inStream) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509CertificateParser*>::get(), "ReadCertificate",
                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::X509Certificate*, false>(this, ___internal_method, inStream);
}
inline ::System::Collections::ICollection* Org::BouncyCastle::X509::X509CertificateParser::ReadCertificates(::System::IO::Stream* inStream) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509CertificateParser*>::get(), "ReadCertificates",
                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ICollection*, false>(this, ___internal_method, inStream);
}
inline void Org::BouncyCastle::X509::X509CertificateParser::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509CertificateParser*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::X509::X509CertificateParser* Org::BouncyCastle::X509::X509CertificateParser::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::X509::X509CertificateParser*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::X509::X509CertificateParser::X509CertificateParser() {}

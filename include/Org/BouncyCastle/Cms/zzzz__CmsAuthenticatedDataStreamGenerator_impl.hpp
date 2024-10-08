#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Cms/CmsAuthenticatedDataStreamGenerator.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsAuthenticatedGenerator_impl.hpp"
#include "Org/BouncyCastle/Utilities/IO/zzzz__BaseOutputStream_impl.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsAuthenticatedDataStreamGenerator_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1EncodableVector_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__BerSequenceGenerator_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsAuthenticatedDataStreamGenerator_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__CipherKeyGenerator_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IMac_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Cms::__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream::*)(
    ::System::IO::Stream*, ::Org::BouncyCastle::Crypto::IMac*, ::Org::BouncyCastle::Asn1::BerSequenceGenerator*, ::Org::BouncyCastle::Asn1::BerSequenceGenerator*,
    ::Org::BouncyCastle::Asn1::BerSequenceGenerator*)>(&::Org::BouncyCastle::Cms::__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2612480;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream*>::get(),
                                    ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IMac*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::BerSequenceGenerator*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::BerSequenceGenerator*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::BerSequenceGenerator*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream.WriteByte
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream::*)(uint8_t)>(
    &::Org::BouncyCastle::Cms::__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream::WriteByte)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2612684;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream*>::get(),
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream*>::get(), 40));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream.Write
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(&::Org::BouncyCastle::Cms::__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream::Write)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x26126a8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream*>::get(),
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream*>::get(), 38));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream.Close
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream::*)()>(
    &::Org::BouncyCastle::Cms::__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream::Close)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x26126cc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream*>::get(),
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream*>::get(), 21));
    return ___internal_method;
  }
};
constexpr ::System::IO::Stream*& Org::BouncyCastle::Cms::__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream::__cordl_internal_get_macStream() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___macStream;
}
constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> const&
Org::BouncyCastle::Cms::__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream::__cordl_internal_get_macStream() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___macStream;
}
constexpr void Org::BouncyCastle::Cms::__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream::__cordl_internal_set_macStream(::System::IO::Stream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___macStream)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::IMac*& Org::BouncyCastle::Cms::__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream::__cordl_internal_get_mac() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mac;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IMac*> const&
Org::BouncyCastle::Cms::__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream::__cordl_internal_get_mac() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mac;
}
constexpr void Org::BouncyCastle::Cms::__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream::__cordl_internal_set_mac(::Org::BouncyCastle::Crypto::IMac* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mac)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::BerSequenceGenerator*& Org::BouncyCastle::Cms::__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream::__cordl_internal_get_cGen() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cGen;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::BerSequenceGenerator*> const&
Org::BouncyCastle::Cms::__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream::__cordl_internal_get_cGen() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cGen;
}
constexpr void Org::BouncyCastle::Cms::__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream::__cordl_internal_set_cGen(::Org::BouncyCastle::Asn1::BerSequenceGenerator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cGen)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::BerSequenceGenerator*& Org::BouncyCastle::Cms::__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream::__cordl_internal_get_authGen() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___authGen;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::BerSequenceGenerator*> const&
Org::BouncyCastle::Cms::__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream::__cordl_internal_get_authGen() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___authGen;
}
constexpr void Org::BouncyCastle::Cms::__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream::__cordl_internal_set_authGen(::Org::BouncyCastle::Asn1::BerSequenceGenerator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___authGen)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::BerSequenceGenerator*& Org::BouncyCastle::Cms::__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream::__cordl_internal_get_eiGen() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___eiGen;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::BerSequenceGenerator*> const&
Org::BouncyCastle::Cms::__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream::__cordl_internal_get_eiGen() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___eiGen;
}
constexpr void Org::BouncyCastle::Cms::__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream::__cordl_internal_set_eiGen(::Org::BouncyCastle::Asn1::BerSequenceGenerator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___eiGen)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Cms::__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream*
Org::BouncyCastle::Cms::__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream::New_ctor(::System::IO::Stream* macStream, ::Org::BouncyCastle::Crypto::IMac* mac,
                                                                                                          ::Org::BouncyCastle::Asn1::BerSequenceGenerator* cGen,
                                                                                                          ::Org::BouncyCastle::Asn1::BerSequenceGenerator* authGen,
                                                                                                          ::Org::BouncyCastle::Asn1::BerSequenceGenerator* eiGen) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Cms::__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream*>(macStream, mac, cGen, authGen, eiGen));
}
inline void Org::BouncyCastle::Cms::__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream::_ctor(::System::IO::Stream* macStream, ::Org::BouncyCastle::Crypto::IMac* mac,
                                                                                                                   ::Org::BouncyCastle::Asn1::BerSequenceGenerator* cGen,
                                                                                                                   ::Org::BouncyCastle::Asn1::BerSequenceGenerator* authGen,
                                                                                                                   ::Org::BouncyCastle::Asn1::BerSequenceGenerator* eiGen) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream*>::get(),
                                  ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IMac*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::BerSequenceGenerator*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::BerSequenceGenerator*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::BerSequenceGenerator*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, macStream, mac, cGen, authGen, eiGen);
}
inline void Org::BouncyCastle::Cms::__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream::WriteByte(uint8_t b) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream*>::get(), 40)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, b);
}
inline void Org::BouncyCastle::Cms::__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream::Write(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t off, int32_t len) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream*>::get(), 38)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bytes, off, len);
}
inline void Org::BouncyCastle::Cms::__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream::Close() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream*>::get(), 21)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Cms::__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream::__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream() {}
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator::*)()>(
    &::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2611634;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator::*)(
    ::Org::BouncyCastle::Security::SecureRandom*)>(&::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2611638;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator.SetBufferSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator::*)(int32_t)>(
    &::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator::SetBufferSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x261163c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator*>::get(), "SetBufferSize",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator.SetBerEncodeRecipients
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator::*)(bool)>(
    &::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator::SetBerEncodeRecipients)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2611644;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator*>::get(), "SetBerEncodeRecipients",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator.Open
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IO::Stream* (::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator::*)(::System::IO::Stream*, ::StringW, ::Org::BouncyCastle::Crypto::CipherKeyGenerator*)>(
        &::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator::Open)> {
  constexpr static std::size_t size = 0x5e4;
  constexpr static std::size_t addrs = 0x2611650;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator*>::get(), "Open", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::CipherKeyGenerator*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator.Open
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (
    ::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator::*)(::System::IO::Stream*, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, ::Org::BouncyCastle::Crypto::ICipherParameters*,
                                                                      ::Org::BouncyCastle::Asn1::Asn1EncodableVector*)>(&::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator::Open)> {
  constexpr static std::size_t size = 0x84c;
  constexpr static std::size_t addrs = 0x2611c34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator*>::get(), "Open", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::ICipherParameters*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1EncodableVector*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator.Open
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (
    ::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator::*)(::System::IO::Stream*, ::StringW)>(&::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator::Open)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x26124d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator*>::get(), "Open", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator.Open
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (
    ::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator::*)(::System::IO::Stream*, ::StringW, int32_t)>(&::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator::Open)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x26125a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator*>::get(), "Open", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr int32_t& Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator::__cordl_internal_get__bufferSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bufferSize;
}
constexpr int32_t const& Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator::__cordl_internal_get__bufferSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bufferSize;
}
constexpr void Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator::__cordl_internal_set__bufferSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bufferSize = value;
}
constexpr bool& Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator::__cordl_internal_get__berEncodeRecipientSet() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____berEncodeRecipientSet;
}
constexpr bool const& Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator::__cordl_internal_get__berEncodeRecipientSet() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____berEncodeRecipientSet;
}
constexpr void Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator::__cordl_internal_set__berEncodeRecipientSet(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____berEncodeRecipientSet = value;
}
inline ::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator* Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator*>());
}
inline void Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator* Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator::New_ctor(::Org::BouncyCastle::Security::SecureRandom* rand) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator*>(rand));
}
inline void Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator::_ctor(::Org::BouncyCastle::Security::SecureRandom* rand) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rand);
}
inline void Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator::SetBufferSize(int32_t bufferSize) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator*>::get(), "SetBufferSize",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bufferSize);
}
inline void Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator::SetBerEncodeRecipients(bool berEncodeRecipientSet) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator*>::get(), "SetBerEncodeRecipients",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, berEncodeRecipientSet);
}
inline ::System::IO::Stream* Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator::Open(::System::IO::Stream* outStr, ::StringW macOid,
                                                                                               ::Org::BouncyCastle::Crypto::CipherKeyGenerator* keyGen) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator*>::get(), "Open", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::CipherKeyGenerator*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*, false>(this, ___internal_method, outStr, macOid, keyGen);
}
inline ::System::IO::Stream* Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator::Open(::System::IO::Stream* outStr, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* macAlgId,
                                                                                               ::Org::BouncyCastle::Crypto::ICipherParameters* cipherParameters,
                                                                                               ::Org::BouncyCastle::Asn1::Asn1EncodableVector* recipientInfos) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator*>::get(), "Open", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::ICipherParameters*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1EncodableVector*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*, false>(this, ___internal_method, outStr, macAlgId, cipherParameters, recipientInfos);
}
inline ::System::IO::Stream* Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator::Open(::System::IO::Stream* outStr, ::StringW encryptionOid) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator*>::get(), "Open", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*, false>(this, ___internal_method, outStr, encryptionOid);
}
inline ::System::IO::Stream* Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator::Open(::System::IO::Stream* outStr, ::StringW encryptionOid, int32_t keySize) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator*>::get(), "Open", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*, false>(this, ___internal_method, outStr, encryptionOid, keySize);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator::CmsAuthenticatedDataStreamGenerator() {}

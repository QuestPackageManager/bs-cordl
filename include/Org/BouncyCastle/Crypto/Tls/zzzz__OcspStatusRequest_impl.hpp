#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Tls\OcspStatusRequest.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__OcspStatusRequest_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509Extensions_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::OcspStatusRequest._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::OcspStatusRequest::*)(::System::Collections::IList*, ::Org::BouncyCastle::Asn1::X509::X509Extensions*)>(
    &::Org::BouncyCastle::Crypto::Tls::OcspStatusRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x346c030;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::OcspStatusRequest*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::System::Collections::IList*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509Extensions*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::OcspStatusRequest.get_ResponderIDList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IList* (::Org::BouncyCastle::Crypto::Tls::OcspStatusRequest::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::OcspStatusRequest::get_ResponderIDList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x346c038;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::OcspStatusRequest*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::OcspStatusRequest*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::OcspStatusRequest.get_RequestExtensions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::X509Extensions* (::Org::BouncyCastle::Crypto::Tls::OcspStatusRequest::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::OcspStatusRequest::get_RequestExtensions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x346c040;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::OcspStatusRequest*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::OcspStatusRequest*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::OcspStatusRequest.Encode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::OcspStatusRequest::*)(::System::IO::Stream*)>(
    &::Org::BouncyCastle::Crypto::Tls::OcspStatusRequest::Encode)> {
  constexpr static std::size_t size = 0x3dc;
  constexpr static std::size_t addrs = 0x346c048;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::OcspStatusRequest*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::OcspStatusRequest*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::OcspStatusRequest.Parse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Tls::OcspStatusRequest* (*)(::System::IO::Stream*)>(&::Org::BouncyCastle::Crypto::Tls::OcspStatusRequest::Parse)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x346c424;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::OcspStatusRequest*>(), { "Parse", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::IList*& Org::BouncyCastle::Crypto::Tls::OcspStatusRequest::__cordl_internal_get_mResponderIDList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mResponderIDList;
}
constexpr ::System::Collections::IList* const& Org::BouncyCastle::Crypto::Tls::OcspStatusRequest::__cordl_internal_get_mResponderIDList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mResponderIDList;
}
constexpr void Org::BouncyCastle::Crypto::Tls::OcspStatusRequest::__cordl_internal_set_mResponderIDList(::System::Collections::IList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mResponderIDList = value;
}
constexpr ::Org::BouncyCastle::Asn1::X509::X509Extensions*& Org::BouncyCastle::Crypto::Tls::OcspStatusRequest::__cordl_internal_get_mRequestExtensions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mRequestExtensions;
}
constexpr ::Org::BouncyCastle::Asn1::X509::X509Extensions* const& Org::BouncyCastle::Crypto::Tls::OcspStatusRequest::__cordl_internal_get_mRequestExtensions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mRequestExtensions;
}
constexpr void Org::BouncyCastle::Crypto::Tls::OcspStatusRequest::__cordl_internal_set_mRequestExtensions(::Org::BouncyCastle::Asn1::X509::X509Extensions* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mRequestExtensions = value;
}
inline void Org::BouncyCastle::Crypto::Tls::OcspStatusRequest::_ctor(::System::Collections::IList* responderIDList, ::Org::BouncyCastle::Asn1::X509::X509Extensions* requestExtensions) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::OcspStatusRequest*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Collections::IList*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509Extensions*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, responderIDList, requestExtensions);
}
inline ::System::Collections::IList* Org::BouncyCastle::Crypto::Tls::OcspStatusRequest::get_ResponderIDList() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::OcspStatusRequest*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IList*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* Org::BouncyCastle::Crypto::Tls::OcspStatusRequest::get_RequestExtensions() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::OcspStatusRequest*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::X509Extensions*>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::OcspStatusRequest::Encode(::System::IO::Stream* output) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::OcspStatusRequest*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, output);
}
inline ::Org::BouncyCastle::Crypto::Tls::OcspStatusRequest* Org::BouncyCastle::Crypto::Tls::OcspStatusRequest::Parse(::System::IO::Stream* input) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::OcspStatusRequest*>(), { "Parse", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::OcspStatusRequest*>(nullptr, ___internal_method, input);
}
inline ::Org::BouncyCastle::Crypto::Tls::OcspStatusRequest* Org::BouncyCastle::Crypto::Tls::OcspStatusRequest::New_ctor(::System::Collections::IList* responderIDList,
                                                                                                                        ::Org::BouncyCastle::Asn1::X509::X509Extensions* requestExtensions) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Tls::OcspStatusRequest*>(responderIDList, requestExtensions));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::OcspStatusRequest::OcspStatusRequest() {}

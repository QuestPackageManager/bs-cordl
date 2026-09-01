#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Cms\CmsUtilities.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsUtilities_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__ContentInfo_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__IssuerAndSerialNumber_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__TbsCertificateStructure_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1InputStream_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Set_def.hpp"
#include "Org/BouncyCastle/X509/Store/zzzz__IX509Store_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509Certificate_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsUtilities.get_MaximumMemory
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::Org::BouncyCastle::Cms::CmsUtilities::get_MaximumMemory)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36cb10c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsUtilities*>(), { "get_MaximumMemory", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsUtilities.ReadContentInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cms::ContentInfo* (*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Cms::CmsUtilities::ReadContentInfo)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x36b0b80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsUtilities*>(), { "ReadContentInfo", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsUtilities.ReadContentInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cms::ContentInfo* (*)(::System::IO::Stream*)>(&::Org::BouncyCastle::Cms::CmsUtilities::ReadContentInfo)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x36b08c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsUtilities*>(), { "ReadContentInfo", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsUtilities.ReadContentInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cms::ContentInfo* (*)(::Org::BouncyCastle::Asn1::Asn1InputStream*)>(
    &::Org::BouncyCastle::Cms::CmsUtilities::ReadContentInfo)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x36cb114;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsUtilities*>(), { "ReadContentInfo", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1InputStream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsUtilities.StreamToByteArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::System::IO::Stream*)>(&::Org::BouncyCastle::Cms::CmsUtilities::StreamToByteArray)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36cb270;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsUtilities*>(), { "StreamToByteArray", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsUtilities.StreamToByteArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::System::IO::Stream*, int32_t)>(&::Org::BouncyCastle::Cms::CmsUtilities::StreamToByteArray)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36cb278;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsUtilities*>(),
                                                                                           { "StreamToByteArray", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsUtilities.GetCertificatesFromStore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IList* (*)(::Org::BouncyCastle::X509::Store::IX509Store*)>(
    &::Org::BouncyCastle::Cms::CmsUtilities::GetCertificatesFromStore)> {
  constexpr static std::size_t size = 0x578;
  constexpr static std::size_t addrs = 0x36b2ba0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsUtilities*>(),
                                                                                           { "GetCertificatesFromStore", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::Store::IX509Store*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsUtilities.GetCrlsFromStore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IList* (*)(::Org::BouncyCastle::X509::Store::IX509Store*)>(&::Org::BouncyCastle::Cms::CmsUtilities::GetCrlsFromStore)> {
  constexpr static std::size_t size = 0x578;
  constexpr static std::size_t addrs = 0x36b3494;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsUtilities*>(), { "GetCrlsFromStore", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::Store::IX509Store*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsUtilities.CreateBerSetFromList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Set* (*)(::System::Collections::IList*)>(&::Org::BouncyCastle::Cms::CmsUtilities::CreateBerSetFromList)> {
  constexpr static std::size_t size = 0x37c;
  constexpr static std::size_t addrs = 0x36b3118;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsUtilities*>(), { "CreateBerSetFromList", {}, { ::i2c::type_of<::System::Collections::IList*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsUtilities.CreateDerSetFromList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Set* (*)(::System::Collections::IList*)>(&::Org::BouncyCastle::Cms::CmsUtilities::CreateDerSetFromList)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x36b7e60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsUtilities*>(), { "CreateDerSetFromList", {}, { ::i2c::type_of<::System::Collections::IList*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsUtilities.CreateBerOctetOutputStream
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (*)(::System::IO::Stream*, int32_t, bool, int32_t)>(&::Org::BouncyCastle::Cms::CmsUtilities::CreateBerOctetOutputStream)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x36bce90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsUtilities*>(),
                            { "CreateBerOctetOutputStream", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsUtilities.GetTbsCertificateStructure
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::TbsCertificateStructure* (*)(::Org::BouncyCastle::X509::X509Certificate*)>(
    &::Org::BouncyCastle::Cms::CmsUtilities::GetTbsCertificateStructure)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x36cb280;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsUtilities*>(),
                                                                                           { "GetTbsCertificateStructure", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsUtilities.GetIssuerAndSerialNumber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cms::IssuerAndSerialNumber* (*)(::Org::BouncyCastle::X509::X509Certificate*)>(
    &::Org::BouncyCastle::Cms::CmsUtilities::GetIssuerAndSerialNumber)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x36b48d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsUtilities*>(),
                                                                                           { "GetIssuerAndSerialNumber", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsUtilities._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::CmsUtilities::*)()>(&::Org::BouncyCastle::Cms::CmsUtilities::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x36cb2b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsUtilities*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline int32_t Org::BouncyCastle::Cms::CmsUtilities::get_MaximumMemory() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsUtilities*>(), { "get_MaximumMemory", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Cms::ContentInfo* Org::BouncyCastle::Cms::CmsUtilities::ReadContentInfo(::ArrayW<uint8_t> input) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsUtilities*>(), { "ReadContentInfo", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::ContentInfo*>(nullptr, ___internal_method, input);
}
inline ::Org::BouncyCastle::Asn1::Cms::ContentInfo* Org::BouncyCastle::Cms::CmsUtilities::ReadContentInfo(::System::IO::Stream* input) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsUtilities*>(), { "ReadContentInfo", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::ContentInfo*>(nullptr, ___internal_method, input);
}
inline ::Org::BouncyCastle::Asn1::Cms::ContentInfo* Org::BouncyCastle::Cms::CmsUtilities::ReadContentInfo(::Org::BouncyCastle::Asn1::Asn1InputStream* aIn) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsUtilities*>(), { "ReadContentInfo", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1InputStream*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::ContentInfo*>(nullptr, ___internal_method, aIn);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Cms::CmsUtilities::StreamToByteArray(::System::IO::Stream* inStream) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsUtilities*>(), { "StreamToByteArray", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, inStream);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Cms::CmsUtilities::StreamToByteArray(::System::IO::Stream* inStream, int32_t limit) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsUtilities*>(),
                                                                                         { "StreamToByteArray", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, inStream, limit);
}
inline ::System::Collections::IList* Org::BouncyCastle::Cms::CmsUtilities::GetCertificatesFromStore(::Org::BouncyCastle::X509::Store::IX509Store* certStore) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsUtilities*>(),
                                                                                         { "GetCertificatesFromStore", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::Store::IX509Store*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IList*>(nullptr, ___internal_method, certStore);
}
inline ::System::Collections::IList* Org::BouncyCastle::Cms::CmsUtilities::GetCrlsFromStore(::Org::BouncyCastle::X509::Store::IX509Store* crlStore) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsUtilities*>(), { "GetCrlsFromStore", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::Store::IX509Store*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IList*>(nullptr, ___internal_method, crlStore);
}
inline ::Org::BouncyCastle::Asn1::Asn1Set* Org::BouncyCastle::Cms::CmsUtilities::CreateBerSetFromList(::System::Collections::IList* berObjects) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsUtilities*>(), { "CreateBerSetFromList", {}, { ::i2c::type_of<::System::Collections::IList*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Set*>(nullptr, ___internal_method, berObjects);
}
inline ::Org::BouncyCastle::Asn1::Asn1Set* Org::BouncyCastle::Cms::CmsUtilities::CreateDerSetFromList(::System::Collections::IList* derObjects) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsUtilities*>(), { "CreateDerSetFromList", {}, { ::i2c::type_of<::System::Collections::IList*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Set*>(nullptr, ___internal_method, derObjects);
}
inline ::System::IO::Stream* Org::BouncyCastle::Cms::CmsUtilities::CreateBerOctetOutputStream(::System::IO::Stream* s, int32_t tagNo, bool isExplicit, int32_t bufferSize) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsUtilities*>(),
                          { "CreateBerOctetOutputStream", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(nullptr, ___internal_method, s, tagNo, isExplicit, bufferSize);
}
inline ::Org::BouncyCastle::Asn1::X509::TbsCertificateStructure* Org::BouncyCastle::Cms::CmsUtilities::GetTbsCertificateStructure(::Org::BouncyCastle::X509::X509Certificate* cert) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsUtilities*>(),
                                                                                         { "GetTbsCertificateStructure", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::TbsCertificateStructure*>(nullptr, ___internal_method, cert);
}
inline ::Org::BouncyCastle::Asn1::Cms::IssuerAndSerialNumber* Org::BouncyCastle::Cms::CmsUtilities::GetIssuerAndSerialNumber(::Org::BouncyCastle::X509::X509Certificate* cert) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsUtilities*>(),
                                                                                         { "GetIssuerAndSerialNumber", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::IssuerAndSerialNumber*>(nullptr, ___internal_method, cert);
}
inline void Org::BouncyCastle::Cms::CmsUtilities::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsUtilities*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Cms::CmsUtilities* Org::BouncyCastle::Cms::CmsUtilities::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Cms::CmsUtilities*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Cms::CmsUtilities::CmsUtilities() {}

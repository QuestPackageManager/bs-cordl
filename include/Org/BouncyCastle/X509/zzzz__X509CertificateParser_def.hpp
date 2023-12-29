#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X509CertificateParser)
namespace System::Collections {
class ICollection;
}
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1InputStream;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Set;
}
namespace Org::BouncyCastle::X509 {
class PemParser;
}
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509CertificateStructure;
}
// Forward declare root types
namespace Org::BouncyCastle::X509 {
class X509CertificateParser;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::X509::X509CertificateParser);
// Type: Org.BouncyCastle.X509::X509CertificateParser
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1862))
// CS Name: ::Org.BouncyCastle.X509::X509CertificateParser*
class CORDL_TYPE X509CertificateParser : public ::System::Object {
public:
  // Declarations
  /// @brief Field sData, offset 0x10, size 0x8
  __declspec(property(get = __get_sData, put = __set_sData))::Org::BouncyCastle::Asn1::Asn1Set* sData;

  /// @brief Field sDataObjectCount, offset 0x18, size 0x4
  __declspec(property(get = __get_sDataObjectCount, put = __set_sDataObjectCount)) int32_t sDataObjectCount;

  /// @brief Field currentStream, offset 0x20, size 0x8
  __declspec(property(get = __get_currentStream, put = __set_currentStream))::System::IO::Stream* currentStream;

  /// @brief Field PemCertParser, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_PemCertParser, put = setStaticF_PemCertParser))::Org::BouncyCastle::X509::PemParser* PemCertParser;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Set*& __get_sData();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Set*> const& __get_sData() const;

  constexpr void __set_sData(::Org::BouncyCastle::Asn1::Asn1Set* value);

  constexpr int32_t& __get_sDataObjectCount();

  constexpr int32_t const& __get_sDataObjectCount() const;

  constexpr void __set_sDataObjectCount(int32_t value);

  constexpr ::System::IO::Stream*& __get_currentStream();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> const& __get_currentStream() const;

  constexpr void __set_currentStream(::System::IO::Stream* value);

  static inline void setStaticF_PemCertParser(::Org::BouncyCastle::X509::PemParser* value);

  static inline ::Org::BouncyCastle::X509::PemParser* getStaticF_PemCertParser();

  /// @brief Method ReadDerCertificate addr 0x1109f20 size 0x218 virtual false final false
  inline ::Org::BouncyCastle::X509::X509Certificate* ReadDerCertificate(::Org::BouncyCastle::Asn1::Asn1InputStream* dIn);

  /// @brief Method GetCertificate addr 0x110a138 size 0xe4 virtual false final false
  inline ::Org::BouncyCastle::X509::X509Certificate* GetCertificate();

  /// @brief Method ReadPemCertificate addr 0x110a21c size 0xa8 virtual false final false
  inline ::Org::BouncyCastle::X509::X509Certificate* ReadPemCertificate(::System::IO::Stream* inStream);

  /// @brief Method CreateX509Certificate addr 0x110a2c4 size 0x60 virtual true final false
  inline ::Org::BouncyCastle::X509::X509Certificate* CreateX509Certificate(::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* c);

  /// @brief Method ReadCertificate addr 0x110a324 size 0x78 virtual false final false
  inline ::Org::BouncyCastle::X509::X509Certificate* ReadCertificate(::ArrayW<uint8_t, ::Array<uint8_t>*> input);

  /// @brief Method ReadCertificates addr 0x110a680 size 0x78 virtual false final false
  inline ::System::Collections::ICollection* ReadCertificates(::ArrayW<uint8_t, ::Array<uint8_t>*> input);

  /// @brief Method ReadCertificate addr 0x110a39c size 0x2e4 virtual false final false
  inline ::Org::BouncyCastle::X509::X509Certificate* ReadCertificate(::System::IO::Stream* inStream);

  /// @brief Method ReadCertificates addr 0x110a6f8 size 0x110 virtual false final false
  inline ::System::Collections::ICollection* ReadCertificates(::System::IO::Stream* inStream);

  static inline ::Org::BouncyCastle::X509::X509CertificateParser* New_ctor();

  /// @brief Method .ctor addr 0x110a898 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "X509CertificateParser", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X509CertificateParser(X509CertificateParser&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X509CertificateParser", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X509CertificateParser(X509CertificateParser const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X509CertificateParser();

public:
  /// @brief Field sData, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Set* ___sData;

  /// @brief Field sDataObjectCount, offset: 0x18, size: 0x4, def value: None
  int32_t ___sDataObjectCount;

  /// @brief Field currentStream, offset: 0x20, size: 0x8, def value: None
  ::System::IO::Stream* ___currentStream;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::X509::X509CertificateParser, 0x28>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::X509::X509CertificateParser, ___sData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::X509::X509CertificateParser, ___sDataObjectCount) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::X509::X509CertificateParser, ___currentStream) == 0x20, "Offset mismatch!");

} // namespace Org::BouncyCastle::X509
NEED_NO_BOX(::Org::BouncyCastle::X509::X509CertificateParser);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::X509::X509CertificateParser*, "Org.BouncyCastle.X509", "X509CertificateParser");

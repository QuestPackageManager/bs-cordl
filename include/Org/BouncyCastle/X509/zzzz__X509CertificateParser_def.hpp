#pragma once
// IWYU pragma private; include "Org/BouncyCastle/X509/X509CertificateParser.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X509CertificateParser)
namespace Org::BouncyCastle::Asn1::X509 {
class X509CertificateStructure;
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
namespace System::Collections {
class ICollection;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::X509 {
class X509CertificateParser;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::X509::X509CertificateParser);
// Dependencies System.Object
namespace Org::BouncyCastle::X509 {
// Is value type: false
// CS Name: Org.BouncyCastle.X509.X509CertificateParser
class CORDL_TYPE X509CertificateParser : public ::System::Object {
public:
  // Declarations
  /// @brief Field PemCertParser, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_PemCertParser, put = setStaticF_PemCertParser)) ::Org::BouncyCastle::X509::PemParser* PemCertParser;

  /// @brief Field currentStream, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_currentStream, put = __cordl_internal_set_currentStream)) ::System::IO::Stream* currentStream;

  /// @brief Field sData, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_sData, put = __cordl_internal_set_sData)) ::Org::BouncyCastle::Asn1::Asn1Set* sData;

  /// @brief Field sDataObjectCount, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_sDataObjectCount, put = __cordl_internal_set_sDataObjectCount)) int32_t sDataObjectCount;

  /// @brief Method CreateX509Certificate, addr 0x25f46c4, size 0x58, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::X509::X509Certificate* CreateX509Certificate(::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* c);

  /// @brief Method GetCertificate, addr 0x25f4538, size 0xe4, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::X509::X509Certificate* GetCertificate();

  static inline ::Org::BouncyCastle::X509::X509CertificateParser* New_ctor();

  /// @brief Method ReadCertificate, addr 0x25f478c, size 0x2cc, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::X509::X509Certificate* ReadCertificate(::System::IO::Stream* inStream);

  /// @brief Method ReadCertificate, addr 0x25f471c, size 0x70, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::X509::X509Certificate* ReadCertificate(::ArrayW<uint8_t, ::Array<uint8_t>*> input);

  /// @brief Method ReadCertificates, addr 0x25f4ac8, size 0x110, virtual false, abstract: false, final false
  inline ::System::Collections::ICollection* ReadCertificates(::System::IO::Stream* inStream);

  /// @brief Method ReadCertificates, addr 0x25f4a58, size 0x70, virtual false, abstract: false, final false
  inline ::System::Collections::ICollection* ReadCertificates(::ArrayW<uint8_t, ::Array<uint8_t>*> input);

  /// @brief Method ReadDerCertificate, addr 0x25f4320, size 0x218, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::X509::X509Certificate* ReadDerCertificate(::Org::BouncyCastle::Asn1::Asn1InputStream* dIn);

  /// @brief Method ReadPemCertificate, addr 0x25f461c, size 0xa8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::X509::X509Certificate* ReadPemCertificate(::System::IO::Stream* inStream);

  constexpr ::System::IO::Stream* const& __cordl_internal_get_currentStream() const;

  constexpr ::System::IO::Stream*& __cordl_internal_get_currentStream();

  constexpr ::Org::BouncyCastle::Asn1::Asn1Set* const& __cordl_internal_get_sData() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Set*& __cordl_internal_get_sData();

  constexpr int32_t const& __cordl_internal_get_sDataObjectCount() const;

  constexpr int32_t& __cordl_internal_get_sDataObjectCount();

  constexpr void __cordl_internal_set_currentStream(::System::IO::Stream* value);

  constexpr void __cordl_internal_set_sData(::Org::BouncyCastle::Asn1::Asn1Set* value);

  constexpr void __cordl_internal_set_sDataObjectCount(int32_t value);

  /// @brief Method .ctor, addr 0x25f4c68, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Org::BouncyCastle::X509::PemParser* getStaticF_PemCertParser();

  static inline void setStaticF_PemCertParser(::Org::BouncyCastle::X509::PemParser* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X509CertificateParser();

public:
  // Ctor Parameters [CppParam { name: "", ty: "X509CertificateParser", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X509CertificateParser(X509CertificateParser&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X509CertificateParser", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X509CertificateParser(X509CertificateParser const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1862 };

  /// @brief Field sData, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Set* ___sData;

  /// @brief Field sDataObjectCount, offset: 0x18, size: 0x4, def value: None
  int32_t ___sDataObjectCount;

  /// @brief Field currentStream, offset: 0x20, size: 0x8, def value: None
  ::System::IO::Stream* ___currentStream;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::X509::X509CertificateParser, ___sData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::X509::X509CertificateParser, ___sDataObjectCount) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::X509::X509CertificateParser, ___currentStream) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::X509::X509CertificateParser, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::X509
NEED_NO_BOX(::Org::BouncyCastle::X509::X509CertificateParser);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::X509::X509CertificateParser*, "Org.BouncyCastle.X509", "X509CertificateParser");

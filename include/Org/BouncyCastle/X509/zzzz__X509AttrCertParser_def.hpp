#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X509AttrCertParser)
namespace Org::BouncyCastle::Asn1 {
class Asn1InputStream;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Set;
}
namespace Org::BouncyCastle::X509 {
class IX509AttributeCertificate;
}
namespace Org::BouncyCastle::X509 {
class PemParser;
}
namespace System::Collections {
class ICollection;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::X509 {
class X509AttrCertParser;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::X509::X509AttrCertParser);
// Type: Org.BouncyCastle.X509::X509AttrCertParser
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::X509 {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1858))
// CS Name: ::Org.BouncyCastle.X509::X509AttrCertParser*
class CORDL_TYPE X509AttrCertParser : public ::System::Object {
public:
  // Declarations
  /// @brief Field sData, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_sData, put = __cordl_internal_set_sData))::Org::BouncyCastle::Asn1::Asn1Set* sData;

  /// @brief Field sDataObjectCount, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_sDataObjectCount, put = __cordl_internal_set_sDataObjectCount)) int32_t sDataObjectCount;

  /// @brief Field currentStream, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_currentStream, put = __cordl_internal_set_currentStream))::System::IO::Stream* currentStream;

  /// @brief Field PemAttrCertParser, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_PemAttrCertParser, put = setStaticF_PemAttrCertParser))::Org::BouncyCastle::X509::PemParser* PemAttrCertParser;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Set*& __cordl_internal_get_sData();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Set*> const& __cordl_internal_get_sData() const;

  constexpr void __cordl_internal_set_sData(::Org::BouncyCastle::Asn1::Asn1Set* value);

  constexpr int32_t& __cordl_internal_get_sDataObjectCount();

  constexpr int32_t const& __cordl_internal_get_sDataObjectCount() const;

  constexpr void __cordl_internal_set_sDataObjectCount(int32_t value);

  constexpr ::System::IO::Stream*& __cordl_internal_get_currentStream();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> const& __cordl_internal_get_currentStream() const;

  constexpr void __cordl_internal_set_currentStream(::System::IO::Stream* value);

  static inline void setStaticF_PemAttrCertParser(::Org::BouncyCastle::X509::PemParser* value);

  static inline ::Org::BouncyCastle::X509::PemParser* getStaticF_PemAttrCertParser();

  /// @brief Method ReadDerCertificate, addr 0x1176164, size 0x240, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::X509::IX509AttributeCertificate* ReadDerCertificate(::Org::BouncyCastle::Asn1::Asn1InputStream* dIn);

  /// @brief Method GetCertificate, addr 0x11763a4, size 0x128, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::X509::IX509AttributeCertificate* GetCertificate();

  /// @brief Method ReadPemCertificate, addr 0x117663c, size 0xbc, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::X509::IX509AttributeCertificate* ReadPemCertificate(::System::IO::Stream* inStream);

  /// @brief Method ReadAttrCert, addr 0x11766f8, size 0x78, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::X509::IX509AttributeCertificate* ReadAttrCert(::ArrayW<uint8_t, ::Array<uint8_t>*> input);

  /// @brief Method ReadAttrCerts, addr 0x1176a5c, size 0x78, virtual false, abstract: false, final false
  inline ::System::Collections::ICollection* ReadAttrCerts(::ArrayW<uint8_t, ::Array<uint8_t>*> input);

  /// @brief Method ReadAttrCert, addr 0x1176770, size 0x2ec, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::X509::IX509AttributeCertificate* ReadAttrCert(::System::IO::Stream* inStream);

  /// @brief Method ReadAttrCerts, addr 0x1176ad4, size 0x110, virtual false, abstract: false, final false
  inline ::System::Collections::ICollection* ReadAttrCerts(::System::IO::Stream* inStream);

  static inline ::Org::BouncyCastle::X509::X509AttrCertParser* New_ctor();

  /// @brief Method .ctor, addr 0x1176c74, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "X509AttrCertParser", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X509AttrCertParser(X509AttrCertParser&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X509AttrCertParser", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X509AttrCertParser(X509AttrCertParser const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X509AttrCertParser();

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
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::X509::X509AttrCertParser, 0x28>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::X509::X509AttrCertParser, ___sData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::X509::X509AttrCertParser, ___sDataObjectCount) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::X509::X509AttrCertParser, ___currentStream) == 0x20, "Offset mismatch!");

} // namespace Org::BouncyCastle::X509
NEED_NO_BOX(::Org::BouncyCastle::X509::X509AttrCertParser);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::X509::X509AttrCertParser*, "Org.BouncyCastle.X509", "X509AttrCertParser");

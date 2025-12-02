#pragma once
// IWYU pragma private; include "Org/BouncyCastle/X509/X509CrlParser.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X509CrlParser)
namespace Org::BouncyCastle::Asn1::X509 {
class CertificateList;
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
class X509Crl;
}
namespace System::Collections {
class ICollection;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::X509 {
class X509CrlParser;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::X509::X509CrlParser);
// Dependencies System.Object
namespace Org::BouncyCastle::X509 {
// Is value type: false
// CS Name: Org.BouncyCastle.X509.X509CrlParser
class CORDL_TYPE X509CrlParser : public ::System::Object {
public:
  // Declarations
  /// @brief Field PemCrlParser, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_PemCrlParser, put = setStaticF_PemCrlParser)) ::Org::BouncyCastle::X509::PemParser* PemCrlParser;

  /// @brief Field currentCrlStream, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_currentCrlStream, put = __cordl_internal_set_currentCrlStream)) ::System::IO::Stream* currentCrlStream;

  /// @brief Field lazyAsn1, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_lazyAsn1, put = __cordl_internal_set_lazyAsn1)) bool lazyAsn1;

  /// @brief Field sCrlData, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_sCrlData, put = __cordl_internal_set_sCrlData)) ::Org::BouncyCastle::Asn1::Asn1Set* sCrlData;

  /// @brief Field sCrlDataObjectCount, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_sCrlDataObjectCount, put = __cordl_internal_set_sCrlDataObjectCount)) int32_t sCrlDataObjectCount;

  /// @brief Method CreateX509Crl, addr 0x35286a0, size 0x5c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::X509::X509Crl* CreateX509Crl(::Org::BouncyCastle::Asn1::X509::CertificateList* c);

  /// @brief Method GetCrl, addr 0x352861c, size 0x84, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::X509::X509Crl* GetCrl();

  static inline ::Org::BouncyCastle::X509::X509CrlParser* New_ctor();

  static inline ::Org::BouncyCastle::X509::X509CrlParser* New_ctor(bool lazyAsn1);

  /// @brief Method ReadCrl, addr 0x3528770, size 0x364, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::X509::X509Crl* ReadCrl(::System::IO::Stream* inStream);

  /// @brief Method ReadCrl, addr 0x35286fc, size 0x74, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::X509::X509Crl* ReadCrl(::ArrayW<uint8_t, ::Array<uint8_t>*> input);

  /// @brief Method ReadCrls, addr 0x3528b48, size 0x118, virtual false, abstract: false, final false
  inline ::System::Collections::ICollection* ReadCrls(::System::IO::Stream* inStream);

  /// @brief Method ReadCrls, addr 0x3528ad4, size 0x74, virtual false, abstract: false, final false
  inline ::System::Collections::ICollection* ReadCrls(::ArrayW<uint8_t, ::Array<uint8_t>*> input);

  /// @brief Method ReadDerCrl, addr 0x35283f8, size 0x224, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::X509::X509Crl* ReadDerCrl(::Org::BouncyCastle::Asn1::Asn1InputStream* dIn);

  /// @brief Method ReadPemCrl, addr 0x352834c, size 0xac, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::X509::X509Crl* ReadPemCrl(::System::IO::Stream* inStream);

  constexpr ::System::IO::Stream* const& __cordl_internal_get_currentCrlStream() const;

  constexpr ::System::IO::Stream*& __cordl_internal_get_currentCrlStream();

  constexpr bool const& __cordl_internal_get_lazyAsn1() const;

  constexpr bool& __cordl_internal_get_lazyAsn1();

  constexpr ::Org::BouncyCastle::Asn1::Asn1Set* const& __cordl_internal_get_sCrlData() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Set*& __cordl_internal_get_sCrlData();

  constexpr int32_t const& __cordl_internal_get_sCrlDataObjectCount() const;

  constexpr int32_t& __cordl_internal_get_sCrlDataObjectCount();

  constexpr void __cordl_internal_set_currentCrlStream(::System::IO::Stream* value);

  constexpr void __cordl_internal_set_lazyAsn1(bool value);

  constexpr void __cordl_internal_set_sCrlData(::Org::BouncyCastle::Asn1::Asn1Set* value);

  constexpr void __cordl_internal_set_sCrlDataObjectCount(int32_t value);

  /// @brief Method .ctor, addr 0x352833c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3528344, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(bool lazyAsn1);

  static inline ::Org::BouncyCastle::X509::PemParser* getStaticF_PemCrlParser();

  static inline void setStaticF_PemCrlParser(::Org::BouncyCastle::X509::PemParser* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X509CrlParser();

public:
  // Ctor Parameters [CppParam { name: "", ty: "X509CrlParser", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X509CrlParser(X509CrlParser&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X509CrlParser", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X509CrlParser(X509CrlParser const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1866 };

  /// @brief Field lazyAsn1, offset: 0x10, size: 0x1, def value: None
  bool ___lazyAsn1;

  /// @brief Field sCrlData, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Set* ___sCrlData;

  /// @brief Field sCrlDataObjectCount, offset: 0x20, size: 0x4, def value: None
  int32_t ___sCrlDataObjectCount;

  /// @brief Field currentCrlStream, offset: 0x28, size: 0x8, def value: None
  ::System::IO::Stream* ___currentCrlStream;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::X509::X509CrlParser, ___lazyAsn1) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::X509::X509CrlParser, ___sCrlData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::X509::X509CrlParser, ___sCrlDataObjectCount) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::X509::X509CrlParser, ___currentCrlStream) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::X509::X509CrlParser, 0x30>, "Size mismatch!");

} // namespace Org::BouncyCastle::X509
NEED_NO_BOX(::Org::BouncyCastle::X509::X509CrlParser);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::X509::X509CrlParser*, "Org.BouncyCastle.X509", "X509CrlParser");

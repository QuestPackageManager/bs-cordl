#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type: Org.BouncyCastle.X509::X509CrlParser
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::X509 {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1866))
// CS Name: ::Org.BouncyCastle.X509::X509CrlParser*
class CORDL_TYPE X509CrlParser : public ::System::Object {
public:
  // Declarations
  /// @brief Field lazyAsn1, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_lazyAsn1, put = __cordl_internal_set_lazyAsn1)) bool lazyAsn1;

  /// @brief Field sCrlData, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_sCrlData, put = __cordl_internal_set_sCrlData))::Org::BouncyCastle::Asn1::Asn1Set* sCrlData;

  /// @brief Field sCrlDataObjectCount, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_sCrlDataObjectCount, put = __cordl_internal_set_sCrlDataObjectCount)) int32_t sCrlDataObjectCount;

  /// @brief Field currentCrlStream, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_currentCrlStream, put = __cordl_internal_set_currentCrlStream))::System::IO::Stream* currentCrlStream;

  /// @brief Field PemCrlParser, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_PemCrlParser, put = setStaticF_PemCrlParser))::Org::BouncyCastle::X509::PemParser* PemCrlParser;

  constexpr bool& __cordl_internal_get_lazyAsn1();

  constexpr bool const& __cordl_internal_get_lazyAsn1() const;

  constexpr void __cordl_internal_set_lazyAsn1(bool value);

  constexpr ::Org::BouncyCastle::Asn1::Asn1Set*& __cordl_internal_get_sCrlData();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Set*> const& __cordl_internal_get_sCrlData() const;

  constexpr void __cordl_internal_set_sCrlData(::Org::BouncyCastle::Asn1::Asn1Set* value);

  constexpr int32_t& __cordl_internal_get_sCrlDataObjectCount();

  constexpr int32_t const& __cordl_internal_get_sCrlDataObjectCount() const;

  constexpr void __cordl_internal_set_sCrlDataObjectCount(int32_t value);

  constexpr ::System::IO::Stream*& __cordl_internal_get_currentCrlStream();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> const& __cordl_internal_get_currentCrlStream() const;

  constexpr void __cordl_internal_set_currentCrlStream(::System::IO::Stream* value);

  static inline void setStaticF_PemCrlParser(::Org::BouncyCastle::X509::PemParser* value);

  static inline ::Org::BouncyCastle::X509::PemParser* getStaticF_PemCrlParser();

  static inline ::Org::BouncyCastle::X509::X509CrlParser* New_ctor();

  /// @brief Method .ctor, addr 0x11ad374, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Org::BouncyCastle::X509::X509CrlParser* New_ctor(bool lazyAsn1);

  /// @brief Method .ctor, addr 0x11ad390, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(bool lazyAsn1);

  /// @brief Method ReadPemCrl, addr 0x11ad3b8, size 0xa8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::X509::X509Crl* ReadPemCrl(::System::IO::Stream* inStream);

  /// @brief Method ReadDerCrl, addr 0x11ad460, size 0x218, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::X509::X509Crl* ReadDerCrl(::Org::BouncyCastle::Asn1::Asn1InputStream* dIn);

  /// @brief Method GetCrl, addr 0x11ad678, size 0x84, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::X509::X509Crl* GetCrl();

  /// @brief Method CreateX509Crl, addr 0x11ad6fc, size 0x60, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::X509::X509Crl* CreateX509Crl(::Org::BouncyCastle::Asn1::X509::CertificateList* c);

  /// @brief Method ReadCrl, addr 0x11ad75c, size 0x78, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::X509::X509Crl* ReadCrl(::ArrayW<uint8_t, ::Array<uint8_t>*> input);

  /// @brief Method ReadCrls, addr 0x11adb34, size 0x78, virtual false, abstract: false, final false
  inline ::System::Collections::ICollection* ReadCrls(::ArrayW<uint8_t, ::Array<uint8_t>*> input);

  /// @brief Method ReadCrl, addr 0x11ad7d4, size 0x360, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::X509::X509Crl* ReadCrl(::System::IO::Stream* inStream);

  /// @brief Method ReadCrls, addr 0x11adbac, size 0x110, virtual false, abstract: false, final false
  inline ::System::Collections::ICollection* ReadCrls(::System::IO::Stream* inStream);

  // Ctor Parameters [CppParam { name: "", ty: "X509CrlParser", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X509CrlParser(X509CrlParser&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X509CrlParser", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X509CrlParser(X509CrlParser const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X509CrlParser();

public:
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
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::X509::X509CrlParser, 0x30>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::X509::X509CrlParser, ___lazyAsn1) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::X509::X509CrlParser, ___sCrlData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::X509::X509CrlParser, ___sCrlDataObjectCount) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::X509::X509CrlParser, ___currentCrlStream) == 0x28, "Offset mismatch!");

} // namespace Org::BouncyCastle::X509
NEED_NO_BOX(::Org::BouncyCastle::X509::X509CrlParser);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::X509::X509CrlParser*, "Org.BouncyCastle.X509", "X509CrlParser");

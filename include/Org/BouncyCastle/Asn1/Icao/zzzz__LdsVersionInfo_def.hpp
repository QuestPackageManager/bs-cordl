#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(LdsVersionInfo)
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class DerPrintableString;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Icao {
class LdsVersionInfo;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Icao::LdsVersionInfo);
// Type: Org.BouncyCastle.Asn1.Icao::LdsVersionInfo
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Icao {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(178))
// CS Name: ::Org.BouncyCastle.Asn1.Icao::LdsVersionInfo*
class CORDL_TYPE LdsVersionInfo : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field ldsVersion, offset 0x10, size 0x8
  __declspec(property(get = __get_ldsVersion, put = __set_ldsVersion))::Org::BouncyCastle::Asn1::DerPrintableString* ldsVersion;

  /// @brief Field unicodeVersion, offset 0x18, size 0x8
  __declspec(property(get = __get_unicodeVersion, put = __set_unicodeVersion))::Org::BouncyCastle::Asn1::DerPrintableString* unicodeVersion;

  constexpr ::Org::BouncyCastle::Asn1::DerPrintableString*& __get_ldsVersion();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerPrintableString*> const& __get_ldsVersion() const;

  constexpr void __set_ldsVersion(::Org::BouncyCastle::Asn1::DerPrintableString* value);

  constexpr ::Org::BouncyCastle::Asn1::DerPrintableString*& __get_unicodeVersion();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerPrintableString*> const& __get_unicodeVersion() const;

  constexpr void __set_unicodeVersion(::Org::BouncyCastle::Asn1::DerPrintableString* value);

  static inline ::Org::BouncyCastle::Asn1::Icao::LdsVersionInfo* New_ctor(::StringW ldsVersion, ::StringW unicodeVersion);

  /// @brief Method .ctor, addr 0xf75904, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::StringW ldsVersion, ::StringW unicodeVersion);

  static inline ::Org::BouncyCastle::Asn1::Icao::LdsVersionInfo* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor, addr 0xf759a4, size 0xe8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method GetInstance, addr 0xf7545c, size 0xa4, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Icao::LdsVersionInfo* GetInstance(::System::Object* obj);

  /// @brief Method GetLdsVersion, addr 0xf75a8c, size 0x20, virtual true, abstract: false, final false
  inline ::StringW GetLdsVersion();

  /// @brief Method GetUnicodeVersion, addr 0xf75aac, size 0x20, virtual true, abstract: false, final false
  inline ::StringW GetUnicodeVersion();

  /// @brief Method ToAsn1Object, addr 0xf75acc, size 0xf0, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "LdsVersionInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LdsVersionInfo(LdsVersionInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LdsVersionInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LdsVersionInfo(LdsVersionInfo const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LdsVersionInfo();

public:
  /// @brief Field ldsVersion, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerPrintableString* ___ldsVersion;

  /// @brief Field unicodeVersion, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerPrintableString* ___unicodeVersion;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Icao::LdsVersionInfo, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Icao::LdsVersionInfo, ___ldsVersion) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Icao::LdsVersionInfo, ___unicodeVersion) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::Icao
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Icao::LdsVersionInfo);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Icao::LdsVersionInfo*, "Org.BouncyCastle.Asn1.Icao", "LdsVersionInfo");

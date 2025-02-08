#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Icao/LdsVersionInfo.hpp"
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
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::Icao {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Icao.LdsVersionInfo
class CORDL_TYPE LdsVersionInfo : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field ldsVersion, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_ldsVersion, put = __cordl_internal_set_ldsVersion)) ::Org::BouncyCastle::Asn1::DerPrintableString* ldsVersion;

  /// @brief Field unicodeVersion, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_unicodeVersion, put = __cordl_internal_set_unicodeVersion)) ::Org::BouncyCastle::Asn1::DerPrintableString* unicodeVersion;

  /// @brief Method GetInstance, addr 0x23fbb44, size 0xa4, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Icao::LdsVersionInfo* GetInstance(::System::Object* obj);

  /// @brief Method GetLdsVersion, addr 0x23fc148, size 0x20, virtual true, abstract: false, final false
  inline ::StringW GetLdsVersion();

  /// @brief Method GetUnicodeVersion, addr 0x23fc168, size 0x20, virtual true, abstract: false, final false
  inline ::StringW GetUnicodeVersion();

  static inline ::Org::BouncyCastle::Asn1::Icao::LdsVersionInfo* New_ctor(::StringW ldsVersion, ::StringW unicodeVersion);

  static inline ::Org::BouncyCastle::Asn1::Icao::LdsVersionInfo* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x23fc188, size 0xec, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::DerPrintableString* const& __cordl_internal_get_ldsVersion() const;

  constexpr ::Org::BouncyCastle::Asn1::DerPrintableString*& __cordl_internal_get_ldsVersion();

  constexpr ::Org::BouncyCastle::Asn1::DerPrintableString* const& __cordl_internal_get_unicodeVersion() const;

  constexpr ::Org::BouncyCastle::Asn1::DerPrintableString*& __cordl_internal_get_unicodeVersion();

  constexpr void __cordl_internal_set_ldsVersion(::Org::BouncyCastle::Asn1::DerPrintableString* value);

  constexpr void __cordl_internal_set_unicodeVersion(::Org::BouncyCastle::Asn1::DerPrintableString* value);

  /// @brief Method .ctor, addr 0x23fbfd0, size 0x94, virtual false, abstract: false, final false
  inline void _ctor(::StringW ldsVersion, ::StringW unicodeVersion);

  /// @brief Method .ctor, addr 0x23fc064, size 0xe4, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LdsVersionInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LdsVersionInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LdsVersionInfo(LdsVersionInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LdsVersionInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LdsVersionInfo(LdsVersionInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 178 };

  /// @brief Field ldsVersion, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerPrintableString* ___ldsVersion;

  /// @brief Field unicodeVersion, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerPrintableString* ___unicodeVersion;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::Icao::LdsVersionInfo, ___ldsVersion) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Icao::LdsVersionInfo, ___unicodeVersion) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Icao::LdsVersionInfo, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Icao
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Icao::LdsVersionInfo);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Icao::LdsVersionInfo*, "Org.BouncyCastle.Asn1.Icao", "LdsVersionInfo");

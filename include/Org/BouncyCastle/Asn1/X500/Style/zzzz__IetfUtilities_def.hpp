#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/X500/Style/IetfUtilities.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IetfUtilities)
namespace Org::BouncyCastle::Asn1::X500 {
class AttributeTypeAndValue;
}
namespace Org::BouncyCastle::Asn1::X500 {
class Rdn;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X500::Style {
class IetfUtilities;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X500::Style::IetfUtilities);
// Dependencies System.Object
namespace Org::BouncyCastle::Asn1::X500::Style {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.X500.Style.IetfUtilities
class CORDL_TYPE IetfUtilities : public ::System::Object {
public:
  // Declarations
  /// @brief Method AtvAreEqual, addr 0x2501350, size 0xcc, virtual false, abstract: false, final false
  static inline bool AtvAreEqual(::Org::BouncyCastle::Asn1::X500::AttributeTypeAndValue* atv1, ::Org::BouncyCastle::Asn1::X500::AttributeTypeAndValue* atv2);

  /// @brief Method CanonicalString, addr 0x2501250, size 0x10, virtual false, abstract: false, final false
  static inline ::StringW CanonicalString(::Org::BouncyCastle::Asn1::Asn1Encodable* value);

  /// @brief Method Canonicalize, addr 0x2500d44, size 0x298, virtual false, abstract: false, final false
  static inline ::StringW Canonicalize(::StringW s);

  /// @brief Method DecodeObject, addr 0x2500fdc, size 0x148, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Asn1Object* DecodeObject(::StringW oValue);

  static inline ::Org::BouncyCastle::Asn1::X500::Style::IetfUtilities* New_ctor();

  /// @brief Method RdnAreEqual, addr 0x2501260, size 0xf0, virtual false, abstract: false, final false
  static inline bool RdnAreEqual(::Org::BouncyCastle::Asn1::X500::Rdn* rdn1, ::Org::BouncyCastle::Asn1::X500::Rdn* rdn2);

  /// @brief Method StripInternalSpaces, addr 0x2501124, size 0x12c, virtual false, abstract: false, final false
  static inline ::StringW StripInternalSpaces(::StringW str);

  /// @brief Method ValueToString, addr 0x2500824, size 0x520, virtual false, abstract: false, final false
  static inline ::StringW ValueToString(::Org::BouncyCastle::Asn1::Asn1Encodable* value);

  /// @brief Method .ctor, addr 0x250141c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IetfUtilities();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IetfUtilities", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IetfUtilities(IetfUtilities&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IetfUtilities", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IetfUtilities(IetfUtilities const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 323 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X500::Style::IetfUtilities, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::X500::Style
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X500::Style::IetfUtilities);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X500::Style::IetfUtilities*, "Org.BouncyCastle.Asn1.X500.Style", "IetfUtilities");

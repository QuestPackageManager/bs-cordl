#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/X500/Style/IetfUtilities.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
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
MARK_REF_T(::Org::BouncyCastle::Asn1::X500::Style::IetfUtilities*);
DEFINE_IL2CPP_CLASS(::Org::BouncyCastle::Asn1::X500::Style::IetfUtilities*, "Org.BouncyCastle.Asn1.X500.Style", "IetfUtilities");
// Dependencies System.Object
namespace Org::BouncyCastle::Asn1::X500::Style {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.X500.Style.IetfUtilities
class CORDL_TYPE IetfUtilities : public ::System::Object {
public:
  // Declarations
  /// @brief Method AtvAreEqual, addr 0x3554b1c, size 0xcc, virtual false, abstract: false, final false
  static inline bool AtvAreEqual(::Org::BouncyCastle::Asn1::X500::AttributeTypeAndValue* atv1, ::Org::BouncyCastle::Asn1::X500::AttributeTypeAndValue* atv2);

  /// @brief Method CanonicalString, addr 0x3554a1c, size 0x10, virtual false, abstract: false, final false
  static inline ::StringW CanonicalString(::Org::BouncyCastle::Asn1::Asn1Encodable* value);

  /// @brief Method Canonicalize, addr 0x3554504, size 0x27c, virtual false, abstract: false, final false
  static inline ::StringW Canonicalize(::StringW s);

  /// @brief Method DecodeObject, addr 0x3554780, size 0x150, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Asn1Object* DecodeObject(::StringW oValue);

  static inline ::Org::BouncyCastle::Asn1::X500::Style::IetfUtilities* New_ctor();

  /// @brief Method RdnAreEqual, addr 0x3554a2c, size 0xf0, virtual false, abstract: false, final false
  static inline bool RdnAreEqual(::Org::BouncyCastle::Asn1::X500::Rdn* rdn1, ::Org::BouncyCastle::Asn1::X500::Rdn* rdn2);

  /// @brief Method StripInternalSpaces, addr 0x35548d0, size 0x14c, virtual false, abstract: false, final false
  static inline ::StringW StripInternalSpaces(::StringW str);

  /// @brief Method ValueToString, addr 0x3554010, size 0x4f4, virtual false, abstract: false, final false
  static inline ::StringW ValueToString(::Org::BouncyCastle::Asn1::Asn1Encodable* value);

  /// @brief Method .ctor, addr 0x3554be8, size 0x4, virtual false, abstract: false, final false
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
static_assert(sizeof(::Org::BouncyCastle::Asn1::X500::Style::IetfUtilities) == 0x10, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::X500::Style

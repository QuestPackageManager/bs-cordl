#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Cmp/RevocationDetails.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(RevocationDetails)
namespace Org::BouncyCastle::Asn1::Cmp {
class RevDetails;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Name;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Cmp {
class RevocationDetails;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cmp::RevocationDetails);
// Dependencies System.Object
namespace Org::BouncyCastle::Cmp {
// Is value type: false
// CS Name: Org.BouncyCastle.Cmp.RevocationDetails
class CORDL_TYPE RevocationDetails : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Issuer)) ::Org::BouncyCastle::Asn1::X509::X509Name* Issuer;

  __declspec(property(get = get_SerialNumber)) ::Org::BouncyCastle::Math::BigInteger* SerialNumber;

  __declspec(property(get = get_Subject)) ::Org::BouncyCastle::Asn1::X509::X509Name* Subject;

  /// @brief Field revDetails, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_revDetails, put = __cordl_internal_set_revDetails)) ::Org::BouncyCastle::Asn1::Cmp::RevDetails* revDetails;

  static inline ::Org::BouncyCastle::Cmp::RevocationDetails* New_ctor(::Org::BouncyCastle::Asn1::Cmp::RevDetails* revDetails);

  /// @brief Method ToASN1Structure, addr 0x2652fdc, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cmp::RevDetails* ToASN1Structure();

  constexpr ::Org::BouncyCastle::Asn1::Cmp::RevDetails* const& __cordl_internal_get_revDetails() const;

  constexpr ::Org::BouncyCastle::Asn1::Cmp::RevDetails*& __cordl_internal_get_revDetails();

  constexpr void __cordl_internal_set_revDetails(::Org::BouncyCastle::Asn1::Cmp::RevDetails* value);

  /// @brief Method .ctor, addr 0x2652f18, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Cmp::RevDetails* revDetails);

  /// @brief Method get_Issuer, addr 0x2652f70, size 0x30, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::X509Name* get_Issuer();

  /// @brief Method get_SerialNumber, addr 0x2652fa0, size 0x3c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_SerialNumber();

  /// @brief Method get_Subject, addr 0x2652f40, size 0x30, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::X509Name* get_Subject();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RevocationDetails();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RevocationDetails", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RevocationDetails(RevocationDetails&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RevocationDetails", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RevocationDetails(RevocationDetails const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 608 };

  /// @brief Field revDetails, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Cmp::RevDetails* ___revDetails;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Cmp::RevocationDetails, ___revDetails) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cmp::RevocationDetails, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Cmp
NEED_NO_BOX(::Org::BouncyCastle::Cmp::RevocationDetails);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cmp::RevocationDetails*, "Org.BouncyCastle.Cmp", "RevocationDetails");

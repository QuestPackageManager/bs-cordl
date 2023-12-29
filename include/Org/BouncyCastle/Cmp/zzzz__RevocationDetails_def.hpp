#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(RevocationDetails)
namespace Org::BouncyCastle::Asn1::X509 {
class X509Name;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Asn1::Cmp {
class RevDetails;
}
// Forward declare root types
namespace Org::BouncyCastle::Cmp {
class RevocationDetails;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cmp::RevocationDetails);
// Type: Org.BouncyCastle.Cmp::RevocationDetails
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Cmp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(608))
// CS Name: ::Org.BouncyCastle.Cmp::RevocationDetails*
class CORDL_TYPE RevocationDetails : public ::System::Object {
public:
  // Declarations
  /// @brief Field revDetails, offset 0x10, size 0x8
  __declspec(property(get = __get_revDetails, put = __set_revDetails))::Org::BouncyCastle::Asn1::Cmp::RevDetails* revDetails;

  __declspec(property(get = get_Subject))::Org::BouncyCastle::Asn1::X509::X509Name* Subject;

  __declspec(property(get = get_Issuer))::Org::BouncyCastle::Asn1::X509::X509Name* Issuer;

  __declspec(property(get = get_SerialNumber))::Org::BouncyCastle::Math::BigInteger* SerialNumber;

  constexpr ::Org::BouncyCastle::Asn1::Cmp::RevDetails*& __get_revDetails();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cmp::RevDetails*> const& __get_revDetails() const;

  constexpr void __set_revDetails(::Org::BouncyCastle::Asn1::Cmp::RevDetails* value);

  static inline ::Org::BouncyCastle::Cmp::RevocationDetails* New_ctor(::Org::BouncyCastle::Asn1::Cmp::RevDetails* revDetails);

  /// @brief Method .ctor addr 0x1166c54 size 0x28 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Cmp::RevDetails* revDetails);

  /// @brief Method get_Subject addr 0x1166c7c size 0x30 virtual false final false
  inline ::Org::BouncyCastle::Asn1::X509::X509Name* get_Subject();

  /// @brief Method get_Issuer addr 0x1166cac size 0x30 virtual false final false
  inline ::Org::BouncyCastle::Asn1::X509::X509Name* get_Issuer();

  /// @brief Method get_SerialNumber addr 0x1166cdc size 0x3c virtual false final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_SerialNumber();

  /// @brief Method ToASN1Structure addr 0x1166d18 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::Cmp::RevDetails* ToASN1Structure();

  // Ctor Parameters [CppParam { name: "", ty: "RevocationDetails", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RevocationDetails(RevocationDetails&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RevocationDetails", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RevocationDetails(RevocationDetails const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RevocationDetails();

public:
  /// @brief Field revDetails, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Cmp::RevDetails* ___revDetails;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cmp::RevocationDetails, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cmp::RevocationDetails, ___revDetails) == 0x10, "Offset mismatch!");

} // namespace Org::BouncyCastle::Cmp
NEED_NO_BOX(::Org::BouncyCastle::Cmp::RevocationDetails);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cmp::RevocationDetails*, "Org.BouncyCastle.Cmp", "RevocationDetails");

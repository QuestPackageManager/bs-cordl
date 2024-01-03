#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AuthorityInformationAccess)
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Extensions;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AccessDescription;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralName;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class AuthorityInformationAccess;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::AuthorityInformationAccess);
// Type: Org.BouncyCastle.Asn1.X509::AuthorityInformationAccess
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(344))
// CS Name: ::Org.BouncyCastle.Asn1.X509::AuthorityInformationAccess*
class CORDL_TYPE AuthorityInformationAccess : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field descriptions, offset 0x10, size 0x8
  __declspec(property(get = __get_descriptions,
                      put = __set_descriptions))::ArrayW<::Org::BouncyCastle::Asn1::X509::AccessDescription*, ::Array<::Org::BouncyCastle::Asn1::X509::AccessDescription*>*> descriptions;

  constexpr ::ArrayW<::Org::BouncyCastle::Asn1::X509::AccessDescription*, ::Array<::Org::BouncyCastle::Asn1::X509::AccessDescription*>*>& __get_descriptions();

  constexpr ::ArrayW<::Org::BouncyCastle::Asn1::X509::AccessDescription*, ::Array<::Org::BouncyCastle::Asn1::X509::AccessDescription*>*> const& __get_descriptions() const;

  constexpr void __set_descriptions(::ArrayW<::Org::BouncyCastle::Asn1::X509::AccessDescription*, ::Array<::Org::BouncyCastle::Asn1::X509::AccessDescription*>*> value);

  /// @brief Method Copy, addr 0x1085444, size 0x78, virtual false, abstract: false, final false
  static inline ::ArrayW<::Org::BouncyCastle::Asn1::X509::AccessDescription*, ::Array<::Org::BouncyCastle::Asn1::X509::AccessDescription*>*>
  Copy(::ArrayW<::Org::BouncyCastle::Asn1::X509::AccessDescription*, ::Array<::Org::BouncyCastle::Asn1::X509::AccessDescription*>*> descriptions);

  /// @brief Method GetInstance, addr 0x10854bc, size 0xa4, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::AuthorityInformationAccess* GetInstance(::System::Object* obj);

  /// @brief Method FromExtensions, addr 0x1085728, size 0x68, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::AuthorityInformationAccess* FromExtensions(::Org::BouncyCastle::Asn1::X509::X509Extensions* extensions);

  static inline ::Org::BouncyCastle::Asn1::X509::AuthorityInformationAccess* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor, addr 0x1085560, size 0x1c8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  static inline ::Org::BouncyCastle::Asn1::X509::AuthorityInformationAccess* New_ctor(::Org::BouncyCastle::Asn1::X509::AccessDescription* description);

  /// @brief Method .ctor, addr 0x1085790, size 0xa8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::AccessDescription* description);

  static inline ::Org::BouncyCastle::Asn1::X509::AuthorityInformationAccess*
  New_ctor(::ArrayW<::Org::BouncyCastle::Asn1::X509::AccessDescription*, ::Array<::Org::BouncyCastle::Asn1::X509::AccessDescription*>*> descriptions);

  /// @brief Method .ctor, addr 0x1085838, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::Org::BouncyCastle::Asn1::X509::AccessDescription*, ::Array<::Org::BouncyCastle::Asn1::X509::AccessDescription*>*> descriptions);

  static inline ::Org::BouncyCastle::Asn1::X509::AuthorityInformationAccess* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid, ::Org::BouncyCastle::Asn1::X509::GeneralName* location);

  /// @brief Method .ctor, addr 0x1085868, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid, ::Org::BouncyCastle::Asn1::X509::GeneralName* location);

  /// @brief Method GetAccessDescriptions, addr 0x10858e0, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::Org::BouncyCastle::Asn1::X509::AccessDescription*, ::Array<::Org::BouncyCastle::Asn1::X509::AccessDescription*>*> GetAccessDescriptions();

  /// @brief Method ToAsn1Object, addr 0x10858e8, size 0x68, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  /// @brief Method ToString, addr 0x1085950, size 0x15c, virtual true, abstract: false, final false
  inline ::StringW ToString();

  // Ctor Parameters [CppParam { name: "", ty: "AuthorityInformationAccess", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AuthorityInformationAccess(AuthorityInformationAccess&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AuthorityInformationAccess", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AuthorityInformationAccess(AuthorityInformationAccess const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AuthorityInformationAccess();

public:
  /// @brief Field descriptions, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::Org::BouncyCastle::Asn1::X509::AccessDescription*, ::Array<::Org::BouncyCastle::Asn1::X509::AccessDescription*>*> ___descriptions;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::AuthorityInformationAccess, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::AuthorityInformationAccess, ___descriptions) == 0x10, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::AuthorityInformationAccess);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::AuthorityInformationAccess*, "Org.BouncyCastle.Asn1.X509", "AuthorityInformationAccess");

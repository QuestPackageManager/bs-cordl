#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(CrlEntry)
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Extensions;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1::X509 {
class Time;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class CrlEntry;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::CrlEntry);
// Type: Org.BouncyCastle.Asn1.X509::CrlEntry
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(390))
// CS Name: ::Org.BouncyCastle.Asn1.X509::CrlEntry*
class CORDL_TYPE CrlEntry : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field seq, offset 0x10, size 0x8
  __declspec(property(get = __get_seq, put = __set_seq))::Org::BouncyCastle::Asn1::Asn1Sequence* seq;

  /// @brief Field userCertificate, offset 0x18, size 0x8
  __declspec(property(get = __get_userCertificate, put = __set_userCertificate))::Org::BouncyCastle::Asn1::DerInteger* userCertificate;

  /// @brief Field revocationDate, offset 0x20, size 0x8
  __declspec(property(get = __get_revocationDate, put = __set_revocationDate))::Org::BouncyCastle::Asn1::X509::Time* revocationDate;

  /// @brief Field crlEntryExtensions, offset 0x28, size 0x8
  __declspec(property(get = __get_crlEntryExtensions, put = __set_crlEntryExtensions))::Org::BouncyCastle::Asn1::X509::X509Extensions* crlEntryExtensions;

  __declspec(property(get = get_UserCertificate))::Org::BouncyCastle::Asn1::DerInteger* UserCertificate;

  __declspec(property(get = get_RevocationDate))::Org::BouncyCastle::Asn1::X509::Time* RevocationDate;

  __declspec(property(get = get_Extensions))::Org::BouncyCastle::Asn1::X509::X509Extensions* Extensions;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& __get_seq();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Sequence*> const& __get_seq() const;

  constexpr void __set_seq(::Org::BouncyCastle::Asn1::Asn1Sequence* value);

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __get_userCertificate();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> const& __get_userCertificate() const;

  constexpr void __set_userCertificate(::Org::BouncyCastle::Asn1::DerInteger* value);

  constexpr ::Org::BouncyCastle::Asn1::X509::Time*& __get_revocationDate();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::Time*> const& __get_revocationDate() const;

  constexpr void __set_revocationDate(::Org::BouncyCastle::Asn1::X509::Time* value);

  constexpr ::Org::BouncyCastle::Asn1::X509::X509Extensions*& __get_crlEntryExtensions();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::X509Extensions*> const& __get_crlEntryExtensions() const;

  constexpr void __set_crlEntryExtensions(::Org::BouncyCastle::Asn1::X509::X509Extensions* value);

  static inline ::Org::BouncyCastle::Asn1::X509::CrlEntry* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor addr 0x1199098 size 0x138 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_UserCertificate addr 0x11991d0 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::DerInteger* get_UserCertificate();

  /// @brief Method get_RevocationDate addr 0x11991d8 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::X509::Time* get_RevocationDate();

  /// @brief Method get_Extensions addr 0x11991e0 size 0xb0 virtual false final false
  inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* get_Extensions();

  /// @brief Method ToAsn1Object addr 0x1199290 size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "CrlEntry", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CrlEntry(CrlEntry&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CrlEntry", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CrlEntry(CrlEntry const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CrlEntry();

public:
  /// @brief Field seq, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Sequence* ___seq;

  /// @brief Field userCertificate, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerInteger* ___userCertificate;

  /// @brief Field revocationDate, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::Time* ___revocationDate;

  /// @brief Field crlEntryExtensions, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::X509Extensions* ___crlEntryExtensions;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::CrlEntry, 0x30>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::CrlEntry);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::CrlEntry*, "Org.BouncyCastle.Asn1.X509", "CrlEntry");

#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Cmp/RevAnnContent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(RevAnnContent)
namespace Org::BouncyCastle::Asn1::Cmp {
class PkiStatusEncodable;
}
namespace Org::BouncyCastle::Asn1::Crmf {
class CertId;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Extensions;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class DerGeneralizedTime;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cmp {
class RevAnnContent;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cmp::RevAnnContent);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::Cmp {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Cmp.RevAnnContent
class CORDL_TYPE RevAnnContent : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_BadSinceDate)) ::Org::BouncyCastle::Asn1::DerGeneralizedTime* BadSinceDate;

  __declspec(property(get = get_CertID)) ::Org::BouncyCastle::Asn1::Crmf::CertId* CertID;

  __declspec(property(get = get_CrlDetails)) ::Org::BouncyCastle::Asn1::X509::X509Extensions* CrlDetails;

  __declspec(property(get = get_Status)) ::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable* Status;

  __declspec(property(get = get_WillBeRevokedAt)) ::Org::BouncyCastle::Asn1::DerGeneralizedTime* WillBeRevokedAt;

  /// @brief Field badSinceDate, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_badSinceDate, put = __cordl_internal_set_badSinceDate)) ::Org::BouncyCastle::Asn1::DerGeneralizedTime* badSinceDate;

  /// @brief Field certId, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_certId, put = __cordl_internal_set_certId)) ::Org::BouncyCastle::Asn1::Crmf::CertId* certId;

  /// @brief Field crlDetails, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_crlDetails, put = __cordl_internal_set_crlDetails)) ::Org::BouncyCastle::Asn1::X509::X509Extensions* crlDetails;

  /// @brief Field status, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_status, put = __cordl_internal_set_status)) ::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable* status;

  /// @brief Field willBeRevokedAt, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_willBeRevokedAt, put = __cordl_internal_set_willBeRevokedAt)) ::Org::BouncyCastle::Asn1::DerGeneralizedTime* willBeRevokedAt;

  /// @brief Method GetInstance, addr 0x22fd284, size 0x17c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Cmp::RevAnnContent* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Cmp::RevAnnContent* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x2301d24, size 0x1c8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::DerGeneralizedTime* const& __cordl_internal_get_badSinceDate() const;

  constexpr ::Org::BouncyCastle::Asn1::DerGeneralizedTime*& __cordl_internal_get_badSinceDate();

  constexpr ::Org::BouncyCastle::Asn1::Crmf::CertId* const& __cordl_internal_get_certId() const;

  constexpr ::Org::BouncyCastle::Asn1::Crmf::CertId*& __cordl_internal_get_certId();

  constexpr ::Org::BouncyCastle::Asn1::X509::X509Extensions* const& __cordl_internal_get_crlDetails() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::X509Extensions*& __cordl_internal_get_crlDetails();

  constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable* const& __cordl_internal_get_status() const;

  constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable*& __cordl_internal_get_status();

  constexpr ::Org::BouncyCastle::Asn1::DerGeneralizedTime* const& __cordl_internal_get_willBeRevokedAt() const;

  constexpr ::Org::BouncyCastle::Asn1::DerGeneralizedTime*& __cordl_internal_get_willBeRevokedAt();

  constexpr void __cordl_internal_set_badSinceDate(::Org::BouncyCastle::Asn1::DerGeneralizedTime* value);

  constexpr void __cordl_internal_set_certId(::Org::BouncyCastle::Asn1::Crmf::CertId* value);

  constexpr void __cordl_internal_set_crlDetails(::Org::BouncyCastle::Asn1::X509::X509Extensions* value);

  constexpr void __cordl_internal_set_status(::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable* value);

  constexpr void __cordl_internal_set_willBeRevokedAt(::Org::BouncyCastle::Asn1::DerGeneralizedTime* value);

  /// @brief Method .ctor, addr 0x2301ba0, size 0x15c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_BadSinceDate, addr 0x2301d14, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerGeneralizedTime* get_BadSinceDate();

  /// @brief Method get_CertID, addr 0x2301d04, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Crmf::CertId* get_CertID();

  /// @brief Method get_CrlDetails, addr 0x2301d1c, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* get_CrlDetails();

  /// @brief Method get_Status, addr 0x2301cfc, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable* get_Status();

  /// @brief Method get_WillBeRevokedAt, addr 0x2301d0c, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerGeneralizedTime* get_WillBeRevokedAt();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RevAnnContent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RevAnnContent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RevAnnContent(RevAnnContent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RevAnnContent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RevAnnContent(RevAnnContent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 49 };

  /// @brief Field status, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable* ___status;

  /// @brief Field certId, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Crmf::CertId* ___certId;

  /// @brief Field willBeRevokedAt, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerGeneralizedTime* ___willBeRevokedAt;

  /// @brief Field badSinceDate, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerGeneralizedTime* ___badSinceDate;

  /// @brief Field crlDetails, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::X509Extensions* ___crlDetails;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::Cmp::RevAnnContent, ___status) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cmp::RevAnnContent, ___certId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cmp::RevAnnContent, ___willBeRevokedAt) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cmp::RevAnnContent, ___badSinceDate) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cmp::RevAnnContent, ___crlDetails) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cmp::RevAnnContent, 0x38>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Cmp
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cmp::RevAnnContent);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cmp::RevAnnContent*, "Org.BouncyCastle.Asn1.Cmp", "RevAnnContent");

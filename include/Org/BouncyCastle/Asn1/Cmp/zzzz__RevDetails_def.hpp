#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Cmp/RevDetails.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(RevDetails)
namespace Org::BouncyCastle::Asn1::Crmf {
class CertTemplate;
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
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cmp {
class RevDetails;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cmp::RevDetails);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::Cmp {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Cmp.RevDetails
class CORDL_TYPE RevDetails : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_CertDetails)) ::Org::BouncyCastle::Asn1::Crmf::CertTemplate* CertDetails;

  __declspec(property(get = get_CrlEntryDetails)) ::Org::BouncyCastle::Asn1::X509::X509Extensions* CrlEntryDetails;

  /// @brief Field certDetails, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_certDetails, put = __cordl_internal_set_certDetails)) ::Org::BouncyCastle::Asn1::Crmf::CertTemplate* certDetails;

  /// @brief Field crlEntryDetails, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_crlEntryDetails, put = __cordl_internal_set_crlEntryDetails)) ::Org::BouncyCastle::Asn1::X509::X509Extensions* crlEntryDetails;

  /// @brief Method GetInstance, addr 0x325573c, size 0x184, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Cmp::RevDetails* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Cmp::RevDetails* New_ctor(::Org::BouncyCastle::Asn1::Crmf::CertTemplate* certDetails);

  static inline ::Org::BouncyCastle::Asn1::Cmp::RevDetails* New_ctor(::Org::BouncyCastle::Asn1::Crmf::CertTemplate* certDetails, ::Org::BouncyCastle::Asn1::X509::X509Extensions* crlEntryDetails);

  static inline ::Org::BouncyCastle::Asn1::Cmp::RevDetails* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x32558e0, size 0x154, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::Crmf::CertTemplate* const& __cordl_internal_get_certDetails() const;

  constexpr ::Org::BouncyCastle::Asn1::Crmf::CertTemplate*& __cordl_internal_get_certDetails();

  constexpr ::Org::BouncyCastle::Asn1::X509::X509Extensions* const& __cordl_internal_get_crlEntryDetails() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::X509Extensions*& __cordl_internal_get_crlEntryDetails();

  constexpr void __cordl_internal_set_certDetails(::Org::BouncyCastle::Asn1::Crmf::CertTemplate* value);

  constexpr void __cordl_internal_set_crlEntryDetails(::Org::BouncyCastle::Asn1::X509::X509Extensions* value);

  /// @brief Method .ctor, addr 0x32558c0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Crmf::CertTemplate* certDetails);

  /// @brief Method .ctor, addr 0x32558c8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Crmf::CertTemplate* certDetails, ::Org::BouncyCastle::Asn1::X509::X509Extensions* crlEntryDetails);

  /// @brief Method .ctor, addr 0x3255668, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_CertDetails, addr 0x32558d0, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Crmf::CertTemplate* get_CertDetails();

  /// @brief Method get_CrlEntryDetails, addr 0x32558d8, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* get_CrlEntryDetails();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RevDetails();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RevDetails", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RevDetails(RevDetails&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RevDetails", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RevDetails(RevDetails const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 50 };

  /// @brief Field certDetails, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Crmf::CertTemplate* ___certDetails;

  /// @brief Field crlEntryDetails, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::X509Extensions* ___crlEntryDetails;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::Cmp::RevDetails, ___certDetails) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cmp::RevDetails, ___crlEntryDetails) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cmp::RevDetails, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Cmp
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cmp::RevDetails);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cmp::RevDetails*, "Org.BouncyCastle.Asn1.Cmp", "RevDetails");

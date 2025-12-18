#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Crmf/CertId.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(CertId)
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralName;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Crmf {
class CertId;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Crmf::CertId);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::Crmf {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Crmf.CertId
class CORDL_TYPE CertId : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_Issuer)) ::Org::BouncyCastle::Asn1::X509::GeneralName* Issuer;

  __declspec(property(get = get_SerialNumber)) ::Org::BouncyCastle::Asn1::DerInteger* SerialNumber;

  /// @brief Field issuer, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_issuer, put = __cordl_internal_set_issuer)) ::Org::BouncyCastle::Asn1::X509::GeneralName* issuer;

  /// @brief Field serialNumber, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_serialNumber, put = __cordl_internal_set_serialNumber)) ::Org::BouncyCastle::Asn1::DerInteger* serialNumber;

  /// @brief Method GetInstance, addr 0x326924c, size 0x14, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Crmf::CertId* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool isExplicit);

  /// @brief Method GetInstance, addr 0x32690c8, size 0x184, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Crmf::CertId* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Crmf::CertId* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x3269270, size 0xf0, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::X509::GeneralName* const& __cordl_internal_get_issuer() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::GeneralName*& __cordl_internal_get_issuer();

  constexpr ::Org::BouncyCastle::Asn1::DerInteger* const& __cordl_internal_get_serialNumber() const;

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __cordl_internal_get_serialNumber();

  constexpr void __cordl_internal_set_issuer(::Org::BouncyCastle::Asn1::X509::GeneralName* value);

  constexpr void __cordl_internal_set_serialNumber(::Org::BouncyCastle::Asn1::DerInteger* value);

  /// @brief Method .ctor, addr 0x3269068, size 0x60, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_Issuer, addr 0x3269260, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::GeneralName* get_Issuer();

  /// @brief Method get_SerialNumber, addr 0x3269268, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerInteger* get_SerialNumber();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CertId();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CertId", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CertId(CertId&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CertId", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CertId(CertId const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 103 };

  /// @brief Field issuer, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::GeneralName* ___issuer;

  /// @brief Field serialNumber, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerInteger* ___serialNumber;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::Crmf::CertId, ___issuer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Crmf::CertId, ___serialNumber) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Crmf::CertId, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Crmf
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Crmf::CertId);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Crmf::CertId*, "Org.BouncyCastle.Asn1.Crmf", "CertId");

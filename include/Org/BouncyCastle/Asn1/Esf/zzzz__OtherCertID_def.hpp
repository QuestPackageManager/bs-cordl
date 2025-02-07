#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Esf/OtherCertID.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(OtherCertID)
namespace Org::BouncyCastle::Asn1::Esf {
class OtherHash;
}
namespace Org::BouncyCastle::Asn1::X509 {
class IssuerSerial;
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
namespace Org::BouncyCastle::Asn1::Esf {
class OtherCertID;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Esf::OtherCertID);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::Esf {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Esf.OtherCertID
class CORDL_TYPE OtherCertID : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_IssuerSerial)) ::Org::BouncyCastle::Asn1::X509::IssuerSerial* IssuerSerial;

  __declspec(property(get = get_OtherCertHash)) ::Org::BouncyCastle::Asn1::Esf::OtherHash* OtherCertHash;

  /// @brief Field issuerSerial, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_issuerSerial, put = __cordl_internal_set_issuerSerial)) ::Org::BouncyCastle::Asn1::X509::IssuerSerial* issuerSerial;

  /// @brief Field otherCertHash, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_otherCertHash, put = __cordl_internal_set_otherCertHash)) ::Org::BouncyCastle::Asn1::Esf::OtherHash* otherCertHash;

  /// @brief Method GetInstance, addr 0x231e5b4, size 0x17c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Esf::OtherCertID* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Esf::OtherCertID* New_ctor(::Org::BouncyCastle::Asn1::Esf::OtherHash* otherCertHash);

  static inline ::Org::BouncyCastle::Asn1::Esf::OtherCertID* New_ctor(::Org::BouncyCastle::Asn1::Esf::OtherHash* otherCertHash, ::Org::BouncyCastle::Asn1::X509::IssuerSerial* issuerSerial);

  static inline ::Org::BouncyCastle::Asn1::Esf::OtherCertID* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x2322918, size 0x12c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::X509::IssuerSerial* const& __cordl_internal_get_issuerSerial() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::IssuerSerial*& __cordl_internal_get_issuerSerial();

  constexpr ::Org::BouncyCastle::Asn1::Esf::OtherHash* const& __cordl_internal_get_otherCertHash() const;

  constexpr ::Org::BouncyCastle::Asn1::Esf::OtherHash*& __cordl_internal_get_otherCertHash();

  constexpr void __cordl_internal_set_issuerSerial(::Org::BouncyCastle::Asn1::X509::IssuerSerial* value);

  constexpr void __cordl_internal_set_otherCertHash(::Org::BouncyCastle::Asn1::Esf::OtherHash* value);

  /// @brief Method .ctor, addr 0x2322888, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Esf::OtherHash* otherCertHash);

  /// @brief Method .ctor, addr 0x2322890, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Esf::OtherHash* otherCertHash, ::Org::BouncyCastle::Asn1::X509::IssuerSerial* issuerSerial);

  /// @brief Method .ctor, addr 0x23226cc, size 0x1bc, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_IssuerSerial, addr 0x2322910, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::IssuerSerial* get_IssuerSerial();

  /// @brief Method get_OtherCertHash, addr 0x2322908, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Esf::OtherHash* get_OtherCertHash();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OtherCertID();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OtherCertID", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OtherCertID(OtherCertID&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OtherCertID", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OtherCertID(OtherCertID const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 148 };

  /// @brief Field otherCertHash, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Esf::OtherHash* ___otherCertHash;

  /// @brief Field issuerSerial, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::IssuerSerial* ___issuerSerial;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::Esf::OtherCertID, ___otherCertHash) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Esf::OtherCertID, ___issuerSerial) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Esf::OtherCertID, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Esf
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Esf::OtherCertID);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Esf::OtherCertID*, "Org.BouncyCastle.Asn1.Esf", "OtherCertID");

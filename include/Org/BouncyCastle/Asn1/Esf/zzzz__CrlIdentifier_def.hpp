#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Esf/CrlIdentifier.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(CrlIdentifier)
namespace Org::BouncyCastle::Asn1::X509 {
class X509Name;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1 {
class DerUtcTime;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace System {
struct DateTime;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Esf {
class CrlIdentifier;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Esf::CrlIdentifier);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::Esf {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Esf.CrlIdentifier
class CORDL_TYPE CrlIdentifier : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_CrlIssuedTime)) ::System::DateTime CrlIssuedTime;

  __declspec(property(get = get_CrlIssuer)) ::Org::BouncyCastle::Asn1::X509::X509Name* CrlIssuer;

  __declspec(property(get = get_CrlNumber)) ::Org::BouncyCastle::Math::BigInteger* CrlNumber;

  /// @brief Field crlIssuedTime, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_crlIssuedTime, put = __cordl_internal_set_crlIssuedTime)) ::Org::BouncyCastle::Asn1::DerUtcTime* crlIssuedTime;

  /// @brief Field crlIssuer, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_crlIssuer, put = __cordl_internal_set_crlIssuer)) ::Org::BouncyCastle::Asn1::X509::X509Name* crlIssuer;

  /// @brief Field crlNumber, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_crlNumber, put = __cordl_internal_set_crlNumber)) ::Org::BouncyCastle::Asn1::DerInteger* crlNumber;

  /// @brief Method GetInstance, addr 0x231ee20, size 0x17c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Esf::CrlIdentifier* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Esf::CrlIdentifier* New_ctor(::Org::BouncyCastle::Asn1::X509::X509Name* crlIssuer, ::System::DateTime crlIssuedTime);

  static inline ::Org::BouncyCastle::Asn1::Esf::CrlIdentifier* New_ctor(::Org::BouncyCastle::Asn1::X509::X509Name* crlIssuer, ::System::DateTime crlIssuedTime,
                                                                        ::Org::BouncyCastle::Math::BigInteger* crlNumber);

  static inline ::Org::BouncyCastle::Asn1::Esf::CrlIdentifier* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x231f2f0, size 0x188, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::DerUtcTime* const& __cordl_internal_get_crlIssuedTime() const;

  constexpr ::Org::BouncyCastle::Asn1::DerUtcTime*& __cordl_internal_get_crlIssuedTime();

  constexpr ::Org::BouncyCastle::Asn1::X509::X509Name* const& __cordl_internal_get_crlIssuer() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::X509Name*& __cordl_internal_get_crlIssuer();

  constexpr ::Org::BouncyCastle::Asn1::DerInteger* const& __cordl_internal_get_crlNumber() const;

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __cordl_internal_get_crlNumber();

  constexpr void __cordl_internal_set_crlIssuedTime(::Org::BouncyCastle::Asn1::DerUtcTime* value);

  constexpr void __cordl_internal_set_crlIssuer(::Org::BouncyCastle::Asn1::X509::X509Name* value);

  constexpr void __cordl_internal_set_crlNumber(::Org::BouncyCastle::Asn1::DerInteger* value);

  /// @brief Method .ctor, addr 0x231f1a4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::X509Name* crlIssuer, ::System::DateTime crlIssuedTime);

  /// @brief Method .ctor, addr 0x231f1ac, size 0x110, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::X509Name* crlIssuer, ::System::DateTime crlIssuedTime, ::Org::BouncyCastle::Math::BigInteger* crlNumber);

  /// @brief Method .ctor, addr 0x231ef9c, size 0x208, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_CrlIssuedTime, addr 0x231f2c4, size 0x1c, virtual false, abstract: false, final false
  inline ::System::DateTime get_CrlIssuedTime();

  /// @brief Method get_CrlIssuer, addr 0x231f2bc, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::X509Name* get_CrlIssuer();

  /// @brief Method get_CrlNumber, addr 0x231f2e0, size 0x10, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_CrlNumber();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CrlIdentifier();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CrlIdentifier", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CrlIdentifier(CrlIdentifier&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CrlIdentifier", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CrlIdentifier(CrlIdentifier const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 140 };

  /// @brief Field crlIssuer, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::X509Name* ___crlIssuer;

  /// @brief Field crlIssuedTime, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerUtcTime* ___crlIssuedTime;

  /// @brief Field crlNumber, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerInteger* ___crlNumber;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::Esf::CrlIdentifier, ___crlIssuer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Esf::CrlIdentifier, ___crlIssuedTime) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Esf::CrlIdentifier, ___crlNumber) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Esf::CrlIdentifier, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Esf
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Esf::CrlIdentifier);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Esf::CrlIdentifier*, "Org.BouncyCastle.Asn1.Esf", "CrlIdentifier");

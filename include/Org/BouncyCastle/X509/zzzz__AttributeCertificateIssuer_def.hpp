#pragma once
// IWYU pragma private; include "Org/BouncyCastle/X509/AttributeCertificateIssuer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/X509/Store/zzzz__IX509Selector_def.hpp"
#include "System/zzzz__ICloneable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AttributeCertificateIssuer)
namespace Org::BouncyCastle::Asn1::X509 {
class AttCertIssuer;
}
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralNames;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Name;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::X509 {
class AttributeCertificateIssuer;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::X509::AttributeCertificateIssuer);
// Dependencies Org.BouncyCastle.X509.Store.IX509Selector, System.ICloneable, System.Object
namespace Org::BouncyCastle::X509 {
// Is value type: false
// CS Name: Org.BouncyCastle.X509.AttributeCertificateIssuer
class CORDL_TYPE AttributeCertificateIssuer : public ::System::Object {
public:
  // Declarations
  /// @brief Field form, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_form, put = __cordl_internal_set_form)) ::Org::BouncyCastle::Asn1::Asn1Encodable* form;

  /// @brief Convert operator to "::Org::BouncyCastle::X509::Store::IX509Selector"
  constexpr operator ::Org::BouncyCastle::X509::Store::IX509Selector*() noexcept;

  /// @brief Convert operator to "::System::ICloneable"
  constexpr operator ::System::ICloneable*() noexcept;

  /// @brief Method Clone, addr 0x25ee8e4, size 0x7c, virtual true, abstract: false, final true
  inline ::System::Object* Clone();

  /// @brief Method Equals, addr 0x25eeaec, size 0xa8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x25eeb94, size 0x1c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetNames, addr 0x25ee3a0, size 0x1fc, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetNames();

  /// @brief Method GetPrincipals, addr 0x25ee59c, size 0x1c0, virtual false, abstract: false, final false
  inline ::ArrayW<::Org::BouncyCastle::Asn1::X509::X509Name*, ::Array<::Org::BouncyCastle::Asn1::X509::X509Name*>*> GetPrincipals();

  /// @brief Method Match, addr 0x25eebb0, size 0x8c, virtual true, abstract: false, final true
  inline bool Match(::System::Object* obj);

  /// @brief Method Match, addr 0x25ee960, size 0x18c, virtual false, abstract: false, final false
  inline bool Match(::Org::BouncyCastle::X509::X509Certificate* x509Cert);

  /// @brief Method MatchesDN, addr 0x25ee75c, size 0x188, virtual false, abstract: false, final false
  inline bool MatchesDN(::Org::BouncyCastle::Asn1::X509::X509Name* subject, ::Org::BouncyCastle::Asn1::X509::GeneralNames* targets);

  static inline ::Org::BouncyCastle::X509::AttributeCertificateIssuer* New_ctor(::Org::BouncyCastle::Asn1::X509::AttCertIssuer* issuer);

  static inline ::Org::BouncyCastle::X509::AttributeCertificateIssuer* New_ctor(::Org::BouncyCastle::Asn1::X509::X509Name* principal);

  constexpr ::Org::BouncyCastle::Asn1::Asn1Encodable* const& __cordl_internal_get_form() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Encodable*& __cordl_internal_get_form();

  constexpr void __cordl_internal_set_form(::Org::BouncyCastle::Asn1::Asn1Encodable* value);

  /// @brief Method .ctor, addr 0x25ee298, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::AttCertIssuer* issuer);

  /// @brief Method .ctor, addr 0x25ee2cc, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::X509Name* principal);

  /// @brief Convert to "::Org::BouncyCastle::X509::Store::IX509Selector"
  constexpr ::Org::BouncyCastle::X509::Store::IX509Selector* i___Org__BouncyCastle__X509__Store__IX509Selector() noexcept;

  /// @brief Convert to "::System::ICloneable"
  constexpr ::System::ICloneable* i___System__ICloneable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AttributeCertificateIssuer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AttributeCertificateIssuer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AttributeCertificateIssuer(AttributeCertificateIssuer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AttributeCertificateIssuer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AttributeCertificateIssuer(AttributeCertificateIssuer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1853 };

  /// @brief Field form, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Encodable* ___form;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::X509::AttributeCertificateIssuer, ___form) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::X509::AttributeCertificateIssuer, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::X509
NEED_NO_BOX(::Org::BouncyCastle::X509::AttributeCertificateIssuer);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::X509::AttributeCertificateIssuer*, "Org.BouncyCastle.X509", "AttributeCertificateIssuer");

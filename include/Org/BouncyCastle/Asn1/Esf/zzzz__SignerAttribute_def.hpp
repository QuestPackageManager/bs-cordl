#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Esf/SignerAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(SignerAttribute)
namespace Org::BouncyCastle::Asn1::X509 {
class AttributeCertificate;
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
class SignerAttribute;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Esf::SignerAttribute);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::Esf {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Esf.SignerAttribute
class CORDL_TYPE SignerAttribute : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_CertifiedAttributes)) ::Org::BouncyCastle::Asn1::X509::AttributeCertificate* CertifiedAttributes;

  __declspec(property(get = get_ClaimedAttributes)) ::Org::BouncyCastle::Asn1::Asn1Sequence* ClaimedAttributes;

  /// @brief Field certifiedAttributes, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_certifiedAttributes, put = __cordl_internal_set_certifiedAttributes)) ::Org::BouncyCastle::Asn1::X509::AttributeCertificate* certifiedAttributes;

  /// @brief Field claimedAttributes, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_claimedAttributes, put = __cordl_internal_set_claimedAttributes)) ::Org::BouncyCastle::Asn1::Asn1Sequence* claimedAttributes;

  /// @brief Method GetInstance, addr 0x2325efc, size 0x14c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Esf::SignerAttribute* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Esf::SignerAttribute* New_ctor(::Org::BouncyCastle::Asn1::X509::AttributeCertificate* certifiedAttributes);

  static inline ::Org::BouncyCastle::Asn1::Esf::SignerAttribute* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* claimedAttributes);

  static inline ::Org::BouncyCastle::Asn1::Esf::SignerAttribute* New_ctor(::System::Object* obj);

  /// @brief Method ToAsn1Object, addr 0x2326218, size 0xf4, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::X509::AttributeCertificate* const& __cordl_internal_get_certifiedAttributes() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::AttributeCertificate*& __cordl_internal_get_certifiedAttributes();

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence* const& __cordl_internal_get_claimedAttributes() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& __cordl_internal_get_claimedAttributes();

  constexpr void __cordl_internal_set_certifiedAttributes(::Org::BouncyCastle::Asn1::X509::AttributeCertificate* value);

  constexpr void __cordl_internal_set_claimedAttributes(::Org::BouncyCastle::Asn1::Asn1Sequence* value);

  /// @brief Method .ctor, addr 0x23261e0, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::AttributeCertificate* certifiedAttributes);

  /// @brief Method .ctor, addr 0x23261b8, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* claimedAttributes);

  /// @brief Method .ctor, addr 0x2326048, size 0x170, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* obj);

  /// @brief Method get_CertifiedAttributes, addr 0x2326210, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::AttributeCertificate* get_CertifiedAttributes();

  /// @brief Method get_ClaimedAttributes, addr 0x2326208, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Sequence* get_ClaimedAttributes();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SignerAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SignerAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SignerAttribute(SignerAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SignerAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SignerAttribute(SignerAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 157 };

  /// @brief Field claimedAttributes, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Sequence* ___claimedAttributes;

  /// @brief Field certifiedAttributes, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::AttributeCertificate* ___certifiedAttributes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::Esf::SignerAttribute, ___claimedAttributes) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Esf::SignerAttribute, ___certifiedAttributes) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Esf::SignerAttribute, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Esf
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Esf::SignerAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Esf::SignerAttribute*, "Org.BouncyCastle.Asn1.Esf", "SignerAttribute");

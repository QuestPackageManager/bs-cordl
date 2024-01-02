#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(SignerAttribute)
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AttributeCertificate;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Esf {
class SignerAttribute;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Esf::SignerAttribute);
// Type: Org.BouncyCastle.Asn1.Esf::SignerAttribute
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Esf {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(157))
// CS Name: ::Org.BouncyCastle.Asn1.Esf::SignerAttribute*
class CORDL_TYPE SignerAttribute : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field claimedAttributes, offset 0x10, size 0x8
  __declspec(property(get = __get_claimedAttributes, put = __set_claimedAttributes))::Org::BouncyCastle::Asn1::Asn1Sequence* claimedAttributes;

  /// @brief Field certifiedAttributes, offset 0x18, size 0x8
  __declspec(property(get = __get_certifiedAttributes, put = __set_certifiedAttributes))::Org::BouncyCastle::Asn1::X509::AttributeCertificate* certifiedAttributes;

  __declspec(property(get = get_ClaimedAttributes))::Org::BouncyCastle::Asn1::Asn1Sequence* ClaimedAttributes;

  __declspec(property(get = get_CertifiedAttributes))::Org::BouncyCastle::Asn1::X509::AttributeCertificate* CertifiedAttributes;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& __get_claimedAttributes();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Sequence*> const& __get_claimedAttributes() const;

  constexpr void __set_claimedAttributes(::Org::BouncyCastle::Asn1::Asn1Sequence* value);

  constexpr ::Org::BouncyCastle::Asn1::X509::AttributeCertificate*& __get_certifiedAttributes();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AttributeCertificate*> const& __get_certifiedAttributes() const;

  constexpr void __set_certifiedAttributes(::Org::BouncyCastle::Asn1::X509::AttributeCertificate* value);

  /// @brief Method GetInstance, addr 0xe9872c, size 0x154, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Esf::SignerAttribute* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Esf::SignerAttribute* New_ctor(::System::Object* obj);

  /// @brief Method .ctor, addr 0xe98880, size 0x174, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Esf::SignerAttribute* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* claimedAttributes);

  /// @brief Method .ctor, addr 0xe989f4, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* claimedAttributes);

  static inline ::Org::BouncyCastle::Asn1::Esf::SignerAttribute* New_ctor(::Org::BouncyCastle::Asn1::X509::AttributeCertificate* certifiedAttributes);

  /// @brief Method .ctor, addr 0xe98a1c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::AttributeCertificate* certifiedAttributes);

  /// @brief Method get_ClaimedAttributes, addr 0xe98a44, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Sequence* get_ClaimedAttributes();

  /// @brief Method get_CertifiedAttributes, addr 0xe98a4c, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::AttributeCertificate* get_CertifiedAttributes();

  /// @brief Method ToAsn1Object, addr 0xe98a54, size 0x100, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "SignerAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SignerAttribute(SignerAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SignerAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SignerAttribute(SignerAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SignerAttribute();

public:
  /// @brief Field claimedAttributes, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Sequence* ___claimedAttributes;

  /// @brief Field certifiedAttributes, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::AttributeCertificate* ___certifiedAttributes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Esf::SignerAttribute, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Esf::SignerAttribute, ___claimedAttributes) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Esf::SignerAttribute, ___certifiedAttributes) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::Esf
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Esf::SignerAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Esf::SignerAttribute*, "Org.BouncyCastle.Asn1.Esf", "SignerAttribute");

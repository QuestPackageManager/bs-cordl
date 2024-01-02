#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(SignaturePolicyIdentifier)
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class IAsn1Choice;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1::Esf {
class SignaturePolicyId;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Esf {
class SignaturePolicyIdentifier;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Esf::SignaturePolicyIdentifier);
// Type: Org.BouncyCastle.Asn1.Esf::SignaturePolicyIdentifier
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Esf {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(156))
// CS Name: ::Org.BouncyCastle.Asn1.Esf::SignaturePolicyIdentifier*
class CORDL_TYPE SignaturePolicyIdentifier : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field sigPolicy, offset 0x10, size 0x8
  __declspec(property(get = __get_sigPolicy, put = __set_sigPolicy))::Org::BouncyCastle::Asn1::Esf::SignaturePolicyId* sigPolicy;

  __declspec(property(get = get_SignaturePolicyId))::Org::BouncyCastle::Asn1::Esf::SignaturePolicyId* SignaturePolicyId;

  /// @brief Convert operator to "::Org::BouncyCastle::Asn1::IAsn1Choice"
  constexpr operator ::Org::BouncyCastle::Asn1::IAsn1Choice*() noexcept;

  constexpr ::Org::BouncyCastle::Asn1::Esf::SignaturePolicyId*& __get_sigPolicy();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Esf::SignaturePolicyId*> const& __get_sigPolicy() const;

  constexpr void __set_sigPolicy(::Org::BouncyCastle::Asn1::Esf::SignaturePolicyId* value);

  /// @brief Method GetInstance, addr 0xe9843c, size 0x1dc, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Esf::SignaturePolicyIdentifier* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Esf::SignaturePolicyIdentifier* New_ctor();

  /// @brief Method .ctor, addr 0xe98690, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Org::BouncyCastle::Asn1::Esf::SignaturePolicyIdentifier* New_ctor(::Org::BouncyCastle::Asn1::Esf::SignaturePolicyId* signaturePolicyId);

  /// @brief Method .ctor, addr 0xe98618, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Esf::SignaturePolicyId* signaturePolicyId);

  /// @brief Method get_SignaturePolicyId, addr 0xe986ac, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Esf::SignaturePolicyId* get_SignaturePolicyId();

  /// @brief Method ToAsn1Object, addr 0xe986b4, size 0x78, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "SignaturePolicyIdentifier", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SignaturePolicyIdentifier(SignaturePolicyIdentifier&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SignaturePolicyIdentifier", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SignaturePolicyIdentifier(SignaturePolicyIdentifier const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SignaturePolicyIdentifier();

public:
  /// @brief Field sigPolicy, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Esf::SignaturePolicyId* ___sigPolicy;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Esf::SignaturePolicyIdentifier, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Esf::SignaturePolicyIdentifier, ___sigPolicy) == 0x10, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::Esf
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Esf::SignaturePolicyIdentifier);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Esf::SignaturePolicyIdentifier*, "Org.BouncyCastle.Asn1.Esf", "SignaturePolicyIdentifier");

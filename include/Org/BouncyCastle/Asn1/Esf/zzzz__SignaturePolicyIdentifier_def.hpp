#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Esf/SignaturePolicyIdentifier.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(SignaturePolicyIdentifier)
namespace Org::BouncyCastle::Asn1::Esf {
class SignaturePolicyId;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class IAsn1Choice;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Esf {
class SignaturePolicyIdentifier;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Esf::SignaturePolicyIdentifier);
// Type: Org.BouncyCastle.Asn1.Esf::SignaturePolicyIdentifier
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Esf {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Asn1.Esf::SignaturePolicyIdentifier*
class CORDL_TYPE SignaturePolicyIdentifier : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_SignaturePolicyId)) ::Org::BouncyCastle::Asn1::Esf::SignaturePolicyId* SignaturePolicyId;

  /// @brief Field sigPolicy, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_sigPolicy, put = __cordl_internal_set_sigPolicy)) ::Org::BouncyCastle::Asn1::Esf::SignaturePolicyId* sigPolicy;

  /// @brief Convert operator to "::Org::BouncyCastle::Asn1::IAsn1Choice"
  constexpr operator ::Org::BouncyCastle::Asn1::IAsn1Choice*() noexcept;

  /// @brief Method GetInstance, addr 0x22e54ac, size 0x1cc, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Esf::SignaturePolicyIdentifier* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Esf::SignaturePolicyIdentifier* New_ctor();

  static inline ::Org::BouncyCastle::Asn1::Esf::SignaturePolicyIdentifier* New_ctor(::Org::BouncyCastle::Asn1::Esf::SignaturePolicyId* signaturePolicyId);

  /// @brief Method ToAsn1Object, addr 0x22e5710, size 0x78, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::Esf::SignaturePolicyId*& __cordl_internal_get_sigPolicy();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Esf::SignaturePolicyId*> const& __cordl_internal_get_sigPolicy() const;

  constexpr void __cordl_internal_set_sigPolicy(::Org::BouncyCastle::Asn1::Esf::SignaturePolicyId* value);

  /// @brief Method .ctor, addr 0x22e56ec, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x22e5678, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Esf::SignaturePolicyId* signaturePolicyId);

  /// @brief Method get_SignaturePolicyId, addr 0x22e5708, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Esf::SignaturePolicyId* get_SignaturePolicyId();

  /// @brief Convert to "::Org::BouncyCastle::Asn1::IAsn1Choice"
  constexpr ::Org::BouncyCastle::Asn1::IAsn1Choice* i___Org__BouncyCastle__Asn1__IAsn1Choice() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SignaturePolicyIdentifier();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SignaturePolicyIdentifier", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SignaturePolicyIdentifier(SignaturePolicyIdentifier&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SignaturePolicyIdentifier", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SignaturePolicyIdentifier(SignaturePolicyIdentifier const&) = delete;

  /// @brief Field sigPolicy, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Esf::SignaturePolicyId* ___sigPolicy;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 156 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Esf::SignaturePolicyIdentifier, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Esf::SignaturePolicyIdentifier, ___sigPolicy) == 0x10, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::Esf
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Esf::SignaturePolicyIdentifier);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Esf::SignaturePolicyIdentifier*, "Org.BouncyCastle.Asn1.Esf", "SignaturePolicyIdentifier");

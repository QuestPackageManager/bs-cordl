#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/X509/zzzz__AttributeX509_def.hpp"
CORDL_MODULE_EXPORT(SmimeCapabilitiesAttribute)
namespace Org::BouncyCastle::Asn1::Smime {
class SmimeCapabilityVector;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Smime {
class SmimeCapabilitiesAttribute;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Smime::SmimeCapabilitiesAttribute);
// Type: Org.BouncyCastle.Asn1.Smime::SmimeCapabilitiesAttribute
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Smime {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Asn1.Smime::SmimeCapabilitiesAttribute*
class CORDL_TYPE SmimeCapabilitiesAttribute : public ::Org::BouncyCastle::Asn1::X509::AttributeX509 {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Asn1::Smime::SmimeCapabilitiesAttribute* New_ctor(::Org::BouncyCastle::Asn1::Smime::SmimeCapabilityVector* capabilities);

  /// @brief Method .ctor, addr 0x12d4e14, size 0xe4, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Smime::SmimeCapabilityVector* capabilities);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SmimeCapabilitiesAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SmimeCapabilitiesAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SmimeCapabilitiesAttribute(SmimeCapabilitiesAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SmimeCapabilitiesAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SmimeCapabilitiesAttribute(SmimeCapabilitiesAttribute const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Smime::SmimeCapabilitiesAttribute, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Smime
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Smime::SmimeCapabilitiesAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Smime::SmimeCapabilitiesAttribute*, "Org.BouncyCastle.Asn1.Smime", "SmimeCapabilitiesAttribute");

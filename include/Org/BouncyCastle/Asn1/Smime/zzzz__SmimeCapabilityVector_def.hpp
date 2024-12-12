#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Smime/SmimeCapabilityVector.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SmimeCapabilityVector)
namespace Org::BouncyCastle::Asn1 {
class Asn1EncodableVector;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Smime {
class SmimeCapabilityVector;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Smime::SmimeCapabilityVector);
// Dependencies System.Object
namespace Org::BouncyCastle::Asn1::Smime {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Smime.SmimeCapabilityVector
class CORDL_TYPE SmimeCapabilityVector : public ::System::Object {
public:
  // Declarations
  /// @brief Field capabilities, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_capabilities, put = __cordl_internal_set_capabilities)) ::Org::BouncyCastle::Asn1::Asn1EncodableVector* capabilities;

  /// @brief Method AddCapability, addr 0x24f40a4, size 0x7c, virtual false, abstract: false, final false
  inline void AddCapability(::Org::BouncyCastle::Asn1::DerObjectIdentifier* capability);

  /// @brief Method AddCapability, addr 0x24f4250, size 0x104, virtual false, abstract: false, final false
  inline void AddCapability(::Org::BouncyCastle::Asn1::DerObjectIdentifier* capability, ::Org::BouncyCastle::Asn1::Asn1Encodable* parameters);

  /// @brief Method AddCapability, addr 0x24f4120, size 0x130, virtual false, abstract: false, final false
  inline void AddCapability(::Org::BouncyCastle::Asn1::DerObjectIdentifier* capability, int32_t value);

  static inline ::Org::BouncyCastle::Asn1::Smime::SmimeCapabilityVector* New_ctor();

  /// @brief Method ToAsn1EncodableVector, addr 0x24f4354, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1EncodableVector* ToAsn1EncodableVector();

  constexpr ::Org::BouncyCastle::Asn1::Asn1EncodableVector* const& __cordl_internal_get_capabilities() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1EncodableVector*& __cordl_internal_get_capabilities();

  constexpr void __cordl_internal_set_capabilities(::Org::BouncyCastle::Asn1::Asn1EncodableVector* value);

  /// @brief Method .ctor, addr 0x24f435c, size 0x60, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SmimeCapabilityVector();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SmimeCapabilityVector", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SmimeCapabilityVector(SmimeCapabilityVector&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SmimeCapabilityVector", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SmimeCapabilityVector(SmimeCapabilityVector const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 296 };

  /// @brief Field capabilities, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1EncodableVector* ___capabilities;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::Smime::SmimeCapabilityVector, ___capabilities) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Smime::SmimeCapabilityVector, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Smime
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Smime::SmimeCapabilityVector);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Smime::SmimeCapabilityVector*, "Org.BouncyCastle.Asn1.Smime", "SmimeCapabilityVector");

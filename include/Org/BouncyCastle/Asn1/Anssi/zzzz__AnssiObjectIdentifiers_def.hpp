#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(AnssiObjectIdentifiers)
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Anssi {
class AnssiObjectIdentifiers;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Anssi::AnssiObjectIdentifiers);
// Type: Org.BouncyCastle.Asn1.Anssi::AnssiObjectIdentifiers
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Anssi {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4))
// CS Name: ::Org.BouncyCastle.Asn1.Anssi::AnssiObjectIdentifiers*
class CORDL_TYPE AnssiObjectIdentifiers : public ::System::Object {
public:
  // Declarations
  /// @brief Field FRP256v1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_FRP256v1, put = setStaticF_FRP256v1))::Org::BouncyCastle::Asn1::DerObjectIdentifier* FRP256v1;

  static inline void setStaticF_FRP256v1(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_FRP256v1();

  static inline ::Org::BouncyCastle::Asn1::Anssi::AnssiObjectIdentifiers* New_ctor();

  /// @brief Method .ctor addr 0xe62a6c size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "AnssiObjectIdentifiers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AnssiObjectIdentifiers(AnssiObjectIdentifiers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AnssiObjectIdentifiers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AnssiObjectIdentifiers(AnssiObjectIdentifiers const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AnssiObjectIdentifiers();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Anssi::AnssiObjectIdentifiers, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Anssi
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Anssi::AnssiObjectIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Anssi::AnssiObjectIdentifiers*, "Org.BouncyCastle.Asn1.Anssi", "AnssiObjectIdentifiers");

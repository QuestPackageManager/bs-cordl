#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__DerSequence_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(BerSequence)
namespace Org::BouncyCastle::Asn1 {
class Asn1EncodableVector;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class DerOutputStream;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class BerSequence;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::BerSequence);
// Type: Org.BouncyCastle.Asn1::BerSequence
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(487))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(488))
// CS Name: ::Org.BouncyCastle.Asn1::BerSequence*
class CORDL_TYPE BerSequence : public ::Org::BouncyCastle::Asn1::DerSequence {
public:
  // Declarations
  /// @brief Field Empty, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Empty, put = setStaticF_Empty))::Org::BouncyCastle::Asn1::BerSequence* Empty;

  static inline void setStaticF_Empty(::Org::BouncyCastle::Asn1::BerSequence* value);

  static inline ::Org::BouncyCastle::Asn1::BerSequence* getStaticF_Empty();

  /// @brief Method FromVector addr 0x11ba548 size 0x8c virtual false final false
  static inline ::Org::BouncyCastle::Asn1::BerSequence* FromVector(::Org::BouncyCastle::Asn1::Asn1EncodableVector* elementVector);

  static inline ::Org::BouncyCastle::Asn1::BerSequence* New_ctor();

  /// @brief Method .ctor addr 0x11bde58 size 0x54 virtual false final false
  inline void _ctor();

  static inline ::Org::BouncyCastle::Asn1::BerSequence* New_ctor(::Org::BouncyCastle::Asn1::Asn1Encodable* element);

  /// @brief Method .ctor addr 0x11b83c8 size 0x64 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Encodable* element);

  static inline ::Org::BouncyCastle::Asn1::BerSequence* New_ctor(::ArrayW<::Org::BouncyCastle::Asn1::Asn1Encodable*, ::Array<::Org::BouncyCastle::Asn1::Asn1Encodable*>*> elements);

  /// @brief Method .ctor addr 0x11bdeac size 0x64 virtual false final false
  inline void _ctor(::ArrayW<::Org::BouncyCastle::Asn1::Asn1Encodable*, ::Array<::Org::BouncyCastle::Asn1::Asn1Encodable*>*> elements);

  static inline ::Org::BouncyCastle::Asn1::BerSequence* New_ctor(::Org::BouncyCastle::Asn1::Asn1EncodableVector* elementVector);

  /// @brief Method .ctor addr 0x11bddf4 size 0x64 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1EncodableVector* elementVector);

  /// @brief Method Encode addr 0x11bdf10 size 0x3ec virtual true final false
  inline void Encode(::Org::BouncyCastle::Asn1::DerOutputStream* derOut);

  // Ctor Parameters [CppParam { name: "", ty: "BerSequence", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BerSequence(BerSequence&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BerSequence", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BerSequence(BerSequence const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BerSequence();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::BerSequence, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1
NEED_NO_BOX(::Org::BouncyCastle::Asn1::BerSequence);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::BerSequence*, "Org.BouncyCastle.Asn1", "BerSequence");

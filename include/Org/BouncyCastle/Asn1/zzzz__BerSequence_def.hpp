#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/BerSequence.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__DerSequence_def.hpp"
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
// Dependencies Org.BouncyCastle.Asn1.DerSequence
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.BerSequence
class CORDL_TYPE BerSequence : public ::Org::BouncyCastle::Asn1::DerSequence {
public:
  // Declarations
  /// @brief Field Empty, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Empty, put = setStaticF_Empty)) ::Org::BouncyCastle::Asn1::BerSequence* Empty;

  /// @brief Method Encode, addr 0x2635150, size 0x3f4, virtual true, abstract: false, final false
  inline void Encode(::Org::BouncyCastle::Asn1::DerOutputStream* derOut);

  /// @brief Method FromVector, addr 0x26317c4, size 0x88, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::BerSequence* FromVector(::Org::BouncyCastle::Asn1::Asn1EncodableVector* elementVector);

  static inline ::Org::BouncyCastle::Asn1::BerSequence* New_ctor();

  static inline ::Org::BouncyCastle::Asn1::BerSequence* New_ctor(::Org::BouncyCastle::Asn1::Asn1Encodable* element);

  static inline ::Org::BouncyCastle::Asn1::BerSequence* New_ctor(::Org::BouncyCastle::Asn1::Asn1EncodableVector* elementVector);

  static inline ::Org::BouncyCastle::Asn1::BerSequence* New_ctor(::ArrayW<::Org::BouncyCastle::Asn1::Asn1Encodable*, ::Array<::Org::BouncyCastle::Asn1::Asn1Encodable*>*> elements);

  /// @brief Method .ctor, addr 0x2635098, size 0x54, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x262f704, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Encodable* element);

  /// @brief Method .ctor, addr 0x2635034, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1EncodableVector* elementVector);

  /// @brief Method .ctor, addr 0x26350ec, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::Org::BouncyCastle::Asn1::Asn1Encodable*, ::Array<::Org::BouncyCastle::Asn1::Asn1Encodable*>*> elements);

  static inline ::Org::BouncyCastle::Asn1::BerSequence* getStaticF_Empty();

  static inline void setStaticF_Empty(::Org::BouncyCastle::Asn1::BerSequence* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BerSequence();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BerSequence", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BerSequence(BerSequence&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BerSequence", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BerSequence(BerSequence const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 488 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::BerSequence, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1
NEED_NO_BOX(::Org::BouncyCastle::Asn1::BerSequence);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::BerSequence*, "Org.BouncyCastle.Asn1", "BerSequence");

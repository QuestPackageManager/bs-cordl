#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/DerSequence.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(DerSequence)
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
class DerSequence;
}
// Write type traits
MARK_REF_T(::Org::BouncyCastle::Asn1::DerSequence*);
DEFINE_IL2CPP_CLASS(::Org::BouncyCastle::Asn1::DerSequence*, "Org.BouncyCastle.Asn1", "DerSequence");
// Dependencies Org.BouncyCastle.Asn1.Asn1Sequence
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.DerSequence
class CORDL_TYPE DerSequence : public ::Org::BouncyCastle::Asn1::Asn1Sequence {
public:
  // Declarations
  /// @brief Field Empty, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Empty, put = setStaticF_Empty)) ::Org::BouncyCastle::Asn1::DerSequence* Empty;

  /// @brief Method Encode, addr 0x3688af4, size 0x390, virtual true, abstract: false, final false
  inline void Encode(::Org::BouncyCastle::Asn1::DerOutputStream* derOut);

  /// @brief Method FromVector, addr 0x36811f4, size 0x90, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::DerSequence* FromVector(::Org::BouncyCastle::Asn1::Asn1EncodableVector* elementVector);

  static inline ::Org::BouncyCastle::Asn1::DerSequence* New_ctor();

  static inline ::Org::BouncyCastle::Asn1::DerSequence* New_ctor(::Org::BouncyCastle::Asn1::Asn1Encodable* element);

  static inline ::Org::BouncyCastle::Asn1::DerSequence* New_ctor(::Org::BouncyCastle::Asn1::Asn1EncodableVector* elementVector);

  static inline ::Org::BouncyCastle::Asn1::DerSequence* New_ctor(::ArrayW<::Org::BouncyCastle::Asn1::Asn1Encodable*> elements);

  /// @brief Method .ctor, addr 0x3688af0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3683780, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Encodable* element);

  /// @brief Method .ctor, addr 0x36763fc, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1EncodableVector* elementVector);

  /// @brief Method .ctor, addr 0x3675cd0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::Org::BouncyCastle::Asn1::Asn1Encodable*> elements);

  static inline ::Org::BouncyCastle::Asn1::DerSequence* getStaticF_Empty();

  static inline void setStaticF_Empty(::Org::BouncyCastle::Asn1::DerSequence* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DerSequence();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DerSequence", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DerSequence(DerSequence&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DerSequence", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DerSequence(DerSequence const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 487 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Org::BouncyCastle::Asn1::DerSequence) == 0x18, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1

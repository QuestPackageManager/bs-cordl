#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/BerSet.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__DerSet_def.hpp"
CORDL_MODULE_EXPORT(BerSet)
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
class BerSet;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::BerSet);
// Dependencies Org.BouncyCastle.Asn1.DerSet
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.BerSet
class CORDL_TYPE BerSet : public ::Org::BouncyCastle::Asn1::DerSet {
public:
  // Declarations
  /// @brief Field Empty, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Empty, put = setStaticF_Empty)) ::Org::BouncyCastle::Asn1::BerSet* Empty;

  /// @brief Method Encode, addr 0x359042c, size 0x3d4, virtual true, abstract: false, final false
  inline void Encode(::Org::BouncyCastle::Asn1::DerOutputStream* derOut);

  /// @brief Method FromVector, addr 0x3590154, size 0x8c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::BerSet* FromVector(::Org::BouncyCastle::Asn1::Asn1EncodableVector* elementVector);

  /// @brief Method FromVector, addr 0x3590248, size 0x9c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::BerSet* FromVector(::Org::BouncyCastle::Asn1::Asn1EncodableVector* elementVector, bool needsSorting);

  static inline ::Org::BouncyCastle::Asn1::BerSet* New_ctor();

  static inline ::Org::BouncyCastle::Asn1::BerSet* New_ctor(::Org::BouncyCastle::Asn1::Asn1Encodable* element);

  static inline ::Org::BouncyCastle::Asn1::BerSet* New_ctor(::Org::BouncyCastle::Asn1::Asn1EncodableVector* elementVector);

  static inline ::Org::BouncyCastle::Asn1::BerSet* New_ctor(::Org::BouncyCastle::Asn1::Asn1EncodableVector* elementVector, bool needsSorting);

  /// @brief Method .ctor, addr 0x359036c, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x35903c4, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Encodable* element);

  /// @brief Method .ctor, addr 0x35901e0, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1EncodableVector* elementVector);

  /// @brief Method .ctor, addr 0x35902e4, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1EncodableVector* elementVector, bool needsSorting);

  static inline ::Org::BouncyCastle::Asn1::BerSet* getStaticF_Empty();

  static inline void setStaticF_Empty(::Org::BouncyCastle::Asn1::BerSet* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BerSet();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BerSet", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BerSet(BerSet&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BerSet", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BerSet(BerSet const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 492 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::BerSet, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1
NEED_NO_BOX(::Org::BouncyCastle::Asn1::BerSet);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::BerSet*, "Org.BouncyCastle.Asn1", "BerSet");

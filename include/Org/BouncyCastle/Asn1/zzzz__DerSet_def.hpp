#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/DerSet.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Set_def.hpp"
CORDL_MODULE_EXPORT(DerSet)
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
class DerSet;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::DerSet);
// Dependencies Org.BouncyCastle.Asn1.Asn1Set
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.DerSet
class CORDL_TYPE DerSet : public ::Org::BouncyCastle::Asn1::Asn1Set {
public:
  // Declarations
  /// @brief Field Empty, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Empty, put = setStaticF_Empty)) ::Org::BouncyCastle::Asn1::DerSet* Empty;

  /// @brief Method Encode, addr 0x2635748, size 0x398, virtual true, abstract: false, final false
  inline void Encode(::Org::BouncyCastle::Asn1::DerOutputStream* derOut);

  /// @brief Method FromVector, addr 0x2635684, size 0x90, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::DerSet* FromVector(::Org::BouncyCastle::Asn1::Asn1EncodableVector* elementVector);

  /// @brief Method FromVector, addr 0x262d244, size 0x98, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::DerSet* FromVector(::Org::BouncyCastle::Asn1::Asn1EncodableVector* elementVector, bool needsSorting);

  static inline ::Org::BouncyCastle::Asn1::DerSet* New_ctor();

  static inline ::Org::BouncyCastle::Asn1::DerSet* New_ctor(::Org::BouncyCastle::Asn1::Asn1Encodable* element);

  static inline ::Org::BouncyCastle::Asn1::DerSet* New_ctor(::Org::BouncyCastle::Asn1::Asn1EncodableVector* elementVector);

  static inline ::Org::BouncyCastle::Asn1::DerSet* New_ctor(::Org::BouncyCastle::Asn1::Asn1EncodableVector* elementVector, bool needsSorting);

  static inline ::Org::BouncyCastle::Asn1::DerSet* New_ctor(::ArrayW<::Org::BouncyCastle::Asn1::Asn1Encodable*, ::Array<::Org::BouncyCastle::Asn1::Asn1Encodable*>*> elements);

  /// @brief Method .ctor, addr 0x263572c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x263080c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Encodable* element);

  /// @brief Method .ctor, addr 0x2635714, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1EncodableVector* elementVector);

  /// @brief Method .ctor, addr 0x2630810, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1EncodableVector* elementVector, bool needsSorting);

  /// @brief Method .ctor, addr 0x2635730, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::Org::BouncyCastle::Asn1::Asn1Encodable*, ::Array<::Org::BouncyCastle::Asn1::Asn1Encodable*>*> elements);

  static inline ::Org::BouncyCastle::Asn1::DerSet* getStaticF_Empty();

  static inline void setStaticF_Empty(::Org::BouncyCastle::Asn1::DerSet* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DerSet();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DerSet", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DerSet(DerSet&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DerSet", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DerSet(DerSet const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 491 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::DerSet, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1
NEED_NO_BOX(::Org::BouncyCastle::Asn1::DerSet);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::DerSet*, "Org.BouncyCastle.Asn1", "DerSet");

#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__DerSet_def.hpp"
CORDL_MODULE_EXPORT(BerSet)
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1EncodableVector;
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
// Type: Org.BouncyCastle.Asn1::BerSet
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(491))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(492))
// CS Name: ::Org.BouncyCastle.Asn1::BerSet*
class CORDL_TYPE BerSet : public ::Org::BouncyCastle::Asn1::DerSet {
public:
  // Declarations
  /// @brief Field Empty, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Empty, put = setStaticF_Empty))::Org::BouncyCastle::Asn1::BerSet* Empty;

  static inline void setStaticF_Empty(::Org::BouncyCastle::Asn1::BerSet* value);

  static inline ::Org::BouncyCastle::Asn1::BerSet* getStaticF_Empty();

  /// @brief Method FromVector addr 0x11be8bc size 0x8c virtual false final false
  static inline ::Org::BouncyCastle::Asn1::BerSet* FromVector(::Org::BouncyCastle::Asn1::Asn1EncodableVector* elementVector);

  /// @brief Method FromVector addr 0x11be9ac size 0x94 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::BerSet* FromVector(::Org::BouncyCastle::Asn1::Asn1EncodableVector* elementVector, bool needsSorting);

  static inline ::Org::BouncyCastle::Asn1::BerSet* New_ctor();

  /// @brief Method .ctor addr 0x11beac4 size 0x54 virtual false final false
  inline void _ctor();

  static inline ::Org::BouncyCastle::Asn1::BerSet* New_ctor(::Org::BouncyCastle::Asn1::Asn1Encodable* element);

  /// @brief Method .ctor addr 0x11beb18 size 0x64 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Encodable* element);

  static inline ::Org::BouncyCastle::Asn1::BerSet* New_ctor(::Org::BouncyCastle::Asn1::Asn1EncodableVector* elementVector);

  /// @brief Method .ctor addr 0x11be948 size 0x64 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1EncodableVector* elementVector);

  static inline ::Org::BouncyCastle::Asn1::BerSet* New_ctor(::Org::BouncyCastle::Asn1::Asn1EncodableVector* elementVector, bool needsSorting);

  /// @brief Method .ctor addr 0x11bea40 size 0x84 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1EncodableVector* elementVector, bool needsSorting);

  /// @brief Method Encode addr 0x11beb7c size 0x3ec virtual true final false
  inline void Encode(::Org::BouncyCastle::Asn1::DerOutputStream* derOut);

  // Ctor Parameters [CppParam { name: "", ty: "BerSet", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BerSet(BerSet&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BerSet", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BerSet(BerSet const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BerSet();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::BerSet, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1
NEED_NO_BOX(::Org::BouncyCastle::Asn1::BerSet);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::BerSet*, "Org.BouncyCastle.Asn1", "BerSet");

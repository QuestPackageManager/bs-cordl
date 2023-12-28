#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Set_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(DerSet)
namespace Org::BouncyCastle::Asn1 {
class DerOutputStream;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1EncodableVector;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class DerSet;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::DerSet);
// Type: Org.BouncyCastle.Asn1::DerSet
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(465))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(491))
// CS Name: ::Org.BouncyCastle.Asn1::DerSet*
class CORDL_TYPE DerSet : public ::Org::BouncyCastle::Asn1::Asn1Set {
public:
  // Declarations
  /// @brief Field Empty, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Empty, put = setStaticF_Empty))::Org::BouncyCastle::Asn1::DerSet* Empty;

  static inline void setStaticF_Empty(::Org::BouncyCastle::Asn1::DerSet* value);

  static inline ::Org::BouncyCastle::Asn1::DerSet* getStaticF_Empty();

  /// @brief Method FromVector addr 0x11be404 size 0x94 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::DerSet* FromVector(::Org::BouncyCastle::Asn1::Asn1EncodableVector* elementVector);

  /// @brief Method FromVector addr 0x11b5e5c size 0x9c virtual false final false
  static inline ::Org::BouncyCastle::Asn1::DerSet* FromVector(::Org::BouncyCastle::Asn1::Asn1EncodableVector* elementVector, bool needsSorting);

  static inline ::Org::BouncyCastle::Asn1::DerSet* New_ctor();

  /// @brief Method .ctor addr 0x11be4b0 size 0x4 virtual false final false
  inline void _ctor();

  static inline ::Org::BouncyCastle::Asn1::DerSet* New_ctor(::Org::BouncyCastle::Asn1::Asn1Encodable* element);

  /// @brief Method .ctor addr 0x11b94c8 size 0x4 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Encodable* element);

  static inline ::Org::BouncyCastle::Asn1::DerSet* New_ctor(::ArrayW<::Org::BouncyCastle::Asn1::Asn1Encodable*, ::Array<::Org::BouncyCastle::Asn1::Asn1Encodable*>*> elements);

  /// @brief Method .ctor addr 0x11be4b4 size 0x18 virtual false final false
  inline void _ctor(::ArrayW<::Org::BouncyCastle::Asn1::Asn1Encodable*, ::Array<::Org::BouncyCastle::Asn1::Asn1Encodable*>*> elements);

  static inline ::Org::BouncyCastle::Asn1::DerSet* New_ctor(::Org::BouncyCastle::Asn1::Asn1EncodableVector* elementVector);

  /// @brief Method .ctor addr 0x11be498 size 0x18 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1EncodableVector* elementVector);

  static inline ::Org::BouncyCastle::Asn1::DerSet* New_ctor(::Org::BouncyCastle::Asn1::Asn1EncodableVector* elementVector, bool needsSorting);

  /// @brief Method .ctor addr 0x11b94cc size 0x34 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1EncodableVector* elementVector, bool needsSorting);

  /// @brief Method Encode addr 0x11be4cc size 0x390 virtual true final false
  inline void Encode(::Org::BouncyCastle::Asn1::DerOutputStream* derOut);

  // Ctor Parameters [CppParam { name: "", ty: "DerSet", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DerSet(DerSet&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DerSet", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DerSet(DerSet const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DerSet();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::DerSet, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1
NEED_NO_BOX(::Org::BouncyCastle::Asn1::DerSet);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::DerSet*, "Org.BouncyCastle.Asn1", "DerSet");

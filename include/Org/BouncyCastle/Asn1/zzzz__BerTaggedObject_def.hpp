#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__DerTaggedObject_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BerTaggedObject)
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class DerOutputStream;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class BerTaggedObject;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::BerTaggedObject);
// Type: Org.BouncyCastle.Asn1::BerTaggedObject
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(495))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(496))
// CS Name: ::Org.BouncyCastle.Asn1::BerTaggedObject*
class CORDL_TYPE BerTaggedObject : public ::Org::BouncyCastle::Asn1::DerTaggedObject {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Asn1::BerTaggedObject* New_ctor(int32_t tagNo, ::Org::BouncyCastle::Asn1::Asn1Encodable* obj);

  /// @brief Method .ctor addr 0x114df5c size 0x44 virtual false final false
  inline void _ctor(int32_t tagNo, ::Org::BouncyCastle::Asn1::Asn1Encodable* obj);

  static inline ::Org::BouncyCastle::Asn1::BerTaggedObject* New_ctor(bool explicitly, int32_t tagNo, ::Org::BouncyCastle::Asn1::Asn1Encodable* obj);

  /// @brief Method .ctor addr 0x1149384 size 0x8 virtual false final false
  inline void _ctor(bool explicitly, int32_t tagNo, ::Org::BouncyCastle::Asn1::Asn1Encodable* obj);

  static inline ::Org::BouncyCastle::Asn1::BerTaggedObject* New_ctor(int32_t tagNo);

  /// @brief Method .ctor addr 0x114dfa0 size 0x74 virtual false final false
  inline void _ctor(int32_t tagNo);

  /// @brief Method Encode addr 0x114e014 size 0x5bc virtual true final false
  inline void Encode(::Org::BouncyCastle::Asn1::DerOutputStream* derOut);

  // Ctor Parameters [CppParam { name: "", ty: "BerTaggedObject", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BerTaggedObject(BerTaggedObject&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BerTaggedObject", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BerTaggedObject(BerTaggedObject const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BerTaggedObject();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::BerTaggedObject, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1
NEED_NO_BOX(::Org::BouncyCastle::Asn1::BerTaggedObject);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::BerTaggedObject*, "Org.BouncyCastle.Asn1", "BerTaggedObject");

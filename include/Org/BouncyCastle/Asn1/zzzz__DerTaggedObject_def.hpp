#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/DerTaggedObject.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1TaggedObject_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DerTaggedObject)
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class DerOutputStream;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class DerTaggedObject;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::DerTaggedObject);
// Dependencies Org.BouncyCastle.Asn1.Asn1TaggedObject
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.DerTaggedObject
class CORDL_TYPE DerTaggedObject : public ::Org::BouncyCastle::Asn1::Asn1TaggedObject {
public:
  // Declarations
  /// @brief Method Encode, addr 0x2634fe4, size 0xc8, virtual true, abstract: false, final false
  inline void Encode(::Org::BouncyCastle::Asn1::DerOutputStream* derOut);

  static inline ::Org::BouncyCastle::Asn1::DerTaggedObject* New_ctor(bool explicitly, int32_t tagNo, ::Org::BouncyCastle::Asn1::Asn1Encodable* obj);

  static inline ::Org::BouncyCastle::Asn1::DerTaggedObject* New_ctor(int32_t tagNo);

  static inline ::Org::BouncyCastle::Asn1::DerTaggedObject* New_ctor(int32_t tagNo, ::Org::BouncyCastle::Asn1::Asn1Encodable* obj);

  /// @brief Method .ctor, addr 0x2629974, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(bool explicitly, int32_t tagNo, ::Org::BouncyCastle::Asn1::Asn1Encodable* obj);

  /// @brief Method .ctor, addr 0x2634f70, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(int32_t tagNo);

  /// @brief Method .ctor, addr 0x262120c, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(int32_t tagNo, ::Org::BouncyCastle::Asn1::Asn1Encodable* obj);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DerTaggedObject();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DerTaggedObject", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DerTaggedObject(DerTaggedObject&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DerTaggedObject", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DerTaggedObject(DerTaggedObject const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 495 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::DerTaggedObject, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1
NEED_NO_BOX(::Org::BouncyCastle::Asn1::DerTaggedObject);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::DerTaggedObject*, "Org.BouncyCastle.Asn1", "DerTaggedObject");

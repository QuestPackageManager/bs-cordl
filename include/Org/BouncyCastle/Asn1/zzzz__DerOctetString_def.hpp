#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1OctetString_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DerOctetString)
namespace Org::BouncyCastle::Asn1 {
class IAsn1Convertible;
}
namespace Org::BouncyCastle::Asn1 {
class DerOutputStream;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class DerOctetString;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::DerOctetString);
// Type: Org.BouncyCastle.Asn1::DerOctetString
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(456))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(479))
// CS Name: ::Org.BouncyCastle.Asn1::DerOctetString*
class CORDL_TYPE DerOctetString : public ::Org::BouncyCastle::Asn1::Asn1OctetString {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Asn1::DerOctetString* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> str);

  /// @brief Method .ctor, addr 0x11b1f50, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> str);

  static inline ::Org::BouncyCastle::Asn1::DerOctetString* New_ctor(::Org::BouncyCastle::Asn1::IAsn1Convertible* obj);

  /// @brief Method .ctor, addr 0x11bc410, size 0xac, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::IAsn1Convertible* obj);

  static inline ::Org::BouncyCastle::Asn1::DerOctetString* New_ctor(::Org::BouncyCastle::Asn1::Asn1Encodable* obj);

  /// @brief Method .ctor, addr 0x11bc4bc, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Encodable* obj);

  /// @brief Method Encode, addr 0x11bc520, size 0x24, virtual true, abstract: false, final false
  inline void Encode(::Org::BouncyCastle::Asn1::DerOutputStream* derOut);

  /// @brief Method Encode, addr 0x11bc544, size 0x70, virtual false, abstract: false, final false
  static inline void Encode(::Org::BouncyCastle::Asn1::DerOutputStream* derOut, ::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t offset, int32_t length);

  // Ctor Parameters [CppParam { name: "", ty: "DerOctetString", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DerOctetString(DerOctetString&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DerOctetString", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DerOctetString(DerOctetString const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DerOctetString();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::DerOctetString, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1
NEED_NO_BOX(::Org::BouncyCastle::Asn1::DerOctetString);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::DerOctetString*, "Org.BouncyCastle.Asn1", "DerOctetString");

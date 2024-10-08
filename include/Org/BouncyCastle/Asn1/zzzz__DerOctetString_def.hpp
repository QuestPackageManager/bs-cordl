#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/DerOctetString.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1OctetString_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DerOctetString)
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class DerOutputStream;
}
namespace Org::BouncyCastle::Asn1 {
class IAsn1Convertible;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class DerOctetString;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::DerOctetString);
// Type: Org.BouncyCastle.Asn1::DerOctetString
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Asn1::DerOctetString*
class CORDL_TYPE DerOctetString : public ::Org::BouncyCastle::Asn1::Asn1OctetString {
public:
  // Declarations
  /// @brief Method Encode, addr 0x25f30c8, size 0x24, virtual true, abstract: false, final false
  inline void Encode(::Org::BouncyCastle::Asn1::DerOutputStream* derOut);

  /// @brief Method Encode, addr 0x25f30ec, size 0x70, virtual false, abstract: false, final false
  static inline void Encode(::Org::BouncyCastle::Asn1::DerOutputStream* derOut, ::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t offset, int32_t length);

  static inline ::Org::BouncyCastle::Asn1::DerOctetString* New_ctor(::Org::BouncyCastle::Asn1::Asn1Encodable* obj);

  static inline ::Org::BouncyCastle::Asn1::DerOctetString* New_ctor(::Org::BouncyCastle::Asn1::IAsn1Convertible* obj);

  static inline ::Org::BouncyCastle::Asn1::DerOctetString* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> str);

  /// @brief Method .ctor, addr 0x25f3064, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Encodable* obj);

  /// @brief Method .ctor, addr 0x25f2fb8, size 0xac, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::IAsn1Convertible* obj);

  /// @brief Method .ctor, addr 0x25e8ce4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> str);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DerOctetString();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DerOctetString", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DerOctetString(DerOctetString&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DerOctetString", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DerOctetString(DerOctetString const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 479 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::DerOctetString, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1
NEED_NO_BOX(::Org::BouncyCastle::Asn1::DerOctetString);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::DerOctetString*, "Org.BouncyCastle.Asn1", "DerOctetString");

#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/BerApplicationSpecific.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__DerApplicationSpecific_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BerApplicationSpecific)
namespace Org::BouncyCastle::Asn1 {
class Asn1EncodableVector;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class BerApplicationSpecific;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::BerApplicationSpecific);
// Type: Org.BouncyCastle.Asn1::BerApplicationSpecific
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Asn1::BerApplicationSpecific*
class CORDL_TYPE BerApplicationSpecific : public ::Org::BouncyCastle::Asn1::DerApplicationSpecific {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Asn1::BerApplicationSpecific* New_ctor(int32_t tagNo, ::Org::BouncyCastle::Asn1::Asn1EncodableVector* vec);

  /// @brief Method .ctor, addr 0x1424c10, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(int32_t tagNo, ::Org::BouncyCastle::Asn1::Asn1EncodableVector* vec);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BerApplicationSpecific();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BerApplicationSpecific", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BerApplicationSpecific(BerApplicationSpecific&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BerApplicationSpecific", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BerApplicationSpecific(BerApplicationSpecific const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::BerApplicationSpecific, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1
NEED_NO_BOX(::Org::BouncyCastle::Asn1::BerApplicationSpecific);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::BerApplicationSpecific*, "Org.BouncyCastle.Asn1", "BerApplicationSpecific");

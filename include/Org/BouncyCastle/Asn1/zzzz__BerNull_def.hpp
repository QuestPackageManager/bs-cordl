#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/BerNull.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__DerNull_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BerNull)
namespace Org::BouncyCastle::Asn1 {
class DerOutputStream;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class BerNull;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::BerNull);
// Dependencies Org.BouncyCastle.Asn1.DerNull
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.BerNull
class CORDL_TYPE BerNull : public ::Org::BouncyCastle::Asn1::DerNull {
public:
  // Declarations
  /// @brief Field Instance, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Instance, put = setStaticF_Instance)) ::Org::BouncyCastle::Asn1::BerNull* Instance;

  /// @brief Method Encode, addr 0x2633604, size 0xd0, virtual true, abstract: false, final false
  inline void Encode(::Org::BouncyCastle::Asn1::DerOutputStream* derOut);

  static inline ::Org::BouncyCastle::Asn1::BerNull* New_ctor();

  static inline ::Org::BouncyCastle::Asn1::BerNull* New_ctor(int32_t dummy);

  /// @brief Method .ctor, addr 0x263355c, size 0x54, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x26335b0, size 0x54, virtual false, abstract: false, final false
  inline void _ctor(int32_t dummy);

  static inline ::Org::BouncyCastle::Asn1::BerNull* getStaticF_Instance();

  static inline void setStaticF_Instance(::Org::BouncyCastle::Asn1::BerNull* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BerNull();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BerNull", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BerNull(BerNull&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BerNull", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BerNull(BerNull const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 478 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::BerNull, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1
NEED_NO_BOX(::Org::BouncyCastle::Asn1::BerNull);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::BerNull*, "Org.BouncyCastle.Asn1", "BerNull");

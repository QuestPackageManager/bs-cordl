#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Asn1Null.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Asn1Null)
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class Asn1Null;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Asn1Null);
// Dependencies Org.BouncyCastle.Asn1.Asn1Object
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Asn1Null
class CORDL_TYPE Asn1Null : public ::Org::BouncyCastle::Asn1::Asn1Object {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Asn1::Asn1Null* New_ctor();

  /// @brief Method ToString, addr 0x2632c70, size 0x40, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x2632c68, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Asn1Null();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Asn1Null", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Asn1Null(Asn1Null&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Asn1Null", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Asn1Null(Asn1Null const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 454 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Asn1Null, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Asn1Null);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Asn1Null*, "Org.BouncyCastle.Asn1", "Asn1Null");

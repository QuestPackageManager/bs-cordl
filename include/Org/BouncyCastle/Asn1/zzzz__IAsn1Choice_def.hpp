#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/IAsn1Choice.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IAsn1Choice)
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class IAsn1Choice;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::IAsn1Choice);
// Dependencies
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.IAsn1Choice
class CORDL_TYPE IAsn1Choice {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "", ty: "IAsn1Choice", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IAsn1Choice(IAsn1Choice const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Org::BouncyCastle::Asn1
NEED_NO_BOX(::Org::BouncyCastle::Asn1::IAsn1Choice);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::IAsn1Choice*, "Org.BouncyCastle.Asn1", "IAsn1Choice");

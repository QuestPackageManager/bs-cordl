#pragma once
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
// Type: Org.BouncyCastle.Asn1::IAsn1Choice
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13))
// CS Name: ::Org.BouncyCastle.Asn1::IAsn1Choice*
class CORDL_TYPE IAsn1Choice {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "", ty: "IAsn1Choice", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IAsn1Choice(IAsn1Choice&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IAsn1Choice", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IAsn1Choice(IAsn1Choice const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Org::BouncyCastle::Asn1
NEED_NO_BOX(::Org::BouncyCastle::Asn1::IAsn1Choice);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::IAsn1Choice*, "Org.BouncyCastle.Asn1", "IAsn1Choice");

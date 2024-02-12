#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(OnErrorAttribute)
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
class OnErrorAttribute;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Serialization::OnErrorAttribute);
// Type: Newtonsoft.Json.Serialization::OnErrorAttribute
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2547))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11862))
// CS Name: ::Newtonsoft.Json.Serialization::OnErrorAttribute*
class CORDL_TYPE OnErrorAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::Newtonsoft::Json::Serialization::OnErrorAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x26b1b14, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "OnErrorAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OnErrorAttribute(OnErrorAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OnErrorAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OnErrorAttribute(OnErrorAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OnErrorAttribute();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Serialization::OnErrorAttribute, 0x10>, "Size mismatch!");

} // namespace Newtonsoft::Json::Serialization
NEED_NO_BOX(::Newtonsoft::Json::Serialization::OnErrorAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::OnErrorAttribute*, "Newtonsoft.Json.Serialization", "OnErrorAttribute");

#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
CORDL_MODULE_EXPORT(SOVariableAttribute)
// Forward declare root types
namespace GlobalNamespace {
class SOVariableAttribute;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SOVariableAttribute);
// Type: ::SOVariableAttribute
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10170))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15870))
// CS Name: ::SOVariableAttribute*
class CORDL_TYPE SOVariableAttribute : public ::UnityEngine::PropertyAttribute {
public:
  // Declarations
  static inline ::GlobalNamespace::SOVariableAttribute* New_ctor();

  /// @brief Method .ctor addr 0xe28a78 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SOVariableAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SOVariableAttribute(SOVariableAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SOVariableAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SOVariableAttribute(SOVariableAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SOVariableAttribute();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SOVariableAttribute, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SOVariableAttribute);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SOVariableAttribute*, "", "SOVariableAttribute");

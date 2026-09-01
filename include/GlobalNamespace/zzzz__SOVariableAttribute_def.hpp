#pragma once
// IWYU pragma private; include "GlobalNamespace\SOVariableAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
CORDL_MODULE_EXPORT(SOVariableAttribute)
// Forward declare root types
namespace GlobalNamespace {
class SOVariableAttribute;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SOVariableAttribute*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SOVariableAttribute*, "", "SOVariableAttribute");
// Dependencies UnityEngine.PropertyAttribute
namespace GlobalNamespace {
// Is value type: false
// CS Name: SOVariableAttribute
class CORDL_TYPE SOVariableAttribute : public ::UnityEngine::PropertyAttribute {
public:
  // Declarations
  static inline ::GlobalNamespace::SOVariableAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x3327fe8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SOVariableAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SOVariableAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SOVariableAttribute(SOVariableAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SOVariableAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SOVariableAttribute(SOVariableAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20781 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::SOVariableAttribute) == 0x18, "Size mismatch!");

} // namespace GlobalNamespace

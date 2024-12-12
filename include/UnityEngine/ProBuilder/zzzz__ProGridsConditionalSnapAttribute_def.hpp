#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/ProGridsConditionalSnapAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(ProGridsConditionalSnapAttribute)
// Forward declare root types
namespace UnityEngine::ProBuilder {
class ProGridsConditionalSnapAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::ProGridsConditionalSnapAttribute);
// Dependencies System.Attribute
namespace UnityEngine::ProBuilder {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.ProGridsConditionalSnapAttribute
class CORDL_TYPE ProGridsConditionalSnapAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::UnityEngine::ProBuilder::ProGridsConditionalSnapAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x4726a48, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProGridsConditionalSnapAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProGridsConditionalSnapAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProGridsConditionalSnapAttribute(ProGridsConditionalSnapAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProGridsConditionalSnapAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProGridsConditionalSnapAttribute(ProGridsConditionalSnapAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14291 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::ProGridsConditionalSnapAttribute, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
NEED_NO_BOX(::UnityEngine::ProBuilder::ProGridsConditionalSnapAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::ProGridsConditionalSnapAttribute*, "UnityEngine.ProBuilder", "ProGridsConditionalSnapAttribute");

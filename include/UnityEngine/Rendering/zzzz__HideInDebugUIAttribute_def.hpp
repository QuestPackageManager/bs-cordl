#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/HideInDebugUIAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(HideInDebugUIAttribute)
// Forward declare root types
namespace UnityEngine::Rendering {
class HideInDebugUIAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::HideInDebugUIAttribute);
// Dependencies System.Attribute
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.HideInDebugUIAttribute
class CORDL_TYPE HideInDebugUIAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::UnityEngine::Rendering::HideInDebugUIAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x653798c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HideInDebugUIAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HideInDebugUIAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HideInDebugUIAttribute(HideInDebugUIAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HideInDebugUIAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HideInDebugUIAttribute(HideInDebugUIAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11864 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::HideInDebugUIAttribute, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::HideInDebugUIAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::HideInDebugUIAttribute*, "UnityEngine.Rendering", "HideInDebugUIAttribute");

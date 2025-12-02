#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ReloadGroupAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(ReloadGroupAttribute)
// Forward declare root types
namespace UnityEngine::Rendering {
class ReloadGroupAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::ReloadGroupAttribute);
// Dependencies System.Attribute
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.ReloadGroupAttribute
class CORDL_TYPE ReloadGroupAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::UnityEngine::Rendering::ReloadGroupAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x653a5f8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReloadGroupAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReloadGroupAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReloadGroupAttribute(ReloadGroupAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReloadGroupAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReloadGroupAttribute(ReloadGroupAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11909 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ReloadGroupAttribute, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::ReloadGroupAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ReloadGroupAttribute*, "UnityEngine.Rendering", "ReloadGroupAttribute");

#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/URPHelpURLAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__CoreRPHelpURLAttribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(URPHelpURLAttribute)
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class URPHelpURLAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::URPHelpURLAttribute);
// Dependencies UnityEngine.Rendering.CoreRPHelpURLAttribute
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.URPHelpURLAttribute
class CORDL_TYPE URPHelpURLAttribute : public ::UnityEngine::Rendering::CoreRPHelpURLAttribute {
public:
  // Declarations
  static inline ::UnityEngine::Rendering::Universal::URPHelpURLAttribute* New_ctor(::StringW pageName, ::StringW pageHash);

  /// @brief Method .ctor, addr 0x6654b6c, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::StringW pageName, ::StringW pageHash);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr URPHelpURLAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "URPHelpURLAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  URPHelpURLAttribute(URPHelpURLAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "URPHelpURLAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  URPHelpURLAttribute(URPHelpURLAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12718 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::URPHelpURLAttribute, 0x28>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::URPHelpURLAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::URPHelpURLAttribute*, "UnityEngine.Rendering.Universal", "URPHelpURLAttribute");

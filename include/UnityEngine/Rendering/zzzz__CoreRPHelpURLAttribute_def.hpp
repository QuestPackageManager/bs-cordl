#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/CoreRPHelpURLAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__HelpURLAttribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CoreRPHelpURLAttribute)
// Forward declare root types
namespace UnityEngine::Rendering {
class CoreRPHelpURLAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::CoreRPHelpURLAttribute);
// Dependencies UnityEngine.HelpURLAttribute
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.CoreRPHelpURLAttribute
class CORDL_TYPE CoreRPHelpURLAttribute : public ::UnityEngine::HelpURLAttribute {
public:
  // Declarations
  static inline ::UnityEngine::Rendering::CoreRPHelpURLAttribute* New_ctor(::StringW pageName, ::StringW packageName);

  static inline ::UnityEngine::Rendering::CoreRPHelpURLAttribute* New_ctor(::StringW pageName, ::StringW pageHash, ::StringW packageName);

  /// @brief Method .ctor, addr 0x6568c34, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::StringW pageName, ::StringW packageName);

  /// @brief Method .ctor, addr 0x6568e8c, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::StringW pageName, ::StringW pageHash, ::StringW packageName);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CoreRPHelpURLAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CoreRPHelpURLAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CoreRPHelpURLAttribute(CoreRPHelpURLAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CoreRPHelpURLAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CoreRPHelpURLAttribute(CoreRPHelpURLAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12039 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::CoreRPHelpURLAttribute, 0x28>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::CoreRPHelpURLAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::CoreRPHelpURLAttribute*, "UnityEngine.Rendering", "CoreRPHelpURLAttribute");

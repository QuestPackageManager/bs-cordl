#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Utilities/CSharpCodeHelpers.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CSharpCodeHelpers)
// Forward declare root types
namespace UnityEngine::InputSystem::Utilities {
class CSharpCodeHelpers;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Utilities::CSharpCodeHelpers);
// Dependencies System.Object
namespace UnityEngine::InputSystem::Utilities {
// Is value type: false
// CS Name: UnityEngine.InputSystem.Utilities.CSharpCodeHelpers
class CORDL_TYPE CSharpCodeHelpers : public ::System::Object {
public:
  // Declarations
  /// @brief Method IsEmptyOrProperIdentifier, addr 0x4566578, size 0x2c, virtual false, abstract: false, final false
  static inline bool IsEmptyOrProperIdentifier(::StringW name);

  /// @brief Method IsEmptyOrProperNamespaceName, addr 0x45665a4, size 0xd4, virtual false, abstract: false, final false
  static inline bool IsEmptyOrProperNamespaceName(::StringW name);

  /// @brief Method IsProperIdentifier, addr 0x4566464, size 0x114, virtual false, abstract: false, final false
  static inline bool IsProperIdentifier(::StringW name);

  /// @brief Method MakeIdentifier, addr 0x4566678, size 0x244, virtual false, abstract: false, final false
  static inline ::StringW MakeIdentifier(::StringW name, ::StringW suffix);

  /// @brief Method MakeTypeName, addr 0x45668bc, size 0x108, virtual false, abstract: false, final false
  static inline ::StringW MakeTypeName(::StringW name, ::StringW suffix);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CSharpCodeHelpers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CSharpCodeHelpers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CSharpCodeHelpers(CSharpCodeHelpers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CSharpCodeHelpers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CSharpCodeHelpers(CSharpCodeHelpers const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7068 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Utilities::CSharpCodeHelpers, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Utilities
NEED_NO_BOX(::UnityEngine::InputSystem::Utilities::CSharpCodeHelpers);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Utilities::CSharpCodeHelpers*, "UnityEngine.InputSystem.Utilities", "CSharpCodeHelpers");

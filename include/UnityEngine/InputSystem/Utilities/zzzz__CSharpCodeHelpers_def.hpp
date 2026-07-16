#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Utilities/CSharpCodeHelpers.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(CSharpCodeHelpers)
// Forward declare root types
namespace UnityEngine::InputSystem::Utilities {
class CSharpCodeHelpers;
}
// Write type traits
MARK_REF_T(::UnityEngine::InputSystem::Utilities::CSharpCodeHelpers*);
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::Utilities::CSharpCodeHelpers*, "UnityEngine.InputSystem.Utilities", "CSharpCodeHelpers");
// Dependencies System.Object
namespace UnityEngine::InputSystem::Utilities {
// Is value type: false
// CS Name: UnityEngine.InputSystem.Utilities.CSharpCodeHelpers
class CORDL_TYPE CSharpCodeHelpers : public ::System::Object {
public:
  // Declarations
  /// @brief Method IsEmptyOrProperIdentifier, addr 0x64fb5f4, size 0x18, virtual false, abstract: false, final false
  static inline bool IsEmptyOrProperIdentifier(::StringW name);

  /// @brief Method IsEmptyOrProperNamespaceName, addr 0x64fb60c, size 0xd4, virtual false, abstract: false, final false
  static inline bool IsEmptyOrProperNamespaceName(::StringW name);

  /// @brief Method IsProperIdentifier, addr 0x64fb520, size 0xd4, virtual false, abstract: false, final false
  static inline bool IsProperIdentifier(::StringW name);

  /// @brief Method MakeIdentifier, addr 0x64fb6e0, size 0x210, virtual false, abstract: false, final false
  static inline ::StringW MakeIdentifier(::StringW name, ::StringW suffix);

  /// @brief Method MakeTypeName, addr 0x64fb8f0, size 0xdc, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9128 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::InputSystem::Utilities::CSharpCodeHelpers) == 0x10, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Utilities

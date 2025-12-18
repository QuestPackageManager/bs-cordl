#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Utilities/ExceptionHelpers.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ExceptionHelpers)
namespace System {
class Exception;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Utilities {
class ExceptionHelpers;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Utilities::ExceptionHelpers);
// Dependencies System.Object
namespace UnityEngine::InputSystem::Utilities {
// Is value type: false
// CS Name: UnityEngine.InputSystem.Utilities.ExceptionHelpers
class CORDL_TYPE ExceptionHelpers : public ::System::Object {
public:
  // Declarations
  /// @brief Method IsExceptionIndicatingBugInCode, addr 0x634ae50, size 0xf0, virtual false, abstract: false, final false
  static inline bool IsExceptionIndicatingBugInCode(::System::Exception* exception);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExceptionHelpers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ExceptionHelpers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExceptionHelpers(ExceptionHelpers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExceptionHelpers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExceptionHelpers(ExceptionHelpers const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9138 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Utilities::ExceptionHelpers, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Utilities
NEED_NO_BOX(::UnityEngine::InputSystem::Utilities::ExceptionHelpers);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Utilities::ExceptionHelpers*, "UnityEngine.InputSystem.Utilities", "ExceptionHelpers");

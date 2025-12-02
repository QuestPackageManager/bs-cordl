#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/InvalidImportException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
CORDL_MODULE_EXPORT(InvalidImportException)
// Forward declare root types
namespace UnityEngine::Rendering {
class InvalidImportException;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::InvalidImportException);
// Dependencies System.Exception
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.InvalidImportException
class CORDL_TYPE InvalidImportException : public ::System::Exception {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InvalidImportException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InvalidImportException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InvalidImportException(InvalidImportException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InvalidImportException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InvalidImportException(InvalidImportException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10783 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::InvalidImportException, 0x90>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::InvalidImportException);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::InvalidImportException*, "UnityEngine.Rendering", "InvalidImportException");

#pragma once
// IWYU pragma private; include "System/EnvironmentHelpers.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(EnvironmentHelpers)
// Forward declare root types
namespace System {
class EnvironmentHelpers;
}
// Write type traits
MARK_REF_PTR_T(::System::EnvironmentHelpers);
// Dependencies System.Object
namespace System {
// Is value type: false
// CS Name: System.EnvironmentHelpers
class CORDL_TYPE EnvironmentHelpers : public ::System::Object {
public:
  // Declarations
  /// @brief Method IsWindowsVistaOrAbove, addr 0x440f8a0, size 0x8, virtual false, abstract: false, final false
  static inline bool IsWindowsVistaOrAbove();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnvironmentHelpers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentHelpers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnvironmentHelpers(EnvironmentHelpers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentHelpers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnvironmentHelpers(EnvironmentHelpers const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9211 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::EnvironmentHelpers, 0x10>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::EnvironmentHelpers);
DEFINE_IL2CPP_ARG_TYPE(::System::EnvironmentHelpers*, "System", "EnvironmentHelpers");

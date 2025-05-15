#pragma once
// IWYU pragma private; include "GlobalNamespace/IBackgroundCommand.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IBackgroundCommand)
namespace System::Threading::Tasks {
class Task;
}
// Forward declare root types
namespace GlobalNamespace {
class IBackgroundCommand;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IBackgroundCommand);
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: IBackgroundCommand
class CORDL_TYPE IBackgroundCommand {
public:
  // Declarations
  /// @brief Method Execute, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* Execute();

  // Ctor Parameters [CppParam { name: "", ty: "IBackgroundCommand", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IBackgroundCommand(IBackgroundCommand const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17117 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IBackgroundCommand);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IBackgroundCommand*, "", "IBackgroundCommand");

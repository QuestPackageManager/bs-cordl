#pragma once
// IWYU pragma private; include "GlobalNamespace/CollectGarbageConsoleCommand.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ConsoleCommandBase_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(CollectGarbageConsoleCommand)
namespace GlobalNamespace {
struct ConsoleMessage;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
// Forward declare root types
namespace GlobalNamespace {
class CollectGarbageConsoleCommand;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CollectGarbageConsoleCommand*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CollectGarbageConsoleCommand*, "", "CollectGarbageConsoleCommand");
// [UsedImplicitly]
// Dependencies ConsoleCommandBase
namespace GlobalNamespace {
// Is value type: false
// CS Name: CollectGarbageConsoleCommand
class CORDL_TYPE CollectGarbageConsoleCommand : public ::GlobalNamespace::ConsoleCommandBase {
public:
  // Declarations
  __declspec(property(get = get_commandName)) ::StringW commandName;

  __declspec(property(get = get_description)) ::StringW description;

  /// @brief Method ExecuteAsync, addr 0x3574d4c, size 0x248, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<bool>* ExecuteAsync(::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>* messages);

  static inline ::GlobalNamespace::CollectGarbageConsoleCommand* New_ctor();

  /// @brief Method .ctor, addr 0x3574f94, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_commandName, addr 0x3574cc4, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_commandName();

  /// @brief Method get_description, addr 0x3574d08, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_description();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CollectGarbageConsoleCommand();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CollectGarbageConsoleCommand", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CollectGarbageConsoleCommand(CollectGarbageConsoleCommand&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CollectGarbageConsoleCommand", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CollectGarbageConsoleCommand(CollectGarbageConsoleCommand const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19749 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::CollectGarbageConsoleCommand) == 0x38, "Size mismatch!");

} // namespace GlobalNamespace

#pragma once
// IWYU pragma private; include "GlobalNamespace\QuitGameCommand.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ConsoleCommandBase_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(QuitGameCommand)
namespace GlobalNamespace {
struct ConsoleMessage;
}
namespace GlobalNamespace {
class TerminalController;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
// Forward declare root types
namespace GlobalNamespace {
class QuitGameCommand;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::QuitGameCommand*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::QuitGameCommand*, "", "QuitGameCommand");
// Dependencies ConsoleCommandBase
namespace GlobalNamespace {
// Is value type: false
// CS Name: QuitGameCommand
class CORDL_TYPE QuitGameCommand : public ::GlobalNamespace::ConsoleCommandBase {
public:
  // Declarations
  /// @brief Field _terminal, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__terminal, put = __cordl_internal_set__terminal)) ::GlobalNamespace::TerminalController* _terminal;

  __declspec(property(get = get_commandName)) ::StringW commandName;

  __declspec(property(get = get_description)) ::StringW description;

  /// @brief Method ExecuteAsync, addr 0x32e2a0c, size 0x100, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<bool>* ExecuteAsync(::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>* messages);

  static inline ::GlobalNamespace::QuitGameCommand* New_ctor();

  constexpr ::GlobalNamespace::TerminalController* const& __cordl_internal_get__terminal() const;

  constexpr ::GlobalNamespace::TerminalController*& __cordl_internal_get__terminal();

  constexpr void __cordl_internal_set__terminal(::GlobalNamespace::TerminalController* value);

  /// @brief Method .ctor, addr 0x32e2b8c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_commandName, addr 0x32e2984, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_commandName();

  /// @brief Method get_description, addr 0x32e29c8, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_description();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr QuitGameCommand();

public:
  // Ctor Parameters [CppParam { name: "", ty: "QuitGameCommand", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  QuitGameCommand(QuitGameCommand&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "QuitGameCommand", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  QuitGameCommand(QuitGameCommand const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19408 };

  /// @brief Field _terminal, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::TerminalController* ____terminal;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::QuitGameCommand, ____terminal) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::QuitGameCommand) == 0x40, "Size mismatch!");

} // namespace GlobalNamespace

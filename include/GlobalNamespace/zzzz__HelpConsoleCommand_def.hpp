#pragma once
// IWYU pragma private; include "GlobalNamespace/HelpConsoleCommand.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ConsoleCommandBase_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(HelpConsoleCommand)
namespace GlobalNamespace {
class ConsoleCommandBase;
}
namespace GlobalNamespace {
struct ConsoleMessage;
}
namespace GlobalNamespace {
template <typename T> class OptionalArgument_1;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IReadOnlyDictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
// Forward declare root types
namespace GlobalNamespace {
class HelpConsoleCommand;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::HelpConsoleCommand*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HelpConsoleCommand*, "", "HelpConsoleCommand");
// Dependencies ConsoleCommandBase
namespace GlobalNamespace {
// Is value type: false
// CS Name: HelpConsoleCommand
class CORDL_TYPE HelpConsoleCommand : public ::GlobalNamespace::ConsoleCommandBase {
public:
  // Declarations
  /// @brief Field _commandName, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__commandName, put = __cordl_internal_set__commandName)) ::GlobalNamespace::OptionalArgument_1<::StringW>* _commandName;

  __declspec(property(get = get_commandName)) ::StringW commandName;

  __declspec(property(get = get_description)) ::StringW description;

  /// @brief Method ExecuteAsync, addr 0x32db958, size 0xec, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<bool>* ExecuteAsync(::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>* messages);

  /// @brief Method GetCommandUsage, addr 0x32dbb1c, size 0x138, virtual false, abstract: false, final false
  inline bool GetCommandUsage(::StringW commandName, ::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>* messages);

  /// @brief Method GetListOfCommands, addr 0x32dba44, size 0xd8, virtual false, abstract: false, final false
  inline void GetListOfCommands(::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>* messages);

  /// @brief Method ListCommands, addr 0x32dbc54, size 0x464, virtual false, abstract: false, final false
  static inline ::StringW ListCommands(::System::Collections::Generic::IReadOnlyDictionary_2<::StringW, ::GlobalNamespace::ConsoleCommandBase*>* commands);

  static inline ::GlobalNamespace::HelpConsoleCommand* New_ctor();

  constexpr ::GlobalNamespace::OptionalArgument_1<::StringW>* const& __cordl_internal_get__commandName() const;

  constexpr ::GlobalNamespace::OptionalArgument_1<::StringW>*& __cordl_internal_get__commandName();

  constexpr void __cordl_internal_set__commandName(::GlobalNamespace::OptionalArgument_1<::StringW>* value);

  /// @brief Method .ctor, addr 0x32dc0b8, size 0xd0, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_commandName, addr 0x32db8d0, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_commandName();

  /// @brief Method get_description, addr 0x32db914, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_description();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HelpConsoleCommand();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HelpConsoleCommand", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HelpConsoleCommand(HelpConsoleCommand&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HelpConsoleCommand", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HelpConsoleCommand(HelpConsoleCommand const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19369 };

  /// @brief Field _commandName, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::OptionalArgument_1<::StringW>* ____commandName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HelpConsoleCommand, ____commandName) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HelpConsoleCommand) == 0x40, "Size mismatch!");

} // namespace GlobalNamespace

#pragma once
// IWYU pragma private; include "GlobalNamespace/EnableMemoryTrackerConsoleCommand.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ConsoleCommandBase_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(EnableMemoryTrackerConsoleCommand)
namespace GlobalNamespace {
struct ConsoleMessage;
}
namespace GlobalNamespace {
template <typename T> class RequiredArgument_1;
}
namespace GlobalNamespace {
class SettingsManager;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
// Forward declare root types
namespace GlobalNamespace {
class EnableMemoryTrackerConsoleCommand;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::EnableMemoryTrackerConsoleCommand*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EnableMemoryTrackerConsoleCommand*, "", "EnableMemoryTrackerConsoleCommand");
// Dependencies ConsoleCommandBase
namespace GlobalNamespace {
// Is value type: false
// CS Name: EnableMemoryTrackerConsoleCommand
class CORDL_TYPE EnableMemoryTrackerConsoleCommand : public ::GlobalNamespace::ConsoleCommandBase {
public:
  // Declarations
  /// @brief Field _enable, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__enable, put = __cordl_internal_set__enable)) ::GlobalNamespace::RequiredArgument_1<bool>* _enable;

  /// @brief Field _settingsManager, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__settingsManager, put = __cordl_internal_set__settingsManager)) ::GlobalNamespace::SettingsManager* _settingsManager;

  __declspec(property(get = get_commandName)) ::StringW commandName;

  __declspec(property(get = get_description)) ::StringW description;

  /// @brief Method ExecuteAsync, addr 0x32cf888, size 0xb0, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<bool>* ExecuteAsync(::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>* messages);

  static inline ::GlobalNamespace::EnableMemoryTrackerConsoleCommand* New_ctor();

  constexpr ::GlobalNamespace::RequiredArgument_1<bool>* const& __cordl_internal_get__enable() const;

  constexpr ::GlobalNamespace::RequiredArgument_1<bool>*& __cordl_internal_get__enable();

  constexpr ::GlobalNamespace::SettingsManager* const& __cordl_internal_get__settingsManager() const;

  constexpr ::GlobalNamespace::SettingsManager*& __cordl_internal_get__settingsManager();

  constexpr void __cordl_internal_set__enable(::GlobalNamespace::RequiredArgument_1<bool>* value);

  constexpr void __cordl_internal_set__settingsManager(::GlobalNamespace::SettingsManager* value);

  /// @brief Method .ctor, addr 0x32cf938, size 0x134, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_commandName, addr 0x32cf800, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_commandName();

  /// @brief Method get_description, addr 0x32cf844, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_description();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnableMemoryTrackerConsoleCommand();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EnableMemoryTrackerConsoleCommand", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnableMemoryTrackerConsoleCommand(EnableMemoryTrackerConsoleCommand&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnableMemoryTrackerConsoleCommand", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnableMemoryTrackerConsoleCommand(EnableMemoryTrackerConsoleCommand const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19359 };

  /// @brief Field _settingsManager, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::SettingsManager* ____settingsManager;

  /// @brief Field _enable, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::RequiredArgument_1<bool>* ____enable;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EnableMemoryTrackerConsoleCommand, ____settingsManager) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnableMemoryTrackerConsoleCommand, ____enable) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EnableMemoryTrackerConsoleCommand) == 0x48, "Size mismatch!");

} // namespace GlobalNamespace

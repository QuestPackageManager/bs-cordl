#pragma once
// IWYU pragma private; include "GlobalNamespace/SetGarbageCollectorModeConsoleCommand.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ConsoleCommandBase_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(SetGarbageCollectorModeConsoleCommand)
namespace GlobalNamespace {
struct ConsoleMessage;
}
namespace GlobalNamespace {
template <typename T> class RequiredArgument_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace UnityEngine::Scripting {
struct GarbageCollector_Mode;
}
// Forward declare root types
namespace GlobalNamespace {
class SetGarbageCollectorModeConsoleCommand;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SetGarbageCollectorModeConsoleCommand*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SetGarbageCollectorModeConsoleCommand*, "", "SetGarbageCollectorModeConsoleCommand");
// [UsedImplicitly]
// Dependencies ConsoleCommandBase
namespace GlobalNamespace {
// Is value type: false
// CS Name: SetGarbageCollectorModeConsoleCommand
class CORDL_TYPE SetGarbageCollectorModeConsoleCommand : public ::GlobalNamespace::ConsoleCommandBase {
public:
  // Declarations
  /// @brief Field _mode, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__mode, put = __cordl_internal_set__mode)) ::GlobalNamespace::RequiredArgument_1<::UnityEngine::Scripting::GarbageCollector_Mode>* _mode;

  __declspec(property(get = get_commandName)) ::StringW commandName;

  __declspec(property(get = get_description)) ::StringW description;

  /// @brief Method ExecuteAsync, addr 0x3593238, size 0x1d0, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<bool>* ExecuteAsync(::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>* messages);

  static inline ::GlobalNamespace::SetGarbageCollectorModeConsoleCommand* New_ctor();

  constexpr ::GlobalNamespace::RequiredArgument_1<::UnityEngine::Scripting::GarbageCollector_Mode>* const& __cordl_internal_get__mode() const;

  constexpr ::GlobalNamespace::RequiredArgument_1<::UnityEngine::Scripting::GarbageCollector_Mode>*& __cordl_internal_get__mode();

  constexpr void __cordl_internal_set__mode(::GlobalNamespace::RequiredArgument_1<::UnityEngine::Scripting::GarbageCollector_Mode>* value);

  /// @brief Method .ctor, addr 0x3593408, size 0xb0, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_commandName, addr 0x35931b0, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_commandName();

  /// @brief Method get_description, addr 0x35931f4, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_description();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SetGarbageCollectorModeConsoleCommand();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SetGarbageCollectorModeConsoleCommand", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SetGarbageCollectorModeConsoleCommand(SetGarbageCollectorModeConsoleCommand&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SetGarbageCollectorModeConsoleCommand", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SetGarbageCollectorModeConsoleCommand(SetGarbageCollectorModeConsoleCommand const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19801 };

  /// @brief Field _mode, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::RequiredArgument_1<::UnityEngine::Scripting::GarbageCollector_Mode>* ____mode;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SetGarbageCollectorModeConsoleCommand, ____mode) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SetGarbageCollectorModeConsoleCommand) == 0x40, "Size mismatch!");

} // namespace GlobalNamespace

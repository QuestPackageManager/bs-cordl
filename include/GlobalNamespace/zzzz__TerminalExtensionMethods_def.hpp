#pragma once
// IWYU pragma private; include "GlobalNamespace/TerminalExtensionMethods.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(TerminalExtensionMethods)
namespace GlobalNamespace {
class ArgumentBase;
}
namespace GlobalNamespace {
class CommandNode;
}
namespace GlobalNamespace {
class ConsoleCommandBase;
}
namespace GlobalNamespace {
struct ConsoleMessage;
}
namespace UnityEngine {
struct LogType;
}
// Forward declare root types
namespace GlobalNamespace {
class TerminalExtensionMethods;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TerminalExtensionMethods*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TerminalExtensionMethods*, "", "TerminalExtensionMethods");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: TerminalExtensionMethods
class CORDL_TYPE TerminalExtensionMethods : public ::System::Object {
public:
  // Declarations
  /// @brief Method AddArguments, addr 0x32e9d94, size 0x16c, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::CommandNode* AddArguments(::GlobalNamespace::CommandNode* node, ::ArrayW<::GlobalNamespace::ArgumentBase*> cmdArguments);

  /// @brief Method ConvertToCommandNode, addr 0x32e9d0c, size 0x88, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::CommandNode* ConvertToCommandNode(::GlobalNamespace::ConsoleCommandBase* command);

  /// @brief Method Duplicate, addr 0x32e99cc, size 0x340, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::CommandNode* Duplicate(::GlobalNamespace::CommandNode* node);

  /// @brief Method ToConsoleMessage, addr 0x32e112c, size 0x50, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::ConsoleMessage ToConsoleMessage(::StringW message, ::UnityEngine::LogType type);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TerminalExtensionMethods();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TerminalExtensionMethods", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TerminalExtensionMethods(TerminalExtensionMethods&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TerminalExtensionMethods", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TerminalExtensionMethods(TerminalExtensionMethods const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19395 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::TerminalExtensionMethods) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace

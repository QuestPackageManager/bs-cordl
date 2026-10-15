#pragma once
// IWYU pragma private; include "GlobalNamespace/MemoryUsageConsoleCommand.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ConsoleCommandBase_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MemoryUsageConsoleCommand)
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
class MemoryUsageConsoleCommand;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MemoryUsageConsoleCommand*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MemoryUsageConsoleCommand*, "", "MemoryUsageConsoleCommand");
// [UsedImplicitly]
// Dependencies ConsoleCommandBase
namespace GlobalNamespace {
// Is value type: false
// CS Name: MemoryUsageConsoleCommand
class CORDL_TYPE MemoryUsageConsoleCommand : public ::GlobalNamespace::ConsoleCommandBase {
public:
  // Declarations
  __declspec(property(get = get_commandName)) ::StringW commandName;

  __declspec(property(get = get_description)) ::StringW description;

  /// @brief Method ExecuteAsync, addr 0x3588790, size 0x5c8, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<bool>* ExecuteAsync(::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>* messages);

  static inline ::GlobalNamespace::MemoryUsageConsoleCommand* New_ctor();

  /// @brief Method ToMebibytes, addr 0x3588d58, size 0x8, virtual false, abstract: false, final false
  static inline double_t ToMebibytes(int64_t bytes);

  /// @brief Method .ctor, addr 0x3588d60, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_commandName, addr 0x3588708, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_commandName();

  /// @brief Method get_description, addr 0x358874c, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_description();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MemoryUsageConsoleCommand();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MemoryUsageConsoleCommand", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MemoryUsageConsoleCommand(MemoryUsageConsoleCommand&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MemoryUsageConsoleCommand", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MemoryUsageConsoleCommand(MemoryUsageConsoleCommand const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19782 };

  /// @brief Field kBytesPerMebibyte offset 0xffffffff size 0x8
  static constexpr double_t kBytesPerMebibyte{ static_cast<double_t>(1048576.0) };

  /// @brief Field kMegabytesPerMebibyte offset 0xffffffff size 0x8
  static constexpr double_t kMegabytesPerMebibyte{ static_cast<double_t>(1.048576) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::MemoryUsageConsoleCommand) == 0x38, "Size mismatch!");

} // namespace GlobalNamespace

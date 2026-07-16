#pragma once
// IWYU pragma private; include "GlobalNamespace/GetPackIdsConsoleCommand.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ConsoleCommandBase_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GetPackIdsConsoleCommand)
namespace GlobalNamespace {
class BeatmapLevelsModel;
}
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
class GetPackIdsConsoleCommand;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GetPackIdsConsoleCommand*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GetPackIdsConsoleCommand*, "", "GetPackIdsConsoleCommand");
// Dependencies ConsoleCommandBase
namespace GlobalNamespace {
// Is value type: false
// CS Name: GetPackIdsConsoleCommand
class CORDL_TYPE GetPackIdsConsoleCommand : public ::GlobalNamespace::ConsoleCommandBase {
public:
  // Declarations
  /// @brief Field _beatmapLevelsModel, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevelsModel, put = __cordl_internal_set__beatmapLevelsModel)) ::GlobalNamespace::BeatmapLevelsModel* _beatmapLevelsModel;

  __declspec(property(get = get_commandName)) ::StringW commandName;

  __declspec(property(get = get_description)) ::StringW description;

  /// @brief Method ExecuteAsync, addr 0x32db470, size 0x45c, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<bool>* ExecuteAsync(::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>* messages);

  static inline ::GlobalNamespace::GetPackIdsConsoleCommand* New_ctor();

  constexpr ::GlobalNamespace::BeatmapLevelsModel* const& __cordl_internal_get__beatmapLevelsModel() const;

  constexpr ::GlobalNamespace::BeatmapLevelsModel*& __cordl_internal_get__beatmapLevelsModel();

  constexpr void __cordl_internal_set__beatmapLevelsModel(::GlobalNamespace::BeatmapLevelsModel* value);

  /// @brief Method .ctor, addr 0x32db8cc, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_commandName, addr 0x32db3e8, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_commandName();

  /// @brief Method get_description, addr 0x32db42c, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_description();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GetPackIdsConsoleCommand();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GetPackIdsConsoleCommand", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GetPackIdsConsoleCommand(GetPackIdsConsoleCommand&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GetPackIdsConsoleCommand", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GetPackIdsConsoleCommand(GetPackIdsConsoleCommand const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19368 };

  /// @brief Field _beatmapLevelsModel, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelsModel* ____beatmapLevelsModel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GetPackIdsConsoleCommand, ____beatmapLevelsModel) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GetPackIdsConsoleCommand) == 0x40, "Size mismatch!");

} // namespace GlobalNamespace

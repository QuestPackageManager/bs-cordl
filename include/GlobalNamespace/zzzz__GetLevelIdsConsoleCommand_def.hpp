#pragma once
// IWYU pragma private; include "GlobalNamespace\GetLevelIdsConsoleCommand.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ConsoleCommandBase_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GetLevelIdsConsoleCommand)
namespace GlobalNamespace {
class BeatmapLevelsModel;
}
namespace GlobalNamespace {
struct ConsoleMessage;
}
namespace GlobalNamespace {
template <typename T> class RequiredArgument_1;
}
namespace GlobalNamespace {
class SongRunningHelper;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
// Forward declare root types
namespace GlobalNamespace {
class GetLevelIdsConsoleCommand;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GetLevelIdsConsoleCommand*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GetLevelIdsConsoleCommand*, "", "GetLevelIdsConsoleCommand");
// Dependencies ConsoleCommandBase
namespace GlobalNamespace {
// Is value type: false
// CS Name: GetLevelIdsConsoleCommand
class CORDL_TYPE GetLevelIdsConsoleCommand : public ::GlobalNamespace::ConsoleCommandBase {
public:
  // Declarations
  /// @brief Field _beatmapLevelsModel, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevelsModel, put = __cordl_internal_set__beatmapLevelsModel)) ::GlobalNamespace::BeatmapLevelsModel* _beatmapLevelsModel;

  /// @brief Field _packId, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__packId, put = __cordl_internal_set__packId)) ::GlobalNamespace::RequiredArgument_1<::StringW>* _packId;

  /// @brief Field _songRunningHelper, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__songRunningHelper, put = __cordl_internal_set__songRunningHelper)) ::GlobalNamespace::SongRunningHelper* _songRunningHelper;

  __declspec(property(get = get_commandName)) ::StringW commandName;

  __declspec(property(get = get_description)) ::StringW description;

  /// @brief Method ExecuteAsync, addr 0x32dc748, size 0x378, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<bool>* ExecuteAsync(::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>* messages);

  /// @brief Method Initialize, addr 0x32dc364, size 0x3e4, virtual true, abstract: false, final false
  inline void Initialize();

  static inline ::GlobalNamespace::GetLevelIdsConsoleCommand* New_ctor();

  constexpr ::GlobalNamespace::BeatmapLevelsModel* const& __cordl_internal_get__beatmapLevelsModel() const;

  constexpr ::GlobalNamespace::BeatmapLevelsModel*& __cordl_internal_get__beatmapLevelsModel();

  constexpr ::GlobalNamespace::RequiredArgument_1<::StringW>* const& __cordl_internal_get__packId() const;

  constexpr ::GlobalNamespace::RequiredArgument_1<::StringW>*& __cordl_internal_get__packId();

  constexpr ::GlobalNamespace::SongRunningHelper* const& __cordl_internal_get__songRunningHelper() const;

  constexpr ::GlobalNamespace::SongRunningHelper*& __cordl_internal_get__songRunningHelper();

  constexpr void __cordl_internal_set__beatmapLevelsModel(::GlobalNamespace::BeatmapLevelsModel* value);

  constexpr void __cordl_internal_set__packId(::GlobalNamespace::RequiredArgument_1<::StringW>* value);

  constexpr void __cordl_internal_set__songRunningHelper(::GlobalNamespace::SongRunningHelper* value);

  /// @brief Method .ctor, addr 0x32dcac0, size 0xb0, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_commandName, addr 0x32dc2dc, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_commandName();

  /// @brief Method get_description, addr 0x32dc320, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_description();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GetLevelIdsConsoleCommand();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GetLevelIdsConsoleCommand", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GetLevelIdsConsoleCommand(GetLevelIdsConsoleCommand&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GetLevelIdsConsoleCommand", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GetLevelIdsConsoleCommand(GetLevelIdsConsoleCommand const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19398 };

  /// @brief Field _songRunningHelper, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::SongRunningHelper* ____songRunningHelper;

  /// @brief Field _beatmapLevelsModel, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelsModel* ____beatmapLevelsModel;

  /// @brief Field _packId, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::RequiredArgument_1<::StringW>* ____packId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GetLevelIdsConsoleCommand, ____songRunningHelper) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GetLevelIdsConsoleCommand, ____beatmapLevelsModel) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GetLevelIdsConsoleCommand, ____packId) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GetLevelIdsConsoleCommand) == 0x50, "Size mismatch!");

} // namespace GlobalNamespace

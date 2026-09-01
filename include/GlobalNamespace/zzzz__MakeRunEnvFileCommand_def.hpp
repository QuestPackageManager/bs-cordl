#pragma once
// IWYU pragma private; include "GlobalNamespace\MakeRunEnvFileCommand.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MakeRunsongFileBaseCommand_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MakeRunEnvFileCommand)
namespace GlobalNamespace {
struct BeatmapDifficulty;
}
namespace GlobalNamespace {
class BeatmapLevelPack;
}
namespace GlobalNamespace {
class BeatmapLevel;
}
namespace GlobalNamespace {
struct ConsoleMessage;
}
namespace GlobalNamespace {
template <typename T> class RequiredArgument_1;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class MakeRunEnvFileCommand;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MakeRunEnvFileCommand*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MakeRunEnvFileCommand*, "", "MakeRunEnvFileCommand");
// Dependencies MakeRunsongFileBaseCommand
namespace GlobalNamespace {
// Is value type: false
// CS Name: MakeRunEnvFileCommand
class CORDL_TYPE MakeRunEnvFileCommand : public ::GlobalNamespace::MakeRunsongFileBaseCommand {
public:
  // Declarations
  /// @brief Field _envId, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__envId, put = __cordl_internal_set__envId)) ::GlobalNamespace::RequiredArgument_1<::StringW>* _envId;

  __declspec(property(get = get_commandName)) ::StringW commandName;

  __declspec(property(get = get_description)) ::StringW description;

  /// @brief Method GetAllEnvironmentsSongsFromPack, addr 0x32dfb58, size 0x470, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevel*>*>*
  GetAllEnvironmentsSongsFromPack(::GlobalNamespace::BeatmapLevelPack* pack, ::GlobalNamespace::BeatmapDifficulty difficulty, ::StringW characteristic);

  static inline ::GlobalNamespace::MakeRunEnvFileCommand* New_ctor();

  /// @brief Method TryGetLevelsToPlay, addr 0x32df1b8, size 0x9a0, virtual true, abstract: false, final false
  inline bool TryGetLevelsToPlay(int32_t desiredNumberOfLevels, ::StringW characteristic, ::GlobalNamespace::BeatmapDifficulty difficulty,
                                 ::by_ref<::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>*> messages,
                                 ::by_ref<::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevel*>*> levelsToPlay);

  constexpr ::GlobalNamespace::RequiredArgument_1<::StringW>* const& __cordl_internal_get__envId() const;

  constexpr ::GlobalNamespace::RequiredArgument_1<::StringW>*& __cordl_internal_get__envId();

  constexpr void __cordl_internal_set__envId(::GlobalNamespace::RequiredArgument_1<::StringW>* value);

  /// @brief Method .ctor, addr 0x32dffc8, size 0xb4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_commandName, addr 0x32df130, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_commandName();

  /// @brief Method get_description, addr 0x32df174, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_description();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MakeRunEnvFileCommand();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MakeRunEnvFileCommand", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MakeRunEnvFileCommand(MakeRunEnvFileCommand&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MakeRunEnvFileCommand", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MakeRunEnvFileCommand(MakeRunEnvFileCommand const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19405 };

  /// @brief Field _envId, offset: 0x70, size: 0x8, def value: None
  ::GlobalNamespace::RequiredArgument_1<::StringW>* ____envId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MakeRunEnvFileCommand, ____envId) == 0x70, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MakeRunEnvFileCommand) == 0x78, "Size mismatch!");

} // namespace GlobalNamespace

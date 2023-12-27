#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapDifficultyMask_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifierMask_def.hpp"
#include "GlobalNamespace/zzzz__GameplayServerControlSettings_def.hpp"
#include "GlobalNamespace/zzzz__GameplayServerMode_def.hpp"
#include "GlobalNamespace/zzzz__SongPackMask_def.hpp"
#include "GlobalNamespace/zzzz__SongSelectionMode_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CreateServerFormData)
namespace GlobalNamespace {
struct SongPackMask;
}
namespace GlobalNamespace {
struct BeatmapDifficultyMask;
}
namespace GlobalNamespace {
struct GameplayModifierMask;
}
namespace GlobalNamespace {
struct GameplayServerMode;
}
namespace GlobalNamespace {
struct SongSelectionMode;
}
namespace GlobalNamespace {
struct GameplayServerControlSettings;
}
// Forward declare root types
namespace GlobalNamespace {
struct CreateServerFormData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CreateServerFormData);
// Type: ::CreateServerFormData
// SizeInfo { instance_size: 80, native_size: 80, calculated_instance_size: 80, calculated_native_size: 92, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12959)), TypeDefinitionIndex(TypeDefinitionIndex(15047)), TypeDefinitionIndex(TypeDefinitionIndex(14997)),
// TypeDefinitionIndex(TypeDefinitionIndex(14719)), TypeDefinitionIndex(TypeDefinitionIndex(12768)), TypeDefinitionIndex(TypeDefinitionIndex(12759))} Self:
// TypeDefinitionIndex(TypeDefinitionIndex(5565)) CS Name: ::CreateServerFormData
struct CORDL_TYPE CreateServerFormData {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "usePassword", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "password", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "maxPlayers", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "allowInviteOthers", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "netDiscoverable", ty: "bool",
  // modifiers: "", def_value: None }, CppParam { name: "difficulties", ty: "::GlobalNamespace::BeatmapDifficultyMask", modifiers: "", def_value: None }, CppParam { name: "modifiers", ty:
  // "::GlobalNamespace::GameplayModifierMask", modifiers: "", def_value: None }, CppParam { name: "songPacks", ty: "::GlobalNamespace::SongPackMask", modifiers: "", def_value: None }, CppParam {
  // name: "gameplayServerMode", ty: "::GlobalNamespace::GameplayServerMode", modifiers: "", def_value: None }, CppParam { name: "songSelectionMode", ty: "::GlobalNamespace::SongSelectionMode",
  // modifiers: "", def_value: None }, CppParam { name: "gameplayServerControlSettings", ty: "::GlobalNamespace::GameplayServerControlSettings", modifiers: "", def_value: None }]
  constexpr CreateServerFormData(bool usePassword, ::StringW password, int32_t maxPlayers, bool allowInviteOthers, bool netDiscoverable, ::GlobalNamespace::BeatmapDifficultyMask difficulties,
                                 ::GlobalNamespace::GameplayModifierMask modifiers, ::GlobalNamespace::SongPackMask songPacks, ::GlobalNamespace::GameplayServerMode gameplayServerMode,
                                 ::GlobalNamespace::SongSelectionMode songSelectionMode, ::GlobalNamespace::GameplayServerControlSettings gameplayServerControlSettings) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr CreateServerFormData();

  /// @brief Field usePassword, offset: 0x0, size: 0x1, def value: None
  bool usePassword;

  /// @brief Field password, offset: 0x8, size: 0x8, def value: None
  ::StringW password;

  /// @brief Field maxPlayers, offset: 0x10, size: 0x4, def value: None
  int32_t maxPlayers;

  /// @brief Field allowInviteOthers, offset: 0x14, size: 0x1, def value: None
  bool allowInviteOthers;

  /// @brief Field netDiscoverable, offset: 0x15, size: 0x1, def value: None
  bool netDiscoverable;

  /// @brief Field difficulties, offset: 0x16, size: 0x1, def value: None
  ::GlobalNamespace::BeatmapDifficultyMask difficulties;

  /// @brief Field modifiers, offset: 0x18, size: 0x2, def value: None
  ::GlobalNamespace::GameplayModifierMask modifiers;

  /// @brief Field songPacks, offset: 0x20, size: 0x20, def value: None
  ::GlobalNamespace::SongPackMask songPacks;

  /// @brief Field gameplayServerMode, offset: 0x40, size: 0x4, def value: None
  ::GlobalNamespace::GameplayServerMode gameplayServerMode;

  /// @brief Field songSelectionMode, offset: 0x44, size: 0x4, def value: None
  ::GlobalNamespace::SongSelectionMode songSelectionMode;

  /// @brief Field gameplayServerControlSettings, offset: 0x48, size: 0x4, def value: None
  ::GlobalNamespace::GameplayServerControlSettings gameplayServerControlSettings;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CreateServerFormData, 0x50>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CreateServerFormData, "", "CreateServerFormData");

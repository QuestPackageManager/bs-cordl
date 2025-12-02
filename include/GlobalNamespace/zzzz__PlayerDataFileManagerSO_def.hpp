#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerDataFileManagerSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PlayerDataFileManagerSO)
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerDataFileManagerSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PlayerDataFileManagerSO);
// Dependencies PersistentScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerDataFileManagerSO
class CORDL_TYPE PlayerDataFileManagerSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  /// @brief Field _allSongPackSerializedName, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__allSongPackSerializedName, put = __cordl_internal_set__allSongPackSerializedName)) ::StringW _allSongPackSerializedName;

  /// @brief Field _buildInSongPackSerializedName, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__buildInSongPackSerializedName, put = __cordl_internal_set__buildInSongPackSerializedName)) ::StringW _buildInSongPackSerializedName;

  /// @brief Field _defaultLastSelectedBeatmapCharacteristic, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__defaultLastSelectedBeatmapCharacteristic,
                      put = __cordl_internal_set__defaultLastSelectedBeatmapCharacteristic)) ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>
      _defaultLastSelectedBeatmapCharacteristic;

  __declspec(property(get = get_allSongPackSerializedName)) ::StringW allSongPackSerializedName;

  __declspec(property(get = get_buildInSongPackSerializedName)) ::StringW buildInSongPackSerializedName;

  __declspec(property(get = get_defaultLastSelectedBeatmapCharacteristic)) ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> defaultLastSelectedBeatmapCharacteristic;

  static inline ::GlobalNamespace::PlayerDataFileManagerSO* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__allSongPackSerializedName() const;

  constexpr ::StringW& __cordl_internal_get__allSongPackSerializedName();

  constexpr ::StringW const& __cordl_internal_get__buildInSongPackSerializedName() const;

  constexpr ::StringW& __cordl_internal_get__buildInSongPackSerializedName();

  constexpr ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> const& __cordl_internal_get__defaultLastSelectedBeatmapCharacteristic() const;

  constexpr ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>& __cordl_internal_get__defaultLastSelectedBeatmapCharacteristic();

  constexpr void __cordl_internal_set__allSongPackSerializedName(::StringW value);

  constexpr void __cordl_internal_set__buildInSongPackSerializedName(::StringW value);

  constexpr void __cordl_internal_set__defaultLastSelectedBeatmapCharacteristic(::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> value);

  /// @brief Method .ctor, addr 0x361fce0, size 0x70, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_allSongPackSerializedName, addr 0x361fcd8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_allSongPackSerializedName();

  /// @brief Method get_buildInSongPackSerializedName, addr 0x361fcd0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_buildInSongPackSerializedName();

  /// @brief Method get_defaultLastSelectedBeatmapCharacteristic, addr 0x361fcc8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> get_defaultLastSelectedBeatmapCharacteristic();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerDataFileManagerSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayerDataFileManagerSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerDataFileManagerSO(PlayerDataFileManagerSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerDataFileManagerSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerDataFileManagerSO(PlayerDataFileManagerSO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15138 };

  /// @brief Field _defaultLastSelectedBeatmapCharacteristic, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> ____defaultLastSelectedBeatmapCharacteristic;

  /// @brief Field _buildInSongPackSerializedName, offset: 0x20, size: 0x8, def value: None
  ::StringW ____buildInSongPackSerializedName;

  /// @brief Field _allSongPackSerializedName, offset: 0x28, size: 0x8, def value: None
  ::StringW ____allSongPackSerializedName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerDataFileManagerSO, ____defaultLastSelectedBeatmapCharacteristic) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerDataFileManagerSO, ____buildInSongPackSerializedName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerDataFileManagerSO, ____allSongPackSerializedName) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayerDataFileManagerSO, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlayerDataFileManagerSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerDataFileManagerSO*, "", "PlayerDataFileManagerSO");

#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MissionDataSO)
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace GlobalNamespace {
struct BeatmapDifficulty;
}
namespace GlobalNamespace {
struct BeatmapKey;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace GlobalNamespace {
class MissionHelpSO;
}
namespace GlobalNamespace {
class MissionObjective;
}
// Forward declare root types
namespace GlobalNamespace {
class MissionDataSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MissionDataSO);
// Type: ::MissionDataSO
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MissionDataSO*
class CORDL_TYPE MissionDataSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  /// @brief Field _beatmapCharacteristic, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapCharacteristic, put = __cordl_internal_set__beatmapCharacteristic))::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> _beatmapCharacteristic;

  /// @brief Field _beatmapDifficulty, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__beatmapDifficulty, put = __cordl_internal_set__beatmapDifficulty))::GlobalNamespace::BeatmapDifficulty _beatmapDifficulty;

  /// @brief Field _gameplayModifiers, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__gameplayModifiers, put = __cordl_internal_set__gameplayModifiers))::GlobalNamespace::GameplayModifiers* _gameplayModifiers;

  /// @brief Field _levelId, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__levelId, put = __cordl_internal_set__levelId))::StringW _levelId;

  /// @brief Field _missionHelp, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__missionHelp, put = __cordl_internal_set__missionHelp))::UnityW<::GlobalNamespace::MissionHelpSO> _missionHelp;

  /// @brief Field _missionObjectives, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__missionObjectives,
                      put = __cordl_internal_set__missionObjectives))::ArrayW<::GlobalNamespace::MissionObjective*, ::Array<::GlobalNamespace::MissionObjective*>*> _missionObjectives;

  /// @brief Field _songName, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__songName, put = __cordl_internal_set__songName))::StringW _songName;

  __declspec(property(get = get_beatmapCharacteristic))::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> beatmapCharacteristic;

  __declspec(property(get = get_beatmapDifficulty))::GlobalNamespace::BeatmapDifficulty beatmapDifficulty;

  __declspec(property(get = get_beatmapKey))::GlobalNamespace::BeatmapKey beatmapKey;

  __declspec(property(get = get_gameplayModifiers))::GlobalNamespace::GameplayModifiers* gameplayModifiers;

  __declspec(property(get = get_missionHelp))::UnityW<::GlobalNamespace::MissionHelpSO> missionHelp;

  __declspec(property(get = get_missionObjectives))::ArrayW<::GlobalNamespace::MissionObjective*, ::Array<::GlobalNamespace::MissionObjective*>*> missionObjectives;

  __declspec(property(get = get_songName))::StringW songName;

  static inline ::GlobalNamespace::MissionDataSO* New_ctor();

  constexpr ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> const& __cordl_internal_get__beatmapCharacteristic() const;

  constexpr ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>& __cordl_internal_get__beatmapCharacteristic();

  constexpr ::GlobalNamespace::BeatmapDifficulty const& __cordl_internal_get__beatmapDifficulty() const;

  constexpr ::GlobalNamespace::BeatmapDifficulty& __cordl_internal_get__beatmapDifficulty();

  constexpr ::GlobalNamespace::GameplayModifiers*& __cordl_internal_get__gameplayModifiers();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayModifiers*> const& __cordl_internal_get__gameplayModifiers() const;

  constexpr ::StringW const& __cordl_internal_get__levelId() const;

  constexpr ::StringW& __cordl_internal_get__levelId();

  constexpr ::UnityW<::GlobalNamespace::MissionHelpSO> const& __cordl_internal_get__missionHelp() const;

  constexpr ::UnityW<::GlobalNamespace::MissionHelpSO>& __cordl_internal_get__missionHelp();

  constexpr ::ArrayW<::GlobalNamespace::MissionObjective*, ::Array<::GlobalNamespace::MissionObjective*>*> const& __cordl_internal_get__missionObjectives() const;

  constexpr ::ArrayW<::GlobalNamespace::MissionObjective*, ::Array<::GlobalNamespace::MissionObjective*>*>& __cordl_internal_get__missionObjectives();

  constexpr ::StringW const& __cordl_internal_get__songName() const;

  constexpr ::StringW& __cordl_internal_get__songName();

  constexpr void __cordl_internal_set__beatmapCharacteristic(::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> value);

  constexpr void __cordl_internal_set__beatmapDifficulty(::GlobalNamespace::BeatmapDifficulty value);

  constexpr void __cordl_internal_set__gameplayModifiers(::GlobalNamespace::GameplayModifiers* value);

  constexpr void __cordl_internal_set__levelId(::StringW value);

  constexpr void __cordl_internal_set__missionHelp(::UnityW<::GlobalNamespace::MissionHelpSO> value);

  constexpr void __cordl_internal_set__missionObjectives(::ArrayW<::GlobalNamespace::MissionObjective*, ::Array<::GlobalNamespace::MissionObjective*>*> value);

  constexpr void __cordl_internal_set__songName(::StringW value);

  /// @brief Method .ctor, addr 0x12d615c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_beatmapCharacteristic, addr 0x12d613c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> get_beatmapCharacteristic();

  /// @brief Method get_beatmapDifficulty, addr 0x12d6144, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapDifficulty get_beatmapDifficulty();

  /// @brief Method get_beatmapKey, addr 0x12d611c, size 0x20, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapKey get_beatmapKey();

  /// @brief Method get_gameplayModifiers, addr 0x12d614c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::GameplayModifiers* get_gameplayModifiers();

  /// @brief Method get_missionHelp, addr 0x12d6154, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::MissionHelpSO> get_missionHelp();

  /// @brief Method get_missionObjectives, addr 0x12d6114, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::MissionObjective*, ::Array<::GlobalNamespace::MissionObjective*>*> get_missionObjectives();

  /// @brief Method get_songName, addr 0x12d610c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_songName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MissionDataSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MissionDataSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MissionDataSO(MissionDataSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MissionDataSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MissionDataSO(MissionDataSO const&) = delete;

  /// @brief Field _levelId, offset: 0x18, size: 0x8, def value: None
  ::StringW ____levelId;

  /// @brief Field _songName, offset: 0x20, size: 0x8, def value: None
  ::StringW ____songName;

  /// @brief Field _beatmapCharacteristic, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> ____beatmapCharacteristic;

  /// @brief Field _beatmapDifficulty, offset: 0x30, size: 0x4, def value: None
  ::GlobalNamespace::BeatmapDifficulty ____beatmapDifficulty;

  /// @brief Field _missionObjectives, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::MissionObjective*, ::Array<::GlobalNamespace::MissionObjective*>*> ____missionObjectives;

  /// @brief Field _gameplayModifiers, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::GameplayModifiers* ____gameplayModifiers;

  /// @brief Field _missionHelp, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MissionHelpSO> ____missionHelp;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MissionDataSO, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionDataSO, ____levelId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionDataSO, ____songName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionDataSO, ____beatmapCharacteristic) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionDataSO, ____beatmapDifficulty) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionDataSO, ____missionObjectives) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionDataSO, ____gameplayModifiers) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionDataSO, ____missionHelp) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MissionDataSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionDataSO*, "", "MissionDataSO");

#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "GlobalNamespace/zzzz__SceneSetupData_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(StandardGameplaySceneSetupData)
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace GlobalNamespace {
struct BeatmapDifficulty;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
// Forward declare root types
namespace GlobalNamespace {
class StandardGameplaySceneSetupData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::StandardGameplaySceneSetupData);
// Type: ::StandardGameplaySceneSetupData
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 65, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(14717)), TypeDefinitionIndex(TypeDefinitionIndex(15408))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6058))
// CS Name: ::StandardGameplaySceneSetupData*
class CORDL_TYPE StandardGameplaySceneSetupData : public ::GlobalNamespace::SceneSetupData {
public:
  // Declarations
  /// @brief Field autoRestart, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_autoRestart, put = __cordl_internal_set_autoRestart)) bool autoRestart;

  /// @brief Field previewBeatmapLevel, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_previewBeatmapLevel, put = __cordl_internal_set_previewBeatmapLevel))::GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel;

  /// @brief Field beatmapDifficulty, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_beatmapDifficulty, put = __cordl_internal_set_beatmapDifficulty))::GlobalNamespace::BeatmapDifficulty beatmapDifficulty;

  /// @brief Field beatmapCharacteristic, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_beatmapCharacteristic, put = __cordl_internal_set_beatmapCharacteristic))::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> beatmapCharacteristic;

  /// @brief Field backButtonText, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_backButtonText, put = __cordl_internal_set_backButtonText))::StringW backButtonText;

  /// @brief Field gameplayModifiers, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_gameplayModifiers, put = __cordl_internal_set_gameplayModifiers))::GlobalNamespace::GameplayModifiers* gameplayModifiers;

  /// @brief Field startPaused, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get_startPaused, put = __cordl_internal_set_startPaused)) bool startPaused;

  constexpr bool& __cordl_internal_get_autoRestart();

  constexpr bool const& __cordl_internal_get_autoRestart() const;

  constexpr void __cordl_internal_set_autoRestart(bool value);

  constexpr ::GlobalNamespace::IPreviewBeatmapLevel*& __cordl_internal_get_previewBeatmapLevel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IPreviewBeatmapLevel*> const& __cordl_internal_get_previewBeatmapLevel() const;

  constexpr void __cordl_internal_set_previewBeatmapLevel(::GlobalNamespace::IPreviewBeatmapLevel* value);

  constexpr ::GlobalNamespace::BeatmapDifficulty& __cordl_internal_get_beatmapDifficulty();

  constexpr ::GlobalNamespace::BeatmapDifficulty const& __cordl_internal_get_beatmapDifficulty() const;

  constexpr void __cordl_internal_set_beatmapDifficulty(::GlobalNamespace::BeatmapDifficulty value);

  constexpr ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>& __cordl_internal_get_beatmapCharacteristic();

  constexpr ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> const& __cordl_internal_get_beatmapCharacteristic() const;

  constexpr void __cordl_internal_set_beatmapCharacteristic(::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> value);

  constexpr ::StringW& __cordl_internal_get_backButtonText();

  constexpr ::StringW const& __cordl_internal_get_backButtonText() const;

  constexpr void __cordl_internal_set_backButtonText(::StringW value);

  constexpr ::GlobalNamespace::GameplayModifiers*& __cordl_internal_get_gameplayModifiers();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayModifiers*> const& __cordl_internal_get_gameplayModifiers() const;

  constexpr void __cordl_internal_set_gameplayModifiers(::GlobalNamespace::GameplayModifiers* value);

  constexpr bool& __cordl_internal_get_startPaused();

  constexpr bool const& __cordl_internal_get_startPaused() const;

  constexpr void __cordl_internal_set_startPaused(bool value);

  static inline ::GlobalNamespace::StandardGameplaySceneSetupData* New_ctor(bool autoRestart, ::GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel,
                                                                            ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty, ::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic,
                                                                            ::StringW backButtonText, ::GlobalNamespace::GameplayModifiers* gameplayModifiers, bool startPaused);

  /// @brief Method .ctor, addr 0x231cdfc, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(bool autoRestart, ::GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel, ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty,
                    ::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic, ::StringW backButtonText, ::GlobalNamespace::GameplayModifiers* gameplayModifiers, bool startPaused);

  // Ctor Parameters [CppParam { name: "", ty: "StandardGameplaySceneSetupData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StandardGameplaySceneSetupData(StandardGameplaySceneSetupData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StandardGameplaySceneSetupData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StandardGameplaySceneSetupData(StandardGameplaySceneSetupData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StandardGameplaySceneSetupData();

public:
  /// @brief Field autoRestart, offset: 0x10, size: 0x1, def value: None
  bool ___autoRestart;

  /// @brief Field previewBeatmapLevel, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::IPreviewBeatmapLevel* ___previewBeatmapLevel;

  /// @brief Field beatmapDifficulty, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::BeatmapDifficulty ___beatmapDifficulty;

  /// @brief Field beatmapCharacteristic, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> ___beatmapCharacteristic;

  /// @brief Field backButtonText, offset: 0x30, size: 0x8, def value: None
  ::StringW ___backButtonText;

  /// @brief Field gameplayModifiers, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::GameplayModifiers* ___gameplayModifiers;

  /// @brief Field startPaused, offset: 0x40, size: 0x1, def value: None
  bool ___startPaused;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StandardGameplaySceneSetupData, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardGameplaySceneSetupData, ___autoRestart) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardGameplaySceneSetupData, ___previewBeatmapLevel) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardGameplaySceneSetupData, ___beatmapDifficulty) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardGameplaySceneSetupData, ___beatmapCharacteristic) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardGameplaySceneSetupData, ___backButtonText) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardGameplaySceneSetupData, ___gameplayModifiers) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardGameplaySceneSetupData, ___startPaused) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::StandardGameplaySceneSetupData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StandardGameplaySceneSetupData*, "", "StandardGameplaySceneSetupData");

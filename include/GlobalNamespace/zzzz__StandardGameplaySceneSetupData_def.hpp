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
class IPreviewBeatmapLevel;
}
namespace GlobalNamespace {
struct BeatmapDifficulty;
}
namespace GlobalNamespace {
class GameplayModifiers;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15408)), TypeDefinitionIndex(TypeDefinitionIndex(14717))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6058))
// CS Name: ::StandardGameplaySceneSetupData*
class CORDL_TYPE StandardGameplaySceneSetupData : public ::GlobalNamespace::SceneSetupData {
public:
  // Declarations
  /// @brief Field autoRestart, offset 0x10, size 0x1
  __declspec(property(get = __get_autoRestart, put = __set_autoRestart)) bool autoRestart;

  /// @brief Field previewBeatmapLevel, offset 0x18, size 0x8
  __declspec(property(get = __get_previewBeatmapLevel, put = __set_previewBeatmapLevel))::GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel;

  /// @brief Field beatmapDifficulty, offset 0x20, size 0x4
  __declspec(property(get = __get_beatmapDifficulty, put = __set_beatmapDifficulty))::GlobalNamespace::BeatmapDifficulty beatmapDifficulty;

  /// @brief Field beatmapCharacteristic, offset 0x28, size 0x8
  __declspec(property(get = __get_beatmapCharacteristic, put = __set_beatmapCharacteristic))::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic;

  /// @brief Field backButtonText, offset 0x30, size 0x8
  __declspec(property(get = __get_backButtonText, put = __set_backButtonText))::StringW backButtonText;

  /// @brief Field gameplayModifiers, offset 0x38, size 0x8
  __declspec(property(get = __get_gameplayModifiers, put = __set_gameplayModifiers))::GlobalNamespace::GameplayModifiers* gameplayModifiers;

  /// @brief Field startPaused, offset 0x40, size 0x1
  __declspec(property(get = __get_startPaused, put = __set_startPaused)) bool startPaused;

  constexpr bool& __get_autoRestart();

  constexpr bool const& __get_autoRestart() const;

  constexpr void __set_autoRestart(bool value);

  constexpr ::GlobalNamespace::IPreviewBeatmapLevel*& __get_previewBeatmapLevel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IPreviewBeatmapLevel*> const& __get_previewBeatmapLevel() const;

  constexpr void __set_previewBeatmapLevel(::GlobalNamespace::IPreviewBeatmapLevel* value);

  constexpr ::GlobalNamespace::BeatmapDifficulty& __get_beatmapDifficulty();

  constexpr ::GlobalNamespace::BeatmapDifficulty const& __get_beatmapDifficulty() const;

  constexpr void __set_beatmapDifficulty(::GlobalNamespace::BeatmapDifficulty value);

  constexpr ::GlobalNamespace::BeatmapCharacteristicSO*& __get_beatmapCharacteristic();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCharacteristicSO*> const& __get_beatmapCharacteristic() const;

  constexpr void __set_beatmapCharacteristic(::GlobalNamespace::BeatmapCharacteristicSO* value);

  constexpr ::StringW& __get_backButtonText();

  constexpr ::StringW const& __get_backButtonText() const;

  constexpr void __set_backButtonText(::StringW value);

  constexpr ::GlobalNamespace::GameplayModifiers*& __get_gameplayModifiers();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayModifiers*> const& __get_gameplayModifiers() const;

  constexpr void __set_gameplayModifiers(::GlobalNamespace::GameplayModifiers* value);

  constexpr bool& __get_startPaused();

  constexpr bool const& __get_startPaused() const;

  constexpr void __set_startPaused(bool value);

  static inline ::GlobalNamespace::StandardGameplaySceneSetupData* New_ctor(bool autoRestart, ::GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel,
                                                                            ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty, ::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic,
                                                                            ::StringW backButtonText, ::GlobalNamespace::GameplayModifiers* gameplayModifiers, bool startPaused);

  /// @brief Method .ctor addr 0x231cdfc size 0x6c virtual false final false
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
  ::GlobalNamespace::BeatmapCharacteristicSO* ___beatmapCharacteristic;

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

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::StandardGameplaySceneSetupData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StandardGameplaySceneSetupData*, "", "StandardGameplaySceneSetupData");

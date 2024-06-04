#pragma once
// IWYU pragma private; include "GlobalNamespace/StandardGameplaySceneSetupData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
#include "GlobalNamespace/zzzz__SceneSetupData_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(StandardGameplaySceneSetupData)
namespace GlobalNamespace {
struct BeatmapKey;
}
namespace GlobalNamespace {
class BeatmapLevel;
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
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 73, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::StandardGameplaySceneSetupData*
class CORDL_TYPE StandardGameplaySceneSetupData : public ::GlobalNamespace::SceneSetupData {
public:
  // Declarations
  /// @brief Field autoRestart, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_autoRestart, put = __cordl_internal_set_autoRestart)) bool autoRestart;

  /// @brief Field backButtonText, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_backButtonText, put = __cordl_internal_set_backButtonText))::StringW backButtonText;

  /// @brief Field beatmapKey, offset 0x18, size 0x18
  __declspec(property(get = __cordl_internal_get_beatmapKey, put = __cordl_internal_set_beatmapKey))::GlobalNamespace::BeatmapKey beatmapKey;

  /// @brief Field beatmapLevel, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_beatmapLevel, put = __cordl_internal_set_beatmapLevel))::GlobalNamespace::BeatmapLevel* beatmapLevel;

  /// @brief Field gameplayModifiers, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_gameplayModifiers, put = __cordl_internal_set_gameplayModifiers))::GlobalNamespace::GameplayModifiers* gameplayModifiers;

  /// @brief Field startPaused, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get_startPaused, put = __cordl_internal_set_startPaused)) bool startPaused;

  static inline ::GlobalNamespace::StandardGameplaySceneSetupData* New_ctor(bool autoRestart, ByRef<::GlobalNamespace::BeatmapKey> beatmapKey, ::GlobalNamespace::BeatmapLevel* beatmapLevel,
                                                                            ::StringW backButtonText, ::GlobalNamespace::GameplayModifiers* gameplayModifiers, bool startPaused);

  constexpr bool const& __cordl_internal_get_autoRestart() const;

  constexpr bool& __cordl_internal_get_autoRestart();

  constexpr ::StringW const& __cordl_internal_get_backButtonText() const;

  constexpr ::StringW& __cordl_internal_get_backButtonText();

  constexpr ::GlobalNamespace::BeatmapKey const& __cordl_internal_get_beatmapKey() const;

  constexpr ::GlobalNamespace::BeatmapKey& __cordl_internal_get_beatmapKey();

  constexpr ::GlobalNamespace::BeatmapLevel*& __cordl_internal_get_beatmapLevel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevel*> const& __cordl_internal_get_beatmapLevel() const;

  constexpr ::GlobalNamespace::GameplayModifiers*& __cordl_internal_get_gameplayModifiers();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayModifiers*> const& __cordl_internal_get_gameplayModifiers() const;

  constexpr bool const& __cordl_internal_get_startPaused() const;

  constexpr bool& __cordl_internal_get_startPaused();

  constexpr void __cordl_internal_set_autoRestart(bool value);

  constexpr void __cordl_internal_set_backButtonText(::StringW value);

  constexpr void __cordl_internal_set_beatmapKey(::GlobalNamespace::BeatmapKey value);

  constexpr void __cordl_internal_set_beatmapLevel(::GlobalNamespace::BeatmapLevel* value);

  constexpr void __cordl_internal_set_gameplayModifiers(::GlobalNamespace::GameplayModifiers* value);

  constexpr void __cordl_internal_set_startPaused(bool value);

  /// @brief Method .ctor, addr 0x26bbbe0, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(bool autoRestart, ByRef<::GlobalNamespace::BeatmapKey> beatmapKey, ::GlobalNamespace::BeatmapLevel* beatmapLevel, ::StringW backButtonText,
                    ::GlobalNamespace::GameplayModifiers* gameplayModifiers, bool startPaused);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StandardGameplaySceneSetupData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StandardGameplaySceneSetupData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StandardGameplaySceneSetupData(StandardGameplaySceneSetupData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StandardGameplaySceneSetupData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StandardGameplaySceneSetupData(StandardGameplaySceneSetupData const&) = delete;

  /// @brief Field autoRestart, offset: 0x10, size: 0x1, def value: None
  bool ___autoRestart;

  /// @brief Field beatmapKey, offset: 0x18, size: 0x18, def value: None
  ::GlobalNamespace::BeatmapKey ___beatmapKey;

  /// @brief Field beatmapLevel, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevel* ___beatmapLevel;

  /// @brief Field backButtonText, offset: 0x38, size: 0x8, def value: None
  ::StringW ___backButtonText;

  /// @brief Field gameplayModifiers, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::GameplayModifiers* ___gameplayModifiers;

  /// @brief Field startPaused, offset: 0x48, size: 0x1, def value: None
  bool ___startPaused;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StandardGameplaySceneSetupData, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardGameplaySceneSetupData, ___autoRestart) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardGameplaySceneSetupData, ___beatmapKey) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardGameplaySceneSetupData, ___beatmapLevel) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardGameplaySceneSetupData, ___backButtonText) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardGameplaySceneSetupData, ___gameplayModifiers) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardGameplaySceneSetupData, ___startPaused) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::StandardGameplaySceneSetupData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StandardGameplaySceneSetupData*, "", "StandardGameplaySceneSetupData");

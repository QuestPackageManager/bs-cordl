#pragma once
// IWYU pragma private; include "GlobalNamespace\BeatmapDataTransformHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapDataTransformHelper)
namespace GlobalNamespace {
class BeatmapDataTransformHelper___c__DisplayClass0_0;
}
namespace GlobalNamespace {
class BeatmapData;
}
namespace GlobalNamespace {
struct BeatmapKey;
}
namespace GlobalNamespace {
class BeatmapLevel;
}
namespace GlobalNamespace {
class EnvironmentInfoSO;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace GlobalNamespace {
class IReadonlyBeatmapData;
}
namespace GlobalNamespace {
struct NoteCutDirection;
}
namespace GlobalNamespace {
struct NoteLineLayer;
}
namespace GlobalNamespace {
class PlayerSpecificSettings;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapDataTransformHelper;
}
namespace GlobalNamespace {
class BeatmapDataTransformHelper___c__DisplayClass0_0;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BeatmapDataTransformHelper*);
MARK_REF_T(::GlobalNamespace::BeatmapDataTransformHelper___c__DisplayClass0_0*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BeatmapDataTransformHelper*, "", "BeatmapDataTransformHelper");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BeatmapDataTransformHelper___c__DisplayClass0_0*, "", "BeatmapDataTransformHelper/<>c__DisplayClass0_0");
// Dependencies BeatmapKey, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapDataTransformHelper/<>c__DisplayClass0_0
class CORDL_TYPE BeatmapDataTransformHelper___c__DisplayClass0_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field beatmapData, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_beatmapData, put = __cordl_internal_set_beatmapData)) ::GlobalNamespace::IReadonlyBeatmapData* beatmapData;

  /// @brief Field beatmapKey, offset 0x18, size 0x10
  __declspec(property(get = __cordl_internal_get_beatmapKey, put = __cordl_internal_set_beatmapKey)) ::GlobalNamespace::BeatmapKey beatmapKey;

  /// @brief Field beatmapLevel, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_beatmapLevel, put = __cordl_internal_set_beatmapLevel)) ::GlobalNamespace::BeatmapLevel* beatmapLevel;

  /// @brief Field gameplayModifiers, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_gameplayModifiers, put = __cordl_internal_set_gameplayModifiers)) ::GlobalNamespace::GameplayModifiers* gameplayModifiers;

  /// @brief Field originalEnvironmentInfo, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_originalEnvironmentInfo, put = __cordl_internal_set_originalEnvironmentInfo)) ::UnityW<::GlobalNamespace::EnvironmentInfoSO> originalEnvironmentInfo;

  /// @brief Field playerSpecificSettings, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_playerSpecificSettings, put = __cordl_internal_set_playerSpecificSettings)) ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings;

  /// @brief Field screenDisplacementEffects, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get_screenDisplacementEffects, put = __cordl_internal_set_screenDisplacementEffects)) bool screenDisplacementEffects;

  static inline ::GlobalNamespace::BeatmapDataTransformHelper___c__DisplayClass0_0* New_ctor();

  /// @brief Method <CreateTransformedBeatmapDataAsync>b__0, addr 0x370778c, size 0x30, virtual false, abstract: false, final false
  inline ::GlobalNamespace::IReadonlyBeatmapData* _CreateTransformedBeatmapDataAsync_b__0();

  constexpr ::GlobalNamespace::IReadonlyBeatmapData* const& __cordl_internal_get_beatmapData() const;

  constexpr ::GlobalNamespace::IReadonlyBeatmapData*& __cordl_internal_get_beatmapData();

  constexpr ::GlobalNamespace::BeatmapKey const& __cordl_internal_get_beatmapKey() const;

  constexpr ::GlobalNamespace::BeatmapKey& __cordl_internal_get_beatmapKey();

  constexpr ::GlobalNamespace::BeatmapLevel* const& __cordl_internal_get_beatmapLevel() const;

  constexpr ::GlobalNamespace::BeatmapLevel*& __cordl_internal_get_beatmapLevel();

  constexpr ::GlobalNamespace::GameplayModifiers* const& __cordl_internal_get_gameplayModifiers() const;

  constexpr ::GlobalNamespace::GameplayModifiers*& __cordl_internal_get_gameplayModifiers();

  constexpr ::UnityW<::GlobalNamespace::EnvironmentInfoSO> const& __cordl_internal_get_originalEnvironmentInfo() const;

  constexpr ::UnityW<::GlobalNamespace::EnvironmentInfoSO>& __cordl_internal_get_originalEnvironmentInfo();

  constexpr ::GlobalNamespace::PlayerSpecificSettings* const& __cordl_internal_get_playerSpecificSettings() const;

  constexpr ::GlobalNamespace::PlayerSpecificSettings*& __cordl_internal_get_playerSpecificSettings();

  constexpr bool const& __cordl_internal_get_screenDisplacementEffects() const;

  constexpr bool& __cordl_internal_get_screenDisplacementEffects();

  constexpr void __cordl_internal_set_beatmapData(::GlobalNamespace::IReadonlyBeatmapData* value);

  constexpr void __cordl_internal_set_beatmapKey(::GlobalNamespace::BeatmapKey value);

  constexpr void __cordl_internal_set_beatmapLevel(::GlobalNamespace::BeatmapLevel* value);

  constexpr void __cordl_internal_set_gameplayModifiers(::GlobalNamespace::GameplayModifiers* value);

  constexpr void __cordl_internal_set_originalEnvironmentInfo(::UnityW<::GlobalNamespace::EnvironmentInfoSO> value);

  constexpr void __cordl_internal_set_playerSpecificSettings(::GlobalNamespace::PlayerSpecificSettings* value);

  constexpr void __cordl_internal_set_screenDisplacementEffects(bool value);

  /// @brief Method .ctor, addr 0x370722c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapDataTransformHelper___c__DisplayClass0_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataTransformHelper___c__DisplayClass0_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapDataTransformHelper___c__DisplayClass0_0(BeatmapDataTransformHelper___c__DisplayClass0_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataTransformHelper___c__DisplayClass0_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapDataTransformHelper___c__DisplayClass0_0(BeatmapDataTransformHelper___c__DisplayClass0_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14807 };

  /// @brief Field beatmapData, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::IReadonlyBeatmapData* ___beatmapData;

  /// @brief Field beatmapKey, offset: 0x18, size: 0x10, def value: None
  ::GlobalNamespace::BeatmapKey ___beatmapKey;

  /// @brief Field beatmapLevel, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevel* ___beatmapLevel;

  /// @brief Field gameplayModifiers, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::GameplayModifiers* ___gameplayModifiers;

  /// @brief Field playerSpecificSettings, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::PlayerSpecificSettings* ___playerSpecificSettings;

  /// @brief Field originalEnvironmentInfo, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::EnvironmentInfoSO> ___originalEnvironmentInfo;

  /// @brief Field screenDisplacementEffects, offset: 0x48, size: 0x1, def value: None
  bool ___screenDisplacementEffects;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapDataTransformHelper___c__DisplayClass0_0, ___beatmapData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataTransformHelper___c__DisplayClass0_0, ___beatmapKey) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataTransformHelper___c__DisplayClass0_0, ___beatmapLevel) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataTransformHelper___c__DisplayClass0_0, ___gameplayModifiers) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataTransformHelper___c__DisplayClass0_0, ___playerSpecificSettings) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataTransformHelper___c__DisplayClass0_0, ___originalEnvironmentInfo) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataTransformHelper___c__DisplayClass0_0, ___screenDisplacementEffects) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BeatmapDataTransformHelper___c__DisplayClass0_0) == 0x50, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapDataTransformHelper
class CORDL_TYPE BeatmapDataTransformHelper : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass0_0 = ::GlobalNamespace::BeatmapDataTransformHelper___c__DisplayClass0_0;

  /// @brief Method AddTestBurstSlider, addr 0x37074bc, size 0x134, virtual false, abstract: false, final false
  static inline void AddTestBurstSlider(float_t time, float_t beat, float_t duration, int32_t headRotation, int32_t headLineIndex, ::GlobalNamespace::NoteLineLayer headNoteLineLayer,
                                        ::GlobalNamespace::NoteCutDirection headCutDirection, int32_t tailRotation, int32_t tailLineIndex, ::GlobalNamespace::NoteLineLayer tailNoteLineLayer,
                                        ::GlobalNamespace::NoteCutDirection tailCutDirection, int32_t sliceCount, float_t squishAmount, ::GlobalNamespace::BeatmapData* beatmapData);

  /// @brief Method AddTestSlider, addr 0x37075f0, size 0x19c, virtual false, abstract: false, final false
  static inline void AddTestSlider(float_t time, float_t beat, float_t duration, int32_t headRotation, int32_t headLineIndex, ::GlobalNamespace::NoteLineLayer headNoteLineLayer,
                                   ::GlobalNamespace::NoteCutDirection headCutDirection, float_t headControlPointLength, int32_t tailRotation, int32_t tailLineIndex,
                                   ::GlobalNamespace::NoteLineLayer tailNoteLineLayer, ::GlobalNamespace::NoteCutDirection tailCutDirection, float_t tailControlPointLength, bool hasHeadNote,
                                   bool hasTailNote, ::GlobalNamespace::BeatmapData* beatmapData);

  /// @brief Method CreateTransformedBeatmapData, addr 0x3707230, size 0x18c, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::IReadonlyBeatmapData* CreateTransformedBeatmapData(::GlobalNamespace::IReadonlyBeatmapData* beatmapData, ::GlobalNamespace::BeatmapKey beatmapKey,
                                                                                      ::GlobalNamespace::BeatmapLevel* beatmapLevel, ::GlobalNamespace::GameplayModifiers* gameplayModifiers,
                                                                                      ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings,
                                                                                      ::GlobalNamespace::EnvironmentInfoSO* originalEnvironmentInfo, bool screenDisplacementEffects);

  /// @brief Method CreateTransformedBeatmapDataAsync, addr 0x37070b4, size 0x178, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData*>*
  CreateTransformedBeatmapDataAsync(::GlobalNamespace::IReadonlyBeatmapData* beatmapData, ::GlobalNamespace::BeatmapKey beatmapKey, ::GlobalNamespace::BeatmapLevel* beatmapLevel,
                                    ::GlobalNamespace::GameplayModifiers* gameplayModifiers, ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings,
                                    ::GlobalNamespace::EnvironmentInfoSO* originalEnvironmentInfo, bool screenDisplacementEffects);

  /// @brief Method IsObstaclesMergingNeeded, addr 0x37074b0, size 0xc, virtual false, abstract: false, final false
  static inline bool IsObstaclesMergingNeeded(::StringW beatmapLevelId, bool screenDisplacementEffectsEnabled);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapDataTransformHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataTransformHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapDataTransformHelper(BeatmapDataTransformHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataTransformHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapDataTransformHelper(BeatmapDataTransformHelper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14808 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::BeatmapDataTransformHelper) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace

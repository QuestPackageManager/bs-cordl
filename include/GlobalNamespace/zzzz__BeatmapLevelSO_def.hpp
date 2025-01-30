#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapLevelSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentName_def.hpp"
#include "GlobalNamespace/zzzz__IAssetSongPreviewAudioClipProvider_def.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSensitivityFlag_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapLevelSO)
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace GlobalNamespace {
struct BeatmapDifficulty;
}
namespace GlobalNamespace {
class BeatmapLevelSO_ColorScheme;
}
namespace GlobalNamespace {
class BeatmapLevelSO_PreviewDifficultyBeatmapSet;
}
namespace GlobalNamespace {
class BeatmapLevelSO_PreviewDifficultyBeatmap;
}
namespace GlobalNamespace {
struct EnvironmentName;
}
namespace GlobalNamespace {
struct PlayerSensitivityFlag;
}
namespace GlobalNamespace {
class PreviewDifficultyBeatmapSet_BeatmapLevelSO___c;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> class Comparison_1;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapLevelSO;
}
namespace GlobalNamespace {
class BeatmapLevelSO_ColorScheme;
}
namespace GlobalNamespace {
class BeatmapLevelSO_PreviewDifficultyBeatmap;
}
namespace GlobalNamespace {
class BeatmapLevelSO_PreviewDifficultyBeatmapSet;
}
namespace GlobalNamespace {
class PreviewDifficultyBeatmapSet_BeatmapLevelSO___c;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapLevelSO);
MARK_REF_PTR_T(::GlobalNamespace::BeatmapLevelSO_ColorScheme);
MARK_REF_PTR_T(::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap);
MARK_REF_PTR_T(::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmapSet);
MARK_REF_PTR_T(::GlobalNamespace::PreviewDifficultyBeatmapSet_BeatmapLevelSO___c);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapLevelSO/PreviewDifficultyBeatmapSet/<>c
class CORDL_TYPE PreviewDifficultyBeatmapSet_BeatmapLevelSO___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::PreviewDifficultyBeatmapSet_BeatmapLevelSO___c* __9;

  /// @brief Field <>9__8_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__8_0, put = setStaticF___9__8_0)) ::System::Comparison_1<::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap*>* __9__8_0;

  static inline ::GlobalNamespace::PreviewDifficultyBeatmapSet_BeatmapLevelSO___c* New_ctor();

  /// @brief Method <Add>b__8_0, addr 0x26cc69c, size 0x90, virtual false, abstract: false, final false
  inline int32_t _Add_b__8_0(::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap* a, ::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap* b);

  /// @brief Method .ctor, addr 0x26cc694, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::PreviewDifficultyBeatmapSet_BeatmapLevelSO___c* getStaticF___9();

  static inline ::System::Comparison_1<::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap*>* getStaticF___9__8_0();

  static inline void setStaticF___9(::GlobalNamespace::PreviewDifficultyBeatmapSet_BeatmapLevelSO___c* value);

  static inline void setStaticF___9__8_0(::System::Comparison_1<::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PreviewDifficultyBeatmapSet_BeatmapLevelSO___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PreviewDifficultyBeatmapSet_BeatmapLevelSO___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PreviewDifficultyBeatmapSet_BeatmapLevelSO___c(PreviewDifficultyBeatmapSet_BeatmapLevelSO___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PreviewDifficultyBeatmapSet_BeatmapLevelSO___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PreviewDifficultyBeatmapSet_BeatmapLevelSO___c(PreviewDifficultyBeatmapSet_BeatmapLevelSO___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12969 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PreviewDifficultyBeatmapSet_BeatmapLevelSO___c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapLevelSO/PreviewDifficultyBeatmapSet
class CORDL_TYPE BeatmapLevelSO_PreviewDifficultyBeatmapSet : public ::System::Object {
public:
  // Declarations
  using __c = ::GlobalNamespace::PreviewDifficultyBeatmapSet_BeatmapLevelSO___c;

  /// @brief Field _beatmapCharacteristic, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapCharacteristic, put = __cordl_internal_set__beatmapCharacteristic)) ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>
      _beatmapCharacteristic;

  /// @brief Field _previewDifficultyBeatmaps, offset 0x18, size 0x8
  __declspec(property(
      get = __cordl_internal_get__previewDifficultyBeatmaps,
      put = __cordl_internal_set__previewDifficultyBeatmaps)) ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap*>* _previewDifficultyBeatmaps;

  __declspec(property(get = get_beatmapCharacteristic)) ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> beatmapCharacteristic;

  __declspec(property(get = get_difficultyBeatmaps)) ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap*>* difficultyBeatmaps;

  /// @brief Method Add, addr 0x26cc484, size 0x1b4, virtual false, abstract: false, final false
  inline void Add(::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap* previewDifficultyBeatmap);

  static inline ::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmapSet* New_ctor(::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic);

  static inline ::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmapSet*
  New_ctor(::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic,
           ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap*>* previewDifficultyBeatmaps);

  constexpr ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> const& __cordl_internal_get__beatmapCharacteristic() const;

  constexpr ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>& __cordl_internal_get__beatmapCharacteristic();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap*>* const& __cordl_internal_get__previewDifficultyBeatmaps() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap*>*& __cordl_internal_get__previewDifficultyBeatmaps();

  constexpr void __cordl_internal_set__beatmapCharacteristic(::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> value);

  constexpr void __cordl_internal_set__previewDifficultyBeatmaps(::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap*>* value);

  /// @brief Method .ctor, addr 0x26cc430, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic);

  /// @brief Method .ctor, addr 0x26cc458, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic,
                    ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap*>* previewDifficultyBeatmaps);

  /// @brief Method get_beatmapCharacteristic, addr 0x26cc420, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> get_beatmapCharacteristic();

  /// @brief Method get_difficultyBeatmaps, addr 0x26cc428, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap*>* get_difficultyBeatmaps();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapLevelSO_PreviewDifficultyBeatmapSet();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelSO_PreviewDifficultyBeatmapSet", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapLevelSO_PreviewDifficultyBeatmapSet(BeatmapLevelSO_PreviewDifficultyBeatmapSet&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelSO_PreviewDifficultyBeatmapSet", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapLevelSO_PreviewDifficultyBeatmapSet(BeatmapLevelSO_PreviewDifficultyBeatmapSet const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12970 };

  /// @brief Field _beatmapCharacteristic, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> ____beatmapCharacteristic;

  /// @brief Field _previewDifficultyBeatmaps, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap*>* ____previewDifficultyBeatmaps;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmapSet, ____beatmapCharacteristic) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmapSet, ____previewDifficultyBeatmaps) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmapSet, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies BeatmapDifficulty, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapLevelSO/PreviewDifficultyBeatmap
class CORDL_TYPE BeatmapLevelSO_PreviewDifficultyBeatmap : public ::System::Object {
public:
  // Declarations
  /// @brief Field _beatmapColorSchemeIdx, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__beatmapColorSchemeIdx, put = __cordl_internal_set__beatmapColorSchemeIdx)) int32_t _beatmapColorSchemeIdx;

  /// @brief Field _bombsCount, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__bombsCount, put = __cordl_internal_set__bombsCount)) int32_t _bombsCount;

  /// @brief Field _cuttableBeatmapObjectsCount, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__cuttableBeatmapObjectsCount, put = __cordl_internal_set__cuttableBeatmapObjectsCount)) int32_t _cuttableBeatmapObjectsCount;

  /// @brief Field _difficulty, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__difficulty, put = __cordl_internal_set__difficulty)) ::GlobalNamespace::BeatmapDifficulty _difficulty;

  /// @brief Field _environmentNameIdx, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__environmentNameIdx, put = __cordl_internal_set__environmentNameIdx)) int32_t _environmentNameIdx;

  /// @brief Field _noteJumpMovementSpeed, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__noteJumpMovementSpeed, put = __cordl_internal_set__noteJumpMovementSpeed)) float_t _noteJumpMovementSpeed;

  /// @brief Field _noteJumpStartBeatOffset, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__noteJumpStartBeatOffset, put = __cordl_internal_set__noteJumpStartBeatOffset)) float_t _noteJumpStartBeatOffset;

  /// @brief Field _notesCount, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__notesCount, put = __cordl_internal_set__notesCount)) int32_t _notesCount;

  /// @brief Field _obstaclesCount, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__obstaclesCount, put = __cordl_internal_set__obstaclesCount)) int32_t _obstaclesCount;

  __declspec(property(get = get_beatmapColorSchemeIdx)) int32_t beatmapColorSchemeIdx;

  __declspec(property(get = get_bombsCount)) int32_t bombsCount;

  __declspec(property(get = get_cuttableBeatmapObjectsCount)) int32_t cuttableBeatmapObjectsCount;

  __declspec(property(get = get_difficulty)) ::GlobalNamespace::BeatmapDifficulty difficulty;

  __declspec(property(get = get_environmentNameIdx)) int32_t environmentNameIdx;

  __declspec(property(get = get_noteJumpMovementSpeed)) float_t noteJumpMovementSpeed;

  __declspec(property(get = get_noteJumpStartBeatOffset)) float_t noteJumpStartBeatOffset;

  __declspec(property(get = get_notesCount)) int32_t notesCount;

  __declspec(property(get = get_obstaclesCount)) int32_t obstaclesCount;

  static inline ::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap* New_ctor(::GlobalNamespace::BeatmapDifficulty difficulty, float_t noteJumpMovementSpeed, float_t noteJumpStartBeatOffset,
                                                                                     int32_t environmentNameIdx, int32_t beatmapColorSchemeIdx, int32_t notesCount, int32_t cuttableBeatmapObjectsCount,
                                                                                     int32_t obstaclesCount, int32_t bombsCount);

  constexpr int32_t const& __cordl_internal_get__beatmapColorSchemeIdx() const;

  constexpr int32_t& __cordl_internal_get__beatmapColorSchemeIdx();

  constexpr int32_t const& __cordl_internal_get__bombsCount() const;

  constexpr int32_t& __cordl_internal_get__bombsCount();

  constexpr int32_t const& __cordl_internal_get__cuttableBeatmapObjectsCount() const;

  constexpr int32_t& __cordl_internal_get__cuttableBeatmapObjectsCount();

  constexpr ::GlobalNamespace::BeatmapDifficulty const& __cordl_internal_get__difficulty() const;

  constexpr ::GlobalNamespace::BeatmapDifficulty& __cordl_internal_get__difficulty();

  constexpr int32_t const& __cordl_internal_get__environmentNameIdx() const;

  constexpr int32_t& __cordl_internal_get__environmentNameIdx();

  constexpr float_t const& __cordl_internal_get__noteJumpMovementSpeed() const;

  constexpr float_t& __cordl_internal_get__noteJumpMovementSpeed();

  constexpr float_t const& __cordl_internal_get__noteJumpStartBeatOffset() const;

  constexpr float_t& __cordl_internal_get__noteJumpStartBeatOffset();

  constexpr int32_t const& __cordl_internal_get__notesCount() const;

  constexpr int32_t& __cordl_internal_get__notesCount();

  constexpr int32_t const& __cordl_internal_get__obstaclesCount() const;

  constexpr int32_t& __cordl_internal_get__obstaclesCount();

  constexpr void __cordl_internal_set__beatmapColorSchemeIdx(int32_t value);

  constexpr void __cordl_internal_set__bombsCount(int32_t value);

  constexpr void __cordl_internal_set__cuttableBeatmapObjectsCount(int32_t value);

  constexpr void __cordl_internal_set__difficulty(::GlobalNamespace::BeatmapDifficulty value);

  constexpr void __cordl_internal_set__environmentNameIdx(int32_t value);

  constexpr void __cordl_internal_set__noteJumpMovementSpeed(float_t value);

  constexpr void __cordl_internal_set__noteJumpStartBeatOffset(float_t value);

  constexpr void __cordl_internal_set__notesCount(int32_t value);

  constexpr void __cordl_internal_set__obstaclesCount(int32_t value);

  /// @brief Method .ctor, addr 0x26cc774, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::BeatmapDifficulty difficulty, float_t noteJumpMovementSpeed, float_t noteJumpStartBeatOffset, int32_t environmentNameIdx, int32_t beatmapColorSchemeIdx,
                    int32_t notesCount, int32_t cuttableBeatmapObjectsCount, int32_t obstaclesCount, int32_t bombsCount);

  /// @brief Method get_beatmapColorSchemeIdx, addr 0x26cc74c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_beatmapColorSchemeIdx();

  /// @brief Method get_bombsCount, addr 0x26cc764, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_bombsCount();

  /// @brief Method get_cuttableBeatmapObjectsCount, addr 0x26cc76c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_cuttableBeatmapObjectsCount();

  /// @brief Method get_difficulty, addr 0x26cc72c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapDifficulty get_difficulty();

  /// @brief Method get_environmentNameIdx, addr 0x26cc744, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_environmentNameIdx();

  /// @brief Method get_noteJumpMovementSpeed, addr 0x26cc734, size 0x8, virtual false, abstract: false, final false
  inline float_t get_noteJumpMovementSpeed();

  /// @brief Method get_noteJumpStartBeatOffset, addr 0x26cc73c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_noteJumpStartBeatOffset();

  /// @brief Method get_notesCount, addr 0x26cc754, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_notesCount();

  /// @brief Method get_obstaclesCount, addr 0x26cc75c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_obstaclesCount();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapLevelSO_PreviewDifficultyBeatmap();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelSO_PreviewDifficultyBeatmap", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapLevelSO_PreviewDifficultyBeatmap(BeatmapLevelSO_PreviewDifficultyBeatmap&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelSO_PreviewDifficultyBeatmap", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapLevelSO_PreviewDifficultyBeatmap(BeatmapLevelSO_PreviewDifficultyBeatmap const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12971 };

  /// @brief Field _difficulty, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::BeatmapDifficulty ____difficulty;

  /// @brief Field _environmentNameIdx, offset: 0x14, size: 0x4, def value: None
  int32_t ____environmentNameIdx;

  /// @brief Field _beatmapColorSchemeIdx, offset: 0x18, size: 0x4, def value: None
  int32_t ____beatmapColorSchemeIdx;

  /// @brief Field _noteJumpMovementSpeed, offset: 0x1c, size: 0x4, def value: None
  float_t ____noteJumpMovementSpeed;

  /// @brief Field _noteJumpStartBeatOffset, offset: 0x20, size: 0x4, def value: None
  float_t ____noteJumpStartBeatOffset;

  /// @brief Field _notesCount, offset: 0x24, size: 0x4, def value: None
  int32_t ____notesCount;

  /// @brief Field _obstaclesCount, offset: 0x28, size: 0x4, def value: None
  int32_t ____obstaclesCount;

  /// @brief Field _bombsCount, offset: 0x2c, size: 0x4, def value: None
  int32_t ____bombsCount;

  /// @brief Field _cuttableBeatmapObjectsCount, offset: 0x30, size: 0x4, def value: None
  int32_t ____cuttableBeatmapObjectsCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap, ____difficulty) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap, ____environmentNameIdx) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap, ____beatmapColorSchemeIdx) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap, ____noteJumpMovementSpeed) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap, ____noteJumpStartBeatOffset) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap, ____notesCount) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap, ____obstaclesCount) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap, ____bombsCount) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap, ____cuttableBeatmapObjectsCount) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object, UnityEngine.Color
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapLevelSO/ColorScheme
class CORDL_TYPE BeatmapLevelSO_ColorScheme : public ::System::Object {
public:
  // Declarations
  /// @brief Field _colorSchemeId, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__colorSchemeId, put = __cordl_internal_set__colorSchemeId)) ::StringW _colorSchemeId;

  /// @brief Field _environmentColor0, offset 0x50, size 0x10
  __declspec(property(get = __cordl_internal_get__environmentColor0, put = __cordl_internal_set__environmentColor0)) ::UnityEngine::Color _environmentColor0;

  /// @brief Field _environmentColor0Boost, offset 0x70, size 0x10
  __declspec(property(get = __cordl_internal_get__environmentColor0Boost, put = __cordl_internal_set__environmentColor0Boost)) ::UnityEngine::Color _environmentColor0Boost;

  /// @brief Field _environmentColor1, offset 0x60, size 0x10
  __declspec(property(get = __cordl_internal_get__environmentColor1, put = __cordl_internal_set__environmentColor1)) ::UnityEngine::Color _environmentColor1;

  /// @brief Field _environmentColor1Boost, offset 0x80, size 0x10
  __declspec(property(get = __cordl_internal_get__environmentColor1Boost, put = __cordl_internal_set__environmentColor1Boost)) ::UnityEngine::Color _environmentColor1Boost;

  /// @brief Field _obstaclesColor, offset 0x3c, size 0x10
  __declspec(property(get = __cordl_internal_get__obstaclesColor, put = __cordl_internal_set__obstaclesColor)) ::UnityEngine::Color _obstaclesColor;

  /// @brief Field _overrideLights, offset 0x4c, size 0x1
  __declspec(property(get = __cordl_internal_get__overrideLights, put = __cordl_internal_set__overrideLights)) bool _overrideLights;

  /// @brief Field _overrideNotes, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__overrideNotes, put = __cordl_internal_set__overrideNotes)) bool _overrideNotes;

  /// @brief Field _saberAColor, offset 0x1c, size 0x10
  __declspec(property(get = __cordl_internal_get__saberAColor, put = __cordl_internal_set__saberAColor)) ::UnityEngine::Color _saberAColor;

  /// @brief Field _saberBColor, offset 0x2c, size 0x10
  __declspec(property(get = __cordl_internal_get__saberBColor, put = __cordl_internal_set__saberBColor)) ::UnityEngine::Color _saberBColor;

  __declspec(property(get = get_colorSchemeId)) ::StringW colorSchemeId;

  __declspec(property(get = get_environmentColor0)) ::UnityEngine::Color environmentColor0;

  __declspec(property(get = get_environmentColor0Boost)) ::UnityEngine::Color environmentColor0Boost;

  __declspec(property(get = get_environmentColor1)) ::UnityEngine::Color environmentColor1;

  __declspec(property(get = get_environmentColor1Boost)) ::UnityEngine::Color environmentColor1Boost;

  __declspec(property(get = get_obstaclesColor)) ::UnityEngine::Color obstaclesColor;

  __declspec(property(get = get_overrideLights)) bool overrideLights;

  __declspec(property(get = get_overrideNotes)) bool overrideNotes;

  __declspec(property(get = get_saberAColor)) ::UnityEngine::Color saberAColor;

  __declspec(property(get = get_saberBColor)) ::UnityEngine::Color saberBColor;

  static inline ::GlobalNamespace::BeatmapLevelSO_ColorScheme* New_ctor(::StringW colorSchemeId, bool overrideNotes, ::UnityEngine::Color saberAColor, ::UnityEngine::Color saberBColor,
                                                                        ::UnityEngine::Color obstaclesColor, bool overrideLights, ::UnityEngine::Color environmentColor0,
                                                                        ::UnityEngine::Color environmentColor1, ::UnityEngine::Color environmentColor0Boost,
                                                                        ::UnityEngine::Color environmentColor1Boost);

  constexpr ::StringW const& __cordl_internal_get__colorSchemeId() const;

  constexpr ::StringW& __cordl_internal_get__colorSchemeId();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__environmentColor0() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__environmentColor0();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__environmentColor0Boost() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__environmentColor0Boost();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__environmentColor1() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__environmentColor1();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__environmentColor1Boost() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__environmentColor1Boost();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__obstaclesColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__obstaclesColor();

  constexpr bool const& __cordl_internal_get__overrideLights() const;

  constexpr bool& __cordl_internal_get__overrideLights();

  constexpr bool const& __cordl_internal_get__overrideNotes() const;

  constexpr bool& __cordl_internal_get__overrideNotes();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__saberAColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__saberAColor();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__saberBColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__saberBColor();

  constexpr void __cordl_internal_set__colorSchemeId(::StringW value);

  constexpr void __cordl_internal_set__environmentColor0(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__environmentColor0Boost(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__environmentColor1(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__environmentColor1Boost(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__obstaclesColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__overrideLights(bool value);

  constexpr void __cordl_internal_set__overrideNotes(bool value);

  constexpr void __cordl_internal_set__saberAColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__saberBColor(::UnityEngine::Color value);

  /// @brief Method .ctor, addr 0x26cc858, size 0xe8, virtual false, abstract: false, final false
  inline void _ctor(::StringW colorSchemeId, bool overrideNotes, ::UnityEngine::Color saberAColor, ::UnityEngine::Color saberBColor, ::UnityEngine::Color obstaclesColor, bool overrideLights,
                    ::UnityEngine::Color environmentColor0, ::UnityEngine::Color environmentColor1, ::UnityEngine::Color environmentColor0Boost, ::UnityEngine::Color environmentColor1Boost);

  /// @brief Method get_colorSchemeId, addr 0x26cc7ec, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_colorSchemeId();

  /// @brief Method get_environmentColor0, addr 0x26cc828, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_environmentColor0();

  /// @brief Method get_environmentColor0Boost, addr 0x26cc840, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_environmentColor0Boost();

  /// @brief Method get_environmentColor1, addr 0x26cc834, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_environmentColor1();

  /// @brief Method get_environmentColor1Boost, addr 0x26cc84c, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_environmentColor1Boost();

  /// @brief Method get_obstaclesColor, addr 0x26cc814, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_obstaclesColor();

  /// @brief Method get_overrideLights, addr 0x26cc820, size 0x8, virtual false, abstract: false, final false
  inline bool get_overrideLights();

  /// @brief Method get_overrideNotes, addr 0x26cc7f4, size 0x8, virtual false, abstract: false, final false
  inline bool get_overrideNotes();

  /// @brief Method get_saberAColor, addr 0x26cc7fc, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_saberAColor();

  /// @brief Method get_saberBColor, addr 0x26cc808, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_saberBColor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapLevelSO_ColorScheme();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelSO_ColorScheme", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapLevelSO_ColorScheme(BeatmapLevelSO_ColorScheme&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelSO_ColorScheme", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapLevelSO_ColorScheme(BeatmapLevelSO_ColorScheme const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12972 };

  /// @brief Field _colorSchemeId, offset: 0x10, size: 0x8, def value: None
  ::StringW ____colorSchemeId;

  /// @brief Field _overrideNotes, offset: 0x18, size: 0x1, def value: None
  bool ____overrideNotes;

  /// @brief Field _saberAColor, offset: 0x1c, size: 0x10, def value: None
  ::UnityEngine::Color ____saberAColor;

  /// @brief Field _saberBColor, offset: 0x2c, size: 0x10, def value: None
  ::UnityEngine::Color ____saberBColor;

  /// @brief Field _obstaclesColor, offset: 0x3c, size: 0x10, def value: None
  ::UnityEngine::Color ____obstaclesColor;

  /// @brief Field _overrideLights, offset: 0x4c, size: 0x1, def value: None
  bool ____overrideLights;

  /// @brief Field _environmentColor0, offset: 0x50, size: 0x10, def value: None
  ::UnityEngine::Color ____environmentColor0;

  /// @brief Field _environmentColor1, offset: 0x60, size: 0x10, def value: None
  ::UnityEngine::Color ____environmentColor1;

  /// @brief Field _environmentColor0Boost, offset: 0x70, size: 0x10, def value: None
  ::UnityEngine::Color ____environmentColor0Boost;

  /// @brief Field _environmentColor1Boost, offset: 0x80, size: 0x10, def value: None
  ::UnityEngine::Color ____environmentColor1Boost;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapLevelSO_ColorScheme, ____colorSchemeId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelSO_ColorScheme, ____overrideNotes) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelSO_ColorScheme, ____saberAColor) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelSO_ColorScheme, ____saberBColor) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelSO_ColorScheme, ____obstaclesColor) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelSO_ColorScheme, ____overrideLights) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelSO_ColorScheme, ____environmentColor0) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelSO_ColorScheme, ____environmentColor1) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelSO_ColorScheme, ____environmentColor0Boost) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelSO_ColorScheme, ____environmentColor1Boost) == 0x80, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapLevelSO_ColorScheme, 0x90>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies EnvironmentName, IAssetSongPreviewAudioClipProvider, PersistentScriptableObject, PlayerSensitivityFlag
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapLevelSO
class CORDL_TYPE BeatmapLevelSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  using ColorScheme = ::GlobalNamespace::BeatmapLevelSO_ColorScheme;

  using PreviewDifficultyBeatmap = ::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap;

  using PreviewDifficultyBeatmapSet = ::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmapSet;

  /// @brief Field _allDirectionsEnvironmentName, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__allDirectionsEnvironmentName,
                      put = __cordl_internal_set__allDirectionsEnvironmentName)) ::GlobalNamespace::EnvironmentName _allDirectionsEnvironmentName;

  /// @brief Field _beatsPerMinute, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get__beatsPerMinute, put = __cordl_internal_set__beatsPerMinute)) float_t _beatsPerMinute;

  /// @brief Field _colorSchemes, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__colorSchemes,
                      put = __cordl_internal_set__colorSchemes)) ::ArrayW<::GlobalNamespace::BeatmapLevelSO_ColorScheme*, ::Array<::GlobalNamespace::BeatmapLevelSO_ColorScheme*>*>
      _colorSchemes;

  /// @brief Field _contentRating, offset 0xa0, size 0x4
  __declspec(property(get = __cordl_internal_get__contentRating, put = __cordl_internal_set__contentRating)) ::GlobalNamespace::PlayerSensitivityFlag _contentRating;

  /// @brief Field _coverImage, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__coverImage, put = __cordl_internal_set__coverImage)) ::UnityW<::UnityEngine::Sprite> _coverImage;

  /// @brief Field _environmentName, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__environmentName, put = __cordl_internal_set__environmentName)) ::GlobalNamespace::EnvironmentName _environmentName;

  /// @brief Field _environmentNames, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__environmentNames,
                      put = __cordl_internal_set__environmentNames)) ::ArrayW<::GlobalNamespace::EnvironmentName, ::Array<::GlobalNamespace::EnvironmentName>*>
      _environmentNames;

  /// @brief Field _integratedLufs, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get__integratedLufs, put = __cordl_internal_set__integratedLufs)) float_t _integratedLufs;

  /// @brief Field _levelAuthorName, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__levelAuthorName, put = __cordl_internal_set__levelAuthorName)) ::StringW _levelAuthorName;

  /// @brief Field _levelID, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__levelID, put = __cordl_internal_set__levelID)) ::StringW _levelID;

  /// @brief Field _previewAudioClip, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__previewAudioClip, put = __cordl_internal_set__previewAudioClip)) ::UnityW<::UnityEngine::AudioClip> _previewAudioClip;

  /// @brief Field _previewDifficultyBeatmapSets, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__previewDifficultyBeatmapSets,
                      put = __cordl_internal_set__previewDifficultyBeatmapSets)) ::ArrayW<::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmapSet*,
                                                                                          ::Array<::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmapSet*>*>
      _previewDifficultyBeatmapSets;

  /// @brief Field _previewDuration, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get__previewDuration, put = __cordl_internal_set__previewDuration)) float_t _previewDuration;

  /// @brief Field _previewStartTime, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get__previewStartTime, put = __cordl_internal_set__previewStartTime)) float_t _previewStartTime;

  /// @brief Field _shuffle, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get__shuffle, put = __cordl_internal_set__shuffle)) float_t _shuffle;

  /// @brief Field _shufflePeriod, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get__shufflePeriod, put = __cordl_internal_set__shufflePeriod)) float_t _shufflePeriod;

  /// @brief Field _songAuthorName, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__songAuthorName, put = __cordl_internal_set__songAuthorName)) ::StringW _songAuthorName;

  /// @brief Field _songDuration, offset 0x6c, size 0x4
  __declspec(property(get = __cordl_internal_get__songDuration, put = __cordl_internal_set__songDuration)) float_t _songDuration;

  /// @brief Field _songName, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__songName, put = __cordl_internal_set__songName)) ::StringW _songName;

  /// @brief Field _songSubName, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__songSubName, put = __cordl_internal_set__songSubName)) ::StringW _songSubName;

  /// @brief Field _songTimeOffset, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get__songTimeOffset, put = __cordl_internal_set__songTimeOffset)) float_t _songTimeOffset;

  /// @brief Field _version, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__version, put = __cordl_internal_set__version)) int32_t _version;

  __declspec(property(get = get_allDirectionsEnvironmentName)) ::GlobalNamespace::EnvironmentName allDirectionsEnvironmentName;

  __declspec(property(get = get_beatsPerMinute)) float_t beatsPerMinute;

  __declspec(property(get = get_colorSchemes)) ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevelSO_ColorScheme*>* colorSchemes;

  __declspec(property(get = get_contentRating)) ::GlobalNamespace::PlayerSensitivityFlag contentRating;

  __declspec(property(get = get_coverImage)) ::UnityW<::UnityEngine::Sprite> coverImage;

  __declspec(property(get = get_environmentName)) ::GlobalNamespace::EnvironmentName environmentName;

  __declspec(property(get = get_environmentNames)) ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::EnvironmentName>* environmentNames;

  __declspec(property(get = get_hasPrecalculatedData)) bool hasPrecalculatedData;

  __declspec(property(get = get_integratedLufs)) float_t integratedLufs;

  __declspec(property(get = get_levelAuthorName)) ::StringW levelAuthorName;

  __declspec(property(get = get_levelID)) ::StringW levelID;

  __declspec(property(
      get = get_previewDifficultyBeatmapSets)) ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmapSet*>* previewDifficultyBeatmapSets;

  __declspec(property(get = get_previewDuration)) float_t previewDuration;

  __declspec(property(get = get_previewStartTime)) float_t previewStartTime;

  __declspec(property(get = get_shuffle)) float_t shuffle;

  __declspec(property(get = get_shufflePeriod)) float_t shufflePeriod;

  __declspec(property(get = get_songAuthorName)) ::StringW songAuthorName;

  __declspec(property(get = get_songDuration)) float_t songDuration;

  __declspec(property(get = get_songName)) ::StringW songName;

  __declspec(property(get = get_songPreviewAudioClip)) ::UnityW<::UnityEngine::AudioClip> songPreviewAudioClip;

  __declspec(property(get = get_songSubName)) ::StringW songSubName;

  __declspec(property(get = get_songTimeOffset)) float_t songTimeOffset;

  __declspec(property(get = get_version)) int32_t version;

  /// @brief Convert operator to "::GlobalNamespace::IAssetSongPreviewAudioClipProvider"
  constexpr operator ::GlobalNamespace::IAssetSongPreviewAudioClipProvider*() noexcept;

  /// @brief Method IncrementVersion, addr 0x26cc1f8, size 0x10, virtual false, abstract: false, final false
  inline void IncrementVersion();

  static inline ::GlobalNamespace::BeatmapLevelSO* New_ctor();

  /// @brief Method SetCoverImage, addr 0x26cc408, size 0x8, virtual false, abstract: false, final false
  inline void SetCoverImage(::UnityEngine::Sprite* coverImage);

  /// @brief Method SetData, addr 0x26cc208, size 0x1e0, virtual false, abstract: false, final false
  inline void SetData(::StringW levelID, ::StringW songName, ::StringW songSubName, ::StringW songAuthorName, ::StringW levelAuthorName, float_t beatsPerMinute, float_t songTimeOffset,
                      float_t songDuration, float_t shuffle, float_t shufflePeriod, float_t previewStartTime, float_t previewDuration, ::UnityEngine::Sprite* coverImage,
                      ::GlobalNamespace::EnvironmentName environmentName, ::GlobalNamespace::EnvironmentName allDirectionEnvironmentName,
                      ::ArrayW<::GlobalNamespace::EnvironmentName, ::Array<::GlobalNamespace::EnvironmentName>*> environmentNames,
                      ::ArrayW<::GlobalNamespace::BeatmapLevelSO_ColorScheme*, ::Array<::GlobalNamespace::BeatmapLevelSO_ColorScheme*>*> colorSchemes);

  /// @brief Method SetIntegratedLufs, addr 0x26cc3f0, size 0x8, virtual false, abstract: false, final false
  inline void SetIntegratedLufs(float_t integratedLufs);

  /// @brief Method SetPreviewAudioClip, addr 0x26cc3f8, size 0x8, virtual false, abstract: false, final false
  inline void SetPreviewAudioClip(::UnityEngine::AudioClip* audioClip);

  /// @brief Method SetPreviewDifficultyBeatmaps, addr 0x26cc3e8, size 0x8, virtual false, abstract: false, final false
  inline void SetPreviewDifficultyBeatmaps(
      ::ArrayW<::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmapSet*, ::Array<::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmapSet*>*> previewDifficultyBeatmapSets);

  /// @brief Method SetSongDuration, addr 0x26cc400, size 0x8, virtual false, abstract: false, final false
  inline void SetSongDuration(float_t songDuration);

  /// @brief Method __SetEnvironmentName, addr 0x26cc1f0, size 0x8, virtual false, abstract: false, final false
  inline void __SetEnvironmentName(::GlobalNamespace::EnvironmentName targetEnvironmentName);

  constexpr ::GlobalNamespace::EnvironmentName const& __cordl_internal_get__allDirectionsEnvironmentName() const;

  constexpr ::GlobalNamespace::EnvironmentName& __cordl_internal_get__allDirectionsEnvironmentName();

  constexpr float_t const& __cordl_internal_get__beatsPerMinute() const;

  constexpr float_t& __cordl_internal_get__beatsPerMinute();

  constexpr ::ArrayW<::GlobalNamespace::BeatmapLevelSO_ColorScheme*, ::Array<::GlobalNamespace::BeatmapLevelSO_ColorScheme*>*> const& __cordl_internal_get__colorSchemes() const;

  constexpr ::ArrayW<::GlobalNamespace::BeatmapLevelSO_ColorScheme*, ::Array<::GlobalNamespace::BeatmapLevelSO_ColorScheme*>*>& __cordl_internal_get__colorSchemes();

  constexpr ::GlobalNamespace::PlayerSensitivityFlag const& __cordl_internal_get__contentRating() const;

  constexpr ::GlobalNamespace::PlayerSensitivityFlag& __cordl_internal_get__contentRating();

  constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get__coverImage() const;

  constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get__coverImage();

  constexpr ::GlobalNamespace::EnvironmentName const& __cordl_internal_get__environmentName() const;

  constexpr ::GlobalNamespace::EnvironmentName& __cordl_internal_get__environmentName();

  constexpr ::ArrayW<::GlobalNamespace::EnvironmentName, ::Array<::GlobalNamespace::EnvironmentName>*> const& __cordl_internal_get__environmentNames() const;

  constexpr ::ArrayW<::GlobalNamespace::EnvironmentName, ::Array<::GlobalNamespace::EnvironmentName>*>& __cordl_internal_get__environmentNames();

  constexpr float_t const& __cordl_internal_get__integratedLufs() const;

  constexpr float_t& __cordl_internal_get__integratedLufs();

  constexpr ::StringW const& __cordl_internal_get__levelAuthorName() const;

  constexpr ::StringW& __cordl_internal_get__levelAuthorName();

  constexpr ::StringW const& __cordl_internal_get__levelID() const;

  constexpr ::StringW& __cordl_internal_get__levelID();

  constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get__previewAudioClip() const;

  constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get__previewAudioClip();

  constexpr ::ArrayW<::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmapSet*, ::Array<::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmapSet*>*> const&
  __cordl_internal_get__previewDifficultyBeatmapSets() const;

  constexpr ::ArrayW<::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmapSet*, ::Array<::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmapSet*>*>&
  __cordl_internal_get__previewDifficultyBeatmapSets();

  constexpr float_t const& __cordl_internal_get__previewDuration() const;

  constexpr float_t& __cordl_internal_get__previewDuration();

  constexpr float_t const& __cordl_internal_get__previewStartTime() const;

  constexpr float_t& __cordl_internal_get__previewStartTime();

  constexpr float_t const& __cordl_internal_get__shuffle() const;

  constexpr float_t& __cordl_internal_get__shuffle();

  constexpr float_t const& __cordl_internal_get__shufflePeriod() const;

  constexpr float_t& __cordl_internal_get__shufflePeriod();

  constexpr ::StringW const& __cordl_internal_get__songAuthorName() const;

  constexpr ::StringW& __cordl_internal_get__songAuthorName();

  constexpr float_t const& __cordl_internal_get__songDuration() const;

  constexpr float_t& __cordl_internal_get__songDuration();

  constexpr ::StringW const& __cordl_internal_get__songName() const;

  constexpr ::StringW& __cordl_internal_get__songName();

  constexpr ::StringW const& __cordl_internal_get__songSubName() const;

  constexpr ::StringW& __cordl_internal_get__songSubName();

  constexpr float_t const& __cordl_internal_get__songTimeOffset() const;

  constexpr float_t& __cordl_internal_get__songTimeOffset();

  constexpr int32_t const& __cordl_internal_get__version() const;

  constexpr int32_t& __cordl_internal_get__version();

  constexpr void __cordl_internal_set__allDirectionsEnvironmentName(::GlobalNamespace::EnvironmentName value);

  constexpr void __cordl_internal_set__beatsPerMinute(float_t value);

  constexpr void __cordl_internal_set__colorSchemes(::ArrayW<::GlobalNamespace::BeatmapLevelSO_ColorScheme*, ::Array<::GlobalNamespace::BeatmapLevelSO_ColorScheme*>*> value);

  constexpr void __cordl_internal_set__contentRating(::GlobalNamespace::PlayerSensitivityFlag value);

  constexpr void __cordl_internal_set__coverImage(::UnityW<::UnityEngine::Sprite> value);

  constexpr void __cordl_internal_set__environmentName(::GlobalNamespace::EnvironmentName value);

  constexpr void __cordl_internal_set__environmentNames(::ArrayW<::GlobalNamespace::EnvironmentName, ::Array<::GlobalNamespace::EnvironmentName>*> value);

  constexpr void __cordl_internal_set__integratedLufs(float_t value);

  constexpr void __cordl_internal_set__levelAuthorName(::StringW value);

  constexpr void __cordl_internal_set__levelID(::StringW value);

  constexpr void __cordl_internal_set__previewAudioClip(::UnityW<::UnityEngine::AudioClip> value);

  constexpr void __cordl_internal_set__previewDifficultyBeatmapSets(
      ::ArrayW<::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmapSet*, ::Array<::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmapSet*>*> value);

  constexpr void __cordl_internal_set__previewDuration(float_t value);

  constexpr void __cordl_internal_set__previewStartTime(float_t value);

  constexpr void __cordl_internal_set__shuffle(float_t value);

  constexpr void __cordl_internal_set__shufflePeriod(float_t value);

  constexpr void __cordl_internal_set__songAuthorName(::StringW value);

  constexpr void __cordl_internal_set__songDuration(float_t value);

  constexpr void __cordl_internal_set__songName(::StringW value);

  constexpr void __cordl_internal_set__songSubName(::StringW value);

  constexpr void __cordl_internal_set__songTimeOffset(float_t value);

  constexpr void __cordl_internal_set__version(int32_t value);

  /// @brief Method .ctor, addr 0x26cc410, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_allDirectionsEnvironmentName, addr 0x26cc1c8, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::EnvironmentName get_allDirectionsEnvironmentName();

  /// @brief Method get_beatsPerMinute, addr 0x26cc180, size 0x8, virtual false, abstract: false, final false
  inline float_t get_beatsPerMinute();

  /// @brief Method get_colorSchemes, addr 0x26c8eac, size 0x98, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevelSO_ColorScheme*>* get_colorSchemes();

  /// @brief Method get_contentRating, addr 0x26cc1e0, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PlayerSensitivityFlag get_contentRating();

  /// @brief Method get_coverImage, addr 0x26cc1d0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Sprite> get_coverImage();

  /// @brief Method get_environmentName, addr 0x26cc1c0, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::EnvironmentName get_environmentName();

  /// @brief Method get_environmentNames, addr 0x26c8e14, size 0x98, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::EnvironmentName>* get_environmentNames();

  /// @brief Method get_hasPrecalculatedData, addr 0x26c91d4, size 0x8, virtual false, abstract: false, final false
  inline bool get_hasPrecalculatedData();

  /// @brief Method get_integratedLufs, addr 0x26cc188, size 0x8, virtual false, abstract: false, final false
  inline float_t get_integratedLufs();

  /// @brief Method get_levelAuthorName, addr 0x26cc178, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_levelAuthorName();

  /// @brief Method get_levelID, addr 0x26cc158, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_levelID();

  /// @brief Method get_previewDifficultyBeatmapSets, addr 0x26cc1e8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmapSet*>* get_previewDifficultyBeatmapSets();

  /// @brief Method get_previewDuration, addr 0x26cc1b8, size 0x8, virtual false, abstract: false, final false
  inline float_t get_previewDuration();

  /// @brief Method get_previewStartTime, addr 0x26cc1b0, size 0x8, virtual false, abstract: false, final false
  inline float_t get_previewStartTime();

  /// @brief Method get_shuffle, addr 0x26cc1a0, size 0x8, virtual false, abstract: false, final false
  inline float_t get_shuffle();

  /// @brief Method get_shufflePeriod, addr 0x26cc1a8, size 0x8, virtual false, abstract: false, final false
  inline float_t get_shufflePeriod();

  /// @brief Method get_songAuthorName, addr 0x26cc170, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_songAuthorName();

  /// @brief Method get_songDuration, addr 0x26cc198, size 0x8, virtual false, abstract: false, final false
  inline float_t get_songDuration();

  /// @brief Method get_songName, addr 0x26cc160, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_songName();

  /// @brief Method get_songPreviewAudioClip, addr 0x26cc1d8, size 0x8, virtual true, abstract: false, final true
  inline ::UnityW<::UnityEngine::AudioClip> get_songPreviewAudioClip();

  /// @brief Method get_songSubName, addr 0x26cc168, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_songSubName();

  /// @brief Method get_songTimeOffset, addr 0x26cc190, size 0x8, virtual false, abstract: false, final false
  inline float_t get_songTimeOffset();

  /// @brief Method get_version, addr 0x26cc150, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_version();

  /// @brief Convert to "::GlobalNamespace::IAssetSongPreviewAudioClipProvider"
  constexpr ::GlobalNamespace::IAssetSongPreviewAudioClipProvider* i___GlobalNamespace__IAssetSongPreviewAudioClipProvider() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapLevelSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapLevelSO(BeatmapLevelSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapLevelSO(BeatmapLevelSO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12973 };

  /// @brief Field _version, offset: 0x18, size: 0x4, def value: None
  int32_t ____version;

  /// @brief Field _levelID, offset: 0x20, size: 0x8, def value: None
  ::StringW ____levelID;

  /// @brief Field _songName, offset: 0x28, size: 0x8, def value: None
  ::StringW ____songName;

  /// @brief Field _songSubName, offset: 0x30, size: 0x8, def value: None
  ::StringW ____songSubName;

  /// @brief Field _songAuthorName, offset: 0x38, size: 0x8, def value: None
  ::StringW ____songAuthorName;

  /// @brief Field _levelAuthorName, offset: 0x40, size: 0x8, def value: None
  ::StringW ____levelAuthorName;

  /// @brief Field _previewAudioClip, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AudioClip> ____previewAudioClip;

  /// @brief Field _beatsPerMinute, offset: 0x50, size: 0x4, def value: None
  float_t ____beatsPerMinute;

  /// @brief Field _integratedLufs, offset: 0x54, size: 0x4, def value: None
  float_t ____integratedLufs;

  /// @brief Field _songTimeOffset, offset: 0x58, size: 0x4, def value: None
  float_t ____songTimeOffset;

  /// @brief Field _shuffle, offset: 0x5c, size: 0x4, def value: None
  float_t ____shuffle;

  /// @brief Field _shufflePeriod, offset: 0x60, size: 0x4, def value: None
  float_t ____shufflePeriod;

  /// @brief Field _previewStartTime, offset: 0x64, size: 0x4, def value: None
  float_t ____previewStartTime;

  /// @brief Field _previewDuration, offset: 0x68, size: 0x4, def value: None
  float_t ____previewDuration;

  /// @brief Field _songDuration, offset: 0x6c, size: 0x4, def value: None
  float_t ____songDuration;

  /// @brief Field _coverImage, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> ____coverImage;

  /// @brief Field _environmentName, offset: 0x78, size: 0x8, def value: None
  ::GlobalNamespace::EnvironmentName ____environmentName;

  /// @brief Field _allDirectionsEnvironmentName, offset: 0x80, size: 0x8, def value: None
  ::GlobalNamespace::EnvironmentName ____allDirectionsEnvironmentName;

  /// @brief Field _environmentNames, offset: 0x88, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::EnvironmentName, ::Array<::GlobalNamespace::EnvironmentName>*> ____environmentNames;

  /// @brief Field _colorSchemes, offset: 0x90, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::BeatmapLevelSO_ColorScheme*, ::Array<::GlobalNamespace::BeatmapLevelSO_ColorScheme*>*> ____colorSchemes;

  /// @brief Field _previewDifficultyBeatmapSets, offset: 0x98, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmapSet*, ::Array<::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmapSet*>*> ____previewDifficultyBeatmapSets;

  /// @brief Field _contentRating, offset: 0xa0, size: 0x4, def value: None
  ::GlobalNamespace::PlayerSensitivityFlag ____contentRating;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapLevelSO, ____version) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelSO, ____levelID) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelSO, ____songName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelSO, ____songSubName) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelSO, ____songAuthorName) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelSO, ____levelAuthorName) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelSO, ____previewAudioClip) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelSO, ____beatsPerMinute) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelSO, ____integratedLufs) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelSO, ____songTimeOffset) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelSO, ____shuffle) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelSO, ____shufflePeriod) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelSO, ____previewStartTime) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelSO, ____previewDuration) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelSO, ____songDuration) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelSO, ____coverImage) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelSO, ____environmentName) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelSO, ____allDirectionsEnvironmentName) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelSO, ____environmentNames) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelSO, ____colorSchemes) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelSO, ____previewDifficultyBeatmapSets) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelSO, ____contentRating) == 0xa0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapLevelSO, 0xa8>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapLevelSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapLevelSO*, "", "BeatmapLevelSO");
NEED_NO_BOX(::GlobalNamespace::BeatmapLevelSO_ColorScheme);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapLevelSO_ColorScheme*, "", "BeatmapLevelSO/ColorScheme");
NEED_NO_BOX(::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap*, "", "BeatmapLevelSO/PreviewDifficultyBeatmap");
NEED_NO_BOX(::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmapSet);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmapSet*, "", "BeatmapLevelSO/PreviewDifficultyBeatmapSet");
NEED_NO_BOX(::GlobalNamespace::PreviewDifficultyBeatmapSet_BeatmapLevelSO___c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PreviewDifficultyBeatmapSet_BeatmapLevelSO___c*, "", "BeatmapLevelSO/PreviewDifficultyBeatmapSet/<>c");

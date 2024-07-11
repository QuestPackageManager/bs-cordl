#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapLevelSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentName_def.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSensitivityFlag_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
struct EnvironmentName;
}
namespace GlobalNamespace {
class IAssetSongPreviewAudioClipProvider;
}
namespace GlobalNamespace {
struct PlayerSensitivityFlag;
}
namespace GlobalNamespace {
class __BeatmapLevelSO__PreviewDifficultyBeatmapSet;
}
namespace GlobalNamespace {
class __BeatmapLevelSO__PreviewDifficultyBeatmapSet____c;
}
namespace GlobalNamespace {
class __BeatmapLevelSO__PreviewDifficultyBeatmap;
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
class Sprite;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapLevelSO;
}
namespace GlobalNamespace {
class __BeatmapLevelSO__PreviewDifficultyBeatmap;
}
namespace GlobalNamespace {
class __BeatmapLevelSO__PreviewDifficultyBeatmapSet;
}
namespace GlobalNamespace {
class __BeatmapLevelSO__PreviewDifficultyBeatmapSet____c;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapLevelSO);
MARK_REF_PTR_T(::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap);
MARK_REF_PTR_T(::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmapSet);
MARK_REF_PTR_T(::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmapSet____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BeatmapLevelSO::PreviewDifficultyBeatmapSet::<>c*
class CORDL_TYPE __BeatmapLevelSO__PreviewDifficultyBeatmapSet____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmapSet____c* __9;

  /// @brief Field <>9__8_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__8_0, put = setStaticF___9__8_0))::System::Comparison_1<::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap*>* __9__8_0;

  static inline ::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmapSet____c* New_ctor();

  /// @brief Method <Add>b__8_0, addr 0x14d1e8c, size 0x90, virtual false, abstract: false, final false
  inline int32_t _Add_b__8_0(::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap* a, ::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap* b);

  /// @brief Method .ctor, addr 0x14d1e84, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmapSet____c* getStaticF___9();

  static inline ::System::Comparison_1<::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap*>* getStaticF___9__8_0();

  static inline void setStaticF___9(::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmapSet____c* value);

  static inline void setStaticF___9__8_0(::System::Comparison_1<::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapLevelSO__PreviewDifficultyBeatmapSet____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapLevelSO__PreviewDifficultyBeatmapSet____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapLevelSO__PreviewDifficultyBeatmapSet____c(__BeatmapLevelSO__PreviewDifficultyBeatmapSet____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapLevelSO__PreviewDifficultyBeatmapSet____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapLevelSO__PreviewDifficultyBeatmapSet____c(__BeatmapLevelSO__PreviewDifficultyBeatmapSet____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmapSet____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::PreviewDifficultyBeatmapSet
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BeatmapLevelSO::PreviewDifficultyBeatmapSet*
class CORDL_TYPE __BeatmapLevelSO__PreviewDifficultyBeatmapSet : public ::System::Object {
public:
  // Declarations
  using __c = ::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmapSet____c;

  /// @brief Field _beatmapCharacteristic, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapCharacteristic, put = __cordl_internal_set__beatmapCharacteristic))::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> _beatmapCharacteristic;

  /// @brief Field _previewDifficultyBeatmaps, offset 0x18, size 0x8
  __declspec(property(
      get = __cordl_internal_get__previewDifficultyBeatmaps,
      put = __cordl_internal_set__previewDifficultyBeatmaps))::System::Collections::Generic::List_1<::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap*>* _previewDifficultyBeatmaps;

  __declspec(property(get = get_beatmapCharacteristic))::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> beatmapCharacteristic;

  __declspec(property(get = get_difficultyBeatmaps))::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap*>* difficultyBeatmaps;

  /// @brief Method Add, addr 0x14d1c64, size 0x1bc, virtual false, abstract: false, final false
  inline void Add(::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap* previewDifficultyBeatmap);

  static inline ::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmapSet* New_ctor(::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic);

  static inline ::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmapSet*
  New_ctor(::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic,
           ::System::Collections::Generic::List_1<::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap*>* previewDifficultyBeatmaps);

  constexpr ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> const& __cordl_internal_get__beatmapCharacteristic() const;

  constexpr ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>& __cordl_internal_get__beatmapCharacteristic();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap*>*& __cordl_internal_get__previewDifficultyBeatmaps();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap*>*> const&
  __cordl_internal_get__previewDifficultyBeatmaps() const;

  constexpr void __cordl_internal_set__beatmapCharacteristic(::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> value);

  constexpr void __cordl_internal_set__previewDifficultyBeatmaps(::System::Collections::Generic::List_1<::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap*>* value);

  /// @brief Method .ctor, addr 0x14d1c10, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic);

  /// @brief Method .ctor, addr 0x14d1c38, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic,
                    ::System::Collections::Generic::List_1<::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap*>* previewDifficultyBeatmaps);

  /// @brief Method get_beatmapCharacteristic, addr 0x14d1c00, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> get_beatmapCharacteristic();

  /// @brief Method get_difficultyBeatmaps, addr 0x14d1c08, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap*>* get_difficultyBeatmaps();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapLevelSO__PreviewDifficultyBeatmapSet();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapLevelSO__PreviewDifficultyBeatmapSet", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapLevelSO__PreviewDifficultyBeatmapSet(__BeatmapLevelSO__PreviewDifficultyBeatmapSet&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapLevelSO__PreviewDifficultyBeatmapSet", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapLevelSO__PreviewDifficultyBeatmapSet(__BeatmapLevelSO__PreviewDifficultyBeatmapSet const&) = delete;

  /// @brief Field _beatmapCharacteristic, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> ____beatmapCharacteristic;

  /// @brief Field _previewDifficultyBeatmaps, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap*>* ____previewDifficultyBeatmaps;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmapSet, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmapSet, ____beatmapCharacteristic) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmapSet, ____previewDifficultyBeatmaps) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::PreviewDifficultyBeatmap
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BeatmapLevelSO::PreviewDifficultyBeatmap*
class CORDL_TYPE __BeatmapLevelSO__PreviewDifficultyBeatmap : public ::System::Object {
public:
  // Declarations
  /// @brief Field _beatmapColorSchemeIdx, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__beatmapColorSchemeIdx, put = __cordl_internal_set__beatmapColorSchemeIdx)) int32_t _beatmapColorSchemeIdx;

  /// @brief Field _bombsCount, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__bombsCount, put = __cordl_internal_set__bombsCount)) int32_t _bombsCount;

  /// @brief Field _cuttableBeatmapObjectsCount, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__cuttableBeatmapObjectsCount, put = __cordl_internal_set__cuttableBeatmapObjectsCount)) int32_t _cuttableBeatmapObjectsCount;

  /// @brief Field _difficulty, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__difficulty, put = __cordl_internal_set__difficulty))::GlobalNamespace::BeatmapDifficulty _difficulty;

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

  __declspec(property(get = get_difficulty))::GlobalNamespace::BeatmapDifficulty difficulty;

  __declspec(property(get = get_environmentNameIdx)) int32_t environmentNameIdx;

  __declspec(property(get = get_noteJumpMovementSpeed)) float_t noteJumpMovementSpeed;

  __declspec(property(get = get_noteJumpStartBeatOffset)) float_t noteJumpStartBeatOffset;

  __declspec(property(get = get_notesCount)) int32_t notesCount;

  __declspec(property(get = get_obstaclesCount)) int32_t obstaclesCount;

  static inline ::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap* New_ctor(::GlobalNamespace::BeatmapDifficulty difficulty, float_t noteJumpMovementSpeed, float_t noteJumpStartBeatOffset,
                                                                                        int32_t environmentNameIdx, int32_t beatmapColorSchemeIdx, int32_t notesCount, int32_t obstaclesCount,
                                                                                        int32_t bombsCount);

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

  /// @brief Method .ctor, addr 0x14d1f64, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::BeatmapDifficulty difficulty, float_t noteJumpMovementSpeed, float_t noteJumpStartBeatOffset, int32_t environmentNameIdx, int32_t beatmapColorSchemeIdx,
                    int32_t notesCount, int32_t obstaclesCount, int32_t bombsCount);

  /// @brief Method get_beatmapColorSchemeIdx, addr 0x14d1f3c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_beatmapColorSchemeIdx();

  /// @brief Method get_bombsCount, addr 0x14d1f54, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_bombsCount();

  /// @brief Method get_cuttableBeatmapObjectsCount, addr 0x14d1f5c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_cuttableBeatmapObjectsCount();

  /// @brief Method get_difficulty, addr 0x14d1f1c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapDifficulty get_difficulty();

  /// @brief Method get_environmentNameIdx, addr 0x14d1f34, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_environmentNameIdx();

  /// @brief Method get_noteJumpMovementSpeed, addr 0x14d1f24, size 0x8, virtual false, abstract: false, final false
  inline float_t get_noteJumpMovementSpeed();

  /// @brief Method get_noteJumpStartBeatOffset, addr 0x14d1f2c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_noteJumpStartBeatOffset();

  /// @brief Method get_notesCount, addr 0x14d1f44, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_notesCount();

  /// @brief Method get_obstaclesCount, addr 0x14d1f4c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_obstaclesCount();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapLevelSO__PreviewDifficultyBeatmap();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapLevelSO__PreviewDifficultyBeatmap", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapLevelSO__PreviewDifficultyBeatmap(__BeatmapLevelSO__PreviewDifficultyBeatmap&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapLevelSO__PreviewDifficultyBeatmap", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapLevelSO__PreviewDifficultyBeatmap(__BeatmapLevelSO__PreviewDifficultyBeatmap const&) = delete;

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
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap, ____difficulty) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap, ____environmentNameIdx) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap, ____beatmapColorSchemeIdx) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap, ____noteJumpMovementSpeed) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap, ____noteJumpStartBeatOffset) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap, ____notesCount) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap, ____obstaclesCount) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap, ____bombsCount) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap, ____cuttableBeatmapObjectsCount) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::BeatmapLevelSO
// SizeInfo { instance_size: 160, native_size: -1, calculated_instance_size: 160, calculated_native_size: 156, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BeatmapLevelSO*
class CORDL_TYPE BeatmapLevelSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  using PreviewDifficultyBeatmap = ::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap;

  using PreviewDifficultyBeatmapSet = ::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmapSet;

  /// @brief Field _allDirectionsEnvironmentName, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__allDirectionsEnvironmentName,
                      put = __cordl_internal_set__allDirectionsEnvironmentName))::GlobalNamespace::EnvironmentName _allDirectionsEnvironmentName;

  /// @brief Field _beatsPerMinute, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get__beatsPerMinute, put = __cordl_internal_set__beatsPerMinute)) float_t _beatsPerMinute;

  /// @brief Field _contentRating, offset 0x98, size 0x4
  __declspec(property(get = __cordl_internal_get__contentRating, put = __cordl_internal_set__contentRating))::GlobalNamespace::PlayerSensitivityFlag _contentRating;

  /// @brief Field _coverImage, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__coverImage, put = __cordl_internal_set__coverImage))::UnityW<::UnityEngine::Sprite> _coverImage;

  /// @brief Field _environmentName, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__environmentName, put = __cordl_internal_set__environmentName))::GlobalNamespace::EnvironmentName _environmentName;

  /// @brief Field _environmentNames, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__environmentNames,
                      put = __cordl_internal_set__environmentNames))::ArrayW<::GlobalNamespace::EnvironmentName, ::Array<::GlobalNamespace::EnvironmentName>*> _environmentNames;

  /// @brief Field _integratedLufs, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get__integratedLufs, put = __cordl_internal_set__integratedLufs)) float_t _integratedLufs;

  /// @brief Field _levelAuthorName, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__levelAuthorName, put = __cordl_internal_set__levelAuthorName))::StringW _levelAuthorName;

  /// @brief Field _levelID, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__levelID, put = __cordl_internal_set__levelID))::StringW _levelID;

  /// @brief Field _previewAudioClip, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__previewAudioClip, put = __cordl_internal_set__previewAudioClip))::UnityW<::UnityEngine::AudioClip> _previewAudioClip;

  /// @brief Field _previewDifficultyBeatmapSets, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__previewDifficultyBeatmapSets,
                      put = __cordl_internal_set__previewDifficultyBeatmapSets))::ArrayW<::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmapSet*,
                                                                                         ::Array<::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmapSet*>*> _previewDifficultyBeatmapSets;

  /// @brief Field _previewDuration, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get__previewDuration, put = __cordl_internal_set__previewDuration)) float_t _previewDuration;

  /// @brief Field _previewStartTime, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get__previewStartTime, put = __cordl_internal_set__previewStartTime)) float_t _previewStartTime;

  /// @brief Field _shuffle, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get__shuffle, put = __cordl_internal_set__shuffle)) float_t _shuffle;

  /// @brief Field _shufflePeriod, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get__shufflePeriod, put = __cordl_internal_set__shufflePeriod)) float_t _shufflePeriod;

  /// @brief Field _songAuthorName, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__songAuthorName, put = __cordl_internal_set__songAuthorName))::StringW _songAuthorName;

  /// @brief Field _songDuration, offset 0x6c, size 0x4
  __declspec(property(get = __cordl_internal_get__songDuration, put = __cordl_internal_set__songDuration)) float_t _songDuration;

  /// @brief Field _songName, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__songName, put = __cordl_internal_set__songName))::StringW _songName;

  /// @brief Field _songSubName, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__songSubName, put = __cordl_internal_set__songSubName))::StringW _songSubName;

  /// @brief Field _songTimeOffset, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get__songTimeOffset, put = __cordl_internal_set__songTimeOffset)) float_t _songTimeOffset;

  /// @brief Field _version, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__version, put = __cordl_internal_set__version)) int32_t _version;

  __declspec(property(get = get_allDirectionsEnvironmentName))::GlobalNamespace::EnvironmentName allDirectionsEnvironmentName;

  __declspec(property(get = get_beatsPerMinute)) float_t beatsPerMinute;

  __declspec(property(get = get_contentRating))::GlobalNamespace::PlayerSensitivityFlag contentRating;

  __declspec(property(get = get_coverImage))::UnityW<::UnityEngine::Sprite> coverImage;

  __declspec(property(get = get_environmentName))::GlobalNamespace::EnvironmentName environmentName;

  __declspec(property(get = get_environmentNames))::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::EnvironmentName>* environmentNames;

  __declspec(property(get = get_hasPrecalculatedData)) bool hasPrecalculatedData;

  __declspec(property(get = get_integratedLufs)) float_t integratedLufs;

  __declspec(property(get = get_levelAuthorName))::StringW levelAuthorName;

  __declspec(property(get = get_levelID))::StringW levelID;

  __declspec(
      property(get = get_previewDifficultyBeatmapSets))::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmapSet*>* previewDifficultyBeatmapSets;

  __declspec(property(get = get_previewDuration)) float_t previewDuration;

  __declspec(property(get = get_previewStartTime)) float_t previewStartTime;

  __declspec(property(get = get_shuffle)) float_t shuffle;

  __declspec(property(get = get_shufflePeriod)) float_t shufflePeriod;

  __declspec(property(get = get_songAuthorName))::StringW songAuthorName;

  __declspec(property(get = get_songDuration)) float_t songDuration;

  __declspec(property(get = get_songName))::StringW songName;

  __declspec(property(get = get_songPreviewAudioClip))::UnityW<::UnityEngine::AudioClip> songPreviewAudioClip;

  __declspec(property(get = get_songSubName))::StringW songSubName;

  __declspec(property(get = get_songTimeOffset)) float_t songTimeOffset;

  __declspec(property(get = get_version)) int32_t version;

  /// @brief Convert operator to "::GlobalNamespace::IAssetSongPreviewAudioClipProvider"
  constexpr operator ::GlobalNamespace::IAssetSongPreviewAudioClipProvider*() noexcept;

  /// @brief Method IncrementVersion, addr 0x14d09e0, size 0x10, virtual false, abstract: false, final false
  inline void IncrementVersion();

  static inline ::GlobalNamespace::BeatmapLevelSO* New_ctor();

  /// @brief Method SetCoverImage, addr 0x14d0be8, size 0x8, virtual false, abstract: false, final false
  inline void SetCoverImage(::UnityEngine::Sprite* coverImage);

  /// @brief Method SetData, addr 0x14d09f0, size 0x1d8, virtual false, abstract: false, final false
  inline void SetData(::StringW levelID, ::StringW songName, ::StringW songSubName, ::StringW songAuthorName, ::StringW levelAuthorName, float_t beatsPerMinute, float_t songTimeOffset,
                      float_t songDuration, float_t shuffle, float_t shufflePeriod, float_t previewStartTime, float_t previewDuration, ::UnityEngine::Sprite* coverImage,
                      ::GlobalNamespace::EnvironmentName environmentName, ::GlobalNamespace::EnvironmentName allDirectionEnvironmentName,
                      ::ArrayW<::GlobalNamespace::EnvironmentName, ::Array<::GlobalNamespace::EnvironmentName>*> environmentNames);

  /// @brief Method SetIntegratedLufs, addr 0x14d0bd0, size 0x8, virtual false, abstract: false, final false
  inline void SetIntegratedLufs(float_t integratedLufs);

  /// @brief Method SetPreviewAudioClip, addr 0x14d0bd8, size 0x8, virtual false, abstract: false, final false
  inline void SetPreviewAudioClip(::UnityEngine::AudioClip* audioClip);

  /// @brief Method SetPreviewDifficultyBeatmaps, addr 0x14d0bc8, size 0x8, virtual false, abstract: false, final false
  inline void SetPreviewDifficultyBeatmaps(
      ::ArrayW<::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmapSet*, ::Array<::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmapSet*>*> previewDifficultyBeatmapSets);

  /// @brief Method SetSongDuration, addr 0x14d0be0, size 0x8, virtual false, abstract: false, final false
  inline void SetSongDuration(float_t songDuration);

  /// @brief Method __SetEnvironmentName, addr 0x14d09d8, size 0x8, virtual false, abstract: false, final false
  inline void __SetEnvironmentName(::GlobalNamespace::EnvironmentName targetEnvironmentName);

  constexpr ::GlobalNamespace::EnvironmentName const& __cordl_internal_get__allDirectionsEnvironmentName() const;

  constexpr ::GlobalNamespace::EnvironmentName& __cordl_internal_get__allDirectionsEnvironmentName();

  constexpr float_t const& __cordl_internal_get__beatsPerMinute() const;

  constexpr float_t& __cordl_internal_get__beatsPerMinute();

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

  constexpr ::ArrayW<::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmapSet*, ::Array<::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmapSet*>*> const&
  __cordl_internal_get__previewDifficultyBeatmapSets() const;

  constexpr ::ArrayW<::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmapSet*, ::Array<::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmapSet*>*>&
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

  constexpr void __cordl_internal_set__contentRating(::GlobalNamespace::PlayerSensitivityFlag value);

  constexpr void __cordl_internal_set__coverImage(::UnityW<::UnityEngine::Sprite> value);

  constexpr void __cordl_internal_set__environmentName(::GlobalNamespace::EnvironmentName value);

  constexpr void __cordl_internal_set__environmentNames(::ArrayW<::GlobalNamespace::EnvironmentName, ::Array<::GlobalNamespace::EnvironmentName>*> value);

  constexpr void __cordl_internal_set__integratedLufs(float_t value);

  constexpr void __cordl_internal_set__levelAuthorName(::StringW value);

  constexpr void __cordl_internal_set__levelID(::StringW value);

  constexpr void __cordl_internal_set__previewAudioClip(::UnityW<::UnityEngine::AudioClip> value);

  constexpr void __cordl_internal_set__previewDifficultyBeatmapSets(
      ::ArrayW<::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmapSet*, ::Array<::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmapSet*>*> value);

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

  /// @brief Method .ctor, addr 0x14d0bf0, size 0x1010, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_allDirectionsEnvironmentName, addr 0x14d09b0, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::EnvironmentName get_allDirectionsEnvironmentName();

  /// @brief Method get_beatsPerMinute, addr 0x14d0968, size 0x8, virtual false, abstract: false, final false
  inline float_t get_beatsPerMinute();

  /// @brief Method get_contentRating, addr 0x14d09c8, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PlayerSensitivityFlag get_contentRating();

  /// @brief Method get_coverImage, addr 0x14d09b8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Sprite> get_coverImage();

  /// @brief Method get_environmentName, addr 0x14d09a8, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::EnvironmentName get_environmentName();

  /// @brief Method get_environmentNames, addr 0x14ce284, size 0x88, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::EnvironmentName>* get_environmentNames();

  /// @brief Method get_hasPrecalculatedData, addr 0x14ce30c, size 0x8, virtual false, abstract: false, final false
  inline bool get_hasPrecalculatedData();

  /// @brief Method get_integratedLufs, addr 0x14d0970, size 0x8, virtual false, abstract: false, final false
  inline float_t get_integratedLufs();

  /// @brief Method get_levelAuthorName, addr 0x14d0960, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_levelAuthorName();

  /// @brief Method get_levelID, addr 0x14d0940, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_levelID();

  /// @brief Method get_previewDifficultyBeatmapSets, addr 0x14d09d0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmapSet*>* get_previewDifficultyBeatmapSets();

  /// @brief Method get_previewDuration, addr 0x14d09a0, size 0x8, virtual false, abstract: false, final false
  inline float_t get_previewDuration();

  /// @brief Method get_previewStartTime, addr 0x14d0998, size 0x8, virtual false, abstract: false, final false
  inline float_t get_previewStartTime();

  /// @brief Method get_shuffle, addr 0x14d0988, size 0x8, virtual false, abstract: false, final false
  inline float_t get_shuffle();

  /// @brief Method get_shufflePeriod, addr 0x14d0990, size 0x8, virtual false, abstract: false, final false
  inline float_t get_shufflePeriod();

  /// @brief Method get_songAuthorName, addr 0x14d0958, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_songAuthorName();

  /// @brief Method get_songDuration, addr 0x14d0980, size 0x8, virtual false, abstract: false, final false
  inline float_t get_songDuration();

  /// @brief Method get_songName, addr 0x14d0948, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_songName();

  /// @brief Method get_songPreviewAudioClip, addr 0x14d09c0, size 0x8, virtual true, abstract: false, final true
  inline ::UnityW<::UnityEngine::AudioClip> get_songPreviewAudioClip();

  /// @brief Method get_songSubName, addr 0x14d0950, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_songSubName();

  /// @brief Method get_songTimeOffset, addr 0x14d0978, size 0x8, virtual false, abstract: false, final false
  inline float_t get_songTimeOffset();

  /// @brief Method get_version, addr 0x14d0938, size 0x8, virtual false, abstract: false, final false
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

  /// @brief Field _previewDifficultyBeatmapSets, offset: 0x90, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmapSet*, ::Array<::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmapSet*>*> ____previewDifficultyBeatmapSets;

  /// @brief Field _contentRating, offset: 0x98, size: 0x4, def value: None
  ::GlobalNamespace::PlayerSensitivityFlag ____contentRating;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapLevelSO, 0xa0>, "Size mismatch!");

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

static_assert(offsetof(::GlobalNamespace::BeatmapLevelSO, ____previewDifficultyBeatmapSets) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelSO, ____contentRating) == 0x98, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapLevelSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapLevelSO*, "", "BeatmapLevelSO");
NEED_NO_BOX(::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap*, "", "BeatmapLevelSO/PreviewDifficultyBeatmap");
NEED_NO_BOX(::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmapSet);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmapSet*, "", "BeatmapLevelSO/PreviewDifficultyBeatmapSet");
NEED_NO_BOX(::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmapSet____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmapSet____c*, "", "BeatmapLevelSO/PreviewDifficultyBeatmapSet/<>c");

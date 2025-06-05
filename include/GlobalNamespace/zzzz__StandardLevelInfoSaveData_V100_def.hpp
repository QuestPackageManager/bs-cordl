#pragma once
// IWYU pragma private; include "GlobalNamespace/StandardLevelInfoSaveData_V100.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(StandardLevelInfoSaveData_V100)
namespace GlobalNamespace {
class StandardLevelInfoSaveData_V100_DifficultyBeatmap;
}
// Forward declare root types
namespace GlobalNamespace {
class StandardLevelInfoSaveData_V100;
}
namespace GlobalNamespace {
class StandardLevelInfoSaveData_V100_DifficultyBeatmap;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::StandardLevelInfoSaveData_V100);
MARK_REF_PTR_T(::GlobalNamespace::StandardLevelInfoSaveData_V100_DifficultyBeatmap);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: StandardLevelInfoSaveData_V100/DifficultyBeatmap
class CORDL_TYPE StandardLevelInfoSaveData_V100_DifficultyBeatmap : public ::System::Object {
public:
  // Declarations
  /// @brief Field _beatmapFilename, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapFilename, put = __cordl_internal_set__beatmapFilename)) ::StringW _beatmapFilename;

  /// @brief Field _difficulty, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__difficulty, put = __cordl_internal_set__difficulty)) ::StringW _difficulty;

  /// @brief Field _difficultyRank, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__difficultyRank, put = __cordl_internal_set__difficultyRank)) int32_t _difficultyRank;

  /// @brief Field _noteJumpMovementSpeed, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__noteJumpMovementSpeed, put = __cordl_internal_set__noteJumpMovementSpeed)) float_t _noteJumpMovementSpeed;

  /// @brief Field _noteJumpStartBeatOffset, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__noteJumpStartBeatOffset, put = __cordl_internal_set__noteJumpStartBeatOffset)) int32_t _noteJumpStartBeatOffset;

  __declspec(property(get = get_beatmapFilename)) ::StringW beatmapFilename;

  __declspec(property(get = get_difficulty)) ::StringW difficulty;

  __declspec(property(get = get_difficultyRank)) int32_t difficultyRank;

  __declspec(property(get = get_noteJumpMovementSpeed)) float_t noteJumpMovementSpeed;

  __declspec(property(get = get_noteJumpStartBeatOffset)) int32_t noteJumpStartBeatOffset;

  static inline ::GlobalNamespace::StandardLevelInfoSaveData_V100_DifficultyBeatmap* New_ctor(::StringW difficultyName, int32_t difficultyRank, ::StringW beatmapFilename,
                                                                                              float_t noteJumpMovementSpeed, int32_t noteJumpStartBeatOffset);

  constexpr ::StringW const& __cordl_internal_get__beatmapFilename() const;

  constexpr ::StringW& __cordl_internal_get__beatmapFilename();

  constexpr ::StringW const& __cordl_internal_get__difficulty() const;

  constexpr ::StringW& __cordl_internal_get__difficulty();

  constexpr int32_t const& __cordl_internal_get__difficultyRank() const;

  constexpr int32_t& __cordl_internal_get__difficultyRank();

  constexpr float_t const& __cordl_internal_get__noteJumpMovementSpeed() const;

  constexpr float_t& __cordl_internal_get__noteJumpMovementSpeed();

  constexpr int32_t const& __cordl_internal_get__noteJumpStartBeatOffset() const;

  constexpr int32_t& __cordl_internal_get__noteJumpStartBeatOffset();

  constexpr void __cordl_internal_set__beatmapFilename(::StringW value);

  constexpr void __cordl_internal_set__difficulty(::StringW value);

  constexpr void __cordl_internal_set__difficultyRank(int32_t value);

  constexpr void __cordl_internal_set__noteJumpMovementSpeed(float_t value);

  constexpr void __cordl_internal_set__noteJumpStartBeatOffset(int32_t value);

  /// @brief Method .ctor, addr 0x26ff4bc, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(::StringW difficultyName, int32_t difficultyRank, ::StringW beatmapFilename, float_t noteJumpMovementSpeed, int32_t noteJumpStartBeatOffset);

  /// @brief Method get_beatmapFilename, addr 0x26ff4a4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_beatmapFilename();

  /// @brief Method get_difficulty, addr 0x26ff494, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_difficulty();

  /// @brief Method get_difficultyRank, addr 0x26ff49c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_difficultyRank();

  /// @brief Method get_noteJumpMovementSpeed, addr 0x26ff4ac, size 0x8, virtual false, abstract: false, final false
  inline float_t get_noteJumpMovementSpeed();

  /// @brief Method get_noteJumpStartBeatOffset, addr 0x26ff4b4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_noteJumpStartBeatOffset();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StandardLevelInfoSaveData_V100_DifficultyBeatmap();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StandardLevelInfoSaveData_V100_DifficultyBeatmap", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StandardLevelInfoSaveData_V100_DifficultyBeatmap(StandardLevelInfoSaveData_V100_DifficultyBeatmap&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StandardLevelInfoSaveData_V100_DifficultyBeatmap", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StandardLevelInfoSaveData_V100_DifficultyBeatmap(StandardLevelInfoSaveData_V100_DifficultyBeatmap const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13267 };

  /// @brief Field _difficulty, offset: 0x10, size: 0x8, def value: None
  ::StringW ____difficulty;

  /// @brief Field _difficultyRank, offset: 0x18, size: 0x4, def value: None
  int32_t ____difficultyRank;

  /// @brief Field _beatmapFilename, offset: 0x20, size: 0x8, def value: None
  ::StringW ____beatmapFilename;

  /// @brief Field _noteJumpMovementSpeed, offset: 0x28, size: 0x4, def value: None
  float_t ____noteJumpMovementSpeed;

  /// @brief Field _noteJumpStartBeatOffset, offset: 0x2c, size: 0x4, def value: None
  int32_t ____noteJumpStartBeatOffset;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::StandardLevelInfoSaveData_V100_DifficultyBeatmap, ____difficulty) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelInfoSaveData_V100_DifficultyBeatmap, ____difficultyRank) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelInfoSaveData_V100_DifficultyBeatmap, ____beatmapFilename) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelInfoSaveData_V100_DifficultyBeatmap, ____noteJumpMovementSpeed) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelInfoSaveData_V100_DifficultyBeatmap, ____noteJumpStartBeatOffset) == 0x2c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StandardLevelInfoSaveData_V100_DifficultyBeatmap, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: StandardLevelInfoSaveData_V100
class CORDL_TYPE StandardLevelInfoSaveData_V100 : public ::System::Object {
public:
  // Declarations
  using DifficultyBeatmap = ::GlobalNamespace::StandardLevelInfoSaveData_V100_DifficultyBeatmap;

  /// @brief Field _beatsPerMinute, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__beatsPerMinute, put = __cordl_internal_set__beatsPerMinute)) float_t _beatsPerMinute;

  /// @brief Field _coverImageFilename, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__coverImageFilename, put = __cordl_internal_set__coverImageFilename)) ::StringW _coverImageFilename;

  /// @brief Field _difficultyBeatmaps, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__difficultyBeatmaps,
                      put = __cordl_internal_set__difficultyBeatmaps)) ::ArrayW<::GlobalNamespace::StandardLevelInfoSaveData_V100_DifficultyBeatmap*,
                                                                                ::Array<::GlobalNamespace::StandardLevelInfoSaveData_V100_DifficultyBeatmap*>*>
      _difficultyBeatmaps;

  /// @brief Field _environmentName, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__environmentName, put = __cordl_internal_set__environmentName)) ::StringW _environmentName;

  /// @brief Field _levelAuthorName, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__levelAuthorName, put = __cordl_internal_set__levelAuthorName)) ::StringW _levelAuthorName;

  /// @brief Field _previewDuration, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get__previewDuration, put = __cordl_internal_set__previewDuration)) float_t _previewDuration;

  /// @brief Field _previewStartTime, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__previewStartTime, put = __cordl_internal_set__previewStartTime)) float_t _previewStartTime;

  /// @brief Field _shuffle, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__shuffle, put = __cordl_internal_set__shuffle)) float_t _shuffle;

  /// @brief Field _shufflePeriod, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get__shufflePeriod, put = __cordl_internal_set__shufflePeriod)) float_t _shufflePeriod;

  /// @brief Field _songAuthorName, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__songAuthorName, put = __cordl_internal_set__songAuthorName)) ::StringW _songAuthorName;

  /// @brief Field _songFilename, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__songFilename, put = __cordl_internal_set__songFilename)) ::StringW _songFilename;

  /// @brief Field _songName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__songName, put = __cordl_internal_set__songName)) ::StringW _songName;

  /// @brief Field _songSubName, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__songSubName, put = __cordl_internal_set__songSubName)) ::StringW _songSubName;

  /// @brief Field _songTimeOffset, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__songTimeOffset, put = __cordl_internal_set__songTimeOffset)) float_t _songTimeOffset;

  /// @brief Field _version, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__version, put = __cordl_internal_set__version)) ::StringW _version;

  __declspec(property(get = get_beatsPerMinute)) float_t beatsPerMinute;

  __declspec(property(get = get_coverImageFilename)) ::StringW coverImageFilename;

  __declspec(property(
      get = get_difficultyBeatmaps)) ::ArrayW<::GlobalNamespace::StandardLevelInfoSaveData_V100_DifficultyBeatmap*, ::Array<::GlobalNamespace::StandardLevelInfoSaveData_V100_DifficultyBeatmap*>*>
      difficultyBeatmaps;

  __declspec(property(get = get_environmentName)) ::StringW environmentName;

  __declspec(property(get = get_levelAuthorName)) ::StringW levelAuthorName;

  __declspec(property(get = get_previewDuration)) float_t previewDuration;

  __declspec(property(get = get_previewStartTime)) float_t previewStartTime;

  __declspec(property(get = get_shuffle)) float_t shuffle;

  __declspec(property(get = get_shufflePeriod)) float_t shufflePeriod;

  __declspec(property(get = get_songAuthorName)) ::StringW songAuthorName;

  __declspec(property(get = get_songFilename)) ::StringW songFilename;

  __declspec(property(get = get_songName)) ::StringW songName;

  __declspec(property(get = get_songSubName)) ::StringW songSubName;

  __declspec(property(get = get_songTimeOffset)) float_t songTimeOffset;

  __declspec(property(get = get_version)) ::StringW version;

  static inline ::GlobalNamespace::StandardLevelInfoSaveData_V100* New_ctor();

  constexpr float_t const& __cordl_internal_get__beatsPerMinute() const;

  constexpr float_t& __cordl_internal_get__beatsPerMinute();

  constexpr ::StringW const& __cordl_internal_get__coverImageFilename() const;

  constexpr ::StringW& __cordl_internal_get__coverImageFilename();

  constexpr ::ArrayW<::GlobalNamespace::StandardLevelInfoSaveData_V100_DifficultyBeatmap*, ::Array<::GlobalNamespace::StandardLevelInfoSaveData_V100_DifficultyBeatmap*>*> const&
  __cordl_internal_get__difficultyBeatmaps() const;

  constexpr ::ArrayW<::GlobalNamespace::StandardLevelInfoSaveData_V100_DifficultyBeatmap*, ::Array<::GlobalNamespace::StandardLevelInfoSaveData_V100_DifficultyBeatmap*>*>&
  __cordl_internal_get__difficultyBeatmaps();

  constexpr ::StringW const& __cordl_internal_get__environmentName() const;

  constexpr ::StringW& __cordl_internal_get__environmentName();

  constexpr ::StringW const& __cordl_internal_get__levelAuthorName() const;

  constexpr ::StringW& __cordl_internal_get__levelAuthorName();

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

  constexpr ::StringW const& __cordl_internal_get__songFilename() const;

  constexpr ::StringW& __cordl_internal_get__songFilename();

  constexpr ::StringW const& __cordl_internal_get__songName() const;

  constexpr ::StringW& __cordl_internal_get__songName();

  constexpr ::StringW const& __cordl_internal_get__songSubName() const;

  constexpr ::StringW& __cordl_internal_get__songSubName();

  constexpr float_t const& __cordl_internal_get__songTimeOffset() const;

  constexpr float_t& __cordl_internal_get__songTimeOffset();

  constexpr ::StringW const& __cordl_internal_get__version() const;

  constexpr ::StringW& __cordl_internal_get__version();

  constexpr void __cordl_internal_set__beatsPerMinute(float_t value);

  constexpr void __cordl_internal_set__coverImageFilename(::StringW value);

  constexpr void __cordl_internal_set__difficultyBeatmaps(
      ::ArrayW<::GlobalNamespace::StandardLevelInfoSaveData_V100_DifficultyBeatmap*, ::Array<::GlobalNamespace::StandardLevelInfoSaveData_V100_DifficultyBeatmap*>*> value);

  constexpr void __cordl_internal_set__environmentName(::StringW value);

  constexpr void __cordl_internal_set__levelAuthorName(::StringW value);

  constexpr void __cordl_internal_set__previewDuration(float_t value);

  constexpr void __cordl_internal_set__previewStartTime(float_t value);

  constexpr void __cordl_internal_set__shuffle(float_t value);

  constexpr void __cordl_internal_set__shufflePeriod(float_t value);

  constexpr void __cordl_internal_set__songAuthorName(::StringW value);

  constexpr void __cordl_internal_set__songFilename(::StringW value);

  constexpr void __cordl_internal_set__songName(::StringW value);

  constexpr void __cordl_internal_set__songSubName(::StringW value);

  constexpr void __cordl_internal_set__songTimeOffset(float_t value);

  constexpr void __cordl_internal_set__version(::StringW value);

  /// @brief Method .ctor, addr 0x26ff48c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_beatsPerMinute, addr 0x26ff43c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_beatsPerMinute();

  /// @brief Method get_coverImageFilename, addr 0x26ff474, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_coverImageFilename();

  /// @brief Method get_difficultyBeatmaps, addr 0x26ff484, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::StandardLevelInfoSaveData_V100_DifficultyBeatmap*, ::Array<::GlobalNamespace::StandardLevelInfoSaveData_V100_DifficultyBeatmap*>*> get_difficultyBeatmaps();

  /// @brief Method get_environmentName, addr 0x26ff47c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_environmentName();

  /// @brief Method get_levelAuthorName, addr 0x26ff434, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_levelAuthorName();

  /// @brief Method get_previewDuration, addr 0x26ff464, size 0x8, virtual false, abstract: false, final false
  inline float_t get_previewDuration();

  /// @brief Method get_previewStartTime, addr 0x26ff45c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_previewStartTime();

  /// @brief Method get_shuffle, addr 0x26ff44c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_shuffle();

  /// @brief Method get_shufflePeriod, addr 0x26ff454, size 0x8, virtual false, abstract: false, final false
  inline float_t get_shufflePeriod();

  /// @brief Method get_songAuthorName, addr 0x26ff42c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_songAuthorName();

  /// @brief Method get_songFilename, addr 0x26ff46c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_songFilename();

  /// @brief Method get_songName, addr 0x26ff41c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_songName();

  /// @brief Method get_songSubName, addr 0x26ff424, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_songSubName();

  /// @brief Method get_songTimeOffset, addr 0x26ff444, size 0x8, virtual false, abstract: false, final false
  inline float_t get_songTimeOffset();

  /// @brief Method get_version, addr 0x26ff414, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_version();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StandardLevelInfoSaveData_V100();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StandardLevelInfoSaveData_V100", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StandardLevelInfoSaveData_V100(StandardLevelInfoSaveData_V100&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StandardLevelInfoSaveData_V100", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StandardLevelInfoSaveData_V100(StandardLevelInfoSaveData_V100 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13268 };

  /// @brief Field kCurrentVersion offset 0xffffffff size 0x8
  static constexpr ::ConstString kCurrentVersion{ u"1.0.0" };

  /// @brief Field _version, offset: 0x10, size: 0x8, def value: None
  ::StringW ____version;

  /// @brief Field _songName, offset: 0x18, size: 0x8, def value: None
  ::StringW ____songName;

  /// @brief Field _songSubName, offset: 0x20, size: 0x8, def value: None
  ::StringW ____songSubName;

  /// @brief Field _songAuthorName, offset: 0x28, size: 0x8, def value: None
  ::StringW ____songAuthorName;

  /// @brief Field _levelAuthorName, offset: 0x30, size: 0x8, def value: None
  ::StringW ____levelAuthorName;

  /// @brief Field _beatsPerMinute, offset: 0x38, size: 0x4, def value: None
  float_t ____beatsPerMinute;

  /// @brief Field _songTimeOffset, offset: 0x3c, size: 0x4, def value: None
  float_t ____songTimeOffset;

  /// @brief Field _shuffle, offset: 0x40, size: 0x4, def value: None
  float_t ____shuffle;

  /// @brief Field _shufflePeriod, offset: 0x44, size: 0x4, def value: None
  float_t ____shufflePeriod;

  /// @brief Field _previewStartTime, offset: 0x48, size: 0x4, def value: None
  float_t ____previewStartTime;

  /// @brief Field _previewDuration, offset: 0x4c, size: 0x4, def value: None
  float_t ____previewDuration;

  /// @brief Field _songFilename, offset: 0x50, size: 0x8, def value: None
  ::StringW ____songFilename;

  /// @brief Field _coverImageFilename, offset: 0x58, size: 0x8, def value: None
  ::StringW ____coverImageFilename;

  /// @brief Field _environmentName, offset: 0x60, size: 0x8, def value: None
  ::StringW ____environmentName;

  /// @brief Field _difficultyBeatmaps, offset: 0x68, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::StandardLevelInfoSaveData_V100_DifficultyBeatmap*, ::Array<::GlobalNamespace::StandardLevelInfoSaveData_V100_DifficultyBeatmap*>*> ____difficultyBeatmaps;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::StandardLevelInfoSaveData_V100, ____version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelInfoSaveData_V100, ____songName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelInfoSaveData_V100, ____songSubName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelInfoSaveData_V100, ____songAuthorName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelInfoSaveData_V100, ____levelAuthorName) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelInfoSaveData_V100, ____beatsPerMinute) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelInfoSaveData_V100, ____songTimeOffset) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelInfoSaveData_V100, ____shuffle) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelInfoSaveData_V100, ____shufflePeriod) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelInfoSaveData_V100, ____previewStartTime) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelInfoSaveData_V100, ____previewDuration) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelInfoSaveData_V100, ____songFilename) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelInfoSaveData_V100, ____coverImageFilename) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelInfoSaveData_V100, ____environmentName) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelInfoSaveData_V100, ____difficultyBeatmaps) == 0x68, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StandardLevelInfoSaveData_V100, 0x70>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::StandardLevelInfoSaveData_V100);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StandardLevelInfoSaveData_V100*, "", "StandardLevelInfoSaveData_V100");
NEED_NO_BOX(::GlobalNamespace::StandardLevelInfoSaveData_V100_DifficultyBeatmap);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StandardLevelInfoSaveData_V100_DifficultyBeatmap*, "", "StandardLevelInfoSaveData_V100/DifficultyBeatmap");

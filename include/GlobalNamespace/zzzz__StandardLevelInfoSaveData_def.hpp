#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(StandardLevelInfoSaveData)
namespace GlobalNamespace {
class __StandardLevelInfoSaveData__VersionCheck;
}
namespace GlobalNamespace {
class __StandardLevelInfoSaveData__DifficultyBeatmap;
}
namespace GlobalNamespace {
class __StandardLevelInfoSaveData__DifficultyBeatmapSet;
}
namespace GlobalNamespace {
class BeatmapLevelColorSchemeSaveData;
}
// Forward declare root types
namespace GlobalNamespace {
class StandardLevelInfoSaveData;
}
namespace GlobalNamespace {
class __StandardLevelInfoSaveData__DifficultyBeatmap;
}
namespace GlobalNamespace {
class __StandardLevelInfoSaveData__DifficultyBeatmapSet;
}
namespace GlobalNamespace {
class __StandardLevelInfoSaveData__VersionCheck;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::StandardLevelInfoSaveData);
MARK_REF_PTR_T(::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmap);
MARK_REF_PTR_T(::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmapSet);
MARK_REF_PTR_T(::GlobalNamespace::__StandardLevelInfoSaveData__VersionCheck);
// Type: ::DifficultyBeatmapSet
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4421))
// CS Name: ::StandardLevelInfoSaveData::DifficultyBeatmapSet*
class CORDL_TYPE __StandardLevelInfoSaveData__DifficultyBeatmapSet : public ::System::Object {
public:
  // Declarations
  /// @brief Field _beatmapCharacteristicName, offset 0x10, size 0x8
  __declspec(property(get = __get__beatmapCharacteristicName, put = __set__beatmapCharacteristicName))::StringW _beatmapCharacteristicName;

  /// @brief Field _difficultyBeatmaps, offset 0x18, size 0x8
  __declspec(property(get = __get__difficultyBeatmaps, put = __set__difficultyBeatmaps))::ArrayW<::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmap*,
                                                                                                 ::Array<::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmap*>*> _difficultyBeatmaps;

  __declspec(property(get = get_beatmapCharacteristicName))::StringW beatmapCharacteristicName;

  __declspec(property(get = get_difficultyBeatmaps))::ArrayW<::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmap*,
                                                             ::Array<::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmap*>*> difficultyBeatmaps;

  constexpr ::StringW& __get__beatmapCharacteristicName();

  constexpr ::StringW const& __get__beatmapCharacteristicName() const;

  constexpr void __set__beatmapCharacteristicName(::StringW value);

  constexpr ::ArrayW<::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmap*, ::Array<::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmap*>*>& __get__difficultyBeatmaps();

  constexpr ::ArrayW<::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmap*, ::Array<::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmap*>*> const&
  __get__difficultyBeatmaps() const;

  constexpr void
  __set__difficultyBeatmaps(::ArrayW<::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmap*, ::Array<::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmap*>*> value);

  /// @brief Method get_beatmapCharacteristicName, addr 0x234e2b4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_beatmapCharacteristicName();

  /// @brief Method get_difficultyBeatmaps, addr 0x234e2bc, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmap*, ::Array<::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmap*>*> get_difficultyBeatmaps();

  static inline ::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmapSet*
  New_ctor(::StringW beatmapCharacteristicName,
           ::ArrayW<::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmap*, ::Array<::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmap*>*> difficultyBeatmaps);

  /// @brief Method .ctor, addr 0x234e288, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::StringW beatmapCharacteristicName,
                    ::ArrayW<::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmap*, ::Array<::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmap*>*> difficultyBeatmaps);

  // Ctor Parameters [CppParam { name: "", ty: "__StandardLevelInfoSaveData__DifficultyBeatmapSet", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __StandardLevelInfoSaveData__DifficultyBeatmapSet(__StandardLevelInfoSaveData__DifficultyBeatmapSet&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__StandardLevelInfoSaveData__DifficultyBeatmapSet", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __StandardLevelInfoSaveData__DifficultyBeatmapSet(__StandardLevelInfoSaveData__DifficultyBeatmapSet const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __StandardLevelInfoSaveData__DifficultyBeatmapSet();

public:
  /// @brief Field _beatmapCharacteristicName, offset: 0x10, size: 0x8, def value: None
  ::StringW ____beatmapCharacteristicName;

  /// @brief Field _difficultyBeatmaps, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmap*, ::Array<::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmap*>*> ____difficultyBeatmaps;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmapSet, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmapSet, ____beatmapCharacteristicName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmapSet, ____difficultyBeatmaps) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::DifficultyBeatmap
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4422))
// CS Name: ::StandardLevelInfoSaveData::DifficultyBeatmap*
class CORDL_TYPE __StandardLevelInfoSaveData__DifficultyBeatmap : public ::System::Object {
public:
  // Declarations
  /// @brief Field _difficulty, offset 0x10, size 0x8
  __declspec(property(get = __get__difficulty, put = __set__difficulty))::StringW _difficulty;

  /// @brief Field _difficultyRank, offset 0x18, size 0x4
  __declspec(property(get = __get__difficultyRank, put = __set__difficultyRank)) int32_t _difficultyRank;

  /// @brief Field _beatmapFilename, offset 0x20, size 0x8
  __declspec(property(get = __get__beatmapFilename, put = __set__beatmapFilename))::StringW _beatmapFilename;

  /// @brief Field _noteJumpMovementSpeed, offset 0x28, size 0x4
  __declspec(property(get = __get__noteJumpMovementSpeed, put = __set__noteJumpMovementSpeed)) float_t _noteJumpMovementSpeed;

  /// @brief Field _noteJumpStartBeatOffset, offset 0x2c, size 0x4
  __declspec(property(get = __get__noteJumpStartBeatOffset, put = __set__noteJumpStartBeatOffset)) float_t _noteJumpStartBeatOffset;

  /// @brief Field _beatmapColorSchemeIdx, offset 0x30, size 0x4
  __declspec(property(get = __get__beatmapColorSchemeIdx, put = __set__beatmapColorSchemeIdx)) int32_t _beatmapColorSchemeIdx;

  /// @brief Field _environmentNameIdx, offset 0x34, size 0x4
  __declspec(property(get = __get__environmentNameIdx, put = __set__environmentNameIdx)) int32_t _environmentNameIdx;

  __declspec(property(get = get_difficulty))::StringW difficulty;

  __declspec(property(get = get_difficultyRank)) int32_t difficultyRank;

  __declspec(property(get = get_beatmapFilename))::StringW beatmapFilename;

  __declspec(property(get = get_noteJumpMovementSpeed)) float_t noteJumpMovementSpeed;

  __declspec(property(get = get_noteJumpStartBeatOffset)) float_t noteJumpStartBeatOffset;

  __declspec(property(get = get_beatmapColorSchemeIdx)) int32_t beatmapColorSchemeIdx;

  __declspec(property(get = get_environmentNameIdx)) int32_t environmentNameIdx;

  constexpr ::StringW& __get__difficulty();

  constexpr ::StringW const& __get__difficulty() const;

  constexpr void __set__difficulty(::StringW value);

  constexpr int32_t& __get__difficultyRank();

  constexpr int32_t const& __get__difficultyRank() const;

  constexpr void __set__difficultyRank(int32_t value);

  constexpr ::StringW& __get__beatmapFilename();

  constexpr ::StringW const& __get__beatmapFilename() const;

  constexpr void __set__beatmapFilename(::StringW value);

  constexpr float_t& __get__noteJumpMovementSpeed();

  constexpr float_t const& __get__noteJumpMovementSpeed() const;

  constexpr void __set__noteJumpMovementSpeed(float_t value);

  constexpr float_t& __get__noteJumpStartBeatOffset();

  constexpr float_t const& __get__noteJumpStartBeatOffset() const;

  constexpr void __set__noteJumpStartBeatOffset(float_t value);

  constexpr int32_t& __get__beatmapColorSchemeIdx();

  constexpr int32_t const& __get__beatmapColorSchemeIdx() const;

  constexpr void __set__beatmapColorSchemeIdx(int32_t value);

  constexpr int32_t& __get__environmentNameIdx();

  constexpr int32_t const& __get__environmentNameIdx() const;

  constexpr void __set__environmentNameIdx(int32_t value);

  /// @brief Method get_difficulty, addr 0x234e2c4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_difficulty();

  /// @brief Method get_difficultyRank, addr 0x234e2cc, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_difficultyRank();

  /// @brief Method get_beatmapFilename, addr 0x234e2d4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_beatmapFilename();

  /// @brief Method get_noteJumpMovementSpeed, addr 0x234e2dc, size 0x8, virtual false, abstract: false, final false
  inline float_t get_noteJumpMovementSpeed();

  /// @brief Method get_noteJumpStartBeatOffset, addr 0x234e2e4, size 0x8, virtual false, abstract: false, final false
  inline float_t get_noteJumpStartBeatOffset();

  /// @brief Method get_beatmapColorSchemeIdx, addr 0x234e2ec, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_beatmapColorSchemeIdx();

  /// @brief Method get_environmentNameIdx, addr 0x234e2f4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_environmentNameIdx();

  static inline ::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmap* New_ctor(::StringW difficultyName, int32_t difficultyRank, ::StringW beatmapFilename, float_t noteJumpMovementSpeed,
                                                                                            float_t noteJumpStartBeatOffset, int32_t beatmapColorSchemeIdx, int32_t environmentNameIdx);

  /// @brief Method .ctor, addr 0x234e220, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::StringW difficultyName, int32_t difficultyRank, ::StringW beatmapFilename, float_t noteJumpMovementSpeed, float_t noteJumpStartBeatOffset, int32_t beatmapColorSchemeIdx,
                    int32_t environmentNameIdx);

  // Ctor Parameters [CppParam { name: "", ty: "__StandardLevelInfoSaveData__DifficultyBeatmap", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __StandardLevelInfoSaveData__DifficultyBeatmap(__StandardLevelInfoSaveData__DifficultyBeatmap&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__StandardLevelInfoSaveData__DifficultyBeatmap", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __StandardLevelInfoSaveData__DifficultyBeatmap(__StandardLevelInfoSaveData__DifficultyBeatmap const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __StandardLevelInfoSaveData__DifficultyBeatmap();

public:
  /// @brief Field _difficulty, offset: 0x10, size: 0x8, def value: None
  ::StringW ____difficulty;

  /// @brief Field _difficultyRank, offset: 0x18, size: 0x4, def value: None
  int32_t ____difficultyRank;

  /// @brief Field _beatmapFilename, offset: 0x20, size: 0x8, def value: None
  ::StringW ____beatmapFilename;

  /// @brief Field _noteJumpMovementSpeed, offset: 0x28, size: 0x4, def value: None
  float_t ____noteJumpMovementSpeed;

  /// @brief Field _noteJumpStartBeatOffset, offset: 0x2c, size: 0x4, def value: None
  float_t ____noteJumpStartBeatOffset;

  /// @brief Field _beatmapColorSchemeIdx, offset: 0x30, size: 0x4, def value: None
  int32_t ____beatmapColorSchemeIdx;

  /// @brief Field _environmentNameIdx, offset: 0x34, size: 0x4, def value: None
  int32_t ____environmentNameIdx;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmap, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmap, ____difficulty) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmap, ____difficultyRank) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmap, ____beatmapFilename) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmap, ____noteJumpMovementSpeed) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmap, ____noteJumpStartBeatOffset) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmap, ____beatmapColorSchemeIdx) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmap, ____environmentNameIdx) == 0x34, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::VersionCheck
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4423))
// CS Name: ::StandardLevelInfoSaveData::VersionCheck*
class CORDL_TYPE __StandardLevelInfoSaveData__VersionCheck : public ::System::Object {
public:
  // Declarations
  /// @brief Field _version, offset 0x10, size 0x8
  __declspec(property(get = __get__version, put = __set__version))::StringW _version;

  __declspec(property(get = get_version))::StringW version;

  constexpr ::StringW& __get__version();

  constexpr ::StringW const& __get__version() const;

  constexpr void __set__version(::StringW value);

  /// @brief Method get_version, addr 0x234e2fc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_version();

  static inline ::GlobalNamespace::__StandardLevelInfoSaveData__VersionCheck* New_ctor();

  /// @brief Method .ctor, addr 0x234e304, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__StandardLevelInfoSaveData__VersionCheck", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __StandardLevelInfoSaveData__VersionCheck(__StandardLevelInfoSaveData__VersionCheck&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__StandardLevelInfoSaveData__VersionCheck", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __StandardLevelInfoSaveData__VersionCheck(__StandardLevelInfoSaveData__VersionCheck const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __StandardLevelInfoSaveData__VersionCheck();

public:
  /// @brief Field _version, offset: 0x10, size: 0x8, def value: None
  ::StringW ____version;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__StandardLevelInfoSaveData__VersionCheck, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__StandardLevelInfoSaveData__VersionCheck, ____version) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::StandardLevelInfoSaveData
// SizeInfo { instance_size: 136, native_size: -1, calculated_instance_size: 136, calculated_native_size: 136, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4424))
// CS Name: ::StandardLevelInfoSaveData*
class CORDL_TYPE StandardLevelInfoSaveData : public ::System::Object {
public:
  // Declarations
  using VersionCheck = ::GlobalNamespace::__StandardLevelInfoSaveData__VersionCheck;

  using DifficultyBeatmap = ::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmap;

  using DifficultyBeatmapSet = ::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmapSet;

  /// @brief Field _version, offset 0x10, size 0x8
  __declspec(property(get = __get__version, put = __set__version))::StringW _version;

  /// @brief Field _songName, offset 0x18, size 0x8
  __declspec(property(get = __get__songName, put = __set__songName))::StringW _songName;

  /// @brief Field _songSubName, offset 0x20, size 0x8
  __declspec(property(get = __get__songSubName, put = __set__songSubName))::StringW _songSubName;

  /// @brief Field _songAuthorName, offset 0x28, size 0x8
  __declspec(property(get = __get__songAuthorName, put = __set__songAuthorName))::StringW _songAuthorName;

  /// @brief Field _levelAuthorName, offset 0x30, size 0x8
  __declspec(property(get = __get__levelAuthorName, put = __set__levelAuthorName))::StringW _levelAuthorName;

  /// @brief Field _beatsPerMinute, offset 0x38, size 0x4
  __declspec(property(get = __get__beatsPerMinute, put = __set__beatsPerMinute)) float_t _beatsPerMinute;

  /// @brief Field _songTimeOffset, offset 0x3c, size 0x4
  __declspec(property(get = __get__songTimeOffset, put = __set__songTimeOffset)) float_t _songTimeOffset;

  /// @brief Field _shuffle, offset 0x40, size 0x4
  __declspec(property(get = __get__shuffle, put = __set__shuffle)) float_t _shuffle;

  /// @brief Field _shufflePeriod, offset 0x44, size 0x4
  __declspec(property(get = __get__shufflePeriod, put = __set__shufflePeriod)) float_t _shufflePeriod;

  /// @brief Field _previewStartTime, offset 0x48, size 0x4
  __declspec(property(get = __get__previewStartTime, put = __set__previewStartTime)) float_t _previewStartTime;

  /// @brief Field _previewDuration, offset 0x4c, size 0x4
  __declspec(property(get = __get__previewDuration, put = __set__previewDuration)) float_t _previewDuration;

  /// @brief Field _songFilename, offset 0x50, size 0x8
  __declspec(property(get = __get__songFilename, put = __set__songFilename))::StringW _songFilename;

  /// @brief Field _coverImageFilename, offset 0x58, size 0x8
  __declspec(property(get = __get__coverImageFilename, put = __set__coverImageFilename))::StringW _coverImageFilename;

  /// @brief Field _environmentName, offset 0x60, size 0x8
  __declspec(property(get = __get__environmentName, put = __set__environmentName))::StringW _environmentName;

  /// @brief Field _allDirectionsEnvironmentName, offset 0x68, size 0x8
  __declspec(property(get = __get__allDirectionsEnvironmentName, put = __set__allDirectionsEnvironmentName))::StringW _allDirectionsEnvironmentName;

  /// @brief Field _environmentNames, offset 0x70, size 0x8
  __declspec(property(get = __get__environmentNames, put = __set__environmentNames))::ArrayW<::StringW, ::Array<::StringW>*> _environmentNames;

  /// @brief Field _colorSchemes, offset 0x78, size 0x8
  __declspec(property(get = __get__colorSchemes,
                      put = __set__colorSchemes))::ArrayW<::GlobalNamespace::BeatmapLevelColorSchemeSaveData*, ::Array<::GlobalNamespace::BeatmapLevelColorSchemeSaveData*>*> _colorSchemes;

  /// @brief Field _difficultyBeatmapSets, offset 0x80, size 0x8
  __declspec(property(get = __get__difficultyBeatmapSets,
                      put = __set__difficultyBeatmapSets))::ArrayW<::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmapSet*,
                                                                   ::Array<::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmapSet*>*> _difficultyBeatmapSets;

  __declspec(property(get = get_version))::StringW version;

  __declspec(property(get = get_songName))::StringW songName;

  __declspec(property(get = get_songSubName))::StringW songSubName;

  __declspec(property(get = get_songAuthorName))::StringW songAuthorName;

  __declspec(property(get = get_levelAuthorName))::StringW levelAuthorName;

  __declspec(property(get = get_beatsPerMinute)) float_t beatsPerMinute;

  __declspec(property(get = get_songTimeOffset)) float_t songTimeOffset;

  __declspec(property(get = get_shuffle)) float_t shuffle;

  __declspec(property(get = get_shufflePeriod)) float_t shufflePeriod;

  __declspec(property(get = get_previewStartTime)) float_t previewStartTime;

  __declspec(property(get = get_previewDuration)) float_t previewDuration;

  __declspec(property(get = get_songFilename))::StringW songFilename;

  __declspec(property(get = get_coverImageFilename))::StringW coverImageFilename;

  __declspec(property(get = get_environmentName))::StringW environmentName;

  __declspec(property(get = get_allDirectionsEnvironmentName))::StringW allDirectionsEnvironmentName;

  __declspec(property(get = get_environmentNames))::ArrayW<::StringW, ::Array<::StringW>*> environmentNames;

  __declspec(property(get = get_colorSchemes))::ArrayW<::GlobalNamespace::BeatmapLevelColorSchemeSaveData*, ::Array<::GlobalNamespace::BeatmapLevelColorSchemeSaveData*>*> colorSchemes;

  __declspec(property(get = get_difficultyBeatmapSets))::ArrayW<::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmapSet*,
                                                                ::Array<::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmapSet*>*> difficultyBeatmapSets;

  __declspec(property(get = get_hasAllData)) bool hasAllData;

  constexpr ::StringW& __get__version();

  constexpr ::StringW const& __get__version() const;

  constexpr void __set__version(::StringW value);

  constexpr ::StringW& __get__songName();

  constexpr ::StringW const& __get__songName() const;

  constexpr void __set__songName(::StringW value);

  constexpr ::StringW& __get__songSubName();

  constexpr ::StringW const& __get__songSubName() const;

  constexpr void __set__songSubName(::StringW value);

  constexpr ::StringW& __get__songAuthorName();

  constexpr ::StringW const& __get__songAuthorName() const;

  constexpr void __set__songAuthorName(::StringW value);

  constexpr ::StringW& __get__levelAuthorName();

  constexpr ::StringW const& __get__levelAuthorName() const;

  constexpr void __set__levelAuthorName(::StringW value);

  constexpr float_t& __get__beatsPerMinute();

  constexpr float_t const& __get__beatsPerMinute() const;

  constexpr void __set__beatsPerMinute(float_t value);

  constexpr float_t& __get__songTimeOffset();

  constexpr float_t const& __get__songTimeOffset() const;

  constexpr void __set__songTimeOffset(float_t value);

  constexpr float_t& __get__shuffle();

  constexpr float_t const& __get__shuffle() const;

  constexpr void __set__shuffle(float_t value);

  constexpr float_t& __get__shufflePeriod();

  constexpr float_t const& __get__shufflePeriod() const;

  constexpr void __set__shufflePeriod(float_t value);

  constexpr float_t& __get__previewStartTime();

  constexpr float_t const& __get__previewStartTime() const;

  constexpr void __set__previewStartTime(float_t value);

  constexpr float_t& __get__previewDuration();

  constexpr float_t const& __get__previewDuration() const;

  constexpr void __set__previewDuration(float_t value);

  constexpr ::StringW& __get__songFilename();

  constexpr ::StringW const& __get__songFilename() const;

  constexpr void __set__songFilename(::StringW value);

  constexpr ::StringW& __get__coverImageFilename();

  constexpr ::StringW const& __get__coverImageFilename() const;

  constexpr void __set__coverImageFilename(::StringW value);

  constexpr ::StringW& __get__environmentName();

  constexpr ::StringW const& __get__environmentName() const;

  constexpr void __set__environmentName(::StringW value);

  constexpr ::StringW& __get__allDirectionsEnvironmentName();

  constexpr ::StringW const& __get__allDirectionsEnvironmentName() const;

  constexpr void __set__allDirectionsEnvironmentName(::StringW value);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __get__environmentNames();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __get__environmentNames() const;

  constexpr void __set__environmentNames(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr ::ArrayW<::GlobalNamespace::BeatmapLevelColorSchemeSaveData*, ::Array<::GlobalNamespace::BeatmapLevelColorSchemeSaveData*>*>& __get__colorSchemes();

  constexpr ::ArrayW<::GlobalNamespace::BeatmapLevelColorSchemeSaveData*, ::Array<::GlobalNamespace::BeatmapLevelColorSchemeSaveData*>*> const& __get__colorSchemes() const;

  constexpr void __set__colorSchemes(::ArrayW<::GlobalNamespace::BeatmapLevelColorSchemeSaveData*, ::Array<::GlobalNamespace::BeatmapLevelColorSchemeSaveData*>*> value);

  constexpr ::ArrayW<::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmapSet*, ::Array<::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmapSet*>*>&
  __get__difficultyBeatmapSets();

  constexpr ::ArrayW<::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmapSet*, ::Array<::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmapSet*>*> const&
  __get__difficultyBeatmapSets() const;

  constexpr void
  __set__difficultyBeatmapSets(::ArrayW<::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmapSet*, ::Array<::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmapSet*>*> value);

  /// @brief Method get_version, addr 0x234da9c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_version();

  /// @brief Method get_songName, addr 0x234daa4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_songName();

  /// @brief Method get_songSubName, addr 0x234daac, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_songSubName();

  /// @brief Method get_songAuthorName, addr 0x234dab4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_songAuthorName();

  /// @brief Method get_levelAuthorName, addr 0x234dabc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_levelAuthorName();

  /// @brief Method get_beatsPerMinute, addr 0x234dac4, size 0x8, virtual false, abstract: false, final false
  inline float_t get_beatsPerMinute();

  /// @brief Method get_songTimeOffset, addr 0x234dacc, size 0x8, virtual false, abstract: false, final false
  inline float_t get_songTimeOffset();

  /// @brief Method get_shuffle, addr 0x234dad4, size 0x8, virtual false, abstract: false, final false
  inline float_t get_shuffle();

  /// @brief Method get_shufflePeriod, addr 0x234dadc, size 0x8, virtual false, abstract: false, final false
  inline float_t get_shufflePeriod();

  /// @brief Method get_previewStartTime, addr 0x234dae4, size 0x8, virtual false, abstract: false, final false
  inline float_t get_previewStartTime();

  /// @brief Method get_previewDuration, addr 0x234daec, size 0x8, virtual false, abstract: false, final false
  inline float_t get_previewDuration();

  /// @brief Method get_songFilename, addr 0x234daf4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_songFilename();

  /// @brief Method get_coverImageFilename, addr 0x234dafc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_coverImageFilename();

  /// @brief Method get_environmentName, addr 0x234db04, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_environmentName();

  /// @brief Method get_allDirectionsEnvironmentName, addr 0x234db0c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_allDirectionsEnvironmentName();

  /// @brief Method get_environmentNames, addr 0x234db14, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> get_environmentNames();

  /// @brief Method get_colorSchemes, addr 0x234db1c, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::BeatmapLevelColorSchemeSaveData*, ::Array<::GlobalNamespace::BeatmapLevelColorSchemeSaveData*>*> get_colorSchemes();

  /// @brief Method get_difficultyBeatmapSets, addr 0x234db24, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmapSet*, ::Array<::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmapSet*>*> get_difficultyBeatmapSets();

  static inline ::GlobalNamespace::StandardLevelInfoSaveData*
  New_ctor(::StringW songName, ::StringW songSubName, ::StringW songAuthorName, ::StringW levelAuthorName, float_t beatsPerMinute, float_t songTimeOffset, float_t shuffle, float_t shufflePeriod,
           float_t previewStartTime, float_t previewDuration, ::StringW songFilename, ::StringW coverImageFilename, ::StringW environmentName, ::StringW allDirectionsEnvironmentName,
           ::ArrayW<::StringW, ::Array<::StringW>*> environmentNames,
           ::ArrayW<::GlobalNamespace::BeatmapLevelColorSchemeSaveData*, ::Array<::GlobalNamespace::BeatmapLevelColorSchemeSaveData*>*> colorSchemes,
           ::ArrayW<::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmapSet*, ::Array<::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmapSet*>*> difficultyBeatmapSets);

  /// @brief Method .ctor, addr 0x234db2c, size 0xf8, virtual false, abstract: false, final false
  inline void
  _ctor(::StringW songName, ::StringW songSubName, ::StringW songAuthorName, ::StringW levelAuthorName, float_t beatsPerMinute, float_t songTimeOffset, float_t shuffle, float_t shufflePeriod,
        float_t previewStartTime, float_t previewDuration, ::StringW songFilename, ::StringW coverImageFilename, ::StringW environmentName, ::StringW allDirectionsEnvironmentName,
        ::ArrayW<::StringW, ::Array<::StringW>*> environmentNames,
        ::ArrayW<::GlobalNamespace::BeatmapLevelColorSchemeSaveData*, ::Array<::GlobalNamespace::BeatmapLevelColorSchemeSaveData*>*> colorSchemes,
        ::ArrayW<::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmapSet*, ::Array<::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmapSet*>*> difficultyBeatmapSets);

  /// @brief Method get_hasAllData, addr 0x234dc24, size 0x5c, virtual false, abstract: false, final false
  inline bool get_hasAllData();

  /// @brief Method SetSongFilename, addr 0x234dc80, size 0x8, virtual false, abstract: false, final false
  inline void SetSongFilename(::StringW songFilename);

  /// @brief Method SerializeToJSONString, addr 0x234dc88, size 0x8, virtual false, abstract: false, final false
  inline ::StringW SerializeToJSONString();

  /// @brief Method DeserializeFromJSONString, addr 0x234dc90, size 0x590, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::StandardLevelInfoSaveData* DeserializeFromJSONString(::StringW stringData);

  // Ctor Parameters [CppParam { name: "", ty: "StandardLevelInfoSaveData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StandardLevelInfoSaveData(StandardLevelInfoSaveData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StandardLevelInfoSaveData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StandardLevelInfoSaveData(StandardLevelInfoSaveData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StandardLevelInfoSaveData();

public:
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

  /// @brief Field _allDirectionsEnvironmentName, offset: 0x68, size: 0x8, def value: None
  ::StringW ____allDirectionsEnvironmentName;

  /// @brief Field _environmentNames, offset: 0x70, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ____environmentNames;

  /// @brief Field _colorSchemes, offset: 0x78, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::BeatmapLevelColorSchemeSaveData*, ::Array<::GlobalNamespace::BeatmapLevelColorSchemeSaveData*>*> ____colorSchemes;

  /// @brief Field _difficultyBeatmapSets, offset: 0x80, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmapSet*, ::Array<::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmapSet*>*> ____difficultyBeatmapSets;

  /// @brief Field kCurrentVersion offset 0xffffffff size 0x8
  static constexpr ::ConstString kCurrentVersion{ u"2.1.0" };

  /// @brief Field kDefaultBeatmapCharacteristicName offset 0xffffffff size 0x8
  static constexpr ::ConstString kDefaultBeatmapCharacteristicName{ u"Standard" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StandardLevelInfoSaveData, 0x88>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelInfoSaveData, ____version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelInfoSaveData, ____songName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelInfoSaveData, ____songSubName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelInfoSaveData, ____songAuthorName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelInfoSaveData, ____levelAuthorName) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelInfoSaveData, ____beatsPerMinute) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelInfoSaveData, ____songTimeOffset) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelInfoSaveData, ____shuffle) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelInfoSaveData, ____shufflePeriod) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelInfoSaveData, ____previewStartTime) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelInfoSaveData, ____previewDuration) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelInfoSaveData, ____songFilename) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelInfoSaveData, ____coverImageFilename) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelInfoSaveData, ____environmentName) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelInfoSaveData, ____allDirectionsEnvironmentName) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelInfoSaveData, ____environmentNames) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelInfoSaveData, ____colorSchemes) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelInfoSaveData, ____difficultyBeatmapSets) == 0x80, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::StandardLevelInfoSaveData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StandardLevelInfoSaveData*, "", "StandardLevelInfoSaveData");
NEED_NO_BOX(::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmap);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmap*, "", "StandardLevelInfoSaveData/DifficultyBeatmap");
NEED_NO_BOX(::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmapSet);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__StandardLevelInfoSaveData__DifficultyBeatmapSet*, "", "StandardLevelInfoSaveData/DifficultyBeatmapSet");
NEED_NO_BOX(::GlobalNamespace::__StandardLevelInfoSaveData__VersionCheck);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__StandardLevelInfoSaveData__VersionCheck*, "", "StandardLevelInfoSaveData/VersionCheck");

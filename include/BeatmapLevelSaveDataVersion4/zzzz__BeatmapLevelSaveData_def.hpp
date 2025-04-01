#pragma once
// IWYU pragma private; include "BeatmapLevelSaveDataVersion4/BeatmapLevelSaveData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapLevelSaveData)
namespace BeatmapLevelSaveDataVersion4 {
struct BeatmapLevelSaveData_AudioData;
}
namespace BeatmapLevelSaveDataVersion4 {
struct BeatmapLevelSaveData_BeatmapAuthors;
}
namespace BeatmapLevelSaveDataVersion4 {
class BeatmapLevelSaveData_ColorScheme;
}
namespace BeatmapLevelSaveDataVersion4 {
class BeatmapLevelSaveData_DifficultyBeatmap;
}
namespace BeatmapLevelSaveDataVersion4 {
struct BeatmapLevelSaveData_SongData;
}
namespace System {
class Version;
}
// Forward declare root types
namespace BeatmapLevelSaveDataVersion4 {
class BeatmapLevelSaveData;
}
namespace BeatmapLevelSaveDataVersion4 {
class BeatmapLevelSaveData_ColorScheme;
}
namespace BeatmapLevelSaveDataVersion4 {
class BeatmapLevelSaveData_DifficultyBeatmap;
}
namespace BeatmapLevelSaveDataVersion4 {
struct BeatmapLevelSaveData_AudioData;
}
namespace BeatmapLevelSaveDataVersion4 {
struct BeatmapLevelSaveData_BeatmapAuthors;
}
namespace BeatmapLevelSaveDataVersion4 {
struct BeatmapLevelSaveData_SongData;
}
// Write type traits
MARK_REF_PTR_T(::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData);
MARK_REF_PTR_T(::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_ColorScheme);
MARK_REF_PTR_T(::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_DifficultyBeatmap);
MARK_VAL_T(::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_AudioData);
MARK_VAL_T(::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_BeatmapAuthors);
MARK_VAL_T(::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_SongData);
// Dependencies
namespace BeatmapLevelSaveDataVersion4 {
// Is value type: true
// CS Name: BeatmapLevelSaveDataVersion4.BeatmapLevelSaveData/SongData
struct CORDL_TYPE BeatmapLevelSaveData_SongData {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapLevelSaveData_SongData();

  // Ctor Parameters [CppParam { name: "title", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "subTitle", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "author", ty: "::StringW", modifiers: "", def_value: None }]
  constexpr BeatmapLevelSaveData_SongData(::StringW title, ::StringW subTitle, ::StringW author) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13461 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field title, offset: 0x0, size: 0x8, def value: None
  ::StringW title;

  /// @brief Field subTitle, offset: 0x8, size: 0x8, def value: None
  ::StringW subTitle;

  /// @brief Field author, offset: 0x10, size: 0x8, def value: None
  ::StringW author;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_SongData, title) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_SongData, subTitle) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_SongData, author) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_SongData, 0x18>, "Size mismatch!");

} // namespace BeatmapLevelSaveDataVersion4
// Dependencies
namespace BeatmapLevelSaveDataVersion4 {
// Is value type: true
// CS Name: BeatmapLevelSaveDataVersion4.BeatmapLevelSaveData/AudioData
struct CORDL_TYPE BeatmapLevelSaveData_AudioData {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapLevelSaveData_AudioData();

  // Ctor Parameters [CppParam { name: "songFilename", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "songDuration", ty: "float_t", modifiers: "", def_value: None }, CppParam {
  // name: "audioDataFilename", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "bpm", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "lufs", ty: "float_t",
  // modifiers: "", def_value: None }, CppParam { name: "previewStartTime", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "previewDuration", ty: "float_t", modifiers: "",
  // def_value: None }]
  constexpr BeatmapLevelSaveData_AudioData(::StringW songFilename, float_t songDuration, ::StringW audioDataFilename, float_t bpm, float_t lufs, float_t previewStartTime,
                                           float_t previewDuration) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13462 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  /// @brief Field songFilename, offset: 0x0, size: 0x8, def value: None
  ::StringW songFilename;

  /// @brief Field songDuration, offset: 0x8, size: 0x4, def value: None
  float_t songDuration;

  /// @brief Field audioDataFilename, offset: 0x10, size: 0x8, def value: None
  ::StringW audioDataFilename;

  /// @brief Field bpm, offset: 0x18, size: 0x4, def value: None
  float_t bpm;

  /// @brief Field lufs, offset: 0x1c, size: 0x4, def value: None
  float_t lufs;

  /// @brief Field previewStartTime, offset: 0x20, size: 0x4, def value: None
  float_t previewStartTime;

  /// @brief Field previewDuration, offset: 0x24, size: 0x4, def value: None
  float_t previewDuration;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_AudioData, songFilename) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_AudioData, songDuration) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_AudioData, audioDataFilename) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_AudioData, bpm) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_AudioData, lufs) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_AudioData, previewStartTime) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_AudioData, previewDuration) == 0x24, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_AudioData, 0x28>, "Size mismatch!");

} // namespace BeatmapLevelSaveDataVersion4
// Dependencies System.Object
namespace BeatmapLevelSaveDataVersion4 {
// Is value type: false
// CS Name: BeatmapLevelSaveDataVersion4.BeatmapLevelSaveData/ColorScheme
class CORDL_TYPE BeatmapLevelSaveData_ColorScheme : public ::System::Object {
public:
  // Declarations
  /// @brief Field colorSchemeName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_colorSchemeName, put = __cordl_internal_set_colorSchemeName)) ::StringW colorSchemeName;

  /// @brief Field environmentColor0, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_environmentColor0, put = __cordl_internal_set_environmentColor0)) ::StringW environmentColor0;

  /// @brief Field environmentColor0Boost, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_environmentColor0Boost, put = __cordl_internal_set_environmentColor0Boost)) ::StringW environmentColor0Boost;

  /// @brief Field environmentColor1, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_environmentColor1, put = __cordl_internal_set_environmentColor1)) ::StringW environmentColor1;

  /// @brief Field environmentColor1Boost, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_environmentColor1Boost, put = __cordl_internal_set_environmentColor1Boost)) ::StringW environmentColor1Boost;

  /// @brief Field obstaclesColor, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_obstaclesColor, put = __cordl_internal_set_obstaclesColor)) ::StringW obstaclesColor;

  /// @brief Field overrideLights, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_overrideLights, put = __cordl_internal_set_overrideLights)) bool overrideLights;

  /// @brief Field overrideNotes, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_overrideNotes, put = __cordl_internal_set_overrideNotes)) bool overrideNotes;

  /// @brief Field saberAColor, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_saberAColor, put = __cordl_internal_set_saberAColor)) ::StringW saberAColor;

  /// @brief Field saberBColor, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_saberBColor, put = __cordl_internal_set_saberBColor)) ::StringW saberBColor;

  static inline ::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_ColorScheme* New_ctor();

  constexpr ::StringW const& __cordl_internal_get_colorSchemeName() const;

  constexpr ::StringW& __cordl_internal_get_colorSchemeName();

  constexpr ::StringW const& __cordl_internal_get_environmentColor0() const;

  constexpr ::StringW& __cordl_internal_get_environmentColor0();

  constexpr ::StringW const& __cordl_internal_get_environmentColor0Boost() const;

  constexpr ::StringW& __cordl_internal_get_environmentColor0Boost();

  constexpr ::StringW const& __cordl_internal_get_environmentColor1() const;

  constexpr ::StringW& __cordl_internal_get_environmentColor1();

  constexpr ::StringW const& __cordl_internal_get_environmentColor1Boost() const;

  constexpr ::StringW& __cordl_internal_get_environmentColor1Boost();

  constexpr ::StringW const& __cordl_internal_get_obstaclesColor() const;

  constexpr ::StringW& __cordl_internal_get_obstaclesColor();

  constexpr bool const& __cordl_internal_get_overrideLights() const;

  constexpr bool& __cordl_internal_get_overrideLights();

  constexpr bool const& __cordl_internal_get_overrideNotes() const;

  constexpr bool& __cordl_internal_get_overrideNotes();

  constexpr ::StringW const& __cordl_internal_get_saberAColor() const;

  constexpr ::StringW& __cordl_internal_get_saberAColor();

  constexpr ::StringW const& __cordl_internal_get_saberBColor() const;

  constexpr ::StringW& __cordl_internal_get_saberBColor();

  constexpr void __cordl_internal_set_colorSchemeName(::StringW value);

  constexpr void __cordl_internal_set_environmentColor0(::StringW value);

  constexpr void __cordl_internal_set_environmentColor0Boost(::StringW value);

  constexpr void __cordl_internal_set_environmentColor1(::StringW value);

  constexpr void __cordl_internal_set_environmentColor1Boost(::StringW value);

  constexpr void __cordl_internal_set_obstaclesColor(::StringW value);

  constexpr void __cordl_internal_set_overrideLights(bool value);

  constexpr void __cordl_internal_set_overrideNotes(bool value);

  constexpr void __cordl_internal_set_saberAColor(::StringW value);

  constexpr void __cordl_internal_set_saberBColor(::StringW value);

  /// @brief Method .ctor, addr 0x2707b2c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapLevelSaveData_ColorScheme();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelSaveData_ColorScheme", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapLevelSaveData_ColorScheme(BeatmapLevelSaveData_ColorScheme&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelSaveData_ColorScheme", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapLevelSaveData_ColorScheme(BeatmapLevelSaveData_ColorScheme const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13463 };

  /// @brief Field colorSchemeName, offset: 0x10, size: 0x8, def value: None
  ::StringW ___colorSchemeName;

  /// @brief Field overrideNotes, offset: 0x18, size: 0x1, def value: None
  bool ___overrideNotes;

  /// @brief Field saberAColor, offset: 0x20, size: 0x8, def value: None
  ::StringW ___saberAColor;

  /// @brief Field saberBColor, offset: 0x28, size: 0x8, def value: None
  ::StringW ___saberBColor;

  /// @brief Field obstaclesColor, offset: 0x30, size: 0x8, def value: None
  ::StringW ___obstaclesColor;

  /// @brief Field overrideLights, offset: 0x38, size: 0x1, def value: None
  bool ___overrideLights;

  /// @brief Field environmentColor0, offset: 0x40, size: 0x8, def value: None
  ::StringW ___environmentColor0;

  /// @brief Field environmentColor1, offset: 0x48, size: 0x8, def value: None
  ::StringW ___environmentColor1;

  /// @brief Field environmentColor0Boost, offset: 0x50, size: 0x8, def value: None
  ::StringW ___environmentColor0Boost;

  /// @brief Field environmentColor1Boost, offset: 0x58, size: 0x8, def value: None
  ::StringW ___environmentColor1Boost;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_ColorScheme, ___colorSchemeName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_ColorScheme, ___overrideNotes) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_ColorScheme, ___saberAColor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_ColorScheme, ___saberBColor) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_ColorScheme, ___obstaclesColor) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_ColorScheme, ___overrideLights) == 0x38, "Offset mismatch!");

static_assert(offsetof(::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_ColorScheme, ___environmentColor0) == 0x40, "Offset mismatch!");

static_assert(offsetof(::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_ColorScheme, ___environmentColor1) == 0x48, "Offset mismatch!");

static_assert(offsetof(::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_ColorScheme, ___environmentColor0Boost) == 0x50, "Offset mismatch!");

static_assert(offsetof(::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_ColorScheme, ___environmentColor1Boost) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_ColorScheme, 0x60>, "Size mismatch!");

} // namespace BeatmapLevelSaveDataVersion4
// Dependencies
namespace BeatmapLevelSaveDataVersion4 {
// Is value type: true
// CS Name: BeatmapLevelSaveDataVersion4.BeatmapLevelSaveData/BeatmapAuthors
struct CORDL_TYPE BeatmapLevelSaveData_BeatmapAuthors {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapLevelSaveData_BeatmapAuthors();

  // Ctor Parameters [CppParam { name: "mappers", ty: "::ArrayW<::StringW,::Array<::StringW>*>", modifiers: "", def_value: None }, CppParam { name: "lighters", ty:
  // "::ArrayW<::StringW,::Array<::StringW>*>", modifiers: "", def_value: None }]
  constexpr BeatmapLevelSaveData_BeatmapAuthors(::ArrayW<::StringW, ::Array<::StringW>*> mappers, ::ArrayW<::StringW, ::Array<::StringW>*> lighters) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13464 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field mappers, offset: 0x0, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> mappers;

  /// @brief Field lighters, offset: 0x8, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> lighters;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_BeatmapAuthors, mappers) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_BeatmapAuthors, lighters) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_BeatmapAuthors, 0x10>, "Size mismatch!");

} // namespace BeatmapLevelSaveDataVersion4
// Dependencies BeatmapLevelSaveDataVersion4.BeatmapLevelSaveData::BeatmapAuthors, System.Object
namespace BeatmapLevelSaveDataVersion4 {
// Is value type: false
// CS Name: BeatmapLevelSaveDataVersion4.BeatmapLevelSaveData/DifficultyBeatmap
class CORDL_TYPE BeatmapLevelSaveData_DifficultyBeatmap : public ::System::Object {
public:
  // Declarations
  /// @brief Field beatmapAuthors, offset 0x20, size 0x10
  __declspec(property(get = __cordl_internal_get_beatmapAuthors, put = __cordl_internal_set_beatmapAuthors)) ::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_BeatmapAuthors beatmapAuthors;

  /// @brief Field beatmapColorSchemeIdx, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_beatmapColorSchemeIdx, put = __cordl_internal_set_beatmapColorSchemeIdx)) int32_t beatmapColorSchemeIdx;

  /// @brief Field beatmapDataFilename, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_beatmapDataFilename, put = __cordl_internal_set_beatmapDataFilename)) ::StringW beatmapDataFilename;

  /// @brief Field characteristic, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_characteristic, put = __cordl_internal_set_characteristic)) ::StringW characteristic;

  /// @brief Field difficulty, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_difficulty, put = __cordl_internal_set_difficulty)) ::StringW difficulty;

  /// @brief Field environmentNameIdx, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_environmentNameIdx, put = __cordl_internal_set_environmentNameIdx)) int32_t environmentNameIdx;

  /// @brief Field lightshowDataFilename, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_lightshowDataFilename, put = __cordl_internal_set_lightshowDataFilename)) ::StringW lightshowDataFilename;

  /// @brief Field noteJumpMovementSpeed, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_noteJumpMovementSpeed, put = __cordl_internal_set_noteJumpMovementSpeed)) float_t noteJumpMovementSpeed;

  /// @brief Field noteJumpStartBeatOffset, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_noteJumpStartBeatOffset, put = __cordl_internal_set_noteJumpStartBeatOffset)) float_t noteJumpStartBeatOffset;

  static inline ::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_DifficultyBeatmap* New_ctor();

  constexpr ::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_BeatmapAuthors const& __cordl_internal_get_beatmapAuthors() const;

  constexpr ::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_BeatmapAuthors& __cordl_internal_get_beatmapAuthors();

  constexpr int32_t const& __cordl_internal_get_beatmapColorSchemeIdx() const;

  constexpr int32_t& __cordl_internal_get_beatmapColorSchemeIdx();

  constexpr ::StringW const& __cordl_internal_get_beatmapDataFilename() const;

  constexpr ::StringW& __cordl_internal_get_beatmapDataFilename();

  constexpr ::StringW const& __cordl_internal_get_characteristic() const;

  constexpr ::StringW& __cordl_internal_get_characteristic();

  constexpr ::StringW const& __cordl_internal_get_difficulty() const;

  constexpr ::StringW& __cordl_internal_get_difficulty();

  constexpr int32_t const& __cordl_internal_get_environmentNameIdx() const;

  constexpr int32_t& __cordl_internal_get_environmentNameIdx();

  constexpr ::StringW const& __cordl_internal_get_lightshowDataFilename() const;

  constexpr ::StringW& __cordl_internal_get_lightshowDataFilename();

  constexpr float_t const& __cordl_internal_get_noteJumpMovementSpeed() const;

  constexpr float_t& __cordl_internal_get_noteJumpMovementSpeed();

  constexpr float_t const& __cordl_internal_get_noteJumpStartBeatOffset() const;

  constexpr float_t& __cordl_internal_get_noteJumpStartBeatOffset();

  constexpr void __cordl_internal_set_beatmapAuthors(::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_BeatmapAuthors value);

  constexpr void __cordl_internal_set_beatmapColorSchemeIdx(int32_t value);

  constexpr void __cordl_internal_set_beatmapDataFilename(::StringW value);

  constexpr void __cordl_internal_set_characteristic(::StringW value);

  constexpr void __cordl_internal_set_difficulty(::StringW value);

  constexpr void __cordl_internal_set_environmentNameIdx(int32_t value);

  constexpr void __cordl_internal_set_lightshowDataFilename(::StringW value);

  constexpr void __cordl_internal_set_noteJumpMovementSpeed(float_t value);

  constexpr void __cordl_internal_set_noteJumpStartBeatOffset(float_t value);

  /// @brief Method .ctor, addr 0x2707b34, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapLevelSaveData_DifficultyBeatmap();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelSaveData_DifficultyBeatmap", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapLevelSaveData_DifficultyBeatmap(BeatmapLevelSaveData_DifficultyBeatmap&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelSaveData_DifficultyBeatmap", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapLevelSaveData_DifficultyBeatmap(BeatmapLevelSaveData_DifficultyBeatmap const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13465 };

  /// @brief Field characteristic, offset: 0x10, size: 0x8, def value: None
  ::StringW ___characteristic;

  /// @brief Field difficulty, offset: 0x18, size: 0x8, def value: None
  ::StringW ___difficulty;

  /// @brief Field beatmapAuthors, offset: 0x20, size: 0x10, def value: None
  ::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_BeatmapAuthors ___beatmapAuthors;

  /// @brief Field environmentNameIdx, offset: 0x30, size: 0x4, def value: None
  int32_t ___environmentNameIdx;

  /// @brief Field beatmapColorSchemeIdx, offset: 0x34, size: 0x4, def value: None
  int32_t ___beatmapColorSchemeIdx;

  /// @brief Field noteJumpMovementSpeed, offset: 0x38, size: 0x4, def value: None
  float_t ___noteJumpMovementSpeed;

  /// @brief Field noteJumpStartBeatOffset, offset: 0x3c, size: 0x4, def value: None
  float_t ___noteJumpStartBeatOffset;

  /// @brief Field lightshowDataFilename, offset: 0x40, size: 0x8, def value: None
  ::StringW ___lightshowDataFilename;

  /// @brief Field beatmapDataFilename, offset: 0x48, size: 0x8, def value: None
  ::StringW ___beatmapDataFilename;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_DifficultyBeatmap, ___characteristic) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_DifficultyBeatmap, ___difficulty) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_DifficultyBeatmap, ___beatmapAuthors) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_DifficultyBeatmap, ___environmentNameIdx) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_DifficultyBeatmap, ___beatmapColorSchemeIdx) == 0x34, "Offset mismatch!");

static_assert(offsetof(::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_DifficultyBeatmap, ___noteJumpMovementSpeed) == 0x38, "Offset mismatch!");

static_assert(offsetof(::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_DifficultyBeatmap, ___noteJumpStartBeatOffset) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_DifficultyBeatmap, ___lightshowDataFilename) == 0x40, "Offset mismatch!");

static_assert(offsetof(::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_DifficultyBeatmap, ___beatmapDataFilename) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_DifficultyBeatmap, 0x50>, "Size mismatch!");

} // namespace BeatmapLevelSaveDataVersion4
// Dependencies BeatmapLevelSaveDataVersion4.BeatmapLevelSaveData::AudioData, BeatmapLevelSaveDataVersion4.BeatmapLevelSaveData::SongData, System.Object
namespace BeatmapLevelSaveDataVersion4 {
// Is value type: false
// CS Name: BeatmapLevelSaveDataVersion4.BeatmapLevelSaveData
class CORDL_TYPE BeatmapLevelSaveData : public ::System::Object {
public:
  // Declarations
  using AudioData = ::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_AudioData;

  using BeatmapAuthors = ::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_BeatmapAuthors;

  using ColorScheme = ::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_ColorScheme;

  using DifficultyBeatmap = ::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_DifficultyBeatmap;

  using SongData = ::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_SongData;

  /// @brief Field audio, offset 0x30, size 0x28
  __declspec(property(get = __cordl_internal_get_audio, put = __cordl_internal_set_audio)) ::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_AudioData audio;

  /// @brief Field colorSchemes, offset 0x70, size 0x8
  __declspec(property(
      get = __cordl_internal_get_colorSchemes,
      put = __cordl_internal_set_colorSchemes)) ::ArrayW<::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_ColorScheme*, ::Array<::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_ColorScheme*>*>
      colorSchemes;

  /// @brief Field coverImageFilename, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_coverImageFilename, put = __cordl_internal_set_coverImageFilename)) ::StringW coverImageFilename;

  /// @brief Field difficultyBeatmaps, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_difficultyBeatmaps,
                      put = __cordl_internal_set_difficultyBeatmaps)) ::ArrayW<::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_DifficultyBeatmap*,
                                                                               ::Array<::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_DifficultyBeatmap*>*>
      difficultyBeatmaps;

  /// @brief Field environmentNames, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_environmentNames, put = __cordl_internal_set_environmentNames)) ::ArrayW<::StringW, ::Array<::StringW>*> environmentNames;

  /// @brief Field kCustomColorOverridesVersion, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_kCustomColorOverridesVersion, put = setStaticF_kCustomColorOverridesVersion)) ::System::Version* kCustomColorOverridesVersion;

  /// @brief Field song, offset 0x18, size 0x18
  __declspec(property(get = __cordl_internal_get_song, put = __cordl_internal_set_song)) ::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_SongData song;

  /// @brief Field songPreviewFilename, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_songPreviewFilename, put = __cordl_internal_set_songPreviewFilename)) ::StringW songPreviewFilename;

  /// @brief Field version, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_version, put = __cordl_internal_set_version)) ::StringW version;

  static inline ::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData* New_ctor();

  constexpr ::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_AudioData const& __cordl_internal_get_audio() const;

  constexpr ::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_AudioData& __cordl_internal_get_audio();

  constexpr ::ArrayW<::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_ColorScheme*, ::Array<::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_ColorScheme*>*> const&
  __cordl_internal_get_colorSchemes() const;

  constexpr ::ArrayW<::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_ColorScheme*, ::Array<::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_ColorScheme*>*>&
  __cordl_internal_get_colorSchemes();

  constexpr ::StringW const& __cordl_internal_get_coverImageFilename() const;

  constexpr ::StringW& __cordl_internal_get_coverImageFilename();

  constexpr ::ArrayW<::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_DifficultyBeatmap*, ::Array<::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_DifficultyBeatmap*>*> const&
  __cordl_internal_get_difficultyBeatmaps() const;

  constexpr ::ArrayW<::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_DifficultyBeatmap*, ::Array<::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_DifficultyBeatmap*>*>&
  __cordl_internal_get_difficultyBeatmaps();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_environmentNames() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_environmentNames();

  constexpr ::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_SongData const& __cordl_internal_get_song() const;

  constexpr ::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_SongData& __cordl_internal_get_song();

  constexpr ::StringW const& __cordl_internal_get_songPreviewFilename() const;

  constexpr ::StringW& __cordl_internal_get_songPreviewFilename();

  constexpr ::StringW const& __cordl_internal_get_version() const;

  constexpr ::StringW& __cordl_internal_get_version();

  constexpr void __cordl_internal_set_audio(::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_AudioData value);

  constexpr void
  __cordl_internal_set_colorSchemes(::ArrayW<::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_ColorScheme*, ::Array<::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_ColorScheme*>*> value);

  constexpr void __cordl_internal_set_coverImageFilename(::StringW value);

  constexpr void __cordl_internal_set_difficultyBeatmaps(
      ::ArrayW<::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_DifficultyBeatmap*, ::Array<::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_DifficultyBeatmap*>*> value);

  constexpr void __cordl_internal_set_environmentNames(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_song(::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_SongData value);

  constexpr void __cordl_internal_set_songPreviewFilename(::StringW value);

  constexpr void __cordl_internal_set_version(::StringW value);

  /// @brief Method .ctor, addr 0x2707a4c, size 0x50, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Version* getStaticF_kCustomColorOverridesVersion();

  static inline void setStaticF_kCustomColorOverridesVersion(::System::Version* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapLevelSaveData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelSaveData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapLevelSaveData(BeatmapLevelSaveData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelSaveData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapLevelSaveData(BeatmapLevelSaveData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13466 };

  /// @brief Field kCurrentVersion offset 0xffffffff size 0x8
  static constexpr ::ConstString kCurrentVersion{ u"4.0.1" };

  /// @brief Field version, offset: 0x10, size: 0x8, def value: None
  ::StringW ___version;

  /// @brief Field song, offset: 0x18, size: 0x18, def value: None
  ::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_SongData ___song;

  /// @brief Field audio, offset: 0x30, size: 0x28, def value: None
  ::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_AudioData ___audio;

  /// @brief Field songPreviewFilename, offset: 0x58, size: 0x8, def value: None
  ::StringW ___songPreviewFilename;

  /// @brief Field coverImageFilename, offset: 0x60, size: 0x8, def value: None
  ::StringW ___coverImageFilename;

  /// @brief Field environmentNames, offset: 0x68, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___environmentNames;

  /// @brief Field colorSchemes, offset: 0x70, size: 0x8, def value: None
  ::ArrayW<::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_ColorScheme*, ::Array<::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_ColorScheme*>*> ___colorSchemes;

  /// @brief Field difficultyBeatmaps, offset: 0x78, size: 0x8, def value: None
  ::ArrayW<::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_DifficultyBeatmap*, ::Array<::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_DifficultyBeatmap*>*> ___difficultyBeatmaps;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData, ___version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData, ___song) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData, ___audio) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData, ___songPreviewFilename) == 0x58, "Offset mismatch!");

static_assert(offsetof(::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData, ___coverImageFilename) == 0x60, "Offset mismatch!");

static_assert(offsetof(::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData, ___environmentNames) == 0x68, "Offset mismatch!");

static_assert(offsetof(::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData, ___colorSchemes) == 0x70, "Offset mismatch!");

static_assert(offsetof(::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData, ___difficultyBeatmaps) == 0x78, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData, 0x80>, "Size mismatch!");

} // namespace BeatmapLevelSaveDataVersion4
NEED_NO_BOX(::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData*, "BeatmapLevelSaveDataVersion4", "BeatmapLevelSaveData");
NEED_NO_BOX(::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_ColorScheme);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_ColorScheme*, "BeatmapLevelSaveDataVersion4", "BeatmapLevelSaveData/ColorScheme");
NEED_NO_BOX(::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_DifficultyBeatmap);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_DifficultyBeatmap*, "BeatmapLevelSaveDataVersion4", "BeatmapLevelSaveData/DifficultyBeatmap");
DEFINE_IL2CPP_ARG_TYPE(::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_AudioData, "BeatmapLevelSaveDataVersion4", "BeatmapLevelSaveData/AudioData");
DEFINE_IL2CPP_ARG_TYPE(::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_BeatmapAuthors, "BeatmapLevelSaveDataVersion4", "BeatmapLevelSaveData/BeatmapAuthors");
DEFINE_IL2CPP_ARG_TYPE(::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_SongData, "BeatmapLevelSaveDataVersion4", "BeatmapLevelSaveData/SongData");

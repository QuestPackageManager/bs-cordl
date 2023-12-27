#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(StandardLevelInfoSaveData_V100)
namespace GlobalNamespace {
class __StandardLevelInfoSaveData_V100__DifficultyBeatmap;
}
namespace GlobalNamespace {
class __StandardLevelInfoSaveData_V100__VersionCheck;
}
namespace GlobalNamespace {
class StandardLevelInfoSaveData;
}
// Forward declare root types
namespace GlobalNamespace {
class StandardLevelInfoSaveData_V100;
}
namespace GlobalNamespace {
class __StandardLevelInfoSaveData_V100__DifficultyBeatmap;
}
namespace GlobalNamespace {
class __StandardLevelInfoSaveData_V100__VersionCheck;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::StandardLevelInfoSaveData_V100);
MARK_REF_PTR_T(::GlobalNamespace::__StandardLevelInfoSaveData_V100__DifficultyBeatmap);
MARK_REF_PTR_T(::GlobalNamespace::__StandardLevelInfoSaveData_V100__VersionCheck);
// Type: ::DifficultyBeatmap
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4425))
// CS Name: ::StandardLevelInfoSaveData_V100::DifficultyBeatmap*
class CORDL_TYPE __StandardLevelInfoSaveData_V100__DifficultyBeatmap : public ::System::Object {
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
  __declspec(property(get = __get__noteJumpStartBeatOffset, put = __set__noteJumpStartBeatOffset)) int32_t _noteJumpStartBeatOffset;

  __declspec(property(get = get_difficulty))::StringW difficulty;

  __declspec(property(get = get_difficultyRank)) int32_t difficultyRank;

  __declspec(property(get = get_beatmapFilename))::StringW beatmapFilename;

  __declspec(property(get = get_noteJumpMovementSpeed)) float_t noteJumpMovementSpeed;

  __declspec(property(get = get_noteJumpStartBeatOffset)) int32_t noteJumpStartBeatOffset;

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

  constexpr int32_t& __get__noteJumpStartBeatOffset();

  constexpr int32_t const& __get__noteJumpStartBeatOffset() const;

  constexpr void __set__noteJumpStartBeatOffset(int32_t value);

  /// @brief Method get_difficulty addr 0x234e64c size 0x8 virtual false final false
  inline ::StringW get_difficulty();

  /// @brief Method get_difficultyRank addr 0x234e654 size 0x8 virtual false final false
  inline int32_t get_difficultyRank();

  /// @brief Method get_beatmapFilename addr 0x234e65c size 0x8 virtual false final false
  inline ::StringW get_beatmapFilename();

  /// @brief Method get_noteJumpMovementSpeed addr 0x234e664 size 0x8 virtual false final false
  inline float_t get_noteJumpMovementSpeed();

  /// @brief Method get_noteJumpStartBeatOffset addr 0x234e66c size 0x8 virtual false final false
  inline int32_t get_noteJumpStartBeatOffset();

  static inline ::GlobalNamespace::__StandardLevelInfoSaveData_V100__DifficultyBeatmap* New_ctor(::StringW difficultyName, int32_t difficultyRank, ::StringW beatmapFilename,
                                                                                                 float_t noteJumpMovementSpeed, int32_t noteJumpStartBeatOffset);

  /// @brief Method .ctor addr 0x234e674 size 0x58 virtual false final false
  inline void _ctor(::StringW difficultyName, int32_t difficultyRank, ::StringW beatmapFilename, float_t noteJumpMovementSpeed, int32_t noteJumpStartBeatOffset);

  // Ctor Parameters [CppParam { name: "", ty: "__StandardLevelInfoSaveData_V100__DifficultyBeatmap", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __StandardLevelInfoSaveData_V100__DifficultyBeatmap(__StandardLevelInfoSaveData_V100__DifficultyBeatmap&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__StandardLevelInfoSaveData_V100__DifficultyBeatmap", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __StandardLevelInfoSaveData_V100__DifficultyBeatmap(__StandardLevelInfoSaveData_V100__DifficultyBeatmap const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __StandardLevelInfoSaveData_V100__DifficultyBeatmap();

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
  int32_t ____noteJumpStartBeatOffset;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__StandardLevelInfoSaveData_V100__DifficultyBeatmap, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::VersionCheck
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4426))
// CS Name: ::StandardLevelInfoSaveData_V100::VersionCheck*
class CORDL_TYPE __StandardLevelInfoSaveData_V100__VersionCheck : public ::System::Object {
public:
  // Declarations
  /// @brief Field _version, offset 0x10, size 0x8
  __declspec(property(get = __get__version, put = __set__version))::StringW _version;

  __declspec(property(get = get_version))::StringW version;

  constexpr ::StringW& __get__version();

  constexpr ::StringW const& __get__version() const;

  constexpr void __set__version(::StringW value);

  /// @brief Method get_version addr 0x234e6cc size 0x8 virtual false final false
  inline ::StringW get_version();

  static inline ::GlobalNamespace::__StandardLevelInfoSaveData_V100__VersionCheck* New_ctor();

  /// @brief Method .ctor addr 0x234e6d4 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__StandardLevelInfoSaveData_V100__VersionCheck", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __StandardLevelInfoSaveData_V100__VersionCheck(__StandardLevelInfoSaveData_V100__VersionCheck&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__StandardLevelInfoSaveData_V100__VersionCheck", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __StandardLevelInfoSaveData_V100__VersionCheck(__StandardLevelInfoSaveData_V100__VersionCheck const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __StandardLevelInfoSaveData_V100__VersionCheck();

public:
  /// @brief Field _version, offset: 0x10, size: 0x8, def value: None
  ::StringW ____version;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__StandardLevelInfoSaveData_V100__VersionCheck, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::StandardLevelInfoSaveData_V100
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4427))
// CS Name: ::StandardLevelInfoSaveData_V100*
class CORDL_TYPE StandardLevelInfoSaveData_V100 : public ::System::Object {
public:
  // Declarations
  using VersionCheck = ::GlobalNamespace::__StandardLevelInfoSaveData_V100__VersionCheck;

  using DifficultyBeatmap = ::GlobalNamespace::__StandardLevelInfoSaveData_V100__DifficultyBeatmap;

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

  /// @brief Field _difficultyBeatmaps, offset 0x68, size 0x8
  __declspec(property(get = __get__difficultyBeatmaps, put = __set__difficultyBeatmaps))::ArrayW<::GlobalNamespace::__StandardLevelInfoSaveData_V100__DifficultyBeatmap*,
                                                                                                 ::Array<::GlobalNamespace::__StandardLevelInfoSaveData_V100__DifficultyBeatmap*>*> _difficultyBeatmaps;

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

  __declspec(property(get = get_difficultyBeatmaps))::ArrayW<::GlobalNamespace::__StandardLevelInfoSaveData_V100__DifficultyBeatmap*,
                                                             ::Array<::GlobalNamespace::__StandardLevelInfoSaveData_V100__DifficultyBeatmap*>*> difficultyBeatmaps;

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

  constexpr ::ArrayW<::GlobalNamespace::__StandardLevelInfoSaveData_V100__DifficultyBeatmap*, ::Array<::GlobalNamespace::__StandardLevelInfoSaveData_V100__DifficultyBeatmap*>*>&
  __get__difficultyBeatmaps();

  constexpr ::ArrayW<::GlobalNamespace::__StandardLevelInfoSaveData_V100__DifficultyBeatmap*, ::Array<::GlobalNamespace::__StandardLevelInfoSaveData_V100__DifficultyBeatmap*>*> const&
  __get__difficultyBeatmaps() const;

  constexpr void
  __set__difficultyBeatmaps(::ArrayW<::GlobalNamespace::__StandardLevelInfoSaveData_V100__DifficultyBeatmap*, ::Array<::GlobalNamespace::__StandardLevelInfoSaveData_V100__DifficultyBeatmap*>*> value);

  /// @brief Method get_version addr 0x234e30c size 0x8 virtual false final false
  inline ::StringW get_version();

  /// @brief Method get_songName addr 0x234e314 size 0x8 virtual false final false
  inline ::StringW get_songName();

  /// @brief Method get_songSubName addr 0x234e31c size 0x8 virtual false final false
  inline ::StringW get_songSubName();

  /// @brief Method get_songAuthorName addr 0x234e324 size 0x8 virtual false final false
  inline ::StringW get_songAuthorName();

  /// @brief Method get_levelAuthorName addr 0x234e32c size 0x8 virtual false final false
  inline ::StringW get_levelAuthorName();

  /// @brief Method get_beatsPerMinute addr 0x234e334 size 0x8 virtual false final false
  inline float_t get_beatsPerMinute();

  /// @brief Method get_songTimeOffset addr 0x234e33c size 0x8 virtual false final false
  inline float_t get_songTimeOffset();

  /// @brief Method get_shuffle addr 0x234e344 size 0x8 virtual false final false
  inline float_t get_shuffle();

  /// @brief Method get_shufflePeriod addr 0x234e34c size 0x8 virtual false final false
  inline float_t get_shufflePeriod();

  /// @brief Method get_previewStartTime addr 0x234e354 size 0x8 virtual false final false
  inline float_t get_previewStartTime();

  /// @brief Method get_previewDuration addr 0x234e35c size 0x8 virtual false final false
  inline float_t get_previewDuration();

  /// @brief Method get_songFilename addr 0x234e364 size 0x8 virtual false final false
  inline ::StringW get_songFilename();

  /// @brief Method get_coverImageFilename addr 0x234e36c size 0x8 virtual false final false
  inline ::StringW get_coverImageFilename();

  /// @brief Method get_environmentName addr 0x234e374 size 0x8 virtual false final false
  inline ::StringW get_environmentName();

  /// @brief Method get_difficultyBeatmaps addr 0x234e37c size 0x8 virtual false final false
  inline ::ArrayW<::GlobalNamespace::__StandardLevelInfoSaveData_V100__DifficultyBeatmap*, ::Array<::GlobalNamespace::__StandardLevelInfoSaveData_V100__DifficultyBeatmap*>*> get_difficultyBeatmaps();

  static inline ::GlobalNamespace::StandardLevelInfoSaveData_V100*
  New_ctor(::StringW songName, ::StringW songSubName, ::StringW songAuthorName, ::StringW levelAuthorName, float_t beatsPerMinute, float_t songTimeOffset, float_t shuffle, float_t shufflePeriod,
           float_t previewStartTime, float_t previewDuration, ::StringW songFilename, ::StringW coverImageFilename,
           ::ArrayW<::GlobalNamespace::__StandardLevelInfoSaveData_V100__DifficultyBeatmap*, ::Array<::GlobalNamespace::__StandardLevelInfoSaveData_V100__DifficultyBeatmap*>*> difficultyBeatmaps);

  /// @brief Method .ctor addr 0x234e384 size 0xdc virtual false final false
  inline void
  _ctor(::StringW songName, ::StringW songSubName, ::StringW songAuthorName, ::StringW levelAuthorName, float_t beatsPerMinute, float_t songTimeOffset, float_t shuffle, float_t shufflePeriod,
        float_t previewStartTime, float_t previewDuration, ::StringW songFilename, ::StringW coverImageFilename,
        ::ArrayW<::GlobalNamespace::__StandardLevelInfoSaveData_V100__DifficultyBeatmap*, ::Array<::GlobalNamespace::__StandardLevelInfoSaveData_V100__DifficultyBeatmap*>*> difficultyBeatmaps);

  /// @brief Method get_hasAllData addr 0x234e460 size 0x64 virtual false final false
  inline bool get_hasAllData();

  /// @brief Method SetSongFilename addr 0x234e4c4 size 0x8 virtual false final false
  inline void SetSongFilename(::StringW songFilename);

  /// @brief Method SerializeToJSONString addr 0x234e4cc size 0x8 virtual false final false
  inline ::StringW SerializeToJSONString();

  /// @brief Method DeserializeFromJSONString addr 0x234e4d4 size 0x178 virtual false final false
  static inline ::GlobalNamespace::StandardLevelInfoSaveData* DeserializeFromJSONString(::StringW stringData);

  // Ctor Parameters [CppParam { name: "", ty: "StandardLevelInfoSaveData_V100", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StandardLevelInfoSaveData_V100(StandardLevelInfoSaveData_V100&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StandardLevelInfoSaveData_V100", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StandardLevelInfoSaveData_V100(StandardLevelInfoSaveData_V100 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StandardLevelInfoSaveData_V100();

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

  /// @brief Field _difficultyBeatmaps, offset: 0x68, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__StandardLevelInfoSaveData_V100__DifficultyBeatmap*, ::Array<::GlobalNamespace::__StandardLevelInfoSaveData_V100__DifficultyBeatmap*>*> ____difficultyBeatmaps;

  /// @brief Field kCurrentVersion offset 0xffffffff size 0x8
  static constexpr ::ConstString kCurrentVersion{ u"1.0.0" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StandardLevelInfoSaveData_V100, 0x70>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::StandardLevelInfoSaveData_V100);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StandardLevelInfoSaveData_V100*, "", "StandardLevelInfoSaveData_V100");
NEED_NO_BOX(::GlobalNamespace::__StandardLevelInfoSaveData_V100__DifficultyBeatmap);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__StandardLevelInfoSaveData_V100__DifficultyBeatmap*, "", "StandardLevelInfoSaveData_V100/DifficultyBeatmap");
NEED_NO_BOX(::GlobalNamespace::__StandardLevelInfoSaveData_V100__VersionCheck);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__StandardLevelInfoSaveData_V100__VersionCheck*, "", "StandardLevelInfoSaveData_V100/VersionCheck");

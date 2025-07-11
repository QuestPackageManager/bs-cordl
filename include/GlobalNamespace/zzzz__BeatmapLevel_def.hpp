#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapLevel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PlayerSensitivityFlag_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapLevel)
namespace GlobalNamespace {
class BeatmapBasicData;
}
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace GlobalNamespace {
struct BeatmapDifficulty;
}
namespace GlobalNamespace {
struct BeatmapKey;
}
namespace GlobalNamespace {
class BeatmapLevel___c;
}
namespace GlobalNamespace {
class BeatmapLevel___c__DisplayClass23_0;
}
namespace GlobalNamespace {
class ColorScheme;
}
namespace GlobalNamespace {
struct EnvironmentName;
}
namespace GlobalNamespace {
class IPreviewMediaData;
}
namespace GlobalNamespace {
struct PlayerSensitivityFlag;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IReadOnlyDictionary_2;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapLevel;
}
namespace GlobalNamespace {
class BeatmapLevel___c;
}
namespace GlobalNamespace {
class BeatmapLevel___c__DisplayClass23_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapLevel);
MARK_REF_PTR_T(::GlobalNamespace::BeatmapLevel___c);
MARK_REF_PTR_T(::GlobalNamespace::BeatmapLevel___c__DisplayClass23_0);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapLevel/<>c
class CORDL_TYPE BeatmapLevel___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::BeatmapLevel___c* __9;

  /// @brief Field <>9__23_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__23_1,
                      put = setStaticF___9__23_1)) ::System::Func_2<::System::ValueTuple_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::GlobalNamespace::BeatmapDifficulty>,
                                                                    ::GlobalNamespace::BeatmapDifficulty>* __9__23_1;

  /// @brief Field <>9__23_2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__23_2, put = setStaticF___9__23_2)) ::System::Func_2<::GlobalNamespace::BeatmapDifficulty, int32_t>* __9__23_2;

  /// @brief Field <>9__24_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__24_0,
                      put = setStaticF___9__24_0)) ::System::Func_2<::System::ValueTuple_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::GlobalNamespace::BeatmapDifficulty>,
                                                                    ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>* __9__24_0;

  /// @brief Field <>9__24_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__24_1, put = setStaticF___9__24_1)) ::System::Func_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, int32_t>* __9__24_1;

  static inline ::GlobalNamespace::BeatmapLevel___c* New_ctor();

  /// @brief Method <GetCharacteristics>b__24_0, addr 0x26c55f4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>
  _GetCharacteristics_b__24_0(::System::ValueTuple_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::GlobalNamespace::BeatmapDifficulty> entry);

  /// @brief Method <GetCharacteristics>b__24_1, addr 0x26c55fc, size 0x18, virtual false, abstract: false, final false
  inline int32_t _GetCharacteristics_b__24_1(::GlobalNamespace::BeatmapCharacteristicSO* entry);

  /// @brief Method <GetDifficulties>b__23_1, addr 0x26c55e4, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapDifficulty _GetDifficulties_b__23_1(::System::ValueTuple_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::GlobalNamespace::BeatmapDifficulty> entry);

  /// @brief Method <GetDifficulties>b__23_2, addr 0x26c55ec, size 0x8, virtual false, abstract: false, final false
  inline int32_t _GetDifficulties_b__23_2(::GlobalNamespace::BeatmapDifficulty difficulty);

  /// @brief Method .ctor, addr 0x26c55dc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::BeatmapLevel___c* getStaticF___9();

  static inline ::System::Func_2<::System::ValueTuple_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::GlobalNamespace::BeatmapDifficulty>, ::GlobalNamespace::BeatmapDifficulty>*
  getStaticF___9__23_1();

  static inline ::System::Func_2<::GlobalNamespace::BeatmapDifficulty, int32_t>* getStaticF___9__23_2();

  static inline ::System::Func_2<::System::ValueTuple_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::GlobalNamespace::BeatmapDifficulty>,
                                 ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*
  getStaticF___9__24_0();

  static inline ::System::Func_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, int32_t>* getStaticF___9__24_1();

  static inline void setStaticF___9(::GlobalNamespace::BeatmapLevel___c* value);

  static inline void setStaticF___9__23_1(
      ::System::Func_2<::System::ValueTuple_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::GlobalNamespace::BeatmapDifficulty>, ::GlobalNamespace::BeatmapDifficulty>* value);

  static inline void setStaticF___9__23_2(::System::Func_2<::GlobalNamespace::BeatmapDifficulty, int32_t>* value);

  static inline void setStaticF___9__24_0(::System::Func_2<::System::ValueTuple_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::GlobalNamespace::BeatmapDifficulty>,
                                                           ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>* value);

  static inline void setStaticF___9__24_1(::System::Func_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, int32_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapLevel___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevel___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapLevel___c(BeatmapLevel___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevel___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapLevel___c(BeatmapLevel___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12940 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapLevel___c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapLevel/<>c__DisplayClass23_0
class CORDL_TYPE BeatmapLevel___c__DisplayClass23_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field characteristic, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_characteristic, put = __cordl_internal_set_characteristic)) ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> characteristic;

  static inline ::GlobalNamespace::BeatmapLevel___c__DisplayClass23_0* New_ctor();

  /// @brief Method <GetDifficulties>b__0, addr 0x26c5614, size 0x6c, virtual false, abstract: false, final false
  inline bool _GetDifficulties_b__0(::System::ValueTuple_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::GlobalNamespace::BeatmapDifficulty> entry);

  constexpr ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> const& __cordl_internal_get_characteristic() const;

  constexpr ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>& __cordl_internal_get_characteristic();

  constexpr void __cordl_internal_set_characteristic(::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> value);

  /// @brief Method .ctor, addr 0x26c4f0c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapLevel___c__DisplayClass23_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevel___c__DisplayClass23_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapLevel___c__DisplayClass23_0(BeatmapLevel___c__DisplayClass23_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevel___c__DisplayClass23_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapLevel___c__DisplayClass23_0(BeatmapLevel___c__DisplayClass23_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12941 };

  /// @brief Field characteristic, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> ___characteristic;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapLevel___c__DisplayClass23_0, ___characteristic) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapLevel___c__DisplayClass23_0, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies PlayerSensitivityFlag, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapLevel
class CORDL_TYPE BeatmapLevel : public ::System::Object {
public:
  // Declarations
  using __c = ::GlobalNamespace::BeatmapLevel___c;

  using __c__DisplayClass23_0 = ::GlobalNamespace::BeatmapLevel___c__DisplayClass23_0;

  /// @brief Field _beatmapBasicDatas, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapBasicDatas, put = __cordl_internal_set__beatmapBasicDatas)) ::System::Collections::Generic::Dictionary_2<
      ::System::ValueTuple_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::GlobalNamespace::BeatmapDifficulty>, ::GlobalNamespace::BeatmapBasicData*>* _beatmapBasicDatas;

  /// @brief Field _beatmapKeysCache, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapKeysCache, put = __cordl_internal_set__beatmapKeysCache)) ::ArrayW<::GlobalNamespace::BeatmapKey, ::Array<::GlobalNamespace::BeatmapKey>*>
      _beatmapKeysCache;

  /// @brief Field _characteristicsCache, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__characteristicsCache,
                      put = __cordl_internal_set__characteristicsCache)) ::ArrayW<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::Array<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*>
      _characteristicsCache;

  /// @brief Field allLighters, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_allLighters, put = __cordl_internal_set_allLighters)) ::ArrayW<::StringW, ::Array<::StringW>*> allLighters;

  /// @brief Field allMappers, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_allMappers, put = __cordl_internal_set_allMappers)) ::ArrayW<::StringW, ::Array<::StringW>*> allMappers;

  __declspec(property(get = get_beatmapBasicData)) ::System::Collections::Generic::IReadOnlyDictionary_2<
      ::System::ValueTuple_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::GlobalNamespace::BeatmapDifficulty>, ::GlobalNamespace::BeatmapBasicData*>* beatmapBasicData;

  /// @brief Field beatsPerMinute, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_beatsPerMinute, put = __cordl_internal_set_beatsPerMinute)) float_t beatsPerMinute;

  /// @brief Field contentRating, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_contentRating, put = __cordl_internal_set_contentRating)) ::GlobalNamespace::PlayerSensitivityFlag contentRating;

  /// @brief Field hasPrecalculatedData, offset 0x14, size 0x1
  __declspec(property(get = __cordl_internal_get_hasPrecalculatedData, put = __cordl_internal_set_hasPrecalculatedData)) bool hasPrecalculatedData;

  /// @brief Field integratedLufs, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get_integratedLufs, put = __cordl_internal_set_integratedLufs)) float_t integratedLufs;

  /// @brief Field levelID, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_levelID, put = __cordl_internal_set_levelID)) ::StringW levelID;

  /// @brief Field previewDuration, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_previewDuration, put = __cordl_internal_set_previewDuration)) float_t previewDuration;

  /// @brief Field previewMediaData, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_previewMediaData, put = __cordl_internal_set_previewMediaData)) ::GlobalNamespace::IPreviewMediaData* previewMediaData;

  /// @brief Field previewStartTime, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get_previewStartTime, put = __cordl_internal_set_previewStartTime)) float_t previewStartTime;

  /// @brief Field songAuthorName, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_songAuthorName, put = __cordl_internal_set_songAuthorName)) ::StringW songAuthorName;

  /// @brief Field songDuration, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get_songDuration, put = __cordl_internal_set_songDuration)) float_t songDuration;

  /// @brief Field songName, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_songName, put = __cordl_internal_set_songName)) ::StringW songName;

  /// @brief Field songSubName, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_songSubName, put = __cordl_internal_set_songSubName)) ::StringW songSubName;

  /// @brief Field songTimeOffset, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_songTimeOffset, put = __cordl_internal_set_songTimeOffset)) float_t songTimeOffset;

  /// @brief Field version, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_version, put = __cordl_internal_set_version)) int32_t version;

  /// @brief Method AddBeatmapBasicData, addr 0x26c5414, size 0xb4, virtual false, abstract: false, final false
  inline void AddBeatmapBasicData(::GlobalNamespace::BeatmapCharacteristicSO* characteristic, ::GlobalNamespace::BeatmapDifficulty difficulty, ::GlobalNamespace::BeatmapBasicData* beatmapBasicData);

  /// @brief Method GetBeatmapKeys, addr 0x26c5190, size 0x140, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapKey>* GetBeatmapKeys();

  /// @brief Method GetCharacteristics, addr 0x26c4f14, size 0x27c, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>* GetCharacteristics();

  /// @brief Method GetColorScheme, addr 0x26c53f8, size 0x1c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ColorScheme* GetColorScheme(::GlobalNamespace::BeatmapCharacteristicSO* characteristic, ::GlobalNamespace::BeatmapDifficulty difficulty);

  /// @brief Method GetDifficulties, addr 0x26c4c30, size 0x2dc, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapDifficulty>* GetDifficulties(::GlobalNamespace::BeatmapCharacteristicSO* characteristic);

  /// @brief Method GetDifficultyBeatmapData, addr 0x26c52d0, size 0x10c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapBasicData* GetDifficultyBeatmapData(::GlobalNamespace::BeatmapCharacteristicSO* characteristic, ::GlobalNamespace::BeatmapDifficulty difficulty);

  /// @brief Method GetEnvironmentName, addr 0x26c53dc, size 0x1c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::EnvironmentName GetEnvironmentName(::GlobalNamespace::BeatmapCharacteristicSO* characteristic, ::GlobalNamespace::BeatmapDifficulty difficulty);

  static inline ::GlobalNamespace::BeatmapLevel*
  New_ctor(int32_t version, bool hasPrecalculatedData, ::StringW levelID, ::StringW songName, ::StringW songSubName, ::StringW songAuthorName, ::ArrayW<::StringW, ::Array<::StringW>*> allMappers,
           ::ArrayW<::StringW, ::Array<::StringW>*> allLighters, float_t beatsPerMinute, float_t integratedLufs, float_t songTimeOffset, float_t previewStartTime, float_t previewDuration,
           float_t songDuration, ::GlobalNamespace::PlayerSensitivityFlag contentRating, ::GlobalNamespace::IPreviewMediaData* previewMediaData,
           ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::GlobalNamespace::BeatmapDifficulty>,
                                                        ::GlobalNamespace::BeatmapBasicData*>* beatmapBasicData);

  /// @brief Method RemoveBeatmapBasicData, addr 0x26c54c8, size 0xa4, virtual false, abstract: false, final false
  inline void RemoveBeatmapBasicData(::GlobalNamespace::BeatmapCharacteristicSO* characteristic, ::GlobalNamespace::BeatmapDifficulty difficulty);

  /// @brief Method <GetBeatmapKeys>b__25_0, addr 0x26c556c, size 0x14, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapKey _GetBeatmapKeys_b__25_0(::System::ValueTuple_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::GlobalNamespace::BeatmapDifficulty> entry);

  constexpr ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::GlobalNamespace::BeatmapDifficulty>,
                                                         ::GlobalNamespace::BeatmapBasicData*>* const&
  __cordl_internal_get__beatmapBasicDatas() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::GlobalNamespace::BeatmapDifficulty>,
                                                         ::GlobalNamespace::BeatmapBasicData*>*&
  __cordl_internal_get__beatmapBasicDatas();

  constexpr ::ArrayW<::GlobalNamespace::BeatmapKey, ::Array<::GlobalNamespace::BeatmapKey>*> const& __cordl_internal_get__beatmapKeysCache() const;

  constexpr ::ArrayW<::GlobalNamespace::BeatmapKey, ::Array<::GlobalNamespace::BeatmapKey>*>& __cordl_internal_get__beatmapKeysCache();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::Array<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*> const& __cordl_internal_get__characteristicsCache() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::Array<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*>& __cordl_internal_get__characteristicsCache();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_allLighters() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_allLighters();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_allMappers() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_allMappers();

  constexpr float_t const& __cordl_internal_get_beatsPerMinute() const;

  constexpr float_t& __cordl_internal_get_beatsPerMinute();

  constexpr ::GlobalNamespace::PlayerSensitivityFlag const& __cordl_internal_get_contentRating() const;

  constexpr ::GlobalNamespace::PlayerSensitivityFlag& __cordl_internal_get_contentRating();

  constexpr bool const& __cordl_internal_get_hasPrecalculatedData() const;

  constexpr bool& __cordl_internal_get_hasPrecalculatedData();

  constexpr float_t const& __cordl_internal_get_integratedLufs() const;

  constexpr float_t& __cordl_internal_get_integratedLufs();

  constexpr ::StringW const& __cordl_internal_get_levelID() const;

  constexpr ::StringW& __cordl_internal_get_levelID();

  constexpr float_t const& __cordl_internal_get_previewDuration() const;

  constexpr float_t& __cordl_internal_get_previewDuration();

  constexpr ::GlobalNamespace::IPreviewMediaData* const& __cordl_internal_get_previewMediaData() const;

  constexpr ::GlobalNamespace::IPreviewMediaData*& __cordl_internal_get_previewMediaData();

  constexpr float_t const& __cordl_internal_get_previewStartTime() const;

  constexpr float_t& __cordl_internal_get_previewStartTime();

  constexpr ::StringW const& __cordl_internal_get_songAuthorName() const;

  constexpr ::StringW& __cordl_internal_get_songAuthorName();

  constexpr float_t const& __cordl_internal_get_songDuration() const;

  constexpr float_t& __cordl_internal_get_songDuration();

  constexpr ::StringW const& __cordl_internal_get_songName() const;

  constexpr ::StringW& __cordl_internal_get_songName();

  constexpr ::StringW const& __cordl_internal_get_songSubName() const;

  constexpr ::StringW& __cordl_internal_get_songSubName();

  constexpr float_t const& __cordl_internal_get_songTimeOffset() const;

  constexpr float_t& __cordl_internal_get_songTimeOffset();

  constexpr int32_t const& __cordl_internal_get_version() const;

  constexpr int32_t& __cordl_internal_get_version();

  constexpr void __cordl_internal_set__beatmapBasicDatas(
      ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::GlobalNamespace::BeatmapDifficulty>,
                                                   ::GlobalNamespace::BeatmapBasicData*>* value);

  constexpr void __cordl_internal_set__beatmapKeysCache(::ArrayW<::GlobalNamespace::BeatmapKey, ::Array<::GlobalNamespace::BeatmapKey>*> value);

  constexpr void __cordl_internal_set__characteristicsCache(::ArrayW<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::Array<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*> value);

  constexpr void __cordl_internal_set_allLighters(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_allMappers(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_beatsPerMinute(float_t value);

  constexpr void __cordl_internal_set_contentRating(::GlobalNamespace::PlayerSensitivityFlag value);

  constexpr void __cordl_internal_set_hasPrecalculatedData(bool value);

  constexpr void __cordl_internal_set_integratedLufs(float_t value);

  constexpr void __cordl_internal_set_levelID(::StringW value);

  constexpr void __cordl_internal_set_previewDuration(float_t value);

  constexpr void __cordl_internal_set_previewMediaData(::GlobalNamespace::IPreviewMediaData* value);

  constexpr void __cordl_internal_set_previewStartTime(float_t value);

  constexpr void __cordl_internal_set_songAuthorName(::StringW value);

  constexpr void __cordl_internal_set_songDuration(float_t value);

  constexpr void __cordl_internal_set_songName(::StringW value);

  constexpr void __cordl_internal_set_songSubName(::StringW value);

  constexpr void __cordl_internal_set_songTimeOffset(float_t value);

  constexpr void __cordl_internal_set_version(int32_t value);

  /// @brief Method .ctor, addr 0x26c4b60, size 0xd0, virtual false, abstract: false, final false
  inline void _ctor(int32_t version, bool hasPrecalculatedData, ::StringW levelID, ::StringW songName, ::StringW songSubName, ::StringW songAuthorName,
                    ::ArrayW<::StringW, ::Array<::StringW>*> allMappers, ::ArrayW<::StringW, ::Array<::StringW>*> allLighters, float_t beatsPerMinute, float_t integratedLufs, float_t songTimeOffset,
                    float_t previewStartTime, float_t previewDuration, float_t songDuration, ::GlobalNamespace::PlayerSensitivityFlag contentRating,
                    ::GlobalNamespace::IPreviewMediaData* previewMediaData,
                    ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::GlobalNamespace::BeatmapDifficulty>,
                                                                 ::GlobalNamespace::BeatmapBasicData*>* beatmapBasicData);

  /// @brief Method get_beatmapBasicData, addr 0x26c4b58, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IReadOnlyDictionary_2<::System::ValueTuple_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::GlobalNamespace::BeatmapDifficulty>,
                                                               ::GlobalNamespace::BeatmapBasicData*>*
  get_beatmapBasicData();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapLevel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapLevel(BeatmapLevel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapLevel(BeatmapLevel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12942 };

  /// @brief Field kInvalidVersion offset 0xffffffff size 0x4
  static constexpr int32_t kInvalidVersion{ static_cast<int32_t>(0xffffffff) };

  /// @brief Field version, offset: 0x10, size: 0x4, def value: None
  int32_t ___version;

  /// @brief Field hasPrecalculatedData, offset: 0x14, size: 0x1, def value: None
  bool ___hasPrecalculatedData;

  /// @brief Field levelID, offset: 0x18, size: 0x8, def value: None
  ::StringW ___levelID;

  /// @brief Field songName, offset: 0x20, size: 0x8, def value: None
  ::StringW ___songName;

  /// @brief Field songSubName, offset: 0x28, size: 0x8, def value: None
  ::StringW ___songSubName;

  /// @brief Field songAuthorName, offset: 0x30, size: 0x8, def value: None
  ::StringW ___songAuthorName;

  /// @brief Field allMappers, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___allMappers;

  /// @brief Field allLighters, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___allLighters;

  /// @brief Field beatsPerMinute, offset: 0x48, size: 0x4, def value: None
  float_t ___beatsPerMinute;

  /// @brief Field integratedLufs, offset: 0x4c, size: 0x4, def value: None
  float_t ___integratedLufs;

  /// @brief Field songTimeOffset, offset: 0x50, size: 0x4, def value: None
  float_t ___songTimeOffset;

  /// @brief Field previewStartTime, offset: 0x54, size: 0x4, def value: None
  float_t ___previewStartTime;

  /// @brief Field previewDuration, offset: 0x58, size: 0x4, def value: None
  float_t ___previewDuration;

  /// @brief Field songDuration, offset: 0x5c, size: 0x4, def value: None
  float_t ___songDuration;

  /// @brief Field contentRating, offset: 0x60, size: 0x4, def value: None
  ::GlobalNamespace::PlayerSensitivityFlag ___contentRating;

  /// @brief Field previewMediaData, offset: 0x68, size: 0x8, def value: None
  ::GlobalNamespace::IPreviewMediaData* ___previewMediaData;

  /// @brief Field _beatmapBasicDatas, offset: 0x70, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::GlobalNamespace::BeatmapDifficulty>,
                                               ::GlobalNamespace::BeatmapBasicData*>* ____beatmapBasicDatas;

  /// @brief Field _characteristicsCache, offset: 0x78, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::Array<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*> ____characteristicsCache;

  /// @brief Field _beatmapKeysCache, offset: 0x80, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::BeatmapKey, ::Array<::GlobalNamespace::BeatmapKey>*> ____beatmapKeysCache;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapLevel, ___version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevel, ___hasPrecalculatedData) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevel, ___levelID) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevel, ___songName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevel, ___songSubName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevel, ___songAuthorName) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevel, ___allMappers) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevel, ___allLighters) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevel, ___beatsPerMinute) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevel, ___integratedLufs) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevel, ___songTimeOffset) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevel, ___previewStartTime) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevel, ___previewDuration) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevel, ___songDuration) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevel, ___contentRating) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevel, ___previewMediaData) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevel, ____beatmapBasicDatas) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevel, ____characteristicsCache) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevel, ____beatmapKeysCache) == 0x80, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapLevel, 0x88>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapLevel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapLevel*, "", "BeatmapLevel");
NEED_NO_BOX(::GlobalNamespace::BeatmapLevel___c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapLevel___c*, "", "BeatmapLevel/<>c");
NEED_NO_BOX(::GlobalNamespace::BeatmapLevel___c__DisplayClass23_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapLevel___c__DisplayClass23_0*, "", "BeatmapLevel/<>c__DisplayClass23_0");

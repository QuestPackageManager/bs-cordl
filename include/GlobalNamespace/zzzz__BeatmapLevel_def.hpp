#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PlayerSensitivityFlag_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
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
namespace GlobalNamespace {
class __BeatmapLevel____c;
}
namespace GlobalNamespace {
class __BeatmapLevel____c__DisplayClass19_0;
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
class __BeatmapLevel____c;
}
namespace GlobalNamespace {
class __BeatmapLevel____c__DisplayClass19_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapLevel);
MARK_REF_PTR_T(::GlobalNamespace::__BeatmapLevel____c);
MARK_REF_PTR_T(::GlobalNamespace::__BeatmapLevel____c__DisplayClass19_0);
// Type: ::<>c__DisplayClass19_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10774))
// CS Name: ::BeatmapLevel::<>c__DisplayClass19_0*
class CORDL_TYPE __BeatmapLevel____c__DisplayClass19_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field characteristic, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_characteristic, put = __cordl_internal_set_characteristic))::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> characteristic;

  constexpr ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>& __cordl_internal_get_characteristic();

  constexpr ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> const& __cordl_internal_get_characteristic() const;

  constexpr void __cordl_internal_set_characteristic(::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> value);

  static inline ::GlobalNamespace::__BeatmapLevel____c__DisplayClass19_0* New_ctor();

  /// @brief Method .ctor, addr 0x12824a8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <GetDifficulties>b__0, addr 0x1282918, size 0x6c, virtual false, abstract: false, final false
  inline bool _GetDifficulties_b__0(::System::ValueTuple_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::GlobalNamespace::BeatmapDifficulty> entry);

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapLevel____c__DisplayClass19_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapLevel____c__DisplayClass19_0(__BeatmapLevel____c__DisplayClass19_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapLevel____c__DisplayClass19_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapLevel____c__DisplayClass19_0(__BeatmapLevel____c__DisplayClass19_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapLevel____c__DisplayClass19_0();

public:
  /// @brief Field characteristic, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> ___characteristic;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapLevel____c__DisplayClass19_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevel____c__DisplayClass19_0, ___characteristic) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10775))
// CS Name: ::BeatmapLevel::<>c*
class CORDL_TYPE __BeatmapLevel____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__BeatmapLevel____c* __9;

  /// @brief Field <>9__19_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__19_1,
                             put = setStaticF___9__19_1))::System::Func_2<::System::ValueTuple_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::GlobalNamespace::BeatmapDifficulty>,
                                                                          ::GlobalNamespace::BeatmapDifficulty>* __9__19_1;

  /// @brief Field <>9__20_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__20_0,
                             put = setStaticF___9__20_0))::System::Func_2<::System::ValueTuple_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::GlobalNamespace::BeatmapDifficulty>,
                                                                          ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>* __9__20_0;

  static inline void setStaticF___9(::GlobalNamespace::__BeatmapLevel____c* value);

  static inline ::GlobalNamespace::__BeatmapLevel____c* getStaticF___9();

  static inline void setStaticF___9__19_1(
      ::System::Func_2<::System::ValueTuple_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::GlobalNamespace::BeatmapDifficulty>, ::GlobalNamespace::BeatmapDifficulty>* value);

  static inline ::System::Func_2<::System::ValueTuple_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::GlobalNamespace::BeatmapDifficulty>, ::GlobalNamespace::BeatmapDifficulty>*
  getStaticF___9__19_1();

  static inline void setStaticF___9__20_0(::System::Func_2<::System::ValueTuple_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::GlobalNamespace::BeatmapDifficulty>,
                                                           ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>* value);

  static inline ::System::Func_2<::System::ValueTuple_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::GlobalNamespace::BeatmapDifficulty>,
                                 ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*
  getStaticF___9__20_0();

  static inline ::GlobalNamespace::__BeatmapLevel____c* New_ctor();

  /// @brief Method .ctor, addr 0x12829e8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <GetDifficulties>b__19_1, addr 0x12829f0, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapDifficulty _GetDifficulties_b__19_1(::System::ValueTuple_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::GlobalNamespace::BeatmapDifficulty> entry);

  /// @brief Method <GetCharacteristics>b__20_0, addr 0x12829f8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>
  _GetCharacteristics_b__20_0(::System::ValueTuple_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::GlobalNamespace::BeatmapDifficulty> entry);

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapLevel____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapLevel____c(__BeatmapLevel____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapLevel____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapLevel____c(__BeatmapLevel____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapLevel____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapLevel____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::BeatmapLevel
// SizeInfo { instance_size: 136, native_size: -1, calculated_instance_size: 136, calculated_native_size: 136, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(11052))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10776))
// CS Name: ::BeatmapLevel*
class CORDL_TYPE BeatmapLevel : public ::System::Object {
public:
  // Declarations
  using __c = ::GlobalNamespace::__BeatmapLevel____c;

  using __c__DisplayClass19_0 = ::GlobalNamespace::__BeatmapLevel____c__DisplayClass19_0;

  /// @brief Field hasPrecalculatedData, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_hasPrecalculatedData, put = __cordl_internal_set_hasPrecalculatedData)) bool hasPrecalculatedData;

  /// @brief Field levelID, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_levelID, put = __cordl_internal_set_levelID))::StringW levelID;

  /// @brief Field songName, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_songName, put = __cordl_internal_set_songName))::StringW songName;

  /// @brief Field songSubName, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_songSubName, put = __cordl_internal_set_songSubName))::StringW songSubName;

  /// @brief Field songAuthorName, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_songAuthorName, put = __cordl_internal_set_songAuthorName))::StringW songAuthorName;

  /// @brief Field allMappers, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_allMappers, put = __cordl_internal_set_allMappers))::ArrayW<::StringW, ::Array<::StringW>*> allMappers;

  /// @brief Field allLighters, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_allLighters, put = __cordl_internal_set_allLighters))::ArrayW<::StringW, ::Array<::StringW>*> allLighters;

  /// @brief Field beatsPerMinute, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_beatsPerMinute, put = __cordl_internal_set_beatsPerMinute)) float_t beatsPerMinute;

  /// @brief Field integratedLufs, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get_integratedLufs, put = __cordl_internal_set_integratedLufs)) float_t integratedLufs;

  /// @brief Field songTimeOffset, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_songTimeOffset, put = __cordl_internal_set_songTimeOffset)) float_t songTimeOffset;

  /// @brief Field previewStartTime, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get_previewStartTime, put = __cordl_internal_set_previewStartTime)) float_t previewStartTime;

  /// @brief Field previewDuration, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_previewDuration, put = __cordl_internal_set_previewDuration)) float_t previewDuration;

  /// @brief Field songDuration, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get_songDuration, put = __cordl_internal_set_songDuration)) float_t songDuration;

  /// @brief Field contentRating, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_contentRating, put = __cordl_internal_set_contentRating))::GlobalNamespace::PlayerSensitivityFlag contentRating;

  /// @brief Field previewMediaData, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_previewMediaData, put = __cordl_internal_set_previewMediaData))::GlobalNamespace::IPreviewMediaData* previewMediaData;

  /// @brief Field beatmapBasicData, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_beatmapBasicData, put = __cordl_internal_set_beatmapBasicData))::System::Collections::Generic::IReadOnlyDictionary_2<
      ::System::ValueTuple_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::GlobalNamespace::BeatmapDifficulty>, ::GlobalNamespace::BeatmapBasicData*>* beatmapBasicData;

  /// @brief Field _characteristicsCache, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__characteristicsCache,
                      put = __cordl_internal_set__characteristicsCache))::ArrayW<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>,
                                                                                 ::Array<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*> _characteristicsCache;

  /// @brief Field _beatmapKeysCache, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapKeysCache,
                      put = __cordl_internal_set__beatmapKeysCache))::ArrayW<::GlobalNamespace::BeatmapKey, ::Array<::GlobalNamespace::BeatmapKey>*> _beatmapKeysCache;

  constexpr bool& __cordl_internal_get_hasPrecalculatedData();

  constexpr bool const& __cordl_internal_get_hasPrecalculatedData() const;

  constexpr void __cordl_internal_set_hasPrecalculatedData(bool value);

  constexpr ::StringW& __cordl_internal_get_levelID();

  constexpr ::StringW const& __cordl_internal_get_levelID() const;

  constexpr void __cordl_internal_set_levelID(::StringW value);

  constexpr ::StringW& __cordl_internal_get_songName();

  constexpr ::StringW const& __cordl_internal_get_songName() const;

  constexpr void __cordl_internal_set_songName(::StringW value);

  constexpr ::StringW& __cordl_internal_get_songSubName();

  constexpr ::StringW const& __cordl_internal_get_songSubName() const;

  constexpr void __cordl_internal_set_songSubName(::StringW value);

  constexpr ::StringW& __cordl_internal_get_songAuthorName();

  constexpr ::StringW const& __cordl_internal_get_songAuthorName() const;

  constexpr void __cordl_internal_set_songAuthorName(::StringW value);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_allMappers();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_allMappers() const;

  constexpr void __cordl_internal_set_allMappers(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_allLighters();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_allLighters() const;

  constexpr void __cordl_internal_set_allLighters(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr float_t& __cordl_internal_get_beatsPerMinute();

  constexpr float_t const& __cordl_internal_get_beatsPerMinute() const;

  constexpr void __cordl_internal_set_beatsPerMinute(float_t value);

  constexpr float_t& __cordl_internal_get_integratedLufs();

  constexpr float_t const& __cordl_internal_get_integratedLufs() const;

  constexpr void __cordl_internal_set_integratedLufs(float_t value);

  constexpr float_t& __cordl_internal_get_songTimeOffset();

  constexpr float_t const& __cordl_internal_get_songTimeOffset() const;

  constexpr void __cordl_internal_set_songTimeOffset(float_t value);

  constexpr float_t& __cordl_internal_get_previewStartTime();

  constexpr float_t const& __cordl_internal_get_previewStartTime() const;

  constexpr void __cordl_internal_set_previewStartTime(float_t value);

  constexpr float_t& __cordl_internal_get_previewDuration();

  constexpr float_t const& __cordl_internal_get_previewDuration() const;

  constexpr void __cordl_internal_set_previewDuration(float_t value);

  constexpr float_t& __cordl_internal_get_songDuration();

  constexpr float_t const& __cordl_internal_get_songDuration() const;

  constexpr void __cordl_internal_set_songDuration(float_t value);

  constexpr ::GlobalNamespace::PlayerSensitivityFlag& __cordl_internal_get_contentRating();

  constexpr ::GlobalNamespace::PlayerSensitivityFlag const& __cordl_internal_get_contentRating() const;

  constexpr void __cordl_internal_set_contentRating(::GlobalNamespace::PlayerSensitivityFlag value);

  constexpr ::GlobalNamespace::IPreviewMediaData*& __cordl_internal_get_previewMediaData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IPreviewMediaData*> const& __cordl_internal_get_previewMediaData() const;

  constexpr void __cordl_internal_set_previewMediaData(::GlobalNamespace::IPreviewMediaData* value);

  constexpr ::System::Collections::Generic::IReadOnlyDictionary_2<::System::ValueTuple_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::GlobalNamespace::BeatmapDifficulty>,
                                                                  ::GlobalNamespace::BeatmapBasicData*>*&
  __cordl_internal_get_beatmapBasicData();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IReadOnlyDictionary_2<
      ::System::ValueTuple_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::GlobalNamespace::BeatmapDifficulty>, ::GlobalNamespace::BeatmapBasicData*>*> const&
  __cordl_internal_get_beatmapBasicData() const;

  constexpr void __cordl_internal_set_beatmapBasicData(
      ::System::Collections::Generic::IReadOnlyDictionary_2<::System::ValueTuple_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::GlobalNamespace::BeatmapDifficulty>,
                                                            ::GlobalNamespace::BeatmapBasicData*>* value);

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::Array<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*>& __cordl_internal_get__characteristicsCache();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::Array<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*> const& __cordl_internal_get__characteristicsCache() const;

  constexpr void __cordl_internal_set__characteristicsCache(::ArrayW<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::Array<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*> value);

  constexpr ::ArrayW<::GlobalNamespace::BeatmapKey, ::Array<::GlobalNamespace::BeatmapKey>*>& __cordl_internal_get__beatmapKeysCache();

  constexpr ::ArrayW<::GlobalNamespace::BeatmapKey, ::Array<::GlobalNamespace::BeatmapKey>*> const& __cordl_internal_get__beatmapKeysCache() const;

  constexpr void __cordl_internal_set__beatmapKeysCache(::ArrayW<::GlobalNamespace::BeatmapKey, ::Array<::GlobalNamespace::BeatmapKey>*> value);

  static inline ::GlobalNamespace::BeatmapLevel*
  New_ctor(bool hasPrecalculatedData, ::StringW levelID, ::StringW songName, ::StringW songSubName, ::StringW songAuthorName, ::ArrayW<::StringW, ::Array<::StringW>*> allMappers,
           ::ArrayW<::StringW, ::Array<::StringW>*> allLighters, float_t beatsPerMinute, float_t integratedLufs, float_t songTimeOffset, float_t previewStartTime, float_t previewDuration,
           float_t songDuration, ::GlobalNamespace::PlayerSensitivityFlag contentRating, ::GlobalNamespace::IPreviewMediaData* previewMediaData,
           ::System::Collections::Generic::IReadOnlyDictionary_2<::System::ValueTuple_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::GlobalNamespace::BeatmapDifficulty>,
                                                                 ::GlobalNamespace::BeatmapBasicData*>* beatmapBasicData);

  /// @brief Method .ctor, addr 0x12821cc, size 0xb8, virtual false, abstract: false, final false
  inline void _ctor(bool hasPrecalculatedData, ::StringW levelID, ::StringW songName, ::StringW songSubName, ::StringW songAuthorName, ::ArrayW<::StringW, ::Array<::StringW>*> allMappers,
                    ::ArrayW<::StringW, ::Array<::StringW>*> allLighters, float_t beatsPerMinute, float_t integratedLufs, float_t songTimeOffset, float_t previewStartTime, float_t previewDuration,
                    float_t songDuration, ::GlobalNamespace::PlayerSensitivityFlag contentRating, ::GlobalNamespace::IPreviewMediaData* previewMediaData,
                    ::System::Collections::Generic::IReadOnlyDictionary_2<::System::ValueTuple_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::GlobalNamespace::BeatmapDifficulty>,
                                                                          ::GlobalNamespace::BeatmapBasicData*>* beatmapBasicData);

  /// @brief Method GetDifficulties, addr 0x1282284, size 0x224, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapDifficulty>* GetDifficulties(::GlobalNamespace::BeatmapCharacteristicSO* characteristic);

  /// @brief Method GetCharacteristics, addr 0x12824b0, size 0x1c8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>* GetCharacteristics();

  /// @brief Method GetBeatmapKeys, addr 0x1282678, size 0x14c, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapKey>* GetBeatmapKeys();

  /// @brief Method GetDifficultyBeatmapData, addr 0x12827c4, size 0x108, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapBasicData* GetDifficultyBeatmapData(::GlobalNamespace::BeatmapCharacteristicSO* characteristic, ::GlobalNamespace::BeatmapDifficulty difficulty);

  /// @brief Method GetEnvironmentName, addr 0x12828cc, size 0x1c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::EnvironmentName GetEnvironmentName(::GlobalNamespace::BeatmapCharacteristicSO* characteristic, ::GlobalNamespace::BeatmapDifficulty difficulty);

  /// @brief Method GetColorScheme, addr 0x12828e8, size 0x1c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ColorScheme* GetColorScheme(::GlobalNamespace::BeatmapCharacteristicSO* characteristic, ::GlobalNamespace::BeatmapDifficulty difficulty);

  /// @brief Method <GetBeatmapKeys>b__21_0, addr 0x1282904, size 0x14, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapKey _GetBeatmapKeys_b__21_0(::System::ValueTuple_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::GlobalNamespace::BeatmapDifficulty> entry);

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapLevel(BeatmapLevel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapLevel(BeatmapLevel const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapLevel();

public:
  /// @brief Field hasPrecalculatedData, offset: 0x10, size: 0x1, def value: None
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

  /// @brief Field beatmapBasicData, offset: 0x70, size: 0x8, def value: None
  ::System::Collections::Generic::IReadOnlyDictionary_2<::System::ValueTuple_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::GlobalNamespace::BeatmapDifficulty>,
                                                        ::GlobalNamespace::BeatmapBasicData*>* ___beatmapBasicData;

  /// @brief Field _characteristicsCache, offset: 0x78, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::Array<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*> ____characteristicsCache;

  /// @brief Field _beatmapKeysCache, offset: 0x80, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::BeatmapKey, ::Array<::GlobalNamespace::BeatmapKey>*> ____beatmapKeysCache;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapLevel, 0x88>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevel, ___hasPrecalculatedData) == 0x10, "Offset mismatch!");

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

static_assert(offsetof(::GlobalNamespace::BeatmapLevel, ___beatmapBasicData) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevel, ____characteristicsCache) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevel, ____beatmapKeysCache) == 0x80, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapLevel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapLevel*, "", "BeatmapLevel");
NEED_NO_BOX(::GlobalNamespace::__BeatmapLevel____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapLevel____c*, "", "BeatmapLevel/<>c");
NEED_NO_BOX(::GlobalNamespace::__BeatmapLevel____c__DisplayClass19_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapLevel____c__DisplayClass19_0*, "", "BeatmapLevel/<>c__DisplayClass19_0");

#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapDifficultyMask_def.hpp"
#include "GlobalNamespace/zzzz__SongPackMask_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(LevelFilterParams)
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace GlobalNamespace {
struct SongPackMask;
}
namespace GlobalNamespace {
struct BeatmapDifficultyMask;
}
// Forward declare root types
namespace GlobalNamespace {
class LevelFilterParams;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LevelFilterParams);
// Type: ::LevelFilterParams
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15192)), TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(14936))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4422))
// CS Name: ::LevelFilterParams*
class CORDL_TYPE LevelFilterParams : public ::System::Object {
public:
  // Declarations
  /// @brief Field <filterByLevelIds>k__BackingField, offset 0x10, size 0x1
  __declspec(property(get = __get__filterByLevelIds_k__BackingField, put = __set__filterByLevelIds_k__BackingField)) bool _filterByLevelIds_k__BackingField;

  /// @brief Field <beatmapLevelIds>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __get__beatmapLevelIds_k__BackingField,
                      put = __set__beatmapLevelIds_k__BackingField))::System::Collections::Generic::HashSet_1<::StringW>* _beatmapLevelIds_k__BackingField;

  /// @brief Field <filterByOwned>k__BackingField, offset 0x20, size 0x1
  __declspec(property(get = __get__filterByOwned_k__BackingField, put = __set__filterByOwned_k__BackingField)) bool _filterByOwned_k__BackingField;

  /// @brief Field <filterByNotOwned>k__BackingField, offset 0x21, size 0x1
  __declspec(property(get = __get__filterByNotOwned_k__BackingField, put = __set__filterByNotOwned_k__BackingField)) bool _filterByNotOwned_k__BackingField;

  /// @brief Field <searchText>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __get__searchText_k__BackingField, put = __set__searchText_k__BackingField))::StringW _searchText_k__BackingField;

  /// @brief Field <filterByDifficulty>k__BackingField, offset 0x30, size 0x1
  __declspec(property(get = __get__filterByDifficulty_k__BackingField, put = __set__filterByDifficulty_k__BackingField)) bool _filterByDifficulty_k__BackingField;

  /// @brief Field <filteredDifficulty>k__BackingField, offset 0x31, size 0x1
  __declspec(property(get = __get__filteredDifficulty_k__BackingField, put = __set__filteredDifficulty_k__BackingField))::GlobalNamespace::BeatmapDifficultyMask _filteredDifficulty_k__BackingField;

  /// @brief Field <filterBySongPacks>k__BackingField, offset 0x32, size 0x1
  __declspec(property(get = __get__filterBySongPacks_k__BackingField, put = __set__filterBySongPacks_k__BackingField)) bool _filterBySongPacks_k__BackingField;

  /// @brief Field <filteredSongPacks>k__BackingField, offset 0x38, size 0x10
  __declspec(property(get = __get__filteredSongPacks_k__BackingField, put = __set__filteredSongPacks_k__BackingField))::GlobalNamespace::SongPackMask _filteredSongPacks_k__BackingField;

  /// @brief Field <filterByCharacteristic>k__BackingField, offset 0x48, size 0x1
  __declspec(property(get = __get__filterByCharacteristic_k__BackingField, put = __set__filterByCharacteristic_k__BackingField)) bool _filterByCharacteristic_k__BackingField;

  /// @brief Field <filteredCharacteristic>k__BackingField, offset 0x50, size 0x8
  __declspec(property(get = __get__filteredCharacteristic_k__BackingField,
                      put = __set__filteredCharacteristic_k__BackingField))::GlobalNamespace::BeatmapCharacteristicSO* _filteredCharacteristic_k__BackingField;

  /// @brief Field <filterByNotPlayedYet>k__BackingField, offset 0x58, size 0x1
  __declspec(property(get = __get__filterByNotPlayedYet_k__BackingField, put = __set__filterByNotPlayedYet_k__BackingField)) bool _filterByNotPlayedYet_k__BackingField;

  /// @brief Field <filterByMinBpm>k__BackingField, offset 0x59, size 0x1
  __declspec(property(get = __get__filterByMinBpm_k__BackingField, put = __set__filterByMinBpm_k__BackingField)) bool _filterByMinBpm_k__BackingField;

  /// @brief Field <filteredMinBpm>k__BackingField, offset 0x5c, size 0x4
  __declspec(property(get = __get__filteredMinBpm_k__BackingField, put = __set__filteredMinBpm_k__BackingField)) float_t _filteredMinBpm_k__BackingField;

  /// @brief Field <filterByMaxBpm>k__BackingField, offset 0x60, size 0x1
  __declspec(property(get = __get__filterByMaxBpm_k__BackingField, put = __set__filterByMaxBpm_k__BackingField)) bool _filterByMaxBpm_k__BackingField;

  /// @brief Field <filteredMaxBpm>k__BackingField, offset 0x64, size 0x4
  __declspec(property(get = __get__filteredMaxBpm_k__BackingField, put = __set__filteredMaxBpm_k__BackingField)) float_t _filteredMaxBpm_k__BackingField;

  /// @brief Field bpmValues, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_bpmValues, put = setStaticF_bpmValues))::ArrayW<float_t, ::Array<float_t>*> bpmValues;

  __declspec(property(get = get_filterByLevelIds, put = set_filterByLevelIds)) bool filterByLevelIds;

  __declspec(property(get = get_beatmapLevelIds, put = set_beatmapLevelIds))::System::Collections::Generic::HashSet_1<::StringW>* beatmapLevelIds;

  __declspec(property(get = get_filterByOwned, put = set_filterByOwned)) bool filterByOwned;

  __declspec(property(get = get_filterByNotOwned, put = set_filterByNotOwned)) bool filterByNotOwned;

  __declspec(property(get = get_searchText, put = set_searchText))::StringW searchText;

  __declspec(property(get = get_filterByDifficulty, put = set_filterByDifficulty)) bool filterByDifficulty;

  __declspec(property(get = get_filteredDifficulty, put = set_filteredDifficulty))::GlobalNamespace::BeatmapDifficultyMask filteredDifficulty;

  __declspec(property(get = get_filterBySongPacks, put = set_filterBySongPacks)) bool filterBySongPacks;

  __declspec(property(get = get_filteredSongPacks, put = set_filteredSongPacks))::GlobalNamespace::SongPackMask filteredSongPacks;

  __declspec(property(get = get_filterByCharacteristic, put = set_filterByCharacteristic)) bool filterByCharacteristic;

  __declspec(property(get = get_filteredCharacteristic, put = set_filteredCharacteristic))::GlobalNamespace::BeatmapCharacteristicSO* filteredCharacteristic;

  __declspec(property(get = get_filterByNotPlayedYet, put = set_filterByNotPlayedYet)) bool filterByNotPlayedYet;

  __declspec(property(get = get_filterByMinBpm, put = set_filterByMinBpm)) bool filterByMinBpm;

  __declspec(property(get = get_filteredMinBpm, put = set_filteredMinBpm)) float_t filteredMinBpm;

  __declspec(property(get = get_filterByMaxBpm, put = set_filterByMaxBpm)) bool filterByMaxBpm;

  __declspec(property(get = get_filteredMaxBpm, put = set_filteredMaxBpm)) float_t filteredMaxBpm;

  constexpr bool& __get__filterByLevelIds_k__BackingField();

  constexpr bool const& __get__filterByLevelIds_k__BackingField() const;

  constexpr void __set__filterByLevelIds_k__BackingField(bool value);

  constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& __get__beatmapLevelIds_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::StringW>*> const& __get__beatmapLevelIds_k__BackingField() const;

  constexpr void __set__beatmapLevelIds_k__BackingField(::System::Collections::Generic::HashSet_1<::StringW>* value);

  constexpr bool& __get__filterByOwned_k__BackingField();

  constexpr bool const& __get__filterByOwned_k__BackingField() const;

  constexpr void __set__filterByOwned_k__BackingField(bool value);

  constexpr bool& __get__filterByNotOwned_k__BackingField();

  constexpr bool const& __get__filterByNotOwned_k__BackingField() const;

  constexpr void __set__filterByNotOwned_k__BackingField(bool value);

  constexpr ::StringW& __get__searchText_k__BackingField();

  constexpr ::StringW const& __get__searchText_k__BackingField() const;

  constexpr void __set__searchText_k__BackingField(::StringW value);

  constexpr bool& __get__filterByDifficulty_k__BackingField();

  constexpr bool const& __get__filterByDifficulty_k__BackingField() const;

  constexpr void __set__filterByDifficulty_k__BackingField(bool value);

  constexpr ::GlobalNamespace::BeatmapDifficultyMask& __get__filteredDifficulty_k__BackingField();

  constexpr ::GlobalNamespace::BeatmapDifficultyMask const& __get__filteredDifficulty_k__BackingField() const;

  constexpr void __set__filteredDifficulty_k__BackingField(::GlobalNamespace::BeatmapDifficultyMask value);

  constexpr bool& __get__filterBySongPacks_k__BackingField();

  constexpr bool const& __get__filterBySongPacks_k__BackingField() const;

  constexpr void __set__filterBySongPacks_k__BackingField(bool value);

  constexpr ::GlobalNamespace::SongPackMask& __get__filteredSongPacks_k__BackingField();

  constexpr ::GlobalNamespace::SongPackMask const& __get__filteredSongPacks_k__BackingField() const;

  constexpr void __set__filteredSongPacks_k__BackingField(::GlobalNamespace::SongPackMask value);

  constexpr bool& __get__filterByCharacteristic_k__BackingField();

  constexpr bool const& __get__filterByCharacteristic_k__BackingField() const;

  constexpr void __set__filterByCharacteristic_k__BackingField(bool value);

  constexpr ::GlobalNamespace::BeatmapCharacteristicSO*& __get__filteredCharacteristic_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCharacteristicSO*> const& __get__filteredCharacteristic_k__BackingField() const;

  constexpr void __set__filteredCharacteristic_k__BackingField(::GlobalNamespace::BeatmapCharacteristicSO* value);

  constexpr bool& __get__filterByNotPlayedYet_k__BackingField();

  constexpr bool const& __get__filterByNotPlayedYet_k__BackingField() const;

  constexpr void __set__filterByNotPlayedYet_k__BackingField(bool value);

  constexpr bool& __get__filterByMinBpm_k__BackingField();

  constexpr bool const& __get__filterByMinBpm_k__BackingField() const;

  constexpr void __set__filterByMinBpm_k__BackingField(bool value);

  constexpr float_t& __get__filteredMinBpm_k__BackingField();

  constexpr float_t const& __get__filteredMinBpm_k__BackingField() const;

  constexpr void __set__filteredMinBpm_k__BackingField(float_t value);

  constexpr bool& __get__filterByMaxBpm_k__BackingField();

  constexpr bool const& __get__filterByMaxBpm_k__BackingField() const;

  constexpr void __set__filterByMaxBpm_k__BackingField(bool value);

  constexpr float_t& __get__filteredMaxBpm_k__BackingField();

  constexpr float_t const& __get__filteredMaxBpm_k__BackingField() const;

  constexpr void __set__filteredMaxBpm_k__BackingField(float_t value);

  static inline void setStaticF_bpmValues(::ArrayW<float_t, ::Array<float_t>*> value);

  static inline ::ArrayW<float_t, ::Array<float_t>*> getStaticF_bpmValues();

  /// @brief Method get_filterByLevelIds addr 0x21feeb4 size 0x8 virtual false final false
  inline bool get_filterByLevelIds();

  /// @brief Method set_filterByLevelIds addr 0x21feebc size 0xc virtual false final false
  inline void set_filterByLevelIds(bool value);

  /// @brief Method get_beatmapLevelIds addr 0x21feec8 size 0x8 virtual false final false
  inline ::System::Collections::Generic::HashSet_1<::StringW>* get_beatmapLevelIds();

  /// @brief Method set_beatmapLevelIds addr 0x21feed0 size 0x8 virtual false final false
  inline void set_beatmapLevelIds(::System::Collections::Generic::HashSet_1<::StringW>* value);

  /// @brief Method get_filterByOwned addr 0x21feed8 size 0x8 virtual false final false
  inline bool get_filterByOwned();

  /// @brief Method set_filterByOwned addr 0x21feee0 size 0xc virtual false final false
  inline void set_filterByOwned(bool value);

  /// @brief Method get_filterByNotOwned addr 0x21feeec size 0x8 virtual false final false
  inline bool get_filterByNotOwned();

  /// @brief Method set_filterByNotOwned addr 0x21feef4 size 0xc virtual false final false
  inline void set_filterByNotOwned(bool value);

  /// @brief Method get_searchText addr 0x21fef00 size 0x8 virtual false final false
  inline ::StringW get_searchText();

  /// @brief Method set_searchText addr 0x21fef08 size 0x8 virtual false final false
  inline void set_searchText(::StringW value);

  /// @brief Method get_filterByDifficulty addr 0x21fef10 size 0x8 virtual false final false
  inline bool get_filterByDifficulty();

  /// @brief Method set_filterByDifficulty addr 0x21fef18 size 0xc virtual false final false
  inline void set_filterByDifficulty(bool value);

  /// @brief Method get_filteredDifficulty addr 0x21fef24 size 0x8 virtual false final false
  inline ::GlobalNamespace::BeatmapDifficultyMask get_filteredDifficulty();

  /// @brief Method set_filteredDifficulty addr 0x21fef2c size 0x8 virtual false final false
  inline void set_filteredDifficulty(::GlobalNamespace::BeatmapDifficultyMask value);

  /// @brief Method get_filterBySongPacks addr 0x21fef34 size 0x8 virtual false final false
  inline bool get_filterBySongPacks();

  /// @brief Method set_filterBySongPacks addr 0x21fef3c size 0xc virtual false final false
  inline void set_filterBySongPacks(bool value);

  /// @brief Method get_filteredSongPacks addr 0x21fef48 size 0xc virtual false final false
  inline ::GlobalNamespace::SongPackMask get_filteredSongPacks();

  /// @brief Method set_filteredSongPacks addr 0x21fef54 size 0x8 virtual false final false
  inline void set_filteredSongPacks(::GlobalNamespace::SongPackMask value);

  /// @brief Method get_filterByCharacteristic addr 0x21fef5c size 0x8 virtual false final false
  inline bool get_filterByCharacteristic();

  /// @brief Method set_filterByCharacteristic addr 0x21fef64 size 0xc virtual false final false
  inline void set_filterByCharacteristic(bool value);

  /// @brief Method get_filteredCharacteristic addr 0x21fef70 size 0x8 virtual false final false
  inline ::GlobalNamespace::BeatmapCharacteristicSO* get_filteredCharacteristic();

  /// @brief Method set_filteredCharacteristic addr 0x21fef78 size 0x8 virtual false final false
  inline void set_filteredCharacteristic(::GlobalNamespace::BeatmapCharacteristicSO* value);

  /// @brief Method get_filterByNotPlayedYet addr 0x21fef80 size 0x8 virtual false final false
  inline bool get_filterByNotPlayedYet();

  /// @brief Method set_filterByNotPlayedYet addr 0x21fef88 size 0xc virtual false final false
  inline void set_filterByNotPlayedYet(bool value);

  /// @brief Method get_filterByMinBpm addr 0x21fef94 size 0x8 virtual false final false
  inline bool get_filterByMinBpm();

  /// @brief Method set_filterByMinBpm addr 0x21fef9c size 0xc virtual false final false
  inline void set_filterByMinBpm(bool value);

  /// @brief Method get_filteredMinBpm addr 0x21fefa8 size 0x8 virtual false final false
  inline float_t get_filteredMinBpm();

  /// @brief Method set_filteredMinBpm addr 0x21fefb0 size 0x8 virtual false final false
  inline void set_filteredMinBpm(float_t value);

  /// @brief Method get_filterByMaxBpm addr 0x21fefb8 size 0x8 virtual false final false
  inline bool get_filterByMaxBpm();

  /// @brief Method set_filterByMaxBpm addr 0x21fefc0 size 0xc virtual false final false
  inline void set_filterByMaxBpm(bool value);

  /// @brief Method get_filteredMaxBpm addr 0x21fefcc size 0x8 virtual false final false
  inline float_t get_filteredMaxBpm();

  /// @brief Method set_filteredMaxBpm addr 0x21fefd4 size 0x8 virtual false final false
  inline void set_filteredMaxBpm(float_t value);

  static inline ::GlobalNamespace::LevelFilterParams* New_ctor();

  /// @brief Method .ctor addr 0x21fefdc size 0xd0 virtual false final false
  inline void _ctor();

  static inline ::GlobalNamespace::LevelFilterParams* New_ctor(bool filterByLevelIds, ::System::Collections::Generic::HashSet_1<::StringW>* beatmapLevelIds, ::StringW searchText, bool filterByOwned,
                                                               bool filterByNotOwned, bool filterByDifficulty, ::GlobalNamespace::BeatmapDifficultyMask filteredDifficulty, bool filterByCharacteristic,
                                                               ::GlobalNamespace::BeatmapCharacteristicSO* filteredCharacteristic, bool filterBySongPacks,
                                                               ::GlobalNamespace::SongPackMask filteredSongPacks, bool filterByNotPlayedYet, bool filterByMinBpm, float_t filteredMinBpm,
                                                               bool filterByMaxBpm, float_t filteredMaxBpm);

  /// @brief Method .ctor addr 0x21ff0ac size 0x104 virtual false final false
  inline void _ctor(bool filterByLevelIds, ::System::Collections::Generic::HashSet_1<::StringW>* beatmapLevelIds, ::StringW searchText, bool filterByOwned, bool filterByNotOwned,
                    bool filterByDifficulty, ::GlobalNamespace::BeatmapDifficultyMask filteredDifficulty, bool filterByCharacteristic,
                    ::GlobalNamespace::BeatmapCharacteristicSO* filteredCharacteristic, bool filterBySongPacks, ::GlobalNamespace::SongPackMask filteredSongPacks, bool filterByNotPlayedYet,
                    bool filterByMinBpm, float_t filteredMinBpm, bool filterByMaxBpm, float_t filteredMaxBpm);

  /// @brief Method IsWithoutFilter addr 0x21ff1b0 size 0x5c virtual false final false
  inline bool IsWithoutFilter(bool ignoreFilterBySongs);

  static inline ::GlobalNamespace::LevelFilterParams* New_ctor(::System::Collections::Generic::HashSet_1<::StringW>* beatmapLevelIds);

  /// @brief Method .ctor addr 0x21ff20c size 0x2c virtual false final false
  inline void _ctor(::System::Collections::Generic::HashSet_1<::StringW>* beatmapLevelIds);

  static inline ::GlobalNamespace::LevelFilterParams* New_ctor(::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic);

  /// @brief Method .ctor addr 0x21ff238 size 0x2c virtual false final false
  inline void _ctor(::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic);

  /// @brief Method NoFilter addr 0x21ff264 size 0x58 virtual false final false
  static inline ::GlobalNamespace::LevelFilterParams* NoFilter();

  /// @brief Method ByBeatmapLevelIds addr 0x21ff2bc size 0x68 virtual false final false
  static inline ::GlobalNamespace::LevelFilterParams* ByBeatmapLevelIds(::System::Collections::Generic::HashSet_1<::StringW>* beatmapLevelIds);

  /// @brief Method ByBeatmapCharacteristic addr 0x21ff324 size 0x68 virtual false final false
  static inline ::GlobalNamespace::LevelFilterParams* ByBeatmapCharacteristic(::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic);

  // Ctor Parameters [CppParam { name: "", ty: "LevelFilterParams", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LevelFilterParams(LevelFilterParams&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LevelFilterParams", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LevelFilterParams(LevelFilterParams const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LevelFilterParams();

public:
  /// @brief Field <filterByLevelIds>k__BackingField, offset: 0x10, size: 0x1, def value: None
  bool ____filterByLevelIds_k__BackingField;

  /// @brief Field <beatmapLevelIds>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::StringW>* ____beatmapLevelIds_k__BackingField;

  /// @brief Field <filterByOwned>k__BackingField, offset: 0x20, size: 0x1, def value: None
  bool ____filterByOwned_k__BackingField;

  /// @brief Field <filterByNotOwned>k__BackingField, offset: 0x21, size: 0x1, def value: None
  bool ____filterByNotOwned_k__BackingField;

  /// @brief Field <searchText>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::StringW ____searchText_k__BackingField;

  /// @brief Field <filterByDifficulty>k__BackingField, offset: 0x30, size: 0x1, def value: None
  bool ____filterByDifficulty_k__BackingField;

  /// @brief Field <filteredDifficulty>k__BackingField, offset: 0x31, size: 0x1, def value: None
  ::GlobalNamespace::BeatmapDifficultyMask ____filteredDifficulty_k__BackingField;

  /// @brief Field <filterBySongPacks>k__BackingField, offset: 0x32, size: 0x1, def value: None
  bool ____filterBySongPacks_k__BackingField;

  /// @brief Field <filteredSongPacks>k__BackingField, offset: 0x38, size: 0x10, def value: None
  ::GlobalNamespace::SongPackMask ____filteredSongPacks_k__BackingField;

  /// @brief Field <filterByCharacteristic>k__BackingField, offset: 0x48, size: 0x1, def value: None
  bool ____filterByCharacteristic_k__BackingField;

  /// @brief Field <filteredCharacteristic>k__BackingField, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCharacteristicSO* ____filteredCharacteristic_k__BackingField;

  /// @brief Field <filterByNotPlayedYet>k__BackingField, offset: 0x58, size: 0x1, def value: None
  bool ____filterByNotPlayedYet_k__BackingField;

  /// @brief Field <filterByMinBpm>k__BackingField, offset: 0x59, size: 0x1, def value: None
  bool ____filterByMinBpm_k__BackingField;

  /// @brief Field <filteredMinBpm>k__BackingField, offset: 0x5c, size: 0x4, def value: None
  float_t ____filteredMinBpm_k__BackingField;

  /// @brief Field <filterByMaxBpm>k__BackingField, offset: 0x60, size: 0x1, def value: None
  bool ____filterByMaxBpm_k__BackingField;

  /// @brief Field <filteredMaxBpm>k__BackingField, offset: 0x64, size: 0x4, def value: None
  float_t ____filteredMaxBpm_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LevelFilterParams, 0x68>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelFilterParams, ____filterByLevelIds_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelFilterParams, ____beatmapLevelIds_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelFilterParams, ____filterByOwned_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelFilterParams, ____filterByNotOwned_k__BackingField) == 0x21, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelFilterParams, ____searchText_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelFilterParams, ____filterByDifficulty_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelFilterParams, ____filteredDifficulty_k__BackingField) == 0x31, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelFilterParams, ____filterBySongPacks_k__BackingField) == 0x32, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelFilterParams, ____filteredSongPacks_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelFilterParams, ____filterByCharacteristic_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelFilterParams, ____filteredCharacteristic_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelFilterParams, ____filterByNotPlayedYet_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelFilterParams, ____filterByMinBpm_k__BackingField) == 0x59, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelFilterParams, ____filteredMinBpm_k__BackingField) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelFilterParams, ____filterByMaxBpm_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelFilterParams, ____filteredMaxBpm_k__BackingField) == 0x64, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LevelFilterParams);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LevelFilterParams*, "", "LevelFilterParams");

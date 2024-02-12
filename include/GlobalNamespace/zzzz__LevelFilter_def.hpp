#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapDifficultyMask_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__EntitlementStatus_def.hpp"
#include "GlobalNamespace/zzzz__LevelFilter_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSensitivityFlag_def.hpp"
#include "GlobalNamespace/zzzz__SongPackMask_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LevelFilter)
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace GlobalNamespace {
struct BeatmapDifficultyMask;
}
namespace GlobalNamespace {
struct BeatmapDifficulty;
}
namespace GlobalNamespace {
class BeatmapLevelPack;
}
namespace GlobalNamespace {
class BeatmapLevel;
}
namespace GlobalNamespace {
struct EntitlementStatus;
}
namespace GlobalNamespace {
class IBeatmapLevelsModel;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace GlobalNamespace {
struct PlayerSensitivityFlag;
}
namespace GlobalNamespace {
struct SongPackMask;
}
namespace GlobalNamespace {
struct __LevelFilter___FilterLevelsAsync_d__13;
}
namespace GlobalNamespace {
class __LevelFilter____c;
}
namespace GlobalNamespace {
class __LevelFilter____c__DisplayClass13_0;
}
namespace GlobalNamespace {
class __LevelFilter____c__DisplayClass13_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
template <typename T> class Comparison_1;
}
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
// Forward declare root types
namespace GlobalNamespace {
class __LevelFilter____c;
}
namespace GlobalNamespace {
class __LevelFilter____c__DisplayClass13_0;
}
namespace GlobalNamespace {
class __LevelFilter____c__DisplayClass13_1;
}
namespace GlobalNamespace {
struct LevelFilter;
}
namespace GlobalNamespace {
struct __LevelFilter___FilterLevelsAsync_d__13;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::__LevelFilter____c);
MARK_REF_PTR_T(::GlobalNamespace::__LevelFilter____c__DisplayClass13_0);
MARK_REF_PTR_T(::GlobalNamespace::__LevelFilter____c__DisplayClass13_1);
MARK_VAL_T(::GlobalNamespace::LevelFilter);
MARK_VAL_T(::GlobalNamespace::__LevelFilter___FilterLevelsAsync_d__13);
// Type: ::<>c__DisplayClass13_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10809))
// CS Name: ::LevelFilter::<>c__DisplayClass13_0*
class CORDL_TYPE __LevelFilter____c__DisplayClass13_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field characteristicFilter, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_characteristicFilter, put = __cordl_internal_set_characteristicFilter))::StringW characteristicFilter;

  constexpr ::StringW& __cordl_internal_get_characteristicFilter();

  constexpr ::StringW const& __cordl_internal_get_characteristicFilter() const;

  constexpr void __cordl_internal_set_characteristicFilter(::StringW value);

  static inline ::GlobalNamespace::__LevelFilter____c__DisplayClass13_0* New_ctor();

  /// @brief Method .ctor, addr 0x128a43c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <FilterLevelsAsync>b__3, addr 0x128a5ac, size 0x24, virtual false, abstract: false, final false
  inline bool _FilterLevelsAsync_b__3(::GlobalNamespace::BeatmapCharacteristicSO* characteristic);

  // Ctor Parameters [CppParam { name: "", ty: "__LevelFilter____c__DisplayClass13_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LevelFilter____c__DisplayClass13_0(__LevelFilter____c__DisplayClass13_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LevelFilter____c__DisplayClass13_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LevelFilter____c__DisplayClass13_0(__LevelFilter____c__DisplayClass13_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LevelFilter____c__DisplayClass13_0();

public:
  /// @brief Field characteristicFilter, offset: 0x10, size: 0x8, def value: None
  ::StringW ___characteristicFilter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LevelFilter____c__DisplayClass13_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelFilter____c__DisplayClass13_0, ___characteristicFilter) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass13_1
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(15103))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10810))
// CS Name: ::LevelFilter::<>c__DisplayClass13_1*
class CORDL_TYPE __LevelFilter____c__DisplayClass13_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field difficultyFilter, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_difficultyFilter, put = __cordl_internal_set_difficultyFilter))::GlobalNamespace::BeatmapDifficultyMask difficultyFilter;

  /// @brief Field characteristicFilter, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_characteristicFilter, put = __cordl_internal_set_characteristicFilter))::StringW characteristicFilter;

  constexpr ::GlobalNamespace::BeatmapDifficultyMask& __cordl_internal_get_difficultyFilter();

  constexpr ::GlobalNamespace::BeatmapDifficultyMask const& __cordl_internal_get_difficultyFilter() const;

  constexpr void __cordl_internal_set_difficultyFilter(::GlobalNamespace::BeatmapDifficultyMask value);

  constexpr ::StringW& __cordl_internal_get_characteristicFilter();

  constexpr ::StringW const& __cordl_internal_get_characteristicFilter() const;

  constexpr void __cordl_internal_set_characteristicFilter(::StringW value);

  static inline ::GlobalNamespace::__LevelFilter____c__DisplayClass13_1* New_ctor();

  /// @brief Method .ctor, addr 0x128a5a4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <FilterLevelsAsync>b__4, addr 0x128a5d0, size 0x54, virtual false, abstract: false, final false
  inline bool _FilterLevelsAsync_b__4(::System::ValueTuple_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::GlobalNamespace::BeatmapDifficulty> entry);

  // Ctor Parameters [CppParam { name: "", ty: "__LevelFilter____c__DisplayClass13_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LevelFilter____c__DisplayClass13_1(__LevelFilter____c__DisplayClass13_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LevelFilter____c__DisplayClass13_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LevelFilter____c__DisplayClass13_1(__LevelFilter____c__DisplayClass13_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LevelFilter____c__DisplayClass13_1();

public:
  /// @brief Field difficultyFilter, offset: 0x10, size: 0x1, def value: None
  ::GlobalNamespace::BeatmapDifficultyMask ___difficultyFilter;

  /// @brief Field characteristicFilter, offset: 0x18, size: 0x8, def value: None
  ::StringW ___characteristicFilter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LevelFilter____c__DisplayClass13_1, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelFilter____c__DisplayClass13_1, ___difficultyFilter) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelFilter____c__DisplayClass13_1, ___characteristicFilter) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::LevelFilter
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(11052)), TypeDefinitionIndex(TypeDefinitionIndex(14920)), TypeDefinitionIndex(TypeDefinitionIndex(15103))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10813))
// CS Name: ::LevelFilter
struct CORDL_TYPE LevelFilter {
public:
  // Declarations
  using __c = ::GlobalNamespace::__LevelFilter____c;

  using _FilterLevelsAsync_d__13 = ::GlobalNamespace::__LevelFilter___FilterLevelsAsync_d__13;

  using __c__DisplayClass13_1 = ::GlobalNamespace::__LevelFilter____c__DisplayClass13_1;

  using __c__DisplayClass13_0 = ::GlobalNamespace::__LevelFilter____c__DisplayClass13_0;

  /// @brief Field bpmOptions, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_bpmOptions, put = setStaticF_bpmOptions))::ArrayW<float_t, ::Array<float_t>*> bpmOptions;

  static inline void setStaticF_bpmOptions(::ArrayW<float_t, ::Array<float_t>*> value);

  static inline ::ArrayW<float_t, ::Array<float_t>*> getStaticF_bpmOptions();

  /// @brief Method IsWithoutFilter, addr 0x1289590, size 0xb0, virtual false, abstract: false, final false
  static inline bool IsWithoutFilter(ByRef<::GlobalNamespace::LevelFilter> filter, bool ignoreFilterBySongs);

  /// @brief Method FilterLevelsAsync, addr 0x1289640, size 0x134, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task_1<::ArrayW<::GlobalNamespace::BeatmapLevel*, ::Array<::GlobalNamespace::BeatmapLevel*>*>>*
  FilterLevelsAsync(::ArrayW<::GlobalNamespace::BeatmapLevelPack*, ::Array<::GlobalNamespace::BeatmapLevelPack*>*> packs, ::GlobalNamespace::LevelFilter filter,
                    ::GlobalNamespace::PlayerDataModel* playerDataModel, ::GlobalNamespace::IBeatmapLevelsModel* levelsModel, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method FilterLevelByText, addr 0x1289774, size 0x62c, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevel*>* FilterLevelByText(::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevel*>* levels,
                                                                                                            ::ArrayW<::StringW, ::Array<::StringW>*> searchTerms);

  /// @brief Method CleanText, addr 0x1289da0, size 0x88, virtual false, abstract: false, final false
  static inline ::StringW CleanText(::StringW s);

  /// @brief Method <FilterLevelsAsync>g__HasPlayedAnyDifficulty|13_0, addr 0x1289fe8, size 0x36c, virtual false, abstract: false, final false
  static inline bool _FilterLevelsAsync_g__HasPlayedAnyDifficulty_13_0(::GlobalNamespace::BeatmapLevel* level, ::GlobalNamespace::PlayerDataModel* playerDataModel);

  /// @brief Method <FilterLevelsAsync>g__MatchesCharacteristic|13_1, addr 0x128a354, size 0xe8, virtual false, abstract: false, final false
  static inline bool _FilterLevelsAsync_g__MatchesCharacteristic_13_1(::GlobalNamespace::BeatmapLevel* beatmapLevel, ::StringW characteristicFilter);

  /// @brief Method <FilterLevelsAsync>g__MatchesDifficulty|13_2, addr 0x128a444, size 0x160, virtual false, abstract: false, final false
  static inline bool _FilterLevelsAsync_g__MatchesDifficulty_13_2(::GlobalNamespace::BeatmapLevel* beatmapLevel, ::GlobalNamespace::BeatmapDifficultyMask difficultyFilter,
                                                                  ::StringW characteristicFilter);

  /// @brief Method <FilterLevelByText>g__CalculateMatchScore|14_1, addr 0x1289e28, size 0x12c, virtual false, abstract: false, final false
  static inline int32_t _FilterLevelByText_g__CalculateMatchScore_14_1(::StringW levelString, ::ArrayW<::StringW, ::Array<::StringW>*> searchTerms);

  // Ctor Parameters [CppParam { name: "songOwned", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "songNotOwned", ty: "bool", modifiers: "", def_value: None }, CppParam { name:
  // "songUnplayed", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "difficulties", ty: "::GlobalNamespace::BeatmapDifficultyMask", modifiers: "", def_value: None }, CppParam { name:
  // "songPacks", ty: "::GlobalNamespace::SongPackMask", modifiers: "", def_value: None }, CppParam { name: "characteristicSerializedName", ty: "::StringW", modifiers: "", def_value: None }, CppParam
  // { name: "minBpm", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "maxBpm", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "sensitivity", ty:
  // "::GlobalNamespace::PlayerSensitivityFlag", modifiers: "", def_value: None }, CppParam { name: "searchText", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "limitIds", ty:
  // "::ArrayW<::StringW,::Array<::StringW>*>", modifiers: "", def_value: None }]
  constexpr LevelFilter(bool songOwned, bool songNotOwned, bool songUnplayed, ::GlobalNamespace::BeatmapDifficultyMask difficulties, ::GlobalNamespace::SongPackMask songPacks,
                        ::StringW characteristicSerializedName, float_t minBpm, float_t maxBpm, ::GlobalNamespace::PlayerSensitivityFlag sensitivity, ::StringW searchText,
                        ::ArrayW<::StringW, ::Array<::StringW>*> limitIds) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr LevelFilter();

  /// @brief Field songOwned, offset: 0x0, size: 0x1, def value: None
  bool songOwned;

  /// @brief Field songNotOwned, offset: 0x1, size: 0x1, def value: None
  bool songNotOwned;

  /// @brief Field songUnplayed, offset: 0x2, size: 0x1, def value: None
  bool songUnplayed;

  /// @brief Field difficulties, offset: 0x3, size: 0x1, def value: None
  ::GlobalNamespace::BeatmapDifficultyMask difficulties;

  /// @brief Field songPacks, offset: 0x8, size: 0x20, def value: None
  ::GlobalNamespace::SongPackMask songPacks;

  /// @brief Field characteristicSerializedName, offset: 0x28, size: 0x8, def value: None
  ::StringW characteristicSerializedName;

  /// @brief Field minBpm, offset: 0x30, size: 0x4, def value: None
  float_t minBpm;

  /// @brief Field maxBpm, offset: 0x34, size: 0x4, def value: None
  float_t maxBpm;

  /// @brief Field sensitivity, offset: 0x38, size: 0x4, def value: None
  ::GlobalNamespace::PlayerSensitivityFlag sensitivity;

  /// @brief Field searchText, offset: 0x40, size: 0x8, def value: None
  ::StringW searchText;

  /// @brief Field limitIds, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> limitIds;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LevelFilter, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelFilter, songOwned) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelFilter, songNotOwned) == 0x1, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelFilter, songUnplayed) == 0x2, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelFilter, difficulties) == 0x3, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelFilter, songPacks) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelFilter, characteristicSerializedName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelFilter, minBpm) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelFilter, maxBpm) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelFilter, sensitivity) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelFilter, searchText) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelFilter, limitIds) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<FilterLevelsAsync>d__13
// SizeInfo { instance_size: 200, native_size: -1, calculated_instance_size: 200, calculated_native_size: 216, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2677)), TypeDefinitionIndex(TypeDefinitionIndex(3390)), TypeDefinitionIndex(TypeDefinitionIndex(3398)),
// TypeDefinitionIndex(TypeDefinitionIndex(10776)), TypeDefinitionIndex(TypeDefinitionIndex(10813)), TypeDefinitionIndex(TypeDefinitionIndex(16445)), GenericInstantiation(GenericInstantiation { tdi:
// TypeDefinitionIndex(3390), inst: 884 }), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3398), inst: 876 })] Self: TypeDefinitionIndex(TypeDefinitionIndex(10811)) CS Name:
// ::LevelFilter::<FilterLevelsAsync>d__13
struct CORDL_TYPE __LevelFilter___FilterLevelsAsync_d__13 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  /// @brief Method MoveNext, addr 0x128a624, size 0x700, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x128ad24, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::ArrayW<::GlobalNamespace::BeatmapLevel*,::Array<::GlobalNamespace::BeatmapLevel*>*>>", modifiers: "", def_value: None }, CppParam
  // { name: "packs", ty: "::ArrayW<::GlobalNamespace::BeatmapLevelPack*,::Array<::GlobalNamespace::BeatmapLevelPack*>*>", modifiers: "", def_value: None }, CppParam { name: "filter", ty:
  // "::GlobalNamespace::LevelFilter", modifiers: "", def_value: None }, CppParam { name: "levelsModel", ty: "::GlobalNamespace::IBeatmapLevelsModel*", modifiers: "", def_value: None }, CppParam {
  // name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "playerDataModel", ty: "::UnityW<::GlobalNamespace::PlayerDataModel>",
  // modifiers: "", def_value: None }, CppParam { name: "_filteredLevels_5__2", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevel*>*", modifiers: "", def_value: None },
  // CppParam { name: "__7__wrap2", ty: "::ArrayW<::GlobalNamespace::BeatmapLevelPack*,::Array<::GlobalNamespace::BeatmapLevelPack*>*>", modifiers: "", def_value: None }, CppParam { name:
  // "__7__wrap3", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__7__wrap4", ty: "::ArrayW<::GlobalNamespace::BeatmapLevel*,::Array<::GlobalNamespace::BeatmapLevel*>*>",
  // modifiers: "", def_value: None }, CppParam { name: "__7__wrap5", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_level_5__7", ty: "::GlobalNamespace::BeatmapLevel*",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: None }]
  constexpr __LevelFilter___FilterLevelsAsync_d__13(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::ArrayW<::GlobalNamespace::BeatmapLevel*, ::Array<::GlobalNamespace::BeatmapLevel*>*>> __t__builder,
      ::ArrayW<::GlobalNamespace::BeatmapLevelPack*, ::Array<::GlobalNamespace::BeatmapLevelPack*>*> packs, ::GlobalNamespace::LevelFilter filter, ::GlobalNamespace::IBeatmapLevelsModel* levelsModel,
      ::System::Threading::CancellationToken cancellationToken, ::UnityW<::GlobalNamespace::PlayerDataModel> playerDataModel,
      ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevel*>* _filteredLevels_5__2,
      ::ArrayW<::GlobalNamespace::BeatmapLevelPack*, ::Array<::GlobalNamespace::BeatmapLevelPack*>*> __7__wrap2, int32_t __7__wrap3,
      ::ArrayW<::GlobalNamespace::BeatmapLevel*, ::Array<::GlobalNamespace::BeatmapLevel*>*> __7__wrap4, int32_t __7__wrap5, ::GlobalNamespace::BeatmapLevel* _level_5__7,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __LevelFilter___FilterLevelsAsync_d__13();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::ArrayW<::GlobalNamespace::BeatmapLevel*, ::Array<::GlobalNamespace::BeatmapLevel*>*>> __t__builder;

  /// @brief Field packs, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::BeatmapLevelPack*, ::Array<::GlobalNamespace::BeatmapLevelPack*>*> packs;

  /// @brief Field filter, offset: 0x28, size: 0x50, def value: None
  ::GlobalNamespace::LevelFilter filter;

  /// @brief Field levelsModel, offset: 0x78, size: 0x8, def value: None
  ::GlobalNamespace::IBeatmapLevelsModel* levelsModel;

  /// @brief Field cancellationToken, offset: 0x80, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field playerDataModel, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerDataModel> playerDataModel;

  /// @brief Field <filteredLevels>5__2, offset: 0x90, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevel*>* _filteredLevels_5__2;

  /// @brief Field <>7__wrap2, offset: 0x98, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::BeatmapLevelPack*, ::Array<::GlobalNamespace::BeatmapLevelPack*>*> __7__wrap2;

  /// @brief Field <>7__wrap3, offset: 0xa0, size: 0x4, def value: None
  int32_t __7__wrap3;

  /// @brief Field <>7__wrap4, offset: 0xa8, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::BeatmapLevel*, ::Array<::GlobalNamespace::BeatmapLevel*>*> __7__wrap4;

  /// @brief Field <>7__wrap5, offset: 0xb0, size: 0x4, def value: None
  int32_t __7__wrap5;

  /// @brief Field <level>5__7, offset: 0xb8, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevel* _level_5__7;

  /// @brief Field <>u__1, offset: 0xc0, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LevelFilter___FilterLevelsAsync_d__13, 0xc8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelFilter___FilterLevelsAsync_d__13, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelFilter___FilterLevelsAsync_d__13, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelFilter___FilterLevelsAsync_d__13, packs) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelFilter___FilterLevelsAsync_d__13, filter) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelFilter___FilterLevelsAsync_d__13, levelsModel) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelFilter___FilterLevelsAsync_d__13, cancellationToken) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelFilter___FilterLevelsAsync_d__13, playerDataModel) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelFilter___FilterLevelsAsync_d__13, _filteredLevels_5__2) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelFilter___FilterLevelsAsync_d__13, __7__wrap2) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelFilter___FilterLevelsAsync_d__13, __7__wrap3) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelFilter___FilterLevelsAsync_d__13, __7__wrap4) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelFilter___FilterLevelsAsync_d__13, __7__wrap5) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelFilter___FilterLevelsAsync_d__13, _level_5__7) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelFilter___FilterLevelsAsync_d__13, __u__1) == 0xc0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10812))
// CS Name: ::LevelFilter::<>c*
class CORDL_TYPE __LevelFilter____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__LevelFilter____c* __9;

  /// @brief Field <>9__14_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__14_0, put = setStaticF___9__14_0))::System::Comparison_1<::System::ValueTuple_2<int32_t, ::GlobalNamespace::BeatmapLevel*>>* __9__14_0;

  static inline void setStaticF___9(::GlobalNamespace::__LevelFilter____c* value);

  static inline ::GlobalNamespace::__LevelFilter____c* getStaticF___9();

  static inline void setStaticF___9__14_0(::System::Comparison_1<::System::ValueTuple_2<int32_t, ::GlobalNamespace::BeatmapLevel*>>* value);

  static inline ::System::Comparison_1<::System::ValueTuple_2<int32_t, ::GlobalNamespace::BeatmapLevel*>>* getStaticF___9__14_0();

  static inline ::GlobalNamespace::__LevelFilter____c* New_ctor();

  /// @brief Method .ctor, addr 0x128ade0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <FilterLevelByText>b__14_0, addr 0x128ade8, size 0x24, virtual false, abstract: false, final false
  inline int32_t _FilterLevelByText_b__14_0(::System::ValueTuple_2<int32_t, ::GlobalNamespace::BeatmapLevel*> x, ::System::ValueTuple_2<int32_t, ::GlobalNamespace::BeatmapLevel*> y);

  // Ctor Parameters [CppParam { name: "", ty: "__LevelFilter____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LevelFilter____c(__LevelFilter____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LevelFilter____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LevelFilter____c(__LevelFilter____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LevelFilter____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LevelFilter____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::__LevelFilter____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LevelFilter____c*, "", "LevelFilter/<>c");
NEED_NO_BOX(::GlobalNamespace::__LevelFilter____c__DisplayClass13_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LevelFilter____c__DisplayClass13_0*, "", "LevelFilter/<>c__DisplayClass13_0");
NEED_NO_BOX(::GlobalNamespace::__LevelFilter____c__DisplayClass13_1);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LevelFilter____c__DisplayClass13_1*, "", "LevelFilter/<>c__DisplayClass13_1");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LevelFilter, "", "LevelFilter");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LevelFilter___FilterLevelsAsync_d__13, "", "LevelFilter/<FilterLevelsAsync>d__13");

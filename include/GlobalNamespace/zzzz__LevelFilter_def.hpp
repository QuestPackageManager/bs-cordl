#pragma once
// IWYU pragma private; include "GlobalNamespace/LevelFilter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapDifficultyMask_def.hpp"
#include "GlobalNamespace/zzzz__EntitlementStatus_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSensitivityFlag_def.hpp"
#include "GlobalNamespace/zzzz__SongPackMask_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
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
class IEntitlementModel;
}
namespace GlobalNamespace {
struct LevelFilter__FilterLevelsAsync_d__14;
}
namespace GlobalNamespace {
class LevelFilter___c;
}
namespace GlobalNamespace {
class LevelFilter___c__DisplayClass14_0;
}
namespace GlobalNamespace {
class LevelFilter___c__DisplayClass14_1;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
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
class LevelFilter___c;
}
namespace GlobalNamespace {
class LevelFilter___c__DisplayClass14_0;
}
namespace GlobalNamespace {
class LevelFilter___c__DisplayClass14_1;
}
namespace GlobalNamespace {
struct LevelFilter;
}
namespace GlobalNamespace {
struct LevelFilter__FilterLevelsAsync_d__14;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LevelFilter___c);
MARK_REF_PTR_T(::GlobalNamespace::LevelFilter___c__DisplayClass14_0);
MARK_REF_PTR_T(::GlobalNamespace::LevelFilter___c__DisplayClass14_1);
MARK_VAL_T(::GlobalNamespace::LevelFilter);
MARK_VAL_T(::GlobalNamespace::LevelFilter__FilterLevelsAsync_d__14);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: LevelFilter/<>c
class CORDL_TYPE LevelFilter___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::LevelFilter___c* __9;

  /// @brief Field <>9__15_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__15_0, put = setStaticF___9__15_0)) ::System::Comparison_1<::System::ValueTuple_2<int32_t, ::GlobalNamespace::BeatmapLevel*>>* __9__15_0;

  static inline ::GlobalNamespace::LevelFilter___c* New_ctor();

  /// @brief Method <FilterLevelByText>b__15_0, addr 0x26cfe4c, size 0x24, virtual false, abstract: false, final false
  inline int32_t _FilterLevelByText_b__15_0(::System::ValueTuple_2<int32_t, ::GlobalNamespace::BeatmapLevel*> x, ::System::ValueTuple_2<int32_t, ::GlobalNamespace::BeatmapLevel*> y);

  /// @brief Method .ctor, addr 0x26cfe44, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::LevelFilter___c* getStaticF___9();

  static inline ::System::Comparison_1<::System::ValueTuple_2<int32_t, ::GlobalNamespace::BeatmapLevel*>>* getStaticF___9__15_0();

  static inline void setStaticF___9(::GlobalNamespace::LevelFilter___c* value);

  static inline void setStaticF___9__15_0(::System::Comparison_1<::System::ValueTuple_2<int32_t, ::GlobalNamespace::BeatmapLevel*>>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LevelFilter___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LevelFilter___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LevelFilter___c(LevelFilter___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LevelFilter___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LevelFilter___c(LevelFilter___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12988 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LevelFilter___c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: LevelFilter/<>c__DisplayClass14_0
class CORDL_TYPE LevelFilter___c__DisplayClass14_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field characteristicFilter, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_characteristicFilter, put = __cordl_internal_set_characteristicFilter)) ::StringW characteristicFilter;

  static inline ::GlobalNamespace::LevelFilter___c__DisplayClass14_0* New_ctor();

  /// @brief Method <FilterLevelsAsync>b__3, addr 0x26cfe70, size 0x24, virtual false, abstract: false, final false
  inline bool _FilterLevelsAsync_b__3(::GlobalNamespace::BeatmapCharacteristicSO* characteristic);

  constexpr ::StringW const& __cordl_internal_get_characteristicFilter() const;

  constexpr ::StringW& __cordl_internal_get_characteristicFilter();

  constexpr void __cordl_internal_set_characteristicFilter(::StringW value);

  /// @brief Method .ctor, addr 0x26cfc7c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LevelFilter___c__DisplayClass14_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LevelFilter___c__DisplayClass14_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LevelFilter___c__DisplayClass14_0(LevelFilter___c__DisplayClass14_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LevelFilter___c__DisplayClass14_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LevelFilter___c__DisplayClass14_0(LevelFilter___c__DisplayClass14_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12989 };

  /// @brief Field characteristicFilter, offset: 0x10, size: 0x8, def value: None
  ::StringW ___characteristicFilter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LevelFilter___c__DisplayClass14_0, ___characteristicFilter) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LevelFilter___c__DisplayClass14_0, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies BeatmapDifficultyMask, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: LevelFilter/<>c__DisplayClass14_1
class CORDL_TYPE LevelFilter___c__DisplayClass14_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field characteristicFilter, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_characteristicFilter, put = __cordl_internal_set_characteristicFilter)) ::StringW characteristicFilter;

  /// @brief Field difficultyFilter, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_difficultyFilter, put = __cordl_internal_set_difficultyFilter)) ::GlobalNamespace::BeatmapDifficultyMask difficultyFilter;

  static inline ::GlobalNamespace::LevelFilter___c__DisplayClass14_1* New_ctor();

  /// @brief Method <FilterLevelsAsync>b__4, addr 0x26cfe94, size 0x60, virtual false, abstract: false, final false
  inline bool _FilterLevelsAsync_b__4(::System::ValueTuple_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::GlobalNamespace::BeatmapDifficulty> entry);

  constexpr ::StringW const& __cordl_internal_get_characteristicFilter() const;

  constexpr ::StringW& __cordl_internal_get_characteristicFilter();

  constexpr ::GlobalNamespace::BeatmapDifficultyMask const& __cordl_internal_get_difficultyFilter() const;

  constexpr ::GlobalNamespace::BeatmapDifficultyMask& __cordl_internal_get_difficultyFilter();

  constexpr void __cordl_internal_set_characteristicFilter(::StringW value);

  constexpr void __cordl_internal_set_difficultyFilter(::GlobalNamespace::BeatmapDifficultyMask value);

  /// @brief Method .ctor, addr 0x26cfde0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LevelFilter___c__DisplayClass14_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LevelFilter___c__DisplayClass14_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LevelFilter___c__DisplayClass14_1(LevelFilter___c__DisplayClass14_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LevelFilter___c__DisplayClass14_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LevelFilter___c__DisplayClass14_1(LevelFilter___c__DisplayClass14_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12990 };

  /// @brief Field difficultyFilter, offset: 0x10, size: 0x1, def value: None
  ::GlobalNamespace::BeatmapDifficultyMask ___difficultyFilter;

  /// @brief Field characteristicFilter, offset: 0x18, size: 0x8, def value: None
  ::StringW ___characteristicFilter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LevelFilter___c__DisplayClass14_1, ___difficultyFilter) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelFilter___c__DisplayClass14_1, ___characteristicFilter) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LevelFilter___c__DisplayClass14_1, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies BeatmapDifficultyMask, PlayerSensitivityFlag, SongPackMask
namespace GlobalNamespace {
// Is value type: true
// CS Name: LevelFilter
struct CORDL_TYPE LevelFilter {
public:
  // Declarations
  using _FilterLevelsAsync_d__14 = ::GlobalNamespace::LevelFilter__FilterLevelsAsync_d__14;

  using __c = ::GlobalNamespace::LevelFilter___c;

  using __c__DisplayClass14_0 = ::GlobalNamespace::LevelFilter___c__DisplayClass14_0;

  using __c__DisplayClass14_1 = ::GlobalNamespace::LevelFilter___c__DisplayClass14_1;

  /// @brief Field bpmOptions, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_bpmOptions, put = setStaticF_bpmOptions)) ::ArrayW<float_t, ::Array<float_t>*> bpmOptions;

  /// @brief Method CleanText, addr 0x26cf600, size 0x88, virtual false, abstract: false, final false
  static inline ::StringW CleanText(::StringW s);

  /// @brief Method FilterLevelByText, addr 0x26cf0c4, size 0x53c, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevel*>* FilterLevelByText(::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevel*>* levels,
                                                                                                            ::ArrayW<::StringW, ::Array<::StringW>*> searchTerms);

  /// @brief Method FilterLevelsAsync, addr 0x26cef9c, size 0x128, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task_1<::ArrayW<::GlobalNamespace::BeatmapLevel*, ::Array<::GlobalNamespace::BeatmapLevel*>*>>*
  FilterLevelsAsync(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapLevel*>* beatmapLevels, ::GlobalNamespace::LevelFilter filter,
                    ::GlobalNamespace::PlayerDataModel* playerDataModel, ::GlobalNamespace::IEntitlementModel* levelsModel, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method FilterLevelsAsync, addr 0x26cedc0, size 0x1dc, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task_1<::ArrayW<::GlobalNamespace::BeatmapLevel*, ::Array<::GlobalNamespace::BeatmapLevel*>*>>*
  FilterLevelsAsync(::ArrayW<::GlobalNamespace::BeatmapLevelPack*, ::Array<::GlobalNamespace::BeatmapLevelPack*>*> packs, ::GlobalNamespace::LevelFilter filter,
                    ::GlobalNamespace::PlayerDataModel* playerDataModel, ::GlobalNamespace::IEntitlementModel* levelsModel, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method IsWithoutFilter, addr 0x26ced10, size 0xb0, virtual false, abstract: false, final false
  static inline bool IsWithoutFilter(::ByRef<::GlobalNamespace::LevelFilter> filter, bool ignoreFilterBySongs);

  /// @brief Method <FilterLevelByText>g__CalculateMatchScore|15_1, addr 0x26cf688, size 0x128, virtual false, abstract: false, final false
  static inline int32_t _FilterLevelByText_g__CalculateMatchScore_15_1(::StringW levelString, ::ArrayW<::StringW, ::Array<::StringW>*> searchTerms);

  /// @brief Method <FilterLevelsAsync>g__HasPlayedAnyDifficulty|14_0, addr 0x26cf844, size 0x354, virtual false, abstract: false, final false
  static inline bool _FilterLevelsAsync_g__HasPlayedAnyDifficulty_14_0(::GlobalNamespace::BeatmapLevel* level, ::GlobalNamespace::PlayerDataModel* playerDataModel);

  /// @brief Method <FilterLevelsAsync>g__MatchesCharacteristic|14_1, addr 0x26cfb98, size 0xe4, virtual false, abstract: false, final false
  static inline bool _FilterLevelsAsync_g__MatchesCharacteristic_14_1(::GlobalNamespace::BeatmapLevel* beatmapLevel, ::StringW characteristicFilter);

  /// @brief Method <FilterLevelsAsync>g__MatchesDifficulty|14_2, addr 0x26cfc84, size 0x15c, virtual false, abstract: false, final false
  static inline bool _FilterLevelsAsync_g__MatchesDifficulty_14_2(::GlobalNamespace::BeatmapLevel* beatmapLevel, ::GlobalNamespace::BeatmapDifficultyMask difficultyFilter,
                                                                  ::StringW characteristicFilter);

  static inline ::ArrayW<float_t, ::Array<float_t>*> getStaticF_bpmOptions();

  static inline void setStaticF_bpmOptions(::ArrayW<float_t, ::Array<float_t>*> value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr LevelFilter();

  // Ctor Parameters [CppParam { name: "songOwned", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "songNotOwned", ty: "bool", modifiers: "", def_value: None }, CppParam { name:
  // "songUnplayed", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "difficulties", ty: "::GlobalNamespace::BeatmapDifficultyMask", modifiers: "", def_value: None }, CppParam { name:
  // "songPacks", ty: "::GlobalNamespace::SongPackMask", modifiers: "", def_value: None }, CppParam { name: "characteristicSerializedName", ty: "::StringW", modifiers: "", def_value: None }, CppParam
  // { name: "minBpm", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "maxBpm", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "sensitivity", ty:
  // "::GlobalNamespace::PlayerSensitivityFlag", modifiers: "", def_value: None }, CppParam { name: "searchText", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "limitIds", ty:
  // "::ArrayW<::StringW,::Array<::StringW>*>", modifiers: "", def_value: None }]
  constexpr LevelFilter(bool songOwned, bool songNotOwned, bool songUnplayed, ::GlobalNamespace::BeatmapDifficultyMask difficulties, ::GlobalNamespace::SongPackMask songPacks,
                        ::StringW characteristicSerializedName, float_t minBpm, float_t maxBpm, ::GlobalNamespace::PlayerSensitivityFlag sensitivity, ::StringW searchText,
                        ::ArrayW<::StringW, ::Array<::StringW>*> limitIds) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12992 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
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

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LevelFilter, 0x50>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies EntitlementStatus, LevelFilter, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.IAsyncStateMachine,
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: LevelFilter/<FilterLevelsAsync>d__14
struct CORDL_TYPE LevelFilter__FilterLevelsAsync_d__14 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x26cfef4, size 0x90c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x26d0800, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr LevelFilter__FilterLevelsAsync_d__14();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::ArrayW<::GlobalNamespace::BeatmapLevel*,::Array<::GlobalNamespace::BeatmapLevel*>*>>", modifiers: "", def_value: None }, CppParam
  // { name: "beatmapLevels", ty: "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapLevel*>*", modifiers: "", def_value: None }, CppParam { name: "filter", ty:
  // "::GlobalNamespace::LevelFilter", modifiers: "", def_value: None }, CppParam { name: "levelsModel", ty: "::GlobalNamespace::IEntitlementModel*", modifiers: "", def_value: None }, CppParam { name:
  // "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "playerDataModel", ty: "::UnityW<::GlobalNamespace::PlayerDataModel>",
  // modifiers: "", def_value: None }, CppParam { name: "_filteredLevels_5__2", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevel*>*", modifiers: "", def_value: None },
  // CppParam { name: "__7__wrap2", ty: "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::BeatmapLevel*>*", modifiers: "", def_value: None }, CppParam { name: "_level_5__4", ty:
  // "::GlobalNamespace::BeatmapLevel*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>",
  // modifiers: "", def_value: None }]
  constexpr LevelFilter__FilterLevelsAsync_d__14(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::ArrayW<::GlobalNamespace::BeatmapLevel*, ::Array<::GlobalNamespace::BeatmapLevel*>*>> __t__builder,
      ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapLevel*>* beatmapLevels, ::GlobalNamespace::LevelFilter filter, ::GlobalNamespace::IEntitlementModel* levelsModel,
      ::System::Threading::CancellationToken cancellationToken, ::UnityW<::GlobalNamespace::PlayerDataModel> playerDataModel,
      ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevel*>* _filteredLevels_5__2, ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::BeatmapLevel*>* __7__wrap2,
      ::GlobalNamespace::BeatmapLevel* _level_5__4, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12991 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xb0 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::ArrayW<::GlobalNamespace::BeatmapLevel*, ::Array<::GlobalNamespace::BeatmapLevel*>*>> __t__builder;

  /// @brief Field beatmapLevels, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapLevel*>* beatmapLevels;

  /// @brief Field filter, offset: 0x28, size: 0x50, def value: None
  ::GlobalNamespace::LevelFilter filter;

  /// @brief Field levelsModel, offset: 0x78, size: 0x8, def value: None
  ::GlobalNamespace::IEntitlementModel* levelsModel;

  /// @brief Field cancellationToken, offset: 0x80, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field playerDataModel, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerDataModel> playerDataModel;

  /// @brief Field <filteredLevels>5__2, offset: 0x90, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevel*>* _filteredLevels_5__2;

  /// @brief Field <>7__wrap2, offset: 0x98, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::BeatmapLevel*>* __7__wrap2;

  /// @brief Field <level>5__4, offset: 0xa0, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevel* _level_5__4;

  /// @brief Field <>u__1, offset: 0xa8, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LevelFilter__FilterLevelsAsync_d__14, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelFilter__FilterLevelsAsync_d__14, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelFilter__FilterLevelsAsync_d__14, beatmapLevels) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelFilter__FilterLevelsAsync_d__14, filter) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelFilter__FilterLevelsAsync_d__14, levelsModel) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelFilter__FilterLevelsAsync_d__14, cancellationToken) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelFilter__FilterLevelsAsync_d__14, playerDataModel) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelFilter__FilterLevelsAsync_d__14, _filteredLevels_5__2) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelFilter__FilterLevelsAsync_d__14, __7__wrap2) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelFilter__FilterLevelsAsync_d__14, _level_5__4) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelFilter__FilterLevelsAsync_d__14, __u__1) == 0xa8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LevelFilter__FilterLevelsAsync_d__14, 0xb0>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LevelFilter___c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LevelFilter___c*, "", "LevelFilter/<>c");
NEED_NO_BOX(::GlobalNamespace::LevelFilter___c__DisplayClass14_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LevelFilter___c__DisplayClass14_0*, "", "LevelFilter/<>c__DisplayClass14_0");
NEED_NO_BOX(::GlobalNamespace::LevelFilter___c__DisplayClass14_1);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LevelFilter___c__DisplayClass14_1*, "", "LevelFilter/<>c__DisplayClass14_1");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LevelFilter, "", "LevelFilter");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LevelFilter__FilterLevelsAsync_d__14, "", "LevelFilter/<FilterLevelsAsync>d__14");

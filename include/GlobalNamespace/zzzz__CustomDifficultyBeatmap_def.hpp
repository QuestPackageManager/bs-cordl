#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapDataBasicInfo_def.hpp"
#include "GlobalNamespace/zzzz__IReadonlyBeatmapData_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CustomDifficultyBeatmap)
namespace BeatmapSaveDataVersion3 {
class BeatmapSaveData;
}
namespace GlobalNamespace {
struct BeatmapDifficulty;
}
namespace GlobalNamespace {
class EnvironmentInfoSO;
}
namespace GlobalNamespace {
class IBeatmapDataBasicInfo;
}
namespace GlobalNamespace {
class IBeatmapLevel;
}
namespace GlobalNamespace {
class IDifficultyBeatmapSet;
}
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
namespace GlobalNamespace {
class IReadonlyBeatmapData;
}
namespace GlobalNamespace {
class PlayerSpecificSettings;
}
namespace GlobalNamespace {
struct __CustomDifficultyBeatmap___GetBeatmapDataAsync_d__34;
}
namespace GlobalNamespace {
struct __CustomDifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__33;
}
namespace GlobalNamespace {
class __CustomDifficultyBeatmap____c__DisplayClass34_0;
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
namespace System::Runtime::CompilerServices {
struct TaskAwaiter;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
// Forward declare root types
namespace GlobalNamespace {
class CustomDifficultyBeatmap;
}
namespace GlobalNamespace {
class __CustomDifficultyBeatmap____c__DisplayClass34_0;
}
namespace GlobalNamespace {
struct __CustomDifficultyBeatmap___GetBeatmapDataAsync_d__34;
}
namespace GlobalNamespace {
struct __CustomDifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__33;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CustomDifficultyBeatmap);
MARK_REF_PTR_T(::GlobalNamespace::__CustomDifficultyBeatmap____c__DisplayClass34_0);
MARK_VAL_T(::GlobalNamespace::__CustomDifficultyBeatmap___GetBeatmapDataAsync_d__34);
MARK_VAL_T(::GlobalNamespace::__CustomDifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__33);
// Type: ::<GetBeatmapDataBasicInfoAsync>d__33
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3402)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 886 }),
// TypeDefinitionIndex(TypeDefinitionIndex(4258)), TypeDefinitionIndex(TypeDefinitionIndex(3394)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3402), inst: 886 })} Self:
// TypeDefinitionIndex(TypeDefinitionIndex(4379)) CS Name: ::CustomDifficultyBeatmap::<GetBeatmapDataBasicInfoAsync>d__33
struct CORDL_TYPE __CustomDifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__33 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  /// @brief Method MoveNext, addr 0x2346dd0, size 0x220, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2346ff0, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapDataBasicInfo*>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::CustomDifficultyBeatmap*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapDataBasicInfo*>", modifiers: "", def_value: None }]
  constexpr __CustomDifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__33(int32_t __1__state,
                                                                           ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapDataBasicInfo*> __t__builder,
                                                                           ::GlobalNamespace::CustomDifficultyBeatmap* __4__this,
                                                                           ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapDataBasicInfo*> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __CustomDifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__33();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapDataBasicInfo*> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::CustomDifficultyBeatmap* __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapDataBasicInfo*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__CustomDifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__33, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__CustomDifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__33, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__CustomDifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__33, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__CustomDifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__33, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__CustomDifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__33, __u__1) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass34_0
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4380))
// CS Name: ::CustomDifficultyBeatmap::<>c__DisplayClass34_0*
class CORDL_TYPE __CustomDifficultyBeatmap____c__DisplayClass34_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field readonlyBeatmapData, offset 0x10, size 0x8
  __declspec(property(get = __get_readonlyBeatmapData, put = __set_readonlyBeatmapData))::GlobalNamespace::IReadonlyBeatmapData* readonlyBeatmapData;

  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::CustomDifficultyBeatmap* __4__this;

  /// @brief Field originalEnvironmentInfo, offset 0x20, size 0x8
  __declspec(property(get = __get_originalEnvironmentInfo, put = __set_originalEnvironmentInfo))::GlobalNamespace::EnvironmentInfoSO* originalEnvironmentInfo;

  /// @brief Field environmentInfo, offset 0x28, size 0x8
  __declspec(property(get = __get_environmentInfo, put = __set_environmentInfo))::GlobalNamespace::EnvironmentInfoSO* environmentInfo;

  /// @brief Field playerSpecificSettings, offset 0x30, size 0x8
  __declspec(property(get = __get_playerSpecificSettings, put = __set_playerSpecificSettings))::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings;

  constexpr ::GlobalNamespace::IReadonlyBeatmapData*& __get_readonlyBeatmapData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IReadonlyBeatmapData*> const& __get_readonlyBeatmapData() const;

  constexpr void __set_readonlyBeatmapData(::GlobalNamespace::IReadonlyBeatmapData* value);

  constexpr ::GlobalNamespace::CustomDifficultyBeatmap*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::CustomDifficultyBeatmap*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::CustomDifficultyBeatmap* value);

  constexpr ::GlobalNamespace::EnvironmentInfoSO*& __get_originalEnvironmentInfo();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentInfoSO*> const& __get_originalEnvironmentInfo() const;

  constexpr void __set_originalEnvironmentInfo(::GlobalNamespace::EnvironmentInfoSO* value);

  constexpr ::GlobalNamespace::EnvironmentInfoSO*& __get_environmentInfo();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentInfoSO*> const& __get_environmentInfo() const;

  constexpr void __set_environmentInfo(::GlobalNamespace::EnvironmentInfoSO* value);

  constexpr ::GlobalNamespace::PlayerSpecificSettings*& __get_playerSpecificSettings();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerSpecificSettings*> const& __get_playerSpecificSettings() const;

  constexpr void __set_playerSpecificSettings(::GlobalNamespace::PlayerSpecificSettings* value);

  static inline ::GlobalNamespace::__CustomDifficultyBeatmap____c__DisplayClass34_0* New_ctor();

  /// @brief Method .ctor, addr 0x2347048, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <GetBeatmapDataAsync>b__0, addr 0x2347050, size 0x78, virtual false, abstract: false, final false
  inline void _GetBeatmapDataAsync_b__0();

  // Ctor Parameters [CppParam { name: "", ty: "__CustomDifficultyBeatmap____c__DisplayClass34_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __CustomDifficultyBeatmap____c__DisplayClass34_0(__CustomDifficultyBeatmap____c__DisplayClass34_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__CustomDifficultyBeatmap____c__DisplayClass34_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __CustomDifficultyBeatmap____c__DisplayClass34_0(__CustomDifficultyBeatmap____c__DisplayClass34_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __CustomDifficultyBeatmap____c__DisplayClass34_0();

public:
  /// @brief Field readonlyBeatmapData, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::IReadonlyBeatmapData* ___readonlyBeatmapData;

  /// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::CustomDifficultyBeatmap* _____4__this;

  /// @brief Field originalEnvironmentInfo, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::EnvironmentInfoSO* ___originalEnvironmentInfo;

  /// @brief Field environmentInfo, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::EnvironmentInfoSO* ___environmentInfo;

  /// @brief Field playerSpecificSettings, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::PlayerSpecificSettings* ___playerSpecificSettings;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__CustomDifficultyBeatmap____c__DisplayClass34_0, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__CustomDifficultyBeatmap____c__DisplayClass34_0, ___readonlyBeatmapData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__CustomDifficultyBeatmap____c__DisplayClass34_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__CustomDifficultyBeatmap____c__DisplayClass34_0, ___originalEnvironmentInfo) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__CustomDifficultyBeatmap____c__DisplayClass34_0, ___environmentInfo) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__CustomDifficultyBeatmap____c__DisplayClass34_0, ___playerSpecificSettings) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<GetBeatmapDataAsync>d__34
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3402), inst: 890 }), TypeDefinitionIndex(TypeDefinitionIndex(3402)),
// TypeDefinitionIndex(TypeDefinitionIndex(4260)), TypeDefinitionIndex(TypeDefinitionIndex(3393))} Self: TypeDefinitionIndex(TypeDefinitionIndex(4381)) CS Name:
// ::CustomDifficultyBeatmap::<GetBeatmapDataAsync>d__34
struct CORDL_TYPE __CustomDifficultyBeatmap___GetBeatmapDataAsync_d__34 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  /// @brief Method MoveNext, addr 0x23470c8, size 0x2a4, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x234736c, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData*>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::CustomDifficultyBeatmap*", modifiers: "", def_value: None }, CppParam { name: "environmentInfo", ty: "::GlobalNamespace::EnvironmentInfoSO*", modifiers: "", def_value: None },
  // CppParam { name: "playerSpecificSettings", ty: "::GlobalNamespace::PlayerSpecificSettings*", modifiers: "", def_value: None }, CppParam { name: "__8__1", ty:
  // "::GlobalNamespace::__CustomDifficultyBeatmap____c__DisplayClass34_0*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter",
  // modifiers: "", def_value: None }]
  constexpr __CustomDifficultyBeatmap___GetBeatmapDataAsync_d__34(int32_t __1__state,
                                                                  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData*> __t__builder,
                                                                  ::GlobalNamespace::CustomDifficultyBeatmap* __4__this, ::GlobalNamespace::EnvironmentInfoSO* environmentInfo,
                                                                  ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings,
                                                                  ::GlobalNamespace::__CustomDifficultyBeatmap____c__DisplayClass34_0* __8__1,
                                                                  ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __CustomDifficultyBeatmap___GetBeatmapDataAsync_d__34();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData*> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::CustomDifficultyBeatmap* __4__this;

  /// @brief Field environmentInfo, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::EnvironmentInfoSO* environmentInfo;

  /// @brief Field playerSpecificSettings, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings;

  /// @brief Field <>8__1, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::__CustomDifficultyBeatmap____c__DisplayClass34_0* __8__1;

  /// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__CustomDifficultyBeatmap___GetBeatmapDataAsync_d__34, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__CustomDifficultyBeatmap___GetBeatmapDataAsync_d__34, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__CustomDifficultyBeatmap___GetBeatmapDataAsync_d__34, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__CustomDifficultyBeatmap___GetBeatmapDataAsync_d__34, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__CustomDifficultyBeatmap___GetBeatmapDataAsync_d__34, environmentInfo) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__CustomDifficultyBeatmap___GetBeatmapDataAsync_d__34, playerSpecificSettings) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__CustomDifficultyBeatmap___GetBeatmapDataAsync_d__34, __8__1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__CustomDifficultyBeatmap___GetBeatmapDataAsync_d__34, __u__1) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::CustomDifficultyBeatmap
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(14717))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4382))
// CS Name: ::CustomDifficultyBeatmap*
class CORDL_TYPE CustomDifficultyBeatmap : public ::System::Object {
public:
  // Declarations
  using _GetBeatmapDataAsync_d__34 = ::GlobalNamespace::__CustomDifficultyBeatmap___GetBeatmapDataAsync_d__34;

  using __c__DisplayClass34_0 = ::GlobalNamespace::__CustomDifficultyBeatmap____c__DisplayClass34_0;

  using _GetBeatmapDataBasicInfoAsync_d__33 = ::GlobalNamespace::__CustomDifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__33;

  /// @brief Field <level>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __get__level_k__BackingField, put = __set__level_k__BackingField))::GlobalNamespace::IBeatmapLevel* _level_k__BackingField;

  /// @brief Field <parentDifficultyBeatmapSet>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __get__parentDifficultyBeatmapSet_k__BackingField,
                      put = __set__parentDifficultyBeatmapSet_k__BackingField))::GlobalNamespace::IDifficultyBeatmapSet* _parentDifficultyBeatmapSet_k__BackingField;

  /// @brief Field <difficulty>k__BackingField, offset 0x20, size 0x4
  __declspec(property(get = __get__difficulty_k__BackingField, put = __set__difficulty_k__BackingField))::GlobalNamespace::BeatmapDifficulty _difficulty_k__BackingField;

  /// @brief Field <difficultyRank>k__BackingField, offset 0x24, size 0x4
  __declspec(property(get = __get__difficultyRank_k__BackingField, put = __set__difficultyRank_k__BackingField)) int32_t _difficultyRank_k__BackingField;

  /// @brief Field <noteJumpMovementSpeed>k__BackingField, offset 0x28, size 0x4
  __declspec(property(get = __get__noteJumpMovementSpeed_k__BackingField, put = __set__noteJumpMovementSpeed_k__BackingField)) float_t _noteJumpMovementSpeed_k__BackingField;

  /// @brief Field <noteJumpStartBeatOffset>k__BackingField, offset 0x2c, size 0x4
  __declspec(property(get = __get__noteJumpStartBeatOffset_k__BackingField, put = __set__noteJumpStartBeatOffset_k__BackingField)) float_t _noteJumpStartBeatOffset_k__BackingField;

  /// @brief Field <beatmapDataBasicInfo>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __get__beatmapDataBasicInfo_k__BackingField,
                      put = __set__beatmapDataBasicInfo_k__BackingField))::GlobalNamespace::IBeatmapDataBasicInfo* _beatmapDataBasicInfo_k__BackingField;

  /// @brief Field <beatmapColorSchemeIdx>k__BackingField, offset 0x38, size 0x4
  __declspec(property(get = __get__beatmapColorSchemeIdx_k__BackingField, put = __set__beatmapColorSchemeIdx_k__BackingField)) int32_t _beatmapColorSchemeIdx_k__BackingField;

  /// @brief Field <beatsPerMinute>k__BackingField, offset 0x3c, size 0x4
  __declspec(property(get = __get__beatsPerMinute_k__BackingField, put = __set__beatsPerMinute_k__BackingField)) float_t _beatsPerMinute_k__BackingField;

  /// @brief Field <environmentNameIdx>k__BackingField, offset 0x40, size 0x4
  __declspec(property(get = __get__environmentNameIdx_k__BackingField, put = __set__environmentNameIdx_k__BackingField)) int32_t _environmentNameIdx_k__BackingField;

  /// @brief Field <beatmapSaveData>k__BackingField, offset 0x48, size 0x8
  __declspec(property(get = __get__beatmapSaveData_k__BackingField, put = __set__beatmapSaveData_k__BackingField))::BeatmapSaveDataVersion3::BeatmapSaveData* _beatmapSaveData_k__BackingField;

  __declspec(property(get = get_level))::GlobalNamespace::IBeatmapLevel* level;

  __declspec(property(get = get_parentDifficultyBeatmapSet))::GlobalNamespace::IDifficultyBeatmapSet* parentDifficultyBeatmapSet;

  __declspec(property(get = get_difficulty))::GlobalNamespace::BeatmapDifficulty difficulty;

  __declspec(property(get = get_difficultyRank)) int32_t difficultyRank;

  __declspec(property(get = get_noteJumpMovementSpeed)) float_t noteJumpMovementSpeed;

  __declspec(property(get = get_noteJumpStartBeatOffset)) float_t noteJumpStartBeatOffset;

  __declspec(property(get = get_beatmapDataBasicInfo))::GlobalNamespace::IBeatmapDataBasicInfo* beatmapDataBasicInfo;

  __declspec(property(get = get_beatmapColorSchemeIdx)) int32_t beatmapColorSchemeIdx;

  __declspec(property(get = get_beatsPerMinute)) float_t beatsPerMinute;

  __declspec(property(get = get_environmentNameIdx)) int32_t environmentNameIdx;

  __declspec(property(get = get_beatmapSaveData))::BeatmapSaveDataVersion3::BeatmapSaveData* beatmapSaveData;

  /// @brief Convert operator to "::GlobalNamespace::IDifficultyBeatmap"
  constexpr operator ::GlobalNamespace::IDifficultyBeatmap*() noexcept;

  /// @brief Convert to "::GlobalNamespace::IDifficultyBeatmap"
  constexpr ::GlobalNamespace::IDifficultyBeatmap* i___GlobalNamespace__IDifficultyBeatmap() noexcept;

  constexpr ::GlobalNamespace::IBeatmapLevel*& __get__level_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatmapLevel*> const& __get__level_k__BackingField() const;

  constexpr void __set__level_k__BackingField(::GlobalNamespace::IBeatmapLevel* value);

  constexpr ::GlobalNamespace::IDifficultyBeatmapSet*& __get__parentDifficultyBeatmapSet_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IDifficultyBeatmapSet*> const& __get__parentDifficultyBeatmapSet_k__BackingField() const;

  constexpr void __set__parentDifficultyBeatmapSet_k__BackingField(::GlobalNamespace::IDifficultyBeatmapSet* value);

  constexpr ::GlobalNamespace::BeatmapDifficulty& __get__difficulty_k__BackingField();

  constexpr ::GlobalNamespace::BeatmapDifficulty const& __get__difficulty_k__BackingField() const;

  constexpr void __set__difficulty_k__BackingField(::GlobalNamespace::BeatmapDifficulty value);

  constexpr int32_t& __get__difficultyRank_k__BackingField();

  constexpr int32_t const& __get__difficultyRank_k__BackingField() const;

  constexpr void __set__difficultyRank_k__BackingField(int32_t value);

  constexpr float_t& __get__noteJumpMovementSpeed_k__BackingField();

  constexpr float_t const& __get__noteJumpMovementSpeed_k__BackingField() const;

  constexpr void __set__noteJumpMovementSpeed_k__BackingField(float_t value);

  constexpr float_t& __get__noteJumpStartBeatOffset_k__BackingField();

  constexpr float_t const& __get__noteJumpStartBeatOffset_k__BackingField() const;

  constexpr void __set__noteJumpStartBeatOffset_k__BackingField(float_t value);

  constexpr ::GlobalNamespace::IBeatmapDataBasicInfo*& __get__beatmapDataBasicInfo_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatmapDataBasicInfo*> const& __get__beatmapDataBasicInfo_k__BackingField() const;

  constexpr void __set__beatmapDataBasicInfo_k__BackingField(::GlobalNamespace::IBeatmapDataBasicInfo* value);

  constexpr int32_t& __get__beatmapColorSchemeIdx_k__BackingField();

  constexpr int32_t const& __get__beatmapColorSchemeIdx_k__BackingField() const;

  constexpr void __set__beatmapColorSchemeIdx_k__BackingField(int32_t value);

  constexpr float_t& __get__beatsPerMinute_k__BackingField();

  constexpr float_t const& __get__beatsPerMinute_k__BackingField() const;

  constexpr void __set__beatsPerMinute_k__BackingField(float_t value);

  constexpr int32_t& __get__environmentNameIdx_k__BackingField();

  constexpr int32_t const& __get__environmentNameIdx_k__BackingField() const;

  constexpr void __set__environmentNameIdx_k__BackingField(int32_t value);

  constexpr ::BeatmapSaveDataVersion3::BeatmapSaveData*& __get__beatmapSaveData_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::BeatmapSaveDataVersion3::BeatmapSaveData*> const& __get__beatmapSaveData_k__BackingField() const;

  constexpr void __set__beatmapSaveData_k__BackingField(::BeatmapSaveDataVersion3::BeatmapSaveData* value);

  /// @brief Method get_level, addr 0x2346aec, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::IBeatmapLevel* get_level();

  /// @brief Method get_parentDifficultyBeatmapSet, addr 0x2346af4, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::IDifficultyBeatmapSet* get_parentDifficultyBeatmapSet();

  /// @brief Method get_difficulty, addr 0x2346afc, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::BeatmapDifficulty get_difficulty();

  /// @brief Method get_difficultyRank, addr 0x2346b04, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_difficultyRank();

  /// @brief Method get_noteJumpMovementSpeed, addr 0x2346b0c, size 0x8, virtual true, abstract: false, final true
  inline float_t get_noteJumpMovementSpeed();

  /// @brief Method get_noteJumpStartBeatOffset, addr 0x2346b14, size 0x8, virtual true, abstract: false, final true
  inline float_t get_noteJumpStartBeatOffset();

  /// @brief Method get_beatmapDataBasicInfo, addr 0x2346b1c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::IBeatmapDataBasicInfo* get_beatmapDataBasicInfo();

  /// @brief Method get_beatmapColorSchemeIdx, addr 0x2346b24, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_beatmapColorSchemeIdx();

  /// @brief Method get_beatsPerMinute, addr 0x2346b2c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_beatsPerMinute();

  /// @brief Method get_environmentNameIdx, addr 0x2346b34, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_environmentNameIdx();

  /// @brief Method get_beatmapSaveData, addr 0x2346b3c, size 0x8, virtual false, abstract: false, final false
  inline ::BeatmapSaveDataVersion3::BeatmapSaveData* get_beatmapSaveData();

  /// @brief Method GetBeatmapDataBasicInfoAsync, addr 0x2346b44, size 0xf0, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::IBeatmapDataBasicInfo*>* GetBeatmapDataBasicInfoAsync();

  /// @brief Method GetBeatmapDataAsync, addr 0x2346c34, size 0x108, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData*>* GetBeatmapDataAsync(::GlobalNamespace::EnvironmentInfoSO* environmentInfo,
                                                                                                           ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings);

  static inline ::GlobalNamespace::CustomDifficultyBeatmap* New_ctor(::GlobalNamespace::IBeatmapLevel* level, ::GlobalNamespace::IDifficultyBeatmapSet* parentDifficultyBeatmapSet,
                                                                     ::GlobalNamespace::BeatmapDifficulty difficulty, int32_t difficultyRank, float_t noteJumpMovementSpeed,
                                                                     float_t noteJumpStartBeatOffset, float_t beatsPerMinute, int32_t beatmapColorSchemeIdx, int32_t environmentNameIdx,
                                                                     ::BeatmapSaveDataVersion3::BeatmapSaveData* beatmapSaveData, ::GlobalNamespace::IBeatmapDataBasicInfo* beatmapDataBasicInfo);

  /// @brief Method .ctor, addr 0x2346d3c, size 0x94, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::IBeatmapLevel* level, ::GlobalNamespace::IDifficultyBeatmapSet* parentDifficultyBeatmapSet, ::GlobalNamespace::BeatmapDifficulty difficulty,
                    int32_t difficultyRank, float_t noteJumpMovementSpeed, float_t noteJumpStartBeatOffset, float_t beatsPerMinute, int32_t beatmapColorSchemeIdx, int32_t environmentNameIdx,
                    ::BeatmapSaveDataVersion3::BeatmapSaveData* beatmapSaveData, ::GlobalNamespace::IBeatmapDataBasicInfo* beatmapDataBasicInfo);

  // Ctor Parameters [CppParam { name: "", ty: "CustomDifficultyBeatmap", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CustomDifficultyBeatmap(CustomDifficultyBeatmap&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CustomDifficultyBeatmap", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CustomDifficultyBeatmap(CustomDifficultyBeatmap const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CustomDifficultyBeatmap();

public:
  /// @brief Field <level>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::IBeatmapLevel* ____level_k__BackingField;

  /// @brief Field <parentDifficultyBeatmapSet>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::IDifficultyBeatmapSet* ____parentDifficultyBeatmapSet_k__BackingField;

  /// @brief Field <difficulty>k__BackingField, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::BeatmapDifficulty ____difficulty_k__BackingField;

  /// @brief Field <difficultyRank>k__BackingField, offset: 0x24, size: 0x4, def value: None
  int32_t ____difficultyRank_k__BackingField;

  /// @brief Field <noteJumpMovementSpeed>k__BackingField, offset: 0x28, size: 0x4, def value: None
  float_t ____noteJumpMovementSpeed_k__BackingField;

  /// @brief Field <noteJumpStartBeatOffset>k__BackingField, offset: 0x2c, size: 0x4, def value: None
  float_t ____noteJumpStartBeatOffset_k__BackingField;

  /// @brief Field <beatmapDataBasicInfo>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::IBeatmapDataBasicInfo* ____beatmapDataBasicInfo_k__BackingField;

  /// @brief Field <beatmapColorSchemeIdx>k__BackingField, offset: 0x38, size: 0x4, def value: None
  int32_t ____beatmapColorSchemeIdx_k__BackingField;

  /// @brief Field <beatsPerMinute>k__BackingField, offset: 0x3c, size: 0x4, def value: None
  float_t ____beatsPerMinute_k__BackingField;

  /// @brief Field <environmentNameIdx>k__BackingField, offset: 0x40, size: 0x4, def value: None
  int32_t ____environmentNameIdx_k__BackingField;

  /// @brief Field <beatmapSaveData>k__BackingField, offset: 0x48, size: 0x8, def value: None
  ::BeatmapSaveDataVersion3::BeatmapSaveData* ____beatmapSaveData_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CustomDifficultyBeatmap, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomDifficultyBeatmap, ____level_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomDifficultyBeatmap, ____parentDifficultyBeatmapSet_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomDifficultyBeatmap, ____difficulty_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomDifficultyBeatmap, ____difficultyRank_k__BackingField) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomDifficultyBeatmap, ____noteJumpMovementSpeed_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomDifficultyBeatmap, ____noteJumpStartBeatOffset_k__BackingField) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomDifficultyBeatmap, ____beatmapDataBasicInfo_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomDifficultyBeatmap, ____beatmapColorSchemeIdx_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomDifficultyBeatmap, ____beatsPerMinute_k__BackingField) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomDifficultyBeatmap, ____environmentNameIdx_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomDifficultyBeatmap, ____beatmapSaveData_k__BackingField) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CustomDifficultyBeatmap);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CustomDifficultyBeatmap*, "", "CustomDifficultyBeatmap");
NEED_NO_BOX(::GlobalNamespace::__CustomDifficultyBeatmap____c__DisplayClass34_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__CustomDifficultyBeatmap____c__DisplayClass34_0*, "", "CustomDifficultyBeatmap/<>c__DisplayClass34_0");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__CustomDifficultyBeatmap___GetBeatmapDataAsync_d__34, "", "CustomDifficultyBeatmap/<GetBeatmapDataAsync>d__34");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__CustomDifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__33, "", "CustomDifficultyBeatmap/<GetBeatmapDataBasicInfoAsync>d__33");

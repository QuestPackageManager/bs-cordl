#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__IReadonlyBeatmapData_def.hpp"
#include "GlobalNamespace/zzzz__RecordingToolManager_def.hpp"
#include "GlobalNamespace/zzzz__SceneSetupData_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GameplayCoreSceneSetupData)
namespace GlobalNamespace {
class BeatmapDataCache;
}
namespace GlobalNamespace {
class ColorScheme;
}
namespace GlobalNamespace {
class EnvironmentInfoSO;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace GlobalNamespace {
class IReadonlyBeatmapData;
}
namespace GlobalNamespace {
class MainSettingsModelSO;
}
namespace GlobalNamespace {
class PlayerSpecificSettings;
}
namespace GlobalNamespace {
class PracticeSettings;
}
namespace GlobalNamespace {
struct __GameplayCoreSceneSetupData___GetTransformedBeatmapDataAsync_d__16;
}
namespace GlobalNamespace {
struct __GameplayCoreSceneSetupData___LoadTransformedBeatmapDataAsync_d__15;
}
namespace GlobalNamespace {
struct __RecordingToolManager__SetupData;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
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
namespace System::Threading::Tasks {
class Task;
}
namespace System {
template <typename T> struct Nullable_1;
}
// Forward declare root types
namespace GlobalNamespace {
class GameplayCoreSceneSetupData;
}
namespace GlobalNamespace {
struct __GameplayCoreSceneSetupData___GetTransformedBeatmapDataAsync_d__16;
}
namespace GlobalNamespace {
struct __GameplayCoreSceneSetupData___LoadTransformedBeatmapDataAsync_d__15;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GameplayCoreSceneSetupData);
MARK_VAL_T(::GlobalNamespace::__GameplayCoreSceneSetupData___GetTransformedBeatmapDataAsync_d__16);
MARK_VAL_T(::GlobalNamespace::__GameplayCoreSceneSetupData___LoadTransformedBeatmapDataAsync_d__15);
// Type: ::<LoadTransformedBeatmapDataAsync>d__15
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 890 }), TypeDefinitionIndex(TypeDefinitionIndex(3401)),
// TypeDefinitionIndex(TypeDefinitionIndex(3394)), TypeDefinitionIndex(TypeDefinitionIndex(4260))} Self: TypeDefinitionIndex(TypeDefinitionIndex(6050)) CS Name:
// ::GameplayCoreSceneSetupData::<LoadTransformedBeatmapDataAsync>d__15
struct CORDL_TYPE __GameplayCoreSceneSetupData___LoadTransformedBeatmapDataAsync_d__15 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  /// @brief Method MoveNext, addr 0x231c674, size 0x1c8, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x231c83c, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::GameplayCoreSceneSetupData*", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IReadonlyBeatmapData*>", modifiers: "", def_value: None }]
  constexpr __GameplayCoreSceneSetupData___LoadTransformedBeatmapDataAsync_d__15(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                                 ::GlobalNamespace::GameplayCoreSceneSetupData* __4__this,
                                                                                 ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IReadonlyBeatmapData*> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __GameplayCoreSceneSetupData___LoadTransformedBeatmapDataAsync_d__15();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::GameplayCoreSceneSetupData* __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IReadonlyBeatmapData*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GameplayCoreSceneSetupData___LoadTransformedBeatmapDataAsync_d__15, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameplayCoreSceneSetupData___LoadTransformedBeatmapDataAsync_d__15, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameplayCoreSceneSetupData___LoadTransformedBeatmapDataAsync_d__15, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameplayCoreSceneSetupData___LoadTransformedBeatmapDataAsync_d__15, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameplayCoreSceneSetupData___LoadTransformedBeatmapDataAsync_d__15, __u__1) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<GetTransformedBeatmapDataAsync>d__16
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3402), inst: 890 }), TypeDefinitionIndex(TypeDefinitionIndex(4260)),
// TypeDefinitionIndex(TypeDefinitionIndex(3402)), TypeDefinitionIndex(TypeDefinitionIndex(3394)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 890 })} Self:
// TypeDefinitionIndex(TypeDefinitionIndex(6051)) CS Name: ::GameplayCoreSceneSetupData::<GetTransformedBeatmapDataAsync>d__16
struct CORDL_TYPE __GameplayCoreSceneSetupData___GetTransformedBeatmapDataAsync_d__16 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  /// @brief Method MoveNext, addr 0x231c848, size 0x410, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x231cc58, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData*>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::GameplayCoreSceneSetupData*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IReadonlyBeatmapData*>", modifiers: "", def_value: None }]
  constexpr __GameplayCoreSceneSetupData___GetTransformedBeatmapDataAsync_d__16(int32_t __1__state,
                                                                                ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData*> __t__builder,
                                                                                ::GlobalNamespace::GameplayCoreSceneSetupData* __4__this,
                                                                                ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IReadonlyBeatmapData*> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __GameplayCoreSceneSetupData___GetTransformedBeatmapDataAsync_d__16();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData*> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::GameplayCoreSceneSetupData* __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IReadonlyBeatmapData*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GameplayCoreSceneSetupData___GetTransformedBeatmapDataAsync_d__16, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameplayCoreSceneSetupData___GetTransformedBeatmapDataAsync_d__16, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameplayCoreSceneSetupData___GetTransformedBeatmapDataAsync_d__16, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameplayCoreSceneSetupData___GetTransformedBeatmapDataAsync_d__16, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameplayCoreSceneSetupData___GetTransformedBeatmapDataAsync_d__16, __u__1) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::GameplayCoreSceneSetupData
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5962)), TypeDefinitionIndex(TypeDefinitionIndex(15408)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2448), inst:
// 4778 }), TypeDefinitionIndex(TypeDefinitionIndex(2448))} Self: TypeDefinitionIndex(TypeDefinitionIndex(6052)) CS Name: ::GameplayCoreSceneSetupData*
class CORDL_TYPE GameplayCoreSceneSetupData : public ::GlobalNamespace::SceneSetupData {
public:
  // Declarations
  using _GetTransformedBeatmapDataAsync_d__16 = ::GlobalNamespace::__GameplayCoreSceneSetupData___GetTransformedBeatmapDataAsync_d__16;

  using _LoadTransformedBeatmapDataAsync_d__15 = ::GlobalNamespace::__GameplayCoreSceneSetupData___LoadTransformedBeatmapDataAsync_d__15;

  /// @brief Field difficultyBeatmap, offset 0x10, size 0x8
  __declspec(property(get = __get_difficultyBeatmap, put = __set_difficultyBeatmap))::GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap;

  /// @brief Field previewBeatmapLevel, offset 0x18, size 0x8
  __declspec(property(get = __get_previewBeatmapLevel, put = __set_previewBeatmapLevel))::GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel;

  /// @brief Field gameplayModifiers, offset 0x20, size 0x8
  __declspec(property(get = __get_gameplayModifiers, put = __set_gameplayModifiers))::GlobalNamespace::GameplayModifiers* gameplayModifiers;

  /// @brief Field playerSpecificSettings, offset 0x28, size 0x8
  __declspec(property(get = __get_playerSpecificSettings, put = __set_playerSpecificSettings))::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings;

  /// @brief Field practiceSettings, offset 0x30, size 0x8
  __declspec(property(get = __get_practiceSettings, put = __set_practiceSettings))::GlobalNamespace::PracticeSettings* practiceSettings;

  /// @brief Field useTestNoteCutSoundEffects, offset 0x38, size 0x1
  __declspec(property(get = __get_useTestNoteCutSoundEffects, put = __set_useTestNoteCutSoundEffects)) bool useTestNoteCutSoundEffects;

  /// @brief Field environmentInfo, offset 0x40, size 0x8
  __declspec(property(get = __get_environmentInfo, put = __set_environmentInfo))::GlobalNamespace::EnvironmentInfoSO* environmentInfo;

  /// @brief Field colorScheme, offset 0x48, size 0x8
  __declspec(property(get = __get_colorScheme, put = __set_colorScheme))::GlobalNamespace::ColorScheme* colorScheme;

  /// @brief Field mainSettingsModel, offset 0x50, size 0x8
  __declspec(property(get = __get_mainSettingsModel, put = __set_mainSettingsModel))::GlobalNamespace::MainSettingsModelSO* mainSettingsModel;

  /// @brief Field beatmapDataCache, offset 0x58, size 0x8
  __declspec(property(get = __get_beatmapDataCache, put = __set_beatmapDataCache))::GlobalNamespace::BeatmapDataCache* beatmapDataCache;

  /// @brief Field recordingToolData, offset 0x60, size 0x3
  __declspec(property(get = __get_recordingToolData, put = __set_recordingToolData))::System::Nullable_1<::GlobalNamespace::__RecordingToolManager__SetupData> recordingToolData;

  /// @brief Field _transformedBeatmapData, offset 0x68, size 0x8
  __declspec(property(get = __get__transformedBeatmapData, put = __set__transformedBeatmapData))::GlobalNamespace::IReadonlyBeatmapData* _transformedBeatmapData;

  __declspec(property(get = get_transformedBeatmapData))::GlobalNamespace::IReadonlyBeatmapData* transformedBeatmapData;

  constexpr ::GlobalNamespace::IDifficultyBeatmap*& __get_difficultyBeatmap();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IDifficultyBeatmap*> const& __get_difficultyBeatmap() const;

  constexpr void __set_difficultyBeatmap(::GlobalNamespace::IDifficultyBeatmap* value);

  constexpr ::GlobalNamespace::IPreviewBeatmapLevel*& __get_previewBeatmapLevel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IPreviewBeatmapLevel*> const& __get_previewBeatmapLevel() const;

  constexpr void __set_previewBeatmapLevel(::GlobalNamespace::IPreviewBeatmapLevel* value);

  constexpr ::GlobalNamespace::GameplayModifiers*& __get_gameplayModifiers();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayModifiers*> const& __get_gameplayModifiers() const;

  constexpr void __set_gameplayModifiers(::GlobalNamespace::GameplayModifiers* value);

  constexpr ::GlobalNamespace::PlayerSpecificSettings*& __get_playerSpecificSettings();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerSpecificSettings*> const& __get_playerSpecificSettings() const;

  constexpr void __set_playerSpecificSettings(::GlobalNamespace::PlayerSpecificSettings* value);

  constexpr ::GlobalNamespace::PracticeSettings*& __get_practiceSettings();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PracticeSettings*> const& __get_practiceSettings() const;

  constexpr void __set_practiceSettings(::GlobalNamespace::PracticeSettings* value);

  constexpr bool& __get_useTestNoteCutSoundEffects();

  constexpr bool const& __get_useTestNoteCutSoundEffects() const;

  constexpr void __set_useTestNoteCutSoundEffects(bool value);

  constexpr ::GlobalNamespace::EnvironmentInfoSO*& __get_environmentInfo();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentInfoSO*> const& __get_environmentInfo() const;

  constexpr void __set_environmentInfo(::GlobalNamespace::EnvironmentInfoSO* value);

  constexpr ::GlobalNamespace::ColorScheme*& __get_colorScheme();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorScheme*> const& __get_colorScheme() const;

  constexpr void __set_colorScheme(::GlobalNamespace::ColorScheme* value);

  constexpr ::GlobalNamespace::MainSettingsModelSO*& __get_mainSettingsModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MainSettingsModelSO*> const& __get_mainSettingsModel() const;

  constexpr void __set_mainSettingsModel(::GlobalNamespace::MainSettingsModelSO* value);

  constexpr ::GlobalNamespace::BeatmapDataCache*& __get_beatmapDataCache();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCache*> const& __get_beatmapDataCache() const;

  constexpr void __set_beatmapDataCache(::GlobalNamespace::BeatmapDataCache* value);

  constexpr ::System::Nullable_1<::GlobalNamespace::__RecordingToolManager__SetupData>& __get_recordingToolData();

  constexpr ::System::Nullable_1<::GlobalNamespace::__RecordingToolManager__SetupData> const& __get_recordingToolData() const;

  constexpr void __set_recordingToolData(::System::Nullable_1<::GlobalNamespace::__RecordingToolManager__SetupData> value);

  constexpr ::GlobalNamespace::IReadonlyBeatmapData*& __get__transformedBeatmapData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IReadonlyBeatmapData*> const& __get__transformedBeatmapData() const;

  constexpr void __set__transformedBeatmapData(::GlobalNamespace::IReadonlyBeatmapData* value);

  /// @brief Method get_transformedBeatmapData, addr 0x231c414, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::IReadonlyBeatmapData* get_transformedBeatmapData();

  static inline ::GlobalNamespace::GameplayCoreSceneSetupData* New_ctor(::GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, ::GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel,
                                                                        ::GlobalNamespace::GameplayModifiers* gameplayModifiers, ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings,
                                                                        ::GlobalNamespace::PracticeSettings* practiceSettings, bool useTestNoteCutSoundEffects,
                                                                        ::GlobalNamespace::EnvironmentInfoSO* environmentInfo, ::GlobalNamespace::ColorScheme* colorScheme,
                                                                        ::GlobalNamespace::MainSettingsModelSO* mainSettingsModel, ::GlobalNamespace::BeatmapDataCache* beatmapDataCache,
                                                                        ::System::Nullable_1<::GlobalNamespace::__RecordingToolManager__SetupData> recordingToolData);

  /// @brief Method .ctor, addr 0x231c41c, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, ::GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel, ::GlobalNamespace::GameplayModifiers* gameplayModifiers,
                    ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, ::GlobalNamespace::PracticeSettings* practiceSettings, bool useTestNoteCutSoundEffects,
                    ::GlobalNamespace::EnvironmentInfoSO* environmentInfo, ::GlobalNamespace::ColorScheme* colorScheme, ::GlobalNamespace::MainSettingsModelSO* mainSettingsModel,
                    ::GlobalNamespace::BeatmapDataCache* beatmapDataCache, ::System::Nullable_1<::GlobalNamespace::__RecordingToolManager__SetupData> recordingToolData);

  /// @brief Method LoadTransformedBeatmapDataAsync, addr 0x231c4bc, size 0xc8, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* LoadTransformedBeatmapDataAsync();

  /// @brief Method GetTransformedBeatmapDataAsync, addr 0x231c584, size 0xf0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData*>* GetTransformedBeatmapDataAsync();

  // Ctor Parameters [CppParam { name: "", ty: "GameplayCoreSceneSetupData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameplayCoreSceneSetupData(GameplayCoreSceneSetupData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameplayCoreSceneSetupData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameplayCoreSceneSetupData(GameplayCoreSceneSetupData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameplayCoreSceneSetupData();

public:
  /// @brief Field difficultyBeatmap, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::IDifficultyBeatmap* ___difficultyBeatmap;

  /// @brief Field previewBeatmapLevel, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::IPreviewBeatmapLevel* ___previewBeatmapLevel;

  /// @brief Field gameplayModifiers, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::GameplayModifiers* ___gameplayModifiers;

  /// @brief Field playerSpecificSettings, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::PlayerSpecificSettings* ___playerSpecificSettings;

  /// @brief Field practiceSettings, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::PracticeSettings* ___practiceSettings;

  /// @brief Field useTestNoteCutSoundEffects, offset: 0x38, size: 0x1, def value: None
  bool ___useTestNoteCutSoundEffects;

  /// @brief Field environmentInfo, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::EnvironmentInfoSO* ___environmentInfo;

  /// @brief Field colorScheme, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::ColorScheme* ___colorScheme;

  /// @brief Field mainSettingsModel, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::MainSettingsModelSO* ___mainSettingsModel;

  /// @brief Field beatmapDataCache, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapDataCache* ___beatmapDataCache;

  /// @brief Field recordingToolData, offset: 0x60, size: 0x3, def value: None
  ::System::Nullable_1<::GlobalNamespace::__RecordingToolManager__SetupData> ___recordingToolData;

  /// @brief Field _transformedBeatmapData, offset: 0x68, size: 0x8, def value: None
  ::GlobalNamespace::IReadonlyBeatmapData* ____transformedBeatmapData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameplayCoreSceneSetupData, 0x70>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayCoreSceneSetupData, ___difficultyBeatmap) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayCoreSceneSetupData, ___previewBeatmapLevel) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayCoreSceneSetupData, ___gameplayModifiers) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayCoreSceneSetupData, ___playerSpecificSettings) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayCoreSceneSetupData, ___practiceSettings) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayCoreSceneSetupData, ___useTestNoteCutSoundEffects) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayCoreSceneSetupData, ___environmentInfo) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayCoreSceneSetupData, ___colorScheme) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayCoreSceneSetupData, ___mainSettingsModel) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayCoreSceneSetupData, ___beatmapDataCache) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayCoreSceneSetupData, ___recordingToolData) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayCoreSceneSetupData, ____transformedBeatmapData) == 0x68, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GameplayCoreSceneSetupData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameplayCoreSceneSetupData*, "", "GameplayCoreSceneSetupData");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GameplayCoreSceneSetupData___GetTransformedBeatmapDataAsync_d__16, "", "GameplayCoreSceneSetupData/<GetTransformedBeatmapDataAsync>d__16");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GameplayCoreSceneSetupData___LoadTransformedBeatmapDataAsync_d__15, "", "GameplayCoreSceneSetupData/<LoadTransformedBeatmapDataAsync>d__15");

#pragma once
// IWYU pragma private; include "GlobalNamespace\LevelScenesTransitionSetupData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ScenesTransitionSetupData_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LevelScenesTransitionSetupData)
namespace Analytics::Model {
class TelemetryModel;
}
namespace GlobalNamespace {
class GameplayAdditionalInformationSetupData;
}
namespace GlobalNamespace {
class GameplayCoreSceneSetupData;
}
namespace GlobalNamespace {
class IReadonlyBeatmapData;
}
namespace GlobalNamespace {
struct LevelScenesTransitionSetupData__BeforeScenesWillBeActivatedAsync_d__11;
}
namespace System::Diagnostics {
class Stopwatch;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
class Task;
}
// Forward declare root types
namespace GlobalNamespace {
class LevelScenesTransitionSetupData;
}
namespace GlobalNamespace {
struct LevelScenesTransitionSetupData__BeforeScenesWillBeActivatedAsync_d__11;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::LevelScenesTransitionSetupData*);
MARK_VAL_T(::GlobalNamespace::LevelScenesTransitionSetupData__BeforeScenesWillBeActivatedAsync_d__11);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LevelScenesTransitionSetupData*, "", "LevelScenesTransitionSetupData");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LevelScenesTransitionSetupData__BeforeScenesWillBeActivatedAsync_d__11, "", "LevelScenesTransitionSetupData/<BeforeScenesWillBeActivatedAsync>d__11");
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: LevelScenesTransitionSetupData/<BeforeScenesWillBeActivatedAsync>d__11
struct CORDL_TYPE LevelScenesTransitionSetupData__BeforeScenesWillBeActivatedAsync_d__11 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x590edb4, size 0x3f4, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x590f1a8, size 0x6c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr LevelScenesTransitionSetupData__BeforeScenesWillBeActivatedAsync_d__11();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::LevelScenesTransitionSetupData*", modifiers:
  // "", def_value: None }, CppParam { name: "_stopwatch_5__2", ty: "::System::Diagnostics::Stopwatch*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr LevelScenesTransitionSetupData__BeforeScenesWillBeActivatedAsync_d__11(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                                   ::GlobalNamespace::LevelScenesTransitionSetupData* __4__this, ::System::Diagnostics::Stopwatch* _stopwatch_5__2,
                                                                                   ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6739 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::LevelScenesTransitionSetupData* __4__this;

  /// @brief Field <stopwatch>5__2, offset: 0x28, size: 0x8, def value: None
  ::System::Diagnostics::Stopwatch* _stopwatch_5__2;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LevelScenesTransitionSetupData__BeforeScenesWillBeActivatedAsync_d__11, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelScenesTransitionSetupData__BeforeScenesWillBeActivatedAsync_d__11, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelScenesTransitionSetupData__BeforeScenesWillBeActivatedAsync_d__11, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelScenesTransitionSetupData__BeforeScenesWillBeActivatedAsync_d__11, _stopwatch_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelScenesTransitionSetupData__BeforeScenesWillBeActivatedAsync_d__11, __u__1) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LevelScenesTransitionSetupData__BeforeScenesWillBeActivatedAsync_d__11) == 0x38, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies ScenesTransitionSetupData
namespace GlobalNamespace {
// Is value type: false
// CS Name: LevelScenesTransitionSetupData
class CORDL_TYPE LevelScenesTransitionSetupData : public ::GlobalNamespace::ScenesTransitionSetupData {
public:
  // Declarations
  using _BeforeScenesWillBeActivatedAsync_d__11 = ::GlobalNamespace::LevelScenesTransitionSetupData__BeforeScenesWillBeActivatedAsync_d__11;

  /// @brief Field <gameplayAdditionalInformationSetupData>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__gameplayAdditionalInformationSetupData_k__BackingField,
                      put = __cordl_internal_set__gameplayAdditionalInformationSetupData_k__BackingField)) ::GlobalNamespace::GameplayAdditionalInformationSetupData*
      _gameplayAdditionalInformationSetupData_k__BackingField;

  /// @brief Field <gameplayCoreSceneSetupData>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__gameplayCoreSceneSetupData_k__BackingField,
                      put = __cordl_internal_set__gameplayCoreSceneSetupData_k__BackingField)) ::GlobalNamespace::GameplayCoreSceneSetupData* _gameplayCoreSceneSetupData_k__BackingField;

  /// @brief Field _telemetryModel, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__telemetryModel, put = __cordl_internal_set__telemetryModel)) ::Analytics::Model::TelemetryModel* _telemetryModel;

  __declspec(property(get = get_gameplayAdditionalInformationSetupData,
                      put = set_gameplayAdditionalInformationSetupData)) ::GlobalNamespace::GameplayAdditionalInformationSetupData* gameplayAdditionalInformationSetupData;

  __declspec(property(get = get_gameplayCoreSceneSetupData, put = set_gameplayCoreSceneSetupData)) ::GlobalNamespace::GameplayCoreSceneSetupData* gameplayCoreSceneSetupData;

  __declspec(property(get = get_transformedBeatmapData)) ::GlobalNamespace::IReadonlyBeatmapData* transformedBeatmapData;

  /// @brief Method BeforeScenesWillBeActivatedAsync, addr 0x590ecf0, size 0xb4, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* BeforeScenesWillBeActivatedAsync();

  static inline ::GlobalNamespace::LevelScenesTransitionSetupData* New_ctor();

  constexpr ::GlobalNamespace::GameplayAdditionalInformationSetupData* const& __cordl_internal_get__gameplayAdditionalInformationSetupData_k__BackingField() const;

  constexpr ::GlobalNamespace::GameplayAdditionalInformationSetupData*& __cordl_internal_get__gameplayAdditionalInformationSetupData_k__BackingField();

  constexpr ::GlobalNamespace::GameplayCoreSceneSetupData* const& __cordl_internal_get__gameplayCoreSceneSetupData_k__BackingField() const;

  constexpr ::GlobalNamespace::GameplayCoreSceneSetupData*& __cordl_internal_get__gameplayCoreSceneSetupData_k__BackingField();

  constexpr ::Analytics::Model::TelemetryModel* const& __cordl_internal_get__telemetryModel() const;

  constexpr ::Analytics::Model::TelemetryModel*& __cordl_internal_get__telemetryModel();

  constexpr void __cordl_internal_set__gameplayAdditionalInformationSetupData_k__BackingField(::GlobalNamespace::GameplayAdditionalInformationSetupData* value);

  constexpr void __cordl_internal_set__gameplayCoreSceneSetupData_k__BackingField(::GlobalNamespace::GameplayCoreSceneSetupData* value);

  constexpr void __cordl_internal_set__telemetryModel(::Analytics::Model::TelemetryModel* value);

  /// @brief Method <>n__0, addr 0x590edac, size 0x8, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* __n__0();

  /// @brief Method .ctor, addr 0x590eda4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_gameplayAdditionalInformationSetupData, addr 0x590ece0, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::GameplayAdditionalInformationSetupData* get_gameplayAdditionalInformationSetupData();

  /// @brief Method get_gameplayCoreSceneSetupData, addr 0x590ecd0, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::GameplayCoreSceneSetupData* get_gameplayCoreSceneSetupData();

  /// @brief Method get_transformedBeatmapData, addr 0x590ecb8, size 0x18, virtual false, abstract: false, final false
  inline ::GlobalNamespace::IReadonlyBeatmapData* get_transformedBeatmapData();

  /// @brief Method set_gameplayAdditionalInformationSetupData, addr 0x590ece8, size 0x8, virtual false, abstract: false, final false
  inline void set_gameplayAdditionalInformationSetupData(::GlobalNamespace::GameplayAdditionalInformationSetupData* value);

  /// @brief Method set_gameplayCoreSceneSetupData, addr 0x590ecd8, size 0x8, virtual false, abstract: false, final false
  inline void set_gameplayCoreSceneSetupData(::GlobalNamespace::GameplayCoreSceneSetupData* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LevelScenesTransitionSetupData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LevelScenesTransitionSetupData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LevelScenesTransitionSetupData(LevelScenesTransitionSetupData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LevelScenesTransitionSetupData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LevelScenesTransitionSetupData(LevelScenesTransitionSetupData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6740 };

  /// @brief Field _telemetryModel, offset: 0x20, size: 0x8, def value: None
  ::Analytics::Model::TelemetryModel* ____telemetryModel;

  /// @brief Field <gameplayCoreSceneSetupData>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::GameplayCoreSceneSetupData* ____gameplayCoreSceneSetupData_k__BackingField;

  /// @brief Field <gameplayAdditionalInformationSetupData>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::GameplayAdditionalInformationSetupData* ____gameplayAdditionalInformationSetupData_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LevelScenesTransitionSetupData, ____telemetryModel) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelScenesTransitionSetupData, ____gameplayCoreSceneSetupData_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelScenesTransitionSetupData, ____gameplayAdditionalInformationSetupData_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LevelScenesTransitionSetupData) == 0x38, "Size mismatch!");

} // namespace GlobalNamespace

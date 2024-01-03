#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ScenesTransitionSetupDataSO_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LevelScenesTransitionSetupDataSO)
namespace GlobalNamespace {
class GameplayCoreSceneSetupData;
}
namespace GlobalNamespace {
class IReadonlyBeatmapData;
}
namespace GlobalNamespace {
struct __LevelScenesTransitionSetupDataSO___BeforeScenesWillBeActivatedAsync_d__6;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
struct TaskAwaiter;
}
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
// Forward declare root types
namespace GlobalNamespace {
class LevelScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
struct __LevelScenesTransitionSetupDataSO___BeforeScenesWillBeActivatedAsync_d__6;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LevelScenesTransitionSetupDataSO);
MARK_VAL_T(::GlobalNamespace::__LevelScenesTransitionSetupDataSO___BeforeScenesWillBeActivatedAsync_d__6);
// Type: ::<BeforeScenesWillBeActivatedAsync>d__6
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3393)), TypeDefinitionIndex(TypeDefinitionIndex(3401))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6066))
// CS Name: ::LevelScenesTransitionSetupDataSO::<BeforeScenesWillBeActivatedAsync>d__6
struct CORDL_TYPE __LevelScenesTransitionSetupDataSO___BeforeScenesWillBeActivatedAsync_d__6 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x231de40, size 0x188, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x231dfc8, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::LevelScenesTransitionSetupDataSO*",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr __LevelScenesTransitionSetupDataSO___BeforeScenesWillBeActivatedAsync_d__6(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                                       ::GlobalNamespace::LevelScenesTransitionSetupDataSO* __4__this,
                                                                                       ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __LevelScenesTransitionSetupDataSO___BeforeScenesWillBeActivatedAsync_d__6();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::LevelScenesTransitionSetupDataSO* __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LevelScenesTransitionSetupDataSO___BeforeScenesWillBeActivatedAsync_d__6, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelScenesTransitionSetupDataSO___BeforeScenesWillBeActivatedAsync_d__6, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelScenesTransitionSetupDataSO___BeforeScenesWillBeActivatedAsync_d__6, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelScenesTransitionSetupDataSO___BeforeScenesWillBeActivatedAsync_d__6, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelScenesTransitionSetupDataSO___BeforeScenesWillBeActivatedAsync_d__6, __u__1) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::LevelScenesTransitionSetupDataSO
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15417))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6067))
// CS Name: ::LevelScenesTransitionSetupDataSO*
class CORDL_TYPE LevelScenesTransitionSetupDataSO : public ::GlobalNamespace::ScenesTransitionSetupDataSO {
public:
  // Declarations
  using _BeforeScenesWillBeActivatedAsync_d__6 = ::GlobalNamespace::__LevelScenesTransitionSetupDataSO___BeforeScenesWillBeActivatedAsync_d__6;

  /// @brief Field <gameplayCoreSceneSetupData>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __get__gameplayCoreSceneSetupData_k__BackingField,
                      put = __set__gameplayCoreSceneSetupData_k__BackingField))::GlobalNamespace::GameplayCoreSceneSetupData* _gameplayCoreSceneSetupData_k__BackingField;

  __declspec(property(get = get_transformedBeatmapData))::GlobalNamespace::IReadonlyBeatmapData* transformedBeatmapData;

  __declspec(property(get = get_gameplayCoreSceneSetupData, put = set_gameplayCoreSceneSetupData))::GlobalNamespace::GameplayCoreSceneSetupData* gameplayCoreSceneSetupData;

  constexpr ::GlobalNamespace::GameplayCoreSceneSetupData*& __get__gameplayCoreSceneSetupData_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayCoreSceneSetupData*> const& __get__gameplayCoreSceneSetupData_k__BackingField() const;

  constexpr void __set__gameplayCoreSceneSetupData_k__BackingField(::GlobalNamespace::GameplayCoreSceneSetupData* value);

  /// @brief Method get_transformedBeatmapData, addr 0x231dd44, size 0x1c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::IReadonlyBeatmapData* get_transformedBeatmapData();

  /// @brief Method get_gameplayCoreSceneSetupData, addr 0x231dd60, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::GameplayCoreSceneSetupData* get_gameplayCoreSceneSetupData();

  /// @brief Method set_gameplayCoreSceneSetupData, addr 0x231dd68, size 0x8, virtual false, abstract: false, final false
  inline void set_gameplayCoreSceneSetupData(::GlobalNamespace::GameplayCoreSceneSetupData* value);

  /// @brief Method BeforeScenesWillBeActivatedAsync, addr 0x231dd70, size 0xc8, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* BeforeScenesWillBeActivatedAsync();

  static inline ::GlobalNamespace::LevelScenesTransitionSetupDataSO* New_ctor();

  /// @brief Method .ctor, addr 0x231de38, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "LevelScenesTransitionSetupDataSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LevelScenesTransitionSetupDataSO(LevelScenesTransitionSetupDataSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LevelScenesTransitionSetupDataSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LevelScenesTransitionSetupDataSO(LevelScenesTransitionSetupDataSO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LevelScenesTransitionSetupDataSO();

public:
  /// @brief Field <gameplayCoreSceneSetupData>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::GameplayCoreSceneSetupData* ____gameplayCoreSceneSetupData_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LevelScenesTransitionSetupDataSO, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelScenesTransitionSetupDataSO, ____gameplayCoreSceneSetupData_k__BackingField) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LevelScenesTransitionSetupDataSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LevelScenesTransitionSetupDataSO*, "", "LevelScenesTransitionSetupDataSO");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LevelScenesTransitionSetupDataSO___BeforeScenesWillBeActivatedAsync_d__6, "", "LevelScenesTransitionSetupDataSO/<BeforeScenesWillBeActivatedAsync>d__6");

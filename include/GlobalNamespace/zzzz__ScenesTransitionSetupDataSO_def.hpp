#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ScenesTransitionSetupDataSO)
namespace GlobalNamespace {
class SceneInfo;
}
namespace GlobalNamespace {
class SceneSetupData;
}
namespace GlobalNamespace {
struct __ScenesTransitionSetupDataSO___BeforeScenesWillBeActivated_d__10;
}
namespace GlobalNamespace {
struct __ScenesTransitionSetupDataSO____BeforeScenesWillBeActivated_b__10_0_d;
}
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
struct TaskAwaiter;
}
namespace System::Threading::Tasks {
class Task;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace GlobalNamespace {
class ScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
struct __ScenesTransitionSetupDataSO___BeforeScenesWillBeActivated_d__10;
}
namespace GlobalNamespace {
struct __ScenesTransitionSetupDataSO____BeforeScenesWillBeActivated_b__10_0_d;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ScenesTransitionSetupDataSO);
MARK_VAL_T(::GlobalNamespace::__ScenesTransitionSetupDataSO___BeforeScenesWillBeActivated_d__10);
MARK_VAL_T(::GlobalNamespace::__ScenesTransitionSetupDataSO____BeforeScenesWillBeActivated_b__10_0_d);
// Type: ::<BeforeScenesWillBeActivated>d__10
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3400)), TypeDefinitionIndex(TypeDefinitionIndex(3393))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15415))
// CS Name: ::ScenesTransitionSetupDataSO::<BeforeScenesWillBeActivated>d__10
struct CORDL_TYPE __ScenesTransitionSetupDataSO___BeforeScenesWillBeActivated_d__10 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  /// @brief Method MoveNext, addr 0xe2383c, size 0x250, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0xe23a8c, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::ScenesTransitionSetupDataSO*", modifiers:
  // "", def_value: None }, CppParam { name: "runAsync", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "",
  // def_value: None }]
  constexpr __ScenesTransitionSetupDataSO___BeforeScenesWillBeActivated_d__10(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                              ::GlobalNamespace::ScenesTransitionSetupDataSO* __4__this, bool runAsync,
                                                                              ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ScenesTransitionSetupDataSO___BeforeScenesWillBeActivated_d__10();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::ScenesTransitionSetupDataSO* __4__this;

  /// @brief Field runAsync, offset: 0x30, size: 0x1, def value: None
  bool runAsync;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ScenesTransitionSetupDataSO___BeforeScenesWillBeActivated_d__10, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__ScenesTransitionSetupDataSO___BeforeScenesWillBeActivated_d__10, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ScenesTransitionSetupDataSO___BeforeScenesWillBeActivated_d__10, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ScenesTransitionSetupDataSO___BeforeScenesWillBeActivated_d__10, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ScenesTransitionSetupDataSO___BeforeScenesWillBeActivated_d__10, runAsync) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ScenesTransitionSetupDataSO___BeforeScenesWillBeActivated_d__10, __u__1) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<<BeforeScenesWillBeActivated>b__10_0>d
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3401)), TypeDefinitionIndex(TypeDefinitionIndex(3393))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15416))
// CS Name: ::ScenesTransitionSetupDataSO::<<BeforeScenesWillBeActivated>b__10_0>d
struct CORDL_TYPE __ScenesTransitionSetupDataSO____BeforeScenesWillBeActivated_b__10_0_d {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  /// @brief Method MoveNext, addr 0xe23a98, size 0x180, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0xe23c18, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::ScenesTransitionSetupDataSO*", modifiers:
  // "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr __ScenesTransitionSetupDataSO____BeforeScenesWillBeActivated_b__10_0_d(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                                   ::GlobalNamespace::ScenesTransitionSetupDataSO* __4__this,
                                                                                   ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ScenesTransitionSetupDataSO____BeforeScenesWillBeActivated_b__10_0_d();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::ScenesTransitionSetupDataSO* __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ScenesTransitionSetupDataSO____BeforeScenesWillBeActivated_b__10_0_d, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__ScenesTransitionSetupDataSO____BeforeScenesWillBeActivated_b__10_0_d, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ScenesTransitionSetupDataSO____BeforeScenesWillBeActivated_b__10_0_d, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ScenesTransitionSetupDataSO____BeforeScenesWillBeActivated_b__10_0_d, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ScenesTransitionSetupDataSO____BeforeScenesWillBeActivated_b__10_0_d, __u__1) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::ScenesTransitionSetupDataSO
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 41, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15857))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15417))
// CS Name: ::ScenesTransitionSetupDataSO*
class CORDL_TYPE ScenesTransitionSetupDataSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  using __BeforeScenesWillBeActivated_b__10_0_d = ::GlobalNamespace::__ScenesTransitionSetupDataSO____BeforeScenesWillBeActivated_b__10_0_d;

  using _BeforeScenesWillBeActivated_d__10 = ::GlobalNamespace::__ScenesTransitionSetupDataSO___BeforeScenesWillBeActivated_d__10;

  /// @brief Field <scenes>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __get__scenes_k__BackingField,
                      put = __set__scenes_k__BackingField))::ArrayW<::GlobalNamespace::SceneInfo*, ::Array<::GlobalNamespace::SceneInfo*>*> _scenes_k__BackingField;

  /// @brief Field _sceneSetupDataArray, offset 0x20, size 0x8
  __declspec(property(get = __get__sceneSetupDataArray,
                      put = __set__sceneSetupDataArray))::ArrayW<::GlobalNamespace::SceneSetupData*, ::Array<::GlobalNamespace::SceneSetupData*>*> _sceneSetupDataArray;

  /// @brief Field <beforeScenesWillBeActivatedTaskIsComplete>k__BackingField, offset 0x28, size 0x1
  __declspec(property(get = __get__beforeScenesWillBeActivatedTaskIsComplete_k__BackingField,
                      put = __set__beforeScenesWillBeActivatedTaskIsComplete_k__BackingField)) bool _beforeScenesWillBeActivatedTaskIsComplete_k__BackingField;

  __declspec(property(get = get_scenes, put = set_scenes))::ArrayW<::GlobalNamespace::SceneInfo*, ::Array<::GlobalNamespace::SceneInfo*>*> scenes;

  __declspec(property(get = get_beforeScenesWillBeActivatedTaskIsComplete, put = set_beforeScenesWillBeActivatedTaskIsComplete)) bool beforeScenesWillBeActivatedTaskIsComplete;

  constexpr ::ArrayW<::GlobalNamespace::SceneInfo*, ::Array<::GlobalNamespace::SceneInfo*>*>& __get__scenes_k__BackingField();

  constexpr ::ArrayW<::GlobalNamespace::SceneInfo*, ::Array<::GlobalNamespace::SceneInfo*>*> const& __get__scenes_k__BackingField() const;

  constexpr void __set__scenes_k__BackingField(::ArrayW<::GlobalNamespace::SceneInfo*, ::Array<::GlobalNamespace::SceneInfo*>*> value);

  constexpr ::ArrayW<::GlobalNamespace::SceneSetupData*, ::Array<::GlobalNamespace::SceneSetupData*>*>& __get__sceneSetupDataArray();

  constexpr ::ArrayW<::GlobalNamespace::SceneSetupData*, ::Array<::GlobalNamespace::SceneSetupData*>*> const& __get__sceneSetupDataArray() const;

  constexpr void __set__sceneSetupDataArray(::ArrayW<::GlobalNamespace::SceneSetupData*, ::Array<::GlobalNamespace::SceneSetupData*>*> value);

  constexpr bool& __get__beforeScenesWillBeActivatedTaskIsComplete_k__BackingField();

  constexpr bool const& __get__beforeScenesWillBeActivatedTaskIsComplete_k__BackingField() const;

  constexpr void __set__beforeScenesWillBeActivatedTaskIsComplete_k__BackingField(bool value);

  /// @brief Method get_scenes, addr 0xe236c8, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::SceneInfo*, ::Array<::GlobalNamespace::SceneInfo*>*> get_scenes();

  /// @brief Method set_scenes, addr 0xe236d0, size 0x8, virtual false, abstract: false, final false
  inline void set_scenes(::ArrayW<::GlobalNamespace::SceneInfo*, ::Array<::GlobalNamespace::SceneInfo*>*> value);

  /// @brief Method get_beforeScenesWillBeActivatedTaskIsComplete, addr 0xe236d8, size 0x8, virtual false, abstract: false, final false
  inline bool get_beforeScenesWillBeActivatedTaskIsComplete();

  /// @brief Method set_beforeScenesWillBeActivatedTaskIsComplete, addr 0xe236e0, size 0xc, virtual false, abstract: false, final false
  inline void set_beforeScenesWillBeActivatedTaskIsComplete(bool value);

  /// @brief Method Init, addr 0xe23694, size 0xc, virtual false, abstract: false, final false
  inline void Init(::ArrayW<::GlobalNamespace::SceneInfo*, ::Array<::GlobalNamespace::SceneInfo*>*> scenes,
                   ::ArrayW<::GlobalNamespace::SceneSetupData*, ::Array<::GlobalNamespace::SceneSetupData*>*> sceneSetupData);

  /// @brief Method BeforeScenesWillBeActivated, addr 0xe23270, size 0xa0, virtual false, abstract: false, final false
  inline void BeforeScenesWillBeActivated(bool runAsync);

  /// @brief Method BeforeScenesWillBeActivatedAsync, addr 0xe236ec, size 0x88, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* BeforeScenesWillBeActivatedAsync();

  /// @brief Method InstallBindings, addr 0xe21a98, size 0x12c, virtual false, abstract: false, final false
  inline void InstallBindings(::Zenject::DiContainer* container);

  static inline ::GlobalNamespace::ScenesTransitionSetupDataSO* New_ctor();

  /// @brief Method .ctor, addr 0xe236a8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <BeforeScenesWillBeActivated>b__10_0, addr 0xe23774, size 0xc8, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* _BeforeScenesWillBeActivated_b__10_0();

  // Ctor Parameters [CppParam { name: "", ty: "ScenesTransitionSetupDataSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScenesTransitionSetupDataSO(ScenesTransitionSetupDataSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScenesTransitionSetupDataSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScenesTransitionSetupDataSO(ScenesTransitionSetupDataSO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScenesTransitionSetupDataSO();

public:
  /// @brief Field <scenes>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::SceneInfo*, ::Array<::GlobalNamespace::SceneInfo*>*> ____scenes_k__BackingField;

  /// @brief Field _sceneSetupDataArray, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::SceneSetupData*, ::Array<::GlobalNamespace::SceneSetupData*>*> ____sceneSetupDataArray;

  /// @brief Field <beforeScenesWillBeActivatedTaskIsComplete>k__BackingField, offset: 0x28, size: 0x1, def value: None
  bool ____beforeScenesWillBeActivatedTaskIsComplete_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ScenesTransitionSetupDataSO, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ScenesTransitionSetupDataSO, ____scenes_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScenesTransitionSetupDataSO, ____sceneSetupDataArray) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScenesTransitionSetupDataSO, ____beforeScenesWillBeActivatedTaskIsComplete_k__BackingField) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ScenesTransitionSetupDataSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ScenesTransitionSetupDataSO*, "", "ScenesTransitionSetupDataSO");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ScenesTransitionSetupDataSO___BeforeScenesWillBeActivated_d__10, "", "ScenesTransitionSetupDataSO/<BeforeScenesWillBeActivated>d__10");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ScenesTransitionSetupDataSO____BeforeScenesWillBeActivated_b__10_0_d, "", "ScenesTransitionSetupDataSO/<<BeforeScenesWillBeActivated>b__10_0>d");

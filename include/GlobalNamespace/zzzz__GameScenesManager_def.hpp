#pragma once
// IWYU pragma private; include "GlobalNamespace/GameScenesManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__SceneInstance_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GameScenesManager)
namespace GlobalNamespace {
struct GameScenesManager_SceneDismissType;
}
namespace GlobalNamespace {
struct GameScenesManager_ScenePresentType;
}
namespace GlobalNamespace {
struct GameScenesManager_SceneTransitionType;
}
namespace GlobalNamespace {
class GameScenesManager_ScenesStackData;
}
namespace GlobalNamespace {
class GameScenesManager__LoadOneScene_d__55;
}
namespace GlobalNamespace {
class GameScenesManager__ScenesTransitionCoroutine_d__57;
}
namespace GlobalNamespace {
class GameScenesManager__UnloadOneScene_d__56;
}
namespace GlobalNamespace {
class GameScenesManager__WaitUntilTaskCompleted_d__60;
}
namespace GlobalNamespace {
class GameScenesManager___c__DisplayClass43_0;
}
namespace GlobalNamespace {
class GameScenesManager___c__DisplayClass44_0;
}
namespace GlobalNamespace {
class GameScenesManager___c__DisplayClass45_0;
}
namespace GlobalNamespace {
class GameScenesManager___c__DisplayClass46_0;
}
namespace GlobalNamespace {
class GameScenesManager___c__DisplayClass47_0;
}
namespace GlobalNamespace {
class GameScenesManager___c__DisplayClass48_0;
}
namespace GlobalNamespace {
class GameScenesManager___c__DisplayClass49_0;
}
namespace GlobalNamespace {
class GameScenesManager___c__DisplayClass50_0;
}
namespace GlobalNamespace {
class GameScenesManager___c__DisplayClass51_0;
}
namespace GlobalNamespace {
class GameScenesManager___c__DisplayClass52_0;
}
namespace GlobalNamespace {
class GameScenesManager___c__DisplayClass60_0;
}
namespace GlobalNamespace {
class ScenesTransitionSetupDataSO;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Threading::Tasks {
template <typename TResult> class TaskCompletionSource_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
template <typename T1, typename T2, typename T3> class Action_3;
}
namespace System {
class Action;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine::EventSystems {
class EventSystem;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template <typename TObject> struct AsyncOperationHandle_1;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
struct SceneInstance;
}
namespace UnityEngine {
class WaitUntil;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class ZenjectSceneLoader;
}
// Forward declare root types
namespace GlobalNamespace {
struct GameScenesManager_SceneDismissType;
}
namespace GlobalNamespace {
struct GameScenesManager_ScenePresentType;
}
namespace GlobalNamespace {
struct GameScenesManager_SceneTransitionType;
}
namespace GlobalNamespace {
class GameScenesManager;
}
namespace GlobalNamespace {
class GameScenesManager_ScenesStackData;
}
namespace GlobalNamespace {
class GameScenesManager__LoadOneScene_d__55;
}
namespace GlobalNamespace {
class GameScenesManager__ScenesTransitionCoroutine_d__57;
}
namespace GlobalNamespace {
class GameScenesManager__UnloadOneScene_d__56;
}
namespace GlobalNamespace {
class GameScenesManager__WaitUntilTaskCompleted_d__60;
}
namespace GlobalNamespace {
class GameScenesManager___c__DisplayClass43_0;
}
namespace GlobalNamespace {
class GameScenesManager___c__DisplayClass44_0;
}
namespace GlobalNamespace {
class GameScenesManager___c__DisplayClass45_0;
}
namespace GlobalNamespace {
class GameScenesManager___c__DisplayClass46_0;
}
namespace GlobalNamespace {
class GameScenesManager___c__DisplayClass47_0;
}
namespace GlobalNamespace {
class GameScenesManager___c__DisplayClass48_0;
}
namespace GlobalNamespace {
class GameScenesManager___c__DisplayClass49_0;
}
namespace GlobalNamespace {
class GameScenesManager___c__DisplayClass50_0;
}
namespace GlobalNamespace {
class GameScenesManager___c__DisplayClass51_0;
}
namespace GlobalNamespace {
class GameScenesManager___c__DisplayClass52_0;
}
namespace GlobalNamespace {
class GameScenesManager___c__DisplayClass60_0;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GameScenesManager_SceneDismissType);
MARK_VAL_T(::GlobalNamespace::GameScenesManager_ScenePresentType);
MARK_VAL_T(::GlobalNamespace::GameScenesManager_SceneTransitionType);
MARK_REF_PTR_T(::GlobalNamespace::GameScenesManager);
MARK_REF_PTR_T(::GlobalNamespace::GameScenesManager_ScenesStackData);
MARK_REF_PTR_T(::GlobalNamespace::GameScenesManager__LoadOneScene_d__55);
MARK_REF_PTR_T(::GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__57);
MARK_REF_PTR_T(::GlobalNamespace::GameScenesManager__UnloadOneScene_d__56);
MARK_REF_PTR_T(::GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__60);
MARK_REF_PTR_T(::GlobalNamespace::GameScenesManager___c__DisplayClass43_0);
MARK_REF_PTR_T(::GlobalNamespace::GameScenesManager___c__DisplayClass44_0);
MARK_REF_PTR_T(::GlobalNamespace::GameScenesManager___c__DisplayClass45_0);
MARK_REF_PTR_T(::GlobalNamespace::GameScenesManager___c__DisplayClass46_0);
MARK_REF_PTR_T(::GlobalNamespace::GameScenesManager___c__DisplayClass47_0);
MARK_REF_PTR_T(::GlobalNamespace::GameScenesManager___c__DisplayClass48_0);
MARK_REF_PTR_T(::GlobalNamespace::GameScenesManager___c__DisplayClass49_0);
MARK_REF_PTR_T(::GlobalNamespace::GameScenesManager___c__DisplayClass50_0);
MARK_REF_PTR_T(::GlobalNamespace::GameScenesManager___c__DisplayClass51_0);
MARK_REF_PTR_T(::GlobalNamespace::GameScenesManager___c__DisplayClass52_0);
MARK_REF_PTR_T(::GlobalNamespace::GameScenesManager___c__DisplayClass60_0);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: GameScenesManager/SceneTransitionType
struct CORDL_TYPE GameScenesManager_SceneTransitionType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __GameScenesManager_SceneTransitionType_Unwrapped
  enum struct __GameScenesManager_SceneTransitionType_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Push = static_cast<int32_t>(0x1),
    __E_Pop = static_cast<int32_t>(0x2),
    __E_Replace = static_cast<int32_t>(0x3),
    __E_ClearAndOpen = static_cast<int32_t>(0x4),
    __E_Append = static_cast<int32_t>(0x5),
    __E_Activate = static_cast<int32_t>(0x6),
    __E_Remove = static_cast<int32_t>(0x7),
    __E_Deactivate = static_cast<int32_t>(0x8),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __GameScenesManager_SceneTransitionType_Unwrapped() const noexcept {
    return static_cast<__GameScenesManager_SceneTransitionType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr GameScenesManager_SceneTransitionType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr GameScenesManager_SceneTransitionType(int32_t value__) noexcept;

  /// @brief Field Activate value: I32(6)
  static ::GlobalNamespace::GameScenesManager_SceneTransitionType const Activate;

  /// @brief Field Append value: I32(5)
  static ::GlobalNamespace::GameScenesManager_SceneTransitionType const Append;

  /// @brief Field ClearAndOpen value: I32(4)
  static ::GlobalNamespace::GameScenesManager_SceneTransitionType const ClearAndOpen;

  /// @brief Field Deactivate value: I32(8)
  static ::GlobalNamespace::GameScenesManager_SceneTransitionType const Deactivate;

  /// @brief Field None value: I32(0)
  static ::GlobalNamespace::GameScenesManager_SceneTransitionType const None;

  /// @brief Field Pop value: I32(2)
  static ::GlobalNamespace::GameScenesManager_SceneTransitionType const Pop;

  /// @brief Field Push value: I32(1)
  static ::GlobalNamespace::GameScenesManager_SceneTransitionType const Push;

  /// @brief Field Remove value: I32(7)
  static ::GlobalNamespace::GameScenesManager_SceneTransitionType const Remove;

  /// @brief Field Replace value: I32(3)
  static ::GlobalNamespace::GameScenesManager_SceneTransitionType const Replace;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21319 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameScenesManager_SceneTransitionType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameScenesManager_SceneTransitionType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameScenesManager/ScenesStackData
class CORDL_TYPE GameScenesManager_ScenesStackData : public ::System::Object {
public:
  // Declarations
  /// @brief Field <container>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__container_k__BackingField, put = __cordl_internal_set__container_k__BackingField)) ::Zenject::DiContainer* _container_k__BackingField;

  __declspec(property(get = get_container, put = set_container)) ::Zenject::DiContainer* container;

  /// @brief Field sceneNames, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_sceneNames, put = __cordl_internal_set_sceneNames)) ::System::Collections::Generic::List_1<::StringW>* sceneNames;

  static inline ::GlobalNamespace::GameScenesManager_ScenesStackData* New_ctor(::System::Collections::Generic::IEnumerable_1<::StringW>* sceneNames);

  /// @brief Method SetDiContainer, addr 0x31deab4, size 0x8, virtual false, abstract: false, final false
  inline void SetDiContainer(::Zenject::DiContainer* container);

  constexpr ::Zenject::DiContainer* const& __cordl_internal_get__container_k__BackingField() const;

  constexpr ::Zenject::DiContainer*& __cordl_internal_get__container_k__BackingField();

  constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_sceneNames() const;

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_sceneNames();

  constexpr void __cordl_internal_set__container_k__BackingField(::Zenject::DiContainer* value);

  constexpr void __cordl_internal_set_sceneNames(::System::Collections::Generic::List_1<::StringW>* value);

  /// @brief Method .ctor, addr 0x31db1d8, size 0x60, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IEnumerable_1<::StringW>* sceneNames);

  /// @brief Method get_container, addr 0x31deaa4, size 0x8, virtual false, abstract: false, final false
  inline ::Zenject::DiContainer* get_container();

  /// @brief Method set_container, addr 0x31deaac, size 0x8, virtual false, abstract: false, final false
  inline void set_container(::Zenject::DiContainer* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameScenesManager_ScenesStackData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameScenesManager_ScenesStackData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameScenesManager_ScenesStackData(GameScenesManager_ScenesStackData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameScenesManager_ScenesStackData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameScenesManager_ScenesStackData(GameScenesManager_ScenesStackData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21320 };

  /// @brief Field sceneNames, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ___sceneNames;

  /// @brief Field <container>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::Zenject::DiContainer* ____container_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameScenesManager_ScenesStackData, ___sceneNames) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameScenesManager_ScenesStackData, ____container_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameScenesManager_ScenesStackData, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: GameScenesManager/ScenePresentType
struct CORDL_TYPE GameScenesManager_ScenePresentType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __GameScenesManager_ScenePresentType_Unwrapped
  enum struct __GameScenesManager_ScenePresentType_Unwrapped : int32_t {
    __E_DoNotLoad = static_cast<int32_t>(0x0),
    __E_Load = static_cast<int32_t>(0x1),
    __E_LoadAndDoNotActivate = static_cast<int32_t>(0x2),
    __E_Activate = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __GameScenesManager_ScenePresentType_Unwrapped() const noexcept {
    return static_cast<__GameScenesManager_ScenePresentType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr GameScenesManager_ScenePresentType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr GameScenesManager_ScenePresentType(int32_t value__) noexcept;

  /// @brief Field Activate value: I32(3)
  static ::GlobalNamespace::GameScenesManager_ScenePresentType const Activate;

  /// @brief Field DoNotLoad value: I32(0)
  static ::GlobalNamespace::GameScenesManager_ScenePresentType const DoNotLoad;

  /// @brief Field Load value: I32(1)
  static ::GlobalNamespace::GameScenesManager_ScenePresentType const Load;

  /// @brief Field LoadAndDoNotActivate value: I32(2)
  static ::GlobalNamespace::GameScenesManager_ScenePresentType const LoadAndDoNotActivate;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21321 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameScenesManager_ScenePresentType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameScenesManager_ScenePresentType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: GameScenesManager/SceneDismissType
struct CORDL_TYPE GameScenesManager_SceneDismissType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __GameScenesManager_SceneDismissType_Unwrapped
  enum struct __GameScenesManager_SceneDismissType_Unwrapped : int32_t {
    __E_DoNotUnload = static_cast<int32_t>(0x0),
    __E_Unload = static_cast<int32_t>(0x1),
    __E_Deactivate = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __GameScenesManager_SceneDismissType_Unwrapped() const noexcept {
    return static_cast<__GameScenesManager_SceneDismissType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr GameScenesManager_SceneDismissType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr GameScenesManager_SceneDismissType(int32_t value__) noexcept;

  /// @brief Field Deactivate value: I32(2)
  static ::GlobalNamespace::GameScenesManager_SceneDismissType const Deactivate;

  /// @brief Field DoNotUnload value: I32(0)
  static ::GlobalNamespace::GameScenesManager_SceneDismissType const DoNotUnload;

  /// @brief Field Unload value: I32(1)
  static ::GlobalNamespace::GameScenesManager_SceneDismissType const Unload;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21322 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameScenesManager_SceneDismissType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameScenesManager_SceneDismissType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameScenesManager/<>c__DisplayClass43_0
class CORDL_TYPE GameScenesManager___c__DisplayClass43_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field tcs, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_tcs, put = __cordl_internal_set_tcs)) ::System::Threading::Tasks::TaskCompletionSource_1<bool>* tcs;

  static inline ::GlobalNamespace::GameScenesManager___c__DisplayClass43_0* New_ctor();

  /// @brief Method <PushScenesAsync>b__0, addr 0x31deabc, size 0x58, virtual false, abstract: false, final false
  inline void _PushScenesAsync_b__0(::Zenject::DiContainer* _);

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>* const& __cordl_internal_get_tcs() const;

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>*& __cordl_internal_get_tcs();

  constexpr void __cordl_internal_set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<bool>* value);

  /// @brief Method .ctor, addr 0x31db6c4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameScenesManager___c__DisplayClass43_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameScenesManager___c__DisplayClass43_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameScenesManager___c__DisplayClass43_0(GameScenesManager___c__DisplayClass43_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameScenesManager___c__DisplayClass43_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameScenesManager___c__DisplayClass43_0(GameScenesManager___c__DisplayClass43_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21323 };

  /// @brief Field tcs, offset: 0x10, size: 0x8, def value: None
  ::System::Threading::Tasks::TaskCompletionSource_1<bool>* ___tcs;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameScenesManager___c__DisplayClass43_0, ___tcs) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameScenesManager___c__DisplayClass43_0, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameScenesManager/<>c__DisplayClass44_0
class CORDL_TYPE GameScenesManager___c__DisplayClass44_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::GameScenesManager> __4__this;

  /// @brief Field finishCallback, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_finishCallback, put = __cordl_internal_set_finishCallback)) ::System::Action_1<::Zenject::DiContainer*>* finishCallback;

  /// @brief Field scenesStackData, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_scenesStackData, put = __cordl_internal_set_scenesStackData)) ::GlobalNamespace::GameScenesManager_ScenesStackData* scenesStackData;

  /// @brief Field scenesTransitionSetupData, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_scenesTransitionSetupData, put = __cordl_internal_set_scenesTransitionSetupData)) ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO>
      scenesTransitionSetupData;

  static inline ::GlobalNamespace::GameScenesManager___c__DisplayClass44_0* New_ctor();

  /// @brief Method <PushScenes>b__0, addr 0x31deb14, size 0x6c, virtual false, abstract: false, final false
  inline void _PushScenes_b__0(::Zenject::DiContainer* container);

  /// @brief Method <PushScenes>b__1, addr 0x31decc8, size 0x7c, virtual false, abstract: false, final false
  inline void _PushScenes_b__1(::Zenject::DiContainer* container);

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager>& __cordl_internal_get___4__this();

  constexpr ::System::Action_1<::Zenject::DiContainer*>* const& __cordl_internal_get_finishCallback() const;

  constexpr ::System::Action_1<::Zenject::DiContainer*>*& __cordl_internal_get_finishCallback();

  constexpr ::GlobalNamespace::GameScenesManager_ScenesStackData* const& __cordl_internal_get_scenesStackData() const;

  constexpr ::GlobalNamespace::GameScenesManager_ScenesStackData*& __cordl_internal_get_scenesStackData();

  constexpr ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO> const& __cordl_internal_get_scenesTransitionSetupData() const;

  constexpr ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO>& __cordl_internal_get_scenesTransitionSetupData();

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GameScenesManager> value);

  constexpr void __cordl_internal_set_finishCallback(::System::Action_1<::Zenject::DiContainer*>* value);

  constexpr void __cordl_internal_set_scenesStackData(::GlobalNamespace::GameScenesManager_ScenesStackData* value);

  constexpr void __cordl_internal_set_scenesTransitionSetupData(::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO> value);

  /// @brief Method .ctor, addr 0x31dba14, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameScenesManager___c__DisplayClass44_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameScenesManager___c__DisplayClass44_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameScenesManager___c__DisplayClass44_0(GameScenesManager___c__DisplayClass44_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameScenesManager___c__DisplayClass44_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameScenesManager___c__DisplayClass44_0(GameScenesManager___c__DisplayClass44_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21324 };

  /// @brief Field scenesStackData, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::GameScenesManager_ScenesStackData* ___scenesStackData;

  /// @brief Field scenesTransitionSetupData, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO> ___scenesTransitionSetupData;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameScenesManager> _____4__this;

  /// @brief Field finishCallback, offset: 0x28, size: 0x8, def value: None
  ::System::Action_1<::Zenject::DiContainer*>* ___finishCallback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameScenesManager___c__DisplayClass44_0, ___scenesStackData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameScenesManager___c__DisplayClass44_0, ___scenesTransitionSetupData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameScenesManager___c__DisplayClass44_0, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameScenesManager___c__DisplayClass44_0, ___finishCallback) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameScenesManager___c__DisplayClass44_0, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameScenesManager/<>c__DisplayClass45_0
class CORDL_TYPE GameScenesManager___c__DisplayClass45_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::GameScenesManager> __4__this;

  /// @brief Field finishCallback, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_finishCallback, put = __cordl_internal_set_finishCallback)) ::System::Action_1<::Zenject::DiContainer*>* finishCallback;

  static inline ::GlobalNamespace::GameScenesManager___c__DisplayClass45_0* New_ctor();

  /// @brief Method <PopScenes>b__0, addr 0x31ded44, size 0xbc, virtual false, abstract: false, final false
  inline void _PopScenes_b__0(::Zenject::DiContainer* container);

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager>& __cordl_internal_get___4__this();

  constexpr ::System::Action_1<::Zenject::DiContainer*>* const& __cordl_internal_get_finishCallback() const;

  constexpr ::System::Action_1<::Zenject::DiContainer*>*& __cordl_internal_get_finishCallback();

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GameScenesManager> value);

  constexpr void __cordl_internal_set_finishCallback(::System::Action_1<::Zenject::DiContainer*>* value);

  /// @brief Method .ctor, addr 0x31dbcd8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameScenesManager___c__DisplayClass45_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameScenesManager___c__DisplayClass45_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameScenesManager___c__DisplayClass45_0(GameScenesManager___c__DisplayClass45_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameScenesManager___c__DisplayClass45_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameScenesManager___c__DisplayClass45_0(GameScenesManager___c__DisplayClass45_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21325 };

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameScenesManager> _____4__this;

  /// @brief Field finishCallback, offset: 0x18, size: 0x8, def value: None
  ::System::Action_1<::Zenject::DiContainer*>* ___finishCallback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameScenesManager___c__DisplayClass45_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameScenesManager___c__DisplayClass45_0, ___finishCallback) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameScenesManager___c__DisplayClass45_0, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameScenesManager/<>c__DisplayClass46_0
class CORDL_TYPE GameScenesManager___c__DisplayClass46_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field tcs, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_tcs, put = __cordl_internal_set_tcs)) ::System::Threading::Tasks::TaskCompletionSource_1<bool>* tcs;

  static inline ::GlobalNamespace::GameScenesManager___c__DisplayClass46_0* New_ctor();

  /// @brief Method <ReplaceScenesAsync>b__0, addr 0x31dee00, size 0x58, virtual false, abstract: false, final false
  inline void _ReplaceScenesAsync_b__0(::Zenject::DiContainer* _);

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>* const& __cordl_internal_get_tcs() const;

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>*& __cordl_internal_get_tcs();

  constexpr void __cordl_internal_set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<bool>* value);

  /// @brief Method .ctor, addr 0x31dbe20, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameScenesManager___c__DisplayClass46_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameScenesManager___c__DisplayClass46_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameScenesManager___c__DisplayClass46_0(GameScenesManager___c__DisplayClass46_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameScenesManager___c__DisplayClass46_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameScenesManager___c__DisplayClass46_0(GameScenesManager___c__DisplayClass46_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21326 };

  /// @brief Field tcs, offset: 0x10, size: 0x8, def value: None
  ::System::Threading::Tasks::TaskCompletionSource_1<bool>* ___tcs;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameScenesManager___c__DisplayClass46_0, ___tcs) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameScenesManager___c__DisplayClass46_0, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameScenesManager/<>c__DisplayClass47_0
class CORDL_TYPE GameScenesManager___c__DisplayClass47_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::GameScenesManager> __4__this;

  /// @brief Field <>9__1, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get___9__1, put = __cordl_internal_set___9__1)) ::System::Action_1<::Zenject::DiContainer*>* __9__1;

  /// @brief Field <>9__2, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get___9__2, put = __cordl_internal_set___9__2)) ::System::Action_1<::Zenject::DiContainer*>* __9__2;

  /// @brief Field emptyTransitionSceneNameList, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_emptyTransitionSceneNameList,
                      put = __cordl_internal_set_emptyTransitionSceneNameList)) ::System::Collections::Generic::List_1<::StringW>* emptyTransitionSceneNameList;

  /// @brief Field finishCallback, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_finishCallback, put = __cordl_internal_set_finishCallback)) ::System::Action_1<::Zenject::DiContainer*>* finishCallback;

  /// @brief Field newSceneNames, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_newSceneNames, put = __cordl_internal_set_newSceneNames)) ::ArrayW<::StringW, ::Array<::StringW>*> newSceneNames;

  /// @brief Field scenesStackData, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_scenesStackData, put = __cordl_internal_set_scenesStackData)) ::GlobalNamespace::GameScenesManager_ScenesStackData* scenesStackData;

  /// @brief Field scenesTransitionSetupData, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_scenesTransitionSetupData, put = __cordl_internal_set_scenesTransitionSetupData)) ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO>
      scenesTransitionSetupData;

  static inline ::GlobalNamespace::GameScenesManager___c__DisplayClass47_0* New_ctor();

  /// @brief Method <ReplaceScenes>b__0, addr 0x31dee58, size 0x128, virtual false, abstract: false, final false
  inline void _ReplaceScenes_b__0(::Zenject::DiContainer* emptySceneContainer);

  /// @brief Method <ReplaceScenes>b__1, addr 0x31def80, size 0x6c, virtual false, abstract: false, final false
  inline void _ReplaceScenes_b__1(::Zenject::DiContainer* container);

  /// @brief Method <ReplaceScenes>b__2, addr 0x31defec, size 0x7c, virtual false, abstract: false, final false
  inline void _ReplaceScenes_b__2(::Zenject::DiContainer* container);

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager>& __cordl_internal_get___4__this();

  constexpr ::System::Action_1<::Zenject::DiContainer*>* const& __cordl_internal_get___9__1() const;

  constexpr ::System::Action_1<::Zenject::DiContainer*>*& __cordl_internal_get___9__1();

  constexpr ::System::Action_1<::Zenject::DiContainer*>* const& __cordl_internal_get___9__2() const;

  constexpr ::System::Action_1<::Zenject::DiContainer*>*& __cordl_internal_get___9__2();

  constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_emptyTransitionSceneNameList() const;

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_emptyTransitionSceneNameList();

  constexpr ::System::Action_1<::Zenject::DiContainer*>* const& __cordl_internal_get_finishCallback() const;

  constexpr ::System::Action_1<::Zenject::DiContainer*>*& __cordl_internal_get_finishCallback();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_newSceneNames() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_newSceneNames();

  constexpr ::GlobalNamespace::GameScenesManager_ScenesStackData* const& __cordl_internal_get_scenesStackData() const;

  constexpr ::GlobalNamespace::GameScenesManager_ScenesStackData*& __cordl_internal_get_scenesStackData();

  constexpr ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO> const& __cordl_internal_get_scenesTransitionSetupData() const;

  constexpr ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO>& __cordl_internal_get_scenesTransitionSetupData();

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GameScenesManager> value);

  constexpr void __cordl_internal_set___9__1(::System::Action_1<::Zenject::DiContainer*>* value);

  constexpr void __cordl_internal_set___9__2(::System::Action_1<::Zenject::DiContainer*>* value);

  constexpr void __cordl_internal_set_emptyTransitionSceneNameList(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set_finishCallback(::System::Action_1<::Zenject::DiContainer*>* value);

  constexpr void __cordl_internal_set_newSceneNames(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_scenesStackData(::GlobalNamespace::GameScenesManager_ScenesStackData* value);

  constexpr void __cordl_internal_set_scenesTransitionSetupData(::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO> value);

  /// @brief Method .ctor, addr 0x31dc19c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameScenesManager___c__DisplayClass47_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameScenesManager___c__DisplayClass47_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameScenesManager___c__DisplayClass47_0(GameScenesManager___c__DisplayClass47_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameScenesManager___c__DisplayClass47_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameScenesManager___c__DisplayClass47_0(GameScenesManager___c__DisplayClass47_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21327 };

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameScenesManager> _____4__this;

  /// @brief Field scenesTransitionSetupData, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO> ___scenesTransitionSetupData;

  /// @brief Field newSceneNames, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___newSceneNames;

  /// @brief Field emptyTransitionSceneNameList, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ___emptyTransitionSceneNameList;

  /// @brief Field scenesStackData, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::GameScenesManager_ScenesStackData* ___scenesStackData;

  /// @brief Field finishCallback, offset: 0x38, size: 0x8, def value: None
  ::System::Action_1<::Zenject::DiContainer*>* ___finishCallback;

  /// @brief Field <>9__1, offset: 0x40, size: 0x8, def value: None
  ::System::Action_1<::Zenject::DiContainer*>* _____9__1;

  /// @brief Field <>9__2, offset: 0x48, size: 0x8, def value: None
  ::System::Action_1<::Zenject::DiContainer*>* _____9__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameScenesManager___c__DisplayClass47_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameScenesManager___c__DisplayClass47_0, ___scenesTransitionSetupData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameScenesManager___c__DisplayClass47_0, ___newSceneNames) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameScenesManager___c__DisplayClass47_0, ___emptyTransitionSceneNameList) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameScenesManager___c__DisplayClass47_0, ___scenesStackData) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameScenesManager___c__DisplayClass47_0, ___finishCallback) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameScenesManager___c__DisplayClass47_0, _____9__1) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameScenesManager___c__DisplayClass47_0, _____9__2) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameScenesManager___c__DisplayClass47_0, 0x50>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameScenesManager/<>c__DisplayClass48_0
class CORDL_TYPE GameScenesManager___c__DisplayClass48_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::GameScenesManager> __4__this;

  /// @brief Field <>9__1, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get___9__1, put = __cordl_internal_set___9__1)) ::System::Action_1<::Zenject::DiContainer*>* __9__1;

  /// @brief Field <>9__2, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get___9__2, put = __cordl_internal_set___9__2)) ::System::Action_1<::Zenject::DiContainer*>* __9__2;

  /// @brief Field emptyTransitionSceneNameList, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_emptyTransitionSceneNameList,
                      put = __cordl_internal_set_emptyTransitionSceneNameList)) ::System::Collections::Generic::List_1<::StringW>* emptyTransitionSceneNameList;

  /// @brief Field finishCallback, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_finishCallback, put = __cordl_internal_set_finishCallback)) ::System::Action_1<::Zenject::DiContainer*>* finishCallback;

  /// @brief Field newSceneNames, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_newSceneNames, put = __cordl_internal_set_newSceneNames)) ::ArrayW<::StringW, ::Array<::StringW>*> newSceneNames;

  /// @brief Field scenesStackData, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_scenesStackData, put = __cordl_internal_set_scenesStackData)) ::GlobalNamespace::GameScenesManager_ScenesStackData* scenesStackData;

  /// @brief Field scenesTransitionSetupData, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_scenesTransitionSetupData, put = __cordl_internal_set_scenesTransitionSetupData)) ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO>
      scenesTransitionSetupData;

  static inline ::GlobalNamespace::GameScenesManager___c__DisplayClass48_0* New_ctor();

  /// @brief Method <ClearAndOpenScenes>b__0, addr 0x31df068, size 0x128, virtual false, abstract: false, final false
  inline void _ClearAndOpenScenes_b__0(::Zenject::DiContainer* emptySceneContainer);

  /// @brief Method <ClearAndOpenScenes>b__1, addr 0x31df190, size 0x6c, virtual false, abstract: false, final false
  inline void _ClearAndOpenScenes_b__1(::Zenject::DiContainer* container);

  /// @brief Method <ClearAndOpenScenes>b__2, addr 0x31df1fc, size 0x7c, virtual false, abstract: false, final false
  inline void _ClearAndOpenScenes_b__2(::Zenject::DiContainer* container);

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager>& __cordl_internal_get___4__this();

  constexpr ::System::Action_1<::Zenject::DiContainer*>* const& __cordl_internal_get___9__1() const;

  constexpr ::System::Action_1<::Zenject::DiContainer*>*& __cordl_internal_get___9__1();

  constexpr ::System::Action_1<::Zenject::DiContainer*>* const& __cordl_internal_get___9__2() const;

  constexpr ::System::Action_1<::Zenject::DiContainer*>*& __cordl_internal_get___9__2();

  constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_emptyTransitionSceneNameList() const;

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_emptyTransitionSceneNameList();

  constexpr ::System::Action_1<::Zenject::DiContainer*>* const& __cordl_internal_get_finishCallback() const;

  constexpr ::System::Action_1<::Zenject::DiContainer*>*& __cordl_internal_get_finishCallback();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_newSceneNames() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_newSceneNames();

  constexpr ::GlobalNamespace::GameScenesManager_ScenesStackData* const& __cordl_internal_get_scenesStackData() const;

  constexpr ::GlobalNamespace::GameScenesManager_ScenesStackData*& __cordl_internal_get_scenesStackData();

  constexpr ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO> const& __cordl_internal_get_scenesTransitionSetupData() const;

  constexpr ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO>& __cordl_internal_get_scenesTransitionSetupData();

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GameScenesManager> value);

  constexpr void __cordl_internal_set___9__1(::System::Action_1<::Zenject::DiContainer*>* value);

  constexpr void __cordl_internal_set___9__2(::System::Action_1<::Zenject::DiContainer*>* value);

  constexpr void __cordl_internal_set_emptyTransitionSceneNameList(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set_finishCallback(::System::Action_1<::Zenject::DiContainer*>* value);

  constexpr void __cordl_internal_set_newSceneNames(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_scenesStackData(::GlobalNamespace::GameScenesManager_ScenesStackData* value);

  constexpr void __cordl_internal_set_scenesTransitionSetupData(::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO> value);

  /// @brief Method .ctor, addr 0x31dc784, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameScenesManager___c__DisplayClass48_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameScenesManager___c__DisplayClass48_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameScenesManager___c__DisplayClass48_0(GameScenesManager___c__DisplayClass48_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameScenesManager___c__DisplayClass48_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameScenesManager___c__DisplayClass48_0(GameScenesManager___c__DisplayClass48_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21328 };

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameScenesManager> _____4__this;

  /// @brief Field scenesTransitionSetupData, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO> ___scenesTransitionSetupData;

  /// @brief Field newSceneNames, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___newSceneNames;

  /// @brief Field emptyTransitionSceneNameList, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ___emptyTransitionSceneNameList;

  /// @brief Field scenesStackData, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::GameScenesManager_ScenesStackData* ___scenesStackData;

  /// @brief Field finishCallback, offset: 0x38, size: 0x8, def value: None
  ::System::Action_1<::Zenject::DiContainer*>* ___finishCallback;

  /// @brief Field <>9__1, offset: 0x40, size: 0x8, def value: None
  ::System::Action_1<::Zenject::DiContainer*>* _____9__1;

  /// @brief Field <>9__2, offset: 0x48, size: 0x8, def value: None
  ::System::Action_1<::Zenject::DiContainer*>* _____9__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameScenesManager___c__DisplayClass48_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameScenesManager___c__DisplayClass48_0, ___scenesTransitionSetupData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameScenesManager___c__DisplayClass48_0, ___newSceneNames) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameScenesManager___c__DisplayClass48_0, ___emptyTransitionSceneNameList) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameScenesManager___c__DisplayClass48_0, ___scenesStackData) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameScenesManager___c__DisplayClass48_0, ___finishCallback) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameScenesManager___c__DisplayClass48_0, _____9__1) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameScenesManager___c__DisplayClass48_0, _____9__2) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameScenesManager___c__DisplayClass48_0, 0x50>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameScenesManager/<>c__DisplayClass49_0
class CORDL_TYPE GameScenesManager___c__DisplayClass49_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::GameScenesManager> __4__this;

  /// @brief Field finishCallback, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_finishCallback, put = __cordl_internal_set_finishCallback)) ::System::Action_1<::Zenject::DiContainer*>* finishCallback;

  /// @brief Field scenesStackData, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_scenesStackData, put = __cordl_internal_set_scenesStackData)) ::GlobalNamespace::GameScenesManager_ScenesStackData* scenesStackData;

  /// @brief Field scenesTransitionSetupData, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_scenesTransitionSetupData, put = __cordl_internal_set_scenesTransitionSetupData)) ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO>
      scenesTransitionSetupData;

  static inline ::GlobalNamespace::GameScenesManager___c__DisplayClass49_0* New_ctor();

  /// @brief Method <AppendScenes>b__0, addr 0x31df278, size 0x6c, virtual false, abstract: false, final false
  inline void _AppendScenes_b__0(::Zenject::DiContainer* container);

  /// @brief Method <AppendScenes>b__1, addr 0x31df2e4, size 0x7c, virtual false, abstract: false, final false
  inline void _AppendScenes_b__1(::Zenject::DiContainer* container);

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager>& __cordl_internal_get___4__this();

  constexpr ::System::Action_1<::Zenject::DiContainer*>* const& __cordl_internal_get_finishCallback() const;

  constexpr ::System::Action_1<::Zenject::DiContainer*>*& __cordl_internal_get_finishCallback();

  constexpr ::GlobalNamespace::GameScenesManager_ScenesStackData* const& __cordl_internal_get_scenesStackData() const;

  constexpr ::GlobalNamespace::GameScenesManager_ScenesStackData*& __cordl_internal_get_scenesStackData();

  constexpr ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO> const& __cordl_internal_get_scenesTransitionSetupData() const;

  constexpr ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO>& __cordl_internal_get_scenesTransitionSetupData();

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GameScenesManager> value);

  constexpr void __cordl_internal_set_finishCallback(::System::Action_1<::Zenject::DiContainer*>* value);

  constexpr void __cordl_internal_set_scenesStackData(::GlobalNamespace::GameScenesManager_ScenesStackData* value);

  constexpr void __cordl_internal_set_scenesTransitionSetupData(::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO> value);

  /// @brief Method .ctor, addr 0x31dcb64, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameScenesManager___c__DisplayClass49_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameScenesManager___c__DisplayClass49_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameScenesManager___c__DisplayClass49_0(GameScenesManager___c__DisplayClass49_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameScenesManager___c__DisplayClass49_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameScenesManager___c__DisplayClass49_0(GameScenesManager___c__DisplayClass49_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21329 };

  /// @brief Field scenesStackData, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::GameScenesManager_ScenesStackData* ___scenesStackData;

  /// @brief Field scenesTransitionSetupData, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO> ___scenesTransitionSetupData;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameScenesManager> _____4__this;

  /// @brief Field finishCallback, offset: 0x28, size: 0x8, def value: None
  ::System::Action_1<::Zenject::DiContainer*>* ___finishCallback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameScenesManager___c__DisplayClass49_0, ___scenesStackData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameScenesManager___c__DisplayClass49_0, ___scenesTransitionSetupData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameScenesManager___c__DisplayClass49_0, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameScenesManager___c__DisplayClass49_0, ___finishCallback) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameScenesManager___c__DisplayClass49_0, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameScenesManager/<>c__DisplayClass50_0
class CORDL_TYPE GameScenesManager___c__DisplayClass50_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::GameScenesManager> __4__this;

  /// @brief Field finishCallback, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_finishCallback, put = __cordl_internal_set_finishCallback)) ::System::Action_1<::Zenject::DiContainer*>* finishCallback;

  /// @brief Field sceneNamesToRemove, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_sceneNamesToRemove, put = __cordl_internal_set_sceneNamesToRemove)) ::ArrayW<::StringW, ::Array<::StringW>*> sceneNamesToRemove;

  static inline ::GlobalNamespace::GameScenesManager___c__DisplayClass50_0* New_ctor();

  /// @brief Method <RemoveScenes>b__0, addr 0x31df360, size 0xbc, virtual false, abstract: false, final false
  inline void _RemoveScenes_b__0(::Zenject::DiContainer* container);

  /// @brief Method <RemoveScenes>b__1, addr 0x31df41c, size 0x68, virtual false, abstract: false, final false
  inline bool _RemoveScenes_b__1(::StringW scene);

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager>& __cordl_internal_get___4__this();

  constexpr ::System::Action_1<::Zenject::DiContainer*>* const& __cordl_internal_get_finishCallback() const;

  constexpr ::System::Action_1<::Zenject::DiContainer*>*& __cordl_internal_get_finishCallback();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_sceneNamesToRemove() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_sceneNamesToRemove();

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GameScenesManager> value);

  constexpr void __cordl_internal_set_finishCallback(::System::Action_1<::Zenject::DiContainer*>* value);

  constexpr void __cordl_internal_set_sceneNamesToRemove(::ArrayW<::StringW, ::Array<::StringW>*> value);

  /// @brief Method .ctor, addr 0x31dcf28, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameScenesManager___c__DisplayClass50_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameScenesManager___c__DisplayClass50_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameScenesManager___c__DisplayClass50_0(GameScenesManager___c__DisplayClass50_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameScenesManager___c__DisplayClass50_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameScenesManager___c__DisplayClass50_0(GameScenesManager___c__DisplayClass50_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21330 };

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameScenesManager> _____4__this;

  /// @brief Field finishCallback, offset: 0x18, size: 0x8, def value: None
  ::System::Action_1<::Zenject::DiContainer*>* ___finishCallback;

  /// @brief Field sceneNamesToRemove, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___sceneNamesToRemove;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameScenesManager___c__DisplayClass50_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameScenesManager___c__DisplayClass50_0, ___finishCallback) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameScenesManager___c__DisplayClass50_0, ___sceneNamesToRemove) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameScenesManager___c__DisplayClass50_0, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameScenesManager/<>c__DisplayClass51_0
class CORDL_TYPE GameScenesManager___c__DisplayClass51_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::GameScenesManager> __4__this;

  /// @brief Field finishCallback, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_finishCallback, put = __cordl_internal_set_finishCallback)) ::System::Action_1<::Zenject::DiContainer*>* finishCallback;

  /// @brief Field scenesTransitionSetupData, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_scenesTransitionSetupData, put = __cordl_internal_set_scenesTransitionSetupData)) ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO>
      scenesTransitionSetupData;

  static inline ::GlobalNamespace::GameScenesManager___c__DisplayClass51_0* New_ctor();

  /// @brief Method <ActivateScenes>b__0, addr 0x31df484, size 0x74, virtual false, abstract: false, final false
  inline void _ActivateScenes_b__0(::Zenject::DiContainer* container);

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager>& __cordl_internal_get___4__this();

  constexpr ::System::Action_1<::Zenject::DiContainer*>* const& __cordl_internal_get_finishCallback() const;

  constexpr ::System::Action_1<::Zenject::DiContainer*>*& __cordl_internal_get_finishCallback();

  constexpr ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO> const& __cordl_internal_get_scenesTransitionSetupData() const;

  constexpr ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO>& __cordl_internal_get_scenesTransitionSetupData();

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GameScenesManager> value);

  constexpr void __cordl_internal_set_finishCallback(::System::Action_1<::Zenject::DiContainer*>* value);

  constexpr void __cordl_internal_set_scenesTransitionSetupData(::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO> value);

  /// @brief Method .ctor, addr 0x31dd0d8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameScenesManager___c__DisplayClass51_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameScenesManager___c__DisplayClass51_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameScenesManager___c__DisplayClass51_0(GameScenesManager___c__DisplayClass51_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameScenesManager___c__DisplayClass51_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameScenesManager___c__DisplayClass51_0(GameScenesManager___c__DisplayClass51_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21331 };

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameScenesManager> _____4__this;

  /// @brief Field scenesTransitionSetupData, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO> ___scenesTransitionSetupData;

  /// @brief Field finishCallback, offset: 0x20, size: 0x8, def value: None
  ::System::Action_1<::Zenject::DiContainer*>* ___finishCallback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameScenesManager___c__DisplayClass51_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameScenesManager___c__DisplayClass51_0, ___scenesTransitionSetupData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameScenesManager___c__DisplayClass51_0, ___finishCallback) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameScenesManager___c__DisplayClass51_0, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameScenesManager/<>c__DisplayClass52_0
class CORDL_TYPE GameScenesManager___c__DisplayClass52_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::GameScenesManager> __4__this;

  /// @brief Field finishCallback, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_finishCallback, put = __cordl_internal_set_finishCallback)) ::System::Action_1<::Zenject::DiContainer*>* finishCallback;

  /// @brief Field scenesTransitionSetupData, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_scenesTransitionSetupData, put = __cordl_internal_set_scenesTransitionSetupData)) ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO>
      scenesTransitionSetupData;

  static inline ::GlobalNamespace::GameScenesManager___c__DisplayClass52_0* New_ctor();

  /// @brief Method <DeactivateScenes>b__0, addr 0x31df4f8, size 0x74, virtual false, abstract: false, final false
  inline void _DeactivateScenes_b__0(::Zenject::DiContainer* container);

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager>& __cordl_internal_get___4__this();

  constexpr ::System::Action_1<::Zenject::DiContainer*>* const& __cordl_internal_get_finishCallback() const;

  constexpr ::System::Action_1<::Zenject::DiContainer*>*& __cordl_internal_get_finishCallback();

  constexpr ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO> const& __cordl_internal_get_scenesTransitionSetupData() const;

  constexpr ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO>& __cordl_internal_get_scenesTransitionSetupData();

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GameScenesManager> value);

  constexpr void __cordl_internal_set_finishCallback(::System::Action_1<::Zenject::DiContainer*>* value);

  constexpr void __cordl_internal_set_scenesTransitionSetupData(::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO> value);

  /// @brief Method .ctor, addr 0x31dd288, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameScenesManager___c__DisplayClass52_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameScenesManager___c__DisplayClass52_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameScenesManager___c__DisplayClass52_0(GameScenesManager___c__DisplayClass52_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameScenesManager___c__DisplayClass52_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameScenesManager___c__DisplayClass52_0(GameScenesManager___c__DisplayClass52_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21332 };

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameScenesManager> _____4__this;

  /// @brief Field scenesTransitionSetupData, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO> ___scenesTransitionSetupData;

  /// @brief Field finishCallback, offset: 0x20, size: 0x8, def value: None
  ::System::Action_1<::Zenject::DiContainer*>* ___finishCallback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameScenesManager___c__DisplayClass52_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameScenesManager___c__DisplayClass52_0, ___scenesTransitionSetupData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameScenesManager___c__DisplayClass52_0, ___finishCallback) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameScenesManager___c__DisplayClass52_0, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameScenesManager/<>c__DisplayClass60_0
class CORDL_TYPE GameScenesManager___c__DisplayClass60_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field task, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_task, put = __cordl_internal_set_task)) ::System::Threading::Tasks::Task* task;

  static inline ::GlobalNamespace::GameScenesManager___c__DisplayClass60_0* New_ctor();

  /// @brief Method <WaitUntilTaskCompleted>b__0, addr 0x31df570, size 0x18, virtual false, abstract: false, final false
  inline bool _WaitUntilTaskCompleted_b__0();

  constexpr ::System::Threading::Tasks::Task* const& __cordl_internal_get_task() const;

  constexpr ::System::Threading::Tasks::Task*& __cordl_internal_get_task();

  constexpr void __cordl_internal_set_task(::System::Threading::Tasks::Task* value);

  /// @brief Method .ctor, addr 0x31df56c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameScenesManager___c__DisplayClass60_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameScenesManager___c__DisplayClass60_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameScenesManager___c__DisplayClass60_0(GameScenesManager___c__DisplayClass60_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameScenesManager___c__DisplayClass60_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameScenesManager___c__DisplayClass60_0(GameScenesManager___c__DisplayClass60_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21333 };

  /// @brief Field task, offset: 0x10, size: 0x8, def value: None
  ::System::Threading::Tasks::Task* ___task;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameScenesManager___c__DisplayClass60_0, ___task) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameScenesManager___c__DisplayClass60_0, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameScenesManager/<LoadOneScene>d__55
class CORDL_TYPE GameScenesManager__LoadOneScene_d__55 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::GameScenesManager> __4__this;

  /// @brief Field sceneName, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_sceneName, put = __cordl_internal_set_sceneName)) ::StringW sceneName;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x31df58c, size 0x134, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::GameScenesManager__LoadOneScene_d__55* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x31df6c0, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x31df6c8, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x31df700, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x31df588, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager>& __cordl_internal_get___4__this();

  constexpr ::StringW const& __cordl_internal_get_sceneName() const;

  constexpr ::StringW& __cordl_internal_get_sceneName();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GameScenesManager> value);

  constexpr void __cordl_internal_set_sceneName(::StringW value);

  /// @brief Method .ctor, addr 0x31dd28c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameScenesManager__LoadOneScene_d__55();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameScenesManager__LoadOneScene_d__55", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameScenesManager__LoadOneScene_d__55(GameScenesManager__LoadOneScene_d__55&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameScenesManager__LoadOneScene_d__55", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameScenesManager__LoadOneScene_d__55(GameScenesManager__LoadOneScene_d__55 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21334 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameScenesManager> _____4__this;

  /// @brief Field sceneName, offset: 0x28, size: 0x8, def value: None
  ::StringW ___sceneName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameScenesManager__LoadOneScene_d__55, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameScenesManager__LoadOneScene_d__55, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameScenesManager__LoadOneScene_d__55, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameScenesManager__LoadOneScene_d__55, ___sceneName) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameScenesManager__LoadOneScene_d__55, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies GameScenesManager::SceneDismissType, GameScenesManager::ScenePresentType, System.Object, UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<TObject>,
// UnityEngine.ResourceManagement.ResourceProviders.SceneInstance
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameScenesManager/<ScenesTransitionCoroutine>d__57
class CORDL_TYPE GameScenesManager__ScenesTransitionCoroutine_d__57 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::GameScenesManager> __4__this;

  /// @brief Field <>7__wrap5, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get___7__wrap5, put = __cordl_internal_set___7__wrap5)) ::System::Collections::Generic::IEnumerator_1<::StringW>* __7__wrap5;

  /// @brief Field <allEventSystems>5__2, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__allEventSystems_5__2,
                      put = __cordl_internal_set__allEventSystems_5__2)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::EventSystems::EventSystem>>* _allEventSystems_5__2;

  /// @brief Field <loadSceneOperationHandle>5__4, offset 0x78, size 0x18
  __declspec(property(get = __cordl_internal_get__loadSceneOperationHandle_5__4, put = __cordl_internal_set__loadSceneOperationHandle_5__4)) ::UnityEngine::ResourceManagement::AsyncOperations::
      AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
          _loadSceneOperationHandle_5__4;

  /// @brief Field <sceneName>5__3, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__sceneName_5__3, put = __cordl_internal_set__sceneName_5__3)) ::StringW _sceneName_5__3;

  /// @brief Field <sceneNum>5__5, offset 0x90, size 0x4
  __declspec(property(get = __cordl_internal_get__sceneNum_5__5, put = __cordl_internal_set__sceneNum_5__5)) int32_t _sceneNum_5__5;

  /// @brief Field afterMinDurationCallback, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_afterMinDurationCallback, put = __cordl_internal_set_afterMinDurationCallback)) ::System::Action* afterMinDurationCallback;

  /// @brief Field canTriggerGarbageCollector, offset 0x5c, size 0x1
  __declspec(property(get = __cordl_internal_get_canTriggerGarbageCollector, put = __cordl_internal_set_canTriggerGarbageCollector)) bool canTriggerGarbageCollector;

  /// @brief Field dismissType, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_dismissType, put = __cordl_internal_set_dismissType)) ::GlobalNamespace::GameScenesManager_SceneDismissType dismissType;

  /// @brief Field extraBindingsCallback, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_extraBindingsCallback, put = __cordl_internal_set_extraBindingsCallback)) ::System::Action_1<::Zenject::DiContainer*>* extraBindingsCallback;

  /// @brief Field finishCallback, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_finishCallback, put = __cordl_internal_set_finishCallback)) ::System::Action_1<::Zenject::DiContainer*>* finishCallback;

  /// @brief Field minDuration, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_minDuration, put = __cordl_internal_set_minDuration)) float_t minDuration;

  /// @brief Field newScenesTransitionSetupData, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_newScenesTransitionSetupData, put = __cordl_internal_set_newScenesTransitionSetupData)) ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO>
      newScenesTransitionSetupData;

  /// @brief Field presentType, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_presentType, put = __cordl_internal_set_presentType)) ::GlobalNamespace::GameScenesManager_ScenePresentType presentType;

  /// @brief Field scenesToDismiss, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_scenesToDismiss, put = __cordl_internal_set_scenesToDismiss)) ::System::Collections::Generic::IReadOnlyList_1<::StringW>* scenesToDismiss;

  /// @brief Field scenesToPresent, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_scenesToPresent, put = __cordl_internal_set_scenesToPresent)) ::System::Collections::Generic::IReadOnlyList_1<::StringW>* scenesToPresent;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x31df748, size 0x19b0, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__57* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x31e1260, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x31e1268, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x31e12a0, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x31df708, size 0x40, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager>& __cordl_internal_get___4__this();

  constexpr ::System::Collections::Generic::IEnumerator_1<::StringW>* const& __cordl_internal_get___7__wrap5() const;

  constexpr ::System::Collections::Generic::IEnumerator_1<::StringW>*& __cordl_internal_get___7__wrap5();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::EventSystems::EventSystem>>* const& __cordl_internal_get__allEventSystems_5__2() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::EventSystems::EventSystem>>*& __cordl_internal_get__allEventSystems_5__2();

  constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> const&
  __cordl_internal_get__loadSceneOperationHandle_5__4() const;

  constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>&
  __cordl_internal_get__loadSceneOperationHandle_5__4();

  constexpr ::StringW const& __cordl_internal_get__sceneName_5__3() const;

  constexpr ::StringW& __cordl_internal_get__sceneName_5__3();

  constexpr int32_t const& __cordl_internal_get__sceneNum_5__5() const;

  constexpr int32_t& __cordl_internal_get__sceneNum_5__5();

  constexpr ::System::Action* const& __cordl_internal_get_afterMinDurationCallback() const;

  constexpr ::System::Action*& __cordl_internal_get_afterMinDurationCallback();

  constexpr bool const& __cordl_internal_get_canTriggerGarbageCollector() const;

  constexpr bool& __cordl_internal_get_canTriggerGarbageCollector();

  constexpr ::GlobalNamespace::GameScenesManager_SceneDismissType const& __cordl_internal_get_dismissType() const;

  constexpr ::GlobalNamespace::GameScenesManager_SceneDismissType& __cordl_internal_get_dismissType();

  constexpr ::System::Action_1<::Zenject::DiContainer*>* const& __cordl_internal_get_extraBindingsCallback() const;

  constexpr ::System::Action_1<::Zenject::DiContainer*>*& __cordl_internal_get_extraBindingsCallback();

  constexpr ::System::Action_1<::Zenject::DiContainer*>* const& __cordl_internal_get_finishCallback() const;

  constexpr ::System::Action_1<::Zenject::DiContainer*>*& __cordl_internal_get_finishCallback();

  constexpr float_t const& __cordl_internal_get_minDuration() const;

  constexpr float_t& __cordl_internal_get_minDuration();

  constexpr ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO> const& __cordl_internal_get_newScenesTransitionSetupData() const;

  constexpr ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO>& __cordl_internal_get_newScenesTransitionSetupData();

  constexpr ::GlobalNamespace::GameScenesManager_ScenePresentType const& __cordl_internal_get_presentType() const;

  constexpr ::GlobalNamespace::GameScenesManager_ScenePresentType& __cordl_internal_get_presentType();

  constexpr ::System::Collections::Generic::IReadOnlyList_1<::StringW>* const& __cordl_internal_get_scenesToDismiss() const;

  constexpr ::System::Collections::Generic::IReadOnlyList_1<::StringW>*& __cordl_internal_get_scenesToDismiss();

  constexpr ::System::Collections::Generic::IReadOnlyList_1<::StringW>* const& __cordl_internal_get_scenesToPresent() const;

  constexpr ::System::Collections::Generic::IReadOnlyList_1<::StringW>*& __cordl_internal_get_scenesToPresent();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GameScenesManager> value);

  constexpr void __cordl_internal_set___7__wrap5(::System::Collections::Generic::IEnumerator_1<::StringW>* value);

  constexpr void __cordl_internal_set__allEventSystems_5__2(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::EventSystems::EventSystem>>* value);

  constexpr void __cordl_internal_set__loadSceneOperationHandle_5__4(
      ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> value);

  constexpr void __cordl_internal_set__sceneName_5__3(::StringW value);

  constexpr void __cordl_internal_set__sceneNum_5__5(int32_t value);

  constexpr void __cordl_internal_set_afterMinDurationCallback(::System::Action* value);

  constexpr void __cordl_internal_set_canTriggerGarbageCollector(bool value);

  constexpr void __cordl_internal_set_dismissType(::GlobalNamespace::GameScenesManager_SceneDismissType value);

  constexpr void __cordl_internal_set_extraBindingsCallback(::System::Action_1<::Zenject::DiContainer*>* value);

  constexpr void __cordl_internal_set_finishCallback(::System::Action_1<::Zenject::DiContainer*>* value);

  constexpr void __cordl_internal_set_minDuration(float_t value);

  constexpr void __cordl_internal_set_newScenesTransitionSetupData(::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO> value);

  constexpr void __cordl_internal_set_presentType(::GlobalNamespace::GameScenesManager_ScenePresentType value);

  constexpr void __cordl_internal_set_scenesToDismiss(::System::Collections::Generic::IReadOnlyList_1<::StringW>* value);

  constexpr void __cordl_internal_set_scenesToPresent(::System::Collections::Generic::IReadOnlyList_1<::StringW>* value);

  /// @brief Method <>m__Finally1, addr 0x31e10f8, size 0xb4, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method <>m__Finally2, addr 0x31e11ac, size 0xb4, virtual false, abstract: false, final false
  inline void __m__Finally2();

  /// @brief Method .ctor, addr 0x31dd29c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameScenesManager__ScenesTransitionCoroutine_d__57();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameScenesManager__ScenesTransitionCoroutine_d__57", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameScenesManager__ScenesTransitionCoroutine_d__57(GameScenesManager__ScenesTransitionCoroutine_d__57&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameScenesManager__ScenesTransitionCoroutine_d__57", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameScenesManager__ScenesTransitionCoroutine_d__57(GameScenesManager__ScenesTransitionCoroutine_d__57 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21335 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field scenesToDismiss, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::IReadOnlyList_1<::StringW>* ___scenesToDismiss;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameScenesManager> _____4__this;

  /// @brief Field scenesToPresent, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::IReadOnlyList_1<::StringW>* ___scenesToPresent;

  /// @brief Field minDuration, offset: 0x38, size: 0x4, def value: None
  float_t ___minDuration;

  /// @brief Field presentType, offset: 0x3c, size: 0x4, def value: None
  ::GlobalNamespace::GameScenesManager_ScenePresentType ___presentType;

  /// @brief Field afterMinDurationCallback, offset: 0x40, size: 0x8, def value: None
  ::System::Action* ___afterMinDurationCallback;

  /// @brief Field newScenesTransitionSetupData, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO> ___newScenesTransitionSetupData;

  /// @brief Field extraBindingsCallback, offset: 0x50, size: 0x8, def value: None
  ::System::Action_1<::Zenject::DiContainer*>* ___extraBindingsCallback;

  /// @brief Field dismissType, offset: 0x58, size: 0x4, def value: None
  ::GlobalNamespace::GameScenesManager_SceneDismissType ___dismissType;

  /// @brief Field canTriggerGarbageCollector, offset: 0x5c, size: 0x1, def value: None
  bool ___canTriggerGarbageCollector;

  /// @brief Field finishCallback, offset: 0x60, size: 0x8, def value: None
  ::System::Action_1<::Zenject::DiContainer*>* ___finishCallback;

  /// @brief Field <allEventSystems>5__2, offset: 0x68, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::EventSystems::EventSystem>>* ____allEventSystems_5__2;

  /// @brief Field <sceneName>5__3, offset: 0x70, size: 0x8, def value: None
  ::StringW ____sceneName_5__3;

  /// @brief Field <loadSceneOperationHandle>5__4, offset: 0x78, size: 0x18, def value: None
  ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> ____loadSceneOperationHandle_5__4;

  /// @brief Field <sceneNum>5__5, offset: 0x90, size: 0x4, def value: None
  int32_t ____sceneNum_5__5;

  /// @brief Field <>7__wrap5, offset: 0x98, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerator_1<::StringW>* _____7__wrap5;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__57, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__57, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__57, ___scenesToDismiss) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__57, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__57, ___scenesToPresent) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__57, ___minDuration) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__57, ___presentType) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__57, ___afterMinDurationCallback) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__57, ___newScenesTransitionSetupData) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__57, ___extraBindingsCallback) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__57, ___dismissType) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__57, ___canTriggerGarbageCollector) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__57, ___finishCallback) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__57, ____allEventSystems_5__2) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__57, ____sceneName_5__3) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__57, ____loadSceneOperationHandle_5__4) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__57, ____sceneNum_5__5) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__57, _____7__wrap5) == 0x98, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__57, 0xa0>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameScenesManager/<UnloadOneScene>d__56
class CORDL_TYPE GameScenesManager__UnloadOneScene_d__56 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::GameScenesManager> __4__this;

  /// @brief Field sceneName, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_sceneName, put = __cordl_internal_set_sceneName)) ::StringW sceneName;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x31e12ac, size 0x12c, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::GameScenesManager__UnloadOneScene_d__56* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x31e13d8, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x31e13e0, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x31e1418, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x31e12a8, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager>& __cordl_internal_get___4__this();

  constexpr ::StringW const& __cordl_internal_get_sceneName() const;

  constexpr ::StringW& __cordl_internal_get_sceneName();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GameScenesManager> value);

  constexpr void __cordl_internal_set_sceneName(::StringW value);

  /// @brief Method .ctor, addr 0x31dd294, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameScenesManager__UnloadOneScene_d__56();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameScenesManager__UnloadOneScene_d__56", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameScenesManager__UnloadOneScene_d__56(GameScenesManager__UnloadOneScene_d__56&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameScenesManager__UnloadOneScene_d__56", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameScenesManager__UnloadOneScene_d__56(GameScenesManager__UnloadOneScene_d__56 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21336 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameScenesManager> _____4__this;

  /// @brief Field sceneName, offset: 0x28, size: 0x8, def value: None
  ::StringW ___sceneName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameScenesManager__UnloadOneScene_d__56, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameScenesManager__UnloadOneScene_d__56, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameScenesManager__UnloadOneScene_d__56, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameScenesManager__UnloadOneScene_d__56, ___sceneName) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameScenesManager__UnloadOneScene_d__56, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameScenesManager/<WaitUntilTaskCompleted>d__60
class CORDL_TYPE GameScenesManager__WaitUntilTaskCompleted_d__60 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>8__1, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get___8__1, put = __cordl_internal_set___8__1)) ::GlobalNamespace::GameScenesManager___c__DisplayClass60_0* __8__1;

  /// @brief Field task, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_task, put = __cordl_internal_set_task)) ::System::Threading::Tasks::Task* task;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x31e1424, size 0x278, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__60* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x31e169c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x31e16a4, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x31e16dc, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x31e1420, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::GlobalNamespace::GameScenesManager___c__DisplayClass60_0* const& __cordl_internal_get___8__1() const;

  constexpr ::GlobalNamespace::GameScenesManager___c__DisplayClass60_0*& __cordl_internal_get___8__1();

  constexpr ::System::Threading::Tasks::Task* const& __cordl_internal_get_task() const;

  constexpr ::System::Threading::Tasks::Task*& __cordl_internal_get_task();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___8__1(::GlobalNamespace::GameScenesManager___c__DisplayClass60_0* value);

  constexpr void __cordl_internal_set_task(::System::Threading::Tasks::Task* value);

  /// @brief Method .ctor, addr 0x31dd608, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameScenesManager__WaitUntilTaskCompleted_d__60();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameScenesManager__WaitUntilTaskCompleted_d__60", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameScenesManager__WaitUntilTaskCompleted_d__60(GameScenesManager__WaitUntilTaskCompleted_d__60&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameScenesManager__WaitUntilTaskCompleted_d__60", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameScenesManager__WaitUntilTaskCompleted_d__60(GameScenesManager__WaitUntilTaskCompleted_d__60 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21337 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field task, offset: 0x20, size: 0x8, def value: None
  ::System::Threading::Tasks::Task* ___task;

  /// @brief Field <>8__1, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::GameScenesManager___c__DisplayClass60_0* _____8__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__60, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__60, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__60, ___task) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__60, _____8__1) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__60, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies GameScenesManager::SceneTransitionType, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameScenesManager
class CORDL_TYPE GameScenesManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using SceneDismissType = ::GlobalNamespace::GameScenesManager_SceneDismissType;

  using ScenePresentType = ::GlobalNamespace::GameScenesManager_ScenePresentType;

  using SceneTransitionType = ::GlobalNamespace::GameScenesManager_SceneTransitionType;

  using ScenesStackData = ::GlobalNamespace::GameScenesManager_ScenesStackData;

  using _LoadOneScene_d__55 = ::GlobalNamespace::GameScenesManager__LoadOneScene_d__55;

  using _ScenesTransitionCoroutine_d__57 = ::GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__57;

  using _UnloadOneScene_d__56 = ::GlobalNamespace::GameScenesManager__UnloadOneScene_d__56;

  using _WaitUntilTaskCompleted_d__60 = ::GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__60;

  using __c__DisplayClass43_0 = ::GlobalNamespace::GameScenesManager___c__DisplayClass43_0;

  using __c__DisplayClass44_0 = ::GlobalNamespace::GameScenesManager___c__DisplayClass44_0;

  using __c__DisplayClass45_0 = ::GlobalNamespace::GameScenesManager___c__DisplayClass45_0;

  using __c__DisplayClass46_0 = ::GlobalNamespace::GameScenesManager___c__DisplayClass46_0;

  using __c__DisplayClass47_0 = ::GlobalNamespace::GameScenesManager___c__DisplayClass47_0;

  using __c__DisplayClass48_0 = ::GlobalNamespace::GameScenesManager___c__DisplayClass48_0;

  using __c__DisplayClass49_0 = ::GlobalNamespace::GameScenesManager___c__DisplayClass49_0;

  using __c__DisplayClass50_0 = ::GlobalNamespace::GameScenesManager___c__DisplayClass50_0;

  using __c__DisplayClass51_0 = ::GlobalNamespace::GameScenesManager___c__DisplayClass51_0;

  using __c__DisplayClass52_0 = ::GlobalNamespace::GameScenesManager___c__DisplayClass52_0;

  using __c__DisplayClass60_0 = ::GlobalNamespace::GameScenesManager___c__DisplayClass60_0;

  /// @brief Field _currentSceneTransitionType, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get__currentSceneTransitionType,
                      put = __cordl_internal_set__currentSceneTransitionType)) ::GlobalNamespace::GameScenesManager_SceneTransitionType _currentSceneTransitionType;

  /// @brief Field _neverUnloadScenes, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__neverUnloadScenes, put = __cordl_internal_set__neverUnloadScenes)) ::System::Collections::Generic::HashSet_1<::StringW>* _neverUnloadScenes;

  /// @brief Field _sceneNameToSceneOperationHandlesDictionary, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__sceneNameToSceneOperationHandlesDictionary, put = __cordl_internal_set__sceneNameToSceneOperationHandlesDictionary)) ::System::Collections::Generic::
      Dictionary_2<::StringW, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>*
          _sceneNameToSceneOperationHandlesDictionary;

  /// @brief Field _scenesStack, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__scenesStack,
                      put = __cordl_internal_set__scenesStack)) ::System::Collections::Generic::List_1<::GlobalNamespace::GameScenesManager_ScenesStackData*>* _scenesStack;

  /// @brief Field _zenjectSceneLoader, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__zenjectSceneLoader, put = __cordl_internal_set__zenjectSceneLoader)) ::Zenject::ZenjectSceneLoader* _zenjectSceneLoader;

  /// @brief Field beforeDismissingScenesEvent, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_beforeDismissingScenesEvent,
                      put = __cordl_internal_set_beforeDismissingScenesEvent)) ::System::Action_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>* beforeDismissingScenesEvent;

  __declspec(property(get = get_currentSceneTransitionType)) ::GlobalNamespace::GameScenesManager_SceneTransitionType currentSceneTransitionType;

  __declspec(property(get = get_currentScenesContainer)) ::Zenject::DiContainer* currentScenesContainer;

  /// @brief Field installEarlyBindingsEvent, offset 0x40, size 0x8
  __declspec(property(
      get = __cordl_internal_get_installEarlyBindingsEvent,
      put = __cordl_internal_set_installEarlyBindingsEvent)) ::System::Action_2<::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO>, ::Zenject::DiContainer*>* installEarlyBindingsEvent;

  __declspec(property(get = get_isInTransition)) bool isInTransition;

  /// @brief Field resetAudioEvent, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_resetAudioEvent, put = __cordl_internal_set_resetAudioEvent)) ::System::Action* resetAudioEvent;

  __declspec(property(get = get_sceneNameToSceneOperationHandlesDictionary)) ::System::Collections::Generic::Dictionary_2<
      ::StringW, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>*
      sceneNameToSceneOperationHandlesDictionary;

  /// @brief Field transitionDidFinishEvent, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_transitionDidFinishEvent, put = __cordl_internal_set_transitionDidFinishEvent)) ::System::Action_3<
      ::GlobalNamespace::GameScenesManager_SceneTransitionType, ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO>, ::Zenject::DiContainer*>* transitionDidFinishEvent;

  /// @brief Field transitionDidStartEvent, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_transitionDidStartEvent,
                      put = __cordl_internal_set_transitionDidStartEvent)) ::System::Action_2<::GlobalNamespace::GameScenesManager_SceneTransitionType, float_t>* transitionDidStartEvent;

  __declspec(property(get = get_waitUntilSceneTransitionFinish)) ::UnityEngine::WaitUntil* waitUntilSceneTransitionFinish;

  /// @brief Method ActivatePresentedSceneRootObjects, addr 0x31dd610, size 0x48c, virtual false, abstract: false, final false
  static inline void ActivatePresentedSceneRootObjects(::System::Collections::Generic::IEnumerable_1<::StringW>* scenesToPresent);

  /// @brief Method ActivateScenes, addr 0x31dcf2c, size 0x1ac, virtual false, abstract: false, final false
  inline void ActivateScenes(::GlobalNamespace::ScenesTransitionSetupDataSO* scenesTransitionSetupData, float_t minDuration, ::System::Action* afterMinDurationCallback,
                             ::System::Action_1<::Zenject::DiContainer*>* finishCallback);

  /// @brief Method AppendScenes, addr 0x31dc788, size 0x3dc, virtual false, abstract: false, final false
  inline void AppendScenes(::GlobalNamespace::ScenesTransitionSetupDataSO* scenesTransitionSetupData, bool activateScenes, float_t minDuration, ::System::Action* afterMinDurationCallback,
                           ::System::Action_1<::Zenject::DiContainer*>* finishCallback);

  /// @brief Method AreAllScenesInStack, addr 0x31ddd60, size 0x2bc, virtual false, abstract: false, final false
  inline bool AreAllScenesInStack(::System::Collections::Generic::IEnumerable_1<::StringW>* sceneNames);

  /// @brief Method BackupToListAndDisableCurrentEventSystem, addr 0x31dd454, size 0x160, virtual false, abstract: false, final false
  inline void BackupToListAndDisableCurrentEventSystem(::ByRef<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::EventSystems::EventSystem>>*> list);

  /// @brief Method ClearAndOpenScenes, addr 0x31dc1a0, size 0x5e4, virtual false, abstract: false, final false
  inline void ClearAndOpenScenes(::GlobalNamespace::ScenesTransitionSetupDataSO* scenesTransitionSetupData, float_t minDuration, ::System::Action* afterMinDurationCallback,
                                 ::System::Action_1<::Zenject::DiContainer*>* finishCallback, bool unloadAllScenes);

  /// @brief Method DeactivateScenes, addr 0x31dd0dc, size 0x1ac, virtual false, abstract: false, final false
  inline void DeactivateScenes(::GlobalNamespace::ScenesTransitionSetupDataSO* scenesTransitionSetupData, float_t minDuration, ::System::Action* afterMinDurationCallback,
                               ::System::Action_1<::Zenject::DiContainer*>* finishCallback);

  /// @brief Method GetCurrentlyLoadedSceneNames, addr 0x31daaf8, size 0x1f4, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::StringW>* GetCurrentlyLoadedSceneNames();

  /// @brief Method IsAnySceneInStack, addr 0x31dda9c, size 0x2c4, virtual false, abstract: false, final false
  inline bool IsAnySceneInStack(::System::Collections::Generic::IEnumerable_1<::StringW>* sceneNames);

  /// @brief Method IsSceneActiveOrLoading, addr 0x31db57c, size 0x4, virtual false, abstract: false, final false
  inline bool IsSceneActiveOrLoading(::StringW sceneName);

  /// @brief Method IsSceneInStack, addr 0x31db000, size 0x1d8, virtual false, abstract: false, final false
  inline bool IsSceneInStack(::StringW searchSceneName);

  /// @brief Method LoadOneScene, addr 0x31db238, size 0x60, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* LoadOneScene(::StringW sceneName);

  /// @brief Method LoadSingleScene, addr 0x31dad84, size 0x27c, virtual false, abstract: false, final false
  inline void LoadSingleScene(::StringW sceneName);

  /// @brief Method Log, addr 0x31de90c, size 0x5c, virtual false, abstract: false, final false
  static inline void Log(::StringW message);

  /// @brief Method MarkSceneAsPersistent, addr 0x31d9dc0, size 0x70, virtual false, abstract: false, final false
  inline void MarkSceneAsPersistent(::StringW sceneName);

  /// @brief Method MoveGameObjectsFromContainerToSceneRoot, addr 0x31de580, size 0x38c, virtual false, abstract: false, final false
  inline void MoveGameObjectsFromContainerToSceneRoot(::StringW sceneName);

  static inline ::GlobalNamespace::GameScenesManager* New_ctor();

  /// @brief Method PopScenes, addr 0x31dbadc, size 0x1fc, virtual false, abstract: false, final false
  inline void PopScenes(float_t minDuration, ::System::Action* afterMinDurationCallback, ::System::Action_1<::Zenject::DiContainer*>* finishCallback);

  /// @brief Method PushScenes, addr 0x31db6c8, size 0x34c, virtual false, abstract: false, final false
  inline void PushScenes(::GlobalNamespace::ScenesTransitionSetupDataSO* scenesTransitionSetupData, float_t minDuration, ::System::Action* afterMinDurationCallback,
                         ::System::Action_1<::Zenject::DiContainer*>* finishCallback);

  /// @brief Method PushScenesAsync, addr 0x31db580, size 0x144, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* PushScenesAsync(::GlobalNamespace::ScenesTransitionSetupDataSO* scenesTransitionSetupData, float_t minDuration, ::System::Action* afterMinDurationCallback,
                                                           ::System::Action_1<::Zenject::DiContainer*>* finishCallback);

  /// @brief Method RegisterExternallyLoadedScene, addr 0x31dacec, size 0x98, virtual false, abstract: false, final false
  inline void
  RegisterExternallyLoadedScene(::StringW sceneName,
                                ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> asyncOperationHandle);

  /// @brief Method RemoveSceneFromStack, addr 0x31db3dc, size 0x140, virtual false, abstract: false, final false
  inline void RemoveSceneFromStack(::StringW sceneName);

  /// @brief Method RemoveScenes, addr 0x31dcb68, size 0x3c0, virtual false, abstract: false, final false
  inline void RemoveScenes(::GlobalNamespace::ScenesTransitionSetupDataSO* scenesTransitionSetupDataSo, float_t minDuration, ::System::Action* afterMinDurationCallback,
                           ::System::Action_1<::Zenject::DiContainer*>* finishCallback);

  /// @brief Method ReparentRootGameObjectsToDisabledGameObject, addr 0x31de30c, size 0x274, virtual false, abstract: false, final false
  inline void ReparentRootGameObjectsToDisabledGameObject(::StringW sceneName);

  /// @brief Method ReplaceScenes, addr 0x31dbe24, size 0x378, virtual false, abstract: false, final false
  inline void ReplaceScenes(::GlobalNamespace::ScenesTransitionSetupDataSO* scenesTransitionSetupData,
                            ::ArrayW<::System::Collections::IEnumerator*, ::Array<::System::Collections::IEnumerator*>*> beforeNewScenesActivateRoutines, float_t minDuration,
                            ::System::Action* afterMinDurationCallback, ::System::Action_1<::Zenject::DiContainer*>* finishCallback);

  /// @brief Method ReplaceScenesAsync, addr 0x31dbcdc, size 0x144, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* ReplaceScenesAsync(::GlobalNamespace::ScenesTransitionSetupDataSO* scenesTransitionSetupData,
                                                              ::ArrayW<::System::Collections::IEnumerator*, ::Array<::System::Collections::IEnumerator*>*> beforeNewScenesActivateRoutines,
                                                              float_t minDuration, ::System::Action* afterMinDurationCallback);

  /// @brief Method ScenesTransitionCoroutine, addr 0x31dba18, size 0xc4, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator*
  ScenesTransitionCoroutine(::GlobalNamespace::ScenesTransitionSetupDataSO* newScenesTransitionSetupData, ::System::Collections::Generic::IReadOnlyList_1<::StringW>* scenesToPresent,
                            ::GlobalNamespace::GameScenesManager_ScenePresentType presentType, ::System::Collections::Generic::IReadOnlyList_1<::StringW>* scenesToDismiss,
                            ::GlobalNamespace::GameScenesManager_SceneDismissType dismissType, float_t minDuration, bool canTriggerGarbageCollector, ::System::Action* afterMinDurationCallback,
                            ::System::Action_1<::Zenject::DiContainer*>* extraBindingsCallback, ::System::Action_1<::Zenject::DiContainer*>* finishCallback);

  /// @brief Method SetActiveRootObjectsInScenes, addr 0x31de01c, size 0x2f0, virtual false, abstract: false, final false
  inline void SetActiveRootObjectsInScenes(::System::Collections::Generic::IEnumerable_1<::StringW>* sceneNames, bool value);

  /// @brief Method ShouldUnloadUnusedAssets, addr 0x31dd2a4, size 0x1b0, virtual false, abstract: false, final false
  static inline bool ShouldUnloadUnusedAssets(::System::Collections::Generic::IReadOnlyList_1<::StringW>* scenesToDismiss);

  /// @brief Method UnloadOneScene, addr 0x31db51c, size 0x60, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* UnloadOneScene(::StringW sceneName);

  /// @brief Method UnloadSingleScene, addr 0x31db298, size 0x144, virtual false, abstract: false, final false
  inline void UnloadSingleScene(::StringW sceneName);

  /// @brief Method WaitUntilTaskCompleted, addr 0x31dd5b4, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Collections::IEnumerator* WaitUntilTaskCompleted(::System::Threading::Tasks::Task* task);

  constexpr ::GlobalNamespace::GameScenesManager_SceneTransitionType const& __cordl_internal_get__currentSceneTransitionType() const;

  constexpr ::GlobalNamespace::GameScenesManager_SceneTransitionType& __cordl_internal_get__currentSceneTransitionType();

  constexpr ::System::Collections::Generic::HashSet_1<::StringW>* const& __cordl_internal_get__neverUnloadScenes() const;

  constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& __cordl_internal_get__neverUnloadScenes();

  constexpr ::System::Collections::Generic::Dictionary_2<
      ::StringW, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>* const&
  __cordl_internal_get__sceneNameToSceneOperationHandlesDictionary() const;

  constexpr ::System::Collections::Generic::Dictionary_2<
      ::StringW, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>*&
  __cordl_internal_get__sceneNameToSceneOperationHandlesDictionary();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GameScenesManager_ScenesStackData*>* const& __cordl_internal_get__scenesStack() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GameScenesManager_ScenesStackData*>*& __cordl_internal_get__scenesStack();

  constexpr ::Zenject::ZenjectSceneLoader* const& __cordl_internal_get__zenjectSceneLoader() const;

  constexpr ::Zenject::ZenjectSceneLoader*& __cordl_internal_get__zenjectSceneLoader();

  constexpr ::System::Action_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>* const& __cordl_internal_get_beforeDismissingScenesEvent() const;

  constexpr ::System::Action_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>*& __cordl_internal_get_beforeDismissingScenesEvent();

  constexpr ::System::Action_2<::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO>, ::Zenject::DiContainer*>* const& __cordl_internal_get_installEarlyBindingsEvent() const;

  constexpr ::System::Action_2<::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO>, ::Zenject::DiContainer*>*& __cordl_internal_get_installEarlyBindingsEvent();

  constexpr ::System::Action* const& __cordl_internal_get_resetAudioEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_resetAudioEvent();

  constexpr ::System::Action_3<::GlobalNamespace::GameScenesManager_SceneTransitionType, ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO>, ::Zenject::DiContainer*>* const&
  __cordl_internal_get_transitionDidFinishEvent() const;

  constexpr ::System::Action_3<::GlobalNamespace::GameScenesManager_SceneTransitionType, ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO>, ::Zenject::DiContainer*>*&
  __cordl_internal_get_transitionDidFinishEvent();

  constexpr ::System::Action_2<::GlobalNamespace::GameScenesManager_SceneTransitionType, float_t>* const& __cordl_internal_get_transitionDidStartEvent() const;

  constexpr ::System::Action_2<::GlobalNamespace::GameScenesManager_SceneTransitionType, float_t>*& __cordl_internal_get_transitionDidStartEvent();

  constexpr void __cordl_internal_set__currentSceneTransitionType(::GlobalNamespace::GameScenesManager_SceneTransitionType value);

  constexpr void __cordl_internal_set__neverUnloadScenes(::System::Collections::Generic::HashSet_1<::StringW>* value);

  constexpr void __cordl_internal_set__sceneNameToSceneOperationHandlesDictionary(
      ::System::Collections::Generic::Dictionary_2<
          ::StringW, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>* value);

  constexpr void __cordl_internal_set__scenesStack(::System::Collections::Generic::List_1<::GlobalNamespace::GameScenesManager_ScenesStackData*>* value);

  constexpr void __cordl_internal_set__zenjectSceneLoader(::Zenject::ZenjectSceneLoader* value);

  constexpr void __cordl_internal_set_beforeDismissingScenesEvent(::System::Action_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>* value);

  constexpr void __cordl_internal_set_installEarlyBindingsEvent(::System::Action_2<::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO>, ::Zenject::DiContainer*>* value);

  constexpr void __cordl_internal_set_resetAudioEvent(::System::Action* value);

  constexpr void __cordl_internal_set_transitionDidFinishEvent(
      ::System::Action_3<::GlobalNamespace::GameScenesManager_SceneTransitionType, ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO>, ::Zenject::DiContainer*>* value);

  constexpr void __cordl_internal_set_transitionDidStartEvent(::System::Action_2<::GlobalNamespace::GameScenesManager_SceneTransitionType, float_t>* value);

  /// @brief Method .ctor, addr 0x31de968, size 0x12c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <get_waitUntilSceneTransitionFinish>b__27_0, addr 0x31dea94, size 0x10, virtual false, abstract: false, final false
  inline bool _get_waitUntilSceneTransitionFinish_b__27_0();

  /// @brief Method add_beforeDismissingScenesEvent, addr 0x31d9e30, size 0xc0, virtual false, abstract: false, final false
  inline void add_beforeDismissingScenesEvent(::System::Action_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>* value);

  /// @brief Method add_installEarlyBindingsEvent, addr 0x31da710, size 0xc0, virtual false, abstract: false, final false
  inline void add_installEarlyBindingsEvent(::System::Action_2<::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO>, ::Zenject::DiContainer*>* value);

  /// @brief Method add_resetAudioEvent, addr 0x31da890, size 0xac, virtual false, abstract: false, final false
  inline void add_resetAudioEvent(::System::Action* value);

  /// @brief Method add_transitionDidFinishEvent, addr 0x31da590, size 0xc0, virtual false, abstract: false, final false
  inline void
  add_transitionDidFinishEvent(::System::Action_3<::GlobalNamespace::GameScenesManager_SceneTransitionType, ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO>, ::Zenject::DiContainer*>* value);

  /// @brief Method add_transitionDidStartEvent, addr 0x31da410, size 0xc0, virtual false, abstract: false, final false
  inline void add_transitionDidStartEvent(::System::Action_2<::GlobalNamespace::GameScenesManager_SceneTransitionType, float_t>* value);

  /// @brief Method get_currentSceneTransitionType, addr 0x31daa44, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::GameScenesManager_SceneTransitionType get_currentSceneTransitionType();

  /// @brief Method get_currentScenesContainer, addr 0x31da9e8, size 0x5c, virtual false, abstract: false, final false
  inline ::Zenject::DiContainer* get_currentScenesContainer();

  /// @brief Method get_isInTransition, addr 0x31d94dc, size 0x10, virtual false, abstract: false, final false
  inline bool get_isInTransition();

  /// @brief Method get_sceneNameToSceneOperationHandlesDictionary, addr 0x31daaf0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW,
                                                      ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>*
  get_sceneNameToSceneOperationHandlesDictionary();

  /// @brief Method get_waitUntilSceneTransitionFinish, addr 0x31daa4c, size 0xa4, virtual false, abstract: false, final false
  inline ::UnityEngine::WaitUntil* get_waitUntilSceneTransitionFinish();

  /// @brief Method remove_beforeDismissingScenesEvent, addr 0x31d9248, size 0xc0, virtual false, abstract: false, final false
  inline void remove_beforeDismissingScenesEvent(::System::Action_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>* value);

  /// @brief Method remove_installEarlyBindingsEvent, addr 0x31da7d0, size 0xc0, virtual false, abstract: false, final false
  inline void remove_installEarlyBindingsEvent(::System::Action_2<::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO>, ::Zenject::DiContainer*>* value);

  /// @brief Method remove_resetAudioEvent, addr 0x31da93c, size 0xac, virtual false, abstract: false, final false
  inline void remove_resetAudioEvent(::System::Action* value);

  /// @brief Method remove_transitionDidFinishEvent, addr 0x31da650, size 0xc0, virtual false, abstract: false, final false
  inline void remove_transitionDidFinishEvent(
      ::System::Action_3<::GlobalNamespace::GameScenesManager_SceneTransitionType, ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO>, ::Zenject::DiContainer*>* value);

  /// @brief Method remove_transitionDidStartEvent, addr 0x31da4d0, size 0xc0, virtual false, abstract: false, final false
  inline void remove_transitionDidStartEvent(::System::Action_2<::GlobalNamespace::GameScenesManager_SceneTransitionType, float_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameScenesManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameScenesManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameScenesManager(GameScenesManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameScenesManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameScenesManager(GameScenesManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21338 };

  /// @brief Field kEmptyTransitionSceneName offset 0xffffffff size 0x8
  static constexpr ::ConstString kEmptyTransitionSceneName{ u"EmptyTransition" };

  /// @brief Field kLongTransitionLength offset 0xffffffff size 0x4
  static constexpr float_t kLongTransitionLength{ static_cast<float_t>(1.3f) };

  /// @brief Field kRootContainerGOName offset 0xffffffff size 0x8
  static constexpr ::ConstString kRootContainerGOName{ u"RootContainer" };

  /// @brief Field kShortTransitionLength offset 0xffffffff size 0x4
  static constexpr float_t kShortTransitionLength{ static_cast<float_t>(0.35f) };

  /// @brief Field kStandardTransitionLength offset 0xffffffff size 0x4
  static constexpr float_t kStandardTransitionLength{ static_cast<float_t>(0.7f) };

  /// @brief Field _zenjectSceneLoader, offset: 0x20, size: 0x8, def value: None
  ::Zenject::ZenjectSceneLoader* ____zenjectSceneLoader;

  /// @brief Field transitionDidStartEvent, offset: 0x28, size: 0x8, def value: None
  ::System::Action_2<::GlobalNamespace::GameScenesManager_SceneTransitionType, float_t>* ___transitionDidStartEvent;

  /// @brief Field beforeDismissingScenesEvent, offset: 0x30, size: 0x8, def value: None
  ::System::Action_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>* ___beforeDismissingScenesEvent;

  /// @brief Field transitionDidFinishEvent, offset: 0x38, size: 0x8, def value: None
  ::System::Action_3<::GlobalNamespace::GameScenesManager_SceneTransitionType, ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO>, ::Zenject::DiContainer*>* ___transitionDidFinishEvent;

  /// @brief Field installEarlyBindingsEvent, offset: 0x40, size: 0x8, def value: None
  ::System::Action_2<::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO>, ::Zenject::DiContainer*>* ___installEarlyBindingsEvent;

  /// @brief Field resetAudioEvent, offset: 0x48, size: 0x8, def value: None
  ::System::Action* ___resetAudioEvent;

  /// @brief Field _currentSceneTransitionType, offset: 0x50, size: 0x4, def value: None
  ::GlobalNamespace::GameScenesManager_SceneTransitionType ____currentSceneTransitionType;

  /// @brief Field _scenesStack, offset: 0x58, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::GameScenesManager_ScenesStackData*>* ____scenesStack;

  /// @brief Field _neverUnloadScenes, offset: 0x60, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::StringW>* ____neverUnloadScenes;

  /// @brief Field _sceneNameToSceneOperationHandlesDictionary, offset: 0x68, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW,
                                               ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>*
      ____sceneNameToSceneOperationHandlesDictionary;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameScenesManager, ____zenjectSceneLoader) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameScenesManager, ___transitionDidStartEvent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameScenesManager, ___beforeDismissingScenesEvent) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameScenesManager, ___transitionDidFinishEvent) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameScenesManager, ___installEarlyBindingsEvent) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameScenesManager, ___resetAudioEvent) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameScenesManager, ____currentSceneTransitionType) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameScenesManager, ____scenesStack) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameScenesManager, ____neverUnloadScenes) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameScenesManager, ____sceneNameToSceneOperationHandlesDictionary) == 0x68, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameScenesManager, 0x70>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameScenesManager_SceneDismissType, "", "GameScenesManager/SceneDismissType");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameScenesManager_ScenePresentType, "", "GameScenesManager/ScenePresentType");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameScenesManager_SceneTransitionType, "", "GameScenesManager/SceneTransitionType");
NEED_NO_BOX(::GlobalNamespace::GameScenesManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameScenesManager*, "", "GameScenesManager");
NEED_NO_BOX(::GlobalNamespace::GameScenesManager_ScenesStackData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameScenesManager_ScenesStackData*, "", "GameScenesManager/ScenesStackData");
NEED_NO_BOX(::GlobalNamespace::GameScenesManager__LoadOneScene_d__55);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameScenesManager__LoadOneScene_d__55*, "", "GameScenesManager/<LoadOneScene>d__55");
NEED_NO_BOX(::GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__57);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameScenesManager__ScenesTransitionCoroutine_d__57*, "", "GameScenesManager/<ScenesTransitionCoroutine>d__57");
NEED_NO_BOX(::GlobalNamespace::GameScenesManager__UnloadOneScene_d__56);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameScenesManager__UnloadOneScene_d__56*, "", "GameScenesManager/<UnloadOneScene>d__56");
NEED_NO_BOX(::GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__60);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameScenesManager__WaitUntilTaskCompleted_d__60*, "", "GameScenesManager/<WaitUntilTaskCompleted>d__60");
NEED_NO_BOX(::GlobalNamespace::GameScenesManager___c__DisplayClass43_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameScenesManager___c__DisplayClass43_0*, "", "GameScenesManager/<>c__DisplayClass43_0");
NEED_NO_BOX(::GlobalNamespace::GameScenesManager___c__DisplayClass44_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameScenesManager___c__DisplayClass44_0*, "", "GameScenesManager/<>c__DisplayClass44_0");
NEED_NO_BOX(::GlobalNamespace::GameScenesManager___c__DisplayClass45_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameScenesManager___c__DisplayClass45_0*, "", "GameScenesManager/<>c__DisplayClass45_0");
NEED_NO_BOX(::GlobalNamespace::GameScenesManager___c__DisplayClass46_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameScenesManager___c__DisplayClass46_0*, "", "GameScenesManager/<>c__DisplayClass46_0");
NEED_NO_BOX(::GlobalNamespace::GameScenesManager___c__DisplayClass47_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameScenesManager___c__DisplayClass47_0*, "", "GameScenesManager/<>c__DisplayClass47_0");
NEED_NO_BOX(::GlobalNamespace::GameScenesManager___c__DisplayClass48_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameScenesManager___c__DisplayClass48_0*, "", "GameScenesManager/<>c__DisplayClass48_0");
NEED_NO_BOX(::GlobalNamespace::GameScenesManager___c__DisplayClass49_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameScenesManager___c__DisplayClass49_0*, "", "GameScenesManager/<>c__DisplayClass49_0");
NEED_NO_BOX(::GlobalNamespace::GameScenesManager___c__DisplayClass50_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameScenesManager___c__DisplayClass50_0*, "", "GameScenesManager/<>c__DisplayClass50_0");
NEED_NO_BOX(::GlobalNamespace::GameScenesManager___c__DisplayClass51_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameScenesManager___c__DisplayClass51_0*, "", "GameScenesManager/<>c__DisplayClass51_0");
NEED_NO_BOX(::GlobalNamespace::GameScenesManager___c__DisplayClass52_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameScenesManager___c__DisplayClass52_0*, "", "GameScenesManager/<>c__DisplayClass52_0");
NEED_NO_BOX(::GlobalNamespace::GameScenesManager___c__DisplayClass60_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameScenesManager___c__DisplayClass60_0*, "", "GameScenesManager/<>c__DisplayClass60_0");

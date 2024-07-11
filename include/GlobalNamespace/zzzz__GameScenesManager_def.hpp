#pragma once
// IWYU pragma private; include "GlobalNamespace/GameScenesManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GameScenesManager_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__SceneInstance_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GameScenesManager)
namespace GlobalNamespace {
class SceneInfo;
}
namespace GlobalNamespace {
class ScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
struct __GameScenesManager__SceneDismissType;
}
namespace GlobalNamespace {
struct __GameScenesManager__ScenePresentType;
}
namespace GlobalNamespace {
class __GameScenesManager__ScenesStackData;
}
namespace GlobalNamespace {
class __GameScenesManager___ScenesTransitionCoroutine_d__42;
}
namespace GlobalNamespace {
class __GameScenesManager___WaitUntilTaskCompleted_d__43;
}
namespace GlobalNamespace {
class __GameScenesManager____c__DisplayClass34_0;
}
namespace GlobalNamespace {
class __GameScenesManager____c__DisplayClass35_0;
}
namespace GlobalNamespace {
class __GameScenesManager____c__DisplayClass36_0;
}
namespace GlobalNamespace {
class __GameScenesManager____c__DisplayClass37_0;
}
namespace GlobalNamespace {
class __GameScenesManager____c__DisplayClass38_0;
}
namespace GlobalNamespace {
class __GameScenesManager____c__DisplayClass39_0;
}
namespace GlobalNamespace {
class __GameScenesManager____c__DisplayClass43_0;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections {
class IEnumerator;
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
struct __GameScenesManager__SceneDismissType;
}
namespace GlobalNamespace {
struct __GameScenesManager__ScenePresentType;
}
namespace GlobalNamespace {
class GameScenesManager;
}
namespace GlobalNamespace {
class __GameScenesManager__ScenesStackData;
}
namespace GlobalNamespace {
class __GameScenesManager___ScenesTransitionCoroutine_d__42;
}
namespace GlobalNamespace {
class __GameScenesManager___WaitUntilTaskCompleted_d__43;
}
namespace GlobalNamespace {
class __GameScenesManager____c__DisplayClass34_0;
}
namespace GlobalNamespace {
class __GameScenesManager____c__DisplayClass35_0;
}
namespace GlobalNamespace {
class __GameScenesManager____c__DisplayClass36_0;
}
namespace GlobalNamespace {
class __GameScenesManager____c__DisplayClass37_0;
}
namespace GlobalNamespace {
class __GameScenesManager____c__DisplayClass38_0;
}
namespace GlobalNamespace {
class __GameScenesManager____c__DisplayClass39_0;
}
namespace GlobalNamespace {
class __GameScenesManager____c__DisplayClass43_0;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__GameScenesManager__SceneDismissType);
MARK_VAL_T(::GlobalNamespace::__GameScenesManager__ScenePresentType);
MARK_REF_PTR_T(::GlobalNamespace::GameScenesManager);
MARK_REF_PTR_T(::GlobalNamespace::__GameScenesManager__ScenesStackData);
MARK_REF_PTR_T(::GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42);
MARK_REF_PTR_T(::GlobalNamespace::__GameScenesManager___WaitUntilTaskCompleted_d__43);
MARK_REF_PTR_T(::GlobalNamespace::__GameScenesManager____c__DisplayClass34_0);
MARK_REF_PTR_T(::GlobalNamespace::__GameScenesManager____c__DisplayClass35_0);
MARK_REF_PTR_T(::GlobalNamespace::__GameScenesManager____c__DisplayClass36_0);
MARK_REF_PTR_T(::GlobalNamespace::__GameScenesManager____c__DisplayClass37_0);
MARK_REF_PTR_T(::GlobalNamespace::__GameScenesManager____c__DisplayClass38_0);
MARK_REF_PTR_T(::GlobalNamespace::__GameScenesManager____c__DisplayClass39_0);
MARK_REF_PTR_T(::GlobalNamespace::__GameScenesManager____c__DisplayClass43_0);
// Type: ::ScenesStackData
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::GameScenesManager::ScenesStackData*
class CORDL_TYPE __GameScenesManager__ScenesStackData : public ::System::Object {
public:
  // Declarations
  /// @brief Field <container>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__container_k__BackingField, put = __cordl_internal_set__container_k__BackingField))::Zenject::DiContainer* _container_k__BackingField;

  /// @brief Field <sceneNames>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__sceneNames_k__BackingField,
                      put = __cordl_internal_set__sceneNames_k__BackingField))::System::Collections::Generic::List_1<::StringW>* _sceneNames_k__BackingField;

  __declspec(property(get = get_container, put = set_container))::Zenject::DiContainer* container;

  __declspec(property(get = get_sceneNames, put = set_sceneNames))::System::Collections::Generic::List_1<::StringW>* sceneNames;

  static inline ::GlobalNamespace::__GameScenesManager__ScenesStackData* New_ctor(::System::Collections::Generic::List_1<::StringW>* sceneNames);

  /// @brief Method SetDiContainer, addr 0x107c868, size 0x8, virtual false, abstract: false, final false
  inline void SetDiContainer(::Zenject::DiContainer* container);

  constexpr ::Zenject::DiContainer*& __cordl_internal_get__container_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& __cordl_internal_get__container_k__BackingField() const;

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get__sceneNames_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get__sceneNames_k__BackingField() const;

  constexpr void __cordl_internal_set__container_k__BackingField(::Zenject::DiContainer* value);

  constexpr void __cordl_internal_set__sceneNames_k__BackingField(::System::Collections::Generic::List_1<::StringW>* value);

  /// @brief Method .ctor, addr 0x107a39c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::List_1<::StringW>* sceneNames);

  /// @brief Method get_container, addr 0x107c858, size 0x8, virtual false, abstract: false, final false
  inline ::Zenject::DiContainer* get_container();

  /// @brief Method get_sceneNames, addr 0x107c848, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::StringW>* get_sceneNames();

  /// @brief Method set_container, addr 0x107c860, size 0x8, virtual false, abstract: false, final false
  inline void set_container(::Zenject::DiContainer* value);

  /// @brief Method set_sceneNames, addr 0x107c850, size 0x8, virtual false, abstract: false, final false
  inline void set_sceneNames(::System::Collections::Generic::List_1<::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GameScenesManager__ScenesStackData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__GameScenesManager__ScenesStackData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GameScenesManager__ScenesStackData(__GameScenesManager__ScenesStackData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GameScenesManager__ScenesStackData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GameScenesManager__ScenesStackData(__GameScenesManager__ScenesStackData const&) = delete;

  /// @brief Field <sceneNames>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ____sceneNames_k__BackingField;

  /// @brief Field <container>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::Zenject::DiContainer* ____container_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GameScenesManager__ScenesStackData, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameScenesManager__ScenesStackData, ____sceneNames_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameScenesManager__ScenesStackData, ____container_k__BackingField) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::ScenePresentType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::GameScenesManager::ScenePresentType
struct CORDL_TYPE __GameScenesManager__ScenePresentType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____GameScenesManager__ScenePresentType_Unwrapped
  enum struct ____GameScenesManager__ScenePresentType_Unwrapped : int32_t {
    __E_DoNotLoad = static_cast<int32_t>(0x0),
    __E_Load = static_cast<int32_t>(0x1),
    __E_Activate = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____GameScenesManager__ScenePresentType_Unwrapped() const noexcept {
    return static_cast<____GameScenesManager__ScenePresentType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __GameScenesManager__ScenePresentType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __GameScenesManager__ScenePresentType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Activate value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__GameScenesManager__ScenePresentType const Activate;

  /// @brief Field DoNotLoad value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__GameScenesManager__ScenePresentType const DoNotLoad;

  /// @brief Field Load value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__GameScenesManager__ScenePresentType const Load;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GameScenesManager__ScenePresentType, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameScenesManager__ScenePresentType, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::SceneDismissType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::GameScenesManager::SceneDismissType
struct CORDL_TYPE __GameScenesManager__SceneDismissType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____GameScenesManager__SceneDismissType_Unwrapped
  enum struct ____GameScenesManager__SceneDismissType_Unwrapped : int32_t {
    __E_DoNotUnload = static_cast<int32_t>(0x0),
    __E_Unload = static_cast<int32_t>(0x1),
    __E_Deactivate = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____GameScenesManager__SceneDismissType_Unwrapped() const noexcept {
    return static_cast<____GameScenesManager__SceneDismissType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __GameScenesManager__SceneDismissType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __GameScenesManager__SceneDismissType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Deactivate value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__GameScenesManager__SceneDismissType const Deactivate;

  /// @brief Field DoNotUnload value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__GameScenesManager__SceneDismissType const DoNotUnload;

  /// @brief Field Unload value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__GameScenesManager__SceneDismissType const Unload;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GameScenesManager__SceneDismissType, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameScenesManager__SceneDismissType, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass34_0
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::GameScenesManager::<>c__DisplayClass34_0*
class CORDL_TYPE __GameScenesManager____c__DisplayClass34_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::GameScenesManager> __4__this;

  /// @brief Field finishCallback, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_finishCallback, put = __cordl_internal_set_finishCallback))::System::Action_1<::Zenject::DiContainer*>* finishCallback;

  /// @brief Field scenesStackData, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_scenesStackData, put = __cordl_internal_set_scenesStackData))::GlobalNamespace::__GameScenesManager__ScenesStackData* scenesStackData;

  /// @brief Field scenesTransitionSetupData, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_scenesTransitionSetupData,
                      put = __cordl_internal_set_scenesTransitionSetupData))::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO> scenesTransitionSetupData;

  static inline ::GlobalNamespace::__GameScenesManager____c__DisplayClass34_0* New_ctor();

  /// @brief Method <PushScenes>b__0, addr 0x107c870, size 0x6c, virtual false, abstract: false, final false
  inline void _PushScenes_b__0(::Zenject::DiContainer* container);

  /// @brief Method <PushScenes>b__1, addr 0x107ca08, size 0x78, virtual false, abstract: false, final false
  inline void _PushScenes_b__1(::Zenject::DiContainer* container);

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager>& __cordl_internal_get___4__this();

  constexpr ::System::Action_1<::Zenject::DiContainer*>*& __cordl_internal_get_finishCallback();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::Zenject::DiContainer*>*> const& __cordl_internal_get_finishCallback() const;

  constexpr ::GlobalNamespace::__GameScenesManager__ScenesStackData*& __cordl_internal_get_scenesStackData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__GameScenesManager__ScenesStackData*> const& __cordl_internal_get_scenesStackData() const;

  constexpr ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO> const& __cordl_internal_get_scenesTransitionSetupData() const;

  constexpr ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO>& __cordl_internal_get_scenesTransitionSetupData();

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GameScenesManager> value);

  constexpr void __cordl_internal_set_finishCallback(::System::Action_1<::Zenject::DiContainer*>* value);

  constexpr void __cordl_internal_set_scenesStackData(::GlobalNamespace::__GameScenesManager__ScenesStackData* value);

  constexpr void __cordl_internal_set_scenesTransitionSetupData(::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO> value);

  /// @brief Method .ctor, addr 0x107a26c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GameScenesManager____c__DisplayClass34_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__GameScenesManager____c__DisplayClass34_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GameScenesManager____c__DisplayClass34_0(__GameScenesManager____c__DisplayClass34_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GameScenesManager____c__DisplayClass34_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GameScenesManager____c__DisplayClass34_0(__GameScenesManager____c__DisplayClass34_0 const&) = delete;

  /// @brief Field scenesStackData, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::__GameScenesManager__ScenesStackData* ___scenesStackData;

  /// @brief Field scenesTransitionSetupData, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO> ___scenesTransitionSetupData;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameScenesManager> _____4__this;

  /// @brief Field finishCallback, offset: 0x28, size: 0x8, def value: None
  ::System::Action_1<::Zenject::DiContainer*>* ___finishCallback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GameScenesManager____c__DisplayClass34_0, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameScenesManager____c__DisplayClass34_0, ___scenesStackData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameScenesManager____c__DisplayClass34_0, ___scenesTransitionSetupData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameScenesManager____c__DisplayClass34_0, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameScenesManager____c__DisplayClass34_0, ___finishCallback) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass35_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::GameScenesManager::<>c__DisplayClass35_0*
class CORDL_TYPE __GameScenesManager____c__DisplayClass35_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::GameScenesManager> __4__this;

  /// @brief Field finishCallback, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_finishCallback, put = __cordl_internal_set_finishCallback))::System::Action_1<::Zenject::DiContainer*>* finishCallback;

  static inline ::GlobalNamespace::__GameScenesManager____c__DisplayClass35_0* New_ctor();

  /// @brief Method <PopScenes>b__0, addr 0x107ca80, size 0xa8, virtual false, abstract: false, final false
  inline void _PopScenes_b__0(::Zenject::DiContainer* container);

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager>& __cordl_internal_get___4__this();

  constexpr ::System::Action_1<::Zenject::DiContainer*>*& __cordl_internal_get_finishCallback();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::Zenject::DiContainer*>*> const& __cordl_internal_get_finishCallback() const;

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GameScenesManager> value);

  constexpr void __cordl_internal_set_finishCallback(::System::Action_1<::Zenject::DiContainer*>* value);

  /// @brief Method .ctor, addr 0x107a67c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GameScenesManager____c__DisplayClass35_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__GameScenesManager____c__DisplayClass35_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GameScenesManager____c__DisplayClass35_0(__GameScenesManager____c__DisplayClass35_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GameScenesManager____c__DisplayClass35_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GameScenesManager____c__DisplayClass35_0(__GameScenesManager____c__DisplayClass35_0 const&) = delete;

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameScenesManager> _____4__this;

  /// @brief Field finishCallback, offset: 0x18, size: 0x8, def value: None
  ::System::Action_1<::Zenject::DiContainer*>* ___finishCallback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GameScenesManager____c__DisplayClass35_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameScenesManager____c__DisplayClass35_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameScenesManager____c__DisplayClass35_0, ___finishCallback) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass36_0
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::GameScenesManager::<>c__DisplayClass36_0*
class CORDL_TYPE __GameScenesManager____c__DisplayClass36_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::GameScenesManager> __4__this;

  /// @brief Field <>9__1, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get___9__1, put = __cordl_internal_set___9__1))::System::Action_1<::Zenject::DiContainer*>* __9__1;

  /// @brief Field <>9__2, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get___9__2, put = __cordl_internal_set___9__2))::System::Action_1<::Zenject::DiContainer*>* __9__2;

  /// @brief Field emptyTransitionSceneNameList, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_emptyTransitionSceneNameList,
                      put = __cordl_internal_set_emptyTransitionSceneNameList))::System::Collections::Generic::List_1<::StringW>* emptyTransitionSceneNameList;

  /// @brief Field finishCallback, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_finishCallback, put = __cordl_internal_set_finishCallback))::System::Action_1<::Zenject::DiContainer*>* finishCallback;

  /// @brief Field newSceneNames, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_newSceneNames, put = __cordl_internal_set_newSceneNames))::System::Collections::Generic::List_1<::StringW>* newSceneNames;

  /// @brief Field scenesStackData, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_scenesStackData, put = __cordl_internal_set_scenesStackData))::GlobalNamespace::__GameScenesManager__ScenesStackData* scenesStackData;

  /// @brief Field scenesTransitionSetupData, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_scenesTransitionSetupData,
                      put = __cordl_internal_set_scenesTransitionSetupData))::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO> scenesTransitionSetupData;

  static inline ::GlobalNamespace::__GameScenesManager____c__DisplayClass36_0* New_ctor();

  /// @brief Method <ReplaceScenes>b__0, addr 0x107cb28, size 0x128, virtual false, abstract: false, final false
  inline void _ReplaceScenes_b__0(::Zenject::DiContainer* emptySceneContainer);

  /// @brief Method <ReplaceScenes>b__1, addr 0x107cc50, size 0x6c, virtual false, abstract: false, final false
  inline void _ReplaceScenes_b__1(::Zenject::DiContainer* container);

  /// @brief Method <ReplaceScenes>b__2, addr 0x107ccbc, size 0x78, virtual false, abstract: false, final false
  inline void _ReplaceScenes_b__2(::Zenject::DiContainer* container);

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager>& __cordl_internal_get___4__this();

  constexpr ::System::Action_1<::Zenject::DiContainer*>*& __cordl_internal_get___9__1();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::Zenject::DiContainer*>*> const& __cordl_internal_get___9__1() const;

  constexpr ::System::Action_1<::Zenject::DiContainer*>*& __cordl_internal_get___9__2();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::Zenject::DiContainer*>*> const& __cordl_internal_get___9__2() const;

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_emptyTransitionSceneNameList();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get_emptyTransitionSceneNameList() const;

  constexpr ::System::Action_1<::Zenject::DiContainer*>*& __cordl_internal_get_finishCallback();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::Zenject::DiContainer*>*> const& __cordl_internal_get_finishCallback() const;

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_newSceneNames();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get_newSceneNames() const;

  constexpr ::GlobalNamespace::__GameScenesManager__ScenesStackData*& __cordl_internal_get_scenesStackData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__GameScenesManager__ScenesStackData*> const& __cordl_internal_get_scenesStackData() const;

  constexpr ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO> const& __cordl_internal_get_scenesTransitionSetupData() const;

  constexpr ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO>& __cordl_internal_get_scenesTransitionSetupData();

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GameScenesManager> value);

  constexpr void __cordl_internal_set___9__1(::System::Action_1<::Zenject::DiContainer*>* value);

  constexpr void __cordl_internal_set___9__2(::System::Action_1<::Zenject::DiContainer*>* value);

  constexpr void __cordl_internal_set_emptyTransitionSceneNameList(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set_finishCallback(::System::Action_1<::Zenject::DiContainer*>* value);

  constexpr void __cordl_internal_set_newSceneNames(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set_scenesStackData(::GlobalNamespace::__GameScenesManager__ScenesStackData* value);

  constexpr void __cordl_internal_set_scenesTransitionSetupData(::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO> value);

  /// @brief Method .ctor, addr 0x107a9dc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GameScenesManager____c__DisplayClass36_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__GameScenesManager____c__DisplayClass36_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GameScenesManager____c__DisplayClass36_0(__GameScenesManager____c__DisplayClass36_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GameScenesManager____c__DisplayClass36_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GameScenesManager____c__DisplayClass36_0(__GameScenesManager____c__DisplayClass36_0 const&) = delete;

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameScenesManager> _____4__this;

  /// @brief Field scenesTransitionSetupData, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO> ___scenesTransitionSetupData;

  /// @brief Field newSceneNames, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ___newSceneNames;

  /// @brief Field emptyTransitionSceneNameList, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ___emptyTransitionSceneNameList;

  /// @brief Field scenesStackData, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::__GameScenesManager__ScenesStackData* ___scenesStackData;

  /// @brief Field finishCallback, offset: 0x38, size: 0x8, def value: None
  ::System::Action_1<::Zenject::DiContainer*>* ___finishCallback;

  /// @brief Field <>9__1, offset: 0x40, size: 0x8, def value: None
  ::System::Action_1<::Zenject::DiContainer*>* _____9__1;

  /// @brief Field <>9__2, offset: 0x48, size: 0x8, def value: None
  ::System::Action_1<::Zenject::DiContainer*>* _____9__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GameScenesManager____c__DisplayClass36_0, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameScenesManager____c__DisplayClass36_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameScenesManager____c__DisplayClass36_0, ___scenesTransitionSetupData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameScenesManager____c__DisplayClass36_0, ___newSceneNames) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameScenesManager____c__DisplayClass36_0, ___emptyTransitionSceneNameList) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameScenesManager____c__DisplayClass36_0, ___scenesStackData) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameScenesManager____c__DisplayClass36_0, ___finishCallback) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameScenesManager____c__DisplayClass36_0, _____9__1) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameScenesManager____c__DisplayClass36_0, _____9__2) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass37_0
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::GameScenesManager::<>c__DisplayClass37_0*
class CORDL_TYPE __GameScenesManager____c__DisplayClass37_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::GameScenesManager> __4__this;

  /// @brief Field <>9__1, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get___9__1, put = __cordl_internal_set___9__1))::System::Action_1<::Zenject::DiContainer*>* __9__1;

  /// @brief Field <>9__2, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get___9__2, put = __cordl_internal_set___9__2))::System::Action_1<::Zenject::DiContainer*>* __9__2;

  /// @brief Field emptyTransitionSceneNameList, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_emptyTransitionSceneNameList,
                      put = __cordl_internal_set_emptyTransitionSceneNameList))::System::Collections::Generic::List_1<::StringW>* emptyTransitionSceneNameList;

  /// @brief Field finishCallback, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_finishCallback, put = __cordl_internal_set_finishCallback))::System::Action_1<::Zenject::DiContainer*>* finishCallback;

  /// @brief Field newSceneNames, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_newSceneNames, put = __cordl_internal_set_newSceneNames))::System::Collections::Generic::List_1<::StringW>* newSceneNames;

  /// @brief Field scenesStackData, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_scenesStackData, put = __cordl_internal_set_scenesStackData))::GlobalNamespace::__GameScenesManager__ScenesStackData* scenesStackData;

  /// @brief Field scenesTransitionSetupData, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_scenesTransitionSetupData,
                      put = __cordl_internal_set_scenesTransitionSetupData))::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO> scenesTransitionSetupData;

  static inline ::GlobalNamespace::__GameScenesManager____c__DisplayClass37_0* New_ctor();

  /// @brief Method <ClearAndOpenScenes>b__0, addr 0x107cd34, size 0x128, virtual false, abstract: false, final false
  inline void _ClearAndOpenScenes_b__0(::Zenject::DiContainer* emptySceneContainer);

  /// @brief Method <ClearAndOpenScenes>b__1, addr 0x107ce5c, size 0x6c, virtual false, abstract: false, final false
  inline void _ClearAndOpenScenes_b__1(::Zenject::DiContainer* container);

  /// @brief Method <ClearAndOpenScenes>b__2, addr 0x107cec8, size 0x78, virtual false, abstract: false, final false
  inline void _ClearAndOpenScenes_b__2(::Zenject::DiContainer* container);

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager>& __cordl_internal_get___4__this();

  constexpr ::System::Action_1<::Zenject::DiContainer*>*& __cordl_internal_get___9__1();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::Zenject::DiContainer*>*> const& __cordl_internal_get___9__1() const;

  constexpr ::System::Action_1<::Zenject::DiContainer*>*& __cordl_internal_get___9__2();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::Zenject::DiContainer*>*> const& __cordl_internal_get___9__2() const;

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_emptyTransitionSceneNameList();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get_emptyTransitionSceneNameList() const;

  constexpr ::System::Action_1<::Zenject::DiContainer*>*& __cordl_internal_get_finishCallback();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::Zenject::DiContainer*>*> const& __cordl_internal_get_finishCallback() const;

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_newSceneNames();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get_newSceneNames() const;

  constexpr ::GlobalNamespace::__GameScenesManager__ScenesStackData*& __cordl_internal_get_scenesStackData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__GameScenesManager__ScenesStackData*> const& __cordl_internal_get_scenesStackData() const;

  constexpr ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO> const& __cordl_internal_get_scenesTransitionSetupData() const;

  constexpr ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO>& __cordl_internal_get_scenesTransitionSetupData();

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GameScenesManager> value);

  constexpr void __cordl_internal_set___9__1(::System::Action_1<::Zenject::DiContainer*>* value);

  constexpr void __cordl_internal_set___9__2(::System::Action_1<::Zenject::DiContainer*>* value);

  constexpr void __cordl_internal_set_emptyTransitionSceneNameList(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set_finishCallback(::System::Action_1<::Zenject::DiContainer*>* value);

  constexpr void __cordl_internal_set_newSceneNames(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set_scenesStackData(::GlobalNamespace::__GameScenesManager__ScenesStackData* value);

  constexpr void __cordl_internal_set_scenesTransitionSetupData(::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO> value);

  /// @brief Method .ctor, addr 0x107b010, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GameScenesManager____c__DisplayClass37_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__GameScenesManager____c__DisplayClass37_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GameScenesManager____c__DisplayClass37_0(__GameScenesManager____c__DisplayClass37_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GameScenesManager____c__DisplayClass37_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GameScenesManager____c__DisplayClass37_0(__GameScenesManager____c__DisplayClass37_0 const&) = delete;

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameScenesManager> _____4__this;

  /// @brief Field scenesTransitionSetupData, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO> ___scenesTransitionSetupData;

  /// @brief Field newSceneNames, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ___newSceneNames;

  /// @brief Field emptyTransitionSceneNameList, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ___emptyTransitionSceneNameList;

  /// @brief Field scenesStackData, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::__GameScenesManager__ScenesStackData* ___scenesStackData;

  /// @brief Field finishCallback, offset: 0x38, size: 0x8, def value: None
  ::System::Action_1<::Zenject::DiContainer*>* ___finishCallback;

  /// @brief Field <>9__1, offset: 0x40, size: 0x8, def value: None
  ::System::Action_1<::Zenject::DiContainer*>* _____9__1;

  /// @brief Field <>9__2, offset: 0x48, size: 0x8, def value: None
  ::System::Action_1<::Zenject::DiContainer*>* _____9__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GameScenesManager____c__DisplayClass37_0, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameScenesManager____c__DisplayClass37_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameScenesManager____c__DisplayClass37_0, ___scenesTransitionSetupData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameScenesManager____c__DisplayClass37_0, ___newSceneNames) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameScenesManager____c__DisplayClass37_0, ___emptyTransitionSceneNameList) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameScenesManager____c__DisplayClass37_0, ___scenesStackData) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameScenesManager____c__DisplayClass37_0, ___finishCallback) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameScenesManager____c__DisplayClass37_0, _____9__1) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameScenesManager____c__DisplayClass37_0, _____9__2) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass38_0
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::GameScenesManager::<>c__DisplayClass38_0*
class CORDL_TYPE __GameScenesManager____c__DisplayClass38_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::GameScenesManager> __4__this;

  /// @brief Field finishCallback, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_finishCallback, put = __cordl_internal_set_finishCallback))::System::Action_1<::Zenject::DiContainer*>* finishCallback;

  /// @brief Field scenesStackData, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_scenesStackData, put = __cordl_internal_set_scenesStackData))::GlobalNamespace::__GameScenesManager__ScenesStackData* scenesStackData;

  /// @brief Field scenesTransitionSetupData, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_scenesTransitionSetupData,
                      put = __cordl_internal_set_scenesTransitionSetupData))::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO> scenesTransitionSetupData;

  static inline ::GlobalNamespace::__GameScenesManager____c__DisplayClass38_0* New_ctor();

  /// @brief Method <AppendScenes>b__0, addr 0x107cf40, size 0x6c, virtual false, abstract: false, final false
  inline void _AppendScenes_b__0(::Zenject::DiContainer* container);

  /// @brief Method <AppendScenes>b__1, addr 0x107cfac, size 0x78, virtual false, abstract: false, final false
  inline void _AppendScenes_b__1(::Zenject::DiContainer* container);

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager>& __cordl_internal_get___4__this();

  constexpr ::System::Action_1<::Zenject::DiContainer*>*& __cordl_internal_get_finishCallback();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::Zenject::DiContainer*>*> const& __cordl_internal_get_finishCallback() const;

  constexpr ::GlobalNamespace::__GameScenesManager__ScenesStackData*& __cordl_internal_get_scenesStackData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__GameScenesManager__ScenesStackData*> const& __cordl_internal_get_scenesStackData() const;

  constexpr ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO> const& __cordl_internal_get_scenesTransitionSetupData() const;

  constexpr ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO>& __cordl_internal_get_scenesTransitionSetupData();

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GameScenesManager> value);

  constexpr void __cordl_internal_set_finishCallback(::System::Action_1<::Zenject::DiContainer*>* value);

  constexpr void __cordl_internal_set_scenesStackData(::GlobalNamespace::__GameScenesManager__ScenesStackData* value);

  constexpr void __cordl_internal_set_scenesTransitionSetupData(::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO> value);

  /// @brief Method .ctor, addr 0x107b3d4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GameScenesManager____c__DisplayClass38_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__GameScenesManager____c__DisplayClass38_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GameScenesManager____c__DisplayClass38_0(__GameScenesManager____c__DisplayClass38_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GameScenesManager____c__DisplayClass38_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GameScenesManager____c__DisplayClass38_0(__GameScenesManager____c__DisplayClass38_0 const&) = delete;

  /// @brief Field scenesStackData, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::__GameScenesManager__ScenesStackData* ___scenesStackData;

  /// @brief Field scenesTransitionSetupData, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO> ___scenesTransitionSetupData;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameScenesManager> _____4__this;

  /// @brief Field finishCallback, offset: 0x28, size: 0x8, def value: None
  ::System::Action_1<::Zenject::DiContainer*>* ___finishCallback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GameScenesManager____c__DisplayClass38_0, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameScenesManager____c__DisplayClass38_0, ___scenesStackData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameScenesManager____c__DisplayClass38_0, ___scenesTransitionSetupData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameScenesManager____c__DisplayClass38_0, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameScenesManager____c__DisplayClass38_0, ___finishCallback) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass39_0
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::GameScenesManager::<>c__DisplayClass39_0*
class CORDL_TYPE __GameScenesManager____c__DisplayClass39_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::GameScenesManager> __4__this;

  /// @brief Field finishCallback, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_finishCallback, put = __cordl_internal_set_finishCallback))::System::Action_1<::Zenject::DiContainer*>* finishCallback;

  /// @brief Field sceneNamesToRemove, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_sceneNamesToRemove, put = __cordl_internal_set_sceneNamesToRemove))::System::Collections::Generic::List_1<::StringW>* sceneNamesToRemove;

  static inline ::GlobalNamespace::__GameScenesManager____c__DisplayClass39_0* New_ctor();

  /// @brief Method <RemoveScenes>b__0, addr 0x107d024, size 0xa8, virtual false, abstract: false, final false
  inline void _RemoveScenes_b__0(::Zenject::DiContainer* container);

  /// @brief Method <RemoveScenes>b__1, addr 0x107d0cc, size 0x64, virtual false, abstract: false, final false
  inline bool _RemoveScenes_b__1(::StringW scene);

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager>& __cordl_internal_get___4__this();

  constexpr ::System::Action_1<::Zenject::DiContainer*>*& __cordl_internal_get_finishCallback();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::Zenject::DiContainer*>*> const& __cordl_internal_get_finishCallback() const;

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_sceneNamesToRemove();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get_sceneNamesToRemove() const;

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GameScenesManager> value);

  constexpr void __cordl_internal_set_finishCallback(::System::Action_1<::Zenject::DiContainer*>* value);

  constexpr void __cordl_internal_set_sceneNamesToRemove(::System::Collections::Generic::List_1<::StringW>* value);

  /// @brief Method .ctor, addr 0x107b77c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GameScenesManager____c__DisplayClass39_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__GameScenesManager____c__DisplayClass39_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GameScenesManager____c__DisplayClass39_0(__GameScenesManager____c__DisplayClass39_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GameScenesManager____c__DisplayClass39_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GameScenesManager____c__DisplayClass39_0(__GameScenesManager____c__DisplayClass39_0 const&) = delete;

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameScenesManager> _____4__this;

  /// @brief Field finishCallback, offset: 0x18, size: 0x8, def value: None
  ::System::Action_1<::Zenject::DiContainer*>* ___finishCallback;

  /// @brief Field sceneNamesToRemove, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ___sceneNamesToRemove;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GameScenesManager____c__DisplayClass39_0, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameScenesManager____c__DisplayClass39_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameScenesManager____c__DisplayClass39_0, ___finishCallback) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameScenesManager____c__DisplayClass39_0, ___sceneNamesToRemove) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<ScenesTransitionCoroutine>d__42
// SizeInfo { instance_size: 192, native_size: -1, calculated_instance_size: 192, calculated_native_size: 192, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::GameScenesManager::<ScenesTransitionCoroutine>d__42*
class CORDL_TYPE __GameScenesManager___ScenesTransitionCoroutine_d__42 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::GameScenesManager> __4__this;

  /// @brief Field <>7__wrap6, offset 0xa8, size 0x18
  __declspec(property(get = __cordl_internal_get___7__wrap6, put = __cordl_internal_set___7__wrap6))::System::Collections::Generic::__List_1__Enumerator<::StringW> __7__wrap6;

  /// @brief Field <beforeLoadTask>5__3, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__beforeLoadTask_5__3, put = __cordl_internal_set__beforeLoadTask_5__3))::System::Threading::Tasks::Task* _beforeLoadTask_5__3;

  /// @brief Field <eventSystem>5__2, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__eventSystem_5__2, put = __cordl_internal_set__eventSystem_5__2))::UnityW<::UnityEngine::EventSystems::EventSystem> _eventSystem_5__2;

  /// @brief Field <loadSceneOperationHandle>5__5, offset 0x80, size 0x20
  __declspec(property(get = __cordl_internal_get__loadSceneOperationHandle_5__5, put = __cordl_internal_set__loadSceneOperationHandle_5__5))::UnityEngine::ResourceManagement::AsyncOperations::
      AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> _loadSceneOperationHandle_5__5;

  /// @brief Field <sceneName>5__4, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__sceneName_5__4, put = __cordl_internal_set__sceneName_5__4))::StringW _sceneName_5__4;

  /// @brief Field <sceneNum>5__6, offset 0xa0, size 0x4
  __declspec(property(get = __cordl_internal_get__sceneNum_5__6, put = __cordl_internal_set__sceneNum_5__6)) int32_t _sceneNum_5__6;

  /// @brief Field afterMinDurationCallback, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_afterMinDurationCallback, put = __cordl_internal_set_afterMinDurationCallback))::System::Action* afterMinDurationCallback;

  /// @brief Field dismissType, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_dismissType, put = __cordl_internal_set_dismissType))::GlobalNamespace::__GameScenesManager__SceneDismissType dismissType;

  /// @brief Field extraBindingsCallback, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_extraBindingsCallback, put = __cordl_internal_set_extraBindingsCallback))::System::Action_1<::Zenject::DiContainer*>* extraBindingsCallback;

  /// @brief Field finishCallback, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_finishCallback, put = __cordl_internal_set_finishCallback))::System::Action_1<::Zenject::DiContainer*>* finishCallback;

  /// @brief Field minDuration, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_minDuration, put = __cordl_internal_set_minDuration)) float_t minDuration;

  /// @brief Field newScenesTransitionSetupData, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_newScenesTransitionSetupData,
                      put = __cordl_internal_set_newScenesTransitionSetupData))::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO> newScenesTransitionSetupData;

  /// @brief Field presentType, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_presentType, put = __cordl_internal_set_presentType))::GlobalNamespace::__GameScenesManager__ScenePresentType presentType;

  /// @brief Field scenesToDismiss, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_scenesToDismiss, put = __cordl_internal_set_scenesToDismiss))::System::Collections::Generic::List_1<::StringW>* scenesToDismiss;

  /// @brief Field scenesToPresent, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_scenesToPresent, put = __cordl_internal_set_scenesToPresent))::System::Collections::Generic::List_1<::StringW>* scenesToPresent;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x107d170, size 0xffc, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x107e20c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x107e214, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x107e254, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x107d130, size 0x40, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager>& __cordl_internal_get___4__this();

  constexpr ::System::Collections::Generic::__List_1__Enumerator<::StringW> const& __cordl_internal_get___7__wrap6() const;

  constexpr ::System::Collections::Generic::__List_1__Enumerator<::StringW>& __cordl_internal_get___7__wrap6();

  constexpr ::System::Threading::Tasks::Task*& __cordl_internal_get__beforeLoadTask_5__3();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task*> const& __cordl_internal_get__beforeLoadTask_5__3() const;

  constexpr ::UnityW<::UnityEngine::EventSystems::EventSystem> const& __cordl_internal_get__eventSystem_5__2() const;

  constexpr ::UnityW<::UnityEngine::EventSystems::EventSystem>& __cordl_internal_get__eventSystem_5__2();

  constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> const&
  __cordl_internal_get__loadSceneOperationHandle_5__5() const;

  constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>&
  __cordl_internal_get__loadSceneOperationHandle_5__5();

  constexpr ::StringW const& __cordl_internal_get__sceneName_5__4() const;

  constexpr ::StringW& __cordl_internal_get__sceneName_5__4();

  constexpr int32_t const& __cordl_internal_get__sceneNum_5__6() const;

  constexpr int32_t& __cordl_internal_get__sceneNum_5__6();

  constexpr ::System::Action*& __cordl_internal_get_afterMinDurationCallback();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_afterMinDurationCallback() const;

  constexpr ::GlobalNamespace::__GameScenesManager__SceneDismissType const& __cordl_internal_get_dismissType() const;

  constexpr ::GlobalNamespace::__GameScenesManager__SceneDismissType& __cordl_internal_get_dismissType();

  constexpr ::System::Action_1<::Zenject::DiContainer*>*& __cordl_internal_get_extraBindingsCallback();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::Zenject::DiContainer*>*> const& __cordl_internal_get_extraBindingsCallback() const;

  constexpr ::System::Action_1<::Zenject::DiContainer*>*& __cordl_internal_get_finishCallback();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::Zenject::DiContainer*>*> const& __cordl_internal_get_finishCallback() const;

  constexpr float_t const& __cordl_internal_get_minDuration() const;

  constexpr float_t& __cordl_internal_get_minDuration();

  constexpr ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO> const& __cordl_internal_get_newScenesTransitionSetupData() const;

  constexpr ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO>& __cordl_internal_get_newScenesTransitionSetupData();

  constexpr ::GlobalNamespace::__GameScenesManager__ScenePresentType const& __cordl_internal_get_presentType() const;

  constexpr ::GlobalNamespace::__GameScenesManager__ScenePresentType& __cordl_internal_get_presentType();

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_scenesToDismiss();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get_scenesToDismiss() const;

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_scenesToPresent();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get_scenesToPresent() const;

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GameScenesManager> value);

  constexpr void __cordl_internal_set___7__wrap6(::System::Collections::Generic::__List_1__Enumerator<::StringW> value);

  constexpr void __cordl_internal_set__beforeLoadTask_5__3(::System::Threading::Tasks::Task* value);

  constexpr void __cordl_internal_set__eventSystem_5__2(::UnityW<::UnityEngine::EventSystems::EventSystem> value);

  constexpr void __cordl_internal_set__loadSceneOperationHandle_5__5(
      ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> value);

  constexpr void __cordl_internal_set__sceneName_5__4(::StringW value);

  constexpr void __cordl_internal_set__sceneNum_5__6(int32_t value);

  constexpr void __cordl_internal_set_afterMinDurationCallback(::System::Action* value);

  constexpr void __cordl_internal_set_dismissType(::GlobalNamespace::__GameScenesManager__SceneDismissType value);

  constexpr void __cordl_internal_set_extraBindingsCallback(::System::Action_1<::Zenject::DiContainer*>* value);

  constexpr void __cordl_internal_set_finishCallback(::System::Action_1<::Zenject::DiContainer*>* value);

  constexpr void __cordl_internal_set_minDuration(float_t value);

  constexpr void __cordl_internal_set_newScenesTransitionSetupData(::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO> value);

  constexpr void __cordl_internal_set_presentType(::GlobalNamespace::__GameScenesManager__ScenePresentType value);

  constexpr void __cordl_internal_set_scenesToDismiss(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set_scenesToPresent(::System::Collections::Generic::List_1<::StringW>* value);

  /// @brief Method <>m__Finally1, addr 0x107e16c, size 0x50, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method <>m__Finally2, addr 0x107e1bc, size 0x50, virtual false, abstract: false, final false
  inline void __m__Finally2();

  /// @brief Method .ctor, addr 0x107b784, size 0x28, virtual false, abstract: false, final false
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
  constexpr __GameScenesManager___ScenesTransitionCoroutine_d__42();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__GameScenesManager___ScenesTransitionCoroutine_d__42", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GameScenesManager___ScenesTransitionCoroutine_d__42(__GameScenesManager___ScenesTransitionCoroutine_d__42&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GameScenesManager___ScenesTransitionCoroutine_d__42", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GameScenesManager___ScenesTransitionCoroutine_d__42(__GameScenesManager___ScenesTransitionCoroutine_d__42 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field scenesToDismiss, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ___scenesToDismiss;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameScenesManager> _____4__this;

  /// @brief Field scenesToPresent, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ___scenesToPresent;

  /// @brief Field minDuration, offset: 0x38, size: 0x4, def value: None
  float_t ___minDuration;

  /// @brief Field presentType, offset: 0x3c, size: 0x4, def value: None
  ::GlobalNamespace::__GameScenesManager__ScenePresentType ___presentType;

  /// @brief Field afterMinDurationCallback, offset: 0x40, size: 0x8, def value: None
  ::System::Action* ___afterMinDurationCallback;

  /// @brief Field newScenesTransitionSetupData, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO> ___newScenesTransitionSetupData;

  /// @brief Field extraBindingsCallback, offset: 0x50, size: 0x8, def value: None
  ::System::Action_1<::Zenject::DiContainer*>* ___extraBindingsCallback;

  /// @brief Field dismissType, offset: 0x58, size: 0x4, def value: None
  ::GlobalNamespace::__GameScenesManager__SceneDismissType ___dismissType;

  /// @brief Field finishCallback, offset: 0x60, size: 0x8, def value: None
  ::System::Action_1<::Zenject::DiContainer*>* ___finishCallback;

  /// @brief Field <eventSystem>5__2, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::UnityEngine::EventSystems::EventSystem> ____eventSystem_5__2;

  /// @brief Field <beforeLoadTask>5__3, offset: 0x70, size: 0x8, def value: None
  ::System::Threading::Tasks::Task* ____beforeLoadTask_5__3;

  /// @brief Field <sceneName>5__4, offset: 0x78, size: 0x8, def value: None
  ::StringW ____sceneName_5__4;

  /// @brief Field <loadSceneOperationHandle>5__5, offset: 0x80, size: 0x20, def value: None
  ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> ____loadSceneOperationHandle_5__5;

  /// @brief Field <sceneNum>5__6, offset: 0xa0, size: 0x4, def value: None
  int32_t ____sceneNum_5__6;

  /// @brief Field <>7__wrap6, offset: 0xa8, size: 0x18, def value: None
  ::System::Collections::Generic::__List_1__Enumerator<::StringW> _____7__wrap6;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42, 0xc0>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42, ___scenesToDismiss) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42, ___scenesToPresent) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42, ___minDuration) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42, ___presentType) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42, ___afterMinDurationCallback) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42, ___newScenesTransitionSetupData) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42, ___extraBindingsCallback) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42, ___dismissType) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42, ___finishCallback) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42, ____eventSystem_5__2) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42, ____beforeLoadTask_5__3) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42, ____sceneName_5__4) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42, ____loadSceneOperationHandle_5__5) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42, ____sceneNum_5__6) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42, _____7__wrap6) == 0xa8, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass43_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::GameScenesManager::<>c__DisplayClass43_0*
class CORDL_TYPE __GameScenesManager____c__DisplayClass43_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field task, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_task, put = __cordl_internal_set_task))::System::Threading::Tasks::Task* task;

  static inline ::GlobalNamespace::__GameScenesManager____c__DisplayClass43_0* New_ctor();

  /// @brief Method <WaitUntilTaskCompleted>b__0, addr 0x107e264, size 0x1c, virtual false, abstract: false, final false
  inline bool _WaitUntilTaskCompleted_b__0();

  constexpr ::System::Threading::Tasks::Task*& __cordl_internal_get_task();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task*> const& __cordl_internal_get_task() const;

  constexpr void __cordl_internal_set_task(::System::Threading::Tasks::Task* value);

  /// @brief Method .ctor, addr 0x107e25c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GameScenesManager____c__DisplayClass43_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__GameScenesManager____c__DisplayClass43_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GameScenesManager____c__DisplayClass43_0(__GameScenesManager____c__DisplayClass43_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GameScenesManager____c__DisplayClass43_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GameScenesManager____c__DisplayClass43_0(__GameScenesManager____c__DisplayClass43_0 const&) = delete;

  /// @brief Field task, offset: 0x10, size: 0x8, def value: None
  ::System::Threading::Tasks::Task* ___task;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GameScenesManager____c__DisplayClass43_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameScenesManager____c__DisplayClass43_0, ___task) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<WaitUntilTaskCompleted>d__43
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::GameScenesManager::<WaitUntilTaskCompleted>d__43*
class CORDL_TYPE __GameScenesManager___WaitUntilTaskCompleted_d__43 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>8__1, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get___8__1, put = __cordl_internal_set___8__1))::GlobalNamespace::__GameScenesManager____c__DisplayClass43_0* __8__1;

  /// @brief Field task, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_task, put = __cordl_internal_set_task))::System::Threading::Tasks::Task* task;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x107e284, size 0x210, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__GameScenesManager___WaitUntilTaskCompleted_d__43* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x107e494, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x107e49c, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x107e4dc, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x107e280, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::GlobalNamespace::__GameScenesManager____c__DisplayClass43_0*& __cordl_internal_get___8__1();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__GameScenesManager____c__DisplayClass43_0*> const& __cordl_internal_get___8__1() const;

  constexpr ::System::Threading::Tasks::Task*& __cordl_internal_get_task();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task*> const& __cordl_internal_get_task() const;

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___8__1(::GlobalNamespace::__GameScenesManager____c__DisplayClass43_0* value);

  constexpr void __cordl_internal_set_task(::System::Threading::Tasks::Task* value);

  /// @brief Method .ctor, addr 0x107b814, size 0x28, virtual false, abstract: false, final false
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
  constexpr __GameScenesManager___WaitUntilTaskCompleted_d__43();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__GameScenesManager___WaitUntilTaskCompleted_d__43", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GameScenesManager___WaitUntilTaskCompleted_d__43(__GameScenesManager___WaitUntilTaskCompleted_d__43&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GameScenesManager___WaitUntilTaskCompleted_d__43", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GameScenesManager___WaitUntilTaskCompleted_d__43(__GameScenesManager___WaitUntilTaskCompleted_d__43 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field task, offset: 0x20, size: 0x8, def value: None
  ::System::Threading::Tasks::Task* ___task;

  /// @brief Field <>8__1, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::__GameScenesManager____c__DisplayClass43_0* _____8__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GameScenesManager___WaitUntilTaskCompleted_d__43, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameScenesManager___WaitUntilTaskCompleted_d__43, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameScenesManager___WaitUntilTaskCompleted_d__43, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameScenesManager___WaitUntilTaskCompleted_d__43, ___task) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameScenesManager___WaitUntilTaskCompleted_d__43, _____8__1) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::GameScenesManager
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::GameScenesManager*
class CORDL_TYPE GameScenesManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using SceneDismissType = ::GlobalNamespace::__GameScenesManager__SceneDismissType;

  using ScenePresentType = ::GlobalNamespace::__GameScenesManager__ScenePresentType;

  using ScenesStackData = ::GlobalNamespace::__GameScenesManager__ScenesStackData;

  using _ScenesTransitionCoroutine_d__42 = ::GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42;

  using _WaitUntilTaskCompleted_d__43 = ::GlobalNamespace::__GameScenesManager___WaitUntilTaskCompleted_d__43;

  using __c__DisplayClass34_0 = ::GlobalNamespace::__GameScenesManager____c__DisplayClass34_0;

  using __c__DisplayClass35_0 = ::GlobalNamespace::__GameScenesManager____c__DisplayClass35_0;

  using __c__DisplayClass36_0 = ::GlobalNamespace::__GameScenesManager____c__DisplayClass36_0;

  using __c__DisplayClass37_0 = ::GlobalNamespace::__GameScenesManager____c__DisplayClass37_0;

  using __c__DisplayClass38_0 = ::GlobalNamespace::__GameScenesManager____c__DisplayClass38_0;

  using __c__DisplayClass39_0 = ::GlobalNamespace::__GameScenesManager____c__DisplayClass39_0;

  using __c__DisplayClass43_0 = ::GlobalNamespace::__GameScenesManager____c__DisplayClass43_0;

  /// @brief Field _emptyTransitionSceneInfo, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__emptyTransitionSceneInfo, put = __cordl_internal_set__emptyTransitionSceneInfo))::UnityW<::GlobalNamespace::SceneInfo> _emptyTransitionSceneInfo;

  /// @brief Field _inTransition, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get__inTransition, put = __cordl_internal_set__inTransition)) bool _inTransition;

  /// @brief Field _neverUnloadScenes, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__neverUnloadScenes, put = __cordl_internal_set__neverUnloadScenes))::System::Collections::Generic::HashSet_1<::StringW>* _neverUnloadScenes;

  /// @brief Field _sceneNameToSceneOperationHandlesDictionary, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__sceneNameToSceneOperationHandlesDictionary, put = __cordl_internal_set__sceneNameToSceneOperationHandlesDictionary))::System::Collections::Generic::
      Dictionary_2<::StringW, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
                                  ::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>* _sceneNameToSceneOperationHandlesDictionary;

  /// @brief Field _scenesStack, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__scenesStack,
                      put = __cordl_internal_set__scenesStack))::System::Collections::Generic::List_1<::GlobalNamespace::__GameScenesManager__ScenesStackData*>* _scenesStack;

  /// @brief Field _zenjectSceneLoader, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__zenjectSceneLoader, put = __cordl_internal_set__zenjectSceneLoader))::Zenject::ZenjectSceneLoader* _zenjectSceneLoader;

  /// @brief Field beforeDismissingScenesEvent, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_beforeDismissingScenesEvent, put = __cordl_internal_set_beforeDismissingScenesEvent))::System::Action* beforeDismissingScenesEvent;

  __declspec(property(get = get_currentScenesContainer))::Zenject::DiContainer* currentScenesContainer;

  /// @brief Field installEarlyBindingsEvent, offset 0x40, size 0x8
  __declspec(
      property(get = __cordl_internal_get_installEarlyBindingsEvent,
               put = __cordl_internal_set_installEarlyBindingsEvent))::System::Action_2<::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO>, ::Zenject::DiContainer*>* installEarlyBindingsEvent;

  __declspec(property(get = get_isInTransition)) bool isInTransition;

  __declspec(property(get = get_sceneNameToSceneOperationHandlesDictionary))::System::Collections::Generic::Dictionary_2<
      ::StringW,
      ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>* sceneNameToSceneOperationHandlesDictionary;

  /// @brief Field transitionDidFinishEvent, offset 0x38, size 0x8
  __declspec(
      property(get = __cordl_internal_get_transitionDidFinishEvent,
               put = __cordl_internal_set_transitionDidFinishEvent))::System::Action_2<::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO>, ::Zenject::DiContainer*>* transitionDidFinishEvent;

  /// @brief Field transitionDidStartEvent, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_transitionDidStartEvent, put = __cordl_internal_set_transitionDidStartEvent))::System::Action_1<float_t>* transitionDidStartEvent;

  __declspec(property(get = get_waitUntilSceneTransitionFinish))::UnityEngine::WaitUntil* waitUntilSceneTransitionFinish;

  /// @brief Method ActivatePresentedSceneRootObjects, addr 0x107b83c, size 0x300, virtual false, abstract: false, final false
  static inline void ActivatePresentedSceneRootObjects(::System::Collections::Generic::List_1<::StringW>* scenesToPresent);

  /// @brief Method AppendScenes, addr 0x107b018, size 0x3bc, virtual false, abstract: false, final false
  inline void AppendScenes(::GlobalNamespace::ScenesTransitionSetupDataSO* scenesTransitionSetupData, float_t minDuration, ::System::Action* afterMinDurationCallback,
                           ::System::Action_1<::Zenject::DiContainer*>* finishCallback);

  /// @brief Method AreAllScenesInStack, addr 0x107bf54, size 0x8, virtual false, abstract: false, final false
  inline bool AreAllScenesInStack(::System::Collections::Generic::List_1<::StringW>* sceneNames);

  /// @brief Method ClearAndOpenScenes, addr 0x107a9e4, size 0x62c, virtual false, abstract: false, final false
  inline void ClearAndOpenScenes(::GlobalNamespace::ScenesTransitionSetupDataSO* scenesTransitionSetupData, float_t minDuration, ::System::Action* afterMinDurationCallback,
                                 ::System::Action_1<::Zenject::DiContainer*>* finishCallback, bool unloadAllScenes);

  /// @brief Method GetCurrentlyLoadedSceneNames, addr 0x1079ce0, size 0x1b4, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::StringW>* GetCurrentlyLoadedSceneNames();

  /// @brief Method IsAnySceneInStack, addr 0x107bb3c, size 0x164, virtual false, abstract: false, final false
  inline bool IsAnySceneInStack(::System::Collections::Generic::List_1<::StringW>* sceneNames);

  /// @brief Method IsSceneInStack, addr 0x107bca0, size 0x2b4, virtual false, abstract: false, final false
  inline bool IsSceneInStack(::StringW searchSceneName);

  /// @brief Method Log, addr 0x107c6dc, size 0x58, virtual false, abstract: false, final false
  static inline void Log(::StringW message);

  /// @brief Method MarkSceneAsPersistent, addr 0x10796a4, size 0x58, virtual false, abstract: false, final false
  inline void MarkSceneAsPersistent(::StringW sceneName);

  /// @brief Method MoveGameObjectsFromContainerToSceneRoot, addr 0x107c360, size 0x37c, virtual false, abstract: false, final false
  inline void MoveGameObjectsFromContainerToSceneRoot(::StringW sceneName);

  static inline ::GlobalNamespace::GameScenesManager* New_ctor();

  /// @brief Method PopScenes, addr 0x107a494, size 0x1e8, virtual false, abstract: false, final false
  inline void PopScenes(float_t minDuration, ::System::Action* afterMinDurationCallback, ::System::Action_1<::Zenject::DiContainer*>* finishCallback);

  /// @brief Method PushScenes, addr 0x1079f18, size 0x354, virtual false, abstract: false, final false
  inline void PushScenes(::GlobalNamespace::ScenesTransitionSetupDataSO* scenesTransitionSetupData, float_t minDuration, ::System::Action* afterMinDurationCallback,
                         ::System::Action_1<::Zenject::DiContainer*>* finishCallback);

  /// @brief Method RegisterExternallyLoadedScene, addr 0x1079e94, size 0x84, virtual false, abstract: false, final false
  inline void
  RegisterExternallyLoadedScene(::StringW sceneName,
                                ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> asyncOperationHandle);

  /// @brief Method RemoveScenes, addr 0x107b3dc, size 0x3a0, virtual false, abstract: false, final false
  inline void RemoveScenes(::GlobalNamespace::ScenesTransitionSetupDataSO* scenesTransitionSetupDataSo, float_t minDuration, ::System::Action* afterMinDurationCallback,
                           ::System::Action_1<::Zenject::DiContainer*>* finishCallback);

  /// @brief Method ReparentRootGameObjectsToDisabledGameObject, addr 0x107c0dc, size 0x284, virtual false, abstract: false, final false
  inline void ReparentRootGameObjectsToDisabledGameObject(::StringW sceneName);

  /// @brief Method ReplaceScenes, addr 0x107a684, size 0x358, virtual false, abstract: false, final false
  inline void ReplaceScenes(::GlobalNamespace::ScenesTransitionSetupDataSO* scenesTransitionSetupData,
                            ::ArrayW<::System::Collections::IEnumerator*, ::Array<::System::Collections::IEnumerator*>*> beforeNewScenesActivateRoutines, float_t minDuration,
                            ::System::Action* afterMinDurationCallback, ::System::Action_1<::Zenject::DiContainer*>* finishCallback);

  /// @brief Method SceneNamesFromSceneInfoArray, addr 0x107a274, size 0x128, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::StringW>* SceneNamesFromSceneInfoArray(::ArrayW<::GlobalNamespace::SceneInfo*, ::Array<::GlobalNamespace::SceneInfo*>*> sceneInfos);

  /// @brief Method ScenesTransitionCoroutine, addr 0x107a3c4, size 0xd0, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator*
  ScenesTransitionCoroutine(::GlobalNamespace::ScenesTransitionSetupDataSO* newScenesTransitionSetupData, ::System::Collections::Generic::List_1<::StringW>* scenesToPresent,
                            ::GlobalNamespace::__GameScenesManager__ScenePresentType presentType, ::System::Collections::Generic::List_1<::StringW>* scenesToDismiss,
                            ::GlobalNamespace::__GameScenesManager__SceneDismissType dismissType, float_t minDuration, ::System::Action* afterMinDurationCallback,
                            ::System::Action_1<::Zenject::DiContainer*>* extraBindingsCallback, ::System::Action_1<::Zenject::DiContainer*>* finishCallback);

  /// @brief Method SetActiveRootObjectsInScenes, addr 0x107bf5c, size 0x180, virtual false, abstract: false, final false
  inline void SetActiveRootObjectsInScenes(::System::Collections::Generic::List_1<::StringW>* sceneNames, bool value);

  /// @brief Method WaitUntilTaskCompleted, addr 0x107b7ac, size 0x68, virtual false, abstract: false, final false
  static inline ::System::Collections::IEnumerator* WaitUntilTaskCompleted(::System::Threading::Tasks::Task* task);

  constexpr ::UnityW<::GlobalNamespace::SceneInfo> const& __cordl_internal_get__emptyTransitionSceneInfo() const;

  constexpr ::UnityW<::GlobalNamespace::SceneInfo>& __cordl_internal_get__emptyTransitionSceneInfo();

  constexpr bool const& __cordl_internal_get__inTransition() const;

  constexpr bool& __cordl_internal_get__inTransition();

  constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& __cordl_internal_get__neverUnloadScenes();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::StringW>*> const& __cordl_internal_get__neverUnloadScenes() const;

  constexpr ::System::Collections::Generic::Dictionary_2<
      ::StringW, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>*&
  __cordl_internal_get__sceneNameToSceneOperationHandlesDictionary();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<
      ::StringW, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>*> const&
  __cordl_internal_get__sceneNameToSceneOperationHandlesDictionary() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__GameScenesManager__ScenesStackData*>*& __cordl_internal_get__scenesStack();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__GameScenesManager__ScenesStackData*>*> const& __cordl_internal_get__scenesStack() const;

  constexpr ::Zenject::ZenjectSceneLoader*& __cordl_internal_get__zenjectSceneLoader();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::ZenjectSceneLoader*> const& __cordl_internal_get__zenjectSceneLoader() const;

  constexpr ::System::Action*& __cordl_internal_get_beforeDismissingScenesEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_beforeDismissingScenesEvent() const;

  constexpr ::System::Action_2<::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO>, ::Zenject::DiContainer*>*& __cordl_internal_get_installEarlyBindingsEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO>, ::Zenject::DiContainer*>*> const&
  __cordl_internal_get_installEarlyBindingsEvent() const;

  constexpr ::System::Action_2<::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO>, ::Zenject::DiContainer*>*& __cordl_internal_get_transitionDidFinishEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO>, ::Zenject::DiContainer*>*> const&
  __cordl_internal_get_transitionDidFinishEvent() const;

  constexpr ::System::Action_1<float_t>*& __cordl_internal_get_transitionDidStartEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<float_t>*> const& __cordl_internal_get_transitionDidStartEvent() const;

  constexpr void __cordl_internal_set__emptyTransitionSceneInfo(::UnityW<::GlobalNamespace::SceneInfo> value);

  constexpr void __cordl_internal_set__inTransition(bool value);

  constexpr void __cordl_internal_set__neverUnloadScenes(::System::Collections::Generic::HashSet_1<::StringW>* value);

  constexpr void __cordl_internal_set__sceneNameToSceneOperationHandlesDictionary(
      ::System::Collections::Generic::Dictionary_2<
          ::StringW, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>* value);

  constexpr void __cordl_internal_set__scenesStack(::System::Collections::Generic::List_1<::GlobalNamespace::__GameScenesManager__ScenesStackData*>* value);

  constexpr void __cordl_internal_set__zenjectSceneLoader(::Zenject::ZenjectSceneLoader* value);

  constexpr void __cordl_internal_set_beforeDismissingScenesEvent(::System::Action* value);

  constexpr void __cordl_internal_set_installEarlyBindingsEvent(::System::Action_2<::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO>, ::Zenject::DiContainer*>* value);

  constexpr void __cordl_internal_set_transitionDidFinishEvent(::System::Action_2<::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO>, ::Zenject::DiContainer*>* value);

  constexpr void __cordl_internal_set_transitionDidStartEvent(::System::Action_1<float_t>* value);

  /// @brief Method .ctor, addr 0x107c734, size 0x104, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <get_waitUntilSceneTransitionFinish>b__22_0, addr 0x107c838, size 0x10, virtual false, abstract: false, final false
  inline bool _get_waitUntilSceneTransitionFinish_b__22_0();

  /// @brief Method add_beforeDismissingScenesEvent, addr 0x10796fc, size 0x9c, virtual false, abstract: false, final false
  inline void add_beforeDismissingScenesEvent(::System::Action* value);

  /// @brief Method add_installEarlyBindingsEvent, addr 0x1079a6c, size 0xb0, virtual false, abstract: false, final false
  inline void add_installEarlyBindingsEvent(::System::Action_2<::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO>, ::Zenject::DiContainer*>* value);

  /// @brief Method add_transitionDidFinishEvent, addr 0x107990c, size 0xb0, virtual false, abstract: false, final false
  inline void add_transitionDidFinishEvent(::System::Action_2<::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO>, ::Zenject::DiContainer*>* value);

  /// @brief Method add_transitionDidStartEvent, addr 0x10797ac, size 0xb0, virtual false, abstract: false, final false
  inline void add_transitionDidStartEvent(::System::Action_1<float_t>* value);

  /// @brief Method get_currentScenesContainer, addr 0x1079bcc, size 0x58, virtual false, abstract: false, final false
  inline ::Zenject::DiContainer* get_currentScenesContainer();

  /// @brief Method get_isInTransition, addr 0x1079c24, size 0x8, virtual false, abstract: false, final false
  inline bool get_isInTransition();

  /// @brief Method get_sceneNameToSceneOperationHandlesDictionary, addr 0x1079cd8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW,
                                                      ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>*
  get_sceneNameToSceneOperationHandlesDictionary();

  /// @brief Method get_waitUntilSceneTransitionFinish, addr 0x1079c2c, size 0xac, virtual false, abstract: false, final false
  inline ::UnityEngine::WaitUntil* get_waitUntilSceneTransitionFinish();

  /// @brief Method remove_beforeDismissingScenesEvent, addr 0x10788a4, size 0x9c, virtual false, abstract: false, final false
  inline void remove_beforeDismissingScenesEvent(::System::Action* value);

  /// @brief Method remove_installEarlyBindingsEvent, addr 0x1079b1c, size 0xb0, virtual false, abstract: false, final false
  inline void remove_installEarlyBindingsEvent(::System::Action_2<::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO>, ::Zenject::DiContainer*>* value);

  /// @brief Method remove_transitionDidFinishEvent, addr 0x10799bc, size 0xb0, virtual false, abstract: false, final false
  inline void remove_transitionDidFinishEvent(::System::Action_2<::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO>, ::Zenject::DiContainer*>* value);

  /// @brief Method remove_transitionDidStartEvent, addr 0x107985c, size 0xb0, virtual false, abstract: false, final false
  inline void remove_transitionDidStartEvent(::System::Action_1<float_t>* value);

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

  /// @brief Field _emptyTransitionSceneInfo, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SceneInfo> ____emptyTransitionSceneInfo;

  /// @brief Field _zenjectSceneLoader, offset: 0x20, size: 0x8, def value: None
  ::Zenject::ZenjectSceneLoader* ____zenjectSceneLoader;

  /// @brief Field transitionDidStartEvent, offset: 0x28, size: 0x8, def value: None
  ::System::Action_1<float_t>* ___transitionDidStartEvent;

  /// @brief Field beforeDismissingScenesEvent, offset: 0x30, size: 0x8, def value: None
  ::System::Action* ___beforeDismissingScenesEvent;

  /// @brief Field transitionDidFinishEvent, offset: 0x38, size: 0x8, def value: None
  ::System::Action_2<::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO>, ::Zenject::DiContainer*>* ___transitionDidFinishEvent;

  /// @brief Field installEarlyBindingsEvent, offset: 0x40, size: 0x8, def value: None
  ::System::Action_2<::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO>, ::Zenject::DiContainer*>* ___installEarlyBindingsEvent;

  /// @brief Field _inTransition, offset: 0x48, size: 0x1, def value: None
  bool ____inTransition;

  /// @brief Field _scenesStack, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::__GameScenesManager__ScenesStackData*>* ____scenesStack;

  /// @brief Field _neverUnloadScenes, offset: 0x58, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::StringW>* ____neverUnloadScenes;

  /// @brief Field _sceneNameToSceneOperationHandlesDictionary, offset: 0x60, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW,
                                               ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>*
      ____sceneNameToSceneOperationHandlesDictionary;

  /// @brief Field kLongTransitionLength offset 0xffffffff size 0x4
  static constexpr float_t kLongTransitionLength{ 1.3 };

  /// @brief Field kRootContainerGOName offset 0xffffffff size 0x8
  static constexpr ::ConstString kRootContainerGOName{ u"RootContainer" };

  /// @brief Field kShortTransitionLength offset 0xffffffff size 0x4
  static constexpr float_t kShortTransitionLength{ 0.35 };

  /// @brief Field kStandardTransitionLength offset 0xffffffff size 0x4
  static constexpr float_t kStandardTransitionLength{ 0.7 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameScenesManager, 0x68>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::GameScenesManager, ____emptyTransitionSceneInfo) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameScenesManager, ____zenjectSceneLoader) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameScenesManager, ___transitionDidStartEvent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameScenesManager, ___beforeDismissingScenesEvent) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameScenesManager, ___transitionDidFinishEvent) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameScenesManager, ___installEarlyBindingsEvent) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameScenesManager, ____inTransition) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameScenesManager, ____scenesStack) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameScenesManager, ____neverUnloadScenes) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameScenesManager, ____sceneNameToSceneOperationHandlesDictionary) == 0x60, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GameScenesManager__SceneDismissType, "", "GameScenesManager/SceneDismissType");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GameScenesManager__ScenePresentType, "", "GameScenesManager/ScenePresentType");
NEED_NO_BOX(::GlobalNamespace::GameScenesManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameScenesManager*, "", "GameScenesManager");
NEED_NO_BOX(::GlobalNamespace::__GameScenesManager__ScenesStackData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GameScenesManager__ScenesStackData*, "", "GameScenesManager/ScenesStackData");
NEED_NO_BOX(::GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__42*, "", "GameScenesManager/<ScenesTransitionCoroutine>d__42");
NEED_NO_BOX(::GlobalNamespace::__GameScenesManager___WaitUntilTaskCompleted_d__43);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GameScenesManager___WaitUntilTaskCompleted_d__43*, "", "GameScenesManager/<WaitUntilTaskCompleted>d__43");
NEED_NO_BOX(::GlobalNamespace::__GameScenesManager____c__DisplayClass34_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GameScenesManager____c__DisplayClass34_0*, "", "GameScenesManager/<>c__DisplayClass34_0");
NEED_NO_BOX(::GlobalNamespace::__GameScenesManager____c__DisplayClass35_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GameScenesManager____c__DisplayClass35_0*, "", "GameScenesManager/<>c__DisplayClass35_0");
NEED_NO_BOX(::GlobalNamespace::__GameScenesManager____c__DisplayClass36_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GameScenesManager____c__DisplayClass36_0*, "", "GameScenesManager/<>c__DisplayClass36_0");
NEED_NO_BOX(::GlobalNamespace::__GameScenesManager____c__DisplayClass37_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GameScenesManager____c__DisplayClass37_0*, "", "GameScenesManager/<>c__DisplayClass37_0");
NEED_NO_BOX(::GlobalNamespace::__GameScenesManager____c__DisplayClass38_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GameScenesManager____c__DisplayClass38_0*, "", "GameScenesManager/<>c__DisplayClass38_0");
NEED_NO_BOX(::GlobalNamespace::__GameScenesManager____c__DisplayClass39_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GameScenesManager____c__DisplayClass39_0*, "", "GameScenesManager/<>c__DisplayClass39_0");
NEED_NO_BOX(::GlobalNamespace::__GameScenesManager____c__DisplayClass43_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GameScenesManager____c__DisplayClass43_0*, "", "GameScenesManager/<>c__DisplayClass43_0");

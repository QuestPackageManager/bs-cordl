#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GameScenesManager_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GameScenesManager)
namespace Zenject {
class DiContainer;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace GlobalNamespace {
class __GameScenesManager__ScenesStackData;
}
namespace GlobalNamespace {
class __GameScenesManager____c__DisplayClass34_0;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Action;
}
namespace UnityEngine {
class WaitUntil;
}
namespace GlobalNamespace {
struct __GameScenesManager__ScenePresentType;
}
namespace System {
template <typename T> class Action_1;
}
namespace GlobalNamespace {
class __GameScenesManager____c__DisplayClass30_0;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace GlobalNamespace {
class __GameScenesManager____c__DisplayClass38_0;
}
namespace GlobalNamespace {
class SceneInfo;
}
namespace Zenject {
class ZenjectSceneLoader;
}
namespace GlobalNamespace {
class ScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class __GameScenesManager___ScenesTransitionCoroutine_d__38;
}
namespace GlobalNamespace {
class __GameScenesManager____c__DisplayClass31_0;
}
namespace GlobalNamespace {
struct __GameScenesManager__SceneDismissType;
}
namespace GlobalNamespace {
class __GameScenesManager____c__DisplayClass33_0;
}
namespace GlobalNamespace {
class __GameScenesManager____c__DisplayClass32_0;
}
namespace GlobalNamespace {
class __GameScenesManager____c__DisplayClass35_0;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System {
class Object;
}
namespace UnityEngine::EventSystems {
class EventSystem;
}
namespace UnityEngine {
class AsyncOperation;
}
namespace System {
class IDisposable;
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
class __GameScenesManager___ScenesTransitionCoroutine_d__38;
}
namespace GlobalNamespace {
class __GameScenesManager____c__DisplayClass30_0;
}
namespace GlobalNamespace {
class __GameScenesManager____c__DisplayClass31_0;
}
namespace GlobalNamespace {
class __GameScenesManager____c__DisplayClass32_0;
}
namespace GlobalNamespace {
class __GameScenesManager____c__DisplayClass33_0;
}
namespace GlobalNamespace {
class __GameScenesManager____c__DisplayClass34_0;
}
namespace GlobalNamespace {
class __GameScenesManager____c__DisplayClass35_0;
}
namespace GlobalNamespace {
class __GameScenesManager____c__DisplayClass38_0;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__GameScenesManager__SceneDismissType);
MARK_VAL_T(::GlobalNamespace::__GameScenesManager__ScenePresentType);
MARK_REF_PTR_T(::GlobalNamespace::GameScenesManager);
MARK_REF_PTR_T(::GlobalNamespace::__GameScenesManager__ScenesStackData);
MARK_REF_PTR_T(::GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__38);
MARK_REF_PTR_T(::GlobalNamespace::__GameScenesManager____c__DisplayClass30_0);
MARK_REF_PTR_T(::GlobalNamespace::__GameScenesManager____c__DisplayClass31_0);
MARK_REF_PTR_T(::GlobalNamespace::__GameScenesManager____c__DisplayClass32_0);
MARK_REF_PTR_T(::GlobalNamespace::__GameScenesManager____c__DisplayClass33_0);
MARK_REF_PTR_T(::GlobalNamespace::__GameScenesManager____c__DisplayClass34_0);
MARK_REF_PTR_T(::GlobalNamespace::__GameScenesManager____c__DisplayClass35_0);
MARK_REF_PTR_T(::GlobalNamespace::__GameScenesManager____c__DisplayClass38_0);
// Type: ::ScenesStackData
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15395))
// CS Name: ::GameScenesManager::ScenesStackData*
class CORDL_TYPE __GameScenesManager__ScenesStackData : public ::System::Object {
public:
  // Declarations
  /// @brief Field <sceneNames>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __get__sceneNames_k__BackingField, put = __set__sceneNames_k__BackingField))::System::Collections::Generic::List_1<::StringW>* _sceneNames_k__BackingField;

  /// @brief Field <container>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __get__container_k__BackingField, put = __set__container_k__BackingField))::Zenject::DiContainer* _container_k__BackingField;

  __declspec(property(get = get_sceneNames, put = set_sceneNames))::System::Collections::Generic::List_1<::StringW>* sceneNames;

  __declspec(property(get = get_container, put = set_container))::Zenject::DiContainer* container;

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __get__sceneNames_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __get__sceneNames_k__BackingField() const;

  constexpr void __set__sceneNames_k__BackingField(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr ::Zenject::DiContainer*& __get__container_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& __get__container_k__BackingField() const;

  constexpr void __set__container_k__BackingField(::Zenject::DiContainer* value);

  /// @brief Method get_sceneNames addr 0xe21a04 size 0x8 virtual false final false
  inline ::System::Collections::Generic::List_1<::StringW>* get_sceneNames();

  /// @brief Method set_sceneNames addr 0xe21a0c size 0x8 virtual false final false
  inline void set_sceneNames(::System::Collections::Generic::List_1<::StringW>* value);

  /// @brief Method get_container addr 0xe21a14 size 0x8 virtual false final false
  inline ::Zenject::DiContainer* get_container();

  /// @brief Method set_container addr 0xe21a1c size 0x8 virtual false final false
  inline void set_container(::Zenject::DiContainer* value);

  static inline ::GlobalNamespace::__GameScenesManager__ScenesStackData* New_ctor(::System::Collections::Generic::List_1<::StringW>* sceneNames);

  /// @brief Method .ctor addr 0xe1f62c size 0x28 virtual false final false
  inline void _ctor(::System::Collections::Generic::List_1<::StringW>* sceneNames);

  /// @brief Method SetDiContainer addr 0xe21a24 size 0x8 virtual false final false
  inline void SetDiContainer(::Zenject::DiContainer* container);

  // Ctor Parameters [CppParam { name: "", ty: "__GameScenesManager__ScenesStackData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GameScenesManager__ScenesStackData(__GameScenesManager__ScenesStackData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GameScenesManager__ScenesStackData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GameScenesManager__ScenesStackData(__GameScenesManager__ScenesStackData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GameScenesManager__ScenesStackData();

public:
  /// @brief Field <sceneNames>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ____sceneNames_k__BackingField;

  /// @brief Field <container>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::Zenject::DiContainer* ____container_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GameScenesManager__ScenesStackData, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::ScenePresentType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15396))
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __GameScenesManager__ScenePresentType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __GameScenesManager__ScenePresentType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field DoNotLoad value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__GameScenesManager__ScenePresentType const DoNotLoad;

  /// @brief Field Load value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__GameScenesManager__ScenePresentType const Load;

  /// @brief Field Activate value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__GameScenesManager__ScenePresentType const Activate;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GameScenesManager__ScenePresentType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::SceneDismissType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15397))
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __GameScenesManager__SceneDismissType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __GameScenesManager__SceneDismissType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field DoNotUnload value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__GameScenesManager__SceneDismissType const DoNotUnload;

  /// @brief Field Unload value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__GameScenesManager__SceneDismissType const Unload;

  /// @brief Field Deactivate value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__GameScenesManager__SceneDismissType const Deactivate;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GameScenesManager__SceneDismissType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass30_0
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15398))
// CS Name: ::GameScenesManager::<>c__DisplayClass30_0*
class CORDL_TYPE __GameScenesManager____c__DisplayClass30_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field scenesStackData, offset 0x10, size 0x8
  __declspec(property(get = __get_scenesStackData, put = __set_scenesStackData))::GlobalNamespace::__GameScenesManager__ScenesStackData* scenesStackData;

  /// @brief Field scenesTransitionSetupData, offset 0x18, size 0x8
  __declspec(property(get = __get_scenesTransitionSetupData, put = __set_scenesTransitionSetupData))::GlobalNamespace::ScenesTransitionSetupDataSO* scenesTransitionSetupData;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::GameScenesManager* __4__this;

  /// @brief Field finishCallback, offset 0x28, size 0x8
  __declspec(property(get = __get_finishCallback, put = __set_finishCallback))::System::Action_1<::Zenject::DiContainer*>* finishCallback;

  constexpr ::GlobalNamespace::__GameScenesManager__ScenesStackData*& __get_scenesStackData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__GameScenesManager__ScenesStackData*> const& __get_scenesStackData() const;

  constexpr void __set_scenesStackData(::GlobalNamespace::__GameScenesManager__ScenesStackData* value);

  constexpr ::GlobalNamespace::ScenesTransitionSetupDataSO*& __get_scenesTransitionSetupData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ScenesTransitionSetupDataSO*> const& __get_scenesTransitionSetupData() const;

  constexpr void __set_scenesTransitionSetupData(::GlobalNamespace::ScenesTransitionSetupDataSO* value);

  constexpr ::GlobalNamespace::GameScenesManager*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameScenesManager*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::GameScenesManager* value);

  constexpr ::System::Action_1<::Zenject::DiContainer*>*& __get_finishCallback();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::Zenject::DiContainer*>*> const& __get_finishCallback() const;

  constexpr void __set_finishCallback(::System::Action_1<::Zenject::DiContainer*>* value);

  static inline ::GlobalNamespace::__GameScenesManager____c__DisplayClass30_0* New_ctor();

  /// @brief Method .ctor addr 0xe1f4fc size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <PushScenes>b__0 addr 0xe21a2c size 0x6c virtual false final false
  inline void _PushScenes_b__0(::Zenject::DiContainer* container);

  /// @brief Method <PushScenes>b__1 addr 0xe21bc4 size 0x78 virtual false final false
  inline void _PushScenes_b__1(::Zenject::DiContainer* container);

  // Ctor Parameters [CppParam { name: "", ty: "__GameScenesManager____c__DisplayClass30_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GameScenesManager____c__DisplayClass30_0(__GameScenesManager____c__DisplayClass30_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GameScenesManager____c__DisplayClass30_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GameScenesManager____c__DisplayClass30_0(__GameScenesManager____c__DisplayClass30_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GameScenesManager____c__DisplayClass30_0();

public:
  /// @brief Field scenesStackData, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::__GameScenesManager__ScenesStackData* ___scenesStackData;

  /// @brief Field scenesTransitionSetupData, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::ScenesTransitionSetupDataSO* ___scenesTransitionSetupData;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::GameScenesManager* _____4__this;

  /// @brief Field finishCallback, offset: 0x28, size: 0x8, def value: None
  ::System::Action_1<::Zenject::DiContainer*>* ___finishCallback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GameScenesManager____c__DisplayClass30_0, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass31_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15399))
// CS Name: ::GameScenesManager::<>c__DisplayClass31_0*
class CORDL_TYPE __GameScenesManager____c__DisplayClass31_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::GameScenesManager* __4__this;

  /// @brief Field finishCallback, offset 0x18, size 0x8
  __declspec(property(get = __get_finishCallback, put = __set_finishCallback))::System::Action_1<::Zenject::DiContainer*>* finishCallback;

  constexpr ::GlobalNamespace::GameScenesManager*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameScenesManager*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::GameScenesManager* value);

  constexpr ::System::Action_1<::Zenject::DiContainer*>*& __get_finishCallback();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::Zenject::DiContainer*>*> const& __get_finishCallback() const;

  constexpr void __set_finishCallback(::System::Action_1<::Zenject::DiContainer*>* value);

  static inline ::GlobalNamespace::__GameScenesManager____c__DisplayClass31_0* New_ctor();

  /// @brief Method .ctor addr 0xe1f90c size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <PopScenes>b__0 addr 0xe21c3c size 0xa8 virtual false final false
  inline void _PopScenes_b__0(::Zenject::DiContainer* container);

  // Ctor Parameters [CppParam { name: "", ty: "__GameScenesManager____c__DisplayClass31_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GameScenesManager____c__DisplayClass31_0(__GameScenesManager____c__DisplayClass31_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GameScenesManager____c__DisplayClass31_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GameScenesManager____c__DisplayClass31_0(__GameScenesManager____c__DisplayClass31_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GameScenesManager____c__DisplayClass31_0();

public:
  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::GameScenesManager* _____4__this;

  /// @brief Field finishCallback, offset: 0x18, size: 0x8, def value: None
  ::System::Action_1<::Zenject::DiContainer*>* ___finishCallback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GameScenesManager____c__DisplayClass31_0, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass32_0
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15400))
// CS Name: ::GameScenesManager::<>c__DisplayClass32_0*
class CORDL_TYPE __GameScenesManager____c__DisplayClass32_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::GameScenesManager* __4__this;

  /// @brief Field scenesTransitionSetupData, offset 0x18, size 0x8
  __declspec(property(get = __get_scenesTransitionSetupData, put = __set_scenesTransitionSetupData))::GlobalNamespace::ScenesTransitionSetupDataSO* scenesTransitionSetupData;

  /// @brief Field newSceneNames, offset 0x20, size 0x8
  __declspec(property(get = __get_newSceneNames, put = __set_newSceneNames))::System::Collections::Generic::List_1<::StringW>* newSceneNames;

  /// @brief Field emptyTransitionSceneNameList, offset 0x28, size 0x8
  __declspec(property(get = __get_emptyTransitionSceneNameList, put = __set_emptyTransitionSceneNameList))::System::Collections::Generic::List_1<::StringW>* emptyTransitionSceneNameList;

  /// @brief Field scenesStackData, offset 0x30, size 0x8
  __declspec(property(get = __get_scenesStackData, put = __set_scenesStackData))::GlobalNamespace::__GameScenesManager__ScenesStackData* scenesStackData;

  /// @brief Field finishCallback, offset 0x38, size 0x8
  __declspec(property(get = __get_finishCallback, put = __set_finishCallback))::System::Action_1<::Zenject::DiContainer*>* finishCallback;

  /// @brief Field <>9__1, offset 0x40, size 0x8
  __declspec(property(get = __get___9__1, put = __set___9__1))::System::Action_1<::Zenject::DiContainer*>* __9__1;

  /// @brief Field <>9__2, offset 0x48, size 0x8
  __declspec(property(get = __get___9__2, put = __set___9__2))::System::Action_1<::Zenject::DiContainer*>* __9__2;

  constexpr ::GlobalNamespace::GameScenesManager*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameScenesManager*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::GameScenesManager* value);

  constexpr ::GlobalNamespace::ScenesTransitionSetupDataSO*& __get_scenesTransitionSetupData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ScenesTransitionSetupDataSO*> const& __get_scenesTransitionSetupData() const;

  constexpr void __set_scenesTransitionSetupData(::GlobalNamespace::ScenesTransitionSetupDataSO* value);

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __get_newSceneNames();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __get_newSceneNames() const;

  constexpr void __set_newSceneNames(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __get_emptyTransitionSceneNameList();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __get_emptyTransitionSceneNameList() const;

  constexpr void __set_emptyTransitionSceneNameList(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr ::GlobalNamespace::__GameScenesManager__ScenesStackData*& __get_scenesStackData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__GameScenesManager__ScenesStackData*> const& __get_scenesStackData() const;

  constexpr void __set_scenesStackData(::GlobalNamespace::__GameScenesManager__ScenesStackData* value);

  constexpr ::System::Action_1<::Zenject::DiContainer*>*& __get_finishCallback();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::Zenject::DiContainer*>*> const& __get_finishCallback() const;

  constexpr void __set_finishCallback(::System::Action_1<::Zenject::DiContainer*>* value);

  constexpr ::System::Action_1<::Zenject::DiContainer*>*& __get___9__1();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::Zenject::DiContainer*>*> const& __get___9__1() const;

  constexpr void __set___9__1(::System::Action_1<::Zenject::DiContainer*>* value);

  constexpr ::System::Action_1<::Zenject::DiContainer*>*& __get___9__2();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::Zenject::DiContainer*>*> const& __get___9__2() const;

  constexpr void __set___9__2(::System::Action_1<::Zenject::DiContainer*>* value);

  static inline ::GlobalNamespace::__GameScenesManager____c__DisplayClass32_0* New_ctor();

  /// @brief Method .ctor addr 0xe1fc6c size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <ReplaceScenes>b__0 addr 0xe21ce4 size 0x128 virtual false final false
  inline void _ReplaceScenes_b__0(::Zenject::DiContainer* emptySceneContainer);

  /// @brief Method <ReplaceScenes>b__1 addr 0xe21e0c size 0x6c virtual false final false
  inline void _ReplaceScenes_b__1(::Zenject::DiContainer* container);

  /// @brief Method <ReplaceScenes>b__2 addr 0xe21e78 size 0x78 virtual false final false
  inline void _ReplaceScenes_b__2(::Zenject::DiContainer* container);

  // Ctor Parameters [CppParam { name: "", ty: "__GameScenesManager____c__DisplayClass32_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GameScenesManager____c__DisplayClass32_0(__GameScenesManager____c__DisplayClass32_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GameScenesManager____c__DisplayClass32_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GameScenesManager____c__DisplayClass32_0(__GameScenesManager____c__DisplayClass32_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GameScenesManager____c__DisplayClass32_0();

public:
  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::GameScenesManager* _____4__this;

  /// @brief Field scenesTransitionSetupData, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::ScenesTransitionSetupDataSO* ___scenesTransitionSetupData;

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
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GameScenesManager____c__DisplayClass32_0, 0x50>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass33_0
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15401))
// CS Name: ::GameScenesManager::<>c__DisplayClass33_0*
class CORDL_TYPE __GameScenesManager____c__DisplayClass33_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::GameScenesManager* __4__this;

  /// @brief Field scenesTransitionSetupData, offset 0x18, size 0x8
  __declspec(property(get = __get_scenesTransitionSetupData, put = __set_scenesTransitionSetupData))::GlobalNamespace::ScenesTransitionSetupDataSO* scenesTransitionSetupData;

  /// @brief Field newSceneNames, offset 0x20, size 0x8
  __declspec(property(get = __get_newSceneNames, put = __set_newSceneNames))::System::Collections::Generic::List_1<::StringW>* newSceneNames;

  /// @brief Field emptyTransitionSceneNameList, offset 0x28, size 0x8
  __declspec(property(get = __get_emptyTransitionSceneNameList, put = __set_emptyTransitionSceneNameList))::System::Collections::Generic::List_1<::StringW>* emptyTransitionSceneNameList;

  /// @brief Field scenesStackData, offset 0x30, size 0x8
  __declspec(property(get = __get_scenesStackData, put = __set_scenesStackData))::GlobalNamespace::__GameScenesManager__ScenesStackData* scenesStackData;

  /// @brief Field finishCallback, offset 0x38, size 0x8
  __declspec(property(get = __get_finishCallback, put = __set_finishCallback))::System::Action_1<::Zenject::DiContainer*>* finishCallback;

  /// @brief Field <>9__1, offset 0x40, size 0x8
  __declspec(property(get = __get___9__1, put = __set___9__1))::System::Action_1<::Zenject::DiContainer*>* __9__1;

  /// @brief Field <>9__2, offset 0x48, size 0x8
  __declspec(property(get = __get___9__2, put = __set___9__2))::System::Action_1<::Zenject::DiContainer*>* __9__2;

  constexpr ::GlobalNamespace::GameScenesManager*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameScenesManager*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::GameScenesManager* value);

  constexpr ::GlobalNamespace::ScenesTransitionSetupDataSO*& __get_scenesTransitionSetupData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ScenesTransitionSetupDataSO*> const& __get_scenesTransitionSetupData() const;

  constexpr void __set_scenesTransitionSetupData(::GlobalNamespace::ScenesTransitionSetupDataSO* value);

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __get_newSceneNames();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __get_newSceneNames() const;

  constexpr void __set_newSceneNames(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __get_emptyTransitionSceneNameList();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __get_emptyTransitionSceneNameList() const;

  constexpr void __set_emptyTransitionSceneNameList(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr ::GlobalNamespace::__GameScenesManager__ScenesStackData*& __get_scenesStackData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__GameScenesManager__ScenesStackData*> const& __get_scenesStackData() const;

  constexpr void __set_scenesStackData(::GlobalNamespace::__GameScenesManager__ScenesStackData* value);

  constexpr ::System::Action_1<::Zenject::DiContainer*>*& __get_finishCallback();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::Zenject::DiContainer*>*> const& __get_finishCallback() const;

  constexpr void __set_finishCallback(::System::Action_1<::Zenject::DiContainer*>* value);

  constexpr ::System::Action_1<::Zenject::DiContainer*>*& __get___9__1();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::Zenject::DiContainer*>*> const& __get___9__1() const;

  constexpr void __set___9__1(::System::Action_1<::Zenject::DiContainer*>* value);

  constexpr ::System::Action_1<::Zenject::DiContainer*>*& __get___9__2();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::Zenject::DiContainer*>*> const& __get___9__2() const;

  constexpr void __set___9__2(::System::Action_1<::Zenject::DiContainer*>* value);

  static inline ::GlobalNamespace::__GameScenesManager____c__DisplayClass33_0* New_ctor();

  /// @brief Method .ctor addr 0xe202a0 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <ClearAndOpenScenes>b__0 addr 0xe21ef0 size 0x128 virtual false final false
  inline void _ClearAndOpenScenes_b__0(::Zenject::DiContainer* emptySceneContainer);

  /// @brief Method <ClearAndOpenScenes>b__1 addr 0xe22018 size 0x6c virtual false final false
  inline void _ClearAndOpenScenes_b__1(::Zenject::DiContainer* container);

  /// @brief Method <ClearAndOpenScenes>b__2 addr 0xe22084 size 0x78 virtual false final false
  inline void _ClearAndOpenScenes_b__2(::Zenject::DiContainer* container);

  // Ctor Parameters [CppParam { name: "", ty: "__GameScenesManager____c__DisplayClass33_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GameScenesManager____c__DisplayClass33_0(__GameScenesManager____c__DisplayClass33_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GameScenesManager____c__DisplayClass33_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GameScenesManager____c__DisplayClass33_0(__GameScenesManager____c__DisplayClass33_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GameScenesManager____c__DisplayClass33_0();

public:
  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::GameScenesManager* _____4__this;

  /// @brief Field scenesTransitionSetupData, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::ScenesTransitionSetupDataSO* ___scenesTransitionSetupData;

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
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GameScenesManager____c__DisplayClass33_0, 0x50>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass34_0
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15402))
// CS Name: ::GameScenesManager::<>c__DisplayClass34_0*
class CORDL_TYPE __GameScenesManager____c__DisplayClass34_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field scenesStackData, offset 0x10, size 0x8
  __declspec(property(get = __get_scenesStackData, put = __set_scenesStackData))::GlobalNamespace::__GameScenesManager__ScenesStackData* scenesStackData;

  /// @brief Field scenesTransitionSetupData, offset 0x18, size 0x8
  __declspec(property(get = __get_scenesTransitionSetupData, put = __set_scenesTransitionSetupData))::GlobalNamespace::ScenesTransitionSetupDataSO* scenesTransitionSetupData;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::GameScenesManager* __4__this;

  /// @brief Field finishCallback, offset 0x28, size 0x8
  __declspec(property(get = __get_finishCallback, put = __set_finishCallback))::System::Action_1<::Zenject::DiContainer*>* finishCallback;

  constexpr ::GlobalNamespace::__GameScenesManager__ScenesStackData*& __get_scenesStackData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__GameScenesManager__ScenesStackData*> const& __get_scenesStackData() const;

  constexpr void __set_scenesStackData(::GlobalNamespace::__GameScenesManager__ScenesStackData* value);

  constexpr ::GlobalNamespace::ScenesTransitionSetupDataSO*& __get_scenesTransitionSetupData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ScenesTransitionSetupDataSO*> const& __get_scenesTransitionSetupData() const;

  constexpr void __set_scenesTransitionSetupData(::GlobalNamespace::ScenesTransitionSetupDataSO* value);

  constexpr ::GlobalNamespace::GameScenesManager*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameScenesManager*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::GameScenesManager* value);

  constexpr ::System::Action_1<::Zenject::DiContainer*>*& __get_finishCallback();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::Zenject::DiContainer*>*> const& __get_finishCallback() const;

  constexpr void __set_finishCallback(::System::Action_1<::Zenject::DiContainer*>* value);

  static inline ::GlobalNamespace::__GameScenesManager____c__DisplayClass34_0* New_ctor();

  /// @brief Method .ctor addr 0xe20664 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <AppendScenes>b__0 addr 0xe220fc size 0x6c virtual false final false
  inline void _AppendScenes_b__0(::Zenject::DiContainer* container);

  /// @brief Method <AppendScenes>b__1 addr 0xe22168 size 0x78 virtual false final false
  inline void _AppendScenes_b__1(::Zenject::DiContainer* container);

  // Ctor Parameters [CppParam { name: "", ty: "__GameScenesManager____c__DisplayClass34_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GameScenesManager____c__DisplayClass34_0(__GameScenesManager____c__DisplayClass34_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GameScenesManager____c__DisplayClass34_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GameScenesManager____c__DisplayClass34_0(__GameScenesManager____c__DisplayClass34_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GameScenesManager____c__DisplayClass34_0();

public:
  /// @brief Field scenesStackData, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::__GameScenesManager__ScenesStackData* ___scenesStackData;

  /// @brief Field scenesTransitionSetupData, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::ScenesTransitionSetupDataSO* ___scenesTransitionSetupData;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::GameScenesManager* _____4__this;

  /// @brief Field finishCallback, offset: 0x28, size: 0x8, def value: None
  ::System::Action_1<::Zenject::DiContainer*>* ___finishCallback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GameScenesManager____c__DisplayClass34_0, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass35_0
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15403))
// CS Name: ::GameScenesManager::<>c__DisplayClass35_0*
class CORDL_TYPE __GameScenesManager____c__DisplayClass35_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::GameScenesManager* __4__this;

  /// @brief Field finishCallback, offset 0x18, size 0x8
  __declspec(property(get = __get_finishCallback, put = __set_finishCallback))::System::Action_1<::Zenject::DiContainer*>* finishCallback;

  /// @brief Field sceneNamesToRemove, offset 0x20, size 0x8
  __declspec(property(get = __get_sceneNamesToRemove, put = __set_sceneNamesToRemove))::System::Collections::Generic::List_1<::StringW>* sceneNamesToRemove;

  constexpr ::GlobalNamespace::GameScenesManager*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameScenesManager*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::GameScenesManager* value);

  constexpr ::System::Action_1<::Zenject::DiContainer*>*& __get_finishCallback();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::Zenject::DiContainer*>*> const& __get_finishCallback() const;

  constexpr void __set_finishCallback(::System::Action_1<::Zenject::DiContainer*>* value);

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __get_sceneNamesToRemove();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __get_sceneNamesToRemove() const;

  constexpr void __set_sceneNamesToRemove(::System::Collections::Generic::List_1<::StringW>* value);

  static inline ::GlobalNamespace::__GameScenesManager____c__DisplayClass35_0* New_ctor();

  /// @brief Method .ctor addr 0xe20a0c size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <RemoveScenes>b__0 addr 0xe221e0 size 0xa8 virtual false final false
  inline void _RemoveScenes_b__0(::Zenject::DiContainer* container);

  /// @brief Method <RemoveScenes>b__1 addr 0xe22288 size 0x64 virtual false final false
  inline bool _RemoveScenes_b__1(::StringW scene);

  // Ctor Parameters [CppParam { name: "", ty: "__GameScenesManager____c__DisplayClass35_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GameScenesManager____c__DisplayClass35_0(__GameScenesManager____c__DisplayClass35_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GameScenesManager____c__DisplayClass35_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GameScenesManager____c__DisplayClass35_0(__GameScenesManager____c__DisplayClass35_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GameScenesManager____c__DisplayClass35_0();

public:
  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::GameScenesManager* _____4__this;

  /// @brief Field finishCallback, offset: 0x18, size: 0x8, def value: None
  ::System::Action_1<::Zenject::DiContainer*>* ___finishCallback;

  /// @brief Field sceneNamesToRemove, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ___sceneNamesToRemove;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GameScenesManager____c__DisplayClass35_0, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass38_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15404))
// CS Name: ::GameScenesManager::<>c__DisplayClass38_0*
class CORDL_TYPE __GameScenesManager____c__DisplayClass38_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field newScenesTransitionSetupData, offset 0x10, size 0x8
  __declspec(property(get = __get_newScenesTransitionSetupData, put = __set_newScenesTransitionSetupData))::GlobalNamespace::ScenesTransitionSetupDataSO* newScenesTransitionSetupData;

  constexpr ::GlobalNamespace::ScenesTransitionSetupDataSO*& __get_newScenesTransitionSetupData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ScenesTransitionSetupDataSO*> const& __get_newScenesTransitionSetupData() const;

  constexpr void __set_newScenesTransitionSetupData(::GlobalNamespace::ScenesTransitionSetupDataSO* value);

  static inline ::GlobalNamespace::__GameScenesManager____c__DisplayClass38_0* New_ctor();

  /// @brief Method .ctor addr 0xe222ec size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <ScenesTransitionCoroutine>b__0 addr 0xe222f4 size 0x24 virtual false final false
  inline bool _ScenesTransitionCoroutine_b__0();

  /// @brief Method <ScenesTransitionCoroutine>b__1 addr 0xe22318 size 0x24 virtual false final false
  inline bool _ScenesTransitionCoroutine_b__1();

  // Ctor Parameters [CppParam { name: "", ty: "__GameScenesManager____c__DisplayClass38_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GameScenesManager____c__DisplayClass38_0(__GameScenesManager____c__DisplayClass38_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GameScenesManager____c__DisplayClass38_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GameScenesManager____c__DisplayClass38_0(__GameScenesManager____c__DisplayClass38_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GameScenesManager____c__DisplayClass38_0();

public:
  /// @brief Field newScenesTransitionSetupData, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::ScenesTransitionSetupDataSO* ___newScenesTransitionSetupData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GameScenesManager____c__DisplayClass38_0, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<ScenesTransitionCoroutine>d__38
// SizeInfo { instance_size: 168, native_size: -1, calculated_instance_size: 168, calculated_native_size: 168, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15397)), TypeDefinitionIndex(TypeDefinitionIndex(3842)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3842), inst: 397
// }), TypeDefinitionIndex(TypeDefinitionIndex(15396)), TypeDefinitionIndex(TypeDefinitionIndex(2613))} Self: TypeDefinitionIndex(TypeDefinitionIndex(15405)) CS Name:
// ::GameScenesManager::<ScenesTransitionCoroutine>d__38*
class CORDL_TYPE __GameScenesManager___ScenesTransitionCoroutine_d__38 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::System::Object* __2__current;

  /// @brief Field newScenesTransitionSetupData, offset 0x20, size 0x8
  __declspec(property(get = __get_newScenesTransitionSetupData, put = __set_newScenesTransitionSetupData))::GlobalNamespace::ScenesTransitionSetupDataSO* newScenesTransitionSetupData;

  /// @brief Field scenesToDismiss, offset 0x28, size 0x8
  __declspec(property(get = __get_scenesToDismiss, put = __set_scenesToDismiss))::System::Collections::Generic::List_1<::StringW>* scenesToDismiss;

  /// @brief Field <>4__this, offset 0x30, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::GameScenesManager* __4__this;

  /// @brief Field scenesToPresent, offset 0x38, size 0x8
  __declspec(property(get = __get_scenesToPresent, put = __set_scenesToPresent))::System::Collections::Generic::List_1<::StringW>* scenesToPresent;

  /// @brief Field minDuration, offset 0x40, size 0x4
  __declspec(property(get = __get_minDuration, put = __set_minDuration)) float_t minDuration;

  /// @brief Field presentType, offset 0x44, size 0x4
  __declspec(property(get = __get_presentType, put = __set_presentType))::GlobalNamespace::__GameScenesManager__ScenePresentType presentType;

  /// @brief Field afterMinDurationCallback, offset 0x48, size 0x8
  __declspec(property(get = __get_afterMinDurationCallback, put = __set_afterMinDurationCallback))::System::Action* afterMinDurationCallback;

  /// @brief Field <>8__1, offset 0x50, size 0x8
  __declspec(property(get = __get___8__1, put = __set___8__1))::GlobalNamespace::__GameScenesManager____c__DisplayClass38_0* __8__1;

  /// @brief Field extraBindingsCallback, offset 0x58, size 0x8
  __declspec(property(get = __get_extraBindingsCallback, put = __set_extraBindingsCallback))::System::Action_1<::Zenject::DiContainer*>* extraBindingsCallback;

  /// @brief Field dismissType, offset 0x60, size 0x4
  __declspec(property(get = __get_dismissType, put = __set_dismissType))::GlobalNamespace::__GameScenesManager__SceneDismissType dismissType;

  /// @brief Field finishCallback, offset 0x68, size 0x8
  __declspec(property(get = __get_finishCallback, put = __set_finishCallback))::System::Action_1<::Zenject::DiContainer*>* finishCallback;

  /// @brief Field <eventSystem>5__2, offset 0x70, size 0x8
  __declspec(property(get = __get__eventSystem_5__2, put = __set__eventSystem_5__2))::UnityEngine::EventSystems::EventSystem* _eventSystem_5__2;

  /// @brief Field <sceneName>5__3, offset 0x78, size 0x8
  __declspec(property(get = __get__sceneName_5__3, put = __set__sceneName_5__3))::StringW _sceneName_5__3;

  /// @brief Field <loadSceneOperation>5__4, offset 0x80, size 0x8
  __declspec(property(get = __get__loadSceneOperation_5__4, put = __set__loadSceneOperation_5__4))::UnityEngine::AsyncOperation* _loadSceneOperation_5__4;

  /// @brief Field <sceneNum>5__5, offset 0x88, size 0x4
  __declspec(property(get = __get__sceneNum_5__5, put = __set__sceneNum_5__5)) int32_t _sceneNum_5__5;

  /// @brief Field <>7__wrap5, offset 0x90, size 0x18
  __declspec(property(get = __get___7__wrap5, put = __set___7__wrap5))::System::Collections::Generic::__List_1__Enumerator<::StringW> __7__wrap5;

  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr int32_t& __get___1__state();

  constexpr int32_t const& __get___1__state() const;

  constexpr void __set___1__state(int32_t value);

  constexpr ::System::Object*& __get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get___2__current() const;

  constexpr void __set___2__current(::System::Object* value);

  constexpr ::GlobalNamespace::ScenesTransitionSetupDataSO*& __get_newScenesTransitionSetupData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ScenesTransitionSetupDataSO*> const& __get_newScenesTransitionSetupData() const;

  constexpr void __set_newScenesTransitionSetupData(::GlobalNamespace::ScenesTransitionSetupDataSO* value);

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __get_scenesToDismiss();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __get_scenesToDismiss() const;

  constexpr void __set_scenesToDismiss(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr ::GlobalNamespace::GameScenesManager*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameScenesManager*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::GameScenesManager* value);

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __get_scenesToPresent();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __get_scenesToPresent() const;

  constexpr void __set_scenesToPresent(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr float_t& __get_minDuration();

  constexpr float_t const& __get_minDuration() const;

  constexpr void __set_minDuration(float_t value);

  constexpr ::GlobalNamespace::__GameScenesManager__ScenePresentType& __get_presentType();

  constexpr ::GlobalNamespace::__GameScenesManager__ScenePresentType const& __get_presentType() const;

  constexpr void __set_presentType(::GlobalNamespace::__GameScenesManager__ScenePresentType value);

  constexpr ::System::Action*& __get_afterMinDurationCallback();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_afterMinDurationCallback() const;

  constexpr void __set_afterMinDurationCallback(::System::Action* value);

  constexpr ::GlobalNamespace::__GameScenesManager____c__DisplayClass38_0*& __get___8__1();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__GameScenesManager____c__DisplayClass38_0*> const& __get___8__1() const;

  constexpr void __set___8__1(::GlobalNamespace::__GameScenesManager____c__DisplayClass38_0* value);

  constexpr ::System::Action_1<::Zenject::DiContainer*>*& __get_extraBindingsCallback();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::Zenject::DiContainer*>*> const& __get_extraBindingsCallback() const;

  constexpr void __set_extraBindingsCallback(::System::Action_1<::Zenject::DiContainer*>* value);

  constexpr ::GlobalNamespace::__GameScenesManager__SceneDismissType& __get_dismissType();

  constexpr ::GlobalNamespace::__GameScenesManager__SceneDismissType const& __get_dismissType() const;

  constexpr void __set_dismissType(::GlobalNamespace::__GameScenesManager__SceneDismissType value);

  constexpr ::System::Action_1<::Zenject::DiContainer*>*& __get_finishCallback();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::Zenject::DiContainer*>*> const& __get_finishCallback() const;

  constexpr void __set_finishCallback(::System::Action_1<::Zenject::DiContainer*>* value);

  constexpr ::UnityEngine::EventSystems::EventSystem*& __get__eventSystem_5__2();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::EventSystems::EventSystem*> const& __get__eventSystem_5__2() const;

  constexpr void __set__eventSystem_5__2(::UnityEngine::EventSystems::EventSystem* value);

  constexpr ::StringW& __get__sceneName_5__3();

  constexpr ::StringW const& __get__sceneName_5__3() const;

  constexpr void __set__sceneName_5__3(::StringW value);

  constexpr ::UnityEngine::AsyncOperation*& __get__loadSceneOperation_5__4();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AsyncOperation*> const& __get__loadSceneOperation_5__4() const;

  constexpr void __set__loadSceneOperation_5__4(::UnityEngine::AsyncOperation* value);

  constexpr int32_t& __get__sceneNum_5__5();

  constexpr int32_t const& __get__sceneNum_5__5() const;

  constexpr void __set__sceneNum_5__5(int32_t value);

  constexpr ::System::Collections::Generic::__List_1__Enumerator<::StringW>& __get___7__wrap5();

  constexpr ::System::Collections::Generic::__List_1__Enumerator<::StringW> const& __get___7__wrap5() const;

  constexpr void __set___7__wrap5(::System::Collections::Generic::__List_1__Enumerator<::StringW> value);

  static inline ::GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__38* New_ctor(int32_t __1__state);

  /// @brief Method .ctor addr 0xe20a14 size 0x28 virtual false final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose addr 0xe2233c size 0x38 virtual true final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext addr 0xe22374 size 0xefc virtual true final true
  inline bool MoveNext();

  /// @brief Method <>m__Finally1 addr 0xe23310 size 0x50 virtual false final false
  inline void __m__Finally1();

  /// @brief Method <>m__Finally2 addr 0xe23360 size 0x50 virtual false final false
  inline void __m__Finally2();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0xe233b0 size 0x8 virtual true final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset addr 0xe233b8 size 0x40 virtual true final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current addr 0xe233f8 size 0x8 virtual true final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__GameScenesManager___ScenesTransitionCoroutine_d__38", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GameScenesManager___ScenesTransitionCoroutine_d__38(__GameScenesManager___ScenesTransitionCoroutine_d__38&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GameScenesManager___ScenesTransitionCoroutine_d__38", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GameScenesManager___ScenesTransitionCoroutine_d__38(__GameScenesManager___ScenesTransitionCoroutine_d__38 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GameScenesManager___ScenesTransitionCoroutine_d__38();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field newScenesTransitionSetupData, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::ScenesTransitionSetupDataSO* ___newScenesTransitionSetupData;

  /// @brief Field scenesToDismiss, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ___scenesToDismiss;

  /// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::GameScenesManager* _____4__this;

  /// @brief Field scenesToPresent, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ___scenesToPresent;

  /// @brief Field minDuration, offset: 0x40, size: 0x4, def value: None
  float_t ___minDuration;

  /// @brief Field presentType, offset: 0x44, size: 0x4, def value: None
  ::GlobalNamespace::__GameScenesManager__ScenePresentType ___presentType;

  /// @brief Field afterMinDurationCallback, offset: 0x48, size: 0x8, def value: None
  ::System::Action* ___afterMinDurationCallback;

  /// @brief Field <>8__1, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::__GameScenesManager____c__DisplayClass38_0* _____8__1;

  /// @brief Field extraBindingsCallback, offset: 0x58, size: 0x8, def value: None
  ::System::Action_1<::Zenject::DiContainer*>* ___extraBindingsCallback;

  /// @brief Field dismissType, offset: 0x60, size: 0x4, def value: None
  ::GlobalNamespace::__GameScenesManager__SceneDismissType ___dismissType;

  /// @brief Field finishCallback, offset: 0x68, size: 0x8, def value: None
  ::System::Action_1<::Zenject::DiContainer*>* ___finishCallback;

  /// @brief Field <eventSystem>5__2, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::EventSystems::EventSystem* ____eventSystem_5__2;

  /// @brief Field <sceneName>5__3, offset: 0x78, size: 0x8, def value: None
  ::StringW ____sceneName_5__3;

  /// @brief Field <loadSceneOperation>5__4, offset: 0x80, size: 0x8, def value: None
  ::UnityEngine::AsyncOperation* ____loadSceneOperation_5__4;

  /// @brief Field <sceneNum>5__5, offset: 0x88, size: 0x4, def value: None
  int32_t ____sceneNum_5__5;

  /// @brief Field <>7__wrap5, offset: 0x90, size: 0x18, def value: None
  ::System::Collections::Generic::__List_1__Enumerator<::StringW> _____7__wrap5;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__38, 0xa8>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::GameScenesManager
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15406))
// CS Name: ::GameScenesManager*
class CORDL_TYPE GameScenesManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _ScenesTransitionCoroutine_d__38 = ::GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__38;

  using __c__DisplayClass38_0 = ::GlobalNamespace::__GameScenesManager____c__DisplayClass38_0;

  using __c__DisplayClass35_0 = ::GlobalNamespace::__GameScenesManager____c__DisplayClass35_0;

  using __c__DisplayClass34_0 = ::GlobalNamespace::__GameScenesManager____c__DisplayClass34_0;

  using __c__DisplayClass33_0 = ::GlobalNamespace::__GameScenesManager____c__DisplayClass33_0;

  using __c__DisplayClass32_0 = ::GlobalNamespace::__GameScenesManager____c__DisplayClass32_0;

  using __c__DisplayClass31_0 = ::GlobalNamespace::__GameScenesManager____c__DisplayClass31_0;

  using __c__DisplayClass30_0 = ::GlobalNamespace::__GameScenesManager____c__DisplayClass30_0;

  using SceneDismissType = ::GlobalNamespace::__GameScenesManager__SceneDismissType;

  using ScenePresentType = ::GlobalNamespace::__GameScenesManager__ScenePresentType;

  using ScenesStackData = ::GlobalNamespace::__GameScenesManager__ScenesStackData;

  /// @brief Field _emptyTransitionSceneInfo, offset 0x18, size 0x8
  __declspec(property(get = __get__emptyTransitionSceneInfo, put = __set__emptyTransitionSceneInfo))::GlobalNamespace::SceneInfo* _emptyTransitionSceneInfo;

  /// @brief Field _zenjectSceneLoader, offset 0x20, size 0x8
  __declspec(property(get = __get__zenjectSceneLoader, put = __set__zenjectSceneLoader))::Zenject::ZenjectSceneLoader* _zenjectSceneLoader;

  /// @brief Field transitionDidStartEvent, offset 0x28, size 0x8
  __declspec(property(get = __get_transitionDidStartEvent, put = __set_transitionDidStartEvent))::System::Action_1<float_t>* transitionDidStartEvent;

  /// @brief Field beforeDismissingScenesEvent, offset 0x30, size 0x8
  __declspec(property(get = __get_beforeDismissingScenesEvent, put = __set_beforeDismissingScenesEvent))::System::Action* beforeDismissingScenesEvent;

  /// @brief Field transitionDidFinishEvent, offset 0x38, size 0x8
  __declspec(property(get = __get_transitionDidFinishEvent,
                      put = __set_transitionDidFinishEvent))::System::Action_2<::GlobalNamespace::ScenesTransitionSetupDataSO*, ::Zenject::DiContainer*>* transitionDidFinishEvent;

  /// @brief Field installEarlyBindingsEvent, offset 0x40, size 0x8
  __declspec(property(get = __get_installEarlyBindingsEvent,
                      put = __set_installEarlyBindingsEvent))::System::Action_2<::GlobalNamespace::ScenesTransitionSetupDataSO*, ::Zenject::DiContainer*>* installEarlyBindingsEvent;

  /// @brief Field _inTransition, offset 0x48, size 0x1
  __declspec(property(get = __get__inTransition, put = __set__inTransition)) bool _inTransition;

  /// @brief Field _scenesStack, offset 0x50, size 0x8
  __declspec(property(get = __get__scenesStack, put = __set__scenesStack))::System::Collections::Generic::List_1<::GlobalNamespace::__GameScenesManager__ScenesStackData*>* _scenesStack;

  /// @brief Field _neverUnloadScenes, offset 0x58, size 0x8
  __declspec(property(get = __get__neverUnloadScenes, put = __set__neverUnloadScenes))::System::Collections::Generic::HashSet_1<::StringW>* _neverUnloadScenes;

  __declspec(property(get = get_currentScenesContainer))::Zenject::DiContainer* currentScenesContainer;

  __declspec(property(get = get_isInTransition)) bool isInTransition;

  __declspec(property(get = get_waitUntilSceneTransitionFinish))::UnityEngine::WaitUntil* waitUntilSceneTransitionFinish;

  constexpr ::GlobalNamespace::SceneInfo*& __get__emptyTransitionSceneInfo();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SceneInfo*> const& __get__emptyTransitionSceneInfo() const;

  constexpr void __set__emptyTransitionSceneInfo(::GlobalNamespace::SceneInfo* value);

  constexpr ::Zenject::ZenjectSceneLoader*& __get__zenjectSceneLoader();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::ZenjectSceneLoader*> const& __get__zenjectSceneLoader() const;

  constexpr void __set__zenjectSceneLoader(::Zenject::ZenjectSceneLoader* value);

  constexpr ::System::Action_1<float_t>*& __get_transitionDidStartEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<float_t>*> const& __get_transitionDidStartEvent() const;

  constexpr void __set_transitionDidStartEvent(::System::Action_1<float_t>* value);

  constexpr ::System::Action*& __get_beforeDismissingScenesEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_beforeDismissingScenesEvent() const;

  constexpr void __set_beforeDismissingScenesEvent(::System::Action* value);

  constexpr ::System::Action_2<::GlobalNamespace::ScenesTransitionSetupDataSO*, ::Zenject::DiContainer*>*& __get_transitionDidFinishEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::ScenesTransitionSetupDataSO*, ::Zenject::DiContainer*>*> const& __get_transitionDidFinishEvent() const;

  constexpr void __set_transitionDidFinishEvent(::System::Action_2<::GlobalNamespace::ScenesTransitionSetupDataSO*, ::Zenject::DiContainer*>* value);

  constexpr ::System::Action_2<::GlobalNamespace::ScenesTransitionSetupDataSO*, ::Zenject::DiContainer*>*& __get_installEarlyBindingsEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::ScenesTransitionSetupDataSO*, ::Zenject::DiContainer*>*> const& __get_installEarlyBindingsEvent() const;

  constexpr void __set_installEarlyBindingsEvent(::System::Action_2<::GlobalNamespace::ScenesTransitionSetupDataSO*, ::Zenject::DiContainer*>* value);

  constexpr bool& __get__inTransition();

  constexpr bool const& __get__inTransition() const;

  constexpr void __set__inTransition(bool value);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__GameScenesManager__ScenesStackData*>*& __get__scenesStack();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__GameScenesManager__ScenesStackData*>*> const& __get__scenesStack() const;

  constexpr void __set__scenesStack(::System::Collections::Generic::List_1<::GlobalNamespace::__GameScenesManager__ScenesStackData*>* value);

  constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& __get__neverUnloadScenes();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::StringW>*> const& __get__neverUnloadScenes() const;

  constexpr void __set__neverUnloadScenes(::System::Collections::Generic::HashSet_1<::StringW>* value);

  /// @brief Method add_transitionDidStartEvent addr 0xe1eac8 size 0xb0 virtual false final false
  inline void add_transitionDidStartEvent(::System::Action_1<float_t>* value);

  /// @brief Method remove_transitionDidStartEvent addr 0xe1eb78 size 0xb0 virtual false final false
  inline void remove_transitionDidStartEvent(::System::Action_1<float_t>* value);

  /// @brief Method add_beforeDismissingScenesEvent addr 0xe1e8d0 size 0x9c virtual false final false
  inline void add_beforeDismissingScenesEvent(::System::Action* value);

  /// @brief Method remove_beforeDismissingScenesEvent addr 0xe1d924 size 0x9c virtual false final false
  inline void remove_beforeDismissingScenesEvent(::System::Action* value);

  /// @brief Method add_transitionDidFinishEvent addr 0xe1ec28 size 0xb0 virtual false final false
  inline void add_transitionDidFinishEvent(::System::Action_2<::GlobalNamespace::ScenesTransitionSetupDataSO*, ::Zenject::DiContainer*>* value);

  /// @brief Method remove_transitionDidFinishEvent addr 0xe1ecd8 size 0xb0 virtual false final false
  inline void remove_transitionDidFinishEvent(::System::Action_2<::GlobalNamespace::ScenesTransitionSetupDataSO*, ::Zenject::DiContainer*>* value);

  /// @brief Method add_installEarlyBindingsEvent addr 0xe1ed88 size 0xb0 virtual false final false
  inline void add_installEarlyBindingsEvent(::System::Action_2<::GlobalNamespace::ScenesTransitionSetupDataSO*, ::Zenject::DiContainer*>* value);

  /// @brief Method remove_installEarlyBindingsEvent addr 0xe1ee38 size 0xb0 virtual false final false
  inline void remove_installEarlyBindingsEvent(::System::Action_2<::GlobalNamespace::ScenesTransitionSetupDataSO*, ::Zenject::DiContainer*>* value);

  /// @brief Method get_currentScenesContainer addr 0xe1eee8 size 0x58 virtual false final false
  inline ::Zenject::DiContainer* get_currentScenesContainer();

  /// @brief Method get_isInTransition addr 0xe1ef40 size 0x8 virtual false final false
  inline bool get_isInTransition();

  /// @brief Method get_waitUntilSceneTransitionFinish addr 0xe1ef48 size 0xac virtual false final false
  inline ::UnityEngine::WaitUntil* get_waitUntilSceneTransitionFinish();

  /// @brief Method MarkSceneAsPersistent addr 0xe1e878 size 0x58 virtual false final false
  inline void MarkSceneAsPersistent(::StringW sceneName);

  /// @brief Method GetCurrentlyLoadedSceneNames addr 0xe1eff4 size 0x1b4 virtual false final false
  inline ::System::Collections::Generic::List_1<::StringW>* GetCurrentlyLoadedSceneNames();

  /// @brief Method PushScenes addr 0xe1f1a8 size 0x354 virtual false final false
  inline void PushScenes(::GlobalNamespace::ScenesTransitionSetupDataSO* scenesTransitionSetupData, float_t minDuration, ::System::Action* afterMinDurationCallback,
                         ::System::Action_1<::Zenject::DiContainer*>* finishCallback);

  /// @brief Method PopScenes addr 0xe1f724 size 0x1e8 virtual false final false
  inline void PopScenes(float_t minDuration, ::System::Action* afterMinDurationCallback, ::System::Action_1<::Zenject::DiContainer*>* finishCallback);

  /// @brief Method ReplaceScenes addr 0xe1f914 size 0x358 virtual false final false
  inline void ReplaceScenes(::GlobalNamespace::ScenesTransitionSetupDataSO* scenesTransitionSetupData,
                            ::ArrayW<::System::Collections::IEnumerator*, ::Array<::System::Collections::IEnumerator*>*> beforeNewScenesActivateRoutines, float_t minDuration,
                            ::System::Action* afterMinDurationCallback, ::System::Action_1<::Zenject::DiContainer*>* finishCallback);

  /// @brief Method ClearAndOpenScenes addr 0xe1fc74 size 0x62c virtual false final false
  inline void ClearAndOpenScenes(::GlobalNamespace::ScenesTransitionSetupDataSO* scenesTransitionSetupData, float_t minDuration, ::System::Action* afterMinDurationCallback,
                                 ::System::Action_1<::Zenject::DiContainer*>* finishCallback, bool unloadAllScenes);

  /// @brief Method AppendScenes addr 0xe202a8 size 0x3bc virtual false final false
  inline void AppendScenes(::GlobalNamespace::ScenesTransitionSetupDataSO* scenesTransitionSetupData, float_t minDuration, ::System::Action* afterMinDurationCallback,
                           ::System::Action_1<::Zenject::DiContainer*>* finishCallback);

  /// @brief Method RemoveScenes addr 0xe2066c size 0x3a0 virtual false final false
  inline void RemoveScenes(::GlobalNamespace::ScenesTransitionSetupDataSO* scenesTransitionSetupDataSo, float_t minDuration, ::System::Action* afterMinDurationCallback,
                           ::System::Action_1<::Zenject::DiContainer*>* finishCallback);

  /// @brief Method ScenesTransitionCoroutine addr 0xe1f654 size 0xd0 virtual false final false
  inline ::System::Collections::IEnumerator*
  ScenesTransitionCoroutine(::GlobalNamespace::ScenesTransitionSetupDataSO* newScenesTransitionSetupData, ::System::Collections::Generic::List_1<::StringW>* scenesToPresent,
                            ::GlobalNamespace::__GameScenesManager__ScenePresentType presentType, ::System::Collections::Generic::List_1<::StringW>* scenesToDismiss,
                            ::GlobalNamespace::__GameScenesManager__SceneDismissType dismissType, float_t minDuration, ::System::Action* afterMinDurationCallback,
                            ::System::Action_1<::Zenject::DiContainer*>* extraBindingsCallback, ::System::Action_1<::Zenject::DiContainer*>* finishCallback);

  /// @brief Method ActivatePresentedSceneRootObjects addr 0xe20a3c size 0x300 virtual false final false
  static inline void ActivatePresentedSceneRootObjects(::System::Collections::Generic::List_1<::StringW>* scenesToPresent);

  /// @brief Method IsAnySceneInStack addr 0xe20d3c size 0x164 virtual false final false
  inline bool IsAnySceneInStack(::System::Collections::Generic::List_1<::StringW>* sceneNames);

  /// @brief Method AreAllScenesInStack addr 0xe21154 size 0x8 virtual false final false
  inline bool AreAllScenesInStack(::System::Collections::Generic::List_1<::StringW>* sceneNames);

  /// @brief Method IsSceneInStack addr 0xe20ea0 size 0x2b4 virtual false final false
  inline bool IsSceneInStack(::StringW searchSceneName);

  /// @brief Method SceneNamesFromSceneInfoArray addr 0xe1f504 size 0x128 virtual false final false
  inline ::System::Collections::Generic::List_1<::StringW>* SceneNamesFromSceneInfoArray(::ArrayW<::GlobalNamespace::SceneInfo*, ::Array<::GlobalNamespace::SceneInfo*>*> sceneInfos);

  /// @brief Method SetActiveRootObjectsInScenes addr 0xe2115c size 0x180 virtual false final false
  inline void SetActiveRootObjectsInScenes(::System::Collections::Generic::List_1<::StringW>* sceneNames, bool value);

  /// @brief Method ReparentRootGameObjectsToDisabledGameObject addr 0xe212dc size 0x284 virtual false final false
  inline void ReparentRootGameObjectsToDisabledGameObject(::StringW sceneName);

  /// @brief Method MoveGameObjectsFromContainerToSceneRoot addr 0xe21560 size 0x37c virtual false final false
  inline void MoveGameObjectsFromContainerToSceneRoot(::StringW sceneName);

  /// @brief Method Log addr 0xe218dc size 0x58 virtual false final false
  static inline void Log(::StringW message);

  static inline ::GlobalNamespace::GameScenesManager* New_ctor();

  /// @brief Method .ctor addr 0xe21934 size 0xc0 virtual false final false
  inline void _ctor();

  /// @brief Method <get_waitUntilSceneTransitionFinish>b__22_0 addr 0xe219f4 size 0x10 virtual false final false
  inline bool _get_waitUntilSceneTransitionFinish_b__22_0();

  // Ctor Parameters [CppParam { name: "", ty: "GameScenesManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameScenesManager(GameScenesManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameScenesManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameScenesManager(GameScenesManager const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameScenesManager();

public:
  /// @brief Field _emptyTransitionSceneInfo, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::SceneInfo* ____emptyTransitionSceneInfo;

  /// @brief Field _zenjectSceneLoader, offset: 0x20, size: 0x8, def value: None
  ::Zenject::ZenjectSceneLoader* ____zenjectSceneLoader;

  /// @brief Field transitionDidStartEvent, offset: 0x28, size: 0x8, def value: None
  ::System::Action_1<float_t>* ___transitionDidStartEvent;

  /// @brief Field beforeDismissingScenesEvent, offset: 0x30, size: 0x8, def value: None
  ::System::Action* ___beforeDismissingScenesEvent;

  /// @brief Field transitionDidFinishEvent, offset: 0x38, size: 0x8, def value: None
  ::System::Action_2<::GlobalNamespace::ScenesTransitionSetupDataSO*, ::Zenject::DiContainer*>* ___transitionDidFinishEvent;

  /// @brief Field installEarlyBindingsEvent, offset: 0x40, size: 0x8, def value: None
  ::System::Action_2<::GlobalNamespace::ScenesTransitionSetupDataSO*, ::Zenject::DiContainer*>* ___installEarlyBindingsEvent;

  /// @brief Field _inTransition, offset: 0x48, size: 0x1, def value: None
  bool ____inTransition;

  /// @brief Field _scenesStack, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::__GameScenesManager__ScenesStackData*>* ____scenesStack;

  /// @brief Field _neverUnloadScenes, offset: 0x58, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::StringW>* ____neverUnloadScenes;

  /// @brief Field kStandardTransitionLength offset 0xffffffff size 0x4
  static constexpr float_t kStandardTransitionLength{ 0.7 };

  /// @brief Field kShortTransitionLength offset 0xffffffff size 0x4
  static constexpr float_t kShortTransitionLength{ 0.35 };

  /// @brief Field kLongTransitionLength offset 0xffffffff size 0x4
  static constexpr float_t kLongTransitionLength{ 1.3 };

  /// @brief Field kRootContainerGOName offset 0xffffffff size 0x8
  static constexpr ::ConstString kRootContainerGOName{ u"RootContainer" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameScenesManager, 0x60>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GameScenesManager__SceneDismissType, "", "GameScenesManager/SceneDismissType");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GameScenesManager__ScenePresentType, "", "GameScenesManager/ScenePresentType");
NEED_NO_BOX(::GlobalNamespace::GameScenesManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameScenesManager*, "", "GameScenesManager");
NEED_NO_BOX(::GlobalNamespace::__GameScenesManager__ScenesStackData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GameScenesManager__ScenesStackData*, "", "GameScenesManager/ScenesStackData");
NEED_NO_BOX(::GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__38);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GameScenesManager___ScenesTransitionCoroutine_d__38*, "", "GameScenesManager/<ScenesTransitionCoroutine>d__38");
NEED_NO_BOX(::GlobalNamespace::__GameScenesManager____c__DisplayClass30_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GameScenesManager____c__DisplayClass30_0*, "", "GameScenesManager/<>c__DisplayClass30_0");
NEED_NO_BOX(::GlobalNamespace::__GameScenesManager____c__DisplayClass31_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GameScenesManager____c__DisplayClass31_0*, "", "GameScenesManager/<>c__DisplayClass31_0");
NEED_NO_BOX(::GlobalNamespace::__GameScenesManager____c__DisplayClass32_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GameScenesManager____c__DisplayClass32_0*, "", "GameScenesManager/<>c__DisplayClass32_0");
NEED_NO_BOX(::GlobalNamespace::__GameScenesManager____c__DisplayClass33_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GameScenesManager____c__DisplayClass33_0*, "", "GameScenesManager/<>c__DisplayClass33_0");
NEED_NO_BOX(::GlobalNamespace::__GameScenesManager____c__DisplayClass34_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GameScenesManager____c__DisplayClass34_0*, "", "GameScenesManager/<>c__DisplayClass34_0");
NEED_NO_BOX(::GlobalNamespace::__GameScenesManager____c__DisplayClass35_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GameScenesManager____c__DisplayClass35_0*, "", "GameScenesManager/<>c__DisplayClass35_0");
NEED_NO_BOX(::GlobalNamespace::__GameScenesManager____c__DisplayClass38_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GameScenesManager____c__DisplayClass38_0*, "", "GameScenesManager/<>c__DisplayClass38_0");

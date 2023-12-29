#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AppInit_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__MonoInstaller_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AppInit)
namespace GlobalNamespace {
struct __AppInit__AppStartType;
}
namespace GlobalNamespace {
class __AppInit___StartCoroutine_d__11;
}
namespace GlobalNamespace {
class __AppInit____c;
}
namespace GlobalNamespace {
class GameScenesManager;
}
namespace GlobalNamespace {
class AppInitSetupData;
}
namespace GlobalNamespace {
class MultiplayerMockSettings;
}
namespace GlobalNamespace {
class MockPlayersModel;
}
namespace UnityEngine {
class GameObject;
}
namespace System::Collections {
class IEnumerator;
}
namespace GlobalNamespace {
class __AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System {
class Object;
}
namespace System {
class IDisposable;
}
namespace System {
template <typename TResult> class Func_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct __AppInit__AppStartType;
}
namespace GlobalNamespace {
class AppInit;
}
namespace GlobalNamespace {
class __AppInit___StartCoroutine_d__11;
}
namespace GlobalNamespace {
class __AppInit____c;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__AppInit__AppStartType);
MARK_REF_PTR_T(::GlobalNamespace::AppInit);
MARK_REF_PTR_T(::GlobalNamespace::__AppInit___StartCoroutine_d__11);
MARK_REF_PTR_T(::GlobalNamespace::__AppInit____c);
// Type: ::AppStartType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4011))
// CS Name: ::AppInit::AppStartType
struct CORDL_TYPE __AppInit__AppStartType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____AppInit__AppStartType_Unwrapped
  enum struct ____AppInit__AppStartType_Unwrapped : int32_t {
    __E_AppStart = static_cast<int32_t>(0x0),
    __E_AppRestart = static_cast<int32_t>(0x1),
    __E_MultiSceneEditor = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____AppInit__AppStartType_Unwrapped() const noexcept {
    return static_cast<____AppInit__AppStartType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __AppInit__AppStartType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AppInit__AppStartType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field AppStart value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__AppInit__AppStartType const AppStart;

  /// @brief Field AppRestart value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__AppInit__AppStartType const AppRestart;

  /// @brief Field MultiSceneEditor value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__AppInit__AppStartType const MultiSceneEditor;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AppInit__AppStartType, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__AppInit__AppStartType, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4012))
// CS Name: ::AppInit::<>c*
class CORDL_TYPE __AppInit____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__AppInit____c* __9;

  /// @brief Field <>9__11_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__11_0, put = setStaticF___9__11_0))::System::Func_1<bool>* __9__11_0;

  static inline void setStaticF___9(::GlobalNamespace::__AppInit____c* value);

  static inline ::GlobalNamespace::__AppInit____c* getStaticF___9();

  static inline void setStaticF___9__11_0(::System::Func_1<bool>* value);

  static inline ::System::Func_1<bool>* getStaticF___9__11_0();

  static inline ::GlobalNamespace::__AppInit____c* New_ctor();

  /// @brief Method .ctor addr 0x20c5cd8 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <StartCoroutine>b__11_0 addr 0x20c5ce0 size 0x8 virtual false final false
  inline bool _StartCoroutine_b__11_0();

  // Ctor Parameters [CppParam { name: "", ty: "__AppInit____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AppInit____c(__AppInit____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AppInit____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AppInit____c(__AppInit____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AppInit____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AppInit____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<StartCoroutine>d__11
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(4011))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4013))
// CS Name: ::AppInit::<StartCoroutine>d__11*
class CORDL_TYPE __AppInit___StartCoroutine_d__11 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::AppInit* __4__this;

  /// @brief Field <startType>5__2, offset 0x28, size 0x4
  __declspec(property(get = __get__startType_5__2, put = __set__startType_5__2))::GlobalNamespace::__AppInit__AppStartType _startType_5__2;

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

  constexpr ::GlobalNamespace::AppInit*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AppInit*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::AppInit* value);

  constexpr ::GlobalNamespace::__AppInit__AppStartType& __get__startType_5__2();

  constexpr ::GlobalNamespace::__AppInit__AppStartType const& __get__startType_5__2() const;

  constexpr void __set__startType_5__2(::GlobalNamespace::__AppInit__AppStartType value);

  static inline ::GlobalNamespace::__AppInit___StartCoroutine_d__11* New_ctor(int32_t __1__state);

  /// @brief Method .ctor addr 0x20c5a34 size 0x28 virtual false final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose addr 0x20c5ce8 size 0x4 virtual true final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext addr 0x20c5cec size 0x200 virtual true final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x20c5eec size 0x8 virtual true final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset addr 0x20c5ef4 size 0x40 virtual true final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current addr 0x20c5f34 size 0x8 virtual true final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__AppInit___StartCoroutine_d__11", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AppInit___StartCoroutine_d__11(__AppInit___StartCoroutine_d__11&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AppInit___StartCoroutine_d__11", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AppInit___StartCoroutine_d__11(__AppInit___StartCoroutine_d__11 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AppInit___StartCoroutine_d__11();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::AppInit* _____4__this;

  /// @brief Field <startType>5__2, offset: 0x28, size: 0x4, def value: None
  ::GlobalNamespace::__AppInit__AppStartType ____startType_5__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AppInit___StartCoroutine_d__11, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__AppInit___StartCoroutine_d__11, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AppInit___StartCoroutine_d__11, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AppInit___StartCoroutine_d__11, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AppInit___StartCoroutine_d__11, ____startType_5__2) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::AppInit
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11066))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4014))
// CS Name: ::AppInit*
class CORDL_TYPE AppInit : public ::Zenject::MonoInstaller {
public:
  // Declarations
  using _StartCoroutine_d__11 = ::GlobalNamespace::__AppInit___StartCoroutine_d__11;

  using __c = ::GlobalNamespace::__AppInit____c;

  using AppStartType = ::GlobalNamespace::__AppInit__AppStartType;

  /// @brief Field _cameraGO, offset 0x20, size 0x8
  __declspec(property(get = __get__cameraGO, put = __set__cameraGO))::UnityEngine::GameObject* _cameraGO;

  /// @brief Field _multiplayerMockSettings, offset 0x28, size 0x8
  __declspec(property(get = __get__multiplayerMockSettings, put = __set__multiplayerMockSettings))::GlobalNamespace::MultiplayerMockSettings* _multiplayerMockSettings;

  /// @brief Field _sceneSetupData, offset 0x30, size 0x8
  __declspec(property(get = __get__sceneSetupData, put = __set__sceneSetupData))::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData* _sceneSetupData;

  /// @brief Field _setupData, offset 0x38, size 0x8
  __declspec(property(get = __get__setupData, put = __set__setupData))::GlobalNamespace::AppInitSetupData* _setupData;

  /// @brief Field _gameScenesManager, offset 0x40, size 0x8
  __declspec(property(get = __get__gameScenesManager, put = __set__gameScenesManager))::GlobalNamespace::GameScenesManager* _gameScenesManager;

  __declspec(property(get = get_gameScenesManager))::GlobalNamespace::GameScenesManager* gameScenesManager;

  __declspec(property(get = get_isTestContext)) bool isTestContext;

  constexpr ::UnityEngine::GameObject*& __get__cameraGO();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get__cameraGO() const;

  constexpr void __set__cameraGO(::UnityEngine::GameObject* value);

  constexpr ::GlobalNamespace::MultiplayerMockSettings*& __get__multiplayerMockSettings();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerMockSettings*> const& __get__multiplayerMockSettings() const;

  constexpr void __set__multiplayerMockSettings(::GlobalNamespace::MultiplayerMockSettings* value);

  constexpr ::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData*& __get__sceneSetupData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData*> const& __get__sceneSetupData() const;

  constexpr void __set__sceneSetupData(::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData* value);

  constexpr ::GlobalNamespace::AppInitSetupData*& __get__setupData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AppInitSetupData*> const& __get__setupData() const;

  constexpr void __set__setupData(::GlobalNamespace::AppInitSetupData* value);

  constexpr ::GlobalNamespace::GameScenesManager*& __get__gameScenesManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameScenesManager*> const& __get__gameScenesManager() const;

  constexpr void __set__gameScenesManager(::GlobalNamespace::GameScenesManager* value);

  /// @brief Method get_gameScenesManager addr 0x20c583c size 0x8 virtual false final false
  inline ::GlobalNamespace::GameScenesManager* get_gameScenesManager();

  /// @brief Method get_isTestContext addr 0x20c5844 size 0x20 virtual false final false
  inline bool get_isTestContext();

  /// @brief Method Start addr 0x20c5864 size 0xd4 virtual true final false
  inline void Start();

  /// @brief Method StartCoroutine addr 0x20c59cc size 0x68 virtual false final false
  inline ::System::Collections::IEnumerator* StartCoroutine();

  /// @brief Method OnDestroy addr 0x20c5a5c size 0xd4 virtual false final false
  inline void OnDestroy();

  /// @brief Method HandleBeforeDismissingScenes addr 0x20c5b30 size 0xa0 virtual false final false
  inline void HandleBeforeDismissingScenes();

  /// @brief Method GetMockPlayersModel addr 0x20c5bd0 size 0x34 virtual false final false
  inline ::GlobalNamespace::MockPlayersModel* GetMockPlayersModel();

  /// @brief Method GetAppStartType addr 0x20c5938 size 0x94 virtual false final false
  inline ::GlobalNamespace::__AppInit__AppStartType GetAppStartType();

  /// @brief Method AppStartAndMultiSceneEditorSetup addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void AppStartAndMultiSceneEditorSetup();

  /// @brief Method RepeatableSetup addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void RepeatableSetup();

  /// @brief Method TransitionToNextScene addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void TransitionToNextScene();

  static inline ::GlobalNamespace::AppInit* New_ctor();

  /// @brief Method .ctor addr 0x20c5c04 size 0x70 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "AppInit", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AppInit(AppInit&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AppInit", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AppInit(AppInit const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AppInit();

public:
  /// @brief Field _cameraGO, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::GameObject* ____cameraGO;

  /// @brief Field _multiplayerMockSettings, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerMockSettings* ____multiplayerMockSettings;

  /// @brief Field _sceneSetupData, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData* ____sceneSetupData;

  /// @brief Field _setupData, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::AppInitSetupData* ____setupData;

  /// @brief Field _gameScenesManager, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::GameScenesManager* ____gameScenesManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AppInit, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::AppInit, ____cameraGO) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AppInit, ____multiplayerMockSettings) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AppInit, ____sceneSetupData) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AppInit, ____setupData) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AppInit, ____gameScenesManager) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AppInit__AppStartType, "", "AppInit/AppStartType");
NEED_NO_BOX(::GlobalNamespace::AppInit);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AppInit*, "", "AppInit");
NEED_NO_BOX(::GlobalNamespace::__AppInit___StartCoroutine_d__11);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AppInit___StartCoroutine_d__11*, "", "AppInit/<StartCoroutine>d__11");
NEED_NO_BOX(::GlobalNamespace::__AppInit____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AppInit____c*, "", "AppInit/<>c");

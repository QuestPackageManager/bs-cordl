#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRSceneModelLoader.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRTask_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRSceneModelLoader)
namespace GlobalNamespace {
class OVRSceneManager;
}
namespace GlobalNamespace {
class OVRSceneModelLoader__AttemptToLoadSceneModel_d__7;
}
namespace GlobalNamespace {
struct OVRSceneModelLoader__OnLoadSceneModelFailedPermissionNotGranted_d__10;
}
namespace GlobalNamespace {
class OVRSceneModelLoader___c__DisplayClass9_0;
}
namespace GlobalNamespace {
template <typename TResult> struct OVRTask_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRSceneModelLoader;
}
namespace GlobalNamespace {
class OVRSceneModelLoader__AttemptToLoadSceneModel_d__7;
}
namespace GlobalNamespace {
class OVRSceneModelLoader___c__DisplayClass9_0;
}
namespace GlobalNamespace {
struct OVRSceneModelLoader__OnLoadSceneModelFailedPermissionNotGranted_d__10;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRSceneModelLoader);
MARK_REF_PTR_T(::GlobalNamespace::OVRSceneModelLoader__AttemptToLoadSceneModel_d__7);
MARK_REF_PTR_T(::GlobalNamespace::OVRSceneModelLoader___c__DisplayClass9_0);
MARK_VAL_T(::GlobalNamespace::OVRSceneModelLoader__OnLoadSceneModelFailedPermissionNotGranted_d__10);
// Dependencies System.Guid, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRSceneModelLoader/<>c__DisplayClass9_0
class CORDL_TYPE OVRSceneModelLoader___c__DisplayClass9_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field taskId, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_taskId, put = __cordl_internal_set_taskId)) ::System::Guid taskId;

  static inline ::GlobalNamespace::OVRSceneModelLoader___c__DisplayClass9_0* New_ctor();

  /// @brief Method <RequestScenePermissionAsync>b__1, addr 0x5d1d324, size 0x50, virtual false, abstract: false, final false
  inline void _RequestScenePermissionAsync_b__1(::StringW _);

  /// @brief Method <RequestScenePermissionAsync>b__2, addr 0x5d1d374, size 0x50, virtual false, abstract: false, final false
  inline void _RequestScenePermissionAsync_b__2(::StringW _);

  constexpr ::System::Guid const& __cordl_internal_get_taskId() const;

  constexpr ::System::Guid& __cordl_internal_get_taskId();

  constexpr void __cordl_internal_set_taskId(::System::Guid value);

  /// @brief Method .ctor, addr 0x5d1d320, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRSceneModelLoader___c__DisplayClass9_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRSceneModelLoader___c__DisplayClass9_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRSceneModelLoader___c__DisplayClass9_0(OVRSceneModelLoader___c__DisplayClass9_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRSceneModelLoader___c__DisplayClass9_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRSceneModelLoader___c__DisplayClass9_0(OVRSceneModelLoader___c__DisplayClass9_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7660 };

  /// @brief Field taskId, offset: 0x10, size: 0x10, def value: None
  ::System::Guid ___taskId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRSceneModelLoader___c__DisplayClass9_0, ___taskId) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSceneModelLoader___c__DisplayClass9_0, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRSceneModelLoader/<AttemptToLoadSceneModel>d__7
class CORDL_TYPE OVRSceneModelLoader__AttemptToLoadSceneModel_d__7 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::OVRSceneModelLoader> __4__this;

  /// @brief Field <timeSinceReminder>5__2, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__timeSinceReminder_5__2, put = __cordl_internal_set__timeSinceReminder_5__2)) float_t _timeSinceReminder_5__2;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x5d1d3c8, size 0xb8, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::OVRSceneModelLoader__AttemptToLoadSceneModel_d__7* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5d1d480, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x5d1d488, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5d1d4c0, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x5d1d3c4, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::UnityW<::GlobalNamespace::OVRSceneModelLoader> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::OVRSceneModelLoader>& __cordl_internal_get___4__this();

  constexpr float_t const& __cordl_internal_get__timeSinceReminder_5__2() const;

  constexpr float_t& __cordl_internal_get__timeSinceReminder_5__2();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::OVRSceneModelLoader> value);

  constexpr void __cordl_internal_set__timeSinceReminder_5__2(float_t value);

  /// @brief Method .ctor, addr 0x5d1cacc, size 0x8, virtual false, abstract: false, final false
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
  constexpr OVRSceneModelLoader__AttemptToLoadSceneModel_d__7();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRSceneModelLoader__AttemptToLoadSceneModel_d__7", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRSceneModelLoader__AttemptToLoadSceneModel_d__7(OVRSceneModelLoader__AttemptToLoadSceneModel_d__7&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRSceneModelLoader__AttemptToLoadSceneModel_d__7", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRSceneModelLoader__AttemptToLoadSceneModel_d__7(OVRSceneModelLoader__AttemptToLoadSceneModel_d__7 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7661 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRSceneModelLoader> _____4__this;

  /// @brief Field <timeSinceReminder>5__2, offset: 0x28, size: 0x4, def value: None
  float_t ____timeSinceReminder_5__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRSceneModelLoader__AttemptToLoadSceneModel_d__7, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneModelLoader__AttemptToLoadSceneModel_d__7, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneModelLoader__AttemptToLoadSceneModel_d__7, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneModelLoader__AttemptToLoadSceneModel_d__7, ____timeSinceReminder_5__2) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSceneModelLoader__AttemptToLoadSceneModel_d__7, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRTask`1::Awaiter<TResult>, System.Runtime.CompilerServices.AsyncVoidMethodBuilder
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRSceneModelLoader/<OnLoadSceneModelFailedPermissionNotGranted>d__10
struct CORDL_TYPE OVRSceneModelLoader__OnLoadSceneModelFailedPermissionNotGranted_d__10 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x5d1d4c8, size 0x3dc, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x5d1d8a4, size 0x8, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRSceneModelLoader__OnLoadSceneModelFailedPermissionNotGranted_d__10();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::OVRSceneModelLoader>", modifiers:
  // "", def_value: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::OVRTask_1_Awaiter<bool>", modifiers: "", def_value: None }]
  constexpr OVRSceneModelLoader__OnLoadSceneModelFailedPermissionNotGranted_d__10(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                                  ::UnityW<::GlobalNamespace::OVRSceneModelLoader> __4__this,
                                                                                  ::GlobalNamespace::OVRTask_1_Awaiter<bool> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7662 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRSceneModelLoader> __4__this;

  /// @brief Field <>u__1, offset: 0x30, size: 0x10, def value: None
  ::GlobalNamespace::OVRTask_1_Awaiter<bool> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRSceneModelLoader__OnLoadSceneModelFailedPermissionNotGranted_d__10, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneModelLoader__OnLoadSceneModelFailedPermissionNotGranted_d__10, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneModelLoader__OnLoadSceneModelFailedPermissionNotGranted_d__10, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneModelLoader__OnLoadSceneModelFailedPermissionNotGranted_d__10, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSceneModelLoader__OnLoadSceneModelFailedPermissionNotGranted_d__10, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRSceneModelLoader
class CORDL_TYPE OVRSceneModelLoader : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _AttemptToLoadSceneModel_d__7 = ::GlobalNamespace::OVRSceneModelLoader__AttemptToLoadSceneModel_d__7;

  using _OnLoadSceneModelFailedPermissionNotGranted_d__10 = ::GlobalNamespace::OVRSceneModelLoader__OnLoadSceneModelFailedPermissionNotGranted_d__10;

  using __c__DisplayClass9_0 = ::GlobalNamespace::OVRSceneModelLoader___c__DisplayClass9_0;

  __declspec(property(get = get_SceneManager, put = set_SceneManager)) ::UnityW<::GlobalNamespace::OVRSceneManager> SceneManager;

  /// @brief Field <SceneManager>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__SceneManager_k__BackingField, put = __cordl_internal_set__SceneManager_k__BackingField)) ::UnityW<::GlobalNamespace::OVRSceneManager>
      _SceneManager_k__BackingField;

  /// @brief Field _sceneCaptureRequested, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get__sceneCaptureRequested, put = __cordl_internal_set__sceneCaptureRequested)) bool _sceneCaptureRequested;

  /// @brief Method AttemptToLoadSceneModel, addr 0x5d1ca78, size 0x54, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* AttemptToLoadSceneModel();

  /// @brief Method LoadSceneModel, addr 0x5d1cad8, size 0x140, virtual false, abstract: false, final false
  inline void LoadSceneModel();

  static inline ::GlobalNamespace::OVRSceneModelLoader* New_ctor();

  /// @brief Method OnLoadSceneModelFailedPermissionNotGranted, addr 0x5d1cdb4, size 0xa0, virtual true, abstract: false, final false
  inline void OnLoadSceneModelFailedPermissionNotGranted();

  /// @brief Method OnNewSceneModelAvailable, addr 0x5d1d08c, size 0xe0, virtual true, abstract: false, final false
  inline void OnNewSceneModelAvailable();

  /// @brief Method OnNoSceneModelToLoad, addr 0x5d1cf2c, size 0x160, virtual true, abstract: false, final false
  inline void OnNoSceneModelToLoad();

  /// @brief Method OnSceneCaptureReturnedWithoutError, addr 0x5d1d16c, size 0xd8, virtual true, abstract: false, final false
  inline void OnSceneCaptureReturnedWithoutError();

  /// @brief Method OnSceneModelLoadedSuccessfully, addr 0x5d1ce54, size 0xd8, virtual true, abstract: false, final false
  inline void OnSceneModelLoadedSuccessfully();

  /// @brief Method OnStart, addr 0x5d1cad4, size 0x4, virtual true, abstract: false, final false
  inline void OnStart();

  /// @brief Method OnUnexpectedErrorWithSceneCapture, addr 0x5d1d244, size 0xd8, virtual true, abstract: false, final false
  inline void OnUnexpectedErrorWithSceneCapture();

  /// @brief Method RequestScenePermissionAsync, addr 0x5d1cc18, size 0x4, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRTask_1<bool> RequestScenePermissionAsync();

  /// @brief Method Start, addr 0x5d1c654, size 0x424, virtual true, abstract: false, final false
  inline void Start();

  /// @brief Method <RequestScenePermissionAsync>g__RequestPermissionOnAndroid|9_0, addr 0x5d1cc1c, size 0x198, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRTask_1<bool> _RequestScenePermissionAsync_g__RequestPermissionOnAndroid_9_0();

  constexpr ::UnityW<::GlobalNamespace::OVRSceneManager> const& __cordl_internal_get__SceneManager_k__BackingField() const;

  constexpr ::UnityW<::GlobalNamespace::OVRSceneManager>& __cordl_internal_get__SceneManager_k__BackingField();

  constexpr bool const& __cordl_internal_get__sceneCaptureRequested() const;

  constexpr bool& __cordl_internal_get__sceneCaptureRequested();

  constexpr void __cordl_internal_set__SceneManager_k__BackingField(::UnityW<::GlobalNamespace::OVRSceneManager> value);

  constexpr void __cordl_internal_set__sceneCaptureRequested(bool value);

  /// @brief Method .ctor, addr 0x5d1d31c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_SceneManager, addr 0x5d1c644, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::OVRSceneManager> get_SceneManager();

  /// @brief Method set_SceneManager, addr 0x5d1c64c, size 0x8, virtual false, abstract: false, final false
  inline void set_SceneManager(::GlobalNamespace::OVRSceneManager* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRSceneModelLoader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRSceneModelLoader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRSceneModelLoader(OVRSceneModelLoader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRSceneModelLoader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRSceneModelLoader(OVRSceneModelLoader const&) = delete;

  /// @brief Field RetryingReminderDelay offset 0xffffffff size 0x4
  static constexpr float_t RetryingReminderDelay{ static_cast<float_t>(10.0f) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7663 };

  /// @brief Field <SceneManager>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRSceneManager> ____SceneManager_k__BackingField;

  /// @brief Field _sceneCaptureRequested, offset: 0x28, size: 0x1, def value: None
  bool ____sceneCaptureRequested;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRSceneModelLoader, ____SceneManager_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneModelLoader, ____sceneCaptureRequested) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSceneModelLoader, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRSceneModelLoader);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSceneModelLoader*, "", "OVRSceneModelLoader");
NEED_NO_BOX(::GlobalNamespace::OVRSceneModelLoader__AttemptToLoadSceneModel_d__7);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSceneModelLoader__AttemptToLoadSceneModel_d__7*, "", "OVRSceneModelLoader/<AttemptToLoadSceneModel>d__7");
NEED_NO_BOX(::GlobalNamespace::OVRSceneModelLoader___c__DisplayClass9_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSceneModelLoader___c__DisplayClass9_0*, "", "OVRSceneModelLoader/<>c__DisplayClass9_0");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSceneModelLoader__OnLoadSceneModelFailedPermissionNotGranted_d__10, "", "OVRSceneModelLoader/<OnLoadSceneModelFailedPermissionNotGranted>d__10");

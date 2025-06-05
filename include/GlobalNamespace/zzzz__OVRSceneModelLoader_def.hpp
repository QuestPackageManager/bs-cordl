#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRSceneModelLoader.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRSceneModelLoader)
namespace GlobalNamespace {
class OVRSceneManager;
}
namespace GlobalNamespace {
class OVRSceneModelLoader__AttemptToLoadSceneModel_d__7;
}
namespace System::Collections {
class IEnumerator;
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
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRSceneModelLoader);
MARK_REF_PTR_T(::GlobalNamespace::OVRSceneModelLoader__AttemptToLoadSceneModel_d__7);
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
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

  /// @brief Method MoveNext, addr 0x400e8e4, size 0x98, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::OVRSceneModelLoader__AttemptToLoadSceneModel_d__7* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x400e97c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x400e984, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x400e9bc, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x400e8e0, size 0x4, virtual true, abstract: false, final true
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

  /// @brief Method .ctor, addr 0x400e460, size 0x28, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8286 };

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
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRSceneModelLoader
class CORDL_TYPE OVRSceneModelLoader : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _AttemptToLoadSceneModel_d__7 = ::GlobalNamespace::OVRSceneModelLoader__AttemptToLoadSceneModel_d__7;

  __declspec(property(get = get_SceneManager, put = set_SceneManager)) ::UnityW<::GlobalNamespace::OVRSceneManager> SceneManager;

  /// @brief Field <SceneManager>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__SceneManager_k__BackingField, put = __cordl_internal_set__SceneManager_k__BackingField)) ::UnityW<::GlobalNamespace::OVRSceneManager>
      _SceneManager_k__BackingField;

  /// @brief Field _sceneCaptureRequested, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get__sceneCaptureRequested, put = __cordl_internal_set__sceneCaptureRequested)) bool _sceneCaptureRequested;

  /// @brief Method AttemptToLoadSceneModel, addr 0x400e400, size 0x60, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* AttemptToLoadSceneModel();

  /// @brief Method LoadSceneModel, addr 0x400e48c, size 0xf4, virtual false, abstract: false, final false
  inline void LoadSceneModel();

  static inline ::GlobalNamespace::OVRSceneModelLoader* New_ctor();

  /// @brief Method OnNewSceneModelAvailable, addr 0x400e704, size 0x9c, virtual true, abstract: false, final false
  inline void OnNewSceneModelAvailable();

  /// @brief Method OnNoSceneModelToLoad, addr 0x400e61c, size 0xe8, virtual true, abstract: false, final false
  inline void OnNoSceneModelToLoad();

  /// @brief Method OnSceneCaptureReturnedWithoutError, addr 0x400e7a0, size 0x9c, virtual true, abstract: false, final false
  inline void OnSceneCaptureReturnedWithoutError();

  /// @brief Method OnSceneModelLoadedSuccessfully, addr 0x400e580, size 0x9c, virtual true, abstract: false, final false
  inline void OnSceneModelLoadedSuccessfully();

  /// @brief Method OnStart, addr 0x400e488, size 0x4, virtual true, abstract: false, final false
  inline void OnStart();

  /// @brief Method OnUnexpectedErrorWithSceneCapture, addr 0x400e83c, size 0x9c, virtual true, abstract: false, final false
  inline void OnUnexpectedErrorWithSceneCapture();

  /// @brief Method Start, addr 0x400e17c, size 0x284, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::UnityW<::GlobalNamespace::OVRSceneManager> const& __cordl_internal_get__SceneManager_k__BackingField() const;

  constexpr ::UnityW<::GlobalNamespace::OVRSceneManager>& __cordl_internal_get__SceneManager_k__BackingField();

  constexpr bool const& __cordl_internal_get__sceneCaptureRequested() const;

  constexpr bool& __cordl_internal_get__sceneCaptureRequested();

  constexpr void __cordl_internal_set__SceneManager_k__BackingField(::UnityW<::GlobalNamespace::OVRSceneManager> value);

  constexpr void __cordl_internal_set__sceneCaptureRequested(bool value);

  /// @brief Method .ctor, addr 0x400e8d8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_SceneManager, addr 0x400e16c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::OVRSceneManager> get_SceneManager();

  /// @brief Method set_SceneManager, addr 0x400e174, size 0x8, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8287 };

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

#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRSceneModelLoader)
namespace System::Collections {
class IEnumerator;
}
namespace GlobalNamespace {
class __OVRSceneModelLoader___AttemptToLoadSceneModel_d__7;
}
namespace GlobalNamespace {
class OVRSceneManager;
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
// Forward declare root types
namespace GlobalNamespace {
class OVRSceneModelLoader;
}
namespace GlobalNamespace {
class __OVRSceneModelLoader___AttemptToLoadSceneModel_d__7;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRSceneModelLoader);
MARK_REF_PTR_T(::GlobalNamespace::__OVRSceneModelLoader___AttemptToLoadSceneModel_d__7);
// Type: ::<AttemptToLoadSceneModel>d__7
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7970))
// CS Name: ::OVRSceneModelLoader::<AttemptToLoadSceneModel>d__7*
class CORDL_TYPE __OVRSceneModelLoader___AttemptToLoadSceneModel_d__7 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::OVRSceneModelLoader* __4__this;

  /// @brief Field <timeSinceReminder>5__2, offset 0x28, size 0x4
  __declspec(property(get = __get__timeSinceReminder_5__2, put = __set__timeSinceReminder_5__2)) float_t _timeSinceReminder_5__2;

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

  constexpr ::GlobalNamespace::OVRSceneModelLoader*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRSceneModelLoader*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::OVRSceneModelLoader* value);

  constexpr float_t& __get__timeSinceReminder_5__2();

  constexpr float_t const& __get__timeSinceReminder_5__2() const;

  constexpr void __set__timeSinceReminder_5__2(float_t value);

  static inline ::GlobalNamespace::__OVRSceneModelLoader___AttemptToLoadSceneModel_d__7* New_ctor(int32_t __1__state);

  /// @brief Method .ctor addr 0x2786944 size 0x28 virtual false final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose addr 0x2786dbc size 0x4 virtual true final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext addr 0x2786dc0 size 0x98 virtual true final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x2786e58 size 0x8 virtual true final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset addr 0x2786e60 size 0x40 virtual true final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current addr 0x2786ea0 size 0x8 virtual true final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__OVRSceneModelLoader___AttemptToLoadSceneModel_d__7", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRSceneModelLoader___AttemptToLoadSceneModel_d__7(__OVRSceneModelLoader___AttemptToLoadSceneModel_d__7&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRSceneModelLoader___AttemptToLoadSceneModel_d__7", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRSceneModelLoader___AttemptToLoadSceneModel_d__7(__OVRSceneModelLoader___AttemptToLoadSceneModel_d__7 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRSceneModelLoader___AttemptToLoadSceneModel_d__7();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::OVRSceneModelLoader* _____4__this;

  /// @brief Field <timeSinceReminder>5__2, offset: 0x28, size: 0x4, def value: None
  float_t ____timeSinceReminder_5__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRSceneModelLoader___AttemptToLoadSceneModel_d__7, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRSceneModelLoader
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 33, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7971))
// CS Name: ::OVRSceneModelLoader*
class CORDL_TYPE OVRSceneModelLoader : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _AttemptToLoadSceneModel_d__7 = ::GlobalNamespace::__OVRSceneModelLoader___AttemptToLoadSceneModel_d__7;

  /// @brief Field <SceneManager>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __get__SceneManager_k__BackingField, put = __set__SceneManager_k__BackingField))::GlobalNamespace::OVRSceneManager* _SceneManager_k__BackingField;

  /// @brief Field _sceneCaptureRequested, offset 0x20, size 0x1
  __declspec(property(get = __get__sceneCaptureRequested, put = __set__sceneCaptureRequested)) bool _sceneCaptureRequested;

  __declspec(property(get = get_SceneManager, put = set_SceneManager))::GlobalNamespace::OVRSceneManager* SceneManager;

  constexpr ::GlobalNamespace::OVRSceneManager*& __get__SceneManager_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRSceneManager*> const& __get__SceneManager_k__BackingField() const;

  constexpr void __set__SceneManager_k__BackingField(::GlobalNamespace::OVRSceneManager* value);

  constexpr bool& __get__sceneCaptureRequested();

  constexpr bool const& __get__sceneCaptureRequested() const;

  constexpr void __set__sceneCaptureRequested(bool value);

  /// @brief Method get_SceneManager addr 0x2786634 size 0x8 virtual false final false
  inline ::GlobalNamespace::OVRSceneManager* get_SceneManager();

  /// @brief Method set_SceneManager addr 0x278663c size 0x8 virtual false final false
  inline void set_SceneManager(::GlobalNamespace::OVRSceneManager* value);

  /// @brief Method Start addr 0x2786644 size 0x298 virtual false final false
  inline void Start();

  /// @brief Method AttemptToLoadSceneModel addr 0x27868dc size 0x68 virtual false final false
  inline ::System::Collections::IEnumerator* AttemptToLoadSceneModel();

  /// @brief Method OnStart addr 0x278696c size 0x4 virtual true final false
  inline void OnStart();

  /// @brief Method LoadSceneModel addr 0x2786970 size 0xf4 virtual false final false
  inline void LoadSceneModel();

  /// @brief Method OnSceneModelLoadedSuccessfully addr 0x2786a64 size 0x9c virtual true final false
  inline void OnSceneModelLoadedSuccessfully();

  /// @brief Method OnNoSceneModelToLoad addr 0x2786b00 size 0xe0 virtual true final false
  inline void OnNoSceneModelToLoad();

  /// @brief Method OnNewSceneModelAvailable addr 0x2786be0 size 0x9c virtual true final false
  inline void OnNewSceneModelAvailable();

  /// @brief Method OnSceneCaptureReturnedWithoutError addr 0x2786c7c size 0x9c virtual true final false
  inline void OnSceneCaptureReturnedWithoutError();

  /// @brief Method OnUnexpectedErrorWithSceneCapture addr 0x2786d18 size 0x9c virtual true final false
  inline void OnUnexpectedErrorWithSceneCapture();

  static inline ::GlobalNamespace::OVRSceneModelLoader* New_ctor();

  /// @brief Method .ctor addr 0x2786db4 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "OVRSceneModelLoader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRSceneModelLoader(OVRSceneModelLoader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRSceneModelLoader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRSceneModelLoader(OVRSceneModelLoader const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRSceneModelLoader();

public:
  /// @brief Field <SceneManager>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::OVRSceneManager* ____SceneManager_k__BackingField;

  /// @brief Field _sceneCaptureRequested, offset: 0x20, size: 0x1, def value: None
  bool ____sceneCaptureRequested;

  /// @brief Field RetryingReminderDelay offset 0xffffffff size 0x4
  static constexpr float_t RetryingReminderDelay{ 10.0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSceneModelLoader, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRSceneModelLoader);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSceneModelLoader*, "", "OVRSceneModelLoader");
NEED_NO_BOX(::GlobalNamespace::__OVRSceneModelLoader___AttemptToLoadSceneModel_d__7);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRSceneModelLoader___AttemptToLoadSceneModel_d__7*, "", "OVRSceneModelLoader/<AttemptToLoadSceneModel>d__7");

#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRSpectatorModeDomeTest.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRSpectatorModeDomeTest)
namespace GlobalNamespace {
class OVRSpectatorModeDomeTest__TimerCoroutine_d__20;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRSpectatorModeDomeTest;
}
namespace GlobalNamespace {
class OVRSpectatorModeDomeTest__TimerCoroutine_d__20;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRSpectatorModeDomeTest);
MARK_REF_PTR_T(::GlobalNamespace::OVRSpectatorModeDomeTest__TimerCoroutine_d__20);
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRSpectatorModeDomeTest/<TimerCoroutine>d__20
class CORDL_TYPE OVRSpectatorModeDomeTest__TimerCoroutine_d__20 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::OVRSpectatorModeDomeTest> __4__this;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x40468b4, size 0xb0, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::OVRSpectatorModeDomeTest__TimerCoroutine_d__20* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x4046964, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x404696c, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x40469a4, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x40468b0, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::UnityW<::GlobalNamespace::OVRSpectatorModeDomeTest> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::OVRSpectatorModeDomeTest>& __cordl_internal_get___4__this();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::OVRSpectatorModeDomeTest> value);

  /// @brief Method .ctor, addr 0x40466e4, size 0x28, virtual false, abstract: false, final false
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
  constexpr OVRSpectatorModeDomeTest__TimerCoroutine_d__20();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRSpectatorModeDomeTest__TimerCoroutine_d__20", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRSpectatorModeDomeTest__TimerCoroutine_d__20(OVRSpectatorModeDomeTest__TimerCoroutine_d__20&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRSpectatorModeDomeTest__TimerCoroutine_d__20", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRSpectatorModeDomeTest__TimerCoroutine_d__20(OVRSpectatorModeDomeTest__TimerCoroutine_d__20 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8491 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRSpectatorModeDomeTest> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRSpectatorModeDomeTest__TimerCoroutine_d__20, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSpectatorModeDomeTest__TimerCoroutine_d__20, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSpectatorModeDomeTest__TimerCoroutine_d__20, _____4__this) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSpectatorModeDomeTest__TimerCoroutine_d__20, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRPlugin::Fovf, OVRPlugin::Media::PlatformCameraMode, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRSpectatorModeDomeTest
class CORDL_TYPE OVRSpectatorModeDomeTest : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _TimerCoroutine_d__20 = ::GlobalNamespace::OVRSpectatorModeDomeTest__TimerCoroutine_d__20;

  /// @brief Field Head, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_Head, put = __cordl_internal_set_Head)) ::UnityW<::UnityEngine::Transform> Head;

  /// @brief Field SpectatorAnchor, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_SpectatorAnchor, put = __cordl_internal_set_SpectatorAnchor)) ::UnityW<::UnityEngine::Transform> SpectatorAnchor;

  /// @brief Field SpectatorCamera, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_SpectatorCamera, put = __cordl_internal_set_SpectatorCamera)) ::UnityW<::UnityEngine::Transform> SpectatorCamera;

  /// @brief Field camMode, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_camMode, put = __cordl_internal_set_camMode)) ::GlobalNamespace::Media_OVRPlugin_PlatformCameraMode camMode;

  /// @brief Field defaultExternalCamera, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_defaultExternalCamera, put = __cordl_internal_set_defaultExternalCamera)) ::UnityW<::UnityEngine::Camera> defaultExternalCamera;

  /// @brief Field defaultFov, offset 0x30, size 0x10
  __declspec(property(get = __cordl_internal_get_defaultFov, put = __cordl_internal_set_defaultFov)) ::GlobalNamespace::OVRPlugin_Fovf defaultFov;

  /// @brief Field distance, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_distance, put = __cordl_internal_set_distance)) float_t distance;

  /// @brief Field elevation, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get_elevation, put = __cordl_internal_set_elevation)) float_t elevation;

  /// @brief Field inited, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_inited, put = __cordl_internal_set_inited)) bool inited;

  /// @brief Field polar, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get_polar, put = __cordl_internal_set_polar)) float_t polar;

  /// @brief Field readyToSwitch, offset 0x54, size 0x1
  __declspec(property(get = __cordl_internal_get_readyToSwitch, put = __cordl_internal_set_readyToSwitch)) bool readyToSwitch;

  /// @brief Method Awake, addr 0x4045b64, size 0x3c, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method Initialize, addr 0x4045c50, size 0x228, virtual false, abstract: false, final false
  inline void Initialize();

  static inline ::GlobalNamespace::OVRSpectatorModeDomeTest* New_ctor();

  /// @brief Method OnApplicationPause, addr 0x404684c, size 0x20, virtual false, abstract: false, final false
  inline void OnApplicationPause();

  /// @brief Method OnApplicationQuit, addr 0x404686c, size 0x20, virtual false, abstract: false, final false
  inline void OnApplicationQuit();

  /// @brief Method SpectatorCameraDomePosition, addr 0x4046650, size 0x94, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 SpectatorCameraDomePosition(::UnityEngine::Vector3 spectatorAnchorPosition, float_t d, float_t e, float_t p);

  /// @brief Method Start, addr 0x4045ba0, size 0xb0, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method TimerCoroutine, addr 0x40465f0, size 0x60, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* TimerCoroutine();

  /// @brief Method Update, addr 0x404670c, size 0x140, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method UpdateDefaultExternalCamera, addr 0x4045e78, size 0x410, virtual false, abstract: false, final false
  inline void UpdateDefaultExternalCamera();

  /// @brief Method UpdateSpectatorCameraStatus, addr 0x4046288, size 0x368, virtual false, abstract: false, final false
  inline void UpdateSpectatorCameraStatus();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_Head() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_Head();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_SpectatorAnchor() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_SpectatorAnchor();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_SpectatorCamera() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_SpectatorCamera();

  constexpr ::GlobalNamespace::Media_OVRPlugin_PlatformCameraMode const& __cordl_internal_get_camMode() const;

  constexpr ::GlobalNamespace::Media_OVRPlugin_PlatformCameraMode& __cordl_internal_get_camMode();

  constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get_defaultExternalCamera() const;

  constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get_defaultExternalCamera();

  constexpr ::GlobalNamespace::OVRPlugin_Fovf const& __cordl_internal_get_defaultFov() const;

  constexpr ::GlobalNamespace::OVRPlugin_Fovf& __cordl_internal_get_defaultFov();

  constexpr float_t const& __cordl_internal_get_distance() const;

  constexpr float_t& __cordl_internal_get_distance();

  constexpr float_t const& __cordl_internal_get_elevation() const;

  constexpr float_t& __cordl_internal_get_elevation();

  constexpr bool const& __cordl_internal_get_inited() const;

  constexpr bool& __cordl_internal_get_inited();

  constexpr float_t const& __cordl_internal_get_polar() const;

  constexpr float_t& __cordl_internal_get_polar();

  constexpr bool const& __cordl_internal_get_readyToSwitch() const;

  constexpr bool& __cordl_internal_get_readyToSwitch();

  constexpr void __cordl_internal_set_Head(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_SpectatorAnchor(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_SpectatorCamera(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_camMode(::GlobalNamespace::Media_OVRPlugin_PlatformCameraMode value);

  constexpr void __cordl_internal_set_defaultExternalCamera(::UnityW<::UnityEngine::Camera> value);

  constexpr void __cordl_internal_set_defaultFov(::GlobalNamespace::OVRPlugin_Fovf value);

  constexpr void __cordl_internal_set_distance(float_t value);

  constexpr void __cordl_internal_set_elevation(float_t value);

  constexpr void __cordl_internal_set_inited(bool value);

  constexpr void __cordl_internal_set_polar(float_t value);

  constexpr void __cordl_internal_set_readyToSwitch(bool value);

  /// @brief Method .ctor, addr 0x404688c, size 0x24, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRSpectatorModeDomeTest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRSpectatorModeDomeTest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRSpectatorModeDomeTest(OVRSpectatorModeDomeTest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRSpectatorModeDomeTest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRSpectatorModeDomeTest(OVRSpectatorModeDomeTest const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8492 };

  /// @brief Field distance_far offset 0xffffffff size 0x4
  static constexpr float_t distance_far{ static_cast<float_t>(1.2f) };

  /// @brief Field distance_near offset 0xffffffff size 0x4
  static constexpr float_t distance_near{ static_cast<float_t>(0.5f) };

  /// @brief Field elevationLimit offset 0xffffffff size 0x4
  static constexpr float_t elevationLimit{ static_cast<float_t>(30.0f) };

  /// @brief Field inited, offset: 0x20, size: 0x1, def value: None
  bool ___inited;

  /// @brief Field defaultExternalCamera, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Camera> ___defaultExternalCamera;

  /// @brief Field defaultFov, offset: 0x30, size: 0x10, def value: None
  ::GlobalNamespace::OVRPlugin_Fovf ___defaultFov;

  /// @brief Field SpectatorAnchor, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___SpectatorAnchor;

  /// @brief Field Head, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___Head;

  /// @brief Field camMode, offset: 0x50, size: 0x4, def value: None
  ::GlobalNamespace::Media_OVRPlugin_PlatformCameraMode ___camMode;

  /// @brief Field readyToSwitch, offset: 0x54, size: 0x1, def value: None
  bool ___readyToSwitch;

  /// @brief Field SpectatorCamera, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___SpectatorCamera;

  /// @brief Field distance, offset: 0x60, size: 0x4, def value: None
  float_t ___distance;

  /// @brief Field elevation, offset: 0x64, size: 0x4, def value: None
  float_t ___elevation;

  /// @brief Field polar, offset: 0x68, size: 0x4, def value: None
  float_t ___polar;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRSpectatorModeDomeTest, ___inited) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSpectatorModeDomeTest, ___defaultExternalCamera) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSpectatorModeDomeTest, ___defaultFov) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSpectatorModeDomeTest, ___SpectatorAnchor) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSpectatorModeDomeTest, ___Head) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSpectatorModeDomeTest, ___camMode) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSpectatorModeDomeTest, ___readyToSwitch) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSpectatorModeDomeTest, ___SpectatorCamera) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSpectatorModeDomeTest, ___distance) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSpectatorModeDomeTest, ___elevation) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSpectatorModeDomeTest, ___polar) == 0x68, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSpectatorModeDomeTest, 0x70>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRSpectatorModeDomeTest);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSpectatorModeDomeTest*, "", "OVRSpectatorModeDomeTest");
NEED_NO_BOX(::GlobalNamespace::OVRSpectatorModeDomeTest__TimerCoroutine_d__20);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSpectatorModeDomeTest__TimerCoroutine_d__20*, "", "OVRSpectatorModeDomeTest/<TimerCoroutine>d__20");

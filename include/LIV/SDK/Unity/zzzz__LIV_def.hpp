#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "LIV/SDK/Unity/zzzz__INVALIDATION_FLAGS_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LIV)
namespace LIV::SDK::Unity {
class SDKRender;
}
namespace LIV::SDK::Unity {
class __LIV___WaitForUnityEndOfFrame_d__68;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template <typename T> class Action_1;
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
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class Coroutine;
}
namespace UnityEngine {
struct LayerMask;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace LIV::SDK::Unity {
class LIV;
}
namespace LIV::SDK::Unity {
class __LIV___WaitForUnityEndOfFrame_d__68;
}
// Write type traits
MARK_REF_PTR_T(::LIV::SDK::Unity::LIV);
MARK_REF_PTR_T(::LIV::SDK::Unity::__LIV___WaitForUnityEndOfFrame_d__68);
// Type: ::<WaitForUnityEndOfFrame>d__68
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace LIV::SDK::Unity {
// Is value type: false
// CS Name: ::LIV::<WaitForUnityEndOfFrame>d__68*
class CORDL_TYPE __LIV___WaitForUnityEndOfFrame_d__68 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::LIV::SDK::Unity::LIV> __4__this;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x25f3834, size 0xd0, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::LIV::SDK::Unity::__LIV___WaitForUnityEndOfFrame_d__68* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x25f39c8, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x25f39d0, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x25f3a10, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x25f3830, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::LIV::SDK::Unity::LIV> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::LIV::SDK::Unity::LIV>& __cordl_internal_get___4__this();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::LIV::SDK::Unity::LIV> value);

  /// @brief Method .ctor, addr 0x25f2e50, size 0x28, virtual false, abstract: false, final false
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
  constexpr __LIV___WaitForUnityEndOfFrame_d__68();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__LIV___WaitForUnityEndOfFrame_d__68", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LIV___WaitForUnityEndOfFrame_d__68(__LIV___WaitForUnityEndOfFrame_d__68&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LIV___WaitForUnityEndOfFrame_d__68", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LIV___WaitForUnityEndOfFrame_d__68(__LIV___WaitForUnityEndOfFrame_d__68 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::LIV::SDK::Unity::LIV> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LIV::SDK::Unity::__LIV___WaitForUnityEndOfFrame_d__68, 0x28>, "Size mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::__LIV___WaitForUnityEndOfFrame_d__68, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::__LIV___WaitForUnityEndOfFrame_d__68, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::__LIV___WaitForUnityEndOfFrame_d__68, _____4__this) == 0x20, "Offset mismatch!");

} // namespace LIV::SDK::Unity
// Type: LIV.SDK.Unity::LIV
// SizeInfo { instance_size: 208, native_size: -1, calculated_instance_size: 208, calculated_native_size: 208, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace LIV::SDK::Unity {
// Is value type: false
// CS Name: ::LIV.SDK.Unity::LIV*
class CORDL_TYPE LIV : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _WaitForUnityEndOfFrame_d__68 = ::LIV::SDK::Unity::__LIV___WaitForUnityEndOfFrame_d__68;

  __declspec(property(get = get_HMDCamera, put = set_HMDCamera))::UnityW<::UnityEngine::Camera> HMDCamera;

  __declspec(property(get = get_MRCameraPrefab, put = set_MRCameraPrefab))::UnityW<::UnityEngine::Camera> MRCameraPrefab;

  /// @brief Field _HMDCamera, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__HMDCamera, put = __cordl_internal_set__HMDCamera))::UnityW<::UnityEngine::Camera> _HMDCamera;

  /// @brief Field _HMDCameraCandidate, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__HMDCameraCandidate, put = __cordl_internal_set__HMDCameraCandidate))::UnityW<::UnityEngine::Camera> _HMDCameraCandidate;

  /// @brief Field _MRCameraPrefab, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__MRCameraPrefab, put = __cordl_internal_set__MRCameraPrefab))::UnityW<::UnityEngine::Camera> _MRCameraPrefab;

  /// @brief Field _MRCameraPrefabCandidate, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__MRCameraPrefabCandidate, put = __cordl_internal_set__MRCameraPrefabCandidate))::UnityW<::UnityEngine::Camera> _MRCameraPrefabCandidate;

  /// @brief Field _disableStandardAssets, offset 0x78, size 0x1
  __declspec(property(get = __cordl_internal_get__disableStandardAssets, put = __cordl_internal_set__disableStandardAssets)) bool _disableStandardAssets;

  /// @brief Field _enabled, offset 0xc0, size 0x1
  __declspec(property(get = __cordl_internal_get__enabled, put = __cordl_internal_set__enabled)) bool _enabled;

  /// @brief Field _excludeBehaviours, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__excludeBehaviours, put = __cordl_internal_set__excludeBehaviours))::ArrayW<::StringW, ::Array<::StringW>*> _excludeBehaviours;

  /// @brief Field _excludeBehavioursCandidate, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__excludeBehavioursCandidate,
                      put = __cordl_internal_set__excludeBehavioursCandidate))::ArrayW<::StringW, ::Array<::StringW>*> _excludeBehavioursCandidate;

  /// @brief Field _fixPostEffectsAlpha, offset 0x88, size 0x1
  __declspec(property(get = __cordl_internal_get__fixPostEffectsAlpha, put = __cordl_internal_set__fixPostEffectsAlpha)) bool _fixPostEffectsAlpha;

  /// @brief Field _invalidate, offset 0x9c, size 0x4
  __declspec(property(get = __cordl_internal_get__invalidate, put = __cordl_internal_set__invalidate))::LIV::SDK::Unity::INVALIDATION_FLAGS _invalidate;

  /// @brief Field _isActive, offset 0x89, size 0x1
  __declspec(property(get = __cordl_internal_get__isActive, put = __cordl_internal_set__isActive)) bool _isActive;

  __declspec(property(get = get__isReady)) bool _isReady;

  /// @brief Field _render, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__render, put = __cordl_internal_set__render))::LIV::SDK::Unity::SDKRender* _render;

  /// @brief Field _spectatorLayerMask, offset 0x7c, size 0x4
  __declspec(property(get = __cordl_internal_get__spectatorLayerMask, put = __cordl_internal_set__spectatorLayerMask))::UnityEngine::LayerMask _spectatorLayerMask;

  /// @brief Field _stage, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__stage, put = __cordl_internal_set__stage))::UnityW<::UnityEngine::Transform> _stage;

  /// @brief Field _stageCandidate, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__stageCandidate, put = __cordl_internal_set__stageCandidate))::UnityW<::UnityEngine::Transform> _stageCandidate;

  /// @brief Field _stageTransform, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__stageTransform, put = __cordl_internal_set__stageTransform))::UnityW<::UnityEngine::Transform> _stageTransform;

  /// @brief Field _waitForEndOfFrameCoroutine, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get__waitForEndOfFrameCoroutine, put = __cordl_internal_set__waitForEndOfFrameCoroutine))::UnityEngine::Coroutine* _waitForEndOfFrameCoroutine;

  /// @brief Field _wasReady, offset 0x98, size 0x1
  __declspec(property(get = __cordl_internal_get__wasReady, put = __cordl_internal_set__wasReady)) bool _wasReady;

  __declspec(property(get = get_disableStandardAssets, put = set_disableStandardAssets)) bool disableStandardAssets;

  __declspec(property(get = get_excludeBehaviours, put = set_excludeBehaviours))::ArrayW<::StringW, ::Array<::StringW>*> excludeBehaviours;

  __declspec(property(get = get_fixPostEffectsAlpha, put = set_fixPostEffectsAlpha)) bool fixPostEffectsAlpha;

  __declspec(property(get = get_isActive)) bool isActive;

  __declspec(property(get = get_isValid)) bool isValid;

  /// @brief Field onActivate, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_onActivate, put = __cordl_internal_set_onActivate))::System::Action* onActivate;

  /// @brief Field onDeactivate, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_onDeactivate, put = __cordl_internal_set_onDeactivate))::System::Action* onDeactivate;

  /// @brief Field onPostRender, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_onPostRender, put = __cordl_internal_set_onPostRender))::System::Action_1<::LIV::SDK::Unity::SDKRender*>* onPostRender;

  /// @brief Field onPostRenderBackground, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_onPostRenderBackground, put = __cordl_internal_set_onPostRenderBackground))::System::Action_1<::LIV::SDK::Unity::SDKRender*>* onPostRenderBackground;

  /// @brief Field onPostRenderForeground, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_onPostRenderForeground, put = __cordl_internal_set_onPostRenderForeground))::System::Action_1<::LIV::SDK::Unity::SDKRender*>* onPostRenderForeground;

  /// @brief Field onPreRender, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_onPreRender, put = __cordl_internal_set_onPreRender))::System::Action_1<::LIV::SDK::Unity::SDKRender*>* onPreRender;

  /// @brief Field onPreRenderBackground, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_onPreRenderBackground, put = __cordl_internal_set_onPreRenderBackground))::System::Action_1<::LIV::SDK::Unity::SDKRender*>* onPreRenderBackground;

  /// @brief Field onPreRenderForeground, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_onPreRenderForeground, put = __cordl_internal_set_onPreRenderForeground))::System::Action_1<::LIV::SDK::Unity::SDKRender*>* onPreRenderForeground;

  __declspec(property(get = get_render))::LIV::SDK::Unity::SDKRender* render;

  __declspec(property(get = get_spectatorLayerMask, put = set_spectatorLayerMask))::UnityEngine::LayerMask spectatorLayerMask;

  __declspec(property(get = get_stage, put = set_stage))::UnityW<::UnityEngine::Transform> stage;

  __declspec(property(get = get_stageLocalToWorldMatrix))::UnityEngine::Matrix4x4 stageLocalToWorldMatrix;

  __declspec(property(get = get_stageTransform, put = set_stageTransform))::UnityW<::UnityEngine::Transform> stageTransform;

  __declspec(property(get = get_stageWorldToLocalMatrix))::UnityEngine::Matrix4x4 stageWorldToLocalMatrix;

  __declspec(property(get = get_trackedSpaceOrigin, put = set_trackedSpaceOrigin))::UnityW<::UnityEngine::Transform> trackedSpaceOrigin;

  /// @brief Method Activate, addr 0x25f2e78, size 0x18, virtual false, abstract: false, final false
  inline void Activate();

  /// @brief Method CreateAssets, addr 0x25f3148, size 0x70, virtual false, abstract: false, final false
  inline void CreateAssets();

  /// @brief Method DestroyAssets, addr 0x25f3220, size 0x20, virtual false, abstract: false, final false
  inline void DestroyAssets();

  /// @brief Method Invalidate, addr 0x25f2d68, size 0x78, virtual false, abstract: false, final false
  inline void Invalidate();

  static inline ::LIV::SDK::Unity::LIV* New_ctor();

  /// @brief Method OnDisable, addr 0x25f2de0, size 0x8, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x25f2d00, size 0xc, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnSDKActivate, addr 0x25f2e9c, size 0xac, virtual false, abstract: false, final false
  inline void OnSDKActivate();

  /// @brief Method OnSDKDeactivate, addr 0x25f2f48, size 0xb4, virtual false, abstract: false, final false
  inline void OnSDKDeactivate();

  /// @brief Method OnSDKReadyChanged, addr 0x25f2e90, size 0xc, virtual false, abstract: false, final false
  inline void OnSDKReadyChanged(bool value);

  /// @brief Method StartRenderCoroutine, addr 0x25f31b8, size 0x44, virtual false, abstract: false, final false
  inline void StartRenderCoroutine();

  /// @brief Method StopRenderCoroutine, addr 0x25f31fc, size 0x24, virtual false, abstract: false, final false
  inline void StopRenderCoroutine();

  /// @brief Method SubmitSDKOutput, addr 0x25f2ffc, size 0x14c, virtual false, abstract: false, final false
  inline void SubmitSDKOutput();

  /// @brief Method Update, addr 0x25f2d50, size 0x18, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method UpdateSDKReady, addr 0x25f2d0c, size 0x44, virtual false, abstract: false, final false
  inline void UpdateSDKReady();

  /// @brief Method WaitForUnityEndOfFrame, addr 0x25f2de8, size 0x68, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* WaitForUnityEndOfFrame();

  constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get__HMDCamera() const;

  constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get__HMDCamera();

  constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get__HMDCameraCandidate() const;

  constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get__HMDCameraCandidate();

  constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get__MRCameraPrefab() const;

  constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get__MRCameraPrefab();

  constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get__MRCameraPrefabCandidate() const;

  constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get__MRCameraPrefabCandidate();

  constexpr bool const& __cordl_internal_get__disableStandardAssets() const;

  constexpr bool& __cordl_internal_get__disableStandardAssets();

  constexpr bool const& __cordl_internal_get__enabled() const;

  constexpr bool& __cordl_internal_get__enabled();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get__excludeBehaviours() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get__excludeBehaviours();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get__excludeBehavioursCandidate() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get__excludeBehavioursCandidate();

  constexpr bool const& __cordl_internal_get__fixPostEffectsAlpha() const;

  constexpr bool& __cordl_internal_get__fixPostEffectsAlpha();

  constexpr ::LIV::SDK::Unity::INVALIDATION_FLAGS const& __cordl_internal_get__invalidate() const;

  constexpr ::LIV::SDK::Unity::INVALIDATION_FLAGS& __cordl_internal_get__invalidate();

  constexpr bool const& __cordl_internal_get__isActive() const;

  constexpr bool& __cordl_internal_get__isActive();

  constexpr ::LIV::SDK::Unity::SDKRender*& __cordl_internal_get__render();

  constexpr ::cordl_internals::to_const_pointer<::LIV::SDK::Unity::SDKRender*> const& __cordl_internal_get__render() const;

  constexpr ::UnityEngine::LayerMask const& __cordl_internal_get__spectatorLayerMask() const;

  constexpr ::UnityEngine::LayerMask& __cordl_internal_get__spectatorLayerMask();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__stage() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__stage();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__stageCandidate() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__stageCandidate();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__stageTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__stageTransform();

  constexpr ::UnityEngine::Coroutine*& __cordl_internal_get__waitForEndOfFrameCoroutine();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Coroutine*> const& __cordl_internal_get__waitForEndOfFrameCoroutine() const;

  constexpr bool const& __cordl_internal_get__wasReady() const;

  constexpr bool& __cordl_internal_get__wasReady();

  constexpr ::System::Action*& __cordl_internal_get_onActivate();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_onActivate() const;

  constexpr ::System::Action*& __cordl_internal_get_onDeactivate();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_onDeactivate() const;

  constexpr ::System::Action_1<::LIV::SDK::Unity::SDKRender*>*& __cordl_internal_get_onPostRender();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::LIV::SDK::Unity::SDKRender*>*> const& __cordl_internal_get_onPostRender() const;

  constexpr ::System::Action_1<::LIV::SDK::Unity::SDKRender*>*& __cordl_internal_get_onPostRenderBackground();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::LIV::SDK::Unity::SDKRender*>*> const& __cordl_internal_get_onPostRenderBackground() const;

  constexpr ::System::Action_1<::LIV::SDK::Unity::SDKRender*>*& __cordl_internal_get_onPostRenderForeground();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::LIV::SDK::Unity::SDKRender*>*> const& __cordl_internal_get_onPostRenderForeground() const;

  constexpr ::System::Action_1<::LIV::SDK::Unity::SDKRender*>*& __cordl_internal_get_onPreRender();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::LIV::SDK::Unity::SDKRender*>*> const& __cordl_internal_get_onPreRender() const;

  constexpr ::System::Action_1<::LIV::SDK::Unity::SDKRender*>*& __cordl_internal_get_onPreRenderBackground();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::LIV::SDK::Unity::SDKRender*>*> const& __cordl_internal_get_onPreRenderBackground() const;

  constexpr ::System::Action_1<::LIV::SDK::Unity::SDKRender*>*& __cordl_internal_get_onPreRenderForeground();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::LIV::SDK::Unity::SDKRender*>*> const& __cordl_internal_get_onPreRenderForeground() const;

  constexpr void __cordl_internal_set__HMDCamera(::UnityW<::UnityEngine::Camera> value);

  constexpr void __cordl_internal_set__HMDCameraCandidate(::UnityW<::UnityEngine::Camera> value);

  constexpr void __cordl_internal_set__MRCameraPrefab(::UnityW<::UnityEngine::Camera> value);

  constexpr void __cordl_internal_set__MRCameraPrefabCandidate(::UnityW<::UnityEngine::Camera> value);

  constexpr void __cordl_internal_set__disableStandardAssets(bool value);

  constexpr void __cordl_internal_set__enabled(bool value);

  constexpr void __cordl_internal_set__excludeBehaviours(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set__excludeBehavioursCandidate(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set__fixPostEffectsAlpha(bool value);

  constexpr void __cordl_internal_set__invalidate(::LIV::SDK::Unity::INVALIDATION_FLAGS value);

  constexpr void __cordl_internal_set__isActive(bool value);

  constexpr void __cordl_internal_set__render(::LIV::SDK::Unity::SDKRender* value);

  constexpr void __cordl_internal_set__spectatorLayerMask(::UnityEngine::LayerMask value);

  constexpr void __cordl_internal_set__stage(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__stageCandidate(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__stageTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__waitForEndOfFrameCoroutine(::UnityEngine::Coroutine* value);

  constexpr void __cordl_internal_set__wasReady(bool value);

  constexpr void __cordl_internal_set_onActivate(::System::Action* value);

  constexpr void __cordl_internal_set_onDeactivate(::System::Action* value);

  constexpr void __cordl_internal_set_onPostRender(::System::Action_1<::LIV::SDK::Unity::SDKRender*>* value);

  constexpr void __cordl_internal_set_onPostRenderBackground(::System::Action_1<::LIV::SDK::Unity::SDKRender*>* value);

  constexpr void __cordl_internal_set_onPostRenderForeground(::System::Action_1<::LIV::SDK::Unity::SDKRender*>* value);

  constexpr void __cordl_internal_set_onPreRender(::System::Action_1<::LIV::SDK::Unity::SDKRender*>* value);

  constexpr void __cordl_internal_set_onPreRenderBackground(::System::Action_1<::LIV::SDK::Unity::SDKRender*>* value);

  constexpr void __cordl_internal_set_onPreRenderForeground(::System::Action_1<::LIV::SDK::Unity::SDKRender*>* value);

  /// @brief Method .ctor, addr 0x25f3670, size 0x1c0, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_HMDCamera, addr 0x25f2910, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Camera> get_HMDCamera();

  /// @brief Method get_MRCameraPrefab, addr 0x25f2a04, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Camera> get_MRCameraPrefab();

  /// @brief Method get__isReady, addr 0x25f2bec, size 0x74, virtual false, abstract: false, final false
  inline bool get__isReady();

  /// @brief Method get_disableStandardAssets, addr 0x25f2a90, size 0x8, virtual false, abstract: false, final false
  inline bool get_disableStandardAssets();

  /// @brief Method get_excludeBehaviours, addr 0x25f2ab4, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> get_excludeBehaviours();

  /// @brief Method get_fixPostEffectsAlpha, addr 0x25f2adc, size 0x8, virtual false, abstract: false, final false
  inline bool get_fixPostEffectsAlpha();

  /// @brief Method get_isActive, addr 0x25f2be4, size 0x8, virtual false, abstract: false, final false
  inline bool get_isActive();

  /// @brief Method get_isValid, addr 0x25f2af0, size 0xf4, virtual false, abstract: false, final false
  inline bool get_isValid();

  /// @brief Method get_render, addr 0x25f2cf8, size 0x8, virtual false, abstract: false, final false
  inline ::LIV::SDK::Unity::SDKRender* get_render();

  /// @brief Method get_spectatorLayerMask, addr 0x25f2aa4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::LayerMask get_spectatorLayerMask();

  /// @brief Method get_stage, addr 0x25f25d4, size 0x90, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> get_stage();

  /// @brief Method get_stageLocalToWorldMatrix, addr 0x25f2710, size 0xf8, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 get_stageLocalToWorldMatrix();

  /// @brief Method get_stageTransform, addr 0x25f2900, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> get_stageTransform();

  /// @brief Method get_stageWorldToLocalMatrix, addr 0x25f2808, size 0xf8, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 get_stageWorldToLocalMatrix();

  /// @brief Method get_trackedSpaceOrigin, addr 0x25f2708, size 0x4, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> get_trackedSpaceOrigin();

  /// @brief Method set_HMDCamera, addr 0x25f2918, size 0xec, virtual false, abstract: false, final false
  inline void set_HMDCamera(::UnityEngine::Camera* value);

  /// @brief Method set_MRCameraPrefab, addr 0x25f2a0c, size 0x84, virtual false, abstract: false, final false
  inline void set_MRCameraPrefab(::UnityEngine::Camera* value);

  /// @brief Method set_disableStandardAssets, addr 0x25f2a98, size 0xc, virtual false, abstract: false, final false
  inline void set_disableStandardAssets(bool value);

  /// @brief Method set_excludeBehaviours, addr 0x25f2abc, size 0x20, virtual false, abstract: false, final false
  inline void set_excludeBehaviours(::ArrayW<::StringW, ::Array<::StringW>*> value);

  /// @brief Method set_fixPostEffectsAlpha, addr 0x25f2ae4, size 0xc, virtual false, abstract: false, final false
  inline void set_fixPostEffectsAlpha(bool value);

  /// @brief Method set_spectatorLayerMask, addr 0x25f2aac, size 0x8, virtual false, abstract: false, final false
  inline void set_spectatorLayerMask(::UnityEngine::LayerMask value);

  /// @brief Method set_stage, addr 0x25f2664, size 0x90, virtual false, abstract: false, final false
  inline void set_stage(::UnityEngine::Transform* value);

  /// @brief Method set_stageTransform, addr 0x25f2908, size 0x8, virtual false, abstract: false, final false
  inline void set_stageTransform(::UnityEngine::Transform* value);

  /// @brief Method set_trackedSpaceOrigin, addr 0x25f270c, size 0x4, virtual false, abstract: false, final false
  inline void set_trackedSpaceOrigin(::UnityEngine::Transform* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LIV();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LIV", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LIV(LIV&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LIV", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LIV(LIV const&) = delete;

  /// @brief Field onActivate, offset: 0x18, size: 0x8, def value: None
  ::System::Action* ___onActivate;

  /// @brief Field onPreRender, offset: 0x20, size: 0x8, def value: None
  ::System::Action_1<::LIV::SDK::Unity::SDKRender*>* ___onPreRender;

  /// @brief Field onPreRenderBackground, offset: 0x28, size: 0x8, def value: None
  ::System::Action_1<::LIV::SDK::Unity::SDKRender*>* ___onPreRenderBackground;

  /// @brief Field onPostRenderBackground, offset: 0x30, size: 0x8, def value: None
  ::System::Action_1<::LIV::SDK::Unity::SDKRender*>* ___onPostRenderBackground;

  /// @brief Field onPreRenderForeground, offset: 0x38, size: 0x8, def value: None
  ::System::Action_1<::LIV::SDK::Unity::SDKRender*>* ___onPreRenderForeground;

  /// @brief Field onPostRenderForeground, offset: 0x40, size: 0x8, def value: None
  ::System::Action_1<::LIV::SDK::Unity::SDKRender*>* ___onPostRenderForeground;

  /// @brief Field onPostRender, offset: 0x48, size: 0x8, def value: None
  ::System::Action_1<::LIV::SDK::Unity::SDKRender*>* ___onPostRender;

  /// @brief Field onDeactivate, offset: 0x50, size: 0x8, def value: None
  ::System::Action* ___onDeactivate;

  /// @brief Field _stage, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____stage;

  /// @brief Field _stageTransform, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____stageTransform;

  /// @brief Field _HMDCamera, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Camera> ____HMDCamera;

  /// @brief Field _MRCameraPrefab, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Camera> ____MRCameraPrefab;

  /// @brief Field _disableStandardAssets, offset: 0x78, size: 0x1, def value: None
  bool ____disableStandardAssets;

  /// @brief Field _spectatorLayerMask, offset: 0x7c, size: 0x4, def value: None
  ::UnityEngine::LayerMask ____spectatorLayerMask;

  /// @brief Field _excludeBehaviours, offset: 0x80, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ____excludeBehaviours;

  /// @brief Field _fixPostEffectsAlpha, offset: 0x88, size: 0x1, def value: None
  bool ____fixPostEffectsAlpha;

  /// @brief Field _isActive, offset: 0x89, size: 0x1, def value: None
  bool ____isActive;

  /// @brief Field _render, offset: 0x90, size: 0x8, def value: None
  ::LIV::SDK::Unity::SDKRender* ____render;

  /// @brief Field _wasReady, offset: 0x98, size: 0x1, def value: None
  bool ____wasReady;

  /// @brief Field _invalidate, offset: 0x9c, size: 0x4, def value: None
  ::LIV::SDK::Unity::INVALIDATION_FLAGS ____invalidate;

  /// @brief Field _stageCandidate, offset: 0xa0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____stageCandidate;

  /// @brief Field _HMDCameraCandidate, offset: 0xa8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Camera> ____HMDCameraCandidate;

  /// @brief Field _MRCameraPrefabCandidate, offset: 0xb0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Camera> ____MRCameraPrefabCandidate;

  /// @brief Field _excludeBehavioursCandidate, offset: 0xb8, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ____excludeBehavioursCandidate;

  /// @brief Field _enabled, offset: 0xc0, size: 0x1, def value: None
  bool ____enabled;

  /// @brief Field _waitForEndOfFrameCoroutine, offset: 0xc8, size: 0x8, def value: None
  ::UnityEngine::Coroutine* ____waitForEndOfFrameCoroutine;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LIV::SDK::Unity::LIV, 0xd0>, "Size mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::LIV, ___onActivate) == 0x18, "Offset mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::LIV, ___onPreRender) == 0x20, "Offset mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::LIV, ___onPreRenderBackground) == 0x28, "Offset mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::LIV, ___onPostRenderBackground) == 0x30, "Offset mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::LIV, ___onPreRenderForeground) == 0x38, "Offset mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::LIV, ___onPostRenderForeground) == 0x40, "Offset mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::LIV, ___onPostRender) == 0x48, "Offset mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::LIV, ___onDeactivate) == 0x50, "Offset mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::LIV, ____stage) == 0x58, "Offset mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::LIV, ____stageTransform) == 0x60, "Offset mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::LIV, ____HMDCamera) == 0x68, "Offset mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::LIV, ____MRCameraPrefab) == 0x70, "Offset mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::LIV, ____disableStandardAssets) == 0x78, "Offset mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::LIV, ____spectatorLayerMask) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::LIV, ____excludeBehaviours) == 0x80, "Offset mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::LIV, ____fixPostEffectsAlpha) == 0x88, "Offset mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::LIV, ____isActive) == 0x89, "Offset mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::LIV, ____render) == 0x90, "Offset mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::LIV, ____wasReady) == 0x98, "Offset mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::LIV, ____invalidate) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::LIV, ____stageCandidate) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::LIV, ____HMDCameraCandidate) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::LIV, ____MRCameraPrefabCandidate) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::LIV, ____excludeBehavioursCandidate) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::LIV, ____enabled) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::LIV, ____waitForEndOfFrameCoroutine) == 0xc8, "Offset mismatch!");

} // namespace LIV::SDK::Unity
NEED_NO_BOX(::LIV::SDK::Unity::LIV);
DEFINE_IL2CPP_ARG_TYPE(::LIV::SDK::Unity::LIV*, "LIV.SDK.Unity", "LIV");
NEED_NO_BOX(::LIV::SDK::Unity::__LIV___WaitForUnityEndOfFrame_d__68);
DEFINE_IL2CPP_ARG_TYPE(::LIV::SDK::Unity::__LIV___WaitForUnityEndOfFrame_d__68*, "LIV.SDK.Unity", "LIV/<WaitForUnityEndOfFrame>d__68");

#pragma once
// IWYU pragma private; include "GlobalNamespace/IntroTutorialController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(IntroTutorialController)
namespace GlobalNamespace {
class BloomFogEnvironmentParams;
}
namespace GlobalNamespace {
class BloomFogParamsAnimator;
}
namespace GlobalNamespace {
class IGamePause;
}
namespace GlobalNamespace {
class IntroTutorialRing;
}
namespace GlobalNamespace {
class __IntroTutorialController___ShowFinishAnimationCoroutine_d__22;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
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
class CanvasGroup;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class ParticleSystem;
}
// Forward declare root types
namespace GlobalNamespace {
class IntroTutorialController;
}
namespace GlobalNamespace {
class __IntroTutorialController___ShowFinishAnimationCoroutine_d__22;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IntroTutorialController);
MARK_REF_PTR_T(::GlobalNamespace::__IntroTutorialController___ShowFinishAnimationCoroutine_d__22);
// Type: ::<ShowFinishAnimationCoroutine>d__22
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::IntroTutorialController::<ShowFinishAnimationCoroutine>d__22*
class CORDL_TYPE __IntroTutorialController___ShowFinishAnimationCoroutine_d__22 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::IntroTutorialController> __4__this;

  /// @brief Field <elapsedTime>5__2, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__elapsedTime_5__2, put = __cordl_internal_set__elapsedTime_5__2)) float_t _elapsedTime_5__2;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x3b7545c, size 0x134, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__IntroTutorialController___ShowFinishAnimationCoroutine_d__22* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x3b75590, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x3b75598, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x3b755d0, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x3b75458, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::GlobalNamespace::IntroTutorialController> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::IntroTutorialController>& __cordl_internal_get___4__this();

  constexpr float_t const& __cordl_internal_get__elapsedTime_5__2() const;

  constexpr float_t& __cordl_internal_get__elapsedTime_5__2();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::IntroTutorialController> value);

  constexpr void __cordl_internal_set__elapsedTime_5__2(float_t value);

  /// @brief Method .ctor, addr 0x3b753cc, size 0x28, virtual false, abstract: false, final false
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
  constexpr __IntroTutorialController___ShowFinishAnimationCoroutine_d__22();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IntroTutorialController___ShowFinishAnimationCoroutine_d__22", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IntroTutorialController___ShowFinishAnimationCoroutine_d__22(__IntroTutorialController___ShowFinishAnimationCoroutine_d__22&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IntroTutorialController___ShowFinishAnimationCoroutine_d__22", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IntroTutorialController___ShowFinishAnimationCoroutine_d__22(__IntroTutorialController___ShowFinishAnimationCoroutine_d__22 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::IntroTutorialController> _____4__this;

  /// @brief Field <elapsedTime>5__2, offset: 0x28, size: 0x4, def value: None
  float_t ____elapsedTime_5__2;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4679 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__IntroTutorialController___ShowFinishAnimationCoroutine_d__22, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__IntroTutorialController___ShowFinishAnimationCoroutine_d__22, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__IntroTutorialController___ShowFinishAnimationCoroutine_d__22, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__IntroTutorialController___ShowFinishAnimationCoroutine_d__22, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__IntroTutorialController___ShowFinishAnimationCoroutine_d__22, ____elapsedTime_5__2) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::IntroTutorialController
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 115, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::IntroTutorialController*
class CORDL_TYPE IntroTutorialController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _ShowFinishAnimationCoroutine_d__22 = ::GlobalNamespace::__IntroTutorialController___ShowFinishAnimationCoroutine_d__22;

  /// @brief Field _bloomFogAnimator, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__bloomFogAnimator, put = __cordl_internal_set__bloomFogAnimator)) ::UnityW<::GlobalNamespace::BloomFogParamsAnimator> _bloomFogAnimator;

  /// @brief Field _blueRing, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__blueRing, put = __cordl_internal_set__blueRing)) ::UnityW<::GlobalNamespace::IntroTutorialRing> _blueRing;

  /// @brief Field _blueRingWrapper, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__blueRingWrapper, put = __cordl_internal_set__blueRingWrapper)) ::UnityW<::UnityEngine::GameObject> _blueRingWrapper;

  /// @brief Field _blueRingWrapperActive, offset 0x72, size 0x1
  __declspec(property(get = __cordl_internal_get__blueRingWrapperActive, put = __cordl_internal_set__blueRingWrapperActive)) bool _blueRingWrapperActive;

  /// @brief Field _finishForParams, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__finishForParams, put = __cordl_internal_set__finishForParams)) ::UnityW<::GlobalNamespace::BloomFogEnvironmentParams> _finishForParams;

  /// @brief Field _gamePause, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__gamePause, put = __cordl_internal_set__gamePause)) ::GlobalNamespace::IGamePause* _gamePause;

  /// @brief Field _redRing, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__redRing, put = __cordl_internal_set__redRing)) ::UnityW<::GlobalNamespace::IntroTutorialRing> _redRing;

  /// @brief Field _redRingWrapper, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__redRingWrapper, put = __cordl_internal_set__redRingWrapper)) ::UnityW<::UnityEngine::GameObject> _redRingWrapper;

  /// @brief Field _redRingWrapperActive, offset 0x71, size 0x1
  __declspec(property(get = __cordl_internal_get__redRingWrapperActive, put = __cordl_internal_set__redRingWrapperActive)) bool _redRingWrapperActive;

  /// @brief Field _shockWavePS, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__shockWavePS, put = __cordl_internal_set__shockWavePS)) ::UnityW<::UnityEngine::ParticleSystem> _shockWavePS;

  /// @brief Field _showingFinishAnimation, offset 0x70, size 0x1
  __declspec(property(get = __cordl_internal_get__showingFinishAnimation, put = __cordl_internal_set__showingFinishAnimation)) bool _showingFinishAnimation;

  /// @brief Field _textCanvasGroup, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__textCanvasGroup, put = __cordl_internal_set__textCanvasGroup)) ::UnityW<::UnityEngine::CanvasGroup> _textCanvasGroup;

  /// @brief Field introTutorialDidFinishEvent, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_introTutorialDidFinishEvent, put = __cordl_internal_set_introTutorialDidFinishEvent)) ::System::Action* introTutorialDidFinishEvent;

  /// @brief Method CleanUp, addr 0x3b75030, size 0x1a8, virtual false, abstract: false, final false
  inline void CleanUp();

  /// @brief Method HandleGameDidPause, addr 0x3b752c4, size 0x70, virtual false, abstract: false, final false
  inline void HandleGameDidPause();

  /// @brief Method HandleGameDidResume, addr 0x3b75334, size 0x38, virtual false, abstract: false, final false
  inline void HandleGameDidResume();

  static inline ::GlobalNamespace::IntroTutorialController* New_ctor();

  /// @brief Method OnDestroy, addr 0x3b7502c, size 0x4, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method SetFinishAnimationParams, addr 0x3b753f4, size 0x5c, virtual false, abstract: false, final false
  inline void SetFinishAnimationParams(float_t progress);

  /// @brief Method ShowFinishAnimation, addr 0x3b75248, size 0x7c, virtual false, abstract: false, final false
  inline void ShowFinishAnimation();

  /// @brief Method ShowFinishAnimationCoroutine, addr 0x3b7536c, size 0x60, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* ShowFinishAnimationCoroutine();

  /// @brief Method Start, addr 0x3b74e98, size 0x194, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x3b751d8, size 0x70, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::UnityW<::GlobalNamespace::BloomFogParamsAnimator> const& __cordl_internal_get__bloomFogAnimator() const;

  constexpr ::UnityW<::GlobalNamespace::BloomFogParamsAnimator>& __cordl_internal_get__bloomFogAnimator();

  constexpr ::UnityW<::GlobalNamespace::IntroTutorialRing> const& __cordl_internal_get__blueRing() const;

  constexpr ::UnityW<::GlobalNamespace::IntroTutorialRing>& __cordl_internal_get__blueRing();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__blueRingWrapper() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__blueRingWrapper();

  constexpr bool const& __cordl_internal_get__blueRingWrapperActive() const;

  constexpr bool& __cordl_internal_get__blueRingWrapperActive();

  constexpr ::UnityW<::GlobalNamespace::BloomFogEnvironmentParams> const& __cordl_internal_get__finishForParams() const;

  constexpr ::UnityW<::GlobalNamespace::BloomFogEnvironmentParams>& __cordl_internal_get__finishForParams();

  constexpr ::GlobalNamespace::IGamePause*& __cordl_internal_get__gamePause();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IGamePause*> const& __cordl_internal_get__gamePause() const;

  constexpr ::UnityW<::GlobalNamespace::IntroTutorialRing> const& __cordl_internal_get__redRing() const;

  constexpr ::UnityW<::GlobalNamespace::IntroTutorialRing>& __cordl_internal_get__redRing();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__redRingWrapper() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__redRingWrapper();

  constexpr bool const& __cordl_internal_get__redRingWrapperActive() const;

  constexpr bool& __cordl_internal_get__redRingWrapperActive();

  constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get__shockWavePS() const;

  constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get__shockWavePS();

  constexpr bool const& __cordl_internal_get__showingFinishAnimation() const;

  constexpr bool& __cordl_internal_get__showingFinishAnimation();

  constexpr ::UnityW<::UnityEngine::CanvasGroup> const& __cordl_internal_get__textCanvasGroup() const;

  constexpr ::UnityW<::UnityEngine::CanvasGroup>& __cordl_internal_get__textCanvasGroup();

  constexpr ::System::Action*& __cordl_internal_get_introTutorialDidFinishEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_introTutorialDidFinishEvent() const;

  constexpr void __cordl_internal_set__bloomFogAnimator(::UnityW<::GlobalNamespace::BloomFogParamsAnimator> value);

  constexpr void __cordl_internal_set__blueRing(::UnityW<::GlobalNamespace::IntroTutorialRing> value);

  constexpr void __cordl_internal_set__blueRingWrapper(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__blueRingWrapperActive(bool value);

  constexpr void __cordl_internal_set__finishForParams(::UnityW<::GlobalNamespace::BloomFogEnvironmentParams> value);

  constexpr void __cordl_internal_set__gamePause(::GlobalNamespace::IGamePause* value);

  constexpr void __cordl_internal_set__redRing(::UnityW<::GlobalNamespace::IntroTutorialRing> value);

  constexpr void __cordl_internal_set__redRingWrapper(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__redRingWrapperActive(bool value);

  constexpr void __cordl_internal_set__shockWavePS(::UnityW<::UnityEngine::ParticleSystem> value);

  constexpr void __cordl_internal_set__showingFinishAnimation(bool value);

  constexpr void __cordl_internal_set__textCanvasGroup(::UnityW<::UnityEngine::CanvasGroup> value);

  constexpr void __cordl_internal_set_introTutorialDidFinishEvent(::System::Action* value);

  /// @brief Method .ctor, addr 0x3b75450, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_introTutorialDidFinishEvent, addr 0x3b74d60, size 0x9c, virtual false, abstract: false, final false
  inline void add_introTutorialDidFinishEvent(::System::Action* value);

  /// @brief Method remove_introTutorialDidFinishEvent, addr 0x3b74dfc, size 0x9c, virtual false, abstract: false, final false
  inline void remove_introTutorialDidFinishEvent(::System::Action* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IntroTutorialController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IntroTutorialController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IntroTutorialController(IntroTutorialController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IntroTutorialController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IntroTutorialController(IntroTutorialController const&) = delete;

  /// @brief Field _redRing, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::IntroTutorialRing> ____redRing;

  /// @brief Field _blueRing, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::IntroTutorialRing> ____blueRing;

  /// @brief Field _redRingWrapper, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____redRingWrapper;

  /// @brief Field _blueRingWrapper, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____blueRingWrapper;

  /// @brief Field _textCanvasGroup, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::CanvasGroup> ____textCanvasGroup;

  /// @brief Field _shockWavePS, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ParticleSystem> ____shockWavePS;

  /// @brief Field _finishForParams, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BloomFogEnvironmentParams> ____finishForParams;

  /// @brief Field _bloomFogAnimator, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BloomFogParamsAnimator> ____bloomFogAnimator;

  /// @brief Field _gamePause, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::IGamePause* ____gamePause;

  /// @brief Field introTutorialDidFinishEvent, offset: 0x68, size: 0x8, def value: None
  ::System::Action* ___introTutorialDidFinishEvent;

  /// @brief Field _showingFinishAnimation, offset: 0x70, size: 0x1, def value: None
  bool ____showingFinishAnimation;

  /// @brief Field _redRingWrapperActive, offset: 0x71, size: 0x1, def value: None
  bool ____redRingWrapperActive;

  /// @brief Field _blueRingWrapperActive, offset: 0x72, size: 0x1, def value: None
  bool ____blueRingWrapperActive;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4680 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::IntroTutorialController, 0x78>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::IntroTutorialController, ____redRing) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IntroTutorialController, ____blueRing) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IntroTutorialController, ____redRingWrapper) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IntroTutorialController, ____blueRingWrapper) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IntroTutorialController, ____textCanvasGroup) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IntroTutorialController, ____shockWavePS) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IntroTutorialController, ____finishForParams) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IntroTutorialController, ____bloomFogAnimator) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IntroTutorialController, ____gamePause) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IntroTutorialController, ___introTutorialDidFinishEvent) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IntroTutorialController, ____showingFinishAnimation) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IntroTutorialController, ____redRingWrapperActive) == 0x71, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IntroTutorialController, ____blueRingWrapperActive) == 0x72, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IntroTutorialController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IntroTutorialController*, "", "IntroTutorialController");
NEED_NO_BOX(::GlobalNamespace::__IntroTutorialController___ShowFinishAnimationCoroutine_d__22);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__IntroTutorialController___ShowFinishAnimationCoroutine_d__22*, "", "IntroTutorialController/<ShowFinishAnimationCoroutine>d__22");

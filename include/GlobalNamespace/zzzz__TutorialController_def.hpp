#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TutorialController)
namespace GlobalNamespace {
class AudioFading;
}
namespace GlobalNamespace {
class ILevelStartController;
}
namespace GlobalNamespace {
class IntroTutorialController;
}
namespace GlobalNamespace {
class PauseController;
}
namespace GlobalNamespace {
class Signal;
}
namespace GlobalNamespace {
class TutorialScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class TutorialSongController;
}
namespace GlobalNamespace {
class __TutorialController___OutroCoroutine_d__19;
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
// Forward declare root types
namespace GlobalNamespace {
class TutorialController;
}
namespace GlobalNamespace {
class __TutorialController___OutroCoroutine_d__19;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TutorialController);
MARK_REF_PTR_T(::GlobalNamespace::__TutorialController___OutroCoroutine_d__19);
// Type: ::<OutroCoroutine>d__19
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::TutorialController::<OutroCoroutine>d__19*
class CORDL_TYPE __TutorialController___OutroCoroutine_d__19 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::TutorialController> __4__this;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x2498318, size 0x10c, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__TutorialController___OutroCoroutine_d__19* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x2498424, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x249842c, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x249846c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x2498314, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::GlobalNamespace::TutorialController> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::TutorialController>& __cordl_internal_get___4__this();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::TutorialController> value);

  /// @brief Method .ctor, addr 0x2498298, size 0x28, virtual false, abstract: false, final false
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
  constexpr __TutorialController___OutroCoroutine_d__19();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TutorialController___OutroCoroutine_d__19", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TutorialController___OutroCoroutine_d__19(__TutorialController___OutroCoroutine_d__19&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TutorialController___OutroCoroutine_d__19", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TutorialController___OutroCoroutine_d__19(__TutorialController___OutroCoroutine_d__19 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::TutorialController> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__TutorialController___OutroCoroutine_d__19, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__TutorialController___OutroCoroutine_d__19, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__TutorialController___OutroCoroutine_d__19, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__TutorialController___OutroCoroutine_d__19, _____4__this) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::TutorialController
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 98, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::TutorialController*
class CORDL_TYPE TutorialController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _OutroCoroutine_d__19 = ::GlobalNamespace::__TutorialController___OutroCoroutine_d__19;

  /// @brief Field _audioFading, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__audioFading, put = __cordl_internal_set__audioFading))::UnityW<::GlobalNamespace::AudioFading> _audioFading;

  /// @brief Field _doingOutroTransition, offset 0x61, size 0x1
  __declspec(property(get = __cordl_internal_get__doingOutroTransition, put = __cordl_internal_set__doingOutroTransition)) bool _doingOutroTransition;

  /// @brief Field _introTutorialController, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__introTutorialController,
                      put = __cordl_internal_set__introTutorialController))::UnityW<::GlobalNamespace::IntroTutorialController> _introTutorialController;

  /// @brief Field _pauseController, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__pauseController, put = __cordl_internal_set__pauseController))::UnityW<::GlobalNamespace::PauseController> _pauseController;

  /// @brief Field _paused, offset 0x60, size 0x1
  __declspec(property(get = __cordl_internal_get__paused, put = __cordl_internal_set__paused)) bool _paused;

  /// @brief Field _tutorialFinishedSignal, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__tutorialFinishedSignal, put = __cordl_internal_set__tutorialFinishedSignal))::UnityW<::GlobalNamespace::Signal> _tutorialFinishedSignal;

  /// @brief Field _tutorialIntroStartedSignal, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__tutorialIntroStartedSignal, put = __cordl_internal_set__tutorialIntroStartedSignal))::UnityW<::GlobalNamespace::Signal> _tutorialIntroStartedSignal;

  /// @brief Field _tutorialSceneSetupData, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__tutorialSceneSetupData,
                      put = __cordl_internal_set__tutorialSceneSetupData))::UnityW<::GlobalNamespace::TutorialScenesTransitionSetupDataSO> _tutorialSceneSetupData;

  /// @brief Field _tutorialSongController, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__tutorialSongController,
                      put = __cordl_internal_set__tutorialSongController))::UnityW<::GlobalNamespace::TutorialSongController> _tutorialSongController;

  /// @brief Field levelDidStartEvent, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_levelDidStartEvent, put = __cordl_internal_set_levelDidStartEvent))::System::Action* levelDidStartEvent;

  /// @brief Field levelWillStartIntroEvent, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_levelWillStartIntroEvent, put = __cordl_internal_set_levelWillStartIntroEvent))::System::Action* levelWillStartIntroEvent;

  /// @brief Convert operator to "::GlobalNamespace::ILevelStartController"
  constexpr operator ::GlobalNamespace::ILevelStartController*() noexcept;

  /// @brief Method HandleIntroTutorialDidFinishEvent, addr 0x2498154, size 0x1c, virtual false, abstract: false, final false
  inline void HandleIntroTutorialDidFinishEvent();

  /// @brief Method HandlePauseControllerCanPause, addr 0x24982c0, size 0x38, virtual false, abstract: false, final false
  inline void HandlePauseControllerCanPause(::System::Action_1<bool>* canPause);

  /// @brief Method HandlePauseControllerDidPause, addr 0x24982f8, size 0xc, virtual false, abstract: false, final false
  inline void HandlePauseControllerDidPause();

  /// @brief Method HandlePauseControllerDidResume, addr 0x2498304, size 0x8, virtual false, abstract: false, final false
  inline void HandlePauseControllerDidResume();

  /// @brief Method HandleTutorialSongControllerSongDidFinishEvent, addr 0x24981f0, size 0x40, virtual false, abstract: false, final false
  inline void HandleTutorialSongControllerSongDidFinishEvent();

  static inline ::GlobalNamespace::TutorialController* New_ctor();

  /// @brief Method OnDestroy, addr 0x2497ee8, size 0x26c, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OutroCoroutine, addr 0x2498230, size 0x68, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* OutroCoroutine();

  /// @brief Method Start, addr 0x2497cac, size 0x23c, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::UnityW<::GlobalNamespace::AudioFading> const& __cordl_internal_get__audioFading() const;

  constexpr ::UnityW<::GlobalNamespace::AudioFading>& __cordl_internal_get__audioFading();

  constexpr bool const& __cordl_internal_get__doingOutroTransition() const;

  constexpr bool& __cordl_internal_get__doingOutroTransition();

  constexpr ::UnityW<::GlobalNamespace::IntroTutorialController> const& __cordl_internal_get__introTutorialController() const;

  constexpr ::UnityW<::GlobalNamespace::IntroTutorialController>& __cordl_internal_get__introTutorialController();

  constexpr ::UnityW<::GlobalNamespace::PauseController> const& __cordl_internal_get__pauseController() const;

  constexpr ::UnityW<::GlobalNamespace::PauseController>& __cordl_internal_get__pauseController();

  constexpr bool const& __cordl_internal_get__paused() const;

  constexpr bool& __cordl_internal_get__paused();

  constexpr ::UnityW<::GlobalNamespace::Signal> const& __cordl_internal_get__tutorialFinishedSignal() const;

  constexpr ::UnityW<::GlobalNamespace::Signal>& __cordl_internal_get__tutorialFinishedSignal();

  constexpr ::UnityW<::GlobalNamespace::Signal> const& __cordl_internal_get__tutorialIntroStartedSignal() const;

  constexpr ::UnityW<::GlobalNamespace::Signal>& __cordl_internal_get__tutorialIntroStartedSignal();

  constexpr ::UnityW<::GlobalNamespace::TutorialScenesTransitionSetupDataSO> const& __cordl_internal_get__tutorialSceneSetupData() const;

  constexpr ::UnityW<::GlobalNamespace::TutorialScenesTransitionSetupDataSO>& __cordl_internal_get__tutorialSceneSetupData();

  constexpr ::UnityW<::GlobalNamespace::TutorialSongController> const& __cordl_internal_get__tutorialSongController() const;

  constexpr ::UnityW<::GlobalNamespace::TutorialSongController>& __cordl_internal_get__tutorialSongController();

  constexpr ::System::Action*& __cordl_internal_get_levelDidStartEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_levelDidStartEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_levelWillStartIntroEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_levelWillStartIntroEvent() const;

  constexpr void __cordl_internal_set__audioFading(::UnityW<::GlobalNamespace::AudioFading> value);

  constexpr void __cordl_internal_set__doingOutroTransition(bool value);

  constexpr void __cordl_internal_set__introTutorialController(::UnityW<::GlobalNamespace::IntroTutorialController> value);

  constexpr void __cordl_internal_set__pauseController(::UnityW<::GlobalNamespace::PauseController> value);

  constexpr void __cordl_internal_set__paused(bool value);

  constexpr void __cordl_internal_set__tutorialFinishedSignal(::UnityW<::GlobalNamespace::Signal> value);

  constexpr void __cordl_internal_set__tutorialIntroStartedSignal(::UnityW<::GlobalNamespace::Signal> value);

  constexpr void __cordl_internal_set__tutorialSceneSetupData(::UnityW<::GlobalNamespace::TutorialScenesTransitionSetupDataSO> value);

  constexpr void __cordl_internal_set__tutorialSongController(::UnityW<::GlobalNamespace::TutorialSongController> value);

  constexpr void __cordl_internal_set_levelDidStartEvent(::System::Action* value);

  constexpr void __cordl_internal_set_levelWillStartIntroEvent(::System::Action* value);

  /// @brief Method .ctor, addr 0x249830c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_levelDidStartEvent, addr 0x2497b74, size 0x9c, virtual true, abstract: false, final true
  inline void add_levelDidStartEvent(::System::Action* value);

  /// @brief Method add_levelWillStartIntroEvent, addr 0x2497a3c, size 0x9c, virtual true, abstract: false, final true
  inline void add_levelWillStartIntroEvent(::System::Action* value);

  /// @brief Convert to "::GlobalNamespace::ILevelStartController"
  constexpr ::GlobalNamespace::ILevelStartController* i___GlobalNamespace__ILevelStartController() noexcept;

  /// @brief Method remove_levelDidStartEvent, addr 0x2497c10, size 0x9c, virtual true, abstract: false, final true
  inline void remove_levelDidStartEvent(::System::Action* value);

  /// @brief Method remove_levelWillStartIntroEvent, addr 0x2497ad8, size 0x9c, virtual true, abstract: false, final true
  inline void remove_levelWillStartIntroEvent(::System::Action* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TutorialController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TutorialController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TutorialController(TutorialController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TutorialController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TutorialController(TutorialController const&) = delete;

  /// @brief Field _tutorialSongController, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::TutorialSongController> ____tutorialSongController;

  /// @brief Field _introTutorialController, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::IntroTutorialController> ____introTutorialController;

  /// @brief Field _audioFading, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AudioFading> ____audioFading;

  /// @brief Field _tutorialSceneSetupData, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::TutorialScenesTransitionSetupDataSO> ____tutorialSceneSetupData;

  /// @brief Field _tutorialIntroStartedSignal, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::Signal> ____tutorialIntroStartedSignal;

  /// @brief Field _tutorialFinishedSignal, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::Signal> ____tutorialFinishedSignal;

  /// @brief Field _pauseController, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PauseController> ____pauseController;

  /// @brief Field levelWillStartIntroEvent, offset: 0x50, size: 0x8, def value: None
  ::System::Action* ___levelWillStartIntroEvent;

  /// @brief Field levelDidStartEvent, offset: 0x58, size: 0x8, def value: None
  ::System::Action* ___levelDidStartEvent;

  /// @brief Field _paused, offset: 0x60, size: 0x1, def value: None
  bool ____paused;

  /// @brief Field _doingOutroTransition, offset: 0x61, size: 0x1, def value: None
  bool ____doingOutroTransition;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TutorialController, 0x68>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialController, ____tutorialSongController) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialController, ____introTutorialController) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialController, ____audioFading) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialController, ____tutorialSceneSetupData) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialController, ____tutorialIntroStartedSignal) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialController, ____tutorialFinishedSignal) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialController, ____pauseController) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialController, ___levelWillStartIntroEvent) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialController, ___levelDidStartEvent) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialController, ____paused) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialController, ____doingOutroTransition) == 0x61, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TutorialController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TutorialController*, "", "TutorialController");
NEED_NO_BOX(::GlobalNamespace::__TutorialController___OutroCoroutine_d__19);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__TutorialController___OutroCoroutine_d__19*, "", "TutorialController/<OutroCoroutine>d__19");

#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TutorialController)
namespace GlobalNamespace {
class Signal;
}
namespace GlobalNamespace {
class TutorialSongController;
}
namespace System {
template <typename T> class Action_1;
}
namespace GlobalNamespace {
class __TutorialController___OutroCoroutine_d__19;
}
namespace GlobalNamespace {
class IntroTutorialController;
}
namespace GlobalNamespace {
class AudioFading;
}
namespace GlobalNamespace {
class PauseController;
}
namespace System {
class Action;
}
namespace System::Collections {
class IEnumerator;
}
namespace GlobalNamespace {
class TutorialScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class ILevelStartController;
}
namespace System {
class Object;
}
namespace System {
class IDisposable;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5340))
// CS Name: ::TutorialController::<OutroCoroutine>d__19*
class CORDL_TYPE __TutorialController___OutroCoroutine_d__19 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::TutorialController* __4__this;

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

  constexpr ::GlobalNamespace::TutorialController*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::TutorialController*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::TutorialController* value);

  static inline ::GlobalNamespace::__TutorialController___OutroCoroutine_d__19* New_ctor(int32_t __1__state);

  /// @brief Method .ctor addr 0x226a490 size 0x28 virtual false final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose addr 0x226a50c size 0x4 virtual true final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext addr 0x226a510 size 0x10c virtual true final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x226a61c size 0x8 virtual true final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset addr 0x226a624 size 0x40 virtual true final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current addr 0x226a664 size 0x8 virtual true final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__TutorialController___OutroCoroutine_d__19", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TutorialController___OutroCoroutine_d__19(__TutorialController___OutroCoroutine_d__19&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TutorialController___OutroCoroutine_d__19", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TutorialController___OutroCoroutine_d__19(__TutorialController___OutroCoroutine_d__19 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TutorialController___OutroCoroutine_d__19();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::TutorialController* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__TutorialController___OutroCoroutine_d__19, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::TutorialController
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 98, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5341))
// CS Name: ::TutorialController*
class CORDL_TYPE TutorialController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _OutroCoroutine_d__19 = ::GlobalNamespace::__TutorialController___OutroCoroutine_d__19;

  /// @brief Field _tutorialSongController, offset 0x18, size 0x8
  __declspec(property(get = __get__tutorialSongController, put = __set__tutorialSongController))::GlobalNamespace::TutorialSongController* _tutorialSongController;

  /// @brief Field _introTutorialController, offset 0x20, size 0x8
  __declspec(property(get = __get__introTutorialController, put = __set__introTutorialController))::GlobalNamespace::IntroTutorialController* _introTutorialController;

  /// @brief Field _audioFading, offset 0x28, size 0x8
  __declspec(property(get = __get__audioFading, put = __set__audioFading))::GlobalNamespace::AudioFading* _audioFading;

  /// @brief Field _tutorialSceneSetupData, offset 0x30, size 0x8
  __declspec(property(get = __get__tutorialSceneSetupData, put = __set__tutorialSceneSetupData))::GlobalNamespace::TutorialScenesTransitionSetupDataSO* _tutorialSceneSetupData;

  /// @brief Field _tutorialIntroStartedSignal, offset 0x38, size 0x8
  __declspec(property(get = __get__tutorialIntroStartedSignal, put = __set__tutorialIntroStartedSignal))::GlobalNamespace::Signal* _tutorialIntroStartedSignal;

  /// @brief Field _tutorialFinishedSignal, offset 0x40, size 0x8
  __declspec(property(get = __get__tutorialFinishedSignal, put = __set__tutorialFinishedSignal))::GlobalNamespace::Signal* _tutorialFinishedSignal;

  /// @brief Field _pauseController, offset 0x48, size 0x8
  __declspec(property(get = __get__pauseController, put = __set__pauseController))::GlobalNamespace::PauseController* _pauseController;

  /// @brief Field levelWillStartIntroEvent, offset 0x50, size 0x8
  __declspec(property(get = __get_levelWillStartIntroEvent, put = __set_levelWillStartIntroEvent))::System::Action* levelWillStartIntroEvent;

  /// @brief Field levelDidStartEvent, offset 0x58, size 0x8
  __declspec(property(get = __get_levelDidStartEvent, put = __set_levelDidStartEvent))::System::Action* levelDidStartEvent;

  /// @brief Field _paused, offset 0x60, size 0x1
  __declspec(property(get = __get__paused, put = __set__paused)) bool _paused;

  /// @brief Field _doingOutroTransition, offset 0x61, size 0x1
  __declspec(property(get = __get__doingOutroTransition, put = __set__doingOutroTransition)) bool _doingOutroTransition;

  /// @brief Convert operator to "::GlobalNamespace::ILevelStartController"
  constexpr operator ::GlobalNamespace::ILevelStartController*() noexcept;

  constexpr ::GlobalNamespace::TutorialSongController*& __get__tutorialSongController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::TutorialSongController*> const& __get__tutorialSongController() const;

  constexpr void __set__tutorialSongController(::GlobalNamespace::TutorialSongController* value);

  constexpr ::GlobalNamespace::IntroTutorialController*& __get__introTutorialController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IntroTutorialController*> const& __get__introTutorialController() const;

  constexpr void __set__introTutorialController(::GlobalNamespace::IntroTutorialController* value);

  constexpr ::GlobalNamespace::AudioFading*& __get__audioFading();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AudioFading*> const& __get__audioFading() const;

  constexpr void __set__audioFading(::GlobalNamespace::AudioFading* value);

  constexpr ::GlobalNamespace::TutorialScenesTransitionSetupDataSO*& __get__tutorialSceneSetupData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::TutorialScenesTransitionSetupDataSO*> const& __get__tutorialSceneSetupData() const;

  constexpr void __set__tutorialSceneSetupData(::GlobalNamespace::TutorialScenesTransitionSetupDataSO* value);

  constexpr ::GlobalNamespace::Signal*& __get__tutorialIntroStartedSignal();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Signal*> const& __get__tutorialIntroStartedSignal() const;

  constexpr void __set__tutorialIntroStartedSignal(::GlobalNamespace::Signal* value);

  constexpr ::GlobalNamespace::Signal*& __get__tutorialFinishedSignal();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Signal*> const& __get__tutorialFinishedSignal() const;

  constexpr void __set__tutorialFinishedSignal(::GlobalNamespace::Signal* value);

  constexpr ::GlobalNamespace::PauseController*& __get__pauseController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PauseController*> const& __get__pauseController() const;

  constexpr void __set__pauseController(::GlobalNamespace::PauseController* value);

  constexpr ::System::Action*& __get_levelWillStartIntroEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_levelWillStartIntroEvent() const;

  constexpr void __set_levelWillStartIntroEvent(::System::Action* value);

  constexpr ::System::Action*& __get_levelDidStartEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_levelDidStartEvent() const;

  constexpr void __set_levelDidStartEvent(::System::Action* value);

  constexpr bool& __get__paused();

  constexpr bool const& __get__paused() const;

  constexpr void __set__paused(bool value);

  constexpr bool& __get__doingOutroTransition();

  constexpr bool const& __get__doingOutroTransition() const;

  constexpr void __set__doingOutroTransition(bool value);

  /// @brief Method add_levelWillStartIntroEvent addr 0x2269c58 size 0x9c virtual true final true
  inline void add_levelWillStartIntroEvent(::System::Action* value);

  /// @brief Method remove_levelWillStartIntroEvent addr 0x2269cf4 size 0x9c virtual true final true
  inline void remove_levelWillStartIntroEvent(::System::Action* value);

  /// @brief Method add_levelDidStartEvent addr 0x2269d90 size 0x9c virtual true final true
  inline void add_levelDidStartEvent(::System::Action* value);

  /// @brief Method remove_levelDidStartEvent addr 0x2269e2c size 0x9c virtual true final true
  inline void remove_levelDidStartEvent(::System::Action* value);

  /// @brief Method Start addr 0x2269ec8 size 0x23c virtual false final false
  inline void Start();

  /// @brief Method OnDestroy addr 0x226a104 size 0x26c virtual false final false
  inline void OnDestroy();

  /// @brief Method HandleIntroTutorialDidFinishEvent addr 0x226a370 size 0x1c virtual false final false
  inline void HandleIntroTutorialDidFinishEvent();

  /// @brief Method HandleTutorialSongControllerSongDidFinishEvent addr 0x226a3e8 size 0x40 virtual false final false
  inline void HandleTutorialSongControllerSongDidFinishEvent();

  /// @brief Method OutroCoroutine addr 0x226a428 size 0x68 virtual false final false
  inline ::System::Collections::IEnumerator* OutroCoroutine();

  /// @brief Method HandlePauseControllerCanPause addr 0x226a4b8 size 0x38 virtual false final false
  inline void HandlePauseControllerCanPause(::System::Action_1<bool>* canPause);

  /// @brief Method HandlePauseControllerDidPause addr 0x226a4f0 size 0xc virtual false final false
  inline void HandlePauseControllerDidPause();

  /// @brief Method HandlePauseControllerDidResume addr 0x226a4fc size 0x8 virtual false final false
  inline void HandlePauseControllerDidResume();

  static inline ::GlobalNamespace::TutorialController* New_ctor();

  /// @brief Method .ctor addr 0x226a504 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "TutorialController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TutorialController(TutorialController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TutorialController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TutorialController(TutorialController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TutorialController();

public:
  /// @brief Field _tutorialSongController, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::TutorialSongController* ____tutorialSongController;

  /// @brief Field _introTutorialController, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::IntroTutorialController* ____introTutorialController;

  /// @brief Field _audioFading, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::AudioFading* ____audioFading;

  /// @brief Field _tutorialSceneSetupData, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::TutorialScenesTransitionSetupDataSO* ____tutorialSceneSetupData;

  /// @brief Field _tutorialIntroStartedSignal, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::Signal* ____tutorialIntroStartedSignal;

  /// @brief Field _tutorialFinishedSignal, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::Signal* ____tutorialFinishedSignal;

  /// @brief Field _pauseController, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::PauseController* ____pauseController;

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

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TutorialController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TutorialController*, "", "TutorialController");
NEED_NO_BOX(::GlobalNamespace::__TutorialController___OutroCoroutine_d__19);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__TutorialController___OutroCoroutine_d__19*, "", "TutorialController/<OutroCoroutine>d__19");

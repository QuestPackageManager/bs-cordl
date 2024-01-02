#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BTSCharacterSpawnController)
namespace GlobalNamespace {
class BTSCharacterSpawnAnimationController;
}
namespace GlobalNamespace {
class IGamePause;
}
namespace System::Collections {
class IEnumerator;
}
namespace GlobalNamespace {
class __BTSCharacterSpawnController___TimelineStoppedDelayed_d__19;
}
namespace GlobalNamespace {
class BTSCharacterSpawnEventEffect;
}
namespace GlobalNamespace {
class BTSCharacter;
}
namespace GlobalNamespace {
class ILevelEndActions;
}
namespace UnityEngine {
class Coroutine;
}
namespace System {
class Object;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GlobalNamespace {
class BTSCharacterSpawnController;
}
namespace GlobalNamespace {
class __BTSCharacterSpawnController___TimelineStoppedDelayed_d__19;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BTSCharacterSpawnController);
MARK_REF_PTR_T(::GlobalNamespace::__BTSCharacterSpawnController___TimelineStoppedDelayed_d__19);
// Type: ::<TimelineStoppedDelayed>d__19
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3971))
// CS Name: ::BTSCharacterSpawnController::<TimelineStoppedDelayed>d__19*
class CORDL_TYPE __BTSCharacterSpawnController___TimelineStoppedDelayed_d__19 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::BTSCharacterSpawnController* __4__this;

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

  constexpr ::GlobalNamespace::BTSCharacterSpawnController*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BTSCharacterSpawnController*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::BTSCharacterSpawnController* value);

  static inline ::GlobalNamespace::__BTSCharacterSpawnController___TimelineStoppedDelayed_d__19* New_ctor(int32_t __1__state);

  /// @brief Method .ctor, addr 0x221ae54, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose, addr 0x221ae84, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext, addr 0x221ae88, size 0xc8, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x221af50, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x221af58, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x221af98, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__BTSCharacterSpawnController___TimelineStoppedDelayed_d__19", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BTSCharacterSpawnController___TimelineStoppedDelayed_d__19(__BTSCharacterSpawnController___TimelineStoppedDelayed_d__19&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BTSCharacterSpawnController___TimelineStoppedDelayed_d__19", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BTSCharacterSpawnController___TimelineStoppedDelayed_d__19(__BTSCharacterSpawnController___TimelineStoppedDelayed_d__19 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BTSCharacterSpawnController___TimelineStoppedDelayed_d__19();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::BTSCharacterSpawnController* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BTSCharacterSpawnController___TimelineStoppedDelayed_d__19, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BTSCharacterSpawnController___TimelineStoppedDelayed_d__19, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BTSCharacterSpawnController___TimelineStoppedDelayed_d__19, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BTSCharacterSpawnController___TimelineStoppedDelayed_d__19, _____4__this) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::BTSCharacterSpawnController
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3972))
// CS Name: ::BTSCharacterSpawnController*
class CORDL_TYPE BTSCharacterSpawnController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _TimelineStoppedDelayed_d__19 = ::GlobalNamespace::__BTSCharacterSpawnController___TimelineStoppedDelayed_d__19;

  /// @brief Field _characterSpawnAnimationController, offset 0x18, size 0x8
  __declspec(property(get = __get__characterSpawnAnimationController,
                      put = __set__characterSpawnAnimationController))::GlobalNamespace::BTSCharacterSpawnAnimationController* _characterSpawnAnimationController;

  /// @brief Field _btsCharacterSpawnEventEffect, offset 0x20, size 0x8
  __declspec(property(get = __get__btsCharacterSpawnEventEffect, put = __set__btsCharacterSpawnEventEffect))::GlobalNamespace::BTSCharacterSpawnEventEffect* _btsCharacterSpawnEventEffect;

  /// @brief Field _gamePause, offset 0x28, size 0x8
  __declspec(property(get = __get__gamePause, put = __set__gamePause))::GlobalNamespace::IGamePause* _gamePause;

  /// @brief Field _levelEndActions, offset 0x30, size 0x8
  __declspec(property(get = __get__levelEndActions, put = __set__levelEndActions))::GlobalNamespace::ILevelEndActions* _levelEndActions;

  /// @brief Field _characterSpawned, offset 0x38, size 0x1
  __declspec(property(get = __get__characterSpawned, put = __set__characterSpawned)) bool _characterSpawned;

  /// @brief Field _playableDirectorTimeBeforePause, offset 0x40, size 0x8
  __declspec(property(get = __get__playableDirectorTimeBeforePause, put = __set__playableDirectorTimeBeforePause)) double_t _playableDirectorTimeBeforePause;

  /// @brief Field _animatorNormalizedTimeBeforePause, offset 0x48, size 0x4
  __declspec(property(get = __get__animatorNormalizedTimeBeforePause, put = __set__animatorNormalizedTimeBeforePause)) float_t _animatorNormalizedTimeBeforePause;

  /// @brief Field _despawnCharacterCoroutine, offset 0x50, size 0x8
  __declspec(property(get = __get__despawnCharacterCoroutine, put = __set__despawnCharacterCoroutine))::UnityEngine::Coroutine* _despawnCharacterCoroutine;

  __declspec(property(get = get_isCharacterVisible)) bool isCharacterVisible;

  __declspec(property(get = get_isSpawned)) bool isSpawned;

  constexpr ::GlobalNamespace::BTSCharacterSpawnAnimationController*& __get__characterSpawnAnimationController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BTSCharacterSpawnAnimationController*> const& __get__characterSpawnAnimationController() const;

  constexpr void __set__characterSpawnAnimationController(::GlobalNamespace::BTSCharacterSpawnAnimationController* value);

  constexpr ::GlobalNamespace::BTSCharacterSpawnEventEffect*& __get__btsCharacterSpawnEventEffect();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BTSCharacterSpawnEventEffect*> const& __get__btsCharacterSpawnEventEffect() const;

  constexpr void __set__btsCharacterSpawnEventEffect(::GlobalNamespace::BTSCharacterSpawnEventEffect* value);

  constexpr ::GlobalNamespace::IGamePause*& __get__gamePause();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IGamePause*> const& __get__gamePause() const;

  constexpr void __set__gamePause(::GlobalNamespace::IGamePause* value);

  constexpr ::GlobalNamespace::ILevelEndActions*& __get__levelEndActions();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ILevelEndActions*> const& __get__levelEndActions() const;

  constexpr void __set__levelEndActions(::GlobalNamespace::ILevelEndActions* value);

  constexpr bool& __get__characterSpawned();

  constexpr bool const& __get__characterSpawned() const;

  constexpr void __set__characterSpawned(bool value);

  constexpr double_t& __get__playableDirectorTimeBeforePause();

  constexpr double_t const& __get__playableDirectorTimeBeforePause() const;

  constexpr void __set__playableDirectorTimeBeforePause(double_t value);

  constexpr float_t& __get__animatorNormalizedTimeBeforePause();

  constexpr float_t const& __get__animatorNormalizedTimeBeforePause() const;

  constexpr void __set__animatorNormalizedTimeBeforePause(float_t value);

  constexpr ::UnityEngine::Coroutine*& __get__despawnCharacterCoroutine();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Coroutine*> const& __get__despawnCharacterCoroutine() const;

  constexpr void __set__despawnCharacterCoroutine(::UnityEngine::Coroutine* value);

  /// @brief Method get_isCharacterVisible, addr 0x221a3f8, size 0x18, virtual false, abstract: false, final false
  inline bool get_isCharacterVisible();

  /// @brief Method get_isSpawned, addr 0x221a410, size 0x8, virtual false, abstract: false, final false
  inline bool get_isSpawned();

  /// @brief Method Start, addr 0x221a418, size 0x338, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method OnDestroy, addr 0x221a800, size 0x3a0, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method HandleStartCharacterAnimation, addr 0x221ac50, size 0xc8, virtual false, abstract: false, final false
  inline void HandleStartCharacterAnimation(::GlobalNamespace::BTSCharacter* btsCharacter);

  /// @brief Method HandleGamePauseDidPause, addr 0x221ad80, size 0x40, virtual false, abstract: false, final false
  inline void HandleGamePauseDidPause();

  /// @brief Method HandleGamePauseWillResume, addr 0x221adc0, size 0x44, virtual false, abstract: false, final false
  inline void HandleGamePauseWillResume();

  /// @brief Method HandleGamePauseDidResume, addr 0x221ae04, size 0x28, virtual false, abstract: false, final false
  inline void HandleGamePauseDidResume();

  /// @brief Method HandleLevelEndActionsLevelFailed, addr 0x221ae2c, size 0x28, virtual false, abstract: false, final false
  inline void HandleLevelEndActionsLevelFailed();

  /// @brief Method TimelineStoppedDelayed, addr 0x221ad18, size 0x68, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* TimelineStoppedDelayed();

  static inline ::GlobalNamespace::BTSCharacterSpawnController* New_ctor();

  /// @brief Method .ctor, addr 0x221ae7c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BTSCharacterSpawnController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BTSCharacterSpawnController(BTSCharacterSpawnController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BTSCharacterSpawnController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BTSCharacterSpawnController(BTSCharacterSpawnController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BTSCharacterSpawnController();

public:
  /// @brief Field _characterSpawnAnimationController, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::BTSCharacterSpawnAnimationController* ____characterSpawnAnimationController;

  /// @brief Field _btsCharacterSpawnEventEffect, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::BTSCharacterSpawnEventEffect* ____btsCharacterSpawnEventEffect;

  /// @brief Field _gamePause, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::IGamePause* ____gamePause;

  /// @brief Field _levelEndActions, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::ILevelEndActions* ____levelEndActions;

  /// @brief Field _characterSpawned, offset: 0x38, size: 0x1, def value: None
  bool ____characterSpawned;

  /// @brief Field _playableDirectorTimeBeforePause, offset: 0x40, size: 0x8, def value: None
  double_t ____playableDirectorTimeBeforePause;

  /// @brief Field _animatorNormalizedTimeBeforePause, offset: 0x48, size: 0x4, def value: None
  float_t ____animatorNormalizedTimeBeforePause;

  /// @brief Field _despawnCharacterCoroutine, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::Coroutine* ____despawnCharacterCoroutine;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BTSCharacterSpawnController, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BTSCharacterSpawnController, ____characterSpawnAnimationController) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BTSCharacterSpawnController, ____btsCharacterSpawnEventEffect) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BTSCharacterSpawnController, ____gamePause) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BTSCharacterSpawnController, ____levelEndActions) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BTSCharacterSpawnController, ____characterSpawned) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BTSCharacterSpawnController, ____playableDirectorTimeBeforePause) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BTSCharacterSpawnController, ____animatorNormalizedTimeBeforePause) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BTSCharacterSpawnController, ____despawnCharacterCoroutine) == 0x50, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BTSCharacterSpawnController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BTSCharacterSpawnController*, "", "BTSCharacterSpawnController");
NEED_NO_BOX(::GlobalNamespace::__BTSCharacterSpawnController___TimelineStoppedDelayed_d__19);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BTSCharacterSpawnController___TimelineStoppedDelayed_d__19*, "", "BTSCharacterSpawnController/<TimelineStoppedDelayed>d__19");

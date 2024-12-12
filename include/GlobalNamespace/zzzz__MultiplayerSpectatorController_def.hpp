#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerSpectatorController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerSpectatorController)
namespace GlobalNamespace {
class FadeInOutController;
}
namespace GlobalNamespace {
class IMultiplayerSpectatingSpot;
}
namespace GlobalNamespace {
struct MultiplayerController_State;
}
namespace GlobalNamespace {
class MultiplayerController;
}
namespace GlobalNamespace {
class MultiplayerLocalInactivePlayerSongSyncController;
}
namespace GlobalNamespace {
class MultiplayerSpectatingSpotManager;
}
namespace GlobalNamespace {
class MultiplayerSpectatorController__SwitchToDefaultSpotCoroutine_d__18;
}
namespace GlobalNamespace {
class MultiplayerSpectatorController__SwitchToDefaultSpotWithFadeCoroutine_d__17;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Object;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerSpectatorController;
}
namespace GlobalNamespace {
class MultiplayerSpectatorController__SwitchToDefaultSpotCoroutine_d__18;
}
namespace GlobalNamespace {
class MultiplayerSpectatorController__SwitchToDefaultSpotWithFadeCoroutine_d__17;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerSpectatorController);
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerSpectatorController__SwitchToDefaultSpotCoroutine_d__18);
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerSpectatorController__SwitchToDefaultSpotWithFadeCoroutine_d__17);
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplayerSpectatorController/<SwitchToDefaultSpotCoroutine>d__18
class CORDL_TYPE MultiplayerSpectatorController__SwitchToDefaultSpotCoroutine_d__18 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::MultiplayerSpectatorController> __4__this;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x3be2164, size 0x60, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::MultiplayerSpectatorController__SwitchToDefaultSpotCoroutine_d__18* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x3be21c4, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x3be21cc, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x3be2204, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x3be2160, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerSpectatorController> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerSpectatorController>& __cordl_internal_get___4__this();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MultiplayerSpectatorController> value);

  /// @brief Method .ctor, addr 0x3be2104, size 0x28, virtual false, abstract: false, final false
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
  constexpr MultiplayerSpectatorController__SwitchToDefaultSpotCoroutine_d__18();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerSpectatorController__SwitchToDefaultSpotCoroutine_d__18", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerSpectatorController__SwitchToDefaultSpotCoroutine_d__18(MultiplayerSpectatorController__SwitchToDefaultSpotCoroutine_d__18&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerSpectatorController__SwitchToDefaultSpotCoroutine_d__18", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerSpectatorController__SwitchToDefaultSpotCoroutine_d__18(MultiplayerSpectatorController__SwitchToDefaultSpotCoroutine_d__18 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4623 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerSpectatorController> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiplayerSpectatorController__SwitchToDefaultSpotCoroutine_d__18, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerSpectatorController__SwitchToDefaultSpotCoroutine_d__18, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerSpectatorController__SwitchToDefaultSpotCoroutine_d__18, _____4__this) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerSpectatorController__SwitchToDefaultSpotCoroutine_d__18, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplayerSpectatorController/<SwitchToDefaultSpotWithFadeCoroutine>d__17
class CORDL_TYPE MultiplayerSpectatorController__SwitchToDefaultSpotWithFadeCoroutine_d__17 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::MultiplayerSpectatorController> __4__this;

  /// @brief Field <defaultSpot>5__2, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__defaultSpot_5__2, put = __cordl_internal_set__defaultSpot_5__2)) ::GlobalNamespace::IMultiplayerSpectatingSpot* _defaultSpot_5__2;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x3be2210, size 0xec, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::MultiplayerSpectatorController__SwitchToDefaultSpotWithFadeCoroutine_d__17* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x3be22fc, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x3be2304, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x3be233c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x3be220c, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerSpectatorController> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerSpectatorController>& __cordl_internal_get___4__this();

  constexpr ::GlobalNamespace::IMultiplayerSpectatingSpot* const& __cordl_internal_get__defaultSpot_5__2() const;

  constexpr ::GlobalNamespace::IMultiplayerSpectatingSpot*& __cordl_internal_get__defaultSpot_5__2();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MultiplayerSpectatorController> value);

  constexpr void __cordl_internal_set__defaultSpot_5__2(::GlobalNamespace::IMultiplayerSpectatingSpot* value);

  /// @brief Method .ctor, addr 0x3be20dc, size 0x28, virtual false, abstract: false, final false
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
  constexpr MultiplayerSpectatorController__SwitchToDefaultSpotWithFadeCoroutine_d__17();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerSpectatorController__SwitchToDefaultSpotWithFadeCoroutine_d__17", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerSpectatorController__SwitchToDefaultSpotWithFadeCoroutine_d__17(MultiplayerSpectatorController__SwitchToDefaultSpotWithFadeCoroutine_d__17&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerSpectatorController__SwitchToDefaultSpotWithFadeCoroutine_d__17", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerSpectatorController__SwitchToDefaultSpotWithFadeCoroutine_d__17(MultiplayerSpectatorController__SwitchToDefaultSpotWithFadeCoroutine_d__17 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4624 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerSpectatorController> _____4__this;

  /// @brief Field <defaultSpot>5__2, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::IMultiplayerSpectatingSpot* ____defaultSpot_5__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiplayerSpectatorController__SwitchToDefaultSpotWithFadeCoroutine_d__17, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerSpectatorController__SwitchToDefaultSpotWithFadeCoroutine_d__17, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerSpectatorController__SwitchToDefaultSpotWithFadeCoroutine_d__17, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerSpectatorController__SwitchToDefaultSpotWithFadeCoroutine_d__17, ____defaultSpot_5__2) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerSpectatorController__SwitchToDefaultSpotWithFadeCoroutine_d__17, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplayerSpectatorController
class CORDL_TYPE MultiplayerSpectatorController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _SwitchToDefaultSpotCoroutine_d__18 = ::GlobalNamespace::MultiplayerSpectatorController__SwitchToDefaultSpotCoroutine_d__18;

  using _SwitchToDefaultSpotWithFadeCoroutine_d__17 = ::GlobalNamespace::MultiplayerSpectatorController__SwitchToDefaultSpotWithFadeCoroutine_d__17;

  /// @brief Field _currentSpot, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__currentSpot, put = __cordl_internal_set__currentSpot)) ::GlobalNamespace::IMultiplayerSpectatingSpot* _currentSpot;

  /// @brief Field _fadeInOutController, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__fadeInOutController, put = __cordl_internal_set__fadeInOutController)) ::UnityW<::GlobalNamespace::FadeInOutController> _fadeInOutController;

  /// @brief Field _multiplayerController, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerController, put = __cordl_internal_set__multiplayerController)) ::UnityW<::GlobalNamespace::MultiplayerController> _multiplayerController;

  /// @brief Field _songController, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__songController, put = __cordl_internal_set__songController)) ::UnityW<::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController>
      _songController;

  /// @brief Field _spotManager, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__spotManager, put = __cordl_internal_set__spotManager)) ::GlobalNamespace::MultiplayerSpectatingSpotManager* _spotManager;

  /// @brief Field _transform, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__transform, put = __cordl_internal_set__transform)) ::UnityW<::UnityEngine::Transform> _transform;

  __declspec(property(get = get_currentSpot)) ::GlobalNamespace::IMultiplayerSpectatingSpot* currentSpot;

  /// @brief Field spectatingSpotDidChangeEvent, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_spectatingSpotDidChangeEvent,
                      put = __cordl_internal_set_spectatingSpotDidChangeEvent)) ::System::Action_1<::GlobalNamespace::IMultiplayerSpectatingSpot*>* spectatingSpotDidChangeEvent;

  /// @brief Method Awake, addr 0x3be1bec, size 0x1c, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method HandleStateChanged, addr 0x3be212c, size 0x2c, virtual false, abstract: false, final false
  inline void HandleStateChanged(::GlobalNamespace::MultiplayerController_State state);

  static inline ::GlobalNamespace::MultiplayerSpectatorController* New_ctor();

  /// @brief Method OnDestroy, addr 0x3be1c94, size 0xcc, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Start, addr 0x3be1c08, size 0x8c, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method SwitchToDefaultSpot, addr 0x3bdb54c, size 0x20, virtual false, abstract: false, final false
  inline void SwitchToDefaultSpot();

  /// @brief Method SwitchToDefaultSpotCoroutine, addr 0x3be1d60, size 0x60, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* SwitchToDefaultSpotCoroutine();

  /// @brief Method SwitchToDefaultSpotWithFadeCoroutine, addr 0x3be207c, size 0x60, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* SwitchToDefaultSpotWithFadeCoroutine();

  /// @brief Method SwitchToNext, addr 0x3be2040, size 0x3c, virtual false, abstract: false, final false
  inline void SwitchToNext();

  /// @brief Method SwitchToPrev, addr 0x3be1dc0, size 0x3c, virtual false, abstract: false, final false
  inline void SwitchToPrev();

  /// @brief Method SwitchToSpectatingSpot, addr 0x3be1dfc, size 0x244, virtual false, abstract: false, final false
  inline void SwitchToSpectatingSpot(::GlobalNamespace::IMultiplayerSpectatingSpot* spectatingSpot);

  constexpr ::GlobalNamespace::IMultiplayerSpectatingSpot* const& __cordl_internal_get__currentSpot() const;

  constexpr ::GlobalNamespace::IMultiplayerSpectatingSpot*& __cordl_internal_get__currentSpot();

  constexpr ::UnityW<::GlobalNamespace::FadeInOutController> const& __cordl_internal_get__fadeInOutController() const;

  constexpr ::UnityW<::GlobalNamespace::FadeInOutController>& __cordl_internal_get__fadeInOutController();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerController> const& __cordl_internal_get__multiplayerController() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerController>& __cordl_internal_get__multiplayerController();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController> const& __cordl_internal_get__songController() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController>& __cordl_internal_get__songController();

  constexpr ::GlobalNamespace::MultiplayerSpectatingSpotManager* const& __cordl_internal_get__spotManager() const;

  constexpr ::GlobalNamespace::MultiplayerSpectatingSpotManager*& __cordl_internal_get__spotManager();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__transform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__transform();

  constexpr ::System::Action_1<::GlobalNamespace::IMultiplayerSpectatingSpot*>* const& __cordl_internal_get_spectatingSpotDidChangeEvent() const;

  constexpr ::System::Action_1<::GlobalNamespace::IMultiplayerSpectatingSpot*>*& __cordl_internal_get_spectatingSpotDidChangeEvent();

  constexpr void __cordl_internal_set__currentSpot(::GlobalNamespace::IMultiplayerSpectatingSpot* value);

  constexpr void __cordl_internal_set__fadeInOutController(::UnityW<::GlobalNamespace::FadeInOutController> value);

  constexpr void __cordl_internal_set__multiplayerController(::UnityW<::GlobalNamespace::MultiplayerController> value);

  constexpr void __cordl_internal_set__songController(::UnityW<::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController> value);

  constexpr void __cordl_internal_set__spotManager(::GlobalNamespace::MultiplayerSpectatingSpotManager* value);

  constexpr void __cordl_internal_set__transform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_spectatingSpotDidChangeEvent(::System::Action_1<::GlobalNamespace::IMultiplayerSpectatingSpot*>* value);

  /// @brief Method .ctor, addr 0x3be2158, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_spectatingSpotDidChangeEvent, addr 0x3be1a84, size 0xb0, virtual false, abstract: false, final false
  inline void add_spectatingSpotDidChangeEvent(::System::Action_1<::GlobalNamespace::IMultiplayerSpectatingSpot*>* value);

  /// @brief Method get_currentSpot, addr 0x3be1be4, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::IMultiplayerSpectatingSpot* get_currentSpot();

  /// @brief Method remove_spectatingSpotDidChangeEvent, addr 0x3be1b34, size 0xb0, virtual false, abstract: false, final false
  inline void remove_spectatingSpotDidChangeEvent(::System::Action_1<::GlobalNamespace::IMultiplayerSpectatingSpot*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerSpectatorController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerSpectatorController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerSpectatorController(MultiplayerSpectatorController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerSpectatorController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerSpectatorController(MultiplayerSpectatorController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4625 };

  /// @brief Field _spotManager, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerSpectatingSpotManager* ____spotManager;

  /// @brief Field _songController, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController> ____songController;

  /// @brief Field _multiplayerController, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerController> ____multiplayerController;

  /// @brief Field _fadeInOutController, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::FadeInOutController> ____fadeInOutController;

  /// @brief Field spectatingSpotDidChangeEvent, offset: 0x40, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::IMultiplayerSpectatingSpot*>* ___spectatingSpotDidChangeEvent;

  /// @brief Field _transform, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____transform;

  /// @brief Field _currentSpot, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::IMultiplayerSpectatingSpot* ____currentSpot;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiplayerSpectatorController, ____spotManager) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerSpectatorController, ____songController) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerSpectatorController, ____multiplayerController) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerSpectatorController, ____fadeInOutController) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerSpectatorController, ___spectatingSpotDidChangeEvent) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerSpectatorController, ____transform) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerSpectatorController, ____currentSpot) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerSpectatorController, 0x58>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerSpectatorController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerSpectatorController*, "", "MultiplayerSpectatorController");
NEED_NO_BOX(::GlobalNamespace::MultiplayerSpectatorController__SwitchToDefaultSpotCoroutine_d__18);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerSpectatorController__SwitchToDefaultSpotCoroutine_d__18*, "", "MultiplayerSpectatorController/<SwitchToDefaultSpotCoroutine>d__18");
NEED_NO_BOX(::GlobalNamespace::MultiplayerSpectatorController__SwitchToDefaultSpotWithFadeCoroutine_d__17);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerSpectatorController__SwitchToDefaultSpotWithFadeCoroutine_d__17*, "",
                       "MultiplayerSpectatorController/<SwitchToDefaultSpotWithFadeCoroutine>d__17");

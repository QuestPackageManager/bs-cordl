#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerSpectatorController)
namespace GlobalNamespace {
class MultiplayerController;
}
namespace GlobalNamespace {
class __MultiplayerSpectatorController___SwitchToDefaultSpotCoroutine_d__18;
}
namespace GlobalNamespace {
class __MultiplayerSpectatorController___SwitchToDefaultSpotWithFadeCoroutine_d__17;
}
namespace GlobalNamespace {
class FadeInOutController;
}
namespace GlobalNamespace {
class MultiplayerSpectatingSpotManager;
}
namespace UnityEngine {
class Transform;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template <typename T> class Action_1;
}
namespace GlobalNamespace {
struct __MultiplayerController__State;
}
namespace GlobalNamespace {
class IMultiplayerSpectatingSpot;
}
namespace GlobalNamespace {
class MultiplayerLocalInactivePlayerSongSyncController;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerSpectatorController;
}
namespace GlobalNamespace {
class __MultiplayerSpectatorController___SwitchToDefaultSpotCoroutine_d__18;
}
namespace GlobalNamespace {
class __MultiplayerSpectatorController___SwitchToDefaultSpotWithFadeCoroutine_d__17;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerSpectatorController);
MARK_REF_PTR_T(::GlobalNamespace::__MultiplayerSpectatorController___SwitchToDefaultSpotCoroutine_d__18);
MARK_REF_PTR_T(::GlobalNamespace::__MultiplayerSpectatorController___SwitchToDefaultSpotWithFadeCoroutine_d__17);
// Type: ::<SwitchToDefaultSpotWithFadeCoroutine>d__17
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5358))
// CS Name: ::MultiplayerSpectatorController::<SwitchToDefaultSpotWithFadeCoroutine>d__17*
class CORDL_TYPE __MultiplayerSpectatorController___SwitchToDefaultSpotWithFadeCoroutine_d__17 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::MultiplayerSpectatorController* __4__this;

  /// @brief Field <defaultSpot>5__2, offset 0x28, size 0x8
  __declspec(property(get = __get__defaultSpot_5__2, put = __set__defaultSpot_5__2))::GlobalNamespace::IMultiplayerSpectatingSpot* _defaultSpot_5__2;

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

  constexpr ::GlobalNamespace::MultiplayerSpectatorController*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerSpectatorController*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::MultiplayerSpectatorController* value);

  constexpr ::GlobalNamespace::IMultiplayerSpectatingSpot*& __get__defaultSpot_5__2();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMultiplayerSpectatingSpot*> const& __get__defaultSpot_5__2() const;

  constexpr void __set__defaultSpot_5__2(::GlobalNamespace::IMultiplayerSpectatingSpot* value);

  static inline ::GlobalNamespace::__MultiplayerSpectatorController___SwitchToDefaultSpotWithFadeCoroutine_d__17* New_ctor(int32_t __1__state);

  /// @brief Method .ctor addr 0x211abac size 0x28 virtual false final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose addr 0x211ac30 size 0x4 virtual true final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext addr 0x211ac34 size 0xf0 virtual true final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x211ad24 size 0x8 virtual true final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset addr 0x211ad2c size 0x40 virtual true final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current addr 0x211ad6c size 0x8 virtual true final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__MultiplayerSpectatorController___SwitchToDefaultSpotWithFadeCoroutine_d__17", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MultiplayerSpectatorController___SwitchToDefaultSpotWithFadeCoroutine_d__17(__MultiplayerSpectatorController___SwitchToDefaultSpotWithFadeCoroutine_d__17&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MultiplayerSpectatorController___SwitchToDefaultSpotWithFadeCoroutine_d__17", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MultiplayerSpectatorController___SwitchToDefaultSpotWithFadeCoroutine_d__17(__MultiplayerSpectatorController___SwitchToDefaultSpotWithFadeCoroutine_d__17 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MultiplayerSpectatorController___SwitchToDefaultSpotWithFadeCoroutine_d__17();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerSpectatorController* _____4__this;

  /// @brief Field <defaultSpot>5__2, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::IMultiplayerSpectatingSpot* ____defaultSpot_5__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MultiplayerSpectatorController___SwitchToDefaultSpotWithFadeCoroutine_d__17, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MultiplayerSpectatorController___SwitchToDefaultSpotWithFadeCoroutine_d__17, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MultiplayerSpectatorController___SwitchToDefaultSpotWithFadeCoroutine_d__17, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MultiplayerSpectatorController___SwitchToDefaultSpotWithFadeCoroutine_d__17, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MultiplayerSpectatorController___SwitchToDefaultSpotWithFadeCoroutine_d__17, ____defaultSpot_5__2) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<SwitchToDefaultSpotCoroutine>d__18
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5359))
// CS Name: ::MultiplayerSpectatorController::<SwitchToDefaultSpotCoroutine>d__18*
class CORDL_TYPE __MultiplayerSpectatorController___SwitchToDefaultSpotCoroutine_d__18 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::MultiplayerSpectatorController* __4__this;

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

  constexpr ::GlobalNamespace::MultiplayerSpectatorController*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerSpectatorController*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::MultiplayerSpectatorController* value);

  static inline ::GlobalNamespace::__MultiplayerSpectatorController___SwitchToDefaultSpotCoroutine_d__18* New_ctor(int32_t __1__state);

  /// @brief Method .ctor addr 0x211abd4 size 0x28 virtual false final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose addr 0x211ad74 size 0x4 virtual true final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext addr 0x211ad78 size 0x60 virtual true final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x211add8 size 0x8 virtual true final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset addr 0x211ade0 size 0x40 virtual true final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current addr 0x211ae20 size 0x8 virtual true final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__MultiplayerSpectatorController___SwitchToDefaultSpotCoroutine_d__18", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MultiplayerSpectatorController___SwitchToDefaultSpotCoroutine_d__18(__MultiplayerSpectatorController___SwitchToDefaultSpotCoroutine_d__18&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MultiplayerSpectatorController___SwitchToDefaultSpotCoroutine_d__18", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MultiplayerSpectatorController___SwitchToDefaultSpotCoroutine_d__18(__MultiplayerSpectatorController___SwitchToDefaultSpotCoroutine_d__18 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MultiplayerSpectatorController___SwitchToDefaultSpotCoroutine_d__18();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerSpectatorController* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MultiplayerSpectatorController___SwitchToDefaultSpotCoroutine_d__18, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MultiplayerSpectatorController___SwitchToDefaultSpotCoroutine_d__18, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MultiplayerSpectatorController___SwitchToDefaultSpotCoroutine_d__18, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MultiplayerSpectatorController___SwitchToDefaultSpotCoroutine_d__18, _____4__this) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::MultiplayerSpectatorController
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5360))
// CS Name: ::MultiplayerSpectatorController*
class CORDL_TYPE MultiplayerSpectatorController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _SwitchToDefaultSpotCoroutine_d__18 = ::GlobalNamespace::__MultiplayerSpectatorController___SwitchToDefaultSpotCoroutine_d__18;

  using _SwitchToDefaultSpotWithFadeCoroutine_d__17 = ::GlobalNamespace::__MultiplayerSpectatorController___SwitchToDefaultSpotWithFadeCoroutine_d__17;

  /// @brief Field _spotManager, offset 0x18, size 0x8
  __declspec(property(get = __get__spotManager, put = __set__spotManager))::GlobalNamespace::MultiplayerSpectatingSpotManager* _spotManager;

  /// @brief Field _songController, offset 0x20, size 0x8
  __declspec(property(get = __get__songController, put = __set__songController))::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController* _songController;

  /// @brief Field _multiplayerController, offset 0x28, size 0x8
  __declspec(property(get = __get__multiplayerController, put = __set__multiplayerController))::GlobalNamespace::MultiplayerController* _multiplayerController;

  /// @brief Field _fadeInOutController, offset 0x30, size 0x8
  __declspec(property(get = __get__fadeInOutController, put = __set__fadeInOutController))::GlobalNamespace::FadeInOutController* _fadeInOutController;

  /// @brief Field spectatingSpotDidChangeEvent, offset 0x38, size 0x8
  __declspec(property(get = __get_spectatingSpotDidChangeEvent,
                      put = __set_spectatingSpotDidChangeEvent))::System::Action_1<::GlobalNamespace::IMultiplayerSpectatingSpot*>* spectatingSpotDidChangeEvent;

  /// @brief Field _transform, offset 0x40, size 0x8
  __declspec(property(get = __get__transform, put = __set__transform))::UnityEngine::Transform* _transform;

  /// @brief Field _currentSpot, offset 0x48, size 0x8
  __declspec(property(get = __get__currentSpot, put = __set__currentSpot))::GlobalNamespace::IMultiplayerSpectatingSpot* _currentSpot;

  __declspec(property(get = get_currentSpot))::GlobalNamespace::IMultiplayerSpectatingSpot* currentSpot;

  constexpr ::GlobalNamespace::MultiplayerSpectatingSpotManager*& __get__spotManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerSpectatingSpotManager*> const& __get__spotManager() const;

  constexpr void __set__spotManager(::GlobalNamespace::MultiplayerSpectatingSpotManager* value);

  constexpr ::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*& __get__songController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*> const& __get__songController() const;

  constexpr void __set__songController(::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController* value);

  constexpr ::GlobalNamespace::MultiplayerController*& __get__multiplayerController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerController*> const& __get__multiplayerController() const;

  constexpr void __set__multiplayerController(::GlobalNamespace::MultiplayerController* value);

  constexpr ::GlobalNamespace::FadeInOutController*& __get__fadeInOutController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FadeInOutController*> const& __get__fadeInOutController() const;

  constexpr void __set__fadeInOutController(::GlobalNamespace::FadeInOutController* value);

  constexpr ::System::Action_1<::GlobalNamespace::IMultiplayerSpectatingSpot*>*& __get_spectatingSpotDidChangeEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::IMultiplayerSpectatingSpot*>*> const& __get_spectatingSpotDidChangeEvent() const;

  constexpr void __set_spectatingSpotDidChangeEvent(::System::Action_1<::GlobalNamespace::IMultiplayerSpectatingSpot*>* value);

  constexpr ::UnityEngine::Transform*& __get__transform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__transform() const;

  constexpr void __set__transform(::UnityEngine::Transform* value);

  constexpr ::GlobalNamespace::IMultiplayerSpectatingSpot*& __get__currentSpot();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMultiplayerSpectatingSpot*> const& __get__currentSpot() const;

  constexpr void __set__currentSpot(::GlobalNamespace::IMultiplayerSpectatingSpot* value);

  /// @brief Method add_spectatingSpotDidChangeEvent addr 0x211a51c size 0xb0 virtual false final false
  inline void add_spectatingSpotDidChangeEvent(::System::Action_1<::GlobalNamespace::IMultiplayerSpectatingSpot*>* value);

  /// @brief Method remove_spectatingSpotDidChangeEvent addr 0x211a5cc size 0xb0 virtual false final false
  inline void remove_spectatingSpotDidChangeEvent(::System::Action_1<::GlobalNamespace::IMultiplayerSpectatingSpot*>* value);

  /// @brief Method get_currentSpot addr 0x211a67c size 0x8 virtual false final false
  inline ::GlobalNamespace::IMultiplayerSpectatingSpot* get_currentSpot();

  /// @brief Method Awake addr 0x211a684 size 0x1c virtual false final false
  inline void Awake();

  /// @brief Method Start addr 0x211a6a0 size 0x8c virtual false final false
  inline void Start();

  /// @brief Method OnDestroy addr 0x211a72c size 0xd4 virtual false final false
  inline void OnDestroy();

  /// @brief Method SwitchToDefaultSpot addr 0x211a800 size 0x20 virtual false final false
  inline void SwitchToDefaultSpot();

  /// @brief Method SwitchToPrev addr 0x211a888 size 0x3c virtual false final false
  inline void SwitchToPrev();

  /// @brief Method SwitchToNext addr 0x211ab08 size 0x3c virtual false final false
  inline void SwitchToNext();

  /// @brief Method SwitchToDefaultSpotWithFadeCoroutine addr 0x211ab44 size 0x68 virtual false final false
  inline ::System::Collections::IEnumerator* SwitchToDefaultSpotWithFadeCoroutine();

  /// @brief Method SwitchToDefaultSpotCoroutine addr 0x211a820 size 0x68 virtual false final false
  inline ::System::Collections::IEnumerator* SwitchToDefaultSpotCoroutine();

  /// @brief Method SwitchToSpectatingSpot addr 0x211a8c4 size 0x244 virtual false final false
  inline void SwitchToSpectatingSpot(::GlobalNamespace::IMultiplayerSpectatingSpot* spectatingSpot);

  /// @brief Method HandleStateChanged addr 0x211abfc size 0x2c virtual false final false
  inline void HandleStateChanged(::GlobalNamespace::__MultiplayerController__State state);

  static inline ::GlobalNamespace::MultiplayerSpectatorController* New_ctor();

  /// @brief Method .ctor addr 0x211ac28 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerSpectatorController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerSpectatorController(MultiplayerSpectatorController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerSpectatorController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerSpectatorController(MultiplayerSpectatorController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerSpectatorController();

public:
  /// @brief Field _spotManager, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerSpectatingSpotManager* ____spotManager;

  /// @brief Field _songController, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController* ____songController;

  /// @brief Field _multiplayerController, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerController* ____multiplayerController;

  /// @brief Field _fadeInOutController, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::FadeInOutController* ____fadeInOutController;

  /// @brief Field spectatingSpotDidChangeEvent, offset: 0x38, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::IMultiplayerSpectatingSpot*>* ___spectatingSpotDidChangeEvent;

  /// @brief Field _transform, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::Transform* ____transform;

  /// @brief Field _currentSpot, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::IMultiplayerSpectatingSpot* ____currentSpot;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerSpectatorController, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerSpectatorController, ____spotManager) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerSpectatorController, ____songController) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerSpectatorController, ____multiplayerController) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerSpectatorController, ____fadeInOutController) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerSpectatorController, ___spectatingSpotDidChangeEvent) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerSpectatorController, ____transform) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerSpectatorController, ____currentSpot) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerSpectatorController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerSpectatorController*, "", "MultiplayerSpectatorController");
NEED_NO_BOX(::GlobalNamespace::__MultiplayerSpectatorController___SwitchToDefaultSpotCoroutine_d__18);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MultiplayerSpectatorController___SwitchToDefaultSpotCoroutine_d__18*, "", "MultiplayerSpectatorController/<SwitchToDefaultSpotCoroutine>d__18");
NEED_NO_BOX(::GlobalNamespace::__MultiplayerSpectatorController___SwitchToDefaultSpotWithFadeCoroutine_d__17);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MultiplayerSpectatorController___SwitchToDefaultSpotWithFadeCoroutine_d__17*, "",
                       "MultiplayerSpectatorController/<SwitchToDefaultSpotWithFadeCoroutine>d__17");

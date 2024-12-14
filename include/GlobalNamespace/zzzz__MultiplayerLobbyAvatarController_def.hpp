#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerLobbyAvatarController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "Zenject/zzzz__PlaceholderFactory_2_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerLobbyAvatarController)
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
class MultiplayerLobbyAvatarController_Factory;
}
namespace GlobalNamespace {
class MultiplayerLobbyAvatarController__DespawnAnimationCoroutine_d__12;
}
namespace GlobalNamespace {
class MultiplayerLobbyAvatarController__ShowDespawnAnimationAndDestroy_d__10;
}
namespace GlobalNamespace {
class MultiplayerLobbyAvatarController__SpawnAnimationCoroutine_d__8;
}
namespace GlobalNamespace {
class VFXController;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
namespace UnityEngine::Playables {
class PlayableDirector;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerLobbyAvatarController;
}
namespace GlobalNamespace {
class MultiplayerLobbyAvatarController_Factory;
}
namespace GlobalNamespace {
class MultiplayerLobbyAvatarController__DespawnAnimationCoroutine_d__12;
}
namespace GlobalNamespace {
class MultiplayerLobbyAvatarController__ShowDespawnAnimationAndDestroy_d__10;
}
namespace GlobalNamespace {
class MultiplayerLobbyAvatarController__SpawnAnimationCoroutine_d__8;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerLobbyAvatarController);
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerLobbyAvatarController_Factory);
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerLobbyAvatarController__DespawnAnimationCoroutine_d__12);
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerLobbyAvatarController__ShowDespawnAnimationAndDestroy_d__10);
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerLobbyAvatarController__SpawnAnimationCoroutine_d__8);
// Dependencies Zenject.PlaceholderFactory`2<TParam1, TValue>
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplayerLobbyAvatarController/Factory
class CORDL_TYPE MultiplayerLobbyAvatarController_Factory
    : public ::Zenject::PlaceholderFactory_2<::GlobalNamespace::IConnectedPlayer*, ::UnityW<::GlobalNamespace::MultiplayerLobbyAvatarController>> {
public:
  // Declarations
  static inline ::GlobalNamespace::MultiplayerLobbyAvatarController_Factory* New_ctor();

  /// @brief Method .ctor, addr 0x3bd3e34, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerLobbyAvatarController_Factory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLobbyAvatarController_Factory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerLobbyAvatarController_Factory(MultiplayerLobbyAvatarController_Factory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLobbyAvatarController_Factory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerLobbyAvatarController_Factory(MultiplayerLobbyAvatarController_Factory const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4576 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerLobbyAvatarController_Factory, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplayerLobbyAvatarController/<DespawnAnimationCoroutine>d__12
class CORDL_TYPE MultiplayerLobbyAvatarController__DespawnAnimationCoroutine_d__12 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::MultiplayerLobbyAvatarController> __4__this;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x3bd3e80, size 0x108, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::MultiplayerLobbyAvatarController__DespawnAnimationCoroutine_d__12* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x3bd3f88, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x3bd3f90, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x3bd3fc8, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x3bd3e7c, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerLobbyAvatarController> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerLobbyAvatarController>& __cordl_internal_get___4__this();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MultiplayerLobbyAvatarController> value);

  /// @brief Method .ctor, addr 0x3bd3dec, size 0x28, virtual false, abstract: false, final false
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
  constexpr MultiplayerLobbyAvatarController__DespawnAnimationCoroutine_d__12();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLobbyAvatarController__DespawnAnimationCoroutine_d__12", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerLobbyAvatarController__DespawnAnimationCoroutine_d__12(MultiplayerLobbyAvatarController__DespawnAnimationCoroutine_d__12&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLobbyAvatarController__DespawnAnimationCoroutine_d__12", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerLobbyAvatarController__DespawnAnimationCoroutine_d__12(MultiplayerLobbyAvatarController__DespawnAnimationCoroutine_d__12 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4577 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerLobbyAvatarController> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiplayerLobbyAvatarController__DespawnAnimationCoroutine_d__12, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLobbyAvatarController__DespawnAnimationCoroutine_d__12, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLobbyAvatarController__DespawnAnimationCoroutine_d__12, _____4__this) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerLobbyAvatarController__DespawnAnimationCoroutine_d__12, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplayerLobbyAvatarController/<ShowDespawnAnimationAndDestroy>d__10
class CORDL_TYPE MultiplayerLobbyAvatarController__ShowDespawnAnimationAndDestroy_d__10 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::MultiplayerLobbyAvatarController> __4__this;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x3bd3fd4, size 0x70, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::MultiplayerLobbyAvatarController__ShowDespawnAnimationAndDestroy_d__10* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x3bd4044, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x3bd404c, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x3bd4084, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x3bd3fd0, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerLobbyAvatarController> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerLobbyAvatarController>& __cordl_internal_get___4__this();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MultiplayerLobbyAvatarController> value);

  /// @brief Method .ctor, addr 0x3bd3cf8, size 0x28, virtual false, abstract: false, final false
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
  constexpr MultiplayerLobbyAvatarController__ShowDespawnAnimationAndDestroy_d__10();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLobbyAvatarController__ShowDespawnAnimationAndDestroy_d__10", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerLobbyAvatarController__ShowDespawnAnimationAndDestroy_d__10(MultiplayerLobbyAvatarController__ShowDespawnAnimationAndDestroy_d__10&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLobbyAvatarController__ShowDespawnAnimationAndDestroy_d__10", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerLobbyAvatarController__ShowDespawnAnimationAndDestroy_d__10(MultiplayerLobbyAvatarController__ShowDespawnAnimationAndDestroy_d__10 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4578 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerLobbyAvatarController> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiplayerLobbyAvatarController__ShowDespawnAnimationAndDestroy_d__10, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLobbyAvatarController__ShowDespawnAnimationAndDestroy_d__10, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLobbyAvatarController__ShowDespawnAnimationAndDestroy_d__10, _____4__this) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerLobbyAvatarController__ShowDespawnAnimationAndDestroy_d__10, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplayerLobbyAvatarController/<SpawnAnimationCoroutine>d__8
class CORDL_TYPE MultiplayerLobbyAvatarController__SpawnAnimationCoroutine_d__8 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::MultiplayerLobbyAvatarController> __4__this;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x3bd4090, size 0xb0, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::MultiplayerLobbyAvatarController__SpawnAnimationCoroutine_d__8* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x3bd4140, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x3bd4148, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x3bd4180, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x3bd408c, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerLobbyAvatarController> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerLobbyAvatarController>& __cordl_internal_get___4__this();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MultiplayerLobbyAvatarController> value);

  /// @brief Method .ctor, addr 0x3bd3c70, size 0x28, virtual false, abstract: false, final false
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
  constexpr MultiplayerLobbyAvatarController__SpawnAnimationCoroutine_d__8();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLobbyAvatarController__SpawnAnimationCoroutine_d__8", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerLobbyAvatarController__SpawnAnimationCoroutine_d__8(MultiplayerLobbyAvatarController__SpawnAnimationCoroutine_d__8&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLobbyAvatarController__SpawnAnimationCoroutine_d__8", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerLobbyAvatarController__SpawnAnimationCoroutine_d__8(MultiplayerLobbyAvatarController__SpawnAnimationCoroutine_d__8 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4579 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerLobbyAvatarController> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiplayerLobbyAvatarController__SpawnAnimationCoroutine_d__8, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLobbyAvatarController__SpawnAnimationCoroutine_d__8, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLobbyAvatarController__SpawnAnimationCoroutine_d__8, _____4__this) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerLobbyAvatarController__SpawnAnimationCoroutine_d__8, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplayerLobbyAvatarController
class CORDL_TYPE MultiplayerLobbyAvatarController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using Factory = ::GlobalNamespace::MultiplayerLobbyAvatarController_Factory;

  using _DespawnAnimationCoroutine_d__12 = ::GlobalNamespace::MultiplayerLobbyAvatarController__DespawnAnimationCoroutine_d__12;

  using _ShowDespawnAnimationAndDestroy_d__10 = ::GlobalNamespace::MultiplayerLobbyAvatarController__ShowDespawnAnimationAndDestroy_d__10;

  using _SpawnAnimationCoroutine_d__8 = ::GlobalNamespace::MultiplayerLobbyAvatarController__SpawnAnimationCoroutine_d__8;

  /// @brief Field _despawnAvatarDelay, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__despawnAvatarDelay, put = __cordl_internal_set__despawnAvatarDelay)) float_t _despawnAvatarDelay;

  /// @brief Field _despawnVFXController, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__despawnVFXController, put = __cordl_internal_set__despawnVFXController)) ::UnityW<::GlobalNamespace::VFXController> _despawnVFXController;

  /// @brief Field _destroyAvatarDelay, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__destroyAvatarDelay, put = __cordl_internal_set__destroyAvatarDelay)) float_t _destroyAvatarDelay;

  /// @brief Field _spawnAvatarDelay, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__spawnAvatarDelay, put = __cordl_internal_set__spawnAvatarDelay)) float_t _spawnAvatarDelay;

  /// @brief Field _spawnEffect, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__spawnEffect, put = __cordl_internal_set__spawnEffect)) ::UnityW<::UnityEngine::Playables::PlayableDirector> _spawnEffect;

  /// @brief Field _visualObjects, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__visualObjects,
                      put = __cordl_internal_set__visualObjects)) ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*>
      _visualObjects;

  /// @brief Method ActivateVisualObjects, addr 0x3bd3ba8, size 0x68, virtual false, abstract: false, final false
  inline void ActivateVisualObjects(bool on);

  /// @brief Method DespawnAnimationCoroutine, addr 0x3bd3d8c, size 0x60, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* DespawnAnimationCoroutine();

  /// @brief Method DestroySelf, addr 0x3bd3d20, size 0x6c, virtual false, abstract: false, final false
  inline void DestroySelf();

  static inline ::GlobalNamespace::MultiplayerLobbyAvatarController* New_ctor();

  /// @brief Method ShowDespawnAnimationAndDestroy, addr 0x3bd3c98, size 0x60, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* ShowDespawnAnimationAndDestroy();

  /// @brief Method ShowSpawnAnimation, addr 0x3bd3af8, size 0xb0, virtual false, abstract: false, final false
  inline void ShowSpawnAnimation(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation);

  /// @brief Method SpawnAnimationCoroutine, addr 0x3bd3c10, size 0x60, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* SpawnAnimationCoroutine();

  constexpr float_t const& __cordl_internal_get__despawnAvatarDelay() const;

  constexpr float_t& __cordl_internal_get__despawnAvatarDelay();

  constexpr ::UnityW<::GlobalNamespace::VFXController> const& __cordl_internal_get__despawnVFXController() const;

  constexpr ::UnityW<::GlobalNamespace::VFXController>& __cordl_internal_get__despawnVFXController();

  constexpr float_t const& __cordl_internal_get__destroyAvatarDelay() const;

  constexpr float_t& __cordl_internal_get__destroyAvatarDelay();

  constexpr float_t const& __cordl_internal_get__spawnAvatarDelay() const;

  constexpr float_t& __cordl_internal_get__spawnAvatarDelay();

  constexpr ::UnityW<::UnityEngine::Playables::PlayableDirector> const& __cordl_internal_get__spawnEffect() const;

  constexpr ::UnityW<::UnityEngine::Playables::PlayableDirector>& __cordl_internal_get__spawnEffect();

  constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> const& __cordl_internal_get__visualObjects() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*>& __cordl_internal_get__visualObjects();

  constexpr void __cordl_internal_set__despawnAvatarDelay(float_t value);

  constexpr void __cordl_internal_set__despawnVFXController(::UnityW<::GlobalNamespace::VFXController> value);

  constexpr void __cordl_internal_set__destroyAvatarDelay(float_t value);

  constexpr void __cordl_internal_set__spawnAvatarDelay(float_t value);

  constexpr void __cordl_internal_set__spawnEffect(::UnityW<::UnityEngine::Playables::PlayableDirector> value);

  constexpr void __cordl_internal_set__visualObjects(::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> value);

  /// @brief Method .ctor, addr 0x3bd3e14, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerLobbyAvatarController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLobbyAvatarController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerLobbyAvatarController(MultiplayerLobbyAvatarController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLobbyAvatarController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerLobbyAvatarController(MultiplayerLobbyAvatarController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4580 };

  /// @brief Field _spawnEffect, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Playables::PlayableDirector> ____spawnEffect;

  /// @brief Field _despawnVFXController, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::VFXController> ____despawnVFXController;

  /// @brief Field _spawnAvatarDelay, offset: 0x30, size: 0x4, def value: None
  float_t ____spawnAvatarDelay;

  /// @brief Field _despawnAvatarDelay, offset: 0x34, size: 0x4, def value: None
  float_t ____despawnAvatarDelay;

  /// @brief Field _destroyAvatarDelay, offset: 0x38, size: 0x4, def value: None
  float_t ____destroyAvatarDelay;

  /// @brief Field _visualObjects, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> ____visualObjects;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiplayerLobbyAvatarController, ____spawnEffect) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLobbyAvatarController, ____despawnVFXController) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLobbyAvatarController, ____spawnAvatarDelay) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLobbyAvatarController, ____despawnAvatarDelay) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLobbyAvatarController, ____destroyAvatarDelay) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLobbyAvatarController, ____visualObjects) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerLobbyAvatarController, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerLobbyAvatarController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLobbyAvatarController*, "", "MultiplayerLobbyAvatarController");
NEED_NO_BOX(::GlobalNamespace::MultiplayerLobbyAvatarController_Factory);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLobbyAvatarController_Factory*, "", "MultiplayerLobbyAvatarController/Factory");
NEED_NO_BOX(::GlobalNamespace::MultiplayerLobbyAvatarController__DespawnAnimationCoroutine_d__12);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLobbyAvatarController__DespawnAnimationCoroutine_d__12*, "", "MultiplayerLobbyAvatarController/<DespawnAnimationCoroutine>d__12");
NEED_NO_BOX(::GlobalNamespace::MultiplayerLobbyAvatarController__ShowDespawnAnimationAndDestroy_d__10);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLobbyAvatarController__ShowDespawnAnimationAndDestroy_d__10*, "", "MultiplayerLobbyAvatarController/<ShowDespawnAnimationAndDestroy>d__10");
NEED_NO_BOX(::GlobalNamespace::MultiplayerLobbyAvatarController__SpawnAnimationCoroutine_d__8);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLobbyAvatarController__SpawnAnimationCoroutine_d__8*, "", "MultiplayerLobbyAvatarController/<SpawnAnimationCoroutine>d__8");

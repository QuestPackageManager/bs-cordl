#pragma once
// IWYU pragma private; include "GlobalNamespace/TrailerGameplayManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TrailerGameplayManager)
namespace GlobalNamespace {
class GameScenesManager;
}
namespace GlobalNamespace {
class GameSongController;
}
namespace GlobalNamespace {
class MainCamera;
}
namespace GlobalNamespace {
class TrailerGameplayManager__Start_d__4;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class TrailerGameplayManager;
}
namespace GlobalNamespace {
class TrailerGameplayManager__Start_d__4;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TrailerGameplayManager);
MARK_REF_PTR_T(::GlobalNamespace::TrailerGameplayManager__Start_d__4);
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: TrailerGameplayManager/<Start>d__4
class CORDL_TYPE TrailerGameplayManager__Start_d__4 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::TrailerGameplayManager> __4__this;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x3bb3a5c, size 0xec, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::TrailerGameplayManager__Start_d__4* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x3bb3b48, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x3bb3b50, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x3bb3b88, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x3bb3a58, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::UnityW<::GlobalNamespace::TrailerGameplayManager> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::TrailerGameplayManager>& __cordl_internal_get___4__this();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::TrailerGameplayManager> value);

  /// @brief Method .ctor, addr 0x3bb3a28, size 0x28, virtual false, abstract: false, final false
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
  constexpr TrailerGameplayManager__Start_d__4();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TrailerGameplayManager__Start_d__4", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TrailerGameplayManager__Start_d__4(TrailerGameplayManager__Start_d__4&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TrailerGameplayManager__Start_d__4", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TrailerGameplayManager__Start_d__4(TrailerGameplayManager__Start_d__4 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4404 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::TrailerGameplayManager> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TrailerGameplayManager__Start_d__4, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrailerGameplayManager__Start_d__4, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrailerGameplayManager__Start_d__4, _____4__this) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TrailerGameplayManager__Start_d__4, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: TrailerGameplayManager
class CORDL_TYPE TrailerGameplayManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _Start_d__4 = ::GlobalNamespace::TrailerGameplayManager__Start_d__4;

  /// @brief Field _disableMainCamera, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__disableMainCamera, put = __cordl_internal_set__disableMainCamera)) bool _disableMainCamera;

  /// @brief Field _gameScenesManager, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__gameScenesManager, put = __cordl_internal_set__gameScenesManager)) ::UnityW<::GlobalNamespace::GameScenesManager> _gameScenesManager;

  /// @brief Field _gameSongController, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__gameSongController, put = __cordl_internal_set__gameSongController)) ::UnityW<::GlobalNamespace::GameSongController> _gameSongController;

  /// @brief Field _mainCamera, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__mainCamera, put = __cordl_internal_set__mainCamera)) ::UnityW<::GlobalNamespace::MainCamera> _mainCamera;

  static inline ::GlobalNamespace::TrailerGameplayManager* New_ctor();

  /// @brief Method Start, addr 0x3bb39c8, size 0x60, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* Start();

  constexpr bool const& __cordl_internal_get__disableMainCamera() const;

  constexpr bool& __cordl_internal_get__disableMainCamera();

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager> const& __cordl_internal_get__gameScenesManager() const;

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager>& __cordl_internal_get__gameScenesManager();

  constexpr ::UnityW<::GlobalNamespace::GameSongController> const& __cordl_internal_get__gameSongController() const;

  constexpr ::UnityW<::GlobalNamespace::GameSongController>& __cordl_internal_get__gameSongController();

  constexpr ::UnityW<::GlobalNamespace::MainCamera> const& __cordl_internal_get__mainCamera() const;

  constexpr ::UnityW<::GlobalNamespace::MainCamera>& __cordl_internal_get__mainCamera();

  constexpr void __cordl_internal_set__disableMainCamera(bool value);

  constexpr void __cordl_internal_set__gameScenesManager(::UnityW<::GlobalNamespace::GameScenesManager> value);

  constexpr void __cordl_internal_set__gameSongController(::UnityW<::GlobalNamespace::GameSongController> value);

  constexpr void __cordl_internal_set__mainCamera(::UnityW<::GlobalNamespace::MainCamera> value);

  /// @brief Method .ctor, addr 0x3bb3a50, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TrailerGameplayManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TrailerGameplayManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TrailerGameplayManager(TrailerGameplayManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TrailerGameplayManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TrailerGameplayManager(TrailerGameplayManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4405 };

  /// @brief Field _disableMainCamera, offset: 0x20, size: 0x1, def value: None
  bool ____disableMainCamera;

  /// @brief Field _gameScenesManager, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameScenesManager> ____gameScenesManager;

  /// @brief Field _gameSongController, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameSongController> ____gameSongController;

  /// @brief Field _mainCamera, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MainCamera> ____mainCamera;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TrailerGameplayManager, ____disableMainCamera) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrailerGameplayManager, ____gameScenesManager) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrailerGameplayManager, ____gameSongController) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrailerGameplayManager, ____mainCamera) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TrailerGameplayManager, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TrailerGameplayManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TrailerGameplayManager*, "", "TrailerGameplayManager");
NEED_NO_BOX(::GlobalNamespace::TrailerGameplayManager__Start_d__4);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TrailerGameplayManager__Start_d__4*, "", "TrailerGameplayManager/<Start>d__4");

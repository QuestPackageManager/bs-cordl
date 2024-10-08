#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerLocalActiveLevelFailController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerLocalActiveLevelFailController)
namespace GlobalNamespace {
class BeatmapObjectManager;
}
namespace GlobalNamespace {
class BeatmapObjectSpawnController;
}
namespace GlobalNamespace {
class GameSongController;
}
namespace GlobalNamespace {
class IMultiplayerLevelEndActionsPublisher;
}
namespace GlobalNamespace {
class LevelFailedTextEffect;
}
namespace GlobalNamespace {
class MultiplayerLevelCompletionResults;
}
namespace GlobalNamespace {
class MultiplayerPlayersManager;
}
namespace GlobalNamespace {
class __MultiplayerLocalActiveLevelFailController___PlayerFailedCoroutine_d__8;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerLocalActiveLevelFailController;
}
namespace GlobalNamespace {
class __MultiplayerLocalActiveLevelFailController___PlayerFailedCoroutine_d__8;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerLocalActiveLevelFailController);
MARK_REF_PTR_T(::GlobalNamespace::__MultiplayerLocalActiveLevelFailController___PlayerFailedCoroutine_d__8);
// Type: ::<PlayerFailedCoroutine>d__8
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MultiplayerLocalActiveLevelFailController::<PlayerFailedCoroutine>d__8*
class CORDL_TYPE __MultiplayerLocalActiveLevelFailController___PlayerFailedCoroutine_d__8 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::MultiplayerLocalActiveLevelFailController> __4__this;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x3b47d4c, size 0xec, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__MultiplayerLocalActiveLevelFailController___PlayerFailedCoroutine_d__8* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x3b47e38, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x3b47e40, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x3b47e78, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x3b47d48, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerLocalActiveLevelFailController> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerLocalActiveLevelFailController>& __cordl_internal_get___4__this();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MultiplayerLocalActiveLevelFailController> value);

  /// @brief Method .ctor, addr 0x3b47cd4, size 0x28, virtual false, abstract: false, final false
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
  constexpr __MultiplayerLocalActiveLevelFailController___PlayerFailedCoroutine_d__8();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MultiplayerLocalActiveLevelFailController___PlayerFailedCoroutine_d__8", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MultiplayerLocalActiveLevelFailController___PlayerFailedCoroutine_d__8(__MultiplayerLocalActiveLevelFailController___PlayerFailedCoroutine_d__8&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MultiplayerLocalActiveLevelFailController___PlayerFailedCoroutine_d__8", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MultiplayerLocalActiveLevelFailController___PlayerFailedCoroutine_d__8(__MultiplayerLocalActiveLevelFailController___PlayerFailedCoroutine_d__8 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerLocalActiveLevelFailController> _____4__this;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4495 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MultiplayerLocalActiveLevelFailController___PlayerFailedCoroutine_d__8, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MultiplayerLocalActiveLevelFailController___PlayerFailedCoroutine_d__8, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MultiplayerLocalActiveLevelFailController___PlayerFailedCoroutine_d__8, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MultiplayerLocalActiveLevelFailController___PlayerFailedCoroutine_d__8, _____4__this) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::MultiplayerLocalActiveLevelFailController
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MultiplayerLocalActiveLevelFailController*
class CORDL_TYPE MultiplayerLocalActiveLevelFailController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _PlayerFailedCoroutine_d__8 = ::GlobalNamespace::__MultiplayerLocalActiveLevelFailController___PlayerFailedCoroutine_d__8;

  /// @brief Field _beatmapObjectManager, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapObjectManager, put = __cordl_internal_set__beatmapObjectManager)) ::GlobalNamespace::BeatmapObjectManager* _beatmapObjectManager;

  /// @brief Field _beatmapObjectSpawnController, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapObjectSpawnController, put = __cordl_internal_set__beatmapObjectSpawnController)) ::UnityW<::GlobalNamespace::BeatmapObjectSpawnController>
      _beatmapObjectSpawnController;

  /// @brief Field _gameSongController, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__gameSongController, put = __cordl_internal_set__gameSongController)) ::UnityW<::GlobalNamespace::GameSongController> _gameSongController;

  /// @brief Field _levelEndActionsPublisher, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__levelEndActionsPublisher,
                      put = __cordl_internal_set__levelEndActionsPublisher)) ::GlobalNamespace::IMultiplayerLevelEndActionsPublisher* _levelEndActionsPublisher;

  /// @brief Field _levelFailedTextEffect, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__levelFailedTextEffect, put = __cordl_internal_set__levelFailedTextEffect)) ::UnityW<::GlobalNamespace::LevelFailedTextEffect> _levelFailedTextEffect;

  /// @brief Field _multiplayerPlayersManager, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerPlayersManager, put = __cordl_internal_set__multiplayerPlayersManager)) ::UnityW<::GlobalNamespace::MultiplayerPlayersManager>
      _multiplayerPlayersManager;

  /// @brief Method HandlePlayerDidFinish, addr 0x3b47cfc, size 0x44, virtual false, abstract: false, final false
  inline void HandlePlayerDidFinish(::GlobalNamespace::MultiplayerLevelCompletionResults* levelCompletionResults);

  static inline ::GlobalNamespace::MultiplayerLocalActiveLevelFailController* New_ctor();

  /// @brief Method OnDestroy, addr 0x3b47b74, size 0x100, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method PlayerFailedCoroutine, addr 0x3b47c74, size 0x60, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* PlayerFailedCoroutine();

  /// @brief Method Start, addr 0x3b47a84, size 0xf0, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::GlobalNamespace::BeatmapObjectManager*& __cordl_internal_get__beatmapObjectManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapObjectManager*> const& __cordl_internal_get__beatmapObjectManager() const;

  constexpr ::UnityW<::GlobalNamespace::BeatmapObjectSpawnController> const& __cordl_internal_get__beatmapObjectSpawnController() const;

  constexpr ::UnityW<::GlobalNamespace::BeatmapObjectSpawnController>& __cordl_internal_get__beatmapObjectSpawnController();

  constexpr ::UnityW<::GlobalNamespace::GameSongController> const& __cordl_internal_get__gameSongController() const;

  constexpr ::UnityW<::GlobalNamespace::GameSongController>& __cordl_internal_get__gameSongController();

  constexpr ::GlobalNamespace::IMultiplayerLevelEndActionsPublisher*& __cordl_internal_get__levelEndActionsPublisher();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMultiplayerLevelEndActionsPublisher*> const& __cordl_internal_get__levelEndActionsPublisher() const;

  constexpr ::UnityW<::GlobalNamespace::LevelFailedTextEffect> const& __cordl_internal_get__levelFailedTextEffect() const;

  constexpr ::UnityW<::GlobalNamespace::LevelFailedTextEffect>& __cordl_internal_get__levelFailedTextEffect();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerPlayersManager> const& __cordl_internal_get__multiplayerPlayersManager() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerPlayersManager>& __cordl_internal_get__multiplayerPlayersManager();

  constexpr void __cordl_internal_set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager* value);

  constexpr void __cordl_internal_set__beatmapObjectSpawnController(::UnityW<::GlobalNamespace::BeatmapObjectSpawnController> value);

  constexpr void __cordl_internal_set__gameSongController(::UnityW<::GlobalNamespace::GameSongController> value);

  constexpr void __cordl_internal_set__levelEndActionsPublisher(::GlobalNamespace::IMultiplayerLevelEndActionsPublisher* value);

  constexpr void __cordl_internal_set__levelFailedTextEffect(::UnityW<::GlobalNamespace::LevelFailedTextEffect> value);

  constexpr void __cordl_internal_set__multiplayerPlayersManager(::UnityW<::GlobalNamespace::MultiplayerPlayersManager> value);

  /// @brief Method .ctor, addr 0x3b47d40, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerLocalActiveLevelFailController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalActiveLevelFailController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerLocalActiveLevelFailController(MultiplayerLocalActiveLevelFailController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalActiveLevelFailController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerLocalActiveLevelFailController(MultiplayerLocalActiveLevelFailController const&) = delete;

  /// @brief Field _levelFailedTextEffect, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LevelFailedTextEffect> ____levelFailedTextEffect;

  /// @brief Field _levelEndActionsPublisher, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::IMultiplayerLevelEndActionsPublisher* ____levelEndActionsPublisher;

  /// @brief Field _beatmapObjectSpawnController, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BeatmapObjectSpawnController> ____beatmapObjectSpawnController;

  /// @brief Field _gameSongController, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameSongController> ____gameSongController;

  /// @brief Field _beatmapObjectManager, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapObjectManager* ____beatmapObjectManager;

  /// @brief Field _multiplayerPlayersManager, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerPlayersManager> ____multiplayerPlayersManager;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4496 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerLocalActiveLevelFailController, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActiveLevelFailController, ____levelFailedTextEffect) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActiveLevelFailController, ____levelEndActionsPublisher) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActiveLevelFailController, ____beatmapObjectSpawnController) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActiveLevelFailController, ____gameSongController) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActiveLevelFailController, ____beatmapObjectManager) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActiveLevelFailController, ____multiplayerPlayersManager) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerLocalActiveLevelFailController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLocalActiveLevelFailController*, "", "MultiplayerLocalActiveLevelFailController");
NEED_NO_BOX(::GlobalNamespace::__MultiplayerLocalActiveLevelFailController___PlayerFailedCoroutine_d__8);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MultiplayerLocalActiveLevelFailController___PlayerFailedCoroutine_d__8*, "", "MultiplayerLocalActiveLevelFailController/<PlayerFailedCoroutine>d__8");

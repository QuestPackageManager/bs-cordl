#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerLocalActiveLevelFailController)
namespace GlobalNamespace {
class GameSongController;
}
namespace System::Collections {
class IEnumerator;
}
namespace GlobalNamespace {
class __MultiplayerLocalActiveLevelFailController___PlayerFailedCoroutine_d__8;
}
namespace GlobalNamespace {
class MultiplayerLevelCompletionResults;
}
namespace GlobalNamespace {
class MultiplayerPlayersManager;
}
namespace GlobalNamespace {
class LevelFailedTextEffect;
}
namespace GlobalNamespace {
class IMultiplayerLevelEndActionsPublisher;
}
namespace GlobalNamespace {
class BeatmapObjectManager;
}
namespace GlobalNamespace {
class BeatmapObjectSpawnController;
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
class MultiplayerLocalActiveLevelFailController;
}
namespace GlobalNamespace {
class __MultiplayerLocalActiveLevelFailController___PlayerFailedCoroutine_d__8;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerLocalActiveLevelFailController);
MARK_REF_PTR_T(::GlobalNamespace::__MultiplayerLocalActiveLevelFailController___PlayerFailedCoroutine_d__8);
// Type: ::<PlayerFailedCoroutine>d__8
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5148))
// CS Name: ::MultiplayerLocalActiveLevelFailController::<PlayerFailedCoroutine>d__8*
class CORDL_TYPE __MultiplayerLocalActiveLevelFailController___PlayerFailedCoroutine_d__8 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::MultiplayerLocalActiveLevelFailController* __4__this;

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

  constexpr ::GlobalNamespace::MultiplayerLocalActiveLevelFailController*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerLocalActiveLevelFailController*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::MultiplayerLocalActiveLevelFailController* value);

  static inline ::GlobalNamespace::__MultiplayerLocalActiveLevelFailController___PlayerFailedCoroutine_d__8* New_ctor(int32_t __1__state);

  /// @brief Method .ctor, addr 0x23da528, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose, addr 0x23da59c, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext, addr 0x23da5a0, size 0xf0, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x23da690, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x23da698, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x23da6d8, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__MultiplayerLocalActiveLevelFailController___PlayerFailedCoroutine_d__8", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MultiplayerLocalActiveLevelFailController___PlayerFailedCoroutine_d__8(__MultiplayerLocalActiveLevelFailController___PlayerFailedCoroutine_d__8&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MultiplayerLocalActiveLevelFailController___PlayerFailedCoroutine_d__8", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MultiplayerLocalActiveLevelFailController___PlayerFailedCoroutine_d__8(__MultiplayerLocalActiveLevelFailController___PlayerFailedCoroutine_d__8 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MultiplayerLocalActiveLevelFailController___PlayerFailedCoroutine_d__8();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerLocalActiveLevelFailController* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MultiplayerLocalActiveLevelFailController___PlayerFailedCoroutine_d__8, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MultiplayerLocalActiveLevelFailController___PlayerFailedCoroutine_d__8, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MultiplayerLocalActiveLevelFailController___PlayerFailedCoroutine_d__8, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MultiplayerLocalActiveLevelFailController___PlayerFailedCoroutine_d__8, _____4__this) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::MultiplayerLocalActiveLevelFailController
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5149))
// CS Name: ::MultiplayerLocalActiveLevelFailController*
class CORDL_TYPE MultiplayerLocalActiveLevelFailController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _PlayerFailedCoroutine_d__8 = ::GlobalNamespace::__MultiplayerLocalActiveLevelFailController___PlayerFailedCoroutine_d__8;

  /// @brief Field _levelFailedTextEffect, offset 0x18, size 0x8
  __declspec(property(get = __get__levelFailedTextEffect, put = __set__levelFailedTextEffect))::GlobalNamespace::LevelFailedTextEffect* _levelFailedTextEffect;

  /// @brief Field _levelEndActionsPublisher, offset 0x20, size 0x8
  __declspec(property(get = __get__levelEndActionsPublisher, put = __set__levelEndActionsPublisher))::GlobalNamespace::IMultiplayerLevelEndActionsPublisher* _levelEndActionsPublisher;

  /// @brief Field _beatmapObjectSpawnController, offset 0x28, size 0x8
  __declspec(property(get = __get__beatmapObjectSpawnController, put = __set__beatmapObjectSpawnController))::GlobalNamespace::BeatmapObjectSpawnController* _beatmapObjectSpawnController;

  /// @brief Field _gameSongController, offset 0x30, size 0x8
  __declspec(property(get = __get__gameSongController, put = __set__gameSongController))::GlobalNamespace::GameSongController* _gameSongController;

  /// @brief Field _beatmapObjectManager, offset 0x38, size 0x8
  __declspec(property(get = __get__beatmapObjectManager, put = __set__beatmapObjectManager))::GlobalNamespace::BeatmapObjectManager* _beatmapObjectManager;

  /// @brief Field _multiplayerPlayersManager, offset 0x40, size 0x8
  __declspec(property(get = __get__multiplayerPlayersManager, put = __set__multiplayerPlayersManager))::GlobalNamespace::MultiplayerPlayersManager* _multiplayerPlayersManager;

  constexpr ::GlobalNamespace::LevelFailedTextEffect*& __get__levelFailedTextEffect();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LevelFailedTextEffect*> const& __get__levelFailedTextEffect() const;

  constexpr void __set__levelFailedTextEffect(::GlobalNamespace::LevelFailedTextEffect* value);

  constexpr ::GlobalNamespace::IMultiplayerLevelEndActionsPublisher*& __get__levelEndActionsPublisher();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMultiplayerLevelEndActionsPublisher*> const& __get__levelEndActionsPublisher() const;

  constexpr void __set__levelEndActionsPublisher(::GlobalNamespace::IMultiplayerLevelEndActionsPublisher* value);

  constexpr ::GlobalNamespace::BeatmapObjectSpawnController*& __get__beatmapObjectSpawnController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapObjectSpawnController*> const& __get__beatmapObjectSpawnController() const;

  constexpr void __set__beatmapObjectSpawnController(::GlobalNamespace::BeatmapObjectSpawnController* value);

  constexpr ::GlobalNamespace::GameSongController*& __get__gameSongController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameSongController*> const& __get__gameSongController() const;

  constexpr void __set__gameSongController(::GlobalNamespace::GameSongController* value);

  constexpr ::GlobalNamespace::BeatmapObjectManager*& __get__beatmapObjectManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapObjectManager*> const& __get__beatmapObjectManager() const;

  constexpr void __set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager* value);

  constexpr ::GlobalNamespace::MultiplayerPlayersManager*& __get__multiplayerPlayersManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerPlayersManager*> const& __get__multiplayerPlayersManager() const;

  constexpr void __set__multiplayerPlayersManager(::GlobalNamespace::MultiplayerPlayersManager* value);

  /// @brief Method Start, addr 0x23da2cc, size 0xec, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method OnDestroy, addr 0x23da3b8, size 0x108, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method PlayerFailedCoroutine, addr 0x23da4c0, size 0x68, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* PlayerFailedCoroutine();

  /// @brief Method HandlePlayerDidFinish, addr 0x23da550, size 0x44, virtual false, abstract: false, final false
  inline void HandlePlayerDidFinish(::GlobalNamespace::MultiplayerLevelCompletionResults* levelCompletionResults);

  static inline ::GlobalNamespace::MultiplayerLocalActiveLevelFailController* New_ctor();

  /// @brief Method .ctor, addr 0x23da594, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalActiveLevelFailController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerLocalActiveLevelFailController(MultiplayerLocalActiveLevelFailController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalActiveLevelFailController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerLocalActiveLevelFailController(MultiplayerLocalActiveLevelFailController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerLocalActiveLevelFailController();

public:
  /// @brief Field _levelFailedTextEffect, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::LevelFailedTextEffect* ____levelFailedTextEffect;

  /// @brief Field _levelEndActionsPublisher, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::IMultiplayerLevelEndActionsPublisher* ____levelEndActionsPublisher;

  /// @brief Field _beatmapObjectSpawnController, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapObjectSpawnController* ____beatmapObjectSpawnController;

  /// @brief Field _gameSongController, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::GameSongController* ____gameSongController;

  /// @brief Field _beatmapObjectManager, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapObjectManager* ____beatmapObjectManager;

  /// @brief Field _multiplayerPlayersManager, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerPlayersManager* ____multiplayerPlayersManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerLocalActiveLevelFailController, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActiveLevelFailController, ____levelFailedTextEffect) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActiveLevelFailController, ____levelEndActionsPublisher) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActiveLevelFailController, ____beatmapObjectSpawnController) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActiveLevelFailController, ____gameSongController) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActiveLevelFailController, ____beatmapObjectManager) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActiveLevelFailController, ____multiplayerPlayersManager) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerLocalActiveLevelFailController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLocalActiveLevelFailController*, "", "MultiplayerLocalActiveLevelFailController");
NEED_NO_BOX(::GlobalNamespace::__MultiplayerLocalActiveLevelFailController___PlayerFailedCoroutine_d__8);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MultiplayerLocalActiveLevelFailController___PlayerFailedCoroutine_d__8*, "", "MultiplayerLocalActiveLevelFailController/<PlayerFailedCoroutine>d__8");

#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MultiplayerPlayerStartState_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "Zenject/zzzz__PlaceholderFactory_2_def.hpp"
CORDL_MODULE_EXPORT(MultiplayerLocalInactivePlayerFacade)
namespace UnityEngine {
class GameObject;
}
namespace GlobalNamespace {
class IMultiplayerLevelEndActionsListener;
}
namespace System {
template <typename T> class Action_1;
}
namespace UnityEngine::Playables {
class PlayableDirector;
}
namespace GlobalNamespace {
class MultiplayerLocalInactivePlayerSongSyncController;
}
namespace GlobalNamespace {
class IMultiplayerLevelEndActionsPublisher;
}
namespace GlobalNamespace {
class __MultiplayerLocalInactivePlayerFacade__Factory;
}
namespace GlobalNamespace {
class IStartSeekSongControllerProvider;
}
namespace GlobalNamespace {
class MultiplayerLocalInactivePlayerOutroAnimator;
}
namespace GlobalNamespace {
class MultiplayerSpectatorController;
}
namespace GlobalNamespace {
class MultiplayerLevelCompletionResults;
}
namespace GlobalNamespace {
class IStartSeekSongController;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerLocalInactivePlayerFacade;
}
namespace GlobalNamespace {
class __MultiplayerLocalInactivePlayerFacade__Factory;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerLocalInactivePlayerFacade);
MARK_REF_PTR_T(::GlobalNamespace::__MultiplayerLocalInactivePlayerFacade__Factory);
// Type: ::MultiplayerLocalInactivePlayerFacade
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5161))
// CS Name: ::MultiplayerLocalInactivePlayerFacade*
class CORDL_TYPE MultiplayerLocalInactivePlayerFacade : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using Factory = ::GlobalNamespace::__MultiplayerLocalInactivePlayerFacade__Factory;

  /// @brief Field _inactivePlayerSongSyncController, offset 0x18, size 0x8
  __declspec(property(get = __get__inactivePlayerSongSyncController,
                      put = __set__inactivePlayerSongSyncController))::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController* _inactivePlayerSongSyncController;

  /// @brief Field _spectatorController, offset 0x20, size 0x8
  __declspec(property(get = __get__spectatorController, put = __set__spectatorController))::GlobalNamespace::MultiplayerSpectatorController* _spectatorController;

  /// @brief Field _introAnimator, offset 0x28, size 0x8
  __declspec(property(get = __get__introAnimator, put = __set__introAnimator))::UnityEngine::Playables::PlayableDirector* _introAnimator;

  /// @brief Field _outroAnimator, offset 0x30, size 0x8
  __declspec(property(get = __get__outroAnimator, put = __set__outroAnimator))::GlobalNamespace::MultiplayerLocalInactivePlayerOutroAnimator* _outroAnimator;

  /// @brief Field playerDidFinishEvent, offset 0x38, size 0x8
  __declspec(property(get = __get_playerDidFinishEvent, put = __set_playerDidFinishEvent))::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>* playerDidFinishEvent;

  /// @brief Field playerNetworkDidFailedEvent, offset 0x40, size 0x8
  __declspec(property(get = __get_playerNetworkDidFailedEvent,
                      put = __set_playerNetworkDidFailedEvent))::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>* playerNetworkDidFailedEvent;

  __declspec(property(get = get_songController))::GlobalNamespace::IStartSeekSongController* songController;

  __declspec(property(get = get_spectatorController))::GlobalNamespace::MultiplayerSpectatorController* spectatorController;

  __declspec(property(get = get_introAnimator))::UnityEngine::GameObject* introAnimator;

  __declspec(property(get = get_introPlayableDirector))::UnityEngine::Playables::PlayableDirector* introPlayableDirector;

  __declspec(property(get = get_outroAnimator))::GlobalNamespace::MultiplayerLocalInactivePlayerOutroAnimator* outroAnimator;

  /// @brief Convert operator to "::GlobalNamespace::IMultiplayerLevelEndActionsPublisher"
  constexpr operator ::GlobalNamespace::IMultiplayerLevelEndActionsPublisher*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IMultiplayerLevelEndActionsListener"
  constexpr operator ::GlobalNamespace::IMultiplayerLevelEndActionsListener*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IStartSeekSongControllerProvider"
  constexpr operator ::GlobalNamespace::IStartSeekSongControllerProvider*() noexcept;

  constexpr ::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*& __get__inactivePlayerSongSyncController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*> const& __get__inactivePlayerSongSyncController() const;

  constexpr void __set__inactivePlayerSongSyncController(::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController* value);

  constexpr ::GlobalNamespace::MultiplayerSpectatorController*& __get__spectatorController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerSpectatorController*> const& __get__spectatorController() const;

  constexpr void __set__spectatorController(::GlobalNamespace::MultiplayerSpectatorController* value);

  constexpr ::UnityEngine::Playables::PlayableDirector*& __get__introAnimator();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Playables::PlayableDirector*> const& __get__introAnimator() const;

  constexpr void __set__introAnimator(::UnityEngine::Playables::PlayableDirector* value);

  constexpr ::GlobalNamespace::MultiplayerLocalInactivePlayerOutroAnimator*& __get__outroAnimator();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerLocalInactivePlayerOutroAnimator*> const& __get__outroAnimator() const;

  constexpr void __set__outroAnimator(::GlobalNamespace::MultiplayerLocalInactivePlayerOutroAnimator* value);

  constexpr ::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*& __get_playerDidFinishEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*> const& __get_playerDidFinishEvent() const;

  constexpr void __set_playerDidFinishEvent(::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>* value);

  constexpr ::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*& __get_playerNetworkDidFailedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*> const& __get_playerNetworkDidFailedEvent() const;

  constexpr void __set_playerNetworkDidFailedEvent(::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>* value);

  /// @brief Method get_songController, addr 0x23dc8c4, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::IStartSeekSongController* get_songController();

  /// @brief Method get_spectatorController, addr 0x23dc8cc, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::MultiplayerSpectatorController* get_spectatorController();

  /// @brief Method get_introAnimator, addr 0x23dc8d4, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::GameObject* get_introAnimator();

  /// @brief Method get_introPlayableDirector, addr 0x23dc8f0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Playables::PlayableDirector* get_introPlayableDirector();

  /// @brief Method get_outroAnimator, addr 0x23dc8f8, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::MultiplayerLocalInactivePlayerOutroAnimator* get_outroAnimator();

  /// @brief Method add_playerDidFinishEvent, addr 0x23dc900, size 0xb0, virtual true, abstract: false, final true
  inline void add_playerDidFinishEvent(::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>* value);

  /// @brief Method remove_playerDidFinishEvent, addr 0x23dc9b0, size 0xb0, virtual true, abstract: false, final true
  inline void remove_playerDidFinishEvent(::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>* value);

  /// @brief Method add_playerNetworkDidFailedEvent, addr 0x23dca60, size 0xb0, virtual true, abstract: false, final true
  inline void add_playerNetworkDidFailedEvent(::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>* value);

  /// @brief Method remove_playerNetworkDidFailedEvent, addr 0x23dcb10, size 0xb0, virtual true, abstract: false, final true
  inline void remove_playerNetworkDidFailedEvent(::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>* value);

  /// @brief Method ReportPlayerDidFinish, addr 0x23dcbc0, size 0x1c, virtual true, abstract: false, final true
  inline void ReportPlayerDidFinish(::GlobalNamespace::MultiplayerLevelCompletionResults* results);

  /// @brief Method ReportPlayerNetworkDidFailed, addr 0x23dcbdc, size 0x1c, virtual true, abstract: false, final true
  inline void ReportPlayerNetworkDidFailed(::GlobalNamespace::MultiplayerLevelCompletionResults* results);

  static inline ::GlobalNamespace::MultiplayerLocalInactivePlayerFacade* New_ctor();

  /// @brief Method .ctor, addr 0x23dcbf8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalInactivePlayerFacade", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerLocalInactivePlayerFacade(MultiplayerLocalInactivePlayerFacade&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalInactivePlayerFacade", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerLocalInactivePlayerFacade(MultiplayerLocalInactivePlayerFacade const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerLocalInactivePlayerFacade();

public:
  /// @brief Field _inactivePlayerSongSyncController, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController* ____inactivePlayerSongSyncController;

  /// @brief Field _spectatorController, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerSpectatorController* ____spectatorController;

  /// @brief Field _introAnimator, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Playables::PlayableDirector* ____introAnimator;

  /// @brief Field _outroAnimator, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerLocalInactivePlayerOutroAnimator* ____outroAnimator;

  /// @brief Field playerDidFinishEvent, offset: 0x38, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>* ___playerDidFinishEvent;

  /// @brief Field playerNetworkDidFailedEvent, offset: 0x40, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>* ___playerNetworkDidFailedEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerLocalInactivePlayerFacade, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalInactivePlayerFacade, ____inactivePlayerSongSyncController) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalInactivePlayerFacade, ____spectatorController) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalInactivePlayerFacade, ____introAnimator) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalInactivePlayerFacade, ____outroAnimator) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalInactivePlayerFacade, ___playerDidFinishEvent) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalInactivePlayerFacade, ___playerNetworkDidFailedEvent) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::Factory
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5239)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11005), inst: 3491 }),
// TypeDefinitionIndex(TypeDefinitionIndex(5161)), TypeDefinitionIndex(TypeDefinitionIndex(11005))} Self: TypeDefinitionIndex(TypeDefinitionIndex(5160)) CS Name:
// ::MultiplayerLocalInactivePlayerFacade::Factory*
class CORDL_TYPE __MultiplayerLocalInactivePlayerFacade__Factory
    : public ::Zenject::PlaceholderFactory_2<::GlobalNamespace::MultiplayerPlayerStartState, ::GlobalNamespace::MultiplayerLocalInactivePlayerFacade*> {
public:
  // Declarations
  static inline ::GlobalNamespace::__MultiplayerLocalInactivePlayerFacade__Factory* New_ctor();

  /// @brief Method .ctor, addr 0x23dcc00, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__MultiplayerLocalInactivePlayerFacade__Factory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MultiplayerLocalInactivePlayerFacade__Factory(__MultiplayerLocalInactivePlayerFacade__Factory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MultiplayerLocalInactivePlayerFacade__Factory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MultiplayerLocalInactivePlayerFacade__Factory(__MultiplayerLocalInactivePlayerFacade__Factory const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MultiplayerLocalInactivePlayerFacade__Factory();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MultiplayerLocalInactivePlayerFacade__Factory, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerLocalInactivePlayerFacade);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLocalInactivePlayerFacade*, "", "MultiplayerLocalInactivePlayerFacade");
NEED_NO_BOX(::GlobalNamespace::__MultiplayerLocalInactivePlayerFacade__Factory);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MultiplayerLocalInactivePlayerFacade__Factory*, "", "MultiplayerLocalInactivePlayerFacade/Factory");

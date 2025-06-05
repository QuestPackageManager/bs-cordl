#pragma once
// IWYU pragma private; include "GlobalNamespace/GameplayServerFiniteStateMachine.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapLevelSelectionMask_def.hpp"
#include "GlobalNamespace/zzzz__GameplayServerConfiguration_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(GameplayServerFiniteStateMachine)
namespace BGNet::Core {
class ITaskUtility;
}
namespace GlobalNamespace {
struct BeatmapLevelSelectionMask;
}
namespace GlobalNamespace {
class GameState;
}
namespace GlobalNamespace {
class GameplayRpcManager;
}
namespace GlobalNamespace {
struct GameplayServerConfiguration;
}
namespace GlobalNamespace {
struct GameplayServerFiniteStateMachine_InitParams;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace GlobalNamespace {
class IServerBeatmapProvider;
}
namespace GlobalNamespace {
class MenuRpcManager;
}
// Forward declare root types
namespace GlobalNamespace {
class GameplayServerFiniteStateMachine;
}
namespace GlobalNamespace {
struct GameplayServerFiniteStateMachine_InitParams;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GameplayServerFiniteStateMachine);
MARK_VAL_T(::GlobalNamespace::GameplayServerFiniteStateMachine_InitParams);
// Dependencies BeatmapLevelSelectionMask, GameplayServerConfiguration
namespace GlobalNamespace {
// Is value type: true
// CS Name: GameplayServerFiniteStateMachine/InitParams
struct CORDL_TYPE GameplayServerFiniteStateMachine_InitParams {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x22cba94, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::BGNet::Core::ITaskUtility* taskUtility, ::GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager, ::StringW creatorId,
                    ::GlobalNamespace::BeatmapLevelSelectionMask selectionMask, ::GlobalNamespace::GameplayServerConfiguration configuration,
                    ::GlobalNamespace::IServerBeatmapProvider* beatmapProvider);

  // Ctor Parameters []
  // @brief default ctor
  constexpr GameplayServerFiniteStateMachine_InitParams();

  // Ctor Parameters [CppParam { name: "taskUtility", ty: "::BGNet::Core::ITaskUtility*", modifiers: "", def_value: None }, CppParam { name: "multiplayerSessionManager", ty:
  // "::GlobalNamespace::IMultiplayerSessionManager*", modifiers: "", def_value: None }, CppParam { name: "creatorId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "selectionMask", ty: "::GlobalNamespace::BeatmapLevelSelectionMask", modifiers: "", def_value: None }, CppParam { name: "configuration", ty: "::GlobalNamespace::GameplayServerConfiguration",
  // modifiers: "", def_value: None }, CppParam { name: "beatmapProvider", ty: "::GlobalNamespace::IServerBeatmapProvider*", modifiers: "", def_value: None }]
  constexpr GameplayServerFiniteStateMachine_InitParams(::BGNet::Core::ITaskUtility* taskUtility, ::GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager, ::StringW creatorId,
                                                        ::GlobalNamespace::BeatmapLevelSelectionMask selectionMask, ::GlobalNamespace::GameplayServerConfiguration configuration,
                                                        ::GlobalNamespace::IServerBeatmapProvider* beatmapProvider) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14768 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x60 };

  /// @brief Field taskUtility, offset: 0x0, size: 0x8, def value: None
  ::BGNet::Core::ITaskUtility* taskUtility;

  /// @brief Field multiplayerSessionManager, offset: 0x8, size: 0x8, def value: None
  ::GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager;

  /// @brief Field creatorId, offset: 0x10, size: 0x8, def value: None
  ::StringW creatorId;

  /// @brief Field selectionMask, offset: 0x18, size: 0x28, def value: None
  ::GlobalNamespace::BeatmapLevelSelectionMask selectionMask;

  /// @brief Field configuration, offset: 0x40, size: 0x18, def value: None
  ::GlobalNamespace::GameplayServerConfiguration configuration;

  /// @brief Field beatmapProvider, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::IServerBeatmapProvider* beatmapProvider;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameplayServerFiniteStateMachine_InitParams, taskUtility) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayServerFiniteStateMachine_InitParams, multiplayerSessionManager) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayServerFiniteStateMachine_InitParams, creatorId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayServerFiniteStateMachine_InitParams, selectionMask) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayServerFiniteStateMachine_InitParams, configuration) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayServerFiniteStateMachine_InitParams, beatmapProvider) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameplayServerFiniteStateMachine_InitParams, 0x60>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies BeatmapLevelSelectionMask, GameplayServerConfiguration, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameplayServerFiniteStateMachine
class CORDL_TYPE GameplayServerFiniteStateMachine : public ::System::Object {
public:
  // Declarations
  using InitParams = ::GlobalNamespace::GameplayServerFiniteStateMachine_InitParams;

  /// @brief Field <beatmapProvider>k__BackingField, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapProvider_k__BackingField,
                      put = __cordl_internal_set__beatmapProvider_k__BackingField)) ::GlobalNamespace::IServerBeatmapProvider* _beatmapProvider_k__BackingField;

  /// @brief Field <configuration>k__BackingField, offset 0x50, size 0x18
  __declspec(property(get = __cordl_internal_get__configuration_k__BackingField,
                      put = __cordl_internal_set__configuration_k__BackingField)) ::GlobalNamespace::GameplayServerConfiguration _configuration_k__BackingField;

  /// @brief Field <gameplayRpcManager>k__BackingField, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__gameplayRpcManager_k__BackingField,
                      put = __cordl_internal_set__gameplayRpcManager_k__BackingField)) ::GlobalNamespace::GameplayRpcManager* _gameplayRpcManager_k__BackingField;

  /// @brief Field <menuRpcManager>k__BackingField, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__menuRpcManager_k__BackingField,
                      put = __cordl_internal_set__menuRpcManager_k__BackingField)) ::GlobalNamespace::MenuRpcManager* _menuRpcManager_k__BackingField;

  /// @brief Field <multiplayerSessionManager>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerSessionManager_k__BackingField,
                      put = __cordl_internal_set__multiplayerSessionManager_k__BackingField)) ::GlobalNamespace::IMultiplayerSessionManager* _multiplayerSessionManager_k__BackingField;

  /// @brief Field <ownerUserId>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__ownerUserId_k__BackingField, put = __cordl_internal_set__ownerUserId_k__BackingField)) ::StringW _ownerUserId_k__BackingField;

  /// @brief Field <selectionMask>k__BackingField, offset 0x28, size 0x28
  __declspec(property(get = __cordl_internal_get__selectionMask_k__BackingField,
                      put = __cordl_internal_set__selectionMask_k__BackingField)) ::GlobalNamespace::BeatmapLevelSelectionMask _selectionMask_k__BackingField;

  /// @brief Field <taskUtility>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__taskUtility_k__BackingField, put = __cordl_internal_set__taskUtility_k__BackingField)) ::BGNet::Core::ITaskUtility* _taskUtility_k__BackingField;

  __declspec(property(get = get_beatmapProvider, put = set_beatmapProvider)) ::GlobalNamespace::IServerBeatmapProvider* beatmapProvider;

  __declspec(property(get = get_configuration, put = set_configuration)) ::GlobalNamespace::GameplayServerConfiguration configuration;

  /// @brief Field enteringState, offset 0x88, size 0x1
  __declspec(property(get = __cordl_internal_get_enteringState, put = __cordl_internal_set_enteringState)) bool enteringState;

  __declspec(property(get = get_gameplayRpcManager, put = set_gameplayRpcManager)) ::GlobalNamespace::GameplayRpcManager* gameplayRpcManager;

  __declspec(property(get = get_menuRpcManager, put = set_menuRpcManager)) ::GlobalNamespace::MenuRpcManager* menuRpcManager;

  __declspec(property(get = get_multiplayerSessionManager, put = set_multiplayerSessionManager)) ::GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager;

  __declspec(property(get = get_ownerUserId, put = set_ownerUserId)) ::StringW ownerUserId;

  __declspec(property(get = get_selectionMask, put = set_selectionMask)) ::GlobalNamespace::BeatmapLevelSelectionMask selectionMask;

  /// @brief Field state, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_state, put = __cordl_internal_set_state)) ::GlobalNamespace::GameState* state;

  __declspec(property(get = get_taskUtility, put = set_taskUtility)) ::BGNet::Core::ITaskUtility* taskUtility;

  static inline ::GlobalNamespace::GameplayServerFiniteStateMachine* New_ctor(::GlobalNamespace::GameplayServerFiniteStateMachine_InitParams initParams);

  constexpr ::GlobalNamespace::IServerBeatmapProvider* const& __cordl_internal_get__beatmapProvider_k__BackingField() const;

  constexpr ::GlobalNamespace::IServerBeatmapProvider*& __cordl_internal_get__beatmapProvider_k__BackingField();

  constexpr ::GlobalNamespace::GameplayServerConfiguration const& __cordl_internal_get__configuration_k__BackingField() const;

  constexpr ::GlobalNamespace::GameplayServerConfiguration& __cordl_internal_get__configuration_k__BackingField();

  constexpr ::GlobalNamespace::GameplayRpcManager* const& __cordl_internal_get__gameplayRpcManager_k__BackingField() const;

  constexpr ::GlobalNamespace::GameplayRpcManager*& __cordl_internal_get__gameplayRpcManager_k__BackingField();

  constexpr ::GlobalNamespace::MenuRpcManager* const& __cordl_internal_get__menuRpcManager_k__BackingField() const;

  constexpr ::GlobalNamespace::MenuRpcManager*& __cordl_internal_get__menuRpcManager_k__BackingField();

  constexpr ::GlobalNamespace::IMultiplayerSessionManager* const& __cordl_internal_get__multiplayerSessionManager_k__BackingField() const;

  constexpr ::GlobalNamespace::IMultiplayerSessionManager*& __cordl_internal_get__multiplayerSessionManager_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__ownerUserId_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__ownerUserId_k__BackingField();

  constexpr ::GlobalNamespace::BeatmapLevelSelectionMask const& __cordl_internal_get__selectionMask_k__BackingField() const;

  constexpr ::GlobalNamespace::BeatmapLevelSelectionMask& __cordl_internal_get__selectionMask_k__BackingField();

  constexpr ::BGNet::Core::ITaskUtility* const& __cordl_internal_get__taskUtility_k__BackingField() const;

  constexpr ::BGNet::Core::ITaskUtility*& __cordl_internal_get__taskUtility_k__BackingField();

  constexpr bool const& __cordl_internal_get_enteringState() const;

  constexpr bool& __cordl_internal_get_enteringState();

  constexpr ::GlobalNamespace::GameState* const& __cordl_internal_get_state() const;

  constexpr ::GlobalNamespace::GameState*& __cordl_internal_get_state();

  constexpr void __cordl_internal_set__beatmapProvider_k__BackingField(::GlobalNamespace::IServerBeatmapProvider* value);

  constexpr void __cordl_internal_set__configuration_k__BackingField(::GlobalNamespace::GameplayServerConfiguration value);

  constexpr void __cordl_internal_set__gameplayRpcManager_k__BackingField(::GlobalNamespace::GameplayRpcManager* value);

  constexpr void __cordl_internal_set__menuRpcManager_k__BackingField(::GlobalNamespace::MenuRpcManager* value);

  constexpr void __cordl_internal_set__multiplayerSessionManager_k__BackingField(::GlobalNamespace::IMultiplayerSessionManager* value);

  constexpr void __cordl_internal_set__ownerUserId_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__selectionMask_k__BackingField(::GlobalNamespace::BeatmapLevelSelectionMask value);

  constexpr void __cordl_internal_set__taskUtility_k__BackingField(::BGNet::Core::ITaskUtility* value);

  constexpr void __cordl_internal_set_enteringState(bool value);

  constexpr void __cordl_internal_set_state(::GlobalNamespace::GameState* value);

  /// @brief Method .ctor, addr 0x22cb97c, size 0x118, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::GameplayServerFiniteStateMachine_InitParams initParams);

  /// @brief Method get_beatmapProvider, addr 0x22cb94c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::IServerBeatmapProvider* get_beatmapProvider();

  /// @brief Method get_configuration, addr 0x22cb924, size 0x14, virtual false, abstract: false, final false
  inline ::GlobalNamespace::GameplayServerConfiguration get_configuration();

  /// @brief Method get_gameplayRpcManager, addr 0x22cb96c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::GameplayRpcManager* get_gameplayRpcManager();

  /// @brief Method get_menuRpcManager, addr 0x22cb95c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::MenuRpcManager* get_menuRpcManager();

  /// @brief Method get_multiplayerSessionManager, addr 0x22cb8d4, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::IMultiplayerSessionManager* get_multiplayerSessionManager();

  /// @brief Method get_ownerUserId, addr 0x22cb8e4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ownerUserId();

  /// @brief Method get_selectionMask, addr 0x22cb8f4, size 0x18, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapLevelSelectionMask get_selectionMask();

  /// @brief Method get_taskUtility, addr 0x22cb8c4, size 0x8, virtual false, abstract: false, final false
  inline ::BGNet::Core::ITaskUtility* get_taskUtility();

  /// @brief Method set_beatmapProvider, addr 0x22cb954, size 0x8, virtual false, abstract: false, final false
  inline void set_beatmapProvider(::GlobalNamespace::IServerBeatmapProvider* value);

  /// @brief Method set_configuration, addr 0x22cb938, size 0x14, virtual false, abstract: false, final false
  inline void set_configuration(::GlobalNamespace::GameplayServerConfiguration value);

  /// @brief Method set_gameplayRpcManager, addr 0x22cb974, size 0x8, virtual false, abstract: false, final false
  inline void set_gameplayRpcManager(::GlobalNamespace::GameplayRpcManager* value);

  /// @brief Method set_menuRpcManager, addr 0x22cb964, size 0x8, virtual false, abstract: false, final false
  inline void set_menuRpcManager(::GlobalNamespace::MenuRpcManager* value);

  /// @brief Method set_multiplayerSessionManager, addr 0x22cb8dc, size 0x8, virtual false, abstract: false, final false
  inline void set_multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager* value);

  /// @brief Method set_ownerUserId, addr 0x22cb8ec, size 0x8, virtual false, abstract: false, final false
  inline void set_ownerUserId(::StringW value);

  /// @brief Method set_selectionMask, addr 0x22cb90c, size 0x18, virtual false, abstract: false, final false
  inline void set_selectionMask(::GlobalNamespace::BeatmapLevelSelectionMask value);

  /// @brief Method set_taskUtility, addr 0x22cb8cc, size 0x8, virtual false, abstract: false, final false
  inline void set_taskUtility(::BGNet::Core::ITaskUtility* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameplayServerFiniteStateMachine();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameplayServerFiniteStateMachine", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameplayServerFiniteStateMachine(GameplayServerFiniteStateMachine&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameplayServerFiniteStateMachine", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameplayServerFiniteStateMachine(GameplayServerFiniteStateMachine const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14769 };

  /// @brief Field <taskUtility>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::BGNet::Core::ITaskUtility* ____taskUtility_k__BackingField;

  /// @brief Field <multiplayerSessionManager>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::IMultiplayerSessionManager* ____multiplayerSessionManager_k__BackingField;

  /// @brief Field <ownerUserId>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::StringW ____ownerUserId_k__BackingField;

  /// @brief Field <selectionMask>k__BackingField, offset: 0x28, size: 0x28, def value: None
  ::GlobalNamespace::BeatmapLevelSelectionMask ____selectionMask_k__BackingField;

  /// @brief Field <configuration>k__BackingField, offset: 0x50, size: 0x18, def value: None
  ::GlobalNamespace::GameplayServerConfiguration ____configuration_k__BackingField;

  /// @brief Field <beatmapProvider>k__BackingField, offset: 0x68, size: 0x8, def value: None
  ::GlobalNamespace::IServerBeatmapProvider* ____beatmapProvider_k__BackingField;

  /// @brief Field <menuRpcManager>k__BackingField, offset: 0x70, size: 0x8, def value: None
  ::GlobalNamespace::MenuRpcManager* ____menuRpcManager_k__BackingField;

  /// @brief Field <gameplayRpcManager>k__BackingField, offset: 0x78, size: 0x8, def value: None
  ::GlobalNamespace::GameplayRpcManager* ____gameplayRpcManager_k__BackingField;

  /// @brief Field state, offset: 0x80, size: 0x8, def value: None
  ::GlobalNamespace::GameState* ___state;

  /// @brief Field enteringState, offset: 0x88, size: 0x1, def value: None
  bool ___enteringState;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameplayServerFiniteStateMachine, ____taskUtility_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayServerFiniteStateMachine, ____multiplayerSessionManager_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayServerFiniteStateMachine, ____ownerUserId_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayServerFiniteStateMachine, ____selectionMask_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayServerFiniteStateMachine, ____configuration_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayServerFiniteStateMachine, ____beatmapProvider_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayServerFiniteStateMachine, ____menuRpcManager_k__BackingField) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayServerFiniteStateMachine, ____gameplayRpcManager_k__BackingField) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayServerFiniteStateMachine, ___state) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayServerFiniteStateMachine, ___enteringState) == 0x88, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameplayServerFiniteStateMachine, 0x90>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GameplayServerFiniteStateMachine);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameplayServerFiniteStateMachine*, "", "GameplayServerFiniteStateMachine");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameplayServerFiniteStateMachine_InitParams, "", "GameplayServerFiniteStateMachine/InitParams");

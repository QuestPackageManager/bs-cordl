#pragma once
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
class IMultiplayerSessionManager;
}
namespace GlobalNamespace {
class IServerBeatmapProvider;
}
namespace GlobalNamespace {
class MenuRpcManager;
}
namespace GlobalNamespace {
struct __GameplayServerFiniteStateMachine__InitParams;
}
// Forward declare root types
namespace GlobalNamespace {
class GameplayServerFiniteStateMachine;
}
namespace GlobalNamespace {
struct __GameplayServerFiniteStateMachine__InitParams;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GameplayServerFiniteStateMachine);
MARK_VAL_T(::GlobalNamespace::__GameplayServerFiniteStateMachine__InitParams);
// Type: ::InitParams
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(12584)), TypeDefinitionIndex(TypeDefinitionIndex(12656))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12659))
// CS Name: ::GameplayServerFiniteStateMachine::InitParams
struct CORDL_TYPE __GameplayServerFiniteStateMachine__InitParams {
public:
  // Declarations
  /// @brief Method .ctor, addr 0xe66e28, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::BGNet::Core::ITaskUtility* taskUtility, ::GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager, ::StringW creatorId,
                    ::GlobalNamespace::BeatmapLevelSelectionMask selectionMask, ::GlobalNamespace::GameplayServerConfiguration configuration,
                    ::GlobalNamespace::IServerBeatmapProvider* beatmapProvider);

  // Ctor Parameters [CppParam { name: "taskUtility", ty: "::BGNet::Core::ITaskUtility*", modifiers: "", def_value: None }, CppParam { name: "multiplayerSessionManager", ty:
  // "::GlobalNamespace::IMultiplayerSessionManager*", modifiers: "", def_value: None }, CppParam { name: "creatorId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "selectionMask", ty: "::GlobalNamespace::BeatmapLevelSelectionMask", modifiers: "", def_value: None }, CppParam { name: "configuration", ty: "::GlobalNamespace::GameplayServerConfiguration",
  // modifiers: "", def_value: None }, CppParam { name: "beatmapProvider", ty: "::GlobalNamespace::IServerBeatmapProvider*", modifiers: "", def_value: None }]
  constexpr __GameplayServerFiniteStateMachine__InitParams(::BGNet::Core::ITaskUtility* taskUtility, ::GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager, ::StringW creatorId,
                                                           ::GlobalNamespace::BeatmapLevelSelectionMask selectionMask, ::GlobalNamespace::GameplayServerConfiguration configuration,
                                                           ::GlobalNamespace::IServerBeatmapProvider* beatmapProvider) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __GameplayServerFiniteStateMachine__InitParams();

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

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x60 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GameplayServerFiniteStateMachine__InitParams, 0x60>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameplayServerFiniteStateMachine__InitParams, taskUtility) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameplayServerFiniteStateMachine__InitParams, multiplayerSessionManager) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameplayServerFiniteStateMachine__InitParams, creatorId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameplayServerFiniteStateMachine__InitParams, selectionMask) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameplayServerFiniteStateMachine__InitParams, configuration) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameplayServerFiniteStateMachine__InitParams, beatmapProvider) == 0x58, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::GameplayServerFiniteStateMachine
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 137, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(12584)), TypeDefinitionIndex(TypeDefinitionIndex(12656))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12660))
// CS Name: ::GameplayServerFiniteStateMachine*
class CORDL_TYPE GameplayServerFiniteStateMachine : public ::System::Object {
public:
  // Declarations
  using InitParams = ::GlobalNamespace::__GameplayServerFiniteStateMachine__InitParams;

  /// @brief Field <taskUtility>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__taskUtility_k__BackingField, put = __cordl_internal_set__taskUtility_k__BackingField))::BGNet::Core::ITaskUtility* _taskUtility_k__BackingField;

  /// @brief Field <multiplayerSessionManager>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerSessionManager_k__BackingField,
                      put = __cordl_internal_set__multiplayerSessionManager_k__BackingField))::GlobalNamespace::IMultiplayerSessionManager* _multiplayerSessionManager_k__BackingField;

  /// @brief Field <ownerUserId>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__ownerUserId_k__BackingField, put = __cordl_internal_set__ownerUserId_k__BackingField))::StringW _ownerUserId_k__BackingField;

  /// @brief Field <selectionMask>k__BackingField, offset 0x28, size 0x28
  __declspec(property(get = __cordl_internal_get__selectionMask_k__BackingField,
                      put = __cordl_internal_set__selectionMask_k__BackingField))::GlobalNamespace::BeatmapLevelSelectionMask _selectionMask_k__BackingField;

  /// @brief Field <configuration>k__BackingField, offset 0x50, size 0x18
  __declspec(property(get = __cordl_internal_get__configuration_k__BackingField,
                      put = __cordl_internal_set__configuration_k__BackingField))::GlobalNamespace::GameplayServerConfiguration _configuration_k__BackingField;

  /// @brief Field <beatmapProvider>k__BackingField, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapProvider_k__BackingField,
                      put = __cordl_internal_set__beatmapProvider_k__BackingField))::GlobalNamespace::IServerBeatmapProvider* _beatmapProvider_k__BackingField;

  /// @brief Field <menuRpcManager>k__BackingField, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__menuRpcManager_k__BackingField,
                      put = __cordl_internal_set__menuRpcManager_k__BackingField))::GlobalNamespace::MenuRpcManager* _menuRpcManager_k__BackingField;

  /// @brief Field <gameplayRpcManager>k__BackingField, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__gameplayRpcManager_k__BackingField,
                      put = __cordl_internal_set__gameplayRpcManager_k__BackingField))::GlobalNamespace::GameplayRpcManager* _gameplayRpcManager_k__BackingField;

  /// @brief Field state, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_state, put = __cordl_internal_set_state))::GlobalNamespace::GameState* state;

  /// @brief Field enteringState, offset 0x88, size 0x1
  __declspec(property(get = __cordl_internal_get_enteringState, put = __cordl_internal_set_enteringState)) bool enteringState;

  __declspec(property(get = get_taskUtility, put = set_taskUtility))::BGNet::Core::ITaskUtility* taskUtility;

  __declspec(property(get = get_multiplayerSessionManager, put = set_multiplayerSessionManager))::GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager;

  __declspec(property(get = get_ownerUserId, put = set_ownerUserId))::StringW ownerUserId;

  __declspec(property(get = get_selectionMask, put = set_selectionMask))::GlobalNamespace::BeatmapLevelSelectionMask selectionMask;

  __declspec(property(get = get_configuration, put = set_configuration))::GlobalNamespace::GameplayServerConfiguration configuration;

  __declspec(property(get = get_beatmapProvider, put = set_beatmapProvider))::GlobalNamespace::IServerBeatmapProvider* beatmapProvider;

  __declspec(property(get = get_menuRpcManager, put = set_menuRpcManager))::GlobalNamespace::MenuRpcManager* menuRpcManager;

  __declspec(property(get = get_gameplayRpcManager, put = set_gameplayRpcManager))::GlobalNamespace::GameplayRpcManager* gameplayRpcManager;

  constexpr ::BGNet::Core::ITaskUtility*& __cordl_internal_get__taskUtility_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::BGNet::Core::ITaskUtility*> const& __cordl_internal_get__taskUtility_k__BackingField() const;

  constexpr void __cordl_internal_set__taskUtility_k__BackingField(::BGNet::Core::ITaskUtility* value);

  constexpr ::GlobalNamespace::IMultiplayerSessionManager*& __cordl_internal_get__multiplayerSessionManager_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMultiplayerSessionManager*> const& __cordl_internal_get__multiplayerSessionManager_k__BackingField() const;

  constexpr void __cordl_internal_set__multiplayerSessionManager_k__BackingField(::GlobalNamespace::IMultiplayerSessionManager* value);

  constexpr ::StringW& __cordl_internal_get__ownerUserId_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__ownerUserId_k__BackingField() const;

  constexpr void __cordl_internal_set__ownerUserId_k__BackingField(::StringW value);

  constexpr ::GlobalNamespace::BeatmapLevelSelectionMask& __cordl_internal_get__selectionMask_k__BackingField();

  constexpr ::GlobalNamespace::BeatmapLevelSelectionMask const& __cordl_internal_get__selectionMask_k__BackingField() const;

  constexpr void __cordl_internal_set__selectionMask_k__BackingField(::GlobalNamespace::BeatmapLevelSelectionMask value);

  constexpr ::GlobalNamespace::GameplayServerConfiguration& __cordl_internal_get__configuration_k__BackingField();

  constexpr ::GlobalNamespace::GameplayServerConfiguration const& __cordl_internal_get__configuration_k__BackingField() const;

  constexpr void __cordl_internal_set__configuration_k__BackingField(::GlobalNamespace::GameplayServerConfiguration value);

  constexpr ::GlobalNamespace::IServerBeatmapProvider*& __cordl_internal_get__beatmapProvider_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IServerBeatmapProvider*> const& __cordl_internal_get__beatmapProvider_k__BackingField() const;

  constexpr void __cordl_internal_set__beatmapProvider_k__BackingField(::GlobalNamespace::IServerBeatmapProvider* value);

  constexpr ::GlobalNamespace::MenuRpcManager*& __cordl_internal_get__menuRpcManager_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MenuRpcManager*> const& __cordl_internal_get__menuRpcManager_k__BackingField() const;

  constexpr void __cordl_internal_set__menuRpcManager_k__BackingField(::GlobalNamespace::MenuRpcManager* value);

  constexpr ::GlobalNamespace::GameplayRpcManager*& __cordl_internal_get__gameplayRpcManager_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayRpcManager*> const& __cordl_internal_get__gameplayRpcManager_k__BackingField() const;

  constexpr void __cordl_internal_set__gameplayRpcManager_k__BackingField(::GlobalNamespace::GameplayRpcManager* value);

  constexpr ::GlobalNamespace::GameState*& __cordl_internal_get_state();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameState*> const& __cordl_internal_get_state() const;

  constexpr void __cordl_internal_set_state(::GlobalNamespace::GameState* value);

  constexpr bool& __cordl_internal_get_enteringState();

  constexpr bool const& __cordl_internal_get_enteringState() const;

  constexpr void __cordl_internal_set_enteringState(bool value);

  /// @brief Method get_taskUtility, addr 0xe66d70, size 0x8, virtual false, abstract: false, final false
  inline ::BGNet::Core::ITaskUtility* get_taskUtility();

  /// @brief Method set_taskUtility, addr 0xe66d78, size 0x8, virtual false, abstract: false, final false
  inline void set_taskUtility(::BGNet::Core::ITaskUtility* value);

  /// @brief Method get_multiplayerSessionManager, addr 0xe66d80, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::IMultiplayerSessionManager* get_multiplayerSessionManager();

  /// @brief Method set_multiplayerSessionManager, addr 0xe66d88, size 0x8, virtual false, abstract: false, final false
  inline void set_multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager* value);

  /// @brief Method get_ownerUserId, addr 0xe66d90, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ownerUserId();

  /// @brief Method set_ownerUserId, addr 0xe66d98, size 0x8, virtual false, abstract: false, final false
  inline void set_ownerUserId(::StringW value);

  /// @brief Method get_selectionMask, addr 0xe66da0, size 0x18, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapLevelSelectionMask get_selectionMask();

  /// @brief Method set_selectionMask, addr 0xe66db8, size 0x18, virtual false, abstract: false, final false
  inline void set_selectionMask(::GlobalNamespace::BeatmapLevelSelectionMask value);

  /// @brief Method get_configuration, addr 0xe66dd0, size 0x14, virtual false, abstract: false, final false
  inline ::GlobalNamespace::GameplayServerConfiguration get_configuration();

  /// @brief Method set_configuration, addr 0xe66de4, size 0x14, virtual false, abstract: false, final false
  inline void set_configuration(::GlobalNamespace::GameplayServerConfiguration value);

  /// @brief Method get_beatmapProvider, addr 0xe66df8, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::IServerBeatmapProvider* get_beatmapProvider();

  /// @brief Method set_beatmapProvider, addr 0xe66e00, size 0x8, virtual false, abstract: false, final false
  inline void set_beatmapProvider(::GlobalNamespace::IServerBeatmapProvider* value);

  /// @brief Method get_menuRpcManager, addr 0xe66e08, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::MenuRpcManager* get_menuRpcManager();

  /// @brief Method set_menuRpcManager, addr 0xe66e10, size 0x8, virtual false, abstract: false, final false
  inline void set_menuRpcManager(::GlobalNamespace::MenuRpcManager* value);

  /// @brief Method get_gameplayRpcManager, addr 0xe66e18, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::GameplayRpcManager* get_gameplayRpcManager();

  /// @brief Method set_gameplayRpcManager, addr 0xe66e20, size 0x8, virtual false, abstract: false, final false
  inline void set_gameplayRpcManager(::GlobalNamespace::GameplayRpcManager* value);

  static inline ::GlobalNamespace::GameplayServerFiniteStateMachine* New_ctor(::GlobalNamespace::__GameplayServerFiniteStateMachine__InitParams initParams);

  /// @brief Method .ctor, addr 0xe66c4c, size 0x124, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::__GameplayServerFiniteStateMachine__InitParams initParams);

  // Ctor Parameters [CppParam { name: "", ty: "GameplayServerFiniteStateMachine", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameplayServerFiniteStateMachine(GameplayServerFiniteStateMachine&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameplayServerFiniteStateMachine", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameplayServerFiniteStateMachine(GameplayServerFiniteStateMachine const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameplayServerFiniteStateMachine();

public:
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
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameplayServerFiniteStateMachine, 0x90>, "Size mismatch!");

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

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GameplayServerFiniteStateMachine);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameplayServerFiniteStateMachine*, "", "GameplayServerFiniteStateMachine");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GameplayServerFiniteStateMachine__InitParams, "", "GameplayServerFiniteStateMachine/InitParams");

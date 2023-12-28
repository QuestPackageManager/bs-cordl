#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GameLiftConnectionManager_def.hpp"
#include "GlobalNamespace/zzzz__NetworkPlayerModel_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(GameLiftNetworkPlayerModel)
namespace GlobalNamespace {
struct ConnectionFailedReason;
}
namespace GlobalNamespace {
class GameLiftConnectionManager;
}
namespace GlobalNamespace {
template <typename T> class IConnectionInitParams_1;
}
namespace BGNet::Core::GameLift {
class IGameLiftPlayerSessionProvider;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace GlobalNamespace {
struct PublicServerInfo;
}
namespace GlobalNamespace {
class __GameLiftConnectionManager__ConnectToServerParams;
}
namespace GlobalNamespace {
class __GameLiftConnectionManager__StartClientParams;
}
namespace GlobalNamespace {
struct GameplayServerConfiguration;
}
namespace GlobalNamespace {
struct BeatmapLevelSelectionMask;
}
namespace System {
template <typename T> class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
class GameLiftNetworkPlayerModel;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GameLiftNetworkPlayerModel);
// Type: ::GameLiftNetworkPlayerModel
// SizeInfo { instance_size: 280, native_size: -1, calculated_instance_size: 280, calculated_native_size: 280, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14962), inst: 2746 }), TypeDefinitionIndex(TypeDefinitionIndex(12737)),
// TypeDefinitionIndex(TypeDefinitionIndex(14962))} Self: TypeDefinitionIndex(TypeDefinitionIndex(14941)) CS Name: ::GameLiftNetworkPlayerModel*
class CORDL_TYPE GameLiftNetworkPlayerModel : public ::GlobalNamespace::NetworkPlayerModel_1<::GlobalNamespace::GameLiftConnectionManager*> {
public:
  // Declarations
  /// @brief Field _gameLiftPlayerSessionProvider, offset 0x100, size 0x8
  __declspec(property(get = __get__gameLiftPlayerSessionProvider, put = __set__gameLiftPlayerSessionProvider))::BGNet::Core::GameLift::IGameLiftPlayerSessionProvider* _gameLiftPlayerSessionProvider;

  /// @brief Field _cachedConnectToServerParams, offset 0x108, size 0x8
  __declspec(property(get = __get__cachedConnectToServerParams,
                      put = __set__cachedConnectToServerParams))::GlobalNamespace::__GameLiftConnectionManager__ConnectToServerParams* _cachedConnectToServerParams;

  /// @brief Field _cachedStartClientParams, offset 0x110, size 0x8
  __declspec(property(get = __get__cachedStartClientParams, put = __set__cachedStartClientParams))::GlobalNamespace::__GameLiftConnectionManager__StartClientParams* _cachedStartClientParams;

  __declspec(property(get = get_secret))::StringW secret;

  __declspec(property(get = get_code))::StringW code;

  __declspec(property(get = get_partyOwnerId))::StringW partyOwnerId;

  __declspec(property(get = get_configuration))::GlobalNamespace::GameplayServerConfiguration configuration;

  __declspec(property(get = get_selectionMask))::GlobalNamespace::BeatmapLevelSelectionMask selectionMask;

  constexpr ::BGNet::Core::GameLift::IGameLiftPlayerSessionProvider*& __get__gameLiftPlayerSessionProvider();

  constexpr ::cordl_internals::to_const_pointer<::BGNet::Core::GameLift::IGameLiftPlayerSessionProvider*> const& __get__gameLiftPlayerSessionProvider() const;

  constexpr void __set__gameLiftPlayerSessionProvider(::BGNet::Core::GameLift::IGameLiftPlayerSessionProvider* value);

  constexpr ::GlobalNamespace::__GameLiftConnectionManager__ConnectToServerParams*& __get__cachedConnectToServerParams();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__GameLiftConnectionManager__ConnectToServerParams*> const& __get__cachedConnectToServerParams() const;

  constexpr void __set__cachedConnectToServerParams(::GlobalNamespace::__GameLiftConnectionManager__ConnectToServerParams* value);

  constexpr ::GlobalNamespace::__GameLiftConnectionManager__StartClientParams*& __get__cachedStartClientParams();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__GameLiftConnectionManager__StartClientParams*> const& __get__cachedStartClientParams() const;

  constexpr void __set__cachedStartClientParams(::GlobalNamespace::__GameLiftConnectionManager__StartClientParams* value);

  /// @brief Method get_secret addr 0x2636a98 size 0x54 virtual true final false
  inline ::StringW get_secret();

  /// @brief Method get_code addr 0x2636aec size 0x54 virtual true final false
  inline ::StringW get_code();

  /// @brief Method get_partyOwnerId addr 0x2636b40 size 0x8 virtual true final false
  inline ::StringW get_partyOwnerId();

  /// @brief Method get_configuration addr 0x2636b48 size 0x78 virtual true final false
  inline ::GlobalNamespace::GameplayServerConfiguration get_configuration();

  /// @brief Method get_selectionMask addr 0x2636bc0 size 0x78 virtual true final false
  inline ::GlobalNamespace::BeatmapLevelSelectionMask get_selectionMask();

  /// @brief Method Update addr 0x2636c38 size 0xc0 virtual true final false
  inline void Update();

  /// @brief Method RefreshPublicServers addr 0x2636cf8 size 0xb8 virtual true final false
  inline void RefreshPublicServers(::GlobalNamespace::BeatmapLevelSelectionMask localSelectionMask, ::GlobalNamespace::GameplayServerConfiguration localConfiguration,
                                   ::System::Action_1<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PublicServerInfo>*>* onSuccess,
                                   ::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* onFailure);

  /// @brief Method GetConnectToServerParams addr 0x2636db0 size 0xe8 virtual true final false
  inline ::GlobalNamespace::IConnectionInitParams_1<::GlobalNamespace::GameLiftConnectionManager*>*
  GetConnectToServerParams(::GlobalNamespace::BeatmapLevelSelectionMask selectionMask, ::GlobalNamespace::GameplayServerConfiguration configuration, ::StringW secret, ::StringW code);

  /// @brief Method GetStartClientParams addr 0x2636e98 size 0xd0 virtual true final false
  inline ::GlobalNamespace::IConnectionInitParams_1<::GlobalNamespace::GameLiftConnectionManager*>* GetStartClientParams(::GlobalNamespace::BeatmapLevelSelectionMask selectionMask,
                                                                                                                         ::GlobalNamespace::GameplayServerConfiguration configuration);

  static inline ::GlobalNamespace::GameLiftNetworkPlayerModel* New_ctor();

  /// @brief Method .ctor addr 0x2636f68 size 0xac virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "GameLiftNetworkPlayerModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameLiftNetworkPlayerModel(GameLiftNetworkPlayerModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameLiftNetworkPlayerModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameLiftNetworkPlayerModel(GameLiftNetworkPlayerModel const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameLiftNetworkPlayerModel();

public:
  /// @brief Field _gameLiftPlayerSessionProvider, offset: 0x100, size: 0x8, def value: None
  ::BGNet::Core::GameLift::IGameLiftPlayerSessionProvider* ____gameLiftPlayerSessionProvider;

  /// @brief Field _cachedConnectToServerParams, offset: 0x108, size: 0x8, def value: None
  ::GlobalNamespace::__GameLiftConnectionManager__ConnectToServerParams* ____cachedConnectToServerParams;

  /// @brief Field _cachedStartClientParams, offset: 0x110, size: 0x8, def value: None
  ::GlobalNamespace::__GameLiftConnectionManager__StartClientParams* ____cachedStartClientParams;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameLiftNetworkPlayerModel, 0x118>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GameLiftNetworkPlayerModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameLiftNetworkPlayerModel*, "", "GameLiftNetworkPlayerModel");

#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapLevelSelectionMask_def.hpp"
#include "GlobalNamespace/zzzz__GameplayServerConfiguration_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerSessionInfo)
// Forward declare root types
namespace BGNet::Core::GameLift {
class PlayerSessionInfo;
}
// Write type traits
MARK_REF_PTR_T(::BGNet::Core::GameLift::PlayerSessionInfo);
// Type: BGNet.Core.GameLift::PlayerSessionInfo
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BGNet::Core::GameLift {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12687)), TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(12614))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13018))
// CS Name: ::BGNet.Core.GameLift::PlayerSessionInfo*
class CORDL_TYPE PlayerSessionInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field playerSessionId, offset 0x10, size 0x8
  __declspec(property(get = __get_playerSessionId, put = __set_playerSessionId))::StringW playerSessionId;

  /// @brief Field gameSessionId, offset 0x18, size 0x8
  __declspec(property(get = __get_gameSessionId, put = __set_gameSessionId))::StringW gameSessionId;

  /// @brief Field dnsName, offset 0x20, size 0x8
  __declspec(property(get = __get_dnsName, put = __set_dnsName))::StringW dnsName;

  /// @brief Field port, offset 0x28, size 0x4
  __declspec(property(get = __get_port, put = __set_port)) int32_t port;

  /// @brief Field beatmapLevelSelectionMask, offset 0x30, size 0x18
  __declspec(property(get = __get_beatmapLevelSelectionMask, put = __set_beatmapLevelSelectionMask))::GlobalNamespace::BeatmapLevelSelectionMask beatmapLevelSelectionMask;

  /// @brief Field gameplayServerConfiguration, offset 0x48, size 0x18
  __declspec(property(get = __get_gameplayServerConfiguration, put = __set_gameplayServerConfiguration))::GlobalNamespace::GameplayServerConfiguration gameplayServerConfiguration;

  /// @brief Field privateGameSecret, offset 0x60, size 0x8
  __declspec(property(get = __get_privateGameSecret, put = __set_privateGameSecret))::StringW privateGameSecret;

  /// @brief Field privateGameCode, offset 0x68, size 0x8
  __declspec(property(get = __get_privateGameCode, put = __set_privateGameCode))::StringW privateGameCode;

  constexpr ::StringW& __get_playerSessionId();

  constexpr ::StringW const& __get_playerSessionId() const;

  constexpr void __set_playerSessionId(::StringW value);

  constexpr ::StringW& __get_gameSessionId();

  constexpr ::StringW const& __get_gameSessionId() const;

  constexpr void __set_gameSessionId(::StringW value);

  constexpr ::StringW& __get_dnsName();

  constexpr ::StringW const& __get_dnsName() const;

  constexpr void __set_dnsName(::StringW value);

  constexpr int32_t& __get_port();

  constexpr int32_t const& __get_port() const;

  constexpr void __set_port(int32_t value);

  constexpr ::GlobalNamespace::BeatmapLevelSelectionMask& __get_beatmapLevelSelectionMask();

  constexpr ::GlobalNamespace::BeatmapLevelSelectionMask const& __get_beatmapLevelSelectionMask() const;

  constexpr void __set_beatmapLevelSelectionMask(::GlobalNamespace::BeatmapLevelSelectionMask value);

  constexpr ::GlobalNamespace::GameplayServerConfiguration& __get_gameplayServerConfiguration();

  constexpr ::GlobalNamespace::GameplayServerConfiguration const& __get_gameplayServerConfiguration() const;

  constexpr void __set_gameplayServerConfiguration(::GlobalNamespace::GameplayServerConfiguration value);

  constexpr ::StringW& __get_privateGameSecret();

  constexpr ::StringW const& __get_privateGameSecret() const;

  constexpr void __set_privateGameSecret(::StringW value);

  constexpr ::StringW& __get_privateGameCode();

  constexpr ::StringW const& __get_privateGameCode() const;

  constexpr void __set_privateGameCode(::StringW value);

  static inline ::BGNet::Core::GameLift::PlayerSessionInfo* New_ctor();

  /// @brief Method .ctor addr 0xdead0c size 0x1008 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "PlayerSessionInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerSessionInfo(PlayerSessionInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerSessionInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerSessionInfo(PlayerSessionInfo const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerSessionInfo();

public:
  /// @brief Field playerSessionId, offset: 0x10, size: 0x8, def value: None
  ::StringW ___playerSessionId;

  /// @brief Field gameSessionId, offset: 0x18, size: 0x8, def value: None
  ::StringW ___gameSessionId;

  /// @brief Field dnsName, offset: 0x20, size: 0x8, def value: None
  ::StringW ___dnsName;

  /// @brief Field port, offset: 0x28, size: 0x4, def value: None
  int32_t ___port;

  /// @brief Field beatmapLevelSelectionMask, offset: 0x30, size: 0x18, def value: None
  ::GlobalNamespace::BeatmapLevelSelectionMask ___beatmapLevelSelectionMask;

  /// @brief Field gameplayServerConfiguration, offset: 0x48, size: 0x18, def value: None
  ::GlobalNamespace::GameplayServerConfiguration ___gameplayServerConfiguration;

  /// @brief Field privateGameSecret, offset: 0x60, size: 0x8, def value: None
  ::StringW ___privateGameSecret;

  /// @brief Field privateGameCode, offset: 0x68, size: 0x8, def value: None
  ::StringW ___privateGameCode;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGNet::Core::GameLift::PlayerSessionInfo, 0x70>, "Size mismatch!");

static_assert(offsetof(::BGNet::Core::GameLift::PlayerSessionInfo, ___playerSessionId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::GameLift::PlayerSessionInfo, ___gameSessionId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::GameLift::PlayerSessionInfo, ___dnsName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::GameLift::PlayerSessionInfo, ___port) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::GameLift::PlayerSessionInfo, ___beatmapLevelSelectionMask) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::GameLift::PlayerSessionInfo, ___gameplayServerConfiguration) == 0x48, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::GameLift::PlayerSessionInfo, ___privateGameSecret) == 0x60, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::GameLift::PlayerSessionInfo, ___privateGameCode) == 0x68, "Offset mismatch!");

} // namespace BGNet::Core::GameLift
NEED_NO_BOX(::BGNet::Core::GameLift::PlayerSessionInfo);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::GameLift::PlayerSessionInfo*, "BGNet.Core.GameLift", "PlayerSessionInfo");

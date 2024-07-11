#pragma once
// IWYU pragma private; include "BGNet/Core/GameLift/PlayerSessionInfo.hpp"
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
// SizeInfo { instance_size: 128, native_size: -1, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BGNet::Core::GameLift {
// Is value type: false
// CS Name: ::BGNet.Core.GameLift::PlayerSessionInfo*
class CORDL_TYPE PlayerSessionInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field beatmapLevelSelectionMask, offset 0x30, size 0x28
  __declspec(property(get = __cordl_internal_get_beatmapLevelSelectionMask,
                      put = __cordl_internal_set_beatmapLevelSelectionMask))::GlobalNamespace::BeatmapLevelSelectionMask beatmapLevelSelectionMask;

  /// @brief Field dnsName, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_dnsName, put = __cordl_internal_set_dnsName))::StringW dnsName;

  /// @brief Field gameSessionId, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_gameSessionId, put = __cordl_internal_set_gameSessionId))::StringW gameSessionId;

  /// @brief Field gameplayServerConfiguration, offset 0x58, size 0x18
  __declspec(property(get = __cordl_internal_get_gameplayServerConfiguration,
                      put = __cordl_internal_set_gameplayServerConfiguration))::GlobalNamespace::GameplayServerConfiguration gameplayServerConfiguration;

  /// @brief Field playerSessionId, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_playerSessionId, put = __cordl_internal_set_playerSessionId))::StringW playerSessionId;

  /// @brief Field port, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_port, put = __cordl_internal_set_port)) int32_t port;

  /// @brief Field privateGameCode, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_privateGameCode, put = __cordl_internal_set_privateGameCode))::StringW privateGameCode;

  /// @brief Field privateGameSecret, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_privateGameSecret, put = __cordl_internal_set_privateGameSecret))::StringW privateGameSecret;

  static inline ::BGNet::Core::GameLift::PlayerSessionInfo* New_ctor();

  constexpr ::GlobalNamespace::BeatmapLevelSelectionMask const& __cordl_internal_get_beatmapLevelSelectionMask() const;

  constexpr ::GlobalNamespace::BeatmapLevelSelectionMask& __cordl_internal_get_beatmapLevelSelectionMask();

  constexpr ::StringW const& __cordl_internal_get_dnsName() const;

  constexpr ::StringW& __cordl_internal_get_dnsName();

  constexpr ::StringW const& __cordl_internal_get_gameSessionId() const;

  constexpr ::StringW& __cordl_internal_get_gameSessionId();

  constexpr ::GlobalNamespace::GameplayServerConfiguration const& __cordl_internal_get_gameplayServerConfiguration() const;

  constexpr ::GlobalNamespace::GameplayServerConfiguration& __cordl_internal_get_gameplayServerConfiguration();

  constexpr ::StringW const& __cordl_internal_get_playerSessionId() const;

  constexpr ::StringW& __cordl_internal_get_playerSessionId();

  constexpr int32_t const& __cordl_internal_get_port() const;

  constexpr int32_t& __cordl_internal_get_port();

  constexpr ::StringW const& __cordl_internal_get_privateGameCode() const;

  constexpr ::StringW& __cordl_internal_get_privateGameCode();

  constexpr ::StringW const& __cordl_internal_get_privateGameSecret() const;

  constexpr ::StringW& __cordl_internal_get_privateGameSecret();

  constexpr void __cordl_internal_set_beatmapLevelSelectionMask(::GlobalNamespace::BeatmapLevelSelectionMask value);

  constexpr void __cordl_internal_set_dnsName(::StringW value);

  constexpr void __cordl_internal_set_gameSessionId(::StringW value);

  constexpr void __cordl_internal_set_gameplayServerConfiguration(::GlobalNamespace::GameplayServerConfiguration value);

  constexpr void __cordl_internal_set_playerSessionId(::StringW value);

  constexpr void __cordl_internal_set_port(int32_t value);

  constexpr void __cordl_internal_set_privateGameCode(::StringW value);

  constexpr void __cordl_internal_set_privateGameSecret(::StringW value);

  /// @brief Method .ctor, addr 0x10d2250, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerSessionInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayerSessionInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerSessionInfo(PlayerSessionInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerSessionInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerSessionInfo(PlayerSessionInfo const&) = delete;

  /// @brief Field playerSessionId, offset: 0x10, size: 0x8, def value: None
  ::StringW ___playerSessionId;

  /// @brief Field gameSessionId, offset: 0x18, size: 0x8, def value: None
  ::StringW ___gameSessionId;

  /// @brief Field dnsName, offset: 0x20, size: 0x8, def value: None
  ::StringW ___dnsName;

  /// @brief Field port, offset: 0x28, size: 0x4, def value: None
  int32_t ___port;

  /// @brief Field beatmapLevelSelectionMask, offset: 0x30, size: 0x28, def value: None
  ::GlobalNamespace::BeatmapLevelSelectionMask ___beatmapLevelSelectionMask;

  /// @brief Field gameplayServerConfiguration, offset: 0x58, size: 0x18, def value: None
  ::GlobalNamespace::GameplayServerConfiguration ___gameplayServerConfiguration;

  /// @brief Field privateGameSecret, offset: 0x70, size: 0x8, def value: None
  ::StringW ___privateGameSecret;

  /// @brief Field privateGameCode, offset: 0x78, size: 0x8, def value: None
  ::StringW ___privateGameCode;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGNet::Core::GameLift::PlayerSessionInfo, 0x80>, "Size mismatch!");

static_assert(offsetof(::BGNet::Core::GameLift::PlayerSessionInfo, ___playerSessionId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::GameLift::PlayerSessionInfo, ___gameSessionId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::GameLift::PlayerSessionInfo, ___dnsName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::GameLift::PlayerSessionInfo, ___port) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::GameLift::PlayerSessionInfo, ___beatmapLevelSelectionMask) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::GameLift::PlayerSessionInfo, ___gameplayServerConfiguration) == 0x58, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::GameLift::PlayerSessionInfo, ___privateGameSecret) == 0x70, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::GameLift::PlayerSessionInfo, ___privateGameCode) == 0x78, "Offset mismatch!");

} // namespace BGNet::Core::GameLift
NEED_NO_BOX(::BGNet::Core::GameLift::PlayerSessionInfo);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::GameLift::PlayerSessionInfo*, "BGNet.Core.GameLift", "PlayerSessionInfo");

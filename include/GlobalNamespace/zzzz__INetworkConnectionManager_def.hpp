#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(INetworkConnectionManager)
namespace GlobalNamespace {
class IUnconnectedMessageSender;
}
namespace System {
class IDisposable;
}
namespace GlobalNamespace {
class __NetworkStatisticsState__NetworkStatisticsUpdateDelegate;
}
namespace System::Net {
class IPEndPoint;
}
namespace GlobalNamespace {
class IConnectionManager;
}
namespace GlobalNamespace {
class IPollable;
}
namespace GlobalNamespace {
class IUnconnectedConnectionManager;
}
// Forward declare root types
namespace GlobalNamespace {
class INetworkConnectionManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::INetworkConnectionManager);
// Type: ::INetworkConnectionManager
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12718))
// CS Name: ::INetworkConnectionManager*
class CORDL_TYPE INetworkConnectionManager {
public:
  // Declarations
  __declspec(property(get = get_port)) int32_t port;

  __declspec(property(get = get_isClient)) bool isClient;

  __declspec(property(get = get_isServer)) bool isServer;

  /// @brief Convert operator to "::GlobalNamespace::IConnectionManager"
  constexpr operator ::GlobalNamespace::IConnectionManager*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IPollable"
  constexpr operator ::GlobalNamespace::IPollable*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IUnconnectedConnectionManager"
  constexpr operator ::GlobalNamespace::IUnconnectedConnectionManager*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IUnconnectedMessageSender"
  constexpr operator ::GlobalNamespace::IUnconnectedMessageSender*() noexcept;

  /// @brief Method add_onStatisticsUpdatedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void add_onStatisticsUpdatedEvent(::GlobalNamespace::__NetworkStatisticsState__NetworkStatisticsUpdateDelegate* value);

  /// @brief Method remove_onStatisticsUpdatedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void remove_onStatisticsUpdatedEvent(::GlobalNamespace::__NetworkStatisticsState__NetworkStatisticsUpdateDelegate* value);

  /// @brief Method get_port addr 0x0 size 0xffffffffffffffff virtual true final false
  inline int32_t get_port();

  /// @brief Method get_isClient addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool get_isClient();

  /// @brief Method get_isServer addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool get_isServer();

  /// @brief Method ConnectToEndPoint addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void ConnectToEndPoint(::StringW userId, ::StringW userName, ::System::Net::IPEndPoint* remoteEndPoint, ::StringW remoteUserId, ::StringW remoteUserName, bool remoteUserIsConnectionOwner);

  // Ctor Parameters [CppParam { name: "", ty: "INetworkConnectionManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  INetworkConnectionManager(INetworkConnectionManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "INetworkConnectionManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  INetworkConnectionManager(INetworkConnectionManager const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::INetworkConnectionManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::INetworkConnectionManager*, "", "INetworkConnectionManager");

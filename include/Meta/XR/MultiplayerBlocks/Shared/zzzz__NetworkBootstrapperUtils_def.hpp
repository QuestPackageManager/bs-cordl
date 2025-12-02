#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Shared/NetworkBootstrapperUtils.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(NetworkBootstrapperUtils)
namespace Meta::XR::MultiplayerBlocks::Colocation {
struct ColocationFailedReason;
}
namespace Meta::XR::MultiplayerBlocks::Colocation {
class INetworkData;
}
namespace Meta::XR::MultiplayerBlocks::Colocation {
class INetworkMessenger;
}
namespace Meta::XR::MultiplayerBlocks::Shared {
struct NetworkBootstrapperParams;
}
namespace Meta::XR::MultiplayerBlocks::Shared {
struct PlatformInfo;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Meta::XR::MultiplayerBlocks::Shared {
class NetworkBootstrapperUtils;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::MultiplayerBlocks::Shared::NetworkBootstrapperUtils);
// Dependencies System.Object
namespace Meta::XR::MultiplayerBlocks::Shared {
// Is value type: false
// CS Name: Meta.XR.MultiplayerBlocks.Shared.NetworkBootstrapperUtils
class CORDL_TYPE NetworkBootstrapperUtils : public ::System::Object {
public:
  // Declarations
  /// @brief Method OnColocationFailed, addr 0x585ccec, size 0xac, virtual false, abstract: false, final false
  static inline void OnColocationFailed(::Meta::XR::MultiplayerBlocks::Colocation::ColocationFailedReason e);

  /// @brief Method SetEntitlementIds, addr 0x585c5dc, size 0x40, virtual false, abstract: false, final false
  static inline void SetEntitlementIds(::Meta::XR::MultiplayerBlocks::Shared::PlatformInfo info, ::ByRef<::Meta::XR::MultiplayerBlocks::Shared::NetworkBootstrapperParams> param);

  /// @brief Method SetUpAndStartAutomaticColocation, addr 0x585c61c, size 0x388, virtual false, abstract: false, final false
  static inline void SetUpAndStartAutomaticColocation(::ByRef<::Meta::XR::MultiplayerBlocks::Shared::NetworkBootstrapperParams> param, ::UnityEngine::GameObject* anchorPrefab,
                                                      ::Meta::XR::MultiplayerBlocks::Colocation::INetworkData* networkData,
                                                      ::Meta::XR::MultiplayerBlocks::Colocation::INetworkMessenger* networkMessenger);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NetworkBootstrapperUtils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NetworkBootstrapperUtils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NetworkBootstrapperUtils(NetworkBootstrapperUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NetworkBootstrapperUtils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NetworkBootstrapperUtils(NetworkBootstrapperUtils const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20315 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Meta::XR::MultiplayerBlocks::Shared::NetworkBootstrapperUtils, 0x10>, "Size mismatch!");

} // namespace Meta::XR::MultiplayerBlocks::Shared
NEED_NO_BOX(::Meta::XR::MultiplayerBlocks::Shared::NetworkBootstrapperUtils);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::MultiplayerBlocks::Shared::NetworkBootstrapperUtils*, "Meta.XR.MultiplayerBlocks.Shared", "NetworkBootstrapperUtils");

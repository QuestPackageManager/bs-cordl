#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Colocation/INetworkMessenger.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(INetworkMessenger)
namespace Meta::XR::MultiplayerBlocks::Colocation {
struct ShareAndLocalizeParams;
}
namespace System {
template <typename T> class Action_1;
}
// Forward declare root types
namespace Meta::XR::MultiplayerBlocks::Colocation {
class INetworkMessenger;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::MultiplayerBlocks::Colocation::INetworkMessenger);
// Dependencies
namespace Meta::XR::MultiplayerBlocks::Colocation {
// Is value type: false
// CS Name: Meta.XR.MultiplayerBlocks.Colocation.INetworkMessenger
class CORDL_TYPE INetworkMessenger {
public:
  // Declarations
  /// @brief Method RegisterLocalPlayer, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void RegisterLocalPlayer(uint64_t localPlayerId);

  /// @brief Method SendAnchorShareCompleted, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void SendAnchorShareCompleted(uint64_t targetPlayerId, ::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams shareAndLocalizeParams);

  /// @brief Method SendAnchorShareRequest, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void SendAnchorShareRequest(uint64_t targetPlayerId, ::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams shareAndLocalizeParams);

  /// @brief Method add_AnchorShareRequestCompleted, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void add_AnchorShareRequestCompleted(::System::Action_1<::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams>* value);

  /// @brief Method add_AnchorShareRequestReceived, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void add_AnchorShareRequestReceived(::System::Action_1<::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams>* value);

  /// @brief Method remove_AnchorShareRequestCompleted, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void remove_AnchorShareRequestCompleted(::System::Action_1<::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams>* value);

  /// @brief Method remove_AnchorShareRequestReceived, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void remove_AnchorShareRequestReceived(::System::Action_1<::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams>* value);

  // Ctor Parameters [CppParam { name: "", ty: "INetworkMessenger", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  INetworkMessenger(INetworkMessenger const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20393 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Meta::XR::MultiplayerBlocks::Colocation
NEED_NO_BOX(::Meta::XR::MultiplayerBlocks::Colocation::INetworkMessenger);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::MultiplayerBlocks::Colocation::INetworkMessenger*, "Meta.XR.MultiplayerBlocks.Colocation", "INetworkMessenger");

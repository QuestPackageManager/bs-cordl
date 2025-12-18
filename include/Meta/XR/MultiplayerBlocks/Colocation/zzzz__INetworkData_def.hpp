#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Colocation/INetworkData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(INetworkData)
namespace Meta::XR::MultiplayerBlocks::Colocation {
struct Anchor;
}
namespace Meta::XR::MultiplayerBlocks::Colocation {
struct Player;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> struct Nullable_1;
}
// Forward declare root types
namespace Meta::XR::MultiplayerBlocks::Colocation {
class INetworkData;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::MultiplayerBlocks::Colocation::INetworkData);
// Dependencies
namespace Meta::XR::MultiplayerBlocks::Colocation {
// Is value type: false
// CS Name: Meta.XR.MultiplayerBlocks.Colocation.INetworkData
class CORDL_TYPE INetworkData {
public:
  // Declarations
  /// @brief Method AddAnchor, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void AddAnchor(::Meta::XR::MultiplayerBlocks::Colocation::Anchor anchor);

  /// @brief Method AddPlayer, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void AddPlayer(::Meta::XR::MultiplayerBlocks::Colocation::Player player);

  /// @brief Method GetAllAnchors, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Meta::XR::MultiplayerBlocks::Colocation::Anchor>* GetAllAnchors();

  /// @brief Method GetAllPlayers, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Meta::XR::MultiplayerBlocks::Colocation::Player>* GetAllPlayers();

  /// @brief Method GetAnchor, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Nullable_1<::Meta::XR::MultiplayerBlocks::Colocation::Anchor> GetAnchor(uint64_t ownerOculusId);

  /// @brief Method GetColocationGroupCount, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline uint32_t GetColocationGroupCount();

  /// @brief Method GetPlayerWithOculusId, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Nullable_1<::Meta::XR::MultiplayerBlocks::Colocation::Player> GetPlayerWithOculusId(uint64_t oculusId);

  /// @brief Method GetPlayerWithPlayerId, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Nullable_1<::Meta::XR::MultiplayerBlocks::Colocation::Player> GetPlayerWithPlayerId(uint64_t playerId);

  /// @brief Method IncrementColocationGroupCount, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void IncrementColocationGroupCount();

  /// @brief Method RemoveAnchor, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void RemoveAnchor(::Meta::XR::MultiplayerBlocks::Colocation::Anchor anchor);

  /// @brief Method RemovePlayer, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void RemovePlayer(::Meta::XR::MultiplayerBlocks::Colocation::Player player);

  // Ctor Parameters [CppParam { name: "", ty: "INetworkData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  INetworkData(INetworkData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20392 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Meta::XR::MultiplayerBlocks::Colocation
NEED_NO_BOX(::Meta::XR::MultiplayerBlocks::Colocation::INetworkData);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::MultiplayerBlocks::Colocation::INetworkData*, "Meta.XR.MultiplayerBlocks.Colocation", "INetworkData");

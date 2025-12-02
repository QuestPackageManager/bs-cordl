#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Shared/ITransferOwnership.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ITransferOwnership)
// Forward declare root types
namespace Meta::XR::MultiplayerBlocks::Shared {
class ITransferOwnership;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::MultiplayerBlocks::Shared::ITransferOwnership);
// Dependencies
namespace Meta::XR::MultiplayerBlocks::Shared {
// Is value type: false
// CS Name: Meta.XR.MultiplayerBlocks.Shared.ITransferOwnership
class CORDL_TYPE ITransferOwnership {
public:
  // Declarations
  /// @brief Method HasOwnership, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool HasOwnership();

  /// @brief Method TransferOwnershipToLocalPlayer, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void TransferOwnershipToLocalPlayer();

  // Ctor Parameters [CppParam { name: "", ty: "ITransferOwnership", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ITransferOwnership(ITransferOwnership const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20348 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Meta::XR::MultiplayerBlocks::Shared
NEED_NO_BOX(::Meta::XR::MultiplayerBlocks::Shared::ITransferOwnership);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::MultiplayerBlocks::Shared::ITransferOwnership*, "Meta.XR.MultiplayerBlocks.Shared", "ITransferOwnership");

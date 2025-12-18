#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Colocation/ShareAndLocalizeParams.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Guid_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ShareAndLocalizeParams)
namespace System {
struct Guid;
}
// Forward declare root types
namespace Meta::XR::MultiplayerBlocks::Colocation {
struct ShareAndLocalizeParams;
}
// Write type traits
MARK_VAL_T(::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams);
// Dependencies System.Guid
namespace Meta::XR::MultiplayerBlocks::Colocation {
// Is value type: true
// CS Name: Meta.XR.MultiplayerBlocks.Colocation.ShareAndLocalizeParams
struct CORDL_TYPE ShareAndLocalizeParams {
public:
  // Declarations
  /// @brief Method ToString, addr 0x58ce9d8, size 0x2cc, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x58cc014, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(uint64_t requestingPlayerId, uint64_t requestingPlayerOculusId, ::System::Guid anchorUUID);

  /// @brief Method .ctor, addr 0x58ce9c8, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(uint64_t requestingPlayerId, uint64_t requestingPlayerOculusId, ::System::Guid anchorUUID, bool anchorFlowSucceeded);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ShareAndLocalizeParams();

  // Ctor Parameters [CppParam { name: "requestingPlayerId", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "requestingPlayerOculusId", ty: "uint64_t", modifiers: "", def_value:
  // None }, CppParam { name: "anchorUUID", ty: "::System::Guid", modifiers: "", def_value: None }, CppParam { name: "anchorFlowSucceeded", ty: "bool", modifiers: "", def_value: None }]
  constexpr ShareAndLocalizeParams(uint64_t requestingPlayerId, uint64_t requestingPlayerOculusId, ::System::Guid anchorUUID, bool anchorFlowSucceeded) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20397 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  /// @brief Field requestingPlayerId, offset: 0x0, size: 0x8, def value: None
  uint64_t requestingPlayerId;

  /// @brief Field requestingPlayerOculusId, offset: 0x8, size: 0x8, def value: None
  uint64_t requestingPlayerOculusId;

  /// @brief Field anchorUUID, offset: 0x10, size: 0x10, def value: None
  ::System::Guid anchorUUID;

  /// @brief Field anchorFlowSucceeded, offset: 0x20, size: 0x1, def value: None
  bool anchorFlowSucceeded;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams, requestingPlayerId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams, requestingPlayerOculusId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams, anchorUUID) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams, anchorFlowSucceeded) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams, 0x28>, "Size mismatch!");

} // namespace Meta::XR::MultiplayerBlocks::Colocation
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams, "Meta.XR.MultiplayerBlocks.Colocation", "ShareAndLocalizeParams");

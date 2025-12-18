#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Shared/IAvatarStreamConfig.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
CORDL_MODULE_EXPORT(IAvatarStreamConfig)
namespace Meta::XR::MultiplayerBlocks::Shared {
struct AvatarStreamLOD;
}
// Forward declare root types
namespace Meta::XR::MultiplayerBlocks::Shared {
class IAvatarStreamConfig;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::MultiplayerBlocks::Shared::IAvatarStreamConfig);
// Dependencies
namespace Meta::XR::MultiplayerBlocks::Shared {
// Is value type: false
// CS Name: Meta.XR.MultiplayerBlocks.Shared.IAvatarStreamConfig
class CORDL_TYPE IAvatarStreamConfig {
public:
  // Declarations
  /// @brief Method SetAvatarStreamLOD, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void SetAvatarStreamLOD(::Meta::XR::MultiplayerBlocks::Shared::AvatarStreamLOD lod);

  /// @brief Method SetAvatarUpdateIntervalInS, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void SetAvatarUpdateIntervalInS(float_t interval);

  // Ctor Parameters [CppParam { name: "", ty: "IAvatarStreamConfig", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IAvatarStreamConfig(IAvatarStreamConfig const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20372 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Meta::XR::MultiplayerBlocks::Shared
NEED_NO_BOX(::Meta::XR::MultiplayerBlocks::Shared::IAvatarStreamConfig);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::MultiplayerBlocks::Shared::IAvatarStreamConfig*, "Meta.XR.MultiplayerBlocks.Shared", "IAvatarStreamConfig");

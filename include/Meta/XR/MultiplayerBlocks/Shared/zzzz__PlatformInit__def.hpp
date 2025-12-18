#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Shared/PlatformInit_.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(PlatformInit_)
// Forward declare root types
namespace Meta::XR::MultiplayerBlocks::Shared {
class PlatformInit_;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::MultiplayerBlocks::Shared::PlatformInit_);
// Dependencies UnityEngine.MonoBehaviour
namespace Meta::XR::MultiplayerBlocks::Shared {
// Is value type: false
// CS Name: Meta.XR.MultiplayerBlocks.Shared.PlatformInit_
class CORDL_TYPE PlatformInit_ : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  static inline ::Meta::XR::MultiplayerBlocks::Shared::PlatformInit_* New_ctor();

  /// @brief Method .ctor, addr 0x58c9b5c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlatformInit_();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlatformInit_", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlatformInit_(PlatformInit_&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlatformInit_", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlatformInit_(PlatformInit_ const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20377 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Meta::XR::MultiplayerBlocks::Shared::PlatformInit_, 0x20>, "Size mismatch!");

} // namespace Meta::XR::MultiplayerBlocks::Shared
NEED_NO_BOX(::Meta::XR::MultiplayerBlocks::Shared::PlatformInit_);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::MultiplayerBlocks::Shared::PlatformInit_*, "Meta.XR.MultiplayerBlocks.Shared", "PlatformInit_");

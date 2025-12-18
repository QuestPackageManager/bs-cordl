#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Shared/ColocationController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ColocationController)
namespace Meta::XR::MultiplayerBlocks::Shared {
class ColocationDebuggingOptions;
}
namespace UnityEngine::Events {
class UnityEvent;
}
// Forward declare root types
namespace Meta::XR::MultiplayerBlocks::Shared {
class ColocationController;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::MultiplayerBlocks::Shared::ColocationController);
// Dependencies UnityEngine.MonoBehaviour
namespace Meta::XR::MultiplayerBlocks::Shared {
// Is value type: false
// CS Name: Meta.XR.MultiplayerBlocks.Shared.ColocationController
class CORDL_TYPE ColocationController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field ColocationReadyCallbacks, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_ColocationReadyCallbacks, put = __cordl_internal_set_ColocationReadyCallbacks)) ::UnityEngine::Events::UnityEvent* ColocationReadyCallbacks;

  /// @brief Field DebuggingOptions, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_DebuggingOptions, put = __cordl_internal_set_DebuggingOptions)) ::Meta::XR::MultiplayerBlocks::Shared::ColocationDebuggingOptions* DebuggingOptions;

  /// @brief Method Awake, addr 0x58c1908, size 0xd8, virtual false, abstract: false, final false
  inline void Awake();

  static inline ::Meta::XR::MultiplayerBlocks::Shared::ColocationController* New_ctor();

  constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_ColocationReadyCallbacks() const;

  constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_ColocationReadyCallbacks();

  constexpr ::Meta::XR::MultiplayerBlocks::Shared::ColocationDebuggingOptions* const& __cordl_internal_get_DebuggingOptions() const;

  constexpr ::Meta::XR::MultiplayerBlocks::Shared::ColocationDebuggingOptions*& __cordl_internal_get_DebuggingOptions();

  constexpr void __cordl_internal_set_ColocationReadyCallbacks(::UnityEngine::Events::UnityEvent* value);

  constexpr void __cordl_internal_set_DebuggingOptions(::Meta::XR::MultiplayerBlocks::Shared::ColocationDebuggingOptions* value);

  /// @brief Method .ctor, addr 0x58c1bc0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ColocationController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ColocationController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ColocationController(ColocationController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ColocationController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ColocationController(ColocationController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20335 };

  /// @brief Field ColocationReadyCallbacks, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Events::UnityEvent* ___ColocationReadyCallbacks;

  /// @brief Field DebuggingOptions, offset: 0x28, size: 0x8, def value: None
  ::Meta::XR::MultiplayerBlocks::Shared::ColocationDebuggingOptions* ___DebuggingOptions;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::ColocationController, ___ColocationReadyCallbacks) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::ColocationController, ___DebuggingOptions) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::MultiplayerBlocks::Shared::ColocationController, 0x30>, "Size mismatch!");

} // namespace Meta::XR::MultiplayerBlocks::Shared
NEED_NO_BOX(::Meta::XR::MultiplayerBlocks::Shared::ColocationController);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::MultiplayerBlocks::Shared::ColocationController*, "Meta.XR.MultiplayerBlocks.Shared", "ColocationController");

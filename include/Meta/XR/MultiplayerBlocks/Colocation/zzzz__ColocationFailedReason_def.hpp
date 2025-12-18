#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Colocation/ColocationFailedReason.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ColocationFailedReason)
// Forward declare root types
namespace Meta::XR::MultiplayerBlocks::Colocation {
struct ColocationFailedReason;
}
// Write type traits
MARK_VAL_T(::Meta::XR::MultiplayerBlocks::Colocation::ColocationFailedReason);
// Dependencies
namespace Meta::XR::MultiplayerBlocks::Colocation {
// Is value type: true
// CS Name: Meta.XR.MultiplayerBlocks.Colocation.ColocationFailedReason
struct CORDL_TYPE ColocationFailedReason {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ColocationFailedReason_Unwrapped
  enum struct __ColocationFailedReason_Unwrapped : int32_t {
    __E_AutomaticFailedToCreateAnchor = static_cast<int32_t>(0x0),
    __E_AutomaticFailedToSaveAnchorToCloud = static_cast<int32_t>(0x1),
    __E_AutomaticFailedToShareAnchor = static_cast<int32_t>(0x2),
    __E_AutomaticFailedToLocalizeAnchor = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ColocationFailedReason_Unwrapped() const noexcept {
    return static_cast<__ColocationFailedReason_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ColocationFailedReason();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ColocationFailedReason(int32_t value__) noexcept;

  /// @brief Field AutomaticFailedToCreateAnchor value: I32(0)
  static ::Meta::XR::MultiplayerBlocks::Colocation::ColocationFailedReason const AutomaticFailedToCreateAnchor;

  /// @brief Field AutomaticFailedToLocalizeAnchor value: I32(3)
  static ::Meta::XR::MultiplayerBlocks::Colocation::ColocationFailedReason const AutomaticFailedToLocalizeAnchor;

  /// @brief Field AutomaticFailedToSaveAnchorToCloud value: I32(1)
  static ::Meta::XR::MultiplayerBlocks::Colocation::ColocationFailedReason const AutomaticFailedToSaveAnchorToCloud;

  /// @brief Field AutomaticFailedToShareAnchor value: I32(2)
  static ::Meta::XR::MultiplayerBlocks::Colocation::ColocationFailedReason const AutomaticFailedToShareAnchor;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20416 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::ColocationFailedReason, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::MultiplayerBlocks::Colocation::ColocationFailedReason, 0x4>, "Size mismatch!");

} // namespace Meta::XR::MultiplayerBlocks::Colocation
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::MultiplayerBlocks::Colocation::ColocationFailedReason, "Meta.XR.MultiplayerBlocks.Colocation", "ColocationFailedReason");

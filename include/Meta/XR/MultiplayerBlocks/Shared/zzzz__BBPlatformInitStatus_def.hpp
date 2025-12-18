#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Shared/BBPlatformInitStatus.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BBPlatformInitStatus)
// Forward declare root types
namespace Meta::XR::MultiplayerBlocks::Shared {
struct BBPlatformInitStatus;
}
// Write type traits
MARK_VAL_T(::Meta::XR::MultiplayerBlocks::Shared::BBPlatformInitStatus);
// Dependencies
namespace Meta::XR::MultiplayerBlocks::Shared {
// Is value type: true
// CS Name: Meta.XR.MultiplayerBlocks.Shared.BBPlatformInitStatus
struct CORDL_TYPE BBPlatformInitStatus {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __BBPlatformInitStatus_Unwrapped
  enum struct __BBPlatformInitStatus_Unwrapped : int32_t {
    __E_NotStarted = static_cast<int32_t>(0x0),
    __E_Initializing = static_cast<int32_t>(0x1),
    __E_Succeeded = static_cast<int32_t>(0x2),
    __E_Failed = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __BBPlatformInitStatus_Unwrapped() const noexcept {
    return static_cast<__BBPlatformInitStatus_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr BBPlatformInitStatus();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr BBPlatformInitStatus(int32_t value__) noexcept;

  /// @brief Field Failed value: I32(3)
  static ::Meta::XR::MultiplayerBlocks::Shared::BBPlatformInitStatus const Failed;

  /// @brief Field Initializing value: I32(1)
  static ::Meta::XR::MultiplayerBlocks::Shared::BBPlatformInitStatus const Initializing;

  /// @brief Field NotStarted value: I32(0)
  static ::Meta::XR::MultiplayerBlocks::Shared::BBPlatformInitStatus const NotStarted;

  /// @brief Field Succeeded value: I32(2)
  static ::Meta::XR::MultiplayerBlocks::Shared::BBPlatformInitStatus const Succeeded;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20375 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::BBPlatformInitStatus, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::MultiplayerBlocks::Shared::BBPlatformInitStatus, 0x4>, "Size mismatch!");

} // namespace Meta::XR::MultiplayerBlocks::Shared
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::MultiplayerBlocks::Shared::BBPlatformInitStatus, "Meta.XR.MultiplayerBlocks.Shared", "BBPlatformInitStatus");

#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Colocation/LogLevel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LogLevel)
// Forward declare root types
namespace Meta::XR::MultiplayerBlocks::Colocation {
struct LogLevel;
}
// Write type traits
MARK_VAL_T(::Meta::XR::MultiplayerBlocks::Colocation::LogLevel);
// Dependencies
namespace Meta::XR::MultiplayerBlocks::Colocation {
// Is value type: true
// CS Name: Meta.XR.MultiplayerBlocks.Colocation.LogLevel
struct CORDL_TYPE LogLevel {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __LogLevel_Unwrapped
  enum struct __LogLevel_Unwrapped : int32_t {
    __E_Verbose = static_cast<int32_t>(0x0),
    __E_Info = static_cast<int32_t>(0x1),
    __E_Warning = static_cast<int32_t>(0x2),
    __E_Error = static_cast<int32_t>(0x3),
    __E_SharedSpatialAnchorsError = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __LogLevel_Unwrapped() const noexcept {
    return static_cast<__LogLevel_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr LogLevel();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr LogLevel(int32_t value__) noexcept;

  /// @brief Field Error value: I32(3)
  static ::Meta::XR::MultiplayerBlocks::Colocation::LogLevel const Error;

  /// @brief Field Info value: I32(1)
  static ::Meta::XR::MultiplayerBlocks::Colocation::LogLevel const Info;

  /// @brief Field SharedSpatialAnchorsError value: I32(4)
  static ::Meta::XR::MultiplayerBlocks::Colocation::LogLevel const SharedSpatialAnchorsError;

  /// @brief Field Verbose value: I32(0)
  static ::Meta::XR::MultiplayerBlocks::Colocation::LogLevel const Verbose;

  /// @brief Field Warning value: I32(2)
  static ::Meta::XR::MultiplayerBlocks::Colocation::LogLevel const Warning;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20393 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::LogLevel, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::MultiplayerBlocks::Colocation::LogLevel, 0x4>, "Size mismatch!");

} // namespace Meta::XR::MultiplayerBlocks::Colocation
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::MultiplayerBlocks::Colocation::LogLevel, "Meta.XR.MultiplayerBlocks.Colocation", "LogLevel");

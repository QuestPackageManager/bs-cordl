#pragma once
// IWYU pragma private; include "LiteNetLib/ShutdownResult.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ShutdownResult)
// Forward declare root types
namespace LiteNetLib {
struct ShutdownResult;
}
// Write type traits
MARK_VAL_T(::LiteNetLib::ShutdownResult);
// Dependencies
namespace LiteNetLib {
// Is value type: true
// CS Name: LiteNetLib.ShutdownResult
struct CORDL_TYPE ShutdownResult {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ShutdownResult_Unwrapped
  enum struct __ShutdownResult_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Success = static_cast<int32_t>(0x1),
    __E_WasConnected = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ShutdownResult_Unwrapped() const noexcept {
    return static_cast<__ShutdownResult_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ShutdownResult();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ShutdownResult(int32_t value__) noexcept;

  /// @brief Field None value: I32(0)
  static ::LiteNetLib::ShutdownResult const None;

  /// @brief Field Success value: I32(1)
  static ::LiteNetLib::ShutdownResult const Success;

  /// @brief Field WasConnected value: I32(2)
  static ::LiteNetLib::ShutdownResult const WasConnected;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16555 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::LiteNetLib::ShutdownResult, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::LiteNetLib::ShutdownResult, 0x4>, "Size mismatch!");

} // namespace LiteNetLib
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::ShutdownResult, "LiteNetLib", "ShutdownResult");

#pragma once
// IWYU pragma private; include "LiteNetLib/DisconnectResult.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DisconnectResult)
// Forward declare root types
namespace LiteNetLib {
struct DisconnectResult;
}
// Write type traits
MARK_VAL_T(::LiteNetLib::DisconnectResult);
// Dependencies
namespace LiteNetLib {
// Is value type: true
// CS Name: LiteNetLib.DisconnectResult
struct CORDL_TYPE DisconnectResult {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __DisconnectResult_Unwrapped
  enum struct __DisconnectResult_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Reject = static_cast<int32_t>(0x1),
    __E_Disconnect = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __DisconnectResult_Unwrapped() const noexcept {
    return static_cast<__DisconnectResult_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr DisconnectResult();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr DisconnectResult(int32_t value__) noexcept;

  /// @brief Field Disconnect value: I32(2)
  static ::LiteNetLib::DisconnectResult const Disconnect;

  /// @brief Field None value: I32(0)
  static ::LiteNetLib::DisconnectResult const None;

  /// @brief Field Reject value: I32(1)
  static ::LiteNetLib::DisconnectResult const Reject;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19843 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::LiteNetLib::DisconnectResult, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::LiteNetLib::DisconnectResult, 0x4>, "Size mismatch!");

} // namespace LiteNetLib
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::DisconnectResult, "LiteNetLib", "DisconnectResult");

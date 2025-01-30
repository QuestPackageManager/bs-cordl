#pragma once
// IWYU pragma private; include "ENet/SslMode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SslMode)
// Forward declare root types
namespace ENet {
struct SslMode;
}
// Write type traits
MARK_VAL_T(::ENet::SslMode);
// Dependencies
namespace ENet {
// Is value type: true
// CS Name: ENet.SslMode
struct CORDL_TYPE SslMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __SslMode_Unwrapped
  enum struct __SslMode_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Server = static_cast<int32_t>(0x1),
    __E_Client = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __SslMode_Unwrapped() const noexcept {
    return static_cast<__SslMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr SslMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr SslMode(int32_t value__) noexcept;

  /// @brief Field Client value: I32(2)
  static ::ENet::SslMode const Client;

  /// @brief Field None value: I32(0)
  static ::ENet::SslMode const None;

  /// @brief Field Server value: I32(1)
  static ::ENet::SslMode const Server;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17732 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::ENet::SslMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::ENet::SslMode, 0x4>, "Size mismatch!");

} // namespace ENet
DEFINE_IL2CPP_ARG_TYPE(::ENet::SslMode, "ENet", "SslMode");

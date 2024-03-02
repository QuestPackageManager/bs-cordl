#pragma once
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
// Type: ENet::SslMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace ENet {
// Is value type: true
// CS Name: ::ENet::SslMode
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
  constexpr operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr SslMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr SslMode(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Client value: static_cast<int32_t>(0x2)
  static ::ENet::SslMode const Client;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::ENet::SslMode const None;

  /// @brief Field Server value: static_cast<int32_t>(0x1)
  static ::ENet::SslMode const Server;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ENet::SslMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::ENet::SslMode, value__) == 0x0, "Offset mismatch!");

} // namespace ENet
DEFINE_IL2CPP_ARG_TYPE(::ENet::SslMode, "ENet", "SslMode");

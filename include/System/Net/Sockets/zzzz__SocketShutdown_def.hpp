#pragma once
// IWYU pragma private; include "System/Net/Sockets/SocketShutdown.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SocketShutdown)
// Forward declare root types
namespace System::Net::Sockets {
struct SocketShutdown;
}
// Write type traits
MARK_VAL_T(::System::Net::Sockets::SocketShutdown);
// Dependencies
namespace System::Net::Sockets {
// Is value type: true
// CS Name: System.Net.Sockets.SocketShutdown
struct CORDL_TYPE SocketShutdown {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __SocketShutdown_Unwrapped
  enum struct __SocketShutdown_Unwrapped : int32_t {
    __E_Receive = static_cast<int32_t>(0x0),
    __E_Send = static_cast<int32_t>(0x1),
    __E_Both = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __SocketShutdown_Unwrapped() const noexcept {
    return static_cast<__SocketShutdown_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr SocketShutdown();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr SocketShutdown(int32_t value__) noexcept;

  /// @brief Field Both value: I32(2)
  static ::System::Net::Sockets::SocketShutdown const Both;

  /// @brief Field Receive value: I32(0)
  static ::System::Net::Sockets::SocketShutdown const Receive;

  /// @brief Field Send value: I32(1)
  static ::System::Net::Sockets::SocketShutdown const Send;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9871 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::Sockets::SocketShutdown, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::Sockets::SocketShutdown, 0x4>, "Size mismatch!");

} // namespace System::Net::Sockets
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Sockets::SocketShutdown, "System.Net.Sockets", "SocketShutdown");

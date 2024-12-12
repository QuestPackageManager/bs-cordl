#pragma once
// IWYU pragma private; include "System/Net/Sockets/TransmitFileOptions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TransmitFileOptions)
// Forward declare root types
namespace System::Net::Sockets {
struct TransmitFileOptions;
}
// Write type traits
MARK_VAL_T(::System::Net::Sockets::TransmitFileOptions);
// Dependencies
namespace System::Net::Sockets {
// Is value type: true
// CS Name: System.Net.Sockets.TransmitFileOptions
struct CORDL_TYPE TransmitFileOptions {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __TransmitFileOptions_Unwrapped
  enum struct __TransmitFileOptions_Unwrapped : int32_t {
    __E_UseDefaultWorkerThread = static_cast<int32_t>(0x0),
    __E_Disconnect = static_cast<int32_t>(0x1),
    __E_ReuseSocket = static_cast<int32_t>(0x2),
    __E_WriteBehind = static_cast<int32_t>(0x4),
    __E_UseSystemThread = static_cast<int32_t>(0x10),
    __E_UseKernelApc = static_cast<int32_t>(0x20),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TransmitFileOptions_Unwrapped() const noexcept {
    return static_cast<__TransmitFileOptions_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr TransmitFileOptions();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TransmitFileOptions(int32_t value__) noexcept;

  /// @brief Field Disconnect value: I32(1)
  static ::System::Net::Sockets::TransmitFileOptions const Disconnect;

  /// @brief Field ReuseSocket value: I32(2)
  static ::System::Net::Sockets::TransmitFileOptions const ReuseSocket;

  /// @brief Field UseDefaultWorkerThread value: I32(0)
  static ::System::Net::Sockets::TransmitFileOptions const UseDefaultWorkerThread;

  /// @brief Field UseKernelApc value: I32(32)
  static ::System::Net::Sockets::TransmitFileOptions const UseKernelApc;

  /// @brief Field UseSystemThread value: I32(16)
  static ::System::Net::Sockets::TransmitFileOptions const UseSystemThread;

  /// @brief Field WriteBehind value: I32(4)
  static ::System::Net::Sockets::TransmitFileOptions const WriteBehind;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9871 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::Sockets::TransmitFileOptions, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::Sockets::TransmitFileOptions, 0x4>, "Size mismatch!");

} // namespace System::Net::Sockets
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Sockets::TransmitFileOptions, "System.Net.Sockets", "TransmitFileOptions");

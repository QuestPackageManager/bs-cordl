#pragma once
// IWYU pragma private; include "LiteNetLib/Utils/NtpMode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NtpMode)
// Forward declare root types
namespace LiteNetLib::Utils {
struct NtpMode;
}
// Write type traits
MARK_VAL_T(::LiteNetLib::Utils::NtpMode);
// Type: LiteNetLib.Utils::NtpMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace LiteNetLib::Utils {
// Is value type: true
// CS Name: ::LiteNetLib.Utils::NtpMode
struct CORDL_TYPE NtpMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __NtpMode_Unwrapped
  enum struct __NtpMode_Unwrapped : int32_t {
    __E_Client = static_cast<int32_t>(0x3),
    __E_Server = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __NtpMode_Unwrapped() const noexcept {
    return static_cast<__NtpMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr NtpMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr NtpMode(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Client value: static_cast<int32_t>(0x3)
  static ::LiteNetLib::Utils::NtpMode const Client;

  /// @brief Field Server value: static_cast<int32_t>(0x4)
  static ::LiteNetLib::Utils::NtpMode const Server;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16578 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LiteNetLib::Utils::NtpMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::LiteNetLib::Utils::NtpMode, value__) == 0x0, "Offset mismatch!");

} // namespace LiteNetLib::Utils
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::Utils::NtpMode, "LiteNetLib.Utils", "NtpMode");

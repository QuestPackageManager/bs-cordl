#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ErrorCode)
// Forward declare root types
namespace UnityOpus {
struct ErrorCode;
}
// Write type traits
MARK_VAL_T(::UnityOpus::ErrorCode);
// Type: UnityOpus::ErrorCode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityOpus {
// Is value type: true
// CS Name: ::UnityOpus::ErrorCode
struct CORDL_TYPE ErrorCode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ErrorCode_Unwrapped
  enum struct __ErrorCode_Unwrapped : int32_t {
    __E_OK = static_cast<int32_t>(0x0),
    __E_BadArg = static_cast<int32_t>(0xffffffff),
    __E_BufferTooSmall = static_cast<int32_t>(0xfffffffe),
    __E_InternalError = static_cast<int32_t>(0xfffffffd),
    __E_InvalidPacket = static_cast<int32_t>(0xfffffffc),
    __E_Unimplemented = static_cast<int32_t>(0xfffffffb),
    __E_InvalidState = static_cast<int32_t>(0xfffffffa),
    __E_AllocFail = static_cast<int32_t>(0xfffffff9),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ErrorCode_Unwrapped() const noexcept {
    return static_cast<__ErrorCode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ErrorCode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ErrorCode(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field AllocFail value: static_cast<int32_t>(0xfffffff9)
  static ::UnityOpus::ErrorCode const AllocFail;

  /// @brief Field BadArg value: static_cast<int32_t>(0xffffffff)
  static ::UnityOpus::ErrorCode const BadArg;

  /// @brief Field BufferTooSmall value: static_cast<int32_t>(0xfffffffe)
  static ::UnityOpus::ErrorCode const BufferTooSmall;

  /// @brief Field InternalError value: static_cast<int32_t>(0xfffffffd)
  static ::UnityOpus::ErrorCode const InternalError;

  /// @brief Field InvalidPacket value: static_cast<int32_t>(0xfffffffc)
  static ::UnityOpus::ErrorCode const InvalidPacket;

  /// @brief Field InvalidState value: static_cast<int32_t>(0xfffffffa)
  static ::UnityOpus::ErrorCode const InvalidState;

  /// @brief Field OK value: static_cast<int32_t>(0x0)
  static ::UnityOpus::ErrorCode const OK;

  /// @brief Field Unimplemented value: static_cast<int32_t>(0xfffffffb)
  static ::UnityOpus::ErrorCode const Unimplemented;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityOpus::ErrorCode, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityOpus::ErrorCode, value__) == 0x0, "Offset mismatch!");

} // namespace UnityOpus
DEFINE_IL2CPP_ARG_TYPE(::UnityOpus::ErrorCode, "UnityOpus", "ErrorCode");

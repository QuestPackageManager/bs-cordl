#pragma once
// IWYU pragma private; include "OVR/OpenVR/EIOBufferError.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EIOBufferError)
// Forward declare root types
namespace OVR::OpenVR {
struct EIOBufferError;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::EIOBufferError);
// Dependencies
namespace OVR::OpenVR {
// Is value type: true
// CS Name: OVR.OpenVR.EIOBufferError
struct CORDL_TYPE EIOBufferError {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __EIOBufferError_Unwrapped
  enum struct __EIOBufferError_Unwrapped : int32_t {
    __E_IOBuffer_Success = static_cast<int32_t>(0x0),
    __E_IOBuffer_OperationFailed = static_cast<int32_t>(0x64),
    __E_IOBuffer_InvalidHandle = static_cast<int32_t>(0x65),
    __E_IOBuffer_InvalidArgument = static_cast<int32_t>(0x66),
    __E_IOBuffer_PathExists = static_cast<int32_t>(0x67),
    __E_IOBuffer_PathDoesNotExist = static_cast<int32_t>(0x68),
    __E_IOBuffer_Permission = static_cast<int32_t>(0x69),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __EIOBufferError_Unwrapped() const noexcept {
    return static_cast<__EIOBufferError_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr EIOBufferError();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr EIOBufferError(int32_t value__) noexcept;

  /// @brief Field IOBuffer_InvalidArgument value: I32(102)
  static ::OVR::OpenVR::EIOBufferError const IOBuffer_InvalidArgument;

  /// @brief Field IOBuffer_InvalidHandle value: I32(101)
  static ::OVR::OpenVR::EIOBufferError const IOBuffer_InvalidHandle;

  /// @brief Field IOBuffer_OperationFailed value: I32(100)
  static ::OVR::OpenVR::EIOBufferError const IOBuffer_OperationFailed;

  /// @brief Field IOBuffer_PathDoesNotExist value: I32(104)
  static ::OVR::OpenVR::EIOBufferError const IOBuffer_PathDoesNotExist;

  /// @brief Field IOBuffer_PathExists value: I32(103)
  static ::OVR::OpenVR::EIOBufferError const IOBuffer_PathExists;

  /// @brief Field IOBuffer_Permission value: I32(105)
  static ::OVR::OpenVR::EIOBufferError const IOBuffer_Permission;

  /// @brief Field IOBuffer_Success value: I32(0)
  static ::OVR::OpenVR::EIOBufferError const IOBuffer_Success;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8957 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OVR::OpenVR::EIOBufferError, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::EIOBufferError, 0x4>, "Size mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::EIOBufferError, "OVR.OpenVR", "EIOBufferError");

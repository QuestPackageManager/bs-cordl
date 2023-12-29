#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ConnectionRequestResult)
// Forward declare root types
namespace LiteNetLib {
struct ConnectionRequestResult;
}
// Write type traits
MARK_VAL_T(::LiteNetLib::ConnectionRequestResult);
// Type: LiteNetLib::ConnectionRequestResult
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace LiteNetLib {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14466))
// CS Name: ::LiteNetLib::ConnectionRequestResult
struct CORDL_TYPE ConnectionRequestResult {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ConnectionRequestResult_Unwrapped
  enum struct __ConnectionRequestResult_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Accept = static_cast<int32_t>(0x1),
    __E_Reject = static_cast<int32_t>(0x2),
    __E_RejectForce = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ConnectionRequestResult_Unwrapped() const noexcept {
    return static_cast<__ConnectionRequestResult_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ConnectionRequestResult(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr ConnectionRequestResult();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::LiteNetLib::ConnectionRequestResult const None;

  /// @brief Field Accept value: static_cast<int32_t>(0x1)
  static ::LiteNetLib::ConnectionRequestResult const Accept;

  /// @brief Field Reject value: static_cast<int32_t>(0x2)
  static ::LiteNetLib::ConnectionRequestResult const Reject;

  /// @brief Field RejectForce value: static_cast<int32_t>(0x3)
  static ::LiteNetLib::ConnectionRequestResult const RejectForce;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LiteNetLib::ConnectionRequestResult, 0x4>, "Size mismatch!");

static_assert(offsetof(::LiteNetLib::ConnectionRequestResult, value__) == 0x0, "Offset mismatch!");

} // namespace LiteNetLib
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::ConnectionRequestResult, "LiteNetLib", "ConnectionRequestResult");

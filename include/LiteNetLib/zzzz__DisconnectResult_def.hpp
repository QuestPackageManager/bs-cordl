#pragma once
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
// Type: LiteNetLib::DisconnectResult
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace LiteNetLib {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14188))
// CS Name: ::LiteNetLib::DisconnectResult
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr DisconnectResult(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr DisconnectResult();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::LiteNetLib::DisconnectResult const None;

  /// @brief Field Reject value: static_cast<int32_t>(0x1)
  static ::LiteNetLib::DisconnectResult const Reject;

  /// @brief Field Disconnect value: static_cast<int32_t>(0x2)
  static ::LiteNetLib::DisconnectResult const Disconnect;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LiteNetLib::DisconnectResult, 0x4>, "Size mismatch!");

static_assert(offsetof(::LiteNetLib::DisconnectResult, value__) == 0x0, "Offset mismatch!");

} // namespace LiteNetLib
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::DisconnectResult, "LiteNetLib", "DisconnectResult");

#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PacketOption)
// Forward declare root types
namespace GlobalNamespace {
struct PacketOption;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PacketOption);
// Type: ::PacketOption
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12915))
// CS Name: ::PacketOption
struct CORDL_TYPE PacketOption {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __PacketOption_Unwrapped
  enum struct __PacketOption_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Encrypted = static_cast<int32_t>(0x1),
    __E_OnlyFirstDegreeConnections = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __PacketOption_Unwrapped() const noexcept {
    return static_cast<__PacketOption_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr PacketOption(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr PacketOption();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::PacketOption const None;

  /// @brief Field Encrypted value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::PacketOption const Encrypted;

  /// @brief Field OnlyFirstDegreeConnections value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::PacketOption const OnlyFirstDegreeConnections;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PacketOption, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PacketOption, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PacketOption, "", "PacketOption");

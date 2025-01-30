#pragma once
// IWYU pragma private; include "GlobalNamespace/PacketOption.hpp"
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
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: PacketOption
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

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr PacketOption();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr PacketOption(int32_t value__) noexcept;

  /// @brief Field Encrypted value: I32(1)
  static ::GlobalNamespace::PacketOption const Encrypted;

  /// @brief Field None value: I32(0)
  static ::GlobalNamespace::PacketOption const None;

  /// @brief Field OnlyFirstDegreeConnections value: I32(2)
  static ::GlobalNamespace::PacketOption const OnlyFirstDegreeConnections;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14923 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PacketOption, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PacketOption, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PacketOption, "", "PacketOption");

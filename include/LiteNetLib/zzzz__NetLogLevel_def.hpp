#pragma once
// IWYU pragma private; include "LiteNetLib/NetLogLevel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetLogLevel)
// Forward declare root types
namespace LiteNetLib {
struct NetLogLevel;
}
// Write type traits
MARK_VAL_T(::LiteNetLib::NetLogLevel);
// Dependencies
namespace LiteNetLib {
// Is value type: true
// CS Name: LiteNetLib.NetLogLevel
struct CORDL_TYPE NetLogLevel {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __NetLogLevel_Unwrapped
  enum struct __NetLogLevel_Unwrapped : int32_t {
    __E_Warning = static_cast<int32_t>(0x0),
    __E_Error = static_cast<int32_t>(0x1),
    __E_Trace = static_cast<int32_t>(0x2),
    __E_Info = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __NetLogLevel_Unwrapped() const noexcept {
    return static_cast<__NetLogLevel_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr NetLogLevel();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr NetLogLevel(int32_t value__) noexcept;

  /// @brief Field Error value: I32(1)
  static ::LiteNetLib::NetLogLevel const Error;

  /// @brief Field Info value: I32(3)
  static ::LiteNetLib::NetLogLevel const Info;

  /// @brief Field Trace value: I32(2)
  static ::LiteNetLib::NetLogLevel const Trace;

  /// @brief Field Warning value: I32(0)
  static ::LiteNetLib::NetLogLevel const Warning;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16543 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::LiteNetLib::NetLogLevel, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::LiteNetLib::NetLogLevel, 0x4>, "Size mismatch!");

} // namespace LiteNetLib
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::NetLogLevel, "LiteNetLib", "NetLogLevel");

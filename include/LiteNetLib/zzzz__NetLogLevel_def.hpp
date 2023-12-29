#pragma once
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
// Type: LiteNetLib::NetLogLevel
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace LiteNetLib {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14495))
// CS Name: ::LiteNetLib::NetLogLevel
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr NetLogLevel(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr NetLogLevel();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Warning value: static_cast<int32_t>(0x0)
  static ::LiteNetLib::NetLogLevel const Warning;

  /// @brief Field Error value: static_cast<int32_t>(0x1)
  static ::LiteNetLib::NetLogLevel const Error;

  /// @brief Field Trace value: static_cast<int32_t>(0x2)
  static ::LiteNetLib::NetLogLevel const Trace;

  /// @brief Field Info value: static_cast<int32_t>(0x3)
  static ::LiteNetLib::NetLogLevel const Info;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LiteNetLib::NetLogLevel, 0x4>, "Size mismatch!");

static_assert(offsetof(::LiteNetLib::NetLogLevel, value__) == 0x0, "Offset mismatch!");

} // namespace LiteNetLib
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::NetLogLevel, "LiteNetLib", "NetLogLevel");

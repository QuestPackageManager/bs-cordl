#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IgnoranceLogType)
// Forward declare root types
namespace IgnoranceCore {
struct IgnoranceLogType;
}
// Write type traits
MARK_VAL_T(::IgnoranceCore::IgnoranceLogType);
// Type: IgnoranceCore::IgnoranceLogType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace IgnoranceCore {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15357))
// CS Name: ::IgnoranceCore::IgnoranceLogType
struct CORDL_TYPE IgnoranceLogType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __IgnoranceLogType_Unwrapped
  enum struct __IgnoranceLogType_Unwrapped : int32_t {
    __E_Quiet = static_cast<int32_t>(0x0),
    __E_Standard = static_cast<int32_t>(0x1),
    __E_Verbose = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __IgnoranceLogType_Unwrapped() const noexcept {
    return static_cast<__IgnoranceLogType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr IgnoranceLogType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr IgnoranceLogType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Quiet value: static_cast<int32_t>(0x0)
  static ::IgnoranceCore::IgnoranceLogType const Quiet;

  /// @brief Field Standard value: static_cast<int32_t>(0x1)
  static ::IgnoranceCore::IgnoranceLogType const Standard;

  /// @brief Field Verbose value: static_cast<int32_t>(0x2)
  static ::IgnoranceCore::IgnoranceLogType const Verbose;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::IgnoranceCore::IgnoranceLogType, 0x4>, "Size mismatch!");

static_assert(offsetof(::IgnoranceCore::IgnoranceLogType, value__) == 0x0, "Offset mismatch!");

} // namespace IgnoranceCore
DEFINE_IL2CPP_ARG_TYPE(::IgnoranceCore::IgnoranceLogType, "IgnoranceCore", "IgnoranceLogType");

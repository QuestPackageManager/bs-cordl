#pragma once
// IWYU pragma private; include "IgnoranceCore/IgnoranceLogType.hpp"
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
// Dependencies
namespace IgnoranceCore {
// Is value type: true
// CS Name: IgnoranceCore.IgnoranceLogType
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

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr IgnoranceLogType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr IgnoranceLogType(int32_t value__) noexcept;

  /// @brief Field Quiet value: I32(0)
  static ::IgnoranceCore::IgnoranceLogType const Quiet;

  /// @brief Field Standard value: I32(1)
  static ::IgnoranceCore::IgnoranceLogType const Standard;

  /// @brief Field Verbose value: I32(2)
  static ::IgnoranceCore::IgnoranceLogType const Verbose;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21524 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::IgnoranceCore::IgnoranceLogType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::IgnoranceCore::IgnoranceLogType, 0x4>, "Size mismatch!");

} // namespace IgnoranceCore
DEFINE_IL2CPP_ARG_TYPE(::IgnoranceCore::IgnoranceLogType, "IgnoranceCore", "IgnoranceLogType");

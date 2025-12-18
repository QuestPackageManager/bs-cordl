#pragma once
// IWYU pragma private; include "Oculus/Platform/OfferTerm.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OfferTerm)
// Forward declare root types
namespace Oculus::Platform {
struct OfferTerm;
}
// Write type traits
MARK_VAL_T(::Oculus::Platform::OfferTerm);
// Dependencies
namespace Oculus::Platform {
// Is value type: true
// CS Name: Oculus.Platform.OfferTerm
struct CORDL_TYPE OfferTerm {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OfferTerm_Unwrapped
  enum struct __OfferTerm_Unwrapped : int32_t {
    __E_Unknown = static_cast<int32_t>(0x0),
    __E_WEEKLY = static_cast<int32_t>(0x1),
    __E_BIWEEKLY = static_cast<int32_t>(0x2),
    __E_MONTHLY = static_cast<int32_t>(0x3),
    __E_QUARTERLY = static_cast<int32_t>(0x4),
    __E_SEMIANNUAL = static_cast<int32_t>(0x5),
    __E_ANNUAL = static_cast<int32_t>(0x6),
    __E_BIANNUAL = static_cast<int32_t>(0x7),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OfferTerm_Unwrapped() const noexcept {
    return static_cast<__OfferTerm_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OfferTerm();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OfferTerm(int32_t value__) noexcept;

  /// @brief Field ANNUAL value: I32(6)
  static ::Oculus::Platform::OfferTerm const ANNUAL;

  /// @brief Field BIANNUAL value: I32(7)
  static ::Oculus::Platform::OfferTerm const BIANNUAL;

  /// @brief Field BIWEEKLY value: I32(2)
  static ::Oculus::Platform::OfferTerm const BIWEEKLY;

  /// @brief Field MONTHLY value: I32(3)
  static ::Oculus::Platform::OfferTerm const MONTHLY;

  /// @brief Field QUARTERLY value: I32(4)
  static ::Oculus::Platform::OfferTerm const QUARTERLY;

  /// @brief Field SEMIANNUAL value: I32(5)
  static ::Oculus::Platform::OfferTerm const SEMIANNUAL;

  /// @brief Field Unknown value: I32(0)
  static ::Oculus::Platform::OfferTerm const Unknown;

  /// @brief Field WEEKLY value: I32(1)
  static ::Oculus::Platform::OfferTerm const WEEKLY;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17905 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Platform::OfferTerm, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Oculus::Platform::OfferTerm, 0x4>, "Size mismatch!");

} // namespace Oculus::Platform
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::OfferTerm, "Oculus.Platform", "OfferTerm");

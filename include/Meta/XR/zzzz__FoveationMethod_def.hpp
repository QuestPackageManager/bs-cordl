#pragma once
// IWYU pragma private; include "Meta/XR/FoveationMethod.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FoveationMethod)
// Forward declare root types
namespace Meta::XR {
struct FoveationMethod;
}
// Write type traits
MARK_VAL_T(::Meta::XR::FoveationMethod);
// Dependencies
namespace Meta::XR {
// Is value type: true
// CS Name: Meta.XR.FoveationMethod
struct CORDL_TYPE FoveationMethod {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __FoveationMethod_Unwrapped
  enum struct __FoveationMethod_Unwrapped : int32_t {
    __E_FFR = static_cast<int32_t>(0x0),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __FoveationMethod_Unwrapped() const noexcept {
    return static_cast<__FoveationMethod_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr FoveationMethod();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr FoveationMethod(int32_t value__) noexcept;

  /// @brief Field FFR value: I32(0)
  static ::Meta::XR::FoveationMethod const FFR;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8539 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::FoveationMethod, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::FoveationMethod, 0x4>, "Size mismatch!");

} // namespace Meta::XR
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::FoveationMethod, "Meta.XR", "FoveationMethod");

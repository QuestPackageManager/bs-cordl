#pragma once
// IWYU pragma private; include "OculusStudios/GraphQL/ClientInterface/FailureHandlingMethod.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FailureHandlingMethod)
// Forward declare root types
namespace OculusStudios::GraphQL::ClientInterface {
struct FailureHandlingMethod;
}
// Write type traits
MARK_VAL_T(::OculusStudios::GraphQL::ClientInterface::FailureHandlingMethod);
// Dependencies
namespace OculusStudios::GraphQL::ClientInterface {
// Is value type: true
// CS Name: OculusStudios.GraphQL.ClientInterface.FailureHandlingMethod
struct CORDL_TYPE FailureHandlingMethod {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __FailureHandlingMethod_Unwrapped
  enum struct __FailureHandlingMethod_Unwrapped : int32_t {
    __E_GoOffline = static_cast<int32_t>(0x0),
    __E_Retry = static_cast<int32_t>(0x1),
    __E_Silent = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __FailureHandlingMethod_Unwrapped() const noexcept {
    return static_cast<__FailureHandlingMethod_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr FailureHandlingMethod();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr FailureHandlingMethod(int32_t value__) noexcept;

  /// @brief Field GoOffline value: I32(0)
  static ::OculusStudios::GraphQL::ClientInterface::FailureHandlingMethod const GoOffline;

  /// @brief Field Retry value: I32(1)
  static ::OculusStudios::GraphQL::ClientInterface::FailureHandlingMethod const Retry;

  /// @brief Field Silent value: I32(2)
  static ::OculusStudios::GraphQL::ClientInterface::FailureHandlingMethod const Silent;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22464 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OculusStudios::GraphQL::ClientInterface::FailureHandlingMethod, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OculusStudios::GraphQL::ClientInterface::FailureHandlingMethod, 0x4>, "Size mismatch!");

} // namespace OculusStudios::GraphQL::ClientInterface
DEFINE_IL2CPP_ARG_TYPE(::OculusStudios::GraphQL::ClientInterface::FailureHandlingMethod, "OculusStudios.GraphQL.ClientInterface", "FailureHandlingMethod");

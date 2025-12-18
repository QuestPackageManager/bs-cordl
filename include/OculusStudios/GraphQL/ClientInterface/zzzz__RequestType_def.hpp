#pragma once
// IWYU pragma private; include "OculusStudios/GraphQL/ClientInterface/RequestType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RequestType)
// Forward declare root types
namespace OculusStudios::GraphQL::ClientInterface {
struct RequestType;
}
// Write type traits
MARK_VAL_T(::OculusStudios::GraphQL::ClientInterface::RequestType);
// Dependencies
namespace OculusStudios::GraphQL::ClientInterface {
// Is value type: true
// CS Name: OculusStudios.GraphQL.ClientInterface.RequestType
struct CORDL_TYPE RequestType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint8_t;

  /// @brief Nested struct __RequestType_Unwrapped
  enum struct __RequestType_Unwrapped : uint8_t {
    __E_Unknown = static_cast<uint8_t>(0x0u),
    __E_Query = static_cast<uint8_t>(0x1u),
    __E_Mutation = static_cast<uint8_t>(0x2u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __RequestType_Unwrapped() const noexcept {
    return static_cast<__RequestType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint8_t() const noexcept {
    return static_cast<uint8_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr RequestType();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr RequestType(uint8_t value__) noexcept;

  /// @brief Field Mutation value: U8(2)
  static ::OculusStudios::GraphQL::ClientInterface::RequestType const Mutation;

  /// @brief Field Query value: U8(1)
  static ::OculusStudios::GraphQL::ClientInterface::RequestType const Query;

  /// @brief Field Unknown value: U8(0)
  static ::OculusStudios::GraphQL::ClientInterface::RequestType const Unknown;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22481 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Field value__, offset: 0x0, size: 0x1, def value: None
  uint8_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OculusStudios::GraphQL::ClientInterface::RequestType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OculusStudios::GraphQL::ClientInterface::RequestType, 0x1>, "Size mismatch!");

} // namespace OculusStudios::GraphQL::ClientInterface
DEFINE_IL2CPP_ARG_TYPE(::OculusStudios::GraphQL::ClientInterface::RequestType, "OculusStudios.GraphQL.ClientInterface", "RequestType");

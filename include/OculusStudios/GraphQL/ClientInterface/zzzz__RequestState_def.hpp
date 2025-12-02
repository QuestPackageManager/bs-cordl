#pragma once
// IWYU pragma private; include "OculusStudios/GraphQL/ClientInterface/RequestState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RequestState)
// Forward declare root types
namespace OculusStudios::GraphQL::ClientInterface {
struct RequestState;
}
// Write type traits
MARK_VAL_T(::OculusStudios::GraphQL::ClientInterface::RequestState);
// Dependencies
namespace OculusStudios::GraphQL::ClientInterface {
// Is value type: true
// CS Name: OculusStudios.GraphQL.ClientInterface.RequestState
struct CORDL_TYPE RequestState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __RequestState_Unwrapped
  enum struct __RequestState_Unwrapped : int32_t {
    __E_NotTracked = static_cast<int32_t>(0x0),
    __E_WaitingToAddToDictionary = static_cast<int32_t>(0x1),
    __E_Enqueueing = static_cast<int32_t>(0x2),
    __E_Processing = static_cast<int32_t>(0x3),
    __E_Converting = static_cast<int32_t>(0x4),
    __E_Retrying = static_cast<int32_t>(0x5),
    __E_Complete = static_cast<int32_t>(0x6),
    __E_WaitingToRmFromDictionary = static_cast<int32_t>(0x7),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __RequestState_Unwrapped() const noexcept {
    return static_cast<__RequestState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr RequestState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr RequestState(int32_t value__) noexcept;

  /// @brief Field Complete value: I32(6)
  static ::OculusStudios::GraphQL::ClientInterface::RequestState const Complete;

  /// @brief Field Converting value: I32(4)
  static ::OculusStudios::GraphQL::ClientInterface::RequestState const Converting;

  /// @brief Field Enqueueing value: I32(2)
  static ::OculusStudios::GraphQL::ClientInterface::RequestState const Enqueueing;

  /// @brief Field NotTracked value: I32(0)
  static ::OculusStudios::GraphQL::ClientInterface::RequestState const NotTracked;

  /// @brief Field Processing value: I32(3)
  static ::OculusStudios::GraphQL::ClientInterface::RequestState const Processing;

  /// @brief Field Retrying value: I32(5)
  static ::OculusStudios::GraphQL::ClientInterface::RequestState const Retrying;

  /// @brief Field WaitingToAddToDictionary value: I32(1)
  static ::OculusStudios::GraphQL::ClientInterface::RequestState const WaitingToAddToDictionary;

  /// @brief Field WaitingToRmFromDictionary value: I32(7)
  static ::OculusStudios::GraphQL::ClientInterface::RequestState const WaitingToRmFromDictionary;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22452 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OculusStudios::GraphQL::ClientInterface::RequestState, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OculusStudios::GraphQL::ClientInterface::RequestState, 0x4>, "Size mismatch!");

} // namespace OculusStudios::GraphQL::ClientInterface
DEFINE_IL2CPP_ARG_TYPE(::OculusStudios::GraphQL::ClientInterface::RequestState, "OculusStudios.GraphQL.ClientInterface", "RequestState");

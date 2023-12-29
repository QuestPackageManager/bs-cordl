#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ReportRequestResponse)
// Forward declare root types
namespace Oculus::Platform {
struct ReportRequestResponse;
}
// Write type traits
MARK_VAL_T(::Oculus::Platform::ReportRequestResponse);
// Type: Oculus.Platform::ReportRequestResponse
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13412))
// CS Name: ::Oculus.Platform::ReportRequestResponse
struct CORDL_TYPE ReportRequestResponse {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ReportRequestResponse_Unwrapped
  enum struct __ReportRequestResponse_Unwrapped : int32_t {
    __E_Unknown = static_cast<int32_t>(0x0),
    __E_Handled = static_cast<int32_t>(0x1),
    __E_Unhandled = static_cast<int32_t>(0x2),
    __E_Unavailable = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ReportRequestResponse_Unwrapped() const noexcept {
    return static_cast<__ReportRequestResponse_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ReportRequestResponse(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr ReportRequestResponse();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Unknown value: static_cast<int32_t>(0x0)
  static ::Oculus::Platform::ReportRequestResponse const Unknown;

  /// @brief Field Handled value: static_cast<int32_t>(0x1)
  static ::Oculus::Platform::ReportRequestResponse const Handled;

  /// @brief Field Unhandled value: static_cast<int32_t>(0x2)
  static ::Oculus::Platform::ReportRequestResponse const Unhandled;

  /// @brief Field Unavailable value: static_cast<int32_t>(0x3)
  static ::Oculus::Platform::ReportRequestResponse const Unavailable;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::ReportRequestResponse, 0x4>, "Size mismatch!");

static_assert(offsetof(::Oculus::Platform::ReportRequestResponse, value__) == 0x0, "Offset mismatch!");

} // namespace Oculus::Platform
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::ReportRequestResponse, "Oculus.Platform", "ReportRequestResponse");

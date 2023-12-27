#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AbuseReportVideoMode)
// Forward declare root types
namespace Oculus::Platform {
struct AbuseReportVideoMode;
}
// Write type traits
MARK_VAL_T(::Oculus::Platform::AbuseReportVideoMode);
// Type: Oculus.Platform::AbuseReportVideoMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13223))
// CS Name: ::Oculus.Platform::AbuseReportVideoMode
struct CORDL_TYPE AbuseReportVideoMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __AbuseReportVideoMode_Unwrapped
  enum struct __AbuseReportVideoMode_Unwrapped : int32_t {
    __E_Unknown = static_cast<int32_t>(0x0),
    __E_Collect = static_cast<int32_t>(0x1),
    __E_Optional = static_cast<int32_t>(0x2),
    __E_Skip = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __AbuseReportVideoMode_Unwrapped() const noexcept {
    return static_cast<__AbuseReportVideoMode_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr AbuseReportVideoMode(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr AbuseReportVideoMode();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Unknown value: static_cast<int32_t>(0x0)
  static ::Oculus::Platform::AbuseReportVideoMode const Unknown;

  /// @brief Field Collect value: static_cast<int32_t>(0x1)
  static ::Oculus::Platform::AbuseReportVideoMode const Collect;

  /// @brief Field Optional value: static_cast<int32_t>(0x2)
  static ::Oculus::Platform::AbuseReportVideoMode const Optional;

  /// @brief Field Skip value: static_cast<int32_t>(0x3)
  static ::Oculus::Platform::AbuseReportVideoMode const Skip;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::AbuseReportVideoMode, 0x4>, "Size mismatch!");

} // namespace Oculus::Platform
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::AbuseReportVideoMode, "Oculus.Platform", "AbuseReportVideoMode");

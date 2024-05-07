#pragma once
// IWYU pragma private; include "TMPro/Compute_DistanceTransform_EventTypes.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Compute_DistanceTransform_EventTypes)
// Forward declare root types
namespace TMPro {
struct Compute_DistanceTransform_EventTypes;
}
// Write type traits
MARK_VAL_T(::TMPro::Compute_DistanceTransform_EventTypes);
// Type: TMPro::Compute_DistanceTransform_EventTypes
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: true
// CS Name: ::TMPro::Compute_DistanceTransform_EventTypes
struct CORDL_TYPE Compute_DistanceTransform_EventTypes {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __Compute_DistanceTransform_EventTypes_Unwrapped
  enum struct __Compute_DistanceTransform_EventTypes_Unwrapped : int32_t {
    __E_Processing = static_cast<int32_t>(0x0),
    __E_Completed = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __Compute_DistanceTransform_EventTypes_Unwrapped() const noexcept {
    return static_cast<__Compute_DistanceTransform_EventTypes_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr Compute_DistanceTransform_EventTypes();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Compute_DistanceTransform_EventTypes(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Completed value: static_cast<int32_t>(0x1)
  static ::TMPro::Compute_DistanceTransform_EventTypes const Completed;

  /// @brief Field Processing value: static_cast<int32_t>(0x0)
  static ::TMPro::Compute_DistanceTransform_EventTypes const Processing;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::Compute_DistanceTransform_EventTypes, 0x4>, "Size mismatch!");

static_assert(offsetof(::TMPro::Compute_DistanceTransform_EventTypes, value__) == 0x0, "Offset mismatch!");

} // namespace TMPro
DEFINE_IL2CPP_ARG_TYPE(::TMPro::Compute_DistanceTransform_EventTypes, "TMPro", "Compute_DistanceTransform_EventTypes");

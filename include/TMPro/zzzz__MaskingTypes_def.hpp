#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MaskingTypes)
// Forward declare root types
namespace TMPro {
struct MaskingTypes;
}
// Write type traits
MARK_VAL_T(::TMPro::MaskingTypes);
// Type: TMPro::MaskingTypes
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12332))
// CS Name: ::TMPro::MaskingTypes
struct CORDL_TYPE MaskingTypes {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __MaskingTypes_Unwrapped
  enum struct __MaskingTypes_Unwrapped : int32_t {
    __E_MaskOff = static_cast<int32_t>(0x0),
    __E_MaskHard = static_cast<int32_t>(0x1),
    __E_MaskSoft = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __MaskingTypes_Unwrapped() const noexcept {
    return static_cast<__MaskingTypes_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr MaskingTypes(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr MaskingTypes();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field MaskOff value: static_cast<int32_t>(0x0)
  static ::TMPro::MaskingTypes const MaskOff;

  /// @brief Field MaskHard value: static_cast<int32_t>(0x1)
  static ::TMPro::MaskingTypes const MaskHard;

  /// @brief Field MaskSoft value: static_cast<int32_t>(0x2)
  static ::TMPro::MaskingTypes const MaskSoft;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::MaskingTypes, 0x4>, "Size mismatch!");

static_assert(offsetof(::TMPro::MaskingTypes, value__) == 0x0, "Offset mismatch!");

} // namespace TMPro
DEFINE_IL2CPP_ARG_TYPE(::TMPro::MaskingTypes, "TMPro", "MaskingTypes");

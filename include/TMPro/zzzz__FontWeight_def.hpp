#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FontWeight)
// Forward declare root types
namespace TMPro {
struct FontWeight;
}
// Write type traits
MARK_VAL_T(::TMPro::FontWeight);
// Type: TMPro::FontWeight
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12337))
// CS Name: ::TMPro::FontWeight
struct CORDL_TYPE FontWeight {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __FontWeight_Unwrapped
  enum struct __FontWeight_Unwrapped : int32_t {
    __E_Thin = static_cast<int32_t>(0x64),
    __E_ExtraLight = static_cast<int32_t>(0xc8),
    __E_Light = static_cast<int32_t>(0x12c),
    __E_Regular = static_cast<int32_t>(0x190),
    __E_Medium = static_cast<int32_t>(0x1f4),
    __E_SemiBold = static_cast<int32_t>(0x258),
    __E_Bold = static_cast<int32_t>(0x2bc),
    __E_Heavy = static_cast<int32_t>(0x320),
    __E_Black = static_cast<int32_t>(0x384),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __FontWeight_Unwrapped() const noexcept {
    return static_cast<__FontWeight_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr FontWeight(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr FontWeight();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Thin value: static_cast<int32_t>(0x64)
  static ::TMPro::FontWeight const Thin;

  /// @brief Field ExtraLight value: static_cast<int32_t>(0xc8)
  static ::TMPro::FontWeight const ExtraLight;

  /// @brief Field Light value: static_cast<int32_t>(0x12c)
  static ::TMPro::FontWeight const Light;

  /// @brief Field Regular value: static_cast<int32_t>(0x190)
  static ::TMPro::FontWeight const Regular;

  /// @brief Field Medium value: static_cast<int32_t>(0x1f4)
  static ::TMPro::FontWeight const Medium;

  /// @brief Field SemiBold value: static_cast<int32_t>(0x258)
  static ::TMPro::FontWeight const SemiBold;

  /// @brief Field Bold value: static_cast<int32_t>(0x2bc)
  static ::TMPro::FontWeight const Bold;

  /// @brief Field Heavy value: static_cast<int32_t>(0x320)
  static ::TMPro::FontWeight const Heavy;

  /// @brief Field Black value: static_cast<int32_t>(0x384)
  static ::TMPro::FontWeight const Black;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::FontWeight, 0x4>, "Size mismatch!");

static_assert(offsetof(::TMPro::FontWeight, value__) == 0x0, "Offset mismatch!");

} // namespace TMPro
DEFINE_IL2CPP_ARG_TYPE(::TMPro::FontWeight, "TMPro", "FontWeight");

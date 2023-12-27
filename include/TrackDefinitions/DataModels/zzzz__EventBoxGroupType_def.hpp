#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EventBoxGroupType)
// Forward declare root types
namespace TrackDefinitions::DataModels {
struct EventBoxGroupType;
}
// Write type traits
MARK_VAL_T(::TrackDefinitions::DataModels::EventBoxGroupType);
// Type: TrackDefinitions.DataModels::EventBoxGroupType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace TrackDefinitions::DataModels {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16072))
// CS Name: ::TrackDefinitions.DataModels::EventBoxGroupType
struct CORDL_TYPE EventBoxGroupType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __EventBoxGroupType_Unwrapped
  enum struct __EventBoxGroupType_Unwrapped : int32_t {
    __E_Color = static_cast<int32_t>(0x0),
    __E_Rotation = static_cast<int32_t>(0x1),
    __E_Translation = static_cast<int32_t>(0x2),
    __E_FloatFx = static_cast<int32_t>(0xb),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __EventBoxGroupType_Unwrapped() const noexcept {
    return static_cast<__EventBoxGroupType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr EventBoxGroupType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr EventBoxGroupType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Color value: static_cast<int32_t>(0x0)
  static ::TrackDefinitions::DataModels::EventBoxGroupType const Color;

  /// @brief Field Rotation value: static_cast<int32_t>(0x1)
  static ::TrackDefinitions::DataModels::EventBoxGroupType const Rotation;

  /// @brief Field Translation value: static_cast<int32_t>(0x2)
  static ::TrackDefinitions::DataModels::EventBoxGroupType const Translation;

  /// @brief Field FloatFx value: static_cast<int32_t>(0xb)
  static ::TrackDefinitions::DataModels::EventBoxGroupType const FloatFx;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TrackDefinitions::DataModels::EventBoxGroupType, 0x4>, "Size mismatch!");

} // namespace TrackDefinitions::DataModels
DEFINE_IL2CPP_ARG_TYPE(::TrackDefinitions::DataModels::EventBoxGroupType, "TrackDefinitions.DataModels", "EventBoxGroupType");

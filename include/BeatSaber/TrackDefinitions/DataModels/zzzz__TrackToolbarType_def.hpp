#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TrackToolbarType)
// Forward declare root types
namespace BeatSaber::TrackDefinitions::DataModels {
struct TrackToolbarType;
}
// Write type traits
MARK_VAL_T(::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType);
// Type: BeatSaber.TrackDefinitions.DataModels::TrackToolbarType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace BeatSaber::TrackDefinitions::DataModels {
// Is value type: true
// CS Name: ::BeatSaber.TrackDefinitions.DataModels::TrackToolbarType
struct CORDL_TYPE TrackToolbarType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __TrackToolbarType_Unwrapped
  enum struct __TrackToolbarType_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0xffffffff),
    __E_Lights = static_cast<int32_t>(0x0),
    __E_Toggle = static_cast<int32_t>(0x1),
    __E_FloatValue = static_cast<int32_t>(0x3),
    __E_IntValue = static_cast<int32_t>(0x4),
    __E_BtsCharacterSelection = static_cast<int32_t>(0x5),
    __E_CarSelection = static_cast<int32_t>(0x6),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TrackToolbarType_Unwrapped() const noexcept {
    return static_cast<__TrackToolbarType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr TrackToolbarType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TrackToolbarType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field BtsCharacterSelection value: static_cast<int32_t>(0x5)
  static ::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType const BtsCharacterSelection;

  /// @brief Field CarSelection value: static_cast<int32_t>(0x6)
  static ::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType const CarSelection;

  /// @brief Field FloatValue value: static_cast<int32_t>(0x3)
  static ::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType const FloatValue;

  /// @brief Field IntValue value: static_cast<int32_t>(0x4)
  static ::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType const IntValue;

  /// @brief Field Lights value: static_cast<int32_t>(0x0)
  static ::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType const Lights;

  /// @brief Field None value: static_cast<int32_t>(0xffffffff)
  static ::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType const None;

  /// @brief Field Toggle value: static_cast<int32_t>(0x1)
  static ::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType const Toggle;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType, 0x4>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType, value__) == 0x0, "Offset mismatch!");

} // namespace BeatSaber::TrackDefinitions::DataModels
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType, "BeatSaber.TrackDefinitions.DataModels", "TrackToolbarType");

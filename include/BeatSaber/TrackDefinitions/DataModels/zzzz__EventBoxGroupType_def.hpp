#pragma once
// IWYU pragma private; include "BeatSaber/TrackDefinitions/DataModels/EventBoxGroupType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EventBoxGroupType)
// Forward declare root types
namespace BeatSaber::TrackDefinitions::DataModels {
struct EventBoxGroupType;
}
// Write type traits
MARK_VAL_T(::BeatSaber::TrackDefinitions::DataModels::EventBoxGroupType);
// Dependencies
namespace BeatSaber::TrackDefinitions::DataModels {
// Is value type: true
// CS Name: BeatSaber.TrackDefinitions.DataModels.EventBoxGroupType
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

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr EventBoxGroupType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr EventBoxGroupType(int32_t value__) noexcept;

  /// @brief Field Color value: I32(0)
  static ::BeatSaber::TrackDefinitions::DataModels::EventBoxGroupType const Color;

  /// @brief Field FloatFx value: I32(11)
  static ::BeatSaber::TrackDefinitions::DataModels::EventBoxGroupType const FloatFx;

  /// @brief Field Rotation value: I32(1)
  static ::BeatSaber::TrackDefinitions::DataModels::EventBoxGroupType const Rotation;

  /// @brief Field Translation value: I32(2)
  static ::BeatSaber::TrackDefinitions::DataModels::EventBoxGroupType const Translation;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22565 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::TrackDefinitions::DataModels::EventBoxGroupType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::TrackDefinitions::DataModels::EventBoxGroupType, 0x4>, "Size mismatch!");

} // namespace BeatSaber::TrackDefinitions::DataModels
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::TrackDefinitions::DataModels::EventBoxGroupType, "BeatSaber.TrackDefinitions.DataModels", "EventBoxGroupType");

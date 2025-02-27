#pragma once
// IWYU pragma private; include "GlobalNamespace/ObstacleExecutionRating.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapObjectExecutionRating_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ObstacleExecutionRating)
namespace GlobalNamespace {
struct ObstacleExecutionRating_Rating;
}
// Forward declare root types
namespace GlobalNamespace {
struct ObstacleExecutionRating_Rating;
}
namespace GlobalNamespace {
class ObstacleExecutionRating;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ObstacleExecutionRating_Rating);
MARK_REF_PTR_T(::GlobalNamespace::ObstacleExecutionRating);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: ObstacleExecutionRating/Rating
struct CORDL_TYPE ObstacleExecutionRating_Rating {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ObstacleExecutionRating_Rating_Unwrapped
  enum struct __ObstacleExecutionRating_Rating_Unwrapped : int32_t {
    __E_OK = static_cast<int32_t>(0x0),
    __E_NotGood = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ObstacleExecutionRating_Rating_Unwrapped() const noexcept {
    return static_cast<__ObstacleExecutionRating_Rating_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ObstacleExecutionRating_Rating();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ObstacleExecutionRating_Rating(int32_t value__) noexcept;

  /// @brief Field NotGood value: I32(1)
  static ::GlobalNamespace::ObstacleExecutionRating_Rating const NotGood;

  /// @brief Field OK value: I32(0)
  static ::GlobalNamespace::ObstacleExecutionRating_Rating const OK;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13126 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ObstacleExecutionRating_Rating, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ObstacleExecutionRating_Rating, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies BeatmapObjectExecutionRating, ObstacleExecutionRating::Rating
namespace GlobalNamespace {
// Is value type: false
// CS Name: ObstacleExecutionRating
class CORDL_TYPE ObstacleExecutionRating : public ::GlobalNamespace::BeatmapObjectExecutionRating {
public:
  // Declarations
  using Rating = ::GlobalNamespace::ObstacleExecutionRating_Rating;

  /// @brief Field <rating>k__BackingField, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__rating_k__BackingField,
                      put = __cordl_internal_set__rating_k__BackingField)) ::GlobalNamespace::ObstacleExecutionRating_Rating _rating_k__BackingField;

  __declspec(property(get = get_rating)) ::GlobalNamespace::ObstacleExecutionRating_Rating rating;

  static inline ::GlobalNamespace::ObstacleExecutionRating* New_ctor(float_t time, ::GlobalNamespace::ObstacleExecutionRating_Rating rating);

  constexpr ::GlobalNamespace::ObstacleExecutionRating_Rating const& __cordl_internal_get__rating_k__BackingField() const;

  constexpr ::GlobalNamespace::ObstacleExecutionRating_Rating& __cordl_internal_get__rating_k__BackingField();

  constexpr void __cordl_internal_set__rating_k__BackingField(::GlobalNamespace::ObstacleExecutionRating_Rating value);

  /// @brief Method .ctor, addr 0x26e8d70, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(float_t time, ::GlobalNamespace::ObstacleExecutionRating_Rating rating);

  /// @brief Method get_rating, addr 0x26e8d68, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ObstacleExecutionRating_Rating get_rating();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ObstacleExecutionRating();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ObstacleExecutionRating", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ObstacleExecutionRating(ObstacleExecutionRating&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ObstacleExecutionRating", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ObstacleExecutionRating(ObstacleExecutionRating const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13127 };

  /// @brief Field <rating>k__BackingField, offset: 0x14, size: 0x4, def value: None
  ::GlobalNamespace::ObstacleExecutionRating_Rating ____rating_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ObstacleExecutionRating, ____rating_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ObstacleExecutionRating, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ObstacleExecutionRating_Rating, "", "ObstacleExecutionRating/Rating");
NEED_NO_BOX(::GlobalNamespace::ObstacleExecutionRating);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ObstacleExecutionRating*, "", "ObstacleExecutionRating");

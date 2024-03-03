#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapObjectExecutionRating_def.hpp"
#include "GlobalNamespace/zzzz__ObstacleExecutionRating_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ObstacleExecutionRating)
namespace GlobalNamespace {
struct __ObstacleExecutionRating__Rating;
}
// Forward declare root types
namespace GlobalNamespace {
struct __ObstacleExecutionRating__Rating;
}
namespace GlobalNamespace {
class ObstacleExecutionRating;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__ObstacleExecutionRating__Rating);
MARK_REF_PTR_T(::GlobalNamespace::ObstacleExecutionRating);
// Type: ::Rating
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::ObstacleExecutionRating::Rating
struct CORDL_TYPE __ObstacleExecutionRating__Rating {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____ObstacleExecutionRating__Rating_Unwrapped
  enum struct ____ObstacleExecutionRating__Rating_Unwrapped : int32_t {
    __E_OK = static_cast<int32_t>(0x0),
    __E_NotGood = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____ObstacleExecutionRating__Rating_Unwrapped() const noexcept {
    return static_cast<____ObstacleExecutionRating__Rating_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ObstacleExecutionRating__Rating();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __ObstacleExecutionRating__Rating(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field NotGood value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__ObstacleExecutionRating__Rating const NotGood;

  /// @brief Field OK value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__ObstacleExecutionRating__Rating const OK;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ObstacleExecutionRating__Rating, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__ObstacleExecutionRating__Rating, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::ObstacleExecutionRating
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ObstacleExecutionRating*
class CORDL_TYPE ObstacleExecutionRating : public ::GlobalNamespace::BeatmapObjectExecutionRating {
public:
  // Declarations
  using Rating = ::GlobalNamespace::__ObstacleExecutionRating__Rating;

  /// @brief Field <rating>k__BackingField, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__rating_k__BackingField,
                      put = __cordl_internal_set__rating_k__BackingField))::GlobalNamespace::__ObstacleExecutionRating__Rating _rating_k__BackingField;

  __declspec(property(get = get_rating))::GlobalNamespace::__ObstacleExecutionRating__Rating rating;

  static inline ::GlobalNamespace::ObstacleExecutionRating* New_ctor(float_t time, ::GlobalNamespace::__ObstacleExecutionRating__Rating rating);

  constexpr ::GlobalNamespace::__ObstacleExecutionRating__Rating const& __cordl_internal_get__rating_k__BackingField() const;

  constexpr ::GlobalNamespace::__ObstacleExecutionRating__Rating& __cordl_internal_get__rating_k__BackingField();

  constexpr void __cordl_internal_set__rating_k__BackingField(::GlobalNamespace::__ObstacleExecutionRating__Rating value);

  /// @brief Method .ctor, addr 0x12e3ea4, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(float_t time, ::GlobalNamespace::__ObstacleExecutionRating__Rating rating);

  /// @brief Method get_rating, addr 0x12e3e9c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__ObstacleExecutionRating__Rating get_rating();

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

  /// @brief Field <rating>k__BackingField, offset: 0x14, size: 0x4, def value: None
  ::GlobalNamespace::__ObstacleExecutionRating__Rating ____rating_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ObstacleExecutionRating, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleExecutionRating, ____rating_k__BackingField) == 0x14, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ObstacleExecutionRating__Rating, "", "ObstacleExecutionRating/Rating");
NEED_NO_BOX(::GlobalNamespace::ObstacleExecutionRating);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ObstacleExecutionRating*, "", "ObstacleExecutionRating");

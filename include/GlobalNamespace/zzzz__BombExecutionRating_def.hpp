#pragma once
// IWYU pragma private; include "GlobalNamespace/BombExecutionRating.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapObjectExecutionRating_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BombExecutionRating)
namespace GlobalNamespace {
struct BombExecutionRating_Rating;
}
// Forward declare root types
namespace GlobalNamespace {
struct BombExecutionRating_Rating;
}
namespace GlobalNamespace {
class BombExecutionRating;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BombExecutionRating_Rating);
MARK_REF_PTR_T(::GlobalNamespace::BombExecutionRating);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: BombExecutionRating/Rating
struct CORDL_TYPE BombExecutionRating_Rating {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __BombExecutionRating_Rating_Unwrapped
  enum struct __BombExecutionRating_Rating_Unwrapped : int32_t {
    __E_OK = static_cast<int32_t>(0x0),
    __E_NotGood = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __BombExecutionRating_Rating_Unwrapped() const noexcept {
    return static_cast<__BombExecutionRating_Rating_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr BombExecutionRating_Rating();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr BombExecutionRating_Rating(int32_t value__) noexcept;

  /// @brief Field NotGood value: I32(1)
  static ::GlobalNamespace::BombExecutionRating_Rating const NotGood;

  /// @brief Field OK value: I32(0)
  static ::GlobalNamespace::BombExecutionRating_Rating const OK;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12802 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BombExecutionRating_Rating, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BombExecutionRating_Rating, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies BeatmapObjectExecutionRating, BombExecutionRating::Rating
namespace GlobalNamespace {
// Is value type: false
// CS Name: BombExecutionRating
class CORDL_TYPE BombExecutionRating : public ::GlobalNamespace::BeatmapObjectExecutionRating {
public:
  // Declarations
  using Rating = ::GlobalNamespace::BombExecutionRating_Rating;

  /// @brief Field <rating>k__BackingField, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__rating_k__BackingField, put = __cordl_internal_set__rating_k__BackingField)) ::GlobalNamespace::BombExecutionRating_Rating _rating_k__BackingField;

  __declspec(property(get = get_rating)) ::GlobalNamespace::BombExecutionRating_Rating rating;

  static inline ::GlobalNamespace::BombExecutionRating* New_ctor(float_t time, ::GlobalNamespace::BombExecutionRating_Rating rating);

  constexpr ::GlobalNamespace::BombExecutionRating_Rating const& __cordl_internal_get__rating_k__BackingField() const;

  constexpr ::GlobalNamespace::BombExecutionRating_Rating& __cordl_internal_get__rating_k__BackingField();

  constexpr void __cordl_internal_set__rating_k__BackingField(::GlobalNamespace::BombExecutionRating_Rating value);

  /// @brief Method .ctor, addr 0x26aeb04, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(float_t time, ::GlobalNamespace::BombExecutionRating_Rating rating);

  /// @brief Method get_rating, addr 0x26aeafc, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BombExecutionRating_Rating get_rating();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BombExecutionRating();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BombExecutionRating", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BombExecutionRating(BombExecutionRating&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BombExecutionRating", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BombExecutionRating(BombExecutionRating const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12803 };

  /// @brief Field <rating>k__BackingField, offset: 0x14, size: 0x4, def value: None
  ::GlobalNamespace::BombExecutionRating_Rating ____rating_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BombExecutionRating, ____rating_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BombExecutionRating, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BombExecutionRating_Rating, "", "BombExecutionRating/Rating");
NEED_NO_BOX(::GlobalNamespace::BombExecutionRating);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BombExecutionRating*, "", "BombExecutionRating");

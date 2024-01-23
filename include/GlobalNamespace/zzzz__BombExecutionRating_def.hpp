#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapObjectExecutionRating_def.hpp"
#include "GlobalNamespace/zzzz__BombExecutionRating_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BombExecutionRating)
namespace GlobalNamespace {
struct __BombExecutionRating__Rating;
}
// Forward declare root types
namespace GlobalNamespace {
struct __BombExecutionRating__Rating;
}
namespace GlobalNamespace {
class BombExecutionRating;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__BombExecutionRating__Rating);
MARK_REF_PTR_T(::GlobalNamespace::BombExecutionRating);
// Type: ::Rating
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4136))
// CS Name: ::BombExecutionRating::Rating
struct CORDL_TYPE __BombExecutionRating__Rating {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____BombExecutionRating__Rating_Unwrapped
  enum struct ____BombExecutionRating__Rating_Unwrapped : int32_t {
    __E_OK = static_cast<int32_t>(0x0),
    __E_NotGood = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____BombExecutionRating__Rating_Unwrapped() const noexcept {
    return static_cast<____BombExecutionRating__Rating_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __BombExecutionRating__Rating(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BombExecutionRating__Rating();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field OK value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__BombExecutionRating__Rating const OK;

  /// @brief Field NotGood value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__BombExecutionRating__Rating const NotGood;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BombExecutionRating__Rating, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BombExecutionRating__Rating, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::BombExecutionRating
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(4135)), TypeDefinitionIndex(TypeDefinitionIndex(4136))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4137))
// CS Name: ::BombExecutionRating*
class CORDL_TYPE BombExecutionRating : public ::GlobalNamespace::BeatmapObjectExecutionRating {
public:
  // Declarations
  using Rating = ::GlobalNamespace::__BombExecutionRating__Rating;

  /// @brief Field <rating>k__BackingField, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__rating_k__BackingField, put = __cordl_internal_set__rating_k__BackingField))::GlobalNamespace::__BombExecutionRating__Rating _rating_k__BackingField;

  __declspec(property(get = get_rating))::GlobalNamespace::__BombExecutionRating__Rating rating;

  constexpr ::GlobalNamespace::__BombExecutionRating__Rating& __cordl_internal_get__rating_k__BackingField();

  constexpr ::GlobalNamespace::__BombExecutionRating__Rating const& __cordl_internal_get__rating_k__BackingField() const;

  constexpr void __cordl_internal_set__rating_k__BackingField(::GlobalNamespace::__BombExecutionRating__Rating value);

  /// @brief Method get_rating, addr 0x223bfbc, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__BombExecutionRating__Rating get_rating();

  static inline ::GlobalNamespace::BombExecutionRating* New_ctor(float_t time, ::GlobalNamespace::__BombExecutionRating__Rating rating);

  /// @brief Method .ctor, addr 0x223bfc4, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(float_t time, ::GlobalNamespace::__BombExecutionRating__Rating rating);

  // Ctor Parameters [CppParam { name: "", ty: "BombExecutionRating", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BombExecutionRating(BombExecutionRating&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BombExecutionRating", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BombExecutionRating(BombExecutionRating const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BombExecutionRating();

public:
  /// @brief Field <rating>k__BackingField, offset: 0x14, size: 0x4, def value: None
  ::GlobalNamespace::__BombExecutionRating__Rating ____rating_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BombExecutionRating, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BombExecutionRating, ____rating_k__BackingField) == 0x14, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BombExecutionRating__Rating, "", "BombExecutionRating/Rating");
NEED_NO_BOX(::GlobalNamespace::BombExecutionRating);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BombExecutionRating*, "", "BombExecutionRating");

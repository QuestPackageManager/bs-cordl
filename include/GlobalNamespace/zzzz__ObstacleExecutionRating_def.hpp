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
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4525))
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __ObstacleExecutionRating__Rating(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ObstacleExecutionRating__Rating();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field OK value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__ObstacleExecutionRating__Rating const OK;

  /// @brief Field NotGood value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__ObstacleExecutionRating__Rating const NotGood;

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4525)), TypeDefinitionIndex(TypeDefinitionIndex(4135))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4526))
// CS Name: ::ObstacleExecutionRating*
class CORDL_TYPE ObstacleExecutionRating : public ::GlobalNamespace::BeatmapObjectExecutionRating {
public:
  // Declarations
  using Rating = ::GlobalNamespace::__ObstacleExecutionRating__Rating;

  /// @brief Field <rating>k__BackingField, offset 0x14, size 0x4
  __declspec(property(get = __get__rating_k__BackingField, put = __set__rating_k__BackingField))::GlobalNamespace::__ObstacleExecutionRating__Rating _rating_k__BackingField;

  __declspec(property(get = get_rating))::GlobalNamespace::__ObstacleExecutionRating__Rating rating;

  constexpr ::GlobalNamespace::__ObstacleExecutionRating__Rating& __get__rating_k__BackingField();

  constexpr ::GlobalNamespace::__ObstacleExecutionRating__Rating const& __get__rating_k__BackingField() const;

  constexpr void __set__rating_k__BackingField(::GlobalNamespace::__ObstacleExecutionRating__Rating value);

  /// @brief Method get_rating, addr 0x2364698, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__ObstacleExecutionRating__Rating get_rating();

  static inline ::GlobalNamespace::ObstacleExecutionRating* New_ctor(float_t time, ::GlobalNamespace::__ObstacleExecutionRating__Rating rating);

  /// @brief Method .ctor, addr 0x23646a0, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(float_t time, ::GlobalNamespace::__ObstacleExecutionRating__Rating rating);

  // Ctor Parameters [CppParam { name: "", ty: "ObstacleExecutionRating", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ObstacleExecutionRating(ObstacleExecutionRating&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ObstacleExecutionRating", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ObstacleExecutionRating(ObstacleExecutionRating const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ObstacleExecutionRating();

public:
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

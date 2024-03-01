#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapObjectExecutionRating_def.hpp"
#include "GlobalNamespace/zzzz__NoteData_def.hpp"
#include "GlobalNamespace/zzzz__NoteExecutionRating_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NoteExecutionRating)
namespace GlobalNamespace {
struct __NoteData__ScoringType;
}
namespace GlobalNamespace {
struct __NoteExecutionRating__Rating;
}
// Forward declare root types
namespace GlobalNamespace {
struct __NoteExecutionRating__Rating;
}
namespace GlobalNamespace {
class NoteExecutionRating;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__NoteExecutionRating__Rating);
MARK_REF_PTR_T(::GlobalNamespace::NoteExecutionRating);
// Type: ::Rating
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::NoteExecutionRating::Rating
struct CORDL_TYPE __NoteExecutionRating__Rating {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____NoteExecutionRating__Rating_Unwrapped
  enum struct ____NoteExecutionRating__Rating_Unwrapped : int32_t {
    __E_GoodCut = static_cast<int32_t>(0x0),
    __E_Miss = static_cast<int32_t>(0x1),
    __E_BadCut = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____NoteExecutionRating__Rating_Unwrapped() const noexcept {
    return static_cast<____NoteExecutionRating__Rating_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr operator int32_t() const noexcept {
    return static_cast<____NoteExecutionRating__Rating_Unwrapped>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __NoteExecutionRating__Rating();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __NoteExecutionRating__Rating(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field BadCut value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__NoteExecutionRating__Rating const BadCut;

  /// @brief Field GoodCut value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__NoteExecutionRating__Rating const GoodCut;

  /// @brief Field Miss value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__NoteExecutionRating__Rating const Miss;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__NoteExecutionRating__Rating, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__NoteExecutionRating__Rating, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::NoteExecutionRating
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::NoteExecutionRating*
class CORDL_TYPE NoteExecutionRating : public ::GlobalNamespace::BeatmapObjectExecutionRating {
public:
  // Declarations
  using Rating = ::GlobalNamespace::__NoteExecutionRating__Rating;

  /// @brief Field afterCutScore, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_afterCutScore, put = __cordl_internal_set_afterCutScore)) int32_t afterCutScore;

  /// @brief Field beforeCutScore, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_beforeCutScore, put = __cordl_internal_set_beforeCutScore)) int32_t beforeCutScore;

  /// @brief Field centerDistanceCutScore, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_centerDistanceCutScore, put = __cordl_internal_set_centerDistanceCutScore)) int32_t centerDistanceCutScore;

  /// @brief Field cutScore, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_cutScore, put = __cordl_internal_set_cutScore)) int32_t cutScore;

  /// @brief Field rating, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_rating, put = __cordl_internal_set_rating))::GlobalNamespace::__NoteExecutionRating__Rating rating;

  /// @brief Field scoringType, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_scoringType, put = __cordl_internal_set_scoringType))::GlobalNamespace::__NoteData__ScoringType scoringType;

  static inline ::GlobalNamespace::NoteExecutionRating* New_ctor(float_t time, ::GlobalNamespace::__NoteData__ScoringType scoringType, ::GlobalNamespace::__NoteExecutionRating__Rating rating,
                                                                 int32_t cutScore, int32_t beforeCutScore, int32_t centerDistanceCutScore, int32_t afterCutScore);

  constexpr int32_t const& __cordl_internal_get_afterCutScore() const;

  constexpr int32_t& __cordl_internal_get_afterCutScore();

  constexpr int32_t const& __cordl_internal_get_beforeCutScore() const;

  constexpr int32_t& __cordl_internal_get_beforeCutScore();

  constexpr int32_t const& __cordl_internal_get_centerDistanceCutScore() const;

  constexpr int32_t& __cordl_internal_get_centerDistanceCutScore();

  constexpr int32_t const& __cordl_internal_get_cutScore() const;

  constexpr int32_t& __cordl_internal_get_cutScore();

  constexpr ::GlobalNamespace::__NoteExecutionRating__Rating const& __cordl_internal_get_rating() const;

  constexpr ::GlobalNamespace::__NoteExecutionRating__Rating& __cordl_internal_get_rating();

  constexpr ::GlobalNamespace::__NoteData__ScoringType const& __cordl_internal_get_scoringType() const;

  constexpr ::GlobalNamespace::__NoteData__ScoringType& __cordl_internal_get_scoringType();

  constexpr void __cordl_internal_set_afterCutScore(int32_t value);

  constexpr void __cordl_internal_set_beforeCutScore(int32_t value);

  constexpr void __cordl_internal_set_centerDistanceCutScore(int32_t value);

  constexpr void __cordl_internal_set_cutScore(int32_t value);

  constexpr void __cordl_internal_set_rating(::GlobalNamespace::__NoteExecutionRating__Rating value);

  constexpr void __cordl_internal_set_scoringType(::GlobalNamespace::__NoteData__ScoringType value);

  /// @brief Method .ctor, addr 0x12e3e48, size 0x54, virtual false, abstract: false, final false
  inline void _ctor(float_t time, ::GlobalNamespace::__NoteData__ScoringType scoringType, ::GlobalNamespace::__NoteExecutionRating__Rating rating, int32_t cutScore, int32_t beforeCutScore,
                    int32_t centerDistanceCutScore, int32_t afterCutScore);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoteExecutionRating();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NoteExecutionRating", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoteExecutionRating(NoteExecutionRating&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoteExecutionRating", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoteExecutionRating(NoteExecutionRating const&) = delete;

  /// @brief Field rating, offset: 0x14, size: 0x4, def value: None
  ::GlobalNamespace::__NoteExecutionRating__Rating ___rating;

  /// @brief Field cutScore, offset: 0x18, size: 0x4, def value: None
  int32_t ___cutScore;

  /// @brief Field beforeCutScore, offset: 0x1c, size: 0x4, def value: None
  int32_t ___beforeCutScore;

  /// @brief Field centerDistanceCutScore, offset: 0x20, size: 0x4, def value: None
  int32_t ___centerDistanceCutScore;

  /// @brief Field afterCutScore, offset: 0x24, size: 0x4, def value: None
  int32_t ___afterCutScore;

  /// @brief Field scoringType, offset: 0x28, size: 0x4, def value: None
  ::GlobalNamespace::__NoteData__ScoringType ___scoringType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NoteExecutionRating, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteExecutionRating, ___rating) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteExecutionRating, ___cutScore) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteExecutionRating, ___beforeCutScore) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteExecutionRating, ___centerDistanceCutScore) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteExecutionRating, ___afterCutScore) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteExecutionRating, ___scoringType) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__NoteExecutionRating__Rating, "", "NoteExecutionRating/Rating");
NEED_NO_BOX(::GlobalNamespace::NoteExecutionRating);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoteExecutionRating*, "", "NoteExecutionRating");

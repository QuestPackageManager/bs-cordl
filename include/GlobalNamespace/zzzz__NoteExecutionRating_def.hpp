#pragma once
// IWYU pragma private; include "GlobalNamespace/NoteExecutionRating.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapObjectExecutionRating_def.hpp"
#include "GlobalNamespace/zzzz__NoteData_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NoteExecutionRating)
namespace GlobalNamespace {
struct NoteData_ScoringType;
}
namespace GlobalNamespace {
struct NoteExecutionRating_Rating;
}
// Forward declare root types
namespace GlobalNamespace {
struct NoteExecutionRating_Rating;
}
namespace GlobalNamespace {
class NoteExecutionRating;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::NoteExecutionRating_Rating);
MARK_REF_PTR_T(::GlobalNamespace::NoteExecutionRating);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: NoteExecutionRating/Rating
struct CORDL_TYPE NoteExecutionRating_Rating {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __NoteExecutionRating_Rating_Unwrapped
  enum struct __NoteExecutionRating_Rating_Unwrapped : int32_t {
    __E_GoodCut = static_cast<int32_t>(0x0),
    __E_Miss = static_cast<int32_t>(0x1),
    __E_BadCut = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __NoteExecutionRating_Rating_Unwrapped() const noexcept {
    return static_cast<__NoteExecutionRating_Rating_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr NoteExecutionRating_Rating();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr NoteExecutionRating_Rating(int32_t value__) noexcept;

  /// @brief Field BadCut value: I32(2)
  static ::GlobalNamespace::NoteExecutionRating_Rating const BadCut;

  /// @brief Field GoodCut value: I32(0)
  static ::GlobalNamespace::NoteExecutionRating_Rating const GoodCut;

  /// @brief Field Miss value: I32(1)
  static ::GlobalNamespace::NoteExecutionRating_Rating const Miss;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13123 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NoteExecutionRating_Rating, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NoteExecutionRating_Rating, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies BeatmapObjectExecutionRating, NoteData::ScoringType, NoteExecutionRating::Rating
namespace GlobalNamespace {
// Is value type: false
// CS Name: NoteExecutionRating
class CORDL_TYPE NoteExecutionRating : public ::GlobalNamespace::BeatmapObjectExecutionRating {
public:
  // Declarations
  using Rating = ::GlobalNamespace::NoteExecutionRating_Rating;

  /// @brief Field afterCutScore, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_afterCutScore, put = __cordl_internal_set_afterCutScore)) int32_t afterCutScore;

  /// @brief Field beforeCutScore, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_beforeCutScore, put = __cordl_internal_set_beforeCutScore)) int32_t beforeCutScore;

  /// @brief Field centerDistanceCutScore, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_centerDistanceCutScore, put = __cordl_internal_set_centerDistanceCutScore)) int32_t centerDistanceCutScore;

  /// @brief Field cutScore, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_cutScore, put = __cordl_internal_set_cutScore)) int32_t cutScore;

  /// @brief Field rating, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_rating, put = __cordl_internal_set_rating)) ::GlobalNamespace::NoteExecutionRating_Rating rating;

  /// @brief Field scoringType, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_scoringType, put = __cordl_internal_set_scoringType)) ::GlobalNamespace::NoteData_ScoringType scoringType;

  static inline ::GlobalNamespace::NoteExecutionRating* New_ctor(float_t time, ::GlobalNamespace::NoteData_ScoringType scoringType, ::GlobalNamespace::NoteExecutionRating_Rating rating,
                                                                 int32_t cutScore, int32_t beforeCutScore, int32_t centerDistanceCutScore, int32_t afterCutScore);

  constexpr int32_t const& __cordl_internal_get_afterCutScore() const;

  constexpr int32_t& __cordl_internal_get_afterCutScore();

  constexpr int32_t const& __cordl_internal_get_beforeCutScore() const;

  constexpr int32_t& __cordl_internal_get_beforeCutScore();

  constexpr int32_t const& __cordl_internal_get_centerDistanceCutScore() const;

  constexpr int32_t& __cordl_internal_get_centerDistanceCutScore();

  constexpr int32_t const& __cordl_internal_get_cutScore() const;

  constexpr int32_t& __cordl_internal_get_cutScore();

  constexpr ::GlobalNamespace::NoteExecutionRating_Rating const& __cordl_internal_get_rating() const;

  constexpr ::GlobalNamespace::NoteExecutionRating_Rating& __cordl_internal_get_rating();

  constexpr ::GlobalNamespace::NoteData_ScoringType const& __cordl_internal_get_scoringType() const;

  constexpr ::GlobalNamespace::NoteData_ScoringType& __cordl_internal_get_scoringType();

  constexpr void __cordl_internal_set_afterCutScore(int32_t value);

  constexpr void __cordl_internal_set_beforeCutScore(int32_t value);

  constexpr void __cordl_internal_set_centerDistanceCutScore(int32_t value);

  constexpr void __cordl_internal_set_cutScore(int32_t value);

  constexpr void __cordl_internal_set_rating(::GlobalNamespace::NoteExecutionRating_Rating value);

  constexpr void __cordl_internal_set_scoringType(::GlobalNamespace::NoteData_ScoringType value);

  /// @brief Method .ctor, addr 0x26e4c1c, size 0x54, virtual false, abstract: false, final false
  inline void _ctor(float_t time, ::GlobalNamespace::NoteData_ScoringType scoringType, ::GlobalNamespace::NoteExecutionRating_Rating rating, int32_t cutScore, int32_t beforeCutScore,
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13124 };

  /// @brief Field rating, offset: 0x14, size: 0x4, def value: None
  ::GlobalNamespace::NoteExecutionRating_Rating ___rating;

  /// @brief Field cutScore, offset: 0x18, size: 0x4, def value: None
  int32_t ___cutScore;

  /// @brief Field beforeCutScore, offset: 0x1c, size: 0x4, def value: None
  int32_t ___beforeCutScore;

  /// @brief Field centerDistanceCutScore, offset: 0x20, size: 0x4, def value: None
  int32_t ___centerDistanceCutScore;

  /// @brief Field afterCutScore, offset: 0x24, size: 0x4, def value: None
  int32_t ___afterCutScore;

  /// @brief Field scoringType, offset: 0x28, size: 0x4, def value: None
  ::GlobalNamespace::NoteData_ScoringType ___scoringType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NoteExecutionRating, ___rating) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteExecutionRating, ___cutScore) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteExecutionRating, ___beforeCutScore) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteExecutionRating, ___centerDistanceCutScore) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteExecutionRating, ___afterCutScore) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteExecutionRating, ___scoringType) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NoteExecutionRating, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoteExecutionRating_Rating, "", "NoteExecutionRating/Rating");
NEED_NO_BOX(::GlobalNamespace::NoteExecutionRating);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoteExecutionRating*, "", "NoteExecutionRating");

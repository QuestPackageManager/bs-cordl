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
struct __NoteExecutionRating__Rating;
}
namespace GlobalNamespace {
struct __NoteData__ScoringType;
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
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4612))
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __NoteExecutionRating__Rating(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __NoteExecutionRating__Rating();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field GoodCut value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__NoteExecutionRating__Rating const GoodCut;

  /// @brief Field Miss value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__NoteExecutionRating__Rating const Miss;

  /// @brief Field BadCut value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__NoteExecutionRating__Rating const BadCut;

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14971)), TypeDefinitionIndex(TypeDefinitionIndex(4612)), TypeDefinitionIndex(TypeDefinitionIndex(4169))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4613))
// CS Name: ::NoteExecutionRating*
class CORDL_TYPE NoteExecutionRating : public ::GlobalNamespace::BeatmapObjectExecutionRating {
public:
  // Declarations
  using Rating = ::GlobalNamespace::__NoteExecutionRating__Rating;

  /// @brief Field rating, offset 0x14, size 0x4
  __declspec(property(get = __get_rating, put = __set_rating))::GlobalNamespace::__NoteExecutionRating__Rating rating;

  /// @brief Field cutScore, offset 0x18, size 0x4
  __declspec(property(get = __get_cutScore, put = __set_cutScore)) int32_t cutScore;

  /// @brief Field beforeCutScore, offset 0x1c, size 0x4
  __declspec(property(get = __get_beforeCutScore, put = __set_beforeCutScore)) int32_t beforeCutScore;

  /// @brief Field centerDistanceCutScore, offset 0x20, size 0x4
  __declspec(property(get = __get_centerDistanceCutScore, put = __set_centerDistanceCutScore)) int32_t centerDistanceCutScore;

  /// @brief Field afterCutScore, offset 0x24, size 0x4
  __declspec(property(get = __get_afterCutScore, put = __set_afterCutScore)) int32_t afterCutScore;

  /// @brief Field scoringType, offset 0x28, size 0x4
  __declspec(property(get = __get_scoringType, put = __set_scoringType))::GlobalNamespace::__NoteData__ScoringType scoringType;

  constexpr ::GlobalNamespace::__NoteExecutionRating__Rating& __get_rating();

  constexpr ::GlobalNamespace::__NoteExecutionRating__Rating const& __get_rating() const;

  constexpr void __set_rating(::GlobalNamespace::__NoteExecutionRating__Rating value);

  constexpr int32_t& __get_cutScore();

  constexpr int32_t const& __get_cutScore() const;

  constexpr void __set_cutScore(int32_t value);

  constexpr int32_t& __get_beforeCutScore();

  constexpr int32_t const& __get_beforeCutScore() const;

  constexpr void __set_beforeCutScore(int32_t value);

  constexpr int32_t& __get_centerDistanceCutScore();

  constexpr int32_t const& __get_centerDistanceCutScore() const;

  constexpr void __set_centerDistanceCutScore(int32_t value);

  constexpr int32_t& __get_afterCutScore();

  constexpr int32_t const& __get_afterCutScore() const;

  constexpr void __set_afterCutScore(int32_t value);

  constexpr ::GlobalNamespace::__NoteData__ScoringType& __get_scoringType();

  constexpr ::GlobalNamespace::__NoteData__ScoringType const& __get_scoringType() const;

  constexpr void __set_scoringType(::GlobalNamespace::__NoteData__ScoringType value);

  static inline ::GlobalNamespace::NoteExecutionRating* New_ctor(float_t time, ::GlobalNamespace::__NoteData__ScoringType scoringType, ::GlobalNamespace::__NoteExecutionRating__Rating rating,
                                                                 int32_t cutScore, int32_t beforeCutScore, int32_t centerDistanceCutScore, int32_t afterCutScore);

  /// @brief Method .ctor addr 0x2229b34 size 0x54 virtual false final false
  inline void _ctor(float_t time, ::GlobalNamespace::__NoteData__ScoringType scoringType, ::GlobalNamespace::__NoteExecutionRating__Rating rating, int32_t cutScore, int32_t beforeCutScore,
                    int32_t centerDistanceCutScore, int32_t afterCutScore);

  // Ctor Parameters [CppParam { name: "", ty: "NoteExecutionRating", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoteExecutionRating(NoteExecutionRating&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoteExecutionRating", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoteExecutionRating(NoteExecutionRating const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoteExecutionRating();

public:
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

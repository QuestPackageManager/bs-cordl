#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapObjectExecutionRating.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BeatmapObjectExecutionRating)
// Forward declare root types
namespace GlobalNamespace {
class BeatmapObjectExecutionRating;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapObjectExecutionRating);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapObjectExecutionRating
class CORDL_TYPE BeatmapObjectExecutionRating : public ::System::Object {
public:
  // Declarations
  /// @brief Field <time>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__time_k__BackingField, put = __cordl_internal_set__time_k__BackingField)) float_t _time_k__BackingField;

  __declspec(property(get = get_time)) float_t time;

  static inline ::GlobalNamespace::BeatmapObjectExecutionRating* New_ctor(float_t time);

  constexpr float_t const& __cordl_internal_get__time_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__time_k__BackingField();

  constexpr void __cordl_internal_set__time_k__BackingField(float_t value);

  /// @brief Method .ctor, addr 0x26ac160, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(float_t time);

  /// @brief Method get_time, addr 0x26ac158, size 0x8, virtual false, abstract: false, final false
  inline float_t get_time();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapObjectExecutionRating();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapObjectExecutionRating", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapObjectExecutionRating(BeatmapObjectExecutionRating&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapObjectExecutionRating", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapObjectExecutionRating(BeatmapObjectExecutionRating const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12796 };

  /// @brief Field <time>k__BackingField, offset: 0x10, size: 0x4, def value: None
  float_t ____time_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapObjectExecutionRating, ____time_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapObjectExecutionRating, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapObjectExecutionRating);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapObjectExecutionRating*, "", "BeatmapObjectExecutionRating");

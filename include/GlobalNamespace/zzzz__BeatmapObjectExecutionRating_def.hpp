#pragma once
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
// Type: ::BeatmapObjectExecutionRating
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4169))
// CS Name: ::BeatmapObjectExecutionRating*
class CORDL_TYPE BeatmapObjectExecutionRating : public ::System::Object {
public:
  // Declarations
  /// @brief Field <time>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __get__time_k__BackingField, put = __set__time_k__BackingField)) float_t _time_k__BackingField;

  __declspec(property(get = get_time)) float_t time;

  constexpr float_t& __get__time_k__BackingField();

  constexpr float_t const& __get__time_k__BackingField() const;

  constexpr void __set__time_k__BackingField(float_t value);

  /// @brief Method get_time addr 0x21cdb2c size 0x8 virtual false final false
  inline float_t get_time();

  static inline ::GlobalNamespace::BeatmapObjectExecutionRating* New_ctor(float_t time);

  /// @brief Method .ctor addr 0x21cdb34 size 0x28 virtual false final false
  inline void _ctor(float_t time);

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapObjectExecutionRating", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapObjectExecutionRating(BeatmapObjectExecutionRating&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapObjectExecutionRating", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapObjectExecutionRating(BeatmapObjectExecutionRating const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapObjectExecutionRating();

public:
  /// @brief Field <time>k__BackingField, offset: 0x10, size: 0x4, def value: None
  float_t ____time_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapObjectExecutionRating, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectExecutionRating, ____time_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapObjectExecutionRating);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapObjectExecutionRating*, "", "BeatmapObjectExecutionRating");

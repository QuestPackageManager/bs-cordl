#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__RangeValuesTextSlider_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PercentSlider)
// Forward declare root types
namespace HMUI {
class PercentSlider;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::PercentSlider);
// Type: HMUI::PercentSlider
// SizeInfo { instance_size: 360, native_size: -1, calculated_instance_size: 360, calculated_native_size: 360, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13677))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13676))
// CS Name: ::HMUI::PercentSlider*
class CORDL_TYPE PercentSlider : public ::HMUI::RangeValuesTextSlider {
public:
  // Declarations
  /// @brief Method TextForValue addr 0x1fcc204 size 0x8c virtual true final false
  inline ::StringW TextForValue(float_t value);

  static inline ::HMUI::PercentSlider* New_ctor();

  /// @brief Method .ctor addr 0x1fcc290 size 0xc virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "PercentSlider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PercentSlider(PercentSlider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PercentSlider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PercentSlider(PercentSlider const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PercentSlider();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::PercentSlider, 0x168>, "Size mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::PercentSlider);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::PercentSlider*, "HMUI", "PercentSlider");

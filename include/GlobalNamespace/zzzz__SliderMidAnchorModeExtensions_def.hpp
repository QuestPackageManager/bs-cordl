#pragma once
// IWYU pragma private; include "GlobalNamespace/SliderMidAnchorModeExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SliderMidAnchorModeExtensions)
namespace GlobalNamespace {
struct SliderMidAnchorMode;
}
// Forward declare root types
namespace GlobalNamespace {
class SliderMidAnchorModeExtensions;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SliderMidAnchorModeExtensions);
// Type: ::SliderMidAnchorModeExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SliderMidAnchorModeExtensions*
class CORDL_TYPE SliderMidAnchorModeExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method OppositeDirection, addr 0x10417d0, size 0x1c, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::SliderMidAnchorMode OppositeDirection(::GlobalNamespace::SliderMidAnchorMode sliderMidAnchorMode);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SliderMidAnchorModeExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SliderMidAnchorModeExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SliderMidAnchorModeExtensions(SliderMidAnchorModeExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SliderMidAnchorModeExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SliderMidAnchorModeExtensions(SliderMidAnchorModeExtensions const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SliderMidAnchorModeExtensions, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SliderMidAnchorModeExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SliderMidAnchorModeExtensions*, "", "SliderMidAnchorModeExtensions");
